#include "SPathModeSelector.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Text/STextBlock.h"

#define LOCTEXT_NAMESPACE "SPathModeSelector"

void SPathModeSelector::Construct(const FArguments& InArgs)
{
    SelectedMeshes = InArgs._Meshes;
    OnSingleMode = InArgs._OnSingleMode;
    OnMultiMode = InArgs._OnMultiMode;
    OnContinuousMode = InArgs._OnContinuousMode;

    const int32 MeshCount = SelectedMeshes.Num();

    ChildSlot
        [
            SNew(SVerticalBox)

                + SVerticalBox::Slot()
                .AutoHeight()
                .Padding(10)
                [
                    SNew(STextBlock)
                        .Text(LOCTEXT("ChoosePathMode", "Choose how to populate the spline"))
                ]

                + SVerticalBox::Slot()
                .AutoHeight()
                .Padding(5)
                [
                    SNew(SButton)
                        .Text(LOCTEXT("SingleMeshButton", "Populate along path (single mesh)"))
                        .IsEnabled(SelectedMeshes.Num() == 1)
                        .OnClicked(this, &SPathModeSelector::HandleSingleClicked)
                        .ToolTipText(LOCTEXT("ContinuousDisabledTooltip", "This option requires only one mesh."))
                ]

                + SVerticalBox::Slot()
                .AutoHeight()
                .Padding(5)
                [
                    SNew(SButton)
                        .IsEnabled(MeshCount > 1)
                        .Text(LOCTEXT("MultiMeshButton", "Populate along path (random meshes)"))
                        .OnClicked(this, &SPathModeSelector::HandleMultiClicked)
                        .ToolTipText(LOCTEXT("ContinuousDisabledTooltip", "This option requires more than one mesh."))
                ]

                + SVerticalBox::Slot()
                .AutoHeight()
                .Padding(5)
                [
                    SNew(SButton)
                        .Text(LOCTEXT("ContinuousMeshButton", "Create continuous mesh (road/pipe)"))
                        .IsEnabled(SelectedMeshes.Num() == 1) 
                        .OnClicked(this, &SPathModeSelector::HandleContinuousClicked)
                        .ToolTipText(LOCTEXT("ContinuousDisabledTooltip", "This option requires only one mesh."))
                ]
        ];
}

FReply SPathModeSelector::HandleSingleClicked()
{
    if (OnSingleMode.IsBound())
    {
        OnSingleMode.Execute();
    }
    return FReply::Handled();
}

FReply SPathModeSelector::HandleMultiClicked()
{
    if (OnMultiMode.IsBound())
    {
        OnMultiMode.Execute();
    }
    return FReply::Handled();
}

FReply SPathModeSelector::HandleContinuousClicked()
{
    if (OnContinuousMode.IsBound())
    {
        OnContinuousMode.Execute();
    }
    return FReply::Handled();
}

#undef LOCTEXT_NAMESPACE