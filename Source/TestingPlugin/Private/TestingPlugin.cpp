#include "TestingPlugin.h"
#include "AssetData.h"
#include "Engine/StaticMesh.h"
#include "RoadSplineActor.h"
#include "RepeatedMeshActor.h"
#include "RandomMeshActor.h"

#if WITH_EDITOR
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Misc/MessageDialog.h"
#include "Editor/UnrealEd/Public/LevelEditorViewport.h"
#include "Engine/Selection.h"
#include "SPathModeSelector.h"
#include "SMeshPickerWindow.h"
#include "ToolMenus.h"
#include "ToolMenuEntry.h"
#include "ScopedTransaction.h"
#include "Widgets/SWindow.h"
#include "Framework/Application/SlateApplication.h"
#include "EditorStyleSet.h"
#endif

#define LOCTEXT_NAMESPACE "FTestingPluginModule"

#if WITH_EDITOR

void FTestingPluginModule::StartupModule()
{
    UToolMenus::RegisterStartupCallback(
        FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FTestingPluginModule::RegisterMenus));
}

void FTestingPluginModule::ShutdownModule()
{
    UToolMenus::UnRegisterStartupCallback(this);
    UToolMenus::UnregisterOwner(this);
}

void FTestingPluginModule::RegisterMenus()
{
    FToolMenuOwnerScoped OwnerScoped(this);

    UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar");

    FToolMenuSection& Section = ToolbarMenu->
        AddSection("SplinePluginSection", TAttribute<FText>(), FToolMenuInsert("Settings", EToolMenuInsertType::After));

    Section.AddEntry(FToolMenuEntry::InitToolBarButton(
        "SplinePluginButton",
        FUIAction(FExecuteAction::CreateRaw(this, &FTestingPluginModule::PluginButtonClicked)),
        LOCTEXT("SplinePlugin_Label", "Mesh To Spline Plugin"),
        LOCTEXT("SplinePlugin_Tooltip", "Click to start the spline creation plugin action."),
        FSlateIcon(FEditorStyle::GetStyleSetName(), "Icons.Toolbar.Play")
    ));
}

void FTestingPluginModule::PluginButtonClicked()
{
    PickerWindow = SNew(SWindow)
        .Title(FText::FromString("Select Meshes for Spline"))
        .ClientSize(FVector2D(800, 600))
        .SupportsMinimize(false)
        .SupportsMaximize(false);

    MeshPickerWidget = SNew(SMeshPickerWindow)
        .OnConfirmed(FSimpleDelegate::CreateRaw(this, &FTestingPluginModule::OnMeshesConfirmed))
        .OnCancelled(FSimpleDelegate::CreateRaw(this, &FTestingPluginModule::OnMeshesCancelled));

    PickerWindow->SetContent(MeshPickerWidget.ToSharedRef());

    FSlateApplication::Get().AddWindow(PickerWindow.ToSharedRef());
}

void FTestingPluginModule::OnMeshesConfirmed()
{
    CachedSelectedMeshes = MeshPickerWidget->GetSelectedMeshes();
    ModeWindow = SNew(SWindow)
        .Title(FText::FromString("Choose Path Mode"))
        .ClientSize(FVector2D(400, 140))
        .SupportsMinimize(false)
        .SupportsMaximize(false)
        [
            SNew(SPathModeSelector)
                .Meshes(CachedSelectedMeshes)
                .OnSingleMode(FSimpleDelegate::CreateRaw(this, &FTestingPluginModule::HandleSingleMode))
                .OnMultiMode(FSimpleDelegate::CreateRaw(this, &FTestingPluginModule::HandleMultiMode))
                .OnContinuousMode(FSimpleDelegate::CreateRaw(this, &FTestingPluginModule::HandleContinuousMode))
        ];

    FSlateApplication::Get().AddWindow(ModeWindow.ToSharedRef());
}

void FTestingPluginModule::OnMeshesCancelled()
{
    UE_LOG(LogTemp, Warning, TEXT("Mesh selection cancelled."));

    if (PickerWindow.IsValid())
    {
        PickerWindow->RequestDestroyWindow();
        PickerWindow.Reset();
        MeshPickerWidget.Reset();
    }
}

void FTestingPluginModule::OnMeshSelected(const FAssetData& SelectedAsset)
{
    if (UStaticMesh* Mesh = Cast<UStaticMesh>(SelectedAsset.GetAsset()))
    {
        UE_LOG(LogTemp, Warning, TEXT("Selected Mesh: %s"), *Mesh->GetName());
    }

    if (PickerWindow.IsValid())
    {
        PickerWindow->RequestDestroyWindow();
        PickerWindow.Reset();
    }
}

