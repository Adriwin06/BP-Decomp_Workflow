// vertexbuffer.h:27
namespace BrnParticle {
	// BrnSparkRenderer.h:48
	namespace Native {
		// BrnSimpleParticleRenderer.cpp:131
		extern RGBA Convert(const RwRGBAReal &);

		// BrnSimpleParticleRenderer.cpp:108
		extern void Convert(const Attrib::Gen::nativeparticleparams::_LayoutStruct::Vector4 &, RwRGBA &);

		// BrnSimpleParticleRenderer.cpp:118
		extern Vector4 Convert(const RwRGBA &);

		// BrnSimpleParticleRenderer.cpp:90
		BrnParticleBankSize[13] gBrnParticleBankSize;

	}

}

// BrnSimpleParticleRenderer.cpp:82
struct BrnParticle::Native::BrnParticleBankSize {
	// BrnSimpleParticleRenderer.cpp:85
	SimpleParticleBatch::ENativeParticleType meParticleType;

	// BrnSimpleParticleRenderer.cpp:86
	uint32_t muRegularBankSize;

	// BrnSimpleParticleRenderer.cpp:87
	uint32_t muCrashBankSize;

}

// BrnSimpleParticleRenderer.cpp:1007
void BrnParticle::Native::BrnSimpleParticleArray::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSimpleParticleRenderer.cpp:1201
void BrnParticle::Native::BrnSimpleParticleRenderer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSimpleParticleRenderer.cpp:971
void BrnParticle::Native::BrnSimpleParticleArray::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSimpleParticleRenderer.cpp:279
void BrnParticle::Native::BrnSimpleParticleArray::CB4ParticleBank::Construct(HeapMalloc *  lpHeapMalloc, uint32_t  luNumParticles) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSimpleParticleRenderer.cpp:311
void BrnParticle::Native::BrnSimpleParticleArray::CB4ParticleBank::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSimpleParticleRenderer.cpp:353
void BrnParticle::Native::BrnSimpleParticleArray::CB4ParticleBank::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSimpleParticleRenderer.cpp:328
void BrnParticle::Native::BrnSimpleParticleArray::CB4ParticleBank::Prepare(BrnParticle::Native::BrnSimpleParticleArray *  lpArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSimpleParticleRenderer.cpp:330
		uint32_t luCount;

		rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	}
}

// BrnSimpleParticleRenderer.cpp:987
void BrnParticle::Native::BrnSimpleParticleArray::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSimpleParticleRenderer.cpp:1069
void BrnParticle::Native::BrnSimpleParticleArray::SpawnParticle(const rw::math::vpu::Vector3  lSpawnPosition, const rw::math::vpu::Vector3  lSpawnVelocity, float32_t  lrSpawnTime, float32_t  lrSizeScale, float32_t  lrRotationalVelocity, bool  lbIsCrash, float32_t  lrAlpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSimpleParticleRenderer.cpp:1071
		CB4Particle * lpParticle;

		// BrnSimpleParticleRenderer.cpp:1072
		BrnParticle::Native::BrnSimpleParticleArray::CB4ParticleBank * lpBank;

		// BrnSimpleParticleRenderer.cpp:1073
		Vector3 lScaledVelocity;

	}
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
}

// BrnSimpleParticleRenderer.cpp:887
void BrnParticle::Native::BrnSimpleParticleArray::Initialize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
}

// BrnSimpleParticleRenderer.cpp:1014
void BrnParticle::Native::BrnSimpleParticleArray::UpdateParams(const nativeparticleparams &  lParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector2::Vector2(/* parameters */);
}

// BrnSimpleParticleRenderer.cpp:926
void BrnParticle::Native::BrnSimpleParticleArray::Construct(HeapMalloc *const  lpHeapMalloc, const SimpleParticleBatch::ENativeParticleType  leParticleType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSimpleParticleRenderer.cpp:928
		uint32_t luLoop;

		// BrnSimpleParticleRenderer.cpp:937
		uint32_t luArraySize;

	}
	CgsResource::SafeResourceHandle<renderengine::Texture>::operator=(/* parameters */);
	CgsResource::ResourceHandle::CreateFromHandle(/* parameters */);
}

