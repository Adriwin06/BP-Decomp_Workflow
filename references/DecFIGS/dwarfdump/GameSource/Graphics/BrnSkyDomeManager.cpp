// BrnSkyDomeManager.cpp:35
void BrnSkyDomeManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSkyDomeManager.cpp:93
void BrnSkyDomeManager::Release(rw::IResourceAllocator *  lpAlloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSkyDomeManager.cpp:50
void BrnSkyDomeManager::RaySphereDistance(const const Vector3Template<float> &  lDirection, const const Vector3Template<float> &  lSphereCenter, float  lSphereRadius) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSkyDomeManager.cpp:54
		float lCenterDotDirection;

		// BrnSkyDomeManager.cpp:55
		float lCenterDistanceSqr;

		// BrnSkyDomeManager.cpp:56
		float lRadiusSqr;

		// BrnSkyDomeManager.cpp:57
		float MSqr;

		// BrnSkyDomeManager.cpp:58
		float Q;

	}
	rw::math::fpu::Magnitude<float>(/* parameters */);
	rw::math::fpu::IsSimilar(/* parameters */);
	rw::math::fpu::Dot<float>(/* parameters */);
	rw::math::fpu::Dot<float>(/* parameters */);
	rw::math::fpu::Sqrt<float>(/* parameters */);
}

