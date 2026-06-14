// CgsImRenderer.cpp:99
void CgsGraphics::ImRendererBase::ConstructNoBlendNoAlphaTestBlendState(rw::IResourceAllocator *const  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.cpp:101
		Parameters lBlendStateParams;

		// CgsImRenderer.cpp:107
		ResourceDescriptor lBlendStateResDesc;

		// CgsImRenderer.cpp:108
		Resource lBlendStateResource;

		// CgsImRenderer.cpp:109
		BlendState * lpBlendState;

		renderengine::BlendState::Parameters::Parameters(/* parameters */);
	}
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestFunction(/* parameters */);
	renderengine::BlendState::Parameters::SetBlendEnable(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestEnable(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

// CgsImRenderer.cpp:129
void CgsGraphics::ImRendererBase::ConstructRasteriserState(rw::IResourceAllocator *const  lpAllocator, const renderengine::RasterizerState::CullMode  leCullMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.cpp:131
		Parameters lRasterizerStateParams;

		// CgsImRenderer.cpp:135
		ResourceDescriptor lRasterizerStateResDesc;

		// CgsImRenderer.cpp:136
		Resource lRasterizerStateResource;

		// CgsImRenderer.cpp:137
		RasterizerState * lpRasterizerState;

	}
	renderengine::RasterizerState::Parameters::SetCullMode(/* parameters */);
	renderengine::RasterizerState::Parameters::Parameters(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

// CgsImRenderer.cpp:159
void CgsGraphics::ImRendererBase::ConstructDepthStencilState(rw::IResourceAllocator *const  lpAllocator, bool  bZTestEnable, bool  bZWriteEnable, renderengine::DepthStencilState::Function  leComparisonFunction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.cpp:161
		Parameters lDepthStencilStateParams;

		// CgsImRenderer.cpp:165
		Resource mDepthStencilStateResource;

		// CgsImRenderer.cpp:166
		DepthStencilState * lpDepthStencilState;

	}
	renderengine::DepthStencilState::Parameters::Parameters(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthEnable(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthWriteEnable(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthFunction(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

// CgsImRenderer.cpp:189
void CgsGraphics::ImRendererBase::ConstructSamplerState(rw::IResourceAllocator *const  lpAllocator, const renderengine::SamplerState::FilterMode  leMinMagFilter, const renderengine::SamplerState::FilterMode  leMipFilter, const renderengine::SamplerState::AddressingMode  leAddressU, const renderengine::SamplerState::AddressingMode  leAddressV) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.cpp:191
		Parameters lSamplerStateParams;

		// CgsImRenderer.cpp:197
		ResourceDescriptor lResourceDescriptor;

		// CgsImRenderer.cpp:198
		Resource lResource;

		// CgsImRenderer.cpp:199
		const SamplerState *const lpSamplerState;

	}
	renderengine::SamplerState::Parameters::Parameters(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
	renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetMipFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

// CgsImRenderer.cpp:216
void CgsGraphics::ImRendererBase::ConstructWhiteTexture(rw::IResourceAllocator *const  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.cpp:218
		renderengine::Texture::Parameters lTextureParams;

		// CgsImRenderer.cpp:227
		ResourceDescriptor lResDesc;

		// CgsImRenderer.cpp:231
		Resource lTextureResource;

		// CgsImRenderer.cpp:232
		renderengine::Texture * lpWhiteTexture;

		// CgsImRenderer.cpp:234
		renderengine::Texture::Locked lLocked;

		// CgsImRenderer.cpp:238
		int32_t liWidth;

		// CgsImRenderer.cpp:238
		int32_t liHeight;

		// CgsImRenderer.cpp:240
		uint32_t * lpuPixels;

		// CgsImRenderer.cpp:241
		uint32_t luStrideInPixels;

	}
	renderengine::Texture::Parameters::SetFormat(/* parameters */);
	renderengine::Texture::Parameters::Parameters(/* parameters */);
	renderengine::Texture::Parameters::SetWidth(/* parameters */);
	renderengine::Texture::Parameters::SetMipLevels(/* parameters */);
	renderengine::Texture::Parameters::SetHeight(/* parameters */);
	renderengine::Texture::Parameters::SetType(/* parameters */);
	renderengine::Texture::Parameters::SetDepth(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~BaseResourceDescriptors(/* parameters */);
}

// CgsImRenderer.cpp:269
void CgsGraphics::ImRendererBase::ConstructDefaultTextureState(rw::IResourceAllocator *const  lpAllocator, renderengine::Texture *const  lpTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.cpp:271
		TextureState * lpTextureState;

		// CgsImRenderer.cpp:274
		Parameters lTextureStateParameters;

		// CgsImRenderer.cpp:283
		Resource lTextureStateResource;

		renderengine::TextureState::Parameters::Parameters(/* parameters */);
	}
	renderengine::TextureState::Parameters::SetTexture(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
	renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetMipFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressW(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

// CgsImRenderer.cpp:62
void CgsGraphics::ImRendererBase::ConstructBlendState(rw::IResourceAllocator *const  lpAllocator, const renderengine::BlendState::Input  leSrcBlend, const renderengine::BlendState::Input  leDstBlend, const renderengine::BlendState::Operation  leOperation) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.cpp:64
		Parameters lBlendStateParams;

		// CgsImRenderer.cpp:71
		ResourceDescriptor lBlendStateResDesc;

		// CgsImRenderer.cpp:72
		Resource lBlendStateResource;

		// CgsImRenderer.cpp:73
		BlendState * lpBlendState;

		renderengine::BlendState::Parameters::Parameters(/* parameters */);
	}
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::BlendState::Parameters::SetBlendEnable(/* parameters */);
	renderengine::BlendState::Parameters::SetSource(/* parameters */);
	renderengine::BlendState::Parameters::SetDestination(/* parameters */);
	renderengine::BlendState::Parameters::SetOperation(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

// CgsImRenderer.cpp:79
void CgsGraphics::ImRendererBase::ConstructNoAlphaTestBlendState(rw::IResourceAllocator *const  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.cpp:81
		Parameters lBlendStateParams;

		// CgsImRenderer.cpp:91
		ResourceDescriptor lBlendStateResDesc;

		// CgsImRenderer.cpp:92
		Resource lBlendStateResource;

		// CgsImRenderer.cpp:93
		BlendState * lpBlendState;

	}
	renderengine::BlendState::Parameters::Parameters(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestEnable(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestFunction(/* parameters */);
	renderengine::BlendState::Parameters::SetSource(/* parameters */);
	renderengine::BlendState::Parameters::SetDestination(/* parameters */);
	renderengine::BlendState::Parameters::SetBlendEnable(/* parameters */);
	renderengine::BlendState::Parameters::SetOperation(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestReference(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

// CgsImRenderer.cpp:303
void CgsGraphics::ImRendererBase::ConstructOnceOnly(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsImRenderer.cpp:38
// CgsImRenderer.cpp:40
// CgsImRenderer.cpp:41
