// Fill out your copyright notice in the Description page of Project Settings.
#include "Jugador.h"
#include "IExplosiveShot.h"

// Sets default values
AJugador::AJugador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	range = 0.0;
}

// Called when the game starts or when spawned
void AJugador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJugador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AJugador::SetExplosiveCanio(AActor* _Adaptador)
{
	ES = Cast<IIExplosiveShot>(_Adaptador);
	if (!ES) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::Printf(TEXT("No se pudo hacer el cast del IIExplosiveShot")));
		return;
	}
}

void AJugador::explosive()
{
	ES->explosive();
}

void AJugador::range_explosive(float _range)
{
	range = _range;
	ES->range_explosive(range);
}

