#pragma once

namespace pure3d
{
	class d3dState
	{
	public:
		class d3dContext* context;
		LPDIRECT3DDEVICE9 d3d;
		pddiTexture* textures[4];
		unsigned int uvMap[4];
		pddiUVMode uvMode[4];

		SR_PAD(0x10);

		pddiShadeMode shadeMode;
		bool alphaBlendEnable;
		DWORD alphaBlendOp;
		pddiBlendFactor alphaBlendSrc;
		pddiBlendFactor alphaBlendDest;
		bool alphaTest;
		pddiCompareMode alphaCompare;
		DWORD colourOp[5];
		DWORD alphaOp[5];
		DWORD colourArg1[4];
		DWORD colourArg2[4];
		DWORD colourArg3[4];
		DWORD alphaArg1[4];
		DWORD alphaArg2[4];
		DWORD alphaArg3[4];
		DWORD result[4];
		DWORD texTransform[4];
		bool isLit;
		bool twoSided;
		bool m_ForceAlphaTest;
		bool m_LinearMipFilter;
		int m_AnisotropicValue;

		SR_PAD(0x4);

		DWORD alphaRef;
		IDirect3DPixelShader9* pixelShader;
	};
	SR_ASSERT_CLASS(d3dState, 0x120);
}