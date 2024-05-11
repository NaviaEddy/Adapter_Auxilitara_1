// Fill out your copyright notice in the Description page of Project Settings.

#include "ExplosiveAdapter.h"
#include "BalaCanion.h"


// Sets default values
AExplosiveAdapter::AExplosiveAdapter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AExplosiveAdapter::BeginPlay()
{
	Super::BeginPlay();
	BC = GetWorld()->SpawnActor<ABalaCanion>(ABalaCanion::StaticClass());
}

// Called every frame
void AExplosiveAdapter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AExplosiveAdapter::explosive()
{
	if (!BC) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::Printf(TEXT("La clase extranjera es null")));
		return;
	}

	BC->shot();
}

void AExplosiveAdapter::range_explosive(float _range)
{
	if (!BC) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::Printf(TEXT("La clase extranjera es null")));
		return;
	}
	BC->range(_range);
}

