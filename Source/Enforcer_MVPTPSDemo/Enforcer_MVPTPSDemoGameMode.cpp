// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Enforcer_MVPTPSDemoGameMode.h"
#include "Enforcer.h"
#include "UObject/ConstructorHelpers.h"

AEnforcer_MVPTPSDemoGameMode::AEnforcer_MVPTPSDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/GameCharacterController/Controllers/CharBlueprints/BP_VyStudioCharacterController"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}



	static ConstructorHelpers::FClassFinder<AController> PlayerControllerBPClass(TEXT("/Game/GameCharacterController/Controllers/CharBlueprints/BP_VyStudioAiController"));
	if (PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}



