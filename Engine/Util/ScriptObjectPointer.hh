#pragma once

template <typename T>
struct ScriptObjectPointer
{
	uint32_t m_ObjectID;
};

template <typename T>
struct StaticScriptObjectPointer : ScriptObjectPointer<T>
{
	core::Key m_Key;
};
