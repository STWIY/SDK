#pragma once

class ActionMap : public ScriptObject
{
public:
    ActionMap* m_pNext;                         // 0x20
    ActionMap* m_pPrev;                         // 0x24
    bool m_bBlockLocalEvents;                   // 0x28
    bool m_bBlockAllEvents;                     // 0x29
    bool m_bPushed;                             // 0x2A
    smVector<void> m_Events;                    // 0x2C

    SR_SCRIPTOBJECT_CONSTRUCTOR(ActionMap, 0x42C3A0);

    //=========================================================
    // Functions

    SR_INLINE void Push()
    {
        reinterpret_cast<void(__thiscall*)(void*)>(0x42C1F0)(this);
    }

    SR_INLINE void Pop()
    {
        reinterpret_cast<void(__thiscall*)(void*)>(0x42C1A0)(this);
    }

    SR_INLINE float GetValue(core::Key p_kName)
    {
        return reinterpret_cast<float(__thiscall*)(void*, core::Key)>(0x42C690)(this, p_kName);
    }

    // 0.f -> 1.f
    SR_INLINE float GetValueClamped(core::Key p_kName)
    {
        return reinterpret_cast<float(__cdecl*)(void*, core::Key)>(0x4CB210)(this, p_kName);
    }

    SR_INLINE bool BindEvent(const char* p_szController, const char* p_szButton, const char* p_szAction, void* p_Function = nullptr, void* p_Command = nullptr, int p_iTimer = -1, bool p_bUnknown0 = false, bool p_bUnknown1 = false, bool p_bBlocking = false)
    {
        return reinterpret_cast<bool(__thiscall*)(void*, const char*, const char*, const char*, void*, void*, int, bool, bool, bool, bool)>(0x42C8B0)(this, p_szController, p_szButton, p_szAction, p_Function, p_Command, p_iTimer, p_bUnknown0, p_bUnknown1, p_bBlocking, true);
    }
};