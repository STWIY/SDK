#pragma once

namespace pure3d
{
	class pddiDisplayInit
	{
	public:
		int xsize;
		int ysize;
		int bpp;
		unsigned int bufferMask;
		int nColourBuffer;
		int nSamples;
		pddiDisplayMode displayMode;
		bool lockToVsync;
		bool asyncSwap;
		bool enableSnapshot;
	};
	SR_ASSERT_CLASS(pddiDisplayInit, 0x20);
}