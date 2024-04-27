#pragma once

namespace container
{
	class Deque
	{
	public:
		void* m_FrontPtr;
		void* m_BackPtr;
		void* m_BlockEndPtr;
		void* m_UnknownPtr;
	};
}