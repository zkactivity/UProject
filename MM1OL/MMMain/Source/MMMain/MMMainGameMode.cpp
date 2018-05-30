// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MMMainGameMode.h"
#include "MMMainHUD.h"
#include "MMMainCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMMMainGameMode::AMMMainGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMMMainHUD::StaticClass();
}
