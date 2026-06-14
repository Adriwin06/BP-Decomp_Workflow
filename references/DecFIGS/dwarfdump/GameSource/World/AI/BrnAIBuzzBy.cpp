// BrnRoute.h:26
namespace BrnAI {
	// BrnAIBuzzBy.cpp:26
	const float32_t KF_TOO_CLOSE_TO_BUZZ;

	// BrnAIBuzzBy.cpp:27
	const float32_t KF_POST_EVENT_BUZZ_TIME;

	// BrnAIBuzzBy.cpp:28
	const float32_t KF_POST_JUNK_YARD_BUZZ_TIME;

	// BrnAIBuzzBy.cpp:29
	const float32_t KF_FASTER_THAN_PLAYER;

	// BrnAIBuzzBy.cpp:30
	const float32_t KF_ON_COMING_RESET_SPEED;

	// BrnAIBuzzBy.cpp:31
	const float32_t KF_START_FAR_AHEAD;

	// BrnAIBuzzBy.cpp:32
	const float32_t KF_START_FAR_BEHIND;

	// BrnAIBuzzBy.cpp:34
	const float32_t KF_TIME_IN_FREE_ROAM_TO_SLOW_RESETS;

	// BrnAIBuzzBy.cpp:36
	const float32_t KF_MIN_SPEED_FOR_BUZZING;

	// BrnAIBuzzBy.cpp:38
	const float32_t KF_RAPID_BUZZ_TIME;

	// BrnAIBuzzBy.cpp:39
	const float32_t KF_SLOW_BUZZ_TIME;

	// BrnAIBuzzBy.cpp:40
	const float32_t KF_POST_BUZZ_GRACE_TIME;

	// BrnAIBuzzBy.cpp:42
	const float32_t KF_SHORT_RETRY_TIME;

	// BrnAIBuzzBy.cpp:44
	const float32_t KF_CLOSE_ENOUGH_TO_SEE_BUZZ;

	// BrnAIBuzzBy.cpp:45
	const float32_t KF_START_BEHIND_PROBABLITY;

	// BrnAIBuzzBy.cpp:46
	const float32_t KF_SIDE_TURNING_PROBABILITY;

	// BrnAIBuzzBy.cpp:48
	const float32_t KF_MIN_BUZZ_AFTER_AI_CONTROL;

	// BrnAIBuzzBy.cpp:50
	const int32_t KI_MAX_CARS_AWAITING_COLLECTION = 3;

	// BrnAIBuzzBy.cpp:52
	const int32_t KI_MAX_CAR_ROUND_PLAYER = 1;

	// BrnAIBuzzBy.cpp:55
	const int32_t KI_NUM_NO_BUZZ_ZONES = 7;

	// BrnAIBuzzBy.cpp:57
	Vector3[7] KA_NO_BUZZ_ZONE_CENTRES;

	// BrnAIBuzzBy.cpp:68
	const float32_t[7] KAF_NO_BUZZ_ZONE_RADII;

}

// BrnAIBuzzBy.cpp:261
void BrnAI::BuzzBy::AddCarAwaitingCollection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIBuzzBy.cpp:247
void BrnAI::BuzzBy::ClearCarsAwaitingCollection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIBuzzBy.cpp:357
void BrnAI::BuzzBy::RunFreeBurnTimer(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIBuzzBy.cpp:654
void BrnAI::BuzzBy::GetBuzzFrequency(const AICar *  lpAICar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Subtract(/* parameters */);
}

// BrnAIBuzzBy.cpp:440
void BrnAI::BuzzBy::IsPositionInNoBuzzZone(const rw::math::vpu::Vector3  lPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIBuzzBy.cpp:442
		int32_t liZoneIndex;

		{
			// BrnAIBuzzBy.cpp:446
			float32_t lfDistanceSq;

			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
		}
		rw::math::vpu::MagnitudeSquared(/* parameters */);
	}
}

