// BrnReplayRaceCarEntitySerialiser.cpp:52
void BrnReplays::RaceCarEntitySerialiser::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReplayRaceCarEntitySerialiser.cpp:609
void BrnReplays::RaceCarEntitySerialiser::ReadRenderParams(BrnWorld::ActiveRaceCar::RenderParams *  lpParams, RaceCarKeyData *  lpKeyData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReplayRaceCarEntitySerialiser.cpp:300
void BrnReplays::RaceCarEntitySerialiser::PlayActiveRaceCar(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReplayRaceCarEntitySerialiser.cpp:39
void BrnReplays::RaceCarEntitySerialiser::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReplayRaceCarEntitySerialiser.cpp:228
void BrnReplays::RaceCarEntitySerialiser::RecordActiveRaceCar(int32_t  liIndex, int32_t  liGlobalIndex, bool  lbPlayer, BrnWorld::ActiveRaceCar *  lpActiveRaceCar, BoostManager *  lpBoostManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayRaceCarEntitySerialiser.cpp:230
		RaceCarStaticLayout * lpLayout;

		// BrnReplayRaceCarEntitySerialiser.cpp:239
		const BoostOutputInfo & lBoostOutputInfo;

		GetStaticLayout(/* parameters */);
	}
	BrnWorld::ActiveRaceCar::IsOnRaceStartState(/* parameters */);
	BrnWorld::ActiveRaceCar::GetPhysicsState(/* parameters */);
	BrnWorld::ActiveRaceCar::GetPhysicsState(/* parameters */);
	BrnPhysics::Vehicle::RaceCarState::operator=(/* parameters */);
	BrnWorld::ActiveRaceCar::IsDoingStartLineBoost(/* parameters */);
	BrnWorld::BoostManager::IsBoosting(/* parameters */);
	BrnWorld::BoostManager::IsTailgating(/* parameters */);
	BrnWorld::BoostManager::IsInAir(/* parameters */);
	BrnWorld::BoostManager::IsOncoming(/* parameters */);
	BrnWorld::BoostManager::IsDrifting(/* parameters */);
	BrnWorld::BoostManager::IsBlueMode(/* parameters */);
	BrnWorld::BoostManager::GetBoostAmount(/* parameters */);
	BrnWorld::BoostManager::GetMaxBoost(/* parameters */);
	BrnWorld::BoostManager::GetIsChainNotifyPending(/* parameters */);
	BrnWorld::BoostManager::AreWeAllowedToBoost(/* parameters */);
	BrnWorld::BoostManager::HasJustLostBoostChunk(/* parameters */);
	BrnWorld::BoostManager::IsBoostFull(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayRaceCarEntitySerialiser.cpp:150
void BrnReplays::RaceCarEntitySerialiser::PlayRaceCars() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayRaceCarEntitySerialiser.cpp:152
		RaceCarStaticLayout * lpLayout;

		GetStaticLayout(/* parameters */);
	}
	BaseSerialiser::IsStalled(/* parameters */);
	{
		// BrnReplayRaceCarEntitySerialiser.cpp:164
		int32_t liIndex;

	}
	{
		// BrnReplayRaceCarEntitySerialiser.cpp:191
		int32_t liIndex;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayRaceCarEntitySerialiser.cpp:339
void BrnReplays::RaceCarEntitySerialiser::FillOuputInterfaces(BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *  lpActiveCarInterface, BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface *  lpGlobalCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayRaceCarEntitySerialiser.cpp:349
		RaceCarStaticLayout * lpLayout;

		// BrnReplayRaceCarEntitySerialiser.cpp:355
		EActiveRaceCarIndex leActiveRaceCarIndex;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::Clear(/* parameters */);
	}
	CgsResource::ResourceHandle::Clear(/* parameters */);
	operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::SetActiveRaceCarIndex(/* parameters */);
	BrnGameState::GameStateModuleIO::operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::ClearCarsInRace(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::Clear(/* parameters */);
	BaseSerialiser::IsPreparing(/* parameters */);
	GetStaticLayout(/* parameters */);
	{
		// BrnReplayRaceCarEntitySerialiser.cpp:358
		EGlobalRaceCarIndex lePlayerGlobal;

		BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::SetPlayerGlobalRaceCarIndex(/* parameters */);
	}
	{
		// BrnReplayRaceCarEntitySerialiser.cpp:369
		uint32_t luFlags;

		// BrnReplayRaceCarEntitySerialiser.cpp:379
		Vector4 lDummyMaterialColour;

		// BrnReplayRaceCarEntitySerialiser.cpp:380
		Vector3 lDummyRotations;

		// BrnReplayRaceCarEntitySerialiser.cpp:398
		WorldRegion lWorldRegion;

		// BrnReplayRaceCarEntitySerialiser.cpp:401
		EGlobalRaceCarIndex leGlobal;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::SetBoostOutputInfoN(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::SetRaceCarState(/* parameters */);
		BrnWorld::WorldRegion::Construct(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::SetRaceCarData(/* parameters */);
	}
	operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::SetPlayerActiveRaceCarData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayRaceCarEntitySerialiser.cpp:559
void BrnReplays::RaceCarEntitySerialiser::WriteRenderParams(BrnWorld::ActiveRaceCar::RenderParams *  lpParams, RaceCarKeyData *  lpKeyData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayRaceCarEntitySerialiser.cpp:563
		int32_t liIndex;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	{
		// BrnReplayRaceCarEntitySerialiser.cpp:578
		bool lbExists;

	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	Vector3Plus::Write(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	{
		rw::math::fpu::Vector4Template<float>::SetComponent(/* parameters */);
		rw::math::fpu::Vector4Template<float>::GetComponent(/* parameters */);
		rw::math::fpu::IsSimilar(/* parameters */);
	}
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
}

// BrnReplayRaceCarEntitySerialiser.cpp:70
void BrnReplays::RaceCarEntitySerialiser::RecordRaceCarFrame(int32_t  liIndex, bool  lbActive, bool  lbPlayer, BrnWorld::ActiveRaceCar *  lpActiveRaceCar, BoostManager *  lpBoostManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayRaceCarEntitySerialiser.cpp:74
		RaceCarStaticLayout * lpLayout;

		GetStaticLayout(/* parameters */);
	}
	RaceCarKeyData::Clear(/* parameters */);
	rw::math::fpu::QuatPosTemplate<float>::SetZero(/* parameters */);
	rw::math::fpu::QuaternionTemplate<float>::Set(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Set(/* parameters */);
	rw::math::fpu::QuaternionTemplate<float>::Set(/* parameters */);
	OrthonormalMatrix::Clear(/* parameters */);
	BrnWorld::ActiveRaceCar::RenderParams::Reset(/* parameters */);
	operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	CgsModule::EventQueue<BrnWorld::DetachedPartRenderEvent,20>::operator=(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::DetachedPartRenderEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnWorld::DetachedPartRenderEvent,20>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::DetachedPartRenderEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	BrnWorld::RaceCar::GetModelId(/* parameters */);
	BrnWorld::RaceCar::GetWheelModelId(/* parameters */);
	BrnWorld::RaceCar::GetGlobalRaceCarIndex(/* parameters */);
	BrnWorld::RaceCar::GetModelId(/* parameters */);
	BrnWorld::RaceCar::GetWheelModelId(/* parameters */);
	operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	CgsModule::EventQueue<BrnWorld::DetachedPartRenderEvent,20>::operator=(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::DetachedPartRenderEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnWorld::DetachedPartRenderEvent,20>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::DetachedPartRenderEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::DetachedPartRenderEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

