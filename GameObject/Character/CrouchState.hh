#pragma once

class CrouchState
{
public:
    enum ECrouchLocomotionState
    {
        ECrouchLocomotionState_None = 0x0,
        ECrouchLocomotionState_AllWay,
        ECrouchLocomotionState_Run
    };

    class CharacterObject* mCharacterObject;            // 0x0
    ECrouchLocomotionState mCrouchLocomotionState;      // 0x4
    uint32_t mCrouchStartTime;                          // 0x8
};
SR_ASSERT_CLASS(CrouchState, 0xC);