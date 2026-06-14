// BrnRoute.h:26
namespace BrnAI {
	// BrnAICar.cpp:32
	const float32_t KF_DEFAULT_OUT_OF_RANGE_SPEED;

	// BrnAICar.cpp:35
	const float32_t KF_MIN_SPEED_FOR_VELOCITY_USEFULNESS;

	// BrnAICar.cpp:38
	const float32_t KF_MINIMUM_PERSONALITY_SPEED;

	// BrnAICar.cpp:39
	const float32_t KF_MAXIMUM_PERSONALITY_SPEED;

	// BrnAICar.cpp:42
	const float32_t KF_MAX_TIME_IN_BAD_SECTION;

	// BrnAICar.cpp:45
	const float32_t KF_ROAD_RAGE_SLOW_DOWN_FACTOR;

	// BrnAICar.cpp:46
	const float32_t KF_ROAD_RAGE_SPEED_UP_FACTOR;

	// BrnAICar.cpp:47
	const float32_t KF_ROAD_RAGE_CLIP_SPEED;

	// BrnAICar.cpp:50
	const float32_t KF_PLAYER_ROLLING_START_SPEED;

	// BrnAICar.cpp:51
	const float32_t KF_AI_ROLLING_START_MAX_SPEED_RACE;

	// BrnAICar.cpp:52
	const float32_t KF_AI_ROLLING_START_SPEED_DIFFERENCE;

	// BrnAICar.cpp:53
	const float32_t KF_AI_ROLLING_START_MAX_SPEED_ROAD_RAGE;

	// BrnAICar.cpp:54
	const float32_t KF_AI_ROLLING_START_MAX_DIFFERENCE_ROAD_RAGE;

	// BrnAICar.cpp:56
	const float32_t KF_RECALCULATE_ROUTE_SEPERATION_PLAYER;

	// BrnAICar.cpp:57
	const float32_t KF_RECALCULATE_ROUTE_SEPERATION_AI;

	// BrnAICar.cpp:59
	const uint16_t KU_INVALID_SECTION_INDEX = 32767;

	// BrnAICar.cpp:60
	const uint8_t KU_INVALID_PORTAL_INDEX = 255;

	// BrnAICar.cpp:62
	const float32_t KF_MIN_ALTERNATIVE_ROUTE_TIME;

	// BrnAICar.cpp:63
	const float32_t KF_ALTERNATIVE_ROUTE_INTERVAL;

	// BrnAICar.cpp:65
	const float32_t KF_OUT_OF_RANGE_PERSONALITY_SPEED_MULTIPLIER;

	// BrnAICar.cpp:67
	const float32_t KF_FRAMES_TO_RECALC_ROUTE;

	// BrnAICar.cpp:68
	const int32_t KI_MINIMUM_NODES_REMAINING_FOR_SAFE_EXTRAPOLATION = 1;

	// BrnAICar.cpp:70
	const float32_t KF_OVERTAKE_FROM_BEHIND;

	// BrnAICar.cpp:72
	const float32_t KF_AHEAD_DISTANCE;

	// BrnAICar.cpp:74
	const float32_t KF_FREE_ROAM_CAR_PROXIMITY_TO_GOAL;

	// BrnAICar.cpp:76
	const float32_t KF_FREE_ROAM_CHASE_DISTANCE_FAR;

	// BrnAICar.cpp:77
	const float32_t KF_FREE_ROAM_CHASE_DISTANCE_CLOSE;

	// BrnAICar.cpp:79
	const float32_t KF_FREE_ROAM_DRIVE_AWAY_DISTANCE;

	// BrnAICar.cpp:80
	const float32_t KF_FREE_ROAM_HIGH_SPEED;

	// BrnAICar.cpp:81
	const float32_t KF_FREE_ROAM_LOW_SPEED;

	// BrnAICar.cpp:82
	const float32_t KF_FREE_ROAM_CATCH_UP_SPEED;

	// BrnAICar.cpp:83
	const float32_t KF_FREE_ROAM_SLOW_DOWN_SPEED;

	// BrnAICar.cpp:84
	const float32_t KF_FREE_ROAM_ROUTE_REFRESH_DISTANCE;

	// BrnAICar.cpp:86
	const float32_t KF_DECENT_SPEED_RATIO;

