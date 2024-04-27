#pragma once

class WeaponPickup : public StatePropObject
{
public:
    bool m_PrimaryClipPopped;                                    // 0x12C
    bool m_SecondaryClipPopped;                                  // 0x12D
    class WeaponTemplate* m_WeaponTemplate;                      // 0x130
    ScriptObjectPointer<CharacterObject*> m_NPCTryingToPickup;   // 0x134
};
SR_ASSERT_CLASS(WeaponPickup, 0x138);