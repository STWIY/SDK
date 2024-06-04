#pragma once

class VehicleEngine
{
public:
	int _Pad0x0;
	SR_PAD(0x5D0); // TODO
};
SR_ASSERT_CLASS(VehicleEngine, 0x5D4);