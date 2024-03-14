#pragma once

namespace pure3d
{
	class pddiObject
	{
	public:
		int refCount;
		int lastError;

		virtual void AddRef() = 0;
		virtual void Release() = 0;
		virtual int GetLastError() = 0;
		virtual ~pddiObject() = 0;
	};
	SR_ASSERT_CLASS(pddiObject, 0xC);

	//==========================================================

	class pddiRenderContext : public pddiObject
	{
	public:

	};
	SR_ASSERT_CLASS(pddiRenderContext, 0xC);

	//==========================================================

	class pddiDevice : public pddiObject
	{
	public:

	};
	SR_ASSERT_CLASS(pddiDevice, 0xC);

	//==========================================================

	class pddiDisplay : public pddiObject
	{
	public:

	};
	SR_ASSERT_CLASS(pddiDisplay, 0xC);

	//==========================================================

	struct pddiModeInfo
	{
		int width;
		int height;
		int bpp;
	};

	class pddiDisplayInfo
	{
	public:
		int id;
		char description[256];
		unsigned int pci;
		unsigned int vendor;
		bool fullscreenOnly;
		unsigned int caps;
		int nDisplayModes;
		pddiModeInfo* modeInfo;
	};
	SR_ASSERT_CLASS(pddiDisplayInfo, 0x11C);

}