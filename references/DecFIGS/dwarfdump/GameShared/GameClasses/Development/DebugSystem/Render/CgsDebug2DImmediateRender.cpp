// CgsDebug2DImmediateRender.cpp
void CgsDev::Debug2DImmediateRender::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebug2DImmediateRender.cpp:1257
void CgsDev::Debug2DImmediateRender::Do2DBoxesIntersect(const rw::math::vpu::Vector2  lBox0Min, const rw::math::vpu::Vector2  lBox0Max, const rw::math::vpu::Vector2  lBox1Min, const rw::math::vpu::Vector2  lBox1Max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug2DImmediateRender.cpp:1259
		int32_t liIndex;

		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		{
		}
	}
}

// CgsDebug2DImmediateRender.cpp:1143
void CgsDev::Debug2DImmediateRender::Is2DBoxOnScreen(const rw::math::vpu::Vector2  lPosition, const rw::math::vpu::Vector2  lSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug2DImmediateRender.cpp:1145
		Vector2 lMin0;

		// CgsDebug2DImmediateRender.cpp:1145
		Vector2 lMax0;

		// CgsDebug2DImmediateRender.cpp:1145
		Vector2 lMin1;

		// CgsDebug2DImmediateRender.cpp:1145
		Vector2 lMax1;

		rw::math::vpu::Vector2::SetZero(/* parameters */);
		GetVirtualScreenSize(/* parameters */);
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
}

// CgsDebug2DImmediateRender.cpp:1166
void CgsDev::Debug2DImmediateRender::Is2DPolygonOnScreen(const rw::math::vpu::Vector2 *  lpPoints, uint32_t  luNumPoints) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug2DImmediateRender.cpp:1168
		uint32_t luIndex;

		// CgsDebug2DImmediateRender.cpp:1169
		Vector2 lMin;

		// CgsDebug2DImmediateRender.cpp:1169
		Vector2 lMax;

	}
	rw::math::vpu::Min(/* parameters */);
	rw::math::vpu::Max(/* parameters */);
}

