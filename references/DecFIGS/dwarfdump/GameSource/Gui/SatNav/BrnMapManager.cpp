// CgsGuiShared.h:45
namespace BrnGui {
	// BrnMapManager.cpp:36
	const uint32_t KU_TICK_COUNTDOWN_VALUE = 6;

}

// BrnMapManager.cpp:114
void BrnGui::MapManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMapManager.cpp:286
void BrnGui::MapManager::IsEnabled() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMapManager.cpp:270
void BrnGui::MapManager::GetActiveTextures() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMapManager.cpp:302
void BrnGui::MapManager::SetEnabled(bool  lbEnabled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMapManager.cpp:254
void BrnGui::MapManager::GetZoomLevel() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMapManager.cpp:347
void BrnGui::MapManager::RefreshActiveTextureArray() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapManager.cpp:361
		uint32_t luIndex;

	}
	{
		// BrnMapManager.cpp:364
		const BrnGui::SatNavTile::sTileCache & lTile;

		{
			// BrnMapManager.cpp:371
			uint32_t luTextureIndex;

		}
	}
	SatNavTile::GetWorldBoundingBox(/* parameters */);
	SatNavTile::GetBoundingBox(/* parameters */);
}

// BrnMapManager.cpp:557
void BrnGui::MapManager::GetTileSize(BrnGui::MapManager::EZoomLevel  leZoomLevel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMapManager.cpp:667
void BrnGui::MapManager::AddTileToSet(const char *  lpcName, const uint32_t  luID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMapManager.cpp:744
void BrnGui::MapManager::GetTileState(const uint32_t  luID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapManager.cpp:748
		uint32_t luIndex;

	}
	{
		// BrnMapManager.cpp:753
		const const BrnGui::SatNavTile::sTileCache & lpRequestedTile;

	}
	{
		// BrnMapManager.cpp:763
		const const BrnGui::SatNavTile::sTileCache & lpRequestedTile;

	}
}

// BrnMapManager.cpp:975
void BrnGui::MapManager::RemoveTileFromSet(BrnGui::SatNavTile *  lpTile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMapManager.cpp:169
void BrnGui::MapManager::Stop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapManager.cpp:171
		uint32_t luIndex;

		// BrnMapManager.cpp:184
		bool lbFinished;

		{
			// BrnMapManager.cpp:175
			const BrnGui::SatNavTile::sTileCache & lTile;

		}
		{
			// BrnMapManager.cpp:187
			const BrnGui::SatNavTile::sTileCache & lTile;

		}
	}
}

// BrnMapManager.cpp:152
void BrnGui::MapManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMapManager.cpp:787
void BrnGui::MapManager::SetTileState(const uint32_t  luID, BrnGui::SatNavTile::EBundleState  leState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapManager.cpp:789
		uint32_t luIndex;

		// BrnMapManager.cpp:790
		bool lbSetState;

	}
	{
		// BrnMapManager.cpp:796
		const BrnGui::SatNavTile::sTileCache & lRequestedTile;

	}
	{
		// BrnMapManager.cpp:870
		const BrnGui::SatNavTile::sTileCache & lRequestedTile;

	}
	{
		// BrnMapManager.cpp:834
		uint32_t luIndex;

	}
	rw::IResourceAllocator::Free(/* parameters */);
}

// BrnMapManager.cpp:1005
void BrnGui::MapManager::AcknowledgeTileUnload(const uint32_t  luID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMapManager.cpp:580
void BrnGui::MapManager::CalculateCurrentTileSet() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapManager.cpp:582
		uint32_t luDirectoryIndex;

		// BrnMapManager.cpp:590
		BrnGui::SatNavTile::sRect lWorldRect;

		// BrnMapManager.cpp:603
		const SatNavTileDirectory * lpDirectory;

	}
	{
		// BrnMapManager.cpp:606
		uint32_t luPotentialMatches;

		// BrnMapManager.cpp:610
		uint32_t luIndex;

		{
			// BrnMapManager.cpp:633
			const BrnGui::SatNavTile::sTileCache & lTile;

		}
	}
	{
		// BrnMapManager.cpp:614
		const const BrnGui::SatNavTileDirectory::sTileItem & lTileItem;

	}
	{
		// BrnMapManager.cpp:595
		const float32_t lfFactor;

		rw::math::fpu::Abs<float>(/* parameters */);
		rw::math::fpu::Abs<float>(/* parameters */);
	}
}

