#pragma once

namespace ravenphysics
{
	class CollisionObject
	{
	public:
		void* vfptr;

		SR_PAD(0x4);

		math::AABB m_BoundingBox;
	};
}