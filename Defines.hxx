#pragma once

#pragma once

//==============================================================================
// Defines

#ifndef SR_RVA
    #define SR_RVA(x)          (x)
#endif
#define SR_RVA_PTR(x)		    reinterpret_cast<void*>(SR_RVA(x))
#define SR_CONST_CHAR(x)	    reinterpret_cast<const char*>(SR_RVA(x))
#define SR_THIS_OFFSET(x)	    (reinterpret_cast<uintptr_t>(this) + x)

//==============================================================================
// Inline

#ifndef SR_INLINE
    #define SR_INLINE __forceinline
#endif

//==============================================================================
// Asserts

#define SR_ASSERT_CLASS(className, classSize) \
    static_assert(sizeof(className) == classSize, "Size of class: '" #className "' is invalid!")
#define SR_ASSERT_STRUCT(structName, structSize) \
    static_assert(sizeof(structName) == structSize, "Size of struct: '" #structName "' is invalid!")

//==============================================================================
// Pads

#define SR_PAD_INSERT(x, y) x ## y
#define SR_PAD_DEFINE(x, y) SR_PAD_INSERT(x, y)
#define SR_PAD(size) char SR_PAD_DEFINE(padding_, __LINE__)[size]
#define SR_PAD_ALIGN(size) private: SR_PAD(size); public: