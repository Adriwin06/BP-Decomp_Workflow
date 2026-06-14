// BrnRendererMemory.cpp:1616
void BrnRendererMemory::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRendererMemory.cpp:144
extern bool _OverrideSDResolution(const uint32_t &  luInOutScreenWidth, const uint32_t &  luInOutScreenHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererMemory.cpp:146
		bool lbInSD;

	}
}

// BrnRendererMemory.cpp:317
void BrnRendererMemory::PS3AddTileReservation(const uint32_t  luInWidth, const uint32_t  luInHeight, const uint32_t  luInDepthInBits, const uint32_t  luInMSAAType, const int32_t &  liOutTileIndex, const int32_t &  liOutCompressionTag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererMemory.cpp:328
		uint32_t luImageWidth;

		// BrnRendererMemory.cpp:329
		uint32_t luImageHeight;

		// BrnRendererMemory.cpp:351
		uint32_t luImagePitch;

		// BrnRendererMemory.cpp:352
		uint32_t luImageSize;

	}
}

// BrnRendererMemory.cpp:377
void BrnRendererMemory::PS3AddZCullReservation(const uint32_t  luWidth, const uint32_t  luHeight, const int32_t &  liOutZCullIndex, const int32_t &  liOutZCullAddress, int32_t  liNumIndices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererMemory.cpp:385
		uint32_t luAdjHeight;

		// BrnRendererMemory.cpp:386
		uint32_t luAdjWidth;

	}
}

// BrnRendererMemory.cpp:1633
void BrnRendererMemory::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRendererMemory.cpp:1586
void BrnRendererMemory::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererMemory.cpp:1596
		RenderTarget * lpBackBuffer;

		CgsRenderTarget::GetRenderTarget(/* parameters */);
		rw::graphics::postfx::Target::SetTextureState(/* parameters */);
		rw::graphics::postfx::RenderTarget::SetRenderTargetState(/* parameters */);
	}
}

// BrnRendererMemory.cpp:1158
void BrnRendererMemory::CreateSnapShotBuffer(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererMemory.cpp:1160
		renderengine::Texture::Locked lLockedTexture;

		// BrnRendererMemory.cpp:1161
		CgsRenderTarget * lpRenderTarget;

	}
	CgsRenderTarget::CgsRenderTarget(/* parameters */);
	CgsRenderTarget::ClearColourTargetInUse(/* parameters */);
	CgsRenderTarget::SetColourTargetBufferFormat(/* parameters */);
	CgsRenderTarget::SetUseDepthStencilAsTexture(/* parameters */);
	CgsRenderTarget::SetColourTargetInUse(/* parameters */);
	CgsRenderTarget::SetNumMipMaps(/* parameters */);
	CgsRenderTarget::SetDimensions(/* parameters */);
	CgsRenderTarget::SetMultisampleFormat(/* parameters */);
	CgsRenderTarget::CgsRenderTargetSurface::SetInUse(/* parameters */);
	CgsRenderTarget::SetColourTargetUseSystemMemory(/* parameters */);
	CgsRenderTarget::SetDepthTargetInUse(/* parameters */);
	CgsRenderTarget::SetColourTargetTextureFormat(/* parameters */);
}

// BrnRendererMemory.cpp:616
void BrnRendererMemory::CreateShadowmapBuffer(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererMemory.cpp:618
		uint32_t luShadowMapWidth;

		// BrnRendererMemory.cpp:619
		uint32_t luShadowMapHeight;

		// BrnRendererMemory.cpp:625
		int32_t liZCullIndex;

		// BrnRendererMemory.cpp:626
		int32_t liZCullAddress;

	}
	{
		// BrnRendererMemory.cpp:630
		CgsRenderTarget * lpRenderTarget;

		// BrnRendererMemory.cpp:654
		uint32_t luMSAAFormat;

		// BrnRendererMemory.cpp:666
		int32_t liTileIndex;

		// BrnRendererMemory.cpp:667
		int32_t liCompressionTag;

		// BrnRendererMemory.cpp:690
		TextureState * lpPs3TextureState;

		// BrnRendererMemory.cpp:691
		renderengine::Texture * lpPs3Texture;

	}
	CgsRenderTarget::CgsRenderTarget(/* parameters */);
	CgsRenderTarget::CgsRenderTargetSurface::CgsRenderTargetSurface(/* parameters */);
	CgsRenderTarget::SetDepthTargetBufferFormat(/* parameters */);
	CgsRenderTarget::CgsRenderTargetSurface::CgsRenderTargetSurface(/* parameters */);
	CgsRenderTarget::SetDepthTargetTextureFormat(/* parameters */);
	CgsRenderTarget::ClearColourTargetInUse(/* parameters */);
	CgsRenderTarget::SetMultisampleFormat(/* parameters */);
	CgsRenderTarget::SetDimensions(/* parameters */);
	CgsRenderTarget::SetDepthTargetBufferFormat(/* parameters */);
	CgsRenderTarget::SetNumMipMaps(/* parameters */);
	CgsRenderTarget::SetNumSections(/* parameters */);
	CgsRenderTarget::SetUseDepthStencilAsTexture(/* parameters */);
	CgsRenderTarget::SetDepthTargetInUse(/* parameters */);
	CgsRenderTarget::SetDepthTargetTextureFormat(/* parameters */);
	CgsRenderTarget::SetDepthTargetTileIndex(/* parameters */);
	CgsRenderTarget::SetDepthTargetCompressionBase(/* parameters */);
	CgsRenderTarget::SetDepthTargetZCullIndex(/* parameters */);
	CgsRenderTarget::SetDepthTargetZCullAddress(/* parameters */);
}

