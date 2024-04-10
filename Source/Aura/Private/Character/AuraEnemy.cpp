// Copyright Pablo Farias


#include "Character/AuraEnemy.h"
#include "DrawDebugHelpers.h"
#include "Aura/Aura.h"


AAuraEnemy::AAuraEnemy()
{
	Enemy->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

	Enemy->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
	Weapon->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
}

void AAuraEnemy::HighlightActor()
{
	Enemy->SetRenderCustomDepth(true);
	Weapon->SetRenderCustomDepth(true);
}

void AAuraEnemy::UnHighlightActor()
{
	Enemy->SetRenderCustomDepth(false);
	Weapon->SetRenderCustomDepth(false);
}

