// Fill out your copyright notice in the Description page of Project Settings.

#include "RedGem.h"

void ARedGem::Collect()
{
	// Call on base behaviour
	Super::Collect();

	Destroy();
}
