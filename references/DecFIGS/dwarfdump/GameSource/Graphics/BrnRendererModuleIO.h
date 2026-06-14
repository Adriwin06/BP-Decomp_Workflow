// BrnRendererModuleIO.h:57
namespace RendererIO {
}

// BrnRendererModuleIO.h:57
namespace RendererIO {
	struct RenderSwitches;

	struct ExternallyVisiblePerformanceMonitors;

	struct InputBuffer;

	struct OutputBuffer;

}

// BrnRendererModuleIO.h:68
struct RendererIO::RenderSwitches {
	// BrnRendererModuleIO.h:70
	bool mbRenderShadows;

	// BrnRendererModuleIO.h:71
	bool mbRenderEnvmap;

	// BrnRendererModuleIO.h:72
	bool mbRenderWorld;

	// BrnRendererModuleIO.h:73
	bool mbRenderProps;

	// BrnRendererModuleIO.h:74
	bool mbRenderRaceCars;

	// BrnRendererModuleIO.h:75
	bool mbRenderTraffic;

public:
	// BrnRendererModuleIO.h:79
	void Construct();

}

// BrnRendererModuleIO.h:108
struct RendererIO::ExternallyVisiblePerformanceMonitors {
	// BrnRendererModuleIO.h:110
	int32_t miCPU_DT_RenderShadowmapNear;

	// BrnRendererModuleIO.h:111
	int32_t miCPU_DT_RenderShadowmapFar;

	// BrnRendererModuleIO.h:112
	int32_t miCPU_DT_RenderEnvmap;

	// BrnRendererModuleIO.h:113
	int32_t miCPU_DT_RenderPreZ;

	// BrnRendererModuleIO.h:114
	int32_t miCPU_DT_RenderWorldOpaque;

	// BrnRendererModuleIO.h:115
	int32_t miCPU_DT_RenderWorldTransparent;

	// BrnRendererModuleIO.h:116
	int32_t miGPU_RenderShadowmaps;

	// BrnRendererModuleIO.h:117
	int32_t miGPU_RenderEnvmap;

	// BrnRendererModuleIO.h:118
	int32_t miGPU_RenderPreZ;

	// BrnRendererModuleIO.h:119
	int32_t miGPU_RenderWorldOpaque;

	// BrnRendererModuleIO.h:120
	int32_t miGPU_RenderWorldTransparent;

}

// BrnRendererModuleIO.h:132
struct RendererIO::InputBuffer : public IOBuffer {
private:
	// BrnRendererModuleIO.h:150
	Camera mBrnCamera;

public:
	// BrnRendererModuleIO.h:136
	void Construct();

	// BrnRendererModuleIO.h:140
	void Destruct();

	// BrnRendererModuleIO.h:144
	void SetBrnCamera(const Camera &);

	// BrnRendererModuleIO.h:147
	const Camera & GetBrnCamera() const;

}

// BrnRendererModuleIO.h:162
struct RendererIO::OutputBuffer : public IOBuffer {
private:
	// BrnRendererModuleIO.h:330
	CgsGraphics::DispatchFrame * mpDispatchFrame;

	// BrnRendererModuleIO.h:332
	CgsGraphics::Im2dRenderBuffer * mpIm2dRenderBuffer;

	// BrnRendererModuleIO.h:336
	CgsGraphics::Im3dRenderBuffer * mpIm3dRenderBuffer;

	// BrnRendererModuleIO.h:337
	CgsGraphics::Im3dRenderBufferUntex * mpIm3dRenderBufferUntex;

	// BrnRendererModuleIO.h:339
	CgsGraphics::Im3dRenderBuffer * mpIm3dDebugRenderBuffer;

	// BrnRendererModuleIO.h:340
	CgsGraphics::Im2dRenderBuffer * mpIm2dDebugRenderBuffer;

	// BrnRendererModuleIO.h:342
	CgsGraphics::Im3dRenderBuffer * mpIm3dRenderBufferRacePosition;

	// BrnRendererModuleIO.h:343
	CgsGraphics::Im3dRenderBuffer * mpIm3dRenderBufferMenusAndHud;

	// BrnRendererModuleIO.h:345
	BrnEffectsFrame * mpBaseEffectsFrame;

	// BrnRendererModuleIO.h:346
	BrnEffectsFrame *[4] mapWorldEffectsFrames;

	// BrnRendererModuleIO.h:347
	BrnEffectsFrame *[2] mapFXEventsEffectsFrames;

	// BrnRendererModuleIO.h:349
	BrnShaderConstantsFrame * mpShaderConstantsFrame;

	// BrnRendererModuleIO.h:351
	BrnBlobbyShadowManager::BrnBlobbyShadowBuffer * mpBlobbyShadowBuffer;

	// BrnRendererModuleIO.h:352
	BrnCoronaManager::BrnSubmissionInterface * mpCoronaSubmissionInteface;

	// BrnRendererModuleIO.h:354
	Camera mBrnCamera;

	// BrnRendererModuleIO.h:355
	RenderSwitches mRenderSwitches;

	// BrnRendererModuleIO.h:356
	ExternallyVisiblePerformanceMonitors mExternallyVisiblePerfmons;

	// BrnRendererModuleIO.h:358
	LinearMalloc * mpReusableLoadingScreenAllocator;

	// BrnRendererModuleIO.h:362
	void * mpSnapshotBuffer;

public:
	// BrnRendererModuleIO.h:167
	void Construct();

