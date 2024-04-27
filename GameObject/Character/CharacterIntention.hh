#pragma once

class LookRequest
{
public:
    enum ELookRequestType
    {
        ELookRequestType_NO_LOOK,
        ELookRequestType_LOOK_USING_RELATIVE_VECTOR,
        ELookRequestType_LOOK_USING_WORLD_DIRECTION,
        ELookRequestType_LOOK_AT_SMART_POSITION,
        ELookRequestType_LOOK_AT_OBJECT
    };

    int m_Unknown0;
    ELookRequestType mType;
    SmartPosition mSmartPos;
    ScriptObjectPointer<GameObject*> mpTargetObject;
    float mBlendTime;
};

class CharacterIntention
{
public:
    enum Button
    {
        BUTTON_ACTIVATE = 0,
        BUTTON_CROUCH,
        BUTTON_CROUCHRUN,
        BUTTON_STAND,
        BUTTON_CROUCHSTAND,
        BUTTON_SELECTPREVIOUSWEAPON,
        BUTTON_SELECTNEXTWEAPON,
        BUTTON_SLOTUP,
        BUTTON_SLOTDOWN,
        BUTTON_SLOTLEFT,
        BUTTON_SLOTRIGHT,
        BUTTON_FIRE,
        BUTTON_ALTERNATEFIRE,
        BUTTON_TALK,
        BUTTON_PROVOKE,
        BUTTON_LOCKTARGET,
        BUTTON_RELEASETARGET,
        BUTTON_VADERALTARGET,
        BUTTON_RECENTERCAMERA,
        BUTTON_SELECT,
        BUTTON_RELOAD,
        BUTTON_TOGGLEWEAPON,
        BUTTON_RAGE,
        BUTTON_ZOOMIN,
        BUTTON_ZOOMOUT,
        BUTTON_SKIPNIS,
        BUTTON_EXECUTE,
        BUTTON_DANCE,
        BUTTON_DANCEMOVE,
        BUTTON_WALLCOVER,
        BUTTON_SPRINT,
        BUTTON_BLOCK,
        BUTTON_COUNT
    };

    short m_ButtonStates[32];                               // 0x0
    float m_LocomotionRingSpeeds[4];                        // 0x40
    math::Vector m_MotionDirection;                         // 0x50
    math::Vector m_FacingDirection;                         // 0x5C
    math::Vector m_CalculatedLookAtDirection;               // 0x68
    math::Vector m_BulletDirection;                         // 0x74
    math::Vector m_BulletStartPosition;                     // 0x80
    LookRequest _mLookRequest;                              // 0x8C
    int m_LocoRing;                                         // 0xB0
    float m_SpeedScale;                                     // 0xB4
    char mPedestrianNavigationOverride;                     // 0xB8
    bool mHasPedestrianFled : 1;                            // 0xB9
    bool m_bUseBulletStartPosition : 1;                     // 0xB9
    bool m_bGunUp : 1;                                      // 0xB9
    bool m_bFacing : 1;                                     // 0xB9
};
SR_ASSERT_CLASS(CharacterIntention, 0xBC);