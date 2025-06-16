#include "RoadSplineActor.h"
#include "RoadSplineGenerator.h"


#if WITH_EDITOR
void ARoadSplineActor::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);
    UpdateRoad();
}

void ARoadSplineActor::PostEditMove(bool bFinished)
{
    Super::PostEditMove(bFinished);

    if (bFinished)
    {
        UpdateRoad();
    }
}
#endif

ARoadSplineActor::ARoadSplineActor()
{
    PrimaryActorTick.bCanEverTick = false;

    RoadGenerator = CreateDefaultSubobject<URoadSplineGenerator>(TEXT("RoadGenerator"));
    SetRootComponent(RoadGenerator);
}

void ARoadSplineActor::UpdateRoad()
{
    if (!RoadGenerator) return;

    RoadGenerator->Modify(); // Support undo
    RoadGenerator->RoadMesh = RoadMesh;
    RoadGenerator->SectionLength = SectionLength;
    RoadGenerator->GenerateRoadMeshes();
}

void ARoadSplineActor::InitializeRoad(const TArray<FVector>& InPoints, UStaticMesh* InMesh)
{
    if (!RoadGenerator || !InMesh) return;
    SetFlags(RF_Transactional);
    Modify();
    RoadMesh = InMesh;

    RoadGenerator->Modify();
    RoadGenerator->ClearSplinePoints();

    for (const FVector& P : InPoints)
    {
        RoadGenerator->AddSplinePoint(P, ESplineCoordinateSpace::Local);
    }

    RoadGenerator->UpdateSpline();
    UpdateRoad();
}