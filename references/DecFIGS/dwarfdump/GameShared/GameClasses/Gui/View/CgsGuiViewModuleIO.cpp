// CgsGuiViewModuleIO.cpp:95
void CgsGui::ViewIO::OutputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiEventQueueBase<16384,16>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
	CgsModule::IOBuffer::Destruct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsGuiViewModuleIO.cpp:78
void CgsGui::ViewIO::OutputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	GuiEventQueueBase<16384,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsGuiViewModuleIO.cpp:61
void CgsGui::ViewIO::InputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiEventQueueBase<65536,16>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<65536,16>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<65536,16>::Clear(/* parameters */);
	CgsModule::IOBuffer::Destruct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsGuiViewModuleIO.cpp:42
void CgsGui::ViewIO::InputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	GuiEventQueueBase<65536,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<65536,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<65536,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

