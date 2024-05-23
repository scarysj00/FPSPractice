// Fill out your copyright notice in the Description page of Project Settings.


#include "Data/Input/BasicInputDataConfig.h"

UBasicInputDataConfig::UBasicInputDataConfig()
{
	{
		static ConstructorHelpers::FObjectFinder<UInputMappingContext> Asset
		{
			TEXT("/Script/EnhancedInput.InputMappingContext'/Game/FPS/Blueprint/Player/Input/IMC_Player.IMC_Player'")
		};
		check(Asset.Succeeded());
		InputMappingContext = Asset.Object;
	}
} 
