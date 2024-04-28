#pragma once

//======================================================
// Remove these when defined

class AIBehavior;
class AICommandSequencer;
class CharacterContext;
class CharacterObjectCapability;
class CharacterTemplate;
class CollidableHandle;
class CVLoadObject;

enum FightTreePhysicalMode {};

//======================================================

class VehicleObject;
class WeaponStateProp;

class CharacterObject : public InventoryOwner
{
public:
    int mAlertStatus;                                                       // 0xAC
    int mFriendOrFoe;                                                       // 0xB0
    CharacterTemplate* mCharacterTemplate;                                  // 0xB4
    pure3d::UID mCharacterTypeUID;                                          // 0xB8
    TargetSetModule mTargetSetModule;                                       // 0xBC
    uint32_t mAIBehaviorID;                                                 // 0xD8
    uint32_t mAITaskGroupID;                                                // 0xDC
    uint32_t mAICurrentTaskID;                                              // 0xE0
    ScriptObjectPointer<GameSet*> mNPCAttackers;                            // 0xE4
    ScriptObjectPointer<AIBehavior*> mAIBehavior;                           // 0xE8
    core::MemoryAllocator mSegmentAllocator;                                // 0xEC
    uint32_t mMemorySegmentId;                                              // 0xF0
    uint32_t mTalkTargetCharacterId;                                        // 0xF4
    CharacterContext* mCharacterContext;                                    // 0xF8
    char* mDialoguePoiName;                                                 // 0xFC
    int mDialoguePoiCount;                                                  // 0x100
    int mDialogueIdleIndex;                                                 // 0x104
    char* mTeamName;                                                        // 0x108
    float mDeadForTimer;                                                    // 0x10C
    uint8_t mSurfaceIndex;                                                  // 0x110
    bool mDyingFinished;                                                    // 0x111
    bool mIsDeadBody;                                                       // 0x112
    bool mImmuneToExecution;                                                // 0x113
    bool mSetAmbientCollision;                                              // 0x114
    CollidableHandle* mBulletCollisionHierarchy;                            // 0x118
    uint32_t mSavedCollisionState;                                          // 0x11C
    float m_HorizontalTranslationScale;                                     // 0x120
    float m_VerticalTranslationScale;                                       // 0x124
    float m_SpeedScale;                                                     // 0x128
    float m_Animation360Weight;                                             // 0x12C
    pure3d::Name m_ConversationType;                                        // 0x130
    pure3d::Name m_RequestedFightNodeName;                                  // 0x134
    pure3d::Name m_RequestedFightAnimationState;                            // 0x138
    float m_StartFrame;                                                     // 0x13C
    int mMeleeDamage;                                                       // 0x140
    EMeleeAttackType mMeleeAttackType;                                      // 0x144
    EMeleeAttackType mMeleeIncomingAttackType;                              // 0x148
    uint32_t mMeleeAttackID;                                                // 0x14C
    EMeleeAttackDirection mMeleeAttackDirection;                            // 0x150
    ScriptObjectPointer<CharacterObject*> mAttackerCharacterObject;         // 0x154
    int m_LimbObjectId;                                                     // 0x158
    int mHealth;                                                            // 0x15C
    int mMaxHealth;                                                         // 0x160
    bool mIsInjured;                                                        // 0x164
    bool m_KnockedDown;                                                     // 0x165
    bool mLastHitWasToHead;                                                 // 0x166
    bool mHitByGrenade;                                                     // 0x167
    EDamageMagnitude mHitByACar;                                            // 0x168
    bool mHitByExplosion;                                                   // 0x16C
    ECriticalHit mCriticalHit;                                              // 0x170
    float mHealthCallbackThresholdPercent;                                  // 0x174
    ESkeletonJoint m_DamageJoint;                                           // 0x178
    int m_DamageWeapon;                                                     // 0x17C
    int m_DamageDirection;                                                  // 0x180
    uint32_t m_KillerID;                                                    // 0x184
    bool mDisableCriticalHits;                                              // 0x188
    bool mDisableGetHitAnims;                                               // 0x189
    bool m_bHitByExplosionThisFrame;                                        // 0x18A
    bool mWeaponRaisedNPC;                                                  // 0x18B
    uint32_t mOnDyingFinishedSchedule;                                      // 0x18C
    uint32_t mLastVehicleID;                                                // 0x190
    uint32_t mVehicleCollidingWithID;                                       // 0x194  
    uint32_t mOnKilledVehicleID;                                            // 0x198
    int mDisabledCarState;                                                  // 0x19C
    CVLoadObject* mCVLoadObject;                                            // 0x1A0
    float mCachedDistanceFromCameraSqr;                                     // 0x1A4
    uint32_t mVisualLODFlags;                                               // 0x1A8
    Character* mCharacterEngineObject;                                      // 0x1AC
    CharacterIntention mCharacterIntention;                                 // 0x1B0
    IntentionArbitrator mIntentionArbitrator;                               // 0x26C
    bool mDisabled;                                                         // 0x29C
    bool mIsNISControlled;                                                  // 0x29D
    CrouchState mCrouchState;                                               // 0x2A0
    WeaponState mWeaponState;                                               // 0x2AC
    Swim mSwimState;                                                        // 0x2DC
    PilotState m_PilotState;                                                // 0x2E8
    GunUpState m_GunUpState;                                                // 0x380
    SpeedController m_SpeedController;                                      // 0x388
    IdleAnimationController m_IdleAnimationController;                      // 0x390
    bool mIsMidget;                                                         // 0x3A0
    bool m_SteppedInBlood;                                                  // 0x3A1   
    int m_NumStepsInBlood;                                                  // 0x3A4
    SharedInt mCurrentSampleFinishTime;                                     // 0x3A8
    RDJElapsedTimer mLoopedConversationSafetyTimer;                         // 0x3AC
    bool mHasSampleTimingInfoToAssign;                                      // 0x3B4
    bool mConversationCancellationMessageDue;                               // 0x3B5
    bool mAlertStatusIsTimed;                                               // 0x3B6
    int mPreviousAlertStatus;                                               // 0x3B8
    int mTimedAlertStatusExpiry;                                            // 0x3BC
    uint32_t mAttackingStartTime;                                           // 0x3C0
    uint32_t mLastWeaponButtedTime;                                         // 0x3C4
    char mLimbsAvailability;                                                // 0x3C8
    CharacterLocomotionContextType mLocomotionContext;                      // 0x3CC
    CharacterClass mCharacterClass;                                         // 0x3E0  
    bool mRepeatTaskProcessRequested;                                       // 0x3D4
    core::Key mVehicleAITaskName[EVehicleType_MAX];                         // 0x3D8
    uint32_t mVehicleAITask[EVehicleType_MAX];                              // 0x3F0
    ScriptObjectPointer<AICommandSequencer*> m_AICommandSequencer;          // 0x408 
    uint8_t mTimeOfDayOnTime;                                               // 0x40C 
    uint8_t mTimeOfDayOffTime;                                              // 0x40D 
    uint32_t mFleeForCullingCmdSeqID;                                       // 0x410 
    float mOverrideCullDistance;                                            // 0x414 
    int mPaletteIndex;                                                      // 0x418   
    FightTreePhysicalMode mFightTreePhysicalMode;                           // 0x41C
    bool m_StatePropCollisionEnabled;                                       // 0x420
    bool mIsFadingForDelete;                                                // 0x421
    bool mDamageableByMainCharacter;                                        // 0x422
    bool mProcessedTasksAtLeastOnce : 1;                                    // 0x423
    bool mIsDoingLoopedConversationAnim : 1;                                // 0x423
    bool mEligibleForStumble : 1;                                           // 0x423
    bool mIsStaffMember : 1;                                                // 0x423
    bool mIsShoveable : 1;                                                  // 0x423
    bool mHasCustomTunables : 1;                                            // 0x423
    bool mCameraFadeOutFaded : 1;                                           // 0x423
    bool mIsMeleeAttacking : 1;                                             // 0x423
    bool mIsNIS : 1;                                                        // 0x424         
    DBKey mHealthPostKey;                                                   // 0x428
    CharacterObjectCapability* mCapability;                                 // 0x42C

    //=======================================================
    // Functions

    // Gets vehicle/vehicle of mounted weapon.
    SR_INLINE auto GetVehicle()
    {
        return reinterpret_cast<VehicleObject*(__thiscall*)(void*)>(0x5755D0)(this);
    }

    SR_INLINE auto GetWeapon()
    {
        return mWeaponState.mWeapon.Get();
    }

	//=======================================================
	// Static Functions

	SR_STATIC_INLINE auto GetMainCharacter()
	{
		return *reinterpret_cast<CharacterObject**>(0x825A78);
	}
};
SR_ASSERT_CLASS(CharacterObject, 0x430);