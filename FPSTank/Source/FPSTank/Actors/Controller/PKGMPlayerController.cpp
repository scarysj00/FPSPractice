// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Controller/PKGMPlayerController.h"
#include "EnhancedInputSubsystems.h"

void APKGMPlayerController::BeginPlay()
{
	Super::BeginPlay();

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());

	//Subsystem->AddMappingContext();
}

void APKGMPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
}

void APKGMPlayerController::OnMove(const FInputActionValue& InputActionValue)
{
}

void APKGMPlayerController::OnLookMouse(const FInputActionValue& InputActionValue)
{
}
