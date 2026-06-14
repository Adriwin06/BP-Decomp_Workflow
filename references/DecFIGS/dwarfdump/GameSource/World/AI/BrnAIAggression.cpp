// BrnRoute.h:26
namespace BrnAI {
	// BrnAIAggression.cpp:2180
	extern float32_t CurveToKeepLarge(float32_t);

	// BrnAIAggression.cpp:30
	const float32_t KF_MIN_POST_ATTACK_WAIT_TIME;

	// BrnAIAggression.cpp:31
	const float32_t KF_MAX_POST_ATTACK_WAIT_TIME;

	// BrnAIAggression.cpp:34
	const float32_t KF_QUICK_PRE_SLAM_STATE_TIME;

	// BrnAIAggression.cpp:35
	const float32_t KF_SLAM_MAX_MOVE_TO_POSITION_TIME;

	// BrnAIAggression.cpp:36
	const float32_t KF_SLAM_DROP_BACK_TIME;

	// BrnAIAggression.cpp:37
	const float32_t KF_SLAM_TIME;

	// BrnAIAggression.cpp:38
	const float32_t KF_SLAM_STEER_OUT_TIME;

	// BrnAIAggression.cpp:39
	const float32_t KF_TIME_TO_TARGET_POS;

	// BrnAIAggression.cpp:40
	const float32_t KF_POST_ATTACK_VEER_TIME;

	// BrnAIAggression.cpp:41
	const float32_t KF_PASSIVELY_PASS_PLAYER_TIME;

	// BrnAIAggression.cpp:42
	const float32_t KF_GROUP_TARGET_ACTIVE_TIME;

	// BrnAIAggression.cpp:44
	const float32_t KF_DROP_BACK_SPEED;

	// BrnAIAggression.cpp:45
	const float32_t KF_DROP_BACK_RAPIDLY;

	// BrnAIAggression.cpp:46
	const float32_t KF_CLOSE_SO_ALMOST_MATCH_SPEED;

	// BrnAIAggression.cpp:48
	const float32_t KF_EASY_RELATIVE_PASSING_SPEED;

	// BrnAIAggression.cpp:49
	const float32_t KF_HARD_RELATIVE_PASSING_SPEED;

	// BrnAIAggression.cpp:51
	const float32_t KF_FODDER_IN_RACE_TIME_SHORT;

	// BrnAIAggression.cpp:52
	const float32_t KF_FODDER_IN_RACE_TIME_LONG;

	// BrnAIAggression.cpp:54
	const float32_t KF_MINIMUM_SLOW_FALL_BACK_SPEED_RACE;

	// BrnAIAggression.cpp:55
	const float32_t KF_MINIMUM_SLOW_FALL_BACK_SPEED_ROAD_RAGE;

	// BrnAIAggression.cpp:56
	const float32_t KF_MINIMUM_SLOW_FALL_BACK_SPEED_MARKED_MAN;

	// BrnAIAggression.cpp:57
	const float32_t KF_MINIMUM_SLOW_FALL_BACK_SPEED_PURSUIT;

	// BrnAIAggression.cpp:58
	const float32_t KF_SLOW_CLIP_SPEED;

	// BrnAIAggression.cpp:59
	const float32_t KF_RELATIVE_CLIP_AWAY_SPEED;

	// BrnAIAggression.cpp:60
	const float32_t KF_MINIMUM_SLOW_CLIP;

	// BrnAIAggression.cpp:61
	const float32_t KF_DEFAULT_NON_SPEED_MATCH_SPEED;

	// BrnAIAggression.cpp:63
	const float32_t KF_POST_SLAM_AHEAD_POSITION;

	// BrnAIAggression.cpp:65
	const float32_t KF_SLOW_OVERTAKE_DURATION;

	// BrnAIAggression.cpp:67
	const float32_t KF_BEHIND_OTHER_CAR;

	// BrnAIAggression.cpp:69
	const float32_t KF_RELATIVE_FAST_OVERTAKING_SPEED;

	// BrnAIAggression.cpp:70
	const float32_t KF_RELATIVE_SLOW_OVERTAKING_SPEED;

	// BrnAIAggression.cpp:71
	const float32_t KF_MAX_MAX_OVERTAKE_SPEED;

	// BrnAIAggression.cpp:72
	const float32_t KF_MAX_MIN_OVERTAKE_SPEED;

	// BrnAIAggression.cpp:74
	float32_t KF_MAX_MAX_MARKED_MAN_OVERTAKE_SPEED;

