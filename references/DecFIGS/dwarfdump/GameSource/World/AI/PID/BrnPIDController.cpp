// BrnPIDController.cpp:196
void PIDController::SetCoefficients(const float32_t *  lafCoefficientValues) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPIDController.cpp:212
void PIDController::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPIDController.cpp:220
		int i;

	}
}

// BrnPIDController.cpp:51
void PIDController::Prepare(const float32_t *  lafCoefficientValues) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPIDController.cpp
void PIDController::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPIDController.cpp:280
void PIDController::GetError() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPIDController.cpp:307
void PIDController::GetErrorIntegral() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPIDController.cpp:329
void PIDController::GetErrorDerivative() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPIDController.cpp:336
		float32_t lfDifference;

		// BrnPIDController.cpp:337
		float32_t lfTimeInterval;

	}
}

// BrnPIDController.cpp:363
void PIDController::GetOutput() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPIDController.cpp:384
void PIDController::CalculateIntegralDirectly() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPIDController.cpp:386
		float32_t lfIntegral;

		{
			// BrnPIDController.cpp:388
			RwInt32 lnIndex;

		}
	}
}

// BrnPIDController.cpp:253
void PIDController::Record(float32_t  lfError, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Min<int>(/* parameters */);
}

// BrnPIDController.cpp:81
void PIDController::SetCoefficient(EPIDCoefficient  leCoefficientToSet, float32_t  lfCoefficientValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPIDController.cpp:102
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPIDController.cpp:118
void PIDController::GetCoefficient(EPIDCoefficient  leCoefficientToGet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPIDController.cpp:139
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPIDController.cpp:157
void PIDController::GetCoefficientTerm(EPIDCoefficient  leCoefficientToGet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPIDController.cpp:178
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPIDController.cpp:405
void PIDController::DumpState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPIDController.cpp:410
		RwInt32 i;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
}

