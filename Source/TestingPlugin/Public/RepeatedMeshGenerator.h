#pragma once

#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "RepeatedMeshGenerator.generated.h"

class UStaticMesh;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TESTINGPLUGIN_API URepeatedMeshGenerator : public USplineComponent
{
    GENERATED_BODY()

public:
    URepeatedMeshGenerator();

    /** The mesh to repeat along the spline */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Generator")
    UStaticMesh* MeshToRepeat;

    /** How far apart to place each mesh instance (in cm) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Generator", meta = (ClampMin = "1.0"))
    float Interval = 300.0f;

    /** Min scale to apply randomly */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Generator")
    FVector MinScale = FVector(1.0f, 1.0f, 1.0f);

    /** Max scale to apply randomly */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Generator")
    FVector MaxScale = FVector(1.0f, 1.0f, 1.0f);

    /** Should X axis be randomly rotated? */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Generator")
    bool bRandomizeXRotation = false;

    /** Should Y axis be randomly rotated? */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Generator")
    bool bRandomizeYRotation = false;

    /** Should Z axis be randomly rotated? */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Generator")
    bool bRandomizeZRotation = false;

    /** Builds the repeated mesh instances along the spline */
    UFUNCTION(BlueprintCallable, Category = "Mesh Generator")
    void GenerateMeshes();

protected:
    void ClearOldInstances();

#if WITH_EDITOR
    virtual void PostEditComponentMove(bool bFinished) override;
#endif

    virtual void OnRegister() override;

private:
    UPROPERTY(Transient)
    TArray<UStaticMeshComponent*> GeneratedComponents;
};