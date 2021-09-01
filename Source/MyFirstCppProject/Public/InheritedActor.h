// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DangerousActor.h"
#include "InheritedActor.generated.h"


UCLASS(Abstract,NotBlueprintable)
class MYFIRSTCPPPROJECT_API AInheritedActor : public ADangerousActor
{
	GENERATED_BODY()
public:
	AInheritedActor();
	~AInheritedActor();
};
