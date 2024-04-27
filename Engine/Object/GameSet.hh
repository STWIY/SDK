#pragma once

class GameSet : public GameSetObject
{
public:
    smVector<ScriptObject*> m_ScriptObjects;    // 0x30
};
SR_ASSERT_CLASS(GameSet, 0x40);