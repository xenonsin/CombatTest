// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "CombatTestGameMode.h"
#include "CombatTestPlayerController.h"
#include "CombatTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACombatTestGameMode::ACombatTestGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ACombatTestPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}