// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "MultiDriverGameMode.h"
#include "MultiDriverPawn.h"
#include "MultiDriverHud.h"

AMultiDriverGameMode::AMultiDriverGameMode()
{
	DefaultPawnClass = AMultiDriverPawn::StaticClass();
	HUDClass = AMultiDriverHud::StaticClass();
}
