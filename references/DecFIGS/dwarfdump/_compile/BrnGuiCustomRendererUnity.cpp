struct _CGprogram;

struct _CGparameter;

struct AptSharedPtr<AptFile>;

struct AptFloatArrayCXForm;

struct AptUint32CXForm;

struct AptSavedInputRecord;

// Declaration
struct AptValue {
	// AptValue.h:596
	enum CIH_ONLY {
		CO_CIH = 0,
	}

protected:
	// AptValue.h:554
	extern const uint32_t MAX_REFCOUNT = 4095;

}

void CgsDev::StrStreamBase::operator<<(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocVertices(uint32_t  luNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1326
		uint32_t luNewWritePos;

		{
			// CgsImRenderBuffer.h:1335
			ImCommandBatchTransformTextureBlendRender::Im2dVertex * lpVertexPtr;

			{
				// CgsImRenderBuffer.h:1334
				uintptr_t luAddress;

			}
		}
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::AllocVertices(uint32_t  luNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1326
		uint32_t luNewWritePos;

		{
			// CgsImRenderBuffer.h:1335
			Im3dVertex * lpVertexPtr;

			{
				// CgsImRenderBuffer.h:1334
				uintptr_t luAddress;

			}
		}
	}
}

void CgsCore::SPrintf(char *  lpcDest, unsigned int  luBytes, const char *  lpcFormat, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:106
		va_list lArgument;

		// CgsStringUtils.h:107
		int32_t lNumBytesCopied;

	}
}

void CgsCore::SnPrintf(char *  lpcDest, unsigned int  luBytes, const char *  lpcFormat, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:129
		va_list lArgument;

		// CgsStringUtils.h:130
		int32_t lNumBytesCopied;

	}
}

void CgsGui::CustomRenderComponentInterface::SetRenderEnabled(bool  lbRenderEnabled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::CustomRenderComponentInterface::SetRenderEnabled(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::CustomRenderComponentInterface::GetRenderLayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavMapIcon::SetRotation(float32_t  lfRotationInRadians) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavMapIcon::SetAlpha(float32_t  lfAlpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavMapIcon::SetState(BrnGui::MapIconBrnBase::IconState  leState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavMapIcon::GetPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavMapIcon::GetState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavMapIcon::SetAlpha(float32_t  lfAlpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavMapIcon::SetState(BrnGui::MapIconBrnBase::IconState  leState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavMapIcon::GetPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavMapIcon::GetState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavIconRenderer::GetRenderLayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BoostBarRenderer::GetRenderLayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessageRenderer::GetRenderLayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CustomRendererManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCustomRenderer.cpp:68
		int32_t i;

	}
}

void BrnGui::NetworkPlayerImageRenderer::SetFlaptRenderer(BrnFlapt::FlaptRenderer *  lpFlaptRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CustomRendererManager::SetFlaptRenderer(BrnFlapt::FlaptRenderer *  lpRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CustomRendererManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCustomRenderer.cpp:250
		int32_t i;

	}
}

void BrnGui::BlackBarRenderer::RecvEvent(const CgsModule::Event *  lpEvent, int32_t  lEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBlackBarRenderer.cpp:120
		const GuiEventSetBlackBars * lpSizeEvent;

	}
}

void BrnGui::CustomRendererManager::GetComponentID(int32_t  liComponent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CustomRendererManager::SetComponentRenderable(int32_t  liComponent, bool  lbRenderable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::CustomRenderComponentInterface::GetRenderEnabled() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CustomRendererManager::GetComponentRenderable(int32_t  liComponent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CustomRendererManager::SetAllRenderingState(bool  lbRenderingEnable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCustomRenderer.cpp:730
		int32_t liIndex;

	}
}

void BrnGui::CreditsTextRenderer::SetTextRenderer(TextRenderer *  lpTextRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::AboveCarRenderer::SetTextRenderer(TextRenderer *  lpTextRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavIconRenderer::SetTextRenderer(TextRenderer *  lpTextRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessageRenderer::SetTextRenderer(TextRenderer *  lpTextRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CustomRendererManager::SetTextRenderer(TextRenderer *  lpTextRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AboveCarRenderer::SetTextRenderer(/* parameters */);
	CrashNavIconRenderer::SetTextRenderer(/* parameters */);
	InGameMessageRenderer::SetTextRenderer(/* parameters */);
}

void BrnGui::CreditsTextRenderer::SetLanguageManager(LanguageManager *  lpLanguageManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::AboveCarRenderer::SetLanguageManager(LanguageManager *  lpLanguageManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavIconRenderer::SetLanguageManager(LanguageManager *  lpLanguageManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessageRenderer::SetLanguageManager(LanguageManager *  lpLanguageManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CustomRendererManager::SetLanguageManager(LanguageManager *  lpLanguageManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AboveCarRenderer::SetLanguageManager(/* parameters */);
	CrashNavIconRenderer::SetLanguageManager(/* parameters */);
	InGameMessageRenderer::SetLanguageManager(/* parameters */);
}

void BrnGui::CustomRendererManager::GetNumComponents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CustomRendererManager::GetNumTexturesForComponent(int32_t  liComponent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CustomMeshRenderer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CustomMeshRenderer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CustomMeshRenderer::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavRenderer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavRenderer::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavRenderer::GetID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::NetworkPlayerImageRenderer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerImageRenderer.cpp:67
		int32_t liTextureIndex;

		// BrnNetworkPlayerImageRenderer.cpp:68
		int32_t liIndex;

	}
}

void BrnGui::NetworkPlayerImageRenderer::PrepareDefaultTexture() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::NetworkPlayerImageRenderer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::NetworkPlayerImageRenderer::ClearTextures() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerImageRenderer.cpp:683
		int32_t liTextureIndex;

		// BrnNetworkPlayerImageRenderer.cpp:684
		int32_t liTextureBuffer;

	}
}

void BrnGui::NetworkPlayerImageRenderer::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::NetworkPlayerImageRenderer::SetClearTextures() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::NetworkPlayerImageRenderer::RenderComponent(ImRendererSet *  lpImRenderers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::NetworkPlayerImageRenderer::GetID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::NetworkPlayerImageRenderer::GetRenderOutput(int32_t  liTextureIndex, int32_t *  lpiShaderProgram, ImRendererSet *  lpImRenderers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::NetworkPlayerImageRenderer::SwapBuffers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerImageRenderer.cpp:604
		int32_t liShaderProgram;

	}
}

void BrnGui::CustomRendererManager::EndOfFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkTexture::GetFormat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::NetworkPlayerImageRenderer::CopyTexture(const GuiEventNetworkPlayerImage *  lpEvent, int32_t  liDestTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::NetworkPlayerImageRenderer::GetNumTextures() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MainMapRenderer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMainMapRenderer.cpp:232
		int32_t i;

	}
}

void BrnGui::MainMapRenderer::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MainMapRenderer::RenderRoute(const Array<rw::math::vpu::Vector3,5120u> *  lpRouteInfo, CgsGraphics::Im2dRenderBuffer *  lpIm2dRenderBuffer, const const rw::math::vpu::Matrix33 &  lm33WorldToView) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MainMapRenderer::GetID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MainMapRenderer::ClearFadeState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BoostBarRenderer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BoostBarRenderer::HandleFirstEvent(const GuiEventBoostInfo *  lpBoostBarInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BoostBarRenderer::CalculateBoostShardLifetime(int32_t  liShardIndex, float32_t  lfTimeNow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostBarRenderer.cpp:2104
		const float32_t KF_TIMESTEP_BETWEEN_SHARDS;

		// BrnBoostBarRenderer.cpp:2107
		float32_t lfBirthtime;

	}
}

void BrnGui::BoostBarRenderer::GetID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BoostBarRenderer::DetermineBoostBarMultiplier() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostBarRenderer.cpp:2285
		float32_t lfMaxBoost;

	}
}

void BrnGui::BoostBarRenderer::ForceSetBoostBarColours(Vector3  lv3InnerColour, Vector3  lv3OuterColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostBarRenderer.cpp:2378
		int liBoostType;

	}
}

void BrnGui::AboveCarRenderer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::AboveCarRenderer::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::AboveCarRenderer::GetID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ProgressBarRenderer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ProgressBarRenderer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ProgressBarRenderer::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ProgressBarRenderer::GetID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BlackBarRenderer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BlackBarRenderer::Prepare(GuiEventQueueSmall *  lpOutputEventQueue, rw::IResourceAllocator *  lpHeapAllocator, rw::IResourceAllocator *  lpTextureAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BlackBarRenderer::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BlackBarRenderer::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BlackBarRenderer::GetID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessageRenderer::GetID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<64u>::IsZero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavIconRenderer::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavIconRenderer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavIconRenderer::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavIconRenderer::GetID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CreditsTextRenderer::Prepare(GuiEventQueueSmall *  lpOutputEventQueue, rw::IResourceAllocator *  lpAllocator, rw::IResourceAllocator *  lpTextureAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CreditsTextRenderer::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CreditsTextRenderer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CreditsTextRenderer::GetID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavComponent::UpdateTrackPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavComponent::StartRoaming(float32_t  lfRoamDuration) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavComponent::AppendExpectedComponentList(uint32_t *  lpuExpectedComponentIds, uint32_t *  lpuNumExpectedComponents, uint32_t  luMaxExpectedComponents) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNav.cpp:648
		int32_t liIter;

	}
}

void BrnGui::SatNavComponent::SetIconVisibility(bool  lbVisible) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavComponent::SetEventType(BrnGameState::GameStateModuleIO::EGameModeType  leCurrentGameMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::operator++(const BrnGui::MainMapComponent::ZoomFactor &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMainMap.h:265
		BrnGui::MainMapComponent::ZoomFactor leOldEnumIndex;

	}
}

void BrnGui::MainMapComponent::SetStandardDefZoomParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMainMap.cpp:663
		BrnGui::MainMapComponent::ZoomFactor leZoomFactor;

		operator++(/* parameters */);
	}
}

void BrnGui::MainMapComponent::SetZoomLevel(float32_t  lfZoomLevel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::operator--(const BrnGui::MainMapComponent::ZoomFactor &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMainMap.h:265
		BrnGui::MainMapComponent::ZoomFactor leOldEnumIndex;

	}
}

void BrnGui::MainMapComponent::DecreaseZoom() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator--(/* parameters */);
}

void BrnGui::SatNavTile::sRect::sRect(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavTile::sRect::sRect(None, None, None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::CgsHash::CalculateHash(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SatNavTileResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SatNavTileResourceType::GetImportCount(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SatNavTileResourceType::GetImportPointer(const void *  lpResource, uint32_t  luImportIndex, uint32_t *  lpuOutOffset, const void **  lppOutResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNavTileResourceType.cpp:241
		const SatNavTile * lpTile;

	}
}

void CgsResource::SatNavTileDirectoryResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavMapIcon::SetIconText(const char *  lpText, bool  lbLocalise) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavMapIcon::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNavIcon.cpp:333
		Vector2 lPosition;

	}
}

void BrnGui::SatNavMapIcon::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavMapIcon::SetIconText(const char *  lpText, bool  lbLocalise) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavTile::GetBoundingBox(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavTile::GetWorldBoundingBox(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MainMapComponent::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::TextureState::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::Free(const const Resource &  resource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::AllocVertices(uint32_t  luNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1326
		uint32_t luNewWritePos;

		{
			// CgsImRenderBuffer.h:1335
			Im3dUntexVertex * lpVertexPtr;

			{
				// CgsImRenderBuffer.h:1334
				uintptr_t luAddress;

			}
		}
	}
}

void CgsContainers::BitArray<64u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<64u>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void BrnGui::InGameMessageRenderer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<void>(const void *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnGui::SatNavTileDirectory::sTileItem>(BrnGui::SatNavTileDirectory::sTileItem *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnGui::SatNavTileDirectory::sTileItem>(const BrnGui::SatNavTileDirectory::sTileItem *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnGui::SatNavTileDirectory::sTileItem>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnGui::SatNavTileDirectory::sTileItem>(BrnGui::SatNavTileDirectory::sTileItem *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Abs<float>(const const float &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:108
		float r;

	}
}

void BrnGui::BoostBarRenderer::ForceSetBoostBarColours(BrnWorld::EBoostType  lType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostBarRenderer.cpp:2344
		Vector3 lv3OuterColour;

		// BrnBoostBarRenderer.cpp:2345
		Vector3 lv3InnerColour;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:231
		float ret;

		{
			// vec_float_type_inline.h:232
			VectorIntrinsicUnion vecUnion;

		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:231
		float ret;

		{
			// vec_float_type_inline.h:232
			VectorIntrinsicUnion vecUnion;

		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:231
		float ret;

		{
			// vec_float_type_inline.h:232
			VectorIntrinsicUnion vecUnion;

		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:231
		float ret;

		{
			// vec_float_type_inline.h:232
			VectorIntrinsicUnion vecUnion;

		}
	}
}

void CgsGui::ParticleSystem2d::IsPrepared() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ParticleSystem2d::IsConstructed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ParticleSystem2d::SetParticleAnimRate(float32_t  lfParticleAnimRate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ParticleSystem2d::SetParticleAnimMode(CgsGui::BillboardRenderer::eAnimMode  lePartcleAnimMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ParticleSystem2d::SetParticleSpeed(float32_t  lfParticleSpeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ParticleSystem2d::SetParticleStartSize(float32_t  lfParticleStartSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ParticleSystem2d::SetParticleEndSize(float32_t  lfParticleEndSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector3  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:453
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(float  f0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_macros.h:237
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_macros.h:238
			VectorIntrinsicUnion u;

		}
	}
}

void CgsGui::ParticleSystem2d::SetParticleStartColour(const const rw::math::vpu::Vector4 &  lv4ParticleStartColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ParticleSystem2d::SetParticleEndColour(const const rw::math::vpu::Vector4 &  lv4ParticleEndColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ParticleSystem2d::SetEmitterDir(const const rw::math::vpu::Vector2 &  lv2EmitterDir) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ParticleSystem2d::SetEmitterPos(const const rw::math::vpu::Vector2 &  lv2EmitterPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MainMapRenderer::PreparePulseParticleSystem(const ParticleSystem2d &  lParticleSystem, float32_t  lfTimeNow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::ParticleSystem2d::IsPrepared(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	CgsGui::ParticleSystem2d::SetParticleSpeed(/* parameters */);
	CgsGui::ParticleSystem2d::SetParticleAnimRate(/* parameters */);
	CgsGui::ParticleSystem2d::SetParticleStartSize(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	CgsGui::ParticleSystem2d::SetParticleEndSize(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	CgsGui::ParticleSystem2d::SetParticleAnimMode(/* parameters */);
}

void rw::math::vpu::operator-(const const rw::math::vpu::VecFloatRefIndex &  a, const const rw::math::vpu::VecFloatRefIndex &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1496
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1497
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1499
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		{
			// vec_float_operation_inline.h:1498
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
		{
			// vec_float_operation_inline.h:1500
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
	}
}

void rw::math::vpu::operator/(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1714
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1715
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			// vec_float_operation_inline.h:1715
			float floatRecip;

			{
				// vec_float_operation_inline.h:1715
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator+(const VecFloat  a, const const rw::math::vpu::VecFloatRefIndex &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1265
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1266
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		{
			// vec_float_operation_inline.h:1267
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
	}
}

void BrnGui::MainMapComponent::CalculateViewPaddingOffset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMainMap.cpp:303
		float32_t lfViewCentreX;

		// BrnMainMap.cpp:304
		float32_t lfViewCentreY;

		// BrnMainMap.cpp:305
		float32_t lfPaddingCentreX;

		// BrnMainMap.cpp:306
		float32_t lfPaddingCentreY;

		// BrnMainMap.cpp:308
		float32_t lfWidthOffset;

		// BrnMainMap.cpp:309
		float32_t lfHeightOffset;

		rw::math::vpu::operator-(/* parameters */);
	}
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	{
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
}

void rw::math::vpu::Min(const rw::math::vpu::Vector2  v0, const rw::math::vpu::Vector2  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:301
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::Max(const rw::math::vpu::Vector2  v0, const rw::math::vpu::Vector2  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:308
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1440
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1441
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1443
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1440
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1441
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1443
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator/<VectorAxisX, VectorAxisZ>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1732
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1733
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1735
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		{
			// vec_float_operation_inline.h:1737
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vec_float_operation_inline.h:1737
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vec_float_operation_inline.h:1737
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vec_float_operation_inline.h:1737
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vec_float_operation_inline.h:1737
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void rw::math::vpu::operator*(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1565
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1566
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1566
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator/(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator/<VectorAxisY, VectorAxisW>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisW> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1732
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1733
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1735
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		{
			// vec_float_operation_inline.h:1737
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vec_float_operation_inline.h:1737
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vec_float_operation_inline.h:1737
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vec_float_operation_inline.h:1737
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vec_float_operation_inline.h:1737
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void rw::math::fpu::Max<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:222
		float test;

		// scalar.h:223
		float r;

	}
}

void rw::math::vpu::Clamp(const const float &  value, const const float &  min, const const float &  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Max<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:29
		float test;

		// scalar_operation_platform_inline.h:30
		float r;

	}
}

void rw::math::vpu::Min<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:20
		float test;

		// scalar_operation_platform_inline.h:21
		float r;

	}
}

void rw::math::vpu::Lerp(const VecFloat  a, const VecFloat  b, const VecFloat  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// scalar_operation_inline.h:166
	VecFloat r;

	{
		// scalar_operation_inline.h:166
		VecFloat r;

	}
}

void rw::math::vpu::Subtract(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_platform_inline.h:664
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::Mult(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_platform_inline.h:809
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::Add(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_platform_inline.h:519
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnGui::SatNavComponent::GetViewDistance(float32_t  lfCarSpeedMph) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNav.cpp:675
		float32_t lfCarSpeedProp;

		// BrnSatNav.cpp:676
		float32_t lfCarSpeedLerp;

		// BrnSatNav.cpp:677
		float32_t lfViewDist;

		rw::math::vpu::Lerp(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::Min<float>(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Subtract(/* parameters */);
	}
}

void rw::math::vpu::operator!=(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsEqualV2(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:264
		bool ret;

		// vector_intrinsic_operation_inline.h:265
		VectorIntrinsicUnion::VectorIntrinsic v0comp;

		// vector_intrinsic_operation_inline.h:265
		VectorIntrinsicUnion::VectorIntrinsic v1comp;

	}
}

void BrnGui::CrashNavMapIcon::SetPosition(const rw::math::vpu::Vector2  lv2Position) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::operator!=(/* parameters */);
}

void rw::math::fpu::Clamp<float>(float  value, float  min, float  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Min<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:155
		float test;

		// scalar.h:156
		float r;

	}
}

void BrnGui::BoostBarRenderer::CalculateBoostShardAlpha(float32_t  lfShardLifetime, float32_t  lfBaseAlpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostBarRenderer.cpp:2137
		float32_t lfShardAlpha;

		rw::math::fpu::Clamp<float>(/* parameters */);
	}
}

void rw::math::fpu::Vector3Template<float>::Vector3Template(float  _x, float  _y, float  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::TransformPoint<float>(const const Vector3Template<float> &  pt, const const Matrix44AffineTemplate<float> &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Vector3Template<float>::Vector3Template(/* parameters */);
}

void rw::math::fpu::Mult<float>(const const Vector3Template<float> &  v, const const Matrix33Template<float> &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Vector3Template<float>::Vector3Template(/* parameters */);
}

void rw::math::fpu::operator*<float>(const const Vector3Template<float> &  v, const const Matrix33Template<float> &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::Vector4Template(float  _x, float  _y, float  _z, float  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Mult<float>(const const Vector4Template<float> &  v, const const Matrix44AffineTemplate<float> &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Vector4Template<float>::Vector4Template(/* parameters */);
}

void rw::math::fpu::operator*<float>(const const Vector4Template<float> &  v, const const Matrix44AffineTemplate<float> &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Set(float  _x, float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavRenderer::CalculateUVsForIndex(int32_t  liFrame, const Vector2Template<float> &  lv2TopLeft, const Vector2Template<float> &  lv2BottomLeft, const Vector2Template<float> &  lv2TopRight, const Vector2Template<float> &  lv2BottomRight, float32_t  lfTextureWidth, float32_t  lfTextureHeight, float32_t  lfIconWidth, float32_t  lfIconHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNavRenderer.cpp:985
		int32_t liNumIconsPerLine;

		// BrnSatNavRenderer.cpp:986
		int32_t liRow;

		// BrnSatNavRenderer.cpp:987
		int32_t liColumn;

		// BrnSatNavRenderer.cpp:989
		float32_t lfLeft;

		// BrnSatNavRenderer.cpp:990
		float32_t lfRight;

		// BrnSatNavRenderer.cpp:991
		float32_t lfTop;

		// BrnSatNavRenderer.cpp:992
		float32_t lfBottom;

		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	}
}

void BrnGui::CrashNavIconRenderer::CalculateUVsForIndex(int32_t  liFrame, const Vector2Template<float> &  lv2TopLeft, const Vector2Template<float> &  lv2BottomLeft, const Vector2Template<float> &  lv2TopRight, const Vector2Template<float> &  lv2BottomRight, float32_t  lfTextureWidth, float32_t  lfTextureHeight, float32_t  lfIconWidth, float32_t  lfIconHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavIconRenderer.cpp:2799
		int32_t liNumIconsPerLine;

		// BrnCrashNavIconRenderer.cpp:2800
		int32_t liRow;

		// BrnCrashNavIconRenderer.cpp:2801
		int32_t liColumn;

		// BrnCrashNavIconRenderer.cpp:2803
		float32_t lfLeft;

		// BrnCrashNavIconRenderer.cpp:2804
		float32_t lfRight;

		// BrnCrashNavIconRenderer.cpp:2805
		float32_t lfTop;

		// BrnCrashNavIconRenderer.cpp:2806
		float32_t lfBottom;

		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	}
}

void rw::math::fpu::RadToDeg<float>(float  angle_radians) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavMapIcon::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNavIcon.cpp:197
		BrnGui::MapIconBrnBase::IconState leState;

	}
	{
		// BrnSatNavIcon.cpp:211
		char[64] lacText;

		// BrnSatNavIcon.cpp:220
		float32_t lfDegreeAngle;

		rw::math::vpu::Vector2::X(/* parameters */);
	}
}

void rw::math::fpu::Vector4Template<float>::Set(float  _x, float  _y, float  _z, float  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::Vector4Template(const const Vector4Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::operator[](int  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::Z() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::X() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BoostBarRenderer::CalculateShardVertices() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostBarRenderer.cpp:1982
		Vector4 lv4BackgroundRect;

		// BrnBoostBarRenderer.cpp:1985
		float32_t lfCurrentlyFilledWidth;

		// BrnBoostBarRenderer.cpp:1986
		float32_t lfChunkWidth;

		// BrnBoostBarRenderer.cpp:1987
		Vector4 lv4OriginalChunkRect;

		// BrnBoostBarRenderer.cpp:1994
		float32_t lfShardWidth;

		// BrnBoostBarRenderer.cpp:1995
		float32_t lfShardHeight;

		// BrnBoostBarRenderer.cpp:2003
		int32_t liCurrentRow;

		// BrnBoostBarRenderer.cpp:2004
		int32_t liCurrentCol;

		rw::math::fpu::Vector4Template<float>::operator[](/* parameters */);
		rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
		{
			// BrnBoostBarRenderer.cpp:2007
			float32_t lfCurrentX;

			// BrnBoostBarRenderer.cpp:2008
			float32_t lfCurrentU;

		}
		rw::math::fpu::Vector4Template<float>::operator[](/* parameters */);
		rw::math::fpu::Vector4Template<float>::operator[](/* parameters */);
		rw::math::fpu::Vector4Template<float>::operator[](/* parameters */);
		rw::math::fpu::Vector4Template<float>::operator[](/* parameters */);
		rw::math::fpu::Vector4Template<float>::operator[](/* parameters */);
		rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
		{
			// BrnBoostBarRenderer.cpp:2012
			float32_t lfCurrentY;

			// BrnBoostBarRenderer.cpp:2013
			float32_t lfCurrentV;

		}
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	}
}

void rw::math::fpu::Matrix44AffineTemplate<float>::Matrix44AffineTemplate(float  m0, float  m1, float  m2, float  m3, float  m4, float  m5, float  m6, float  m7, float  m8, float  m9, float  m10, float  m11) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Vector3Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44AffineTemplate<float>::Set(float  m0, float  m1, float  m2, float  m3, float  m4, float  m5, float  m6, float  m7, float  m8, float  m9, float  m10, float  m11) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Set(float  _x, float  _y, float  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44AffineFromTranslation<float>(const const Vector3Template<float> &  trans) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation.h:797
		const float zero;

		// matrix44affine_operation.h:798
		const float one;

		Matrix44AffineTemplate<float>::Matrix44AffineTemplate(/* parameters */);
		Vector3Template<float>::Set(/* parameters */);
		Vector3Template<float>::Set(/* parameters */);
		Vector3Template<float>::Set(/* parameters */);
	}
}

void BrnGui::InGameMessageRenderer::InGameMessage::GetNext() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessageRenderer::GetNumMessages() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInGameMessageRenderer.cpp:1515
		int32_t liNumMessages;

		// BrnInGameMessageRenderer.cpp:1516
		BrnGui::InGameMessageRenderer::InGameMessage * lpMessage;

		InGameMessage::GetNext(/* parameters */);
	}
}

void BrnGui::InGameMessageRenderer::InGameMessage::GetIsRoadRuleMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessageRenderer::GetNumRoadRuleMessages() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInGameMessageRenderer.cpp:1538
		int32_t liNumRoadRuleMessages;

		// BrnInGameMessageRenderer.cpp:1539
		BrnGui::InGameMessageRenderer::InGameMessage * lpMessage;

		InGameMessage::GetNext(/* parameters */);
	}
}

void BrnGui::InGameMessageRenderer::InGameMessage::GetIsCustomMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessageRenderer::GetNumCustomMessages() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInGameMessageRenderer.cpp:1564
		int32_t liNumCustomMessages;

		// BrnInGameMessageRenderer.cpp:1565
		BrnGui::InGameMessageRenderer::InGameMessage * lpMessage;

		InGameMessage::GetNext(/* parameters */);
	}
}

void BrnGui::InGameMessageRenderer::InGameMessage::GetIsTrainingMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessageRenderer::IsShowingTrainingTip() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInGameMessageRenderer.cpp:1589
		BrnGui::InGameMessageRenderer::InGameMessage * lpMessage;

		InGameMessage::GetNext(/* parameters */);
	}
}

void BrnGui::CustomRendererManager::GetComponentTexture(CgsID  lComponent, int32_t  liTextureIndex, int32_t *  lpiShaderProgram, ImRendererSet *  lpImRenderers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCustomRenderer.cpp:625
		int32_t liComponent;

	}
}

void BrnGui::MapTransform::GetWorldRect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+<VectorAxisX, VectorAxisZ>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1294
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1295
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1297
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator+<VectorAxisY, VectorAxisW>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisW> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1294
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1295
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1297
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void BrnGui::MainMapComponent::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::operator+<VectorAxisX, VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY, VectorAxisW>(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
}

void renderengine::TextureState::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA8::RGBA8(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::TextureState::Parameters::SetTexture(renderengine::Texture *  newTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetMagFilter(renderengine::SamplerState::FilterMode  filter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetMinFilter(renderengine::SamplerState::FilterMode  filter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetAddressU(renderengine::SamplerState::AddressingMode  addressMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetAddressV(renderengine::SamplerState::AddressingMode  addressMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::Allocate(const const ResourceDescriptor &  resourceDescriptor, const char8_t *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~BaseResourceDescriptors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::~BaseResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const float32_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const uint32_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<BrnGui::SatNavTileDirectory::sTileItem>(const BrnGui::SatNavTileDirectory::sTileItem *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::Resource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<6u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SatNavTileDirectoryResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNavTileResourceType.cpp:396
		SatNavTileDirectory * lpSatNavResource;

		// BrnSatNavTileResourceType.cpp:414
		uint32_t luIndex;

	}
}

void rw::math::fpu::Cos(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::cosf(float  _Left) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Sin(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::sinf(float  _Left) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::Matrix33Template(float  m0, float  m1, float  m2, float  m3, float  m4, float  m5, float  m6, float  m7, float  m8) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::Set(float  m0, float  m1, float  m2, float  m3, float  m4, float  m5, float  m6, float  m7, float  m8) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::GetVecFloat_Half() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::W() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::Y() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::GetVecFloat_One() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::X() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Y() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::GetVecFloat_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::operator+<float>(const const Vector3Template<float> &  a, const const Vector3Template<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Vector2Template(float  _x, float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::operator=(const const Vector2Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavIconRenderer::RotatateRect(Vector4 &  lv4InputRect, float32_t  lfRotationInRadians, const Vector2Template<float> &  lv2TopLeft, const Vector2Template<float> &  lv2BottomLeft, const Vector2Template<float> &  lv2TopRight, const Vector2Template<float> &  lv2BottomRight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavIconRenderer.cpp:2749
		float32_t lfCosRotation;

		// BrnCrashNavIconRenderer.cpp:2750
		float32_t lfSinRotation;

		// BrnCrashNavIconRenderer.cpp:2752
		Im2dTransform::Matrix33 lm33Rotation;

		// BrnCrashNavIconRenderer.cpp:2754
		Road::Vector3 lv3OriginOffsets;

		// BrnCrashNavIconRenderer.cpp:2755
		Road::Vector3 lv3Position;

		// BrnCrashNavIconRenderer.cpp:2757
		Road::Vector3 lv3TopLeftOrigin;

		// BrnCrashNavIconRenderer.cpp:2758
		Road::Vector3 lv3BottomLeftOrigin;

		// BrnCrashNavIconRenderer.cpp:2759
		Road::Vector3 lv3TopRightOrigin;

		// BrnCrashNavIconRenderer.cpp:2760
		Road::Vector3 lv3BottomRightOrigin;

		// BrnCrashNavIconRenderer.cpp:2762
		Road::Vector3 lv3TopLeftRotated;

		// BrnCrashNavIconRenderer.cpp:2763
		Road::Vector3 lv3BottomLeftRotated;

		// BrnCrashNavIconRenderer.cpp:2764
		Road::Vector3 lv3TopRightRotated;

		// BrnCrashNavIconRenderer.cpp:2765
		Road::Vector3 lv3BottomRightRotated;

		// BrnCrashNavIconRenderer.cpp:2767
		Road::Vector3 lv3TopLeft;

		// BrnCrashNavIconRenderer.cpp:2768
		Road::Vector3 lv3BottomLeft;

		// BrnCrashNavIconRenderer.cpp:2769
		Road::Vector3 lv3TopRight;

		// BrnCrashNavIconRenderer.cpp:2770
		Road::Vector3 lv3BottomRight;

		rw::math::fpu::Cos(/* parameters */);
	}
	rw::math::fpu::Sin(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Y(/* parameters */);
	rw::math::fpu::Matrix33Template<float>::Matrix33Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Z(/* parameters */);
	rw::math::fpu::Vector4Template<float>::W(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::operator+<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::operator+<float>(/* parameters */);
	rw::math::fpu::operator+<float>(/* parameters */);
	rw::math::fpu::operator+<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
}

void BrnGui::MainMapRenderer::SetRenderEnabled(bool  lbRenderEnabled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::CustomRenderComponentInterface::SetRenderEnabled(/* parameters */);
}

void BrnGui::CrashNavIconRenderer::SetRenderEnabled(bool  lbRenderEnabled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::CustomRenderComponentInterface::SetRenderEnabled(/* parameters */);
}

void BrnGui::GuiEventRenderMainMap::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MainMapRenderer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiEventRenderMainMap::Construct(/* parameters */);
	{
		// BrnMainMapRenderer.cpp:78
		int32_t i;

	}
}

void rw::math::fpu::Matrix33Template<float>::Matrix33Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::GetRow(int  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::SetElem(int  row, int  column, float  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix33.h:254
		const Vector3Template<float> & vector;

	}
}

void rw::math::fpu::Mult<float>(const const Matrix33Template<float> &  m, const const Matrix33Template<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// matrix33_operation.h:74
	Matrix33Template<float> & result;

	{
		// matrix33_operation.h:74
		Matrix33Template<float> result;

		{
			// matrix33_operation.h:75
			int i;

			Matrix33Template<float>::GetRow(/* parameters */);
			Matrix33Template<float>::SetElem(/* parameters */);
			Matrix33Template<float>::SetElem(/* parameters */);
			Matrix33Template<float>::SetElem(/* parameters */);
		}
	}
}

void rw::math::fpu::operator*<float>(const const Matrix33Template<float> &  a, const const Matrix33Template<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44AffineFromQuaternionTranslation<float>(const const QuaternionTemplate<float> &  q, const const Vector3Template<float> &  trans) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation.h:985
		float xx;

		// matrix44affine_operation.h:986
		float yy;

		// matrix44affine_operation.h:987
		float zz;

		// matrix44affine_operation.h:988
		float xy;

		// matrix44affine_operation.h:989
		float xz;

		// matrix44affine_operation.h:990
		float yz;

		// matrix44affine_operation.h:991
		float wx;

		// matrix44affine_operation.h:992
		float wy;

		// matrix44affine_operation.h:993
		float wz;

		// matrix44affine_operation.h:995
		const float one;

		// matrix44affine_operation.h:996
		const float two;

		Matrix44AffineTemplate<float>::Matrix44AffineTemplate(/* parameters */);
	}
	Vector3Template<float>::Set(/* parameters */);
	Vector3Template<float>::Set(/* parameters */);
	Vector3Template<float>::Set(/* parameters */);
	Vector3Template<float>::Set(/* parameters */);
}

void rw::ResourceDescriptor::ResourceDescriptor(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<6u>::BaseResourceDescriptors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::BaseResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptorType<0u>::BaseResourceDescriptorType(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::BaseResourceDescriptor(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptorType<0u>::~BaseResourceDescriptorType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SatNavTileDirectoryResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNavTileResourceType.cpp:289
		const SatNavTileDirectory * lpDirectoryResource;

		// BrnSatNavTileResourceType.cpp:290
		uint32_t luSize;

	}
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	rw::BaseResourceDescriptor::BaseResourceDescriptor(/* parameters */);
	rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(/* parameters */);
}

void CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(const const ResourceHandle &  lOtherHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::CreateFromHandle(const ResourceHandle *  lpSrcHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::Construct(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CreditsTextRenderer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
	CgsResource::ResourceHandle::CreateFromHandle(/* parameters */);
}

void CgsContainers::BitArray<64u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<64u>::ORArrays(const BitArray<64u> *  lpArrayA, const BitArray<64u> *  lpArrayB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:493
		int32_t liField;

	}
}

void rw::RwPtrSubtractOffset<BrnGui::SatNavTileDirectory::sTileItem>(BrnGui::SatNavTileDirectory::sTileItem *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnGui::SatNavTileDirectory::sTileItem>(BrnGui::SatNavTileDirectory::sTileItem *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessageRenderer::InGameMessage::GetIsChallengeMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessageRenderer::InGameMessage::SetInUse(bool  lbInUse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessageRenderer::ClearAllMessages(bool  lbClearTrainingMessage, bool  lbClearChallengeMessages) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInGameMessageRenderer.cpp:1464
		BrnGui::InGameMessageRenderer::InGameMessage * lpMessage;

		// BrnInGameMessageRenderer.cpp:1465
		BrnGui::InGameMessageRenderer::InGameMessage * lpPrevMessage;

		InGameMessage::SetInUse(/* parameters */);
		InGameMessage::GetNext(/* parameters */);
	}
}

void BrnGui::GuiCache::GetActiveRoadRule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::IsConnectedToNetwork() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessageRenderer::InGameMessage::GetIsPriorityMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessageRenderer::StartFadeOutIfDisplayingAnything() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessageRenderer::UpdateTickerMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInGameMessageRenderer.cpp:1803
		BrnGui::InGameMessageRenderer::ETickerMode leTickerMode;

		StartFadeOutIfDisplayingAnything(/* parameters */);
	}
	InGameMessage::SetInUse(/* parameters */);
}

void BrnGui::GuiCache::GetControllerDisconected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessageRenderer::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44AffineTemplate<float>::XAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::operator*<float>(const const Vector3Template<float> &  vec, const const float &  scalar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// vector3_operation.h:99
	Vector3Template<float> & r;

	{
		// vector3_operation.h:99
		Vector3Template<float> r;

	}
}

void rw::math::fpu::Matrix44AffineTemplate<float>::YAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::operator+=<float>(const Vector3Template<float> &  a, const const Vector3Template<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44AffineTemplate<float>::ZAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::TransformVector<float>(const const Vector3Template<float> &  vec, const const Matrix44AffineTemplate<float> &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// matrix44affine_operation.h:467
	Vector3Template<float> & transformedPoint;

	{
		// matrix44affine_operation.h:467
		Vector3Template<float> transformedPoint;

		operator*<float>(/* parameters */);
		Matrix44AffineTemplate<float>::YAxis(/* parameters */);
		Vector3Template<float>::Vector3Template(/* parameters */);
		Matrix44AffineTemplate<float>::ZAxis(/* parameters */);
		operator*<float>(/* parameters */);
		operator+=<float>(/* parameters */);
		operator*<float>(/* parameters */);
		operator+=<float>(/* parameters */);
	}
}

void rw::math::fpu::Matrix44AffineTemplate<float>::Matrix44AffineTemplate(const const Vector3Template<float> &  row0, const const Vector3Template<float> &  row1, const const Vector3Template<float> &  row2, const const Vector3Template<float> &  row3) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::operator=(const const Vector3Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Mult<float>(const const Matrix44AffineTemplate<float> &  m, const const Matrix44AffineTemplate<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Matrix44AffineTemplate<float>::Matrix44AffineTemplate(/* parameters */);
	Vector3Template<float>::operator=(/* parameters */);
	Vector3Template<float>::operator=(/* parameters */);
}

void rw::math::fpu::operator*<float>(const const Matrix44AffineTemplate<float> &  a, const const Matrix44AffineTemplate<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<renderengine::Texture2D>(const Texture2D *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const int32_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SatNavTileResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNavTileResourceType.cpp:127
		BrnGui::SatNavTile * lpTileResource;

		// BrnSatNavTileResourceType.cpp:128
		uint32_t luBaseValue;

		// BrnSatNavTileResourceType.cpp:131
		uint32_t luIndex;

	}
}

void CgsResource::SatNavTileResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNavTileResourceType.cpp:176
		BrnGui::SatNavTile * lpTileResource;

		// BrnSatNavTileResourceType.cpp:177
		uint32_t luBaseValue;

		// BrnSatNavTileResourceType.cpp:188
		uint32_t luIndex;

	}
}

void CgsResource::SatNavTileDirectoryResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNavTileResourceType.cpp:358
		SatNavTileDirectory * lpSatNavResource;

		// BrnSatNavTileResourceType.cpp:359
		void * lpBaseData;

		// BrnSatNavTileResourceType.cpp:362
		uint32_t luIndex;

	}
	rw::Resource::GetMemoryResource(/* parameters */);
}

void CgsResource::SatNavTileResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNavTileResourceType.cpp:64
		uint32_t luSize;

	}
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
}

void BrnGui::GuiCache::GetTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventTimeInfo::GetTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MainMapRenderer::StartFade(bool  lbFadeIn, float32_t  lfFadeTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::GetTime(/* parameters */);
}

void CgsNumeric::Random::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::SetSeed(uint64_t  luSeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:219
		uint32_t luPreflight;

	}
}

void CgsNumeric::Random::RandomFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:352
		float32_t lfRandomFractionPlusOne;

		// CgsRandom.h:356
		float32_t lfRandomFraction;

	}
}

void CgsNumeric::Random::AddRandomFloatToBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::RandomUInt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:273
		uint32_t luResult;

	}
}

void CgsNumeric::Random::ConvertUnsignedFixed32ToFloatRepresentation(uint32_t  lu32Random) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:230
		const uint32_t KU_IEEE_754_REPRESENTATION_FLOAT_ONE;

	}
}

void BrnGui::GuiEventBoostInfo::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Interpolator<float32_t>::SetStart(float32_t  lStartValue, float32_t  lfStartTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Interpolator<float32_t>::SetEnd(float32_t  lEndValue, float32_t  lfEndTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::DeltaInterpolator::SetRange(float32_t  lfMinValue, float32_t  lfMaxValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Interpolator<float32_t>::Invalidate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BoostBarRenderer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNumeric::Random::Construct(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
	GuiEventBoostInfo::Construct(/* parameters */);
	GuiEventBoostInfo::Construct(/* parameters */);
	Interpolator<float32_t>::SetStart(/* parameters */);
	Interpolator<float32_t>::Invalidate(/* parameters */);
	DeltaInterpolator::SetRange(/* parameters */);
	Interpolator<float32_t>::SetEnd(/* parameters */);
}

void CgsModule::EventReceiverQueue<1024,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:294
		int32_t liAlignRem;

	}
}

void CgsContainers::BitArray<601u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<601u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void rw::math::fpu::SinCos<float>(float  a, const float &  sin_out, const float &  cos_out) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::QuaternionTemplate<float>::QuaternionTemplate(float  _x, float  _y, float  _z, float  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::QuaternionFromAxisRotationAngle<float>(const const Vector3Template<float> &  v, float  angle_radians) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// quaternion_operation.h:781
	QuaternionTemplate<float> & r;

	{
		// quaternion_operation.h:777
		float s;

		// quaternion_operation.h:777
		float c;

		// quaternion_operation.h:781
		QuaternionTemplate<float> r;

	}
	SinCos<float>(/* parameters */);
	Cos(/* parameters */);
	QuaternionTemplate<float>::QuaternionTemplate(/* parameters */);
}

void rw::math::fpu::Vector2Template<float>::GetX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::GetY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::operator*<float>(const const float &  scalar, const const Vector3Template<float> &  vec) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// vector3_operation.h:106
	Vector3Template<float> & r;

	{
		// vector3_operation.h:106
		Vector3Template<float> r;

	}
}

extern Matrix44AffineTemplate<float> & operator=(const const Matrix44AffineTemplate<float> &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::GetX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::GetY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BoostBarRenderer::CalculateBoostShardTransformation(int32_t  liShardIndex, float32_t  lfShardLifetime, const Matrix44Affine &  lm44TransOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostBarRenderer.cpp:2042
		float32_t lfOffsetX;

		// BrnBoostBarRenderer.cpp:2043
		float32_t lfOffsetY;

		// BrnBoostBarRenderer.cpp:2055
		int32_t liCurrentSquare;

		// BrnBoostBarRenderer.cpp:2058
		int32_t liCurrentRow;

		// BrnBoostBarRenderer.cpp:2061
		int32_t liCurrentCol;

		// BrnBoostBarRenderer.cpp:2064
		float32_t lfShardWidth;

		// BrnBoostBarRenderer.cpp:2065
		float32_t lfShardHeight;

		// BrnBoostBarRenderer.cpp:2068
		Road::Vector3 lv3ShardCentre;

		// BrnBoostBarRenderer.cpp:2076
		Quaternion lqShardRotation;

		// BrnBoostBarRenderer.cpp:2079
		Road::Vector3 lv3ShardReposition;

		// BrnBoostBarRenderer.cpp:2083
		Matrix44Affine lm44ShardRotRepos;

	}
	rw::math::fpu::operator*<float>(/* parameters */);
	operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	operator=(/* parameters */);
}

void CgsContainers::BitArray<64u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void BrnGui::InGameMessageRenderer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInGameMessageRenderer.cpp:197
		int32_t i;

	}
}

void CgsContainers::BitArray<64u>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsContainers::BitArray<64u>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void rw::math::vpu::GetVector3_XAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector3  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:393
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::GetVector3_YAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVecFloat_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVecFloat_One() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY, VectorAxisZ>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y, VectorIntrinsicInParam  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:177
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_inline.h:178
			VectorIntrinsicUnion::VectorIntrinsic result;

			{
				// vector_intrinsic_operation_inline.h:178
				VectorIntrinsicUnion::VectorIntrinsic permuteControl;

			}
		}
	}
}

void CgsNumeric::GetVecFloat_DegreesToRadians() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1539
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::SinCos(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Sin(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::sinf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// sinf4.h:14
		float[4] xl;

		// sinf4.h:14
		float[4] xl2;

		// sinf4.h:14
		float[4] xl3;

		// sinf4.h:14
		float[4] res;

		// sinf4.h:15
		int[4] q;

		// sinf4.h:30
		int[4] offset;

		// sinf4.h:34
		float[4] qf;

		// sinf4.h:35
		float[4] p1;

		// sinf4.h:49
		float[4] ct1;

		// sinf4.h:50
		float[4] st1;

		// sinf4.h:52
		float[4] ct2;

		// sinf4.h:53
		float[4] st2;

		// sinf4.h:55
		float[4] cx;

		// sinf4.h:56
		float[4] sx;

		// sinf4.h:61
		unsigned int[4] mask1;

		// sinf4.h:68
		unsigned int[4] mask2;

	}
}

void rw::math::vpu::Cos(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::cosf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// cosf4.h:14
		float[4] xl;

		// cosf4.h:14
		float[4] xl2;

		// cosf4.h:14
		float[4] xl3;

		// cosf4.h:14
		float[4] res;

		// cosf4.h:15
		int[4] q;

		// cosf4.h:30
		int[4] offset;

		// cosf4.h:34
		float[4] qf;

		// cosf4.h:35
		float[4] p1;

		// cosf4.h:49
		float[4] ct1;

		// cosf4.h:50
		float[4] st1;

		// cosf4.h:52
		float[4] ct2;

		// cosf4.h:53
		float[4] st2;

		// cosf4.h:55
		float[4] cx;

		// cosf4.h:56
		float[4] sx;

		// cosf4.h:61
		unsigned int[4] mask1;

		// cosf4.h:68
		unsigned int[4] mask2;

	}
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY, VectorAxisZ, VectorAxisW>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y, VectorIntrinsicInParam  z, VectorIntrinsicInParam  w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:192
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_inline.h:193
			VectorIntrinsicUnion::VectorIntrinsic temp0;

			// vector_intrinsic_operation_inline.h:193
			VectorIntrinsicUnion::VectorIntrinsic temp1;

		}
	}
}

void rw::math::vpu::operator*<VectorAxisY>(const rw::math::vpu::Vector3  v, VecFloatRef<VectorAxisY> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:531
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic vZero;

		}
	}
}

void rw::math::vpu::operator*<VectorAxisX>(const rw::math::vpu::Vector3  v, VecFloatRef<VectorAxisX> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:531
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic vZero;

		}
	}
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2dTransform::GetAspectCorrectionMatrix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::XAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::YAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::ZAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const rw::math::vpu::Matrix33 &  a, const rw::math::vpu::Matrix33 &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const rw::math::vpu::Matrix33 &  m, const rw::math::vpu::Matrix33 &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix33_operation_platform_inline.h:67
		VectorIntrinsicUnion::VectorIntrinsic bX;

		// matrix33_operation_platform_inline.h:68
		VectorIntrinsicUnion::VectorIntrinsic bY;

		// matrix33_operation_platform_inline.h:69
		VectorIntrinsicUnion::VectorIntrinsic bZ;

		// matrix33_operation_platform_inline.h:70
		VectorIntrinsicUnion::VectorIntrinsic row0;

		// matrix33_operation_platform_inline.h:70
		VectorIntrinsicUnion::VectorIntrinsic row1;

		// matrix33_operation_platform_inline.h:70
		VectorIntrinsicUnion::VectorIntrinsic row2;

		{
			// matrix33_operation_platform_inline.h:72
			VectorIntrinsicUnion::VectorIntrinsic xSplat;

			// matrix33_operation_platform_inline.h:72
			VectorIntrinsicUnion::VectorIntrinsic ySplat;

			// matrix33_operation_platform_inline.h:72
			VectorIntrinsicUnion::VectorIntrinsic zSplat;

		}
		{
			// matrix33_operation_platform_inline.h:73
			VectorIntrinsicUnion::VectorIntrinsic xSplat;

			// matrix33_operation_platform_inline.h:73
			VectorIntrinsicUnion::VectorIntrinsic ySplat;

			// matrix33_operation_platform_inline.h:73
			VectorIntrinsicUnion::VectorIntrinsic zSplat;

		}
		{
			// matrix33_operation_platform_inline.h:74
			VectorIntrinsicUnion::VectorIntrinsic xSplat;

			// matrix33_operation_platform_inline.h:74
			VectorIntrinsicUnion::VectorIntrinsic ySplat;

			// matrix33_operation_platform_inline.h:74
			VectorIntrinsicUnion::VectorIntrinsic zSplat;

		}
	}
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:164
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::GetVector4_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector4_One() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2dTransform::Construct(const rw::math::vpu::Vector2  lOrigin, const rw::math::vpu::Vector2  lRight, const rw::math::vpu::Vector2  lUp, const float  lrZ, const rw::math::vpu::Vector4  lColourShift, const rw::math::vpu::Vector4  lColourScale) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY, VectorAxisX, VectorAxisY>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y, VectorIntrinsicInParam  z, VectorIntrinsicInParam  w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:192
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_inline.h:193
			VectorIntrinsicUnion::VectorIntrinsic temp0;

			// vector_intrinsic_operation_inline.h:193
			VectorIntrinsicUnion::VectorIntrinsic temp1;

		}
	}
}

