// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnCrashPlayManager.cpp:27
	const float32_t KF_MIN_CRASH_MAGNITUDE_REACTION;

	// BrnCrashPlayManager.cpp:30
	const float32_t KF_AIR_RAM_OPPORTUNITY_TIME;

	// BrnCrashPlayManager.cpp:31
	const float32_t KF_AIR_RAM_DELAY_TIME;

	// BrnCrashPlayManager.cpp:32
	const float32_t KF_MIN_TIME_BETWEEN_AIR_RAMS;

	// BrnCrashPlayManager.cpp:33
	const float32_t KF_MIN_TIME_BETWEEN_TRAFFIC_STOMPS;

	// BrnCrashPlayManager.cpp:34
	const float32_t KF_MIN_TIME_BETWEEN_HITTING_OVERHEAD_SIGNS;

	// BrnCrashPlayManager.cpp:37
	float32_t KF_BOOST_FOR_VEHICLE_IMPACT_LOW;

	// BrnCrashPlayManager.cpp:38
	float32_t KF_BOOST_FOR_VEHICLE_IMPACT_HIGH;

	// BrnCrashPlayManager.cpp:39
	float32_t KF_BOOST_FOR_EVERY_10_CARS_HIT_LO;

	// BrnCrashPlayManager.cpp:40
	float32_t KF_BOOST_FOR_EVERY_10_CARS_HIT_HI;

	// BrnCrashPlayManager.cpp:41
	float32_t KF_BOOST_FOR_OVERHEAD_SIGN;

	// BrnCrashPlayManager.cpp:42
	float32_t KF_BOOST_FOR_INITIAL_AIRTIME;

	// BrnCrashPlayManager.cpp:43
	float32_t KF_BOOST_FOR_NEW_ROAD;

	// BrnCrashPlayManager.cpp:44
	float32_t KF_BOOST_FOR_NEW_JUNCTION;

	// BrnCrashPlayManager.cpp:45
	float32_t KF_BOOST_FOR_DISTANCE_TRAVELLED;

	// BrnCrashPlayManager.cpp:46
	float32_t KF_MINIMUM_BOUNCE_BOOST_TIME;

	// BrnCrashPlayManager.cpp:47
	float32_t KF_MAXIMUM_BOUNCE_BOOST_TIME;

	// BrnCrashPlayManager.cpp:48
	float32_t KF_COST_FOR_BOUNCE_BOOST_EASY;

	// BrnCrashPlayManager.cpp:49
	float32_t KF_COST_FOR_BOUNCE_BOOST_HARD;

	// BrnCrashPlayManager.cpp:50
	float32_t KF_COST_FOR_BEING_ON_GROUND;

	// BrnCrashPlayManager.cpp:51
	float32_t KF_COST_FOR_1_BOUNCE_ON_GROUND;

	// BrnCrashPlayManager.cpp:52
	float32_t KF_COST_FOR_2_BOUNCES_ON_GROUND;

	// BrnCrashPlayManager.cpp:53
	float32_t KF_INITIAL_MIN_BOOST;

	// BrnCrashPlayManager.cpp:54
	float32_t KF_LOSE_BOOST_GRACE_PERIOD;

	// BrnCrashPlayManager.cpp:55
	float32_t KF_INITIAL_GRACE_PERIOD;

	// BrnCrashPlayManager.cpp:56
	float32_t KF_TIME_ON_GROUND_NO_PENALTY;

	// BrnCrashPlayManager.cpp:57
	float32_t KF_TIME_ON_GROUND_PROMPT_NEEDED;

	// BrnCrashPlayManager.cpp:58
	float32_t KF_TIME_NO_GROUND_TO_COUNT_AS_AIR;

	// BrnCrashPlayManager.cpp:59
	float32_t KF_EASY_TO_HARD_OVER_N_VEHICLES;

	// BrnCrashPlayManager.cpp:60
	int32_t KI_AWARD_BOOST_EVERY_N_VEHICLES;

	// BrnCrashPlayManager.cpp:61
	float32_t KF_MIN_TRAFFIC_DENSITY;

	// BrnCrashPlayManager.cpp:62
	float32_t KF_MAX_TRAFFIC_DENSITY;

	// BrnCrashPlayManager.cpp:63
	float32_t KF_LOWER_LIMIT_VEHICLE_SCORE;

	// BrnCrashPlayManager.cpp:64
	float32_t KF_UPPER_LIMIT_VEHICLE_SCORE;

	// BrnCrashPlayManager.cpp:67
	const rw::math::vpu::Vector3 K_WORLD_Y_AXIS;

	// BrnCrashPlayManager.cpp:70
	const float32_t KF_TRAFFIC_STOMP_DURATION;

	// BrnCrashPlayManager.cpp:71
	const float32_t KF_TRAFFIC_STOMP_GROUND_AIR_RAM_POWER;

	// BrnCrashPlayManager.cpp:72
	const float32_t KF_TRAFFIC_STOMP_FLYING_AIR_RAM_POWER;

	// BrnCrashPlayManager.cpp:73
	const float32_t KF_TRAFFIC_STOMP_POWER_INCREASE_RATE;

	// BrnCrashPlayManager.cpp:74
	const int32_t KI_TRAFFIC_STOMP_AIR_RAM_FRAME_DELAY = 40;

	// BrnCrashPlayManager.cpp:75
	const float32_t KF_TRAFFIC_STOMP_DECAY_RATE;

	// BrnCrashPlayManager.cpp:78
	const float32_t KF_AFTERTOUCH_GROUND_DECAY_TIME;

	// BrnCrashPlayManager.cpp:79
	const float32_t KF_AFTERTOUCH_AIR_DECAY_TIME;

	// BrnCrashPlayManager.cpp:80
	const float32_t KF_AFTERTOUCH_NO_BOOST_DECAY_TIME;

	// BrnCrashPlayManager.cpp:81
	const float32_t KF_NON_SHOWTIME_AFTERTOUCH_SCALE;

	// BrnCrashPlayManager.cpp:83
	const float32_t KF_AFTERTOUCH_FOR_CAR_IMPACT;

	// BrnCrashPlayManager.cpp:84
	const float32_t KF_AFTERTOUCH_FOR_STATIONARY_BOUNCE_BOOST;

}

