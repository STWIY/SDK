#pragma once

class ScriptObject : public ConsoleObject
{
public:
    const char* m_Name;                         // 0x4

    SR_PAD(0x4);                                // 0x8

    core::Key m_Key;                            // 0xC
    uint32_t m_ObjectID;                        // 0x10
    void* m_UnknownPtr1;                        // 0x14

    SR_PAD(0x4);                                // 0x18

    uint16_t m_ParentGroupID;                   // 0x1C 
    bool m_UnknownFlag0 : 1;                    // 0x1E
    bool m_UnknownFlag1 : 1;                    // 0x1E
    bool m_UnknownFlag2 : 1;                    // 0x1E
    bool m_UnknownFlag3 : 1;                    // 0x1E
    bool m_UnknownFlag4 : 1;                    // 0x1E
    bool m_UnknownFlag5 : 1;                    // 0x1E
    bool m_UnknownFlag6 : 1;                    // 0x1E
    bool m_Sleeping : 1;                        // 0x1E
    bool m_UnknownFlag8 : 1;                    // 0x1F
    bool m_UnknownFlag9 : 1;                    // 0x1F
    bool m_UnknownFlag10 : 1;                   // 0x1F
    bool m_UnknownFlag11 : 1;                   // 0x1F
    bool m_UnknownFlag12 : 1;                   // 0x1F
    bool m_UnknownFlag13 : 1;                   // 0x1F
    bool m_UnknownFlag14 : 1;                   // 0x1F
    bool m_UnknownFlag15 : 1;                   // 0x1F
};
SR_ASSERT_CLASS(ScriptObject, 0x20);

//===================================================================
// Preprocessors

#define SR_SCRIPTOBJECT_CONSTRUCTOR(ClassName, ConstructorAddress) \
    SR_INLINE ClassName(const char* p_Name) { reinterpret_cast<void(__thiscall*)(void*, const char*, int)>(ConstructorAddress)(this, p_Name, 0); }