// BrnRendererMemory.cpp:408
void BrnRendererMemory::CreateAntiAliasBuffer(rw::IResourceAllocator *  lpAllocator, bool  lbEnableMSAA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererMemory.cpp:410
		CgsRenderTarget * lpAntiAliasBuffer;

		// BrnRendererMemory.cpp:451
		uint32_t luMSAAFormat;

		// BrnRendererMemory.cpp:468
		int32_t liTileIndex;

		// BrnRendererMemory.cpp:469
		int32_t liCompressionTag;

		// BrnRendererMemory.cpp:480
		int32_t liZCullIndex;

		// BrnRendererMemory.cpp:481
		int32_t liZCullAddress;

	}
	CgsRenderTarget::CgsRenderTarget(/* parameters */);
	CgsRenderTarget::SetDepthTargetTextureFormat(/* parameters */);
	CgsRenderTarget::ClearColourTargetInUse(/* parameters */);
	CgsRenderTarget::SetDimensions(/* parameters */);
	CgsRenderTarget::SetNumMipMaps(/* parameters */);
	CgsRenderTarget::SetColourTargetInUse(/* parameters */);
	CgsRenderTarget::CgsRenderTargetSurface::SetInUse(/* parameters */);
	CgsRenderTarget::SetDepthTargetInUse(/* parameters */);
	CgsRenderTarget::SetColourTargetBufferFormat(/* parameters */);
	CgsRenderTarget::SetMultisampleFormat(/* parameters */);
	CgsRenderTarget::SetDepthTargetBufferFormat(/* parameters */);
	CgsRenderTarget::SetColourTargetTextureFormat(/* parameters */);
	CgsRenderTarget::SetDepthTargetTextureFormat(/* parameters */);
	CgsRenderTarget::SetUseDepthStencilAsTexture(/* parameters */);
	CgsRenderTarget::SetColourTargetTileIndex(/* parameters */);
	CgsRenderTarget::SetColourTargetCompressionBase(/* parameters */);
	CgsRenderTarget::SetDepthTargetTileIndex(/* parameters */);
	CgsRenderTarget::SetDepthTargetCompressionBase(/* parameters */);
	CgsRenderTarget::SetDepthTargetZCullIndex(/* parameters */);
	CgsRenderTarget::SetDepthTargetZCullAddress(/* parameters */);
}

// BrnRendererMemory.cpp:504
void BrnRendererMemory::CreateEnvmapBuffer(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererMemory.cpp:527
		uint32_t luMSAAFormat;

		// BrnRendererMemory.cpp:536
		int32_t liTileIndex;

		// BrnRendererMemory.cpp:537
		int32_t liCompressionTag;

		// BrnRendererMemory.cpp:550
		int32_t liZCullIndex;

		// BrnRendererMemory.cpp:551
		int32_t liZCullAddress;

	}
	CgsRenderTarget::CgsRenderTarget(/* parameters */);
	CgsRenderTarget::SetDepthTargetTextureFormat(/* parameters */);
	CgsRenderTarget::ClearColourTargetInUse(/* parameters */);
	CgsRenderTarget::SetTextureType(/* parameters */);
	CgsRenderTarget::SetColourTargetBufferFormat(/* parameters */);
	CgsRenderTarget::SetDepthTargetBufferFormat(/* parameters */);
	CgsRenderTarget::SetNumMipMaps(/* parameters */);
	CgsRenderTarget::SetDepthTargetInUse(/* parameters */);
	CgsRenderTarget::SetDimensions(/* parameters */);
	CgsRenderTarget::SetMultisampleFormat(/* parameters */);
	CgsRenderTarget::SetUseDepthStencilAsTexture(/* parameters */);
	CgsRenderTarget::SetColourTargetInUse(/* parameters */);
	CgsRenderTarget::SetDepthTargetTextureFormat(/* parameters */);
	CgsRenderTarget::SetColourTargetTextureFormat(/* parameters */);
	CgsRenderTarget::SetColourTargetTileIndex(/* parameters */);
	CgsRenderTarget::SetColourTargetCompressionBase(/* parameters */);
	CgsRenderTarget::SetDepthTargetTileIndex(/* parameters */);
	CgsRenderTarget::SetDepthTargetCompressionBase(/* parameters */);
	CgsRenderTarget::SetDepthTargetZCullIndex(/* parameters */);
	CgsRenderTarget::SetDepthTargetZCullAddress(/* parameters */);
}

