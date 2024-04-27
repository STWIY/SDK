#pragma once

class IntentionArbitrator
{
public:
    CharacterIntention* m_pIntention;                       // 0x0
    int8_t m_Priorities[8];                                 // 0x4
    int8_t m_MotionRequestPriority;                         // 0xC
    int8_t m_FacingRequestPriority;                         // 0xD
    int8_t m_GunUpRequestPriority;                          // 0xE
    int8_t m_LookRequestPriority;                           // 0xF
    int8_t m_ButtonRequestPriority[32];                     // 0x10
};
SR_ASSERT_CLASS(IntentionArbitrator, 0x30);