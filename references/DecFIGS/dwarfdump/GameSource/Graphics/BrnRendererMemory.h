// BrnRendererMemory.h:38
using rw::graphics::postfx;

// BrnRendererMemory.h:61
struct BrnRendererMemory {
private:
	// BrnRendererMemory.h:85
	CgsRenderTarget *[12] mpRenderTarget;

	// BrnRendererMemory.h:88
	ProgramBuffer * mpDepthBlitVertexProgramBuffer;

	// BrnRendererMemory.h:89
	ProgramBuffer * mpDepthBlitPixelProgramBuffer;

	// BrnRendererMemory.h:90
	uint8_t mu8DepthBlitTempRegisterCountCurrent;

	// BrnRendererMemory.h:91
	uint8_t mu8DepthBlitTempRegisterCountOriginal;

	// BrnRendererMemory.h:94
	ProgramBuffer * mpCompositeBlitVertexProgramBuffer;

	// BrnRendererMemory.h:95
	ProgramBuffer * mpCompositeBlitPixelProgramBuffer;

	// BrnRendererMemory.h:96
	uint8_t mu8CompositeBlitTempRegisterCountCurrent;

	// BrnRendererMemory.h:97
	uint8_t mu8CompositeBlitTempRegisterCountOriginal;

	// BrnRendererMemory.h:100
	TextureState * mpBlitTextureState;

	// BrnRendererMemory.h:101
	Resource mBlitTextureStateResource;

	// BrnRendererMemory.h:109
	uint32_t mu32ScreenWidth;

	// BrnRendererMemory.h:110
	uint32_t mu32ScreenHeight;

	// BrnRendererMemory.h:112
	bool mbIsSD;

	// BrnRendererMemory.h:113
	uint8_t mu8TileIndex;

	// BrnRendererMemory.h:114
	uint8_t mu8ZCullIndex;

	// BrnRendererMemory.h:115
	uint32_t muZCullAddress;

	// BrnRendererMemory.h:116
	uint32_t muTileCompressionAddress;

	// BrnRendererMemory.h:279
	void * mpSnapshotBufferPixels;

	// BrnRendererMemory.h:121
	void CreateAntiAliasBuffer(rw::IResourceAllocator *, bool);

	// BrnRendererMemory.h:125
	void CreateRenderTargetBuffers(rw::IResourceAllocator *);

	// BrnRendererMemory.h:129
	void CreateShadowmapBuffer(rw::IResourceAllocator *);

	// BrnRendererMemory.h:133
	void CreateEnvmapBuffer(rw::IResourceAllocator *);

	// BrnRendererMemory.h:137
	void CreateDownSampleBuffer(rw::IResourceAllocator *);

	// BrnRendererMemory.h:143
	void CreateBackBuffer(rw::IResourceAllocator *, uint32_t, uint32_t);

	// BrnRendererMemory.h:147
	void CreateBloomBuffer(rw::IResourceAllocator *);

	// BrnRendererMemory.h:151
	void CreateDepthOfFieldBuffer(rw::IResourceAllocator *);

	// BrnRendererMemory.h:155
	void CreateWorkBuffer(rw::IResourceAllocator *);

	// BrnRendererMemory.h:159
	void CreateParticleBuffer(rw::IResourceAllocator *);

	// BrnRendererMemory.h:163
	void CreateSunCoronaBuffer(rw::IResourceAllocator *);

	// BrnRendererMemory.h:167
	void CreateSnapShotBuffer(rw::IResourceAllocator *);

	// BrnRendererMemory.h:178
	void PS3AddTileReservation(uint32_t, uint32_t, uint32_t, uint32_t, int32_t &, int32_t &);

	// BrnRendererMemory.h:186
	void PS3AddZCullReservation(uint32_t, uint32_t, int32_t &, int32_t &, int32_t);

public:
	// BrnRendererMemory.h:196
	void Construct(renderengine::Device::Parameters, rw::IResourceAllocator *, bool);

	// BrnRendererMemory.h:200
	void Destruct();

	// BrnRendererMemory.h:203
	bool Prepare();

	// BrnRendererMemory.h:206
	bool Release();

	// BrnRendererMemory.h:213
	void Blit(CgsGraphics::Im2d &, CgsRenderTarget *, bool);

	// BrnRendererMemory.h:221
	void BlitComposite(CgsGraphics::Im2d &, CgsRenderTarget *, CgsRenderTarget *, bool, bool);

	// BrnRendererMemory.h:226
	void BlitDepth(CgsGraphics::Im2d &, CgsRenderTarget *);

	// BrnRendererMemory.h:230
	CgsRenderTarget * GetAntiAliasBuffer();

	// BrnRendererMemory.h:233
	CgsRenderTarget * GetDownSampleBuffer();

	// BrnRendererMemory.h:236
	CgsRenderTarget * GetBackBuffer();

	// BrnRendererMemory.h:239
	CgsRenderTarget * GetShadowMapBuffer(int32_t);

	// BrnRendererMemory.h:242
	CgsRenderTarget * GetEnvMapBuffer();

	// BrnRendererMemory.h:245
	CgsRenderTarget * GetBloomBuffer();

	// BrnRendererMemory.h:248
	CgsRenderTarget * GetDepthOfFieldBuffer();

	// BrnRendererMemory.h:251
	CgsRenderTarget * GetWorkBuffer();

	// BrnRendererMemory.h:254
	CgsRenderTarget * GetParticleBuffer();

	// BrnRendererMemory.h:257
	CgsRenderTarget * GetSunCoronaBuffer();

	// BrnRendererMemory.h:261
	CgsRenderTarget * GetSnapShotBuffer();

	// BrnRendererMemory.h:264
	void * GetSnapShotBufferPixels();

	// BrnRendererMemory.h:269
	CgsRenderTarget * GetRenderTarget(uint32_t);

}

