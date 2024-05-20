#pragma once

class ConsoleObject
{
public:
    void* vfptr;                            // 0x0

    //======================================================
    // Static operators

    SR_STATIC_INLINE void* operator new(size_t p_Size)
    {
        return core::New<void>(p_Size);
    }

    SR_STATIC_INLINE void* operator new[](size_t p_Size)
    {
        return core::New<void>(p_Size);
    }

    SR_STATIC_INLINE void operator delete(void* p_Ptr, size_t p_Size)
    {
        core::Delete(p_Ptr);
    }

    SR_STATIC_INLINE void operator delete[](void* p_Ptr, size_t p_Size)
    {
        core::Delete(p_Ptr);
    }
};
SR_ASSERT_CLASS(ConsoleObject, 0x4);