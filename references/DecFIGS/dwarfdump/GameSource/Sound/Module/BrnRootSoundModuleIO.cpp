// BrnRootSoundModuleIO.cpp:103
void BrnSound::Module::Io::RootPreUpdateOutputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	PreUpdateOutput::Construct(/* parameters */);
	CgsModule::VariableEventQueue<256,16>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent,16>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<128,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<128,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnRootSoundModuleIO.cpp:83
void BrnSound::Module::Io::RootOutputBuffer::Construct() {
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
	CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::Construct(/* parameters */);
	CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	BrnReplays::ReplayIO::RequestInterface::Construct(/* parameters */);
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

// BrnRootSoundModuleIO.cpp:44
void BrnSound::Module::Io::RootInputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::Clear(/* parameters */);
	CgsResource::ResourceHandle::Clear(/* parameters */);
	operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::SetActiveRaceCarIndex(/* parameters */);
	BrnGameState::GameStateModuleIO::operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::ClearCarsInRace(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Construct(/* parameters */);
	BrnPhysics::Deformation::DeformationOutputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::Clear(/* parameters */);
	BrnPhysics::Deformation::DeformationOutputInterface::Clear(/* parameters */);
	CgsModule::EventQueue<BrnSound::Module::Io::SoundWorldLoadEvent,25>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent>::SetEventPointer(/* parameters */);
	BrnReplays::ReplayIO::StatusInterface::Construct(/* parameters */);
	BrnGameState::GameStateModuleIO::GameModeOutputInterface::Construct(/* parameters */);
	BrnGameState::GameStateModuleIO::GameModeOutputInterface::State::Construct(/* parameters */);
	BrnTraffic::BrnTrafficIO::TrafficSoundOutputInterface::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::Clear(/* parameters */);
	UpdateInfo::Construct(/* parameters */);
	CgsModule::EventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent,16>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent,20>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Props::PropUpdateNotification,200>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::PropUpdateNotification>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::PropUpdateNotification>::SetEventPointer(/* parameters */);
	BrnAI::AIModuleIO::AICarOutputInterface::Construct(/* parameters */);
	BrnGui::GuiAudioEventResults::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

