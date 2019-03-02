// Fill out your copyright notice in the Description page of Project Settings.

#include "PurpleGem.h"

void APurpleGem::WasCollected_Implementation()
{
	// Call on base behaviour
	Super::WasCollected_Implementation();

	// Destroy the gem
	Destroy();
}
