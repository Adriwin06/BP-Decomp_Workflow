// BrnGuiHudMessageDirector.cpp:382
void BrnGui::HudMessageDirector::IsMessageAllowed(CgsID  lMessageID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageDirector.cpp:432
		int32_t liExemptionIndex;

		// BrnGuiHudMessageDirector.cpp:433
		CgsID lExemptID;

	}
	{
		// BrnGuiHudMessageDirector.cpp:388
		int32_t liExemptionIndex;

		// BrnGuiHudMessageDirector.cpp:389
		CgsID lExemptID;

	}
}

// BrnGuiHudMessageDirector.cpp:78
void BrnGui::HudMessageDirector::Construct(CgsGui::ModelModule *  lpModelModule, const BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageDirector.cpp:90
		uint32_t luIter;

	}
	CgsGui::GuiEventQueueBase<16384,16>::Construct(/* parameters */);
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

// BrnGuiHudMessageDirector.cpp:305
void BrnGui::HudMessageDirector::CheckMessageIsAvailable(uint32_t  luAvailabilityBitset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageDirector.cpp:356
		BrnGui::GuiPlayerCrashingStateChangeEvent::CrashBarState lCrashState;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GuiCache::GetGameMode(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GuiCache::GetCurrentCrashState(/* parameters */);
}

// BrnGuiHudMessageDirector.cpp:477
void BrnGui::HudMessageDirector::SetBlackBarSize(float32_t  lfBlackBarSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageDirector.cpp:486
		GuiHudMessageTerminate lTerminateEvent;

		AddGuiEvent<BrnGui::GuiHudMessageTerminate>(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnGuiHudMessageDirector.cpp:209
void BrnGui::HudMessageDirector::FilterAndSendOffMessage(const GuiHudMessage *  lpOutMessage, bool  lbFromDebug) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageDirector.cpp:213
		int32_t liIndex;

		// BrnGuiHudMessageDirector.cpp:214
		char[13] lacMessageId;

	}
	{
		// BrnGuiHudMessageDirector.cpp:238
		uint32_t luAvailabilityBitset;

		// BrnGuiHudMessageDirector.cpp:258
		float32_t lfTimeToWait;

		BrnResource::HudMessageController::GetMessageAvailabilityBitset(/* parameters */);
		BrnResource::HudMessageController::GetMessageTimeToWaitFromIndex(/* parameters */);
	}
	AddGuiEvent<const BrnGui::GuiHudMessage>(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiHudMessageDirector.cpp:211
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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

// BrnGuiHudMessageDirector.cpp:160
void BrnGui::HudMessageDirector::AddMessage(const GuiHudMessage *  lpNewMessage, bool  lbFromDebug) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiHudMessageDirector.cpp:162
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiHudMessageDirector.cpp:114
void BrnGui::HudMessageDirector::Update(InputBuffer *  lpGuiModelInput) {
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

// BrnGuiHudMessageDirector.cpp:25
// BrnGuiHudMessageDirector.cpp:27
// BrnGuiHudMessageDirector.cpp:37
// BrnGuiHudMessageDirector.cpp:39
// BrnGuiHudMessageDirector.cpp:57