	// BrnAICar.cpp:87
	const float32_t KF_DECENT_ROAD_RAGE_SPEED_RATIO;

	// BrnAICar.cpp:88
	const float32_t KF_DECENT_PURSUIT_SPEED_RATIO;

	// BrnAICar.cpp:89
	const float32_t KF_DECENT_MARKED_MAN_MIN_SPEED_RATIO;

	// BrnAICar.cpp:90
	const float32_t KF_DECENT_MARKED_MAN_MAX_SPEED_RATIO;

	// BrnAICar.cpp:91
	const float32_t KF_DECENT_SPEED_START_TIME;

	// BrnAICar.cpp:93
	const float32_t KF_NEAR_FINISH_DISTANCE;

	// BrnAICar.cpp:95
	const float32_t KF_DRIVING_PLAYER_SPEED_RATIO;

	// BrnAICar.cpp:97
	const float32_t KF_BLOCKED_ROUTE_RETRY_DISTANCE;

	// BrnAICar.cpp:99
	const float32_t[2] KAF_MIN_AGGRESSION;

	// BrnAICar.cpp:105
	const float32_t[2] KAF_MAX_AGGRESSION;

	// BrnAICar.cpp:111
	float32_t KF_MARKED_MAN_MIN_AGGRESSION;

	// BrnAICar.cpp:112
	float32_t KF_MARKED_MAN_MAX_AGGRESSION;

	// BrnAICar.cpp:114
	const float32_t KF_ROAD_RAGE_MIN_AGGRESSION;

	// BrnAICar.cpp:115
	const float32_t KF_ROAD_RAGE_MAX_AGGRESSION;

	// BrnAICar.cpp:117
	const float32_t[2] KAF_PURSUIT_AGGRESSION;

	// BrnAICar.cpp:129
	const float32_t KF_MAX_MEDALS_TO_UNLOCK_A_CAR;

	// BrnAICar.cpp:132
	const float32_t KF_MIN_SPEED_FOR_WRONG_WAY;

	// BrnAICar.cpp:133
	const float32_t KF_WRONG_WAY_TIME_TO_INVALIDATE_ROUTE;

	// BrnAICar.cpp:1648
	const float32_t KF_ROAD_RAGE_SPEED_DISTANCE;

}

// BrnAICar.cpp:335
void BrnAI::AICar::InvalidateRoute() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Route::Destruct(/* parameters */);
}

// BrnAICar.cpp:1326
void BrnAI::AICar::SetUnderCarSectionIndex(uint16_t  lu16UnderCarSectionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAICar.cpp:352
void BrnAI::AICar::ResetTimeInInvalidSection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAICar.cpp:1342
void BrnAI::AICar::SetCurrentSectionIndex(uint16_t  lu16CurrentCarSectionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAICar.cpp:367
void BrnAI::AICar::ClearAllSectionData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAICar.cpp:1984
void BrnAI::AICar::IsRouteToChasedCarGettingOld() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAICar.cpp:2335
void BrnAI::AICar::OnNonStandardReset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAICar.cpp:2404
void BrnAI::AICar::GetRankAggression(BrnAI::EPersonalityType  lePersonalityType, float32_t  lfProgressionRankAsRatio) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Subtract(/* parameters */);
}

// BrnAICar.cpp:2199
void BrnAI::AICar::IsInMarkedMan() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAICar.cpp:2206
void BrnAI::AICar::IsInRoadRage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAICar.cpp:2233
void BrnAI::AICar::IsInAggressiveGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAICar.cpp:2213
void BrnAI::AICar::IsInPursuit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAICar.cpp:2368
void BrnAI::AICar::GetDecentSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAICar.cpp:2220
void BrnAI::AICar::IsInFreeRoam() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAICar.cpp:2226
void BrnAI::AICar::IsInRace() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAICar.cpp:2416
void BrnAI::AICar::IsNearRaceFinish() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAICar.cpp:2352
void BrnAI::AICar::OnResetOnTrack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAICar.cpp:2158
void BrnAI::AICar::NeedsNewRoute() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	HasValidSection(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
}

// BrnAICar.cpp:612
void BrnAI::AICar::CurrentSectionIsOK() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	HasValidRoute(/* parameters */);
}

