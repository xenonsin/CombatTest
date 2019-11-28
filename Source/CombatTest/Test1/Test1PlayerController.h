// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AbilitySystemInterface.h"

#include "Test1PlayerController.generated.h"

class UAbilitySystemComponent;
/**
 * 
 */
UCLASS()
class COMBATTEST_API ATest1PlayerController : 
	public APlayerController,
	public IAbilitySystemInterface
{
	GENERATED_BODY()
public:
	ATest1PlayerController();

	UFUNCTION(BlueprintCallable)
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

private:
	UPROPERTY(VisibleAnywhere, Category = Ability)
	UAbilitySystemComponent* AbilityComponent;

};
