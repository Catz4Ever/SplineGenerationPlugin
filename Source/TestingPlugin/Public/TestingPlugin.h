// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FTestingPluginModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

private:
    void RegisterMenus();
    void PluginButtonClicked();
    void OnMeshSelected(const FAssetData& SelectedAsset);
    void OpenMeshPickerWindow();
    TSharedPtr<SWindow> PickerWindow;
    void OnMeshesConfirmed();
    void OnMeshesCancelled();
    TSharedPtr<class SMeshPickerWindow> MeshPickerWidget;
    void HandleSingleMode();
    void HandleMultiMode();
    void HandleContinuousMode();
    TSharedPtr<SWindow> ModeWindow;
    TArray<UStaticMesh*> CachedSelectedMeshes;
};