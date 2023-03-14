// Fill out your copyright notice in the Description page of Project Settings.


#include "WantedComponent.h"

// Sets default values for this component's properties
UWantedComponent::UWantedComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	
}


// Called when the game starts
void UWantedComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UWantedComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UWantedComponent::SetDistanceStatus(Status status)
{
	DistanceStatus = status;
}

void UWantedComponent::SetWanted(bool newStatus)
{
	IsWanted = newStatus;
}

