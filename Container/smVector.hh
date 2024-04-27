#pragma once

template <typename T>
class smVector
{
public:
    T* m_Data;                              // 0x0
    core::MemoryAllocator m_Allocator;          // 0x4
    int16_t m_Count;                            // 0x8
    int16_t m_Size;                             // 0xA
    uint16_t m_UnknownUShort1;                  // 0xC
    uint16_t m_UnknownUShort2;                  // 0xE
};