// BrnSkyDomeManager.cpp:111
void BrnSkyDomeManager::CreateGeometry(BrnGraphics::Im3dSkyDome *  lpRenderer, rw::IResourceAllocator *  lpAlloc, renderengine::VertexBuffer **  lppVertexBuffer, IndexBuffer **  lppIndexBuffer, DrawIndexedParameters *  lpDrawIndexedParams, int32_t  liSliceCount, int32_t  liSectorCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSkyDomeManager.cpp:114
		Im2dTransform::Matrix33 rotY;

		// BrnSkyDomeManager.cpp:115
		Im2dTransform::Matrix33 rotYD;

		// BrnSkyDomeManager.cpp:116
		Im2dTransform::Matrix33 rotYDH;

		// BrnSkyDomeManager.cpp:118
		SmoothStep::Vector3 lSkyCenter;

		// BrnSkyDomeManager.cpp:119
		SmoothStep::Vector2 lSkyRadii;

		// BrnSkyDomeManager.cpp:123
		float32_t lfDAng;

		// BrnSkyDomeManager.cpp:128
		float32_t lfF;

		// BrnSkyDomeManager.cpp:129
		float32_t lfFD;

		// BrnSkyDomeManager.cpp:131
		int32_t liVertex;

		// BrnSkyDomeManager.cpp:132
		int32_t liPoly;

		// BrnSkyDomeManager.cpp:133
		int32_t liInd;

		// BrnSkyDomeManager.cpp:134
		int32_t liSector;

		// BrnSkyDomeManager.cpp:135
		int32_t liSlice;

		// BrnSkyDomeManager.cpp:143
		int32_t liVertexCount;

		// BrnSkyDomeManager.cpp:144
		int32_t liIndexCount;

		// BrnSkyDomeManager.cpp:167
		renderengine::VertexBuffer::BatchIterator batchIterator;

		// BrnSkyDomeManager.cpp:169
		Im3dSkyDomeVertex * lpaWriteVertex;

		// BrnSkyDomeManager.cpp:253
		int32_t itp;

		// BrnSkyDomeManager.cpp:254
		int32_t i00;

		// BrnSkyDomeManager.cpp:254
		int32_t i10;

		// BrnSkyDomeManager.cpp:256
		renderengine::IndexBuffer::Locked lLockedBuffer;

		// BrnSkyDomeManager.cpp:258
		uint16_t * lpu16DestIndices;

	}
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Matrix33Template<float>::SetIdentity(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Set(/* parameters */);
	operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	{
		// BrnSkyDomeManager.cpp:148
		renderengine::VertexBuffer::Parameters lVertexBufferParams;

		// BrnSkyDomeManager.cpp:152
		ResourceDescriptor vbResDesc;

		// BrnSkyDomeManager.cpp:153
		Resource vbResource;

	}
	renderengine::VertexBuffer::Parameters::Parameters(/* parameters */);
	renderengine::VertexBuffer::Parameters::SetType(/* parameters */);
	renderengine::VertexBuffer::Parameters::SetBufferSize(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	{
		// BrnSkyDomeManager.cpp:208
		SmoothStep::Vector3 lNrm;

		// BrnSkyDomeManager.cpp:209
		float32_t lrDistance;

		rw::math::fpu::Vector3Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	}
	{
		// BrnSkyDomeManager.cpp:234
		renderengine::IndexBuffer::Parameters lIndexBufferParams;

		// BrnSkyDomeManager.cpp:240
		ResourceDescriptor ibResDesc;

		// BrnSkyDomeManager.cpp:241
		Resource ibResource;

	}
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	renderengine::IndexBuffer::Parameters::Parameters(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	renderengine::IndexBuffer::Parameters::SetType(/* parameters */);
	renderengine::IndexBuffer::Parameters::SetDepth(/* parameters */);
	renderengine::IndexBuffer::Parameters::SetNumIndices(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	renderengine::DrawIndexedParameters::SetIndexCount(/* parameters */);
	renderengine::DrawIndexedParameters::SetPrimitiveType(/* parameters */);
	renderengine::DrawIndexedParameters::SetStartIndex(/* parameters */);
	{
		// BrnSkyDomeManager.cpp:173
		float32_t lfAng;

		// BrnSkyDomeManager.cpp:174
		float32_t lfS;

		// BrnSkyDomeManager.cpp:174
		float32_t lfC;

		// BrnSkyDomeManager.cpp:176
		SmoothStep::Vector3 lNrm_;

		operator=(/* parameters */);
	}
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	std(/* parameters */);
	std(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Set(/* parameters */);
	rw::math::fpu::Matrix33Template<float>::SetIdentity(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Set(/* parameters */);
	{
		// BrnSkyDomeManager.cpp:182
		SmoothStep::Vector3 lNrm;

		// BrnSkyDomeManager.cpp:183
		float32_t lrDistance;

		rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	}
	operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
}

// BrnSkyDomeManager.cpp:66
void BrnSkyDomeManager::Prepare(BrnGraphics::Im3dSkyDome *  lpRenderer, rw::IResourceAllocator *  lpAlloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSkyDomeManager.cpp:454
void BrnSkyDomeManager::RenderToEnvironmentMap(BrnGraphics::EEnvironmentMapFace  leFace, BrnGraphics::Im3dSkyDome *  lpRenderer, const Texture *  lpLayer0Density, const Texture *  lpLayer0Lighting, const BrnShaderConstantsFrame *  lpShaderConstants) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSkyDomeManager.cpp:462
		Matrix44 lViewProjectionMatrix;

		// BrnSkyDomeManager.cpp:463
		Vector3 lViewPosition;

		// BrnSkyDomeManager.cpp:464
		Vector3 lKeyLightDirection;

		// BrnSkyDomeManager.cpp:466
		Vector4 lSky_TopColourDrk;

		// BrnSkyDomeManager.cpp:467
		Vector4 lSky_HorColourPow;

		// BrnSkyDomeManager.cpp:468
		Vector4 lSky_SunColourPow;

		// BrnSkyDomeManager.cpp:469
		Vector3 lSky_HorBleedSclPow;

		// BrnSkyDomeManager.cpp:471
		Vector4 lCloudDarkColour0;

		// BrnSkyDomeManager.cpp:472
		Vector4 lCloudLiteColour0;

		// BrnSkyDomeManager.cpp:473
		Vector4 lCloudTextureScaleAndOffsets0;

		// BrnSkyDomeManager.cpp:475
		Vector4 lCloudLayerDensity;

		// BrnSkyDomeManager.cpp:476
		Vector4 lCloudLayerInvFeather;

		// BrnSkyDomeManager.cpp:477
		Vector4 lCloudLayerOpacity;

		// BrnSkyDomeManager.cpp:479
		Vector4 lFogScattering;

		// BrnSkyDomeManager.cpp:481
		float32_t lfCloudDistanceCurve;

		// BrnSkyDomeManager.cpp:483
		Vector4 lCloudDomeRanges;

		// BrnSkyDomeManager.cpp:485
		Matrix44 lWorldTransform;

		// BrnSkyDomeManager.cpp:492
		VecFloat lSkyScale;

		// BrnSkyDomeManager.cpp:493
		Vector3Plus lViewPositionAndSkyScale;

	}
	BrnShaderConstantsFrame::GetEnvMapViewProjectionMatrix(/* parameters */);
	BrnShaderConstantsFrame::GetEnvMapViewPosition(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	BrnShaderConstantsFrame::GetKeyLightDirection(/* parameters */);
	BrnShaderConstantsFrame::GetTopColourDrk(/* parameters */);
	BrnShaderConstantsFrame::GetHorColourPow(/* parameters */);
	BrnShaderConstantsFrame::GetSunColourPow(/* parameters */);
	BrnShaderConstantsFrame::GetHorBleedSclPow(/* parameters */);
	BrnShaderConstantsFrame::GetCloudDarkColour0(/* parameters */);
	BrnShaderConstantsFrame::GetCloudLiteColour0(/* parameters */);
	BrnShaderConstantsFrame::GetCloudTextureScaleAndOffsets0(/* parameters */);
	BrnShaderConstantsFrame::GetCloudLayerDensity(/* parameters */);
	BrnShaderConstantsFrame::GetCloudLayerInvFeather(/* parameters */);
	BrnShaderConstantsFrame::GetCloudLayerOpacity(/* parameters */);
	BrnShaderConstantsFrame::GetFogScattering(/* parameters */);
	BrnShaderConstantsFrame::GetCloudDistanceCurve(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::BeginRendering(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Matrix44::SetIdentity(/* parameters */);
	shadow::Device::ResetShadowing(/* parameters */);
	{
	}
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	shadow::Device::SetVertexDescriptor(/* parameters */);
	cellGcmSetVertexDataArrayInline(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetResource(/* parameters */);
	shadow::Device::SetResource(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::GetVecFloat_Two(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	shadow::Device::Draw(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::EndRendering(/* parameters */);
	shadow::Device::ResetShadowing(/* parameters */);
	{
	}
}

// BrnSkyDomeManager.cpp:362
void BrnSkyDomeManager::Render(BrnGraphics::Im3dSkyDome *  lpRenderer, const Texture *  lpLayer0Density, const Texture *  lpLayer0Lighting, const BrnShaderConstantsFrame *  lpShaderConstants) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSkyDomeManager.cpp:370
		Matrix44 lViewProjectionMatrix;

		// BrnSkyDomeManager.cpp:371
		Vector3 lViewPosition;

		// BrnSkyDomeManager.cpp:372
		Vector3 lKeyLightDirection;

		// BrnSkyDomeManager.cpp:374
		Vector4 lSky_TopColourDrk;

		// BrnSkyDomeManager.cpp:375
		Vector4 lSky_HorColourPow;

		// BrnSkyDomeManager.cpp:376
		Vector4 lSky_SunColourPow;

		// BrnSkyDomeManager.cpp:377
		Vector3 lSky_HorBleedSclPow;

		// BrnSkyDomeManager.cpp:379
		Vector4 lCloudDarkColour0;

		// BrnSkyDomeManager.cpp:380
		Vector4 lCloudLiteColour0;

		// BrnSkyDomeManager.cpp:381
		Vector4 lCloudTextureScaleAndOffsets0;

		// BrnSkyDomeManager.cpp:383
		Vector4 lCloudLayerDensity;

		// BrnSkyDomeManager.cpp:384
		Vector4 lCloudLayerInvFeather;

		// BrnSkyDomeManager.cpp:385
		Vector4 lCloudLayerOpacity;

		// BrnSkyDomeManager.cpp:387
		Vector4 lFogScattering;

		// BrnSkyDomeManager.cpp:389
		float32_t lfCloudDistanceCurve;

		// BrnSkyDomeManager.cpp:391
		Vector4 lCloudDomeRanges;

		// BrnSkyDomeManager.cpp:393
		Matrix44 lWorldTransform;

		// BrnSkyDomeManager.cpp:401
		VecFloat lSkyScale;

		// BrnSkyDomeManager.cpp:402
		Vector3Plus lViewPositionAndSkyScale;

	}
	BrnShaderConstantsFrame::GetViewProjectionMatrix(/* parameters */);
	BrnShaderConstantsFrame::GetViewPosition(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	BrnShaderConstantsFrame::GetKeyLightDirection(/* parameters */);
	BrnShaderConstantsFrame::GetTopColourDrk(/* parameters */);
	BrnShaderConstantsFrame::GetHorColourPow(/* parameters */);
	BrnShaderConstantsFrame::GetSunColourPow(/* parameters */);
	BrnShaderConstantsFrame::GetHorBleedSclPow(/* parameters */);
	BrnShaderConstantsFrame::GetCloudDarkColour0(/* parameters */);
	BrnShaderConstantsFrame::GetCloudLiteColour0(/* parameters */);
	BrnShaderConstantsFrame::GetCloudTextureScaleAndOffsets0(/* parameters */);
	BrnShaderConstantsFrame::GetCloudLayerDensity(/* parameters */);
	BrnShaderConstantsFrame::GetCloudLayerInvFeather(/* parameters */);
	BrnShaderConstantsFrame::GetCloudLayerOpacity(/* parameters */);
	BrnShaderConstantsFrame::GetFogScattering(/* parameters */);
	BrnShaderConstantsFrame::GetCloudDistanceCurve(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::BeginRendering(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Matrix44::SetIdentity(/* parameters */);
	shadow::Device::ResetShadowing(/* parameters */);
	{
	}
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	shadow::Device::SetVertexDescriptor(/* parameters */);
	cellGcmSetVertexDataArrayInline(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetResource(/* parameters */);
	shadow::Device::SetResource(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::GetVecFloat_Two(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	shadow::Device::Draw(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::EndRendering(/* parameters */);
	shadow::Device::ResetShadowing(/* parameters */);
	{
	}
}

// _built-in_
namespace :: {
	// BrnSkyDomeManager.cpp:22
	const uint32_t KI_MAINSCREEN_SLICE_COUNT = 22;

	// BrnSkyDomeManager.cpp:23
	const uint32_t KI_MAINSCREEN_SECTOR_COUNT = 45;

	// BrnSkyDomeManager.cpp:25
	const uint32_t KI_CUBE_MAP_SLICE_COUNT = 5;

	// BrnSkyDomeManager.cpp:26
	const uint32_t KI_CUBE_MAP_SECTOR_COUNT = 10;

}

