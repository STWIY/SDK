#pragma once

//======================================================
// Remove these when defined

class ActiveVehicleObject;
class VehicleAI;
class VehicleTemplate;

//======================================================

class VehicleObject : GameSimObject
{
public:
    bool mToBeCulled;                           // 0xA8
    VehicleTemplate* mVehicleTemplate;          // 0xAC
    int mDrugs;                                 // 0xB0
    CVLoadObject* mCVLoadObject;                // 0xB4
    float mCachedDistanceFromCameraSqr;         // 0xB8
    float mSpawnSpeed;                          // 0xBC
    bool mLODActive;                            // 0xC0
    ActiveVehicleObject* m_ActiveObject;        // 0xC4
    EVehicleType mVehicleType;                  // 0xC8
    VehicleAI* mAIBehaviour;                    // 0xCC
    uint32_t mAIBehaviorID;                     // 0xD0
    uint32_t mAITaskGroupID;                    // 0xD4
    uint32_t mAICurrentTaskID;                  // 0xD8
    uint32_t mAITargetID;                       // 0xDC
    int m_UnknownInt_0xE0;                      // 0xE0
    int mEngagedDoor;                           // 0xE4
    uint8_t mCharacterSpawnUsage;               // 0xE8
    bool mMainCharacterWasLastDriver : 1;       // 0xE9
    bool mAbandonedVehicle : 1;                 // 0xE9
    bool mIsPoliceVehicle : 1;                  // 0xE9
    bool mIsFadingForDelete : 1;                // 0xE9
    bool mIsNISControlled : 1;                  // 0xE9
    bool mNPCsCanSteal : 1;                     // 0xE9
    bool mAttackedByMelee : 1;                  // 0xE9
    bool mCameraFadeOutRequest : 1;             // 0xE9
    bool mCameraFadeOutFaded : 1;               // 0xEA
};
SR_ASSERT_CLASS(VehicleObject, 0xEC);