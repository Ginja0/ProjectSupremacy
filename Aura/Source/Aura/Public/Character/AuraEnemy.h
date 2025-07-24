// Copyright Mythos Architects

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interact/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()

	public:
	virtual void HighlightActor() override;
	virtual void UnhighlightActor() override;
	
	AAuraEnemy();
	
protected:
	virtual void BeginPlay() override;
	virtual void InitAbilityActorInfo() override;
	
};
