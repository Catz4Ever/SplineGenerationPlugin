#include "RandomMeshActor.h"
#include "RandomMeshGenerator.h"

ARandomMeshActor::ARandomMeshActor()
{
    PrimaryActorTick.bCanEverTick = false;

    RandomMeshGenerator = CreateDefaultSubobject<URandomMeshGenerator>(TEXT("RandomMeshGenerator"));
    SetRootComponent(RandomMeshGenerator);
}

#if WITH_EDITOR
void ARandomMeshActor::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);
    RegenerateMeshes();
}
#endif

void ARandomMeshActor::Initialize(const TArray<FVector>& SplinePoints, const TArray<UStaticMesh*>& Meshes)
{
    if (!RandomMeshGenerator) return;

    RandomMeshGenerator->SetMeshes(Meshes);
    RandomMeshGenerator->ClearSplinePoints();

    for (const FVector& Point : SplinePoints)
    {
        RandomMeshGenerator->AddSplinePoint(Point, ESplineCoordinateSpace::World);
    }

    RandomMeshGenerator->UpdateSpline();
    RegenerateMeshes();
}

void ARandomMeshActor::RegenerateMeshes()
{
    if (RandomMeshGenerator)
    {
        RandomMeshGenerator->GenerateMeshes();
    }
}