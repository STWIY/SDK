#pragma once

namespace pure3d
{
	class d3dContext : public pddiBaseContext
	{
	public:
		int id;
		d3dState* d3dstate;
		d3dDisplay* display;
		d3dDevice* device;

		SR_PAD(0x8);

		void* defaultShader;
		LPDIRECT3DDEVICE9 d3d;
		LPDIRECT3DSURFACE9 zBuffer;
		D3DVIEWPORT9 viewPort;
		D3DFORMAT validTextures[32];
		d3dPrimStream* stream;
		d3dVertexProgramManager* vertprogs;
		math::Matrix lightViewMatrix[8];
		bool lightStateChanged[8];
		bool anyLightStateChanged;
		__int64 beginTime;
		float ticksToMs;

		SR_STATIC_INLINE d3dContext* GetInstance()
		{
			return *reinterpret_cast<d3dContext**>(0x859C7C);
		}
	};
	SR_ASSERT_CLASS(d3dContext, 0x4F8);
}