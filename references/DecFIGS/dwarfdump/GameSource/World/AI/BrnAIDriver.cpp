// BrnRoute.h:26
namespace BrnAI {
	// BrnAIDriver.cpp:39
	const float32_t KF_MIN_BRAKING_ANGLE;

	// BrnAIDriver.cpp:40
	const float32_t KF_SIGNIFICANT_BRAKING_ANGLE;

	// BrnAIDriver.cpp:41
	const float32_t KF_MAX_BRAKING_ANGLE;

	// BrnAIDriver.cpp:44
	const float32_t KF_AI_MAX_BRAKING_SPEED_PROPORTION;

	// BrnAIDriver.cpp:45
	const float32_t KF_AI_MIN_BRAKING_SPEED_PROPORTION;

	// BrnAIDriver.cpp:46
	const float32_t KF_AI_MIN_BRAKING_SPEED;

	// BrnAIDriver.cpp:48
	const float32_t KF_BOOST_TO_CLOSE_SPEED_GAP;

	// BrnAIDriver.cpp:51
	const float32_t K_PROXIMITY_CLOSE;

	// BrnAIDriver.cpp:52
	const float32_t K_PROXIMITY_FAR;

	// BrnAIDriver.cpp:53
	const float32_t K_PROXIMITY_SPEED_REDUCTION;

	// BrnAIDriver.cpp:56
	const float32_t K_MIN_HARD_SHOULDER;

	// BrnAIDriver.cpp:57
	const float32_t K_MAX_HARD_SHOULDER;

	// BrnAIDriver.cpp:58
	const float32_t KF_AI_HARD_SHOULDER_PROPORTION;

	// BrnAIDriver.cpp:60
	const float32_t KF_BRAKING_ANGLE_RANGE;

	// BrnAIDriver.cpp:61
	const float32_t KF_MAX_BOOSTING_ANGLE;

	// BrnAIDriver.cpp:63
	float32_t volatileconst KF_BRAKE_DURING_DRIFT;

	// BrnAIDriver.cpp:65
	const float32_t KF_DONUT_VARIATION;

	// BrnAIDriver.cpp:68
	const float32_t K_ROAD_RAGE_SPREAD_HNG;

	// BrnAIDriver.cpp:69
	const float32_t K_NORMAL_SPREAD_HNG;

	// BrnAIDriver.cpp:72
	float32_t volatileconst KF_MAX_DRIFT_UNNECESSARY_ANGLE;

	// BrnAIDriver.cpp:75
	const float32_t K_LOOK_AHEAD_IN_DRIFT;

	// BrnAIDriver.cpp:76
	const float32_t KF_BE_KIND_AFTER_CRASH_DELAY;

	// BrnAIDriver.cpp:77
	const float32_t KF_BE_KIND_AFTER_AI_DRIVEN_DELAY;

	// BrnAIDriver.cpp:82
	const float32_t KF_BRAKING_ANTICIPATION_TIME;

	// BrnAIDriver.cpp:85
	const float32_t KF_BRAKING_MIN_LOOK_AHEAD_DIST;

	// BrnAIDriver.cpp:86
	const float32_t KF_BRAKING_MAX_LOOK_AHEAD_DIST;

	// BrnAIDriver.cpp:89
	const float32_t KF_MAX_SPEED_FOR_BEING_STUCK;

	// BrnAIDriver.cpp:90
	const float32_t KF_AI_TIME_TO_START_TURNING;

	// BrnAIDriver.cpp:91
	const float32_t KF_AI_TIME_FOR_BEING_STUCK;

	// BrnAIDriver.cpp:92
	const float32_t KF_PLAYER_TIME_FOR_BEING_STUCK;

	// BrnAIDriver.cpp:96
	const float32_t KF_MAX_DIST_SQUARED_FOR_AI_AVOIDANCE;

	// BrnAIDriver.cpp:99
	const float32_t KF_BRAKING_START_DIFF;

	// BrnAIDriver.cpp:100
	const float32_t KF_BRAKING_MAX_DIFF;

	// BrnAIDriver.cpp:103
	const float32_t KF_ACCELERATION_START_DIFF;

	// BrnAIDriver.cpp:104
	const float32_t KF_ACCELERATION_MAX_DIFF;

	// BrnAIDriver.cpp:107
	const float32_t KF_BOOST_UP_TO_DESIRED_SPEED_OFFSET;

