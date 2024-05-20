#pragma once

class CVLoadObject : public StreamClient
{
public:
	const char* m_Name;
	StreamPackage* m_StreamPackage;
	class StreamedTemplate* m_StreamedTemplate;
	const char* m_ScriptClass;
	uint8_t m_HistoryCount;
	uint8_t m_SpawnUsage;
	uint8_t m_SpawnLoadStatus : 7;
	bool m_HasClut : 1;
	bool m_TransitionalTrafficUsage : 1;
	uint8_t m_TrafficSpawnUsageCount : 7;
	uint8_t m_NISSpawnUsageCount;
	uint8_t m_GroupSpawnUsageCount;
	uint8_t m_AmbientSpawnUsageCount;
	uint8_t m_DealerSpawnUsageCount;
	uint8_t m_GangSpawnUsageCount;
	uint8_t m_CopSpawnUsageCount;
	uint8_t m_MissionSpawnUsageCount;
	uint8_t m_SpawnStatus : 4;
	uint8_t m_SpawnType : 4;

	//=========================================================
	// Static Functions
	
	SR_STATIC_INLINE StreamSlot* GetStreamSlot(ESpawnTemplateType p_TemplateType)
	{
		return reinterpret_cast<StreamSlot*(__cdecl*)(ESpawnTemplateType)>(0x5F73E0)(p_TemplateType);
	}

	//=========================================================
	// Functions

	SR_INLINE ESpawnType GetSpawnType()
	{
		return static_cast<ESpawnType>(m_SpawnType);
	}

	SR_INLINE bool IsLoaded()
	{
		return (m_SpawnLoadStatus == ESpawnLoadStatus_Loaded);
	}

	SR_INLINE void Load()
	{
		reinterpret_cast<void(__thiscall*)(void*)>(0x5F7470)(this);
	}

	SR_INLINE void Unload()
	{
		reinterpret_cast<void(__thiscall*)(void*)>(0x5F7A50)(this);
	}
	
	SR_INLINE void AddSpawnUsage(ESpawnUsage p_eSpawnUsage)
	{
		reinterpret_cast<void(__thiscall*)(void*, ESpawnUsage)>(0x5F7980)(this, p_eSpawnUsage);
	}


	SR_INLINE void RemoveSpawnUsage(ESpawnUsage p_eSpawnUsage)
	{
		reinterpret_cast<void(__thiscall*)(void*, ESpawnUsage)>(0x5F76A0)(this, p_eSpawnUsage);
	}
};
SR_ASSERT_CLASS(CVLoadObject, 0x20);