// BrnWorldEntityModuleIO.cpp:35
void BrnWorld::WorldEntityIO::OutputBuffer_Prepare::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnWorldEntityModuleIO.cpp:49
void BrnWorld::WorldEntityIO::InputBuffer_PreScene::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnWorldEntityModuleIO.cpp:68
void BrnWorld::WorldEntityIO::OutputBuffer_PreScene::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent>::Destruct(/* parameters */);
}

// BrnWorldEntityModuleIO.cpp:81
void BrnWorld::WorldEntityIO::InputBuffer_PostScene::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnWorldEntityModuleIO.cpp:93
void BrnWorld::WorldEntityIO::OutputBuffer_PostScene::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnWorldEntityModuleIO.cpp:105
void BrnWorld::WorldEntityIO::InputBuffer_PrePhysics::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnWorldEntityModuleIO.cpp:117
void BrnWorld::WorldEntityIO::OutputBuffer_PrePhysics::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnWorldEntityModuleIO.cpp:130
void BrnWorld::WorldEntityIO::InputBuffer_PostPhysics::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnWorldEntityModuleIO.cpp:145
void BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnWorldEntityModuleIO.cpp:160
void BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnWorldEntityModuleIO.cpp:27
void BrnWorld::WorldEntityIO::OutputBuffer_Prepare::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Construct(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnWorldEntityModuleIO.cpp:41
void BrnWorld::WorldEntityIO::InputBuffer_PreScene::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::Clear(/* parameters */);
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsResource::ResourceHandle::Clear(/* parameters */);
	operator++(/* parameters */);
	RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::SetActiveRaceCarIndex(/* parameters */);
	BrnGameState::GameStateModuleIO::operator++(/* parameters */);
	RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::ClearCarsInRace(/* parameters */);
	RequestInterface::Construct(/* parameters */);
}

// BrnWorldEntityModuleIO.cpp:55
void BrnWorld::WorldEntityIO::OutputBuffer_PreScene::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Construct(/* parameters */);
	CgsModule::EventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent,25>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent,25>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent,30>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnSound::Module::Io::SoundWorldLoadEvent,25>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent>::SetEventPointer(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnWorldEntityModuleIO.cpp:75
void BrnWorld::WorldEntityIO::InputBuffer_PostScene::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
}

// BrnWorldEntityModuleIO.cpp:87
void BrnWorld::WorldEntityIO::OutputBuffer_PostScene::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
}

// BrnWorldEntityModuleIO.cpp:99
void BrnWorld::WorldEntityIO::InputBuffer_PrePhysics::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
}

// BrnWorldEntityModuleIO.cpp:111
void BrnWorld::WorldEntityIO::OutputBuffer_PrePhysics::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
}

// BrnWorldEntityModuleIO.cpp:123
void BrnWorld::WorldEntityIO::InputBuffer_PostPhysics::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnWorldEntityModuleIO.cpp:136
void BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Construct(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	StatusInterface::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnWorldEntityModuleIO.cpp:151
void BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

