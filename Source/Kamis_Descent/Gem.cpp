// Fill out your copyright notice in the Description page of Project Settings.

#include "Gem.h"

// Sets default values
AGem::AGem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Create the static mesh component
	GemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GemMesh"));
	RootComponent = GemMesh;

	// Gems start off unavailable by default
	bIsActive = false;

}

// Called when the game starts or when spawned
void AGem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Is the pickup active?
bool AGem::IsActive() const
{
	return bIsActive;
}

// Change the state of the pickup (Active/Inactive)
void AGem::SetActive(bool State)
{
	bIsActive = State;
}

