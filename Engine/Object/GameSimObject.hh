#pragma once

class GameSimObject : public GameObject
{
public:
    SR_PAD(0x1C);                               // 0x74

    ScriptObject* mSpawner;                     // 0x90

    SR_PAD(0x4);                                // 0x94

    uint8_t m_SpawnUsage;                       // 0x98

    SR_PAD(0xB);                                // 0x99

    uint8_t m_uInvincible;                      // 0xA4
    bool m_UnknownFlag0 : 1;                    // 0xA5
    bool m_Visible : 1;                         // 0xA5
    bool m_UnknownFlag2 : 1;                    // 0xA5
    bool m_UnknownFlag3 : 1;                    // 0xA5
    bool m_UnknownFlag4 : 1;                    // 0xA5
    bool m_UnknownFlag5 : 1;                    // 0xA5
    bool m_UnknownFlag6 : 1;                    // 0xA5
    bool m_UnknownFlag7 : 1;                    // 0xA5

   SR_PAD(0x2);                                 // 0xA6

    //======================================================
    // Virtual Functions

   virtual bool CanBeCulled() = 0;
   virtual void Cull(float p_fFadeTimeMS) = 0;
   virtual renderer::RenderableHandle* GetRenderable() = 0;
   virtual CollidableHandle* GetCollidable() = 0;
   virtual void _VFunc41() = 0;
   virtual void SetCollisionEnabled(bool p_bEnable) = 0;
   virtual void _VFunc43() = 0;
   virtual void _VFunc44() = 0;
   virtual void _VFunc45() = 0;
   virtual bool IsVisible() = 0;
   virtual float GetTimeNotVisible() = 0;
   virtual void _VFunc48() = 0;
   virtual void FadeOut(float p_fMiliseconds, bool p_bForDelete, bool p_bThisObjectOnly) = 0;
   virtual bool IsFadingForDelete() = 0;
   virtual void SetIsFadingForDelete(bool p_bIsFadingForDelete) = 0;
   virtual void _VFunc52() = 0;
   virtual void SetMissionCritical(bool p_bMissionCritical) = 0;
   virtual bool IsMissionCritical() = 0;
   virtual bool IsOverGround(ravenphysics::CollisionObject* p_GroundCollisionObject, bool* p_bFullyOverGround = 0) = 0;
   virtual bool IsOnWorld(ravenphysics::CollisionObject* p_GroundCollisionObject, bool* p_bFullyOverWorld = 0) = 0;
   virtual void _VFunc57() = 0;
   virtual void _VFunc58() = 0;
   virtual uint8_t GetEffectiveSpawnUsage() = 0;
   virtual uint8_t GetSpawnUsage() = 0;
   virtual void SetSpawnUsage(uint8_t p_uSpawnUsage) = 0;
   virtual void SetInvincible(bool p_bAdd, uint8_t p_uBit) = 0;
   virtual bool IsInvincible() = 0;
};
SR_ASSERT_CLASS(GameSimObject, 0xA8);