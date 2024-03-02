#pragma once

class ScriptObject : public ConsoleObject
{
public:
    const char* m_Name;

    SR_PAD(0x4);

    core::Key m_Key;
    void* m_UnknownPtr0;
    class UnknownScriptObjectEntry* m_UnknownPtr1;

    SR_PAD(0x4);

    uint16_t m_ParentGroupID;
    bool m_UnknownFlag0 : 1;
    bool m_UnknownFlag1 : 1;
    bool m_UnknownFlag2 : 1;
    bool m_UnknownFlag3 : 1;
    bool m_UnknownFlag4 : 1;
    bool m_UnknownFlag5 : 1;
    bool m_UnknownFlag6 : 1;
    bool m_Sleeping : 1;
    bool m_UnknownFlag8 : 1;
    bool m_UnknownFlag9 : 1;
    bool m_UnknownFlag10 : 1;
    bool m_UnknownFlag11 : 1;
    bool m_UnknownFlag12 : 1;
    bool m_UnknownFlag13 : 1;
    bool m_UnknownFlag14 : 1;
    bool m_UnknownFlag15 : 1;
};
SR_ASSERT_CLASS(ScriptObject, 0x20);