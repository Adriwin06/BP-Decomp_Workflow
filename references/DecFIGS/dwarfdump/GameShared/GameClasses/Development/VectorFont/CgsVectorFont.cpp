// CgsVectorFont.cpp:331
void CgsDev::VectorFont::CalcCharacterHeight(float32_t  lfTextSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVectorFont.cpp:75
void CgsDev::VectorFont::Construct(const rw::math::vpu::Vector2  lSize, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::operator*(/* parameters */);
}

// CgsVectorFont.cpp:85
void CgsDev::VectorFont::SetSize(const rw::math::vpu::Vector2  lSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::operator*(/* parameters */);
}

// CgsVectorFont.cpp:253
void CgsDev::VectorFont::ComputeTextExtent(const char *  lpcText, const rw::math::vpu::Vector2  lTextSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVectorFont.cpp:262
		Vector2 lSize;

		// CgsVectorFont.cpp:265
		const unsigned char * lpcString;

		// CgsVectorFont.cpp:268
		float32_t lfY;

		// CgsVectorFont.cpp:271
		float32_t lfLongestLine;

		// CgsVectorFont.cpp:272
		float32_t lfLineLength;

	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	{
		// CgsVectorFont.cpp:295
		int32_t liCharIndex;

		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
}

// CgsVectorFont.cpp:236
void CgsDev::VectorFont::ComputeTextWidth(const char *  lpcText, const rw::math::vpu::Vector2  lTextSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVectorFont.cpp:55
void CgsDev::VectorFont::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVectorFont.cpp:58
		Vector2 lSize;

		rw::math::vpu::Vector2::Vector2(/* parameters */);
	}
}

// CgsVectorFont.cpp:208
void CgsDev::VectorFont::DrawLine(const rw::math::vpu::Vector2  lPosition1, const rw::math::vpu::Vector2  lPosition2, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVectorFont.cpp:216
		Vector3 l3DPos1;

		// CgsVectorFont.cpp:217
		Vector3 l3DPos2;

		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
}

// CgsVectorFont.cpp:128
void CgsDev::VectorFont::PrintComplex(float32_t  lfCurrentX, float32_t  lfCurrentY, const char *  lpcText, RGBA  lColourRGBA, float32_t  lfMinX) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVectorFont.cpp:138
		Vector2 lLocalPos;

		// CgsVectorFont.cpp:139
		Vector2 lPosition1;

		// CgsVectorFont.cpp:140
		Vector2 lPosition2;

		// CgsVectorFont.cpp:145
		const unsigned char * lpcString;

	}
	rw::math::vpu::Vector2::Set(/* parameters */);
	{
		// CgsVectorFont.cpp:163
		int32_t liCharIndex;

		// CgsVectorFont.cpp:164
		int32_t liNumCharLines;

		// CgsVectorFont.cpp:165
		CharLine * lpCurLine;

		rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::Vector2::Set(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::Vector2::Set(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::Vector2::SetX(/* parameters */);
	}
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	{
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector2::SetX(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
}

// CgsVectorFont.cpp:116
void CgsDev::VectorFont::Print(float32_t  lfX, float32_t  lfY, const char *  lpcText, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVectorFont.cpp:118
		Vector2 lExtent;

	}
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
}

// CgsVectorFont.cpp:106
void CgsDev::VectorFont::Print(float32_t  lfX, float32_t  lfY, const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