void FTestingPluginModule::HandleSingleMode()
{
    if (CachedSelectedMeshes.Num() != 1 || !CachedSelectedMeshes[0])
    {
        UE_LOG(LogTemp, Warning, TEXT("Single mesh mode requires exactly one mesh."));
        return;
    }

    UStaticMesh* SelectedMesh = CachedSelectedMeshes[0];
    if (!SelectedMesh) return;

    UWorld* World = GEditor->GetEditorWorldContext().World();
    if (!World) return;

    FTransform SpawnTransform = FTransform::Identity;
    bool bFoundSpawn = false;

    // Try to use selected actor's transform
    USelection* Sel = GEditor->GetSelectedActors();
    if (Sel && Sel->Num() > 0)
    {
        if (AActor* Picked = Cast<AActor>(Sel->GetSelectedObject(0)))
        {
            SpawnTransform = Picked->GetActorTransform();
            bFoundSpawn = true;
        }
    }

    // Fallback: use editor camera location
    if (!bFoundSpawn)
    {
        for (FLevelEditorViewportClient* ViewportClient : GEditor->GetLevelViewportClients())
        {
            if (ViewportClient && ViewportClient->IsPerspective())
            {
                FVector CameraLocation = ViewportClient->GetViewLocation();
                FRotator CameraRotation = ViewportClient->GetViewRotation();
                FVector SpawnLocation = CameraLocation + CameraRotation.Vector() * 500.0f;
                SpawnTransform.SetLocation(SpawnLocation);
                bFoundSpawn = true;
                break;
            }
        }
    }

    // Ground alignment raycast
    FVector Start = SpawnTransform.GetLocation();
    FVector End = Start - FVector(0, 0, 10000.0f);
    FHitResult Hit;
    FCollisionQueryParams Params;
    Params.bTraceComplex = true;

    if (World->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, Params))
    {
        FVector Aligned = Hit.ImpactPoint;

        // Offset by half the mesh height to place base at ground level
        if (SelectedMesh)
        {
            const FBoxSphereBounds Bounds = SelectedMesh->GetBounds();
            Aligned.Z += Bounds.BoxExtent.Z;
        }

        SpawnTransform.SetLocation(Aligned);
    }

    const FScopedTransaction Transaction(LOCTEXT("AddRepeatedMeshSpline", "Add Repeated Mesh Spline"));

    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    SpawnParams.bNoFail = true;

    ARepeatedMeshActor* RepeatedActor = World->SpawnActor<ARepeatedMeshActor>(
        ARepeatedMeshActor::StaticClass(),
        SpawnTransform,
        SpawnParams
    );

    if (!RepeatedActor) return;

    RepeatedActor->SetFlags(RF_Transactional);
    RepeatedActor->Modify();
    RepeatedActor->SetMesh(SelectedMesh);

    TArray<FVector> Points = {
        FVector(0, 0, 0),
        FVector(400, 0, 0),
        FVector(800, 200, 0),
        FVector(1200, 0, 0)
    };

    RepeatedActor->SetSplinePath(Points);
    RepeatedActor->GenerateRepeatedMeshes();

    if (PickerWindow.IsValid())
    {
        PickerWindow->RequestDestroyWindow();
        PickerWindow.Reset();
        MeshPickerWidget.Reset();
    }

    if (ModeWindow.IsValid())
    {
        ModeWindow->RequestDestroyWindow();
        ModeWindow.Reset();
    }
}


