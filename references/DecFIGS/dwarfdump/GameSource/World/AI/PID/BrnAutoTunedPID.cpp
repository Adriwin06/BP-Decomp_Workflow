// BrnRoute.h:26
namespace BrnAI {
	// BrnAutoTunedPID.cpp:63
	extern float32_t Sign(float32_t);

	// BrnAutoTunedPID.cpp:40
	const int32_t KI_FRAME_GAP_TO_TUNE_COEFFICIENT = 10;

	// BrnAutoTunedPID.cpp:41
	const int32_t KI_ITERATIONS_BEFORE_SWAP_COEFFICIENT = 3;

	// BrnAutoTunedPID.cpp:42
	const int32_t KI_FRAMES_BEFORE_SWAP_COEFFICIENT = 30;

	// BrnAutoTunedPID.cpp:44
	const float32_t KF_COEFFICIENT_TUNING_FACTOR;

	// BrnAutoTunedPID.cpp:45
	const float32_t KF_MIN_CHANGE_IN_COEFFICIENT;

	// BrnAutoTunedPID.cpp:46
	const float32_t KF_MIN_TERM_TO_TUNE;

	// BrnAutoTunedPID.cpp:58
	int32_t giInstanceCounter;

}

// BrnAutoTunedPID.cpp:86
void BrnAI::AutoTunedPID::Prepare(const float32_t *  lafCoefficientValues, const float32_t *  lafDeltaCoefficientValues) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAutoTunedPID.cpp:98
		int32_t liCoeffIndex;

	}
}

// BrnAutoTunedPID.cpp:121
void BrnAI::AutoTunedPID::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAutoTunedPID.cpp:137
void BrnAI::AutoTunedPID::SetCoefficients(const float32_t *  lafCoefficientValues) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAutoTunedPID.cpp:158
void BrnAI::AutoTunedPID::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAutoTunedPID.cpp:375
void BrnAI::AutoTunedPID::CheckSwapCoefficientToBeTuned() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAutoTunedPID.cpp:220
void BrnAI::AutoTunedPID::GetOutput() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAutoTunedPID.cpp:222
		float32_t lfOutput;

	}
}

// BrnAutoTunedPID.cpp:405
void BrnAI::AutoTunedPID::ThisIsAnInvalidTuningFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAutoTunedPID.cpp:439
void BrnAI::AutoTunedPID::SetEnableTuning(bool  lbEnableTuning) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAutoTunedPID.cpp:421
void BrnAI::AutoTunedPID::GetDebugData(AutoTunedPIDDebugData *  lpOutputData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAutoTunedPID.cpp:259
void BrnAI::AutoTunedPID::CheckTuneCurrentCoefficient() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAutoTunedPID.cpp:266
		float32_t lfChangeInErrorWithCoefficient;

		// BrnAutoTunedPID.cpp:267
		float32_t lfCurrentError;

		// BrnAutoTunedPID.cpp:268
		float32_t lfCurrentCoefficient;

	}
	{
		// BrnAutoTunedPID.cpp:277
		float32_t lfChangeInError;

		// BrnAutoTunedPID.cpp:278
		float32_t lfChangeInCoefficient;

		// BrnAutoTunedPID.cpp:279
		float32_t lfChangeToApplyToCoefficient;

		// BrnAutoTunedPID.cpp:350
		float32_t lfCoefficientToSet;

		rw::math::vpu::Abs<float>(/* parameters */);
		rw::math::vpu::Max<float>(/* parameters */);
		rw::math::vpu::Min<float>(/* parameters */);
	}
	{
		// BrnAutoTunedPID.cpp:305
		float32_t lfSignCalculation;

		rw::math::vpu::IsZero(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		Sign(/* parameters */);
		Sign(/* parameters */);
		Sign(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::IsSimilar(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::IsSimilar(/* parameters */);
	}
}

// BrnAutoTunedPID.cpp:196
void BrnAI::AutoTunedPID::Record(float32_t  lfError, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAutoTunedPID.cpp:236
void BrnAI::AutoTunedPID::DumpState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
}

