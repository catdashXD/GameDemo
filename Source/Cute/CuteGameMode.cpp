// Copyright Epic Games, Inc. All Rights Reserved.

#include "CuteGameMode.h"
#include "CuteCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACuteGameMode::ACuteGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