// CgsDebug2DImmediateRender.cpp:1197
void CgsDev::Debug2DImmediateRender::Do2DLinesIntersect(const rw::math::vpu::Vector2  lLineOneStartPos, const rw::math::vpu::Vector2  lLineOneEndPos, const rw::math::vpu::Vector2  lLineTwoStartPos, const rw::math::vpu::Vector2  lLineTwoEndPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug2DImmediateRender.cpp:1214
		VecFloat lfAX;

		// CgsDebug2DImmediateRender.cpp:1215
		VecFloat lfAY;

		// CgsDebug2DImmediateRender.cpp:1217
		VecFloat lfBX;

		// CgsDebug2DImmediateRender.cpp:1218
		VecFloat lfBY;

		// CgsDebug2DImmediateRender.cpp:1220
		VecFloat lfCX;

		// CgsDebug2DImmediateRender.cpp:1221
		VecFloat lfCY;

		// CgsDebug2DImmediateRender.cpp:1223
		VecFloat lfDX;

		// CgsDebug2DImmediateRender.cpp:1224
		VecFloat lfDY;

		// CgsDebug2DImmediateRender.cpp:1227
		VecFloat lfDenominator;

		// CgsDebug2DImmediateRender.cpp:1235
		VecFloat lfR;

		// CgsDebug2DImmediateRender.cpp:1238
		VecFloat lfS;

		rw::math::vpu::operator/=(/* parameters */);
		rw::math::vpu::operator==(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	rw::math::vpu::operator/=(/* parameters */);
	rw::math::vpu::operator<=(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	rw::math::vpu::operator<=(/* parameters */);
}

// CgsDebug2DImmediateRender.cpp:56
void CgsDev::Debug2DImmediateRender::Construct(rw::IResourceAllocator *  lpAllocator, float32_t  lfVirtualScreenWidth, float32_t  lfVirtualScreenHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	VectorFont::SetRenderer(/* parameters */);
}

// CgsDebug2DImmediateRender.cpp:1027
void CgsDev::Debug2DImmediateRender::Is2DPointOnScreen(const rw::math::vpu::Vector2  lPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug2DImmediateRender.cpp:1029
		Vector2 lZero;

		// CgsDebug2DImmediateRender.cpp:1030
		Vector2 lScreen;

		rw::math::vpu::Vector2::SetZero(/* parameters */);
		GetVirtualScreenSize(/* parameters */);
		rw::math::vpu::operator>=<VectorAxisX, VectorAxisX>(/* parameters */);
		rw::math::vpu::operator>=<VectorAxisY, VectorAxisY>(/* parameters */);
		rw::math::vpu::Vector2::SetY(/* parameters */);
	}
	rw::math::vpu::operator<=<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator<=<VectorAxisY, VectorAxisY>(/* parameters */);
}

// CgsDebug2DImmediateRender.cpp:1056
void CgsDev::Debug2DImmediateRender::Is2DTextOnScreen(const char *  lpcText, const rw::math::vpu::Vector2  lPosition, float32_t  lfSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebug2DImmediateRender.cpp:1072
void CgsDev::Debug2DImmediateRender::Is2DLineOnScreen(const rw::math::vpu::Vector2  lPoint1, const rw::math::vpu::Vector2  lPoint2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug2DImmediateRender.cpp:1079
		Vector2 lZero;

		// CgsDebug2DImmediateRender.cpp:1080
		Vector2 lScreen;

		// CgsDebug2DImmediateRender.cpp:1085
		Vector2 lEdgeStart;

		// CgsDebug2DImmediateRender.cpp:1086
		Vector2 lEdgeEnd;

	}
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	GetVirtualScreenSize(/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
	SetY<VectorAxisY>(/* parameters */);
	SetX<VectorAxisX>(/* parameters */);
	SetY<VectorAxisY>(/* parameters */);
}

// CgsDebug2DImmediateRender.cpp:1390
void CgsDev::Debug2DImmediateRender::CalcTextWidth(const char *  lpcText, float32_t  lfSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug2DImmediateRender.cpp:1392
		float32_t lfTextWidth;

		CgsResource::SafeResourceHandle<CgsResource::Font>::operator!=(/* parameters */);
	}
	CgsResource::ResourceHandle::IsEqual(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebug2DImmediateRender.cpp:1415
void CgsDev::Debug2DImmediateRender::CalcTextExtent(const char *  lpcText, float32_t  lfSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsDebug2DImmediateRender.cpp:1417
	Vector2 lTextExtent;

	{
		// CgsDebug2DImmediateRender.cpp:1417
		Vector2 lTextExtent;

		CgsResource::SafeResourceHandle<CgsResource::Font>::operator!=(/* parameters */);
	}
	CgsResource::ResourceHandle::IsEqual(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	rw::math::vpu::Vector2::SetX(/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebug2DImmediateRender.cpp:327
void CgsDev::Debug2DImmediateRender::DispatchVertices() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	{
	}
}

// CgsDebug2DImmediateRender.cpp:1319
void CgsDev::Debug2DImmediateRender::SetDrawingMode(CgsDev::Debug2DImmediateRender::DrawingMode  leDrawingMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebug2DImmediateRender.cpp:273
void CgsDev::Debug2DImmediateRender::AddQuad(const rw::math::vpu::Vector2  lTopLeft, const rw::math::vpu::Vector2  lBottomLeft, const rw::math::vpu::Vector2  lBottomRight, const rw::math::vpu::Vector2  lTopRight, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
}

// CgsDebug2DImmediateRender.cpp:456
void CgsDev::Debug2DImmediateRender::DrawBox(const rw::math::vpu::Vector2  lPosition, const rw::math::vpu::Vector2  lSize, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug2DImmediateRender.cpp:466
		Vector2 lWidth;

		// CgsDebug2DImmediateRender.cpp:467
		Vector2 lHeight;

		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
	}
}

// CgsDebug2DImmediateRender.cpp:486
void CgsDev::Debug2DImmediateRender::DrawBox(float32_t  lfX1, float32_t  lfY1, float32_t  lfX2, float32_t  lfY2, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug2DImmediateRender.cpp:488
		Vector2 lPosition;

		// CgsDebug2DImmediateRender.cpp:489
		Vector2 lSize;

		rw::math::vpu::Vector2::Set(/* parameters */);
		rw::math::vpu::Vector2::Set(/* parameters */);
	}
}

// CgsDebug2DImmediateRender.cpp:878
void CgsDev::Debug2DImmediateRender::DrawHorizontalBar(const rw::math::vpu::Vector2  lMin, const rw::math::vpu::Vector2  lMax, float32_t  lfValue, float32_t  lfMax, RGBA  lForeColourRGBA, RGBA  lBackColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
	{
	}
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
}

// CgsDebug2DImmediateRender.cpp:669
void CgsDev::Debug2DImmediateRender::DrawFrame(float32_t  lfX1, float32_t  lfY1, float32_t  lfX2, float32_t  lfY2, RGBA  lColourRGBA, float32_t  lfBorderSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebug2DImmediateRender.cpp:230
void CgsDev::Debug2DImmediateRender::AddTriangle(const rw::math::vpu::Vector2  lPoint1, const rw::math::vpu::Vector2  lPoint2, const rw::math::vpu::Vector2  lPoint3, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
}

// CgsDebug2DImmediateRender.cpp:544
void CgsDev::Debug2DImmediateRender::DrawSolidConvexPolygon(const rw::math::vpu::Vector2 *  lpPoints, uint32_t  luNumPoints, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug2DImmediateRender.cpp:559
		uint32_t luPoint0;

		// CgsDebug2DImmediateRender.cpp:559
		uint32_t luPoint1;

	}
}

// CgsDebug2DImmediateRender.cpp:196
void CgsDev::Debug2DImmediateRender::AddLine(const rw::math::vpu::Vector2  lPoint1, const rw::math::vpu::Vector2  lPoint2, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
}

// CgsDebug2DImmediateRender.cpp:507
void CgsDev::Debug2DImmediateRender::DrawWirePolygon(const rw::math::vpu::Vector2 *  lpPoints, uint32_t  luNumPoints, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug2DImmediateRender.cpp:522
		uint32_t luPoint0;

		// CgsDebug2DImmediateRender.cpp:522
		uint32_t luPoint1;

	}
}

// CgsDebug2DImmediateRender.cpp:430
void CgsDev::Debug2DImmediateRender::DrawLine(const rw::math::vpu::Vector2  lPoint1, const rw::math::vpu::Vector2  lPoint2, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebug2DImmediateRender.cpp:361
void CgsDev::Debug2DImmediateRender::DrawText(const char *  lpcText, const rw::math::vpu::Vector2  lPosition, float32_t  lfSize, RGBA  lColourRGBA, bool  lbCull) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug2DImmediateRender.cpp:364
		TextObject lTextObject;

		// CgsDebug2DImmediateRender.cpp:365
		Vector2 lBottomRight;

	}
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator!=(/* parameters */);
	{
		// CgsDebug2DImmediateRender.cpp:374
		Vector3 lColourVector;

		CgsGraphics::TextObject::SetText(/* parameters */);
		CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
		CgsResource::ResourceHandle::Construct(/* parameters */);
		CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
		rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		{
		}
		rw::math::vpu::Vector2::SetY(/* parameters */);
		rw::math::vpu::Vector2::SetX(/* parameters */);
		CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		CgsGraphics::TextObject::SetStringWidth(/* parameters */);
	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
	{
		StrStream::StrStream(/* parameters */);
		StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDebug2DImmediateRender.cpp:898
void CgsDev::Debug2DImmediateRender::DrawTextWithBackground(const char *  lpcText, float32_t  lfX, float32_t  lfY, float32_t  lfSize, RGBA  lTextColourRGBA, RGBA  lBackgroundColourRGBA, float32_t  lfBorder) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug2DImmediateRender.cpp:901
		Vector2 lExtent;

		// CgsDebug2DImmediateRender.cpp:904
		Vector2 lBorder;

		// CgsDebug2DImmediateRender.cpp:905
		Vector2 lPosition;

	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
}

// CgsDebug2DImmediateRender.cpp:409
void CgsDev::Debug2DImmediateRender::DrawText(const char *  lpcText, float32_t  lfX, float32_t  lfY, float32_t  lfSize, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug2DImmediateRender.cpp:411
		Vector2 lPosition;

		rw::math::vpu::Vector2::Set(/* parameters */);
	}
}

// CgsDebug2DImmediateRender.cpp:969
void CgsDev::Debug2DImmediateRender::DrawFraction(int32_t  liNumerator, int32_t  liDenominator, float32_t  lfXPos, float32_t  lfYPos, float32_t  lfTextSize, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug2DImmediateRender.cpp:971
		char[256] lacBuffer;

	}
}

// CgsDebug2DImmediateRender.cpp:940
void CgsDev::Debug2DImmediateRender::DrawDataSize(int32_t  liDataSize, float32_t  lfXPos, float32_t  lfYPos, float32_t  lfTextSize, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug2DImmediateRender.cpp:942
		char[256] lacBuffer;

		// CgsDebug2DImmediateRender.cpp:944
		const int32_t KI_MB_SIZE;

		// CgsDebug2DImmediateRender.cpp:945
		const int32_t KI_KB_SIZE;

		// CgsDebug2DImmediateRender.cpp:946
		const int32_t KI_B_SIZE;

		// CgsDebug2DImmediateRender.cpp:948
		int32_t liMB;

		// CgsDebug2DImmediateRender.cpp:949
		int32_t liKB;

		// CgsDebug2DImmediateRender.cpp:950
		int32_t liB;

	}
}

// CgsDebug2DImmediateRender.cpp:932
void CgsDev::Debug2DImmediateRender::Draw2DValue(float32_t  lfXValue, float32_t  lfYValue, float32_t  lfXPos, float32_t  lfYPos, float32_t  lfTextSize, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug2DImmediateRender.cpp:934
		char[256] lacBuffer;

	}
}