	// BrnAIDriver.cpp:110
	const float32_t KF_RACE_STUCK_FREE_TIME;

	// BrnAIDriver.cpp:113
	const float32_t KF_MOVE_OFF_LINE_TIME;

	// BrnAIDriver.cpp:116
	float32_t volatileconst KF_TIME_LOOK_AHEAD_FOR_DRIFT;

	// BrnAIDriver.cpp:117
	const float32_t KF_MIN_DISTANT_LOOK_AHEAD_FOR_DRIFT;

	// BrnAIDriver.cpp:119
	float32_t volatileconst K_DRIFT_TRIGGER;

	// BrnAIDriver.cpp:120
	const float32_t K_MIN_DRIFT_SPEED;

	// BrnAIDriver.cpp:123
	const float32_t KF_MAX_DIST_SQUARED_FROM_PARAM_BEFORE_RESET;

	// BrnAIDriver.cpp:127
	const float32_t KF_TRIGGER_TURN;

	// BrnAIDriver.cpp:129
	const float32_t KF_QUICKTURN_DROP_OUT;

	// BrnAIDriver.cpp:130
	const float32_t KF_QUICKTURN_SLOWNESS_DROPOUT;

	// BrnAIDriver.cpp:131
	const float32_t KF_QUICKTURN_SLOWNESS_DROPIN;

	// BrnAIDriver.cpp:133
	const float32_t KF_MAX_SLOW_TURN_ACCELERATION;

	// BrnAIDriver.cpp:134
	const float32_t KF_SLOW_TURN_SPEED;

	// BrnAIDriver.cpp:135
	const float32_t KF_SLOW_TURN_DROP_OUT;

	// BrnAIDriver.cpp:136
	const float32_t KF_SLOW_TURN_DIRECTION_CHANGE_TIME;

	// BrnAIDriver.cpp:139
	const float32_t KF_AI_STEERING_STEP;

	// BrnAIDriver.cpp:140
	const float32_t KF_PLAYER_STEERING_STEP;

	// BrnAIDriver.cpp:141
	const float32_t KF_PLAYER_ROLLING_START_STEERING_STEP;

	// BrnAIDriver.cpp:142
	const float32_t KF_PLAYER_DRIVE_THRU_STEERING_STEP;

	// BrnAIDriver.cpp:144
	const float32_t KF_STOP_BRAKE_SPEED;

	// BrnAIDriver.cpp:147
	const float32_t KF_NO_BOOST_SPEED;

	// BrnAIDriver.cpp:148
	const float32_t KF_ALWAYS_BOOST_SPEED;

	// BrnAIDriver.cpp:149
	const float32_t KF_FORCED_BOOST_SPEED;

	// BrnAIDriver.cpp:152
	const float32_t KF_PRE_AGGRESSION_DELAY;

	// BrnAIDriver.cpp:154
	const float32_t KF_MINIMUM_BOOST_TIME;

	// BrnAIDriver.cpp:156
	const float32_t KF_BEHIND_SHUNT_MARKED_MAN_MIN_SPEED;

	// BrnAIDriver.cpp:157
	const float32_t KF_BEHIND_SHUNT_MIN_SPEED_DIFFERENCE;

	// BrnAIDriver.cpp:159
	const float32_t KF_DANGEROUS_DRIVING_SCHEDULE_OFFSET;

	// BrnAIDriver.cpp:160
	const float32_t KF_ROAD_RAGE_MIN_SLAM_RIVALS_DISTANCE;

	// BrnAIDriver.cpp:161
	const float32_t KF_ROAD_RAGE_MAX_SLAM_RIVALS_DISTANCE;

	// BrnAIDriver.cpp:162
	const float32_t KF_MIN_SPEED_MATCH_SPEED_RATIO;

	// BrnAIDriver.cpp:163
	const float32_t KF_DISTANCE_AWAY_FROM_PLAYER_TO_ALLOW_SWERVING;

	// BrnAIDriver.cpp:165
	const float32_t KF_CRASH_DISTANCE;

	// BrnAIDriver.cpp:166
	const float32_t KF_SCHEDULE_CRASH_OFFSET;

	// BrnAIDriver.cpp:167
	const float32_t KF_SCHEDULE_CRASH_FACTOR;

	// BrnAIDriver.cpp:169
	const float32_t KF_RACE_START_SLAM_TIME;

