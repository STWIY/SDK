#pragma once

namespace scarface
{
	class CCharacterObject // InventoryOwner, GameSimObject, GameObject, GameSetObject, ScriptObject, ConsoleObject
	{
	public:
		SR_PAD(0x158); // FIX-ME: This padding need to be removed when setting up other derived classes...

		int m_Health;
		int m_MaxHealth;
		bool m_IsInjured;
		bool m_KnockedDown;
		bool m_LastHitWasToHead;
		bool m_HitByGrenade;
		EDamageMagnitude m_HitByACar;
		bool m_HitByExplosion;

		//=======================================================
		// Virtual Functions

		virtual void Unknown0() = 0;
		virtual void Unknown1() = 0;
		virtual void Unknown2() = 0;
		virtual void Unknown3() = 0;
		virtual void ApplyChanges(bool p_OnInit) = 0;

		//=======================================================
		// Static Functions

		__forceinline static CCharacterObject* GetMainCharacter()
		{
			return *reinterpret_cast<CCharacterObject**>(SR_RVA(0x825A78));
		}
	};
}