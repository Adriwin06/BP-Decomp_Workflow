// CgsStrStream.h:39
namespace CgsDev {
	// CgsDebug3DImmediateRender.cpp:88
	namespace DebugRenderStates {
		// CgsDebug3DImmediateRender.cpp:89
		bool gbCreated;

		// CgsDebug3DImmediateRender.cpp:91
		extern BlendState * gpBlendState;

		// CgsDebug3DImmediateRender.cpp:92
		extern DepthStencilState * gpDepthStencilState3D;

		// CgsDebug3DImmediateRender.cpp:93
		extern DepthStencilState * gpDepthStencilState2D;

		// CgsDebug3DImmediateRender.cpp:94
		extern RasterizerState * gpRasteriserState;

	}

}

// CgsDebug3DImmediateRender.cpp:159
void CgsDev::Debug3DImmediateRender::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebug3DImmediateRender.cpp:1724
void CgsDev::Debug3DImmediateRender::BuildSphereIndices() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug3DImmediateRender.cpp:1727
		int32_t liIndex;

		// CgsDebug3DImmediateRender.cpp:1728
		int32_t liIndex2;

		// CgsDebug3DImmediateRender.cpp:1729
		int32_t liVertexOffset;

		// CgsDebug3DImmediateRender.cpp:1730
		int32_t liIndexOffset;

		{
			// CgsDebug3DImmediateRender.cpp:1738
			int32_t liBaseIndex;

		}
		{
			// CgsDebug3DImmediateRender.cpp:1758
			int32_t liBaseIndex;

		}
		{
			// CgsDebug3DImmediateRender.cpp:1779
			int32_t liBaseIndex;

		}
	}
}

