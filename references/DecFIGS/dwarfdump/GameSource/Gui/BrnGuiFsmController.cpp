// BrnGuiFsmController.cpp:40
void BrnGui::GuiFsmController::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFsmController.cpp:47
		int32_t liCounter;

	}
}

// BrnGuiFsmController.cpp:87
void BrnGui::GuiFsmController::Prepare(CgsGui::ModelModule *  lpGuiModelModule, HeapMalloc *  lpFSMAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiFsmController.cpp:547
void BrnGui::GuiFsmController::HandleHudStateLoadComplete() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFsmController.cpp:550
		bool lbTransitionPending;

		// BrnGuiFsmController.cpp:551
		bool lbModeManagerWaitingForResponse;

		// BrnGuiFsmController.cpp:552
		BrnGui::GuiFlow leFlowIterator;

		operator++(/* parameters */);
	}
}

// BrnGuiFsmController.cpp:506
void BrnGui::GuiFsmController::RunQueuedFsm(BrnGui::GuiFlow  leFlowToUse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFsmController.cpp:514
		int32_t i;

	}
}

// BrnGuiFsmController.cpp:388
void BrnGui::GuiFsmController::RunFsm(const GuiEventRunFsm *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFsmController.cpp:390
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiFsmController.cpp:577
void BrnGui::GuiFsmController::DebugPrintResources(BrnGui::GuiFlow  leFlow, const char *  lpcPrefix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFsmController.cpp:579
		CgsID lFsmID;

		// BrnGuiFsmController.cpp:580
		char[13] lacFsmName;

	}
}

// BrnGuiFsmController.cpp:420
void BrnGui::GuiFsmController::TriggerLoadUnload(BrnGui::GuiFlow  leCurrentFlow, CgsGui::ResourceRequestLoadUnload  lLoadUnload, InputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFsmController.cpp:423
		GuiEventLoadRequest lRequest;

	}
	CgsGui::ModelIO::InputBuffer::AddResourceRequests(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiFsmController.cpp:488
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGuiFsmController.cpp:127
void BrnGui::GuiFsmController::Update(InputBuffer *  lpModelInputBuffer, const OutputBuffer *  lpModelOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFsmController.cpp:134
		const GuiEventQueueSmall * lpLoadNotifications;

		// BrnGuiFsmController.cpp:137
		const CgsModule::Event * lpEvent;

		// BrnGuiFsmController.cpp:138
		int32_t liEventSize;

		// BrnGuiFsmController.cpp:139
		int32_t liEventId;

		// BrnGuiFsmController.cpp:221
		BrnGui::GuiFlow leFlowIterator;

	}
	CgsGui::ModelIO::OutputBuffer::GetLoadNotifications(/* parameters */);
	CgsGui::GuiEventQueueBase<4096,16>::GetFirstEvent(/* parameters */);
	CgsGui::GuiEventQueueBase<4096,16>::GetNextEvent(/* parameters */);
	{
		// BrnGuiFsmController.cpp:149
		const GuiEventLoadNotification * lpLoadNotification;

	}
	operator++(/* parameters */);
	{
		// BrnGuiFsmController.cpp:180
		const GuiEventUnloadNotification * lpUnloadNotification;

	}
	{
		// BrnGuiFsmController.cpp:360
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiFsmController.cpp:336
		CgsResource::LuaCodeResource * lpLuaStateMachineData;

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
		// BrnGuiFsmController.cpp:132
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiFsmController.cpp:135
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

