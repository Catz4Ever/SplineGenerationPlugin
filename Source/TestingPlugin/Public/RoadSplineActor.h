#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RoadSplineActor.generated.h"

class URoadSplineGenerator;
class UStaticMesh;

UCLASS()
class TESTINGPLUGIN_API ARoadSplineActor : public AActor
{
    GENERATED_BODY()

public:
    ARoadSplineActor();

#if WITH_EDITOR
    virtual void OnConstruction(const FTransform& Transform) override;
    virtual void PostEditMove(bool bFinished) override;
#endif

    /** The spline-generator component that builds the meshes */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Road")
    URoadSplineGenerator* RoadGenerator;

    /** Mesh to use for each spline segment */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Road")
    UStaticMesh* RoadMesh;

    /** Length (in world units) of each segment */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Road", meta = (ClampMin = "1.0"))
    float SectionLength = 500.f;

    /**
     * Sets up spline points and assigns the mesh, then auto-generates the road
     */
    UFUNCTION(BlueprintCallable, Category = "Road")
    void InitializeRoad(const TArray<FVector>& InPoints, UStaticMesh* InMesh);

private:
    /** Syncs the spline generator's mesh and length settings, and regenerates mesh */
    void UpdateRoad();
};