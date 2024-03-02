#pragma once

class InventoryOwner : public GameSimObject
{
public:
    uint32_t m_ScriptInventoryID;
};
SR_ASSERT_CLASS(InventoryOwner, 0xAC);