void BrnGui::CreditsTextRenderer::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCreditsTextRenderer.cpp:225
		Matrix33 lPixelToScreenScale;

		// BrnCreditsTextRenderer.cpp:226
		Matrix33 lCentreTranslation;

		// BrnCreditsTextRenderer.cpp:227
		Matrix33 lPixelSpaceRotation;

		// BrnCreditsTextRenderer.cpp:228
		Matrix33 lAspectCorrection;

		// BrnCreditsTextRenderer.cpp:229
		Matrix33 lFinalTranslation;

		// BrnCreditsTextRenderer.cpp:242
		VecFloat lvfAngleRads;

		// BrnCreditsTextRenderer.cpp:243
		Vector4 lvSinCos;

		// BrnCreditsTextRenderer.cpp:257
		Matrix33 lCombined;

	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::SinCos(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	CgsNumeric::GetVecFloat_DegreesToRadians(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::GetVector3_XAxis(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::GetVector3_YAxis(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	vec_add(/* parameters */);
	{
	}
	{
	}
	vec_and(/* parameters */);
	{
	}
	Matrix33<float>(/* parameters */);
	vec_cts(/* parameters */);
	rw::math::vpu::Cos(/* parameters */);
	Vector3<float>(/* parameters */);
	Vector3<float>(/* parameters */);
	vec_ctf(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsGraphics::Im2dTransform::Construct(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	vec_madd(/* parameters */);
	{
	}
	rw::math::vpu::Matrix33::operator=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	Vector4<VectorAxisX, VectorAxisY, VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
}

void rw::math::vpu::IsNaN(const VecFloat  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsEqualV4(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:246
		bool ret;

	}
}

void rw::math::vpu::GetMatrix33_Identity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Matrix33FromYRotationAngle(const VecFloat  angle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix33_operation_platform_inline.h:218
		VecFloat s;

		// matrix33_operation_platform_inline.h:218
		VecFloat c;

		// matrix33_operation_platform_inline.h:220
		const VecFloat zero;

		// matrix33_operation_platform_inline.h:221
		const VecFloat one;

	}
}

void rw::math::vpu::SinCos(const VecFloat  a, const VecFloat &  s_out, const VecFloat &  c_out) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::sincosf4(float[4]  x, float *[4]  s, float *[4]  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// sincosf4.h:14
		float[4] xl;

		// sincosf4.h:14
		float[4] xl2;

		// sincosf4.h:14
		float[4] xl3;

		// sincosf4.h:15
		int[4] q;

		// sincosf4.h:16
		int[4] offsetSin;

		// sincosf4.h:16
		int[4] offsetCos;

		// sincosf4.h:37
		float[4] qf;

		// sincosf4.h:38
		float[4] p1;

		// sincosf4.h:52
		float[4] ct1;

		// sincosf4.h:53
		float[4] st1;

		// sincosf4.h:55
		float[4] ct2;

		// sincosf4.h:56
		float[4] st2;

		// sincosf4.h:58
		float[4] cx;

		// sincosf4.h:59
		float[4] sx;

		// sincosf4.h:64
		unsigned int[4] sinMask;

		// sincosf4.h:65
		unsigned int[4] cosMask;

	}
}

void rw::math::vpu::operator-(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:967
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:968
			VectorIntrinsicUnion::VectorIntrinsic signMask;

		}
	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector3  v, const rw::math::vpu::Matrix33 &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const rw::math::vpu::Vector3  v, const rw::math::vpu::Matrix33 &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix33_operation_platform_inline.h:25
		VectorIntrinsicUnion::VectorIntrinsic tmp;

		// matrix33_operation_platform_inline.h:26
		VectorIntrinsicUnion::VectorIntrinsic xSplat;

		// matrix33_operation_platform_inline.h:26
		VectorIntrinsicUnion::VectorIntrinsic ySplat;

		// matrix33_operation_platform_inline.h:26
		VectorIntrinsicUnion::VectorIntrinsic zSplat;

		// matrix33_operation_platform_inline.h:26
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::operator-=(const Vector3 &  v, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavComponent::GetZoomedCarWorldRect(Vector3 *  lv3Dest, Vector3  lv3CarPosition, float32_t  lfCarSpeedMph, float32_t  lfCarRotation, bool  lbRotateMap, bool  lbUseTrajectory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNav.cpp:698
		float32_t lfViewDist;

		// BrnSatNav.cpp:701
		float32_t lfFront;

		// BrnSatNav.cpp:702
		float32_t lfBack;

		// BrnSatNav.cpp:703
		float32_t lfLeft;

		// BrnSatNav.cpp:704
		float32_t lfRight;

		// BrnSatNav.cpp:706
		float32_t lfScalar;

		// BrnSatNav.cpp:712
		const float32_t KF_CAR_MAX_MPH;

		// BrnSatNav.cpp:713
		const float32_t KF_MIN_VIEW;

		// BrnSatNav.cpp:714
		const float32_t KF_MAX_VIEW;

		// BrnSatNav.cpp:715
		const float32_t KF_MIN_VIEW_LERP;

		// BrnSatNav.cpp:716
		const float32_t KF_MAX_VIEW_LERP;

		// BrnSatNav.cpp:718
		float32_t lfCarSpeedProp;

		// BrnSatNav.cpp:719
		float32_t lfCarSpeedLerp;

		// BrnSatNav.cpp:724
		float32_t lfViewBack;

		// BrnSatNav.cpp:727
		Matrix33 lm33MapRotation;

		// BrnSatNav.cpp:730
		Vector3 lv3Front;

		// BrnSatNav.cpp:731
		Vector3 lv3Left;

		// BrnSatNav.cpp:732
		Vector3 lv3Right;

		// BrnSatNav.cpp:733
		Vector3 lv3Back;

		rw::math::vpu::Lerp(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::IsNaN(/* parameters */);
	rw::math::vpu::Subtract(/* parameters */);
	rw::math::vpu::GetMatrix33_Identity(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
		// BrnSatNav.cpp:746
		Matrix33 lm33CarRotation;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Matrix33FromYRotationAngle(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_and(/* parameters */);
		vec_sel(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_nmsub(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_add(/* parameters */);
		vec_and(/* parameters */);
		vec_madd(/* parameters */);
		vec_cts(/* parameters */);
		vec_ctf(/* parameters */);
		vec_and(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_sel(/* parameters */);
		vec_xor(/* parameters */);
		vec_sel(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		vec_xor(/* parameters */);
		vec_sel(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Matrix33::Matrix33(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
	}
	rw::math::vpu::Matrix33FromYRotationAngle(/* parameters */);
	{
		// BrnSatNav.cpp:750
		Vector3 lv3MapOffset;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-=(/* parameters */);
		rw::math::vpu::operator-=(/* parameters */);
		rw::math::vpu::operator-=(/* parameters */);
		rw::math::vpu::operator-=(/* parameters */);
	}
}

void rw::math::fpu::IsValid<float>(const const Vector3Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsValid(float  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsNaN(float  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsNaN(double  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_platform.h:21
		bool result;

	}
}

void rw::math::fpu::IsValid<float>(const const Matrix33Template<float> &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::IsValid<float>(/* parameters */);
	rw::math::fpu::IsValid<float>(/* parameters */);
	IsValid(/* parameters */);
	Matrix33Template<float>::YAxis(/* parameters */);
	rw::math::fpu::IsValid<float>(/* parameters */);
	Matrix33Template<float>::ZAxis(/* parameters */);
	IsValid(/* parameters */);
	IsValid(/* parameters */);
	IsValid(/* parameters */);
}

void BrnGui::GuiEventRenderSatNav::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavRenderer::SetTransparency(uint8_t  liTransparencyPercentage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNavRenderer.h:350
		float32_t lfTransparencyAmount;

	}
}

void rw::RGBA::RGBA(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavRenderer::UpdateRendererTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNavRenderer.h:327
		Vector4 lv4SatNavRect;

	}
}

void BrnGui::MapTransform::GetSatNavViewRect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1607
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1608
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:1610
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1610
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator-(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1420
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		// vec_float_operation_inline.h:1422
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1421
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator*<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1607
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1608
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:1610
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1610
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator+(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1274
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		// vec_float_operation_inline.h:1276
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1275
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator-<VectorAxisZ, VectorAxisX>(VecFloatRef<VectorAxisZ> &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1440
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1441
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1443
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator-<VectorAxisW, VectorAxisY>(VecFloatRef<VectorAxisW> &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1440
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1441
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1443
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void CgsGraphics::Im2dTransform::TransformByAspectRatio() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2dTransform::Transform(const const Matrix33Template<float> &  lMatrix, const Im2dTransform &  lOutTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm2dTransform.h:201
		Im2dTransform::Matrix33 lSrc;

		// CgsIm2dTransform.h:203
		Im2dTransform::Matrix33 lTrans;

		// CgsIm2dTransform.h:204
		Im2dTransform::Matrix33 lInverse;

		// CgsIm2dTransform.h:208
		float32_t a;

		// CgsIm2dTransform.h:209
		float32_t b;

		// CgsIm2dTransform.h:210
		float32_t c;

		// CgsIm2dTransform.h:211
		float32_t d;

	}
}

void rw::math::fpu::Matrix33Template<float>::SetX(const const Vector3Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::SetY(const const Vector3Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::SetZ(const const Vector3Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern Matrix33Template<float> & operator=(const const Matrix33Template<float> &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2dTransform::SetTransform(const const Matrix33Template<float> &  lSrc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::GetX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::GetY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::GetZ() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavRenderer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		UpdateRendererTransform(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::operator-<VectorAxisZ, VectorAxisX>(/* parameters */);
		rw::math::vpu::operator-<VectorAxisW, VectorAxisY>(/* parameters */);
		CgsGraphics::Im2dTransform::Construct(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		GuiEventRenderSatNav::Construct(/* parameters */);
		Vector4<VectorAxisX, VectorAxisY, VectorAxisX, VectorAxisY>(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		CgsGraphics::Im2dTransform::TransformByAspectRatio(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::fpu::Matrix33Template<float>::SetX(/* parameters */);
		rw::math::fpu::Matrix33Template<float>::SetZ(/* parameters */);
		rw::math::fpu::Matrix33Template<float>::SetY(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		operator=(/* parameters */);
		rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
		rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
		CgsGraphics::Im2dTransform::SetTransform(/* parameters */);
	}
}

void CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(const const SafeResourceHandle<CgsResource::Font> &  lOtherHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<CgsResource::Font>::operator==(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::IsEqual(const const ResourceHandle &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextObject::SetText(const UnicodeBuffer::CgsUtf8 *  lpUtf8String) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CreditsTextRenderer::RecalculateParagraphs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCreditsTextRenderer.cpp:437
		char[128] lacTitleName;

		// BrnCreditsTextRenderer.cpp:438
		char[128] lacNormalName;

		// BrnCreditsTextRenderer.cpp:439
		uint32_t luNumLines;

		// BrnCreditsTextRenderer.cpp:440
		const UnicodeBuffer::CgsUtf8 * lpStartLine;

		// BrnCreditsTextRenderer.cpp:441
		int32_t liSlotIndex;

		// BrnCreditsTextRenderer.cpp:442
		int32_t liStringPairIndex;

		// BrnCreditsTextRenderer.cpp:443
		float32_t lfYPos;

	}
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator==(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator==(/* parameters */);
	{
		// BrnCreditsTextRenderer.cpp:452
		const UnicodeBuffer::CgsUtf8 * lpTitleString;

		// BrnCreditsTextRenderer.cpp:453
		const UnicodeBuffer::CgsUtf8 * lpNormalString;

		CgsGraphics::TextObject::SetText(/* parameters */);
		CgsGraphics::TextObject::SetText(/* parameters */);
	}
}

void BrnGui::CreditsTextRenderer::SetRenderEnabled(bool  lbRenderEnabled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::CustomRenderComponentInterface::SetRenderEnabled(/* parameters */);
}

void CgsContainers::Array<BrnGui::BankingScore,6u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::AboveCarRenderer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAboveCarRenderer.cpp:163
		EActiveRaceCarIndex leActiveRaceCarIndex;

		CgsContainers::Array<BrnGui::BankingScore,6u>::Construct(/* parameters */);
		CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
		CgsResource::ResourceHandle::Construct(/* parameters */);
		operator++(/* parameters */);
	}
}

void BrnGui::MainMapComponent::IncreaseZoom() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator++(/* parameters */);
}

void CgsGui::StateInterface::GetAccessPointers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiAccessPointers::GetGuiCache() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetMapIconManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavComponent::ClearIconInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MapIconManager::ClearIconInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavComponent::Construct(StateInterface *  lpStateInterface, const char *  lacParentName, const BrnGui::SatNavComponent::ESatNavMode  leControlMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNav.cpp:89
		int32_t liIndex;

		// BrnSatNav.cpp:90
		char[32] lacText;

	}
	GuiEventRenderSatNav::Construct(/* parameters */);
	CgsGui::StateInterface::GetAccessPointers(/* parameters */);
	CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
	GuiCache::GetMapIconManager(/* parameters */);
	ClearIconInfo(/* parameters */);
	CgsContainers::CgsHash::CalculateHash(/* parameters */);
	CgsContainers::CgsHash::CalculateHash(/* parameters */);
}

void CgsGraphics::ImRendererBase::GetStateLibrary() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::BillboardRenderer::SetAnimMode(CgsGui::BillboardRenderer::eAnimMode  Mode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BoostBarRenderer::InitResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostBarRenderer.cpp:725
		renderengine::Texture * lpTexture;

		// BrnBoostBarRenderer.cpp:728
		Parameters lTextureStateParams;

		renderengine::TextureState::Parameters::Parameters(/* parameters */);
		renderengine::TextureState::Parameters::SetTexture(/* parameters */);
		renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
		renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	{
		// BrnBoostBarRenderer.cpp:740
		Texture2D * lpTexture;

		// BrnBoostBarRenderer.cpp:743
		Parameters lTextureStateParams;

	}
	renderengine::TextureState::Parameters::Parameters(/* parameters */);
	renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
	renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::TextureState::Parameters::SetTexture(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:755
		Texture2D * lpTexture;

		// BrnBoostBarRenderer.cpp:758
		Parameters lTextureStateParams;

	}
	renderengine::TextureState::Parameters::Parameters(/* parameters */);
	renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
	renderengine::TextureState::Parameters::SetTexture(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:772
		Texture2D * lpTexture;

		// BrnBoostBarRenderer.cpp:775
		Parameters lTextureStateParams;

		renderengine::TextureState::Parameters::Parameters(/* parameters */);
		renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
		renderengine::TextureState::Parameters::SetTexture(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	{
		// BrnBoostBarRenderer.cpp:787
		Texture2D * lpTexture;

		// BrnBoostBarRenderer.cpp:790
		Parameters lTextureStateParams;

	}
	renderengine::TextureState::Parameters::Parameters(/* parameters */);
	renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
	renderengine::TextureState::Parameters::SetTexture(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:804
		Texture2D * lpTexture;

		// BrnBoostBarRenderer.cpp:807
		Parameters lTextureStateParams;

		renderengine::TextureState::Parameters::Parameters(/* parameters */);
		renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
		renderengine::TextureState::Parameters::SetTexture(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	{
		// BrnBoostBarRenderer.cpp:821
		Texture2D * lpTexture;

		// BrnBoostBarRenderer.cpp:824
		Parameters lTextureStateParams;

		renderengine::TextureState::Parameters::Parameters(/* parameters */);
		renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
		renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		renderengine::TextureState::Parameters::SetTexture(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	{
		// BrnBoostBarRenderer.cpp:838
		Texture2D * lpTexture;

		// BrnBoostBarRenderer.cpp:841
		Parameters lTextureStateParams;

		renderengine::TextureState::Parameters::Parameters(/* parameters */);
		renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
		renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		renderengine::TextureState::Parameters::SetTexture(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	{
		// BrnBoostBarRenderer.cpp:853
		Texture2D * lpTexture;

		// BrnBoostBarRenderer.cpp:856
		Parameters lTextureStateParams;

	}
	renderengine::TextureState::Parameters::Parameters(/* parameters */);
	renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
	renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::TextureState::Parameters::SetTexture(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:868
		Texture2D * lpTexture;

		// BrnBoostBarRenderer.cpp:871
		Parameters lTextureStateParams;

	}
	renderengine::TextureState::Parameters::Parameters(/* parameters */);
	renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
	renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::TextureState::Parameters::SetTexture(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:885
		Texture2D * lpTexture;

		// BrnBoostBarRenderer.cpp:888
		Parameters lTextureStateParams;

		renderengine::TextureState::Parameters::Parameters(/* parameters */);
		renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
		renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		renderengine::TextureState::Parameters::SetTexture(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		CgsGui::BillboardRenderer::SetAnimMode(/* parameters */);
	}
	{
		// BrnBoostBarRenderer.cpp:903
		Texture2D * lpTexture;

		// BrnBoostBarRenderer.cpp:906
		Parameters lTextureStateParams;

	}
	renderengine::TextureState::Parameters::Parameters(/* parameters */);
	renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
	renderengine::TextureState::Parameters::SetTexture(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:918
		Texture2D * lpTexture;

		// BrnBoostBarRenderer.cpp:921
		Parameters lTextureStateParams;

	}
	renderengine::TextureState::Parameters::Parameters(/* parameters */);
	renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
	renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::TextureState::Parameters::SetTexture(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

void BrnGui::GuiCache::GetWorldDataController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RaceEventData::GetMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart::GetPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RaceEventData::GetSpecialEventCarId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetPlayerInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavRenderer::RefreshSatNavIconInfo(int32_t  liEventID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNavRenderer.cpp:1288
		uint32_t luIconIndex;

		// BrnSatNavRenderer.cpp:1289
		const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * lpEventStart;

		// BrnSatNavRenderer.cpp:1290
		const BrnProgression::RaceEventData * lpRaceEventData;

	}
	GuiCache::GetWorldDataController(/* parameters */);
}

void BrnGui::MapTransform::Flatten(const rw::math::vpu::Vector3  lv3In) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisZ>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:164
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnGui::MapTransform::Transform(const rw::math::vpu::Vector2  lv2In, const rw::math::vpu::Matrix33 &  lm33Transform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapUtils.h:417
		Vector3 lv3In;

		// BrnMapUtils.h:418
		Vector3 lv3Out;

	}
}

void rw::math::vpu::operator>=<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const rw::math::vpu::VecFloatRefIndex &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:713
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:715
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:717
		bool ret;

		{
			// vec_float_operation_inline.h:716
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
	}
}

void rw::math::vpu::operator< <VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const rw::math::vpu::VecFloatRefIndex &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:554
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:556
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:558
		bool ret;

		{
			// vec_float_operation_inline.h:557
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
	}
}

void rw::math::vpu::operator>=<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const rw::math::vpu::VecFloatRefIndex &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:713
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:715
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:717
		bool ret;

		{
			// vec_float_operation_inline.h:716
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
	}
}

void rw::math::vpu::operator< <VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const rw::math::vpu::VecFloatRefIndex &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:554
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:556
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:558
		bool ret;

		{
			// vec_float_operation_inline.h:557
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
	}
}

void BrnGui::MainMapRenderer::IsWorldPosInViewport(Vector3  lv3WorldPos, const const rw::math::vpu::Matrix33 &  lm33WorldToView, Vector4  lv4ViewportRect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMainMapRenderer.cpp:933
		Vector2 lv2ViewportPos;

		MapTransform::Flatten(/* parameters */);
		MapTransform::Transform(/* parameters */);
		rw::math::vpu::Matrix33::Matrix33(/* parameters */);
		{
		}
		VecFloat<VectorAxisY>(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator>=<VectorAxisX>(/* parameters */);
		Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	}
	rw::math::vpu::operator< <VectorAxisX>(/* parameters */);
	rw::math::vpu::operator>=<VectorAxisY>(/* parameters */);
	{
	}
	rw::math::vpu::operator< <VectorAxisY>(/* parameters */);
}

void rw::math::vpu::GetVecFloat_Half() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator!=<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:216
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:218
		bool ret;

	}
}

void rw::math::vpu::operator-<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1430
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1431
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
}

void rw::math::vpu::operator-<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1430
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1431
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
}

void rw::math::vpu::operator/(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1688
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1689
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vec_float_operation_inline.h:1689
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vec_float_operation_inline.h:1689
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vec_float_operation_inline.h:1689
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vec_float_operation_inline.h:1689
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void rw::math::vpu::operator*<VectorAxisX>(const VecFloat  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1547
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1548
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator<(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:514
		bool result;

	}
}

void rw::math::vpu::GetVecFloat_NegativeOne() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*=(const VecFloat &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1122
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator+=(const VecFloat &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:996
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator>(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:356
		bool result;

	}
}

void rw::math::vpu::Clamp(const VecFloat  value, const VecFloat  min, const VecFloat  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Max<rw::math::vpu::VecFloat>(const const VecFloat &  a, const const VecFloat &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:149
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::Min<rw::math::vpu::VecFloat>(const const VecFloat &  a, const const VecFloat &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:132
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::operator+(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1248
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnGui::MapTransform::WorldToDevice(const rw::math::vpu::Vector3  lv3WorldPos, bool  lbClamp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapUtils.h:591
		Vector2 lvViewPos;

		// BrnMapUtils.h:592
		Vector2 lvClampedPos;

		Flatten(/* parameters */);
		Transform(/* parameters */);
		rw::math::vpu::Matrix33::Matrix33(/* parameters */);
		{
		}
	}
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	Transform(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	rw::math::vpu::operator*(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	rw::math::vpu::operator!=<VectorAxisX>(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::Vector2::SetX(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
	rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	{
		// BrnMapUtils.h:602
		VecFloat lfGradient;

		// BrnMapUtils.h:603
		VecFloat lfIntercept;

		// BrnMapUtils.h:604
		VecFloat lfAbsX;

		// BrnMapUtils.h:605
		VecFloat lfAbsY;

		rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::GetVecFloat_One(/* parameters */);
		rw::math::vpu::Vector2::SetY(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::Vector2::SetX(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::Vector2::SetX(/* parameters */);
		rw::math::vpu::Vector2::SetY(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::GetVecFloat_NegativeOne(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::GetVecFloat_NegativeOne(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
	}
}

void rw::math::vpu::operator< <VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:616
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:618
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:620
		bool ret;

		{
			// vec_float_operation_inline.h:619
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator><VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:458
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:460
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:462
		bool ret;

		{
			// vec_float_operation_inline.h:461
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator< <VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:616
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:618
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:620
		bool ret;

		{
			// vec_float_operation_inline.h:619
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator><VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:458
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:460
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:462
		bool ret;

		{
			// vec_float_operation_inline.h:461
			VectorIntrinsicUnion u;

		}
	}
}

void CgsGui::StateInterface::GetAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MapTransform::GetWorldSpace() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MapTransform::GetNormalisedSpace() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MapTransform::Transform(const rw::math::vpu::Vector2  lv2In, const rw::math::vpu::Matrix33 &  lm33FromSpace, const rw::math::vpu::Matrix33 &  lm33ToSpace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MapTransform::MakeTransform(const rw::math::vpu::Matrix33 &  lm33FromSpace, const rw::math::vpu::Matrix33 &  lm33ToSpace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Inverse(const rw::math::vpu::Matrix33 &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix33_operation_inline.h:202
		VecFloat determinant;

	}
}

void rw::math::vpu::Inverse(const rw::math::vpu::Matrix33 &  m, const VecFloat &  determinant) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix33_operation_platform_inline.h:164
		VectorIntrinsicUnion::VectorIntrinsic d;

		// matrix33_operation_platform_inline.h:165
		VectorIntrinsicUnion::VectorIntrinsic x;

		// matrix33_operation_platform_inline.h:166
		VectorIntrinsicUnion::VectorIntrinsic y;

		// matrix33_operation_platform_inline.h:167
		VectorIntrinsicUnion::VectorIntrinsic z;

		{
			// matrix33_operation_platform_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic temp_inverse_crossYZ;

			// matrix33_operation_platform_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic temp_inverse_crossZX;

			// matrix33_operation_platform_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic temp_inverse_crossXY;

			// matrix33_operation_platform_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic temp_inverse_x;

			// matrix33_operation_platform_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic temp_inverse_y;

			// matrix33_operation_platform_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic temp_inverse_z;

			{
				// matrix33_operation_platform_inline.h:168
				VectorIntrinsicUnion::VectorIntrinsic crossV2;

				// matrix33_operation_platform_inline.h:168
				VectorIntrinsicUnion::VectorIntrinsic crossV1;

				// matrix33_operation_platform_inline.h:168
				VectorIntrinsicUnion::VectorIntrinsic vZero;

				// matrix33_operation_platform_inline.h:168
				VectorIntrinsicUnion::VectorIntrinsic crossV3;

			}
			{
				// matrix33_operation_platform_inline.h:168
				VectorIntrinsicUnion::VectorIntrinsic crossV2;

				// matrix33_operation_platform_inline.h:168
				VectorIntrinsicUnion::VectorIntrinsic crossV1;

				// matrix33_operation_platform_inline.h:168
				VectorIntrinsicUnion::VectorIntrinsic vZero;

				// matrix33_operation_platform_inline.h:168
				VectorIntrinsicUnion::VectorIntrinsic crossV3;

			}
			{
				// matrix33_operation_platform_inline.h:168
				VectorIntrinsicUnion::VectorIntrinsic crossV2;

				// matrix33_operation_platform_inline.h:168
				VectorIntrinsicUnion::VectorIntrinsic crossV1;

				// matrix33_operation_platform_inline.h:168
				VectorIntrinsicUnion::VectorIntrinsic vZero;

				// matrix33_operation_platform_inline.h:168
				VectorIntrinsicUnion::VectorIntrinsic crossV3;

			}
			{
				// matrix33_operation_platform_inline.h:168
				VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

				// matrix33_operation_platform_inline.h:168
				VectorIntrinsicUnion::VectorIntrinsic yy;

				// matrix33_operation_platform_inline.h:168
				VectorIntrinsicUnion::VectorIntrinsic zz;

			}
			{
				// matrix33_operation_platform_inline.h:168
				VectorIntrinsicUnion::VectorIntrinsic temp0;

				// matrix33_operation_platform_inline.h:168
				VectorIntrinsicUnion::VectorIntrinsic temp1;

				// matrix33_operation_platform_inline.h:168
				VectorIntrinsicUnion::VectorIntrinsic temp2;

				// matrix33_operation_platform_inline.h:168
				VectorIntrinsicUnion::VectorIntrinsic temp3;

			}
			{
				// matrix33_operation_platform_inline.h:168
				VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

				// matrix33_operation_platform_inline.h:168
				VectorIntrinsicUnion::VectorIntrinsic reciprocal;

				// matrix33_operation_platform_inline.h:168
				VectorIntrinsicUnion::VectorIntrinsic vZero;

				{
					// matrix33_operation_platform_inline.h:168
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// matrix33_operation_platform_inline.h:168
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					{
						// matrix33_operation_platform_inline.h:168
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// matrix33_operation_platform_inline.h:168
						VectorIntrinsicUnion::VectorIntrinsic vOne;

					}
				}
			}
		}
	}
}

void BrnGui::MapTransform::GetNormalisedRect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MapTransform::Transform(const rw::math::vpu::Vector2  lv2In, const rw::math::vpu::Vector4  lv4FromRect, const rw::math::vpu::Vector4  lv4ToRect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MapTransform::MakeCoordSpaceFromRect(const rw::math::vpu::Vector4  lv4Rect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapUtils.h:460
		Vector2 lv2Origin;

		// BrnMapUtils.h:461
		Vector2 lv2XAxis;

		// BrnMapUtils.h:462
		Vector2 lv2YAxis;

	}
}

void BrnGui::MapTransform::MakeCoordSpaceFromAxes(const rw::math::vpu::Vector2  lv2Origin, const rw::math::vpu::Vector2  lv2XAxis, const rw::math::vpu::Vector2  lv2YAxis) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+=(const Vector2 &  v, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-=(const Vector2 &  v, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MainMapComponent::CalculateOffsetWorldCentre(const rw::math::vpu::Vector2  lv2WorldCentre, BrnGui::MainMapComponent::OffsetPadding  leOffsetDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMainMap.cpp:275
		Vector2 lv2ViewPaddingOffset;

		// BrnMainMap.cpp:276
		Vector2 lv2ViewCentrePoint;

		MapTransform::Transform(/* parameters */);
	}
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::operator-<VectorAxisW, VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	MapTransform::Transform(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	MapTransform::Transform(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	MapTransform::MakeCoordSpaceFromRect(/* parameters */);
	{
	}
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	{
	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	MapTransform::MakeCoordSpaceFromAxes(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator*(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	MapTransform::Transform(/* parameters */);
	rw::math::vpu::operator-<VectorAxisW, VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	MapTransform::Transform(/* parameters */);
	MapTransform::MakeCoordSpaceFromRect(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	{
	}
	MapTransform::Transform(/* parameters */);
	MapTransform::MakeCoordSpaceFromAxes(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	{
	}
	{
	}
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator*(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
}

void BrnGui::MapTransform::SetZoomedWorldRect(const rw::math::vpu::Vector2  lv2Origin, const rw::math::vpu::Vector2  lv2TopRight, const rw::math::vpu::Vector2  lv2BottomLeft) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MapTransform::MakeCoordSpaceFromPoints(const rw::math::vpu::Vector2  lv2Origin, const rw::math::vpu::Vector2  lv2TopRight, const rw::math::vpu::Vector2  lv2BottomLeft) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MapTransform::SetZoomedViewportRect(const rw::math::vpu::Vector4  lv4Rect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavComponent::SetViewParamsFromPlayerCar(const GuiPlayerInfo *  lpPlayerCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNav.cpp:184
		Vector3[4] lv3WorldRect;

		// BrnSatNav.cpp:185
		Vector3 lv3WorldPlayerCarPosition;

	}
	MapTransform::Flatten(/* parameters */);
	MapTransform::Flatten(/* parameters */);
	MapTransform::Flatten(/* parameters */);
	MapTransform::SetZoomedWorldRect(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Matrix33::operator=(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::Inverse(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	MapTransform::SetZoomedViewportRect(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	MapTransform::MakeCoordSpaceFromRect(/* parameters */);
	{
	}
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	MapTransform::MakeCoordSpaceFromAxes(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	rw::math::vpu::Matrix33::operator=(/* parameters */);
	{
	}
	{
		{
		}
	}
}

void rw::math::fpu::Matrix33Template<float>::GetElem(int  row, int  column) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::GetComponent(int  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*=(const Matrix33 &  m, const rw::math::vpu::Matrix33 &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SetMaskAspectCorrectionMatrix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	MapTransform::MakeCoordSpaceFromRect(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::Matrix33::operator=(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::fpu::Matrix33Template<float>::GetElem(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	rw::math::vpu::operator-<VectorAxisW, VectorAxisY>(/* parameters */);
	rw::math::fpu::Matrix33Template<float>::GetElem(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	{
	}
	rw::math::fpu::Matrix33Template<float>::GetElem(/* parameters */);
	rw::math::fpu::Matrix33Template<float>::GetElem(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix33::operator=(/* parameters */);
	rw::math::vpu::Matrix33::operator=(/* parameters */);
}

void rw::math::vpu::operator-(const const rw::math::vpu::VecFloatRefIndex &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1507
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1508
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1510
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1509
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
		{
			// vec_float_operation_inline.h:1511
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator+<VectorAxisX>(const const rw::math::vpu::VecFloatRefIndex &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1339
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1340
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1342
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		{
			// vec_float_operation_inline.h:1341
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
	}
}

void rw::math::vpu::operator+(const const rw::math::vpu::VecFloatRefIndex &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1361
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1362
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1364
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1363
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
		{
			// vec_float_operation_inline.h:1365
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator+<VectorAxisY>(const const rw::math::vpu::VecFloatRefIndex &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1339
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1340
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1342
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		{
			// vec_float_operation_inline.h:1341
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
	}
}

void rw::math::vpu::Magnitude(const rw::math::vpu::Vector4  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:243
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector4_operation_inline.h:244
			VectorIntrinsicUnion::VectorIntrinsic dotproduct;

			{
				// vector4_operation_inline.h:244
				VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz_ww;

				// vector4_operation_inline.h:244
				VectorIntrinsicUnion::VectorIntrinsic zz_ww;

				// vector4_operation_inline.h:244
				VectorIntrinsicUnion::VectorIntrinsic xxpluszz_yyplusww;

				// vector4_operation_inline.h:244
				VectorIntrinsicUnion::VectorIntrinsic yyplusww;

			}
			{
				// vector4_operation_inline.h:244
				const VectorIntrinsicUnion::VectorIntrinsic zero;

				// vector4_operation_inline.h:244
				VectorIntrinsicUnion::VectorIntrinsic isZeroMask;

				// vector4_operation_inline.h:244
				VectorIntrinsicUnion::VectorIntrinsic recipSqrt;

				// vector4_operation_inline.h:244
				VectorIntrinsicUnion::VectorIntrinsic result;

				{
					// vector4_operation_inline.h:244
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector4_operation_inline.h:244
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector4_operation_inline.h:244
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector4_operation_inline.h:244
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector4_operation_inline.h:244
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector4_operation_inline.h:244
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector4_operation_inline.h:244
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector4_operation_inline.h:244
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void rw::math::vpu::operator<(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:638
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:640
		bool ret;

		{
			// vec_float_operation_inline.h:639
			VectorIntrinsicUnion u;

		}
	}
}

void BrnGui::MainMapComponent::CalculatePositionedWorldRect(const rw::math::vpu::Vector2  lv2WorldCentre) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMainMap.cpp:328
		Vector4 lv4MapExtent;

		// BrnMainMap.cpp:329
		Vector2 lv2ViewPaddingOffset;

		// BrnMainMap.cpp:380
		float32_t lfCentreX;

		// BrnMainMap.cpp:381
		float32_t lfCentreY;

	}
	MapTransform::Transform(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	{
		// BrnMainMap.cpp:333
		float32_t lfDesiredWidth;

		// BrnMainMap.cpp:334
		float32_t lfDesiredXPos;

		// BrnMainMap.cpp:335
		float32_t lfMinXPos;

		// BrnMainMap.cpp:336
		float32_t lfMaxXPos;

		rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	}
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisW, VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	MapTransform::Transform(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	MapTransform::MakeCoordSpaceFromRect(/* parameters */);
	{
	}
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	{
	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	MapTransform::MakeCoordSpaceFromAxes(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	{
	}
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
	}
	{
	}
	MapTransform::Transform(/* parameters */);
	{
	}
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	{
		{
		}
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
		// BrnMainMap.cpp:356
		float32_t lfDesiredHeight;

		// BrnMainMap.cpp:357
		float32_t lfDesiredYPos;

		// BrnMainMap.cpp:358
		float32_t lfMinYPos;

		// BrnMainMap.cpp:359
		float32_t lfMaxYPos;

		rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	}
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
	}
	{
	}
	{
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::GetFloat(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::GetFloat(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	{
	}
	rw::math::vpu::VecFloatRefIndex::GetFloat(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	{
	}
	rw::math::vpu::VecFloatRefIndex::GetFloat(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	{
	}
}

void rw::math::vpu::Abs<float>(const const float &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:58
		float r;

	}
}

void rw::math::vpu::operator/(const rw::math::vpu::Vector2  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:448
		VectorIntrinsicUnion::VectorIntrinsic result;

		// vector2_operation_inline.h:449
		VectorIntrinsicUnion::VectorIntrinsic divisor;

		{
			// vector2_operation_inline.h:451
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vector2_operation_inline.h:451
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vector2_operation_inline.h:451
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vector2_operation_inline.h:451
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector2_operation_inline.h:451
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void rw::math::vpu::Magnitude(const rw::math::vpu::Vector2  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:168
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector2_operation_inline.h:169
			VectorIntrinsicUnion::VectorIntrinsic dotproduct;

			{
				// vector2_operation_inline.h:169
				VectorIntrinsicUnion::VectorIntrinsic product;

				// vector2_operation_inline.h:169
				VectorIntrinsicUnion::VectorIntrinsic x_product;

				// vector2_operation_inline.h:169
				VectorIntrinsicUnion::VectorIntrinsic y_product;

			}
			{
				// vector2_operation_inline.h:169
				const VectorIntrinsicUnion::VectorIntrinsic zero;

				// vector2_operation_inline.h:169
				VectorIntrinsicUnion::VectorIntrinsic isZeroMask;

				// vector2_operation_inline.h:169
				VectorIntrinsicUnion::VectorIntrinsic recipSqrt;

				// vector2_operation_inline.h:169
				VectorIntrinsicUnion::VectorIntrinsic result;

				{
					// vector2_operation_inline.h:169
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector2_operation_inline.h:169
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector2_operation_inline.h:169
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector2_operation_inline.h:169
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector2_operation_inline.h:169
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector2_operation_inline.h:169
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector2_operation_inline.h:169
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector2_operation_inline.h:169
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void rw::math::vpu::operator>(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:480
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:482
		bool ret;

		{
			// vec_float_operation_inline.h:481
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector4  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:499
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector4_operation_inline.h:500
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vector4_operation_inline.h:500
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::_asmSwizzleStore(VectorIntrinsicInParam  dest, rw::math::vpu::VectorAxis  destIndex, VectorIntrinsicInParam  src, rw::math::vpu::VectorAxis  srcIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:486
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnGui::MainMapComponent::ApplyZoom(const rw::math::vpu::Vector2  lv2WorldCentre, float32_t  lAspectRatio) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnMainMap.cpp:547
	Vector2 lv2ZoomedCentre;

	{
		// BrnMainMap.cpp:547
		Vector2 lv2ZoomedCentre;

		// BrnMainMap.cpp:548
		float32_t lfZoomScale;

		// BrnMainMap.cpp:549
		float32_t lfCentreTolerance;

		// BrnMainMap.cpp:550
		bool lbFinishedZoom;

		// BrnMainMap.cpp:553
		float32_t lfFramesToScroll;

	}
	rw::math::vpu::Abs<float>(/* parameters */);
	{
		// BrnMainMap.cpp:558
		float32_t lfZoomDir;

		// BrnMainMap.cpp:562
		Vector2 lv2Diff;

		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
	}
	rw::math::vpu::VecFloatRefIndex::operator*=(/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::_asmSwizzleStore(/* parameters */);
	{
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	{
		// BrnMainMap.cpp:571
		Vector2 lv2Diff;

		// BrnMainMap.cpp:582
		Vector2 lv2OffsetWorldCentre;

		// BrnMainMap.cpp:583
		Vector2 lv2PositionedWorldCentre;

		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::Vector4::operator[](/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator*=(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::_asmSwizzleStore(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		{
		}
		rw::math::vpu::Magnitude(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
	}
	rw::math::vpu::operator!=(/* parameters */);
}

void BrnGui::GuiCache::GetAspectRatio() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MainMapComponent::SnapToLocation(const rw::math::vpu::Vector2  lv2MapCentre) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMainMap.cpp:408
		Vector2 lv2OffsetWorldCentre;

		// BrnMainMap.cpp:409
		Vector2 lv2PositionedWorldCentre;

	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
	}
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator*=(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::_asmSwizzleStore(/* parameters */);
	{
	}
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
		{
			{
			}
		}
	}
}

void renderengine::RGBA32::RGBA32(float32_t  red, float32_t  green, float32_t  blue, float32_t  alpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<double>::Vector2Template(double  _x, double  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<double>::Vector3Template(double  _x, double  _y, double  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::Vector4Template(double  _x, double  _y, double  _z, double  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::ResourceHandle(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::BaseResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResource::SmallResource(const const SmallMemoryResource &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<3u>::BaseResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resource.h:307
		uint32_t i;

	}
}

void rw::BaseResources<3u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::ResourceHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::LandmarkIndex(int32_t  lTriggerRegionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::EntityId(uint32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeId::VolumeId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::VolumeInstanceId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneQueryId::SceneQueryId(uint32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::RigidBodyId::RigidBodyId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::JointId::JointId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::DriveId::DriveId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetMatrix33_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::~BaseResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::RemoveFromCurrentList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void __static_initialization_and_destruction_0(int  __initialize_p, int  __priority) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::BaseResourcePtr::~BaseResourcePtr(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	CgsResource::ResourceHandle::ResourceHandle(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::VolumeId::VolumeId(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	BrnGui::MapTransform::MakeCoordSpaceFromRect(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	BrnGui::MapTransform::MakeCoordSpaceFromAxes(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsSceneManager::VolumeInstanceId::VolumeInstanceId(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	CgsSceneManager::EntityId::EntityId(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsPhysics::RigidBodyId::RigidBodyId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsPhysics::DriveId::DriveId(/* parameters */);
	CgsPhysics::JointId::JointId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::GetMatrix33_Zero(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisW, VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	BrnGui::MapTransform::MakeCoordSpaceFromRect(/* parameters */);
	BrnGui::MapTransform::MakeCoordSpaceFromAxes(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisW, VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	{
	}
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	BrnGui::MapTransform::MakeCoordSpaceFromRect(/* parameters */);
	rw::math::vpu::operator-<VectorAxisW, VectorAxisY>(/* parameters */);
	BrnGui::MapTransform::MakeCoordSpaceFromRect(/* parameters */);
	rw::math::vpu::operator-<VectorAxisW, VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	BrnGui::MapTransform::MakeCoordSpaceFromAxes(/* parameters */);
	BrnGui::MapTransform::MakeCoordSpaceFromAxes(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	BrnGui::MapTransform::MakeCoordSpaceFromRect(/* parameters */);
	BrnGui::MapTransform::MakeCoordSpaceFromRect(/* parameters */);
	BrnGui::MapTransform::MakeCoordSpaceFromRect(/* parameters */);
}

void rw::RGBA::RGBA() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsLanguage::LanguageManager::GetLanguage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessageRenderer::InGameMessage::GetText() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::SetAlpha(uint8_t  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<CgsResource::Font>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHandle.h:403
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::ResourceHandle::GetResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStream::StrStream(char *  lpcCharBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::StrStreamBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextObject::GetText() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextObject::SetStringWidth(float32_t  lfNewStringWidth) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessageRenderer::InGameMessage::GetStringWidth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessageRenderer::InGameMessage::GetRepeats() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessageRenderer::DrawMessages(CgsGraphics::Im2dRenderBuffer *  lpIm2dRenderBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInGameMessageRenderer.cpp:1284
		BrnGui::InGameMessageRenderer::InGameMessage * lpMessage;

		// BrnInGameMessageRenderer.cpp:1285
		float32_t lfThisTextStartPosX;

		// BrnInGameMessageRenderer.cpp:1286
		float32_t lfThisTextEndPosX;

		// BrnInGameMessageRenderer.cpp:1287
		bool lbLoopedMessages;

		// BrnInGameMessageRenderer.cpp:1288
		RGBA lTextColour;

	}
	{
		// BrnInGameMessageRenderer.cpp:1311
		float32_t lfStringWidth;

	}
	{
		// BrnInGameMessageRenderer.cpp:1345
		float32_t lfStringWidth;

		CgsGraphics::TextObject::SetText(/* parameters */);
		rw::RGBA::SetAlpha(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		CgsGraphics::TextObject::SetStringWidth(/* parameters */);
		InGameMessage::GetStringWidth(/* parameters */);
		InGameMessage::GetNext(/* parameters */);
		InGameMessage::GetNext(/* parameters */);
	}
	CgsGraphics::TextObject::SetText(/* parameters */);
	rw::RGBA::SetAlpha(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	CgsGraphics::TextObject::SetStringWidth(/* parameters */);
	{
		// BrnInGameMessageRenderer.cpp:1373
		BrnGui::InGameMessageRenderer::InGameMessage * lpThisMessage;

		// BrnInGameMessageRenderer.cpp:1374
		BrnGui::InGameMessageRenderer::InGameMessage * lpLastMessage;

		InGameMessage::GetNext(/* parameters */);
		InGameMessage::GetNext(/* parameters */);
		InGameMessage::GetNext(/* parameters */);
	}
	InGameMessage::SetInUse(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsUnicode::UnicodeBuffer::Convert(const UnicodeBuffer::CgsUtf8 *  lUtf8String) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsUnicode.h:481
		CgsDev::StrStream lStrStream;

	}
}

void CgsUnicode::UnicodeBuffer::GetBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsUnicode::Print<const CgsUnicode::CgsUtf8*, const CgsUnicode::CgsUtf8*>(const UnicodeBuffer::CgsUtf8 *  lUtf8Source, UnicodeBuffer::CgsUtf8 *  lUtf8Target, const int32_t  lnTargetStringSize, const const UnicodeBuffer::CgsUtf8 *const&  lArg1, const const UnicodeBuffer::CgsUtf8 *const&  lArg2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsUnicode.h:691
		UnicodeBuffer lBuffer1;

		// CgsUnicode.h:692
		UnicodeBuffer lBuffer2;

		// CgsUnicode.h:697
		UnicodeBuffer::CgsUtf8 *[2] lParams;

	}
	UnicodeBuffer::Convert(/* parameters */);
	UnicodeBuffer::Convert(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsUnicode::Print<const CgsUnicode::CgsUtf8*, const CgsUnicode::CgsUtf8*, const CgsUnicode::CgsUtf8*>(const UnicodeBuffer::CgsUtf8 *  lUtf8Source, UnicodeBuffer::CgsUtf8 *  lUtf8Target, const int32_t  lnTargetStringSize, const const UnicodeBuffer::CgsUtf8 *const&  lArg1, const const UnicodeBuffer::CgsUtf8 *const&  lArg2, const const UnicodeBuffer::CgsUtf8 *const&  lArg3) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsUnicode.h:725
		UnicodeBuffer lBuffer1;

		// CgsUnicode.h:726
		UnicodeBuffer lBuffer2;

		// CgsUnicode.h:727
		UnicodeBuffer lBuffer3;

		// CgsUnicode.h:733
		UnicodeBuffer::CgsUtf8 *[3] lParams;

	}
	UnicodeBuffer::Convert(/* parameters */);
	UnicodeBuffer::Convert(/* parameters */);
	UnicodeBuffer::Convert(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsUnicode::Print<CgsUnicode::CgsUtf8*, CgsUnicode::CgsUtf8 [32]>(const UnicodeBuffer::CgsUtf8 *  lUtf8Source, UnicodeBuffer::CgsUtf8 *  lUtf8Target, const int32_t  lnTargetStringSize, const UnicodeBuffer::CgsUtf8 *const&  lArg1, const UnicodeBuffer::CgsUtf8 &[32]  lArg2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsUnicode.h:691
		UnicodeBuffer lBuffer1;

		// CgsUnicode.h:692
		UnicodeBuffer lBuffer2;

		// CgsUnicode.h:697
		UnicodeBuffer::CgsUtf8 *[2] lParams;

		UnicodeBuffer::Convert(/* parameters */);
	}
	UnicodeBuffer::Convert(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsUnicode::Print<CgsUnicode::CgsUtf8*>(const UnicodeBuffer::CgsUtf8 *  lUtf8Source, UnicodeBuffer::CgsUtf8 *  lUtf8Target, const int32_t  lnTargetStringSize, const UnicodeBuffer::CgsUtf8 *const&  lArg1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsUnicode.h:661
		UnicodeBuffer lBuffer1;

		// CgsUnicode.h:665
		UnicodeBuffer::CgsUtf8 *[1] lParams;

		UnicodeBuffer::Convert(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::GuiCache::GetGuiTracker() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiTracker::GetTrackerInformation(int32_t  liTrackerIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiTracker.h:278
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::GuiTracker::GetNumTracked() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(float  s, const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:460
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnGui::GuiCache::GetTimeStep() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventTimeInfo::GetTimeStep() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavComponent::UpdateFreeRoaming() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNav.cpp:422
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnSatNav.cpp:413
		const BrnGui::GuiTracker::TrackerInfo * lpLastTrackedItem;

		GuiTracker::GetTrackerInformation(/* parameters */);
		GuiTracker::GetTrackerInformation(/* parameters */);
	}
	{
		// BrnSatNav.cpp:370
		const BrnGui::GuiTracker::TrackerInfo * lpFirstTrackedItem;

		GuiTracker::GetTrackerInformation(/* parameters */);
		GuiTracker::GetTrackerInformation(/* parameters */);
	}
	{
		// BrnSatNav.cpp:383
		const BrnGui::GuiTracker::TrackerInfo * lpFirstTrackedItem;

		// BrnSatNav.cpp:384
		const BrnGui::GuiTracker::TrackerInfo * lpLastTrackedItem;

		// BrnSatNav.cpp:386
		Vector3 lv3CurrentPosition;

		GuiTracker::GetTrackerInformation(/* parameters */);
		GuiTracker::GetTrackerInformation(/* parameters */);
		GuiTracker::GetTrackerInformation(/* parameters */);
		GuiTracker::GetTrackerInformation(/* parameters */);
		{
			// BrnSatNav.cpp:391
			float32_t lfProp;

			// BrnSatNav.cpp:392
			Vector3 lv3DirectionV;

			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
		}
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::GuiCache::GetNumProfileEvents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnProgression::ProfileEvent,175u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetNumPresetEvents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::GetNumEvents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::WorldDataController::GetTotalNumberOfOnlineLandmarks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:562
		CgsDev::StrStream lStrStream;

	}
}

void BrnTrigger::TriggerData::GetOnlineLandmarkCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::stdc::Min(int  a, int  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavRenderer::GetNumIcons() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::GetNumProfileEvents(/* parameters */);
	GuiCache::GetNumPresetEvents(/* parameters */);
	GuiCache::GetWorldDataController(/* parameters */);
	WorldDataController::GetTotalNumberOfOnlineLandmarks(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::GuiCustRendererDebugComponent::SetMainMapDisplayActive(bool  lbSetActive) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventQueueBase<4096,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<4096,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnGui::CustomRendererManager::Render(ImRendererSet *  lpImRenderers, CgsGui::eCustomRenderLayer  lRenderLayer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		// BrnCustomRenderer.cpp:535
		int32_t i;

	}
	GuiCustRendererDebugComponent::SetMainMapDisplayActive(/* parameters */);
	CgsGui::GuiEventQueueBase<4096,16>::Clear(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::Array<rw::math::vpu::Vector3,5120u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector3_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<rw::math::vpu::Vector3,5120u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<rw::math::vpu::Vector3,5120u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::vpu::Magnitude(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:160
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:161
			VectorIntrinsicUnion::VectorIntrinsic dotproduct;

			{
				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic yy;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic zz;

			}
			{
				// vector3_operation_inline.h:161
				const VectorIntrinsicUnion::VectorIntrinsic zero;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic isZeroMask;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic recipSqrt;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic result;

				{
					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void CgsGui::ParticleSystem2d::JumpEmitterPos(const const rw::math::vpu::Vector2 &  lv2EmitterPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MainMapRenderer::RenderPulse(const Array<rw::math::vpu::Vector3,5120u> *  lpRouteInfo, float32_t  lfRouteLength, float32_t  lfPulseProp, float32_t  lfLastProp, CgsGraphics::Im2dRenderBuffer *  lpIm2dRenderBuffer, const const rw::math::vpu::Matrix33 &  lm33WorldToView, const ParticleSystem2d &  lParticleSystem, float32_t  lfTimeNow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMainMapRenderer.cpp:1015
		float32_t lfRouteDistance;

		// BrnMainMapRenderer.cpp:1016
		float32_t lfTargetDistance;

		// BrnMainMapRenderer.cpp:1017
		Vector3 lv3PulseWorldPos;

		// BrnMainMapRenderer.cpp:1039
		Vector2 lv2PulseViewPos;

	}
	CgsContainers::Array<rw::math::vpu::Vector3,5120u>::GetLength(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	{
		// BrnMainMapRenderer.cpp:1019
		uint32_t iPoint;

		{
			// BrnMainMapRenderer.cpp:1021
			Vector3 lv3From;

			// BrnMainMapRenderer.cpp:1022
			Vector3 lv3To;

			// BrnMainMapRenderer.cpp:1025
			Vector3 lv3SegmentVector;

			// BrnMainMapRenderer.cpp:1026
			float32_t lfSegmentLength;

			CgsContainers::Array<rw::math::vpu::Vector3,5120u>::operator[](/* parameters */);
			CgsContainers::Array<rw::math::vpu::Vector3,5120u>::operator[](/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::Magnitude(/* parameters */);
			{
				// BrnMainMapRenderer.cpp:1031
				float32_t lfRemainingDistance;

				rw::math::vpu::operator+(/* parameters */);
			}
		}
		CgsContainers::Array<rw::math::vpu::Vector3,5120u>::GetLength(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	rw::math::vpu::operator*(/* parameters */);
	MapTransform::Flatten(/* parameters */);
	MapTransform::Transform(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	rw::math::vpu::Abs<float>(/* parameters */);
	{
	}
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
}

void BrnGui::CustomRendererManager::Prepare(rw::IResourceAllocator *  lpHeapAllocator, rw::IResourceAllocator *  lpTextureAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCustomRenderer.cpp:177
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCustomRenderer.cpp:130
		bool lbAreAllPrepared;

		{
			// BrnCustomRenderer.cpp:134
			int32_t i;

		}
	}
}

void BrnGui::CustomRendererManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCustomRenderer.cpp:226
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCustomRenderer.cpp:208
		int32_t i;

	}
}

void BrnGui::GuiCustRendererDebugComponent::IsOverrideEnabled() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCustRendererDebugComponent::IsRenderingActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCustRendererDebugComponent::IsSatNavDisplayActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCustRendererDebugComponent::IsMainMapDisplayActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCustRendererDebugComponent::IsAboveCarDisplayActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CustomRendererManager::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::GuiEventQueueBase<4096,16>::Clear(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Clear(/* parameters */);
	{
		// BrnCustomRenderer.cpp:593
		int32_t i;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::CustomMeshRenderer::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCustomMeshRenderer.cpp:90
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::CustomMeshRenderer::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCustomMeshRenderer.cpp:131
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::CustomMeshRenderer::RecvEvent(const CgsModule::Event *  lpEvent, int32_t  lEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCustomMeshRenderer.cpp:191
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::SatNavRenderer::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNavRenderer.cpp:361
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::IResourceAllocator::Free(/* parameters */);
	rw::IResourceAllocator::Free(/* parameters */);
	rw::IResourceAllocator::Free(/* parameters */);
	rw::IResourceAllocator::Free(/* parameters */);
	rw::IResourceAllocator::Free(/* parameters */);
}

void BrnGui::SatNavRenderer::RecvEvent(const CgsModule::Event *  lpEvent, int32_t  lEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNavRenderer.cpp:438
		const GuiEventJunctionInfo * lpJunctionInfo;

	}
	{
		// BrnSatNavRenderer.cpp:452
		const GuiEventEnableSatNavIcons * lpEnableSatNavIcons;

	}
	{
		// BrnSatNavRenderer.cpp:429
		const GuiEventCache * lpCacheEvent;

	}
	{
		// BrnSatNavRenderer.cpp:416
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void rw::math::fpu::Vector2Template<float>::Y() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::SetY(float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavRenderer::InitEventTypeUvs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNavRenderer.cpp:693
		int32_t liTextureIndex;

		// BrnSatNavRenderer.cpp:694
		uint32_t luIconTypeIndex;

		// BrnSatNavRenderer.cpp:695
		uint32_t luEventTypeIndex;

		rw::math::fpu::Vector2Template<float>::SetY(/* parameters */);
		rw::math::fpu::Vector2Template<float>::SetY(/* parameters */);
		rw::math::fpu::Vector2Template<float>::SetY(/* parameters */);
		rw::math::fpu::Vector2Template<float>::SetY(/* parameters */);
	}
}

void BrnGui::SatNavRenderer::InitResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNavRenderer.cpp:654
		int32_t liTextureIndex;

		// BrnSatNavRenderer.cpp:655
		Texture2D * lpTexture;

		// BrnSatNavRenderer.cpp:656
		Parameters lTextureStateParams;

	}
	renderengine::TextureState::Parameters::Parameters(/* parameters */);
	renderengine::TextureState::Parameters::SetTexture(/* parameters */);
	renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

void BrnGui::SatNavRenderer::Prepare(GuiEventQueueSmall *  lpOutputEventQueue, rw::IResourceAllocator *  lpHeapAllocator, rw::IResourceAllocator *  lpTextureAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNavRenderer.cpp:285
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void renderengine::Texture::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptorType<0u>::BaseResourceDescriptorType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::ResourceDescriptor(const const MemoryResourceDescriptor &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::Resource::Resource(const const MemoryResource &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<6u>::BaseResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resource.h:307
		uint32_t i;

	}
}

void renderengine::Texture::Parameters::SetFlags(uint32_t  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::Parameters::SetFormat(renderengine::PixelFormat  fmt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::Parameters::SetHeight(uint32_t  h) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::Parameters::SetWidth(uint32_t  w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::Parameters::SetMipLevels(uint32_t  ml) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture2D::Lock(uint32_t  lockFlags, uint32_t  mipLevel, const renderengine::Texture::Locked &  locked) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::NetworkPlayerImageRenderer::Prepare(GuiEventQueueSmall *  lpOutputEventQueue, rw::IResourceAllocator *  lpHeapAllocator, rw::IResourceAllocator *  lpTextureAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerImageRenderer.cpp:280
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkPlayerImageRenderer.cpp:160
		renderengine::Texture::Parameters lTextureParams;

		// BrnNetworkPlayerImageRenderer.cpp:161
		renderengine::Texture::Parameters lCompressedTextureParams;

		// BrnNetworkPlayerImageRenderer.cpp:162
		ResourceDescriptor lTextureDesc;

		// BrnNetworkPlayerImageRenderer.cpp:163
		ResourceDescriptor lCompressedTextureDesc;

		// BrnNetworkPlayerImageRenderer.cpp:164
		Resource lResource;

		// BrnNetworkPlayerImageRenderer.cpp:165
		int32_t liIndex;

		// BrnNetworkPlayerImageRenderer.cpp:166
		int32_t liTextureIndex;

		// BrnNetworkPlayerImageRenderer.cpp:246
		int32_t liShaderProgram;

		renderengine::Texture::Parameters::Parameters(/* parameters */);
		renderengine::Texture::Parameters::Parameters(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::Resource::Resource(/* parameters */);
		renderengine::Texture::Parameters::SetFormat(/* parameters */);
		renderengine::Texture::Parameters::SetHeight(/* parameters */);
		renderengine::Texture::Parameters::SetFlags(/* parameters */);
		renderengine::Texture::Parameters::SetWidth(/* parameters */);
		renderengine::Texture::Parameters::SetMipLevels(/* parameters */);
		renderengine::Texture::Parameters::SetFlags(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		renderengine::Texture::Parameters::SetFormat(/* parameters */);
		renderengine::Texture::Parameters::SetHeight(/* parameters */);
		renderengine::Texture::Parameters::SetWidth(/* parameters */);
		renderengine::Texture::Parameters::SetMipLevels(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		renderengine::Texture2D::Lock(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		renderengine::Texture2D::Lock(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
}

void renderengine::Texture2D::Destruct(Texture2D *  texture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::NetworkPlayerImageRenderer::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerImageRenderer.cpp:303
		int32_t liTextureIndex;

		// BrnNetworkPlayerImageRenderer.cpp:304
		int32_t liIndex;

	}
	{
		// BrnNetworkPlayerImageRenderer.cpp:368
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	renderengine::Texture2D::Destruct(/* parameters */);
	renderengine::Texture2D::Destruct(/* parameters */);
}

void BrnGui::NetworkPlayerImageRenderer::RecvEvent(const CgsModule::Event *  lpEvent, int32_t  lEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerImageRenderer.cpp:440
		const GuiEventNetworkPlayerImage * lpNetworkPlayerImageEvent;

	}
	{
		// BrnNetworkPlayerImageRenderer.cpp:480
		const GuiEventCache * lpGuiCacheEvent;

	}
	{
		// BrnNetworkPlayerImageRenderer.cpp:434
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::MainMapRenderer::Prepare(GuiEventQueueSmall *  lpOutputEventQueue, rw::IResourceAllocator *  lpHeapAllocator, rw::IResourceAllocator *  lpTextureAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMainMapRenderer.cpp:130
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::MainMapRenderer::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMainMapRenderer.cpp:210
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnMainMapRenderer.cpp:160
		int32_t i;

	}
	rw::IResourceAllocator::Free(/* parameters */);
	rw::IResourceAllocator::Free(/* parameters */);
	rw::IResourceAllocator::Free(/* parameters */);
	rw::IResourceAllocator::Free(/* parameters */);
	rw::IResourceAllocator::Free(/* parameters */);
}

void BrnGui::MainMapRenderer::RecvEvent(const CgsModule::Event *  lpEvent, int32_t  lEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMainMapRenderer.cpp:283
		const GuiEventCache * lpCacheEvent;

	}
	{
		// BrnMainMapRenderer.cpp:293
		const GuiEventLoadNotification * lpLoadNotification;

		{
			// BrnMainMapRenderer.cpp:304
			Texture2D * lpTexture;

			// BrnMainMapRenderer.cpp:307
			Parameters lTextureStateParams;

			renderengine::TextureState::Parameters::Parameters(/* parameters */);
			renderengine::TextureState::Parameters::SetTexture(/* parameters */);
			renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
			renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
			renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
			renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
			renderengine::RGBA8::RGBA8(/* parameters */);
			rw::IResourceAllocator::Allocate(/* parameters */);
			~ResourceDescriptor(/* parameters */);
		}
	}
	{
		// BrnMainMapRenderer.cpp:270
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnMainMapRenderer.cpp:294
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnMainMapRenderer.cpp:322
		Texture2D * lpTexture;

		// BrnMainMapRenderer.cpp:325
		Parameters lTextureStateParams;

		renderengine::TextureState::Parameters::Parameters(/* parameters */);
		renderengine::TextureState::Parameters::SetTexture(/* parameters */);
		renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
		renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
}

void CgsContainers::Array<rw::math::vpu::Vector3,5120u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<rw::math::vpu::Vector3,5120u>::Append(const const rw::math::vpu::Vector3 &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::MainMapRenderer::ClipRoute(const Array<rw::math::vpu::Vector3,5120u> *  lpRouteInfo, Vector3  lv3PlayerPos, const const rw::math::vpu::Matrix33 &  lm33WorldToView, Vector4  lv4ViewportRect, Array<rw::math::vpu::Vector3,5120u> *  lpClippedRouteInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMainMapRenderer.cpp:877
		int32_t liStartIndex;

		// BrnMainMapRenderer.cpp:878
		Vector3 lv3StartPos;

		// BrnMainMapRenderer.cpp:879
		float32_t lfMinDist;

	}
	CgsContainers::Array<rw::math::vpu::Vector3,5120u>::GetLength(/* parameters */);
	CgsContainers::Array<rw::math::vpu::Vector3,5120u>::Clear(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	{
		// BrnMainMapRenderer.cpp:881
		uint32_t iPoint;

		CgsContainers::Array<rw::math::vpu::Vector3,5120u>::GetLength(/* parameters */);
		{
			// BrnMainMapRenderer.cpp:883
			Vector3 lv3From;

			// BrnMainMapRenderer.cpp:884
			Vector3 lv3To;

			// BrnMainMapRenderer.cpp:886
			float32_t lfDist;

			// BrnMainMapRenderer.cpp:887
			Vector3 lv3ProjPos;

			CgsContainers::Array<rw::math::vpu::Vector3,5120u>::operator[](/* parameters */);
			CgsContainers::Array<rw::math::vpu::Vector3,5120u>::operator[](/* parameters */);
			{
			}
		}
	}
	CgsContainers::Array<rw::math::vpu::Vector3,5120u>::Append(/* parameters */);
	CgsContainers::Array<rw::math::vpu::Vector3,5120u>::Append(/* parameters */);
	{
	}
	{
		// BrnMainMapRenderer.cpp:904
		uint32_t iPoint;

	}
	{
		// BrnMainMapRenderer.cpp:906
		Vector3 lv3From;

		CgsContainers::Array<rw::math::vpu::Vector3,5120u>::operator[](/* parameters */);
		CgsContainers::Array<rw::math::vpu::Vector3,5120u>::Append(/* parameters */);
		{
		}
	}
	CgsContainers::Array<rw::math::vpu::Vector3,5120u>::GetLength(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnGui::MainMapRenderer::GetRouteLength(const Array<rw::math::vpu::Vector3,5120u> *  lpRouteInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMainMapRenderer.cpp:1076
		float32_t lfRouteLength;

		CgsContainers::Array<rw::math::vpu::Vector3,5120u>::GetLength(/* parameters */);
	}
	{
		// BrnMainMapRenderer.cpp:1078
		uint32_t iPoint;

		{
			// BrnMainMapRenderer.cpp:1080
			Vector3 lv3From;

			// BrnMainMapRenderer.cpp:1081
			Vector3 lv3To;

			// BrnMainMapRenderer.cpp:1084
			Vector3 lv3SegmentVector;

			// BrnMainMapRenderer.cpp:1085
			float32_t lfSegmentLength;

			CgsContainers::Array<rw::math::vpu::Vector3,5120u>::operator[](/* parameters */);
			CgsContainers::Array<rw::math::vpu::Vector3,5120u>::operator[](/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::Magnitude(/* parameters */);
		}
		CgsContainers::Array<rw::math::vpu::Vector3,5120u>::GetLength(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

void rw::math::vpu::Modulo(const VecFloat  a, const VecFloat  modulus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:93
		VectorIntrinsicUnion::VectorIntrinsic divResult;

		// scalar_operation_inline.h:93
		VectorIntrinsicUnion::VectorIntrinsic truncDivResult;

		// scalar_operation_inline.h:93
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// scalar_operation_inline.h:94
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// scalar_operation_inline.h:94
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// scalar_operation_inline.h:94
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// scalar_operation_inline.h:94
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// scalar_operation_inline.h:94
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void rw::core::stdc::Max(int  a, int  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MainMapRenderer::RenderPulses(const Array<rw::math::vpu::Vector3,5120u> *  lpRouteInfo, CgsGraphics::Im2dRenderBuffer *  lpIm2dRenderBuffer, const const rw::math::vpu::Matrix33 &  lm33WorldToView) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMainMapRenderer.cpp:964
		float32_t lfTimeNow;

		// BrnMainMapRenderer.cpp:966
		float32_t lfRouteLength;

		// BrnMainMapRenderer.cpp:967
		float32_t lfPulseDistance;

		// BrnMainMapRenderer.cpp:968
		float32_t lfPulseProp;

		// BrnMainMapRenderer.cpp:970
		int32_t liNumPulses;

		CgsContainers::Array<rw::math::vpu::Vector3,5120u>::GetLength(/* parameters */);
	}
	GuiCache::GetTime(/* parameters */);
	rw::math::vpu::Modulo(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	{
		// BrnMainMapRenderer.cpp:972
		int32_t liIndex;

		{
			// BrnMainMapRenderer.cpp:974
			float32_t lfThisProp;

			rw::math::vpu::Modulo(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		}
	}
}

void BrnGui::MainMapRenderer::UpdateAlphaForFadeState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMainMapRenderer.cpp:1208
		float32_t lfTimeNow;

	}
	GuiCache::GetTime(/* parameters */);
	{
		// BrnMainMapRenderer.cpp:1258
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnMainMapRenderer.cpp:1229
		float32_t lfAlphaScale;

		rw::math::vpu::Clamp(/* parameters */);
	}
	{
		// BrnMainMapRenderer.cpp:1249
		float32_t lfAlphaScale;

		rw::math::vpu::Clamp(/* parameters */);
	}
}

void BrnGui::BoostBarRenderer::Prepare(GuiEventQueueSmall *  lpOutputEventQueue, rw::IResourceAllocator *  lpHeapAllocator, rw::IResourceAllocator *  lpTextureAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostBarRenderer.cpp:302
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::BoostBarRenderer::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostBarRenderer.cpp:343
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::GuiCache::IsInGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Interpolator<float32_t>::GetCurrentValue(float32_t  lfTimeNow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostBarRenderer.h:104
		float32_t lfProp;

	}
}

void BrnGui::Interpolator<float32_t>::IsValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::RandomFloat(float_t  lfMin, float_t  lfMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Lerp<float>(float  a, float  b, float  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BoostBarRenderer::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostBarRenderer.cpp:386
		float32_t lfTimeNow;

		// BrnBoostBarRenderer.cpp:399
		float32_t lfBoostAmountDelta;

		// BrnBoostBarRenderer.cpp:400
		float32_t lfMaxBoostDelta;

		// BrnBoostBarRenderer.cpp:464
		const float32_t KF_SLAM_TRIGGER_AMOUNT;

		// BrnBoostBarRenderer.cpp:512
		const float32_t KF_CHAINED_BOOST_TRANSITION_TIME;

	}
	GuiCache::IsInGame(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	Interpolator<float32_t>::GetCurrentValue(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	Interpolator<float32_t>::SetEnd(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	Interpolator<float32_t>::SetStart(/* parameters */);
	rw::math::vpu::Subtract(/* parameters */);
	Interpolator<float32_t>::IsValid(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:471
		const float32_t KF_BOOST_GAIN_TIME;

		Interpolator<float32_t>::SetEnd(/* parameters */);
		Interpolator<float32_t>::SetStart(/* parameters */);
	}
	Interpolator<float32_t>::SetEnd(/* parameters */);
	Interpolator<float32_t>::SetStart(/* parameters */);
	Interpolator<float32_t>::IsValid(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:529
		const float32_t KF_BOOST_GAIN_TIME;

		Interpolator<float32_t>::SetEnd(/* parameters */);
		Interpolator<float32_t>::SetEnd(/* parameters */);
		Interpolator<float32_t>::SetStart(/* parameters */);
		Interpolator<float32_t>::SetStart(/* parameters */);
	}
	{
		// BrnBoostBarRenderer.cpp:565
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Interpolator<float32_t>::SetEnd(/* parameters */);
	Interpolator<float32_t>::SetStart(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:492
		int32_t liCurrentShard;

		{
			// BrnBoostBarRenderer.cpp:495
			float32_t lfVelocityX;

			// BrnBoostBarRenderer.cpp:496
			float32_t lfVelocityY;

			// BrnBoostBarRenderer.cpp:497
			float32_t lfRotationalVelocity;

			CgsNumeric::Random::RandomFloat(/* parameters */);
			CgsNumeric::Random::RandomFloat(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			CgsNumeric::Random::RandomFloat(/* parameters */);
		}
		CgsNumeric::Random::RandomUInt(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
	}
	Interpolator<float32_t>::Invalidate(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:601
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Interpolator<float32_t>::SetEnd(/* parameters */);
	Interpolator<float32_t>::SetStart(/* parameters */);
	Interpolator<float32_t>::GetCurrentValue(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	Interpolator<float32_t>::SetEnd(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	Interpolator<float32_t>::SetStart(/* parameters */);
	rw::math::vpu::Subtract(/* parameters */);
	Interpolator<float32_t>::IsValid(/* parameters */);
	Interpolator<float32_t>::SetEnd(/* parameters */);
	Interpolator<float32_t>::SetStart(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:557
		float32_t lfCurrentValue;

		Interpolator<float32_t>::IsValid(/* parameters */);
		Interpolator<float32_t>::GetCurrentValue(/* parameters */);
		Interpolator<float32_t>::SetEnd(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	Interpolator<float32_t>::SetStart(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:593
		float32_t lfCurrentValue;

		Interpolator<float32_t>::IsValid(/* parameters */);
		Interpolator<float32_t>::GetCurrentValue(/* parameters */);
		Interpolator<float32_t>::SetEnd(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	Interpolator<float32_t>::SetStart(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	Interpolator<float32_t>::IsValid(/* parameters */);
	Interpolator<float32_t>::SetEnd(/* parameters */);
	Interpolator<float32_t>::SetStart(/* parameters */);
}

void BrnGui::BoostBarRenderer::RecvEvent(const CgsModule::Event *  lpEvent, int32_t  lEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostBarRenderer.cpp:636
		const GuiEventBoostInfo * lpBoostBarInfo;

	}
	{
		// BrnBoostBarRenderer.cpp:662
		const GuiPlayerCrashingStateChangeEvent * lpCrashedEvent;

		GuiCache::GetTime(/* parameters */);
	}
	{
		// BrnBoostBarRenderer.cpp:693
		const GuiEventCache * lpCacheEvent;

	}
	{
		// BrnBoostBarRenderer.cpp:630
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnBoostBarRenderer.cpp:642
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnBoostBarRenderer.cpp:641
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnBoostBarRenderer.cpp:640
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnBoostBarRenderer.cpp:694
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::AboveCarRenderer::Prepare(GuiEventQueueSmall *  lpOutputEventQueue, rw::IResourceAllocator *  lpHeapAllocator, rw::IResourceAllocator *  lpTextureAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAboveCarRenderer.cpp:221
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::AboveCarRenderer::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAboveCarRenderer.cpp:267
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::IResourceAllocator::Free(/* parameters */);
}

void BrnGui::GuiCache::GetEventPositionOfRaceCar(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.h:3833
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGuiCache.h:3834
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::GuiCache::GetOnlinePlayerInfo(const EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.h:3430
		int32_t liIndex;

	}
}

void CgsNetwork::PlayerName::GetPlayerName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::IsOnlineFreeBurnLobby(const BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetCurrentOnlinePlayerTeam(EActiveRaceCarIndex  lePlayerActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetOpponentsInEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::AboveCarRenderer::UpdateCachedInfoForRival(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAboveCarRenderer.cpp:738
		char[64] lacRivalName;

		// BrnAboveCarRenderer.cpp:740
		uint8_t luRivalPosition;

		// BrnAboveCarRenderer.cpp:741
		RGBA lColour;

		// BrnAboveCarRenderer.cpp:745
		const InGamePlayerStatusData * lpPlayerInfo;

	}
	GuiCache::GetEventPositionOfRaceCar(/* parameters */);
	GuiCache::GetOnlinePlayerInfo(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	{
		// BrnAboveCarRenderer.cpp:786
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsNetwork::PlayerName::GetPlayerName(/* parameters */);
	GuiCache::GetCurrentOnlinePlayerTeam(/* parameters */);
	GuiCache::GetCurrentOnlinePlayerTeam(/* parameters */);
	GuiCache::GetOpponentsInEvent(/* parameters */);
	{
		// BrnAboveCarRenderer.cpp:808
		const UnicodeBuffer::CgsUtf8 * lpPositionString;

		CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	}
	{
		// BrnAboveCarRenderer.cpp:825
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnAboveCarRenderer.cpp:750
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnAboveCarRenderer.cpp:815
		CgsDev::StrStream lStrStream;

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
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetBufferFullRewindToLastEndRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsGraphics::Camera::GetViewProjectionMatrix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Camera::GetViewMatrix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Inverse(const rw::math::vpu::Matrix44Affine &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_inline.h:497
		VecFloat determinant;

	}
}

void rw::math::vpu::Inverse(const rw::math::vpu::Matrix44Affine &  m, const VecFloat &  determinant) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic det;

		// matrix44affine_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic xAxisResult;

		// matrix44affine_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic yAxisResult;

		// matrix44affine_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic zAxisResult;

		// matrix44affine_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic wAxisResult;

		{
			// matrix44affine_operation_inline.h:488
			VectorIntrinsicUnion::VectorIntrinsic negatePos;

			// matrix44affine_operation_inline.h:488
			VectorIntrinsicUnion::VectorIntrinsic transX;

			// matrix44affine_operation_inline.h:488
			VectorIntrinsicUnion::VectorIntrinsic transY;

			// matrix44affine_operation_inline.h:488
			VectorIntrinsicUnion::VectorIntrinsic transZ;

			{
				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic signMask;

			}
			{
				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_crossYZ;

				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_crossZX;

				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_crossXY;

				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_x;

				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_y;

				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_z;

				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV2;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV1;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV3;

				}
				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV2;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV1;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV3;

				}
				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV2;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV1;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV3;

				}
				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic yy;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic zz;

				}
				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic temp0;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic temp1;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic temp2;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic temp3;

				}
				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic reciprocal;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					{
						// matrix44affine_operation_inline.h:488
						VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

						// matrix44affine_operation_inline.h:488
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						{
							// matrix44affine_operation_inline.h:488
							VectorIntrinsicUnion::VectorIntrinsic estimate;

							// matrix44affine_operation_inline.h:488
							VectorIntrinsicUnion::VectorIntrinsic vOne;

						}
					}
				}
			}
		}
	}
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:686
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector3_operation_inline.h:687
			VectorIntrinsicUnion::VectorIntrinsic signMask;

		}
	}
}

void rw::math::vpu::Normalize(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:195
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:196
			VectorIntrinsicUnion::VectorIntrinsic temp_one_over_rqrt_dot;

			{
				// vector3_operation_inline.h:196
				VectorIntrinsicUnion::VectorIntrinsic dotproduct;

				{
					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic yy;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic zz;

				}
				{
					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void rw::math::vpu::Cross(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:153
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic crossV2;

			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic crossV1;

			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic vZero;

			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic crossV3;

		}
	}
}

void CgsGraphics::Im3dRenderBufferBase<CgsGraphics::BasicColouredTexturedVertex>::SetTransform(const rw::math::vpu::Matrix44 &  lModelToWorldMatrix, const rw::math::vpu::Matrix44 &  lViewProjectionMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm3dRenderBuffer.h:179
		ImCommandSetTransform3dMtwVp lCommand;

	}
}

extern void ImCommandSetTransform3dMtwVp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ImCommand() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::PostCommand(int32_t  liCommandType, ImCommand *  lpCommand, uint32_t  luCommandSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1163
		uint32_t luCommandBufferWritePos;

		// CgsImRenderBuffer.h:1164
		uint8_t * lpuCommandBuffer;

		// CgsImRenderBuffer.h:1167
		uint32_t luAlignedSize;

		{
			// CgsImRenderBuffer.h:1160
			uintptr_t luAddress;

		}
	}
}

void BrnGui::AboveCarRenderer::SetTransformMatrixForCar(ImRendererSet *  lpImRenderers, const rw::math::vpu::Vector3  lv3CarPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAboveCarRenderer.cpp:1205
		CgsGraphics::Im3dRenderBuffer * lpIm3dRenderBuffer;

		// BrnAboveCarRenderer.cpp:1206
		Camera * lpCamera;

		// BrnAboveCarRenderer.cpp:1208
		Matrix44 lm44ViewProjectionMatrix;

		// BrnAboveCarRenderer.cpp:1210
		Matrix44Affine lm44CameraMatrix;

		// BrnAboveCarRenderer.cpp:1211
		Vector3 lv3CameraPos;

		// BrnAboveCarRenderer.cpp:1212
		Vector3 lv3CameraUp;

		// BrnAboveCarRenderer.cpp:1213
		Vector3 lv3CameraDir;

		// BrnAboveCarRenderer.cpp:1215
		Vector3 lv3ObjectPos;

		// BrnAboveCarRenderer.cpp:1216
		Vector3 lv3ObjectToCamera;

		// BrnAboveCarRenderer.cpp:1217
		float32_t lfObjectDist;

		// BrnAboveCarRenderer.cpp:1218
		Vector3 lv3ObjectDir;

		// BrnAboveCarRenderer.cpp:1220
		Vector3 lv3ObjectRight;

		// BrnAboveCarRenderer.cpp:1221
		Vector3 lv3ObjectUp;

		// BrnAboveCarRenderer.cpp:1224
		Matrix44 lm44WorldMatrix;

	}
	rw::math::vpu::Inverse(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	{
	}
	CgsGraphics::Im3dRenderBufferBase<CgsGraphics::BasicColouredTexturedVertex>::SetTransform(/* parameters */);
	{
	}
	CgsGraphics::Camera::GetViewProjectionMatrix(/* parameters */);
	{
		{
			{
			}
		}
	}
	{
	}
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::PostCommand(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
	}
}

void BrnGameState::GameStateModuleIO::IsShowtimeGameMode(const BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Camera::GetNearClipPlane() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Camera::SetNearClipPlane(float32_t  lNearClipPlane) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetScoringTrafficCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetScoringTrafficData(uint32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::BitArray<601u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::fpu::Vector2Template<float>::Vector2Template(const const Vector2Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetVisibleOverheadSignArray() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGui::OverheadSignScore,32u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGui::OverheadSignScore,32u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::vpu::MagnitudeSquared(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:167
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

			// vector3_operation_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic yy;

			// vector3_operation_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic zz;

		}
	}
}

void rw::math::vpu::operator+=(const Vector3 &  v, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator/(const rw::math::vpu::Vector3  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:407
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:408
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vector3_operation_inline.h:408
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vector3_operation_inline.h:408
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vector3_operation_inline.h:408
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector3_operation_inline.h:408
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void BrnGui::AboveCarRenderer::RenderTrafficCarScores(ImRendererSet *  lpImRenderers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAboveCarRenderer.cpp:857
		CgsGraphics::Im3dRenderBuffer * lpIm3dRenderBuffer;

		// BrnAboveCarRenderer.cpp:858
		UnicodeBuffer::CgsUtf8[32] lacBuffer;

		// BrnAboveCarRenderer.cpp:861
		SafeResourceHandle<CgsResource::Font> lpOldFont;

		// BrnAboveCarRenderer.cpp:881
		float32_t lfNearClipPlane;

		// BrnAboveCarRenderer.cpp:885
		uint32_t liIndex;

		// BrnAboveCarRenderer.cpp:886
		uint32_t liEndIndex;

		// BrnAboveCarRenderer.cpp:927
		Vector3[32] lWorkingSignPositionArray;

		// BrnAboveCarRenderer.cpp:928
		Vector3[32] lMergedSignPositionArray;

		// BrnAboveCarRenderer.cpp:929
		VecFloat[32] lvfSignMergeCount;

		// BrnAboveCarRenderer.cpp:930
		uint32_t liMergedSignCount;

		GuiCache::GetGameMode(/* parameters */);
		BrnGameState::GameStateModuleIO::IsShowtimeGameMode(/* parameters */);
		CgsContainers::BitArray<601u>::UnSetAll(/* parameters */);
	}
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
	CgsResource::ResourceHandle::CreateFromHandle(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat(/* parameters */);
	CgsGraphics::Camera::SetNearClipPlane(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	CgsGraphics::Camera::GetNearClipPlane(/* parameters */);
	GuiCache::GetScoringTrafficCount(/* parameters */);
	{
		// BrnAboveCarRenderer.cpp:889
		const VehicleScoreData * lpScoreData;

		GuiCache::GetScoringTrafficData(/* parameters */);
		CgsContainers::BitArray<601u>::IsBitSet(/* parameters */);
	}
	CgsContainers::Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>::GetLength(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsGraphics::TextObject::SetText(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	CgsGraphics::TextObject::SetStringWidth(/* parameters */);
	{
		// BrnAboveCarRenderer.cpp:912
		BasicColouredTexturedVertex::Vector2U_32 lfOldTopLeft;

		// BrnAboveCarRenderer.cpp:914
		float32_t lfMultiplierFontHeight;

		rw::math::fpu::Vector2Template<float>::Y(/* parameters */);
		CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
		CgsGraphics::TextObject::SetStringWidth(/* parameters */);
	}
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	GuiCache::GetVisibleOverheadSignArray(/* parameters */);
	CgsContainers::Array<BrnGui::OverheadSignScore,32u>::GetLength(/* parameters */);
	CgsGraphics::TextObject::SetText(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	CgsGraphics::TextObject::SetStringWidth(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
	CgsGraphics::Camera::SetNearClipPlane(/* parameters */);
	{
		// BrnAboveCarRenderer.cpp:935
		const OverheadSignScore * lpSignData;

		// BrnAboveCarRenderer.cpp:938
		uint32_t lI;

		CgsContainers::Array<BrnGui::OverheadSignScore,32u>::GetItem(/* parameters */);
	}
	GuiCache::GetVisibleOverheadSignArray(/* parameters */);
	{
		// BrnAboveCarRenderer.cpp:941
		Vector3 lDiff;

		// BrnAboveCarRenderer.cpp:943
		VecFloat lvfDistSq;

		rw::math::vpu::operator-(/* parameters */);
	}
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::AllocateCommand(int32_t  liCommandType, uint32_t  luCommandSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1222
		uint32_t luCommandBufferWritePos;

		// CgsImRenderBuffer.h:1223
		uint8_t * lpuCommandBuffer;

		// CgsImRenderBuffer.h:1226
		uint32_t luAlignedSize;

		{
			// CgsImRenderBuffer.h:1219
			uintptr_t luAddress;

		}
		{
			// CgsImRenderBuffer.h:1232
			ImCommand * lpCommand;

		}
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::BeginRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AllocateCommand(/* parameters */);
	{
	}
}

void rw::math::vpu::Max<rw::math::vpu::VecFloatRefX>(const const Vector2::VecFloatRefX &  a, const const Vector2::VecFloatRefX &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const const VecFloatRef<VectorAxisX> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator><VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:334
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:336
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:338
		bool ret;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(VecFloatRef<VectorAxisX> &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:262
		VectorIntrinsicUnion::VectorIntrinsic permuteControl;

	}
}

void rw::math::vpu::Min<rw::math::vpu::VecFloatRefY>(const const Vector2::VecFloatRefY &  a, const const Vector2::VecFloatRefY &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::VecFloatRef(const const VecFloatRef<VectorAxisY> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator< <VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:492
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:494
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:496
		bool ret;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(VecFloatRef<VectorAxisY> &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:269
		VectorIntrinsicUnion::VectorIntrinsic permuteControl;

	}
}

extern void BasicColouredTexturedVertex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA8::RGBA8() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Vector2Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA8::RGBA8(const const RGBA &  rgba) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::GetRed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::GetGreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::GetBlue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::GetAlpha() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im3dRenderBuffer::PushMask(TextureState *  lpTextureState, Im3dVertex *  lpVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm3dRenderBuffer.h:351
		ImCommandPushMaskTextureState<CgsGraphics::BasicColouredTexturedVertex> lCommand;

	}
}

void BrnGui::SetMaskRect(CgsGraphics::Im3dRenderBuffer *  lpIm3dRenderBuffer, TextureState *  lpTextureState, const const rw::math::vpu::Vector4 &  lv4Rect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCustomRenderer.cpp:927
		Matrix33 m33MaskSpace;

		// BrnCustomRenderer.cpp:929
		const const rw::math::vpu::Matrix33 & lNormalisedSpace;

		// BrnCustomRenderer.cpp:931
		Vector2 lv2DeviceTopLeft;

		// BrnCustomRenderer.cpp:932
		Vector2 lv2DeviceBottomRight;

		// BrnCustomRenderer.cpp:938
		Im3dVertex[2] lVertexList;

		// BrnCustomRenderer.cpp:946
		RGBA lColour;

		rw::math::vpu::Matrix33::Matrix33(/* parameters */);
		MapTransform::MakeCoordSpaceFromRect(/* parameters */);
	}
	MapTransform::Transform(/* parameters */);
	MapTransform::Transform(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector2::X(/* parameters */);
	{
	}
	{
	}
	MapTransform::MakeCoordSpaceFromAxes(/* parameters */);
	MapTransform::Transform(/* parameters */);
	rw::math::vpu::Vector2::X(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	{
	}
	rw::math::vpu::operator-<VectorAxisW, VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
		{
		}
	}
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::Max<rw::math::vpu::VecFloatRefX>(/* parameters */);
	MapTransform::MakeTransform(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(/* parameters */);
	rw::math::vpu::Min<rw::math::vpu::VecFloatRefY>(/* parameters */);
	rw::math::vpu::Vector2::Y(/* parameters */);
	rw::math::vpu::Vector2::Y(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	CgsGraphics::Im3dRenderBuffer::PushMask(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::PostCommand(/* parameters */);
}

void CgsGraphics::Im3dRenderBuffer::PopMask() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm3dRenderBuffer.h:391
		ImCommandPopMask lCommand;

	}
}

void BrnGui::UnsetMaskRect(CgsGraphics::Im3dRenderBuffer *  lpIm3dRenderBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGraphics::Im3dRenderBuffer::PopMask(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::PostCommand(/* parameters */);
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::EndRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AllocateCommand(/* parameters */);
	{
	}
}

void BrnGui::ProgressBarRenderer::Prepare(GuiEventQueueSmall *  lpOutputEventQueue, rw::IResourceAllocator *  lpHeapAllocator, rw::IResourceAllocator *  lpTextureAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressBarRenderer.cpp:94
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ProgressBarRenderer::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressBarRenderer.cpp:134
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ProgressBarRenderer::RecvEvent(const CgsModule::Event *  lpEvent, int32_t  lEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressBarRenderer.cpp:187
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::SetBufferFullRewindToLastEndRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::AllocateCommand(int32_t  liCommandType, uint32_t  luCommandSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1222
		uint32_t luCommandBufferWritePos;

		// CgsImRenderBuffer.h:1223
		uint8_t * lpuCommandBuffer;

		// CgsImRenderBuffer.h:1226
		uint32_t luAlignedSize;

		{
			// CgsImRenderBuffer.h:1219
			uintptr_t luAddress;

		}
		{
			// CgsImRenderBuffer.h:1232
			ImCommand * lpCommand;

		}
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::Render(renderengine::PrimitiveType  lePrimitiveType, const Im3dUntexVertex *  lpVertices, uint32_t  luNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:689
		Im3dUntexVertex * lpAllocatedVerts;

	}
	{
		// CgsImRenderBuffer.h:692
		ImCommandRenderPrimitives<CgsGraphics::BasicColouredVertex> * lpCommand;

		AllocateCommand(/* parameters */);
	}
	{
	}
}

extern void BasicColouredVertex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ParticleSystem2d::GetRGBA(const const rw::math::vpu::Vector4 &  lv4Colour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsParticleSystem2d.h:235
		Vector4 lv4Clamped;

	}
}

void rw::math::vpu::Clamp(const rw::math::vpu::Vector4  v0, const rw::math::vpu::Vector4  v1, const rw::math::vpu::Vector4  v2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:100
		VectorIntrinsicUnion::VectorIntrinsic r;

	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector4  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:445
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::GetMatrix44_Identity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im3dRenderBufferBase<CgsGraphics::BasicColouredVertex>::SetTransform(const rw::math::vpu::Matrix44 &  lViewProjectionMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm3dRenderBuffer.h:190
		ImCommandSetTransform3dVp lCommand;

	}
}

extern void ImCommandSetTransform3dVp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::PostCommand(int32_t  liCommandType, ImCommand *  lpCommand, uint32_t  luCommandSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1163
		uint32_t luCommandBufferWritePos;

		// CgsImRenderBuffer.h:1164
		uint8_t * lpuCommandBuffer;

		// CgsImRenderBuffer.h:1167
		uint32_t luAlignedSize;

		{
			// CgsImRenderBuffer.h:1160
			uintptr_t luAddress;

		}
	}
}

void BrnGui::ProgressBarRenderer::RenderQuadUntex(CgsGraphics::Im3dRenderBufferUntex *  lpIm3dRenderBuffer, const const rw::math::vpu::Vector4 &  lv4Rect, const const RGBA32 &  lv4Colour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressBarRenderer.cpp:266
		Im3dUntexVertex[4] lVertexList;

		CgsGui::ParticleSystem2d::GetRGBA(/* parameters */);
		CgsGraphics::Im3dRenderBufferBase<CgsGraphics::BasicColouredVertex>::SetTransform(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::Matrix44::operator=(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::GetMatrix44_Identity(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::RGBA::RGBA(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::PostCommand(/* parameters */);
		{
		}
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::EndRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AllocateCommand(/* parameters */);
	{
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::BeginRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AllocateCommand(/* parameters */);
	{
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::SetState(const RasterizerState *  lpRasterizerState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:925
		ImCommandSetStateRasterizer * lpCommand;

	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::SetState(const DepthStencilState *  lpDepthStencilState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:875
		ImCommandSetStateDepthStencil * lpCommand;

	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::SetState(const BlendState *  lpBlendState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:850
		ImCommandSetStateBlend * lpCommand;

	}
}

void BrnGui::ProgressBarRenderer::RenderComponent(ImRendererSet *  lpImRenderers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnProgressBarRenderer.cpp:229
		CgsGraphics::Im3dRenderBufferUntex * lpIm3dRenderBuffer;

		// BrnProgressBarRenderer.cpp:236
		Vector4 sv4BarRect;

		// BrnProgressBarRenderer.cpp:237
		RGBA32 sv4BackgroundColour;

		// BrnProgressBarRenderer.cpp:238
		RGBA32 sv4BarColour;

		// BrnProgressBarRenderer.cpp:240
		Vector4 lv4BarRect;

		// BrnProgressBarRenderer.cpp:241
		float32_t lfBarWidth;

	}
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::SetState(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::SetState(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::SetState(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	{
	}
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::SetState(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
}

void BrnGui::InGameMessageRenderer::Prepare(GuiEventQueueSmall *  lpOutputEventQueue, rw::IResourceAllocator *  lpHeapAllocator, rw::IResourceAllocator *  lpTextureAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInGameMessageRenderer.cpp:285
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::InGameMessageRenderer::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInGameMessageRenderer.cpp:332
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::IResourceAllocator::Free(/* parameters */);
}

void CgsDev::StrStreamBase::operator<<(CgsDev::PrintMode  lePrintMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(void *  lpPointer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:627
		CgsDev::PrintMode leSavedPrintMode;

	}
}

void CgsModule::VariableEventQueue<4096,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<4096,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<4096,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
}

void CgsModule::VariableEventQueue<4096,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<4096,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::VariableEventQueue<4096,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[160] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

		GetEventPaddingSize(/* parameters */);
		OutputQueueContents(/* parameters */);
		{
			// CgsVariableEventQueue.h:464
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::BitArray<64u>::GetFirstNonZeroBit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:543
		uint32_t liIndex;

		{
			// CgsBitArray.h:553
			int32_t liFirstOneBit;

			{
				// CgsBitArray.h:554
				CgsDev::StrStream lStrStream;

			}
		}
		{
			// CgsBitArray.h:559
			int32_t liFirstOneBit;

		}
	}
}

void CgsContainers::BitArray<64u>::GetZeroBitInInt(int64_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:796
		uint32_t liLeadingZeros;

	}
}

void CgsContainers::_CountLeadingZeros64(uint64_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:169
		uint64_t luRes;

	}
}

void CgsGui::GuiEvent<327>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessageRenderer::RequestNewRoadRulesScore() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInGameMessageRenderer.cpp:1746
		Road::ChallengeIndex liRoadIndex;

		// BrnInGameMessageRenderer.cpp:1781
		GuiEventRoadRuleTickerScoreRequest lScoreRequest;

		AddGuiEvent<BrnGui::GuiEventRoadRuleTickerScoreRequest>(/* parameters */);
	}
	CgsContainers::BitArray<64u>::GetFirstNonZeroBit(/* parameters */);
	{
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

void BrnGui::InGameMessageRenderer::ResetYPos() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInGameMessageRenderer.cpp:1926
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsUnicode::Print<const CgsUnicode::CgsUtf8*>(const UnicodeBuffer::CgsUtf8 *  lUtf8Source, UnicodeBuffer::CgsUtf8 *  lUtf8Target, const int32_t  lnTargetStringSize, const const UnicodeBuffer::CgsUtf8 *const&  lArg1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsUnicode.h:661
		UnicodeBuffer lBuffer1;

		// CgsUnicode.h:665
		UnicodeBuffer::CgsUtf8 *[1] lParams;

	}
	UnicodeBuffer::Convert(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::SafeResourceHandle<CgsResource::Font>::operator CgsResource::Font*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHandle.h:490
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::InGameMessageRenderer::InGameMessage::GetInUse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessageRenderer::InGameMessage::SetStringWidth(float32_t  lfWidth) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessageRenderer::InGameMessage::GetStringHash() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessageRenderer::AddNewMessage(bool  lbIsPriorityMessage, bool  lbIsRoadRuleMessage, bool  lbIsCustomMessage, bool  lbRepeats, bool  lbIsTrainingMessage, bool  lbAllowDuplicates, bool  lbIsChallengeMessage, const UnicodeBuffer::CgsUtf8 *  lpMessageText, int32_t  liNumParams, const UnicodeBuffer::CgsUtf8 *  lpParam1, const UnicodeBuffer::CgsUtf8 *  lpParam2, const UnicodeBuffer::CgsUtf8 *  lpParam3) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInGameMessageRenderer.cpp:1124
		BrnGui::InGameMessageRenderer::InGameMessage * lpMessage;

	}
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator CgsResource::Font*(/* parameters */);
	{
		// BrnInGameMessageRenderer.cpp:1128
		float32_t lfThisTextStartPosX;

		// BrnInGameMessageRenderer.cpp:1129
		float32_t lfStringWidth;

		// BrnInGameMessageRenderer.cpp:1131
		float32_t lfThisTextEndPosX;

		CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	}
	{
		// BrnInGameMessageRenderer.cpp:1159
		int32_t i;

	}
	{
		// BrnInGameMessageRenderer.cpp:1172
		bool lbIsDuplicateToBeDeleted;

	}
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	InGameMessage::SetStringWidth(/* parameters */);
	{
		// BrnInGameMessageRenderer.cpp:1198
		BrnGui::InGameMessageRenderer::InGameMessage * lpMessage;

		InGameMessage::GetNext(/* parameters */);
	}
	{
		// BrnInGameMessageRenderer.cpp:1175
		BrnGui::InGameMessageRenderer::InGameMessage * lpMessage;

		InGameMessage::GetNext(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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

void BrnGui::InGameMessageRenderer::BufferMessagesForGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInGameMessageRenderer.cpp:1658
		DateAndTime lDateAndTime;

		// BrnInGameMessageRenderer.cpp:1659
		const UnicodeBuffer::CgsUtf8 * lpFormatString;

		// BrnInGameMessageRenderer.cpp:1660
		char[16] lacHoursString;

		// BrnInGameMessageRenderer.cpp:1661
		char[16] lacMinutesString;

		{
			// BrnInGameMessageRenderer.cpp:1669
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// BrnInGameMessageRenderer.cpp:1711
		const UnicodeBuffer::CgsUtf8 * lpString;

	}
}

void CgsResource::SafeResourceHandle<CgsResource::Font>::SafeResourceHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<CgsResource::Font>::operator!=(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsLanguage::LanguageManager::GetDefaultFont() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<523>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(float32_t  lfReal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:598
		union UFloatInt {
			// CgsStrStream.h:599
			float32_t mfReal;

			// CgsStrStream.h:600
			int32_t miInt;

		}
		// CgsStrStream.h:602
		UFloatInt lFloatInt;

	}
}

void BrnGui::GuiEventTickerCustomMessage::GetNumStrings() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiEventTickerCustomMessage::GetString(int32_t  liStringIndex, BrnGui::GuiEventTickerCustomMessage::EStringType *  lpeStringType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiEventTickerCustomMessage::GetTrainingMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiEventTickerCustomMessage::GetLoopMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiEventTickerCustomMessage::GetAllowDuplicates() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiEventTickerCustomMessage::GetChallengeMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<64u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::fpu::FastFloatToInt32<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<64u>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessageRenderer::RecvEvent(const CgsModule::Event *  lpEvent, int32_t  lEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInGameMessageRenderer.cpp:461
		GuiEventTickerStatus lStatusMessage;

		AddGuiEvent<BrnGui::GuiEventTickerStatus>(/* parameters */);
	}
	{
		// BrnInGameMessageRenderer.cpp:702
		const GuiEventRoadRuleNewRulers * lpNewRulersEvent;

		StartFadeOutIfDisplayingAnything(/* parameters */);
	}
	{
		// BrnInGameMessageRenderer.cpp:730
		const GuiGamePausedEvent * lpPausedEvent;

	}
	{
		// BrnInGameMessageRenderer.cpp:469
		const GuiEventTickerSetYPos * lpSetYPosMessage;

		{
			// BrnInGameMessageRenderer.cpp:471
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			{
			}
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// BrnInGameMessageRenderer.cpp:432
		const GuiEventCache * lpCacheEvent;

	}
	{
		// BrnInGameMessageRenderer.cpp:478
		const GuiEventTickerClearMessages * lpClearMessagesEvent;

		StartFadeOutIfDisplayingAnything(/* parameters */);
	}
	{
		// BrnInGameMessageRenderer.cpp:392
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnInGameMessageRenderer.cpp:433
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnInGameMessageRenderer.cpp:577
		const GuiEventRoadRuleTickerScoreResponse * lpResponseEvent;

		{
			// BrnInGameMessageRenderer.cpp:582
			Road::ChallengeIndex lChallengeIndex;

			CgsContainers::BitArray<64u>::IsBitSet(/* parameters */);
			{
				// BrnInGameMessageRenderer.cpp:590
				char[16] lacRoadNameId;

				// BrnInGameMessageRenderer.cpp:591
				char[32] lacRulerNameUtilString;

				// BrnInGameMessageRenderer.cpp:592
				char[16] lacTempString;

				// BrnInGameMessageRenderer.cpp:593
				const UnicodeBuffer::CgsUtf8 * lpFormatString;

				// BrnInGameMessageRenderer.cpp:594
				const UnicodeBuffer::CgsUtf8 * lpRoadName;

				// BrnInGameMessageRenderer.cpp:595
				const UnicodeBuffer::CgsUtf8 * lpRulerName;

				// BrnInGameMessageRenderer.cpp:596
				float32_t lfScore;

				{
					// BrnInGameMessageRenderer.cpp:668
					CgsDev::StrStream lStrStream;

					CgsDev::StrStream::StrStream(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
				}
				CgsContainers::BitArray<64u>::UnSetBit(/* parameters */);
			}
		}
	}
	{
		// BrnInGameMessageRenderer.cpp:399
		const GuiEventLoadNotification * lpLoadNotification;

		{
			// BrnInGameMessageRenderer.cpp:404
			SafeResourceHandle<CgsResource::Font> lpFont;

			// BrnInGameMessageRenderer.cpp:408
			const char * lpcFontName;

			CgsResource::SafeResourceHandle<CgsResource::Font>::operator!=(/* parameters */);
			CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
			CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
			CgsResource::SafeResourceHandle<CgsResource::Font>::operator==(/* parameters */);
			CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// BrnInGameMessageRenderer.cpp:452
		GuiEventTickerStatus lStatusMessage;

		AddGuiEvent<BrnGui::GuiEventTickerStatus>(/* parameters */);
	}
	{
		// BrnInGameMessageRenderer.cpp:492
		const GuiEventTickerCustomMessage * lpCustomMessage;

		// BrnInGameMessageRenderer.cpp:493
		const char * lpMessageText;

		// BrnInGameMessageRenderer.cpp:494
		int32_t liStringIndex;

		// BrnInGameMessageRenderer.cpp:495
		int8_t li8NumStrings;

		// BrnInGameMessageRenderer.cpp:496
		int8_t li8NumParams;

		// BrnInGameMessageRenderer.cpp:499
		const UnicodeBuffer::CgsUtf8 *[4] lapMessageStrings;

		{
			// BrnInGameMessageRenderer.cpp:504
			BrnGui::GuiEventTickerCustomMessage::EStringType leStringType;

			{
				// BrnInGameMessageRenderer.cpp:528
				CgsDev::StrStream lStrStream;

				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
		}
		GuiEventTickerCustomMessage::GetString(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnInGameMessageRenderer.cpp:400
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsLanguage::LanguageManager::GetDefaultFont(/* parameters */);
	CgsLanguage::LanguageManager::GetDefaultFont(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void rw::math::vpu::GetVector2_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint32_t,5u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint32_t,5u>::Append(const const uint32_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::CrashNavIconRenderer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	GuiEventRenderMainMap::Construct(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	CgsGraphics::Im2dTransform::Construct(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	Vector4<VectorAxisX, VectorAxisY, VectorAxisX, VectorAxisY>(/* parameters */);
	CgsContainers::Array<uint32_t,5u>::Append(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::GetVector2_Zero(/* parameters */);
	CgsContainers::Array<uint32_t,5u>::Append(/* parameters */);
	CgsContainers::Array<uint32_t,5u>::Append(/* parameters */);
	CgsContainers::Array<uint32_t,5u>::Append(/* parameters */);
	CgsContainers::Array<uint32_t,5u>::Append(/* parameters */);
	CgsGraphics::Im2dTransform::TransformByAspectRatio(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::fpu::Matrix33Template<float>::SetX(/* parameters */);
	rw::math::fpu::Matrix33Template<float>::SetZ(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::fpu::Matrix33Template<float>::SetY(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	CgsGraphics::Im2dTransform::SetTransform(/* parameters */);
}

void BrnGui::GuiEventDrawEventIcons::GetDrawIcons() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiEventDrawEventIcons::GetDisplayType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiEventDrawEventIcons::GetFadeTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiEventDrawEventIcons::GetIgnoreIcons(uint32_t *  lpuIconsToIgnore, int32_t *  lpiNumIconsToIgnore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEventTypeDefs.h:2744
		int32_t liIndex;

	}
}

void BrnGui::CrashNavIconRenderer::RecvEvent(const CgsModule::Event *  lpEvent, int32_t  lEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavIconRenderer.cpp:479
		const GuiEventRoadSignIconStatus * lRoadSignIconStatus;

	}
	{
		// BrnCrashNavIconRenderer.cpp:395
		const GuiEventDrawEventIcons * lpDrawIconsEvent;

		GuiCache::GetTime(/* parameters */);
		GuiEventDrawEventIcons::GetIgnoreIcons(/* parameters */);
	}
	{
		// BrnCrashNavIconRenderer.cpp:428
		const GuiEventFilterEventIcons * lpFilterEventIcons;

	}
	{
		// BrnCrashNavIconRenderer.cpp:444
		const GuiEventSetHoveredEventIcon * lpHoveredEventIcon;

		{
			// BrnCrashNavIconRenderer.cpp:446
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// BrnCrashNavIconRenderer.cpp:490
		const GuiEventLoadNotification * lpLoadNotification;

		{
			// BrnCrashNavIconRenderer.cpp:495
			SafeResourceHandle<CgsResource::Font> lpFont;

			// BrnCrashNavIconRenderer.cpp:499
			const char * lpcFontName;

			CgsResource::SafeResourceHandle<CgsResource::Font>::operator!=(/* parameters */);
			CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
			CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
			CgsResource::SafeResourceHandle<CgsResource::Font>::operator==(/* parameters */);
			CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// BrnCrashNavIconRenderer.cpp:459
		const GuiEventMapCursorStatus * lpMapCursorStatus;

	}
	{
		// BrnCrashNavIconRenderer.cpp:379
		const GuiEventCache * lpCacheEvent;

	}
	{
		// BrnCrashNavIconRenderer.cpp:380
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCrashNavIconRenderer.cpp:436
		const GuiEventSetInspectedEventIcon * lpInspectedEventIcon;

	}
	{
		// BrnCrashNavIconRenderer.cpp:469
		const GuiEventMapIconStatus * lpMapIconStatus;

	}
	{
		// BrnCrashNavIconRenderer.cpp:491
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsLanguage::LanguageManager::GetDefaultFont(/* parameters */);
	CgsLanguage::LanguageManager::GetDefaultFont(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnGui::CrashNavIconRenderer::InitEventTypeUvs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavIconRenderer.cpp:721
		int32_t liTextureIndex;

		// BrnCrashNavIconRenderer.cpp:722
		uint32_t luIconTypeIndex;

		// BrnCrashNavIconRenderer.cpp:723
		uint32_t luEventTypeIndex;

		rw::math::fpu::Vector2Template<float>::SetY(/* parameters */);
		rw::math::fpu::Vector2Template<float>::SetY(/* parameters */);
		rw::math::fpu::Vector2Template<float>::SetY(/* parameters */);
		rw::math::fpu::Vector2Template<float>::SetY(/* parameters */);
	}
}

void BrnGui::CrashNavIconRenderer::InitResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavIconRenderer.cpp:623
		int32_t liTextureIndex;

		// BrnCrashNavIconRenderer.cpp:624
		Texture2D * lpTexture;

		// BrnCrashNavIconRenderer.cpp:625
		Parameters lTextureStateParams;

	}
	renderengine::TextureState::Parameters::Parameters(/* parameters */);
	renderengine::TextureState::Parameters::SetTexture(/* parameters */);
	renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
	renderengine::TextureState::Parameters::SetTexture(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
	renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
	renderengine::TextureState::Parameters::SetTexture(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
	renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
	renderengine::TextureState::Parameters::SetTexture(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
	renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
	renderengine::TextureState::Parameters::SetTexture(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
	renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

void BrnGui::CrashNavIconRenderer::Prepare(GuiEventQueueSmall *  lpOutputEventQueue, rw::IResourceAllocator *  lpAllocator, rw::IResourceAllocator *  lpTextureAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavIconRenderer.cpp:321
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::CrashNavIconRenderer::GetActiveIconType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetNumEventStarts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::GetNumEventStarts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart,175u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetNumOnlineFinishPoints() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<256u>::CountSetBits() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:824
		uint32_t luSetBits;

		{
			// CgsBitArray.h:826
			uint64_t luIndex;

			{
				// CgsBitArray.h:828
				uint64_t luCount;

			}
		}
	}
}

void BrnGui::CrashNavIconRenderer::GetNumIcons() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavIconRenderer.cpp:863
		const BrnGui::GuiEventDrawEventIcons::EIconDisplayType leActiveIconType;

		GetActiveIconType(/* parameters */);
	}
	GuiCache::GetNumProfileEvents(/* parameters */);
	GuiCache::GetNumEventStarts(/* parameters */);
	GuiCache::GetNumPresetEvents(/* parameters */);
	GuiCache::GetWorldDataController(/* parameters */);
	WorldDataController::GetTotalNumberOfOnlineLandmarks(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	GuiCache::GetNumOnlineFinishPoints(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::GetEvent(uint32_t  luEventIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::GuiCache::GetPresetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::GetNumEvents(/* parameters */);
	CgsContainers::Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u>::GetLength(/* parameters */);
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::GetEvent(/* parameters */);
	{
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnGui::GuiCache::GetProfileEvent(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnProgression::ProfileEvent,175u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void BrnProgression::ProfileEvent::GetID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProfileEvent::GetFlags() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetLightTriggerID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart::GetEventID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetEventID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RaceEventData::GetOnlineMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SatNavIconInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::LandmarkIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::operator std::int32_t() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavRenderer::GetIconInformation(uint32_t  luIconIndex, BrnGui::SatNavRenderer::IconRendererSatNavIconInfo *  lpSatNavIconInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNavRenderer.cpp:884
		const ProfileEvent * lpProfileEvent;

		// BrnSatNavRenderer.cpp:885
		const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * lpEventStart;

		// BrnSatNavRenderer.cpp:886
		const BrnProgression::RaceEventData * lpRaceEventData;

		GuiCache::GetProfileEvent(/* parameters */);
		GuiCache::GetWorldDataController(/* parameters */);
	}
	{
		// BrnSatNavRenderer.cpp:923
		const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * lpEventStart;

		// BrnSatNavRenderer.cpp:924
		const BrnProgression::RaceEventData * lpRaceEventData;

		GuiCache::GetWorldDataController(/* parameters */);
	}
	{
		// BrnSatNavRenderer.cpp:941
		BrnGui::GuiEventUpdateSatNav::SatNavIconInfo lSatNavIconInfo;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::SatNavRenderer::InitSatNavIcons() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNavRenderer.cpp:1255
		uint32_t luNumberOfIcons;

		{
			// BrnSatNavRenderer.cpp:1260
			uint32_t luIconIndex;

		}
	}
}

void BrnGui::GuiCache::IsInFreeburn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetEventID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart::GetJunctionID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint32_t,5u>::Contains(const const uint32_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint32_t,5u>::FindFirstInstanceOf(const const uint32_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:474
		uint32_t luElement;

	}
}

void BrnGui::CrashNavIconRenderer::GetIconInformation(uint32_t  luIconIndex, bool *  lpbFiltered, bool *  lpbIsMiniIcon, uint32_t *  lpuEventID, BrnGui::CrashNavIconRenderer::ECrashNavIconType *  lpeIconType, uint32_t *  lpEventTypeIndex, const Vector3 &  lPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavIconRenderer.cpp:930
		const BrnGui::GuiEventDrawEventIcons::EIconDisplayType leActiveIconType;

	}
	GetActiveIconType(/* parameters */);
	{
		// BrnCrashNavIconRenderer.cpp:936
		const ProfileEvent * lpProfileEvent;

		// BrnCrashNavIconRenderer.cpp:937
		const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * lpEventStart;

		// BrnCrashNavIconRenderer.cpp:938
		const BrnProgression::RaceEventData * lpRaceEventData;

		GuiCache::GetProfileEvent(/* parameters */);
		GuiCache::GetWorldDataController(/* parameters */);
		GuiCache::IsInFreeburn(/* parameters */);
		BrnProgression::RaceEventData::GetMode(/* parameters */);
	}
	{
		// BrnCrashNavIconRenderer.cpp:1080
		const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * lpEventStart;

		// BrnCrashNavIconRenderer.cpp:1081
		const BrnProgression::RaceEventData * lpRaceEventData;

		GuiCache::GetWorldDataController(/* parameters */);
	}
	{
		// BrnCrashNavIconRenderer.cpp:1042
		BrnGui::GuiEventUpdateSatNav::SatNavIconInfo lIconInfo;

	}
	{
		// BrnCrashNavIconRenderer.cpp:1061
		BrnGui::GuiEventUpdateSatNav::SatNavIconInfo lIconInfo;

	}
	{
		// BrnCrashNavIconRenderer.cpp:1007
		const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * lpEventStart;

		// BrnCrashNavIconRenderer.cpp:1008
		const BrnProgression::RaceEventData * lpRaceEventData;

		GuiCache::GetWorldDataController(/* parameters */);
		BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart::GetJunctionID(/* parameters */);
		CgsContainers::Array<uint32_t,5u>::Contains(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsContainers::Array<uint16_t,25u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,25u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::BitArray<601u>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGui::BankingScore,6u>::IsFull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGui::BankingScore,6u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGui::BankingScore,6u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BankingScore() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGui::BankingScore,6u>::Append(const const BankingScore &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::BitArray<601u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::AboveCarRenderer::RecvEvent(const CgsModule::Event *  lpEvent, int32_t  lEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAboveCarRenderer.cpp:442
		const GuiPlayerCrashingStateChangeEvent * lpCrashedEvent;

	}
	{
		// BrnAboveCarRenderer.cpp:374
		const GuiEventCache * lpCacheEvent;

	}
	{
		// BrnAboveCarRenderer.cpp:384
		const GuiRemovedTrafficEvent * lpRemovedTrafficEvent;

		// BrnAboveCarRenderer.cpp:385
		uint32_t liIndex;

		// BrnAboveCarRenderer.cpp:386
		uint32_t liEndIndex;

		// BrnAboveCarRenderer.cpp:387
		uint16_t luTrafficCarIndex;

		CgsContainers::Array<uint16_t,25u>::GetLength(/* parameters */);
		CgsContainers::Array<uint16_t,25u>::GetItem(/* parameters */);
		CgsContainers::BitArray<601u>::UnSetBit(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	{
		// BrnAboveCarRenderer.cpp:434
		const GuiEventRoadRageTimeExtended * lpExtendEvent;

	}
	{
		// BrnAboveCarRenderer.cpp:400
		const GuiHitVehicleEvent * lpHitEvent;

		CgsContainers::Array<BrnGui::BankingScore,6u>::IsFull(/* parameters */);
		{
			// BrnAboveCarRenderer.cpp:407
			uint32_t luEndCount;

			// BrnAboveCarRenderer.cpp:408
			uint32_t luIndex;

			GuiCache::GetScoringTrafficCount(/* parameters */);
			GuiCache::GetScoringTrafficData(/* parameters */);
			CgsContainers::Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>::GetLength(/* parameters */);
		}
		CgsContainers::BitArray<601u>::SetBit(/* parameters */);
	}
	{
		// BrnAboveCarRenderer.cpp:331
		const GuiEventLoadNotification * lpLoadNotification;

		{
			// BrnAboveCarRenderer.cpp:336
			SafeResourceHandle<CgsResource::Font> lpFont;

			CgsResource::SafeResourceHandle<CgsResource::Font>::operator!=(/* parameters */);
			CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
			CgsResource::SafeResourceHandle<CgsResource::Font>::operator==(/* parameters */);
			CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
			CgsResource::SafeResourceHandle<CgsResource::Font>::operator==(/* parameters */);
			CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
		}
	}
	{
		// BrnAboveCarRenderer.cpp:324
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::Array<BrnGui::BankingScore,6u>::IsFull(/* parameters */);
	{
		// BrnAboveCarRenderer.cpp:450
		BankingScore lScore;

		rw::math::vpu::Vector2::Set(/* parameters */);
		CgsContainers::Array<BrnGui::BankingScore,6u>::Append(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
	}
	{
		// BrnAboveCarRenderer.cpp:375
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnAboveCarRenderer.cpp:413
		BankingScore lScore;

		GuiCache::GetScoringTrafficData(/* parameters */);
		CgsContainers::Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>::GetLength(/* parameters */);
		CgsContainers::Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>::operator[](/* parameters */);
		CgsContainers::Array<BrnGui::BankingScore,6u>::Append(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		// BrnAboveCarRenderer.cpp:332
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsLanguage::LanguageManager::GetDefaultFont(/* parameters */);
	CgsLanguage::LanguageManager::GetDefaultFont(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
	CgsLanguage::LanguageManager::GetDefaultFont(/* parameters */);
	CgsLanguage::LanguageManager::GetDefaultFont(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::CreditsTextRenderer::RecvEvent(const CgsModule::Event *  lpEvent, int32_t  lEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCreditsTextRenderer.cpp:152
		const GuiEventLoadNotification * lpLoadNotification;

		{
			// BrnCreditsTextRenderer.cpp:190
			Texture2D * lpTexture;

			// BrnCreditsTextRenderer.cpp:193
			Parameters lTextureStateParams;

			renderengine::TextureState::Parameters::Parameters(/* parameters */);
			renderengine::TextureState::Parameters::SetTexture(/* parameters */);
			renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
			renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
			renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
			renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
			renderengine::RGBA8::RGBA8(/* parameters */);
			rw::IResourceAllocator::Allocate(/* parameters */);
			~ResourceDescriptor(/* parameters */);
		}
	}
	{
		// BrnCreditsTextRenderer.cpp:145
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCreditsTextRenderer.cpp:157
		SafeResourceHandle<CgsResource::Font> lpFont;

		// BrnCreditsTextRenderer.cpp:161
		const char * lpcFontName;

		CgsResource::SafeResourceHandle<CgsResource::Font>::operator!=(/* parameters */);
		CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
		CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
		CgsResource::SafeResourceHandle<CgsResource::Font>::operator==(/* parameters */);
		CgsResource::SafeResourceHandle<CgsResource::Font>::operator==(/* parameters */);
		CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
		CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
		CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
	}
	{
		// BrnCreditsTextRenderer.cpp:153
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsLanguage::LanguageManager::GetDefaultFont(/* parameters */);
	CgsLanguage::LanguageManager::GetDefaultFont(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnGui::GuiEventShowHideSatNav::GetMapType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiEventShowHideSatNav::GetShow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCustRendererDebugComponent::SetSatNavDisplayActive(bool  lbSetActive) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiEventShowHideSatNav::GetFadeTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CustomRendererManager::RecvEvent(const CgsModule::Event *  lpEvent, int32_t  lEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCustomRenderer.cpp:348
		const GuiEventShowHideAboveCar * lpShowHide;

	}
	{
		// BrnCustomRenderer.cpp:341
		const GuiEventShowHideBoostBar * lpShowHide;

	}
	{
		// BrnCustomRenderer.cpp:276
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCustomRenderer.cpp:282
		const GuiEventShowHideSatNav * lpShowHide;

		GuiCustRendererDebugComponent::SetSatNavDisplayActive(/* parameters */);
	}
	GuiEventShowHideSatNav::GetFadeTime(/* parameters */);
	GuiCustRendererDebugComponent::SetMainMapDisplayActive(/* parameters */);
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetBufferFullRewindToLastEndRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(int32_t  liCommandType, uint32_t  luCommandSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1222
		uint32_t luCommandBufferWritePos;

		// CgsImRenderBuffer.h:1223
		uint8_t * lpuCommandBuffer;

		// CgsImRenderBuffer.h:1226
		uint32_t luAlignedSize;

		{
			// CgsImRenderBuffer.h:1219
			uintptr_t luAddress;

		}
		{
			// CgsImRenderBuffer.h:1232
			ImCommand * lpCommand;

		}
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
	}
	{
	}
}

void rw::math::vpu::operator!=(const rw::math::vpu::Matrix33 &  a, const rw::math::vpu::Matrix33 &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator!=(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsEqualV3(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:255
		bool ret;

		// vector_intrinsic_operation_inline.h:256
		VectorIntrinsicUnion::VectorIntrinsic v0comp;

		// vector_intrinsic_operation_inline.h:256
		VectorIntrinsicUnion::VectorIntrinsic v1comp;

	}
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisZ, VectorAxisW>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:164
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

extern void Basic2dColouredTexturedVertex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2dRenderBuffer::PushMask(TextureState *  lpTextureState, ImCommandBatchTransformTextureBlendRender::Im2dVertex *  lpVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm2dRenderBuffer.h:173
		ImCommandPushMaskTextureState<CgsGraphics::Basic2dColouredTexturedVertex> * lpCommand;

		// CgsIm2dRenderBuffer.h:174
		ImCommandBatchTransformTextureBlendRender::Im2dVertex * lpDestVertices;

	}
}

void BrnGui::SetMaskRect(CgsGraphics::Im2dRenderBuffer *  lpIm2dRenderBuffer, TextureState *  lpTextureState, const const rw::math::vpu::Vector4 &  lv4Rect, const const rw::math::vpu::Vector4 &  lv4UVRect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCustomRenderer.cpp:876
		Vector2 lv2DeviceTopLeft;

		// BrnCustomRenderer.cpp:877
		Vector2 lv2DeviceBottomRight;

		// BrnCustomRenderer.cpp:883
		ImCommandBatchTransformTextureBlendRender::Im2dVertex[2] lVertexList;

		rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	}
	rw::math::vpu::GetMatrix33_Zero(/* parameters */);
	rw::math::vpu::operator!=(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	MapTransform::Transform(/* parameters */);
	rw::math::vpu::Vector2::X(/* parameters */);
	Vector2<VectorAxisZ, VectorAxisW>(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	{
	}
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	{
		{
			{
			}
		}
	}
	{
	}
	MapTransform::Transform(/* parameters */);
	MapTransform::Transform(/* parameters */);
	rw::math::vpu::Vector2::X(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	MapTransform::MakeTransform(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	{
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::Max<rw::math::vpu::VecFloatRefX>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(/* parameters */);
	rw::math::vpu::Min<rw::math::vpu::VecFloatRefY>(/* parameters */);
	rw::math::vpu::Vector2::Y(/* parameters */);
	rw::math::vpu::Vector2::Y(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::PushMask(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisW>::operator float(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::operator!=(/* parameters */);
	rw::math::vpu::operator!=(/* parameters */);
	{
		// BrnCustomRenderer.cpp:872
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::BoostBarRenderer::SetChainedInactiveMask(CgsGraphics::Im2dRenderBuffer *  lpIm2dRenderBuffer, const rw::math::vpu::Vector4  lv4BackgroundRect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostBarRenderer.cpp:2187
		Vector4 lv4BoostUvRect;

		rw::math::vpu::operator/(/* parameters */);
	}
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisX>(/* parameters */);
	rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY, VectorAxisZ, VectorAxisW>(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	{
	}
}

void CgsGraphics::Im2dRenderBuffer::PopMask() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::UnsetMaskRect(CgsGraphics::Im2dRenderBuffer *  lpIm2dRenderBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGraphics::Im2dRenderBuffer::PopMask(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
}

extern void BillboardInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGui::BillboardInfo,32u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::BillboardInfo::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGui::BillboardInfo,32u>::Append(const const BillboardInfo &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<CgsGui::BillboardInfo,32u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGui::BillboardInfo,32u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<CgsGui::BillboardInfo,32u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BoostBarRenderer::RenderDebugFireEndCap(const const rw::math::vpu::Vector4 &  lv4FireRect, const const rw::math::vpu::Vector4 &  lv4FireColour, float32_t  lfTimeNow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostBarRenderer.cpp:2846
		CgsGraphics::Im2dRenderBuffer * lpIm2dRenderBuffer;

		// BrnBoostBarRenderer.cpp:2848
		BillboardInfo lBillboard;

		// BrnBoostBarRenderer.cpp:2850
		const float32_t sfBodyXsize;

		// BrnBoostBarRenderer.cpp:2851
		const float32_t sfBodyXoffset;

		// BrnBoostBarRenderer.cpp:2852
		const float32_t sfBodyYscale;

		// BrnBoostBarRenderer.cpp:2853
		const float32_t sfBodyYoffset;

		// BrnBoostBarRenderer.cpp:2854
		Vector2 smv2BodySize;

		// BrnBoostBarRenderer.cpp:2856
		Vector2 lv2BodyPos;

		// BrnBoostBarRenderer.cpp:2859
		const float32_t sfEndCapXsize;

		// BrnBoostBarRenderer.cpp:2860
		Vector2 smv2EndCapSize;

		// BrnBoostBarRenderer.cpp:2861
		float32_t sfEndCapOffset;

		// BrnBoostBarRenderer.cpp:2863
		Vector4 lv4FireMaskRect;

		// BrnBoostBarRenderer.cpp:2864
		const float32_t sfFireMaskFeather;

		// BrnBoostBarRenderer.cpp:2865
		float32_t lfFireMaskX;

		// BrnBoostBarRenderer.cpp:2867
		const float32_t KF_FIRE_MASK_WIDTH;

		// BrnBoostBarRenderer.cpp:2884
		const float32_t sfEndCapMaskXoffset;

		// BrnBoostBarRenderer.cpp:2885
		Vector4 lv4EndCapRect;

	}
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	CgsGui::ParticleSystem2d::GetRGBA(/* parameters */);
	rw::math::vpu::GetVector4_Zero(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::Clear(/* parameters */);
	CgsGui::BillboardInfo::Construct(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::Append(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::operator[](/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::GetLength(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void rw::math::vpu::operator*(const const rw::math::vpu::VecFloatRefIndex &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1648
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1649
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:1650
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
		{
			// vec_float_operation_inline.h:1651
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1651
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator+(const const rw::math::vpu::VecFloatRefIndex &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1329
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1330
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:1331
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
	}
}

void rw::math::vpu::operator+<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1318
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1319
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1321
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1322
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator+(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BoostBarRenderer::RenderDebugFireOverlay(const const rw::math::vpu::Vector4 &  lv4FireRect, const const rw::math::vpu::Vector4 &  lv4FireColour, float32_t  lfTimeNow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostBarRenderer.cpp:2763
		CgsGraphics::Im2dRenderBuffer * lpIm2dRenderBuffer;

		// BrnBoostBarRenderer.cpp:2765
		BillboardInfo lBillboard;

		// BrnBoostBarRenderer.cpp:2767
		const float32_t sfBodyXsize;

		// BrnBoostBarRenderer.cpp:2768
		const float32_t sfBodyXoffset;

		// BrnBoostBarRenderer.cpp:2769
		const float32_t sfBodyYscale;

		// BrnBoostBarRenderer.cpp:2770
		const float32_t sfBodyYoffset;

		// BrnBoostBarRenderer.cpp:2771
		Vector2 smv2BodySize;

		// BrnBoostBarRenderer.cpp:2773
		const float32_t sfBodySpacingProp;

		// BrnBoostBarRenderer.cpp:2775
		Vector2 lv2BodyPos;

		// BrnBoostBarRenderer.cpp:2778
		float32_t lfBarWidth;

		// BrnBoostBarRenderer.cpp:2779
		int32_t liRepeatCount;

		// BrnBoostBarRenderer.cpp:2781
		const float32_t sfEndCapXsize;

		// BrnBoostBarRenderer.cpp:2782
		Vector2 smv2EndCapSize;

		// BrnBoostBarRenderer.cpp:2783
		float32_t sfEndCapOffset;

		// BrnBoostBarRenderer.cpp:2785
		Vector4 lv4FireMaskRect;

		// BrnBoostBarRenderer.cpp:2786
		const float32_t sfFireMaskFeather;

		// BrnBoostBarRenderer.cpp:2787
		float32_t lfFireMaskX;

		// BrnBoostBarRenderer.cpp:2789
		const float32_t KF_FIRE_MASK_WIDTH;

		// BrnBoostBarRenderer.cpp:2795
		Vector4 v4OverlayColour;

		// BrnBoostBarRenderer.cpp:2797
		const float32_t sfOverlayYscale;

		// BrnBoostBarRenderer.cpp:2798
		const float32_t sfOverlayXsize;

		// BrnBoostBarRenderer.cpp:2799
		const float32_t sfOverlayFps;

		// BrnBoostBarRenderer.cpp:2800
		const float32_t sfOverlayYoffset;

		// BrnBoostBarRenderer.cpp:2801
		const float32_t sfOverlaySpacing;

		// BrnBoostBarRenderer.cpp:2803
		Vector2 smv2OverlaySize;

		// BrnBoostBarRenderer.cpp:2804
		Vector2 lv2OverlayPos;

	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	{
	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::Clear(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:2807
		int32_t i;

	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::GetLength(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::operator[](/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::GetLength(/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::Append(/* parameters */);
	CgsGui::BillboardInfo::Construct(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	CgsGui::ParticleSystem2d::GetRGBA(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::BoostBarRenderer::RenderDebugFireBody(const const rw::math::vpu::Vector4 &  lv4FireRect, const const rw::math::vpu::Vector4 &  lv4FireColour, float32_t  lfTimeNow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostBarRenderer.cpp:2694
		CgsGraphics::Im2dRenderBuffer * lpIm2dRenderBuffer;

		// BrnBoostBarRenderer.cpp:2696
		BillboardInfo lBillboard;

		// BrnBoostBarRenderer.cpp:2698
		const float32_t sfBodyXsize;

		// BrnBoostBarRenderer.cpp:2699
		const float32_t sfBodyXoffset;

		// BrnBoostBarRenderer.cpp:2700
		const float32_t sfBodyYscale;

		// BrnBoostBarRenderer.cpp:2701
		const float32_t sfBodyYoffset;

		// BrnBoostBarRenderer.cpp:2702
		Vector2 smv2BodySize;

		// BrnBoostBarRenderer.cpp:2704
		const float32_t sfBodySpacingProp;

		// BrnBoostBarRenderer.cpp:2706
		Vector2 lv2BodyPos;

		// BrnBoostBarRenderer.cpp:2709
		float32_t lfBarWidth;

		// BrnBoostBarRenderer.cpp:2710
		int32_t liRepeatCount;

		// BrnBoostBarRenderer.cpp:2725
		const float32_t KF_FIRE_BODY_ENDCAP_X_SIZE;

		// BrnBoostBarRenderer.cpp:2726
		Vector2 smv2EndCapSize;

		// BrnBoostBarRenderer.cpp:2727
		float32_t sfEndCapOffset;

		// BrnBoostBarRenderer.cpp:2729
		Vector4 lv4FireMaskRect;

		// BrnBoostBarRenderer.cpp:2730
		const float32_t KF_FIRE_BODY_ENDCAP_FEATHER;

		// BrnBoostBarRenderer.cpp:2731
		float32_t lfFireMaskX;

		// BrnBoostBarRenderer.cpp:2733
		const float32_t KF_FIRE_MASK_WIDTH;

	}
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::Clear(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:2713
		int32_t i;

	}
	rw::math::vpu::Vector4::Set(/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::GetLength(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::operator[](/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::GetLength(/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::Append(/* parameters */);
	CgsGui::BillboardInfo::Construct(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	CgsGui::ParticleSystem2d::GetRGBA(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void rw::math::vpu::operator+<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1284
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1285
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
}

void rw::math::vpu::operator+<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1284
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1285
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
}

void BrnGui::BoostBarRenderer::RenderBillboardBar(const const rw::math::vpu::Vector4 &  lv4Rect, float32_t  lfXSize, const const rw::math::vpu::Vector4 &  lv4Colour, BillboardRenderer *  lpBillboardRenderer, float32_t  lfTimeNow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostBarRenderer.cpp:1658
		Vector2 lv2Size;

		// BrnBoostBarRenderer.cpp:1662
		BillboardInfo lBillboard;

		// BrnBoostBarRenderer.cpp:1672
		float32_t lfBarWidth;

		// BrnBoostBarRenderer.cpp:1673
		int32_t liRepeatCount;

		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	CgsGui::ParticleSystem2d::GetRGBA(/* parameters */);
	rw::math::vpu::operator-<VectorAxisW, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	{
	}
	rw::math::vpu::Vector2::Set(/* parameters */);
	CgsGui::BillboardInfo::Construct(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::Clear(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::Append(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisX>(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:1675
		int32_t i;

	}
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::operator[](/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::operator[](/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::operator[](/* parameters */);
	{
	}
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::operator[](/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::operator[](/* parameters */);
	{
	}
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::Append(/* parameters */);
	CgsGui::BillboardInfo::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::operator[](/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::GetLength(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void rw::math::vpu::operator*<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1573
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1574
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
}

void rw::math::vpu::operator+<VectorAxisW, VectorAxisY>(VecFloatRef<VectorAxisW> &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1294
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1295
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1297
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator+<VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1284
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1285
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
}

void rw::math::vpu::operator-(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1394
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnGui::BoostBarRenderer::RenderFire(const const rw::math::vpu::Vector4 &  lv4FireRect, const const rw::math::vpu::Vector4 &  lv4FireColour, float32_t  lfTimeNow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostBarRenderer.cpp:1480
		CgsGraphics::Im2dRenderBuffer * lpIm2dRenderBuffer;

		// BrnBoostBarRenderer.cpp:1482
		BillboardInfo lBillboard;

		// BrnBoostBarRenderer.cpp:1484
		Vector2 lv2BodySize;

		// BrnBoostBarRenderer.cpp:1485
		Vector2 lv2BodyPos;

		// BrnBoostBarRenderer.cpp:1488
		float32_t lfBarWidth;

		// BrnBoostBarRenderer.cpp:1489
		int32_t liRepeatCount;

		// BrnBoostBarRenderer.cpp:1507
		Vector4 lv4FireMaskRect;

		// BrnBoostBarRenderer.cpp:1508
		Vector2 smv2EndCapSize;

		// BrnBoostBarRenderer.cpp:1510
		VecFloat lfFireMaskX;

		// BrnBoostBarRenderer.cpp:1537
		Vector4 lv4EndCapRect;

		// BrnBoostBarRenderer.cpp:1548
		Vector4 v4OverlayColour;

		// BrnBoostBarRenderer.cpp:1550
		const float32_t sfOverlayYscale;

		// BrnBoostBarRenderer.cpp:1551
		const float32_t sfOverlayXsize;

		// BrnBoostBarRenderer.cpp:1553
		float32_t sfOverlayFps;

		// BrnBoostBarRenderer.cpp:1555
		const float32_t sfOverlayYoffset;

		// BrnBoostBarRenderer.cpp:1556
		const float32_t sfOverlaySpacing;

		// BrnBoostBarRenderer.cpp:1563
		Vector2 smv2OverlaySize;

		// BrnBoostBarRenderer.cpp:1564
		Vector2 lv2OverlayPos;

		rw::math::vpu::operator-<VectorAxisW, VectorAxisY>(/* parameters */);
	}
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::Clear(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator+<VectorAxisW, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:1495
		int32_t i;

	}
	rw::math::vpu::operator+<VectorAxisZ>(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::GetLength(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	CgsGui::ParticleSystem2d::GetRGBA(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::Clear(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::operator+<VectorAxisZ>(/* parameters */);
	CgsGui::BillboardInfo::Construct(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::Append(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::operator[](/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::GetLength(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::Clear(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:1567
		int32_t i;

	}
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::GetLength(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::operator[](/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::GetLength(/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::Append(/* parameters */);
	CgsGui::BillboardInfo::Construct(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	CgsGui::ParticleSystem2d::GetRGBA(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
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
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::operator[](/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::GetLength(/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::Append(/* parameters */);
	CgsGui::BillboardInfo::Construct(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	CgsGui::ParticleSystem2d::GetRGBA(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
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

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1103
		ImCommandSetShaderProgram * lpCommand;

		AllocateCommand(/* parameters */);
	}
	{
	}
	{
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetTexture(renderengine::Texture *const  lpTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:826
		ImCommandSetTexture * lpCommand;

	}
	AllocateCommand(/* parameters */);
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::Render(renderengine::PrimitiveType  lePrimitiveType, const ImCommandBatchTransformTextureBlendRender::Im2dVertex *  lpVertices, uint32_t  luNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:689
		ImCommandBatchTransformTextureBlendRender::Im2dVertex * lpAllocatedVerts;

	}
	{
		// CgsImRenderBuffer.h:692
		ImCommandRenderPrimitives<CgsGraphics::Basic2dColouredTexturedVertex> * lpCommand;

		AllocateCommand(/* parameters */);
	}
	{
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(const TextureState *  lpTextureState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:998
		ImCommandSetStateTexture * lpCommand;

	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(const BlendState *  lpBlendState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:850
		ImCommandSetStateBlend * lpCommand;

	}
}

void BrnGui::CrashNavIconRenderer::RenderCursor(CgsGraphics::Im2dRenderBuffer *  lpRenderBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavIconRenderer.cpp:1475
		ImCommandBatchTransformTextureBlendRender::Im2dVertex[4] lVertexList;

		// BrnCrashNavIconRenderer.cpp:1482
		Vector4 KV_CURSOR_UV_RECT;

		// BrnCrashNavIconRenderer.cpp:1484
		float32_t KF_CURSOR_HALF_WIDTH_SELECTED;

		// BrnCrashNavIconRenderer.cpp:1485
		float32_t KF_CURSOR_HALF_HEIGHT_SELECTED;

		// BrnCrashNavIconRenderer.cpp:1487
		float32_t KF_CURSOR_HALF_WIDTH_UNSELECTED;

		// BrnCrashNavIconRenderer.cpp:1488
		float32_t KF_CURSOR_HALF_HEIGHT_UNSELECTED;

		// BrnCrashNavIconRenderer.cpp:1490
		float32_t KF_CURSOR_X_OFFSET_SELECTED;

		// BrnCrashNavIconRenderer.cpp:1491
		float32_t KF_CURSOR_Y_OFFSET_SELECTED;

		// BrnCrashNavIconRenderer.cpp:1493
		float32_t KF_CURSOR_X_OFFSET_UNSELECTED;

		// BrnCrashNavIconRenderer.cpp:1494
		float32_t KF_CURSOR_Y_OFFSET_UNSELECTED;

		// BrnCrashNavIconRenderer.cpp:1496
		float32_t lfCursorHalfWidth;

		// BrnCrashNavIconRenderer.cpp:1497
		float32_t lfCursorHalfHeight;

		// BrnCrashNavIconRenderer.cpp:1499
		float32_t lfCursorX;

		// BrnCrashNavIconRenderer.cpp:1500
		float32_t lfCursorY;

	}
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	{
		// BrnCrashNavIconRenderer.cpp:1526
		float32_t lfTimeNow;

		GuiCache::GetTime(/* parameters */);
	}
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	{
		// BrnCrashNavIconRenderer.cpp:1534
		float32_t lfProp;

		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Max<float>(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Subtract(/* parameters */);
	}
	{
	}
	{
	}
}

void rw::math::vpu::operator><VectorAxisX>(const const float &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:426
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:428
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:430
		bool ret;

		{
			// vec_float_operation_inline.h:427
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator< <VectorAxisZ>(const const float &  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:584
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:586
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:588
		bool ret;

		{
			// vec_float_operation_inline.h:585
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator><VectorAxisY>(const const float &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:426
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:428
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:430
		bool ret;

		{
			// vec_float_operation_inline.h:427
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator< <VectorAxisW>(const const float &  a, VecFloatRef<VectorAxisW> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:584
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:586
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:588
		bool ret;

		{
			// vec_float_operation_inline.h:585
			VectorIntrinsicUnion u;

		}
	}
}

void BrnGui::MapTransform::GetDeviceSpace() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavIconRenderer::RenderEventIcon(CgsGraphics::Im2dRenderBuffer *  lpRenderBuffer, bool  lbIsMiniIcon, bool  lbFiltered, BrnGui::CrashNavIconRenderer::ECrashNavIconType  leIconType, uint32_t  luEventID, uint32_t  luEventTypeIndex, const rw::math::vpu::Vector3  lv3Position, float32_t *  lafMiniIconHalfWidth, float32_t *  lafMiniIconHalfHeight, float32_t *  lafIconHalfWidth, float32_t *  lafIconHalfHeight, RGBA8  lAlphaedColour, BrnGui::EventIconManager::EventIcon2D *  la2DEventIcons, int32_t *  lpiNum2DEventIcons) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavIconRenderer.cpp:1326
		Vector2 lv2PositionFlattenedWorldSpace;

		// BrnCrashNavIconRenderer.cpp:1327
		Vector2 lv2PositionPosScreenSpace;

		// BrnCrashNavIconRenderer.cpp:1328
		Vector2 lv2PositionPosNormalised;

		// BrnCrashNavIconRenderer.cpp:1330
		ImCommandBatchTransformTextureBlendRender::Im2dVertex[4] lVertexList;

		// BrnCrashNavIconRenderer.cpp:1332
		float32_t lfEventStartX;

		// BrnCrashNavIconRenderer.cpp:1333
		float32_t lfEventStartY;

		// BrnCrashNavIconRenderer.cpp:1335
		float32_t lfThisIconHalfWidth;

		// BrnCrashNavIconRenderer.cpp:1336
		float32_t lfThisIconHalfHeight;

		MapTransform::Flatten(/* parameters */);
		MapTransform::MakeCoordSpaceFromRect(/* parameters */);
		MapTransform::Transform(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::operator-<VectorAxisW, VectorAxisY>(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::operator-<VectorAxisZ, VectorAxisX>(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		rw::math::vpu::Matrix33::Matrix33(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		MapTransform::MakeCoordSpaceFromRect(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		{
		}
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		MapTransform::MakeCoordSpaceFromAxes(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		{
		}
		{
		}
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		{
		}
		VecFloat<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		{
		}
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		{
		}
		{
		}
		{
		}
		{
		}
		{
		}
		rw::math::vpu::Vector4::GetX(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		MapTransform::Transform(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator><VectorAxisX>(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		{
		}
		{
		}
		rw::math::vpu::operator*(/* parameters */);
		{
			{
			}
		}
		{
		}
		{
		}
		Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		{
		}
	}
	GetActiveIconType(/* parameters */);
	{
		// BrnCrashNavIconRenderer.cpp:1353
		float32_t lfTimeNow;

		GuiCache::GetTime(/* parameters */);
		{
			// BrnCrashNavIconRenderer.cpp:1369
			float32_t lfProp;

			rw::math::vpu::Clamp(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::Min<float>(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::Lerp(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::Subtract(/* parameters */);
		}
	}
	rw::math::vpu::operator< <VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator><VectorAxisY>(/* parameters */);
	{
	}
	rw::math::vpu::operator< <VectorAxisW>(/* parameters */);
	{
	}
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	MapTransform::Transform(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	MapTransform::Transform(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	{
	}
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::operator*(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	{
		// BrnCrashNavIconRenderer.cpp:1375
		float32_t lfProp;

		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Max<float>(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Subtract(/* parameters */);
	}
	{
	}
	{
	}
}

void BrnGui::InGameMessageRenderer::DrawBackground(CgsGraphics::Im2dRenderBuffer *  lpIm2dRenderBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInGameMessageRenderer.cpp:1239
		ImCommandBatchTransformTextureBlendRender::Im2dVertex[4] lVertexList;

		// BrnInGameMessageRenderer.cpp:1247
		RGBA lBackgroundColour;

		// BrnInGameMessageRenderer.cpp:1255
		float lfTop;

		// BrnInGameMessageRenderer.cpp:1256
		float lfBottom;

		// BrnInGameMessageRenderer.cpp:1257
		float lfLeft;

		// BrnInGameMessageRenderer.cpp:1258
		float lfRight;

		rw::RGBA::SetAlpha(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	}
}

void rw::math::fpu::Matrix44AffineTemplate<float>::Matrix44AffineTemplate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::Vector4Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::operator=(const const Vector4Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::GetX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::GetY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA8::SetAlpha(uint8_t  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2dTransform::GetAspectCorrected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2dRenderBuffer::SetTransform(const const Im2dTransform &  lTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm2dRenderBuffer.h:161
		ImCommandSetTransform * lpCommand;

	}
}

void CgsGraphics::Im2dTransform::operator=(const const Im2dTransform &  lOther) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BoostBarRenderer::RenderShatteredBar(const const Vector4 &  lv4Rect, float32_t  lfTimeNow, const const rw::math::vpu::Vector4 &  lv4BaseColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostBarRenderer.cpp:1713
		float32_t lfChunkPerturbationX;

		// BrnBoostBarRenderer.cpp:1714
		float32_t lfChunkPerturbationY;

		// BrnBoostBarRenderer.cpp:1717
		const float32_t KF_SHARED_WIDTH_PROP;

		// BrnBoostBarRenderer.cpp:1718
		const float32_t KF_SHARED_HEIGHT_PROP;

		// BrnBoostBarRenderer.cpp:1721
		float32_t lfShardWidth;

		// BrnBoostBarRenderer.cpp:1722
		float32_t lfShardHeight;

		// BrnBoostBarRenderer.cpp:1726
		const int32_t KI_CHUNK_LOSS_NUM_VERTS;

		// BrnBoostBarRenderer.cpp:1727
		ImCommandBatchTransformTextureBlendRender::Im2dVertex[144] lVertexList;

		// BrnBoostBarRenderer.cpp:1731
		Matrix44Affine lm44ShardTransform;

		// BrnBoostBarRenderer.cpp:1732
		Vector4 lv4VertexPosition;

		// BrnBoostBarRenderer.cpp:1734
		float32_t lfShardLifetime;

		// BrnBoostBarRenderer.cpp:1735
		float32_t lfOffsetX;

		// BrnBoostBarRenderer.cpp:1736
		float32_t lfOffsetY;

		// BrnBoostBarRenderer.cpp:1737
		uint8_t luShardAlpha;

		// BrnBoostBarRenderer.cpp:1740
		int32_t liCurrentRow;

		// BrnBoostBarRenderer.cpp:1741
		int32_t liCurrentCol;

		// BrnBoostBarRenderer.cpp:1742
		int32_t liCurrentVertex;

		// BrnBoostBarRenderer.cpp:1743
		int32_t liCurrentShard;

	}
	{
		// BrnBoostBarRenderer.cpp:1751
		int32_t liCurrentSquare;

	}
	{
		// BrnBoostBarRenderer.cpp:1781
		Road::Vector3 lv3ShardCentre;

		// BrnBoostBarRenderer.cpp:1789
		Quaternion lqShardRotation;

		// BrnBoostBarRenderer.cpp:1792
		Road::Vector3 lv3ShardReposition;

		// BrnBoostBarRenderer.cpp:1796
		Matrix44Affine lm44ShardRotRepos;

	}
	CgsGui::ParticleSystem2d::GetRGBA(/* parameters */);
	renderengine::RGBA8::SetAlpha(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::GetY(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::fpu::Vector2Template<float>::GetY(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Set(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	CgsGui::ParticleSystem2d::GetRGBA(/* parameters */);
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::GetY(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	renderengine::RGBA8::SetAlpha(/* parameters */);
	rw::math::fpu::Vector2Template<float>::GetY(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Set(/* parameters */);
	CgsGui::ParticleSystem2d::GetRGBA(/* parameters */);
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::GetY(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	renderengine::RGBA8::SetAlpha(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:1878
		Road::Vector3 lv3ShardCentre;

		// BrnBoostBarRenderer.cpp:1886
		Quaternion lqShardRotation;

		// BrnBoostBarRenderer.cpp:1889
		Road::Vector3 lv3ShardReposition;

		// BrnBoostBarRenderer.cpp:1893
		Matrix44Affine lm44ShardRotRepos;

	}
	rw::math::vpu::operator*(/* parameters */);
	renderengine::RGBA8::SetAlpha(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	CgsGui::ParticleSystem2d::GetRGBA(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	CgsGui::ParticleSystem2d::GetRGBA(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Set(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	CgsGui::ParticleSystem2d::GetRGBA(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Set(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	renderengine::RGBA8::SetAlpha(/* parameters */);
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	renderengine::RGBA8::SetAlpha(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::SetTransform(/* parameters */);
	{
	}
	{
	}
	{
	}
}

void BrnGui::BoostBarRenderer::RenderQuad(const const rw::math::vpu::Vector4 &  lv4Rect, const const rw::math::vpu::Vector4 &  lv4Colour, const TextureState *  lpTextureState, const BlendState *  lpBlendState, const rw::math::vpu::Vector4  lvUvRect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostBarRenderer.cpp:1611
		ImCommandBatchTransformTextureBlendRender::Im2dVertex[4] lVertexList;

		CgsGui::ParticleSystem2d::GetRGBA(/* parameters */);
		rw::math::vpu::GetVector4_Zero(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisW>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisW>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
		rw::RGBA::RGBA(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
		CgsGraphics::Im2dRenderBuffer::SetTransform(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
}

void BrnGui::BoostBarRenderer::RenderDebugFireGlow(const const rw::math::vpu::Vector4 &  lv4FireRect, const const rw::math::vpu::Vector4 &  lv4FireColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostBarRenderer.cpp:2906
		float32_t lfGlowIntensity;

		// BrnBoostBarRenderer.cpp:2907
		Vector4 lv4GlowColour;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
	}
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Subtract(/* parameters */);
}

void CgsGraphics::Im2dRenderBuffer::PushBoostBarColours(Vector3  lv3OuterColour, Vector3  lv3InnerColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm2dRenderBuffer.h:246
		ImCommandPushBoostBarColours * lpCommand;

	}
}

void rw::math::vpu::operator+<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1318
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1319
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1321
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1322
			VectorIntrinsicUnion u;

		}
	}
}

void BrnGui::BoostBarRenderer::ShowDebugScreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostBarRenderer.cpp:2399
		const float32_t lfBoostbarWidth;

		// BrnBoostBarRenderer.cpp:2400
		const float32_t lfBoostbarHeight;

		// BrnBoostBarRenderer.cpp:2401
		const float32_t lfXOffset;

		// BrnBoostBarRenderer.cpp:2402
		const float32_t lfYOffset;

		// BrnBoostBarRenderer.cpp:2404
		float32_t lfCurrentCol;

		// BrnBoostBarRenderer.cpp:2405
		float32_t lfCurrentRow;

		// BrnBoostBarRenderer.cpp:2407
		Vector4 lv4BoostBarRect;

		// BrnBoostBarRenderer.cpp:2414
		CgsGraphics::Im2dRenderBuffer * lpIm2dRenderBuffer;

		rw::math::vpu::operator-<VectorAxisZ, VectorAxisX>(/* parameters */);
	}
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator-<VectorAxisW, VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::PushBoostBarColours(/* parameters */);
	{
	}
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	CgsGui::GuiEventTimeInfo::GetTime(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::PushBoostBarColours(/* parameters */);
	{
	}
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::PushBoostBarColours(/* parameters */);
	{
	}
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::PushBoostBarColours(/* parameters */);
	{
	}
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::PushBoostBarColours(/* parameters */);
	{
	}
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::PushBoostBarColours(/* parameters */);
	{
	}
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::PushBoostBarColours(/* parameters */);
	{
	}
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::PushBoostBarColours(/* parameters */);
	{
	}
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::PushBoostBarColours(/* parameters */);
	{
	}
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::PushBoostBarColours(/* parameters */);
	{
	}
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::PushBoostBarColours(/* parameters */);
	{
	}
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::PushBoostBarColours(/* parameters */);
	{
	}
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::PushBoostBarColours(/* parameters */);
	{
	}
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::PushBoostBarColours(/* parameters */);
	{
	}
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::PushBoostBarColours(/* parameters */);
	{
	}
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::PushBoostBarColours(/* parameters */);
	{
	}
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::PushBoostBarColours(/* parameters */);
	{
	}
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::PushBoostBarColours(/* parameters */);
	{
	}
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::PushBoostBarColours(/* parameters */);
	{
	}
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::PushBoostBarColours(/* parameters */);
	{
	}
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
}

void rw::math::vpu::operator-<VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1464
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1465
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1467
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1468
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisZ, VectorAxisY, VectorAxisZ, VectorAxisW>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y, VectorIntrinsicInParam  z, VectorIntrinsicInParam  w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:192
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_inline.h:193
			VectorIntrinsicUnion::VectorIntrinsic temp0;

			// vector_intrinsic_operation_inline.h:193
			VectorIntrinsicUnion::VectorIntrinsic temp1;

		}
	}
}

void BrnGui::BoostBarRenderer::SetBackground(CgsGraphics::Im2dRenderBuffer *  lpIm2dRenderBuffer, const rw::math::vpu::Vector4  lv4BackgroundRect, float32_t  lfBaseAlpha, float32_t  lfTimeNow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostBarRenderer.cpp:2207
		Vector4 lv4NormalBackgroundRect;

		// BrnBoostBarRenderer.cpp:2221
		Vector4 lv4BarColour;

		rw::math::vpu::GetVecFloat_One(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::vpu::GetVecFloat_Zero(/* parameters */);
		rw::math::vpu::Vector4::SetW(/* parameters */);
	}
	rw::math::vpu::operator-<VectorAxisZ>(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:2230
		Vector4 lv4MultiplierRect;

		// BrnBoostBarRenderer.cpp:2232
		Vector4 lv4UvPosition;

		// BrnBoostBarRenderer.cpp:2250
		Vector4 lv4Colour;

		Vector4<VectorAxisZ, VectorAxisY, VectorAxisZ, VectorAxisW>(/* parameters */);
		SetW<VectorAxisW>(/* parameters */);
	}
}

void CgsGraphics::Im2dTransform::GetDefault() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MainMapRenderer::ClearBackgroundFadeToMapEdges(CgsGraphics::Im2dRenderBuffer *  lpImRenderBuffer, const rw::math::vpu::Vector4  lv4ViewRect, uint32_t  luTextureCount, const rw::math::vpu::Matrix33 &  lm33MapToView, const rw::math::vpu::Matrix44 &  lm44WorldTransform, const rw::math::vpu::Matrix44 &  lm44ViewProjectionMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMainMapRenderer.cpp:628
		ImCommandBatchTransformTextureBlendRender::Im2dVertex[4] lVertexList;

		// BrnMainMapRenderer.cpp:629
		RGBA lTransparentBlack;

		// BrnMainMapRenderer.cpp:630
		RGBA lOpaqueBlack;

		// BrnMainMapRenderer.cpp:639
		uint32_t luTile;

		// BrnMainMapRenderer.cpp:640
		float32_t lfLeftMapEdge;

		// BrnMainMapRenderer.cpp:641
		float32_t lfRightMapEdge;

		rw::RGBA::RGBA(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
		CgsGraphics::Im2dRenderBuffer::SetTransform(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	}
	{
		// BrnMainMapRenderer.cpp:644
		const const BrnGui::SatNavTile::sTexture & lTexture;

		// BrnMainMapRenderer.cpp:645
		TextureState * lpTileTextureState;

	}
	{
		// BrnMainMapRenderer.cpp:649
		const const BrnGui::SatNavTile::sRect & lv4BBox;

		// BrnMainMapRenderer.cpp:651
		Vector2 lv2MapTopLeft;

		// BrnMainMapRenderer.cpp:652
		Vector2 lv2MapBottomRight;

		// BrnMainMapRenderer.cpp:654
		Vector2 lv2ViewTopLeft;

		// BrnMainMapRenderer.cpp:655
		Vector2 lv2ViewBottomRight;

	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	MapTransform::Transform(/* parameters */);
	{
	}
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	MapTransform::Transform(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	rw::RGBA::SetAlpha(/* parameters */);
	{
	}
	{
	}
}

void BrnGui::MainMapRenderer::ClearBackgroundFlatBlack(CgsGraphics::Im2dRenderBuffer *  lpImRenderBuffer, const rw::math::vpu::Vector4  lv4ViewRect, const rw::math::vpu::Matrix44 &  lm44WorldTransform, const rw::math::vpu::Matrix44 &  lm44ViewProjectionMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMainMapRenderer.cpp:570
		ImCommandBatchTransformTextureBlendRender::Im2dVertex[4] lVertexList;

		// BrnMainMapRenderer.cpp:581
		RGBA lColour;

		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::RGBA::RGBA(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
		CgsGraphics::Im2dRenderBuffer::SetTransform(/* parameters */);
	}
	rw::RGBA::SetAlpha(/* parameters */);
	{
	}
	{
	}
}

void BrnGui::SatNavRenderer::RenderSatNavIcon(float32_t  lfEventStartX, float32_t  lfThisIconHalfWidth, float32_t  lfEventStartY, float32_t  lfThisIconHalfHeight, BrnGui::SatNavRenderer::ESatNavIconType  leIconType, uint32_t  luEventTypeIndex, CgsGraphics::Im2dRenderBuffer *  lpRenderBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNavRenderer.cpp:1348
		ImCommandBatchTransformTextureBlendRender::Im2dVertex[4] lVertexList;

	}
}

void std::abs(float  _Left) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(const rw::math::vpu::Vector2  lVec) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:710
		float32_t lfX;

		// CgsStrStream.h:711
		float32_t lfY;

	}
}

void BrnGui::SatNavRenderer::RenderIconsForSatNav(CgsGraphics::Im2dRenderBuffer *  lpRenderBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNavRenderer.cpp:1017
		float32_t lfInvZoom;

		// BrnSatNavRenderer.cpp:1019
		uint32_t luIconIndex;

		// BrnSatNavRenderer.cpp:1021
		uint32_t luClosestIconIndex;

		// BrnSatNavRenderer.cpp:1022
		uint32_t luCurrentBurningRouteIconIndex;

		// BrnSatNavRenderer.cpp:1023
		uint32_t luNumRenderedIcons;

		// BrnSatNavRenderer.cpp:1024
		bool lbFiltered;

		// BrnSatNavRenderer.cpp:1026
		Vector3 lv3Position;

		// BrnSatNavRenderer.cpp:1027
		Vector2 lv2PositionFlattenedWorldSpace;

		// BrnSatNavRenderer.cpp:1028
		Vector2 lv2PositionPosScreenSpace;

		// BrnSatNavRenderer.cpp:1029
		Vector2 lv2PositionPosNormalised;

		// BrnSatNavRenderer.cpp:1030
		Vector3 lv3PlayerPos;

		// BrnSatNavRenderer.cpp:1032
		float32_t lfClosestIconMagnitudeSquared;

		// BrnSatNavRenderer.cpp:1034
		float32_t lfEventStartX;

		// BrnSatNavRenderer.cpp:1035
		float32_t lfEventStartY;

		// BrnSatNavRenderer.cpp:1037
		int32_t liIconTypeIndex;

		// BrnSatNavRenderer.cpp:1051
		float32_t[2] lafIconHalfWidth;

		// BrnSatNavRenderer.cpp:1052
		float32_t[2] lafIconHalfHeight;

		// BrnSatNavRenderer.cpp:1053
		float32_t[2] lafMiniIconHalfWidth;

		// BrnSatNavRenderer.cpp:1054
		float32_t[2] lafMiniIconHalfHeight;

	}
	{
		// BrnSatNavRenderer.cpp:1154
		bool lbShouldDisplayIcon;

		{
			// BrnSatNavRenderer.cpp:1177
			Vector2 lv2ScreenPixelPos;

			// BrnSatNavRenderer.cpp:1182
			Vector4 lv4SatNavRect;

		}
	}
	{
		// BrnSatNavRenderer.cpp:1085
		Vector2 lv2ScreenPixelPos;

		// BrnSatNavRenderer.cpp:1090
		Vector4 lv4SatNavRect;

	}
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	MapTransform::Transform(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	MapTransform::Transform(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisW, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	{
	}
	{
	}
	{
	}
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	{
		// BrnSatNavRenderer.cpp:1138
		float32_t lfMagnitudeSquared;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		std::abs(/* parameters */);
	}
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	MapTransform::Transform(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	MapTransform::Transform(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisW, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	{
	}
	{
	}
	{
	}
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	{
		// BrnSatNavRenderer.cpp:1215
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	RenderSatNavIcon(/* parameters */);
	RenderSatNavIcon(/* parameters */);
	RenderSatNavIcon(/* parameters */);
	RenderSatNavIcon(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	renderengine::RGBA8::SetAlpha(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	renderengine::RGBA8::SetAlpha(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
}

void BrnGui::CrashNavIconRenderer::RenderQuad(CgsGraphics::Im2dRenderBuffer *  lpRenderBuffer, const const Vector2Template<float> &  lv2TopLeft, const const Vector2Template<float> &  lv2BottomLeft, const const Vector2Template<float> &  lv2TopRight, const const Vector2Template<float> &  lv2BottomRight, const rw::math::vpu::Vector4  lv4Colour, const TextureState *  lpTextureState, const BlendState *  lpBlendState, const const Vector4Template<float> &  lvUvRect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavIconRenderer.cpp:2710
		ImCommandBatchTransformTextureBlendRender::Im2dVertex[4] lVertexList;

		CgsGui::ParticleSystem2d::GetRGBA(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Y(/* parameters */);
		rw::math::fpu::Vector4Template<float>::W(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Z(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::RGBA::RGBA(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	}
	{
	}
	{
	}
}

void rw::math::fpu::Vector2Template<float>::X() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavMapIcon::GetAlpha() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavMapIcon::GetRotation() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::operator*=<float>(const Vector2Template<float> &  a, const const Vector2Template<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavIconRenderer::RenderRivals(CgsGraphics::Im2dRenderBuffer *  lpRenderBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavIconRenderer.cpp:2407
		int32_t liIndex;

		// BrnCrashNavIconRenderer.cpp:2409
		Basic2dColouredVertex::Vector2 KV_DEVICE_SPACE_NORMALISER;

		// BrnCrashNavIconRenderer.cpp:2412
		Vector4 lv4PlayerIconUV;

		// BrnCrashNavIconRenderer.cpp:2417
		Vector4 lv4PlayerIconOverlayUV;

		// BrnCrashNavIconRenderer.cpp:2422
		float32_t lfThisIconHalfWidth;

		// BrnCrashNavIconRenderer.cpp:2423
		float32_t lfThisIconHalfHeight;

		// BrnCrashNavIconRenderer.cpp:2425
		const rw::math::vpu::Vector4 KV_PLAYER_COLOUR_YELLOW;

		// BrnCrashNavIconRenderer.cpp:2426
		const rw::math::vpu::Vector4 KV_PLAYER_COLOUR_RED;

		// BrnCrashNavIconRenderer.cpp:2427
		const rw::math::vpu::Vector4 KV_PLAYER_COLOUR_BLUE;

		// BrnCrashNavIconRenderer.cpp:2428
		const rw::math::vpu::Vector4 KV_PLAYER_COLOUR_PINK;

		// BrnCrashNavIconRenderer.cpp:2429
		const rw::math::vpu::Vector4 KV_PLAYER_COLOUR_GREEN;

		// BrnCrashNavIconRenderer.cpp:2430
		const rw::math::vpu::Vector4 KV_PLAYER_COLOUR_ORANGE;

		// BrnCrashNavIconRenderer.cpp:2431
		const rw::math::vpu::Vector4 KV_PLAYER_COLOUR_PURPLE;

		// BrnCrashNavIconRenderer.cpp:2432
		const rw::math::vpu::Vector4 KV_PLAYER_COLOUR_CYAN;

		// BrnCrashNavIconRenderer.cpp:2433
		const rw::math::vpu::Vector4 KV_PLAYER_COLOUR_WHITE;

		// BrnCrashNavIconRenderer.cpp:2434
		const rw::math::vpu::Vector4 KV_PLAYER_COLOUR_GRAY;

		// BrnCrashNavIconRenderer.cpp:2435
		const rw::math::vpu::Vector4 KV_PLAYER_COLOUR_BLACK;

	}
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	{
		// BrnCrashNavIconRenderer.cpp:2439
		Vector4 lv4TintColour;

		// BrnCrashNavIconRenderer.cpp:2440
		bool lbIsPlayer;

		// BrnCrashNavIconRenderer.cpp:2599
		Vector2 lv2PositionVpu;

		// BrnCrashNavIconRenderer.cpp:2600
		Basic2dColouredVertex::Vector2 lv2Position;

		// BrnCrashNavIconRenderer.cpp:2603
		Vector4 lv4QuadRect;

		// BrnCrashNavIconRenderer.cpp:2608
		Basic2dColouredVertex::Vector2 lv2TopLeft;

		// BrnCrashNavIconRenderer.cpp:2609
		Basic2dColouredVertex::Vector2 lv2BottomLeft;

		// BrnCrashNavIconRenderer.cpp:2610
		Basic2dColouredVertex::Vector2 lv2TopRight;

		// BrnCrashNavIconRenderer.cpp:2611
		Basic2dColouredVertex::Vector2 lv2BottomRight;

		GuiCache::GetTime(/* parameters */);
		rw::math::vpu::Vector4::SetW(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		{
			// BrnCrashNavIconRenderer.cpp:2615
			float32_t lfTimeNow;

			// BrnCrashNavIconRenderer.cpp:2616
			float KF_PLAYER_PULSE_TIME;

			// BrnCrashNavIconRenderer.cpp:2629
			Vector4 lv4PulseRect;

			// BrnCrashNavIconRenderer.cpp:2634
			Vector4 lv4PulseColour;

			GuiCache::GetTime(/* parameters */);
			{
				// BrnCrashNavIconRenderer.cpp:2620
				float32_t lfProp;

				rw::math::fpu::Clamp<float>(/* parameters */);
				rw::math::fpu::Min<float>(/* parameters */);
			}
			rw::math::vpu::Vector4::SetW(/* parameters */);
			rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
			rw::math::fpu::operator*=<float>(/* parameters */);
			rw::math::fpu::operator*=<float>(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::math::fpu::operator*=<float>(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			rw::math::fpu::operator*=<float>(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		}
		rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
		rw::math::fpu::operator*=<float>(/* parameters */);
		rw::math::fpu::operator*=<float>(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::operator*=<float>(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::operator*=<float>(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	}
	GuiCache::GetTime(/* parameters */);
}

void rw::math::fpu::operator+=<float>(const Vector2Template<float> &  a, const const Vector2Template<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavIconRenderer::RenderStartFinish(CgsGraphics::Im2dRenderBuffer *  lpRenderBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavIconRenderer.cpp:2313
		Basic2dColouredVertex::Vector2 KV_DEVICE_SPACE_NORMALISER;

		// BrnCrashNavIconRenderer.cpp:2315
		Basic2dColouredVertex::Vector2 lv2TopLeft;

		// BrnCrashNavIconRenderer.cpp:2316
		Basic2dColouredVertex::Vector2 lv2BottomLeft;

		// BrnCrashNavIconRenderer.cpp:2317
		Basic2dColouredVertex::Vector2 lv2TopRight;

		// BrnCrashNavIconRenderer.cpp:2318
		Basic2dColouredVertex::Vector2 lv2BottomRight;

		// BrnCrashNavIconRenderer.cpp:2320
		Vector4 lv4IconUV;

		// BrnCrashNavIconRenderer.cpp:2322
		float32_t lfThisIconHalfWidth;

		// BrnCrashNavIconRenderer.cpp:2323
		float32_t lfThisIconHalfHeight;

		// BrnCrashNavIconRenderer.cpp:2325
		Basic2dColouredVertex::Vector2 KV_START_FINISH_OFFSET;

		// BrnCrashNavIconRenderer.cpp:2327
		int32_t liStartFinishIndex;

	}
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	{
		// BrnCrashNavIconRenderer.cpp:2358
		Vector2 lv2PositionVpu;

		// BrnCrashNavIconRenderer.cpp:2359
		Basic2dColouredVertex::Vector2 lv2Position;

	}
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::operator*=<float>(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::operator*=<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::operator*=<float>(/* parameters */);
	rw::math::fpu::operator*=<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
}

extern void RoadSign() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern RoadSign & operator=(const const RoadSign &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MapTransform::Unflatten(const rw::math::vpu::Vector2  lv2In) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::operator*<float>(const const Vector2Template<float> &  vec, const const float &  scalar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// vector2_operation.h:85
	Vector2Template<float> & r;

	{
		// vector2_operation.h:85
		Vector2Template<float> r;

	}
}

void BrnGui::CrashNavIconRenderer::RenderRoadSign(CgsGraphics::Im2dRenderBuffer *  lpRenderBuffer, int32_t  liIconIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavIconRenderer.cpp:1890
		Basic2dColouredVertex::Vector2 KV_DEVICE_SPACE_NORMALISER;

		// BrnCrashNavIconRenderer.cpp:1892
		Basic2dColouredVertex::Vector2 KV_LARGE_SIGN_QUAD_HALF_SIZE;

		// BrnCrashNavIconRenderer.cpp:1893
		Basic2dColouredVertex::Vector2 KV_MID2_SIGN_QUAD_HALF_SIZE;

		// BrnCrashNavIconRenderer.cpp:1894
		Basic2dColouredVertex::Vector2 KV_MID1_SIGN_QUAD_HALF_SIZE;

		// BrnCrashNavIconRenderer.cpp:1895
		Basic2dColouredVertex::Vector2 KV_SMALL_SIGN_QUAD_HALF_SIZE;

		// BrnCrashNavIconRenderer.cpp:1897
		Basic2dColouredVertex::Vector2 KV_POST_QUAD_HALF_SIZE;

		// BrnCrashNavIconRenderer.cpp:1899
		Vector4 KV_GREEN_TEXT_COLOUR;

		// BrnCrashNavIconRenderer.cpp:1900
		Vector4 KV_RED_TEXT_COLOUR;

		// BrnCrashNavIconRenderer.cpp:1901
		Vector4 KV_SILVER_TEXT_COLOUR;

		// BrnCrashNavIconRenderer.cpp:1902
		Vector4 KV_GOLD_TEXT_COLOUR;

		// BrnCrashNavIconRenderer.cpp:1905
		Vector4 KV_GOLD_LARGE_UV;

		// BrnCrashNavIconRenderer.cpp:1906
		Vector4 KV_GOLD_MID1_UV;

		// BrnCrashNavIconRenderer.cpp:1907
		Vector4 KV_GOLD_MID2_UV;

		// BrnCrashNavIconRenderer.cpp:1908
		Vector4 KV_GOLD_SMALL_UV;

		// BrnCrashNavIconRenderer.cpp:1909
		Vector4 KV_RED_LARGE_UV;

		// BrnCrashNavIconRenderer.cpp:1910
		Vector4 KV_RED_MID1_UV;

		// BrnCrashNavIconRenderer.cpp:1911
		Vector4 KV_RED_MID2_UV;

		// BrnCrashNavIconRenderer.cpp:1912
		Vector4 KV_RED_SMALL_UV;

		// BrnCrashNavIconRenderer.cpp:1913
		Vector4 KV_GREEN_LARGE_UV;

		// BrnCrashNavIconRenderer.cpp:1914
		Vector4 KV_GREEN_MID1_UV;

		// BrnCrashNavIconRenderer.cpp:1915
		Vector4 KV_GREEN_MID2_UV;

		// BrnCrashNavIconRenderer.cpp:1916
		Vector4 KV_SIGN_POLE_UV;

		// BrnCrashNavIconRenderer.cpp:1917
		Vector4 KV_GREEN_SMALL_UV;

		// BrnCrashNavIconRenderer.cpp:1918
		Vector4 KV_SILVER_LARGE_UV;

		// BrnCrashNavIconRenderer.cpp:1919
		Vector4 KV_SILVER_MID1_UV;

		// BrnCrashNavIconRenderer.cpp:1920
		Vector4 KV_SILVER_MID2_UV;

		// BrnCrashNavIconRenderer.cpp:1921
		Vector4 KV_SILVER_SMALL_UV;

		// BrnCrashNavIconRenderer.cpp:1922
		Vector4 KV_SHEEN_UV;

		// BrnCrashNavIconRenderer.cpp:1925
		RoadSign lRoadSign;

		// BrnCrashNavIconRenderer.cpp:1926
		RoadSignIcon lRoadSignIcon;

		// BrnCrashNavIconRenderer.cpp:1927
		int32_t liRoadSignIconIndex;

		// BrnCrashNavIconRenderer.cpp:1959
		Vector4 lv4SignUVRect;

		// BrnCrashNavIconRenderer.cpp:1960
		Vector4 lv4PostUVRect;

		// BrnCrashNavIconRenderer.cpp:1961
		Vector4 lv4TextColour;

		// BrnCrashNavIconRenderer.cpp:1964
		Basic2dColouredVertex::Vector2 lv2TopLeft;

		// BrnCrashNavIconRenderer.cpp:1965
		Basic2dColouredVertex::Vector2 lv2BottomLeft;

		// BrnCrashNavIconRenderer.cpp:1966
		Basic2dColouredVertex::Vector2 lv2TopRight;

		// BrnCrashNavIconRenderer.cpp:1967
		Basic2dColouredVertex::Vector2 lv2BottomRight;

		// BrnCrashNavIconRenderer.cpp:1969
		Vector2 lv2ScreenPosVpu;

		// BrnCrashNavIconRenderer.cpp:1970
		Basic2dColouredVertex::Vector2 lv2ScreenPos;

		// BrnCrashNavIconRenderer.cpp:1984
		Basic2dColouredVertex::Vector2 lv2PoleOffset;

		// BrnCrashNavIconRenderer.cpp:2208
		Basic2dColouredVertex::Vector2 lv2RoadSignOffset;

		// BrnCrashNavIconRenderer.cpp:2235
		float32_t KF_FONTFACTOR;

		// BrnCrashNavIconRenderer.cpp:2236
		float32_t KF_CHAR_SPACING;

		// BrnCrashNavIconRenderer.cpp:2247
		Basic2dColouredVertex::Vector2 lv2TopLeftBounds;

		// BrnCrashNavIconRenderer.cpp:2248
		Basic2dColouredVertex::Vector2 lv2BottomRightBounds;

	}
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	RoadSign(/* parameters */);
	operator=(/* parameters */);
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	MapTransform::Unflatten(/* parameters */);
	rw::math::vpu::GetVector4_One(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::fpu::operator*=<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::operator*=<float>(/* parameters */);
	rw::math::fpu::operator*=<float>(/* parameters */);
	rw::math::fpu::operator*=<float>(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	rw::math::vpu::GetVector4_One(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::operator*=<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::operator*=<float>(/* parameters */);
	rw::math::fpu::operator*=<float>(/* parameters */);
	rw::math::fpu::operator*=<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	CgsGraphics::TextObject::SetText(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	CgsGui::ParticleSystem2d::GetRGBA(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	CgsGraphics::TextObject::SetStringWidth(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::SetTransform(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	CgsGraphics::TextObject::SetText(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	CgsGui::ParticleSystem2d::GetRGBA(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	CgsGraphics::TextObject::SetStringWidth(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::SetTransform(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	{
		// BrnCrashNavIconRenderer.cpp:1883
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::operator*<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	{
	}
	{
	}
}

extern void RoadSign(const const RoadSign &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavIconRenderer::RenderRoadSigns(CgsGraphics::Im2dRenderBuffer *  lpRenderBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavIconRenderer.cpp:1850
		int32_t liRoadIndex;

		{
			// BrnCrashNavIconRenderer.cpp:1854
			RoadSign lRoadSign;

		}
		RoadSign(/* parameters */);
	}
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
}

void BrnGui::CrashNavIconRenderer::RenderDriveThrough(CgsGraphics::Im2dRenderBuffer *  lpRenderBuffer, int32_t  liIconIndex, float32_t  lfZoomFactor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavIconRenderer.cpp:1696
		Basic2dColouredVertex::Vector2 KV_DEVICE_SPACE_NORMALISER;

		// BrnCrashNavIconRenderer.cpp:1698
		Vector4 KV_BODYSHOP_UV_RECT;

		// BrnCrashNavIconRenderer.cpp:1699
		Vector4 KV_GAS_STATION_UV_RECT;

		// BrnCrashNavIconRenderer.cpp:1700
		Vector4 KV_JUNKYARD_UV_RECT;

		// BrnCrashNavIconRenderer.cpp:1701
		Vector4 KV_PAINT_SHOP_UV_RECT;

		// BrnCrashNavIconRenderer.cpp:1703
		float32_t KF_DRIVETHROUGH_HALFWIDTH_UNSELECTED;

		// BrnCrashNavIconRenderer.cpp:1704
		float32_t KF_DRIVETHROUGH_HALFHEIGHT_UNSELECTED;

		// BrnCrashNavIconRenderer.cpp:1706
		Basic2dColouredVertex::Vector2 KV_DRIVETHROUGH_OFFSET;

		// BrnCrashNavIconRenderer.cpp:1708
		Vector4 lv4UVRect;

		// BrnCrashNavIconRenderer.cpp:1746
		Vector2 lv2PositionVpu;

		// BrnCrashNavIconRenderer.cpp:1747
		Basic2dColouredVertex::Vector2 lv2Position;

		// BrnCrashNavIconRenderer.cpp:1751
		float32_t lfIconHalfWidth;

		// BrnCrashNavIconRenderer.cpp:1752
		float32_t lfIconHalfHeight;

		// BrnCrashNavIconRenderer.cpp:1817
		Vector4 lv4DrawRect;

		rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
		rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	}
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::fpu::operator*=<float>(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	{
		// BrnCrashNavIconRenderer.cpp:1764
		float32_t lfTimeNow;

		// vec_float.h:12
		typedef float VecFloat;

		// BrnCrashNavIconRenderer.cpp:1766
		VecFloat KF_DRIVETHROUGH_SCALE_OFFSET;

		GuiCache::GetTime(/* parameters */);
		{
			// BrnCrashNavIconRenderer.cpp:1790
			float32_t lfProp;

			rw::math::fpu::operator+=<float>(/* parameters */);
			rw::math::fpu::Clamp<float>(/* parameters */);
			rw::math::fpu::Min<float>(/* parameters */);
		}
	}
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector4Template<float>::operator=(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	rw::math::fpu::operator+=<float>(/* parameters */);
	{
		// BrnCrashNavIconRenderer.cpp:1782
		float32_t lfProp;

		rw::math::fpu::Clamp<float>(/* parameters */);
		rw::math::fpu::operator+=<float>(/* parameters */);
		rw::math::fpu::Min<float>(/* parameters */);
	}
}

void BrnGui::CrashNavIconRenderer::RenderDriveThroughs(CgsGraphics::Im2dRenderBuffer *  lpRenderBuffer, float32_t  lfZoomFactor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavIconRenderer.cpp:1596
		int32_t liIconIndex;

		{
			// BrnCrashNavIconRenderer.cpp:1662
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CrashNavMapIcon::operator=(/* parameters */);
		MapIconBrnBase::operator=(/* parameters */);
		TextField::operator=(/* parameters */);
		CrashNavMapIcon::operator=(/* parameters */);
		MapIconBrnBase::operator=(/* parameters */);
		TextField::operator=(/* parameters */);
	}
	{
		// BrnCrashNavIconRenderer.cpp:1651
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::CrashNavIconRenderer::IsIgnoredIcon(uint32_t  luEventID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavIconRenderer.h:538
		int32_t liIndex;

	}
}

void BrnGui::MapIconManager::GetEventIconManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavIconRenderer::RenderIcons(CgsGraphics::Im2dRenderBuffer *  lpRenderBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavIconRenderer.cpp:1127
		float32_t lfInvZoom;

		// BrnCrashNavIconRenderer.cpp:1128
		float32_t lfZoomLevel;

		// BrnCrashNavIconRenderer.cpp:1130
		uint32_t luIconIndex;

		// BrnCrashNavIconRenderer.cpp:1131
		uint32_t luNumIcons;

		// BrnCrashNavIconRenderer.cpp:1132
		uint32_t luEventID;

		// BrnCrashNavIconRenderer.cpp:1133
		BrnGui::CrashNavIconRenderer::ECrashNavIconType leIconType;

		// BrnCrashNavIconRenderer.cpp:1134
		bool lbFiltered;

		// BrnCrashNavIconRenderer.cpp:1135
		bool lbIsMiniIcon;

		// BrnCrashNavIconRenderer.cpp:1136
		Vector3 lv3Position;

		// BrnCrashNavIconRenderer.cpp:1137
		uint32_t luEventTypeIndex;

		// BrnCrashNavIconRenderer.cpp:1140
		int32_t liIconTypeIndex;

		// BrnCrashNavIconRenderer.cpp:1143
		float32_t[2] lafIconHalfWidth;

		// BrnCrashNavIconRenderer.cpp:1144
		float32_t[2] lafIconHalfHeight;

		// BrnCrashNavIconRenderer.cpp:1145
		float32_t[2] lafMiniIconHalfWidth;

		// BrnCrashNavIconRenderer.cpp:1146
		float32_t[2] lafMiniIconHalfHeight;

		// BrnCrashNavIconRenderer.cpp:1158
		BrnGui::EventIconManager::EventIcon2D[175] la2DEventIcons;

		// BrnCrashNavIconRenderer.cpp:1159
		int32_t liNum2DEventIcons;

		// BrnCrashNavIconRenderer.cpp:1161
		RGBA8 lAlphaedColour;

	}
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	{
		// BrnCrashNavIconRenderer.cpp:1170
		float32_t lfCurrentTime;

		GuiCache::GetTime(/* parameters */);
	}
	IsIgnoredIcon(/* parameters */);
	{
		// BrnCrashNavIconRenderer.cpp:1208
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	renderengine::RGBA8::SetAlpha(/* parameters */);
	{
		// BrnCrashNavIconRenderer.cpp:1184
		float32_t lfPropAlpha;

		renderengine::RGBA8::SetAlpha(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::Max<float>(/* parameters */);
	}
	{
		// BrnCrashNavIconRenderer.cpp:1255
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	renderengine::RGBA8::SetAlpha(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::EndRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AllocateCommand(/* parameters */);
	{
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::BeginRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AllocateCommand(/* parameters */);
	{
	}
}

void BrnGui::CreditsTextRenderer::RenderComponent(ImRendererSet *  lpImRenderers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCreditsTextRenderer.cpp:309
		int32_t liIndex;

		// BrnCreditsTextRenderer.cpp:339
		bool _lbAdditive;

		CgsGraphics::Im2dRenderBuffer::SetTransform(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		CgsGraphics::TextObject::SetText(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		CgsGraphics::TextObject::SetText(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		CgsGraphics::TextObject::SetText(/* parameters */);
		rw::RGBA::RGBA(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		CgsGraphics::TextObject::SetText(/* parameters */);
		rw::RGBA::RGBA(/* parameters */);
	}
	{
	}
	{
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(const RasterizerState *  lpRasterizerState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:925
		ImCommandSetStateRasterizer * lpCommand;

	}
}

void BrnGui::CrashNavIconRenderer::RenderComponent(ImRendererSet *  lpImRenderers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavIconRenderer.cpp:557
		CgsGraphics::Im2dRenderBuffer * lpIm2dRenderBuffer;

	}
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::SetTransform(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	{
	}
	{
	}
}

extern void Im2dTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<452>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<64u>::SetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessageRenderer::RenderComponent(ImRendererSet *  lpImRenderers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInGameMessageRenderer.cpp:790
		BrnGameState::GameStateModuleIO::EGameModeType leGameMode;

		// BrnInGameMessageRenderer.cpp:791
		bool lbInFreeburn;

		// BrnInGameMessageRenderer.cpp:795
		bool lbNeedtoDisplayAutoSaveMessage;

		// BrnInGameMessageRenderer.cpp:803
		bool lbValidMode;

	}
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator==(/* parameters */);
	GuiCache::GetGameMode(/* parameters */);
	{
		// BrnInGameMessageRenderer.cpp:812
		float32_t lfTimeStep;

		// BrnInGameMessageRenderer.cpp:822
		CgsGraphics::Im2dRenderBuffer * lpIm2dRenderBuffer;

		// BrnInGameMessageRenderer.cpp:831
		Im2dTransform lTransform;

		GuiCache::GetTimeStep(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		CgsGraphics::Im2dTransform::Construct(/* parameters */);
		Vector4<VectorAxisX, VectorAxisY, VectorAxisX, VectorAxisY>(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		CgsGraphics::Im2dTransform::TransformByAspectRatio(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::fpu::Matrix33Template<float>::SetX(/* parameters */);
		rw::math::fpu::Matrix33Template<float>::SetZ(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisW>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::fpu::Matrix33Template<float>::SetY(/* parameters */);
		operator=(/* parameters */);
		rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
		rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
		CgsGraphics::Im2dTransform::SetTransform(/* parameters */);
		CgsGraphics::Im2dRenderBuffer::SetTransform(/* parameters */);
		{
		}
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	}
	{
		// BrnInGameMessageRenderer.cpp:879
		GuiEventTickerStatus lStatusMessage;

		// BrnInGameMessageRenderer.cpp:883
		GuiAudioTriggerEvent lAudioTrigger;

		AddGuiEvent<BrnGui::GuiEventTickerStatus>(/* parameters */);
		AddGuiEvent<BrnGui::GuiAudioTriggerEvent>(/* parameters */);
	}
	{
		// BrnInGameMessageRenderer.cpp:899
		float32_t lfRevProgression;

		rw::math::fpu::Clamp<float>(/* parameters */);
		rw::math::fpu::Min<float>(/* parameters */);
	}
	{
		// BrnInGameMessageRenderer.cpp:953
		GuiAudioTriggerEvent lAudioTrigger;

		AddGuiEvent<BrnGui::GuiAudioTriggerEvent>(/* parameters */);
	}
	{
		// BrnInGameMessageRenderer.cpp:1012
		bool lbNewMessages;

	}
	{
		// BrnInGameMessageRenderer.cpp:1043
		float32_t lfProgression;

		rw::math::fpu::Clamp<float>(/* parameters */);
		rw::math::fpu::Max<float>(/* parameters */);
		{
			// BrnInGameMessageRenderer.cpp:1059
			GuiEventTickerStatus lStatusMessage;

			AddGuiEvent<BrnGui::GuiEventTickerStatus>(/* parameters */);
		}
	}
	{
		// BrnInGameMessageRenderer.cpp:997
		const UnicodeBuffer::CgsUtf8 * lpNextIntervalMessage;

	}
	CgsContainers::BitArray<64u>::SetAll(/* parameters */);
	{
		// BrnInGameMessageRenderer.cpp:998
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(const DepthStencilState *  lpDepthStencilState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:875
		ImCommandSetStateDepthStencil * lpCommand;

	}
}

void BrnGui::BlackBarRenderer::RenderComponent(ImRendererSet *  lpImRenderers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBlackBarRenderer.cpp:159
		CgsGraphics::Im2dRenderBuffer * lpIm2dRenderBuffer;

		// BrnBlackBarRenderer.cpp:160
		ImCommandBatchTransformTextureBlendRender::Im2dVertex[4] lVertexList;

	}
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::SetTransform(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
}

void CgsContainers::Array<BrnGui::BankingScore,6u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGui::BankingScore,6u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGui::BankingScore,6u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::vpu::IsZero(const rw::math::vpu::Vector3  v, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsZeroV3(VectorIntrinsicInParam  v, VectorIntrinsicInParam  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:310
		bool ret;

		{
			// vector_intrinsic_operation_inline.h:311
			VectorIntrinsicUnion::VectorIntrinsic comparisonValue;

			{
				// vector_intrinsic_operation_inline.h:311
				const VectorIntrinsicUnion::VectorIntrinsic mask;

				// vector_intrinsic_operation_inline.h:311
				const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

			}
		}
	}
}

void rw::math::vpu::operator>=<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:775
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:777
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:779
		bool ret;

		{
			// vec_float_operation_inline.h:778
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator<=<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:934
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:936
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:938
		bool ret;

		{
			// vec_float_operation_inline.h:937
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator>=<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:775
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:777
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:779
		bool ret;

		{
			// vec_float_operation_inline.h:778
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator<=<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:934
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:936
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:938
		bool ret;

		{
			// vec_float_operation_inline.h:937
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::_asmSwizzleStore<VectorAxisX, VectorAxisX>(VectorIntrinsicInParam  dest, VectorIntrinsicInParam  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:457
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_inline.h:458
			VectorIntrinsicUnion::VectorIntrinsic permuteControl;

		}
	}
}

void rw::math::vpu::operator*<VectorAxisY>(const VecFloat  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1547
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1548
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(const VecFloat  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:298
		VectorIntrinsicUnion::VectorIntrinsic permuteControl;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator-=(const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:392
		VectorIntrinsicUnion::VectorIntrinsic r;

		// vec_float_type_inline.h:392
		VectorIntrinsicUnion::VectorIntrinsic bVI;

	}
}

void rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(VectorIntrinsicInParam  dest, VectorIntrinsicInParam  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:457
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_inline.h:458
			VectorIntrinsicUnion::VectorIntrinsic permuteControl;

		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(float  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::SetFloat(float  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:240
		VectorIntrinsicUnion::VectorIntrinsic vec;

		{
			// vec_float_type_inline.h:241
			VectorIntrinsicUnion u;

		}
		{
			// vec_float_type_inline.h:242
			VectorIntrinsicUnion::VectorIntrinsic permuteControl;

		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(float  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::SetFloat(float  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:240
		VectorIntrinsicUnion::VectorIntrinsic vec;

		{
			// vec_float_type_inline.h:241
			VectorIntrinsicUnion u;

		}
		{
			// vec_float_type_inline.h:242
			VectorIntrinsicUnion::VectorIntrinsic permuteControl;

		}
	}
}

void rw::math::vpu::operator-<VectorAxisX>(const const float &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-<VectorAxisY>(const const float &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::operator+=(const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:344
		VectorIntrinsicUnion::VectorIntrinsic r;

		// vec_float_type_inline.h:344
		VectorIntrinsicUnion::VectorIntrinsic bVI;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:344
		VectorIntrinsicUnion::VectorIntrinsic r;

		// vec_float_type_inline.h:344
		VectorIntrinsicUnion::VectorIntrinsic bVI;

	}
}

void CgsContainers::Array<BrnGui::BankingScore,6u>::EraseFast(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::AboveCarRenderer::RenderBankingScores(ImRendererSet *  lpImRenderers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAboveCarRenderer.cpp:1008
		CgsGraphics::Im2dRenderBuffer * lpIm2dRenderBuffer;

		// BrnAboveCarRenderer.cpp:1009
		const Camera * lpCamera;

		// BrnAboveCarRenderer.cpp:1011
		UnicodeBuffer::CgsUtf8[32] lacBuffer;

		// BrnAboveCarRenderer.cpp:1014
		SafeResourceHandle<CgsResource::Font> lpOldFont;

		// BrnAboveCarRenderer.cpp:1033
		float32_t lfNearClipPlane;

		// BrnAboveCarRenderer.cpp:1036
		uint32_t liIndex;

		// BrnAboveCarRenderer.cpp:1037
		uint32_t liEndIndex;

		GuiCache::GetGameMode(/* parameters */);
	}
	BrnGameState::GameStateModuleIO::IsShowtimeGameMode(/* parameters */);
	CgsContainers::Array<BrnGui::BankingScore,6u>::Clear(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
	CgsResource::ResourceHandle::CreateFromHandle(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	CgsGraphics::Camera::SetNearClipPlane(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	CgsGraphics::Camera::GetNearClipPlane(/* parameters */);
	CgsContainers::Array<BrnGui::BankingScore,6u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnGui::BankingScore,6u>::GetLength(/* parameters */);
	CgsResource::SafeResourceHandle<CgsResource::Font>::operator=(/* parameters */);
	CgsGraphics::Camera::SetNearClipPlane(/* parameters */);
	{
		// BrnAboveCarRenderer.cpp:1050
		Im2dTransform lTransform;

		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		CgsGraphics::Im2dRenderBuffer::SetTransform(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		CgsGraphics::Im2dTransform::Construct(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		{
		}
		rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		{
			// BrnAboveCarRenderer.cpp:1067
			BankingScore * lpScore;

			// BrnAboveCarRenderer.cpp:1068
			float32_t lfTargetX;

			// BrnAboveCarRenderer.cpp:1069
			float32_t lfTargetY;

			// BrnAboveCarRenderer.cpp:1070
			float32_t lfBankingSpeed;

			// BrnAboveCarRenderer.cpp:1145
			float32_t lfDiffX;

			// BrnAboveCarRenderer.cpp:1146
			float32_t lfDiffY;

			// BrnAboveCarRenderer.cpp:1147
			float32_t lfDistanceSq;

			// BrnAboveCarRenderer.cpp:1148
			float32_t lfAlpha;

			// BrnAboveCarRenderer.cpp:1149
			uint8_t lu8Alpha;

			rw::math::vpu::IsZero(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			{
				// BrnAboveCarRenderer.cpp:1117
				UnicodeBuffer::CgsUtf8[32] laScoreString;

				// BrnAboveCarRenderer.cpp:1120
				char[32] lacComboBonus;

				// BrnAboveCarRenderer.cpp:1124
				const UnicodeBuffer::CgsUtf8 * lpComboString;

			}
			rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
			rw::math::fpu::Clamp<float>(/* parameters */);
			rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			CgsGraphics::TextObject::SetText(/* parameters */);
			CgsResource::SafeResourceHandle<CgsResource::Font>::operator->(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
			rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
			CgsGraphics::TextObject::SetStringWidth(/* parameters */);
			rw::RGBA::SetAlpha(/* parameters */);
			rw::math::fpu::Abs<float>(/* parameters */);
			rw::math::fpu::Abs<float>(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisY>::operator+=(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisX>::operator+=(/* parameters */);
			rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
			rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
		}
		CgsContainers::Array<BrnGui::BankingScore,6u>::operator[](/* parameters */);
		{
			// BrnAboveCarRenderer.cpp:1088
			bool lbInFrontOfCamera;

			CgsGraphics::Camera::GetViewProjectionMatrix(/* parameters */);
			rw::math::vpu::Matrix44::Matrix44(/* parameters */);
			rw::math::vpu::operator>=<VectorAxisX>(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
			{
			}
			{
			}
		}
		{
			// BrnAboveCarRenderer.cpp:1131
			char[32] lacScore;

			// BrnAboveCarRenderer.cpp:1135
			const UnicodeBuffer::CgsUtf8 * lpSecondsString;

		}
		CgsContainers::Array<BrnGui::BankingScore,6u>::EraseFast(/* parameters */);
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
	}
	rw::math::vpu::operator<=<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator>=<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator<=<VectorAxisY>(/* parameters */);
	operator*=<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::_asmSwizzleStore<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator-=(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::_asmSwizzleStore<VectorAxisY, VectorAxisY>(/* parameters */);
	{
	}
	{
	}
	{
	}
}

void rw::math::vpu::operator+=(const Vector4 &  v, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Interpolator<float32_t>::IsFinished(float32_t  lfTimeNow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisW>(VecFloatRef<VectorAxisW> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1573
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1574
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
}

void BrnGui::Interpolator<float32_t>::IsActive(float32_t  lfTimeNow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+<VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1318
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1319
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1321
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1322
			VectorIntrinsicUnion u;

		}
	}
}

void BrnGui::DeltaInterpolator::SetDelta(float32_t  lfDeltaPerSec, float32_t  lfTimeNow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::DeltaInterpolator::GetCurrentValue(float32_t  lfTimeNow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostBarRenderer.h:148
		float32_t lfElapsedTime;

	}
}

void rw::math::vpu::operator+(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*=(const Vector4 &  v, float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic floatVec;

		{
			// vector4_operation_inline.h:487
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator-<VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1430
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1431
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
}

void CgsGui::BillboardRenderer::GetNumFrames() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1657
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1658
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1658
				VectorIntrinsicUnion u;

			}
		}
	}
}

void BrnGui::BoostBarRenderer::RenderComponent(ImRendererSet *  lpImRenderers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBoostBarRenderer.cpp:970
		CgsGraphics::Im2dRenderBuffer * lpIm2dRenderBuffer;

		// BrnBoostBarRenderer.cpp:976
		float32_t lfTimeNow;

		// BrnBoostBarRenderer.cpp:981
		float32_t lfElapsedTime;

		// BrnBoostBarRenderer.cpp:996
		Vector4 lv4BoostBarRect;

		// BrnBoostBarRenderer.cpp:1011
		float32_t lfChunkGainShakeElapsedTime;

		// BrnBoostBarRenderer.cpp:1042
		float32_t lfBaseAlpha;

	}
	{
		// BrnBoostBarRenderer.cpp:949
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::SetTransform(/* parameters */);
	Interpolator<float32_t>::IsFinished(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:1087
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnBoostBarRenderer.cpp:1063
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Interpolator<float32_t>::GetCurrentValue(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:1098
		Vector4 lv4AlphaWhite;

		// BrnBoostBarRenderer.cpp:1109
		Vector4 lv4BackgroundRect;

		// BrnBoostBarRenderer.cpp:1111
		float32_t lfMaxBoost;

		// BrnBoostBarRenderer.cpp:1114
		float32_t lfBackgroundWidth;

		// BrnBoostBarRenderer.cpp:1120
		float32_t lfBoostBarHeight;

		// BrnBoostBarRenderer.cpp:1121
		float32_t lfBoostBarYcentre;

		// BrnBoostBarRenderer.cpp:1443
		Vector4 lv4BackgroundEndCapRect;

		// BrnBoostBarRenderer.cpp:1448
		Vector4 lv4EndCapColour;

		rw::math::vpu::GetVector4_One(/* parameters */);
		rw::math::vpu::Vector4::SetW(/* parameters */);
		Interpolator<float32_t>::IsActive(/* parameters */);
		rw::math::vpu::operator-<VectorAxisZ, VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-<VectorAxisW, VectorAxisY>(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::Vector4::SetZ(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator+<VectorAxisW, VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		Interpolator<float32_t>::IsActive(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
			// BrnBoostBarRenderer.cpp:1129
			float32_t lfChunkWidth;

			// BrnBoostBarRenderer.cpp:1130
			float32_t lfChunkXpos;

			// BrnBoostBarRenderer.cpp:1132
			Vector4 lv4ChunkRect;

			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			VecFloat<VectorAxisZ>(/* parameters */);
			Interpolator<float32_t>::GetCurrentValue(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisW>::operator float(/* parameters */);
			rw::math::vpu::Clamp(/* parameters */);
			rw::math::vpu::Lerp(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::Min<float>(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::Lerp(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::Mult(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::Vector4::Vector4(/* parameters */);
		}
		Interpolator<float32_t>::IsFinished(/* parameters */);
		CgsGraphics::Im2dRenderBuffer::PushBoostBarColours(/* parameters */);
		{
		}
		{
			// BrnBoostBarRenderer.cpp:1171
			BillboardInfo lBillboard;

			// BrnBoostBarRenderer.cpp:1174
			Vector4 lv4FireRect;

			// BrnBoostBarRenderer.cpp:1177
			float lfFireWidth;

			// BrnBoostBarRenderer.cpp:1196
			Vector2 smv2BoostingFlameSize;

			// BrnBoostBarRenderer.cpp:1308
			Vector2 lv2GrowFireballSize;

			// BrnBoostBarRenderer.cpp:1309
			float32_t lfSlamGainElapsedTime;

			// BrnBoostBarRenderer.cpp:1338
			float32_t lfEarnFlameProp;

			Interpolator<float32_t>::GetCurrentValue(/* parameters */);
			rw::math::vpu::operator-<VectorAxisZ, VectorAxisX>(/* parameters */);
			rw::math::vpu::operator/(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
			rw::math::vpu::Clamp(/* parameters */);
			rw::math::vpu::Min<float>(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::Vector4::SetZ(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::Lerp(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			{
			}
			DeltaInterpolator::SetDelta(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			DeltaInterpolator::SetDelta(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::Vector2::Vector2(/* parameters */);
			DeltaInterpolator::GetCurrentValue(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			{
				// BrnBoostBarRenderer.cpp:1204
				Vector2 lv2BoostingFlameSize;

				// BrnBoostBarRenderer.cpp:1206
				Vector4 lv4BoostingFireColour;

				// BrnBoostBarRenderer.cpp:1218
				Vector4 lv4BoostingFlameClipRect;

				rw::math::vpu::VecFloatRefIndex::operator*=(/* parameters */);
				rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
				rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
				rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
				CgsGui::ParticleSystem2d::GetRGBA(/* parameters */);
				rw::math::vpu::operator+(/* parameters */);
				CgsContainers::Array<CgsGui::BillboardInfo,32u>::Clear(/* parameters */);
				rw::math::vpu::Clamp(/* parameters */);
				rw::math::vpu::Clamp(/* parameters */);
				rw::math::vpu::operator-<VectorAxisZ, VectorAxisX>(/* parameters */);
				rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
				rw::math::vpu::GetVecFloat_Half(/* parameters */);
				rw::math::vpu::operator+(/* parameters */);
				rw::math::vpu::Vector2::Vector2(/* parameters */);
				rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				rw::math::vpu::operator+(/* parameters */);
				rw::math::vpu::VecFloat::VecFloat(/* parameters */);
				rw::RGBA::RGBA(/* parameters */);
				CgsGui::BillboardInfo::Construct(/* parameters */);
				rw::math::vpu::Vector2::Vector2(/* parameters */);
				CgsContainers::Array<CgsGui::BillboardInfo,32u>::Append(/* parameters */);
				rw::math::vpu::GetVecFloat_One(/* parameters */);
				VecFloat<VectorAxisX>(/* parameters */);
				rw::math::vpu::Vector4::Vector4(/* parameters */);
				rw::math::vpu::Vector4::Vector4(/* parameters */);
				CgsContainers::Array<CgsGui::BillboardInfo,32u>::operator[](/* parameters */);
				CgsContainers::Array<CgsGui::BillboardInfo,32u>::GetLength(/* parameters */);
			}
			Interpolator<float32_t>::IsValid(/* parameters */);
			Interpolator<float32_t>::IsActive(/* parameters */);
			{
				// BrnBoostBarRenderer.cpp:1236
				VecFloat lvfTransitionMaskX;

				// BrnBoostBarRenderer.cpp:1238
				Vector4 lv4RedMaskRect;

				// BrnBoostBarRenderer.cpp:1243
				Vector4 lv4InactiveColour;

				// BrnBoostBarRenderer.cpp:1253
				Vector4 v4GlowColour;

				// BrnBoostBarRenderer.cpp:1261
				const float32_t sfTransitionMaskXoffset;

				// BrnBoostBarRenderer.cpp:1262
				Vector4 lv4ActiveMaskRect;

				VecFloat<VectorAxisX>(/* parameters */);
				VecFloat<VectorAxisZ>(/* parameters */);
				Interpolator<float32_t>::GetCurrentValue(/* parameters */);
				rw::math::vpu::Lerp(/* parameters */);
				rw::math::vpu::GetVecFloat_One(/* parameters */);
				rw::math::vpu::VecFloat::VecFloat(/* parameters */);
				rw::math::vpu::VecFloat::VecFloat(/* parameters */);
				rw::math::vpu::Lerp(/* parameters */);
				rw::math::vpu::VecFloat::VecFloat(/* parameters */);
				rw::math::vpu::Mult(/* parameters */);
				rw::math::vpu::operator*=(/* parameters */);
				rw::math::vpu::Vector4::SetX(/* parameters */);
				rw::math::vpu::Vector4::SetW(/* parameters */);
				rw::math::vpu::Add(/* parameters */);
				rw::math::vpu::Vector4::Vector4(/* parameters */);
				rw::math::vpu::Vector4::SetW(/* parameters */);
				rw::math::vpu::Vector4::Vector4(/* parameters */);
				rw::math::vpu::VecFloat::VecFloat(/* parameters */);
				rw::math::vpu::Vector4::Vector4(/* parameters */);
				rw::math::vpu::Vector4::SetX(/* parameters */);
				rw::math::vpu::operator+(/* parameters */);
				rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY, VectorAxisZ, VectorAxisW>(/* parameters */);
				rw::math::vpu::operator-<VectorAxisZ>(/* parameters */);
			}
		}
	}
	Interpolator<float32_t>::Invalidate(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:1349
		VecFloat lfEarnFlameYpos;

		// BrnBoostBarRenderer.cpp:1350
		VecFloat lfEarnFlameHeight;

		// BrnBoostBarRenderer.cpp:1352
		ImCommandBatchTransformTextureBlendRender::Im2dVertex[4] lVertexList;

		// BrnBoostBarRenderer.cpp:1363
		VecFloat lfEarnFlameAlpha;

		// BrnBoostBarRenderer.cpp:1365
		Vector4 sv4EarnFireColour;

		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:1426
		Vector4 lv4FlameRect;

		// BrnBoostBarRenderer.cpp:1428
		Vector4 sv4EarnFireColour;

	}
	rw::math::vpu::GetVector4_One(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:1299
		float32_t lfGlowIntensity;

		// BrnBoostBarRenderer.cpp:1300
		Vector4 lv4GlowColour;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::GetVecFloat_One(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Mult(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:1313
		float32_t lfStartXpos;

		// BrnBoostBarRenderer.cpp:1314
		float32_t lfEndXpos;

		// BrnBoostBarRenderer.cpp:1315
		float32_t lfCurrentXPos;

		// BrnBoostBarRenderer.cpp:1327
		Vector4 lv4EndCapRect;

		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		Interpolator<float32_t>::GetCurrentValue(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		CgsGui::ParticleSystem2d::GetRGBA(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::Min<float>(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		CgsContainers::Array<CgsGui::BillboardInfo,32u>::Clear(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisW>::operator float(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Lerp(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Mult(/* parameters */);
		rw::RGBA::RGBA(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Mult(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsContainers::Array<CgsGui::BillboardInfo,32u>::Append(/* parameters */);
		rw::math::vpu::GetVecFloat_One(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		CgsContainers::Array<CgsGui::BillboardInfo,32u>::operator[](/* parameters */);
		CgsContainers::Array<CgsGui::BillboardInfo,32u>::GetLength(/* parameters */);
	}
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisW, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisW, VectorAxisY>(/* parameters */);
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	CgsNumeric::Random::RandomFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	CgsGui::ParticleSystem2d::GetRGBA(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
	{
	}
	{
		// BrnBoostBarRenderer.cpp:1392
		Vector4 lv4UvPosition;

		// BrnBoostBarRenderer.cpp:1404
		Vector4 lv4MultiplierRect;

		rw::math::vpu::operator-<VectorAxisZ>(/* parameters */);
		VecFloat<VectorAxisW>(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
	}
	VecFloat<VectorAxisZ>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::GetVector4_One(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	VecFloat<VectorAxisW>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ>(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:1028
		float32_t lfDamping;

		// BrnBoostBarRenderer.cpp:1031
		float32_t lfShakeX;

		// BrnBoostBarRenderer.cpp:1032
		float32_t lfShakeY;

		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::Min<float>(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		rw::math::fpu::Lerp<float>(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
	}
	{
		// BrnBoostBarRenderer.cpp:1018
		float32_t lfDamping;

		// BrnBoostBarRenderer.cpp:1019
		float32_t lfShakeX;

		rw::math::vpu::Sin(/* parameters */);
		vec_sel(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpeq(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		vec_add(/* parameters */);
		vec_and(/* parameters */);
		vec_cts(/* parameters */);
		vec_ctf(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_sel(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
	}
	{
		// BrnBoostBarRenderer.cpp:1002
		float32_t lfShakeX;

		// BrnBoostBarRenderer.cpp:1003
		float32_t lfShakeY;

		rw::math::vpu::operator+=(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		CgsNumeric::Random::RandomFloat(/* parameters */);
		CgsNumeric::Random::AddRandomFloatToBuffer(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
	}
	{
		// BrnBoostBarRenderer.cpp:1152
		Vector4 lv4BrokenBarShardsClipRect;

		// BrnBoostBarRenderer.cpp:1155
		float32_t lfChunkWidth;

		// BrnBoostBarRenderer.cpp:1156
		Vector4 lv4OriginalChunkRect;

		rw::math::vpu::operator-<VectorAxisZ, VectorAxisX>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+<VectorAxisZ>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
		{
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Interpolator<float32_t>::Invalidate(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:1073
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::VecFloatRefIndex::operator*=(/* parameters */);
	rw::math::vpu::_asmSwizzleStore(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::operator*<VectorAxisW>(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	rw::math::vpu::Vector4::SetX(/* parameters */);
	{
		// BrnBoostBarRenderer.cpp:1080
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
}

void renderengine::ClearColorParameters::ClearColorParameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ClearColorParameters::SetColor(const const RGBA32 &  rgba) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA32::Red() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA32::Green() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA32::Blue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1607
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1608
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:1610
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1610
				VectorIntrinsicUnion u;

			}
		}
	}
}

void renderengine::RGBA32::Alpha() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisW>(VecFloatRef<VectorAxisW> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1607
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1608
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:1610
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1610
				VectorIntrinsicUnion u;

			}
		}
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetClear(ClearColorParameters  lClearParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1082
		ImCommandSetClear * lpCommand;

	}
}

void BrnGui::MainMapRenderer::RenderComponent(ImRendererSet *  lpImRenderers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMainMapRenderer.cpp:400
		uint8_t lu8Alpha;

		// BrnMainMapRenderer.cpp:405
		CgsGraphics::Im2dRenderBuffer * lpImRenderBuffer;

		// BrnMainMapRenderer.cpp:429
		Matrix44 lm44WorldTransform;

		// BrnMainMapRenderer.cpp:431
		Camera lCamera;

		// BrnMainMapRenderer.cpp:433
		Matrix44 lm44ViewProjectionMatrix;

		// BrnMainMapRenderer.cpp:435
		ImCommandBatchTransformTextureBlendRender::Im2dVertex[4] lVertexList;

		// BrnMainMapRenderer.cpp:437
		const const rw::math::vpu::Vector4 & lv4ViewRect;

		// BrnMainMapRenderer.cpp:438
		Matrix33 lm33ViewSpace;

		// BrnMainMapRenderer.cpp:440
		Matrix33 lm33MapSpace;

		// BrnMainMapRenderer.cpp:441
		Matrix33 lm33MapToView;

		// BrnMainMapRenderer.cpp:447
		uint32_t luTextureCount;

	}
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	MapTransform::MakeCoordSpaceFromRect(/* parameters */);
	MapTransform::MakeTransform(/* parameters */);
	MapTransform::MakeCoordSpaceFromRect(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisX>(/* parameters */);
	MapTransform::MakeCoordSpaceFromAxes(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisW, VectorAxisY>(/* parameters */);
	{
	}
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	{
	}
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	{
	}
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::SetTransform(/* parameters */);
	{
		// BrnMainMapRenderer.cpp:511
		uint32_t luTile;

		{
			// BrnMainMapRenderer.cpp:513
			const const BrnGui::SatNavTile::sTexture & lTexture;

			// BrnMainMapRenderer.cpp:514
			TextureState * lpTileTextureState;

			{
				// BrnMainMapRenderer.cpp:518
				const const BrnGui::SatNavTile::sRect & lv4BBox;

				// BrnMainMapRenderer.cpp:520
				Vector2 lv2MapTopLeft;

				// BrnMainMapRenderer.cpp:521
				Vector2 lv2MapBottomRight;

				// BrnMainMapRenderer.cpp:523
				Vector2 lv2ViewTopLeft;

				// BrnMainMapRenderer.cpp:524
				Vector2 lv2ViewBottomRight;

				// BrnMainMapRenderer.cpp:526
				Vector4 lv4TileRect;

				CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
			}
		}
		MapTransform::Transform(/* parameters */);
		Vector4<VectorAxisX, VectorAxisY, VectorAxisX, VectorAxisY>(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		MapTransform::Transform(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		{
		}
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
		Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	}
	{
		// BrnMainMapRenderer.cpp:492
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	{
		// BrnMainMapRenderer.cpp:481
		const RGBA32 KC_BACKGROUNDCOLOUR;

		// BrnMainMapRenderer.cpp:482
		ClearColorParameters lClearColor;

		renderengine::RGBA32::RGBA32(/* parameters */);
		renderengine::ClearColorParameters::SetColor(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetClear(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
		}
		rw::math::vpu::GetVecFloat_One(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
	{
	}
}

void rw::math::vpu::GetVector2_YAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector2_XAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector2_One() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetColorWriteEnable(renderengine::RenderTargetState::TargetID  id, bool  red, bool  green, bool  blue, bool  alpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetBlendEnable(bool  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetSource(renderengine::RenderTargetState::TargetID, renderengine::BlendState::Input  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetOperation(renderengine::RenderTargetState::TargetID, renderengine::BlendState::Operation  op) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetDestination(renderengine::RenderTargetState::TargetID, renderengine::BlendState::Input  dest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavRenderer::RenderComponent(ImRendererSet *  lpImRenderers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNavRenderer.cpp:489
		CgsGraphics::Im2dRenderBuffer * lpIm2dRenderBuffer;

		// BrnSatNavRenderer.cpp:511
		Vector3 lv3CarPosition;

		// BrnSatNavRenderer.cpp:512
		float lfMapOrientation;

		// BrnSatNavRenderer.cpp:513
		float lfCarSpeedMph;

		// BrnSatNavRenderer.cpp:518
		Vector3[4] lv3WorldPos;

		// BrnSatNavRenderer.cpp:530
		Matrix33 lm33CarSpace;

		// BrnSatNavRenderer.cpp:531
		Matrix33 lm33WorldToView;

		// BrnSatNavRenderer.cpp:532
		Matrix33 lm33NormalisedToView;

		// BrnSatNavRenderer.cpp:533
		Vector2[4] lv2TexturePos;

		// BrnSatNavRenderer.cpp:540
		ImCommandBatchTransformTextureBlendRender::Im2dVertex[4] lVertexList;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	MapTransform::SetZoomedWorldRect(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	MapTransform::Flatten(/* parameters */);
	MapTransform::Flatten(/* parameters */);
	MapTransform::Flatten(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Matrix33::operator=(/* parameters */);
	Vector4<VectorAxisX, VectorAxisY, VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Inverse(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	MapTransform::SetZoomedViewportRect(/* parameters */);
	{
	}
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	MapTransform::MakeCoordSpaceFromRect(/* parameters */);
	rw::math::vpu::Matrix33::operator=(/* parameters */);
	rw::math::vpu::operator-<VectorAxisW, VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	MapTransform::MakeCoordSpaceFromAxes(/* parameters */);
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	{
	}
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	{
	}
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	{
	}
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	{
	}
	{
	}
	rw::math::vpu::Matrix33::operator=(/* parameters */);
	{
		{
		}
	}
	MapTransform::Transform(/* parameters */);
	rw::math::vpu::GetVector2_YAxis(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	rw::math::vpu::GetVector2_XAxis(/* parameters */);
	{
	}
	MapTransform::Transform(/* parameters */);
	{
	}
	MapTransform::Transform(/* parameters */);
	MapTransform::Transform(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	MapTransform::Transform(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	{
		// BrnSatNavRenderer.cpp:543
		int i;

		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	}
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::SetTransform(/* parameters */);
	{
	}
	{
		// BrnSatNavRenderer.cpp:571
		Parameters lTextureStateParams;

	}
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		// BrnSatNavRenderer.cpp:497
		const RGBA32 KC_BACKGROUNDCOLOUR;

		// BrnSatNavRenderer.cpp:498
		ClearColorParameters lClearColor;

		renderengine::RGBA32::RGBA32(/* parameters */);
		renderengine::ClearColorParameters::SetColor(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetClear(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnSatNavRenderer.cpp:587
		Parameters lBlendStateParams;

		renderengine::BlendState::Parameters::Parameters(/* parameters */);
		renderengine::BlendState::Parameters::SetBlendEnable(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		renderengine::BlendState::Parameters::SetColorWriteEnable(/* parameters */);
		renderengine::BlendState::Parameters::SetSource(/* parameters */);
		renderengine::BlendState::Parameters::SetOperation(/* parameters */);
		renderengine::BlendState::Parameters::SetDestination(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	{
		// BrnSatNavRenderer.cpp:606
		Parameters lTextureStateParams;

		renderengine::TextureState::Parameters::SetTexture(/* parameters */);
		renderengine::TextureState::Parameters::Parameters(/* parameters */);
		renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
		renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
		renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
		renderengine::RGBA8::RGBA8(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	renderengine::TextureState::Parameters::SetTexture(/* parameters */);
	renderengine::TextureState::Parameters::Parameters(/* parameters */);
	renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
	renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
}

void rw::GetDefaultAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CustomMeshRenderer::RenderComponent(ImRendererSet *  lpImRenderers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCustomMeshRenderer.cpp:210
		CgsGraphics::Im2dRenderBuffer * lpIm2dRenderBuffer;

	}
	{
		// BrnCustomMeshRenderer.cpp:219
		TextureState * pTextureState;

		{
			// BrnCustomMeshRenderer.cpp:222
			Parameters lTextureStateParams;

			// BrnCustomMeshRenderer.cpp:230
			Resource TextureStateResource;

		}
		CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
		CgsGraphics::Im2dRenderBuffer::SetTransform(/* parameters */);
		{
		}
	}
	renderengine::TextureState::Parameters::Parameters(/* parameters */);
	renderengine::TextureState::Parameters::SetTexture(/* parameters */);
	renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
	rw::GetDefaultAllocator(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	{
	}
	{
	}
}

void CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<16384,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<16384,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
}

void CgsModule::VariableEventQueue<16384,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::VariableEventQueue<16384,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[161] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

		GetEventPaddingSize(/* parameters */);
		OutputQueueContents(/* parameters */);
		{
			// CgsVariableEventQueue.h:464
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<32768,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<32768,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<32768,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
}

void CgsModule::VariableEventQueue<32768,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<32768,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::VariableEventQueue<32768,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[161] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

		GetEventPaddingSize(/* parameters */);
		OutputQueueContents(/* parameters */);
		{
			// CgsVariableEventQueue.h:464
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnResource::GameDataIO::InputBuffer::GetRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModuleIO.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::IOBuffer::IsBufferLockedForWriting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::RequestInterface<32768>::AcquireResource(BaseEventReceiverQueue *  lpEventReceiverQueue, int32_t  liUserEventId, int32_t  liPoolId, const char *  lpcResourceName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataRequestQueue.h:962
		AcquireResourceRequest lRequest;

	}
}

extern void AcquireResourceRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PoolEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ID::ID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceRequest::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, int32_t  liPoolId, const char *  lpcResourceId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceIOEvents.h:1646
		ID lId;

	}
}

void CgsResource::ID::Construct(const RwChar *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceRequest::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, int32_t  liPoolId, ID  lResourceId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::PoolEvent::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::PoolEvent::SetUser(BaseEventReceiverQueue *  lpUser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::PoolEvent::SetEventId(int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::PoolEvent::SetPoolId(int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceRequest::SetResourceId(ID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceIO::ResourceRequestQueue<32768>::AcquireResource(const const AcquireResourceRequest &  lRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:355
		CgsModule::BaseEventReceiverQueue::CBufferEntry * lpBufferEntry;

	}
}

void CgsResource::Events::PoolEvent::GetEventId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceResponse::GetHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::operator!=(const const ResourceHandle &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetMipFilter(renderengine::SamplerState::FilterMode  filter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetAddressW(renderengine::SamplerState::AddressingMode  addressMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiOptionsBrightnessContrastPostFxControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<531>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsDev::PerfMonCpu::StopMonitor(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetState(const RasterizerState *  lpRasterizerState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:925
		ImCommandSetStateRasterizer * lpCommand;

	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetState(const DepthStencilState *  lpDepthStencilState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:875
		ImCommandSetStateDepthStencil * lpCommand;

	}
}

void renderengine::BlendState::Parameters::SetAlphaTestEnable(bool  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetAlphaTestReference(uint32_t  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetAlphaTestFunction(renderengine::BlendState::Function  func) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetState(const BlendState *  lpBlendState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:850
		ImCommandSetStateBlend * lpCommand;

	}
}

void BrnGui::GuiCache::IsOnline() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::IsActiveRaceCarIndexUsed(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.h:3741
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGuiCache.h:3742
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::GuiCache::GetPlayerActiveRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::IsRaceCarCrashing(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.h:3721
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGuiCache.h:3722
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::GuiCache::IsActiveRaceCarConnecting(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.h:3759
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGuiCache.h:3760
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::GuiCache::IsActiveRaceCarDisconnected(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.h:3777
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGuiCache.h:3778
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::GuiCache::GetOnlinePlayerInCarSelect(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetRaceCarPosition(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.h:3685
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGuiCache.h:3686
		CgsDev::StrStream lStrStream;

	}
}

void CgsGraphics::Camera::GetFovVertical() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::AboveCarRenderer::RenderComponent(ImRendererSet *  lpImRenderers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAboveCarRenderer.cpp:503
		CgsGraphics::Im3dRenderBuffer * lpIm3dRenderBuffer;

		// BrnAboveCarRenderer.cpp:504
		Camera * lpCamera;

		CgsResource::SafeResourceHandle<CgsResource::Font>::operator==(/* parameters */);
		CgsResource::SafeResourceHandle<CgsResource::Font>::operator==(/* parameters */);
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetState(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetState(/* parameters */);
		{
			// BrnAboveCarRenderer.cpp:514
			Parameters lBlendStateParams;

		}
		CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetState(/* parameters */);
		CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::SetState(/* parameters */);
	}
	{
		// BrnAboveCarRenderer.cpp:535
		EActiveRaceCarIndex leActiveRaceCarIndex;

		{
			// BrnAboveCarRenderer.cpp:572
			Vector3 lv3RivalPos;

			// BrnAboveCarRenderer.cpp:573
			float32_t lfObjectDist;

			// BrnAboveCarRenderer.cpp:575
			const InGamePlayerStatusData * lpPlayerInfo;

			// BrnAboveCarRenderer.cpp:601
			const float32_t KF_LOD_DIST;

			// BrnAboveCarRenderer.cpp:602
			const float32_t KF_ONE_DIV_LOD_DIST;

			// BrnAboveCarRenderer.cpp:603
			float32_t lfLodProp;

			// BrnAboveCarRenderer.cpp:607
			float32_t lfFov;

			// BrnAboveCarRenderer.cpp:608
			float32_t lfFovFactor;

			GuiCache::IsActiveRaceCarIndexUsed(/* parameters */);
		}
	}
	{
		// BrnAboveCarRenderer.cpp:643
		const float32_t KF_MIN_FONT_SIZE;

		// BrnAboveCarRenderer.cpp:644
		const float32_t KF_MAX_FONT_SIZE;

		// BrnAboveCarRenderer.cpp:645
		float32_t lfFontHeight;

		// BrnAboveCarRenderer.cpp:646
		Vector4 lv4RenderingRect;

	}
	operator++(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GuiCache::IsRaceCarCrashing(/* parameters */);
	GuiCache::IsActiveRaceCarConnecting(/* parameters */);
	GuiCache::IsActiveRaceCarDisconnected(/* parameters */);
	GuiCache::GetOnlinePlayerInCarSelect(/* parameters */);
	GuiCache::GetRaceCarPosition(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	GuiCache::GetOnlinePlayerInfo(/* parameters */);
	rw::math::fpu::Sin(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	rw::RGBA::SetAlpha(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Subtract(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	CgsGraphics::TextObject::SetText(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::GetFloat(/* parameters */);
	CgsGraphics::TextObject::SetStringWidth(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::GetFloat(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	renderengine::BlendState::Parameters::Parameters(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestFunction(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestReference(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::BlendState::Parameters::SetSource(/* parameters */);
	renderengine::BlendState::Parameters::SetDestination(/* parameters */);
	renderengine::BlendState::Parameters::SetOperation(/* parameters */);
	renderengine::BlendState::Parameters::SetBlendEnable(/* parameters */);
	renderengine::BlendState::Parameters::SetAlphaTestEnable(/* parameters */);
	renderengine::BlendState::Parameters::SetColorWriteEnable(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GuiCache::GetEventPositionOfRaceCar(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GuiCache::GetOpponentsInEvent(/* parameters */);
	CgsGraphics::TextObject::SetText(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::GetFloat(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::GetFloat(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	CgsGraphics::TextObject::SetStringWidth(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator-=(/* parameters */);
	rw::math::vpu::_asmSwizzleStore(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator-=(/* parameters */);
	rw::math::vpu::_asmSwizzleStore(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
	{
	}
}

void CgsGui::GuiComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavComponent::RecvEvent(const CgsModule::Event *  lpEvent, int32_t  liEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNav.cpp:499
		const GuiEventShowHideSatNav * lpShowHideEvent;

	}
	{
		// BrnSatNav.cpp:464
		const GuiEventUpdateSatNav * lpSatNavInfo;

		GuiCache::GetPlayerInfo(/* parameters */);
	}
	{
		// BrnSatNav.cpp:485
		const GuiEventSatNavParameters * lpSatNavParams;

	}
	{
		// BrnSatNav.cpp:510
		const GuiEventAptTrigger * lpAptTrigger;

	}
	{
		// BrnSatNav.cpp:458
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::SatNavComponent::LoadResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNav.cpp:544
		Texture2D * lpNewTexture;

	}
	{
		// BrnSatNav.cpp:542
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

extern void GuiEventSetTracker() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TrackerInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::GetIconType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEventTypeDefs.h:1874
		BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType leIconType;

	}
}

void BrnGui::SatNavComponent::SetRoamingRouteInfo(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *  lpStartIcon, const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *  lpEndIcon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNav.cpp:584
		GuiEventSetTracker lSetTrackerEvent;

	}
	GuiEventSetTracker(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
	{
		// BrnSatNav.cpp:578
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::GuiCache::IsInHighDef() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MainMapComponent::Construct(StateInterface *  lpStateInterface, BrnGui::MainMapComponent::MainMapParameterBundle *  lpDataBundle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMainMap.cpp:82
		Vector2 lv2PaddedTopLeft;

		// BrnMainMap.cpp:83
		Vector2 lv2PaddedBottomRight;

		// BrnMainMap.cpp:86
		Vector2 lv2DisplayTopLeft;

		// BrnMainMap.cpp:87
		Vector2 lv2DisplayBottomRight;

	}
	CgsGui::StateInterface::GetAccessPointers(/* parameters */);
	CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	MapTransform::Transform(/* parameters */);
	{
	}
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	{
	}
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	Set<VectorAxisX, VectorAxisY, VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	MapTransform::Transform(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	{
	}
	rw::math::vpu::operator*(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	{
	}
	{
		// BrnMainMap.cpp:65
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnMainMap.cpp:66
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<65536,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<65536,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<65536,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
}

void CgsModule::VariableEventQueue<65536,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<65536,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::VariableEventQueue<65536,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[161] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

		GetEventPaddingSize(/* parameters */);
		OutputQueueContents(/* parameters */);
		{
			// CgsVariableEventQueue.h:464
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

extern void GuiEventRenderMainMap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiOutViewState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEventWrapper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventRenderMainMap,41>::SetRawEvent(const GuiEventRenderMainMap &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<221>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<41>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MainMapComponent::Update(const rw::math::vpu::Vector2  lv2WorldCentre) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMainMap.cpp:169
		Vector2 lv2ZoomedWorldCentre;

		// BrnMainMap.cpp:170
		Vector2 lv2OffsetWorldCentre;

		// BrnMainMap.cpp:171
		Vector2 lv2PositionedWorldCentre;

		// BrnMainMap.cpp:173
		Vector2 lv2PaddedTopLeft;

		// BrnMainMap.cpp:174
		Vector2 lv2PaddedBottomRight;

		// BrnMainMap.cpp:178
		Vector2 lv2PaddedWorldTopLeft;

		// BrnMainMap.cpp:179
		Vector2 lv2PaddedWorldBottomRight;

		// BrnMainMap.cpp:181
		Vector4 lv4PaddedWorldRect;

	}
	MapTransform::Transform(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::operator-<VectorAxisW, VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	MapTransform::Transform(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	MapTransform::MakeCoordSpaceFromRect(/* parameters */);
	{
	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	{
	}
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	{
	}
	MapTransform::MakeCoordSpaceFromAxes(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	Vector4<VectorAxisX, VectorAxisY, VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	MapTransform::Transform(/* parameters */);
	{
	}
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	MapTransform::Transform(/* parameters */);
	MapTransform::Transform(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	{
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		{
		}
	}
	{
	}
	{
	}
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	MapTransform::SetZoomedWorldRect(/* parameters */);
	{
	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Matrix33::operator=(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	MapTransform::SetZoomedViewportRect(/* parameters */);
	rw::math::vpu::Inverse(/* parameters */);
	Vector4<VectorAxisX, VectorAxisY, VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	{
	}
	rw::math::vpu::Matrix33::operator=(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	{
		{
			{
			}
		}
	}
	MapTransform::MakeCoordSpaceFromRect(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	{
	}
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	{
	}
	{
		// BrnMainMap.cpp:192
		GuiEventRenderMainMap lMainMapRenderMessage;

		OutputViewState<BrnGui::GuiEventRenderMainMap>(/* parameters */);
	}
	{
		// BrnMainMap.cpp:203
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::MapIconManager::SetIsDisplayingEvent(bool  lbIsDisplayingEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MapIconManager::SetRotateSatNav(bool  lbRotateSatNav) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MapIconManager::SetIconSize(BrnGui::MapIconManager::IconSizeMode  leIconMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEventRenderSatNav() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventRenderSatNav,41>::SetRawEvent(const GuiEventRenderSatNav &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<210>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSatNav.cpp:226
		BrnGui::MapIconManager::OwnerId lPreviousId;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	GuiCache::GetMapIconManager(/* parameters */);
	MapIconManager::SetIsDisplayingEvent(/* parameters */);
	MapIconManager::SetIconSize(/* parameters */);
	MapIconManager::SetRotateSatNav(/* parameters */);
	GuiCache::GetPlayerInfo(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	OutputViewState<BrnGui::GuiEventRenderSatNav>(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnSatNav.cpp:231
		char[128] lacText;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnSatNav.cpp:312
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsGui::GuiEventWrapper<BrnGui::GuiAudioTriggerEvent,40>::SetRawEvent(const GuiAudioTriggerEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<40>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MainMapComponent::SetZoom(BrnGui::MainMapComponent::ZoomFactor  leZoomFactor, float32_t  lfZoomLevelForCustom, bool  lbFullyZoomInNow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMainMap.cpp:454
		float32_t lfZoomScaleFactor;

		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator*=(/* parameters */);
		rw::math::vpu::Vector4::operator[](/* parameters */);
		{
		}
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
		rw::math::vpu::_asmSwizzleStore(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		{
		}
	}
	{
		// BrnMainMap.cpp:444
		GuiAudioTriggerEvent lAudioTrigger;

		OutputGuiEvent<BrnGui::GuiAudioTriggerEvent>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiAudioTriggerEvent> >(/* parameters */);
	}
	{
		// BrnMainMap.cpp:438
		GuiAudioTriggerEvent lAudioTrigger;

		OutputGuiEvent<BrnGui::GuiAudioTriggerEvent>(/* parameters */);
	}
}

void BrnGui::CrashNavMapIcon::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		// BrnSatNavIcon.cpp:147
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnSatNavIcon.cpp:146
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnFlapt::TextFieldRef::SetInvalid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavMapIcon::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	{
		// BrnSatNavIcon.cpp:292
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnSatNavIcon.cpp:291
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::MainMapComponent::RecvEvent(const CgsModule::Event *  lpEvent, int32_t  lEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMainMap.cpp:239
		const GuiEventShowHideSatNav * lpShowHideMap;

	}
	{
		// BrnMainMap.cpp:233
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnFlapt::MovieClipRef::SetPosition(const rw::math::vpu::Vector2  lPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptMovieClipRef.h:285
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::SatNavMapIcon::SetPosition(const rw::math::vpu::Vector2  lv2Position) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::operator!=(/* parameters */);
	BrnFlapt::MovieClipRef::SetPosition(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnFlapt::MovieClipRef::SetRotation(const float32_t  lfRotation) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptMovieClipRef.h:496
		float32_t lfCosRotation;

		// BrnFlaptMovieClipRef.h:497
		float32_t lfSinRotation;

		{
			// BrnFlaptMovieClipRef.h:494
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnGui::SatNavMapIcon::SetRotation(float32_t  lfRotationInRadians) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnFlapt::MovieClipRef::SetRotation(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

::::KF_ASPECTRATIO_WIDESCREEN = [63, 227, 142, 57];

::::KF_ASPECTRATIO_STANDARD = [63, 170, 170, 171];

::::KF_ASPECTRATIO_SQUARE = [63, 128, 0, 0];

::::KF_DEFAULT_FOVHORIZONTAL = [63, 201, 15, 219];

::::KF_DEFAULT_ASPECTRATIO = [63, 227, 142, 57];

::::KF_DEFAULT_NEARCLIPPLANE = [61, 204, 204, 205];

::::KF_DEFAULT_FARCLIPPLANE = [68, 122, 0, 0];

::::KF_DEFAULT_DEPTHOFFIELD = [63, 128, 0, 0];

::::KI_NETWORK_COMPRESSED_PICTURE_FORMAT = 1433534630;

::::KI_NETWORK_PHOTO_FORMAT = 1433536677;

::::K_GAMER_PICTURE_FORMAT = 1433536677;

::::K_NETWORK_PERF_CHANNEL = 8;

::::K_NETWORK2_PERF_CHANNEL = 9;

::::K_NETWORK3_PERF_CHANNEL = 18;

::::KU_INVALID_LANDMARK_INDEX = -1;

::::KF_GRAVITY = [65, 28, 245, 195];

::::KE_PHYSICS_PERFMON_PAGE = 6;

::::KF_CORONA_OFFSET = [63, 0, 0, 0];

CgsInput::KF_BUTTONDOWNTHRESHOLD = [61, 204, 204, 205];

BrnReplays::KF_REPLAY_START_TIME = [65, 112, 0, 0];

BrnReplays::KF_REPLAY_LENGTH = [65, 160, 0, 0];

BrnReplays::KAC_STREAM_MAGIC_NUMBER = "REPLAY ";

CgsNumeric::KU_RANDOM_DEFAULT_SEED = -1881117246;

CgsSceneManager::KF_DEFAULT_MIN_PADDING = [61, 204, 204, 205];

CgsSceneManager::KF_DEFAULT_MAX_PADDING = [64, 0, 0, 0];

CgsSceneManager::KU16_INVALID_ENTITY_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INSTANCE_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INDEX = -1;

BrnPhysics::Vehicle::kfVehicleDefaultAngularDrag = [55, 39, 197, 172];

BrnPhysics::Vehicle::kfVehicleDefaultLinearDrag = [55, 39, 197, 172];

BrnPhysics::Vehicle::kfVehicleDefaultMaxLinearDisplacement = [68, 250, 0, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxAngularDisplacement = [63, 0, 0, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxLinearVelocity = [71, 234, 96, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxAngularVelocity = [65, 240, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultAngularDrag = [0, 0, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultLinearDrag = [0, 0, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultMaxLinearDisplacement = [68, 250, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultMaxAngularDisplacement = [64, 160, 0, 0];

BrnPhysics::Vehicle::krMPS2MPH = [64, 15, 41, 247];

BrnPhysics::Vehicle::krMPH2MPS = [62, 228, 226, 109];

BrnPhysics::Vehicle::KF_STICK_AFTERTOUCH_MODIFIER = [62, 128, 0, 0];

BrnPhysics::Vehicle::KF_STUCK_IN_COLLISION_TEST_INTERVAL = [64, 160, 0, 0];

BrnAI::KX_SECTION_FLAG_AI_INTERSTATE_EXIT = -128;

BrnAI::KF_MAX_TURN_ANGLE = [62, 178, 184, 194];

BrnAI::KF_AVERAGE_TURN_ANGLE = [62, 50, 184, 194];

BrnAI::KF_AI_MAX_SPEED_MULTIPLIER = [63, 153, 153, 154];

BrnAI::KF_AI_MAX_BOOST_SPEED_MULTIPLIER = [63, 140, 204, 205];

BrnAI::KF_IN_FRONT_OF_PLAYER_DISTANCE = [66, 160, 0, 0];

BrnTraffic::KU_INVALID_SECTION = -1;

BrnTraffic::KU_INVALID_HULL = -1;

BrnTraffic::KU_INVALID_NEIGHBOUR = -1;

BrnTraffic::KU_INVALID_STOPLINE = -1;

BrnTraffic::KU_INVALID_FLOWTYPE = -1;

BrnTraffic::KU_INVALID_KILLZONEREGION = -1;

BrnTraffic::KU_INVALID_TRAFFIC_LIGHT_TRIGGER = -1;

BrnTraffic::KF_TRAFFIC_LIGHT_MAX_TIME_IN_STATE = [69, 204, 204, 0];

BrnTraffic::KU_INVALID_HULL_RUNTIME = -1;

BrnTraffic::KU_INVALID_UPDATE_FRAME = -1;

BrnTraffic::KF_UPDATE_TIME_DELTA_NO_SLOWMO = [61, 204, 204, 205];

BrnTraffic::KF_SECONDS_PER_MINUTE = [66, 112, 0, 0];

BrnTraffic::KF_HULL_CHANGE_PREDICTION_TIME = [64, 160, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_FEELERS_ANGLE = [62, 134, 10, 146];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_IMPACT_TIME_MAX = [64, 128, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_IMPACT_TIME_SCORE_FACTOR = [65, 32, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_PASSING_MAX_DISTANCE = [65, 32, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_HEIGHT_SKIP = [64, 64, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_MAX_RADIUS = [66, 112, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_SCORE_NEEDS_ACTION = [66, 130, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_ONLINE_SCORE_NEEDS_ACTION = [67, 72, 0, 0];

BrnProgression::KF_PLAYER_BOOST_THRESHOLD = [65, 160, 0, 0];

BrnProgression::KF_PLAYERSTAT_OVERDRIVE_EARNER = [67, 250, 0, 0];

BrnProgression::KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX = [66, 112, 0, 0];

BrnProgression::KF_PLAYER_STAT_TEMPORARY_ACCELERATOR = [65, 32, 0, 0];

BrnNetwork::KF_NETWORK_TIME_ACCURACY = [58, 218, 116, 14];

BrnNetwork::KF_NETWORK_DISTANCE_ACCURACY = [59, 163, 215, 10];

BrnStreetData::KI_INTERSTATE_EXIT_ROAD_INDEX = -2;

CgsNetwork::K_INVALID_PLAYER_ID = -1;

CgsNetwork::KU16_MAX_FRAMES = -2;

CgsNetwork::KU8_INVALID_GAME_ID = -1;

CgsNetwork::KI8_INVALID_TYPE = -1;

CgsNetwork::KU16_INVALID_FRAME = -1;

CgsNetwork::KU16_HALF_OF_FRAMES = -32768;

CgsNetwork::KU_INVALID_FRAME = -1;

CgsNetwork::KU_HALF_OF_FRAMES = -2147483648;

CgsNetwork::KI_MAX_UINT32 = -1;

CgsNetwork::KI_MIN_INT32 = -2147483648;

CgsNetwork::KI_MIN_PLAYER_ID = -1;

CgsNetwork::KF_DEFAULT_MIN_TIME = [0, 0, 0, 0];

CgsNetwork::KF_DEFAULT_MAX_TIME = [72, 125, 32, 0];

CgsNetwork::KF_DEFAULT_MAX_TIME_ERROR = [60, 163, 215, 10];

CgsSound::Playback::K_MIN_RESERVED_IDENT = -16;

CgsSound::Playback::K_INIT_SND9_SUBMIX_IDENT = -16;

Attrib::key_default = -2887443745685561006;

Attrib::h64_default = -2887443745685561006;

Attrib::Hash::physicsvehicledriftattribs::DriftAngularDamping = -7987274848054600901;

Attrib::Hash::physicsvehicledriftattribs::DriftMaxAngle = -2994767941176318032;

Attrib::Hash::physicsvehicledriftattribs::DriftSidewaysDamping = -2483459419315854033;

Attrib::Hash::physicsvehicledriftattribs::ForcedDriftStartSlip = -6912247002206191947;

Attrib::Hash::physicsvehicledriftattribs::ForcedDriftTimeToReachBaseSlip = -6629571209366667655;

Attrib::Hash::physicsvehicledriftattribs::GasDriftScaleFactor = -4333709530778156113;

Attrib::Hash::physicsvehicledriftattribs::GripFromBrake = -2382352998964909567;

Attrib::Hash::physicsvehicledriftattribs::GripFromGasLetOff = -639186851837051004;

Attrib::Hash::physicsvehicledriftattribs::InitialDriftPushBaseInc = -1687458581941323946;

Attrib::Hash::physicsvehicledriftattribs::InitialDriftPushTime = -2635178875663518084;

Attrib::Hash::physicsvehicledriftattribs::NaturalDriftScaleDecay = -701798028399705032;

Attrib::Hash::physicsvehicledriftattribs::NaturalYawTorque = -30919134522791338;

Attrib::Hash::physicsvehicledriftattribs::NaturalYawTorqueCutOffAngle = -327284094809810262;

Attrib::Hash::physicsvehicledriftattribs::NeutralTimeToReduceDrift = -1265753866060659382;

Attrib::Hash::physicsvehicledriftattribs::SideForceDirftScaleCutOff = -3301564056552839641;

Attrib::Hash::physicsvehicledriftattribs::SideForceDriftAngleCutOff = -2437558699454416996;

Attrib::Hash::physicsvehicledriftattribs::SideForceDriftSpeedCutOff = -7527846554673069815;

Attrib::Hash::physicsvehicledriftattribs::SideForcePeakDriftAngle = -1859027027580878885;

Attrib::Hash::physicsvehicledriftattribs::TimeForNaturalDrift = -2192670478953321175;

Attrib::Hash::physicsvehiclebodyrollattribs::FactorOfWeightX = -8854577714803822838;

Attrib::Hash::physicsvehiclebodyrollattribs::FactorOfWeightZ = -2898700536974267796;

Attrib::Hash::physicsvehiclebodyrollattribs::PitchSpringDampening = -2769872210820837534;

Attrib::Hash::physicsvehiclebodyrollattribs::RollSpringDampening = -8279220931350705981;

Attrib::Hash::physicsvehiclebodyrollattribs::WeightTransferDecayZ = -8641409400008704383;

Attrib::Hash::physicsvehiclesuspensionattribs::InAirDamping = -4391887702944398535;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxPitchDampingOnLanding = -5239064295522386902;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxRollDampingOnLanding = -2189969058134543695;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxVertVelocityDampingOnLanding = -7578424394703509952;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxYawDampingOnLanding = -9159666339184342346;

Attrib::Hash::physicsvehiclesteeringattribs::AiPidCoefficientDriftI = -2790084423631939863;

Attrib::Hash::physicsvehiclesteeringattribs::AiPidCoefficientP = -5300428111701324124;

Attrib::Hash::physicsvehiclesteeringattribs::SpeedForMaxAngle = -5882573263584155911;

Attrib::Hash::physicsvehiclesteeringattribs::SpeedForMinAngle = -703227396336610229;

Attrib::Hash::physicsvehiclesteeringattribs::StraightReactionBias = -153043821033732338;

Attrib::Hash::physicsvehicleengineattribs::Differential = -1187171424841002758;

Attrib::Hash::physicsvehicleengineattribs::EngineBraking = -7261967632121772986;

Attrib::Hash::physicsvehicleengineattribs::EngineLowEndTorqueFactor = -2588301351876699819;

Attrib::Hash::physicsvehicleengineattribs::FlyWheelInertia = -8061433635503997159;

Attrib::Hash::physicsvehicleengineattribs::GearRatios1 = -2125503289046983800;

Attrib::Hash::physicsvehicleengineattribs::GearRatios2 = -1019379010385919379;

Attrib::Hash::physicsvehicleengineattribs::GearUpRPMs1 = -8165513262891634271;

Attrib::Hash::physicsvehicleengineattribs::GearUpRPMs2 = -1326377965340261792;

Attrib::Hash::physicsvehicleengineattribs::MaxTorque = -4687445904566254869;

Attrib::Hash::physicsvehicleengineattribs::TorqueScales2 = -4818449724105158753;

Attrib::Hash::physicsvehicleengineattribs::TransmissionEfficiency = -2275951549147437131;

Attrib::Hash::physicsvehiclecollisionattribs::BodyBox = -7996561706975887698;

Attrib::Hash::physicsvehicleboostattribs::BlueBoostBase = -4153969524460304374;

Attrib::Hash::physicsvehicleboostattribs::BlueBoostKick = -6909139712711029827;

Attrib::Hash::physicsvehicleboostattribs::BlueMaxBoostSpeed = -2832201897230299495;

Attrib::Hash::physicsvehicleboostattribs::BoostBase = -1449587645724428634;

Attrib::Hash::physicsvehicleboostattribs::BoostKick = -7916157251067609346;

Attrib::Hash::physicsvehicleboostattribs::BoostKickHeightOffset = -7644159426826663967;

Attrib::Hash::physicsvehicleboostattribs::BoostKickMaxStartSpeed = -6769221666331370883;

Attrib::Hash::physicsvehicleboostattribs::BoostKickTime = -2762519771875884640;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleBaseAttribs = -3240169895484535073;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleBodyRollAttribs = -4714783353325512142;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleDriftAttribs = -1740125582048760770;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleEngineAttribs = -3611665628868408173;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleSteeringAttribs = -3941675927247818081;

Attrib::Hash::burnoutcarasset::CameraBumperBehaviourAsset = -2996460651824973746;

Attrib::Hash::burnoutcarasset::CarUnlockShot = -3361774045014665585;

Attrib::Hash::burnoutcarasset::DefaultWheel = -5763545711493309811;

Attrib::Hash::burnoutcarasset::EngineEntityKey = -8286362179805877589;

Attrib::Hash::burnoutcarasset::GameplayAsset = -4159014215320274250;

Attrib::Hash::burnoutcarasset::GraphicsAsset = -2452633230673053972;

Attrib::Hash::burnoutcarasset::MasterSceneMayaBinaryFile = -4033406791020503385;

Attrib::Hash::burnoutcarasset::SoundEngineAsset = -3616434373283268524;

Attrib::Hash::burnoutcarasset::SoundExhaustAsset = -6601183205448776399;

Attrib::Hash::physicsvehiclebaseattribs::AngularDrag = -2587998968637529485;

Attrib::Hash::physicsvehiclebaseattribs::BrakeScaleToFactor = -6724323949230824050;

Attrib::Hash::physicsvehiclebaseattribs::DownForceZOffset = -7435943572713341390;

Attrib::Hash::physicsvehiclebaseattribs::DriveTimeDeformLimitNegY = -3280670874417285740;

Attrib::Hash::physicsvehiclebaseattribs::DriveTimeDeformLimitPosZ = -1666416025769953155;

Attrib::Hash::physicsvehiclebaseattribs::DrivingMass = -3787790934024483857;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurveFloorSlipRatio = -1630393006643118008;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurvePeakCoefficient = -5067077354339468201;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurvePeakSlipRatio = -4731126951183549001;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireAdhesiveLimit = -1286355289157071958;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireDynamicFrictionCoefficient = -6349451596478070934;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireLongForceBias = -1377722699248955594;

Attrib::Hash::physicsvehiclebaseattribs::FrontWheelMass = -6833821662839661425;

Attrib::Hash::physicsvehiclebaseattribs::HighSpeedAngularDamping = -8330303592681147153;

Attrib::Hash::physicsvehiclebaseattribs::LinearDrag = -8487842249909718459;

Attrib::Hash::physicsvehiclebaseattribs::LockBrakeScale = -4714331935212091080;

Attrib::Hash::physicsvehiclebaseattribs::MagicBrakeFactorStraightLine = -2858441074664930156;

Attrib::Hash::physicsvehiclebaseattribs::MagicBrakeFactorTurning = -897565922227798600;

Attrib::Hash::physicsvehiclebaseattribs::PitchDampingOnTakeOff = -5137150473961999634;

Attrib::Hash::physicsvehiclebaseattribs::PowerToFront = -8388318914847005089;

Attrib::Hash::physicsvehiclebaseattribs::RearLatGripCurvePeakCoefficient = -753131893419114293;

Attrib::Hash::physicsvehiclebaseattribs::RearLatGripCurvePeakSlipRatio = -7653661541150633661;

Attrib::Hash::physicsvehiclebaseattribs::RearLongGripCurvePeakCoefficient = -412225798706036160;

Attrib::Hash::physicsvehiclebaseattribs::RearTireAdhesiveLimit = -9041112529150658;

Attrib::Hash::physicsvehiclebaseattribs::RearTireDynamicFrictionCoefficient = -5724009369781865567;

Attrib::Hash::physicsvehiclebaseattribs::RearTireLongForceBias = -8694020640479969529;

Attrib::Hash::physicsvehiclebaseattribs::RearWheelMass = -1977907534454313347;

Attrib::Hash::physicsvehiclebaseattribs::SurfaceFrontGripFactor = -179166364723212449;

Attrib::Hash::physicsvehiclebaseattribs::SurfaceRoughnessFactor = -2535698590537951711;

Attrib::Hash::physicsvehiclebaseattribs::TractionLineLength = -3299690291498919306;

Attrib::Hash::physicsvehiclebaseattribs::YawDampingOnTakeOff = -1675471727477182158;

Attrib::ClassName::physicsvehiclebaseattribs = -604515486933319770;

Attrib::ClassName::physicsvehiclehandling = -7610765364513722643;

Attrib::ClassName::physicsvehicleboostattribs = -1522656162225671394;

Attrib::ClassName::physicsvehiclecollisionattribs = -2335842357891624052;

Attrib::ClassName::physicsvehicleengineattribs = -553898650669114478;

BrnWorld::KI_INVALID_OPPONENT = -1;

BrnWorld::KI_INVALID_RIVAL = -1;

BrnWorld::KF_AI_INACTIVE_DISTANCE_BIAS = [65, 240, 0, 0];

BrnWorld::KF_INVALID_DISTANCE = [127, 127, 255, 255];

BrnWorld::KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME = [64, 0, 0, 0];

BrnWorld::KI_INVALID_CAR_COLOUR = -1;

BrnWorld::KI_INVALID_CAR_COLOUR_PALETTE = -1;

BrnWorld::KE_RACEECAR_PERFMON_PAGE = 12;

BrnWorld::KF_MIN_SPEED_FOR_AIR_MPH = [64, 0, 0, 0];

BrnWorld::KU_COLLISION_MASK_TOP_BIT = -32768;

BrnWorld::KF_POWER_PARK_NEARBY_RADIUS = [65, 112, 0, 0];

CgsFileSystem::KU_INVALID_FILE_ID = -1;

CgsUnicode::KU_TRAILING_BYTE_MASK = -64;

CgsUnicode::KU_TRAILING_BYTE = -128;

CgsUnicode::KU_SINGLE_BYTE_CHAR_MASK = -128;

CgsUnicode::KU_TWO_BYTE_CHAR_MASK = -32;

CgsUnicode::KU_TWO_BYTE_CHAR = -64;

CgsUnicode::KU_THREE_BYTE_CHAR_MASK = -16;

CgsUnicode::KU_THREE_BYTE_CHAR = -32;

CgsUnicode::KU_FOUR_BYTE_CHAR_MASK = -8;

CgsUnicode::KU_FOUR_BYTE_CHAR = -16;

CgsGraphics::DefaultValues::mkDefault_float_t = [0, 0, 0, 0];

CgsGraphics::DefaultValues::mkDefault_double_t = [0, 0, 0, 0, 0, 0, 0, 0];

renderengine::PS3PIXELFORMAT_REMAP_MASK = -32768;

renderengine::PS3PIXELFORMAT_REMAPORDER_MASK = -2147483648;

renderengine::PS3VERTEXTYPE_NA = -1;

CgsDev::PI = [64, 73, 15, 219];

CgsDev::KC_DEBUG_CHARACTER_SQUARE = -128;

CgsDev::KC_DEBUG_CHARACTER_CROSS = -127;

CgsDev::KC_DEBUG_CHARACTER_CIRCLE = -126;

CgsDev::KC_DEBUG_CHARACTER_UP = -125;

CgsDev::KC_DEBUG_CHARACTER_DOWN = -124;

CgsDev::KC_DEBUG_CHARACTER_LEFT = -123;

CgsDev::KC_DEBUG_CHARACTER_RIGHT = -122;

CgsDev::KC_DEBUG_CHARACTER_DEBUG = -121;

CgsDev::WarningSystem::Discipline::ALL = -1;

CgsDev::WarningSystem::Discipline::SOUND_DESIGN = -2147483648;

CgsDev::WarningSystem::Discipline::SOUND_ALL = -2147483648;

CgsDev::Message::ALL = -1;

EA::Thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

EA::Thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

EA::Thread::kThreadPriorityUnknown = -2147483648;

EA::Thread::kThreadPriorityMin = -128;

EA::Thread::kProcessorDefault = -1;

EA::Thread::kProcessorAny = -2;

rw::audio::core::PRIORITY_PERMANENT = [66, 200, 0, 0];

rw::audio::core::PI = [64, 73, 15, 219];

rw::audio::core::CPU_CLOCK_MULTIPLIER = [66, 32, 0, 0];

rw::audio::core::PROCESSINGSTAGE_MASTERINGVOICE = -1;

rw::audio::core::DECIBEL_MIN = [196, 122, 0, 0];

rw::audio::core::LINEARGAIN_MIN = [0, 0, 0, 0];

rw::audio::core::CENTS_MIN = [199, 195, 80, 0];

rw::audio::core::LINEARPITCH_MIN = [21, 141, 145, 46];

rw::audio::core::PITCHLINEARTOCENTSCONST = [69, 121, 37, 5];

rw::audio::core::CODAERR_NOT_READY = -1;

rw::audio::core::CODAERR_UNSUPPORTED = -2;

rw::audio::core::EAXMA_HEADER_BLOCKSIZE_BITMASK = -4;

rw::datacontainer::DEFAULTBATCHSIZE = -2147483648;

rw::math::fpu::TOP_BIT32 = -2147483648;

rw::math::fpu::NOT_TOP_BIT32 = 2147483647;

rw::math::fpu::TOP_BIT64 = -9223372036854775808;

rw::math::fpu::MIN_INT32 = -2147483648;

rw::math::fpu::MIN_FLOAT = [0, 128, 0, 0];

rw::math::fpu::MAX_FLOAT = [127, 127, 255, 255];

rw::math::fpu::SMALL_FLOAT = [55, 128, 0, 0];

rw::math::fpu::DEGREES_TO_RADIANS = [60, 142, 250, 53];

rw::math::fpu::RADIANS_TO_DEGREES = [66, 101, 46, 225];

rw::math::fpu::E = [64, 45, 248, 84];

rw::math::fpu::TWO_PI = [64, 201, 15, 219];

rw::math::fpu::HALF_PI = [63, 201, 15, 219];

rw::math::fpu::QUARTER_PI = [63, 73, 15, 219];

rw::math::fpu::SQRT_PI = [63, 226, 223, 197];

rw::math::fpu::INV_PI = [62, 162, 249, 131];

rw::math::fpu::SQRT_2 = [63, 181, 4, 243];

rw::math::fpu::SQRT_HALF = [63, 53, 4, 243];

rw::math::fpu::SQRT_3 = [63, 221, 179, 215];

rw::math::fpu::ZERO_FLOAT = [0, 0, 0, 0];

rw::math::fpu::VECTOR_MIN_SLERP_ANGLE = [61, 178, 184, 195];

rw::math::fpu::MATRIX_MIN_SLERP_ANGLE = [61, 14, 250, 53];

rw::math::fpu::QUATERNION_SLERP_DOT_TOLERANCE = [63, 127, 190, 119];

rw::math::fpu::MINIMUM_RECIPROCAL = [0, 32, 0, 0];

rw::math::fpu::ONE_MINUS_EPSILON = [63, 127, 255, 254];

rw::math::fpu::TOLERANCE = [58, 131, 18, 111];

rw::collision::krGPFeatureSimplificationThreshold = [61, 76, 204, 205];

rw::collision::krGPMinimumAllowedClippingAngle = [58, 131, 18, 111];

rw::core::thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

rw::core::thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

rw::core::thread::kThreadPriorityUnknown = -2147483648;

rw::core::thread::kThreadPriorityMin = -128;

rw::core::thread::kProcessorDefault = -1;

rw::core::thread::kProcessorAny = -2;

BrnGui::MainMapRenderer::KU8_MAX_ALPHA;

BrnGui::MainMapRenderer::KU8_INACTIVE_ALPHA;

BrnGui::NetworkPlayerImageRenderer::KU_TEXTURE_WIDTH;

BrnGui::NetworkPlayerImageRenderer::KU_TEXTURE_HEIGHT;

BrnGui::NetworkPlayerImageRenderer::KI_INITIAL_COPY_TO_TEXTURE;

BrnGui::NetworkPlayerImageRenderer::KI_INITIAL_RENDER_FROM_TEXTURE;

BrnGui::NetworkPlayerImageRenderer::KI_CLEAR_TEXTURES_NOT_SET;

BrnGui::InGameMessageRenderer::KI_NUM_STARTENGINE_MESSAGES;

BrnGui::InGameMessageRenderer::KI_NUM_OFFLINE_MESSAGES;

BrnGui::InGameMessageRenderer::KI_NUM_SIGNEDIN_MESSAGES;

BrnGui::InGameMessageRenderer::KI_NUM_BREAKINGNEWS_MESSAGES;

BrnGui::InGameMessageRenderer::KI_NUM_ROADRULES_INTERVAL_MESSAGES;

BrnGui::InGameMessageRenderer::KI_NUM_ROADRULES_BETWEEN_INTERVAL_MESSAGES;

