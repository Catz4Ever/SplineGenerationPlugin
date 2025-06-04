#pragma once

#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "RandomMeshGenerator.generated.h"

class UStaticMesh;
class UStaticMeshComponent;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TESTINGPLUGIN_API URandomMeshGenerator : public USplineComponent
{
    GENERATED_BODY()

public:
    URandomMeshGenerator();
    /** Sets the list of meshes to randomly choose from */
    UFUNCTION(BlueprintCallable, Category = "Mesh Generator")
    void SetMeshes(const TArray<UStaticMesh*>& NewMeshes);
    /** List of meshes to randomly choose from */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Generator")
    TArray<UStaticMesh*> MeshesToRandomize;

    /** Distance between each instance */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Generator", meta = (ClampMin = "1.0"))
    float Interval = 300.f;

    /** Should X axis be randomly rotated? */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Generator")
    bool bRandomizeXRotation = false;

    /** Should Y axis be randomly rotated? */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Generator")
    bool bRandomizeYRotation = false;

    /** Should Z axis be randomly rotated? */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Generator")
    bool bRandomizeZRotation = false;

    /** Min scale */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Generator")
    FVector MinScale = FVector(1.0f);

    /** Max scale */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh Generator")
    FVector MaxScale = FVector(1.0f);

    /** Generate instances */
    UFUNCTION(BlueprintCallable, Category = "Mesh Generator")
    void GenerateMeshes();

protected:
    void ClearOldMeshes();

private:
    UPROPERTY(Transient)
    TArray<UStaticMeshComponent*> GeneratedComponents;
};