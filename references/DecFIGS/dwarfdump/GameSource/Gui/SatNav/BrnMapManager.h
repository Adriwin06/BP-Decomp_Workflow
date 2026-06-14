// BrnGuiEventTypes.h:28
namespace BrnGui {
	// BrnMapManager.h:29
	const uint32_t KU_TILE_ARRAY_SIZE = 6;

}

// BrnMapManager.h:52
extern const uint32_t KU_MAX_TEXTURES_IN_CACHE = 19;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct MapManager {
		// BrnMapManager.h:55
		struct sActiveTextures {
			// BrnMapManager.h:56
			BrnGui::SatNavTile::sTexture[19] maTextures;

			// BrnMapManager.h:57
			uint32_t muTextureCount;

		}

		// BrnMapManager.h:61
		enum EZoomLevel {
			E_ZOOM_MEDIUM = 0,
			E_ZOOM_HIGH = 1,
			E_ZOOM_COUNT = 2,
		}

	}

	// BrnMapManager.h:29
	const uint32_t KU_TILE_ARRAY_SIZE = 6;

}

// BrnMapManager.h:48
struct BrnGui::MapManager {
	// BrnMapManager.h:52
	extern const uint32_t KU_MAX_TEXTURES_IN_CACHE = 19;

private:
	// BrnMapManager.h:167
	BrnGui::SatNavTile::sRect mWorldRect;

	// BrnMapManager.h:168
	BrnGui::SatNavTile::sRect mScreenRect;

	// BrnMapManager.h:172
	BrnGui::SatNavTile::sTexture mLowResTexture;

	// BrnMapManager.h:173
	BrnGui::SatNavTile::sTileCache mLowResTextureCache;

	// BrnMapManager.h:175
	BrnGui::SatNavTile::sTileCache[6] maRequestedTiles;

	// BrnMapManager.h:177
	SatNavTileDirectory *[2] mapDirectories;

	// BrnMapManager.h:179
	BrnGui::MapManager::sActiveTextures mActiveTextures;

	// BrnMapManager.h:181
	bool mbEnabled;

	// BrnMapManager.h:183
	uint32_t muTilesRequestedCount;

	// BrnMapManager.h:185
	StateInterface * mpStateInterface;

	// BrnMapManager.h:187
	BrnGui::MapManager::EZoomLevel meZoomLevel;

	// BrnMapManager.h:189
	rw::IResourceAllocator * mpAllocator;

public:
	// BrnMapManager.h:71
	void Construct(StateInterface *);

	// BrnMapManager.h:75
	bool Prepare();

	// BrnMapManager.h:79
	bool Release();

	// BrnMapManager.h:83
	void Update();

	// BrnMapManager.h:87
	void RecvEvent(const CgsModule::Event *, int32_t);

	// BrnMapManager.h:91
	bool Stop();

	// BrnMapManager.h:96
	void SetWorldRect(Vector4);

	// BrnMapManager.h:100
	void SetZoomLevel(BrnGui::MapManager::EZoomLevel);

	// BrnMapManager.h:104
	BrnGui::MapManager::EZoomLevel GetZoomLevel() const;

	// BrnMapManager.h:108
	void SetEnabled(bool);

	// BrnMapManager.h:112
	bool IsEnabled() const;

	// BrnMapManager.h:116
	const BrnGui::MapManager::sActiveTextures * GetActiveTextures() const;

	// BrnMapManager.h:120
	uint32_t GetTileSize(BrnGui::MapManager::EZoomLevel) const;

private:
	// BrnMapManager.h:128
	void CalculateCurrentTileSet();

	// BrnMapManager.h:132
	void SetTileState(uint32_t, BrnGui::SatNavTile::EBundleState);

	// BrnMapManager.h:136
	BrnGui::SatNavTile::EBundleState GetTileState(uint32_t) const;

	// BrnMapManager.h:140
	void AddTileToSet(const char *, uint32_t);

	// BrnMapManager.h:144
	void RemoveTileFromSet(BrnGui::SatNavTile *);

	// BrnMapManager.h:148
	void AcknowledgeTileUnload(uint32_t);

	// BrnMapManager.h:152
	void RefreshActiveTextureArray();

	// BrnMapManager.h:156
	void AddTile(BrnGui::SatNavTile *);

	// BrnMapManager.h:160
	void AllocateTextureStates(BrnGui::SatNavTile::sTileCache &);

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct MapManager {
		// BrnMapManager.h:55
		struct sActiveTextures {
			// BrnMapManager.h:56
			BrnGui::SatNavTile::sTexture[19] maTextures;

			// BrnMapManager.h:57
			uint32_t muTextureCount;

		}

		// BrnMapManager.h:61
		enum EZoomLevel {
			E_ZOOM_MEDIUM = 0,
			E_ZOOM_HIGH = 1,
			E_ZOOM_COUNT = 2,
		}

	}

	// BrnMapManager.h:29
	const uint32_t KU_TILE_ARRAY_SIZE = 6;

}

