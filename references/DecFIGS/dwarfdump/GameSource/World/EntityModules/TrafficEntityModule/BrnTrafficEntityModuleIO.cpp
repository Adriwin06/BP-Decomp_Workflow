// BrnTrafficEntityModuleIO.cpp:96
void BrnTraffic::BrnTrafficIO::InputBuffer_PreDispatch::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<CgsSceneManager::EntityId,650u>::Clear(/* parameters */);
}

// BrnTrafficEntityModuleIO.cpp:110
void BrnTraffic::BrnTrafficIO::OutputBuffer_PreDispatch::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<BrnTraffic::VehicleRenderInfo,64u>::Clear(/* parameters */);
}

// BrnTrafficEntityModuleIO.cpp:51
void BrnTraffic::BrnTrafficIO::InputBuffer_PostScene::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RaceCarToTrafficInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent>::Clear(/* parameters */);
	BrnWorld::CrashIO::TrafficOutputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent,160>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent>::SetEventPointer(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent>::Clear(/* parameters */);
	CgsResource::ResourceHandle::Clear(/* parameters */);
	operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::SetActiveRaceCarIndex(/* parameters */);
	BrnGameState::GameStateModuleIO::operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::ClearCarsInRace(/* parameters */);
}

// BrnTrafficEntityModuleIO.cpp:87
void BrnTraffic::BrnTrafficIO::InputBuffer_PreDispatch::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsContainers::Array<CgsSceneManager::EntityId,650u>::Construct(/* parameters */);
}

// BrnTrafficEntityModuleIO.cpp:102
void BrnTraffic::BrnTrafficIO::OutputBuffer_PreDispatch::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsContainers::Array<BrnTraffic::VehicleRenderInfo,64u>::Construct(/* parameters */);
}

// BrnTrafficEntityModuleIO.cpp:116
void BrnTraffic::BrnTrafficIO::InputBuffer_Dispatch::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnTrafficEntityModuleIO.cpp:61
void BrnTraffic::BrnTrafficIO::InputBuffer_PrePhysics::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair,128>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>::SetEventPointer(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Construct(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityPlayerResetInterface::Clear(/* parameters */);
	BrnWorld::PropEntityIO::PropToTrafficInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent,80>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent>::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnTrafficEntityModuleIO.cpp:130
void BrnTraffic::BrnTrafficIO::OutputBuffer_Prepare::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Construct(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
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

// BrnTrafficEntityModuleIO.cpp:39
void BrnTraffic::BrnTrafficIO::InputBuffer_PreScene::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	TrafficNetworkInputInterface::Construct(/* parameters */);
	CgsSystem::TimerStatusInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::SetEventPointer(/* parameters */);
	CgsSystem::TimerStatus::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::Clear(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::Clear(/* parameters */);
	CgsSystem::Time::SetFraction(/* parameters */);
	CgsSystem::Time::SetSeconds(/* parameters */);
	CgsSystem::Time::SetSeconds(/* parameters */);
	CgsSystem::Time::SetFraction(/* parameters */);
	operator++(/* parameters */);
	CgsResource::ResourceHandle::Clear(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::SetActiveRaceCarIndex(/* parameters */);
	BrnGameState::GameStateModuleIO::operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::ClearCarsInRace(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::Clear(/* parameters */);
	TrafficNetworkInputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::Clear(/* parameters */);
}

// BrnTrafficEntityModuleIO.cpp:73
void BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnPhysics::Vehicle::VehicleOutputInterface::Construct(/* parameters */);
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::SetEventPointer(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Construct(/* parameters */);
	BrnPhysics::Vehicle::AggressiveDrivingFlags::Clear(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Clear(/* parameters */);
	BrnPhysics::Vehicle::VehicleManagerOutputInterface::Construct(/* parameters */);
	CgsInput::Device::WheelFFSpring::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::SetEventPointer(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::Clear(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::Clear(/* parameters */);
	CgsResource::ResourceHandle::Clear(/* parameters */);
	operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::SetActiveRaceCarIndex(/* parameters */);
	BrnGameState::GameStateModuleIO::operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::ClearCarsInRace(/* parameters */);
	BrnPhysics::Deformation::DeformationOutputInterfaceForEntityModules::Construct(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent,50>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::Clear(/* parameters */);
	BrnPhysics::Deformation::DeformationOutputInterfaceForEntityModules::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::Clear(/* parameters */);
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

// BrnTrafficEntityModuleIO.cpp:140
void BrnTraffic::BrnTrafficIO::OutputBuffer_PreScene::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	TrafficToRaceCarInterface_PreScene::Construct(/* parameters */);
	CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,16u>::Construct(/* parameters */);
	CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,8u>::Construct(/* parameters */);
	BrnWorld::TriggerEntityModuleIO::TriggerManagementInputInterface::Construct(/* parameters */);
	CgsModule::VariableEventQueue<131072,16>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent,256>::Construct(/* parameters */);
	CgsContainers::Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnTrafficEntityModuleIO.cpp:151
void BrnTraffic::BrnTrafficIO::OutputBuffer_PostScene::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
	TrafficAIInterface::Construct(/* parameters */);
	CgsContainers::Array<EGlobalRaceCarIndex,34u>::Construct(/* parameters */);
	CgsContainers::Array<EGlobalRaceCarIndex,34u>::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnTrafficEntityModuleIO.cpp:161
void BrnTraffic::BrnTrafficIO::OutputBuffer_PrePhysics::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	BrnPhysics::Vehicle::VehicleEffectsInputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent>::SetEventPointer(/* parameters */);
	BrnPhysics::Vehicle::VehicleEffectsInputInterface::Clear(/* parameters */);
	BrnPhysics::Vehicle::VehicleDriverInputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<4920,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnTrafficEntityModuleIO.cpp:172
void BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	BrnWorld::CrashIO::TrafficInputInterface::Construct(/* parameters */);
	TrafficNetworkOutputInterface::Construct(/* parameters */);
	TrafficDirectorOutputInterface::Construct(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Construct(/* parameters */);
	TrafficSoundOutputInterface::Construct(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Clear(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Construct(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse,32>::Construct(/* parameters */);
	CgsGui::GuiEventQueueBase<32768,16>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Clear(/* parameters */);
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

