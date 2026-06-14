// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnCrashCombo.cpp:34
	const float32_t krLandingDebounceTime;

	// BrnCrashCombo.cpp:35
	const float32_t krAirDebounceTime;

	// BrnCrashCombo.cpp:36
	const float32_t krAbsoluteDirectionAngleThresh;

	// BrnCrashCombo.cpp:39
	const float32_t krMinSkidDistance;

	// BrnCrashCombo.cpp:40
	const float32_t krMinLandingSpeed;

	// BrnCrashCombo.cpp:41
	const float32_t krMinAirTimeToScore;

	// BrnCrashCombo.cpp:44
	const float32_t krHardLandingSpeed;

	// BrnCrashCombo.cpp:45
	const float32_t krLongSkidDistance;

	// BrnCrashCombo.cpp:48
	const float32_t krMakeTheCrashBreakerEasierFactor;

	// BrnCrashCombo.cpp:56
	const int32_t kxComboDataFlagNone;

	// BrnCrashCombo.cpp:57
	const int32_t kxComboDataFlagSpins = 1;

	// BrnCrashCombo.cpp:58
	const int32_t kxComboDataFlagDegrees = 2;

	// BrnCrashCombo.cpp:59
	const int32_t kxComboDataFlagDistance = 4;

	// BrnCrashCombo.cpp:60
	const int32_t kxComboDataFlagSeconds = 8;

	// BrnCrashCombo.cpp:63
	const float32_t KF_RIGHT_ANGLE;

	// BrnCrashCombo.cpp:64
	const float32_t KF_HALF_RIGHT_ANGLE;

}

// BrnCrashCombo.cpp:169
void BrnWorld::CrashCombo::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashCombo.cpp:182
void BrnWorld::CrashCombo::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashCombo.cpp:222
void BrnWorld::CrashCombo::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashCombo.cpp:424
void BrnWorld::CrashCombo::UpdateCollidingPairs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashCombo.cpp:650
void BrnWorld::CrashCombo::AddUninitialisedItemToCombo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashCombo.cpp:653
		CrashComboItem * lpNew;

	}
}

// BrnCrashCombo.cpp:774
void BrnWorld::CrashCombo::GetNextItem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashCombo.cpp:785
		CrashComboItem * lpComboEntry;

		{
			// BrnCrashCombo.cpp:791
			int32_t liHeadMinusOne;

		}
	}
}

// BrnCrashCombo.cpp:747
void BrnWorld::CrashCombo::GetFirstItem(bool  lbForwards) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashCombo.cpp:757
		int32_t liTailMinusOne;

	}
}

// BrnCrashCombo.cpp:1440
void BrnWorld::CrashCombo::OnVehicleHit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashCombo.cpp:1453
void BrnWorld::CrashCombo::OnVehicleLeapt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashCombo.cpp:1466
void BrnWorld::CrashCombo::OnNewRoad() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashCombo.cpp:327
void BrnWorld::CrashCombo::ResetData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashCombo.cpp:329
		int32_t liIndex;

		rw::math::vpu::Vector3::SetZero(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
	}
}

// BrnCrashCombo.cpp:584
void BrnWorld::CrashCombo::OnCrashFinished() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashCombo.cpp:195
void BrnWorld::CrashCombo::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashCombo.cpp:826
void BrnWorld::CrashCombo::GetSideFacingUp(const rw::math::vpu::Matrix44Affine &  lMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashCombo.cpp:828
		float32_t lfAngle;

		rw::math::vpu::AngleBetweenVectors(/* parameters */);
	}
	rw::math::vpu::CosAngleBetweenNormalizedVectors(/* parameters */);
	rw::math::vpu::ACos(/* parameters */);
	vec_madd(/* parameters */);
	std(/* parameters */);
	vec_sel(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sub(/* parameters */);
	{
		{
			{
			}
		}
	}
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sra(/* parameters */);
	vec_nmsub(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
	}
	{
	}
	vec_abs(/* parameters */);
	vec_madd(/* parameters */);
	vec_rsqrte(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::AngleBetweenVectors(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::AngleBetweenVectors(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
}

// BrnCrashCombo.cpp:718
void BrnWorld::CrashCombo::AddItemToCombo(BrnGameState::GameStateModuleIO::GameEventQueue *  lpEventQueue, BrnWorld::EComboEntryType  leType, float32_t  lfValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashCombo.cpp:720
		CrashComboItemEvent lEvent;

		// BrnCrashCombo.cpp:723
		CrashComboItem * lpNew;

	}
}

// BrnCrashCombo.cpp:1215
void BrnWorld::CrashCombo::UpdateAir(BrnGameState::GameStateModuleIO::GameEventQueue *  lpEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Max<float>(/* parameters */);
}

// BrnCrashCombo.cpp:1137
void BrnWorld::CrashCombo::UpdateSkids(BrnGameState::GameStateModuleIO::GameEventQueue *  lpEventQueue, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashCombo.cpp:1156
		Vector3 lDiff;

		// BrnCrashCombo.cpp:1157
		float32_t lfSkidDistanceThisFrame;

		// BrnCrashCombo.cpp:1164
		BrnWorld::EComboEntryType leSkidType;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
}

// BrnCrashCombo.cpp:694
void BrnWorld::CrashCombo::AddItemToCombo(BrnGameState::GameStateModuleIO::GameEventQueue *  lpEventQueue, BrnWorld::EComboEntryType  leType, int32_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashCombo.cpp:696
		CrashComboItemEvent lEvent;

		// BrnCrashCombo.cpp:699
		CrashComboItem * lpNew;

	}
}

// BrnCrashCombo.cpp:1401
void BrnWorld::CrashCombo::AddLanding(BrnGameState::GameStateModuleIO::GameEventQueue *  lpEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashCombo.cpp:1406
		const BrnWorld::EComboEntryType[7] _kaeLandingType;

	}
}

