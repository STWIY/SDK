#pragma once

class SpawnMixer
{
public:
	container::ArrayDynamic<struct TrafficConfigStackElement*> m_TrafficConfigStack;
	container::ArrayDynamic<struct TrafficConfigStackElement*> m_TrafficConfigArray;
	container::ArrayDynamic<struct SubzoneTrafficTrigger*> m_SubzoneTrafficTriggerArray;
	container::ArrayDynamic<int> m_BoatLoadObjectIndices;
	container::ArrayDynamic<int> m_CarLoadObjectIndices;
	int m_CallForCharacterIndex;
	int m_CallForCarIndex;
	int m_CallForBoatIndex;
	container::ArrayDynamic<CVLoadObject*> m_CVLoadObjectArray[ESpawnTemplateType_MAX];
	CVLoadObject* m_NextTrafficTemplates[ESpawnTemplateType_MAX];
	CVLoadObject* m_LastTrafficTemplates[ESpawnTemplateType_MAX];
	CVLoadObject* m_NextDriverTrafficTemplate;
	CVLoadObject* m_NextRareUniqueTrafficTemplates[ESpawnTemplateType_MAX];
	CVLoadObject* m_NextRareUniqueDriverTemplate;
	CVLoadObject* m_RecycleTrafficTemplate[ESpawnTemplateType_MAX];
	struct SubzoneTrafficTrigger* m_CurrentSubzoneTrafficTrigger;
	struct TrafficConfig* m_LastTrafficConfig;
	struct TrafficConfig* m_CurrentTrafficConfig;
	int m_FreeSlotsBelowAmbientUsage;
	int m_NumOutstandingLoadRequests[ESpawnTemplateType_MAX];
	uint32_t m_RareUniqueDisabledMask;
	bool m_AllowVisibleInstanceRemoval;
	bool m_TransitionalTrafficActive[ESpawnTemplateType_MAX];
	float m_RareUniqueEvictionTimer[ESpawnTemplateType_MAX];

	//=========================================================
	// Functions

	SR_STATIC_INLINE SpawnMixer* GetInstance()
	{
		return *reinterpret_cast<SpawnMixer**>(0x82C020);
	}
};
SR_ASSERT_CLASS(SpawnMixer, 0xCC);