#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RepeatedMeshGenerator.h"
#include "RepeatedMeshActor.generated.h"

UCLASS()
class TESTINGPLUGIN_API ARepeatedMeshActor : public AActor
{
    GENERATED_BODY()

public:
    ARepeatedMeshActor();

    /** Initializes mesh and spline points */
    UFUNCTION(BlueprintCallable, Category = "Mesh Generator")
    void SetMesh(UStaticMesh* InMesh);

    UFUNCTION(BlueprintCallable, Category = "Mesh Generator")
    void SetSplinePath(const TArray<FVector>& Points);

    UFUNCTION(BlueprintCallable, Category = "Mesh Generator")
    void GenerateRepeatedMeshes();

protected:
    UPROPERTY(VisibleAnywhere, Category = "Repeated Mesh Generator")
    URepeatedMeshGenerator* MeshGenerator;
};