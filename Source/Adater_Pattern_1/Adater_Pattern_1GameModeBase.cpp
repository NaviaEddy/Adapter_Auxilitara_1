// Copyright Epic Games, Inc. All Rights Reserved.


#include "Adater_Pattern_1GameModeBase.h"
#include "ExplosiveAdapter.h"
#include "Jugador.h"

AAdater_Pattern_1GameModeBase::AAdater_Pattern_1GameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
	TimerShot = 0.0f;
}

void AAdater_Pattern_1GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	Adaptador = GetWorld()->SpawnActor<AExplosiveAdapter>(AExplosiveAdapter::StaticClass());
	jugador = GetWorld()->SpawnActor<AJugador>(AJugador::StaticClass());

	jugador->SetExplosiveCanio(Adaptador);
	
}

void AAdater_Pattern_1GameModeBase::Tick(float _DeltaTime)
{
	Super::Tick(_DeltaTime);

	TimerShot += _DeltaTime;
	if (TimerShot >= 5.0f) {
		jugador->explosive();
		jugador->range_explosive(15.0f);
		TimerShot = 0.0f;
	}
}
