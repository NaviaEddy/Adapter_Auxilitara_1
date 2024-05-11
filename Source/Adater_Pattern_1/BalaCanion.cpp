// Fill out your copyright notice in the Description page of Project Settings.


#include "BalaCanion.h"

// Sets default values
ABalaCanion::ABalaCanion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABalaCanion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABalaCanion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABalaCanion::shot()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, FString::Printf(TEXT("El arma se disparo")));
}

void ABalaCanion::range(float _RangeExplosive)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, FString::Printf(TEXT("Con un rango de %f"), _RangeExplosive));
}

