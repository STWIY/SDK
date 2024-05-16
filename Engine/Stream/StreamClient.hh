#pragma once

class StreamClient
{
public:
	enum EStreamEvent
	{
		EStreamEvent_WaitingForLoad,
		EStreamEvent_Load,
		EStreamEvent_Reload,
		EStreamEvent_LoadComplete,
		EStreamEvent_ReloadComplete,
		EStreamEvent_CreatingData,
		EStreamEvent_DataCreated,
		EStreamEvent_CreateComplete,
		EStreamEvent_WaitingForUnload,
		EStreamEvent_Unload,
		EStreamEvent_UnloadComplete,
		EStreamEvent_CancelLoad,
		EStreamEvent_Unknown_12,
		EStreamEvent_Delete
	};

	//=========================================================
	// Virtual Functions

	virtual bool StreamConfirm(EStreamEvent eEvent, void* pClientData) = 0;
	virtual void StreamNotify(EStreamEvent eEvent, void* pClientData) = 0;
};
SR_ASSERT_CLASS(StreamClient, 0x4);