#pragma once

//======================================================
// Remove these when defined

class TargetSet;

//======================================================

class TargetSetModule
{
public:
    ScriptObjectPointer<TargetSet*> m_pTargetSet;   // 0x0
    uint32_t m_ChosenTargetID;                      // 0x4
    uint32_t m_ChosenTargetTimeStamp;               // 0x8
    uint32_t m_OverrideStartTime;                   // 0xC
    uint32_t m_CmdSeqID;                            // 0x10
    int m_PickTargetType;                           // 0x14
    bool m_bOverrideChosenTarget;                   // 0x18
};
SR_ASSERT_CLASS(TargetSetModule, 0x1C);