#pragma once

class Swim
{
public:
    class CharacterObject* m_CharacterObject;   // 0x0
    float m_SharkEatTimer;                      // 0x4
    bool m_SharkTensionMusicPlaying;            // 0x8
    bool m_IsSwimming;                          // 0x9
    bool m_HadWeapon;                           // 0xA
};
SR_ASSERT_CLASS(Swim, 0xC);

//=================================================================================

class IdleAnimationController
{
public:
    class CharacterObject* m_CharacterObject;               // 0x0
    unsigned int m_IdleTime;                                // 0x4
    unsigned int m_RandStartTime;                           // 0x8
    bool m_Idling : 1;                                      // 0xC
};
SR_ASSERT_CLASS(IdleAnimationController, 0x10);

//=================================================================================

class PlayerHeadTracking : public GameSetObject
{
public:
    uint32_t mLastAcquiredTargetID;         // 0x30
    uint32_t mKeepLastTargetUntil;          // 0x34
};
SR_ASSERT_CLASS(PlayerHeadTracking, 0x38);

//=================================================================================

class Stamina : public GameSetObject
{
public:
    float mCurrentStamina;                      // 0x30
    float mTune_MaxStaminaSec;                  // 0x34
    float mTune_StaminaRecoveryRate;            // 0x38
    float mTune_MinimumStartSprintSec;          // 0x3C
};
SR_ASSERT_CLASS(Stamina, 0x40);