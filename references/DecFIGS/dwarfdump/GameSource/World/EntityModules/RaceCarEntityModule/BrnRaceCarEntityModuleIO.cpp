// BrnRaceCarEntityModuleIO.cpp:39
void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_Prepare::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<8192>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<8192,16>::Construct(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<8192>::Clear(/* parameters */);
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

// BrnRaceCarEntityModuleIO.cpp:56
void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.cpp:58
		EActiveRaceCarIndex leActiveRaceCarIndex;

	}
	CgsSystem::TimerStatusInterface::Clear(/* parameters */);
	CgsSystem::TimerStatus::Clear(/* parameters */);
	CgsSystem::TimerStatus::Clear(/* parameters */);
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsSystem::Time::SetSeconds(/* parameters */);
	CgsSystem::Time::SetFraction(/* parameters */);
	CgsSystem::Time::SetSeconds(/* parameters */);
	CgsSystem::Time::SetFraction(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::Clear(/* parameters */);
	BrnReplays::ReplayIO::StatusInterface::Construct(/* parameters */);
	CgsModule::EventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent,16>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>::Construct(/* parameters */);
	operator++(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnRaceCarEntityModuleIO.cpp:93
void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	RCEntityActiveRaceCarOutputInterface::Clear(/* parameters */);
	CgsResource::ResourceHandle::Clear(/* parameters */);
	operator++(/* parameters */);
	RCEntityActiveRaceCarOutputInterface::SetActiveRaceCarIndex(/* parameters */);
	BrnGameState::GameStateModuleIO::operator++(/* parameters */);
	RCEntityActiveRaceCarOutputInterface::ClearCarsInRace(/* parameters */);
	RCEntityGlobalRaceCarOutputInterface::Clear(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	RCEntityActiveRaceCarOutputInterface::Clear(/* parameters */);
	CgsResource::ResourceHandle::Clear(/* parameters */);
	operator++(/* parameters */);
	RCEntityActiveRaceCarOutputInterface::SetActiveRaceCarIndex(/* parameters */);
	BrnGameState::GameStateModuleIO::operator++(/* parameters */);
	RCEntityActiveRaceCarOutputInterface::ClearCarsInRace(/* parameters */);
	RCEntityGlobalRaceCarOutputInterface::Clear(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	BrnAI::AIModuleIO::RaceCarAIInterface::Construct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Construct(/* parameters */);
	CgsModule::EventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent,16>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnRaceCarEntityModuleIO.cpp:118
void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostScene::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CrashIO::RaceCarOutputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent>::SetEventPointer(/* parameters */);
	CrashIO::RaceCarOutputInterface::Clear(/* parameters */);
	BrnTraffic::BrnTrafficIO::TrafficToRaceCarInterface_PreScene::Construct(/* parameters */);
	CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,16u>::Construct(/* parameters */);
	CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,8u>::Construct(/* parameters */);
}

// BrnRaceCarEntityModuleIO.cpp:135
void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostScene::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,256>::Construct(/* parameters */);
	BrnAI::AIModuleIO::AIModuleRequestInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest,128>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>::Clear(/* parameters */);
	RaceCarToTrafficInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent,34>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent>::SetEventPointer(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnRaceCarEntityModuleIO.cpp:153
void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PrePhysics::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Construct(/* parameters */);
	BrnAI::AIModuleIO::AIModuleResultInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnGameState::TakedownEvent,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Clear(/* parameters */);
	BrnGameState::GameStateModuleIO::OnlineScoringOutputInterface::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnRaceCarEntityModuleIO.cpp:179
void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PrePhysics::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	BrnPhysics::Vehicle::VehicleDriverInputInterface::Construct(/* parameters */);
	BrnPhysics::Vehicle::VehicleEffectsInputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent>::SetEventPointer(/* parameters */);
	BrnPhysics::Vehicle::VehicleEffectsInputInterface::Clear(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	RCEntityPlayerResetInterface::Clear(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
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

// BrnRaceCarEntityModuleIO.cpp:200
void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics::Construct() {
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
	BrnPhysics::Vehicle::VehicleManagerOutputInterface::Construct(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::CreateVehicleResult,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>::Construct(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,20>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent,20>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,10>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::RaceCarResetEvent,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<std::uint16_t,32>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<uint16_t>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<uint16_t>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::Construct(/* parameters */);
	CgsInput::Device::WheelFFSpring::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::Clear(/* parameters */);
	BrnPhysics::Deformation::DeformationOutputInterfaceForEntityModules::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::Clear(/* parameters */);
	BrnPhysics::Deformation::DeformationOutputInterfaceForEntityModules::Clear(/* parameters */);
	BrnPhysics::Deformation::DeformationOutputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent,10>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent,50>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::JointedPartStateEvent,50>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent,50>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::Clear(/* parameters */);
	BrnPhysics::Deformation::DeformationOutputInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::Clear(/* parameters */);
	BrnAI::AIModuleIO::AIRaceCarInterface::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnRaceCarEntityModuleIO.cpp:221
void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<8192>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<8192,16>::Construct(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<8192>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	BrnDirector::BrnDirectorVehicleInputInterface::Construct(/* parameters */);
	CgsModule::EventQueue<BrnDirector::NewVehicleEvent,50>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnDirector::NewVehicleEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnDirector::NewVehicleEvent>::Clear(/* parameters */);
	RCEntityActiveRaceCarOutputInterface::Clear(/* parameters */);
	CgsResource::ResourceHandle::Clear(/* parameters */);
	operator++(/* parameters */);
	RCEntityActiveRaceCarOutputInterface::SetActiveRaceCarIndex(/* parameters */);
	BrnGameState::GameStateModuleIO::operator++(/* parameters */);
	RCEntityActiveRaceCarOutputInterface::ClearCarsInRace(/* parameters */);
	RCEntityGlobalRaceCarOutputInterface::Clear(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	RCEntityActiveRaceCarOutputInterface::Clear(/* parameters */);
	CgsResource::ResourceHandle::Clear(/* parameters */);
	operator++(/* parameters */);
	RCEntityActiveRaceCarOutputInterface::SetActiveRaceCarIndex(/* parameters */);
	BrnGameState::GameStateModuleIO::operator++(/* parameters */);
	RCEntityActiveRaceCarOutputInterface::ClearCarsInRace(/* parameters */);
	RCEntityGlobalRaceCarOutputInterface::Clear(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Construct(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<35u>::UnSetAll(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Clear(/* parameters */);
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
}

// BrnRaceCarEntityModuleIO.cpp:245
void BrnWorld::RaceCarEntityModuleIO::InputBuffer_GenerateDispatchLists::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