// BrnSimpleParticleRenderer.cpp:1116
void BrnParticle::Native::BrnSimpleParticleRenderer::Construct(HeapMalloc *  lpHeapMalloc, BrnGraphics::Im3dSmokeRenderer *  lpRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSimpleParticleRenderer.cpp:1124
		renderengine::RenderTargetState::TargetID lTargetID;

		// BrnSimpleParticleRenderer.cpp:1125
		Parameters lParams;

		// BrnSimpleParticleRenderer.cpp:1138
		ResourceDescriptor resourceDescriptor;

		// BrnSimpleParticleRenderer.cpp:1140
		Resource resource;

		renderengine::BlendState::Parameters::Parameters(/* parameters */);
	}
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestFunction(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestReference(/* parameters */);
	renderengine::BlendState::Parameters::SetSourceAlpha(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestEnable(/* parameters */);
	renderengine::BlendState::Parameters::SetDestinationAlpha(/* parameters */);
	renderengine::BlendState::Parameters::SetOperationAlpha(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~BaseResourceDescriptors(/* parameters */);
	{
		// BrnSimpleParticleRenderer.cpp:1146
		renderengine::RenderTargetState::TargetID lTargetID;

		// BrnSimpleParticleRenderer.cpp:1147
		Parameters lParams;

		// BrnSimpleParticleRenderer.cpp:1160
		ResourceDescriptor resourceDescriptor;

		// BrnSimpleParticleRenderer.cpp:1162
		Resource resource;

		renderengine::BlendState::Parameters::Parameters(/* parameters */);
		renderengine::BlendState::Parameters::SetAlphaTestFunction(/* parameters */);
		renderengine::BlendState::Parameters::SetAlphaTestReference(/* parameters */);
		renderengine::BlendState::Parameters::SetSourceAlpha(/* parameters */);
		renderengine::BlendState::Parameters::SetAlphaTestEnable(/* parameters */);
		renderengine::BlendState::Parameters::SetDestinationAlpha(/* parameters */);
		renderengine::BlendState::Parameters::SetOperationAlpha(/* parameters */);
		rw::Resource::Resource(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		~BaseResourceDescriptors(/* parameters */);
	}
	{
		// BrnSimpleParticleRenderer.cpp:1168
		renderengine::RenderTargetState::TargetID lTargetID;

		// BrnSimpleParticleRenderer.cpp:1169
		Parameters lParams;

		// BrnSimpleParticleRenderer.cpp:1182
		ResourceDescriptor resourceDescriptor;

		// BrnSimpleParticleRenderer.cpp:1184
		Resource resource;

		renderengine::BlendState::Parameters::Parameters(/* parameters */);
		renderengine::BlendState::Parameters::SetAlphaTestFunction(/* parameters */);
		renderengine::BlendState::Parameters::SetAlphaTestReference(/* parameters */);
		renderengine::BlendState::Parameters::SetSourceAlpha(/* parameters */);
		renderengine::BlendState::Parameters::SetAlphaTestEnable(/* parameters */);
		renderengine::BlendState::Parameters::SetDestinationAlpha(/* parameters */);
		renderengine::BlendState::Parameters::SetOperationAlpha(/* parameters */);
		rw::Resource::Resource(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		~BaseResourceDescriptors(/* parameters */);
	}
}

// BrnSimpleParticleRenderer.cpp:1321
void BrnParticle::Native::BrnSimpleParticleRenderer::Dispatch(renderengine::VertexBuffer *const  lpVertexBuffer, const const SimpleParticleBatchArray &  lBatchArray, const uint32_t  luFirstBatch, const uint32_t  luLastBatch, CgsRenderTarget *const  lpZFadeRenderTarget, const float32_t  lfNearPlane, const float32_t  lfFarPlane, const bool8_t  lbEnableZFade) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSimpleParticleRenderer.cpp:1329
		BlendState *[3] lapBlendStates;

		// BrnSimpleParticleRenderer.cpp:1346
		const const CgsGraphics::ImRendererBase::StateLibrary & lStateLibrary;

		// BrnSimpleParticleRenderer.cpp:1351
		DrawParameters lDrawParams;

		// BrnSimpleParticleRenderer.cpp:1374
		VertexDescriptor *const lpVertexDescriptor;

	}
	CgsContainers::Array<BrnParticle::Native::SimpleParticleBatch,13u>::GetLength(/* parameters */);
	shadow::Device::ResetShadowing(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	renderengine::DrawParameters::SetPrimitiveType(/* parameters */);
	{
		// BrnSimpleParticleRenderer.cpp:1367
		float32_t lfFadeDistance;

		// BrnSimpleParticleRenderer.cpp:1369
		Vector2 lvDepthUVOffset;

		CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::BeginRendering(/* parameters */);
		CgsGraphics::ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
	}
	shadow::Device::SetVertexDescriptor(/* parameters */);
	cellGcmSetVertexDataArrayInline(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::EndRendering(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::BeginRendering(/* parameters */);
	shadow::Device::SetResource(/* parameters */);
	{
		// BrnSimpleParticleRenderer.cpp:1386
		uint32_t luCount;

	}
	{
		// BrnSimpleParticleRenderer.cpp:1388
		const const SimpleParticleBatch & lBatch;

		// BrnSimpleParticleRenderer.cpp:1393
		BlendState *const lpBlendState;

		// BrnSimpleParticleRenderer.cpp:1396
		renderengine::Texture *const lpTexture;

		CgsContainers::Array<BrnParticle::Native::SimpleParticleBatch,13u>::operator[](/* parameters */);
		shadow::Device::SetState(/* parameters */);
		BrnSimpleParticleArray::GetTexture(/* parameters */);
		shadow::Device::SetResource(/* parameters */);
		renderengine::DrawParameters::SetStartVertex(/* parameters */);
		shadow::Device::Draw(/* parameters */);
		renderengine::DrawParameters::SetVertexCount(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	cellGcmSetVertexDataArrayInline(/* parameters */);
}

// BrnSimpleParticleRenderer.cpp:61
// BrnSimpleParticleRenderer.cpp:63
