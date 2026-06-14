// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnPowerParkingManager.cpp:25
	float32_t KF_MIN_LINEAR_VELOCITY_TO_START_POWER_PARK;

	// BrnPowerParkingManager.cpp:26
	float32_t KF_MIN_HANDBRAKE_TO_START_POWER_PARK;

	// BrnPowerParkingManager.cpp:28
	float32_t KF_MAX_LINEAR_VELOCITY_TO_END_POWER_PARK;

	// BrnPowerParkingManager.cpp:29
	float32_t KF_MAX_ANGULAR_VELOCITY_TO_END_POWER_PARK;

	// BrnPowerParkingManager.cpp:30
	float32_t KF_MAX_PERPENDICULAR_DISTANCE_FOR_ALIGNMENT;

	// BrnPowerParkingManager.cpp:31
	float32_t KF_MAX_PERPENDICULAR_DISTANCE_FOR_PERFECT;

	// BrnPowerParkingManager.cpp:32
	float32_t KF_PROMIXITY_IDEAL_1ST_CAR_DISTANCE;

	// BrnPowerParkingManager.cpp:33
	float32_t KF_PROMIXITY_IDEAL_2ND_CAR_DISTANCE;

	// BrnPowerParkingManager.cpp:35
	float32_t KF_DISTANCE_SCORE_SCALE;

	// BrnPowerParkingManager.cpp:36
	float32_t KF_PROXIMITY_SCORE_SCALE;

	// BrnPowerParkingManager.cpp:37
	float32_t KF_SPEED_SCORE_SCALE;

	// BrnPowerParkingManager.cpp:38
	float32_t KF_ROTATION_SCORE_SCALE;

	// BrnPowerParkingManager.cpp:39
	float32_t KF_POSITION_ALIGNMENT_SCORE_SCALE;

	// BrnPowerParkingManager.cpp:40
	float32_t KF_ANGLE_ALIGNMENT_SCORE_SCALE;

	// BrnPowerParkingManager.cpp:43
	float32_t KF_DISTANCE_SCORE_WEIGHT;

	// BrnPowerParkingManager.cpp:44
	float32_t KF_PROXIMITY_SCORE_WEIGHT;

	// BrnPowerParkingManager.cpp:45
	float32_t KF_SPEED_SCORE_WEIGHT;

	// BrnPowerParkingManager.cpp:46
	float32_t KF_ROTATION_SCORE_WEIGHT;

	// BrnPowerParkingManager.cpp:47
	float32_t KF_ANGLE_ALIGNMENT_SCORE_WEIGHT;

	// BrnPowerParkingManager.cpp:48
	float32_t KF_POSITION_ALIGNMENT_SCORE_WEIGHT;

	// BrnPowerParkingManager.cpp:49
	float32_t KF_TOTAL_SCORE_WEIGHTS;

	// BrnPowerParkingManager.cpp:53
	float32_t KF_WAIT_FOR_OUTCOME_TIME;

}

// BrnPowerParkingManager.cpp:451
void BrnWorld::PowerParkingManager::SetNearbyParkedTrafficData(uint32_t  luNearbyParkedCarCount, uint32_t  luNearbyParkedPlayerCount, float32_t  lfClosestDistanceSq, float32_t  lfSecondClosestDistanceSq, float32_t  lfClosestAngleDiff, float32_t  lfClosestPerpendicularDist) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPowerParkingManager.cpp:420
void BrnWorld::PowerParkingManager::AddNearTraffic(uint32_t  luEntityId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPowerParkingManager.cpp:433
void BrnWorld::PowerParkingManager::AddContactTraffic(uint32_t  luEntityId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPowerParkingManager.cpp:68
void BrnWorld::PowerParkingManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPowerParkingManager.cpp:346
void BrnWorld::PowerParkingManager::ClearData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPowerParkingManager.cpp:83
void BrnWorld::PowerParkingManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPowerParkingManager.cpp:103
void BrnWorld::PowerParkingManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPowerParkingManager.cpp:376
void BrnWorld::PowerParkingManager::DetermineOutcome() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPowerParkingManager.cpp:266
void BrnWorld::PowerParkingManager::UpdateScoring(float32_t  lfAngleChange, float32_t  lfPositionChange, float32_t  lfCurrentLinearVelocity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPowerParkingManager.cpp:268
		float32_t lfScaledDistanceScore;

		// BrnPowerParkingManager.cpp:269
		float32_t lfScaledProximityScore;

		// BrnPowerParkingManager.cpp:270
		float32_t lfScaledSpeedScore;

		// BrnPowerParkingManager.cpp:271
		float32_t lfScaledRotationScore;

		// BrnPowerParkingManager.cpp:272
		float32_t lfScaledAngleAlignmentScore;

		// BrnPowerParkingManager.cpp:273
		float32_t lfScaledPositionAlignmentScore;

	}
	rw::math::vpu::Max<float>(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	{
		// BrnPowerParkingManager.cpp:302
		float32_t lfClosestAngleDiff;

		// BrnPowerParkingManager.cpp:305
		float32_t lfPerpendicularDist;

		rw::math::fpu::Max<float>(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
	}
	{
		// BrnPowerParkingManager.cpp:279
		float32_t lfClosestDistance;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Sqrt(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Max<float>(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Sqrt(/* parameters */);
		rw::math::vpu::Max<float>(/* parameters */);
	}
}

// BrnPowerParkingManager.cpp:122
void BrnWorld::PowerParkingManager::Update(BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType, float32_t  lfSimTimerStep, BrnWorld::ActiveRaceCar *  lpPlayerActiveRaceCar, BrnWorld::PlayerVehicleControls *  lpPlayerControls, OutputBuffer_PrePhysics::GameEventQueue *  lpEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPowerParkingManager.cpp:124
		Vector3 lvPos;

		// BrnPowerParkingManager.cpp:125
		Vector3 lvFacing;

		// BrnPowerParkingManager.cpp:126
		float32_t lfCurrentLinearVelocity;

		// BrnPowerParkingManager.cpp:127
		float32_t lfCurrentAngularVelocity;

		// BrnPowerParkingManager.cpp:128
		float32_t lfPositionChange;

		// BrnPowerParkingManager.cpp:129
		float32_t lfAngleChange;

	}
	ActiveRaceCar::IsCrashing(/* parameters */);
	ActiveRaceCar::GetPosition(/* parameters */);
	ActiveRaceCar::GetTransform(/* parameters */);
	RaceCar::GetTransform(/* parameters */);
	ActiveRaceCar::GetVelocity(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	ActiveRaceCar::GetPhysicsState(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	{
		// BrnPowerParkingManager.cpp:167
		PowerParkResultEvent lPowerParkResult;

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
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
}

