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

	//=========================================================
	// Functions

    SR_INLINE void FixSeat(CharacterObject* p_Character, VehicleObject* p_Vehicle, int p_iSeatIndex)
    {
        reinterpret_cast<void(__thiscall*)(void*, CharacterObject*, VehicleObject*, int)>(0x5844B0)(this, p_Character, p_Vehicle, p_iSeatIndex);
    }

    SR_INLINE bool ExitCar(int p_iExitDoor = -1)
    {
       return reinterpret_cast<bool(__thiscall*)(void*, int)>(0x584840)(this, p_iExitDoor);
    }

    SR_INLINE bool ExitBoat()
    {
        return reinterpret_cast<bool(__thiscall*)(void*)>(0x585330)(this);
    }

    SR_INLINE bool ExitHelicopter()
    {
        return reinterpret_cast<bool(__thiscall*)(void*)>(0x5843A0)(this);
    }

    SR_INLINE bool ExitAirplane()
    {
        return reinterpret_cast<bool(__thiscall*)(void*)>(0x5842C0)(this);
    }
};
SR_ASSERT_CLASS(PilotState, 0x98);