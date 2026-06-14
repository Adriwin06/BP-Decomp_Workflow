// BrnGuiEventTypes.h:28
namespace BrnGui {
	// BrnSatNavTile.h:32
	const uint32_t KU_MAX_NUMBER_OF_TEXTURES_PER_TILE = 3;

	// BrnSatNavTile.h:33
	const uint32_t KU_TILE_BUNDLE_NAME_SIZE = 32;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct SatNavTile {
		// BrnSatNavTile.h:51
		enum EBundleState {
			E_STATE_UNLOADED = 0,
			E_STATE_REQUEST_LOAD = 1,
			E_STATE_LOADED = 2,
			E_STATE_REQUEST_UNLOAD = 3,
			E_STATE_FULL = 4,
		}

		// BrnSatNavTile.h:63
		struct sRect {
			// BrnSatNavTile.h:64
			float32_t mfLeft;

			// BrnSatNavTile.h:65
			float32_t mfTop;

			// BrnSatNavTile.h:66
			float32_t mfRight;

			// BrnSatNavTile.h:67
			float32_t mfBottom;

		public:
			// BrnSatNavTile.h:69
			void EndianSwap();

			// BrnSatNavTile.h:72
			sRect();

			// BrnSatNavTile.h:75
			sRect(float32_t, float32_t, float32_t, float32_t);

			// BrnSatNavTile.h:78
			float32_t GetArea() const;

		}

		// BrnSatNavTile.h:83
		struct sTileCache {
			// BrnSatNavTile.h:84
			BrnGui::SatNavTile::EBundleState meState;

			// BrnSatNavTile.h:85
			uint32_t muID;

			// BrnSatNavTile.h:86
			BrnGui::SatNavTile * mpTile;

			// BrnSatNavTile.h:87
			uint32_t muTextureCount;

			// BrnSatNavTile.h:88
			Resource[3] mTextureStateResources;

			// BrnSatNavTile.h:89
			TextureState *[3] mapTextureStates;

		}

		// BrnSatNavTile.h:94
		struct sTexture {
			// BrnSatNavTile.h:95
			TextureState * mpTextureState;

			// BrnSatNavTile.h:96
			BrnGui::SatNavTile::sRect mBB;

			// BrnSatNavTile.h:97
			BrnGui::SatNavTile::sRect mBBWorld;

		public:
			// BrnSatNavTile.h:100
			int32_t QSortCallback(const void *, const void *);

		}

	}

	// Declaration
	struct SatNavTileDirectory {
		// BrnSatNavTile.h:171
		struct sTileItem {
			// BrnSatNavTile.h:188
			BrnGui::SatNavTile::sRect[3] mBB;

			// BrnSatNavTile.h:189
			char[32] macBundleName;

			// BrnSatNavTile.h:190
			uint32_t muID;

			// BrnSatNavTile.h:191
			uint32_t muTextureCount;

		public:
			// BrnSatNavTile.h:174
			bool IsWorldPointInTile(Vector2) const;

			// BrnSatNavTile.h:178
			bool IsWithinWorldRect(const BrnGui::SatNavTile::sRect &) const;

			// BrnSatNavTile.h:182
			void FixUp(const Resource &);

			// BrnSatNavTile.h:186
			void FixDown(const Resource &);

		}

	}

	// BrnSatNavTile.h:32
	const uint32_t KU_MAX_NUMBER_OF_TEXTURES_PER_TILE = 3;

	// BrnSatNavTile.h:33
	const uint32_t KU_TILE_BUNDLE_NAME_SIZE = 32;

}

// BrnSatNavTile.h:47
struct BrnGui::SatNavTile {
	// BrnSatNavTile.h:148
	BrnGui::SatNavTile::sRect[3] mBB;

	// BrnSatNavTile.h:149
	BrnGui::SatNavTile::sRect[3] mBBWorld;

	// BrnSatNavTile.h:150
	int32_t miXOffset;

	// BrnSatNavTile.h:151
	int32_t miYOffset;

	// BrnSatNavTile.h:152
	uint32_t muTextureCount;

	// BrnSatNavTile.h:153
	Texture2D *[3] mpapTextures;

	// BrnSatNavTile.h:154
	char[32] macBundleName;

	// BrnSatNavTile.h:155
	uint32_t muID;

public:
	// BrnSatNavTile.h:111
	void Construct(const char *, int32_t, int32_t, BrnGui::SatNavTile::sRect *, BrnGui::SatNavTile::sRect *, Texture2D **, uint32_t, LinearMalloc &);

	// BrnSatNavTile.h:115
	void Destruct();

