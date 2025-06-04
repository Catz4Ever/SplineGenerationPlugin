#include "RepeatedMeshGenerator.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/World.h"

URepeatedMeshGenerator::URepeatedMeshGenerator()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void URepeatedMeshGenerator::GenerateMeshes()
{
    if (!MeshToRepeat) return;

    ClearOldInstances();

    const float SplineLength = GetSplineLength();
    const int32 NumInstances = FMath::FloorToInt(SplineLength / Interval);

    for (int32 i = 0; i < NumInstances; ++i)
    {
        const float Distance = i * Interval;
        const FVector Location = GetLocationAtDistanceAlongSpline(Distance, ESplineCoordinateSpace::Local);
        const FRotator Rotation = GetRotationAtDistanceAlongSpline(Distance, ESplineCoordinateSpace::Local);

        UStaticMeshComponent* MeshComp = NewObject<UStaticMeshComponent>(GetOwner());
        if (!MeshComp) continue;

        MeshComp->SetStaticMesh(MeshToRepeat);
        MeshComp->SetMobility(EComponentMobility::Movable);
        MeshComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
        MeshComp->SetFlags(RF_Transactional);
        MeshComp->RegisterComponent();
        MeshComp->AttachToComponent(this, FAttachmentTransformRules::KeepRelativeTransform);

        MeshComp->SetRelativeLocation(Location);
        MeshComp->SetRelativeRotation(Rotation);

        // Apply randomized rotation
        FRotator RandomRot = Rotation;
        if (bRandomizeXRotation) RandomRot.Roll += FMath::FRandRange(-30.f, 30.f);
        if (bRandomizeYRotation) RandomRot.Pitch += FMath::FRandRange(-30.f, 30.f);
        if (bRandomizeZRotation) RandomRot.Yaw += FMath::FRandRange(-30.f, 30.f);
        MeshComp->SetRelativeRotation(RandomRot);

        // Apply random scale
        FVector RandomScale = FMath::RandPointInBox(FBox(MinScale, MaxScale));
        MeshComp->SetRelativeScale3D(RandomScale);

        MeshComp->Modify();  // Track for undo/redo
        GeneratedComponents.Add(MeshComp);
    }
}

void URepeatedMeshGenerator::ClearOldInstances()
{
    AActor* Owner = GetOwner();
    if (!Owner) return;

    TArray<UActorComponent*> Meshes;
    Owner->GetComponents(UStaticMeshComponent::StaticClass(), Meshes);

    for (UActorComponent* Comp : Meshes)
    {
        if (UStaticMeshComponent* MeshComp = Cast<UStaticMeshComponent>(Comp))
        {
            if (MeshComp->GetAttachParent() == this)
            {
                MeshComp->Modify(); // Track destruction
                MeshComp->DestroyComponent();
            }
        }
    }

    GeneratedComponents.Empty(); // Reset tracker
}

void URepeatedMeshGenerator::OnRegister()
{
    Super::OnRegister();

#if WITH_EDITOR
    // Regenerate after duplication or reload
    if (GIsEditor && !IsRunningGame())
    {
        GenerateMeshes();
    }
#endif
}

#if WITH_EDITOR
void URepeatedMeshGenerator::PostEditComponentMove(bool bFinished)
{
    Super::PostEditComponentMove(bFinished);

    if (bFinished)
    {
        Modify();
        GenerateMeshes();
    }
}
#endif