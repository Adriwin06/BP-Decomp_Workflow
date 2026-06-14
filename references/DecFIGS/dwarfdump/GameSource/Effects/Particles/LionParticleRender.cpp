// LionParticleRender.cpp:40
struct BlendStateMapEntry {
	// LionParticleRender.cpp:42
	uint32_t muHash;

	// LionParticleRender.cpp:43
	BlendState * mpBlendState;

}

// LionParticleRender.cpp:67
void BrnParticle::LionParticleRender::~LionParticleRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionParticleRender.cpp:499
void BrnParticle::LionParticleRender::HashMaterial(const cParticleMaterial *  apMaterial) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleRender.cpp:503
		uint32_t luMaterialHash;

	}
}

// LionParticleRender.cpp:511
void BrnParticle::LionParticleRender::GetMaterialHandle(uint32_t  luMaterialHash) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleRender.cpp:516
		int32_t liBlendStateIndex;

	}
}

// LionParticleRender.cpp:197
void BrnParticle::LionParticleRender::TextureUnRegister(cParticleMaterial *  apMaterial) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionParticleRender.cpp:221
void BrnParticle::LionParticleRender::RenderGroupEndLite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionParticleRender.cpp:274
void BrnParticle::LionParticleRender::RenderGroupEnd() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionParticleRender.cpp:310
void BrnParticle::LionParticleRender::GetCameraMatrix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionParticleRender.cpp:327
void BrnParticle::LionParticleRender::End() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionParticleRender.cpp:333
void BrnParticle::LionParticleRender::SetRenderer(cParticleMaterial::eLionMaterialShaderType  aType, BrnGraphics::LionBlendRenderer *  lpRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionParticleRender.cpp:340
void BrnParticle::LionParticleRender::SetAllocator(HeapMalloc *  lpHeapMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionParticleRender.cpp:209
void BrnParticle::LionParticleRender::RenderGroupBeginLite(const const cParticleMaterial &  lMaterial) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
}

// LionParticleRender.cpp:702
void BrnParticle::LionParticleRender::SetCameraData(const rw::math::vpu::Matrix44Affine &  lCameraTransform, const rw::math::vpu::Matrix44Affine &  lView, const rw::math::vpu::Matrix44 &  lViewProj, const rw::math::vpu::Matrix44 &  lPackedFrustumLrtb) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	cMatrix::SetAxisX(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetX(/* parameters */);
	cMatrix::SetAxisY(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	cVector::SetZ(/* parameters */);
	cMatrix::SetAxisZ(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	cMatrix::SetAxisW(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	cVector::SetZ(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
}

// LionParticleRender.cpp:321
void BrnParticle::LionParticleRender::Begin(const rw::math::vpu::Matrix44Affine &  lCameraTransform, const rw::math::vpu::Matrix44Affine &  lView, const rw::math::vpu::Matrix44 &  lViewProj, const rw::math::vpu::Matrix44 &  lPackedFrustumLrtb) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
}

// LionParticleRender.cpp:345
void BrnParticle::LionParticleRender::SetTextureNameMap(SafeResourceHandle<BrnParticle::TextureNameMap>  lMap) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::SafeResourceHandle<BrnParticle::TextureNameMap>::operator=(/* parameters */);
	CgsResource::ResourceHandle::CreateFromHandle(/* parameters */);
}

// LionParticleRender.cpp:61
void BrnParticle::LionParticleRender::LionParticleRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionParticleRender.cpp:720
void BrnParticle::LionParticleRender::GetVertexStride(const const cParticleMaterial &  lMaterial) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleRender.cpp:724
		const LionBlendRenderer *const lpShader;

		// LionParticleRender.cpp:727
		const uint32_t luVertexStride;

	}
}

// LionParticleRender.cpp:447
void BrnParticle::LionParticleRender::Setup() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleRender.cpp:469
		Parameters params;

		// LionParticleRender.cpp:472
		ResourceDescriptor resourceDescriptor;

		// LionParticleRender.cpp:473
		Resource resource;

		{
			// LionParticleRender.cpp:449
			uint32_t luZTest;

			{
				// LionParticleRender.cpp:451
				uint32_t luZWrite;

				{
					// LionParticleRender.cpp:454
					Parameters params;

					// LionParticleRender.cpp:461
					ResourceDescriptor resourceDescriptor;

					// LionParticleRender.cpp:462
					Resource resource;

					renderengine::DepthStencilState::Parameters::Parameters(/* parameters */);
					renderengine::DepthStencilState::Parameters::SetDepthWriteEnable(/* parameters */);
					renderengine::DepthStencilState::Parameters::SetDepthEnable(/* parameters */);
					renderengine::DepthStencilState::Parameters::SetDepthFunction(/* parameters */);
					rw::Resource::Resource(/* parameters */);
					~ResourceDescriptor(/* parameters */);
				}
			}
		}
		renderengine::DepthStencilState::Parameters::Parameters(/* parameters */);
		rw::Resource::Resource(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		~BaseResourceDescriptors(/* parameters */);
	}
}

