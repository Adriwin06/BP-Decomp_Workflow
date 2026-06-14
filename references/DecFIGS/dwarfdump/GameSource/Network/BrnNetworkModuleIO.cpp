// BrnNetworkModuleIO.cpp:178
void BrnNetwork::BrnNetworkModuleIO::OutputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
	CgsContainers::FlagSet<std::int8_t>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<14000,16>::Destruct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkModuleIO.cpp:58
void BrnNetwork::BrnNetworkModuleIO::PreSimulationInputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::TimerStatusInterface::Clear(/* parameters */);
	CgsSystem::TimerStatus::Clear(/* parameters */);
	CgsSystem::Time::SetFraction(/* parameters */);
	CgsSystem::Time::SetSeconds(/* parameters */);
	CgsSystem::Time::SetSeconds(/* parameters */);
	CgsSystem::Time::SetFraction(/* parameters */);
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnNetworkModuleIO.cpp:36
void BrnNetwork::BrnNetworkModuleIO::PreSimulationInputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::TimerStatusInterface::Clear(/* parameters */);
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsSystem::TimerStatus::Clear(/* parameters */);
	CgsSystem::Time::SetFraction(/* parameters */);
	CgsSystem::Time::SetFraction(/* parameters */);
	CgsSystem::Time::SetSeconds(/* parameters */);
	CgsSystem::Time::SetSeconds(/* parameters */);
}

// BrnNetworkModuleIO.cpp:113
void BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<13312,16>::Release(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<14000,16>::Destruct(/* parameters */);
	CgsModule::IOBuffer::Destruct(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkModuleIO.cpp:81
void BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
	CgsGui::GuiEventQueueBase<16384,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
	CgsGui::GuiEventQueueBase<16384,16>::Prepare(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::Prepare(/* parameters */);
	BrnPhysics::Vehicle::VehicleOutputInterface::Construct(/* parameters */);
	BrnPhysics::Vehicle::AggressiveDrivingFlags::Clear(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::Clear(/* parameters */);
	CgsResource::ResourceHandle::Clear(/* parameters */);
	operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::SetActiveRaceCarIndex(/* parameters */);
	BrnGameState::GameStateModuleIO::operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::ClearCarsInRace(/* parameters */);
	BrnTraffic::BrnTrafficIO::TrafficNetworkOutputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::Clear(/* parameters */);
	operator++(/* parameters */);
	BrnWorld::CrashIO::NetworkOutputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::Clear(/* parameters */);
	BrnWorld::CrashIO::NetworkOutputInterface::Clear(/* parameters */);
	GameStateToNetworkInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Construct(/* parameters */);
	GameStateToNetworkInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Clear(/* parameters */);
	operator++(/* parameters */);
	StatsInputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::StatsRequestEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::StatsRequestEvent>::Clear(/* parameters */);
	StatsInputInterface::Clear(/* parameters */);
	CgsModule::EventQueue<BrnGameState::TakedownEvent,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Construct(/* parameters */);
	CgsGui::GuiEventQueueBase<16384,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<14000,16>::Construct(/* parameters */);
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
	CgsModule::IOBuffer::IsBufferLockedForWriting(/* parameters */);
}

// BrnNetworkModuleIO.cpp:133
void BrnNetwork::BrnNetworkModuleIO::OutputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
	CgsGui::GuiEventQueueBase<4096,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Construct(/* parameters */);
	CgsModule::EventQueue<BrnGameState::TakedownEvent,8>::Construct(/* parameters */);
	CgsGui::GuiEventQueueBase<4096,16>::Prepare(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::SetEventPointer(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Prepare(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Prepare(/* parameters */);
	BrnPhysics::Vehicle::VehicleDriverInputInterface::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4920,16>::Clear(/* parameters */);
	BrnWorld::CrashIO::NetworkInputInterface::Construct(/* parameters */);
	BrnTraffic::BrnTrafficIO::TrafficNetworkInputInterface::Construct(/* parameters */);
	CgsGui::GuiEventQueueBase<4096,16>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::SetEventPointer(/* parameters */);
	CgsModule::EventQueue<BrnGameState::TakedownEvent,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Clear(/* parameters */);
	NetworkToGameStateInterface::Construct(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<256>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::SetEventPointer(/* parameters */);
	CgsModule::VariableEventQueue<256,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<256,16>::Clear(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<256>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	StatsOutputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::NetworkPlayerStats>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::NetworkPlayerStats>::Clear(/* parameters */);
	StatsOutputInterface::Clear(/* parameters */);
	NetworkToGuiInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate>::Construct(/* parameters */);
	NetworkToGuiInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate>::SetEventPointer(/* parameters */);
	PlayerResultsInterface::Clear(/* parameters */);
	CgsModule::VariableEventQueue<14000,16>::Construct(/* parameters */);
	InGamePlayerStatusInterface::Clear(/* parameters */);
	CgsModule::IOBuffer::IsBufferLockedForWriting(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

