// BrnWorldModuleIO.cpp:127
void BrnWorldIO::UpdateInputBuffer::AddGameInputData(const PlayerVehicleControls *  lpCarInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnWorldModuleIO.cpp:142
void BrnWorldIO::DispatchInputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	{
		// BrnWorldModuleIO.cpp:152
		uint8_t lu8Slot;

	}
	RendererIO::RenderSwitches::Construct(/* parameters */);
}

// BrnWorldModuleIO.cpp:188
void BrnWorldIO::DispatchOutputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
}

// BrnWorldModuleIO.cpp:173
void BrnWorldIO::DispatchInputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnWorldModuleIO.cpp:203
void BrnWorldIO::DispatchOutputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnWorldModuleIO.cpp:40
void BrnWorldIO::UpdateInputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.cpp:42
		EActiveRaceCarIndex leActiveRaceCarIndex;

	}
	BrnPhysics::Vehicle::VehicleDriverInputInterface::Construct(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::Clear(/* parameters */);
	CgsSystem::TimerStatusInterface::Clear(/* parameters */);
	CgsModule::EventQueue<BrnGameState::TakedownEvent,8>::Construct(/* parameters */);
	CgsSystem::TimerStatus::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Construct(/* parameters */);
	CgsSystem::Time::SetFraction(/* parameters */);
	CgsSystem::Time::SetSeconds(/* parameters */);
	CgsSystem::Time::SetSeconds(/* parameters */);
	CgsSystem::Time::SetFraction(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::SetEventPointer(/* parameters */);
	BrnWorld::TriggerEntityModuleIO::TriggerManagementInputInterface::Construct(/* parameters */);
	CgsModule::VariableEventQueue<131072,16>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent,256>::Construct(/* parameters */);
	BrnWorld::TriggerEntityModuleIO::TriggerQueryInputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Clear(/* parameters */);
	BrnTraffic::BrnTrafficIO::TrafficNetworkInputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::Clear(/* parameters */);
	BrnWorld::CrashIO::NetworkInputInterface::Construct(/* parameters */);
	BrnWorld::PlayerVehicleControls::Construct(/* parameters */);
	BrnReplays::ReplayIO::StatusInterface::Construct(/* parameters */);
	BrnWorld::WorldEntityIO::RequestInterface::Construct(/* parameters */);
	CgsModule::EventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent,16>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest,1>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::Construct(/* parameters */);
	BrnGameState::GameStateModuleIO::OnlineScoringOutputInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::SetEventPointer(/* parameters */);
	operator++(/* parameters */);
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

// BrnWorldModuleIO.cpp:93
void BrnWorldIO::UpdateInputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.cpp:95
		EActiveRaceCarIndex leActiveRaceCarIndex;

		operator++(/* parameters */);
		CgsModule::VariableEventQueue<13312,16>::Destruct(/* parameters */);
		CgsModule::VariableEventQueue<4096,16>::Destruct(/* parameters */);
		CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Destruct(/* parameters */);
		CgsModule::IOBuffer::Destruct(/* parameters */);
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

// BrnWorldModuleIO.cpp:266
void BrnWorldIO::UpdateOutputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<1536,16>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent>::Destruct(/* parameters */);
	CgsSceneManager::SceneManagerIO::TriangleCacheInterface::Destruct(/* parameters */);
	CgsModule::IOBuffer::Destruct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnWorldModuleIO.cpp:218
void BrnWorldIO::UpdateOutputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnPhysics::Vehicle::VehicleOutputInterface::Construct(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::Clear(/* parameters */);
	CgsResource::ResourceHandle::Clear(/* parameters */);
	operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::SetActiveRaceCarIndex(/* parameters */);
	BrnGameState::GameStateModuleIO::operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::ClearCarsInRace(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::Clear(/* parameters */);
	CgsResource::ResourceHandle::Clear(/* parameters */);
	operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::SetActiveRaceCarIndex(/* parameters */);
	BrnGameState::GameStateModuleIO::operator++(/* parameters */);
	BrnWorld::TriggerEntityModuleIO::TriggerEntityModuleOutputInterface::Construct(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::ClearCarsInRace(/* parameters */);
	CgsModule::VariableEventQueue<1024,16>::Construct(/* parameters */);
	BrnWorld::TriggerEntityModuleIO::TriggerEntityModuleOutputInterface::Clear(/* parameters */);
	BrnDirector::BrnDirectorVehicleInputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnDirector::NewVehicleEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnDirector::NewVehicleEvent>::SetEventPointer(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::Clear(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	BrnAI::AIModuleIO::AICarOutputInterface::Construct(/* parameters */);
	CgsModule::EventQueue<BrnAI::RouteMapModuleIO::RouteResponse,16>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::Clear(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::Construct(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::Clear(/* parameters */);
	CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::Construct(/* parameters */);
	BrnWorld::PlayerVehicleControls::Construct(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::Construct(/* parameters */);
	CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::Clear(/* parameters */);
	BrnTraffic::BrnTrafficIO::TrafficNetworkOutputInterface::Construct(/* parameters */);
	BrnTraffic::BrnTrafficIO::TrafficDirectorOutputInterface::Construct(/* parameters */);
	CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse,32>::Construct(/* parameters */);
	BrnTraffic::BrnTrafficIO::TrafficSoundOutputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::Construct(/* parameters */);
	CgsContainers::Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>::Construct(/* parameters */);
	BrnTraffic::BrnTrafficIO::TrafficDirectorOutputInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::Clear(/* parameters */);
	BrnWorld::CrashIO::NetworkOutputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::SetEventPointer(/* parameters */);
	BrnWorld::CrashIO::NetworkOutputInterface::Clear(/* parameters */);
	BrnPhysics::Deformation::DeformationOutputInterface::Construct(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent,10>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent,50>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::JointedPartStateEvent,50>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent,50>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::Construct(/* parameters */);
	BrnEffects::EffectsEnvironmentInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::SetEventPointer(/* parameters */);
	BrnPhysics::Deformation::DeformationOutputInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnSound::Module::Io::SoundWorldLoadEvent,25>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::Clear(/* parameters */);
	BrnWorld::WorldEntityIO::StatusInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent>::SetEventPointer(/* parameters */);
	BrnReplays::ReplayIO::RequestInterface::Construct(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Construct(/* parameters */);
	CgsModule::EventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent,10>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent,16>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>::Clear(/* parameters */);
	CgsSceneManager::SceneManagerIO::TriangleCacheInterface::Construct(/* parameters */);
	CgsModule::EventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent,20>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Props::PropUpdateNotification,200>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::PropUpdateNotification>::Construct(/* parameters */);
	CgsGui::GuiEventQueueBase<32768,16>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::PropUpdateNotification>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::PropUpdateNotification>::SetEventPointer(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Construct(/* parameters */);
}

