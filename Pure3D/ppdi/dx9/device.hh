#pragma once

namespace pure3d
{
	class d3dDevice : public pddiDevice
	{
	public:
		void* context;
		int nDisplay;
		pddiDisplayInfo* displayInfo;
		LPDIRECT3D9 direct3D;
	};
	SR_ASSERT_CLASS(d3dDevice, 0x1C);
}