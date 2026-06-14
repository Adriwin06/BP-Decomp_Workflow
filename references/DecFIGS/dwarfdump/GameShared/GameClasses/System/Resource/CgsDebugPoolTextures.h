// CgsDebugPoolTextures.h:82
void CgsResource::DebugPoolTextures::DebugPoolTextures() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceID.h:30
namespace CgsResource {
	// CgsDebugPoolTextures.h:48
	enum EDebugSortMode {
		E_DEBUGSORTMODE_NONE = 0,
		E_DEBUGSORTMODE_AREA = 1,
		E_DEBUGSORTMODE_WIDTH = 2,
		E_DEBUGSORTMODE_HEIGHT = 3,
		E_DEBUGSORTMODE_DATASIZE = 4,
		E_DEBUGSORTMODE_MODELUSAGE = 5,
		E_DEBUGSORTMODE_INSTANCEUSAGE = 6,
		E_DEBUGSORTMODE_COUNT = 7,
	}

	// CgsDebugPoolTextures.h:60
	enum EDebugTextureRenderMode {
		E_DEBUGTEXTURERENDERMODE_ACTUALSIZE = 0,
		E_DEBUGTEXTURERENDERMODE_STRETCH = 1,
		E_DEBUGTEXTURERENDERMODE_THUMBNAILS8x8 = 2,
		E_DEBUGTEXTURERENDERMODE_THUMBNAILS16x16 = 3,
		E_DEBUGTEXTURERENDERMODE_THUMBNAILS32x32 = 4,
		E_DEBUGTEXTURERENDERMODE_COUNT = 5,
	}

	// Declaration
	struct DebugPoolTextures {
		// CgsDebugPoolTextures.h:88
		struct TextureEntry {
			// CgsDebugPoolTextures.h:90
			renderengine::Texture * mpTexture;

			// CgsDebugPoolTextures.h:91
			uint32_t muDataSize;

			// CgsDebugPoolTextures.h:92
			uint16_t muEntryIndex;

			// CgsDebugPoolTextures.h:93
			uint16_t muModelsThatUseTexture;

			// CgsDebugPoolTextures.h:94
			uint16_t muInstancesThatUseTexture;

		}

	}

}

// CgsDebugPoolTextures.h:82
struct CgsResource::DebugPoolTextures : public CgsDev::DebugUI::Window {
	// CgsDebugPoolTextures.h:85
	extern const int32_t KI_MAX_TEXTURE_ENTRIES = 2048;

private:
	// CgsDebugPoolTextures.h:135
	const Pool * mpPool;

	// CgsDebugPoolTextures.h:136
	int32_t miTextureIndex;

	// CgsDebugPoolTextures.h:137
	int32_t miTotalTextures;

	// CgsDebugPoolTextures.h:138
	uint16_t muTextureEntryIndex;

	// CgsDebugPoolTextures.h:139
	DebugComponentParams::DebugTextureRenderCallback mpRenderTextureCallback;

	// CgsDebugPoolTextures.h:140
	void * mpCallbackUserData;

	// CgsDebugPoolTextures.h:141
	int32_t miNumModelsThatUseCurrentTexture;

	// CgsDebugPoolTextures.h:142
	int32_t miNumInstancesThatUseCurrentTexture;

	// CgsDebugPoolTextures.h:143
	CgsResource::DebugPoolTextures::TextureEntry * mpTextureEntries;

	// CgsDebugPoolTextures.h:144
	bool mbDoFullAnalysisNextFrame;

	// CgsDebugPoolTextures.h:145
	CgsResource::EDebugSortMode meSortMode;

	// CgsDebugPoolTextures.h:146
	CgsResource::EDebugTextureRenderMode meRenderMode;

public:
	// CgsDebugPoolTextures.cpp:512
	void AllocateDebugMemory(rw::IResourceAllocator *);

	// CgsDebugPoolTextures.cpp:528
	void FreeDebugMemory(rw::IResourceAllocator *);

	// CgsDebugPoolTextures.cpp:78
	void Reset(const Pool *, DebugComponentParams::DebugTextureRenderCallback, void *, CgsResource::EDebugSortMode, CgsResource::EDebugTextureRenderMode);

	// CgsDebugPoolTextures.cpp:114
	virtual void Render(CgsDev::Debug2DImmediateRender *);

	// CgsDebugPoolTextures.cpp:210
	virtual void Update(float32_t, CgsDev::DebugUI::InputEvent);

	// CgsDebugPoolTextures.h:220
	void IncTextureIndex();

	// CgsDebugPoolTextures.h:226
	void DecTextureIndex();

	// CgsDebugPoolTextures.cpp:993
	void IncPageIndex();

	// CgsDebugPoolTextures.cpp:1012
	void DecPageIndex();

	// CgsDebugPoolTextures.h:233
	void SetSortMode(CgsResource::EDebugSortMode);

	// CgsDebugPoolTextures.h:239
	void SetRenderMode(CgsResource::EDebugTextureRenderMode);

	// CgsDebugPoolTextures.cpp:969
	ID GetSelectedTextureId();

private:
	// CgsDebugPoolTextures.cpp:355
	bool IsPartOfFilter(uint16_t);

	// CgsDebugPoolTextures.cpp:377
	void RenderTexture(renderengine::Texture *, Vector2, Vector2, bool, bool);

	// CgsDebugPoolTextures.cpp:406
	int32_t CountInstancesThatUseTexture(renderengine::Texture *);

	// CgsDebugPoolTextures.cpp:462
	int32_t CountModelsThatUseTexture(renderengine::Texture *);

	// CgsDebugPoolTextures.cpp:543
	void RegisterTexture(int32_t, uint16_t, bool);

	// CgsDebugPoolTextures.cpp:589
	void RenderTextureDisplay(CgsDev::Debug2DImmediateRender *, Vector2, Vector2);

	// CgsDebugPoolTextures.cpp:646
	void RenderTextureActualSize(renderengine::Texture *, Vector2, Vector2);

	// CgsDebugPoolTextures.cpp:677
	void RenderTextureStretched(renderengine::Texture *, Vector2, Vector2, bool, bool);

	// CgsDebugPoolTextures.cpp:719
	void RenderThumbnails(CgsDev::Debug2DImmediateRender *, Vector2, Vector2, int32_t);

	// CgsDebugPoolTextures.cpp:191
	void GetSizeString(uint32_t, char *);

	// CgsDebugPoolTextures.cpp:791
	int32_t SortByAreaCallback(const void *, const void *);

	// CgsDebugPoolTextures.cpp:823
	int32_t SortByWidthCallback(const void *, const void *);

	// CgsDebugPoolTextures.cpp:852
	int32_t SortByHeightCallback(const void *, const void *);

	// CgsDebugPoolTextures.cpp:881
	int32_t SortByDataSizeCallback(const void *, const void *);

	// CgsDebugPoolTextures.cpp:911
	int32_t SortByModelUsageCallback(const void *, const void *);

	// CgsDebugPoolTextures.cpp:940
	int32_t SortByInstanceUsageCallback(const void *, const void *);

}

// CgsDebugPoolTextures.h:85
extern const int32_t KI_MAX_TEXTURE_ENTRIES = 2048;

