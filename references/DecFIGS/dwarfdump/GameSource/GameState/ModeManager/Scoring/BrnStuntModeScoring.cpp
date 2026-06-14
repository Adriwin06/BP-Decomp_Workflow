// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.cpp:88
	extern float32_t TidyStuntScore(float32_t);

	// BrnStuntModeScoring.cpp:26
	float32_t KF_STUNT_ATTACK_SCORE_PER_SUPER_JUMP;

	// BrnStuntModeScoring.cpp:27
	float32_t KF_STUNT_ATTACK_SCORE_PER_SUPER_SMASH;

	// BrnStuntModeScoring.cpp:28
	float32_t KF_STUNT_ATTACK_SCORE_PER_BILLBOARD;

	// BrnStuntModeScoring.cpp:29
	float32_t KF_STUNT_ATTACK_SCORE_PER_BURNOUT_CHAINED;

	// BrnStuntModeScoring.cpp:30
	float32_t KF_STUNT_ATTACK_SCORE_PER_POWER_PARKING_POINT;

	// BrnStuntModeScoring.cpp:31
	float32_t KF_STUNT_ATTACK_SCORE_PER_HANDBRAKE_TURN;

	// BrnStuntModeScoring.cpp:32
	float32_t KF_STUNT_ATTACK_SCORE_PER_SECOND_OF_AIR;

	// BrnStuntModeScoring.cpp:33
	float32_t KF_STUNT_ATTACK_SCORE_PER_SECOND_DRIFTING;

	// BrnStuntModeScoring.cpp:34
	float32_t KF_STUNT_ATTACK_SCORE_PER_SECOND_OF_BOOST;

	// BrnStuntModeScoring.cpp:35
	float32_t KF_STUNT_ATTACK_SCORE_PER_SECOND_OF_REVERSING;

	// BrnStuntModeScoring.cpp:36
	float32_t KF_STUNT_ATTACK_SCORE_PER_DEGREE_SPUN;

	// BrnStuntModeScoring.cpp:37
	float32_t KF_STUNT_ATTACK_SCORE_PER_DEGREE_ROLLED;

	// BrnStuntModeScoring.cpp:40
	float32_t KF_STUNT_ATTACK_GOOD_SECONDS_OF_AIR;

	// BrnStuntModeScoring.cpp:41
	float32_t KF_STUNT_ATTACK_GOOD_DEGREES_SPUN;

	// BrnStuntModeScoring.cpp:42
	float32_t KF_STUNT_ATTACK_GOOD_DEGREES_ROLLED;

	// BrnStuntModeScoring.cpp:45
	float32_t KF_STUNT_ATTACK_AWESOME_SECONDS_OF_AIR;

	// BrnStuntModeScoring.cpp:46
	float32_t KF_STUNT_ATTACK_AWESOME_DEGREES_SPUN;

	// BrnStuntModeScoring.cpp:47
	float32_t KF_STUNT_ATTACK_AWESOME_DEGREES_ROLLED;

	// BrnStuntModeScoring.cpp:50
	float32_t KF_STUNT_ATTACK_MIN_SPIN_DEGREES;

	// BrnStuntModeScoring.cpp:51
	float32_t KF_STUNT_ATTACK_MIN_ROLL_DEGREES;

	// BrnStuntModeScoring.cpp:52
	float32_t KF_STUNT_ATTACK_MIN_AIR_TIME;

	// BrnStuntModeScoring.cpp:53
	float32_t KF_STUNT_ATTACK_MIN_DRIFT_TIME;

	// BrnStuntModeScoring.cpp:54
	float32_t KF_STUNT_ATTACK_MIN_BOOST_TIME;

	// BrnStuntModeScoring.cpp:55
	float32_t KF_STUNT_ATTACK_JUMP_REPETITION_RADIUS;

	// BrnStuntModeScoring.cpp:56
	float32_t KF_STUNT_ATTACK_REVERSE_TAKEOFF_SCORE_MULTIPLIER;

	// BrnStuntModeScoring.cpp:57
	float32_t KF_PENDING_SCORE_TIMER_NOT_STARTED;

	// BrnStuntModeScoring.cpp:58
	float32_t KF_PENDING_SCORE_PENDING_TIME;

	// BrnStuntModeScoring.cpp:59
	float32_t KF_TIME_WITHOUT_STUNT_TO_START_COMBO_WARNING;

	// BrnStuntModeScoring.cpp:60
	float32_t KF_TIME_WITHOUT_STUNT_TO_LOSE_COMBO;

	// BrnStuntModeScoring.cpp:61
	float32_t KF_STUNT_TYPE_REPETITION_SCORE_FALLOFF;

	// BrnStuntModeScoring.cpp:62
	float32_t KF_STUNT_TYPE_BOOST_REPETITION_SCORE_FALLOFF;

	// BrnStuntModeScoring.cpp:63
	float32_t KF_STUNT_TYPE_MINIMUM_LEVEL;

	// BrnStuntModeScoring.cpp:64
	float32_t KF_STUNT_TYPE_REPETITION_TIMEOUT;

	// BrnStuntModeScoring.cpp:65
	float32_t KF_MIN_SPEED_FOR_REVERSING_STUNT;

	// BrnStuntModeScoring.cpp:66
	float32_t KF_HANDBRAKE_TURN_MIN_ANGLE;

	// BrnStuntModeScoring.cpp:67
	float32_t KF_MIN_SCORE_AWARD;

	// BrnStuntModeScoring.cpp:68
	float32_t KF_MIN_SCORE_AWARD_RECIPROCAL;

	// BrnStuntModeScoring.cpp:69
	float32_t KF_TIME_DELAY_BEFORE_MODE_END;

	// BrnStuntModeScoring.cpp:70
	VecFloat KVF_REVERSE_TAKEOFF_MIN_VELOCITY;

	// BrnStuntModeScoring.cpp:71
	VecFloat KVF_REVERSE_TAKEOFF_COS_MAX_ANGLE;

}

