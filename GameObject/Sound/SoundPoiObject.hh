#pragma once

//======================================================
// Remove these when defined

class SoundPoiTemplate;

//======================================================

class SoundPoi
{
public:
    SoundPoi* mpNext;                       // 0x0
    SoundPoi* mpPrev;                       // 0x4
    SoundPoiTemplate* mpSoundPoiTemplate;   // 0x8
    math::Vector* mpPosition;               // 0xC
    bool mIsEnabled;                        // 0x10
};
SR_ASSERT_CLASS(SoundPoi, 0x14);

class SoundPoiObject : public GameObject
{
public:
    SoundPoi mSoundPoi;                         // 0x74
    char* mpTemplateName;                       // 0x88
};
SR_ASSERT_CLASS(SoundPoiObject, 0x8C);