// BrnCrashPlayManager.cpp:149
void BrnWorld::CrashPlayManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashPlayManager.cpp:168
void BrnWorld::CrashPlayManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashPlayManager.cpp:971
void BrnWorld::CrashPlayManager::GetShowtimeTrafficDensityScale() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashPlayManager.cpp:975
		float32_t lfScale;

	}
}

// BrnCrashPlayManager.cpp:918
void BrnWorld::CrashPlayManager::OnPlayerCarCrash(const RaceCarCrashEvent *  lpCrashEvent, BrnWorld::ActiveRaceCar *  lpPlayerCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashPlayManager.cpp:183
void BrnWorld::CrashPlayManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashPlayManager.cpp:617
void BrnWorld::CrashPlayManager::GetMaxAftertouchPower() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashPlayManager.cpp:989
void BrnWorld::CrashPlayManager::GetAftertouchLevel() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashPlayManager.cpp:538
void BrnWorld::CrashPlayManager::UpdateBounceBoost(float32_t  lfSimTimerTimeStep, BrnWorld::PlayerVehicleControls *  lpPlayerControls, BrnWorld::ActiveRaceCar *  lpPlayerActiveRaceCar, OutputBuffer_PrePhysics *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::IsZero(/* parameters */);
}

// BrnCrashPlayManager.cpp:724
void BrnWorld::CrashPlayManager::OnCarLeapt(EntityId  lVehicleID, bool  lbOncoming) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashPlayManager.cpp:845
void BrnWorld::CrashPlayManager::OnSmashStunt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashPlayManager.cpp:952
void BrnWorld::CrashPlayManager::IsPlayerInShowtimeOnGround() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashPlayManager.cpp:737
void BrnWorld::CrashPlayManager::OnEnterRoad(const RoadRulesEnterRoadAction *  lpRRAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ClampBoostLevel(/* parameters */);
}

// BrnCrashPlayManager.cpp:766
void BrnWorld::CrashPlayManager::OnEnterJunction(const SendJunctionPlayerIsAtAction *  lpJAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ClampBoostLevel(/* parameters */);
}

// BrnCrashPlayManager.cpp:856
void BrnWorld::CrashPlayManager::OnHitOverheadSign() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ClampBoostLevel(/* parameters */);
}

