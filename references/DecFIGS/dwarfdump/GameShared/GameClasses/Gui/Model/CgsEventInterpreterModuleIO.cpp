// CgsEventInterpreterModuleIO.cpp:66
void CgsGui::EventInterpreterModuleIO::InputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// CgsEventInterpreterModuleIO.cpp:116
void CgsGui::EventInterpreterModuleIO::InputBuffer::GetEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModuleIO.cpp:118
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsEventInterpreterModuleIO.cpp:132
void CgsGui::EventInterpreterModuleIO::OutputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	GuiEventQueueBase<16384,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Construct(/* parameters */);
	GuiEventQueueBase<4096,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Construct(/* parameters */);
	GuiEventQueueBase<65536,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<65536,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<65536,16>::Clear(/* parameters */);
	GuiEventQueueBase<16384,16>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	GuiEventQueueBase<4096,16>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	GuiEventQueueBase<65536,16>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsEventInterpreterModuleIO.cpp:48
void CgsGui::EventInterpreterModuleIO::InputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	GuiEventQueueBase<32768,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Construct(/* parameters */);
	GuiEventQueueBase<32768,16>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsEventInterpreterModuleIO.cpp:81
void CgsGui::EventInterpreterModuleIO::InputBuffer::AddGuiEvents(const const InputBuffer::GuiEventInputQueue &  lEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModuleIO.cpp:83
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	AppendGuiQueue<32768, 16>(/* parameters */);
}

// CgsEventInterpreterModuleIO.cpp:100
void CgsGui::EventInterpreterModuleIO::InputBuffer::AddGuiEvent(const CgsModule::Event *  lEvent, int32_t  lEventId, int32_t  lEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventInterpreterModuleIO.cpp:102
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GuiEventQueueBase<32768,16>::AddGuiEvent(/* parameters */);
}

// CgsEventInterpreterModuleIO.cpp:157
void CgsGui::EventInterpreterModuleIO::OutputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiEventQueueBase<16384,16>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
	GuiEventQueueBase<4096,16>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Destruct(/* parameters */);
	GuiEventQueueBase<65536,16>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<65536,16>::Destruct(/* parameters */);
	CgsModule::IOBuffer::Destruct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

