// Copyright 2025 2H₂ Studio

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Aura_CharacterBase.generated.h"

UCLASS()
class AURA_API AAura_CharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAura_CharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



};
