#pragma once

namespace container
{
	template <typename T>
	class ArrayDynamic
	{
	public:
		T* m_pAlloc;
		T* m_pArray;
		T* m_pAllocEnd;
		core::IMemoryAllocator* m_pAllocator;

		//==================================================
		// Functions

		SR_INLINE size_t Size()
		{
			return (static_cast<size_t>(reinterpret_cast<uintptr_t>(m_pArray) - reinterpret_cast<uintptr_t>(m_pAlloc)) / sizeof(T));
		}

		SR_INLINE T Get(size_t p_Index)
		{
			return m_pAlloc[p_Index];
		}
	};
}