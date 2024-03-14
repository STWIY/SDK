#pragma once

namespace pure3d
{
	class d3dDisplay : public pddiDisplay
	{
	public:
		LPDIRECT3D9 d3d;
		LPDIRECT3DDEVICE9 d3dDevice;
		D3DPRESENT_PARAMETERS d3dpp;
		D3DCAPS9 d3dCaps;
		D3DGAMMARAMP* initialGammaRamp;
		D3DFORMAT colourBufferFormat;
		D3DFORMAT depthBufferFormat;
		D3DDISPLAYMODE origMode;
		LPDIRECT3DTEXTURE9 snapshot;
		bool hwTrans;
		bool hwVertexShader;
		char _Pad1A0[4];
		pure3d::pddiDisplayInit displayInit;
		pure3d::pddiDisplayInfo* displayInfo;
		HWND hWnd;
		bool reset;
		bool isActive;
		bool unknown;
		bool ignoreResize;
		void* backBuffer;
		char _Pad1D4[4];
		int adapterID;
		int nColourBuffer;
		unsigned int bufferMask;
		bool lockToVsync;
		bool asyncSwap;
		char _Pad1E6[2];
		int displayHeight;
		int displayWidth;
		int displayDepth;
		bool forceInit;
		bool ignoreDisplayChange;
		bool needResize;
		LONG windowStyle;
		float gammaR;
		float gammaG;
		float gammaB;
		unsigned int rtHeight;
		unsigned int rtWidth;
		float m_Unknown0;
		float m_HUDScale;
		float m_FOV;
		float m_AspectRatio;
		char _Pad220[20];
	};
	SR_ASSERT_CLASS(d3dDisplay, 0x234);
}