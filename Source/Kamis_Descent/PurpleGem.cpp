// Fill out your copyright notice in the Description page of Project Settings.

#include "PurpleGem.h"

void APurpleGem::Collect()
{
	// Call on base behaviour
	Super::Collect();

	Destroy();
}
