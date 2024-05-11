// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Adater_Pattern_1GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class ADATER_PATTERN_1_API AAdater_Pattern_1GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AAdater_Pattern_1GameModeBase();

protected:
	virtual void BeginPlay() override;
	
public:
	virtual void Tick(float _DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, Category="Game mode")
	class AJugador* jugador;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class AExplosiveAdapter* Adaptador;
	
private:
	float TimerShot;

};
