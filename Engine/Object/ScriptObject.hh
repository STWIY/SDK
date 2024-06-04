#pragma once

class ScriptObject : public ConsoleObject
{
public:
    const char* m_Name;                         // 0x4

    SR_PAD(0x4);                                // 0x8

    core::Key m_Key;                            // 0xC
    uint32_t m_ObjectID;                        // 0x10
    void* m_UnknownPtr1;                        // 0x14

    SR_PAD(0x4);                                // 0x18

    uint16_t m_ParentGroupID;                   // 0x1C 
    bool m_UnknownFlag0 : 1;                    // 0x1E
    bool m_UnknownFlag1 : 1;                    // 0x1E
    bool m_UnknownFlag2 : 1;                    // 0x1E
    bool m_UnknownFlag3 : 1;                    // 0x1E
    bool m_UnknownFlag4 : 1;                    // 0x1E
    bool m_UnknownFlag5 : 1;                    // 0x1E
    bool m_UnknownFlag6 : 1;                    // 0x1E
    bool m_Sleeping : 1;                        // 0x1E
    bool m_UnknownFlag8 : 1;                    // 0x1F
    bool m_UnknownFlag9 : 1;                    // 0x1F
    bool m_UnknownFlag10 : 1;                   // 0x1F
    bool m_UnknownFlag11 : 1;                   // 0x1F
    bool m_UnknownFlag12 : 1;                   // 0x1F
    bool m_UnknownFlag13 : 1;                   // 0x1F
    bool m_UnknownFlag14 : 1;                   // 0x1F
    bool m_UnknownFlag15 : 1;                   // 0x1F

    //======================================================
    // Virtual Functions

    virtual void _VFunc2() = 0;
    virtual void _VFunc3() = 0;
    virtual void ApplyChanges(bool p_bOnInit) = 0;
    virtual void ChangesApplied(bool p_bOnInit) = 0;
    virtual void ScriptInit() = 0;
    virtual void CodeInit() = 0;
    virtual void UpdatePreSim(FlowTime* p_FlowTime) = 0;
    virtual void UpdatePostSim(FlowTime* p_FlowTime) = 0;
    virtual void LoadingComplete() = 0;
    virtual void UnloadingComplete() = 0;
    virtual void _VFunc12() = 0;
    virtual void Initialize() = 0;
    virtual void Terminate() = 0;
    virtual void _VFunc15() = 0;
    virtual void _VFunc16() = 0;
    virtual void SetVisible(bool p_bVisible) = 0;
    virtual bool IsSleeping() = 0;
    virtual bool SetSleeping(bool p_bSleeping) = 0;
    virtual bool IsCharacter() = 0;
    virtual bool IsVehicle() = 0;
    virtual bool IsStateProp() = 0;
    virtual void _VFunc23() = 0;
    virtual void _VFunc24() = 0;
    virtual bool IsInGameSet(ScriptObject* p_ScriptObject) = 0;
    virtual void _VFunc26() = 0;
    virtual int GetGameSetCount() = 0;
    virtual uint16_t GetGameSetID(int p_iIndex) = 0;
};
SR_ASSERT_CLASS(ScriptObject, 0x20);

//===================================================================
// Preprocessors

#define SR_SCRIPTOBJECT_CONSTRUCTOR(ClassName, ConstructorAddress) \
    SR_INLINE ClassName(const char* p_Name) { reinterpret_cast<void(__thiscall*)(void*, const char*, int)>(ConstructorAddress)(this, p_Name, 0); }