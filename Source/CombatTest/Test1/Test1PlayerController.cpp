// Fill out your copyright notice in the Description page of Project Settings.

#include "Test1PlayerController.h"
#include "AbilitySystemComponent.h"

ATest1PlayerController::ATest1PlayerController()
{
	bShowMouseCursor = true;
	AbilityComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystem"));
}

UAbilitySystemComponent* ATest1PlayerController::GetAbilitySystemComponent() const
{
	return AbilityComponent;
}
