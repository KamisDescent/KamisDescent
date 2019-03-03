// Fill out your copyright notice in the Description page of Project Settings.

#include "GreenGem.h"

void AGreenGem::Collect()
{
	// Call on base behaviour
	Super::Collect();

	// Destroy the gem
	Destroy();
}
