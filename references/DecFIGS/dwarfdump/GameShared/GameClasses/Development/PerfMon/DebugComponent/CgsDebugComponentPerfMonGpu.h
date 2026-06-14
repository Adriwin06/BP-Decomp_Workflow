// CgsStrStream.h:39
namespace CgsDev {
	// Declaration
	struct DebugComponentPerfMonGpu {
	protected:
		// CgsDebugComponentPerfMonGpu.h:92
		extern const float32_t KF_COLORBARHEIGHT;

	}

}

// CgsDebugComponentPerfMonGpu.h:92
extern const float32_t KF_COLORBARHEIGHT;

// CgsStrStream.h:39
namespace CgsDev {
	// Declaration
	struct DebugComponentPerfMonGpu {
		// CgsDebugComponentPerfMonGpu.h:96
		struct RenderCallbackParameter {
			// CgsDebugComponentPerfMonGpu.h:98
			CgsDev::DebugComponentPerfMonGpu * mpThis;

			// CgsDebugComponentPerfMonGpu.h:99
			CgsDev::Debug2DImmediateRender * mpRender;

			// CgsDebugComponentPerfMonGpu.h:100
			float32_t mfDrawX;

			// CgsDebugComponentPerfMonGpu.h:101
			float32_t mfDrawY;

			// CgsDebugComponentPerfMonGpu.h:102
			float32_t mfTotalGpu;

		}

	}

}

// CgsDebugComponentPerfMonGpu.h:48
struct CgsDev::DebugComponentPerfMonGpu : public CgsDev::DebugComponent {
protected:
	// CgsDebugComponentPerfMonGpu.h:85
	bool mbVisible;

	// CgsDebugComponentPerfMonGpu.h:86
	bool mbDisplayAsGraph;

	// CgsDebugComponentPerfMonGpu.h:87
	float32_t mfMaxGpu;

	// CgsDebugComponentPerfMonGpu.cpp:34
	extern const float32_t KF_COLORBARHEIGHT;

public:
	void DebugComponentPerfMonGpu();

	void DebugComponentPerfMonGpu(const DebugComponentPerfMonGpu &);

	// CgsDebugComponentPerfMonGpu.cpp:56
	void Construct();

	// CgsDebugComponentPerfMonGpu.cpp:79
	void Destruct();

	// CgsDebugComponentPerfMonGpu.cpp:138
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// CgsDebugComponentPerfMonGpu.cpp:123
	virtual void Update();

protected:
	// CgsDebugComponentPerfMonGpu.h:69
	virtual const char * GetName() const;

	// CgsDebugComponentPerfMonGpu.h:72
	virtual const char * GetPath() const;

	// CgsDebugComponentPerfMonGpu.h:75
	virtual bool IsSimple() const;

	// CgsDebugComponentPerfMonGpu.cpp:97
	virtual void OnActivate();

	// CgsDebugComponentPerfMonGpu.cpp:167
	void RenderPerformanceTable(CgsDev::Debug2DImmediateRender *);

	// CgsDebugComponentPerfMonGpu.cpp:201
	void RenderPerformanceGraph(CgsDev::Debug2DImmediateRender *);

	// CgsDebugComponentPerfMonGpu.cpp:286
	void RenderTableCallback(const PerfMonGpuMonitorData &, void *);

	// CgsDebugComponentPerfMonGpu.cpp:329
	void RenderGraphCallback(const PerfMonGpuMonitorData &, void *);

}

// CgsDebugComponentPerfMonGpu.h:48
void CgsDev::DebugComponentPerfMonGpu::DebugComponentPerfMonGpu() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