// BrnRendererMemory.cpp:725
void BrnRendererMemory::CreateDownSampleBuffer(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererMemory.cpp:727
		CgsRenderTarget * lpTarget;

		// BrnRendererMemory.cpp:759
		uint32_t luMSAAFormat;

		// BrnRendererMemory.cpp:765
		int32_t liTileIndex;

		// BrnRendererMemory.cpp:766
		int32_t liCompressionTag;

	}
	CgsRenderTarget::CgsRenderTarget(/* parameters */);
	CgsRenderTarget::CgsRenderTargetSurface::CgsRenderTargetSurface(/* parameters */);
	CgsRenderTarget::SetDepthTargetBufferFormat(/* parameters */);
	CgsRenderTarget::CgsRenderTargetSurface::CgsRenderTargetSurface(/* parameters */);
	CgsRenderTarget::SetDepthTargetTextureFormat(/* parameters */);
	CgsRenderTarget::ClearColourTargetInUse(/* parameters */);
	CgsRenderTarget::SetDimensions(/* parameters */);
	CgsRenderTarget::SetColourTargetBufferFormat(/* parameters */);
	CgsRenderTarget::SetColourTargetInUse(/* parameters */);
	CgsRenderTarget::SetNumMipMaps(/* parameters */);
	CgsRenderTarget::SetMultisampleFormat(/* parameters */);
	CgsRenderTarget::CgsRenderTargetSurface::SetInUse(/* parameters */);
	CgsRenderTarget::SetColourFilterMode(/* parameters */);
	CgsRenderTarget::SetColourTargetTextureFormat(/* parameters */);
	CgsRenderTarget::SetUseDepthStencilAsTexture(/* parameters */);
	CgsRenderTarget::SetDepthTargetInUse(/* parameters */);
	CgsRenderTarget::SetColourTargetTileIndex(/* parameters */);
	CgsRenderTarget::SetColourTargetCompressionBase(/* parameters */);
}

// BrnRendererMemory.cpp:791
void BrnRendererMemory::CreateBackBuffer(rw::IResourceAllocator *  lpAllocator, const uint32_t  luDeviceWidth, const uint32_t  luDeviceHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererMemory.cpp:793
		uint32_t luWidth;

		// BrnRendererMemory.cpp:794
		uint32_t luHeight;

		// BrnRendererMemory.cpp:795
		CgsRenderTarget * lpTarget;

		// BrnRendererMemory.cpp:796
		bool lbUseDevice;

		// BrnRendererMemory.cpp:823
		uint32_t luMSAAFormat;

	}
	CgsRenderTarget::CgsRenderTarget(/* parameters */);
	CgsRenderTarget::SetDepthTargetTextureFormat(/* parameters */);
	CgsRenderTarget::ClearColourTargetInUse(/* parameters */);
	CgsRenderTarget::SetColourTargetBufferFormat(/* parameters */);
	CgsRenderTarget::SetDimensions(/* parameters */);
	CgsRenderTarget::SetColourTargetInUse(/* parameters */);
	CgsRenderTarget::SetUseDepthStencilAsTexture(/* parameters */);
	CgsRenderTarget::SetNumMipMaps(/* parameters */);
	CgsRenderTarget::SetColourFilterMode(/* parameters */);
	CgsRenderTarget::SetMultisampleFormat(/* parameters */);
	CgsRenderTarget::CgsRenderTargetSurface::SetInUse(/* parameters */);
	CgsRenderTarget::SetColourTargetTextureFormat(/* parameters */);
	CgsRenderTarget::SetDepthTargetInUse(/* parameters */);
	{
		// BrnRendererMemory.cpp:858
		RenderTarget * lpDownsampleBuffer;

		// BrnRendererMemory.cpp:859
		RenderTarget * lpBackBuffer;

		// BrnRendererMemory.cpp:861
		TextureState * lpState;

		CgsRenderTarget::SetColourTargetUseDevice(/* parameters */);
		rw::graphics::postfx::Target::SetTextureState(/* parameters */);
		rw::graphics::postfx::RenderTarget::SetRenderTargetState(/* parameters */);
		CgsRenderTarget::GetRenderTarget(/* parameters */);
	}
	{
		// BrnRendererMemory.cpp:835
		int32_t liTileIndex;

		// BrnRendererMemory.cpp:836
		int32_t liCompressionTag;

		CgsRenderTarget::SetColourTargetTileIndex(/* parameters */);
	}
	CgsRenderTarget::SetColourTargetCompressionBase(/* parameters */);
}

