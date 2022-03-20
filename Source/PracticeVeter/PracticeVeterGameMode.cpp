// Copyright Epic Games, Inc. All Rights Reserved.

#include "PracticeVeterGameMode.h"
#include "PracticeVeterCharacter.h"
#include "UObject/ConstructorHelpers.h"

APracticeVeterGameMode::APracticeVeterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
