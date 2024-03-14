#pragma once

namespace pure3d
{
	class pddiCamera
	{
	public:
		float nearPlane;
		float farPlane;
		float fov;
		float aspect;
	};

	class pddiFloatRect
	{
	public:
		float left;
		float top;
		float right;
		float bottom;
	};

	class pddiMatrixStack : public pddiStack<math::Matrix>
	{
	public:
	};

	//==========================================

	class pddiState
	{
	public:
		void* vfptr;
	};

	class pddiRenderState : public pddiState
	{
	public:
		pddiCullMode cullMode;
		bool zEnabled;
		pddiCompareMode zCompare;
		bool zWrite;
		pddiFillMode fillMode;
		bool redWrite;
		bool greenWrite;
		bool blueWrite;
		bool alphaWrite;
	};
	SR_ASSERT_CLASS(pddiRenderState, 0x1C);

	class pddiViewState : public pddiState
	{
	public:
		pddiColour clearColour;
		float clearDepth;
		uint32_t clearStencil;
		pddiProjectionMode projectionMode;
		pddiFloatRect viewWindow;
		pddiCamera camera;
	};
	SR_ASSERT_CLASS(pddiViewState, 0x34);

	//==========================================

	class pddiContextState
	{
	public:
		uint32_t currentFrame;
		uint32_t inFrame;
		uint32_t contextFlags;
		pddiMatrixStack* matrixStack[5];
		void* viewStateStack;
		void* renderStateStack;
		void* lightingStateStack;
		void* fogStateStack;
		void* stencilStateStack;
		pddiViewState* viewState;
		pddiRenderState* renderState;
		void* lightingState;
		void* fogState;
		void* stencilState;
	};
	SR_ASSERT_CLASS(pddiContextState, 0x48);

	//==========================================

	class pddiBaseContext : public pddiRenderContext
	{
	public:
		math::Matrix m_UnknownMatrix0;
		math::Matrix m_UnknownMatrix1;

		SR_PAD(0x40);

		math::Matrix m_UnknownMatrix2;

		SR_PAD(0x4);

		pddiDisplay* display;
		pddiDevice* device;
		pddiContextState state;
		float stats[40];
		pddiFont* font;
		bool displayStats;
		bool supressPrimTally;
		void* m_UnknownPtr0;
		bool m_UnknownBool0;
		bool m_UnknownBool1;
		void* m_UnknownPtr1;
	};
	SR_ASSERT_CLASS(pddiBaseContext, 0x214);
}