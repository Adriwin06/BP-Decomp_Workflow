// BrnRaceCar.cpp:309
void BrnWorld::RaceCar::ClearResetOnTrack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRaceCar.cpp:154
void BrnWorld::RaceCar::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRaceCar.cpp:86
void BrnWorld::RaceCar::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::GetMatrix44Affine_Identity(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	SetAllowedInRoadRage(/* parameters */);
	ClearActiveRaceCar(/* parameters */);
	ClearActiveRaceCarIndex(/* parameters */);
}

// BrnRaceCar.cpp:127
void BrnWorld::RaceCar::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::GetMatrix44Affine_Identity(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	ClearActiveRaceCarIndex(/* parameters */);
	ClearActiveRaceCar(/* parameters */);
}

// BrnRaceCar.cpp:54
void BrnWorld::RaceCar::Construct(EGlobalRaceCarIndex  leGlobalRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::GetMatrix44Affine_Identity(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	ClearActiveRaceCarIndex(/* parameters */);
	WorldRegion::Construct(/* parameters */);
	ClearActiveRaceCar(/* parameters */);
	SetCanPassThroughTraffic(/* parameters */);
}

// BrnRaceCar.cpp:441
void BrnWorld::RaceCar::AreCarsHeadOn(const RaceCar *  lpRaceCar0, const RaceCar *  lpRaceCar1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetPosition(/* parameters */);
	GetPosition(/* parameters */);
	GetDirection(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Matrix44Affine::At(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	GetDirection(/* parameters */);
	GetDirection(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
}

// BrnRaceCar.cpp:401
void BrnWorld::RaceCar::ShouldBeOutOfRange(const RaceCar *  lpPlayerRaceCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCar.cpp:403
		Vector3 lDisplacement;

		// BrnRaceCar.cpp:404
		float32_t lfDistanceSquared;

		// BrnRaceCar.cpp:420
		float32_t lfOutOfRangeDistanceFreeRoam;

		GetPosition(/* parameters */);
		GetPosition(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		{
			// BrnRaceCar.cpp:408
			bool lbIsAheadOfPlayer;

			GetDirection(/* parameters */);
			rw::math::vpu::operator>=(/* parameters */);
			rw::math::vpu::Dot(/* parameters */);
		}
	}
}

// BrnRaceCar.cpp:363
void BrnWorld::RaceCar::ShouldBeInRange(const RaceCar *  lpPlayerRaceCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCar.cpp:365
		Vector3 lDisplacement;

		// BrnRaceCar.cpp:366
		float32_t lfDistanceSquared;

		// BrnRaceCar.cpp:381
		float32_t lfInRangeDistanceFreeRoam;

		GetPosition(/* parameters */);
		GetPosition(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		{
			// BrnRaceCar.cpp:370
			bool lbIsAheadOfPlayer;

			GetDirection(/* parameters */);
			rw::math::vpu::operator>=(/* parameters */);
		}
	}
}

// BrnRaceCar.cpp:237
void BrnWorld::RaceCar::RemoveActiveRaceCar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsInWorld(/* parameters */);
	ClearActiveRaceCar(/* parameters */);
	ClearActiveRaceCarIndex(/* parameters */);
}

// BrnRaceCar.cpp:262
void BrnWorld::RaceCar::RemoveFromWorld() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsInWorld(/* parameters */);
}

// BrnRaceCar.cpp:283
void BrnWorld::RaceCar::RequestResetOnTrack(float32_t  lfSpeed, BrnAI::EResetType  leType, float32_t  lfDistance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	HasActiveRaceCar(/* parameters */);
	GetActiveRaceCar(/* parameters */);
}

// BrnRaceCar.cpp:173
void BrnWorld::RaceCar::AddToWorld(BrnWorld::ERaceCarType  leType, const rw::math::vpu::Matrix44Affine &  lTransform, CgsID  lRivalId, CgsID  lModelId, CgsID  lWheelModelId, int8_t  liRivalIndex, int32_t  liOpponentIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCar.cpp:177
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnRaceCar.cpp:192
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnRaceCar.cpp:213
void BrnWorld::RaceCar::AssignActiveRaceCar(BrnWorld::ActiveRaceCar *  lpActiveRaceCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsInWorld(/* parameters */);
	SetActiveRaceCarIndex(/* parameters */);
	ActiveRaceCar::GetActiveRaceCarIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnRaceCar.cpp:324
void BrnWorld::RaceCar::UpdatePositioningData(const rw::math::vpu::Matrix44Affine &  lTransform, WorldMap2D *  lpWorldMap) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCar.cpp:326
		BrnWorld::EDistrict leDistrict;

		// BrnRaceCar.cpp:327
		uint8_t luDistrictValue;

		IsInWorld(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		CgsWorld::WorldMap2D::GetValue(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		WorldRegion::Construct(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnRaceCar.cpp:330
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	}
}

// BrnRaceCar.cpp:458
void BrnWorld::RaceCar::FillInOutputInterface(BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface *  lpGlobalCarInterface, float32_t  lfSpeed, uint16_t  lu16SectionId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCar.cpp:460
		int8_t liRivalIndex;

		IsAIDriven(/* parameters */);
		GetPosition(/* parameters */);
		GetDirection(/* parameters */);
		GetRivalId(/* parameters */);
		GetModelId(/* parameters */);
		GetGlobalRaceCarIndex(/* parameters */);
		IsPlayerDriven(/* parameters */);
		GetActiveRaceCarIndex(/* parameters */);
		IsAIDriven(/* parameters */);
		IsNetworkDriven(/* parameters */);
		IsInCurrentGameMode(/* parameters */);
		HasActiveRaceCar(/* parameters */);
		IsDispersing(/* parameters */);
		RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::SetRaceCarData(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GetRivalIndex(/* parameters */);
	CgsContainers::BitArray<35u>::SetBit(/* parameters */);
	CgsContainers::BitArray<35u>::SetBit(/* parameters */);
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

// BrnRaceCar.cpp:29
// BrnRaceCar.cpp:30
// BrnRaceCar.cpp:31
// BrnRaceCar.cpp:34
// BrnRaceCar.cpp:35
// BrnRaceCar.cpp:36
// BrnRaceCar.cpp:38