	// BrnAIDriver.cpp:171
	const float32_t KF_PLAYER_SLOW_SPEED_AGGRESSIVE_TIME;

	// BrnAIDriver.cpp:2798
	const float32_t KF_P;

	// BrnAIDriver.cpp:2799
	const float32_t KF_I;

	// BrnAIDriver.cpp:2800
	const float32_t KF_D;

	// BrnAIDriver.cpp:2802
	const float32_t KF_DRIFTP;

	// BrnAIDriver.cpp:2803
	const float32_t KF_DRIFTI;

	// BrnAIDriver.cpp:2804
	const float32_t KF_DRIFTD;

}

// BrnAIDriver.cpp:401
void BrnAI::AIDriver::GetAggression() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIDriver.cpp:2902
void BrnAI::AIDriver::SetSteeringAngle(float32_t  lfSteeringAngle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIDriver.cpp:1433
void BrnAI::AIDriver::DontDrift() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIDriver.cpp:1699
void BrnAI::AIDriver::SetDriftState(BrnAI::EDriftState  lState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIDriver.cpp:1200
void BrnAI::AIDriver::SwapToFighting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIDriver.cpp:1504
void BrnAI::AIDriver::AttemptToSlowDownFromDrift() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIDriver.cpp:2250
void BrnAI::AIDriver::NoDriftRequired() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIDriver.cpp:2910
void BrnAI::NearbyVehicles::GetCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIDriver.cpp:2940
void BrnAI::NearbyVehicles::GetVehiclePointer(int32_t  liEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIDriver.cpp:2934
void BrnAI::NearbyVehicles::IsFull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIDriver.cpp:2919
void BrnAI::NearbyVehicles::Next() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIDriver.cpp:2928
void BrnAI::NearbyVehicles::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIDriver.cpp:2755
void BrnAI::AIDriver::ClearNearbyVehicles() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIDriver.cpp:2949
void BrnAI::NearbyVehicles::GetHead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIDriver.cpp:1474
void BrnAI::AIDriver::AttemptToDriveAtDesiredSpeedInDrift() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIDriver.cpp:470
void BrnAI::AIDriver::GetAttackPlayerBias() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIDriver.cpp:2515
void BrnAI::AIDriver::IsStuck() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:2517
		float32_t lfStuckTime;

	}
}

// BrnAIDriver.cpp:417
void BrnAI::AIDriver::IsPlayerProtected(AICar *  lpPlayerCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIDriver.cpp:192
void BrnAI::AIDriver::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ResetStuckTime(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	ClearAIControls(/* parameters */);
}

// BrnAIDriver.cpp:2807
void BrnAI::AIDriver::ResetPIDTuningState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:2817
		float32_t[3] lafPIDCoefficients;

		// BrnAIDriver.cpp:2818
		float32_t[3] lafDriftPIDCoefficients;

		GetCar(/* parameters */);
	}
	{
		// BrnAIDriver.cpp:2812
		burnoutcarasset lBaseCarAsset;

		// BrnAIDriver.cpp:2813
		physicsvehiclehandling lHandling;

		// BrnAIDriver.cpp:2814
		physicsvehiclesteeringattribs lSteeringAttribs;

		Attrib::Gen::burnoutcarasset::burnoutcarasset(/* parameters */);
		Attrib::Gen::physicsvehiclehandling::physicsvehiclehandling(/* parameters */);
		Attrib::Instance::SetDefaultLayout(/* parameters */);
		Attrib::Gen::physicsvehiclesteeringattribs::physicsvehiclesteeringattribs(/* parameters */);
		Attrib::Instance::SetDefaultLayout(/* parameters */);
		Attrib::Gen::physicsvehiclesteeringattribs::~physicsvehiclesteeringattribs(/* parameters */);
		Attrib::Gen::physicsvehiclehandling::~physicsvehiclehandling(/* parameters */);
		Attrib::Gen::burnoutcarasset::~burnoutcarasset(/* parameters */);
	}
}

// BrnAIDriver.cpp:591
void BrnAI::AIDriver::ChooseRaceSteeringFan(AICar *  lpPlayerCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:609
		float32_t lfCrashFactor;

		rw::math::vpu::Clamp(/* parameters */);
	}
}

