#pragma once

class MountedWeaponStateProp : public WeaponStateProp
{
public:
    bool mNPCMountable;                                      // 0x160
    ScriptObjectPointer<VehicleObject*> mVehicleObject;      // 0x164
    ScriptObjectPointer<CharacterObject*> mNPCTryingToMount; // 0x168
    math::Vector mExitPosition;                              // 0x16C
    float mRotationArcDegrees;                               // 0x178
    float mHalfRotationArcRadians;                           // 0x17C
    bool m_AttachedToVehicle;                                // 0x180
    class MortarTemplate* mMortarTemplate;                   // 0x184
};
SR_ASSERT_CLASS(MountedWeaponStateProp, 0x188);