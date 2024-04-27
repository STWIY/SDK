#pragma once

class GunUpState
{
public:
    class CharacterObject* mCharacterObject;                // 0x0
    bool mIsGunUp;                                          // 0x4
};
SR_ASSERT_CLASS(GunUpState, 0x8);