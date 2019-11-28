// Fill out your copyright notice in the Description page of Project Settings.

#include "HeroAttributeSet.h"
#include "UnrealNetwork.h"

void UHeroAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	// This is called whenever attributes change, so for any values we want need to scale percentage-wise, put here.
}

void UHeroAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	// here we want to clamp values based on their min/max
}

void UHeroAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UHeroAttributeSet, Health);
	DOREPLIFETIME(UHeroAttributeSet, MaxHealth);
}

void UHeroAttributeSet::OnRep_Health()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UHeroAttributeSet, Health);
}

void UHeroAttributeSet::OnRep_MaxHealth()
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UHeroAttributeSet, MaxHealth);
}