// BrnAIDriver.cpp:2768
void BrnAI::AIDriver::ResetAttribSysValues() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetCar(/* parameters */);
	{
		// BrnAIDriver.cpp:2774
		burnoutcarasset lBaseCarAsset;

		// BrnAIDriver.cpp:2775
		physicsvehiclehandling lHandling;

		// BrnAIDriver.cpp:2776
		physicsvehiclesteeringattribs lSteeringAttribs;

		Attrib::Gen::burnoutcarasset::burnoutcarasset(/* parameters */);
		Attrib::Gen::physicsvehiclehandling::physicsvehiclehandling(/* parameters */);
		Attrib::Instance::SetDefaultLayout(/* parameters */);
		Attrib::Gen::physicsvehiclesteeringattribs::physicsvehiclesteeringattribs(/* parameters */);
		Attrib::Instance::SetDefaultLayout(/* parameters */);
		Attrib::Gen::physicsvehiclesteeringattribs::~physicsvehiclesteeringattribs(/* parameters */);
		Attrib::Gen::physicsvehiclehandling::~physicsvehiclehandling(/* parameters */);
		Attrib::Gen::burnoutcarasset::~burnoutcarasset(/* parameters */);
	}
}

// BrnAIDriver.cpp:250
void BrnAI::AIDriver::Prepare(AISectionsData *  lpSectionsData, EActiveRaceCarIndex  leRelatedActiveCarIndex, Random *  lpRandom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetPerpendicularTarget(/* parameters */);
	SetRelatedActiveCarIndex(/* parameters */);
	RacingLine::ClearSectionCache(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	RacingLine::SetInitialised(/* parameters */);
	CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	rw::math::vpu::Subtract(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	RacingLine::SetCentreLineAhead(/* parameters */);
	SetAggressionVictim(/* parameters */);
}

// BrnAIDriver.cpp:306
void BrnAI::AIDriver::UpdatePlayerTimers(float32_t  lfTimeStep, AICar *  lpPlayerCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AICar::GetSpeed(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
}

// BrnAIDriver.cpp:491
void BrnAI::AIDriver::ChooseAggressiveSteeringFan(AICar *  lpPlayerCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AICar::GetSpeed(/* parameters */);
	AICar::GetSpeed(/* parameters */);
	AICar::GetSpeed(/* parameters */);
}

// BrnAIDriver.cpp:637
void BrnAI::AIDriver::SetDrivingFanBiases(AICar *  lpPlayerCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AIAggression::IsTryingToSlam(/* parameters */);
}

// BrnAIDriver.cpp:1337
void BrnAI::AIDriver::UpdateStuck(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:1339
		float32_t lfSpeed;

		// BrnAIDriver.cpp:1340
		BrnAI::EAIBehaviour leCurrentBehaviour;

		// BrnAIDriver.cpp:1342
		AICar * lpThisCar;

		GetCar(/* parameters */);
		AICar::GetSpeed(/* parameters */);
		AICar::GetBehaviour(/* parameters */);
		ResetStuckTime(/* parameters */);
	}
	AICar::SetBehaviour(/* parameters */);
}

// BrnAIDriver.cpp:1572
void BrnAI::AIDriver::CheckForBoosting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:1574
		float32_t lfCarSpeed;

		AICar::GetSpeed(/* parameters */);
	}
}

// BrnAIDriver.cpp:1633
void BrnAI::AIDriver::AttemptToDriveAtDesiredSpeed(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:1661
		float32_t lfCarSpeed;

	}
	AICar::GetSpeed(/* parameters */);
	{
		// BrnAIDriver.cpp:1667
		float32_t lfSpeedDifference;

		rw::math::fpu::Clamp<float>(/* parameters */);
		rw::math::fpu::Max<float>(/* parameters */);
	}
	{
		// BrnAIDriver.cpp:1680
		float32_t lfSpeedDifference;

	}
	rw::math::fpu::Clamp<float>(/* parameters */);
}

// BrnAIDriver.cpp:2177
void BrnAI::AIDriver::ProximitySpeed(float32_t  lfTopSpeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:2179
		float32_t lfProximity;

		// BrnAIDriver.cpp:2189
		float32_t lfSlowerThanTrafficAhead;

		// BrnAIDriver.cpp:2193
		float32_t lfMinimumSpeed;

		// BrnAIDriver.cpp:2200
		float32_t lfProximityTopSpeed;

	}
	rw::math::fpu::Clamp<float>(/* parameters */);
	AICar::GetSpeed(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Subtract(/* parameters */);
}

