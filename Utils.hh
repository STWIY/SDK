#pragma once

namespace SDK
{
	__forceinline bool IsGameVersionValid()
	{
		// Executable timestamp build time
		return (*reinterpret_cast<uint32_t*>(0x400128) == 0x455CAD51);
	}
}