// CgsDebugRender.cpp:72
void CgsDev::DebugRender::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRender.cpp:53
void CgsDev::DebugRender::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<16384,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRender.cpp:87
void CgsDev::DebugRender::Dispatch2D(CgsDev::Debug2DImmediateRender *  lpRender, bool  lbClear) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:91
		const char * lpcCachedString;

		// CgsDebugRender.cpp:94
		const CgsModule::Event * lpEventData;

		// CgsDebugRender.cpp:95
		int32_t liSize;

		// CgsDebugRender.cpp:96
		int32_t liId;

	}
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	{
	}
	CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
	{
		// CgsDebugRender.cpp:112
		const CInEventDrawText2D * lpEvent;

		rw::math::vpu::Vector2::Vector2(/* parameters */);
	}
	{
		// CgsDebugRender.cpp:120
		const CInEventDrawLine2D * lpEvent;

		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
	}
	{
		// CgsDebugRender.cpp:128
		const CInEventDrawBox2D * lpEvent;

		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
	}
	{
		// CgsDebugRender.cpp:136
		const CInEventDrawFrame2D * lpEvent;

		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRender.cpp:171
void CgsDev::DebugRender::Dispatch3D(CgsDev::Debug3DImmediateRender *  lpRender, bool  lbClear) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:175
		const char * lpcCachedString;

		// CgsDebugRender.cpp:178
		const CgsModule::Event * lpEventData;

		// CgsDebugRender.cpp:179
		int32_t liSize;

		// CgsDebugRender.cpp:180
		int32_t liId;

		CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	}
	{
	}
	CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsDebugRender.cpp:367
		const CInEventDrawCapsule * lpEvent;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	{
		// CgsDebugRender.cpp:359
		const CInEventDrawCylinder * lpEvent;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	{
		// CgsDebugRender.cpp:375
		const CInEventDrawTriangle * lpEvent;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	{
		// CgsDebugRender.cpp:351
		const CInEventDrawSolidArrow * lpEvent;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	{
		// CgsDebugRender.cpp:343
		const CInEventDrawArrow * lpEvent;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	{
		// CgsDebugRender.cpp:333
		const CInEventDrawSolidBoxAA * lpEvent;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	{
		// CgsDebugRender.cpp:319
		const CInEventDrawSolidBox * lpEvent;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
	}
	{
		// CgsDebugRender.cpp:309
		const CInEventDrawBoxAA * lpEvent;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	{
		// CgsDebugRender.cpp:295
		const CInEventDrawBox * lpEvent;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
	}
	{
		// CgsDebugRender.cpp:287
		const CInEventDrawCircle * lpEvent;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	{
		// CgsDebugRender.cpp:279
		const CInEventDrawHollowSphere * lpEvent;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	{
		// CgsDebugRender.cpp:271
		const CInEventDrawSolidSphere * lpEvent;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	{
		// CgsDebugRender.cpp:263
		const CInEventDrawSphere * lpEvent;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	{
		// CgsDebugRender.cpp:252
		const CInEventDrawAxis * lpEvent;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
	}
	{
		// CgsDebugRender.cpp:244
		const CInEventDrawAngle * lpEvent;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	{
		// CgsDebugRender.cpp:232
		const CInEventDrawQuad * lpEvent;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	{
		// CgsDebugRender.cpp:220
		const CInEventDrawQuad * lpEvent;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	{
		// CgsDebugRender.cpp:212
		const CInEventDrawPoint * lpEvent;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	{
		// CgsDebugRender.cpp:204
		const CInEventDrawLine * lpEvent;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	{
		// CgsDebugRender.cpp:196
		const CInEventDrawText * lpEvent;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
}

// CgsDebugRender.cpp:409
void CgsDev::DebugRender::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRender.cpp:912
void CgsDev::DebugRender::DrawQuad(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, const rw::math::vpu::Vector3  lPoint3, const rw::math::vpu::Vector3  lPoint4, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:915
		CInEventDrawQuad lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	AddEventSafe<CgsDev::Internal::CInEventDrawQuad>(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRender.cpp:431
void CgsDev::DebugRender::Draw2DText(const char *  lpcText, const rw::math::vpu::Vector2  lPosition, float32_t  lfSize, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:436
		CInEventDrawText2D lEvent;

	}
	CgsModule::VariableEventQueue<16384,16>::AddStringEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	AddEventSafe<CgsDev::Internal::CInEventDrawText2D>(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRender.cpp:672
void CgsDev::DebugRender::Draw2DTextJustified(const char *  lpcText, const rw::math::vpu::Vector2  lPosition, CgsDev::DebugRender::Justification  lJustification, float32_t  lfSize, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:674
		Vector2 lAdjustedPosition;

		// CgsDebugRender.cpp:677
		float32_t lfTextWidth;

	}
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator-=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator-=(/* parameters */);
	rw::math::vpu::_asmSwizzleStore<VectorAxisX, VectorAxisX>(/* parameters */);
}

// CgsDebugRender.cpp:455
void CgsDev::DebugRender::Draw2DText(const char *  lpcText, float32_t  lfX, float32_t  lfY, float32_t  lfSize, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:457
		Vector2 lPosition;

		rw::math::vpu::Vector2::Set(/* parameters */);
	}
}

// CgsDebugRender.cpp:765
void CgsDev::DebugRender::Draw2DFraction(int32_t  liNumerator, int32_t  liDenominator, float32_t  lfXPos, float32_t  lfYPos, float32_t  lfTextSize, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:767
		char[256] lacBuffer;

	}
}

// CgsDebugRender.cpp:730
void CgsDev::DebugRender::Draw2DDataSize(int32_t  liDataSize, float32_t  lfXPos, float32_t  lfYPos, float32_t  lfTextSize, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:732
		char[256] lacBuffer;

		// CgsDebugRender.cpp:734
		const int32_t KI_MB_SIZE;

		// CgsDebugRender.cpp:735
		const int32_t KI_KB_SIZE;

		// CgsDebugRender.cpp:736
		const int32_t KI_B_SIZE;

		// CgsDebugRender.cpp:738
		int32_t liMB;

		// CgsDebugRender.cpp:739
		int32_t liKB;

		// CgsDebugRender.cpp:740
		int32_t liB;

	}
}

// CgsDebugRender.cpp:716
void CgsDev::DebugRender::Draw2DValue(float32_t  liValue, float32_t  lfXPos, float32_t  lfYPos, float32_t  lfTextSize, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:718
		char[256] lacBuffer;

	}
}

// CgsDebugRender.cpp:701
void CgsDev::DebugRender::Draw2DValue(int32_t  liValue, float32_t  lfXPos, float32_t  lfYPos, float32_t  lfTextSize, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:703
		char[256] lacBuffer;

	}
}

// CgsDebugRender.cpp:477
void CgsDev::DebugRender::Draw2DLine(const rw::math::vpu::Vector2  lPoint1, const rw::math::vpu::Vector2  lPoint2, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:480
		CInEventDrawLine2D lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	AddEventSafe<CgsDev::Internal::CInEventDrawLine2D>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRender.cpp:558
void CgsDev::DebugRender::Draw2DLineAtAngle(const rw::math::vpu::Vector2  lStartPosition, float32_t  lfAngleRad, float32_t  lfLength, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:563
		Vector4 lSinCos;

		// CgsDebugRender.cpp:566
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

// CgsDebugRender.cpp:587
void CgsDev::DebugRender::Draw2DArrowHead(const rw::math::vpu::Vector2  lCentrePosition, float32_t  lfAngleRad, float32_t  lfLength, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:593
		const float KF_120_DEGREES_IN_RADIANS;

	}
}

// CgsDebugRender.cpp:614
void CgsDev::DebugRender::Draw2DArrow(const rw::math::vpu::Vector2  lStartPosition, float32_t  lfAngleRad, float32_t  lfLength, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:619
		Vector4 lSinCos;

		// CgsDebugRender.cpp:622
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

// CgsDebugRender.cpp:645
void CgsDev::DebugRender::Draw2DArrow(const rw::math::vpu::Vector2  lStartPosition, const rw::math::vpu::Vector2  lEndPosition, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:650
		Vector2 lDisplacement;

		// CgsDebugRender.cpp:651
		float32_t lfLength;

		// CgsDebugRender.cpp:652
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

// CgsDebugRender.cpp:504
void CgsDev::DebugRender::Draw2DBox(const rw::math::vpu::Vector2  lPosition, const rw::math::vpu::Vector2  lSize, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:507
		CInEventDrawBox2D lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	AddEventSafe<CgsDev::Internal::CInEventDrawBox2D>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRender.cpp:779
void CgsDev::DebugRender::Draw2DGraph(CgsDev::DebugGraph *  lpGraph, const const Vector2Template<float> &  lOrigin, const const Vector2Template<float> &  lSize, RGBA  lBackColourRGBA, RGBA  lForeColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:788
		float32_t lfVal0;

		// CgsDebugRender.cpp:789
		float32_t lfVal1;

		// CgsDebugRender.cpp:790
		Vector2 lVal0Pos;

		// CgsDebugRender.cpp:791
		Vector2 lVal1Pos;

		// CgsDebugRender.cpp:796
		int32_t liIndex;

		Vector2<float>(/* parameters */);
	}
	Vector2<float>(/* parameters */);
	CgsContainers::RingBuffer<float32_t>::GetLength(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	{
		// CgsDebugRender.cpp:802
		float32_t lfVal0Scaled;

		// CgsDebugRender.cpp:803
		float32_t lfVal1Scaled;

		CgsContainers::RingBuffer<float32_t>::operator[](/* parameters */);
		rw::math::fpu::Clamp<float>(/* parameters */);
		rw::math::fpu::Clamp<float>(/* parameters */);
		rw::math::vpu::Vector2::SetY(/* parameters */);
		rw::math::vpu::Vector2::SetX(/* parameters */);
		rw::math::vpu::Vector2::SetX(/* parameters */);
		Vector2<float>(/* parameters */);
		Vector2<float>(/* parameters */);
		rw::math::vpu::Vector2::SetY(/* parameters */);
	}
	CgsContainers::RingBuffer<float32_t>::operator[](/* parameters */);
}

// CgsDebugRender.cpp:531
void CgsDev::DebugRender::Draw2DFrame(const rw::math::vpu::Vector2  lPosition, const rw::math::vpu::Vector2  lSize, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:534
		CInEventDrawFrame2D lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	AddEventSafe<CgsDev::Internal::CInEventDrawFrame2D>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRender.cpp:832
void CgsDev::DebugRender::DrawText(const rw::math::vpu::Vector3  lPoint, const char *  lpcText, float32_t  lfSize, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:837
		CInEventDrawText lEvent;

		CgsModule::VariableEventQueue<16384,16>::AddStringEventSafe(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	AddEventSafe<CgsDev::Internal::CInEventDrawText>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRender.cpp:860
void CgsDev::DebugRender::DrawLine(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:863
		CInEventDrawLine lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	AddEventSafe<CgsDev::Internal::CInEventDrawLine>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRender.cpp:1483
void CgsDev::DebugRender::DrawCross(const rw::math::vpu::Vector3  lPosition, float32_t  lfSize, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:1486
		Vector3 lXAxis;

		// CgsDebugRender.cpp:1487
		Vector3 lYAxis;

		// CgsDebugRender.cpp:1488
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

// CgsDebugRender.cpp:1465
void CgsDev::DebugRender::DrawWireTriangle(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, const rw::math::vpu::Vector3  lPoint3, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRender.cpp:886
void CgsDev::DebugRender::DrawPoint(const rw::math::vpu::Vector3  lPoint, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:889
		CInEventDrawPoint lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	AddEventSafe<CgsDev::Internal::CInEventDrawPoint>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRender.cpp:947
void CgsDev::DebugRender::DrawSolidQuad(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, const rw::math::vpu::Vector3  lPoint3, const rw::math::vpu::Vector3  lPoint4, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:950
		CInEventDrawQuad lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	AddEventSafe<CgsDev::Internal::CInEventDrawQuad>(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRender.cpp:999
void CgsDev::DebugRender::DrawAngleRad(const rw::math::vpu::Vector3  lPosition, float32_t  lfAngle, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:1002
		CInEventDrawAngle lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	AddEventSafe<CgsDev::Internal::CInEventDrawAngle>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRender.cpp:980
void CgsDev::DebugRender::DrawAngleDeg(const rw::math::vpu::Vector3  lPosition, float32_t  lfAngle, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRender.cpp:1021
void CgsDev::DebugRender::DrawAxis(const rw::math::vpu::Matrix44Affine &  lMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:1024
		CInEventDrawAxis lEvent;

		rw::math::vpu::Vector3::X(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::Vector3::X(/* parameters */);
	rw::math::vpu::Vector3::X(/* parameters */);
	AddEventSafe<CgsDev::Internal::CInEventDrawAxis>(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRender.cpp:1053
void CgsDev::DebugRender::DrawSphere(const rw::math::vpu::Vector3  lPosition, float32_t  lfRadius, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:1056
		CInEventDrawSphere lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	AddEventSafe<CgsDev::Internal::CInEventDrawSphere>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRender.cpp:1530
void CgsDev::DebugRender::DrawVolume(const rw::collision::SphereVolume *  lpVolume, const rw::math::vpu::Matrix44Affine &  lTransformMatrix, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRender.cpp:1079
void CgsDev::DebugRender::DrawSolidSphere(const rw::math::vpu::Vector3  lPosition, float32_t  lfRadius, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:1082
		CInEventDrawSolidSphere lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	AddEventSafe<CgsDev::Internal::CInEventDrawSolidSphere>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRender.cpp:1104
void CgsDev::DebugRender::DrawHollowSphere(const rw::math::vpu::Vector3  lPosition, float32_t  lfRadius, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:1107
		CInEventDrawHollowSphere lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	AddEventSafe<CgsDev::Internal::CInEventDrawHollowSphere>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRender.cpp:1148
void CgsDev::DebugRender::DrawCircle(const rw::math::vpu::Vector3  lPosition, const rw::math::vpu::Vector3  lDirection, float32_t  lfRadius, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:1151
		CInEventDrawCircle lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	AddEventSafe<CgsDev::Internal::CInEventDrawCircle>(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRender.cpp:1128
void CgsDev::DebugRender::DrawCircle(const rw::math::vpu::Matrix44Affine &  lMatrix, float32_t  lfRadius, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRender.cpp:1177
void CgsDev::DebugRender::DrawBox(const rw::math::vpu::Vector3  lInf, const rw::math::vpu::Vector3  lSup, const rw::math::vpu::Matrix44Affine &  lTransform, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:1180
		CInEventDrawBox lEvent;

		rw::math::vpu::Vector3::X(/* parameters */);
	}
	rw::math::vpu::Vector3::X(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::Vector3::X(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	AddEventSafe<CgsDev::Internal::CInEventDrawBox>(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRender.cpp:1570
void CgsDev::DebugRender::DrawVolume(const rw::collision::BoxVolume *  lpVolume, const rw::math::vpu::Matrix44Affine &  lTransformMatrix, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:1572
		Vector3 lDimensions;

		rw::math::vpu::operator-(/* parameters */);
		rw::collision::BoxVolume::GetDimensions(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
}

// CgsDebugRender.cpp:1216
void CgsDev::DebugRender::DrawBox(const rw::math::vpu::Vector3  lInf, const rw::math::vpu::Vector3  lSup, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:1219
		CInEventDrawBoxAA lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	AddEventSafe<CgsDev::Internal::CInEventDrawBoxAA>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRender.cpp:1245
void CgsDev::DebugRender::DrawSolidBox(const rw::math::vpu::Vector3  lInf, const rw::math::vpu::Vector3  lSup, const rw::math::vpu::Matrix44Affine &  lTransform, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:1248
		CInEventDrawSolidBox lEvent;

		rw::math::vpu::Vector3::X(/* parameters */);
	}
	rw::math::vpu::Vector3::X(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::Vector3::X(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	AddEventSafe<CgsDev::Internal::CInEventDrawSolidBox>(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRender.cpp:1284
void CgsDev::DebugRender::DrawSolidBox(const rw::math::vpu::Vector3  lInf, const rw::math::vpu::Vector3  lSup, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:1287
		CInEventDrawSolidBoxAA lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	AddEventSafe<CgsDev::Internal::CInEventDrawSolidBoxAA>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRender.cpp:1312
void CgsDev::DebugRender::DrawArrow(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:1315
		CInEventDrawArrow lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	AddEventSafe<CgsDev::Internal::CInEventDrawArrow>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRender.cpp:1341
void CgsDev::DebugRender::DrawSolidArrow(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:1344
		CInEventDrawSolidArrow lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	AddEventSafe<CgsDev::Internal::CInEventDrawSolidArrow>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRender.cpp:1370
void CgsDev::DebugRender::DrawCapsule(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, float32_t  lfRadius, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:1375
		CInEventDrawCapsule lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	AddEventSafe<CgsDev::Internal::CInEventDrawCapsule>(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRender.cpp:1507
void CgsDev::DebugRender::DrawVolume(const rw::collision::CapsuleVolume *  lpVolume, const rw::math::vpu::Matrix44Affine &  lTransformMatrix, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:1511
		Vector3 lStart;

		// CgsDebugRender.cpp:1512
		Vector3 lEnd;

		rw::collision::CapsuleVolume::GetHalfHeight(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44Affine::At(/* parameters */);
	rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
}

// CgsDebugRender.cpp:1401
void CgsDev::DebugRender::DrawCylinder(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, float32_t  lfRadius, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:1406
		CInEventDrawCylinder lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	AddEventSafe<CgsDev::Internal::CInEventDrawCylinder>(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebugRender.cpp:1547
void CgsDev::DebugRender::DrawVolume(const rw::collision::CylinderVolume *  lpVolume, const rw::math::vpu::Matrix44Affine &  lTransformMatrix, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:1551
		Vector3 lStart;

		// CgsDebugRender.cpp:1552
		Vector3 lEnd;

		rw::collision::CylinderVolume::GetHalfHeight(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44Affine::At(/* parameters */);
	rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
}

// CgsDebugRender.cpp:1433
void CgsDev::DebugRender::DrawTriangle(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, const rw::math::vpu::Vector3  lPoint3, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugRender.cpp:1436
		CInEventDrawTriangle lEvent;

		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	AddEventSafe<CgsDev::Internal::CInEventDrawTriangle>(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(/* parameters */);
	{
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