// CgsDebug3DImmediateRender.cpp:1851
void CgsDev::Debug3DImmediateRender::CalculateInterpolatedColour(RGBA  lColourRGBA1, RGBA  lColourRGBA2, float32_t  lfInterp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsDebug3DImmediateRender.cpp:1872
	RGBA lResultRGBA;

	{
		// CgsDebug3DImmediateRender.cpp:1864
		Vector4 lColour1;

		// CgsDebug3DImmediateRender.cpp:1865
		Vector4 lColour2;

		// CgsDebug3DImmediateRender.cpp:1868
		Vector4 lResult;

		// CgsDebug3DImmediateRender.cpp:1872
		RGBA lResultRGBA;

	}
	rw::RGBA::SetAlpha(/* parameters */);
	rw::RGBA::SetAlpha(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisW>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
}

// CgsDebug3DImmediateRender.cpp:1477
void CgsDev::Debug3DImmediateRender::CreateDebugRenderStates(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug3DImmediateRender.cpp:1489
		Parameters lBlendStateParams;

		// CgsDebug3DImmediateRender.cpp:1495
		ResourceDescriptor lBlendStateResDesc;

		// CgsDebug3DImmediateRender.cpp:1496
		Resource lBlendStateResource;

		// CgsDebug3DImmediateRender.cpp:1502
		Parameters lDepthStencilStateParams2D;

		// CgsDebug3DImmediateRender.cpp:1506
		ResourceDescriptor lDepthStencilStateResDesc2D;

		// CgsDebug3DImmediateRender.cpp:1507
		Resource lDepthStencilStateResource2D;

		// CgsDebug3DImmediateRender.cpp:1511
		Parameters lDepthStencilStateParams3D;

		// CgsDebug3DImmediateRender.cpp:1515
		ResourceDescriptor lDepthStencilStateResDesc3D;

		// CgsDebug3DImmediateRender.cpp:1516
		Resource lDepthStencilStateResource3D;

		// CgsDebug3DImmediateRender.cpp:1522
		Parameters lRasteriserStateParams;

		// CgsDebug3DImmediateRender.cpp:1525
		ResourceDescriptor lRasteriserStateResDesc;

		// CgsDebug3DImmediateRender.cpp:1526
		Resource lRasteriserStateResource;

	}
	renderengine::BlendState::Parameters::Parameters(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::DepthStencilState::Parameters::Parameters(/* parameters */);
	renderengine::BlendState::Parameters::SetBlendEnable(/* parameters */);
	renderengine::BlendState::Parameters::SetSource(/* parameters */);
	renderengine::BlendState::Parameters::SetDestination(/* parameters */);
	renderengine::BlendState::Parameters::SetOperation(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthWriteEnable(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthEnable(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::DepthStencilState::Parameters::Parameters(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthWriteEnable(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthEnable(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::RasterizerState::Parameters::Parameters(/* parameters */);
	renderengine::RasterizerState::Parameters::SetCullMode(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

// CgsDebug3DImmediateRender.cpp:117
void CgsDev::Debug3DImmediateRender::Construct(rw::IResourceAllocator *  lpAllocator, float32_t  lfVirtualScreenWidth, float32_t  lfVirtualScreenHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	VectorFont::SetRenderer(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
}

// CgsDebug3DImmediateRender.cpp:1808
void CgsDev::Debug3DImmediateRender::GetSphereVertices(Vector3 *  lpVertexArray, const rw::math::vpu::Vector3  lPosition, float32_t  lfRadius) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug3DImmediateRender.cpp:1810
		float32_t lfDj;

		// CgsDebug3DImmediateRender.cpp:1811
		float32_t lfDi;

		// CgsDebug3DImmediateRender.cpp:1818
		int32_t liIndex;

		// CgsDebug3DImmediateRender.cpp:1819
		int32_t liIndex2;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
		// CgsDebug3DImmediateRender.cpp:1825
		float32_t lfSin2;

		// CgsDebug3DImmediateRender.cpp:1826
		Vector3 lVertex;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Sin(/* parameters */);
		vec_sel(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::fpu::Sin(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_add(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_cts(/* parameters */);
		vec_ctf(/* parameters */);
		vec_and(/* parameters */);
		vec_and(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_sel(/* parameters */);
		rw::math::fpu::Cos(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::fpu::Cos(/* parameters */);
	}
	rw::math::vpu::operator+(/* parameters */);
}

// CgsDebug3DImmediateRender.cpp:1911
void CgsDev::Debug3DImmediateRender::CalcTextExtent(const char *  lpcText, float32_t  lfSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsDebug3DImmediateRender.cpp:1913
	Vector2 lTextExtent;

	{
		// CgsDebug3DImmediateRender.cpp:1913
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

// CgsDebug3DImmediateRender.cpp:1887
void CgsDev::Debug3DImmediateRender::CalcTextWidth(const char *  lpcText, float32_t  lfSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug3DImmediateRender.cpp:1889
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

// CgsDebug3DImmediateRender.cpp:407
void CgsDev::Debug3DImmediateRender::DispatchVertices() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetState(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetState(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetState(/* parameters */);
	{
	}
	{
	}
	{
	}
}

// CgsDebug3DImmediateRender.cpp:1685
void CgsDev::Debug3DImmediateRender::SetZTestEnable(CgsDev::Debug3DImmediateRender::ZTestEnable  leZTestEnable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetState(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetState(/* parameters */);
	{
	}
}

// CgsDebug3DImmediateRender.cpp:1613
void CgsDev::Debug3DImmediateRender::SetDrawingMode(CgsDev::Debug3DImmediateRender::DrawingMode  leDrawingMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebug3DImmediateRender.cpp:1570
void CgsDev::Debug3DImmediateRender::SetProjectionMode(CgsDev::Debug3DImmediateRender::ProjectionMode  leProjectionMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug3DImmediateRender.cpp:1592
		Matrix44 lMatrix;

		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::Matrix44::SetIdentity(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetState(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::AllocateCommand(/* parameters */);
		CgsGraphics::Im3dRenderBufferBase<CgsGraphics::BasicColouredTexturedVertex>::SetTransform(/* parameters */);
	}
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetState(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	CgsGraphics::Im3dRenderBufferBase<CgsGraphics::BasicColouredTexturedVertex>::SetTransform(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::PostCommand(/* parameters */);
	{
	}
	{
	}
	{
	}
}

// CgsDebug3DImmediateRender.cpp:353
void CgsDev::Debug3DImmediateRender::AddQuad(const rw::math::vpu::Vector3  lTopLeft, const rw::math::vpu::Vector3  lBottomLeft, const rw::math::vpu::Vector3  lBottomRight, const rw::math::vpu::Vector3  lTopRight, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
}

// CgsDebug3DImmediateRender.cpp:1086
void CgsDev::Debug3DImmediateRender::DrawSolidBox(const rw::math::vpu::Vector3  lInf, const rw::math::vpu::Vector3  lSup, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug3DImmediateRender.cpp:1092
		int32_t liIndex;

		// CgsDebug3DImmediateRender.cpp:1095
		Vector3[8] laVertices;

	}
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	{
	}
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	{
	}
	{
	}
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
}

// CgsDebug3DImmediateRender.cpp:548
void CgsDev::Debug3DImmediateRender::DrawPoint(const rw::math::vpu::Vector3  lPoint, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::operator-(/* parameters */);
}

// CgsDebug3DImmediateRender.cpp:1037
void CgsDev::Debug3DImmediateRender::DrawSolidBox(const rw::math::vpu::Vector3  lInf, const rw::math::vpu::Vector3  lSup, const rw::math::vpu::Matrix44Affine &  lTransform, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug3DImmediateRender.cpp:1043
		int32_t liIndex;

		// CgsDebug3DImmediateRender.cpp:1046
		Vector3[8] laVertices;

	}
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	{
	}
	{
	}
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
}

// CgsDebug3DImmediateRender.cpp:598
void CgsDev::Debug3DImmediateRender::DrawSolidQuad(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, const rw::math::vpu::Vector3  lPoint3, const rw::math::vpu::Vector3  lPoint4, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebug3DImmediateRender.cpp:310
void CgsDev::Debug3DImmediateRender::AddTriangle(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, const rw::math::vpu::Vector3  lPoint3, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
}

// CgsDebug3DImmediateRender.cpp:1373
void CgsDev::Debug3DImmediateRender::DrawTriangle(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, const rw::math::vpu::Vector3  lPoint3, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebug3DImmediateRender.cpp:628
void CgsDev::Debug3DImmediateRender::DrawSolidTriangle(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, const rw::math::vpu::Vector3  lPoint3, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebug3DImmediateRender.cpp:276
void CgsDev::Debug3DImmediateRender::AddLine(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
}

// CgsDebug3DImmediateRender.cpp:1315
void CgsDev::Debug3DImmediateRender::DrawCylinder(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, float32_t  lfRadius, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug3DImmediateRender.cpp:1322
		Vector3 lDirection;

		// CgsDebug3DImmediateRender.cpp:1325
		const float32_t KR_ANGLEDELTA;

		// CgsDebug3DImmediateRender.cpp:1328
		Matrix44Affine lRotMatrix;

		// CgsDebug3DImmediateRender.cpp:1331
		Vector3 lOtherVec;

		// CgsDebug3DImmediateRender.cpp:1342
		Vector3 lPosition1;

		// CgsDebug3DImmediateRender.cpp:1343
		Vector3 lPosition2;

	}
	rw::math::vpu::Normalize(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Matrix44AffineFromAxisRotationAngle(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	vec_add(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::Abs<VectorAxisY>(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	vec_and(/* parameters */);
	vec_cts(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	vec_madd(/* parameters */);
	{
	}
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	{
	}
	rw::math::vpu::operator*(/* parameters */);
	{
		// CgsDebug3DImmediateRender.cpp:1346
		float32_t lfAngle;

		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
	}
}

// CgsDebug3DImmediateRender.cpp:1434
void CgsDev::Debug3DImmediateRender::DrawVolume(const rw::collision::CylinderVolume *  lpVolume, const rw::math::vpu::Matrix44Affine &  lTransformMatrix, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug3DImmediateRender.cpp:1437
		Vector3 lStart;

		// CgsDebug3DImmediateRender.cpp:1438
		Vector3 lEnd;

		rw::collision::CylinderVolume::GetHalfHeight(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44Affine::At(/* parameters */);
	rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
}

// CgsDebug3DImmediateRender.cpp:1193
void CgsDev::Debug3DImmediateRender::DrawSolidArrow(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug3DImmediateRender.cpp:1203
		Vector3 lDiff;

		// CgsDebug3DImmediateRender.cpp:1204
		float32_t lfLength;

		// CgsDebug3DImmediateRender.cpp:1210
		Vector3 lArrowRoot;

		// CgsDebug3DImmediateRender.cpp:1213
		Vector3 lCross;

		// CgsDebug3DImmediateRender.cpp:1224
		Vector3 lRight;

		// CgsDebug3DImmediateRender.cpp:1225
		Vector3 lUp;

	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::NormalizeReturnMagnitude(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Abs<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::GetVector3_XAxis(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::GetVector3_YAxis(/* parameters */);
}

// CgsDebug3DImmediateRender.cpp:993
void CgsDev::Debug3DImmediateRender::DrawBox(const rw::math::vpu::Vector3  lInf, const rw::math::vpu::Vector3  lSup, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug3DImmediateRender.cpp:999
		int32_t liIndex;

		// CgsDebug3DImmediateRender.cpp:1002
		Vector3[8] laVertices;

	}
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	{
	}
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	{
	}
	{
	}
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
}

// CgsDebug3DImmediateRender.cpp:948
void CgsDev::Debug3DImmediateRender::DrawBox(const rw::math::vpu::Vector3  lInf, const rw::math::vpu::Vector3  lSup, const rw::math::vpu::Matrix44Affine &  lTransform, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug3DImmediateRender.cpp:954
		int32_t liIndex;

		// CgsDebug3DImmediateRender.cpp:957
		Vector3[8] laVertices;

	}
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	{
	}
	{
	}
	Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
}

// CgsDebug3DImmediateRender.cpp:1456
void CgsDev::Debug3DImmediateRender::DrawVolume(const rw::collision::BoxVolume *  lpVolume, const rw::math::vpu::Matrix44Affine &  lTransformMatrix, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug3DImmediateRender.cpp:1458
		Vector3 lDimensions;

		rw::math::vpu::operator-(/* parameters */);
		rw::collision::BoxVolume::GetDimensions(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
}

// CgsDebug3DImmediateRender.cpp:895
void CgsDev::Debug3DImmediateRender::DrawCircle(const rw::math::vpu::Vector3  lPosition, const rw::math::vpu::Vector3  lDirection, float32_t  lfRadius, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug3DImmediateRender.cpp:902
		const float32_t KR_ANGLEDELTA;

		// CgsDebug3DImmediateRender.cpp:905
		Matrix44Affine lRotMatrix;

		// CgsDebug3DImmediateRender.cpp:908
		Vector3 lOtherVec;

		// CgsDebug3DImmediateRender.cpp:919
		Vector3 lPosition1;

		// CgsDebug3DImmediateRender.cpp:920
		Vector3 lPosition2;

		rw::math::vpu::Matrix44AffineFromAxisRotationAngle(/* parameters */);
	}
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::SinCos(/* parameters */);
	vec_add(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	vec_sel(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	vec_madd(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	rw::math::vpu::Abs<VectorAxisY>(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	{
		// CgsDebug3DImmediateRender.cpp:923
		float32_t lfAngle;

		rw::math::vpu::TransformPoint(/* parameters */);
	}
}

// CgsDebug3DImmediateRender.cpp:1129
void CgsDev::Debug3DImmediateRender::DrawArrow(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug3DImmediateRender.cpp:1139
		Vector3 lDiff;

		// CgsDebug3DImmediateRender.cpp:1140
		float32_t lfLength;

		// CgsDebug3DImmediateRender.cpp:1146
		Vector3 lArrowRoot;

		// CgsDebug3DImmediateRender.cpp:1149
		Vector3 lCross;

		// CgsDebug3DImmediateRender.cpp:1160
		Vector3 lRight;

		// CgsDebug3DImmediateRender.cpp:1161
		Vector3 lUp;

	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::NormalizeReturnMagnitude(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Abs<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::GetVector3_XAxis(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::GetVector3_YAxis(/* parameters */);
}

// CgsDebug3DImmediateRender.cpp:825
void CgsDev::Debug3DImmediateRender::DrawHollowSphere(const rw::math::vpu::Vector3  lPosition, float32_t  lfRadius, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug3DImmediateRender.cpp:832
		Vector3 lDirection;

	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
		{
		}
	}
}

// CgsDebug3DImmediateRender.cpp:1254
void CgsDev::Debug3DImmediateRender::DrawCapsule(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, float32_t  lfRadius, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug3DImmediateRender.cpp:1261
		Vector3 lDirection;

		// CgsDebug3DImmediateRender.cpp:1264
		const float32_t KR_ANGLEDELTA;

		// CgsDebug3DImmediateRender.cpp:1267
		Matrix44Affine lRotMatrix;

		// CgsDebug3DImmediateRender.cpp:1270
		Vector3 lOtherVec;

		// CgsDebug3DImmediateRender.cpp:1281
		Vector3 lPosition1;

		// CgsDebug3DImmediateRender.cpp:1282
		Vector3 lPosition2;

	}
	rw::math::vpu::Normalize(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Matrix44AffineFromAxisRotationAngle(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	vec_add(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::Abs<VectorAxisY>(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	vec_and(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	vec_madd(/* parameters */);
	{
	}
	vec_cts(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	{
	}
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
		// CgsDebug3DImmediateRender.cpp:1285
		float32_t lfAngle;

		rw::math::vpu::TransformPoint(/* parameters */);
	}
}

// CgsDebug3DImmediateRender.cpp:1395
void CgsDev::Debug3DImmediateRender::DrawVolume(const rw::collision::CapsuleVolume *  lpVolume, const rw::math::vpu::Matrix44Affine &  lTransformMatrix, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug3DImmediateRender.cpp:1398
		Vector3 lStart;

		// CgsDebug3DImmediateRender.cpp:1399
		Vector3 lEnd;

		rw::collision::CapsuleVolume::GetHalfHeight(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44Affine::At(/* parameters */);
	rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
}

// CgsDebug3DImmediateRender.cpp:853
void CgsDev::Debug3DImmediateRender::DrawCircle(const rw::math::vpu::Matrix44Affine &  lMatrix, float32_t  lfRadius, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug3DImmediateRender.cpp:860
		const float32_t KR_ANGLEDELTA;

		// CgsDebug3DImmediateRender.cpp:863
		Matrix44Affine lRotMatrix;

		// CgsDebug3DImmediateRender.cpp:866
		Vector3 lPosition1;

		// CgsDebug3DImmediateRender.cpp:867
		Vector3 lPosition2;

	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Matrix44AffineFromAxisRotationAngle(/* parameters */);
	vec_add(/* parameters */);
	vec_sel(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	vec_cts(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	{
		// CgsDebug3DImmediateRender.cpp:870
		float32_t lfAngle;

		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
	}
}

// CgsDebug3DImmediateRender.cpp:726
void CgsDev::Debug3DImmediateRender::DrawAxis(const rw::math::vpu::Matrix44Affine &  lMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
}

// CgsDebug3DImmediateRender.cpp:700
void CgsDev::Debug3DImmediateRender::DrawAngleRad(const rw::math::vpu::Vector3  lPosition, float32_t  lfAngle, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug3DImmediateRender.cpp:707
		Vector4 lDir4;

		// CgsDebug3DImmediateRender.cpp:710
		Vector3 lDir;

	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::SinCosFast(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	vec_and(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_cts(/* parameters */);
	rw::math::vpu::Cos(/* parameters */);
	vec_ctf(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
}

// CgsDebug3DImmediateRender.cpp:680
void CgsDev::Debug3DImmediateRender::DrawAngleDeg(const rw::math::vpu::Vector3  lPosition, float32_t  lfAngle, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebug3DImmediateRender.cpp:569
void CgsDev::Debug3DImmediateRender::DrawQuad(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, const rw::math::vpu::Vector3  lPoint3, const rw::math::vpu::Vector3  lPoint4, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebug3DImmediateRender.cpp:526
void CgsDev::Debug3DImmediateRender::Draw2DLineForVectorFont(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebug3DImmediateRender.cpp:503
void CgsDev::Debug3DImmediateRender::DrawLine(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebug3DImmediateRender.cpp:658
void CgsDev::Debug3DImmediateRender::DrawHollowTriangle(const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, const rw::math::vpu::Vector3  lPoint3, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebug3DImmediateRender.cpp:246
void CgsDev::Debug3DImmediateRender::AddVertex(const rw::math::vpu::Vector3  lPoint, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
}

// CgsDebug3DImmediateRender.cpp:788
void CgsDev::Debug3DImmediateRender::DrawSolidSphere(const rw::math::vpu::Vector3  lPosition, float32_t  lfRadius, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug3DImmediateRender.cpp:796
		Vector3[34] laSphereVertices;

		// CgsDebug3DImmediateRender.cpp:800
		int32_t liIndex;

	}
}

// CgsDebug3DImmediateRender.cpp:752
void CgsDev::Debug3DImmediateRender::DrawSphere(const rw::math::vpu::Vector3  lPosition, float32_t  lfRadius, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug3DImmediateRender.cpp:759
		Vector3[34] laSphereVertices;

		// CgsDebug3DImmediateRender.cpp:763
		int32_t liIndex;

	}
}

// CgsDebug3DImmediateRender.cpp:1417
void CgsDev::Debug3DImmediateRender::DrawVolume(const rw::collision::SphereVolume *  lpVolume, const rw::math::vpu::Matrix44Affine &  lTransformMatrix, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebug3DImmediateRender.cpp:208
void CgsDev::Debug3DImmediateRender::End() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebug3DImmediateRender.cpp:1546
void CgsDev::Debug3DImmediateRender::SetDebugRenderStates() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetState(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetState(/* parameters */);
	{
	}
	{
	}
}

// CgsDebug3DImmediateRender.cpp:174
void CgsDev::Debug3DImmediateRender::Begin(const const rw::math::vpu::Matrix44 &  lViewProjectionMatrix, const rw::math::vpu::Vector3  lCameraPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44::operator=(/* parameters */);
}

// CgsDebug3DImmediateRender.cpp:441
void CgsDev::Debug3DImmediateRender::DrawText(const rw::math::vpu::Vector3  lPoint, const char *  lpcText, float32_t  lfSize, RGBA  lColourRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebug3DImmediateRender.cpp:445
		TextObject lTextObject;

		// CgsDebug3DImmediateRender.cpp:446
		Vector2 lBottomRight;

		// CgsDebug3DImmediateRender.cpp:451
		Vector3 lScreenPoint;

	}
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::operator< <VectorAxisZ>(/* parameters */);
	operator/=<VectorAxisZ>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator*=(/* parameters */);
	operator/=<VectorAxisZ>(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
}

// CgsDebug3DImmediateRender.cpp:35
// CgsDebug3DImmediateRender.cpp:41
// CgsDebug3DImmediateRender.cpp:38
// CgsDebug3DImmediateRender.cpp:45
// CgsDebug3DImmediateRender.cpp:54
// CgsDebug3DImmediateRender.cpp:66
// CgsDebug3DImmediateRender.cpp:69
// CgsDebug3DImmediateRender.cpp:72
