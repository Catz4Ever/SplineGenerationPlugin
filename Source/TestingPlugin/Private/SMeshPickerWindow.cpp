#if WITH_EDITOR

#include "SMeshPickerWindow.h"

#include "AssetRegistry/AssetData.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Layout/SWrapBox.h"
#include "AssetThumbnail.h"
#include "ContentBrowserModule.h"
#include "IContentBrowserSingleton.h"

#define LOCTEXT_NAMESPACE "SMeshPickerWindow"

SMeshPickerWindow::SMeshPickerWindow() {}

bool SMeshPickerWindow::IsConfirmEnabled() const
{
    return SelectedAssets.Num() > 0;
}

void SMeshPickerWindow::Construct(const FArguments& InArgs)
{
    OnConfirmed = InArgs._OnConfirmed;
    OnCancelled = InArgs._OnCancelled;

    ThumbnailPool = MakeShareable(new FAssetThumbnailPool(32));

    FAssetPickerConfig AssetPickerConfig;
    AssetPickerConfig.Filter.ClassNames.Add(UStaticMesh::StaticClass()->GetFName());
    AssetPickerConfig.Filter.bRecursivePaths = true;
    AssetPickerConfig.SelectionMode = ESelectionMode::Multi;
    AssetPickerConfig.InitialAssetViewType = EAssetViewType::Tile;
    AssetPickerConfig.bAllowNullSelection = false;
    AssetPickerConfig.bFocusSearchBoxWhenOpened = true;
    AssetPickerConfig.OnAssetSelected = FOnAssetSelected::CreateSP(this, &SMeshPickerWindow::OnAssetSelected);

    FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
    TSharedRef<SWidget> AssetPicker = ContentBrowserModule.Get().CreateAssetPicker(AssetPickerConfig);

    ChildSlot
        [
            SNew(SVerticalBox)

                + SVerticalBox::Slot()
                .FillHeight(1.0f)
                [
                    AssetPicker
                ]

            + SVerticalBox::Slot()
                .AutoHeight()
                .MaxHeight(250)
                [
                    SNew(SBorder)
                        .Padding(4)
                        [
                            SNew(SScrollBox)
                                + SScrollBox::Slot()
                                [
                                    SAssignNew(SelectedAssetWrapBox, SWrapBox)
                                        .UseAllottedWidth(true)
                                ]
                        ]
                ]

                + SVerticalBox::Slot()
                .AutoHeight()
                .Padding(0, 0, 0, 0)
                [
                    SNew(SBorder)
                        .Padding(4)
                        [
                            SNew(SVerticalBox)
                                + SVerticalBox::Slot()
                                .AutoHeight()
                                .Padding(0, 0, 0, 0)
                                [
                                    SAssignNew(SelectedCountTextBlock, STextBlock)
                                        .Text(this, &SMeshPickerWindow::GetSelectedCountText)
                                ]
                        ]
                ]

                + SVerticalBox::Slot()
                .AutoHeight()
                .Padding(5)
                [
                    SNew(SHorizontalBox)

                        + SHorizontalBox::Slot()
                        .HAlign(HAlign_Center)
                        .Padding(5)
                        [
                            SNew(SButton)
                                .Text(LOCTEXT("ConfirmButton", "Confirm"))
                                .IsEnabled(this, &SMeshPickerWindow::IsConfirmEnabled)
                                .OnClicked(this, &SMeshPickerWindow::OnConfirmClicked)
                        ]

                        + SHorizontalBox::Slot()
                        .HAlign(HAlign_Center)
                        .Padding(5)
                        [
                            SNew(SButton)
                                .Text(LOCTEXT("CancelButton", "Cancel"))
                                .OnClicked(this, &SMeshPickerWindow::OnCancelClicked)
                        ]

                        + SHorizontalBox::Slot()
                        .HAlign(HAlign_Center)
                        .Padding(5)
                        [
                            SNew(SButton)
                                .Text(LOCTEXT("ClearSelection", "Clear All Selected"))
                                .OnClicked(this, &SMeshPickerWindow::OnClearSelectionClicked)
                        ]
                ]
        ];
}

void SMeshPickerWindow::RefreshSelectedAssetList()
{
    if (!SelectedAssetWrapBox.IsValid())
    {
        return;
    }

    SelectedAssetWrapBox->ClearChildren();

    for (const FAssetData& AssetData : SelectedAssets)
    {
        TSharedPtr<FAssetThumbnail> Thumbnail = MakeShareable(new FAssetThumbnail(AssetData, 48, 48, ThumbnailPool.ToSharedRef()));

        SelectedAssetWrapBox->AddSlot()
            .Padding(5, 5, 5, -15)
            [
                SNew(SBox)
                    .WidthOverride(64)
                    .HeightOverride(100)
                    [
                        SNew(SVerticalBox)

                            + SVerticalBox::Slot()
                            .AutoHeight()
                            .HAlign(HAlign_Center)
                            [
                                SNew(SBox)
                                    .WidthOverride(48)
                                    .HeightOverride(48)
                                    [
                                        Thumbnail->MakeThumbnailWidget()
                                    ]
                            ]

                            + SVerticalBox::Slot()
                            .AutoHeight()
                            .HAlign(HAlign_Center)
                            [
                                SNew(STextBlock)
                                    .Text(FText::FromName(AssetData.AssetName))
                                    .Font(FCoreStyle::Get().GetFontStyle("SmallFont"))
                            ]

                            + SVerticalBox::Slot()
                            .AutoHeight()
                            .HAlign(HAlign_Center)
                            [
                                SNew(SButton)
                                    .Text(LOCTEXT("Remove", "Remove"))
                                    .OnClicked_Lambda([this, AssetData]()
                                        {
                                            RemoveAssetFromSelection(AssetData);
                                            return FReply::Handled();
                                        })
                            ]
                    ]
            ];
    }
}

void SMeshPickerWindow::OnAssetSelected(const FAssetData& AssetData)
{
    if (AssetData.IsValid() && AssetData.GetClass()->IsChildOf(UStaticMesh::StaticClass()))
    {
        SelectedAssets.AddUnique(AssetData);
        RefreshSelectedAssetList();
    }
}

FReply SMeshPickerWindow::OnConfirmClicked()
{
    if (OnConfirmed.IsBound())
    {
        OnConfirmed.Execute();
    }
    return FReply::Handled();
}

FReply SMeshPickerWindow::OnCancelClicked()
{
    if (OnCancelled.IsBound())
    {
        OnCancelled.Execute();
    }
    return FReply::Handled();
}

FReply SMeshPickerWindow::OnClearSelectionClicked()
{
    SelectedAssets.Empty();
    RefreshSelectedAssetList();
    return FReply::Handled();
}

void SMeshPickerWindow::RemoveAssetFromSelection(FAssetData AssetData)
{
    SelectedAssets.Remove(AssetData);
    RefreshSelectedAssetList();
}

TArray<UStaticMesh*> SMeshPickerWindow::GetSelectedMeshes() const
{
    TArray<UStaticMesh*> Meshes;
    for (const FAssetData& Asset : SelectedAssets)
    {
        if (UStaticMesh* Mesh = Cast<UStaticMesh>(Asset.GetAsset()))
        {
            Meshes.Add(Mesh);
        }
    }
    return Meshes;
}

FText SMeshPickerWindow::GetSelectedCountText() const
{
    return FText::Format(NSLOCTEXT("SMeshPickerWindow", "SelectedCount", "{0} mesh(es) selected"), SelectedAssets.Num());
}

#undef LOCTEXT_NAMESPACE

#endif // WITH_EDITOR