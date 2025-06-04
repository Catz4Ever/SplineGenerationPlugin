#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RandomMeshActor.generated.h"

class URandomMeshGenerator;
class UStaticMesh;

UCLASS()
class TESTINGPLUGIN_API ARandomMeshActor : public AActor
{
    GENERATED_BODY()

public:
    ARandomMeshActor();

#if WITH_EDITOR
    virtual void OnConstruction(const FTransform& Transform) override;
#endif

    /** Initialize with spline points and meshes */
    void Initialize(const TArray<FVector>& SplinePoints, const TArray<UStaticMesh*>& Meshes);

    /** Rebuilds the random mesh instances */
    void RegenerateMeshes();

protected:
    /** The spline + random instance generator component */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Random Mesh")
    URandomMeshGenerator* RandomMeshGenerator;
};