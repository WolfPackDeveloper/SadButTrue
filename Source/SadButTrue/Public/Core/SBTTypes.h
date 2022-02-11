#pragma once

// ----------------------------------------------------------------------------------------------------------------
// This header is for enums and structs used by classes and blueprints accross the game
// Collecting these in a single header helps avoid problems with recursive header includes
// It's also a good place to put things like data table row structs
// ----------------------------------------------------------------------------------------------------------------

//#include "UObject/PrimaryAssetId.h"
#include "SBTTypes.generated.h"

UENUM(BlueprintType)
enum class ESBTAbilityInputID : uint8
{
	None,
	Confirm,
	Cancel,
	Attack
};
