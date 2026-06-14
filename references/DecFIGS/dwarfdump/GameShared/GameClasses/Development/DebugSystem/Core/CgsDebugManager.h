// CgsDebugManager.h:95
struct CgsDev::DebugManagerConstructParameters {
	// CgsDebugManager.h:98
	int16_t miPerfMonCpuCount;

	// CgsDebugManager.h:99
	int32_t miPerfMonLogBufferSize;

	// CgsDebugManager.h:102
	int16_t miMenuWindowPoolSize;

	// CgsDebugManager.h:103
	int16_t miMenuPoolSize;

	// CgsDebugManager.h:104
	int16_t miFunctionPoolSize;

	// CgsDebugManager.h:105
	int16_t miVariablePoolSize;

	// CgsDebugManager.h:106
	int16_t miVariableMetadataPoolSize;

	// CgsDebugManager.h:108
	int8_t miConsoleLineCount;

	// CgsDebugManager.h:110
	rw::IResourceAllocator * mpRwAllocator;

	// CgsDebugManager.h:113
	extern const DebugManagerConstructParameters DEFAULT;

}

// CgsDebugManager.h:126
struct CgsDev::DebugManager {
	// CgsDebugManager.h:227
	CgsDev::DebugComponentPerfMonCpu mDebugComponentPerfMonCpu;

	// CgsDebugManager.h:231
	CgsDev::DebugComponentPerfMonGpu mDebugComponentPerfMonGpu;

	// CgsDebugManager.h:251
	CgsDev::DebugComponentMessageFilter mDebugComponentMessageFilter;

protected:
	// CgsDebugManager.h:288
	CgsDev::DebugUI::DebugUI * mpUI;

	// CgsDebugManager.h:293
	CgsDev::Debug3DImmediateRender * mp3dRender;

	// CgsDebugManager.h:294
	CgsDev::Debug2DImmediateRender * mp2dRender;

	// CgsDebugManager.h:295
	DebugRender mBufferedRenderer;

	// CgsDebugManager.h:298
	DebugLinkedList<CgsDev::DebugComponent> mComponentList;

	// CgsDebugManager.h:302
	rw::IResourceAllocator * mpRwAllocator;

private:
	// CgsDebugManager.h:307
	extern const char * KPC_DEFAULTCOMPONENTPATH;

	// CgsDebugManager.h:310
	extern DebugManager * mpInstance;

	// CgsDebugManager.h:311
	extern DebugCriticalSection mMutex;

	// CgsDebugManager.h:322
	extern const int32_t KI_JUICE_INFO_MAX_LEN = 64;

	// CgsDebugManager.h:323
	char[64] macJuiceInfo;

	// CgsDebugManager.h:324
	bool mbJuiceInited;

	// CgsDebugManager.h:327
	extern const int32_t KI_BUILD_DATE_MAX_LEN = 36;

	// CgsDebugManager.h:328
	char[36] macBuildDate;

public:
	// CgsDebugManager.h:130
	void DebugManager();

	// CgsDebugManager.h:131
	void ~DebugManager();

	// CgsDebugManager.h:135
	void Construct(const DebugManagerConstructParameters *);

	// CgsDebugManager.h:138
	void ConstructRenderer();

	// CgsDebugManager.h:141
	void Update(float32_t);

	// CgsDebugManager.h:144
	void Destruct();

	// CgsDebugManager.h:148
	void SetDebugFont(SafeResourceHandle<CgsResource::Font> &);

	// CgsDebugManager.h:156
	void Render(const rw::math::vpu::Matrix44 &, Vector3, CgsGraphics::Im3dRenderBuffer *, CgsGraphics::Im2dRenderBuffer *);

	// CgsDebugManager.h:159
	void RenderBuildInfo();

	// CgsDebugManager.h:164
	void RenderFrameRate(float32_t, bool);

	// CgsDebugManager.h:180
	void RenderFrameRateColouredWithAverage(float32_t, float32_t, const RGBA &, const RGBA &, const RGBA &, float32_t, float32_t, char *, float32_t, bool);

	// CgsDebugManager.h:183
	void RenderMemory();

	// CgsDebugManager.h:187
	void RenderAssert(const AssertData *);

	// CgsDebugManager.h:191
	void LockForRendering();

	// CgsDebugManager.h:194
	void UnlockForRendering();

	// CgsDebugManager.h:198
	bool IsComponentRegistered(CgsDev::DebugComponent *);

	// CgsDebugManager.h:201
	void ActivateComponent(CgsDev::DebugComponent *);

	// CgsDebugManager.h:204
	void ActivateComponent(const char *);

	// CgsDebugManager.h:207
	void DeactivateComponent(const char *);

	// CgsDebugManager.h:212
	void SetGamePad(DebugManagerPad *);

	// CgsDebugManager.h:214
	void SetMetrics(const Metrics &);

	// CgsDebugManager.h:215
	void SetPalette(const Palette &);

	// CgsDebugManager.h:220
	DebugManager * ThreadSafeAquire();

	// CgsDebugManager.h:223
	void ThreadSafeRelease(DebugManager *);

	// CgsDebugManager.h:257
	void ForceClearRenderBuffer(bool);

	// CgsDebugManager.h:261
	void CallFunction(const char *);

protected:
	// CgsDebugManager.h:270
	void RenderWorld(const rw::math::vpu::Matrix44 &, Vector3);

	// CgsDebugManager.h:273
	void RenderHUD();

	// CgsDebugManager.h:277
	void RegisterComponent(CgsDev::DebugComponent *, const char *, const char *);

	// CgsDebugManager.h:280
	void RegisterComponentSimple(CgsDev::DebugComponent *, const char *, const char *);