// BrnAICar.cpp:1058
void BrnAI::AICar::UpdateRouteFindingRace(float32_t  lfTimeStep, const AICar *  lpPlayerCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICar.cpp:1072
		float32_t lfInvalidationTime;

		RequestRoute(/* parameters */);
	}
}

// BrnAICar.cpp:1413
void BrnAI::AICar::UpdateResetOnTrackSection(BrnAI::EResetSpeedType  leResetType, uint16_t  luResetOnTrackSectionIndex, uint8_t  luResetOnTrackStartPortal, uint8_t  luResetOnTrackEndPortal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAICar.cpp:2317
void BrnAI::AICar::SetCurrentlyDrivenByPlayer(bool  lbSetDrivenByPlayer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAICar.cpp:522
void BrnAI::AICar::OnCrossedFinishLine(const AICar *  lpPlayerCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetSpeedSelectionMethod(/* parameters */);
	SetRouteFindingStyle(/* parameters */);
	SetRouteFindingStyle(/* parameters */);
}

// BrnAICar.cpp:821
void BrnAI::AICar::CheckForFreeRoamSwapToPursuit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICar.cpp:823
		const float32_t KF_SWAP_TO_FREEROAM;

		// BrnAICar.cpp:824
		const float32_t KF_SWAP_TO_PURSUIT;

		SetRouteFindingStyle(/* parameters */);
		SetSpeedSelectionMethod(/* parameters */);
	}
	SetRouteFindingStyle(/* parameters */);
	SetSpeedSelectionMethod(/* parameters */);
}

// BrnAICar.cpp:1133
void BrnAI::AICar::SetDriver(BrnAI::AIDriver *  lpDriver) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICar.cpp:1138
		burnoutcarasset lBaseCarAsset;

		// BrnAICar.cpp:1139
		physicsvehiclehandling lHandlingAttribs;

		// BrnAICar.cpp:1140
		physicsvehicleboostattribs lBoostAttribs;

		Attrib::Gen::burnoutcarasset::burnoutcarasset(/* parameters */);
	}
	Attrib::Instance::SetDefaultLayout(/* parameters */);
	Attrib::Gen::physicsvehiclehandling::physicsvehiclehandling(/* parameters */);
	Attrib::Instance::SetDefaultLayout(/* parameters */);
	Attrib::Gen::physicsvehicleboostattribs::physicsvehicleboostattribs(/* parameters */);
	Attrib::Instance::SetDefaultLayout(/* parameters */);
	Attrib::Gen::physicsvehicleboostattribs::~physicsvehicleboostattribs(/* parameters */);
	Attrib::Gen::physicsvehiclehandling::~physicsvehiclehandling(/* parameters */);
	Attrib::Gen::burnoutcarasset::~burnoutcarasset(/* parameters */);
}

