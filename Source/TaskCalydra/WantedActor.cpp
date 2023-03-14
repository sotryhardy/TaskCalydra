// Fill out your copyright notice in the Description page of Project Settings.


#include "WantedActor.h"

// Sets default values
AWantedActor::AWantedActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!RootComponent)
	{
		RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	}

	if (!WantedComponent)
	{
		WantedComponent = CreateDefaultSubobject<UWantedComponent>(TEXT("WantedComponent"));
	}
}

// Called when the game starts or when spawned
void AWantedActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWantedActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

