// BrnEnvironmentMap.h:31
namespace BrnGraphics {
	// BrnShadowMapRenderManager.cpp:98
	bool gbCombinedShadowMapViewport;

}

// BrnShadowMapRenderManager.cpp:37
void BrnGraphics::ShadowMapRenderManager::Construct(uint32_t  luBaseRenderTargetIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnShadowMapRenderManager.cpp:53
void BrnGraphics::ShadowMapRenderManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnShadowMapRenderManager.cpp:223
void BrnGraphics::ShadowMapRenderManager::EndRenderShadowMap(int32_t  liIndex, BrnRendererMemory *  lpAllocatedRenderTargets) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnShadowMapRenderManager.cpp:226
		bool sbDebugZCull;

	}
	{
		// BrnShadowMapRenderManager.cpp:229
		uint32_t suNumTilesTested_ZClear;

		// BrnShadowMapRenderManager.cpp:230
		uint32_t suNumTilesCulled_ZClear;

		// BrnShadowMapRenderManager.cpp:231
		uint32_t suRefVal;

	}
}

// BrnShadowMapRenderManager.cpp:258
void BrnGraphics::ShadowMapRenderManager::BeginFrontFaceCullRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	shadow::Device::SetState(/* parameters */);
	shadow::Device::LockRasteriserState(/* parameters */);
}

// BrnShadowMapRenderManager.cpp:268
void BrnGraphics::ShadowMapRenderManager::EndFrontFaceCullRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	shadow::Device::UnlockRasteriserState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
}

// BrnShadowMapRenderManager.cpp:278
void BrnGraphics::ShadowMapRenderManager::BeginBackFaceCullRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	shadow::Device::SetState(/* parameters */);
	shadow::Device::LockRasteriserState(/* parameters */);
}

// BrnShadowMapRenderManager.cpp:288
void BrnGraphics::ShadowMapRenderManager::EndBackFaceCullRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	shadow::Device::UnlockRasteriserState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
}

// BrnShadowMapRenderManager.cpp:104
void BrnGraphics::ShadowMapRenderManager::BeginRenderShadowMap(int32_t  liIndex, bool  lbClear, BrnRendererMemory *  lpAllocatedRenderTargets) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnRendererMemory::GetShadowMapBuffer(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	{
		// BrnShadowMapRenderManager.cpp:119
		uint32_t luShadowMapWidth;

		// BrnShadowMapRenderManager.cpp:120
		uint32_t luShadowMapHeight;

		// BrnShadowMapRenderManager.cpp:121
		ViewportParameters lViewportParams;

		// BrnShadowMapRenderManager.cpp:124
		ScissorRectParameters lScissorParams;

		BrnRendererMemory::GetShadowMapBuffer(/* parameters */);
		renderengine::ViewportParameters::ViewportParameters(/* parameters */);
		CgsRenderTarget::GetHeight(/* parameters */);
		CgsRenderTarget::GetWidth(/* parameters */);
		renderengine::ViewportParameters::SetRectangle(/* parameters */);
		renderengine::ScissorRectParameters::SetRectangle(/* parameters */);
	}
	{
		// BrnShadowMapRenderManager.cpp:205
		ClearDepthStencilParameters lClearZbuffer;

		renderengine::ClearDepthStencilParameters::ClearDepthStencilParameters(/* parameters */);
	}
	BrnRendererMemory::GetShadowMapBuffer(/* parameters */);
	BrnRendererMemory::GetShadowMapBuffer(/* parameters */);
	BrnRendererMemory::GetShadowMapBuffer(/* parameters */);
	CgsRenderTarget::SetRenderTargetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	{
		// BrnShadowMapRenderManager.cpp:149
		uint32_t luShadowMapWidth;

		// BrnShadowMapRenderManager.cpp:150
		uint32_t luShadowMapHeight;

		// BrnShadowMapRenderManager.cpp:151
		uint32_t luOffsetX;

		// BrnShadowMapRenderManager.cpp:152
		uint32_t luOffsetY;

		// BrnShadowMapRenderManager.cpp:159
		ViewportParameters lViewportParams;

		// BrnShadowMapRenderManager.cpp:162
		ScissorRectParameters lScissorParams;

		CgsRenderTarget::SetRenderTargetState(/* parameters */);
		CgsRenderTarget::GetWidth(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		renderengine::ViewportParameters::ViewportParameters(/* parameters */);
		renderengine::ViewportParameters::SetRectangle(/* parameters */);
		renderengine::ScissorRectParameters::SetRectangle(/* parameters */);
	}
}

// BrnShadowMapRenderManager.cpp:72
void BrnGraphics::ShadowMapRenderManager::RenderAllShadowBuffers(CgsGraphics::BufferedDispatchFrame *  lpDispatchFrame, DispatchPacketInterpreter *  lpDispatchInterpreter, DispatchMeshContext *  lpDispatchMeshContext, BrnRendererMemory *  lpAllocatedRenderTargets, uint32_t  lxRendererFlags, CgsGraphics::Im2d *  lp2dRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnShadowMapRenderManager.cpp:75
		float32_t lGameTime;

	}
	CgsGraphics::DispatchPacketInterpreter::SetTime(/* parameters */);
	CgsGraphics::DispatchFrame::GetList(/* parameters */);
	CgsGraphics::DispatchFrame::GetList(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

