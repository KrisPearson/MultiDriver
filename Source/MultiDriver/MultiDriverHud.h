// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "MultiDriverHud.generated.h"


UCLASS(config = Game)
class AMultiDriverHud : public AHUD
{
	GENERATED_BODY()

public:
	AMultiDriverHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