// CgsDebug2DImmediateRender.cpp:924
void CgsDev::Debug2DImmediateRender::DrawValue(float32_t  liValue, float32_t  lfXPos, float32_t  lfYPos, float32_t  lfTextSize, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug2DImmediateRender.cpp:926
		char[256] lacBuffer;

	}
}

// CgsDebug2DImmediateRender.cpp:915
void CgsDev::Debug2DImmediateRender::DrawValue(int32_t  liValue, float32_t  lfXPos, float32_t  lfYPos, float32_t  lfTextSize, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug2DImmediateRender.cpp:917
		char[256] lacBuffer;

	}
}

// CgsDebug2DImmediateRender.cpp:699
void CgsDev::Debug2DImmediateRender::DrawAlignedText(const char *  lpcText, float32_t  lfX, float32_t  lfY, float32_t  lfSize, RGBA  lColourRGBA, float32_t  lfAlign) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug2DImmediateRender.cpp:702
		float32_t lfWidth;

	}
}

// CgsDebug2DImmediateRender.cpp:729
void CgsDev::Debug2DImmediateRender::DrawTextInBox(const char *  lpcText, float32_t  lfX1, float32_t  lfY1, float32_t  lfX2, float32_t  lfY2, float32_t  lfSize, RGBA  lColourRGBA, float32_t  lfAlign) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug2DImmediateRender.cpp:731
		float32_t lfWidth;

		// CgsDebug2DImmediateRender.cpp:733
		float32_t lfX;

		// CgsDebug2DImmediateRender.cpp:734
		float32_t lfY;

		// CgsDebug2DImmediateRender.cpp:737
		int32_t liMaxChars;

		// CgsDebug2DImmediateRender.cpp:745
		const char * lpcLine;

	}
	{
		// CgsDebug2DImmediateRender.cpp:749
		const char * lpcEnd;

		// CgsDebug2DImmediateRender.cpp:756
		char[512] lacBuf;

		// CgsDebug2DImmediateRender.cpp:757
		int32_t liLength;

	}
}

