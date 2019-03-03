// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Gem.h"
#include "RedGem.generated.h"

/**
 * 
 */
UCLASS()
class KAMIS_DESCENT_API ARedGem : public AGem
{
	GENERATED_BODY()
	
public:
	void Collect() override;

};
