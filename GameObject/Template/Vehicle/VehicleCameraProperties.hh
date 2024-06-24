#pragma once

class VehicleCameraProperties : public ScriptObject
{
public:
    float mCameraDistanceScale;                                                // 0x20
    float mCameraYOffsetScale;                                                 // 0x24
    float mCameraFOVScale;                                                     // 0x28
    float mCameraPitchAdjust;                                                  // 0x2C
    float mCameraPivotShift;                                                   // 0x30
    float mCameraRollFactor;                                                   // 0x34
    StringTableEntry mCategoryPropertiesName;                                  // 0x38
    ScriptObjectPointer<VehicleCameraCategoryProperties*> mCategoryProperties; // 0x3C

    SR_STATIC_INLINE VehicleCameraProperties* CreateInstance(const char* p_Name)
    {
        return reinterpret_cast<VehicleCameraProperties*(__thiscall*)(void*, const char*, int)>(0x62F500)(core::New<VehicleCameraProperties>(), p_Name, 0);
    }
};