// BrnAIBuzzBy.cpp:465
void BrnAI::BuzzBy::AICarCanBuzz(const AICar *  lpCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAIBuzzBy.cpp:92
void BrnAI::BuzzBy::Prepare(AICar *  lpGlobalRaceCars, ResetOnTrackManager *  lpResetOnTrackManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNumeric::Random::Construct(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
}

// BrnAIBuzzBy.cpp:618
void BrnAI::BuzzBy::ResetActiveList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIBuzzBy.cpp:620
		EGlobalRaceCarIndex leGlobalRaceCarIndex;

	}
	{
		// BrnAIBuzzBy.cpp:626
		const AICar * lpAICar;

	}
	operator++(/* parameters */);
	{
		// BrnAIBuzzBy.cpp:631
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnAIBuzzBy.cpp:191
void BrnAI::BuzzBy::ChooseAheadOrBehind(ResetOnTrackRequest *  lpRequest, float32_t  lfPlayerSpeed, EGlobalRaceCarIndex  leGlobalRaceCarToTeleport) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIBuzzBy.cpp:193
		BrnAI::EResetType luResetFlags;

		// BrnAIBuzzBy.cpp:195
		float32_t lfAheadLikelyHood;

		// BrnAIBuzzBy.cpp:219
		float32_t lfResetSpeed;

		// BrnAIBuzzBy.cpp:220
		float32_t lfResetDistance;

		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
	CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	{
		// BrnAIBuzzBy.cpp:201
		float32_t lfSideTurningsLikelyHood;

		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
	CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	AIModuleIO::ResetOnTrackRequest::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnAIBuzzBy.cpp:277
void BrnAI::BuzzBy::StartABuzzBy(const AICar *  lpPlayerCar, EGlobalRaceCarIndex  leGlobalRaceCarToTeleport) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIBuzzBy.cpp:279
		ResetOnTrackRequest lRequest;

	}
	AICar::GetSpeed(/* parameters */);
}

// BrnAIBuzzBy.cpp:124
void BrnAI::BuzzBy::MaintainAheadOrBehind(ResetOnTrackRequest *  lpRequest, const rw::math::vpu::Vector3  lPosition, const rw::math::vpu::Vector3  lDirection, const rw::math::vpu::Vector3  lPlayerPosition, const rw::math::vpu::Vector3  lPlayerVelocity, const rw::math::vpu::Vector3  lPlayerDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIBuzzBy.cpp:126
		Vector3 lRelativePosition;

		// BrnAIBuzzBy.cpp:127
		Vector3 lRelativeDirection;

		// BrnAIBuzzBy.cpp:136
		BrnAI::EResetType luResetFlags;

		// BrnAIBuzzBy.cpp:159
		float32_t lfResetSpeed;

		// BrnAIBuzzBy.cpp:160
		float32_t lfResetDistance;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	}
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	AIModuleIO::ResetOnTrackRequest::Construct(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
}

// BrnAIBuzzBy.cpp:298
void BrnAI::BuzzBy::DrawBuzzTimer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIBuzzBy.cpp:302
		CgsDev::SimpleStrStream lStrStream;

		// BrnAIBuzzBy.cpp:303
		DebugInterface lDebugInterface;

		CgsDev::SimpleStrStream::SimpleStrStream(/* parameters */);
	}
	CgsDev::DebugInterface::DebugInterface(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::SimpleStrStream::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
}

// BrnAIBuzzBy.cpp:370
void BrnAI::BuzzBy::IsPlayerBuzzable(AICar *  lpPlayerCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIBuzzBy.cpp:372
		int32_t liGlobalRaceCarIndex;

		// BrnAIBuzzBy.cpp:373
		int32_t liNumCloseCars;

	}
	AICar::GetSpeed(/* parameters */);
	AICar::GetPosition(/* parameters */);
	{
		// BrnAIBuzzBy.cpp:412
		EGlobalRaceCarIndex leRaceCarIndex;

		// BrnAIBuzzBy.cpp:413
		const AICar * lpAICar;

		AICar::GetPosition(/* parameters */);
		AICar::GetPosition(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
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
}

// BrnAIBuzzBy.cpp:486
void BrnAI::BuzzBy::BuzzOccured(const AICar *  lpPlayerCar, const AICar *  lpCloseCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIBuzzBy.cpp:498
		Vector3 lvRelativePosition;

	}
	AICar::GetPosition(/* parameters */);
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
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnAIBuzzBy.cpp:517
void BrnAI::BuzzBy::Update(float32_t  lfTimeStep, AICar *  lpPlayerCar, AICar *  lpClosestCar, bool *  lpbBuzzByOccurred) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIBuzzBy.cpp:519
		EGlobalRaceCarIndex leMostOverdueCarIndex;

		// BrnAIBuzzBy.cpp:520
		const AICar * lpMostOverdueAICar;

		// BrnAIBuzzBy.cpp:521
		int32_t liMostOverdueCarIndex;

		// BrnAIBuzzBy.cpp:522
		float32_t lfMaxOverdueTime;

		// BrnAIBuzzBy.cpp:523
		int32_t liCarIndex;

		// BrnAIBuzzBy.cpp:525
		bool lbBuzzCarFound;

	}
	{
		// BrnAIBuzzBy.cpp:569
		EGlobalRaceCarIndex leRaceCarIndex;

		// BrnAIBuzzBy.cpp:570
		const AICar * lpAICar;

		{
			// BrnAIBuzzBy.cpp:574
			float32_t lfOverdueTime;

		}
	}
}

// BrnAIBuzzBy.cpp:79
