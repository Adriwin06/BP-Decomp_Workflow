// CgsFile.h:40
namespace CgsFileSystem {
	// Declaration
	struct DebugComponentFileSystem {
		// CgsDebugComponentFileSystem.h:62
		extern const int32_t KI_FULL_SCREEN_HISTORY_SIZE = 200;

	}

}

// CgsDebugComponentFileSystem.h:62
extern const int32_t KI_FULL_SCREEN_HISTORY_SIZE = 200;

// CgsFile.h:40
namespace CgsFileSystem {
	// Declaration
	struct DebugComponentFileSystem {
	public:
		DebugComponentFileSystem();

		// Unknown accessibility
		// CgsDebugComponentFileSystem.h:62
		extern const int32_t KI_FULL_SCREEN_HISTORY_SIZE = 200;

	}

}

// CgsDebugComponentFileSystem.h:59
void CgsFileSystem::DebugComponentFileSystem::DebugComponentFileSystem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugComponentFileSystem.h:59
struct CgsFileSystem::DebugComponentFileSystem : public CgsDev::DebugComponent {
	// CgsDebugComponentFileSystem.h:62
	extern const int32_t KI_FULL_SCREEN_HISTORY_SIZE = 200;

	// CgsDebugComponentFileSystem.h:63
	extern const int32_t KI_LOG_ENTRY_BUFFER_LENGTH = 1000;

	// CgsDebugComponentFileSystem.h:64
	extern const int32_t KI_LOG_ENTRY_HISTORY_LENGTH = 1000;

	// CgsDebugComponentFileSystem.h:65
	extern const int32_t KI_LOG_FILE_BUFFER_LENGTH = 2097152;

private:
	// CgsDebugComponentFileSystem.h:102
	CgsFileSystem::FileSystem * mpFileSystem;

	// CgsDebugComponentFileSystem.h:103
	rw::IResourceAllocator * mpDebugAllocator;

	// CgsDebugComponentFileSystem.h:104
	void * mpDiskLayoutBuffer;

	// CgsDebugComponentFileSystem.h:105
	float32_t[16][200] mafFullScreenHistories;

	// CgsDebugComponentFileSystem.h:106
	int32_t[16] maiFullScreenCounts;

	// CgsDebugComponentFileSystem.h:107
	int32_t[16] maiFullScreenIndex;

	// CgsDebugComponentFileSystem.h:108
	uint32_t muLastCacheDump;

	// CgsDebugComponentFileSystem.h:109
	CgsDev::DebugUI::LogWindow mCacheLogWindow;

public:
	// CgsDebugComponentFileSystem.cpp:101
	void Construct(CgsFileSystem::FileSystem *, rw::IResourceAllocator *);

	// CgsDebugComponentFileSystem.cpp:150
	void Destruct();

	// CgsDebugComponentFileSystem.cpp:223
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// CgsDebugComponentFileSystem.cpp:391
	virtual void Update();

	// CgsDebugComponentFileSystem.cpp:541
	void FlushLogs();

protected:
	// CgsDebugComponentFileSystem.cpp:165
	virtual void OnActivate();

	// CgsDebugComponentFileSystem.h:93
	virtual const char * GetName() const;

	// CgsDebugComponentFileSystem.h:96
	virtual const char * GetPath() const;

	// CgsDebugComponentFileSystem.h:99
	virtual bool IsSimple() const;

}

