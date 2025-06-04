#include "RoadSplineGenerator.h"
#include "Components/SplineMeshComponent.h"
#include "Kismet/KismetMathLibrary.h"

URoadSplineGenerator::URoadSplineGenerator()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void URoadSplineGenerator::ClearOldMeshes()
{
    AActor* Owner = GetOwner();
    if (!Owner) return;

    TArray<UActorComponent*> AllSplineMeshes = Owner->GetComponentsByClass(USplineMeshComponent::StaticClass());

    for (UActorComponent* Comp : AllSplineMeshes)
    {
        if (USplineMeshComponent* MeshComp = Cast<USplineMeshComponent>(Comp))
        {
            if (MeshComp->GetAttachParent() == this)
            {
                MeshComp->Modify();  // Track for undo
                MeshComp->DestroyComponent();
            }
        }
    }

    GeneratedMeshes.Empty(); // Reset tracker
}

void URoadSplineGenerator::GenerateRoadMeshes()
{
    if (!RoadMesh) return;

    ClearOldMeshes();  // 🔁 Always clear previous generated meshes

    const float SplineLength = GetSplineLength();
    const int32 NumSections = FMath::FloorToInt(SplineLength / SectionLength);

    for (int32 i = 0; i < NumSections; ++i)
    {
        CreateSplineMeshComponent(i);
    }
}

void URoadSplineGenerator::CreateSplineMeshComponent(int32 Index)
{
    const float StartDistance = Index * SectionLength;
    const float EndDistance = (Index + 1) * SectionLength;

    FVector StartPos = GetLocationAtDistanceAlongSpline(StartDistance, ESplineCoordinateSpace::Local);
    FVector StartTangent = GetTangentAtDistanceAlongSpline(StartDistance, ESplineCoordinateSpace::Local);
    StartTangent = UKismetMathLibrary::ClampVectorSize(StartTangent, 0.0f, SectionLength);

    FVector EndPos = GetLocationAtDistanceAlongSpline(EndDistance, ESplineCoordinateSpace::Local);
    FVector EndTangent = GetTangentAtDistanceAlongSpline(EndDistance, ESplineCoordinateSpace::Local);
    EndTangent = UKismetMathLibrary::ClampVectorSize(EndTangent, 0.0f, SectionLength);

    USplineMeshComponent* SplineMesh = NewObject<USplineMeshComponent>(GetOwner());
    if (!SplineMesh) return;

    SplineMesh->SetMobility(EComponentMobility::Movable);
    SplineMesh->RegisterComponent();
    SplineMesh->AttachToComponent(this, FAttachmentTransformRules::KeepRelativeTransform);

    SplineMesh->SetFlags(RF_Transactional);
    SplineMesh->Modify();

    SplineMesh->SetStaticMesh(RoadMesh);
    SplineMesh->SetStartAndEnd(StartPos, StartTangent, EndPos, EndTangent);
    SplineMesh->SetForwardAxis(ESplineMeshAxis::X);
    SplineMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    SplineMesh->SetRelativeLocation(FVector::ZeroVector);

    GeneratedMeshes.Add(SplineMesh);
}