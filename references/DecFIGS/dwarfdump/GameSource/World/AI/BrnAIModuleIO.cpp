// BrnAIModuleIO.cpp:141
void BrnAI::AIModuleIO::InputBuffer_PostPhysics::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
}

// BrnAIModuleIO.cpp:158
void BrnAI::AIModuleIO::InputBuffer_PostPhysics::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnAIModuleIO.cpp:126
void BrnAI::AIModuleIO::OutputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnAIModuleIO.cpp:77
void BrnAI::AIModuleIO::InputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnAIModuleIO.cpp:174
void BrnAI::AIModuleIO::OutputBuffer_PostScene::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnAIModuleIO.cpp:51
void BrnAI::AIModuleIO::InputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	BrnTraffic::BrnTrafficIO::TrafficAIInterface::Construct(/* parameters */);
	CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent,34>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent>::Construct(/* parameters */);
	CgsSystem::TimerStatusInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent>::SetEventPointer(/* parameters */);
	RaceCarAIInterface::Construct(/* parameters */);
	CgsSystem::TimerStatus::Clear(/* parameters */);
	CgsContainers::Array<EGlobalRaceCarIndex,34u>::Construct(/* parameters */);
	CgsSystem::Time::SetFraction(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::RivalInTrafficUpdateEvent>::Clear(/* parameters */);
	CgsSystem::Time::SetFraction(/* parameters */);
	CgsContainers::Array<EGlobalRaceCarIndex,34u>::Construct(/* parameters */);
	CgsSystem::Time::SetSeconds(/* parameters */);
	CgsSystem::Time::SetSeconds(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Construct(/* parameters */);
	AIModuleRequestInterface::Clear(/* parameters */);
	CgsModule::EventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest,128>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnGameState::TakedownEvent,8>::Construct(/* parameters */);
	BrnWorld::PlayerVehicleControls::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::SetEventPointer(/* parameters */);
	CgsModule::EventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest,1>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::SetEventPointer(/* parameters */);
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

// BrnAIModuleIO.cpp:192
void BrnAI::AIModuleIO::OutputBuffer_PostScene::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
	CgsContainers::FlagSet<std::int8_t>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnAIModuleIO.cpp:92
void BrnAI::AIModuleIO::OutputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Clear(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	CgsModule::EventQueue<BrnAI::RouteMapModuleIO::RouteResponse,16>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::Clear(/* parameters */);
	BrnPhysics::Vehicle::VehicleDriverInputInterface::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4920,16>::Clear(/* parameters */);
	AIRaceCarInterface::Construct(/* parameters */);
	AICarOutputInterface::Construct(/* parameters */);
	AIModuleResultInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest>::SetEventPointer(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Construct(/* parameters */);
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

// BrnAIModuleIO.cpp:30
