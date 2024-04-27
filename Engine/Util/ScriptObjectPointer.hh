#pragma once

template <typename T>
struct ScriptObjectPointer
{
	uint32_t m_ObjectID;

	SR_STATIC_INLINE T Get()
	{
		return reinterpret_cast<T(__cdecl*)(uint32_t)>(0x443A00)(m_ObjectID);
	}
};

template <typename T>
struct StaticScriptObjectPointer : ScriptObjectPointer<T>
{
	core::Key m_Key;

	SR_STATIC_INLINE T Get()
	{
		return reinterpret_cast<T(__thiscall*)(void*, core::Key)>(0x4BF5D0)(this, m_Key);
	}
};