// BrnStuntModeScoring.cpp:1378
void BrnGameState::StuntModeScoring::HasStuntModeEnded(bool  lbTimeUp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntModeScoring.cpp:160
void BrnGameState::StuntModeScoring::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntModeScoring.cpp:1329
void BrnGameState::StuntModeScoring::IsComboInProgress() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntModeScoring.cpp:108
void BrnGameState::StuntToDisplay::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntModeScoring.cpp:121
void BrnGameState::StuntToDisplay::IsValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntModeScoring.cpp:799
void BrnGameState::StuntModeScoring::UpdateCrashStunts(float32_t  lfSimTimeStep, const ActiveRaceCarOutputInterface *  lpActiveRaceCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntModeScoring.cpp:429
void BrnGameState::StuntModeScoring::UpdateStuntRepetition(float32_t  lfSimTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntModeScoring.cpp:431
		int32_t liStuntTypeIndex;

	}
}

// BrnStuntModeScoring.cpp:956
void BrnGameState::StuntModeScoring::ShouldBankScore() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntModeScoring.cpp:959
		int32_t liIndex;

	}
}

// BrnStuntModeScoring.cpp:921
void BrnGameState::StuntModeScoring::GetTakeOffMultiplier() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntModeScoring.cpp:464
void BrnGameState::StuntModeScoring::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntModeScoring.cpp:479
void BrnGameState::StuntModeScoring::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntModeScoring.cpp:1309
void BrnGameState::StuntModeScoring::ClearStuntTypeInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntModeScoring.cpp:1311
		int32_t liIndex;

	}
}

// BrnStuntModeScoring.cpp:815
void BrnGameState::StuntModeScoring::UpdateStuntRating(BrnGameState::EStuntType  leStuntType, float32_t  lfValue, float32_t  lfGoodTarget, float32_t  lfAwesomeTarget) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntModeScoring.cpp:886
void BrnGameState::StuntModeScoring::GetRepetitionScoreFalloff(BrnGameState::EStuntType  leStuntType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntModeScoring.cpp:907
void BrnGameState::StuntModeScoring::GetMinimumScoreAward(BrnGameState::EStuntType  leStuntType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntModeScoring.cpp:1123
void BrnGameState::StuntModeScoring::WasStuntRecentlyPerformed(StuntInfo *  lpOutStuntInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntModeScoring.cpp:1149
void BrnGameState::StuntModeScoring::WasComboRecentlyPerformed(int32_t *  lpiScore, bool *  lpbBestScore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntModeScoring.cpp:1174
void BrnGameState::StuntModeScoring::WasTimeRecentlyUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntModeScoring.cpp:1342
void BrnGameState::StuntModeScoring::IsComboWarningActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntModeScoring.cpp:1359
void BrnGameState::StuntModeScoring::GetTimeSinceComboWarningActivated() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::Min<float>(/* parameters */);
}

// BrnStuntModeScoring.cpp:493
void BrnGameState::StuntModeScoring::Activate(int32_t  liTargetScore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::IsZero(/* parameters */);
}

// BrnStuntModeScoring.cpp:552
void BrnGameState::StuntModeScoring::OutputStuntsToDisplay(int32_t  liMaxStunts, StuntToDisplay *  maOutStunts) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntModeScoring.cpp:554
		float32_t lfLowerScoreLimit;

		// BrnStuntModeScoring.cpp:555
		float32_t lfUpperScoreLimit;

		// BrnStuntModeScoring.cpp:556
		int32_t liOutIndex;

		// BrnStuntModeScoring.cpp:557
		BrnGameState::EStuntType leStuntType;

	}
	rw::math::fpu::IsZero(/* parameters */);
}

// BrnStuntModeScoring.cpp:942
void BrnGameState::StuntModeScoring::HasAnyPendingScore() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::IsZero(/* parameters */);
	rw::math::fpu::IsZero(/* parameters */);
}

