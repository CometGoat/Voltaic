// Fill out your copyright notice in the Description page of Project Settings.

#include "Voltaic.h"
#include "IDL_AIController.h"

AIDL_AIController::AIDL_AIController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Do stuff
	bWantsPlayerState = true;
}

