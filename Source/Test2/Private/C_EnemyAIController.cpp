#include "C_EnemyAIController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"

void AC_EnemyAIController::BeginPlay()
{
	Super::BeginPlay();

	// Get player pawn at game start
	PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
}

void AC_EnemyAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Move to player every tick (basic chase)
	if (PlayerPawn)
	{
		MoveToActor(PlayerPawn, 5.0f); // 5 units is acceptable radius
	}
}