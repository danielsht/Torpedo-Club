// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "MyProject.h"
#include "MyProjectGameMode.h"
#include "MyProjectPawn.h"
#include "MyProjectHud.h"

AMyProjectGameMode::AMyProjectGameMode()
{
	DefaultPawnClass = AMyProjectPawn::StaticClass();
	HUDClass = AMyProjectHud::StaticClass();
}