	// BrnAIAggression.cpp:75
	float32_t KF_MAX_MIN_MARKED_MAN_OVERTAKE_SPEED;

	// BrnAIAggression.cpp:77
	const float32_t KF_MIN_OVERTAKE_SPEED;

	// BrnAIAggression.cpp:79
	const float32_t KF_EXCESS_SPEED_ALLOWED_FOR_SLOW_OVERTAKE;

	// BrnAIAggression.cpp:82
	const float32_t KF_MAX_LATERAL_SLAM_DIST;

	// BrnAIAggression.cpp:84
	const float32_t KF_SLAM_MAX_SPEED_DIFF;

	// BrnAIAggression.cpp:87
	const float32_t KF_AGGRESSION_MIN_TARGET_SPEED;

	// BrnAIAggression.cpp:90
	const float32_t KF_MAX_ATTACK_SPEEDMATCH_RANGE;

	// BrnAIAggression.cpp:91
	const float32_t KF_MIN_AGGRESSIVE_SPEED;

	// BrnAIAggression.cpp:92
	const float32_t KF_MIN_AGGRESSIVE_SPEED_IN_MARKED_MAN;

	// BrnAIAggression.cpp:95
	const float32_t KF_OVERTAKE_M_AHEAD;

	// BrnAIAggression.cpp:96
	const float32_t KF_OVERTAKE_AHEAD_IN_ROAD_RAGE;

	// BrnAIAggression.cpp:97
	const float32_t KF_SLOW_OVERTAKE_M_AHEAD;

	// BrnAIAggression.cpp:98
	const float32_t KF_FALLEN_BEHIND_DURING_SLOW_OVERTAKE;

	// BrnAIAggression.cpp:102
	const float32_t K_SPEED_MATCH_MIN_RELATIVE;

	// BrnAIAggression.cpp:104
	const float32_t K_SPEED_MATCH_MAX_SLOW_DOWN_EASY;

	// BrnAIAggression.cpp:105
	const float32_t K_SPEED_MATCH_MAX_SLOW_DOWN_HARD;

	// BrnAIAggression.cpp:107
	const float32_t K_SPEED_MATCH_MAX_SPEED_UP;

	// BrnAIAggression.cpp:108
	const float32_t KF_OVERTAKE_TO_SLAM_DISTANCE;

	// BrnAIAggression.cpp:109
	const float32_t KF_SLAM_POST_SLAM_ACROSS_SEPARATION;

	// BrnAIAggression.cpp:111
	const float32_t KF_SLOW_SPEED_MATCH_ACCELERATION;

	// BrnAIAggression.cpp:112
	const float32_t KF_FAST_SPEED_MATCH_ACCELERATION;

	// BrnAIAggression.cpp:114
	const float32_t KF_FAST_MOVE_TOWARDS_MATCHING;

	// BrnAIAggression.cpp:115
	const float32_t KF_SLOW_MOVE_TOWARDS_MATCHING;

	// BrnAIAggression.cpp:116
	const float32_t KF_SHIFT_TO_SLAM_BACK_OF_CAR;

	// BrnAIAggression.cpp:117
	const float32_t KF_SPEEDMATCH_ACROSS_FROM_PLAYER;

	// BrnAIAggression.cpp:118
	const float32_t KF_SLAM_THROUGH_DISTANCE;

	// BrnAIAggression.cpp:119
	const float32_t KF_PRE_SLAM_ACROSS_DISTANCE;

	// BrnAIAggression.cpp:121
	const float32_t KF_ATTACKING_AI_FALLEN_BEHIND;

	// BrnAIAggression.cpp:123
	const float32_t KF_SLAM_LONGITUDINAL_OVERLAP_BEHIND;

	// BrnAIAggression.cpp:124
	const float32_t KF_SLAM_LONGITUDINAL_OVERLAP_AHEAD;

	// BrnAIAggression.cpp:126
	const float32_t KF_SPEEDMATCH_BEHIND_PLAYER_EASY;

	// BrnAIAggression.cpp:127
	const float32_t KF_SPEEDMATCH_BEHIND_PLAYER_DIFFICULT;

	// BrnAIAggression.cpp:128
	const float32_t KF_SPEEDMATCH_AHEAD_OF_PLAYER_FAR;

	// BrnAIAggression.cpp:129
	const float32_t KF_SPEEDMATCH_AHEAD_OF_PLAYER_NEAR;

	// BrnAIAggression.cpp:131
	const float32_t KF_FODDER_POSITION;

	// BrnAIAggression.cpp:133
	const float32_t KF_DROP_BACK_TO_SLAM_TIME;

