// BrnReplayModuleIO.cpp:144
void BrnReplays::ReplayIO::OutputBuffer_PostSim::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnReplayModuleIO.cpp:57
void BrnReplays::ReplayIO::InputBuffer_PreSim::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnReplayModuleIO.cpp:86
void BrnReplays::ReplayIO::OutputBuffer_PreSim::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnReplayModuleIO.cpp:115
void BrnReplays::ReplayIO::InputBuffer_PostSim::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnReplayModuleIO.cpp:40
void BrnReplays::ReplayIO::InputBuffer_PreSim::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::Clear(/* parameters */);
	CgsSystem::TimerStatusInterface::Clear(/* parameters */);
	CgsSystem::TimerStatus::Clear(/* parameters */);
	CgsSystem::Time::SetSeconds(/* parameters */);
	CgsSystem::Time::SetSeconds(/* parameters */);
	CgsSystem::Time::SetFraction(/* parameters */);
	CgsSystem::Time::SetFraction(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayModuleIO.cpp:70
void BrnReplays::ReplayIO::OutputBuffer_PreSim::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	StatusInterface::Construct(/* parameters */);
	CgsModule::IOBuffer::Construct(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<1024>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<1024,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<1024,16>::Clear(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<1024>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	CgsGui::GuiEventQueueBase<4096,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Construct(/* parameters */);
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

// BrnReplayModuleIO.cpp:100
void BrnReplays::ReplayIO::InputBuffer_PostSim::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
	RequestInterface::Construct(/* parameters */);
	CgsGui::GuiEventQueueBase<4096,16>::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayModuleIO.cpp:129
void BrnReplays::ReplayIO::OutputBuffer_PostSim::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