// LionParticleRender.cpp:287
void BrnParticle::LionParticleRender::IsVisible(const const cVector &  aPos, const FP32  aRadius, const U32  aLodGroup) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleRender.cpp:289
		cVector lPath;

		// LionParticleRender.cpp:290
		FP32 lLenSqrd;

		// LionParticleRender.cpp:291
		FP32 lLodDistSqrd;

		cVector::operator-(/* parameters */);
	}
	cVector::operator=(/* parameters */);
	cVector::SquaredLength(/* parameters */);
	cVector::GetX(/* parameters */);
	cParticleRender::Instance(/* parameters */);
	cParticleRender::GetLodDistance(/* parameters */);
}

// LionParticleRender.cpp:251
void BrnParticle::LionParticleRender::EndRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnGraphics::LionBlendRenderer::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	BrnGraphics::LionBlendRenderer::EndRendering(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::LionBlendVertex>::EndRendering(/* parameters */);
}

// LionParticleRender.cpp:81
void BrnParticle::LionParticleRender::Render(const EffectsVertexBufferIterator &  lVertexIterator, RenderedParticle *const  apParticles, const cMatrix *const  pMatrices, const U32  aParticleCount, const U32  aFirstIndex, const cParticleEmitter *const  apEmitter, const cLionFog *const  lpFog, const const cTime &  lCurrentLocatorTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleRender.cpp:87
		const LionBlendRenderer & lRenderer;

	}
}

// LionParticleRender.cpp:122
void BrnParticle::LionParticleRender::Render(const EffectsVertexBufferIterator &  lVertexIterator, RenderedParticle *const  apParticles, const cVector *const  pVectors, const U32  aParticleCount, const U32  aFirstIndex, const cParticleEmitter *const  apEmitter, const cLionFog *const  lpFog, const const cTime &  lCurrentLocatorTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleRender.cpp:124
		cMatrix[32] laMatrices;

		{
			// LionParticleRender.cpp:128
			U32 luMatrixIndex;

			cMatrix::BuildIdentity(/* parameters */);
			cMatrix::SetTrans(/* parameters */);
		}
	}
}

// LionParticleRender.cpp:236
void BrnParticle::LionParticleRender::BeginRendering(const float32_t  lfWhiteLevel, const bool8_t  lbEnableZFade, const float32_t  lfNearPlane, const float32_t  lfFarPlane, const float32_t  lfFadeDistance, const float32_t  lfDepthSamplerOffsetU, const float32_t  lfDepthSamplerOffsetV, TextureState *const  lpDepthTextureState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
}

// LionParticleRender.cpp:350
void BrnParticle::LionParticleRender::FindTexture(uint32_t  aTextureMapHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleRender.cpp:361
		renderengine::Texture * lpTexture;

		// LionParticleRender.cpp:363
		BrnParticle::TextureNameMap::Entry * lpEntries;

		// LionParticleRender.cpp:365
		const uint32_t texture_count;

	}
	CgsResource::SafeResourceHandle<BrnParticle::TextureNameMap>::operator->(/* parameters */);
	TextureNameMap::GetEntryCount(/* parameters */);
	TextureNameMap::GetEntries(/* parameters */);
	{
		// LionParticleRender.cpp:367
		uint32_t uIndex;

		CgsResource::SafeResourceHandle<renderengine::Texture>::operator renderengine::Texture*(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// LionParticleRender.cpp:382
void BrnParticle::LionParticleRender::SetMaterial(const cParticleMaterial *  apMaterial) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleRender.cpp:393
		const LionBlendRenderer & lRenderer;

		// LionParticleRender.cpp:395
		uint32_t lTextureHandle;

		// LionParticleRender.cpp:397
		renderengine::Texture * lpTexture;

		// LionParticleRender.cpp:421
		const uint32_t lMaterialFlags;

		// LionParticleRender.cpp:423
		uint32_t luDepthStateIndex;

		// LionParticleRender.cpp:429
		int32_t liBlendStateIndex;

		shadow::Device::SetResource(/* parameters */);
		BrnGraphics::LionBlendRenderer::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		BrnGraphics::LionBlendRenderer::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
	}
}

// LionParticleRender.cpp:259
void BrnParticle::LionParticleRender::RenderGroupBegin(const const cParticleMaterial &  lMaterial) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionParticleRender.cpp:479
void BrnParticle::LionParticleRender::AcquireTexture(uint32_t  uLionTextureNameHash, SafeResourceHandle<renderengine::Texture>  lTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleRender.cpp:483
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsResource::SafeResourceHandle<renderengine::Texture>::operator=(/* parameters */);
	CgsResource::ResourceHandle::CreateFromHandle(/* parameters */);
}

