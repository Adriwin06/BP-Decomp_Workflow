// ParticleRender.cpp:274
void cParticleRender::GameInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleRender.cpp:285
void cParticleRender::GameDeInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleRender.cpp:263
void cParticleRender::AppDeInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleRender.cpp:241
void cParticleRender::AppInit(EA::Allocator::ITaggedAllocator *  apAllocator, iParticleRender *  apRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleRender.cpp:243
		U32 i;

		cParticleRenderMaterial::AppInit(/* parameters */);
	}
}

// ParticleRender.cpp:63
void iParticleRender::Render(const EffectsVertexBufferIterator &  lVertexIterator, RenderedParticle *const  apParticles, const cMatrix *const  pMatrices, const U32  aParticleCount, const U32  aFirstIndex, const cParticleEmitter *const  apEmitter, const cLionFog *const  lpFog, const const cTime &  lCurrentLocatorTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleRender.cpp:83
void iParticleRender::Render(const EffectsVertexBufferIterator &  lVertexIterator, RenderedParticle *const  apParticles, const cVector *const  pVectors, const U32  aParticleCount, const U32  aFirstIndex, const cParticleEmitter *const  apEmitter, const cLionFog *const  lpFog, const const cTime &  lCurrentLocatorTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleRender.cpp:93
void iParticleRender::TextureRegister(cParticleMaterial *  apMaterial, char *  apTextureName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleRender.cpp:103
void iParticleRender::TextureUnRegister(cParticleMaterial *  apMaterial) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleRender.cpp:113
void iParticleRender::RenderGroupBegin(const const cParticleMaterial &  lMaterial) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleRender.cpp:123
void iParticleRender::RenderGroupEnd() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleRender.cpp:135
void iParticleRender::RenderGroupBeginLite(const const cParticleMaterial &  lMaterial) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleRender.cpp:145
void iParticleRender::RenderGroupEndLite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleRender.cpp:164
void iParticleRender::BeginRendering(const float32_t  lfWhiteLevel, const bool8_t  lbEnableZFade, const float32_t  lfNearPlane, const float32_t  lfFarPlane, const float32_t  lfFadeDistance, const float32_t  lfDepthSamplerOffsetU, const float32_t  lfDepthSamplerOffsetV, renderengine::TextureState *const  lpDepthTextureState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleRender.cpp:181
void iParticleRender::EndRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleRender.cpp:191
void iParticleRender::GetCameraMatrix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleRender.cpp:206
void iParticleRender::GetPackedFrustumLrtb() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleRender.cpp:222
void iParticleRender::GetVertexStride(const const cParticleMaterial &  lMaterial) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleRender.cpp:874
void iParticleRender::IsVisible(const const cVector &  aPos, FP32  radius, const U32  aLodGroup) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleRender.cpp:876
		bool lRes;

		// ParticleRender.cpp:877
		cVector lPath;

		// ParticleRender.cpp:878
		FP32 lLen;

		// ParticleRender.cpp:880
		const const cMatrix & lMat;

	}
	cVector::operator-(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::Length(/* parameters */);
	cVector::GetX(/* parameters */);
	cParticleRender::Instance(/* parameters */);
}

// ParticleRender.cpp:869
void iParticleRender::IsVisible(const const cVector &  aPos, cParticleEmitter *  apEmitter, const U32  aLodGroup) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleRender.cpp:375
void cParticleRender::Dispatch(renderengine::VertexBuffer *const  lpVertexBuffer, const const LionBatchArray &  lBatchArray, const float32_t  lfWhiteLevel, const bool8_t  lbEnableZFade, const float32_t  lfNearPlane, const float32_t  lfFarPlane, const float32_t  lfDepthFadeDistance, const float32_t  lfDepthSamplerOffsetU, const float32_t  lfDepthSamplerOffsetV, renderengine::TextureState *const  lpDepthTextureState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleRender.cpp:390
		DrawParameters lDrawParams;

		// ParticleRender.cpp:396
		const cParticleMaterial * lpMaterial;

		CgsContainers::Array<LionBatch,512u>::GetLength(/* parameters */);
	}
	shadow::Device::ResetShadowing(/* parameters */);
	shadow::Device::SetResource(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	renderengine::DrawParameters::SetPrimitiveType(/* parameters */);
	{
		// ParticleRender.cpp:407
		uint32_t luCount;

		{
			// ParticleRender.cpp:409
			const const LionBatch & lBatch;

			CgsContainers::Array<LionBatch,512u>::operator[](/* parameters */);
			renderengine::DrawParameters::SetStartVertex(/* parameters */);
			shadow::Device::Draw(/* parameters */);
			renderengine::DrawParameters::SetVertexCount(/* parameters */);
		}
		CgsContainers::Array<LionBatch,512u>::GetLength(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

// ParticleRender.cpp:656
void cParticleRender::EmitterCubeRender(const EffectsVertexBufferLocked &  lVertexBuffer, const LionBatchArray &  lBatchArray, cParticleEmitter *  apEmitter, const const cTime &  aTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleRender.cpp:660
		PerfMonCpuHelper lMonitor;

		// ParticleRender.cpp:663
		cParticleBucket * lpBucket;

		// ParticleRender.cpp:664
		RenderedParticle[32] lParticle;

		// ParticleRender.cpp:665
		cMatrix[32] lParticleMatrices;

		// ParticleRender.cpp:666
		cVector[32] lParticleVectors;

		// ParticleRender.cpp:668
		U32 lQuadCount;

		// ParticleRender.cpp:669
		U32 lTintRGBA;

		// ParticleRender.cpp:670
		FP32 lX0;

		// ParticleRender.cpp:670
		FP32 lX1;

		// ParticleRender.cpp:671
		FP32 lY0;

		// ParticleRender.cpp:671
		FP32 lY1;

		// ParticleRender.cpp:672
		FP32 lZ0;

		// ParticleRender.cpp:672
		FP32 lZ1;

		// ParticleRender.cpp:673
		FP32 lDistDiv;

		// ParticleRender.cpp:674
		FP32 lDiam;

		// ParticleRender.cpp:675
		FP32 lRadius;

		// ParticleRender.cpp:676
		cVector lMid;

		// ParticleRender.cpp:678
		const const cTime & lCurrentLocatorTime;

		// ParticleRender.cpp:681
		const const cMatrix & lBindingsLocatorMat;

		// ParticleRender.cpp:706
		const const cParticleMaterial & lMaterial;

		// ParticleRender.cpp:707
		const uint32_t luVertexStride;

		// ParticleRender.cpp:708
		EffectsVertexBufferIterator lVertexIterator;

		// ParticleRender.cpp:709
		LionBatch lBatch;

	}
	CgsDev::PerfMonCpuHelper::PerfMonCpuHelper(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::operator*(/* parameters */);
	cVector::cVector(/* parameters */);
	cVector::operator+=(/* parameters */);
	cVector::GetX(/* parameters */);
	cVector::GetY(/* parameters */);
	cParticleEmitter::GetBucket(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::GetZ(/* parameters */);
	cVector::SetX(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::GetX(/* parameters */);
	cVector::GetY(/* parameters */);
	{
		// ParticleRender.cpp:731
		U32 luQuad;

		{
			// ParticleRender.cpp:733
			FP32 lTX;

			// ParticleRender.cpp:753
			FP32 lTY;

			// ParticleRender.cpp:773
			FP32 lTZ;

			rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
			qfmodf(/* parameters */);
			rw::math::vpu::Vector3Plus::SetX(/* parameters */);
			rw::math::vpu::Vector3Plus::SetX(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
			qfmodf(/* parameters */);
			rw::math::vpu::Vector3Plus::SetY(/* parameters */);
			rw::math::vpu::Vector3Plus::SetY(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
			qfmodf(/* parameters */);
			rw::math::vpu::Vector3Plus::SetZ(/* parameters */);
			rw::math::vpu::Vector3Plus::SetZ(/* parameters */);
		}
	}
	{
		// ParticleRender.cpp:796
		unsigned int n;

		{
			// ParticleRender.cpp:798
			FP32 lDist;

			// ParticleRender.cpp:802
			FP32 lAlpha;

			rw::math::vpu::operator-(/* parameters */);
		}
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		fmin2(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisW>::operator float(/* parameters */);
		rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	}
	cParticleBucket::GetEmitterNext(/* parameters */);
	CgsContainers::Array<LionBatch,512u>::Append(/* parameters */);
	CgsDev::PerfMonCpuHelper::~PerfMonCpuHelper(/* parameters */);
	qfmodf(/* parameters */);
	qfmodf(/* parameters */);
	qfmodf(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// ParticleRender.cpp:459
void cParticleRender::EmitterRender(const EffectsVertexBufferLocked &  lVertexBuffer, const LionBatchArray &  lBatchArray, cParticleEmitter *  apEmitter, const const cTime &  aTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleRender.cpp:463
		PerfMonCpuHelper lMonitor;

		// ParticleRender.cpp:466
		const const cParticleMaterial & lMaterial;

		// ParticleRender.cpp:471
		const const cTime & lCurrentLocatorTime;

		// ParticleRender.cpp:474
		const const cMatrix & lBindingsLocatorMat;

	}
	CgsDev::PerfMonCpuHelper::PerfMonCpuHelper(/* parameters */);
	{
		// ParticleRender.cpp:480
		cLionFog * lpFog;

		// ParticleRender.cpp:482
		cParticleBucket * lpBucket;

		cParticleEmitter::GetBucket(/* parameters */);
	}
	{
		// ParticleRender.cpp:489
		const uint32_t luVertexStride;

		// ParticleRender.cpp:490
		EffectsVertexBufferIterator lVertexIterator;

		// ParticleRender.cpp:491
		LionBatch lBatch;

		{
			// ParticleRender.cpp:501
			RenderedParticle[32] lParticle;

			// ParticleRender.cpp:502
			cMatrix[32] lParticleMatrices;

			// ParticleRender.cpp:504
			U32 lTotalNumParticlesSimulated;

			cParticleBucket::GetEmitterNext(/* parameters */);
		}
	}
	CgsDev::PerfMonCpuHelper::~PerfMonCpuHelper(/* parameters */);
	CgsContainers::Array<LionBatch,512u>::Append(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// ParticleRender.cpp:543
		RenderedParticle[32] lParticle;

		// ParticleRender.cpp:544
		cVector[32] lParticleVectors;

		// ParticleRender.cpp:546
		U32 lTotalNumParticlesSimulated;

		cParticleBucket::GetEmitterNext(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// ParticleRender.cpp:585
		RenderedParticle[32] lParticle;

		// ParticleRender.cpp:586
		cMatrix[32] lParticleMatrices;

		// ParticleRender.cpp:589
		U32 lTotalNumParticlesSimulated;

		cParticleBucket::GetEmitterNext(/* parameters */);
	}
}

// ParticleRender.cpp:299
void cParticleRender::Render(const EffectsVertexBufferLocked &  lVertexBuffer, const LionBatchArray &  lBatchArray, const cParticleEmitterManager &  lEmitterManager, const const cTime &  aTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ParticleRender.cpp:304
		const const cMatrix & lMat;

		// ParticleRender.cpp:312
		cParticleEmitter * lpEmitter;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	cParticleEmitterManager::GetpUsed(/* parameters */);
	cVector::operator=(/* parameters */);
	cVector::operator=(/* parameters */);
	{
		// ParticleRender.cpp:320
		const const cMatrix & lEmitterMatrix;

		// ParticleRender.cpp:323
		cVector lEmitterDistFromCamera;

		cVector::operator-(/* parameters */);
	}
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	cMatrix::GetAxisW(/* parameters */);
	{
		// ParticleRender.cpp:330
		const const rw::math::vpu::Matrix44 & lPackedFrustumLrtb;

		// ParticleRender.cpp:331
		const rw::math::vpu::Vector3 lEmitterPos;

		// ParticleRender.cpp:332
		const rw::math::vpu::Vector4 lResult;

		// ParticleRender.cpp:336
		const Mask4 lResultMask;

		// ParticleRender.cpp:337
		const MaskScalar lCombinedMask;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
		rw::math::vpu::CompGreaterThan(/* parameters */);
		rw::math::vpu::CompAllTrue(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::MaskScalar::GetBool(/* parameters */);
		{
			// ParticleRender.cpp:341
			const float32_t lfDistanceInFrontOfCamera;

		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// _built-in_
namespace :: {
	// ParticleRender.cpp:43
	extern FP32 dPARTICLE_CUBE_ASCALE;

	// ParticleRender.cpp:46
	const float32_t KF_LION_EMITTER_RADIUS;

	// ParticleRender.cpp:47
	const VecFloat KV_LION_EMITTER_RADIUS;

}

