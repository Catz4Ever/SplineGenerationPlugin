#pragma once

#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "RoadSplineGenerator.generated.h"

class USplineMeshComponent;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TESTINGPLUGIN_API URoadSplineGenerator : public USplineComponent
{
    GENERATED_BODY()

public:
    URoadSplineGenerator();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Road Generator")
    float SectionLength = 500.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Road Generator")
    UStaticMesh* RoadMesh;

    UFUNCTION(BlueprintCallable, Category = "Road Generator")
    void GenerateRoadMeshes();

protected:
    void CreateSplineMeshComponent(int32 Index);
    void ClearOldMeshes();  // 🔁 New cleanup method

private:
    UPROPERTY(Transient)
    TArray<USplineMeshComponent*> GeneratedMeshes;
};