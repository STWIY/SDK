#pragma once

//==============================================================
// Declarations

enum ESpawnType;
class VehicleObject;
class RoadPath;
class SpawnObject;
struct SpawnObjectData;

//==============================================================
// Class

class CVManager
{
public:
    //=========================================================
    // Static Functions

    SR_STATIC_INLINE CVManager* GetInstance()
    {
        return *reinterpret_cast<CVManager**>(0x822AF8);
    }

    //=========================================================
    // Functions

    SR_INLINE VehicleObject* __thiscall RequestVehicleSpawn(
        ESpawnType p_eSpawnType,
        SpawnObject* p_SpawnObject,
        SpawnObjectData* p_SpawnObjectData,
        const math::Vector& p_vecPosition,
        const math::Vector& p_vecDirection,
        float p_fSpawnSpeed = 0.f,
        RoadPath* p_RoadPath = nullptr,
        SpawnObjectData** p_PassangerSpawnData = nullptr,
        int p_iPassangerSpawnCount = 0,
        SpawnObjectData** p_GunnerSpawnData = nullptr,
        int p_iGunnerSpawnCount = 0,
        int p_iPaletteIndex = -1,
        bool p_bTurnOnTime = false,
        bool p_bTurnOffTime = false,
        bool p_bUnknownBool = false)
    {
        return reinterpret_cast<VehicleObject*(__thiscall*)(void*, ESpawnType, void*, SpawnObjectData*, const math::Vector&, const math::Vector&, float, RoadPath*, SpawnObjectData**, int, SpawnObjectData**, int, int, bool, bool, bool)>(0x4EDDF0)(this, p_eSpawnType, p_SpawnObject, p_SpawnObjectData, p_vecPosition, p_vecDirection, p_fSpawnSpeed, p_RoadPath, p_PassangerSpawnData, p_iPassangerSpawnCount, p_GunnerSpawnData, p_iGunnerSpawnCount, p_iPaletteIndex, p_bTurnOnTime, p_bTurnOffTime, p_bUnknownBool);
    }
};