#pragma once

class GameSetObject : public ScriptObject
{
public:
    uint16_t mGameSets[4];                      // 0x20
    SR_PAD(0x8);                                // 0x28
};
SR_ASSERT_CLASS(GameSetObject, 0x30);