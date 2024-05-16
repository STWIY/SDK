#pragma once

class StreamSlot
{
public:
	const char* m_szName;

	//=========================================================
	// Static Functions

	SR_STATIC_INLINE StreamSlot* Find(const char* p_szName)
	{
		return reinterpret_cast<StreamSlot*(__cdecl*)(const char*)>(0x4B7E80)(p_szName);
	}
};