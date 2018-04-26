// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "CppTestGameMode.h"
#include "CppTestHUD.h"
#include "CppTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACppTestGameMode::ACppTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACppTestHUD::StaticClass();
}
