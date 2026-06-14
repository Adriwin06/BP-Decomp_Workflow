// BrnGameStateModuleIO.cpp:73
void BrnGameState::GameStateModuleIO::PostWorldInputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::Clear(/* parameters */);
	BrnPhysics::Vehicle::VehicleOutputInterface::Construct(/* parameters */);
	BrnWorld::TriggerEntityModuleIO::TriggerEntityModuleOutputInterface::Construct(/* parameters */);
	CgsModule::VariableEventQueue<1024,16>::Construct(/* parameters */);
	BrnPhysics::Vehicle::AggressiveDrivingFlags::Clear(/* parameters */);
	CgsModule::VariableEventQueue<1024,16>::Clear(/* parameters */);
	BrnWorld::TriggerEntityModuleIO::TriggerEntityModuleOutputInterface::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::Clear(/* parameters */);
	CgsResource::ResourceHandle::Clear(/* parameters */);
	operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::SetActiveRaceCarIndex(/* parameters */);
	operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::ClearCarsInRace(/* parameters */);
	BrnPhysics::Vehicle::VehicleOutputInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	CgsContainers::BitArray<8u>::UnSetAll(/* parameters */);
	BrnPhysics::Vehicle::AggressiveDrivingFlags::Clear(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Clear(/* parameters */);
	BrnAI::AIModuleIO::AICarOutputInterface::Construct(/* parameters */);
	CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse,32>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::SetEventPointer(/* parameters */);
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

// BrnGameStateModuleIO.cpp:95
void BrnGameState::GameStateModuleIO::PostWorldInputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<1536,16>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::Destruct(/* parameters */);
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

// BrnGameStateModuleIO.cpp:58
void BrnGameState::GameStateModuleIO::PreWorldInputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<1536,16>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Destruct(/* parameters */);
	CgsModule::IOBuffer::Destruct(/* parameters */);
	CgsContainers::FlagSet<std::int8_t>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGameStateModuleIO.cpp:36
void BrnGameState::GameStateModuleIO::PreWorldInputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::TimerStatusInterface::Clear(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Construct(/* parameters */);
	CgsSystem::TimerStatus::Clear(/* parameters */);
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsSystem::Time::SetSeconds(/* parameters */);
	CgsSystem::Time::SetFraction(/* parameters */);
	CgsSystem::Time::SetSeconds(/* parameters */);
	CgsSystem::Time::SetFraction(/* parameters */);
	ControllerInput::Construct(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnGameState::TakedownEvent,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Clear(/* parameters */);
	BrnNetwork::BrnNetworkModuleIO::NetworkToGameStateInterface::Construct(/* parameters */);
	CgsModule::EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnNetwork::RoadRulesDownloadEvent,40>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnNetwork::RoadRulesMessageData,40>::Construct(/* parameters */);
	CgsModule::EventQueue<BrnNetwork::RoadRulesRecvData,14>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData,7>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::SetEventPointer(/* parameters */);
	ControllerToGameStateInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsInput::InputIO::UnBindResult,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::SetEventPointer(/* parameters */);
	BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::Clear(/* parameters */);
	BrnNetwork::BrnNetworkModuleIO::PlayerResultsInterface::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGameStateModuleIO.cpp:155
void BrnGameState::GameStateModuleIO::OutputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<13312,16>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::Clear(/* parameters */);
	OnlineScoringOutputInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Destruct(/* parameters */);
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

// BrnGameStateModuleIO.cpp:112
void BrnGameState::GameStateModuleIO::OutputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::Construct(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<3072>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<3072,16>::Construct(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<3072>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	CgsSystem::TimerRequestInterface::Clear(/* parameters */);
	CgsModule::EventQueue<BrnGameState::TakedownEvent,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Construct(/* parameters */);
	CgsSystem::TimerRequests::Clear(/* parameters */);
	CgsSystem::FrameRateTypeRequestInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Clear(/* parameters */);
	BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Construct(/* parameters */);
	BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Clear(/* parameters */);
	operator++(/* parameters */);
	GameStateToControllerInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::SetEventPointer(/* parameters */);
	GameStateToControllerInterface::Clear(/* parameters */);
	CgsGui::GuiEventQueueBase<16384,16>::Construct(/* parameters */);
	BrnWorld::TriggerEntityModuleIO::TriggerManagementInputInterface::Construct(/* parameters */);
	BrnWorld::TriggerEntityModuleIO::TriggerQueryInputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Clear(/* parameters */);
	OnlineScoringOutputInterface::Clear(/* parameters */);
	SpecificGameModeEventInterface::Construct(/* parameters */);
	InterestInterface::Construct(/* parameters */);
	SetUpAllEventStartsInterface::Construct(/* parameters */);
	GameModeOutputInterface::Construct(/* parameters */);
	GameModeOutputInterface::State::Construct(/* parameters */);
	GameModeOutputInterface::State::Construct(/* parameters */);
	CgsModule::IOBuffer::IsBufferLockedForWriting(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
}