// BrnAIDriver.cpp:2842
void BrnAI::AIDriver::FlippedInReverse(float32_t  lfAngle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AICar::GetSpeed(/* parameters */);
}

// BrnAIDriver.cpp:2863
void BrnAI::AIDriver::UpdateSteeringAngle(float32_t  lfSteeringAngle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIDriver.cpp:1450
void BrnAI::AIDriver::StartDrift() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::SgnNonZero<float>(/* parameters */);
}

// BrnAIDriver.cpp:2275
void BrnAI::AIDriver::ComputeRouteDirection(const Vector2 &  lDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:2277
		const AICar * lpAICar;

		AICar::HasValidRoute(/* parameters */);
		{
			// BrnAIDriver.cpp:2281
			const Route * lpRoute;

			{
				// BrnAIDriver.cpp:2285
				int32_t liNextRouteNodeIndex;

				// BrnAIDriver.cpp:2286
				const RouteNode * lpNextNode;

				// BrnAIDriver.cpp:2287
				Vector2 lRouteVector;

				AICar::GetNextRouteNodeIndex(/* parameters */);
				Route::GetNode(/* parameters */);
				RouteNode::GetPosition(/* parameters */);
				Route::GetNode(/* parameters */);
				{
					CgsDev::StrStream::StrStream(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
				}
				RouteNode::GetPosition(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::Normalize(/* parameters */);
			}
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Route::GetNode(/* parameters */);
	RouteNode::GetPosition(/* parameters */);
	RouteNode::GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnAIDriver.cpp:1885
void BrnAI::AIDriver::DoSlowTurn(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:1887
		Vector2 lRouteDirection;

		// BrnAIDriver.cpp:1888
		AICar * lpCar;

	}
	GetCar(/* parameters */);
	AICar::GetRight(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	rw::math::fpu::SgnNonZero<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	AICar::GetSpeed(/* parameters */);
	AICar::GetSpeed(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAIDriver.cpp:2425
void BrnAI::AIDriver::CorneringTopSpeed(float32_t  lfTopSpeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:2427
		Vector3 l3DCarVelocity;

		// BrnAIDriver.cpp:2428
		Vector2 l2DCarVelocity;

		// BrnAIDriver.cpp:2430
		RacingLineNode lBrakingNode;

		// BrnAIDriver.cpp:2431
		Vector2 lBrakingNodePosition;

		// BrnAIDriver.cpp:2439
		float32_t lfAngleBetweenDirections;

		// BrnAIDriver.cpp:2443
		Vector2 lCarToBrakingPos;

		// BrnAIDriver.cpp:2444
		float32_t lfAngleToPosition;

		// BrnAIDriver.cpp:2453
		float32_t lfCornerSeverityRatio;

		// BrnAIDriver.cpp:2461
		float32_t lfMinCornerSpeed;

		// BrnAIDriver.cpp:2462
		float32_t lfMaxCornerSpeed;

		rw::math::vpu::Vector2::SetZero(/* parameters */);
	}
	rw::math::vpu::Normalize(/* parameters */);
	{
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
}

// BrnAIDriver.cpp:1855
void BrnAI::AIDriver::DoSlowTurnBehaviour() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:1857
		Vector2 lDirection;

	}
	{
		// BrnAIDriver.cpp:1862
		AICar * lpAICar;

		GetCar(/* parameters */);
		AICar::GetDirection(/* parameters */);
		BrnMath::Flatten(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		AICar::SetBehaviour(/* parameters */);
		ResetStuckTime(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		VecFloat<VectorAxisZ>(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		VecFloat<VectorAxisZ>(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		{
			// BrnAIDriver.cpp:1866
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
}

// BrnAIDriver.cpp:2218
void BrnAI::AIDriver::FindFinalDriftDirection(const Vector2 &  lRoadDirectionAhead) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:2220
		float32_t lfPointAhead;

		// BrnAIDriver.cpp:2228
		Vector2 lDummy;

		AICar::GetSpeed(/* parameters */);
		rw::math::vpu::Vector2::SetZero(/* parameters */);
	}
}

// BrnAIDriver.cpp:2318
void BrnAI::AIDriver::DetermineDriftSteeringAngle(BrnAI::EDriftDirectionSelection  lDirectionSelection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:2321
		Vector2 l2DCarVelocity;

	}
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	AICar::GetDirection(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	AICar::GetVelocity(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	BrnMath::IsNormal(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAIDriver.cpp:2383
void BrnAI::AIDriver::EstimateNeedForDrifting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:2385
		Vector2 lDummy;

		// BrnAIDriver.cpp:2386
		Vector2 lRoadDirectionHere;

		// BrnAIDriver.cpp:2387
		Vector2 lRoadDirectionAhead;

		// BrnAIDriver.cpp:2405
		bool lbDriftNow;

		rw::math::vpu::Vector2::SetZero(/* parameters */);
	}
	AICar::GetSpeed(/* parameters */);
	rw::math::vpu::Abs<float>(/* parameters */);
}

// BrnAIDriver.cpp:1833
void BrnAI::AIDriver::ExitDriftIfAlligned() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:1835
		float32_t lfAbsDriftAngleMoving;

	}
	rw::math::fpu::Abs<float>(/* parameters */);
}

// BrnAIDriver.cpp:1398
void BrnAI::AIDriver::FindPositionInFuture(const Vector2 &  lResultPos, const Vector2 &  lResultAngle, float32_t  lfAnticipationTime, float32_t  lfDistanceMax, float32_t  lfDistanceMin) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:1407
		float32_t lfCarSpeedMPS;

		// BrnAIDriver.cpp:1410
		float32_t lfTargetDistance;

	}
	AICar::GetSpeed(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
}

// BrnAIDriver.cpp:991
void BrnAI::AIDriver::GenerateRacingLine(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AICar::GetPosition(/* parameters */);
	{
		// BrnAIDriver.cpp:1001
		BrnAI::EAvoidingHardNoGo leAvoidingHardNoGo;

		AIAggression::GetTargetPos(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAIDriver.cpp:1048
void BrnAI::AIDriver::UpdateBrakingAnticipationData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector2::operator=(/* parameters */);
	rw::math::vpu::Vector2::operator=(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAIDriver.cpp:1080
void BrnAI::AIDriver::GetQuickTurnSteering(Vector2  lVectorToTarget) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:1082
		Vector2 l2DDirection;

		// BrnAIDriver.cpp:1106
		float32_t lfAngleToTarget;

		AICar::GetDirection(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	BrnMath::IsNormal(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
		// BrnAIDriver.cpp:1090
		Vector2 l2dCarPos;

		// BrnAIDriver.cpp:1094
		Vector2 lVectorToCentre;

		// BrnAIDriver.cpp:1098
		float32_t lfDirection;

		AICar::GetPosition(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::fpu::SgnNonZero<float>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Cross(/* parameters */);
	}
	rw::math::fpu::SgnNonZero<float>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAIDriver.cpp:1166
void BrnAI::AIDriver::Determine180Turn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:1168
		Vector2 lDirection;

	}
	AICar::GetDirection(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	AICar::GetSpeed(/* parameters */);
	GetCar(/* parameters */);
	AICar::SetBehaviour(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	GetCar(/* parameters */);
	AICar::SetBehaviour(/* parameters */);
}

// BrnAIDriver.cpp:2036
void BrnAI::AIDriver::GetTargetPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnAIDriver.cpp:2038
	Vector2 l2dTargetPos;

	{
		// BrnAIDriver.cpp:2038
		Vector2 l2dTargetPos;

	}
	{
		// BrnAIDriver.cpp:2042
		Vector2 lForward2D;

		AICar::GetPosition(/* parameters */);
		AICar::GetDirection(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAIDriver.cpp:2074
void BrnAI::AIDriver::CalculateSteeringAngle(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:2082
		float32_t lfAngleToTarget;

		// BrnAIDriver.cpp:2084
		Vector2 l2DCarVelocity;

		// BrnAIDriver.cpp:2105
		Vector2 l2dTargetPos;

	}
	GetCar(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	AICar::GetDirection(/* parameters */);
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAIDriver.cpp:1124
void BrnAI::AIDriver::UpdateQuickTurn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:1128
		float32_t lfFinalDirection;

		// BrnAIDriver.cpp:1132
		Vector2 l2DDirection;

		// BrnAIDriver.cpp:1138
		Vector2 lTarget;

		// BrnAIDriver.cpp:1141
		Vector2 lDirectionToTarget;

		// BrnAIDriver.cpp:1142
		Vector2 l2DCarPos;

	}
	rw::math::vpu::Normalize(/* parameters */);
	{
		{
		}
	}
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	AICar::GetSpeed(/* parameters */);
	GetCar(/* parameters */);
	AICar::GetPreviousBehaviour(/* parameters */);
	AICar::SetBehaviour(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnAIDriver.cpp:1151
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnAIDriver.cpp:2547
void BrnAI::AIDriver::GetIndexOfFurthestVehicle(const rw::math::vpu::Vector2  lNewPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:2549
		float32_t lDistanceToDriver;

		// BrnAIDriver.cpp:2551
		Vector3 lCarPosition;

		// BrnAIDriver.cpp:2554
		Vector2 lCar2DPosition;

		// BrnAIDriver.cpp:2559
		int32_t lCacheIndex;

		// BrnAIDriver.cpp:2560
		float32_t lfFurthest;

		// BrnAIDriver.cpp:2562
		int32_t lNewIndex;

		AICar::GetPosition(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		{
			{
			}
		}
	}
	{
		// BrnAIDriver.cpp:2566
		float32_t lfNewSeperation;

	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAIDriver.cpp:2589
void BrnAI::AIDriver::AddNearbyTrafficToAvoidance(const TrafficAIEntity *  lpTrafficEntity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:2594
		int32_t lNewIndex;

		// BrnAIDriver.cpp:2615
		NearbyVehicle * lpVehicle;

		// BrnAIDriver.cpp:2624
		Vector2[4] laFlattenedCorners;

		BoundaryLine::SetVerts(/* parameters */);
		BoundaryLine::SetVerts(/* parameters */);
		BoundaryLine::SetVerts(/* parameters */);
		SetY<VectorAxisY>(/* parameters */);
		SetZ<VectorAxisX>(/* parameters */);
		SetW<VectorAxisY>(/* parameters */);
		BoundaryLine::SetVerts(/* parameters */);
		SetX<VectorAxisX>(/* parameters */);
		SetY<VectorAxisY>(/* parameters */);
		SetZ<VectorAxisX>(/* parameters */);
		SetW<VectorAxisY>(/* parameters */);
		SetX<VectorAxisX>(/* parameters */);
		SetY<VectorAxisY>(/* parameters */);
		SetZ<VectorAxisX>(/* parameters */);
		SetW<VectorAxisY>(/* parameters */);
		SetX<VectorAxisX>(/* parameters */);
		SetY<VectorAxisY>(/* parameters */);
		SetZ<VectorAxisX>(/* parameters */);
	}
}

// BrnAIDriver.cpp:2648
void BrnAI::AIDriver::AddNearbyAIToAvoidance(const AICar *  lpNearbyAICar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:2651
		Vector3 lDiffThemToUs;

		// BrnAIDriver.cpp:2652
		float32_t lfDistBetweenCarsSquared;

		// BrnAIDriver.cpp:2660
		float32_t lfDot;

		// BrnAIDriver.cpp:2677
		Vector2 lCentrePos;

		// BrnAIDriver.cpp:2680
		int32_t lNewIndex;

		// BrnAIDriver.cpp:2701
		NearbyVehicle * lpNearby;

		// BrnAIDriver.cpp:2703
		const float32_t KF_TOO_SLOW_FOR_MEANINGFUL_SPEED;

		// BrnAIDriver.cpp:2715
		const rw::math::vpu::Vector2 K_BB_X_OFFSET;

		// BrnAIDriver.cpp:2716
		const rw::math::vpu::Vector2 K_BB_Z_OFFSET;

		// BrnAIDriver.cpp:2733
		Vector2[4] laFlattenedCorners;

		AICar::GetPosition(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	BoundaryLine::SetVerts(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	AICar::GetPosition(/* parameters */);
	AICar::GetVelocity(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	BoundaryLine::SetVerts(/* parameters */);
	SetX<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	SetY<VectorAxisY>(/* parameters */);
	SetZ<VectorAxisX>(/* parameters */);
	BoundaryLine::SetVerts(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
	BoundaryLine::SetVerts(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	SetX<VectorAxisX>(/* parameters */);
	SetY<VectorAxisY>(/* parameters */);
	SetZ<VectorAxisX>(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
	SetX<VectorAxisX>(/* parameters */);
	SetY<VectorAxisY>(/* parameters */);
	SetZ<VectorAxisX>(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
	SetX<VectorAxisX>(/* parameters */);
	SetY<VectorAxisY>(/* parameters */);
	SetZ<VectorAxisX>(/* parameters */);
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
	AICar::GetVelocity(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAIDriver.cpp:1529
void BrnAI::AIDriver::CheckForSpeedMatch(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetCar(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
}

// BrnAIDriver.cpp:1716
void BrnAI::AIDriver::DoDrivingBehaviour(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:1817
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnAIDriver.cpp:1224
void BrnAI::AIDriver::UpdateBehaviour(float32_t  lfTimeStep, AICar *  lpPlayerCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:1226
		AICar * lpThisCar;

		GetCar(/* parameters */);
	}
	AICar::SetBehaviour(/* parameters */);
	ClearAIControls(/* parameters */);
	ResetStuckTime(/* parameters */);
	AICar::SetBehaviour(/* parameters */);
	AICar::SetBehaviour(/* parameters */);
	ResetStuckTime(/* parameters */);
	AICar::SetBehaviour(/* parameters */);
}

// BrnAIDriver.cpp:876
void BrnAI::AIDriver::InitialiseRacingLine() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:884
		const Route * lpRoute;

		// BrnAIDriver.cpp:926
		int32_t liRouteNode;

	}
	AICar::HasValidRoute(/* parameters */);
	RacingLine::SetInitialised(/* parameters */);
	RacingLine::ClearSectionCache(/* parameters */);
	RacingLine::SetInitialised(/* parameters */);
	AICar::GetRoute(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	AICar::GetNextRouteNodeIndex(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
}

// BrnAIDriver.cpp:970
void BrnAI::AIDriver::CheckForRacingLineReset(bool  lbLineUpdateToken) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:972
		bool lbNeedToResetRacingLine;

	}
}

// BrnAIDriver.cpp:836
void BrnAI::AIDriver::SetAICar(AICar *  lpCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AICar::SetState(/* parameters */);
	ResetStuckTime(/* parameters */);
}

// BrnAIDriver.cpp:2156
void BrnAI::AIDriver::HardShoulderSpeed(float32_t  lfTopSpeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:2158
		float32_t lfPosition;

	}
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
}

// BrnAIDriver.cpp:2483
void BrnAI::AIDriver::CalculateDesiredSpeed(const rw::math::vpu::Vector3  lPlayerCarPosition, bool  lbDoInRangeCatchup) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:2488
		float32_t lfHardShoulderTopSpeed;

		// BrnAIDriver.cpp:2491
		float32_t lfProximityTopSpeed;

		// BrnAIDriver.cpp:2494
		float32_t lfCorneringTopSpeed;

		// BrnAIDriver.cpp:2500
		float32_t lfSteeringFan;

		AICar::GetDesiredSpeed(/* parameters */);
	}
	rw::math::fpu::Min<float>(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
}

// BrnAIDriver.cpp:1929
void BrnAI::AIDriver::CalculateCarControls(float32_t  lfTimeStep, Vector3  lPlayerCarPosition, bool  lbDoInRangeCatchup, Random *  lpRandom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ClearAIControls(/* parameters */);
	AICar::GetSpeed(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAIDriver.cpp:695
void BrnAI::AIDriver::Update(float32_t  lfTimeStep, bool  lbLineUpdateToken, const rw::math::vpu::Vector3  lPlayerCarPosition, AICar *  lpPlayerCar, bool  lbDoInRangeCatchup, Random *  lpRandom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AICar::GetPosition(/* parameters */);
	AICar::GetSpeed(/* parameters */);
	ClearAIControls(/* parameters */);
	ClearAIControls(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		// BrnAIDriver.cpp:711
		Vector2 lCar2D;

		AICar::GetPosition(/* parameters */);
		BrnMath::Flatten(/* parameters */);
	}
	CalcDistanceFromPlayer(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnAIDriver.cpp:356
void BrnAI::AIDriver::DoRoundRobinWork(BrnAI::ERoundRobinType  leType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIDriver.cpp:360
		int32_t liIterations;

	}
	{
		// BrnAIDriver.cpp:364
		int32_t liRepeatSpread;

		// BrnAIDriver.cpp:366
		const int32_t KI_STEPS_PER_FRAME;

	}
}

// BrnAIDriver.cpp:33
// BrnAIDriver.cpp:34
