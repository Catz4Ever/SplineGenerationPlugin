#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "AssetRegistry/AssetData.h"
#include "Widgets/Views/SListView.h"
#include "IContentBrowserSingleton.h"
#include "Engine/StaticMesh.h"
#include "AssetThumbnail.h"

class SWrapBox;
class SScrollBox;

class SMeshPickerWindow : public SCompoundWidget
{
public:
    SLATE_BEGIN_ARGS(SMeshPickerWindow) {}
        SLATE_EVENT(FSimpleDelegate, OnConfirmed)
        SLATE_EVENT(FSimpleDelegate, OnCancelled)
    SLATE_END_ARGS()

    void Construct(const FArguments& InArgs);
    bool IsConfirmEnabled() const;

private:
    TArray<FAssetData> SelectedAssets;
    FSimpleDelegate OnConfirmed;
    FSimpleDelegate OnCancelled;

    TSharedPtr<SWrapBox> SelectedAssetWrapBox;
    TSharedPtr<FAssetThumbnailPool> ThumbnailPool;

    void OnAssetSelected(const FAssetData& AssetData);
    void RefreshSelectedAssetList();
    void RemoveAssetFromSelection(FAssetData AssetData);

    FReply OnConfirmClicked();
    FReply OnCancelClicked();
    FReply OnClearSelectionClicked();
    TSharedPtr<STextBlock> SelectedCountTextBlock;
    FText GetSelectedCountText() const;

public:
    TArray<UStaticMesh*> GetSelectedMeshes() const;
};