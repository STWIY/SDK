#pragma once

class GameObject : public GameSetObject
{
public:
    float m_RollRadians;                        // 0x30
    math::Matrix m_Transform;                   // 0x34
};
SR_ASSERT_CLASS(GameObject, 0x74);