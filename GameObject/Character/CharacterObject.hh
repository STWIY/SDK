#pragma once

class CharacterObject : public InventoryOwner
{
public:

	//=======================================================
	// Static Functions

	SR_STATIC_INLINE CharacterObject* GetMainCharacter()
	{
		return *reinterpret_cast<CharacterObject**>(0x825A78);
	}
};