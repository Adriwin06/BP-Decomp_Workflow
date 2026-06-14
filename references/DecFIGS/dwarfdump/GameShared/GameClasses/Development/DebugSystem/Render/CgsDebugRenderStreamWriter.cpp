// CgsDebugRenderStreamWriter.cpp:47
void CgsDev::DebugRenderStreamWriter::Construct(DebugRenderStreamReader *  lpStreamReader) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamWriter.cpp:1048
void CgsDev::DebugRenderStreamWriter::DrawTriangle(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, const rw::math::vpu::Vector3  lPoint3, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:1050
		CInEventDrawTriangle lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	Add3DEvent<CgsDev::Internal::CInEventDrawTriangle>(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Flush(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:70
void CgsDev::DebugRenderStreamWriter::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Flush(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:186
void CgsDev::DebugRenderStreamWriter::Draw2DFrame(const rw::math::vpu::Vector2  lPosition, const rw::math::vpu::Vector2  lSize, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:188
		CInEventDrawFrame2D lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	Add2DEvent<CgsDev::Internal::CInEventDrawFrame2D>(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Flush(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:92
void CgsDev::DebugRenderStreamWriter::Draw2DText(const char *  lpcText, const rw::math::vpu::Vector2  lPosition, float32_t  lfSize, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:96
		CInEventDrawText2D lEvent;

		Add2DStringEvent(/* parameters */);
	}
	Add2DEvent(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	Add2DEvent<CgsDev::Internal::CInEventDrawText2D>(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Flush(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Flush(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:315
void CgsDev::DebugRenderStreamWriter::Draw2DTextJustified(const char *  lpcText, const rw::math::vpu::Vector2  lPosition, CgsDev::DebugRenderStreamWriter::Justification  lJustification, float32_t  lfSize, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:317
		Vector2 lAdjustedPosition;

		// CgsDebugRenderStreamWriter.cpp:320
		float32_t lfTextWidth;

	}
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator-=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator-=(/* parameters */);
	rw::math::vpu::_asmSwizzleStore<VectorAxisX, VectorAxisX>(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:114
void CgsDev::DebugRenderStreamWriter::Draw2DText(const char *  lpcText, float32_t  lfX, float32_t  lfY, float32_t  lfSize, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:116
		Vector2 lPosition;

		rw::math::vpu::Vector2::Set(/* parameters */);
	}
}

// CgsDebugRenderStreamWriter.cpp:420
void CgsDev::DebugRenderStreamWriter::Draw2DFraction(int32_t  liNumerator, int32_t  liDenominator, float32_t  lfXPos, float32_t  lfYPos, float32_t  lfTextSize, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:423
		char[256] lacBuffer;

	}
}

// CgsDebugRenderStreamWriter.cpp:381
void CgsDev::DebugRenderStreamWriter::Draw2DDataSize(int32_t  liDataSize, float32_t  lfXPos, float32_t  lfYPos, float32_t  lfTextSize, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:384
		char[256] lacBuffer;

		// CgsDebugRenderStreamWriter.cpp:386
		const int32_t KI_MB_SIZE;

		// CgsDebugRenderStreamWriter.cpp:387
		const int32_t KI_KB_SIZE;

		// CgsDebugRenderStreamWriter.cpp:388
		const int32_t KI_B_SIZE;

		// CgsDebugRenderStreamWriter.cpp:390
		int32_t liMB;

		// CgsDebugRenderStreamWriter.cpp:391
		int32_t liKB;

		// CgsDebugRenderStreamWriter.cpp:392
		int32_t liB;

	}
}

// CgsDebugRenderStreamWriter.cpp:363
void CgsDev::DebugRenderStreamWriter::Draw2DValue(float32_t  liValue, float32_t  lfXPos, float32_t  lfYPos, float32_t  lfTextSize, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:366
		char[256] lacBuffer;

	}
}

// CgsDebugRenderStreamWriter.cpp:344
void CgsDev::DebugRenderStreamWriter::Draw2DValue(int32_t  liValue, float32_t  lfXPos, float32_t  lfYPos, float32_t  lfTextSize, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:347
		char[256] lacBuffer;

	}
}

// CgsDebugRenderStreamWriter.cpp:136
void CgsDev::DebugRenderStreamWriter::Draw2DLine(const rw::math::vpu::Vector2  lPoint1, const rw::math::vpu::Vector2  lPoint2, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:138
		CInEventDrawLine2D lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	Add2DEvent<CgsDev::Internal::CInEventDrawLine2D>(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Flush(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:211
void CgsDev::DebugRenderStreamWriter::Draw2DLineAtAngle(const rw::math::vpu::Vector2  lStartPosition, float32_t  lfAngleRad, float32_t  lfLength, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:214
		Vector4 lSinCos;

		// CgsDebugRenderStreamWriter.cpp:217
		Vector2 lEndPosition;

		rw::math::vpu::SinCosFast(/* parameters */);
	}
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	vec_cts(/* parameters */);
	rw::math::vpu::Cos(/* parameters */);
	vec_ctf(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:237
void CgsDev::DebugRenderStreamWriter::Draw2DArrowHead(const rw::math::vpu::Vector2  lCentrePosition, float32_t  lfAngleRad, float32_t  lfLength, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:241
		const float KF_120_DEGREES_IN_RADIANS;

	}
}

// CgsDebugRenderStreamWriter.cpp:261
void CgsDev::DebugRenderStreamWriter::Draw2DArrow(const rw::math::vpu::Vector2  lStartPosition, float32_t  lfAngleRad, float32_t  lfLength, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:265
		Vector4 lSinCos;

		// CgsDebugRenderStreamWriter.cpp:268
		Vector2 lEndPosition;

		rw::math::vpu::SinCosFast(/* parameters */);
	}
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	vec_cts(/* parameters */);
	rw::math::vpu::Cos(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	vec_ctf(/* parameters */);
	vec_add(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:290
void CgsDev::DebugRenderStreamWriter::Draw2DArrow(const rw::math::vpu::Vector2  lStartPosition, const rw::math::vpu::Vector2  lEndPosition, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:294
		Vector2 lDisplacement;

		// CgsDebugRenderStreamWriter.cpp:295
		float32_t lfLength;

		// CgsDebugRenderStreamWriter.cpp:296
		float32_t lfAngleRad;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
	}
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	rw::math::vpu::ATan2(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	vec_madd(/* parameters */);
	{
	}
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	vec_madd(/* parameters */);
	vec_re(/* parameters */);
	vec_andc(/* parameters */);
	vec_cmpgt(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:161
void CgsDev::DebugRenderStreamWriter::Draw2DBox(const rw::math::vpu::Vector2  lPosition, const rw::math::vpu::Vector2  lSize, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:163
		CInEventDrawBox2D lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	Add2DEvent<CgsDev::Internal::CInEventDrawBox2D>(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Flush(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:565
void CgsDev::DebugRenderStreamWriter::DrawQuad(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, const rw::math::vpu::Vector3  lPoint3, const rw::math::vpu::Vector3  lPoint4, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:567
		CInEventDrawQuad lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	Add3DEvent<CgsDev::Internal::CInEventDrawQuad>(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Flush(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:491
void CgsDev::DebugRenderStreamWriter::DrawText(const rw::math::vpu::Vector3  lPoint, const char *  lpcText, float32_t  lfSize, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:495
		CInEventDrawText lEvent;

		Add3DStringEvent(/* parameters */);
	}
	Add3DEvent(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	Add3DEvent<CgsDev::Internal::CInEventDrawText>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Flush(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Flush(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:517
void CgsDev::DebugRenderStreamWriter::DrawLine(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:519
		CInEventDrawLine lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	Add3DEvent<CgsDev::Internal::CInEventDrawLine>(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Flush(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:1095
void CgsDev::DebugRenderStreamWriter::DrawCross(const rw::math::vpu::Vector3  lPosition, float32_t  lfSize, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:1097
		Vector3 lXAxis;

		// CgsDebugRenderStreamWriter.cpp:1098
		Vector3 lYAxis;

		// CgsDebugRenderStreamWriter.cpp:1099
		Vector3 lZAxis;

	}
	rw::math::vpu::GetVector3_XAxis(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	rw::math::vpu::GetVector3_YAxis(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::GetVector3_ZAxis(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:1078
void CgsDev::DebugRenderStreamWriter::DrawWireTriangle(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, const rw::math::vpu::Vector3  lPoint3, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamWriter.cpp:541
void CgsDev::DebugRenderStreamWriter::DrawPoint(const rw::math::vpu::Vector3  lPoint, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:543
		CInEventDrawPoint lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	Add3DEvent<CgsDev::Internal::CInEventDrawPoint>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Flush(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:598
void CgsDev::DebugRenderStreamWriter::DrawSolidQuad(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, const rw::math::vpu::Vector3  lPoint3, const rw::math::vpu::Vector3  lPoint4, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:600
		CInEventDrawQuad lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	Add3DEvent<CgsDev::Internal::CInEventDrawQuad>(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Flush(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:646
void CgsDev::DebugRenderStreamWriter::DrawAngleRad(const rw::math::vpu::Vector3  lPosition, float32_t  lfAngle, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:648
		CInEventDrawAngle lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	Add3DEvent<CgsDev::Internal::CInEventDrawAngle>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Flush(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:629
void CgsDev::DebugRenderStreamWriter::DrawAngleDeg(const rw::math::vpu::Vector3  lPosition, float32_t  lfAngle, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamWriter.cpp:666
void CgsDev::DebugRenderStreamWriter::DrawAxis(const rw::math::vpu::Matrix44Affine &  lMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:668
		CInEventDrawAxis lEvent;

		rw::math::vpu::Vector3::X(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::Vector3::X(/* parameters */);
	rw::math::vpu::Vector3::X(/* parameters */);
	Add3DEvent<CgsDev::Internal::CInEventDrawAxis>(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Flush(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:696
void CgsDev::DebugRenderStreamWriter::DrawSphere(const rw::math::vpu::Vector3  lPosition, float32_t  lfRadius, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:698
		CInEventDrawSphere lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	Add3DEvent<CgsDev::Internal::CInEventDrawSphere>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Flush(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:720
void CgsDev::DebugRenderStreamWriter::DrawSolidSphere(const rw::math::vpu::Vector3  lPosition, float32_t  lfRadius, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:722
		CInEventDrawSolidSphere lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	Add3DEvent<CgsDev::Internal::CInEventDrawSolidSphere>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Flush(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:743
void CgsDev::DebugRenderStreamWriter::DrawHollowSphere(const rw::math::vpu::Vector3  lPosition, float32_t  lfRadius, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:745
		CInEventDrawHollowSphere lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	Add3DEvent<CgsDev::Internal::CInEventDrawHollowSphere>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Flush(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:783
void CgsDev::DebugRenderStreamWriter::DrawCircle(const rw::math::vpu::Vector3  lPosition, const rw::math::vpu::Vector3  lDirection, float32_t  lfRadius, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:785
		CInEventDrawCircle lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	Add3DEvent<CgsDev::Internal::CInEventDrawCircle>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Flush(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:765
void CgsDev::DebugRenderStreamWriter::DrawCircle(const rw::math::vpu::Matrix44Affine &  lMatrix, float32_t  lfRadius, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamWriter.cpp:810
void CgsDev::DebugRenderStreamWriter::DrawBox(const rw::math::vpu::Vector3  lInf, const rw::math::vpu::Vector3  lSup, const rw::math::vpu::Matrix44Affine &  lTransform, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:812
		CInEventDrawBox lEvent;

		rw::math::vpu::Vector3::X(/* parameters */);
	}
	rw::math::vpu::Vector3::X(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::Vector3::X(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	Add3DEvent<CgsDev::Internal::CInEventDrawBox>(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Flush(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:847
void CgsDev::DebugRenderStreamWriter::DrawBox(const rw::math::vpu::Vector3  lInf, const rw::math::vpu::Vector3  lSup, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:849
		CInEventDrawBoxAA lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	Add3DEvent<CgsDev::Internal::CInEventDrawBoxAA>(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Flush(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:874
void CgsDev::DebugRenderStreamWriter::DrawSolidBox(const rw::math::vpu::Vector3  lInf, const rw::math::vpu::Vector3  lSup, const rw::math::vpu::Matrix44Affine &  lTransform, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:876
		CInEventDrawSolidBox lEvent;

		rw::math::vpu::Vector3::X(/* parameters */);
	}
	rw::math::vpu::Vector3::X(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::Vector3::X(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	Add3DEvent<CgsDev::Internal::CInEventDrawSolidBox>(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Flush(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:911
void CgsDev::DebugRenderStreamWriter::DrawSolidBox(const rw::math::vpu::Vector3  lInf, const rw::math::vpu::Vector3  lSup, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:913
		CInEventDrawSolidBoxAA lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	Add3DEvent<CgsDev::Internal::CInEventDrawSolidBoxAA>(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Flush(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:937
void CgsDev::DebugRenderStreamWriter::DrawArrow(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:939
		CInEventDrawArrow lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	Add3DEvent<CgsDev::Internal::CInEventDrawArrow>(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Flush(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:964
void CgsDev::DebugRenderStreamWriter::DrawSolidArrow(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:966
		CInEventDrawSolidArrow lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	Add3DEvent<CgsDev::Internal::CInEventDrawSolidArrow>(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Flush(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:991
void CgsDev::DebugRenderStreamWriter::DrawCapsule(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, float32_t  lfRadius, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:994
		CInEventDrawCapsule lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	Add3DEvent<CgsDev::Internal::CInEventDrawCapsule>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Flush(/* parameters */);
}

// CgsDebugRenderStreamWriter.cpp:1019
void CgsDev::DebugRenderStreamWriter::DrawCylinder(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, float32_t  lfRadius, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRenderStreamWriter.cpp:1022
		CInEventDrawCylinder lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	Add3DEvent<CgsDev::Internal::CInEventDrawCylinder>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Flush(/* parameters */);
}