// BrnCrashPlayManager.cpp:879
void BrnWorld::CrashPlayManager::OnVehicleHitConfirmed(int32_t  liVehicleBaseScore, int32_t  liVehicleChainBonus, int32_t  liTotalVehiclesHit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashPlayManager.cpp:884
		float32_t lfClampedScore;

		// BrnCrashPlayManager.cpp:887
		float32_t lfScaledScore;

		// BrnCrashPlayManager.cpp:890
		float32_t lfBoost;

		ClampBoostLevel(/* parameters */);
		rw::math::fpu::Clamp<float>(/* parameters */);
		rw::math::vpu::Max<float>(/* parameters */);
	}
	rw::math::fpu::Clamp<float>(/* parameters */);
	ClampBoostLevel(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
}

// BrnCrashPlayManager.cpp:795
void BrnWorld::CrashPlayManager::OnBounce(const JustBouncedAction *  lpBounceAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::Min<float>(/* parameters */);
	{
		// BrnCrashPlayManager.cpp:800
		float32_t lfBoostCost;

		ClampBoostLevel(/* parameters */);
		rw::math::vpu::Max<float>(/* parameters */);
	}
}

// BrnCrashPlayManager.cpp:199
void BrnWorld::CrashPlayManager::Activate(BrnWorld::ActiveRaceCar *  lpPlayerActiveRaceCar, float32_t  lfInitialBoostPercentage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	CgsContainers::RingBuffer<CgsSceneManager::EntityId>::Clear(/* parameters */);
	CgsContainers::RingBuffer<CgsSceneManager::EntityId>::Clear(/* parameters */);
}

// BrnCrashPlayManager.cpp:102
void BrnWorld::CrashPlayManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	CgsContainers::FixedRingBuffer<CgsSceneManager::EntityId,32>::Construct(/* parameters */);
	CgsSceneManager::VolumeInstanceId::SetInvalid(/* parameters */);
	CgsContainers::RingBuffer<CgsSceneManager::EntityId>::Clear(/* parameters */);
	CgsContainers::FixedRingBuffer<CgsSceneManager::EntityId,8>::Construct(/* parameters */);
	CgsContainers::RingBuffer<CgsSceneManager::EntityId>::Clear(/* parameters */);
}

