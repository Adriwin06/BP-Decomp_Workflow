// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficTweakConstants.h:35
	namespace Fuzzy {
		// BrnTrafficFuzzyLogicBehaviours.cpp:436
		int32_t _FindStringInList(const char *, const char **, int32_t);

		// BrnTrafficFuzzyLogicBehaviours.cpp:82
		extern const char * KPAC_BEHAVIOUR_FILE;

		// BrnTrafficFuzzyLogicBehaviours.cpp:89
		extern const char *[3] KAPC_DISTANCE_CATEGORY_NAMES;

		// BrnTrafficFuzzyLogicBehaviours.cpp:96
		extern const char *[1] KAPC_HEIGHT_CATEGORY_NAMES;

		// BrnTrafficFuzzyLogicBehaviours.cpp:101
		extern const char *[4] KAPC_CLOSINGSPEED_CATEGORY_NAMES;

		// BrnTrafficFuzzyLogicBehaviours.cpp:109
		extern const char *[3] KAPC_LANEPOSITION_CATEGORY_NAMES;

		// BrnTrafficFuzzyLogicBehaviours.cpp:116
		extern const char *[2] KAPC_ABSOLUTESPEED_CATEGORY_NAMES;

		// BrnTrafficFuzzyLogicBehaviours.cpp:122
		extern const char *[1] KAPC_TRAFFICLIGHT_CATEGORY_NAMES;

		// BrnTrafficFuzzyLogicBehaviours.cpp:127
		extern const char *[1] KAPC_NEXTPARAMDIST_CATEGORY_NAMES;

		// BrnTrafficFuzzyLogicBehaviours.cpp:132
		extern const char *[2] KAPC_SWERVEDIST_CATEGORY_NAMES;

		// BrnTrafficFuzzyLogicBehaviours.cpp:138
		extern const char *[1] KAPC_SWERVEANGLE_CATEGORY_NAMES;

		// BrnTrafficFuzzyLogicBehaviours.cpp:143
		extern const char *[1] KAPC_TIMEQUEUEING_CATEGORY_NAMES;

		// BrnTrafficFuzzyLogicBehaviours.cpp:149
		extern const char *[10] KAPC_CATEGORY_NAMES;

		// BrnTrafficFuzzyLogicBehaviours.cpp:163
		extern const char **[10] KAPAPC_CATEGORY_NAME_LISTS;

		// BrnTrafficFuzzyLogicBehaviours.cpp:177
		extern int32_t[10] KAI_CATEGORY_NAME_LIST_LENGTHS;

		// BrnTrafficFuzzyLogicBehaviours.cpp:191
		extern const char *[21] KAPC_MEGATWEEK_CONSTANT_NAMES;

	}

}

