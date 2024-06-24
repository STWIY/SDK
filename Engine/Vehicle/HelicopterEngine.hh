#pragma once

class HelicopterEngine
{
public:
    VehicleEngine* m_pVehicleEngine;                    // 0x0

    SR_PAD(0x4);

    HelicopterIntenion m_Intention;                     // 0x8

    SR_PAD(0x60);
};
SR_ASSERT_CLASS(HelicopterEngine, 0x78);
