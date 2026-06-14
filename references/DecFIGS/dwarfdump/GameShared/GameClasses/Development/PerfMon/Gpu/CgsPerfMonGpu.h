// CgsStrStream.h:39
namespace CgsDev {
	// CgsPerfMonGpu.h:33
	const int32_t KI_PERFMONGPUMAXMONITORS = 32;

	// CgsPerfMonGpu.h:34
	const int32_t KI_PERFMONGPUMAXSTRINGLENGTH = 32;

}

// CgsPerfMonGpu.h:131
extern CgsDev::PerfMonGameFrequency meGameFrequency;

// CgsPerfMonGpu.h:41
struct CgsDev::PerfMonGpuMonitorData {
	// CgsPerfMonGpu.h:43
	const char * mpcName;

	// CgsPerfMonGpu.h:44
	float32_t mfCurrentValue;

	// CgsPerfMonGpu.h:45
	RGBA mColour;

	// CgsPerfMonGpu.h:46
	bool mbOverBudget;

}

// CgsPerfMonGpu.h:63
struct CgsDev::PerfMonGpuInstance {
	// CgsPerfMonGpu.h:65
	char[32] macName;

	// CgsPerfMonGpu.h:66
	RGBA mColour;

	// CgsPerfMonGpu.h:67
	uint64_t mu64Counter;

	// CgsPerfMonGpu.h:68
	float32_t mfGPUBudget;

}

// CgsPerfMonGpu.h:79
struct CgsDev::PerfMonGpu {
private:
	// CgsPerfMonGpu.h:129
	extern PerfMonGpuInstance[33] maMonitors;

	// CgsPerfMonGpu.h:130
	extern int32_t miMaxMonitor;

	// CgsPerfMonGpu.h:131
	extern CgsDev::PerfMonGameFrequency meGameFrequency;

	// CgsPerfMonGpu.h:132
	extern bool mbProfilingRunning;

	// CgsPerfMonGpu.h:133
	extern bool mbActiveMonitor;

	// CgsPerfMonGpu.h:134
	extern int32_t miActiveMonitorID;

public:
	// CgsPerfMonGpu.h:82
	bool Construct();

	// CgsPerfMonGpu.h:85
	void Destruct();

	// CgsPerfMonGpu.h:88
	void SetGameFrequency(CgsDev::PerfMonGameFrequency);

	// CgsPerfMonGpu.h:91
	void Swap();

	// CgsPerfMonGpu.h:94
	void StartProfiling();

	// CgsPerfMonGpu.h:97
	void StopProfiling();

	// CgsPerfMonGpu.h:103
	// Declaration
	void ReportMonitors(FPerfMonGpuReportCallback *, void *, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPerfMonGpu.h:50
		typedef void (const PerfMonGpuMonitorData &, void *) FPerfMonGpuReportCallback;

	}

	// CgsPerfMonGpu.h:106
	float32_t GetLastTotal();

	// CgsPerfMonGpu.h:110
	float32_t GetLastMonitorValue(int32_t);

	// CgsPerfMonGpu.h:116
	int32_t AddMonitor(const char *, const RGBA &, float32_t);

	// CgsPerfMonGpu.h:119
	void StartMonitor(int32_t);

	// CgsPerfMonGpu.h:122
	void StopMonitor(int32_t);

private:
	// CgsPerfMonGpu.h:126
	float32_t ComputeValueFromTimer(int32_t);

}

