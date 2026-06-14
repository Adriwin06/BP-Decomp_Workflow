// CgsStrStream.h:39
namespace CgsDev {
	// CgsPerfMonCpu.h:47
	enum PerfMonCpuPage {
		E_PMP_GENERAL = 0,
		E_PMP_1 = 1,
		E_PMP_2 = 2,
		E_PMP_3 = 3,
		E_PMP_4 = 4,
		E_PMP_5 = 5,
		E_PMP_6 = 6,
		E_PMP_7 = 7,
		E_PMP_8 = 8,
		E_PMP_9 = 9,
		E_PMP_10 = 10,
		E_PMP_11 = 11,
		E_PMP_12 = 12,
		E_PMP_13 = 13,
		E_PMP_14 = 14,
		E_PMP_15 = 15,
		E_PMP_16 = 16,
		E_PMP_17 = 17,
		E_PMP_18 = 18,
		E_PMP_19 = 19,
		E_PMP_20 = 20,
		E_PMP_21 = 21,
		E_PMP_22 = 22,
		E_PMP_23 = 23,
		E_PMP_MAX = 24,
	}

	// CgsPerfMonCpu.h:40
	const int32_t KI_PERFMONCPU_MAXSTRINGLENGTH = 32;

}

// CgsPerfMonCpu.h:86
struct CgsDev::PerfMonCpuMonitorData {
	// CgsPerfMonCpu.h:88
	const char * mpcName;

	// CgsPerfMonCpu.h:89
	float32_t mfCurrentValue;

	// CgsPerfMonCpu.h:90
	float32_t mfAverageValue;

	// CgsPerfMonCpu.h:91
	float32_t mfMinMaxValue;

	// CgsPerfMonCpu.h:92
	float32_t mfCpuBudget;

	// CgsPerfMonCpu.h:93
	int32_t miNumCalls;

	// CgsPerfMonCpu.h:94
	int32_t miMaxCalls;

	// CgsPerfMonCpu.h:96
	bool mbTraced;

	// CgsPerfMonCpu.h:97
	float32_t mfCurrentTraceValue;

	// CgsPerfMonCpu.h:98
	float32_t mfAverageTraceValue;

	// CgsPerfMonCpu.h:99
	float32_t mfMinMaxTraceValue;

}

// CgsPerfMonCpu.h:118
struct CgsDev::PerfMonCpuInstance {
	// CgsPerfMonCpu.h:120
	uint64_t mu64StartValue;

	// CgsPerfMonCpu.h:121
	uint64_t mu64Value;

	// CgsPerfMonCpu.h:122
	int32_t miFrameCounter;

	// CgsPerfMonCpu.h:123
	int32_t miNumCalls;

	// CgsPerfMonCpu.h:124
	int32_t miMaxCalls;

	// CgsPerfMonCpu.h:125
	char[32] macName;

	// CgsPerfMonCpu.h:126
	bool mbActive;

	// CgsPerfMonCpu.h:127
	bool mbMinimum;

	// CgsPerfMonCpu.h:128
	bool mbScaled;

	// CgsPerfMonCpu.h:129
	bool mbLibPerfTagged;

	// CgsPerfMonCpu.h:130
	CgsDev::PerfMonCpuPage mePage;

	// CgsPerfMonCpu.h:131
	float32_t mfCurrentValue;

	// CgsPerfMonCpu.h:132
	float32_t mfMinMaxValue;

	// CgsPerfMonCpu.h:133
	float32_t mfAverageValue;

	// CgsPerfMonCpu.h:134
	float32_t mfAverageAccumulator;

	// CgsPerfMonCpu.h:135
	float32_t mfCpuBudget;

	// CgsPerfMonCpu.h:136
	int32_t miOrigLibPerfTraceId;

	// CgsPerfMonCpu.h:137
	int32_t miLibPerfTraceId;

}

// CgsPerfMonCpu.h:149
struct CgsDev::PerfMonCpu {
private:
	// CgsPerfMonCpu.h:236
	extern PerfMonCpuInstance * mpMonitorsArray;

	// CgsPerfMonCpu.h:237
	extern int32_t miMaxMonitorCount;

	// CgsPerfMonCpu.h:238
	extern int32_t miMonitorCount;

	// CgsPerfMonCpu.h:239
	extern CgsDev::PerfMonGameFrequency meGameFrequency;

	// CgsPerfMonCpu.h:240
	extern bool mbResetAllValues;

	// CgsPerfMonCpu.h:241
	extern int32_t miNumIterations;

	// CgsPerfMonCpu.h:242
	extern bool mbIgnoreZeroCallsInAverage;

	// CgsPerfMonCpu.h:243
	extern int32_t miLibPerfMode;

public:
	// CgsPerfMonCpu.h:154
	bool Construct(int32_t, rw::IResourceAllocator *);

	// CgsPerfMonCpu.h:157
	void Destruct();

	// CgsPerfMonCpu.h:161
	void SetGameFrequency(CgsDev::PerfMonGameFrequency);

	// CgsPerfMonCpu.h:165
	void StartProfiling();

	// CgsPerfMonCpu.h:168
	void StopProfiling();

	// CgsPerfMonCpu.h:171
	void PrepareActiveMonitorsForUpdate();

	// CgsPerfMonCpu.h:174
	void ResetValuesInActiveMonitors();

	// CgsPerfMonCpu.h:177
	int32_t GetMonitorCount();

	// CgsPerfMonCpu.h:180
	int32_t GetMaxMonitorCount();

	// CgsPerfMonCpu.h:184
	void SetNumIterationsTaken(int32_t);

