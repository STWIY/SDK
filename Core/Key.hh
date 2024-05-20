#pragma once

namespace core
{
	typedef uint32_t Key;

	SR_INLINE Key MakeKey(const char* p_szString, Key p_kSeed = 0)
	{
		return reinterpret_cast<Key(__cdecl*)(const char*, Key)>(0x6DC190)(p_szString, p_kSeed);
	}
}