// BrnTrafficFuzzyLogicBehaviours.cpp:350
void BrnTraffic::Fuzzy::FuzzyBehaviourLogic::ProcessParamRules(VecFloat *  lpafOutputs, const rw::math::vpu::Vector4  lf_RCDistance_RCHeight_RCClosingSpeed_RCLanePos, const rw::math::vpu::Vector4  lf_TLDistance_NPDistance_NPClosingSpeed_RCSpeedInOurLane, const rw::math::vpu::Vector4  lf_TimeQueueing_Obstructedness_DriveAroundStickiness_W) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficFuzzyLogicBehaviours.cpp:352
		Vector4 lafRCDistanceScores;

		// BrnTrafficFuzzyLogicBehaviours.cpp:353
		Vector4 lafRCHeightScores;

		// BrnTrafficFuzzyLogicBehaviours.cpp:354
		Vector4 lafRCClosingSpeedScores;

		// BrnTrafficFuzzyLogicBehaviours.cpp:355
		Vector4 lafRCLanePosScores;

		// BrnTrafficFuzzyLogicBehaviours.cpp:356
		Vector4 lafRCLaneSpeedScores;

		// BrnTrafficFuzzyLogicBehaviours.cpp:357
		Vector4 lafNPDistScores;

		// BrnTrafficFuzzyLogicBehaviours.cpp:358
		Vector4 lafNPClosingSpeedScores;

		// BrnTrafficFuzzyLogicBehaviours.cpp:359
		Vector4 lafTrafLightDistScores;

		// BrnTrafficFuzzyLogicBehaviours.cpp:360
		Vector4 lafTimeQueueingScores;

		// BrnTrafficFuzzyLogicBehaviours.cpp:377
		VecFloat lfStopForObstructionScore;

		// BrnTrafficFuzzyLogicBehaviours.cpp:387
		VecFloat lfFollowPlayerScore;

		// BrnTrafficFuzzyLogicBehaviours.cpp:394
		VecFloat lfDriveAroundObstructionScore;

	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	FuzzyEnvelopeSet4::CalcScores(/* parameters */);
	rw::math::vpu::GetVector4_One(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	FuzzyEnvelopeSet4::CalcScores(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	FuzzyEnvelopeSet4::CalcScores(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	FuzzyEnvelopeSet4::CalcScores(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	FuzzyEnvelopeSet4::CalcScores(/* parameters */);
	FuzzyEnvelopeSet4::CalcScores(/* parameters */);
	rw::math::vpu::Min(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Min(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	FuzzyEnvelopeSet4::CalcScores(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Min(/* parameters */);
	FuzzyNOT(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	FuzzyEnvelopeSet4::CalcScores(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Min(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	FuzzyAND(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	FuzzyAND(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	FuzzyOR(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	FuzzyAND(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	FuzzyAND(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	FuzzyAND(/* parameters */);
	rw::math::vpu::Min(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Min(/* parameters */);
	FuzzyNOT(/* parameters */);
	rw::math::vpu::Min(/* parameters */);
	FuzzyOR(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Min(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	FuzzyAND(/* parameters */);
	FuzzyAND(/* parameters */);
	FuzzyAND(/* parameters */);
	FuzzyOR(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		// BrnTrafficFuzzyLogicBehaviours.cpp:403
		MaskScalar lMaskDrivingAround;

		// BrnTrafficFuzzyLogicBehaviours.cpp:405
		MaskScalar lMaskStopForObstruction;

		rw::math::vpu::And(/* parameters */);
	}
	rw::math::vpu::operator+(/* parameters */);
	FuzzyOR(/* parameters */);
	FuzzyAND(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	FuzzyNOT(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
}

// BrnTrafficFuzzyLogicBehaviours.cpp:704
void BrnTraffic::Fuzzy::FuzzyBehaviourLogic::SetConstantValue(int32_t  liValueIndex, float32_t  lfValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficFuzzyLogicBehaviours.cpp:839
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnTrafficFuzzyLogicBehaviours.cpp:625
void BrnTraffic::Fuzzy::FuzzyBehaviourLogic::SetupEnvelope(int32_t  liCategory, int32_t  liEnvelope, float32_t  lfAttackStart, float32_t  lfAttackStop, float32_t  lfDecayStart, float32_t  lfDecayStop) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficFuzzyLogicBehaviours.cpp:690
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

// BrnTrafficFuzzyLogicBehaviours.cpp:566
void BrnTraffic::Fuzzy::FuzzyBehaviourLogic::ResetToDefaults() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficFuzzyLogicBehaviours.cpp:232
void BrnTraffic::Fuzzy::FuzzyBehaviourLogic::Construct(TweakValues *  lpTweakValues) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	TweakValues::GetExtremeSwerveStickiness(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
}

// BrnTrafficFuzzyLogicBehaviours.cpp:463
void BrnTraffic::Fuzzy::FuzzyBehaviourLogic::ReloadBehaviours() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficFuzzyLogicBehaviours.cpp:467
		std::FILE * lpFile;

		// BrnTrafficFuzzyLogicBehaviours.cpp:474
		char[1024] lacLineBuf;

	}
	{
		// BrnTrafficFuzzyLogicBehaviours.cpp:487
		char[128] lacEnvelopeName;

		// BrnTrafficFuzzyLogicBehaviours.cpp:488
		char[128] lacCategoryName;

		// BrnTrafficFuzzyLogicBehaviours.cpp:489
		float32_t lfAttackStart;

		// BrnTrafficFuzzyLogicBehaviours.cpp:490
		float32_t lfAttackStop;

		// BrnTrafficFuzzyLogicBehaviours.cpp:491
		float32_t lfDecayStart;

		// BrnTrafficFuzzyLogicBehaviours.cpp:492
		float32_t lfDecayStop;

		// BrnTrafficFuzzyLogicBehaviours.cpp:502
		int32_t liCategory;

		// BrnTrafficFuzzyLogicBehaviours.cpp:509
		int32_t liEnvelope;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	TweakValues::GetExtremeSwerveStickiness(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnTrafficFuzzyLogicBehaviours.cpp:521
		char[128] lacConstantName;

		// BrnTrafficFuzzyLogicBehaviours.cpp:522
		float32_t lfValue;

		// BrnTrafficFuzzyLogicBehaviours.cpp:532
		int32_t liValueIndex;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

