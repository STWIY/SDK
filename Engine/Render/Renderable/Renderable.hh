#pragma once

namespace renderer
{
	class Renderable
	{
	public:

	};

	class RenderableHandle
	{
	public:
		void* vfptr;
		Renderable* m_pRenderable;
	};
}