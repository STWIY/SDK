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
	// Functions

	SR_INLINE ESpawnType GetSpawnType()
	{
		return static_cast<ESpawnType>(m_SpawnType);
	}

	SR_INLINE bool IsLoaded()
	{
		return (m_SpawnLoadStatus == ESpawnLoadStatus_Loaded);
	}
};
SR_ASSERT_CLASS(CVLoadObject, 0x20);