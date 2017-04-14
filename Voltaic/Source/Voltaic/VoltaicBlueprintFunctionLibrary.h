// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "VoltaicBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class VOLTAIC_API UVoltaicBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
		UFUNCTION(BlueprintCallable, Category = "Viewport")
		static void DisableSplitScreen(AActor* Context, bool bDisable);
	
	
};
