#pragma once

namespace pure3d
{
	template <typename T>
	class pddiStack
	{
	public:
		void* vfptr;
		int depth;
		int top;
		T* stack;
	};
}