// BrnRendererMemory.cpp:887
void BrnRendererMemory::CreateBloomBuffer(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererMemory.cpp:889
		CgsRenderTarget * lpRenderTarget;

		// BrnRendererMemory.cpp:913
		uint32_t luMSAAFormat;

		// BrnRendererMemory.cpp:919
		int32_t liTileIndex;

		// BrnRendererMemory.cpp:920
		int32_t liCompressionTag;

	}
	CgsRenderTarget::CgsRenderTarget(/* parameters */);
	CgsRenderTarget::CgsRenderTargetSurface::CgsRenderTargetSurface(/* parameters */);
	CgsRenderTarget::SetDepthTargetBufferFormat(/* parameters */);
	CgsRenderTarget::CgsRenderTargetSurface::CgsRenderTargetSurface(/* parameters */);
	CgsRenderTarget::SetDepthTargetTextureFormat(/* parameters */);
	CgsRenderTarget::ClearColourTargetInUse(/* parameters */);
	CgsRenderTarget::SetDimensions(/* parameters */);
	CgsRenderTarget::SetUseDepthStencilAsTexture(/* parameters */);
	CgsRenderTarget::SetColourTargetBufferFormat(/* parameters */);
	CgsRenderTarget::SetColourTargetInUse(/* parameters */);
	CgsRenderTarget::SetNumMipMaps(/* parameters */);
	CgsRenderTarget::SetMultisampleFormat(/* parameters */);
	CgsRenderTarget::CgsRenderTargetSurface::SetInUse(/* parameters */);
	CgsRenderTarget::SetColourTargetTextureFormat(/* parameters */);
	CgsRenderTarget::SetDepthTargetInUse(/* parameters */);
	CgsRenderTarget::SetColourTargetTileIndex(/* parameters */);
	CgsRenderTarget::SetColourTargetCompressionBase(/* parameters */);
}

// BrnRendererMemory.cpp:941
void BrnRendererMemory::CreateWorkBuffer(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererMemory.cpp:943
		CgsRenderTarget * lpRenderTarget;

		// BrnRendererMemory.cpp:967
		uint32_t luMSAAFormat;

		// BrnRendererMemory.cpp:973
		int32_t liTileIndex;

		// BrnRendererMemory.cpp:974
		int32_t liCompressionTag;

	}
	CgsRenderTarget::CgsRenderTarget(/* parameters */);
	CgsRenderTarget::CgsRenderTargetSurface::CgsRenderTargetSurface(/* parameters */);
	CgsRenderTarget::SetDepthTargetBufferFormat(/* parameters */);
	CgsRenderTarget::CgsRenderTargetSurface::CgsRenderTargetSurface(/* parameters */);
	CgsRenderTarget::SetDepthTargetTextureFormat(/* parameters */);
	CgsRenderTarget::ClearColourTargetInUse(/* parameters */);
	CgsRenderTarget::SetDimensions(/* parameters */);
	CgsRenderTarget::SetUseDepthStencilAsTexture(/* parameters */);
	CgsRenderTarget::SetColourTargetBufferFormat(/* parameters */);
	CgsRenderTarget::SetColourTargetInUse(/* parameters */);
	CgsRenderTarget::SetNumMipMaps(/* parameters */);
	CgsRenderTarget::SetMultisampleFormat(/* parameters */);
	CgsRenderTarget::CgsRenderTargetSurface::SetInUse(/* parameters */);
	CgsRenderTarget::SetColourTargetTextureFormat(/* parameters */);
	CgsRenderTarget::SetDepthTargetInUse(/* parameters */);
	CgsRenderTarget::SetColourTargetTileIndex(/* parameters */);
	CgsRenderTarget::SetColourTargetCompressionBase(/* parameters */);
}

