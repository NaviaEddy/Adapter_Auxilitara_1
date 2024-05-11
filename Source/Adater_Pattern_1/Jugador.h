// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IExplosiveShot.h"
#include "Jugador.generated.h"

UCLASS()
class ADATER_PATTERN_1_API AJugador : public AActor, public IIExplosiveShot
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AJugador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	//El arma adaptada debe ser de tipo IExplosiveShot
	class IIExplosiveShot* ES;

private:
	float range;

public:
	//Establecemos el adaptador
	void SetExplosiveCanio(AActor* _Adaptador);

	void explosive() override;

	void range_explosive(float _range) override;

};
