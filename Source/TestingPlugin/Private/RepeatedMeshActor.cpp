#include "RepeatedMeshActor.h"


ARepeatedMeshActor::ARepeatedMeshActor()
{
    PrimaryActorTick.bCanEverTick = false;

    MeshGenerator = CreateDefaultSubobject<URepeatedMeshGenerator>(TEXT("MeshGenerator"));
    SetRootComponent(MeshGenerator);
}

void ARepeatedMeshActor::SetMesh(UStaticMesh* InMesh)
{
    if (MeshGenerator)
    {
        MeshGenerator->MeshToRepeat = InMesh;
    }
}

void ARepeatedMeshActor::SetSplinePath(const TArray<FVector>& Points)
{
    if (MeshGenerator)
    {
        MeshGenerator->ClearSplinePoints();
        for (const FVector& P : Points)
        {
            MeshGenerator->AddSplinePoint(P, ESplineCoordinateSpace::Local);
        }
        MeshGenerator->UpdateSpline();
    }
}

void ARepeatedMeshActor::GenerateRepeatedMeshes()
{
    if (MeshGenerator)
    {
        MeshGenerator->GenerateMeshes();
    }
}

