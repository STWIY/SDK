#pragma once

class StreamClient
{
public:
	enum EStreamEvent
	{
		EStreamEvent_WaitingForLoad,
		EStreamEvent_Load,
		EStreamEvent_Unknown_2,
		EStreamEvent_LoadComplete,
		EStreamEvent_Unknown_4,
		EStreamEvent_Unknown_5,
		EStreamEvent_Unknown_6,
		EStreamEvent_Unknown_7,
		EStreamEvent_WaitingForUnload,
		EStreamEvent_Unload,
	};

	virtual bool StreamConfirm(EStreamEvent eEvent, void* pClientData) = 0;
	virtual void StreamNotify(EStreamEvent eEvent, void* pClientData) = 0;
};
SR_ASSERT_CLASS(StreamClient, 0x4);