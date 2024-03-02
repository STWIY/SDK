#pragma once

class GameSetObject : public ScriptObject
{
public:
    uint16_t mGameSets[4];
    SR_PAD(0x8);
};
SR_ASSERT_CLASS(GameSetObject, 0x30);