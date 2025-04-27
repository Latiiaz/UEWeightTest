// Copyright Epic Games, Inc. All Rights Reserved.

#include "WeightSystemTestUEGameMode.h"
#include "WeightSystemTestUECharacter.h"
#include "UObject/ConstructorHelpers.h"

AWeightSystemTestUEGameMode::AWeightSystemTestUEGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