	// CgsPerfMonCpu.h:193
	int32_t AddMonitor(const char *, CgsDev::PerfMonCpuPage, bool, float32_t, bool);

	// CgsPerfMonCpu.h:196
	void StartMonitor(int32_t);

	// CgsPerfMonCpu.h:199
	void StopMonitor(int32_t);

	// CgsPerfMonCpu.h:202
	float32_t GetMonitorTime(int32_t);

	// CgsPerfMonCpu.h:205
	void GetMonitorData(int32_t, PerfMonCpuMonitorData *);

	// CgsPerfMonCpu.h:208
	bool IsMonitorOverBudget(int32_t);

	// CgsPerfMonCpu.h:211
	CgsDev::PerfMonCpuPage GetMonitorPage(int32_t);

	// CgsPerfMonCpu.h:217
	// Declaration
	void ReportMonitors(FPerfMonCpuReportCallback *, void *, CgsDev::PerfMonCpuPage) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPerfMonCpu.h:104
		typedef void (const PerfMonCpuMonitorData &, void *) FPerfMonCpuReportCallback;

	}

	// CgsPerfMonCpu.h:221
	void DumpActiveMonitorResults();

	// CgsPerfMonCpu.h:228
	void * DumpMonitorResultsToBuffer(void *, CgsDev::PerfMonCpuPage, RwBool, float32_t);

}

// CgsPerfMonCpu.h:236
extern PerfMonCpuInstance * mpMonitorsArray;

// CgsPerfMonCpu.h:237
extern int32_t miMaxMonitorCount;

// CgsPerfMonCpu.h:238
extern int32_t miMonitorCount;

// CgsPerfMonCpu.h:239
extern CgsDev::PerfMonGameFrequency meGameFrequency;

// CgsPerfMonCpu.h:250
struct CgsDev::PerfMonCpuHelper {
private:
	// CgsPerfMonCpu.h:256
	int32_t miMonitorID;

public:
	// CgsPerfMonCpu.h:252
	void PerfMonCpuHelper(int32_t);

	// CgsPerfMonCpu.h:253
	void ~PerfMonCpuHelper();

}

// CgsPerfMonCpu.h:149
struct CgsDev::PerfMonCpu {
private:
	// CgsPerfMonCpu.h:236
	extern PerfMonCpuInstance * mpMonitorsArray;

	// CgsPerfMonCpu.h:237
	extern int32_t miMaxMonitorCount;

	// CgsPerfMonCpu.h:238
	extern int32_t miMonitorCount;

	// CgsPerfMonCpu.h:239
	extern CgsDev::PerfMonGameFrequency meGameFrequency;

	// CgsPerfMonCpu.h:240
	extern bool mbResetAllValues;

	// CgsPerfMonCpu.h:241
	extern int32_t miNumIterations;

	// CgsPerfMonCpu.h:242
	extern bool mbIgnoreZeroCallsInAverage;

	// CgsPerfMonCpu.h:243
	extern int32_t miLibPerfMode;

public:
	// CgsPerfMonCpu.h:154
	bool Construct(int32_t, rw::IResourceAllocator *);

	// CgsPerfMonCpu.h:157
	void Destruct();

	// CgsPerfMonCpu.h:161
	void SetGameFrequency(CgsDev::PerfMonGameFrequency);

	// CgsPerfMonCpu.h:165
	void StartProfiling();

	// CgsPerfMonCpu.h:168
	void StopProfiling();

	// CgsPerfMonCpu.h:171
	void PrepareActiveMonitorsForUpdate();

	// CgsPerfMonCpu.h:174
	void ResetValuesInActiveMonitors();

	// CgsPerfMonCpu.h:177
	int32_t GetMonitorCount();

	// CgsPerfMonCpu.h:180
	int32_t GetMaxMonitorCount();

	// CgsPerfMonCpu.h:184
	void SetNumIterationsTaken(int32_t);

	// CgsPerfMonCpu.h:193
	int32_t AddMonitor(const char *, CgsDev::PerfMonCpuPage, bool, float32_t, bool);

	// CgsPerfMonCpu.h:196
	void StartMonitor(int32_t);

	// CgsPerfMonCpu.h:199
	void StopMonitor(int32_t);

	// CgsPerfMonCpu.h:202
	float32_t GetMonitorTime(int32_t);

	// CgsPerfMonCpu.h:205
	void GetMonitorData(int32_t, PerfMonCpuMonitorData *);

	// CgsPerfMonCpu.h:208
	bool IsMonitorOverBudget(int32_t);

	// CgsPerfMonCpu.h:211
	CgsDev::PerfMonCpuPage GetMonitorPage(int32_t);

	// CgsPerfMonCpu.h:217
	// Declaration
	void ReportMonitors(FPerfMonCpuReportCallback *, void *, CgsDev::PerfMonCpuPage) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPerfMonCpu.h:104
		typedef void (const PerfMonCpuMonitorData &, void *) FPerfMonCpuReportCallback;

	}

	// CgsPerfMonCpu.h:221
	// Declaration
	void DumpActiveMonitorResults() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPerfMonCpu.cpp:169
		using namespace Message;

		// CgsPerfMonCpu.cpp:170
		using namespace Message;

		// CgsPerfMonCpu.cpp:176
		using namespace Message;

		// CgsPerfMonCpu.cpp:179
		using namespace Message;

		// CgsPerfMonCpu.cpp:182
		using namespace Message;

	}

	// CgsPerfMonCpu.h:228
	void * DumpMonitorResultsToBuffer(void *, CgsDev::PerfMonCpuPage, RwBool, float32_t);

}

