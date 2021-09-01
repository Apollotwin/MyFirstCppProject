// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DangerousActor.generated.h"


UCLASS(Blueprintable, NotPlaceable,HideCategories = ("Replication"))
class MYFIRSTCPPPROJECT_API ADangerousActor : public AActor
{
	GENERATED_BODY()
public:
	ADangerousActor();
};