	// BrnAIAggression.cpp:134
	const float32_t KF_MARKED_MAN_ALWAYS_ATTACK_SPEED;

	// BrnAIAggression.cpp:365
	const float32_t KF_ALLOWABLE_TIME_BETWEEN_CONTACTS;

	// BrnAIAggression.cpp:366
	const float32_t KF_VEER_CONTACT_TIME;

	// BrnAIAggression.cpp:367
	const float32_t KF_VEER_EXTREME_CONTACT_TIME;

	// BrnAIAggression.cpp:802
	const float32_t KF_TIME_TO_STAY_CLIPPING_OFF;

	// BrnAIAggression.cpp:976
	const float32_t KF_FIGHT_AHEAD_OF_PLAYER;

	// BrnAIAggression.cpp:1120
	const float32_t KF_PASS_CLOSE_SEPARATION;

}

// BrnAIAggression.cpp:184
void BrnAI::AIAggression::SetSuitabilityForAggression(bool  lbSuitablityForAggression) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:168
void BrnAI::AIAggression::IsSuitableForAggression() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:677
void BrnAI::AIAggression::BoostWouldLookGood() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:151
void BrnAI::AIAggression::IsSlamInProgress() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:250
void BrnAI::AIAggression::RunStateTimer(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:268
void BrnAI::AIAggression::StateHasTimedOut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:1905
void BrnAI::AIAggression::SetState(BrnAI::EAIAggressionState  leState, float32_t  lfTimeout) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:1445
void BrnAI::AIAggression::SetSpeedMatch(BrnAI::ESpeedMatch  leType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:1930
void BrnAI::AIAggression::ClearState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:224
void BrnAI::AIAggression::Prepare(AICar *  lpCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:1515
void BrnAI::AIAggression::UpdateAggressionStateVeerExtreme() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:1424
void BrnAI::AIAggression::UpdateAggressionStateWait() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:1255
void BrnAI::AIAggression::UpdateAggressionStateSpurtForward() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:921
void BrnAI::AIAggression::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:934
void BrnAI::AIAggression::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:288
void BrnAI::AIAggression::NotSuitableForAggression() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:1789
void BrnAI::AIAggression::IsInMarkedMan() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:1774
void BrnAI::AIAggression::IsInAggressiveMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:1804
void BrnAI::AIAggression::IsInPursuit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:606
void BrnAI::AIAggression::GetMinFallBackSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:1819
void BrnAI::AIAggression::IsInRace() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:980
void BrnAI::AIAggression::UpdateAggressionStateHangAboutAhead(const AICar *  lpPlayerCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:1536
void BrnAI::AIAggression::GetSpeedMatchStartDistanceAhead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggression.cpp:1538
		float32_t lfSpeedMatchInterp;

		rw::math::vpu::Lerp(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Subtract(/* parameters */);
	}
}

// BrnAIAggression.cpp:1553
void BrnAI::AIAggression::GetSpeedMatchStartDistanceBehind() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggression.cpp:1555
		float32_t lfSpeedMatchInterp;

		rw::math::vpu::Lerp(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Subtract(/* parameters */);
	}
}

// BrnAIAggression.cpp:371
void BrnAI::AIAggression::CheckForCarVeeringAwayFromPlayer(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:199
void BrnAI::AIAggression::Construct(BrnAI::AIDriver *  lpDriver) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNumeric::Random::Construct(/* parameters */);
}

// BrnAIAggression.cpp:2435
void BrnAI::AIAggression::GetMaxOvertakeSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Subtract(/* parameters */);
}

// BrnAIAggression.cpp:575
void BrnAI::AIAggression::SetSlowOvertakingSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AICar::GetSpeed(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
}

// BrnAIAggression.cpp:805
void BrnAI::AIAggression::UpdateAggressionStateBeFodder() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:639
void BrnAI::AIAggression::SetSlowFallbackSpeed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggression.cpp:650
		float32_t lfPassingSpeed;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Subtract(/* parameters */);
		AICar::GetSpeed(/* parameters */);
	}
}

// BrnAIAggression.cpp:842
void BrnAI::AIAggression::UpdateAggressionStateClipOffBehind() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AICar::GetSpeed(/* parameters */);
}

// BrnAIAggression.cpp:949
void BrnAI::AIAggression::DecideToAttack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AICar::GetSpeed(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
	CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
}

// BrnAIAggression.cpp:1177
void BrnAI::AIAggression::CarIsTooSlow(const AICar *  lpCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AICar::GetSpeed(/* parameters */);
}

