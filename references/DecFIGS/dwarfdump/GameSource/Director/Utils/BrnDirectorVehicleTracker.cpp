// BrnDirectorVehicleTracker.cpp:170
void BrnDirector::VehicleTracker::GetEstimatedPositionAtTimeDelta(float32_t  lfTimeDelta) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DataJournal<rw::math::vpu::Vector3,8>::GetCurrent(/* parameters */);
	DataJournal<rw::math::vpu::Vector3,8>::GetCurrent(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
		// BrnDirectorVehicleTracker.cpp:175
		float32_t lfCumulativeTime;

		// BrnDirectorVehicleTracker.cpp:176
		int32_t liLoop;

		DataJournal<float32_t,8>::operator[](/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
}

// BrnDirectorVehicleTracker.cpp:41
void BrnDirector::VehicleTracker::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnGameState::GameStateModuleIO::CarScoreData::ClearData(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
}

// BrnDirectorVehicleTracker.cpp:58
void BrnDirector::VehicleTracker::Update(const GameState *  lpGameState, const BrnDirector::DirectorIO::InputBuffer *  lpInput, EActiveRaceCarIndex  lePlayerCarIndex, bool  lbForceNextWorldCrashToBeFastTopDown) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDirectorVehicleTracker.cpp:66
		VehicleInfo lVehicle;

		// BrnDirectorVehicleTracker.cpp:68
		float32_t lfSimTimeStep;

	}
	DirectorIO::InputBuffer::GetUsedRaceCars(/* parameters */);
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	DirectorIO::InputBuffer::GetVehicleInfoArray(/* parameters */);
	VehicleInfo(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	DirectorIO::InputBuffer::GetTimerStatusInterface(/* parameters */);
	CgsSystem::TimerStatusInterface::GetSimTimerStatus(/* parameters */);
	CgsSystem::TimerStatus::GetCurrentTimeStep(/* parameters */);
	DirectorIO::InputBuffer::GetVehicleInfoArray(/* parameters */);
	DataJournal<float32_t,8>::SetAll(/* parameters */);
	DataJournal<float32_t,8>::SetAll(/* parameters */);
	DirectorIO::InputBuffer::GetVehicleInfoArray(/* parameters */);
	rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
	DataJournal<rw::math::vpu::Vector3,8>::SetAll(/* parameters */);
	DirectorIO::InputBuffer::GetVehicleInfoArray(/* parameters */);
	DataJournal<rw::math::vpu::Vector3,8>::SetAll(/* parameters */);
	DataJournal<BrnDirector::GameState::EEventState,2>::GetCurrent(/* parameters */);
	DirectorIO::InputBuffer::GetVehicleInfoArray(/* parameters */);
	DataJournal<float32_t,8>::SetCurrent(/* parameters */);
	DataJournal<float32_t,8>::SetCurrent(/* parameters */);
	DirectorIO::InputBuffer::GetVehicleInfoArray(/* parameters */);
	rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
	DataJournal<rw::math::vpu::Vector3,8>::SetCurrent(/* parameters */);
	DirectorIO::InputBuffer::GetVehicleInfoArray(/* parameters */);
	DataJournal<rw::math::vpu::Vector3,8>::SetCurrent(/* parameters */);
	{
		// BrnDirectorVehicleTracker.cpp:134
		float32_t lfDesiredRaceEndAmount;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnDirectorVehicleTracker.cpp:90
		float32_t lfSpeedMPH;

		// BrnDirectorVehicleTracker.cpp:91
		float32_t lfNormalThreshold;

		// BrnDirectorVehicleTracker.cpp:92
		float32_t lfHighThreshold;

	}
	DirectorIO::InputBuffer::GetPlayerScoreData(/* parameters */);
	operator=(/* parameters */);
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
		// BrnDirectorVehicleTracker.cpp:143
		const float32_t lfDistanceToFullEffects;

		// BrnDirectorVehicleTracker.cpp:144
		const float32_t lfMaxDistanceToFullEffects;

		rw::math::fpu::Clamp<float>(/* parameters */);
		rw::math::fpu::Max<float>(/* parameters */);
	}
}

// BrnDirectorVehicleTracker.cpp:27
// BrnDirectorVehicleTracker.cpp:28
// BrnDirectorVehicleTracker.cpp:30
// BrnDirectorVehicleTracker.cpp:31
// BrnDirectorVehicleTracker.cpp:32
