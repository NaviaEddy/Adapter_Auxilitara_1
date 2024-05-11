// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IExplosiveShot.h"
#include "ExplosiveAdapter.generated.h"

UCLASS()
class ADATER_PATTERN_1_API AExplosiveAdapter : public AActor, public IIExplosiveShot
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AExplosiveAdapter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	//Puntero a la clase extranjera
	UPROPERTY(VisibleAnywhere, Category="Explosive Adapter")
	class ABalaCanion* BC;

public:
	void explosive() override;
	void range_explosive(float _range) override;
};
