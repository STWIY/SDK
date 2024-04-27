#pragma once

struct DoorCheckRay
{
    float m_Length;
    float m_Radius;
    math::Vector m_Offset;
};

//=================================================================================

class PilotState
{
public:
    enum EState
    {
        EState_Inactive = 0x0,
        EState_Entering,
        EState_SittingDown,
        EState_Driving,
        EState_Passenger,
        EState_Passenger_RailShooter,
        EState_Exiting,
        EState_BailOut,
        EState_WaitOnAnimation,
        EState_Sleep,
        EState_MAX
    };

    enum ESubState
    {
        ESubState_Init = 0x0,
        ESubState_Target,
        ESubState_Driving_Forward,
        ESubState_Driving_Reverse,
        ESubState_Passenger_Ride,
        ESubState_Passenger_Fire,
        ESubState_50Cal,
        ESubState_MAX,
    };

    EState m_State;                                         // 0x0
    EState m_NextState;                                     // 0x4
    ESubState m_SubState;                                   // 0x8
    int m_AnimationType;                                    // 0xC
    uint8_t m_SeatIndex;                                    // 0x10
    uint8_t m_ExitDoor;                                     // 0x11
    float m_TargetAnimationWeight;                          // 0x14
    DoorCheckRay m_DoorCheckRays[2];                        // 0x18
    float m_Force;                                          // 0x40
    float m_ForceDuration;                                  // 0x44
    math::Matrix m_LastCharacterRootWorldMatrix;            // 0x48
    bool m_InitializeOpenDoorTimer;                         // 0x88
    bool m_InitializeCloseDoorTimer;                        // 0x89
    bool m_EnteredRightToDrive;                             // 0x8A
    bool m_HackIsEntering;                                  // 0x8B
    CharacterObject* m_Character;                           // 0x8C
    ScriptObjectPointer<class VehicleObject*> m_Vehicle;    // 0x90
    InventoryId m_VehicleInventoryId;                       // 0x94
};
SR_ASSERT_CLASS(PilotState, 0x98);