#pragma once

//======================================================
// Remove these when defined

class VehicleTemplate;
class VehicleLocomotion;
class NISVehicleLocomotion;
class PlayerVehicleIntention;
class FireObject;

namespace SoundManager
{
    class SoundPlayerHandle;
}

typedef container::ArrayDynamic<void*> VehicleBehaviourCollection;

//======================================================

class ActiveVehicleObject
{
public:
    enum CharacterRoleInVehicle
    {
        ROLE_DRIVER,
        ROLE_PASSENGER_FR,    //Front Right
        ROLE_PASSENGER_BL,    //Back Left
        ROLE_PASSENGER_BR,    //Back Right
        ROLE_GUNNER1,
        ROLE_GUNNER2,
        MAX_ROLE_TYPES
    };

    enum PluginStatePropType
    {
        PLUGIN_PROP_MOUNTED_GUN_1,
        PLUGIN_PROP_MOUNTED_GUN_2,
        PLUGIN_PROP_FIXED_GUN_1,
        PLUGIN_PROP_FIXED_GUN_2,
        MAX_PLUGIN_STATEPROPS,
    };

    void* vfptr;                                                                     // 0x0
    uint32_t m_LastCharacterToApplyDamageID;                                         // 0x4
    ScriptObjectPointer<VehicleObject*> mVehicleObject;                              // 0x8
    VehicleTemplate* mVehicleTemplate;                                               // 0xC
    VehicleLocomotion* mVehicleLocomotion;                                           // 0x10
    int mSoundCollisionType;                                                         // 0x14
    SoundManager::SoundPlayerHandle* mSoundPlayerHandle;                             // 0x18
    NISVehicleLocomotion* mNISVehicleLocomotion;                                     // 0x1C
    ScriptObjectPointer<StatePropObject*> mPluginStateProps[MAX_PLUGIN_STATEPROPS];  // 0x20
    VehicleBehaviourCollection mBehaviourCollection;                                 // 0x30
    PlayerVehicleIntention* mPlayerIntention;                                        // 0x40
    bool mEngineCreated;                                                             // 0x44
    VehicleEngine mEngine;                                                           // 0x48
    int mCurrentPhysicsLOD;                                                          // 0x61C
    float mStoppedTimer;                                                             // 0x620
    ScriptObjectPointer<CharacterObject*> mCharacters[MAX_ROLE_TYPES];               // 0x624
    bool mPilotable;                                                                 // 0x63C
    bool mUseParticles;                                                              // 0x63D
    bool mLocked;                                                                    // 0x63E
    float mDamageScale;                                                              // 0x640
    ESpawnType mSpawnType;                                                           // 0x644
    ScriptObjectPointer<FireObject*> mFireObject;                                    // 0x648
    bool mHealthMeterDisplayEnabled;                                                 // 0x64C
    int mCurrentHealthState;                                                         // 0x650
    int mResetMotionHack;                                                            // 0x654

    //=======================================================
    // Functions

    SR_INLINE auto IsPlayerControlled()
    {
        reinterpret_cast<bool(__thiscall*)(void*)>(0x636610)(this);
    }

    SR_INLINE auto GetCharacterWithRole(CharacterRoleInVehicle p_eRole)
    {
        reinterpret_cast<CharacterObject*(__thiscall*)(void*, CharacterRoleInVehicle)>(0x637370)(this, p_eRole);
    }

    SR_INLINE auto GetPluginStatePropObject(PluginStatePropType p_ePropType)
    {
        reinterpret_cast<StatePropObject*(__thiscall*)(void*, PluginStatePropType)>(0x636F10)(this, p_ePropType);
    }

    SR_INLINE auto GetVelocity()
    {
        reinterpret_cast<math::Vector*(__thiscall*)(void*)>(0x636EF0)(this);
    }
};
SR_ASSERT_CLASS(ActiveVehicleObject, 0x658);