// BrnDirectorModuleIO.cpp:148
void BrnDirector::DirectorIO::OutputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnDirectorModuleIO.cpp:109
void BrnDirector::DirectorIO::InputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnDirectorModuleIO.cpp:197
void BrnDirector::DirectorIO::SceneQueryOutputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,10>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest,40>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided,10>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast,10>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest,10>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine,1>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine>::Prepare(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>::Prepare(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>::Prepare(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided>::Prepare(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSphereTestFast>::Prepare(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest>::Prepare(/* parameters */);
	CgsSceneManager::SceneManagerIO::SceneQueryInterface::Construct(/* parameters */);
}

// BrnDirectorModuleIO.cpp:237
void BrnDirector::DirectorIO::SceneQueryOutputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>::Release(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestFine>::Destruct(/* parameters */);
	CgsModule::IOBuffer::Destruct(/* parameters */);
}

// BrnDirectorModuleIO.cpp:163
void BrnDirector::DirectorIO::SceneQueryInputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<4032,16>::Construct(/* parameters */);
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::VariableEventQueue<4032,16>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<4032,16>::Prepare(/* parameters */);
	CgsModule::VariableEventQueue<4032,16>::Clear(/* parameters */);
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

// BrnDirectorModuleIO.cpp:36
void BrnDirector::DirectorIO::InputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<8u>::UnSetAll(/* parameters */);
	ControllerInfo::Clear(/* parameters */);
	CgsModule::IOBuffer::Construct(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	BrnTraffic::BrnTrafficIO::TrafficDirectorOutputInterface::Construct(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::Clear(/* parameters */);
	CgsSystem::TimerStatusInterface::Clear(/* parameters */);
	BrnDirectorVehicleInputInterface::Construct(/* parameters */);
	CgsModule::EventQueue<BrnDirector::NewVehicleEvent,50>::Construct(/* parameters */);
	CgsSystem::TimerStatus::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnDirector::NewVehicleEvent>::Construct(/* parameters */);
	CgsSystem::Time::SetFraction(/* parameters */);
	CgsSystem::Time::SetSeconds(/* parameters */);
	CgsSystem::Time::SetSeconds(/* parameters */);
	CgsSystem::Time::SetFraction(/* parameters */);
	CgsModule::BaseEventQueue<BrnDirector::NewVehicleEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnDirector::NewVehicleEvent>::Clear(/* parameters */);
	Camera::PlayerCrashInfo::Construct(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	BrnGameState::GameStateModuleIO::CarScoreData::ClearData(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnDirectorModuleIO.cpp:124
void BrnDirector::DirectorIO::OutputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<512>::Construct(/* parameters */);
	CgsAttribSys::AttribSysIO::AttribSysRequestInterface<512>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<512,16>::Construct(/* parameters */);
	DirectorOutputInterface::Construct(/* parameters */);
	CgsModule::VariableEventQueue<512,16>::Clear(/* parameters */);
	CgsAttribSys::AttribSysIO::AttribSysRequestInterface<512>::Clear(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	CgsSystem::TimerRequestInterface::Clear(/* parameters */);
	CgsSystem::TimerRequests::Clear(/* parameters */);
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

// BrnDirectorModuleIO.cpp:180
void BrnDirector::DirectorIO::SceneQueryInputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<4032,16>::Release(/* parameters */);
	CgsModule::VariableEventQueue<4032,16>::Destruct(/* parameters */);
	CgsModule::VariableEventQueue<4032,16>::Clear(/* parameters */);
	CgsModule::IOBuffer::Destruct(/* parameters */);
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

