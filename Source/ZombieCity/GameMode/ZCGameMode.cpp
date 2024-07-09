// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/ZCGameMode.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"
#include "Character/ZCPlayerController.h"
#include "Player/ZCCharacterPlayer.h"

AZCGameMode::AZCGameMode()
{
	//GameController
	PlayerControllerClass = AZCPlayerController::StaticClass();
	
	//DefaultPawnClass = AZCCharacterPlayer::StaticClass();

	ConstructorHelpers::FClassFinder<APawn> CTestRef(TEXT("/Script/Engine.Blueprint'/Game/ZombieCity/Character/testC.testC_C'"));
	if (CTestRef.Class != nullptr)
	{
		DefaultPawnClass = CTestRef.Class;
	}

}