// BrnAIAggression.cpp:2035
void BrnAI::AIAggression::RelativeSpeedDifferenceIsTooBig() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggression.cpp:2037
		float32_t lfSpeedDifference;

	}
	AICar::GetSpeed(/* parameters */);
	AICar::GetSpeed(/* parameters */);
	rw::math::vpu::Abs<float>(/* parameters */);
}

// BrnAIAggression.cpp:322
void BrnAI::AIAggression::CheckForStayingAhead(const AICar *  lpPlayerCar, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggression.cpp:340
		const float32_t KF_HANGING_AROUND_DISTANCE;

		// BrnAIAggression.cpp:341
		const float32_t KF_HANGING_AROUND_TIME;

		// BrnAIAggression.cpp:342
		const float32_t KF_SPURT_TO_ESCAPE_TIME;

		// BrnAIAggression.cpp:344
		float32_t lfSeparation;

	}
	AICar::GetPosition(/* parameters */);
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAIAggression.cpp:1658
void BrnAI::AIAggression::GetSeparation(const AICar *  lpThisCar, const AICar *  lpOtherCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggression.cpp:1665
		Vector3 lSeparation;

	}
	AICar::GetPosition(/* parameters */);
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAIAggression.cpp:1687
void BrnAI::AIAggression::GetLeadingSeparation(const AICar *  lpThisCar, const AICar *  lpOtherCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggression.cpp:1693
		Vector2 lSeparation;

		// BrnAIAggression.cpp:1694
		Vector2 lAt;

	}
	AICar::GetPosition(/* parameters */);
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
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

// BrnAIAggression.cpp:2254
void BrnAI::AIAggression::GetSpeedMatchSpeed(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggression.cpp:2346
		float32_t lfSettlePosition;

		// BrnAIAggression.cpp:2348
		float32_t lfDistScale;

		// BrnAIAggression.cpp:2349
		float32_t lfExtraSpeed;

		// BrnAIAggression.cpp:2397
		float32_t lfMinimumSpeed;

		// BrnAIAggression.cpp:2408
		float32_t lfIdealSpeed;

	}
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Abs<float>(/* parameters */);
	AICar::GetSpeed(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	AICar::GetSpeed(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	{
		// BrnAIAggression.cpp:2307
		float32_t lfDesiredSpeed;

	}
	{
		// BrnAIAggression.cpp:2285
		float32_t lfSeparation;

		{
			// BrnAIAggression.cpp:2295
			float32_t lfDesiredSpeed;

			AICar::GetSpeed(/* parameters */);
			AICar::GetSpeed(/* parameters */);
		}
	}
	{
		// BrnAIAggression.cpp:2316
		float32_t lfSeparation;

	}
	AICar::GetSpeed(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Subtract(/* parameters */);
}

// BrnAIAggression.cpp:2216
void BrnAI::AIAggression::CalcSpeedMatchSpeed(float32_t  lfDefault, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggression.cpp:2220
		float32_t lfIdealSpeed;

		// BrnAIAggression.cpp:2224
		float32_t lfAcceleration;

	}
	AICar::GetSpeed(/* parameters */);
}

// BrnAIAggression.cpp:2112
void BrnAI::AIAggression::CalcSeparationAlongToTarget() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:2016
void BrnAI::AIAggression::UpdateTargetData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:1953
void BrnAI::AIAggression::StopAttacking(BrnAI::EStopAttack  leStopStyle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggression.cpp:1955
		float32_t lfWaitTime;

	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
}

// BrnAIAggression.cpp:1573
void BrnAI::AIAggression::OutOfSpeedMatchRange(const AICar *  lpCar, const AICar *  lpTargetCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggression.cpp:1582
		float lfSeparation;

		// BrnAIAggression.cpp:1592
		float32_t lfSeparationAhead;

		// BrnAIAggression.cpp:1593
		float32_t lfSeparationBehind;

	}
}

// BrnAIAggression.cpp:1839
void BrnAI::AIAggression::FindTarget(const AICar *  lpPlayerCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggression.cpp:1841
		const AICar * lpOtherCar;

	}
}

// BrnAIAggression.cpp:879
void BrnAI::AIAggression::UpdateAggressionPassive(const AICar *  lpTargetCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:708
void BrnAI::AIAggression::UpdateAggressionStateFallPast(const AICar *  lpTargetCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggression.cpp:768
		float32_t lfSeparation;

	}
	AICar::GetSpeed(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
	CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
	{
		// BrnAIAggression.cpp:775
		float32_t lfFodderTime;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Subtract(/* parameters */);
	}
}

// BrnAIAggression.cpp:1327
void BrnAI::AIAggression::UpdateAggressionStateComeSlowFromBehind() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggression.cpp:1338
		float32_t lfSeparation;

	}
}

