#pragma once

class GameObject : public GameSetObject
{
public:
    float m_RollRadians;                        // 0x30
    math::Matrix m_Transform;                   // 0x34

    //======================================================
    // Virtual Functions

    virtual void SetPosition(const math::Vector& p_vPosition) = 0;
    virtual void SetDirection(const math::Vector& p_vDirection) = 0;
    virtual void SetRoll(float p_fRoll) = 0;
    virtual void SetTransform(const math::Matrix& p_xTransform) = 0;
    virtual void _VFunc33() = 0;
    virtual void _VFunc34() = 0;
    virtual void GetPosition(math::Vector* p_vPosition) = 0;
    virtual bool HasHealth() = 0;
};
SR_ASSERT_CLASS(GameObject, 0x74);