// BrnStuntModeScoring.cpp:841
void BrnGameState::StuntModeScoring::UpdateScore(float32_t  lfScoreAward, BrnGameState::EStuntType  leStuntType, bool  lbAwardInstantly) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::Max<float>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	{
		// BrnStuntModeScoring.cpp:850
		float32_t lfScorePenalty;

		// BrnStuntModeScoring.cpp:852
		float32_t lfScoreScale;

		rw::math::fpu::Max<float>(/* parameters */);
	}
}

// BrnStuntModeScoring.cpp:1243
void BrnGameState::StuntModeScoring::BeginCombo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::IsZero(/* parameters */);
	rw::math::fpu::IsZero(/* parameters */);
}

// BrnStuntModeScoring.cpp:1195
void BrnGameState::StuntModeScoring::RegisterStunt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntModeScoring.cpp:1072
void BrnGameState::StuntModeScoring::DealWithHitProp(uint16_t  luPropIndex, uint8_t  luPropFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntModeScoring.cpp:1261
void BrnGameState::StuntModeScoring::EndCombo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::RingBuffer<rw::math::vpu::Vector3>::Clear(/* parameters */);
	CgsContainers::RingBuffer<std::uint16_t>::Clear(/* parameters */);
	CgsContainers::Set<CgsID,512u>::Clear(/* parameters */);
}

// BrnStuntModeScoring.cpp:1099
void BrnGameState::StuntModeScoring::DealWithPowerPark(const BrnGameState::GameStateModuleIO::PowerParkResultAction *  lpPowerParkAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStuntModeScoring.cpp:259
void BrnGameState::StuntModeScoring::UpdateCombo(float32_t  lfSimTimeStep, const ActiveRaceCarOutputInterface *  lpActiveRaceCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::IsZero(/* parameters */);
}

// BrnStuntModeScoring.cpp:515
void BrnGameState::StuntModeScoring::ClearData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	CgsContainers::RingBuffer<rw::math::vpu::Vector3>::Clear(/* parameters */);
	CgsContainers::RingBuffer<std::uint16_t>::Clear(/* parameters */);
	CgsContainers::Set<CgsID,512u>::Clear(/* parameters */);
}

// BrnStuntModeScoring.cpp:137
void BrnGameState::StuntModeScoring::Construct(StuntModeScoring::AchievementManager *  lpAchievementManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FixedRingBuffer<rw::math::vpu::Vector3,256>::Construct(/* parameters */);
	CgsContainers::RingBuffer<rw::math::vpu::Vector3>::Clear(/* parameters */);
	CgsContainers::FixedRingBuffer<std::uint16_t,64>::Construct(/* parameters */);
	CgsContainers::RingBuffer<std::uint16_t>::Clear(/* parameters */);
	CgsContainers::Set<CgsID,512u>::Construct(/* parameters */);
}

