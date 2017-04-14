// Fill out your copyright notice in the Description page of Project Settings.

#include "Voltaic.h"
#include "VoltaicBlueprintFunctionLibrary.h"

void UVoltaicBlueprintFunctionLibrary::DisableSplitScreen(AActor* Context, bool bDisable)
{
	if (Context)
	{
		Context->GetWorld()->GetGameViewport()->SetDisableSplitscreenOverride(bDisable);
	}
}


