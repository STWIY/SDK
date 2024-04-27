#pragma once

class InventoryOwner : public GameSimObject
{
public:
    uint32_t m_ScriptInventoryID;           // 0xA8
};
SR_ASSERT_CLASS(InventoryOwner, 0xAC);