	// BrnSatNavTile.h:118
	const uint32_t GetTextureCount() const;

	// BrnSatNavTile.h:122
	void SetTexture(Texture2D *, uint32_t);

	// BrnSatNavTile.h:126
	Texture2D * GetTexture(uint32_t) const;

	// BrnSatNavTile.h:132
	const BrnGui::SatNavTile::sRect & GetBoundingBox(uint32_t) const;

	// BrnSatNavTile.h:136
	const BrnGui::SatNavTile::sRect & GetWorldBoundingBox(uint32_t) const;

	// BrnSatNavTile.h:141
	bool IsWithinScreenRect(const BrnGui::SatNavTile::sRect &) const;

	// BrnSatNavTile.h:145
	bool IsWithinWorldRect(const BrnGui::SatNavTile::sRect &) const;

}

// BrnSatNavTile.h:166
struct BrnGui::SatNavTileDirectory {
	// BrnSatNavTile.h:196
	uint32_t muItemCount;

	// BrnSatNavTile.h:197
	uint32_t muWidth;

	// BrnSatNavTile.h:198
	uint32_t muHeight;

	// BrnSatNavTile.h:199
	uint32_t muTileWidth;

	// BrnSatNavTile.h:200
	uint32_t muTileHeight;

	// BrnSatNavTile.h:201
	BrnGui::SatNavTileDirectory::sTileItem * mpaItems;

	// BrnSatNavTile.h:202
	char[32] macName;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct SatNavTile {
		// BrnSatNavTile.h:51
		enum EBundleState {
			E_STATE_UNLOADED = 0,
			E_STATE_REQUEST_LOAD = 1,
			E_STATE_LOADED = 2,
			E_STATE_REQUEST_UNLOAD = 3,
			E_STATE_FULL = 4,
		}

		// BrnSatNavTile.h:63
		struct sRect {
			// BrnSatNavTile.h:64
			float32_t mfLeft;

			// BrnSatNavTile.h:65
			float32_t mfTop;

			// BrnSatNavTile.h:66
			float32_t mfRight;

			// BrnSatNavTile.h:67
			float32_t mfBottom;

		public:
			// BrnSatNavTile.h:69
			void EndianSwap();

			// BrnSatNavTile.h:72
			sRect();

			// BrnSatNavTile.h:75
			sRect(float32_t, float32_t, float32_t, float32_t);

			// BrnSatNavTile.h:78
			float32_t GetArea() const;

		}

		// BrnSatNavTile.h:83
		struct sTileCache {
			// BrnSatNavTile.h:84
			BrnGui::SatNavTile::EBundleState meState;

			// BrnSatNavTile.h:85
			uint32_t muID;

			// BrnSatNavTile.h:86
			BrnGui::SatNavTile * mpTile;

			// BrnSatNavTile.h:87
			uint32_t muTextureCount;

			// BrnSatNavTile.h:88
			Resource[3] mTextureStateResources;

			// BrnSatNavTile.h:89
			TextureState *[3] mapTextureStates;

		}

		// BrnSatNavTile.h:94
		struct sTexture {
			// BrnSatNavTile.h:95
			TextureState * mpTextureState;

			// BrnSatNavTile.h:96
			BrnGui::SatNavTile::sRect mBB;

			// BrnSatNavTile.h:97
			BrnGui::SatNavTile::sRect mBBWorld;

		public:
			// BrnSatNavTile.h:100
			int32_t QSortCallback(const void *, const void *);

		}

	}

	// Declaration
	struct SatNavTileDirectory {
		// BrnSatNavTile.h:171
		struct sTileItem {
			// BrnSatNavTile.h:188
			BrnGui::SatNavTile::sRect[3] mBB;

			// BrnSatNavTile.h:189
			char[32] macBundleName;

			// BrnSatNavTile.h:190
			uint32_t muID;

			// BrnSatNavTile.h:191
			uint32_t muTextureCount;

		public:
			// BrnSatNavTile.h:174
			bool IsWorldPointInTile(Vector2) const;

			// BrnSatNavTile.h:178
			bool IsWithinWorldRect(const BrnGui::SatNavTile::sRect &) const;

			// BrnSatNavTile.h:182
			void FixUp(const Resource &);

			// BrnSatNavTile.h:186
			void FixDown(const Resource &);

		}

	}

	// BrnSatNavTile.h:32
	const uint32_t KU_MAX_NUMBER_OF_TEXTURES_PER_TILE = 3;

	// BrnSatNavTile.h:33
	const uint32_t KU_TILE_BUNDLE_NAME_SIZE = 32;

}

