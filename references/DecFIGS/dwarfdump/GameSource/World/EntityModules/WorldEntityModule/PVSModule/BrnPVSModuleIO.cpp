// BrnPVSModuleIO.cpp:100
void BrnWorld::PVSIO::InputBuffer::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	InputInterface::Clear(/* parameters */);
}

// BrnPVSModuleIO.cpp:53
void BrnWorld::PVSIO::InputBuffer::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPVSModuleIO.cpp:69
void BrnWorld::PVSIO::InputBuffer::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPVSModuleIO.cpp:85
void BrnWorld::PVSIO::InputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPVSModuleIO.cpp:36
void BrnWorld::PVSIO::InputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	InputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PVSIO::GetZoneRequest>::Construct(/* parameters */);
	InputInterface::Clear(/* parameters */);
}

// BrnPVSModuleIO.cpp:182
void BrnWorld::PVSIO::OutputBuffer::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnResource::GameDataIO::RequestInterface<512>::Clear(/* parameters */);
	OutputInterface::Clear(/* parameters */);
	CgsModule::VariableEventQueue<512,16>::Clear(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnPVSModuleIO.cpp:167
void BrnWorld::PVSIO::OutputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPVSModuleIO.cpp:150
void BrnWorld::PVSIO::OutputBuffer::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPVSModuleIO.cpp:133
void BrnWorld::PVSIO::OutputBuffer::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPVSModuleIO.cpp:115
void BrnWorld::PVSIO::OutputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	OutputInterface::Construct(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<512>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PVSIO::GetZoneResponse>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PVSIO::GetZoneResponse>::Clear(/* parameters */);
	OutputInterface::Clear(/* parameters */);
	CgsModule::VariableEventQueue<512,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<512,16>::Clear(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<512>::Clear(/* parameters */);
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