// BrnMapManager.cpp:319
void BrnGui::MapManager::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMapManager.cpp:538
void BrnGui::MapManager::SetWorldRect(const rw::math::vpu::Vector4  lv4WorldRect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::VecFloatRef<VectorAxisW>::operator float(/* parameters */);
}

// BrnMapManager.cpp:1042
void BrnGui::MapManager::AllocateTextureStates(const BrnGui::SatNavTile::sTileCache &  lTile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapManager.cpp:1044
		uint32_t luIndex;

	}
	{
		// BrnMapManager.cpp:1047
		Parameters lTextureStateParams;

	}
	renderengine::TextureState::Parameters::Parameters(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::TextureState::Parameters::SetTexture(/* parameters */);
	renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

// BrnMapManager.cpp:912
void BrnGui::MapManager::AddTile(BrnGui::SatNavTile *  lpTile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapManager.cpp:916
		bool lbAdded;

		// BrnMapManager.cpp:917
		uint32_t luIndex;

		// BrnMapManager.cpp:919
		BrnGui::SatNavTile::EBundleState leState;

	}
	{
		// BrnMapManager.cpp:932
		const BrnGui::SatNavTile::sTileCache & lTile;

	}
}

// BrnMapManager.cpp:209
void BrnGui::MapManager::SetZoomLevel(BrnGui::MapManager::EZoomLevel  leZoomLevel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapManager.cpp:221
		const float_t lfHighTileArea;

		// BrnMapManager.cpp:223
		uint32_t luIndex;

		{
			// BrnMapManager.cpp:226
			const BrnGui::SatNavTile::sTileCache & lTile;

			{
				// BrnMapManager.cpp:230
				const float_t lfTileArea;

				// BrnMapManager.cpp:231
				const float_t lfAcceptedDifference;

			}
			rw::math::fpu::Abs<float>(/* parameters */);
			rw::math::fpu::Min<float>(/* parameters */);
			rw::math::fpu::Abs<float>(/* parameters */);
		}
	}
}

// BrnMapManager.cpp:60
void BrnGui::MapManager::Construct(StateInterface *  lpStateInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapManager.cpp:83
		Matrix33 lmWorldSpace;

		// BrnMapManager.cpp:84
		Matrix33 lmNormalSpace;

		// BrnMapManager.cpp:87
		Vector2 lvNTopLeft;

		// BrnMapManager.cpp:88
		Vector2 lvNBottomRight;

		// BrnMapManager.cpp:90
		Vector2 lvWTopLeft;

		// BrnMapManager.cpp:91
		Vector2 lvWBottomRight;

	}
	CgsGui::StateInterface::GetAllocator(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	MapTransform::Transform(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	{
	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	{
	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	MapTransform::Transform(/* parameters */);
	MapTransform::Transform(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	{
	}
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
	rw::math::vpu::operator*(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
}

// BrnMapManager.cpp:1061
void _GLOBAL__D__ZN6BrnGui21CustomRendererManager9ConstructEv() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMapManager.cpp:1060
void _GLOBAL__I__ZN6BrnGui21CustomRendererManager9ConstructEv() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMapManager.cpp:403
void BrnGui::MapManager::RecvEvent(const CgsModule::Event *  lpEvent, int32_t  lEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapManager.cpp:414
		const GuiEventCache * lpCacheEvent;

		// BrnMapManager.cpp:415
		BrnGui::GuiCache * lpGuiCache;

		// BrnMapManager.cpp:416
		sResourceTuple lResourceTuple;

		{
			// BrnMapManager.cpp:423
			Texture2D * lpTexture2D;

			// BrnMapManager.cpp:426
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
		// BrnMapManager.cpp:408
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

