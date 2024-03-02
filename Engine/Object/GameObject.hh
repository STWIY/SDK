#pragma once

class GameObject : public GameSetObject
{
public:
    float m_RollRadians;
    math::Matrix m_Matrix;
};
SR_ASSERT_CLASS(GameObject, 0x74);