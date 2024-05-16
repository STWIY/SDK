#pragma once

//==========================================================================

enum ESpawnLoadStatus
{
    ESpawnLoadStatus_Loaded,
    ESpawnLoadStatus_Unloaded,
    ESpawnLoadStatus_Loading
};

//==========================================================================

enum ESpawnUsage
{
    ESpawnUsage_None = 0,
    ESpawnUsage_Group = 1 << 0,
    ESpawnUsage_Traffic = 1 << 1,
    ESpawnUsage_Ambient = 1 << 2,
    ESpawnUsage_Dealer = 1 << 3,
    ESpawnUsage_Gang = 1 << 4,
    ESpawnUsage_Cop = 1 << 5,
    ESpawnUsage_Mission = 1 << 6,
    ESpawnUsage_NIS = 1 << 7,
    ESpawnUsage_ANY = 1 << 8,

    ESpawnUsage_AmbientGroup = ESpawnUsage_Group | ESpawnUsage_Ambient
}; 

//==========================================================================

enum ESpawnStatus
{
    ESpawnStatus_TrafficCommon,
    ESpawnStatus_TrafficUnique,
    ESpawnStatus_TrafficRare,
    ESpawnStatus_MAX
};

//==========================================================================

enum ESpawnType
{
    ESpawnType_Character,
    ESpawnType_Car,
    ESpawnType_Boat,
    ESpawnType_Plane,
    ESpawnType_Helicopter,
    ESpawnType_MAX,
    ESpawnType_MainCharacter,
    ESpawnType_UNDEFINED,
    ESpawnType_ALL = ESpawnType_MAX
};

//==========================================================================

enum ESpawnTemplateType
{
    ESpawnTemplateType_Character,
    ESpawnTemplateType_Vehicle,
    ESpawnTemplateType_MAX,
    ESpawnTemplateType_ALL = ESpawnTemplateType_MAX
};