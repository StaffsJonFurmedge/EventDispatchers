// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "EventDispatchersGameMode.h"
#include "EventDispatchersHUD.h"
#include "EventDispatchersCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEventDispatchersGameMode::AEventDispatchersGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AEventDispatchersHUD::StaticClass();
}
