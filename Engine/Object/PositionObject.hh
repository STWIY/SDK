#pragma once

class PositionObject : public ScriptObject
{
public:
    math::Vector m_Position;                    // 0x20
};
SR_ASSERT_CLASS(PositionObject, 0x2C);