// BrnStuntModeScoring.cpp:296
void BrnGameState::StuntModeScoring::UpdateBufferedScore(float32_t  lfSimTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntModeScoring.cpp:411
		int32_t liIndex;

		rw::math::vpu::Vector3::SetZero(/* parameters */);
	}
	CgsNumeric::BitOperations::GetNumberOfSetBits(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::Vector3::Z(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator/<VectorAxisZ>(/* parameters */);
	rw::math::fpu::Round<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::fpu::FastFloatToInt32<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Vector3::Y(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
	rw::math::fpu::Round<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::fpu::FastFloatToInt32<rw::math::vpu::VecFloat>(/* parameters */);
}

// BrnStuntModeScoring.cpp:994
void BrnGameState::StuntModeScoring::DealWithStunt(const BrnGameState::GameStateModuleIO::WorldStuntAction *  lpWorldStuntAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Set<CgsID,512u>::Find(/* parameters */);
	{
		// BrnStuntModeScoring.cpp:1001
		bool lbAddToSet;

		CgsContainers::Set<CgsID,512u>::GetLength(/* parameters */);
		CgsContainers::Set<CgsID,512u>::Insert(/* parameters */);
	}
}

// BrnStuntModeScoring.cpp:600
void BrnGameState::StuntModeScoring::UpdateAirStunts(float32_t  lfSimTimeStep, const ActiveRaceCarOutputInterface *  lpActiveRaceCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntModeScoring.cpp:602
		bool lbStunting;

		// BrnStuntModeScoring.cpp:665
		Vector3 lCurrentRotation;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerInAir(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetCurrentInAirRotations(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		// BrnStuntModeScoring.cpp:669
		Vector3 lAbsCurrentRotation;

		// BrnStuntModeScoring.cpp:673
		float32_t lfAbsSpin;

		// BrnStuntModeScoring.cpp:674
		float32_t lfAbsRoll;

		rw::math::vpu::Max(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::GetFloat(/* parameters */);
		rw::math::fpu::Abs<float>(/* parameters */);
		rw::math::fpu::Abs<float>(/* parameters */);
	}
	{
		// BrnStuntModeScoring.cpp:651
		float32_t lfAirTime;

		{
			// BrnStuntModeScoring.cpp:615
			Vector3 lUnitVelocity;

			// BrnStuntModeScoring.cpp:616
			VecFloat lvfVelocity;

			// BrnStuntModeScoring.cpp:630
			Vector3 lPlayerPosition;

			// BrnStuntModeScoring.cpp:632
			int32_t liJumpSetIndex;

			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerLinearVelocity(/* parameters */);
			rw::math::vpu::Magnitude(/* parameters */);
			rw::math::vpu::operator>=(/* parameters */);
			{
				{
					{
					}
				}
			}
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerPosition(/* parameters */);
			{
				// BrnStuntModeScoring.cpp:636
				float32_t lfDistSq;

				rw::math::vpu::operator-(/* parameters */);
			}
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::MagnitudeSquared(/* parameters */);
			CgsContainers::RingBuffer<rw::math::vpu::Vector3>::operator[](/* parameters */);
			CgsContainers::RingBuffer<rw::math::vpu::Vector3>::Push(/* parameters */);
			{
				CgsDev::StrStream::StrStream(/* parameters */);
			}
		}
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
		rw::math::vpu::operator/=(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerDirection(/* parameters */);
		rw::math::vpu::operator<=(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
	}
}

// BrnStuntModeScoring.cpp:700
void BrnGameState::StuntModeScoring::UpdateDriftStunts(float32_t  lfSimTimeStep, const ActiveRaceCarOutputInterface *  lpActiveRaceCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntModeScoring.cpp:702
		const RaceCarState * lpPlayerRC;

		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
	}
	rw::math::fpu::IsZero(/* parameters */);
}

// BrnStuntModeScoring.cpp:733
void BrnGameState::StuntModeScoring::UpdateBoostStunts(float32_t  lfSimTimeStep, const ActiveRaceCarOutputInterface *  lpActiveRaceCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfo(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfoN(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfo(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfo(/* parameters */);
}

// BrnStuntModeScoring.cpp:765
void BrnGameState::StuntModeScoring::UpdateDrivingStunts(float32_t  lfSimTimeStep, const ActiveRaceCarOutputInterface *  lpActiveRaceCarInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerInReverseGear(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
}

// BrnStuntModeScoring.cpp:177
void BrnGameState::StuntModeScoring::Update(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, float32_t  lfSimTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStuntModeScoring.cpp:182
		int32_t liStuntTypeIndex;

	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	{
		// BrnStuntModeScoring.cpp:190
		bool lbStunting;

		// BrnStuntModeScoring.cpp:194
		bool lbPlayerCarCrashing;

	}
}

