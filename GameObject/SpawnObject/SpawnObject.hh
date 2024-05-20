#pragma once

struct SpawnObjectData
{
	const char* mName;
	const char* mScriptClass;
	const char* mClass;
	const char* mTemplate;
	const char* mWeapon;
	const char* mTeam;
	uint8_t mIdleBehaviour;
	uint8_t mCombatBehaviour;

	SR_INLINE SpawnObjectData()
	{
		reinterpret_cast<void(__thiscall*)(void*)>(0x604320)(this);
	}
};