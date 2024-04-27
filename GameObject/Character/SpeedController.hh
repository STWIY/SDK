#pragma once

class SpeedController
{
public:
    ScriptObjectPointer<class CharacterObject*> m_CharacterObject;      // 0x0
    class SpeedDataTemplate* m_SpeedDataTemplate;                       // 0x4
};
SR_ASSERT_CLASS(SpeedController, 0x8);