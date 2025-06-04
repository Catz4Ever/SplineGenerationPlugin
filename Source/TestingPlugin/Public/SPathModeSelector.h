// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "Engine/StaticMesh.h"


class SPathModeSelector : public SCompoundWidget
{
public:
    SLATE_BEGIN_ARGS(SPathModeSelector) {}
        SLATE_ARGUMENT(TArray<UStaticMesh*>, Meshes)
        SLATE_EVENT(FSimpleDelegate, OnSingleMode)
        SLATE_EVENT(FSimpleDelegate, OnMultiMode)
        SLATE_EVENT(FSimpleDelegate, OnContinuousMode)
    SLATE_END_ARGS()

    void Construct(const FArguments& InArgs);

private:
    TArray<UStaticMesh*> SelectedMeshes;

    FSimpleDelegate OnSingleMode;
    FSimpleDelegate OnMultiMode;
    FSimpleDelegate OnContinuousMode;

    FReply HandleSingleClicked();
    FReply HandleMultiClicked();
    FReply HandleContinuousClicked();
};