// BrnAIAggression.cpp:1279
void BrnAI::AIAggression::UpdateAggressionStateOvertakeFast() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggression.cpp:1291
		float32_t lfSeparation;

		// BrnAIAggression.cpp:1293
		float32_t lfDesiredSeparation;

	}
}

// BrnAIAggression.cpp:1713
void BrnAI::AIAggression::GetAheadness(const AICar *  lpPlayerCar, const rw::math::vpu::Vector3  lPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggression.cpp:1718
		Vector3 lSeparation;

		// BrnAIAggression.cpp:1719
		Vector3 lAt;

	}
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	AICar::GetDirection(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	BrnMath::IsNormal(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAIAggression.cpp:1009
void BrnAI::AIAggression::UpdateAggressionStateOutOfRange(const AICar *  lpPlayerCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggression.cpp:1068
		float32_t lfSeparation;

	}
	AICar::GetPosition(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAIAggression.cpp:1740
void BrnAI::AIAggression::GetAcrossSeparation(const AICar *  lpThisCar, const AICar *  lpOtherCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggression.cpp:1746
		Vector3 lSeparation;

		// BrnAIAggression.cpp:1747
		Vector3 lRight;

	}
	AICar::GetPosition(/* parameters */);
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	AICar::GetRight(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	BrnMath::IsNormal(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
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

// BrnAIAggression.cpp:1620
void BrnAI::AIAggression::AcrossSeparationTooBig(const AICar *  lpCar, const AICar *  lpOtherCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggression.cpp:1622
		float lfSeparation;

	}
}

// BrnAIAggression.cpp:2076
void BrnAI::AIAggression::CalcSeparationAcrossToTarget() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggression.cpp:2082
		Vector3 lDiff;

		// BrnAIAggression.cpp:2083
		Vector3 lRight;

	}
	AICar::GetPosition(/* parameters */);
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	AICar::GetRight(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	BrnMath::IsNormal(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	{
	}
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
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

// BrnAIAggression.cpp:2056
void BrnAI::AIAggression::CanSlam() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggression.cpp:2058
		float32_t lfLongitudinalSeparation;

	}
}

// BrnAIAggression.cpp:2119
void BrnAI::AIAggression::DetermineAttackSide(const AICar *  mpCar, const AICar *  mpTargetCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggression.cpp:2121
		Vector3 lSeparation;

		AICar::GetPosition(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	AICar::GetRight(/* parameters */);
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
	rw::math::vpu::operator>(/* parameters */);
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

// BrnAIAggression.cpp:2139
void BrnAI::AIAggression::GetPositionNextToTarget(const AICar *  mpTargetCar, const AICar *  mpCar, float32_t  lfAlignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnAIAggression.cpp:2158
	Vector3 lTargetPosition;

	{
		// BrnAIAggression.cpp:2141
		float32_t lfSideOfTarget;

		// BrnAIAggression.cpp:2145
		float32_t lfSeparation;

		// BrnAIAggression.cpp:2158
		Vector3 lTargetPosition;

	}
	AICar::GetPosition(/* parameters */);
	AICar::GetRight(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
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

// BrnAIAggression.cpp:1462
void BrnAI::AIAggression::UpdateAggressionStateVeer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNumeric::Random::RandomFloat(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
}

// BrnAIAggression.cpp:1367
void BrnAI::AIAggression::UpdateAggressionStateAttackSlam() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggression.cpp:1386
		float32_t lfSeparation;

	}
}

// BrnAIAggression.cpp:1195
void BrnAI::AIAggression::UpdateAggressionStateDropBackToSlam(const AICar *  lpPlayerCar, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AICar::GetSpeed(/* parameters */);
}

// BrnAIAggression.cpp:1125
void BrnAI::AIAggression::UpdateAggressionStateOvertakeToSlam(const AICar *  lpPlayerCar, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIAggression.cpp:1140
		float32_t lfSeparation;

	}
	CgsNumeric::Random::RandomFloat(/* parameters */);
	CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
}

// BrnAIAggression.cpp:424
void BrnAI::AIAggression::Update(float32_t  lfTimeStep, const AICar *  lpPlayerCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIAggression.cpp:100
