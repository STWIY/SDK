#pragma once

class GameSimObject : public GameObject
{
public:
    SR_PAD(0x24);

    uint8_t m_SpawnUsage;

    SR_PAD(0xB);

    bool m_IsInvincible;
    __int8 m_UnknownFlag0 : 1;
    __int8 m_Visible : 1;
    __int8 m_UnknownFlag2 : 1;
    __int8 m_UnknownFlag3 : 1;
    __int8 m_UnknownFlag4 : 1;
    __int8 m_UnknownFlag5 : 1;
    __int8 m_UnknownFlag6 : 1;
    __int8 m_UnknownFlag7 : 1;

    SR_PAD(0x2);
};
SR_ASSERT_CLASS(GameSimObject, 0xA8);