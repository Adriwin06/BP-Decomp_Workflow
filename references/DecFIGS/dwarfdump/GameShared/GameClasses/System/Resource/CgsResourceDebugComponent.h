// CgsResourceDebugComponent.h:76
extern const int KI_MAX_VISIBLE_POOLS = 4;

// CgsResourceDebugComponent.h:57
struct CgsResource::DebugComponentParams {
	// CgsDebugPoolTextures.h:46
	typedef void (*)(renderengine::Texture *, Vector2, Vector2, void *, bool, bool) DebugTextureRenderCallback;

	// CgsResourceDebugComponent.h:59
	DebugComponentParams::DebugTextureRenderCallback mpTextureRenderCallback;

	// CgsResourceDebugComponent.h:60
	void * mpTextureRenderUserData;

	// CgsResourceDebugComponent.h:61
	rw::IResourceAllocator * mpDebugAllocator;

}

// CgsSmallResource.h:24
namespace CgsResource {
	// Declaration
	struct DebugComponent {
	public:
		~DebugComponent();

		DebugComponent();

		// Unknown accessibility
		// CgsResourceDebugComponent.h:76
		extern const int KI_MAX_VISIBLE_POOLS = 4;

	}

}

// CgsResourceDebugComponent.h:73
void CgsResource::DebugComponent::~DebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceDebugComponent.h:73
void CgsResource::DebugComponent::DebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceDebugComponent.h:73
struct CgsResource::DebugComponent : public CgsDev::DebugComponent {
	// CgsResourceDebugComponent.h:76
	extern const int KI_MAX_VISIBLE_POOLS = 4;

protected:
	// CgsResourceDebugComponent.h:96
	CgsDev::DebugUI::Window *[4] mapWindows;

	// CgsResourceDebugComponent.h:98
	DebugPoolWindow mPoolWindow;

	// CgsResourceDebugComponent.h:99
	DebugPoolHistogram mPoolHistogram;

	// CgsResourceDebugComponent.h:100
	DebugPoolTypeList mPoolTypeList;

	// CgsResourceDebugComponent.h:101
	DebugPoolTextures mPoolTextures;

	// CgsResourceDebugComponent.h:102
	CgsResource::DebugBundleFilesWindow mBundleFilesWindow;

	// CgsResourceDebugComponent.h:104
	int32_t[4] maiPoolIds;

	// CgsResourceDebugComponent.h:105
	int32_t[4] maiPrevPoolIds;

	// CgsResourceDebugComponent.h:106
	StringList[130] maStringList;

	// CgsResourceDebugComponent.h:107
	CgsResource::ResourceModule * mpResourceModule;

	// CgsResourceDebugComponent.h:109
	int32_t miTypeListMode;

	// CgsResourceDebugComponent.h:110
	StringList[3] maTypeStringList;

	// CgsResourceDebugComponent.h:112
	int32_t miSortMode;

	// CgsResourceDebugComponent.h:113
	StringList[8] maSortModeStringList;

	// CgsResourceDebugComponent.h:115
	int32_t miRenderMode;

	// CgsResourceDebugComponent.h:116
	StringList[8] maRenderModeStringList;

	// CgsResourceDebugComponent.h:118
	bool mbShowBundleWindow;

	// CgsResourceDebugComponent.h:119
	bool mbTriggerStatsDump;

	// CgsResourceDebugComponent.h:121
	DebugComponentParams mParams;

	// CgsResourceDebugComponent.h:123
	DebugComponentParams::DebugTextureRenderCallback mpTextureRenderCallback;

	// CgsResourceDebugComponent.h:125
	int32_t miStatsDumpCount;

	// CgsResourceDebugComponent.h:127
	int32_t miPoolShareTest0;

	// CgsResourceDebugComponent.h:128
	int32_t miPoolShareTest1;

	// CgsResourceDebugComponent.h:129
	int32_t[3] maiPoolShareTestResults;

	// CgsResourceDebugComponent.h:130
	bool mbPoolShareTestVisible;

	// CgsResourceDebugComponent.h:131
	bool mbShowBundleLoaderQueue;

public:
	// CgsResourceDebugComponent.cpp:53
	void Construct(CgsResource::ResourceModule *, const DebugComponentParams *);

	// CgsResourceDebugComponent.cpp:119
	void Destruct();

	// CgsResourceDebugComponent.cpp:161
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// CgsResourceDebugComponent.cpp:209
	virtual void Update();

protected:
	// CgsResourceDebugComponent.cpp:136
	virtual void OnActivate();

	// CgsResourceDebugComponent.h:138
	virtual const char * GetName() const;

	// CgsResourceDebugComponent.h:141
	virtual const char * GetPath() const;

	// CgsResourceDebugComponent.h:144
	virtual bool IsSimple() const;

	// CgsResourceDebugComponent.cpp:303
	void InitWindows();

	// CgsResourceDebugComponent.cpp:408
	void UpdatePoolMenuItems();

	// CgsResourceDebugComponent.cpp:427
	void GenerateStringList();

	// CgsResourceDebugComponent.cpp:454
	void UpdateWindows();

	// CgsResourceDebugComponent.cpp:486
	void TriggerDefragCallback(void *);

	// CgsResourceDebugComponent.cpp:496
	void ResetWindow(int32_t, const Pool *);

	// CgsResourceDebugComponent.cpp:230
	// Declaration
	void DumpStats() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsResourceDebugComponent.cpp:235
		using namespace CgsDev::Message;

		// CgsResourceDebugComponent.cpp:264
		using namespace CgsDev::Message;

	}

	// CgsResourceDebugComponent.cpp:272
	void DumpPoolStatistics(CgsDev::Log::LogFileBuffered &, const Pool *);

	// CgsResourceDebugComponent.cpp:370
	void UpdateShareTest();

	// CgsResourceDebugComponent.cpp:533
	void IncTextureCallback(void *);

	// CgsResourceDebugComponent.cpp:543
	void DecTextureCallback(void *);

	// CgsResourceDebugComponent.cpp:553
	void IncPageCallback(void *);

	// CgsResourceDebugComponent.cpp:563
	void DecPageCallback(void *);

	// CgsResourceDebugComponent.cpp:573
	void ShowBundleWindowChangeCallback(void *, void *);

	// CgsResourceDebugComponent.cpp:593
	void TriggerStatsCallback(void *);

}

