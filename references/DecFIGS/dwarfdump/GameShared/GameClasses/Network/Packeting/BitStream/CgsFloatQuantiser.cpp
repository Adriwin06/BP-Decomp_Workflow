// CgsFloatQuantiser.cpp:52
void CgsNetwork::FloatQuantiser::Pack(float  lfValue, float  lfMinValue, float  lfMaxValue, int32_t  liNumBitsUsed, uint32_t *  lpuPackedValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFloatQuantiser.cpp:57
		float_t lfFraction;

	}
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	{
		// CgsFloatQuantiser.cpp:54
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	{
	}
	{
	}
}

// CgsFloatQuantiser.cpp:81
void CgsNetwork::FloatQuantiser::Pack(float  lfValue, float  lfMinValue, float  lfMaxValue, float  lfMaxAcceptableError, uint32_t *  lpuPackedValue, int32_t *  lpiNumBitsUsed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFloatQuantiser.cpp:83
		float lfIncrement;

	}
	rw::math::fpu::Clamp<float>(/* parameters */);
	GetNumBits(/* parameters */);
	{
		// CgsFloatQuantiser.cpp:85
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
}

// CgsFloatQuantiser.cpp:111
void CgsNetwork::FloatQuantiser::UnPack(float *  lpfValue, float  lfMinValue, float  lfMaxValue, int32_t  liNumBitsUsed, uint32_t  luPackedValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFloatQuantiser.cpp:113
		float lfIncrement;

		// CgsFloatQuantiser.cpp:114
		float lfValue;

	}
	GetIncrement(/* parameters */);
	{
		// CgsFloatQuantiser.cpp:125
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	{
	}
	{
	}
	{
	}
}

// CgsFloatQuantiser.cpp:147
void CgsNetwork::FloatQuantiser::UnPack(float *  lpfValue, float  lfMinValue, float  lfMaxValue, float  lfMaxAcceptableError, uint32_t  luPackedValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFloatQuantiser.cpp:149
		float lfIncrement;

		// CgsFloatQuantiser.cpp:150
		float lfValue;

	}
	rw::math::fpu::Clamp<float>(/* parameters */);
	{
		// CgsFloatQuantiser.cpp:156
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
}

// CgsFloatQuantiser.cpp:182
void CgsNetwork::FloatQuantiser::PackAndUnPackTest(float  lfValue, float  lfMinValue, float  lfMaxValue, int32_t  liNumBitsUsed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFloatQuantiser.cpp:186
		uint32_t luValuePacked;

		// CgsFloatQuantiser.cpp:187
		float lfValue2;

		// CgsFloatQuantiser.cpp:194
		float lfIncrement;

	}
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	{
		// CgsFloatQuantiser.cpp:192
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFloatQuantiser.cpp:184
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
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

// CgsFloatQuantiser.cpp:214
void CgsNetwork::FloatQuantiser::PackAndUnPackTest(float  lfValue, float  lfMinValue, float  lfMaxValue, float  lfMaxAcceptableError) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFloatQuantiser.cpp:218
		uint32_t luValuePacked;

		// CgsFloatQuantiser.cpp:219
		int32_t liNumBitsUsed;

		// CgsFloatQuantiser.cpp:220
		float lfValue2;

	}
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	{
		// CgsFloatQuantiser.cpp:225
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFloatQuantiser.cpp:216
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
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

