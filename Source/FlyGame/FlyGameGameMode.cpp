// Copyright Epic Games, Inc. All Rights Reserved.

#include "FlyGameGameMode.h"
#include "FlyGamePawn.h"

AFlyGameGameMode::AFlyGameGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AFlyGamePawn::StaticClass();
}
