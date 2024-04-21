// Copyright Pablo Farias

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "AuraPlayerState.generated.h"

class UAttributeSet;
/**
 * 
 */

class UAuraAbilitySystemComponent;
class UAuraAttributeSet;

UCLASS()
class AURA_API AAuraPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AAuraPlayerState();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet() const { return AttributeSet; }

private:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UAuraAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;
};
