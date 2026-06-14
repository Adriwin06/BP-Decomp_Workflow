// CgsStrStream.h:39
namespace CgsDev {
	// Declaration
	struct DebugComponentPerfMonCpu {
	protected:
		// CgsDebugComponentPerfMonCpu.h:131
		extern const float32_t KF_COLORBARHEIGHT;

	}

}

// CgsDebugComponentPerfMonCpu.h:131
extern const float32_t KF_COLORBARHEIGHT;

// CgsDebugComponentPerfMonCpu.h:54
struct CgsDev::DebugComponentPerfMonCpu : public CgsDev::DebugComponent {
protected:
	// CgsDebugComponentPerfMonCpu.h:111
	bool mbDisplayAsGraph;

	// CgsDebugComponentPerfMonCpu.h:112
	float mfMaxCpu;

	// CgsDebugComponentPerfMonCpu.h:115
	bool mbResetMonitors;

	// CgsDebugComponentPerfMonCpu.h:122
	bool mbEnableTracing;

	// CgsDebugComponentPerfMonCpu.h:126
	int32_t miTraceMode;

	// CgsDebugComponentPerfMonCpu.h:127
	StringList[3] maTraceModeList;

	// CgsDebugComponentPerfMonCpu.cpp:33
	extern const float32_t KF_COLORBARHEIGHT;

	// CgsDebugComponentPerfMonCpu.h:139
	int32_t miCurrentPage;

	// CgsDebugComponentPerfMonCpu.h:140
	StringList[26] maStringList;

	// CgsDebugComponentPerfMonCpu.h:144
	void * mpLogBuffer;

	// CgsDebugComponentPerfMonCpu.h:145
	void * mpLogBufferEnd;

	// CgsDebugComponentPerfMonCpu.h:146
	bool mbLogBufferOverflow;

	// CgsDebugComponentPerfMonCpu.h:147
	uint16_t * mpau16LogBufferWritePtr;

public:
	void DebugComponentPerfMonCpu();

	void DebugComponentPerfMonCpu(const DebugComponentPerfMonCpu &);

	// CgsDebugComponentPerfMonCpu.cpp:57
	void Construct(int16_t, void *, uint32_t);

	// CgsDebugComponentPerfMonCpu.cpp:118
	void Destruct();

	// CgsDebugComponentPerfMonCpu.cpp:246
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// CgsDebugComponentPerfMonCpu.cpp:216
	virtual void Update();

	// CgsDebugComponentPerfMonCpu.cpp:565
	void SetPageName(int32_t, const char *);

	// CgsDebugComponentPerfMonCpu.cpp:575
	void GetCurrentPage(int32_t *, char *, int32_t);

	// CgsDebugComponentPerfMonCpu.cpp:589
	bool SetFirstPage();

	// CgsDebugComponentPerfMonCpu.cpp:604
	bool SetNextPage();

	// CgsDebugComponentPerfMonCpu.cpp:619
	void SetNoPage();

protected:
	// CgsDebugComponentPerfMonCpu.h:95
	virtual const char * GetName() const;

	// CgsDebugComponentPerfMonCpu.h:98
	virtual const char * GetPath() const;

	// CgsDebugComponentPerfMonCpu.h:101
	virtual bool IsSimple() const;

	// CgsDebugComponentPerfMonCpu.cpp:136
	virtual void OnActivate();

	// CgsDebugComponentPerfMonCpu.cpp:271
	void RenderPerformanceTable(CgsDev::Debug2DImmediateRender *);

	// CgsDebugComponentPerfMonCpu.cpp:440
	void RenderPerformanceGraph(CgsDev::Debug2DImmediateRender *);

	// CgsDebugComponentPerfMonCpu.cpp:516
	void DebugCallbackResetCounters(void *);

	// CgsDebugComponentPerfMonCpu.cpp:540
	void DebugCallbackDumpLogFile(void *);

	// CgsDebugComponentPerfMonCpu.cpp:632
	void DebugEnableTracingCallback(void *, void *);

	// CgsDebugComponentPerfMonCpu.cpp:650
	void DebugChangeTraceModeCallback(void *, void *);

	// CgsDebugComponentPerfMonCpu.cpp:671
	void LogBufferEnable(void *, int32_t);

	// CgsDebugComponentPerfMonCpu.cpp:698
	void LogBufferUpdate();

	// CgsDebugComponentPerfMonCpu.cpp:737
	void LogBufferDump(char *);

}

// CgsDebugComponentPerfMonCpu.h:54
void CgsDev::DebugComponentPerfMonCpu::DebugComponentPerfMonCpu() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