// BrnCrashCombo.cpp:921
void BrnWorld::CrashCombo::UpdateVehicles(BrnGameState::GameStateModuleIO::GameEventQueue *  lpEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashCombo.cpp:948
void BrnWorld::CrashCombo::UpdateSpins(BrnGameState::GameStateModuleIO::GameEventQueue *  lpEventQueue, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashCombo.cpp:950
		Matrix44Affine lInverseCarTransform;

		// BrnCrashCombo.cpp:952
		Vector3 lLocalRotation;

		// BrnCrashCombo.cpp:953
		int32_t liIndex;

		// BrnCrashCombo.cpp:954
		bool[3] labSpinStopped;

		// BrnCrashCombo.cpp:975
		bool[3] lbNewSpin;

		ActiveRaceCar::GetPhysicsState(/* parameters */);
	}
	ActiveRaceCar::GetPhysicsState(/* parameters */);
	rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::TransformVector(/* parameters */);
	rw::math::vpu::Sgn(/* parameters */);
	rw::math::vpu::Vector3::X(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::Sgn(/* parameters */);
	rw::math::vpu::Sgn(/* parameters */);
	rw::math::vpu::Sgn(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::Sgn(/* parameters */);
	rw::math::vpu::Sgn(/* parameters */);
	rw::math::vpu::operator!=(/* parameters */);
	rw::math::vpu::operator!=(/* parameters */);
	rw::math::vpu::operator!=(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	{
		// BrnCrashCombo.cpp:982
		bool lbGotSpin;

		{
			// BrnCrashCombo.cpp:985
			const float32_t krSpinThresholdAngle;

			rw::math::vpu::Abs<float>(/* parameters */);
		}
	}
	rw::math::vpu::operator><VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator+=<VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat(/* parameters */);
	rw::math::vpu::operator+=<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator+=<VectorAxisY>(/* parameters */);
	{
		// BrnCrashCombo.cpp:1052
		float32_t lfUpAngle;

		ActiveRaceCar::GetTransform(/* parameters */);
		rw::math::vpu::AngleBetweenVectors(/* parameters */);
		{
			{
				{
				}
			}
		}
		vec_madd(/* parameters */);
		{
			{
				{
				}
			}
		}
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		std(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_sra(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
		}
		{
		}
		rw::math::vpu::CosAngleBetweenNormalizedVectors(/* parameters */);
		vec_abs(/* parameters */);
		vec_sub(/* parameters */);
		vec_madd(/* parameters */);
		vec_rsqrte(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
	}
	{
		// BrnCrashCombo.cpp:1080
		int32_t liBarrelRolls;

	}
	rw::math::vpu::operator< <VectorAxisX>(/* parameters */);
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
}

// BrnCrashCombo.cpp:1251
void BrnWorld::CrashCombo::DetectAirAndGround(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashCombo.cpp:1284
		float32_t lfVelocity;

		ActiveRaceCar::GetPhysicsState(/* parameters */);
		rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
}

// BrnCrashCombo.cpp:1319
void BrnWorld::CrashCombo::DetectSkid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashCombo.cpp:1341
		float32_t lfSpeed;

	}
	ActiveRaceCar::GetPhysicsState(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
}

// BrnCrashCombo.cpp:1362
void BrnWorld::CrashCombo::UpdateExtras(BrnGameState::GameStateModuleIO::GameEventQueue *  lpEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashCombo.cpp:1365
		int32_t liWheelIndex;

		// BrnCrashCombo.cpp:1366
		int32_t liNumAttachedWheels;

		ActiveRaceCar::GetPhysicsState(/* parameters */);
	}
}

// BrnCrashCombo.cpp:881
void BrnWorld::CrashCombo::UpdateCurrentCombo(BrnGameState::GameStateModuleIO::GameEventQueue *  lpEventQueue, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ActiveRaceCar::GetTransform(/* parameters */);
	RaceCar::GetTransform(/* parameters */);
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
}

// BrnCrashCombo.cpp:246
void BrnWorld::CrashCombo::Update(float32_t  lfTimeStep, OutputBuffer_PrePhysics *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashCombo.cpp:298
		BrnGameState::GameStateModuleIO::GameEventQueue * lpEventQueue;

		RaceCarEntityModuleIO::OutputBuffer_PrePhysics::GetGameEventQueue(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnCrashCombo.cpp:518
void BrnWorld::CrashCombo::OnCrashStart(BrnWorld::ActiveRaceCar *  lpPlayerCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashCombo.cpp:520
		Vector3 lCarPos;

		ActiveRaceCar::GetPosition(/* parameters */);
	}
}