void FTestingPluginModule::HandleMultiMode()
{
    if (CachedSelectedMeshes.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("Multi-mesh mode requires at least one mesh."));
        return;
    }

    UWorld* World = GEditor->GetEditorWorldContext().World();
    if (!World) return;

    FTransform SpawnTransform = FTransform::Identity;
    FVector BaseLocation = FVector::ZeroVector;
    bool bHasSpawnOrigin = false;

    // Try to get transform from selected actor
    if (USelection* Sel = GEditor->GetSelectedActors())
    {
        if (Sel->Num() > 0)
        {
            if (AActor* Picked = Cast<AActor>(Sel->GetSelectedObject(0)))
            {
                SpawnTransform = Picked->GetActorTransform();
                bHasSpawnOrigin = true;
            }
        }
    }

    // If no actor selected, use the editor camera position
    if (!bHasSpawnOrigin)
    {
        for (FLevelEditorViewportClient* ViewportClient : GEditor->GetLevelViewportClients())
        {
            if (ViewportClient && ViewportClient->IsPerspective() && !ViewportClient->IsOrtho())
            {
                BaseLocation = ViewportClient->GetViewLocation();
                bHasSpawnOrigin = true;
                break;
            }
        }

        if (bHasSpawnOrigin)
        {
            SpawnTransform.SetLocation(BaseLocation);
        }
    }

    // Raycast downward to align with ground
    FVector Start = SpawnTransform.GetLocation();
    FVector End = Start - FVector(0, 0, 10000.0f);

    FHitResult Hit;
    FCollisionQueryParams Params;
    Params.bTraceComplex = true;

    if (World->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, Params))
    {
        FVector Aligned = Hit.ImpactPoint;

        // Adjust based on tallest mesh height
        float MaxHalfHeight = 0.f;
        for (UStaticMesh* Mesh : CachedSelectedMeshes)
        {
            if (!Mesh) continue;
            MaxHalfHeight = FMath::Max(MaxHalfHeight, Mesh->GetBounds().BoxExtent.Z);
        }

        Aligned.Z += MaxHalfHeight;
        SpawnTransform.SetLocation(Aligned);
    }

    const FScopedTransaction Transaction(LOCTEXT("AddRandomMeshSpline", "Add Random Mesh Spline"));

    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    SpawnParams.bNoFail = true;

    ARandomMeshActor* RandomActor = World->SpawnActor<ARandomMeshActor>(
        ARandomMeshActor::StaticClass(),
        SpawnTransform,
        SpawnParams
    );

    if (!RandomActor) return;

    RandomActor->SetFlags(RF_Transactional);
    RandomActor->Modify();

    // Spline points (in local space)
    TArray<FVector> LocalPoints = {
        FVector(0, 0, 0),
        FVector(400, 0, 0),
        FVector(800, 200, 0),
        FVector(1200, 0, 0)
    };

    TArray<FVector> WorldPoints;
    for (const FVector& Local : LocalPoints)
    {
        WorldPoints.Add(SpawnTransform.TransformPosition(Local));
    }

    RandomActor->Initialize(WorldPoints, CachedSelectedMeshes);
    RandomActor->RegenerateMeshes();

    if (PickerWindow.IsValid())
    {
        PickerWindow->RequestDestroyWindow();
        PickerWindow.Reset();
        MeshPickerWidget.Reset();
    }

    if (ModeWindow.IsValid())
    {
        ModeWindow->RequestDestroyWindow();
        ModeWindow.Reset();
    }
}
void FTestingPluginModule::HandleContinuousMode()
{
    if (CachedSelectedMeshes.Num() != 1 || !CachedSelectedMeshes[0])
    {
        UE_LOG(LogTemp, Warning, TEXT("Continuous mode requires exactly one mesh."));
        return;
    }

    UStaticMesh* RoadMesh = CachedSelectedMeshes[0];
    if (!RoadMesh) return;

    UWorld* World = GEditor->GetEditorWorldContext().World();
    if (!World) return;

    FTransform SpawnTransform = FTransform::Identity;
    bool bFoundSpawn = false;

    // Try to get spawn transform from selected actor
    if (USelection* Sel = GEditor->GetSelectedActors())
    {
        if (Sel->Num() > 0)
        {
            if (AActor* Picked = Cast<AActor>(Sel->GetSelectedObject(0)))
            {
                SpawnTransform = Picked->GetActorTransform();
                bFoundSpawn = true;
            }
        }
    }

    // Otherwise, use editor camera
    if (!bFoundSpawn)
    {
        for (FLevelEditorViewportClient* ViewportClient : GEditor->GetLevelViewportClients())
        {
            if (ViewportClient && ViewportClient->IsPerspective() && ViewportClient->IsVisible())
            {
                FVector CamLoc = ViewportClient->GetViewLocation();
                SpawnTransform = FTransform(FRotator::ZeroRotator, CamLoc); // <-- Zero pitch
                break;
            }
        }
    }

    // Raycast downward to find ground
    FVector Start = SpawnTransform.GetLocation();
    FVector End = Start - FVector(0, 0, 10000.0f);
    FHitResult Hit;
    FCollisionQueryParams TraceParams;
    TraceParams.bTraceComplex = true;

    if (World->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, TraceParams))
    {
        float HalfHeight = 0.0f;
        if (RoadMesh)
        {
            FBox Bounds = RoadMesh->GetBoundingBox();
            HalfHeight = Bounds.GetExtent().Z;
        }

        FVector Aligned = Hit.ImpactPoint + FVector(0, 0, HalfHeight);
        SpawnTransform.SetLocation(Aligned);
    }

    const FScopedTransaction Transaction(LOCTEXT("AddRoadSplineActor", "Add Road Spline Actor"));

    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    SpawnParams.bNoFail = true;

    ARoadSplineActor* RoadActor = World->SpawnActor<ARoadSplineActor>(
        ARoadSplineActor::StaticClass(),
        SpawnTransform,
        SpawnParams
    );

    if (!RoadActor) return;

    RoadActor->SetFlags(RF_Transactional);
    RoadActor->Modify();

    // Keep spline points flat relative to actor
    TArray<FVector> Points = {
        FVector(0, 0, 0),
        FVector(500, 0, 0),
        FVector(1000, 250, 0),
        FVector(1500, 0, 0)
    };

    RoadActor->InitializeRoad(Points, RoadMesh);

    if (PickerWindow.IsValid())
    {
        PickerWindow->RequestDestroyWindow();
        PickerWindow.Reset();
        MeshPickerWidget.Reset();
    }

    if (ModeWindow.IsValid())
    {
        ModeWindow->RequestDestroyWindow();
        ModeWindow.Reset();
    }
}
#endif 
#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FTestingPluginModule, TestingPlugin)