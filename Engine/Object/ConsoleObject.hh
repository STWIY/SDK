#pragma once

class ConsoleObject
{
public:
    //======================================================
    // Virtual Functions

    virtual void* GetClassRep() = 0;
    virtual void Destructor(bool p_bDelete) = 0;

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