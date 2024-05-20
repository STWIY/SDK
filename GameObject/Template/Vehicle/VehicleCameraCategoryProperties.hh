#pragma once

class VehicleCameraCategoryProperties : public ScriptObject
{
public:
    float mTune_RotationSmoothTime;          // 0x20
    float mTune_RotationSmoothTime_Lock;     // 0x24
    float mTune_SlideMinSpeed;               // 0x28
    float mTune_SlideFullSpeed;              // 0x2C
    float mTune_SlideOutTurnDirectionFactor; // 0x30
    float mTune_FOVmin;                      // 0x34
    float mTune_FOVmax;                      // 0x38
    float mTune_FOVCurveShape;               // 0x3C
    float mTune_ZoomMaxFOVFactor;            // 0x40
    float mTune_ZoomAccelFactor;             // 0x44
    float mTune_ZoomAccelTime;               // 0x48
    float mTune_ZoomAccelRecoveryTime;       // 0x4C
    float mTune_ZoomAccelTimeBeforeRecovery; // 0x50
    float mTune_MaxSpeedForZoomOnAccel;      // 0x54
    float mTune_ZoomBrakeFactor;             // 0x58
    float mTune_ZoomBrakeTime;               // 0x5C
    float mTune_ZoomBrakeRecoveryTime;       // 0x60
    float mTune_PitchMin;                    // 0x64
    float mTune_PitchMax;                    // 0x68
    float mTune_PitchOnAccel;                // 0x6C
    float mTune_PitchOnBrake;                // 0x70
    float mTune_PitchOnGearChange;           // 0x74
    float mTune_PitchOnJumping;              // 0x78
    float mTune_PitchOnLanding;              // 0x7C
    float mTune_PitchBlendTime;              // 0x80
    float mTune_PitchLandingBlendTime;       // 0x84
    float mTune_LateralOffsetFactor;         // 0x88
    float mTune_MaxLateralOffsetFactor;      // 0x8C
    float mTune_BaseCameraDistance;          // 0x90
    float mTune_BaseYOffset;                 // 0x94
    float mTune_BasePitch;                   // 0x98

    SR_SCRIPTOBJECT_CONSTRUCTOR(VehicleCameraCategoryProperties, 0x62D6C0);
};