	// CgsDebugManager.h:284
	CgsDev::DebugComponent * FindComponentByName(const char *);

private:
	// CgsDebugManager.h:325
	void GetJuiceInfo();

	// CgsDebugManager.h:331
	void CalculateBuildDate();

}

// CgsDebugManager.h:113
extern const DebugManagerConstructParameters DEFAULT;

// CgsDebugManager.h:310
extern DebugManager * mpInstance;

// CgsDebugManager.h:311
extern DebugCriticalSection mMutex;

// CgsDebugManager.h:322
extern const int32_t KI_JUICE_INFO_MAX_LEN = 64;

// CgsDebugManager.h:327
extern const int32_t KI_BUILD_DATE_MAX_LEN = 36;

// CgsDebugManager.h:126
struct CgsDev::DebugManager {
	// CgsDebugManager.h:227
	CgsDev::DebugComponentPerfMonCpu mDebugComponentPerfMonCpu;

	// CgsDebugManager.h:231
	CgsDev::DebugComponentPerfMonGpu mDebugComponentPerfMonGpu;

	// CgsDebugManager.h:251
	CgsDev::DebugComponentMessageFilter mDebugComponentMessageFilter;

protected:
	// CgsDebugManager.h:288
	CgsDev::DebugUI::DebugUI * mpUI;

	// CgsDebugManager.h:293
	CgsDev::Debug3DImmediateRender * mp3dRender;

	// CgsDebugManager.h:294
	CgsDev::Debug2DImmediateRender * mp2dRender;

	// CgsDebugManager.h:295
	DebugRender mBufferedRenderer;

	// CgsDebugManager.h:298
	DebugLinkedList<CgsDev::DebugComponent> mComponentList;

	// CgsDebugManager.h:302
	rw::IResourceAllocator * mpRwAllocator;

private:
	// CgsDebugManager.h:307
	extern const char * KPC_DEFAULTCOMPONENTPATH;

	// CgsDebugManager.h:310
	extern DebugManager * mpInstance;

	// CgsDebugManager.h:311
	extern DebugCriticalSection mMutex;

	// CgsDebugManager.h:322
	extern const int32_t KI_JUICE_INFO_MAX_LEN = 64;

	// CgsDebugManager.h:323
	char[64] macJuiceInfo;

	// CgsDebugManager.h:324
	bool mbJuiceInited;

	// CgsDebugManager.h:327
	extern const int32_t KI_BUILD_DATE_MAX_LEN = 36;

	// CgsDebugManager.h:328
	char[36] macBuildDate;

public:
	// CgsDebugManager.h:130
	void DebugManager();

	// CgsDebugManager.h:131
	void ~DebugManager();

	// CgsDebugManager.h:135
	void Construct(const DebugManagerConstructParameters *);

	// CgsDebugManager.h:138
	void ConstructRenderer();

	// CgsDebugManager.h:141
	void Update(float32_t);

	// CgsDebugManager.h:144
	void Destruct();

	// CgsDebugManager.h:148
	void SetDebugFont(SafeResourceHandle<CgsResource::Font> &);

	// CgsDebugManager.h:156
	void Render(const rw::math::vpu::Matrix44 &, Vector3, CgsGraphics::Im3dRenderBuffer *, CgsGraphics::Im2dRenderBuffer *);

	// CgsDebugManager.h:159
	void RenderBuildInfo();

	// CgsDebugManager.h:164
	void RenderFrameRate(float32_t, bool);

	// CgsDebugManager.h:180
	void RenderFrameRateColouredWithAverage(float32_t, float32_t, const RGBA &, const RGBA &, const RGBA &, float32_t, float32_t, char *, float32_t, bool);

	// CgsDebugManager.h:183
	void RenderMemory();

	// CgsDebugManager.h:187
	void RenderAssert(const AssertData *);

	// CgsDebugManager.h:191
	void LockForRendering();

	// CgsDebugManager.h:194
	void UnlockForRendering();

	// CgsDebugManager.h:198
	bool IsComponentRegistered(CgsDev::DebugComponent *);

	// CgsDebugManager.h:201
	void ActivateComponent(CgsDev::DebugComponent *);

	// CgsDebugManager.h:204
	void ActivateComponent(const char *);

	// CgsDebugManager.h:207
	void DeactivateComponent(const char *);

	// CgsDebugManager.h:212
	void SetGamePad(DebugManagerPad *);

	// CgsDebugManager.h:214
	void SetMetrics(const Metrics &);

	// CgsDebugManager.h:215
	void SetPalette(const Palette &);

	// CgsDebugManager.h:220
	DebugManager * ThreadSafeAquire();

	// CgsDebugManager.h:223
	void ThreadSafeRelease(DebugManager *);

	// CgsDebugManager.h:257
	void ForceClearRenderBuffer(bool);

	// CgsDebugManager.h:261
	void CallFunction(const char *);

protected:
	// CgsDebugManager.h:270
	void RenderWorld(const rw::math::vpu::Matrix44 &, Vector3);

	// CgsDebugManager.h:273
	void RenderHUD();

	// CgsDebugManager.h:277
	void RegisterComponent(CgsDev::DebugComponent *, const char *, const char *);

	// CgsDebugManager.h:280
	void RegisterComponentSimple(CgsDev::DebugComponent *, const char *, const char *);

	// CgsDebugManager.h:284
	CgsDev::DebugComponent * FindComponentByName(const char *);

private:
	// CgsDebugManager.h:325
	// Declaration
	void GetJuiceInfo() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsDebugManager.cpp:1182
		using namespace Message;

	}

	// CgsDebugManager.h:331
	void CalculateBuildDate();

}