// LionParticleRender.cpp:528
void BrnParticle::LionParticleRender::CreateInternalMaterial(const cParticleMaterial *  apMaterial) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleRender.cpp:533
		uint32_t luMaterialHash;

		// LionParticleRender.cpp:537
		renderengine::RenderTargetState::TargetID lTargetID;

		// LionParticleRender.cpp:538
		Parameters params;

		// LionParticleRender.cpp:681
		ResourceDescriptor resourceDescriptor;

	}
	renderengine::BlendState::Parameters::Parameters(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestFunction(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestReference(/* parameters */);
	renderengine::BlendState::Parameters::SetSourceAlpha(/* parameters */);
	renderengine::BlendState::Parameters::SetBlendEnable(/* parameters */);
	renderengine::BlendState::Parameters::SetDestinationAlpha(/* parameters */);
	renderengine::BlendState::Parameters::SetOperationAlpha(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestEnable(/* parameters */);
	renderengine::BlendState::Parameters::SetOperation(/* parameters */);
	renderengine::BlendState::Parameters::SetSource(/* parameters */);
	renderengine::BlendState::Parameters::SetDestination(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestEnable(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestReference(/* parameters */);
	{
		// LionParticleRender.cpp:683
		Resource resource;

		// LionParticleRender.cpp:684
		BlendState * lpBlendState;

		// LionParticleRender.cpp:688
		BlendStateMapEntry lEntry;

		rw::Resource::Resource(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		~BaseResourceDescriptors(/* parameters */);
	}
	{
		// LionParticleRender.cpp:687
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	renderengine::BlendState::Parameters::SetSource(/* parameters */);
	renderengine::BlendState::Parameters::SetDestination(/* parameters */);
	renderengine::BlendState::Parameters::SetOperation(/* parameters */);
	renderengine::BlendState::Parameters::SetSource(/* parameters */);
	renderengine::BlendState::Parameters::SetDestination(/* parameters */);
	renderengine::BlendState::Parameters::SetSource(/* parameters */);
	renderengine::BlendState::Parameters::SetDestination(/* parameters */);
	renderengine::BlendState::Parameters::SetSource(/* parameters */);
	renderengine::BlendState::Parameters::SetOperationAlpha(/* parameters */);
	renderengine::BlendState::Parameters::SetDestination(/* parameters */);
	renderengine::BlendState::Parameters::SetSourceAlpha(/* parameters */);
	renderengine::BlendState::Parameters::SetDestinationAlpha(/* parameters */);
	renderengine::BlendState::Parameters::SetSource(/* parameters */);
	renderengine::BlendState::Parameters::SetDestination(/* parameters */);
	renderengine::BlendState::Parameters::SetSource(/* parameters */);
	renderengine::BlendState::Parameters::SetDestination(/* parameters */);
	renderengine::BlendState::Parameters::SetSource(/* parameters */);
	renderengine::BlendState::Parameters::SetDestination(/* parameters */);
	renderengine::BlendState::Parameters::SetSource(/* parameters */);
	renderengine::BlendState::Parameters::SetDestination(/* parameters */);
	renderengine::BlendState::Parameters::SetOperation(/* parameters */);
	renderengine::BlendState::Parameters::SetSource(/* parameters */);
	renderengine::BlendState::Parameters::SetDestination(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestFunction(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestFunction(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestFunction(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestFunction(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestFunction(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestFunction(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestFunction(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestFunction(/* parameters */);
}

// LionParticleRender.cpp:137
void BrnParticle::LionParticleRender::TextureRegister(cParticleMaterial *  apMaterial, char *  apTextureName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionParticleRender.cpp:148
		uint32_t luMaterialHash;

		// LionParticleRender.cpp:151
		uint32_t luMaterialHandle;

		// LionParticleRender.cpp:167
		uint32_t luTextureNameHash;

		// LionParticleRender.cpp:176
		const char * lNormalMapTextureName;

	}
	TextureNameMap::Entry::HashString(/* parameters */);
	{
	}
	{
		// LionParticleRender.cpp:180
		uint32_t luNormalNameHash;

		TextureNameMap::Entry::HashString(/* parameters */);
	}
	std(/* parameters */);
}

// _built-in_
namespace :: {
	// LionParticleRender.cpp:37
	extern DepthStencilState *[5] gpDepthStencilStates;

	// LionParticleRender.cpp:47
	const int32_t KI_LION_MAX_BLEND_STATES = 256;

	// LionParticleRender.cpp:48
	extern int32_t giNumBlendStates;

	// LionParticleRender.cpp:49
	extern BlendStateMapEntry[256] gBlendStateMap;

	// LionParticleRender.cpp:51
	const int32_t KI_LION_MAX_TEXTURES = 256;

	// LionParticleRender.cpp:52
	extern int32_t giNumTextures;

	// LionParticleRender.cpp:53
	extern SafeResourceHandle<renderengine::Texture>[256] gVecTextures;

}

