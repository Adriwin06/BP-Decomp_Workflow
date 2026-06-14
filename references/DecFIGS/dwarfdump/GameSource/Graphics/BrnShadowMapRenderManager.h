// BrnShadowMapRenderManager.h:55
struct BrnGraphics::ShadowMapRenderManager {
protected:
	// BrnShadowMapRenderManager.h:112
	uint32_t muWriteBufferIndex;

	// BrnShadowMapRenderManager.h:113
	uint32_t muReadBufferIndex;

	// BrnShadowMapRenderManager.h:114
	bool mbForceFrontFaceCull;

public:
	// BrnShadowMapRenderManager.h:59
	void Construct(uint32_t);

	// BrnShadowMapRenderManager.h:62
	void Destruct();

	// BrnShadowMapRenderManager.h:66
	uint32_t GetWriteBufferIndex() const;

	// BrnShadowMapRenderManager.h:69
	uint32_t GetReadBufferIndex() const;

	// BrnShadowMapRenderManager.h:72
	void SwapCacheBuffers();

	// BrnShadowMapRenderManager.h:79
	void BeginRenderShadowMap(int32_t, bool, BrnRendererMemory *);

	// BrnShadowMapRenderManager.h:85
	void EndRenderShadowMap(int32_t, BrnRendererMemory *);

	// BrnShadowMapRenderManager.h:95
	void RenderAllShadowBuffers(CgsGraphics::BufferedDispatchFrame *, DispatchPacketInterpreter *, DispatchMeshContext *, BrnRendererMemory *, uint32_t, CgsGraphics::Im2d *);

	// BrnShadowMapRenderManager.h:98
	void BeginFrontFaceCullRender();

	// BrnShadowMapRenderManager.h:101
	void EndFrontFaceCullRender();

	// BrnShadowMapRenderManager.h:104
	void BeginBackFaceCullRender();

	// BrnShadowMapRenderManager.h:107
	void EndBackFaceCullRender();

}