// CgsDebug2DImmediateRender.cpp:977
void CgsDev::Debug2DImmediateRender::DrawGraph(CgsDev::DebugGraph *  lpGraph, const const Vector2Template<float> &  lOrigin, const const Vector2Template<float> &  lSize, RGBA  lBackColourRGBA, RGBA  lForeColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug2DImmediateRender.cpp:986
		float32_t lfVal0;

		// CgsDebug2DImmediateRender.cpp:987
		float32_t lfVal1;

		// CgsDebug2DImmediateRender.cpp:988
		Vector2 lVal0Pos;

		// CgsDebug2DImmediateRender.cpp:989
		Vector2 lVal1Pos;

		// CgsDebug2DImmediateRender.cpp:994
		int32_t liIndex;

		Vector2<float>(/* parameters */);
	}
	Vector2<float>(/* parameters */);
	CgsContainers::RingBuffer<float32_t>::GetLength(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	{
		// CgsDebug2DImmediateRender.cpp:1000
		float32_t lfVal0Scaled;

		// CgsDebug2DImmediateRender.cpp:1001
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

// CgsDebug2DImmediateRender.cpp:608
void CgsDev::Debug2DImmediateRender::DrawCircle(const rw::math::vpu::Vector2  lCentre, float32_t  lrRadius, int32_t  liNumDivisions, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug2DImmediateRender.cpp:624
		float32_t lrAngleInRadians;

		// CgsDebug2DImmediateRender.cpp:625
		float32_t lrAngleDeltaInRadians;

		// CgsDebug2DImmediateRender.cpp:631
		Vector2 lPosition1;

		// CgsDebug2DImmediateRender.cpp:633
		Vector2 lPosition2;

		{
			// CgsDebug2DImmediateRender.cpp:614
			Vector2 lBBoxMin;

			// CgsDebug2DImmediateRender.cpp:615
			Vector2 lBBoxDims;

		}
	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::fpu::Sin(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	rw::math::fpu::Sin(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	{
	}
}

// CgsDebug2DImmediateRender.cpp:582
void CgsDev::Debug2DImmediateRender::DrawFrame(const rw::math::vpu::Vector2  lPosition, const rw::math::vpu::Vector2  lSize, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug2DImmediateRender.cpp:585
		Vector2 lWidth;

		// CgsDebug2DImmediateRender.cpp:586
		Vector2 lHeight;

		rw::math::vpu::Vector2::Vector2(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
}

// CgsDebug2DImmediateRender.cpp:166
void CgsDev::Debug2DImmediateRender::AddVertex(const rw::math::vpu::Vector2  lPoint, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
}

// CgsDebug2DImmediateRender.cpp:131
void CgsDev::Debug2DImmediateRender::End() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebug2DImmediateRender.cpp:1286
void CgsDev::Debug2DImmediateRender::SetDebugRenderStates() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug2DImmediateRender.cpp:1292
		Im2dTransform lTransform;

		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		CgsGraphics::Im2dTransform::Construct(/* parameters */);
		CgsGraphics::Im2dRenderBuffer::SetTransform(/* parameters */);
		Vector4<VectorAxisX, VectorAxisY, VectorAxisX, VectorAxisY>(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		{
		}
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
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

// CgsDebug2DImmediateRender.cpp:102
void CgsDev::Debug2DImmediateRender::Begin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

