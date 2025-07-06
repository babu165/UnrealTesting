#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C_EnemyAIController.generated.h"
#include "AIController.h"

UCLASS()
class TEST2_API AC_EnemyAIController : public AAIController
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:
	APawn* PlayerPawn;
};