// BrnAICar.cpp:1483
void BrnAI::AICar::CalcPersonalitySpeed(const AICar *  lpPlayerCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICar.cpp:1485
		float32_t lfDesiredSpeed;

	}
	{
		// BrnAICar.cpp:1501
		const float32_t KF_MIN_FREE_ROAM_SPEED;

		GetVelocity(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	GetVelocity(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator+(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnAICar.cpp:1487
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnAICar.cpp:470
void BrnAI::AICar::SetRoadRageMadness(float32_t  lfMadness) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Aggressiveness::SetTimeForSpeedMatch(/* parameters */);
	Aggressiveness::SetRelativeSpeedForMatch(/* parameters */);
	Aggressiveness::SetProximityToSpeedMatch(/* parameters */);
	Aggressiveness::SetAcclerationRateForSpeedMatch(/* parameters */);
}

// BrnAICar.cpp:1438
void BrnAI::AICar::UpdateOutOfRangeData(const rw::math::vpu::Vector3  lPosition, const rw::math::vpu::Vector3  lAt, uint16_t  luSectionIndex, uint8_t  luNumberOfMedalsToUnlock) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICar.cpp:1448
		Vector3 lRight;

	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnAICar.cpp:1444
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::GetVector3_YAxis(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::GetVector3_ZAxis(/* parameters */);
	SetRight(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	SetBuzzFrequencyRatio(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAICar.cpp:1370
void BrnAI::AICar::UpdateInRangeData(AISectionsData *  lpSectionsData, const rw::math::vpu::Matrix44Affine &  lMatrix, Vector3  lVelocity, float32_t  lfSpeed, uint16_t  lu16SectionIndex, bool  lbIsInAir, bool  lbIsCrashing, bool  lbIsInShowtime, bool  lbIsOnStartLine, bool  lbIsPlayer, bool  lbIsPlayerControlled, bool  lbDrifting, bool  lbIsTouchingRaceCar, bool  lbIsTouchingPlayerCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetRight(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAICar.cpp:1183
void BrnAI::AICar::SetDirectionFromPoints(Vector3  lFrom, Vector3  lTo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICar.cpp:1185
		Vector3 lDirection;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
	}
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
	}
}

// BrnAICar.cpp:246
void BrnAI::AICar::Reset(BrnAI::EPersonalityType  lePersonalityType, bool  lbKeepResetSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICar.cpp:321
		int32_t liCarIndex;

	}
	rw::math::vpu::GetVector3_XAxis(/* parameters */);
	SetRight(/* parameters */);
	Route::Construct(/* parameters */);
	InvalidateDestination(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	Aggressiveness::SetProximityToSpeedMatch(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	Aggressiveness::SetRelativeSpeedForMatch(/* parameters */);
	Aggressiveness::SetAcclerationRateForSpeedMatch(/* parameters */);
	Aggressiveness::SetTimeForSpeedMatch(/* parameters */);
	SetProximityIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAICar.cpp:156
void BrnAI::AICar::Construct(EGlobalRaceCarIndex  leGlobalRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	Route::Construct(/* parameters */);
	rw::math::vpu::GetVector3_XAxis(/* parameters */);
	SetRight(/* parameters */);
	SetIsInJunkyard(/* parameters */);
	SetBuzzFrequencyRatio(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAICar.cpp:394
void BrnAI::AICar::OnModeStart(BrnAI::EAISpeedSelectionMethod  leSpeedSelectionMethod, int32_t  liOpponentIndex, BrnAI::ERouteFindingStyle  leRouteFindingStyle, bool  lbCanDeviateFromRoute, bool  lbCanUseAIShortcuts, uint16_t  luDestinationAISectionIndex, float32_t  lfProgressionRankAsRatio) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetRouteFindingStyle(/* parameters */);
	SetBehaviour(/* parameters */);
	SetSpeedSelectionMethod(/* parameters */);
	AIDriver::ClearOffCentreBias(/* parameters */);
	Aggressiveness::SetProximityToSpeedMatch(/* parameters */);
	Aggressiveness::SetRelativeSpeedForMatch(/* parameters */);
	Aggressiveness::SetAcclerationRateForSpeedMatch(/* parameters */);
	Aggressiveness::SetTimeForSpeedMatch(/* parameters */);
	Aggressiveness::SetProximityToSpeedMatch(/* parameters */);
	Aggressiveness::SetAcclerationRateForSpeedMatch(/* parameters */);
	Aggressiveness::SetTimeForSpeedMatch(/* parameters */);
	Aggressiveness::SetRelativeSpeedForMatch(/* parameters */);
}

// BrnAICar.cpp:489
void BrnAI::AICar::OnModeStartRacing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetBehaviour(/* parameters */);
}

// BrnAICar.cpp:506
void BrnAI::AICar::OnRollingStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetBehaviour(/* parameters */);
}

// BrnAICar.cpp:556
void BrnAI::AICar::OnFinishedMode(bool  lbWinner) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetBehaviour(/* parameters */);
	SetRouteFindingStyle(/* parameters */);
	SetSpeedSelectionMethod(/* parameters */);
	SetBehaviour(/* parameters */);
}

// BrnAICar.cpp:586
void BrnAI::AICar::OnModeEnd() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	InvalidateDestination(/* parameters */);
	SetRouteFindingStyle(/* parameters */);
	SetBehaviour(/* parameters */);
	SetSpeedSelectionMethod(/* parameters */);
}

// BrnAICar.cpp:795
void BrnAI::AICar::UpdateShortcut(AISectionsData *  lpSectionsData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICar.cpp:804
		const AISection * lpCurrentSection;

		GetBestSectionIndex(/* parameters */);
	}
	GetBestSectionIndex(/* parameters */);
	AISectionsData::GetAISection(/* parameters */);
	AISection::IsShortcut(/* parameters */);
}

// BrnAICar.cpp:1263
void BrnAI::AICar::IncrementRouteNodeIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetNextRouteNodeIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		Route::GetNodeCount(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnAICar.cpp:1288
void BrnAI::AICar::UpdateRoute(const Route *  lpNewRoute, const AISectionsData *  lpAISectionsData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ClearRouteRequest(/* parameters */);
	Route::GetDefaultStartNode(/* parameters */);
	SetNextRouteNodeIndex(/* parameters */);
	RequestRoute(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		Route::GetNodeCount(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnAICar.cpp:742
void BrnAI::AICar::MoveToSectionOnRoute(uint16_t  luAISectionIndex, const Route *  lpMasterRoute) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICar.cpp:765
		const int32_t KI_MAX_NODE_SEARCH_BACK;

		// BrnAICar.cpp:766
		const int32_t KI_MAX_MODE_SEARCH_FORWARD;

		// BrnAICar.cpp:768
		int32_t liNodeIndex;

		// BrnAICar.cpp:769
		int32_t liFirstNode;

		// BrnAICar.cpp:770
		int32_t liLastNode;

		rw::math::vpu::Max<int32_t>(/* parameters */);
		rw::math::vpu::Min<int>(/* parameters */);
		Route::GetNode(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnAICar.cpp:747
		int32_t liNodeIndex;

		Route::GetNodeCount(/* parameters */);
		Route::GetNode(/* parameters */);
	}
	SetNextRouteNodeIndex(/* parameters */);
	SetNextRouteNodeIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		Route::GetNodeCount(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnAICar.cpp:679
void BrnAI::AICar::CheckForSectionChange(float32_t  lfTimeStep, AISectionsData *  lpAISectionData, const Route *  lpMasterRoute) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAICar.cpp:1157
void BrnAI::AICar::GetCurrentNodeY(AISectionsData *  lpSectionsData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICar.cpp:1159
		const RouteNode * lpNode;

		// BrnAICar.cpp:1163
		int32_t liSectionIndex;

		// BrnAICar.cpp:1164
		const AISection * lpSectionData;

		// BrnAICar.cpp:1166
		int32_t liPortalIndex;

		// BrnAICar.cpp:1167
		const Portal * lpPortal;

	}
	Route::GetNode(/* parameters */);
	AISectionsData::GetAISection(/* parameters */);
	Portal::GetPosition(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnAICar.cpp:1216
void BrnAI::AICar::UpdatePositionOutOfRange(float32_t  lfTimeStep, AISectionsData *  lpSectionsData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	HasValidRoute(/* parameters */);
	{
		// BrnAICar.cpp:1222
		const RouteNode * lpNextNode;

		// BrnAICar.cpp:1223
		Vector3 lNextPosition;

		// BrnAICar.cpp:1224
		uint16_t luNextSection;

		Route::GetNode(/* parameters */);
		RouteNode::GetPositionX(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	}
	{
		// BrnAICar.cpp:1232
		Vector3 lDifference;

		// BrnAICar.cpp:1233
		Vector3 lDirection;

		// BrnAICar.cpp:1234
		Vector3 lIncrement;

		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator>=(/* parameters */);
	}
}

// BrnAICar.cpp:1892
void BrnAI::AICar::ComputeDistanceToCheckpoint(const AISectionsData *  lpAISectionsData, const AICar *  lpPlayerCar, float32_t *  lpfOutDistance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICar.cpp:1894
		float32_t lfDistance;

		// BrnAICar.cpp:1895
		int32_t liRouteNodeIndex;

		// BrnAICar.cpp:1896
		bool lbRouteFound;

		// BrnAICar.cpp:1897
		const Route * lpRoute;

		// BrnAICar.cpp:1898
		const Route * lpPlayerRoute;

		Route::GetNodeCount(/* parameters */);
		{
			// BrnAICar.cpp:1903
			uint16_t luBestSectionIndex;

			GetBestSectionIndex(/* parameters */);
			Route::GetNode(/* parameters */);
			Route::GetNodeCount(/* parameters */);
		}
		{
			// BrnAICar.cpp:1929
			const RouteNode * lpNextNode;

			// BrnAICar.cpp:1930
			Vector2 lRouteVector;

			// BrnAICar.cpp:1931
			Vector2 lCarVector;

			// BrnAICar.cpp:1932
			Vector2 lRouteDirection;

			// BrnAICar.cpp:1933
			float32_t lProjectedDistance;

			Route::GetNode(/* parameters */);
			Route::GetNode(/* parameters */);
			RouteNode::GetPosition(/* parameters */);
			RouteNode::GetPosition(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::Normalize(/* parameters */);
			Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
			RouteNode::GetPosition(/* parameters */);
			{
				{
				}
			}
			rw::math::vpu::Max<float>(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::Dot(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	RouteNode::GetPosition(/* parameters */);
	Route::GetNode(/* parameters */);
	RouteNode::GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	HasValidDestination(/* parameters */);
	{
		// BrnAICar.cpp:1956
		Vector2 lDestinationPosition;

		// BrnAICar.cpp:1957
		Vector2 lFinalNodePosition;

		AISectionsData::GetAISection(/* parameters */);
		BrnMath::Flatten(/* parameters */);
		Route::GetNodeCount(/* parameters */);
		Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
		Route::GetNode(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		RouteNode::GetPosition(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		{
		}
		rw::math::vpu::operator+=(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnAICar.cpp:1708
void BrnAI::AICar::UpdateRaceDistance(const AISectionsData *  lpAISectionsData, const AICar *  lpPlayerCar, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICar.cpp:1710
		float32_t lfPrevDistToCheckpoint;

	}
	GetCurrentCheckpoint(/* parameters */);
	GetSpeed(/* parameters */);
	{
		// BrnAICar.cpp:1722
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnAICar.cpp:2248
void BrnAI::AICar::GetVelocityDirection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	GetVelocity(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
	}
	GetDirection(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAICar.cpp:2268
void BrnAI::AICar::GetUsefulDirection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICar.cpp:2270
		Vector3 lXZSpeed;

		GetVelocity(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	GetVelocity(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
	}
	GetDirection(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
		{
			{
			}
		}
	}
	GetDirection(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	GetDirection(/* parameters */);
	GetRight(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
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
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAICar.cpp:649
void BrnAI::AICar::GetSeperationFromNextNode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICar.cpp:651
		const Route * lpRoute;

		// BrnAICar.cpp:652
		const RouteNode * lpNextNode;

		// BrnAICar.cpp:654
		Vector2 lNodePosition;

		// BrnAICar.cpp:655
		Vector2 lCarPosition;

		GetNextRouteNodeIndex(/* parameters */);
	}
	Route::GetNode(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	GetPosition(/* parameters */);
	RouteNode::GetPosition(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAICar.cpp:1652
void BrnAI::AICar::CalcRoadRageSpeed(const AICar *  lpPlayerCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICar.cpp:1662
		float32_t lfResultSpeed;

		// BrnAICar.cpp:1663
		float32_t lfAheadness;

	}
	GetDirection(/* parameters */);
	GetPosition(/* parameters */);
	GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	GetSpeed(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	GetSpeed(/* parameters */);
	GetSpeed(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	GetSpeed(/* parameters */);
	GetSpeed(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	GetSpeed(/* parameters */);
}

// BrnAICar.cpp:1541
void BrnAI::AICar::CalcDesiredSpeed(const BrnAI::RaceBalancingManager *  lpRaceBalancingManager, AISectionsData *  lpSectionsData, const AICar *  lpPlayerCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetSpeed(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	{
		// BrnAICar.cpp:1594
		float32_t lfTargetSpeed;

		rw::math::vpu::Max<float>(/* parameters */);
	}
	GetSpeed(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
}

// BrnAICar.cpp:1772
void BrnAI::AICar::UpdateRelativePositionToPlayer(const AICar *  lpPlayerCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICar.cpp:1774
		Vector3 lRelativePosition;

		// BrnAICar.cpp:1778
		float32_t lfAheadness;

		GetPosition(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	GetDirection(/* parameters */);
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
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		// BrnAICar.cpp:1784
		float32_t lfSameDirection;

		GetDirection(/* parameters */);
		GetDirection(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnAICar.cpp:1801
		float32_t lfSameDirection;

		GetDirection(/* parameters */);
		GetDirection(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
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
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAICar.cpp:1827
void BrnAI::AICar::IsDrivingAwayFromPlayer(const AICar *  lpPlayerCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICar.cpp:1840
		Vector3 lRelativePosition;

	}
	{
		// BrnAICar.cpp:1854
		const Route * lpRoute;

		// BrnAICar.cpp:1855
		const RouteNode * lpNextNode;

		// BrnAICar.cpp:1857
		Vector2 lNodePosition;

		// BrnAICar.cpp:1858
		Vector2 l2DCarPosition;

		// BrnAICar.cpp:1859
		Vector2 l2DPlayerCarPosition;

	}
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	GetPosition(/* parameters */);
	GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	HasValidRoute(/* parameters */);
	GetNextRouteNodeIndex(/* parameters */);
	Route::GetNode(/* parameters */);
	RouteNode::GetPosition(/* parameters */);
	GetPosition(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
	}
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator<(/* parameters */);
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

// BrnAICar.cpp:2004
void BrnAI::AICar::IsPursuitCarsRouteOld() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICar.cpp:2019
		int32_t liFinalNodeIndex;

		// BrnAICar.cpp:2021
		const RouteNode * lpUpcomingNode;

		// BrnAICar.cpp:2025
		float32_t lfSeparation;

		// BrnAICar.cpp:2027
		float32_t KF_PURSUIT_CAR_PROXIMITY_TO_GOAL;

	}
	HasRouteWithMoreThanOneNode(/* parameters */);
	Route::GetNode(/* parameters */);
	RouteNode::GetPositionWithZeroY(/* parameters */);
	GetPosition(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAICar.cpp:2048
void BrnAI::AICar::IsFreeRoamingCarsRouteOld() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICar.cpp:2063
		int32_t liFinalNodeIndex;

		// BrnAICar.cpp:2065
		const RouteNode * lpUpcomingNode;

		// BrnAICar.cpp:2069
		float32_t lfSeparation;

	}
	HasRouteWithMoreThanOneNode(/* parameters */);
	Route::GetNode(/* parameters */);
	RouteNode::GetPositionWithZeroY(/* parameters */);
	GetPosition(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	SetDestination(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAICar.cpp:2092
void BrnAI::AICar::IsExtrapolatedRouteGettingOld() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAICar.cpp:2094
		float32_t lfDistance;

		// BrnAICar.cpp:2096
		float32_t lfMaxSeparation;

		// BrnAICar.cpp:2126
		int32_t liUpcomingNodeIndex;

		// BrnAICar.cpp:2128
		const RouteNode * lpUpcomingNode;

		// BrnAICar.cpp:2138
		Vector3 lDisplacement;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
	}
	{
		{
			{
			}
		}
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	HasRouteWithMoreThanOneNode(/* parameters */);
	Route::GetNode(/* parameters */);
	RouteNode::GetPositionWithZeroY(/* parameters */);
	GetPosition(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	GetDirection(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	BrnMath::IsNormal(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAICar.cpp:1111
void BrnAI::AICar::UpdateRouteFindingPursuit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	RequestRoute(/* parameters */);
}

// BrnAICar.cpp:1098
void BrnAI::AICar::UpdateRouteFindingRoadRage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	RequestRoute(/* parameters */);
}

// BrnAICar.cpp:1025
void BrnAI::AICar::UpdateRouteFindingFreeRoam(const AICar *  lpPlayerCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	RequestRoute(/* parameters */);
}

// BrnAICar.cpp:968
void BrnAI::AICar::UpdateRouteFinding(float32_t  lfTimeStep, const AICar *  lpPlayerCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	HasValidRoute(/* parameters */);
	RequestRoute(/* parameters */);
}

// BrnAICar.cpp:864
void BrnAI::AICar::Update(const BrnAI::RaceBalancingManager *  lpRaceBalancingManager, float32_t  lfTimeStep, const AICar *  lpPlayerCar, AISectionsData *  lpSectionsData, const Route *  lpMasterRoute, bool  lbIsOnline) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::IsNaN(/* parameters */);
	HasValidRoute(/* parameters */);
	IsOpponent(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	GetDirection(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	GetRight(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	GetDirection(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	GetRight(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnAICar.cpp:928
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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

// BrnAICar.cpp:126