	// BrnRendererModuleIO.h:171
	void Destruct();

	// BrnRendererModuleIO.h:175
	void SetDispatchFrame(CgsGraphics::DispatchFrame *);

	// BrnRendererModuleIO.h:178
	CgsGraphics::DispatchFrame * GetDispatchFrame() const;

	// BrnRendererModuleIO.h:182
	void SetIm2dRenderBuffer(CgsGraphics::Im2dRenderBuffer *);

	// BrnRendererModuleIO.h:190
	void SetIm3dRenderBuffer(CgsGraphics::Im3dRenderBuffer *);

	// BrnRendererModuleIO.h:193
	void SetIm3dRenderBufferUntex(CgsGraphics::Im3dRenderBufferUntex *);

	// BrnRendererModuleIO.h:197
	void SetIm3dRenderBufferRacePosition(CgsGraphics::Im3dRenderBuffer *);

	// BrnRendererModuleIO.h:200
	void SetIm3dRenderBufferMenusAndHud(CgsGraphics::Im3dRenderBuffer *);

	// BrnRendererModuleIO.h:204
	void SetIm3dDebugRenderBuffer(CgsGraphics::Im3dRenderBuffer *);

	// BrnRendererModuleIO.h:207
	void SetIm2dDebugRenderBuffer(CgsGraphics::Im2dRenderBuffer *);

	// BrnRendererModuleIO.h:211
	CgsGraphics::Im2dRenderBuffer * GetIm2dRenderBuffer() const;

	// BrnRendererModuleIO.h:219
	CgsGraphics::Im3dRenderBuffer * GetIm3dRenderBuffer() const;

	// BrnRendererModuleIO.h:222
	CgsGraphics::Im3dRenderBufferUntex * GetIm3dRenderBufferUntex() const;

	// BrnRendererModuleIO.h:226
	CgsGraphics::Im3dRenderBuffer * GetIm3dRenderBufferRacePosition() const;

	// BrnRendererModuleIO.h:229
	CgsGraphics::Im3dRenderBuffer * GetIm3dRenderBufferMenusAndHud() const;

	// BrnRendererModuleIO.h:233
	CgsGraphics::Im3dRenderBuffer * GetIm3dDebugRenderBuffer() const;

	// BrnRendererModuleIO.h:236
	CgsGraphics::Im2dRenderBuffer * GetIm2dDebugRenderBuffer() const;

	// BrnRendererModuleIO.h:240
	void SetBaseEffectsFrame(BrnEffectsFrame *);

	// BrnRendererModuleIO.h:243
	BrnEffectsFrame * GetBaseEffectsFrame() const;

	// BrnRendererModuleIO.h:246
	void SetWorldEffectsFrame(uint8_t, BrnEffectsFrame *);

	// BrnRendererModuleIO.h:249
	BrnEffectsFrame * GetWorldEffectsFrame(uint8_t) const;

	// BrnRendererModuleIO.h:252
	void SetFXEventsEffectsFrame(uint8_t, BrnEffectsFrame *);

	// BrnRendererModuleIO.h:255
	BrnEffectsFrame * GetFXEventsEffectsFrame(uint8_t) const;

	// BrnRendererModuleIO.h:259
	void SetShaderConstantsFrame(BrnShaderConstantsFrame *);

	// BrnRendererModuleIO.h:262
	BrnShaderConstantsFrame * GetShaderConstantsFrame() const;

	// BrnRendererModuleIO.h:267
	void SetBlobbyShadowBuffer(BrnBlobbyShadowManager::BrnBlobbyShadowBuffer *);

	// BrnRendererModuleIO.h:270
	BrnBlobbyShadowManager::BrnBlobbyShadowBuffer * GetBlobbyShadowBuffer() const;

	// BrnRendererModuleIO.h:275
	void SetCoronaSubmissionInterface(BrnCoronaManager::BrnSubmissionInterface *);

	// BrnRendererModuleIO.h:278
	BrnCoronaManager::BrnSubmissionInterface * GetCoronaSubmissionInterface() const;

	// BrnRendererModuleIO.h:282
	void SetBrnCamera(const Camera &);

	// BrnRendererModuleIO.h:285
	const Camera & GetBrnCamera() const;

	// BrnRendererModuleIO.h:289
	void SetRenderSwitches(const RenderSwitches &);

	// BrnRendererModuleIO.h:292
	const RenderSwitches & GetRenderSwitches() const;

	// BrnRendererModuleIO.h:296
	void SetSnapShotBuffer(void *);

	// BrnRendererModuleIO.h:299
	void * GetSnapShotBuffer() const;

	// BrnRendererModuleIO.h:305
	void SetExternallyVisiblePerfMons(const ExternallyVisiblePerformanceMonitors &);

	// BrnRendererModuleIO.h:308
	const ExternallyVisiblePerformanceMonitors & GetExternallyVisiblePerfMons() const;

	// BrnRendererModuleIO.h:320
	LinearMalloc * GetReusableLoadingScreenAllocator() const;

	// BrnRendererModuleIO.h:323
	void SetReusableLoadingScreenAllocator(LinearMalloc *);

}

// BrnRendererModuleIO.h:57
namespace RendererIO {
	struct RenderSwitches;

	struct ExternallyVisiblePerformanceMonitors;

	struct OutputBuffer;

}

// BrnRendererModuleIO.h:57
namespace RendererIO {
	struct RenderSwitches;

}

