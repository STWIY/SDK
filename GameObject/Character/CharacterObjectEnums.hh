#pragma once

//=======================================================================
// 
//  Character
// 
//=======================================================================

enum CharacterClass
{
    MISSION_GAMEPLAY_CHARACTER,
    WORLD_GAMEPLAY_CHARACTER,
    WORLD_SIMULATION_CHARACTER
};

enum CharacterLocomotionContextType
{
    CLC_INVALID = -1,
    CLC_WALKING_ON_LAND,
    CLC_ATTACHED_TO_VEHICLE,
    CLC_ATTACHED_TO_MOUNTED_WEAPON,
    CLC_MAX_CONTEXTS
};

//=======================================================================
// 
//  Attack / Damage
// 
//=======================================================================

enum ECriticalHit
{
    ECriticalHit_NONE,
    ECriticalHit_Head,
    ECriticalHit_LeftNut,
    ECriticalHit_RightNut,
    ECriticalHit_LeftKidney,
    ECriticalHit_RightKidney,
    ECriticalHit_Arm,
    ECriticalHit_Leg,
    ECriticalHit_Groin,
};

enum EDamageMagnitude
{
    EDamageMagnitude_none,
    EDamageMagnitude_Easy,
    EDamageMagnitude_Meduim,
    EDamageMagnitude_Hard
};

enum EMeleeAttackDirection 
{
    EMeleeAttackDirection_LEFT,
    EMeleeAttackDirection_RIGHT,
    EMeleeAttackDirection_FRONT,
    EMeleeAttackDirection_BACK,
    EMeleeAttackDirection_UP,
    EMeleeAttackDirection_DOWN,
};

enum EMeleeAttackType 
{
    EMeleeAttackType_NONE,
    EMeleeAttackType_EasyA,
    EMeleeAttackType_EasyB,
    EMeleeAttackType_EasyC,
    EMeleeAttackType_Shove,
    EMeleeAttackType_HardA,
    EMeleeAttackType_HardB,
    EMeleeAttackType_HardC,
    EMeleeAttackType_HardD,
    EMeleeAttackType_GroinKick,
    EMeleeAttackType_Shark,
    EMeleeAttackType_Lunge,
    EMeleeAttackType_WeaponButt,
};