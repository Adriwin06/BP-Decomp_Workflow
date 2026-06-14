// CgsModelModuleIO.cpp:120
void CgsGui::ModelIO::InputBuffer::GetEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModelModuleIO.cpp:122
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsModelModuleIO.cpp:137
void CgsGui::ModelIO::InputBuffer::GetEventQueueNonConst() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModelModuleIO.cpp:139
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsModelModuleIO.cpp:233
void CgsGui::ModelIO::OutputBuffer::GetGuiResourceRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModelModuleIO.cpp:235
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsModelModuleIO.cpp:43
void CgsGui::ModelIO::InputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	GuiEventQueueBase<32768,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Construct(/* parameters */);
	GuiEventQueueBase<4096,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Clear(/* parameters */);
	GuiEventQueueBase<32768,16>::Clear(/* parameters */);
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

// CgsModelModuleIO.cpp:67
void CgsGui::ModelIO::InputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiEventQueueBase<32768,16>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Clear(/* parameters */);
	GuiEventQueueBase<4096,16>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Destruct(/* parameters */);
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
}

// CgsModelModuleIO.cpp:197
void CgsGui::ModelIO::OutputBuffer::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiEventQueueBase<4096,16>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Clear(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsModule::VariableEventQueue<2048,16>::Clear(/* parameters */);
	GuiEventQueueBase<16384,16>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
	GuiEventQueueBase<65536,16>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<65536,16>::Clear(/* parameters */);
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

// CgsModelModuleIO.cpp:153
void CgsGui::ModelIO::OutputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiEventQueueBase<4096,16>::Construct(/* parameters */);
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::Construct(/* parameters */);
	GuiEventQueueBase<16384,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Construct(/* parameters */);
	GuiEventQueueBase<65536,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<65536,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<65536,16>::Clear(/* parameters */);
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

// CgsModelModuleIO.cpp:177
void CgsGui::ModelIO::OutputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiEventQueueBase<4096,16>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::Destruct(/* parameters */);
	GuiEventQueueBase<16384,16>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Destruct(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsModelModuleIO.cpp:103
void CgsGui::ModelIO::InputBuffer::AddGuiEvents(const InputBuffer::GuiEventInputQueue *  lpEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModelModuleIO.cpp:105
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	Append<32768, 16>(/* parameters */);
}

// CgsModelModuleIO.cpp:216
void CgsGui::ModelIO::OutputBuffer::SetGuiResourceRequestQueue(const OutputBuffer::GuiResourceRequestQueue *  lpResourceRequestQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModelModuleIO.cpp:218
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsModelModuleIO.cpp:86
void CgsGui::ModelIO::InputBuffer::AddGuiEvents(const InputBuffer::GuiEventQueue *  lpEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModelModuleIO.cpp:88
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	Append<16384, 16>(/* parameters */);
}

