// CgsDebugComponentMemory.h:121
extern const int32_t KI_TAB_SIZE;

// CgsDebugComponentMemory.h:122
extern const float32_t KF_FONT_SCALE_NORMAL;

// CgsDebugComponentMemory.h:123
extern const float32_t KF_FONT_SCALE_SMALL;

// CgsDebugComponentMemory.h:124
extern const float32_t KF_FONT_SCALE_EXTRA_SMALL;

// CgsDebugComponentMemory.h:125
extern const RGBA KU_COLOUR_NORMAL;

// CgsDebugComponentMemory.h:126
extern const RGBA KU_COLOUR_SMALL;

// CgsDebugComponentMemory.h:127
extern const RGBA KU_COLOUR_EXTRA_SMALL;

// CgsDebugComponentMemory.h:128
extern const float32_t KF_MAX_SCROLL;

// CgsDebugComponentMemory.h:129
extern const float32_t KF_SCROLL_STEP;

// CgsHeapMalloc.h:33
namespace CgsMemory {
	// Declaration
	struct DebugComponentMemory {
	public:
		DebugComponentMemory();

	private:
		// CgsDebugComponentMemory.h:121
		extern const int32_t KI_TAB_SIZE;

		// CgsDebugComponentMemory.h:122
		extern const float32_t KF_FONT_SCALE_NORMAL;

		// CgsDebugComponentMemory.h:123
		extern const float32_t KF_FONT_SCALE_SMALL;

		// CgsDebugComponentMemory.h:124
		extern const float32_t KF_FONT_SCALE_EXTRA_SMALL;

		// CgsDebugComponentMemory.h:125
		extern const RGBA KU_COLOUR_NORMAL;

		// CgsDebugComponentMemory.h:126
		extern const RGBA KU_COLOUR_SMALL;

		// CgsDebugComponentMemory.h:127
		extern const RGBA KU_COLOUR_EXTRA_SMALL;

		// CgsDebugComponentMemory.h:128
		extern const float32_t KF_MAX_SCROLL;

		// CgsDebugComponentMemory.h:129
		extern const float32_t KF_SCROLL_STEP;

	}

}

// CgsDebugComponentMemory.h:65
void CgsMemory::DebugComponentMemory::DebugComponentMemory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugComponentMemory.h:65
struct CgsMemory::DebugComponentMemory : public CgsDev::DebugComponent {
private:
	// CgsDebugComponentMemory.cpp:33
	extern const int32_t KI_TAB_SIZE = 10;

	// CgsDebugComponentMemory.cpp:34
	extern const float32_t KF_FONT_SCALE_NORMAL;

	// CgsDebugComponentMemory.cpp:35
	extern const float32_t KF_FONT_SCALE_SMALL;

	// CgsDebugComponentMemory.cpp:36
	extern const float32_t KF_FONT_SCALE_EXTRA_SMALL;

	// CgsDebugComponentMemory.cpp:37
	extern const RGBA KU_COLOUR_NORMAL;

	// CgsDebugComponentMemory.cpp:38
	extern const RGBA KU_COLOUR_SMALL;

	// CgsDebugComponentMemory.cpp:39
	extern const RGBA KU_COLOUR_EXTRA_SMALL;

	// CgsDebugComponentMemory.cpp:40
	extern const float32_t KF_MAX_SCROLL;

	// CgsDebugComponentMemory.cpp:41
	extern const float32_t KF_SCROLL_STEP;

	// CgsDebugComponentMemory.h:131
	const CgsMemory::MemoryModule * mpMemoryModule;

	// CgsDebugComponentMemory.h:133
	bool mbShowMemoryMap;

	// CgsDebugComponentMemory.h:134
	int32_t miDetailLevel;

	// CgsDebugComponentMemory.h:135
	float32_t mfScroll;

public:
	// CgsDebugComponentMemory.cpp:389
	void Construct(const CgsMemory::MemoryModule *);

	// CgsDebugComponentMemory.cpp:413
	void Destruct();

	// CgsDebugComponentMemory.cpp:455
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// CgsDebugComponentMemory.cpp:475
	virtual void Update();

protected:
	// CgsDebugComponentMemory.cpp:428
	virtual void OnActivate();

	// CgsDebugComponentMemory.h:90
	virtual const char * GetName() const;

	// CgsDebugComponentMemory.h:93
	virtual const char * GetPath() const;

	// CgsDebugComponentMemory.h:96
	virtual bool IsSimple() const;

	// CgsDebugComponentMemory.cpp:493
	void RenderBankInfo(CgsDev::Debug2DImmediateRender *, float32_t, float32_t);

	// CgsDebugComponentMemory.cpp:512
	void RenderBankInfo(uint16_t, CgsDev::Debug2DImmediateRender *, float32_t, float32_t *);

	// CgsDebugComponentMemory.cpp:619
	void RenderBlockInfo(uint32_t, uint32_t, uint32_t, CgsDev::Debug2DImmediateRender *, float32_t, float32_t *);

}

