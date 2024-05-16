#pragma once

class StreamPackage
{
public:
	const char* m_szName;
	StreamClient* m_pClient;
	void* m_pClientData;
	StreamSlot* m_pSlot;

	// TODO: Finish members...

	//=========================================================
	// Functions

	SR_INLINE void SetLoadPriority(uint8_t p_LoadPriority)
	{
		reinterpret_cast<void(__thiscall*)(void*, uint8_t)>(0x4B6830)(this, p_LoadPriority);
	}

	SR_INLINE void Activate(StreamSlot* p_StreamSlot)
	{
		reinterpret_cast<void(__thiscall*)(void*, StreamSlot*, int)>(0x4B6920)(this, p_StreamSlot, 0);
	}
};