// BrnRendererMemory.cpp:994
void BrnRendererMemory::CreateDepthOfFieldBuffer(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererMemory.cpp:996
		CgsRenderTarget * lpRenderTarget;

	}
	CgsRenderTarget::CgsRenderTarget(/* parameters */);
	CgsRenderTarget::ClearColourTargetInUse(/* parameters */);
	CgsRenderTarget::SetDimensions(/* parameters */);
	CgsRenderTarget::SetUseDepthStencilAsTexture(/* parameters */);
	CgsRenderTarget::SetColourTargetBufferFormat(/* parameters */);
	CgsRenderTarget::SetColourTargetInUse(/* parameters */);
	CgsRenderTarget::SetNumMipMaps(/* parameters */);
	CgsRenderTarget::SetMultisampleFormat(/* parameters */);
	CgsRenderTarget::CgsRenderTargetSurface::SetInUse(/* parameters */);
	CgsRenderTarget::SetColourTargetTextureFormat(/* parameters */);
	CgsRenderTarget::SetDepthTargetInUse(/* parameters */);
}

// BrnRendererMemory.cpp:1042
void BrnRendererMemory::CreateParticleBuffer(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererMemory.cpp:1044
		CgsRenderTarget * lpRenderTarget;

		// BrnRendererMemory.cpp:1046
		uint32_t luBufferWidth;

		// BrnRendererMemory.cpp:1047
		uint32_t luBufferHeight;

		// BrnRendererMemory.cpp:1076
		uint32_t luMSAAFormat;

		// BrnRendererMemory.cpp:1084
		int32_t liTileIndex;

		// BrnRendererMemory.cpp:1085
		int32_t liCompressionTag;

	}
	CgsRenderTarget::CgsRenderTarget(/* parameters */);
	CgsRenderTarget::CgsRenderTargetSurface::CgsRenderTargetSurface(/* parameters */);
	CgsRenderTarget::SetDepthTargetBufferFormat(/* parameters */);
	CgsRenderTarget::CgsRenderTargetSurface::CgsRenderTargetSurface(/* parameters */);
	CgsRenderTarget::SetDepthTargetTextureFormat(/* parameters */);
	CgsRenderTarget::ClearColourTargetInUse(/* parameters */);
	CgsRenderTarget::SetDimensions(/* parameters */);
	CgsRenderTarget::SetColourTargetBufferFormat(/* parameters */);
	CgsRenderTarget::SetDepthTargetBufferFormat(/* parameters */);
	CgsRenderTarget::SetNumMipMaps(/* parameters */);
	CgsRenderTarget::SetColourTargetInUse(/* parameters */);
	CgsRenderTarget::SetUseDepthStencilAsTexture(/* parameters */);
	CgsRenderTarget::SetMultisampleFormat(/* parameters */);
	CgsRenderTarget::CgsRenderTargetSurface::SetInUse(/* parameters */);
	CgsRenderTarget::SetDepthTargetInUse(/* parameters */);
	CgsRenderTarget::SetColourTargetTextureFormat(/* parameters */);
	CgsRenderTarget::SetDepthTargetTextureFormat(/* parameters */);
	CgsRenderTarget::SetColourTargetTileIndex(/* parameters */);
	CgsRenderTarget::SetColourTargetCompressionBase(/* parameters */);
	CgsRenderTarget::SetDepthTargetTileIndex(/* parameters */);
	CgsRenderTarget::SetDepthTargetCompressionBase(/* parameters */);
}

// BrnRendererMemory.cpp:1112
void BrnRendererMemory::CreateSunCoronaBuffer(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererMemory.cpp:1114
		CgsRenderTarget * lpRenderTarget;

		// BrnRendererMemory.cpp:1129
		uint32_t luMSAAFormat;

		// BrnRendererMemory.cpp:1136
		int32_t liTileIndex;

		// BrnRendererMemory.cpp:1137
		int32_t liCompressionTag;

	}
	CgsRenderTarget::CgsRenderTarget(/* parameters */);
	CgsRenderTarget::CgsRenderTargetSurface::CgsRenderTargetSurface(/* parameters */);
	CgsRenderTarget::SetDepthTargetBufferFormat(/* parameters */);
	CgsRenderTarget::CgsRenderTargetSurface::CgsRenderTargetSurface(/* parameters */);
	CgsRenderTarget::SetDepthTargetTextureFormat(/* parameters */);
	CgsRenderTarget::ClearColourTargetInUse(/* parameters */);
	CgsRenderTarget::SetColourTargetBufferFormat(/* parameters */);
	CgsRenderTarget::SetUseDepthStencilAsTexture(/* parameters */);
	CgsRenderTarget::SetColourTargetInUse(/* parameters */);
	CgsRenderTarget::SetDimensions(/* parameters */);
	CgsRenderTarget::SetMultisampleFormat(/* parameters */);
	CgsRenderTarget::SetNumMipMaps(/* parameters */);
	CgsRenderTarget::CgsRenderTargetSurface::SetInUse(/* parameters */);
	CgsRenderTarget::SetColourTargetTextureFormat(/* parameters */);
	CgsRenderTarget::SetDepthTargetInUse(/* parameters */);
	CgsRenderTarget::SetColourTargetTileIndex(/* parameters */);
	CgsRenderTarget::SetColourTargetCompressionBase(/* parameters */);
}

