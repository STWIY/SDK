#pragma once

class IntentionArbitrator
{
public:
    enum ERequestType 
    {
        ERequestType_NONE = -1,

        ERequestType_COVER,
        ERequestType_ENGAGE,
        ERequestType_MOVE,
        ERequestType_SEARCH,
        ERequestType_TASK,
        ERequestType_TAUNT,
        ERequestType_USE50CAL,
        ERequestType_OVERRIDE_TASK,

        ERequestType_MAX
    };

    enum EPriority 
    {
        EPriority_MIN = ERequestType_NONE,
        EPriority_MAX = ERequestType_MAX
    };


    CharacterIntention* m_pIntention;
    int8_t m_Priorities[ERequestType_MAX];
    int8_t m_MotionRequestPriority;
    int8_t m_FacingRequestPriority;
    int8_t m_GunUpRequestPriority;
    int8_t m_LookRequestPriority;
    int8_t m_ButtonRequestPriority[CharacterIntention::BUTTON_COUNT];
};
SR_ASSERT_CLASS(IntentionArbitrator, 0x30);