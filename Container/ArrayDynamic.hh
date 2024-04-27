#pragma once

namespace container
{
	class ArrayDynamic
	{
	public:
		void* m_FrontPtr;
		void* m_BackPtr;
		void* m_BlockEndPtr;

		SR_PAD(0x4);
	};
}