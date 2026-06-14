// CgsGuiStateInterface.cpp:65
void CgsGui::StateInterface::Prepare(rw::IResourceAllocator *  lpAllocator, GuiAccessPointers *  lpAccessPointers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiStateInterface.cpp:47
void CgsGui::StateInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiEventQueueBase<65536,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<65536,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsGuiStateInterface.cpp:186
void CgsGui::StateInterface::StopPriorityEventBlocking() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.cpp:188
		GuiEventPriorityStopBlocking lStopBlockingrEvent;

		AddGuiEvent<CgsGui::GuiEventPriorityStopBlocking>(/* parameters */);
	}
}

// CgsGuiStateInterface.cpp:166
void CgsGui::StateInterface::PriorityUnRegisterForEvent(const int32_t  liEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.cpp:168
		GuiEventPriorityUnRegisterForEvents lUnRegisterEvent;

		AddGuiEvent<CgsGui::GuiEventPriorityUnRegisterForEvents>(/* parameters */);
	}
}

// CgsGuiStateInterface.cpp:143
void CgsGui::StateInterface::PriorityRegisterForEvent(const int32_t  liEvent, const int32_t *  liEventOverridden, const uint32_t  luOverrideCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.cpp:145
		GuiEventPriorityRegisterForEvents lRegisterEvent;

		AddGuiEvent<CgsGui::GuiEventPriorityRegisterForEvents>(/* parameters */);
	}
}

// CgsGuiStateInterface.cpp:113
void CgsGui::StateInterface::UnRegisterForEvents(const int32_t *  laiEvents, const int32_t  liNumEvents) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.cpp:115
		int32_t lEvent;

		// CgsGuiStateInterface.cpp:116
		int32_t liEventIndex;

	}
	{
		// CgsGuiStateInterface.cpp:121
		GuiEventUnRegisterForEvents lUnRegisterEvent;

		AddGuiEvent<CgsGui::GuiEventUnRegisterForEvents>(/* parameters */);
	}
}

// CgsGuiStateInterface.cpp:84
void CgsGui::StateInterface::RegisterForEvents(const int32_t *  laiEvents, const int32_t  liNumEvents) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.cpp:86
		int32_t lEvent;

		// CgsGuiStateInterface.cpp:87
		int32_t liEventIndex;

	}
	{
		// CgsGuiStateInterface.cpp:92
		GuiEventRegisterForEvents lRegisterEvent;

		AddGuiEvent<CgsGui::GuiEventRegisterForEvents>(/* parameters */);
	}
}

