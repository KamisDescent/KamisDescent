// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Gem.h"
#include "PurpleGem.generated.h"

/**
 * 
 */
UCLASS()
class KAMIS_DESCENT_API APurpleGem : public AGem
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, Category = "Gem")
	void PurpleCollected();
	
};
