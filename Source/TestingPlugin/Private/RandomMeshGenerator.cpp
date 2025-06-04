#include "RandomMeshGenerator.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/KismetMathLibrary.h"

URandomMeshGenerator::URandomMeshGenerator()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void URandomMeshGenerator::ClearOldMeshes()
{
    AActor* Owner = GetOwner();
    if (!Owner) return;

    TArray<UActorComponent*> Components = Owner->GetComponentsByClass(UStaticMeshComponent::StaticClass());
    for (UActorComponent* Comp : Components)
    {
        if (UStaticMeshComponent* MeshComp = Cast<UStaticMeshComponent>(Comp))
        {
            if (MeshComp->GetAttachParent() == this)
            {
                MeshComp->Modify();
                MeshComp->DestroyComponent();
            }
        }
    }

    GeneratedComponents.Empty();
}

void URandomMeshGenerator::SetMeshes(const TArray<UStaticMesh*>& NewMeshes)
{
    MeshesToRandomize = NewMeshes;
}

void URandomMeshGenerator::GenerateMeshes()
{
    if (MeshesToRandomize.Num() == 0) return;

    ClearOldMeshes();

    const float SplineLength = GetSplineLength();
    const int32 NumInstances = FMath::FloorToInt(SplineLength / Interval);

    for (int32 i = 0; i < NumInstances; ++i)
    {
        const float Distance = i * Interval;

        // Pick a random mesh
        UStaticMesh* ChosenMesh = MeshesToRandomize[FMath::RandRange(0, MeshesToRandomize.Num() - 1)];
        if (!ChosenMesh) continue;

        FVector Location = GetLocationAtDistanceAlongSpline(Distance, ESplineCoordinateSpace::World);
        FRotator Rotation = GetRotationAtDistanceAlongSpline(Distance, ESplineCoordinateSpace::World);

        // Apply random rotation
        if (bRandomizeXRotation) Rotation.Roll += FMath::FRandRange(-180, 180);
        if (bRandomizeYRotation) Rotation.Pitch += FMath::FRandRange(-180, 180);
        if (bRandomizeZRotation) Rotation.Yaw += FMath::FRandRange(-180, 180);

        FVector Scale = FVector(
            FMath::FRandRange(MinScale.X, MaxScale.X),
            FMath::FRandRange(MinScale.Y, MaxScale.Y),
            FMath::FRandRange(MinScale.Z, MaxScale.Z)
        );

        UStaticMeshComponent* NewComp = NewObject<UStaticMeshComponent>(GetOwner());
        if (!NewComp) continue;

        NewComp->SetMobility(EComponentMobility::Movable);
        NewComp->SetStaticMesh(ChosenMesh);
        NewComp->SetWorldLocation(Location);
        NewComp->SetWorldRotation(Rotation);
        NewComp->SetWorldScale3D(Scale);

        NewComp->AttachToComponent(this, FAttachmentTransformRules::KeepWorldTransform);
        NewComp->SetFlags(RF_Transactional);
        NewComp->RegisterComponent();
        NewComp->Modify();

        GeneratedComponents.Add(NewComp);
    }
}