// BrnRendererMemory.cpp:171
void BrnRendererMemory::Construct(renderengine::Device::Parameters  lRenderTargetParameters, rw::IResourceAllocator *  lpAllocator, bool  lbEnableMSAA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererMemory.cpp:173
		uint32_t i;

		// BrnRendererMemory.cpp:174
		uint32_t luDeviceWidth;

		// BrnRendererMemory.cpp:175
		uint32_t luDeviceHeight;

		// BrnRendererMemory.cpp:192
		uint32_t luMSAAFormat;

		// BrnRendererMemory.cpp:198
		int32_t liTileIndex;

		// BrnRendererMemory.cpp:199
		int32_t liCompressionTag;

		// BrnRendererMemory.cpp:291
		Parameters lBlitTextureStateParams;

	}
	{
		// BrnRendererMemory.cpp:232
		renderengine::ProgramBuffer::Parameters lVertexProgramBufferParams;

		// BrnRendererMemory.cpp:236
		ResourceDescriptor lVertexProgramResDesc;

		// BrnRendererMemory.cpp:237
		Resource lVertexProgramResource;

	}
	renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
	renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	{
		// BrnRendererMemory.cpp:243
		renderengine::ProgramBuffer::Parameters lPixelProgramBufferParams;

		// BrnRendererMemory.cpp:247
		ResourceDescriptor lPixelProgramResDesc;

		// BrnRendererMemory.cpp:248
		Resource lPixelProgramResource;

		renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
		renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
		renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
		renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		renderengine::ProgramBuffer::PS3GetRegisterCount(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	{
		// BrnRendererMemory.cpp:262
		renderengine::ProgramBuffer::Parameters lVertexProgramBufferParams;

		// BrnRendererMemory.cpp:266
		ResourceDescriptor lVertexProgramResDesc;

		// BrnRendererMemory.cpp:267
		Resource lVertexProgramResource;

		renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
		renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
		renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
		renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	{
		// BrnRendererMemory.cpp:273
		renderengine::ProgramBuffer::Parameters lPixelProgramBufferParams;

		// BrnRendererMemory.cpp:277
		ResourceDescriptor lPixelProgramResDesc;

		// BrnRendererMemory.cpp:278
		Resource lPixelProgramResource;

		renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
		renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
		renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
		renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		renderengine::ProgramBuffer::PS3GetRegisterCount(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	renderengine::TextureState::Parameters::Parameters(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

// BrnRendererMemory.cpp:1483
void BrnRendererMemory::BlitDepth(const CgsGraphics::Im2d &  lIm2d, CgsRenderTarget *  lpInSourceRenderTarget) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererMemory.cpp:1485
		RenderTarget * lpSourceRenderTarget;

		// BrnRendererMemory.cpp:1498
		Im2dTransform lTransform;

		// BrnRendererMemory.cpp:1514
		ImCommandBatchTransformTextureBlendRender::Im2dVertex[4] lVertexList;

		CgsRenderTarget::GetRenderTarget(/* parameters */);
		renderengine::ProgramBuffer::PS3SetRegisterCount(/* parameters */);
		CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::BeginRendering(/* parameters */);
		shadow::Device::ResetShadowing(/* parameters */);
		{
		}
		CgsGraphics::ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetPixelProgram(/* parameters */);
		shadow::Device::SetVertexDescriptor(/* parameters */);
		{
			// BrnRendererMemory.cpp:1506
			Parameters lBlitTextureStateParams;

			renderengine::TextureState::Parameters::Parameters(/* parameters */);
			renderengine::TextureState::Parameters::SetTexture(/* parameters */);
			renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
			renderengine::RGBA8::RGBA8(/* parameters */);
			renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
			CgsGraphics::ImRendererBase::SetState(/* parameters */);
			shadow::Device::SetState(/* parameters */);
		}
		CgsGraphics::ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetPixelProgram(/* parameters */);
		CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::Render(/* parameters */);
		{
			// BrnRendererMemory.cpp:1524
			float32_t lOffsetX;

			// BrnRendererMemory.cpp:1525
			float32_t lOffsetY;

			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		}
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		BeginBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
		renderengine::Device::DirectDraw::Parameters::SetPrimitiveType(/* parameters */);
		BeginDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(/* parameters */);
		renderengine::DrawParameters::SetPrimitiveType(/* parameters */);
		{
			renderengine::Device::PS3GPUSetLabelBackEnd(/* parameters */);
			cellGcmSetWriteBackEndLabelInline(/* parameters */);
			renderengine::Device::Flush(/* parameters */);
			{
				sys_timer_usleep(/* parameters */);
				renderengine::Device::PS3CPUGetLabelValue(/* parameters */);
			}
		}
		renderengine::VertexIteratorBaseClass::SetBuffer(/* parameters */);
		renderengine::Device::SetResource(/* parameters */);
		renderengine::DrawParameters::SetVertexCount(/* parameters */);
		{
			CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator::Write(/* parameters */);
		}
		EndBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
		CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::EndRendering(/* parameters */);
		shadow::Device::ResetShadowing(/* parameters */);
		{
		}
	}
	cellGcmSetVertexDataArrayInline(/* parameters */);
}

// BrnRendererMemory.cpp:1294
void BrnRendererMemory::BlitComposite(const CgsGraphics::Im2d &  lIm2d, CgsRenderTarget *  lpInSourceRenderTargetBase, CgsRenderTarget *  lpInSourceRenderTargetOverlay, bool  lbUseQuincunxBase, bool  lbUseQuincunxOverlay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererMemory.cpp:1296
		RenderTarget * lpSourceRenderTargetBase;

		// BrnRendererMemory.cpp:1297
		RenderTarget * lpSourceRenderTargetOverlay;

		// BrnRendererMemory.cpp:1301
		Im2dTransform lTransform;

		// BrnRendererMemory.cpp:1305
		const TextureState *const lpSourceTextureStateBase;

		// BrnRendererMemory.cpp:1306
		const TextureState *const lpSourceTextureStateOverlay;

		// BrnRendererMemory.cpp:1346
		ImCommandBatchTransformTextureBlendRender::Im2dVertex[4] lVertexList;

		// BrnRendererMemory.cpp:1359
		Vector4 lUVOffsets;

		// BrnRendererMemory.cpp:1360
		Vector4 lUVScales;

		// BrnRendererMemory.cpp:1391
		ProgramVariableHandle lUVOffsetsHandle;

		// BrnRendererMemory.cpp:1394
		ProgramVariableHandle lUVScaleHandle;

		// BrnRendererMemory.cpp:1398
		FloatShaderStateIterator lShaderStateIterator;

		// BrnRendererMemory.cpp:1431
		Vector4 lQuincunxOffsets;

		// BrnRendererMemory.cpp:1440
		Vector4 lTexelSize;

		// BrnRendererMemory.cpp:1446
		ProgramVariableHandle lQuincunxOffsetsHandle;

		// BrnRendererMemory.cpp:1460
		const RGBA lWhite;

		CgsRenderTarget::GetRenderTarget(/* parameters */);
	}
	CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::BeginRendering(/* parameters */);
	CgsRenderTarget::GetRenderTarget(/* parameters */);
	shadow::Device::ResetShadowing(/* parameters */);
	{
	}
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	shadow::Device::SetVertexDescriptor(/* parameters */);
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	renderengine::ProgramBuffer::PS3SetRegisterCount(/* parameters */);
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	rw::math::vpu::GetVector4_One(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::vpu::GetVector4_Zero(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	SetZ<VectorAxisX>(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::Render(/* parameters */);
	{
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	BeginBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
	renderengine::Device::DirectDraw::Parameters::SetPrimitiveType(/* parameters */);
	BeginDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(/* parameters */);
	renderengine::DrawParameters::SetPrimitiveType(/* parameters */);
	{
		renderengine::Device::PS3GPUSetLabelBackEnd(/* parameters */);
		cellGcmSetWriteBackEndLabelInline(/* parameters */);
		renderengine::Device::Flush(/* parameters */);
		{
			sys_timer_usleep(/* parameters */);
			renderengine::Device::PS3CPUGetLabelValue(/* parameters */);
		}
	}
	renderengine::VertexIteratorBaseClass::SetBuffer(/* parameters */);
	renderengine::Device::SetResource(/* parameters */);
	renderengine::DrawParameters::SetVertexCount(/* parameters */);
	{
		CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator::Write(/* parameters */);
	}
	EndBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::EndRendering(/* parameters */);
	shadow::Device::ResetShadowing(/* parameters */);
	{
	}
	cellGcmSetVertexDataArrayInline(/* parameters */);
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
}

// BrnRendererMemory.cpp:1199
void BrnRendererMemory::Blit(const CgsGraphics::Im2d &  lIm2d, CgsRenderTarget *  lpInSourceRenderTarget, bool  lbUseQuincunx) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererMemory.cpp:1201
		RenderTarget * lpSourceRenderTarget;

		// BrnRendererMemory.cpp:1205
		Im2dTransform lTransform;

		// BrnRendererMemory.cpp:1209
		const TextureState *const lpSourceTextureState;

		// BrnRendererMemory.cpp:1225
		ImCommandBatchTransformTextureBlendRender::Im2dVertex[4] lVertexList;

		// BrnRendererMemory.cpp:1268
		const RGBA lWhite;

		CgsRenderTarget::GetRenderTarget(/* parameters */);
	}
	CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::BeginRendering(/* parameters */);
	shadow::Device::ResetShadowing(/* parameters */);
	{
	}
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	shadow::Device::SetVertexDescriptor(/* parameters */);
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::Render(/* parameters */);
	{
		// BrnRendererMemory.cpp:1234
		float32_t lOffsetX;

		// BrnRendererMemory.cpp:1235
		float32_t lOffsetY;

		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	}
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	BeginBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
	renderengine::Device::DirectDraw::Parameters::SetPrimitiveType(/* parameters */);
	BeginDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(/* parameters */);
	renderengine::DrawParameters::SetPrimitiveType(/* parameters */);
	{
		renderengine::Device::PS3GPUSetLabelBackEnd(/* parameters */);
		cellGcmSetWriteBackEndLabelInline(/* parameters */);
		renderengine::Device::Flush(/* parameters */);
		{
			sys_timer_usleep(/* parameters */);
			renderengine::Device::PS3CPUGetLabelValue(/* parameters */);
		}
	}
	renderengine::VertexIteratorBaseClass::SetBuffer(/* parameters */);
	renderengine::Device::SetResource(/* parameters */);
	renderengine::DrawParameters::SetVertexCount(/* parameters */);
	{
		CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator::Write(/* parameters */);
	}
	EndBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::EndRendering(/* parameters */);
	cellGcmSetVertexDataArrayInline(/* parameters */);
}

// _built-in_
namespace :: {
	// BrnRendererMemory.cpp:52
	uint32_t KU32_SHADOWMAPBUFFER0_WIDTH;

	// BrnRendererMemory.cpp:53
	uint32_t KU32_SHADOWMAPBUFFER0_HEIGHT;

	// BrnRendererMemory.cpp:62
	const uint32_t KU32_ENVMAP_WIDTH = 128;

	// BrnRendererMemory.cpp:63
	const uint32_t KU32_ENVMAP_HEIGHT = 128;

	// BrnRendererMemory.cpp:65
	const uint32_t KU32_BLOOMBUFFER_WIDTH = 320;

	// BrnRendererMemory.cpp:66
	const uint32_t KU32_BLOOMBUFFER_HEIGHT = 180;

	// BrnRendererMemory.cpp:67
	const uint32_t KU32_DEPTHOFFIELD_WIDTH = 320;

	// BrnRendererMemory.cpp:68
	const uint32_t KU32_DEPTHOFFIELD_HEIGHT = 180;

	// BrnRendererMemory.cpp:69
	const uint32_t KU32_WORKBUFFER_WIDTH = 320;

	// BrnRendererMemory.cpp:70
	const uint32_t KU32_WORKBUFFER_HEIGHT = 180;

	// BrnRendererMemory.cpp:71
	const uint32_t KU32_SUN_CORONA_BUFFER_WIDTH = 1;

	// BrnRendererMemory.cpp:72
	const uint32_t KU32_SUN_CORONA_BUFFER_HEIGHT = 1;

	// BrnRendererMemory.cpp:73
	const uint32_t KU32_SNAPSHOT_BUFFER_WIDTH = 256;

	// BrnRendererMemory.cpp:74
	const uint32_t KU32_SNAPSHOT_BUFFER_HEIGHT = 256;

}

