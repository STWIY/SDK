#pragma once

class GameSimObject : public GameObject
{
public:
    SR_PAD(0x1C);                               // 0x74

    ScriptObject* mSpawner;                     // 0x90

    SR_PAD(0x4);                                // 0x94

    uint8_t m_SpawnUsage;                       // 0x98

    SR_PAD(0xB);                                // 0x99

    bool m_IsInvincible;                        // 0xA4
    bool m_UnknownFlag0 : 1;                    // 0xA5
    bool m_Visible : 1;                         // 0xA5
    bool m_UnknownFlag2 : 1;                    // 0xA5
    bool m_UnknownFlag3 : 1;                    // 0xA5
    bool m_UnknownFlag4 : 1;                    // 0xA5
    bool m_UnknownFlag5 : 1;                    // 0xA5
    bool m_UnknownFlag6 : 1;                    // 0xA5
    bool m_UnknownFlag7 : 1;                    // 0xA5

   SR_PAD(0x2);                                 // 0xA6
};
SR_ASSERT_CLASS(GameSimObject, 0xA8);