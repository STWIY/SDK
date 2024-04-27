#pragma once

class PositionSetObject : public PositionObject
{
public:
    uint16_t mGameSets[2];                        // 0x2C
};
SR_ASSERT_CLASS(PositionSetObject, 0x30);