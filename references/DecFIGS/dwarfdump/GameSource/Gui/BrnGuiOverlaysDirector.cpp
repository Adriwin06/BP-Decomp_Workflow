// CgsGuiShared.h:45
namespace BrnGui {
	// BrnGuiOverlaysDirector.cpp:22
	const CgsID K_INVALID_NAME_ID;

	// BrnGuiOverlaysDirector.cpp:23
	const int32_t KI_FRAMES_TO_SHOW_ENTERING_FREEBURN = 120;

}

// BrnGuiOverlaysDirector.cpp:41
void BrnGui::GuiOverlaysDirector::Construct(CgsGui::ModelModule *  lpModelModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::GuiEventQueueBase<16384,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
	CgsGui::GuiEventQueueBase<16384,16>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiOverlaysDirector.cpp:225
void BrnGui::GuiOverlaysDirector::BridgeOutEvents(InputBuffer *  lpGuiModelInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::GuiEventQueueBase<16384,16>::GetLength(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	CgsGui::GuiEventQueueBase<16384,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiOverlaysDirector.cpp:287
void BrnGui::GuiOverlaysDirector::SetUpOverlayInfo(GuiOverlayFullInfoResponse *  lpOverlay, const GuiOverlayRequest *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiOverlaysDirector.cpp:289
		int32_t liIter;

		GuiOverlayRequest::GetMessageParamCount(/* parameters */);
	}
	GuiOverlayRequest::GetMessageParam(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GuiOverlayRequest::GetButton1Param(/* parameters */);
	GuiOverlayRequest::GetButton2Param(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiOverlaysDirector.cpp:356
void BrnGui::GuiOverlaysDirector::HandleWaitFinishRequest(const GuiOverlayWaitFinishRequest *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiOverlaysDirector.cpp:385
		char[13] lacNewOverlay;

		// BrnGuiOverlaysDirector.cpp:388
		char[13] lacOldOverlay;

	}
	{
		// BrnGuiOverlaysDirector.cpp:392
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnGuiOverlaysDirector.cpp:341
void BrnGui::GuiOverlaysDirector::HandleOverlayFullInfoRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AddGuiEvent<BrnGui::GuiOverlayFullInfoResponse>(/* parameters */);
}

// BrnGuiOverlaysDirector.cpp:322
void BrnGui::GuiOverlaysDirector::StartCurrentOverlay() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiOverlaysDirector.cpp:324
		GuiOverlayInternalRequestEvent lRequest;

		AddGuiEvent<BrnGui::GuiOverlayInternalRequestEvent>(/* parameters */);
	}
}

// BrnGuiOverlaysDirector.cpp:250
void BrnGui::GuiOverlaysDirector::HandleOverlayRequest(const GuiOverlayRequest *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiOverlaysDirector.cpp:260
		char[13] lacOverlayName;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiOverlaysDirector.cpp:412
void BrnGui::GuiOverlaysDirector::HandleOverlayShowingNotification(const GuiOverlayShowingNotification *  lpNotification) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiOverlayShowingNotification::GetOverlayID(/* parameters */);
	{
		// BrnGuiOverlaysDirector.cpp:416
		GuiOverlayWaitFinishRequest lWaitEvent;

		AddGuiEvent<BrnGui::GuiOverlayWaitFinishRequest>(/* parameters */);
	}
	GuiOverlayWaitFinishRequest::Construct(/* parameters */);
}

// BrnGuiOverlaysDirector.cpp:433
void BrnGui::GuiOverlaysDirector::HandleShowFreeBurnIntroRequest(const GuiEventNetworkShowFreeBurnIntro *  lpNotification) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiOverlaysDirector.cpp:438
		int32_t liOnlinePlayerCount;

		// BrnGuiOverlaysDirector.cpp:439
		int32_t liOnlinePlayerIndex;

		// BrnGuiOverlaysDirector.cpp:440
		GuiOverlayRequest lEnterGameOverlayRequest;

		// BrnGuiOverlaysDirector.cpp:441
		const InGamePlayerStatusData * lpPlayerInfo;

		// BrnGuiOverlaysDirector.cpp:442
		const InGamePlayerStatusData * lpFirstNonHostPlayerInfo;

		// BrnGuiOverlaysDirector.cpp:443
		const InGamePlayerStatusData * lpHostPlayerInfo;

		GuiCache::GetOnlinePlayerCount(/* parameters */);
		GuiOverlayRequest::Construct(/* parameters */);
		CgsNetwork::PlayerName::GetPlayerName(/* parameters */);
		GuiOverlayRequest::AddMessageParam(/* parameters */);
		GuiOverlayRequest::AddMessageParam(/* parameters */);
	}
	GuiCache::GetOnlinePlayerInfoByIndex(/* parameters */);
	{
		// BrnGuiOverlaysDirector.cpp:506
		GuiOverlayWaitFinishRequest lOverlayFinishRequest;

		AddGuiEvent<BrnGui::GuiOverlayWaitFinishRequest>(/* parameters */);
		GuiOverlayWaitFinishRequest::Construct(/* parameters */);
		GuiOverlayWaitFinishRequest::Construct(/* parameters */);
		AddGuiEvent<BrnGui::GuiOverlayWaitFinishRequest>(/* parameters */);
		GuiOverlayWaitFinishRequest::Construct(/* parameters */);
		GuiOverlayWaitFinishRequest::Construct(/* parameters */);
		AddGuiEvent<BrnGui::GuiOverlayWaitFinishRequest>(/* parameters */);
		GuiOverlayWaitFinishRequest::Construct(/* parameters */);
		GuiOverlayWaitFinishRequest::Construct(/* parameters */);
		AddGuiEvent<BrnGui::GuiOverlayWaitFinishRequest>(/* parameters */);
		GuiOverlayWaitFinishRequest::Construct(/* parameters */);
		GuiOverlayWaitFinishRequest::Construct(/* parameters */);
		AddGuiEvent<BrnGui::GuiOverlayWaitFinishRequest>(/* parameters */);
		GuiOverlayWaitFinishRequest::Construct(/* parameters */);
	}
	GuiOverlayRequest::Construct(/* parameters */);
	CgsNetwork::PlayerName::GetPlayerName(/* parameters */);
	GuiOverlayRequest::Construct(/* parameters */);
	GuiOverlayRequest::AddMessageParam(/* parameters */);
	GuiOverlayRequest::Construct(/* parameters */);
	GuiOverlayRequest::Construct(/* parameters */);
	CgsNetwork::PlayerName::GetPlayerName(/* parameters */);
	GuiOverlayRequest::Construct(/* parameters */);
	GuiOverlayRequest::Construct(/* parameters */);
}

// BrnGuiOverlaysDirector.cpp:70
void BrnGui::GuiOverlaysDirector::Update(InputBuffer *  lpGuiInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiOverlaysDirector.cpp:81
		const InputBuffer::GuiEventInputQueue * lpEventQueue;

		// BrnGuiOverlaysDirector.cpp:84
		const CgsModule::Event * lpEvent;

		// BrnGuiOverlaysDirector.cpp:85
		int32_t liEventSize;

		// BrnGuiOverlaysDirector.cpp:86
		int32_t liEventType;

	}
	CgsGui::GuiEventQueueBase<32768,16>::GetFirstEvent(/* parameters */);
	CgsGui::GuiEventQueueBase<32768,16>::GetNextEvent(/* parameters */);
	{
		// BrnGuiOverlaysDirector.cpp:132
		const GuiOverlayCompleteEvent * lpCompleteEvent;

	}
	{
		// BrnGuiOverlaysDirector.cpp:94
		const GuiEventCache * lpCacheEvent;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiOverlaysDirector.cpp:192
		GuiOverlayWaitFinishRequest lOverlayFinishRequest;

		GuiOverlayWaitFinishRequest::Construct(/* parameters */);
		AddGuiEvent<BrnGui::GuiOverlayWaitFinishRequest>(/* parameters */);
		GuiOverlayWaitFinishRequest::Construct(/* parameters */);
		GuiOverlayWaitFinishRequest::Construct(/* parameters */);
		AddGuiEvent<BrnGui::GuiOverlayWaitFinishRequest>(/* parameters */);
		GuiOverlayWaitFinishRequest::Construct(/* parameters */);
		GuiOverlayWaitFinishRequest::Construct(/* parameters */);
		AddGuiEvent<BrnGui::GuiOverlayWaitFinishRequest>(/* parameters */);
		GuiOverlayWaitFinishRequest::Construct(/* parameters */);
		GuiOverlayWaitFinishRequest::Construct(/* parameters */);
		AddGuiEvent<BrnGui::GuiOverlayWaitFinishRequest>(/* parameters */);
		GuiOverlayWaitFinishRequest::Construct(/* parameters */);
	}
	{
		// BrnGuiOverlaysDirector.cpp:78
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