// BrnCrashPlayManager.cpp:676
void BrnWorld::CrashPlayManager::OnCarCrash(EntityId  lHitVehicleID, bool  lbPlayerHitCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashPlayManager.cpp:689
		int32_t liCrashSetIndex;

	}
	CgsContainers::RingBuffer<CgsSceneManager::EntityId>::Push(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	CgsContainers::RingBuffer<CgsSceneManager::EntityId>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnCrashPlayManager.cpp:634
void BrnWorld::CrashPlayManager::HandlePlayerToVehicleImpact(BrnWorld::ActiveRaceCar *  lpPlayerActiveRaceCar, EntityId  lHitVehicleID, const RaceCarContact *  lpContact) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashPlayManager.cpp:641
		float32_t lfCrashMagnitude;

	}
	ActiveRaceCar::IsCrashing(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	BrnTraffic::GetVehicleSpecies(/* parameters */);
	rw::math::vpu::Vector3::Y(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ, VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
}

// BrnCrashPlayManager.cpp:933
void BrnWorld::CrashPlayManager::SetBouncePromptNeeded(bool  lbPromptNeeded, OutputBuffer_PrePhysics *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashPlayManager.cpp:937
		ShowtimeBouncePromptEvent lPromptEvent;

		RaceCarEntityModuleIO::OutputBuffer_PrePhysics::GetGameEventQueue(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnCrashPlayManager.cpp:589
void BrnWorld::CrashPlayManager::UpdateNewRoad(float32_t  lfSimTimerTimeStep, OutputBuffer_PrePhysics *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashPlayManager.cpp:593
		EnterNewRoadEvent lEnterRoadEvent;

	}
	RaceCarEntityModuleIO::OutputBuffer_PrePhysics::GetGameEventQueue(/* parameters */);
	{
		// BrnCrashPlayManager.cpp:602
		EnterNewRoadEvent lEnterJunctionEvent;

		RaceCarEntityModuleIO::OutputBuffer_PrePhysics::GetGameEventQueue(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnCrashPlayManager.cpp:568
void BrnWorld::CrashPlayManager::UpdateCarLeaping(float32_t  lfSimTimerTimeStep, OutputBuffer_PrePhysics *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashPlayManager.cpp:572
		VehicleLeaptEvent lLeaptEvent;

		RaceCarEntityModuleIO::OutputBuffer_PrePhysics::GetGameEventQueue(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnCrashPlayManager.cpp:237
void BrnWorld::CrashPlayManager::Deactivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashPlayManager.cpp:361
void BrnWorld::CrashPlayManager::UpdateMomentum(float32_t  lfSimTimerTimeStep, BrnWorld::ActiveRaceCar *  lpPlayerActiveRaceCar, OutputBuffer_PrePhysics *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashPlayManager.cpp:364
		const rw::math::vpu::Vector3 lPlayerPosition;

		ActiveRaceCar::GetPosition(/* parameters */);
	}
	RaceCar::GetPosition(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		// BrnCrashPlayManager.cpp:367
		float32_t lfDistanceTravelledLastFrame;

	}
	ClampBoostLevel(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	rw::math::fpu::IsZero(/* parameters */);
	ClampBoostLevel(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	rw::math::fpu::IsZero(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	BrnMath::Magnitude2D(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ, VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnCrashPlayManager.cpp:470
void BrnWorld::CrashPlayManager::UpdateTrafficStomp(float32_t  lfSimTimerTimeStep, BrnWorld::PlayerVehicleControls *  lpPlayerControls, BrnWorld::ActiveRaceCar *  lpPlayerActiveRaceCar, OutputBuffer_PrePhysics *  lpOutput, const rw::math::vpu::Vector3  lCameraX, const rw::math::vpu::Vector3  lCameraZ) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashPlayManager.cpp:501
		Vector3 lImpulse;

		// BrnCrashPlayManager.cpp:502
		float32_t lfAirRamPower;

		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		RaceCarEntityModuleIO::OutputBuffer_PrePhysics::GetVehicleEffectsInterface(/* parameters */);
		BrnPhysics::Vehicle::VehicleEffectsInputInterface::CreateAirRam(/* parameters */);
		{
		}
		rw::math::vpu::GetVector3_Zero(/* parameters */);
	}
	{
		// BrnCrashPlayManager.cpp:478
		TriggerCrashBreakerEvent lCrashBreakerGameEvent;

		ActiveRaceCar::GetPosition(/* parameters */);
		RaceCar::GetPosition(/* parameters */);
		RaceCarEntityModuleIO::OutputBuffer_PrePhysics::GetGameEventQueue(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnCrashPlayManager.cpp:260
void BrnWorld::CrashPlayManager::Update(const rw::math::vpu::Matrix44Affine &  lCameraTransform, float32_t  lfSimTimerTimeStep, OutputBuffer_PrePhysics *  lpOutput, BrnWorld::ActiveRaceCar *  lpPlayerActiveRaceCar, BrnWorld::PlayerVehicleControls *  lpPlayerControls) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashPlayManager.cpp:282
		Vector3 lCameraX;

		// BrnCrashPlayManager.cpp:283
		Vector3 lCameraZ;

	}
	ActiveRaceCar::IsCrashing(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
}

