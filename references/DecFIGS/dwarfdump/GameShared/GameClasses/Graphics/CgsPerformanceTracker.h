// CgsPerformanceTracker.h:120
extern const int KI_CLIENT_NAME_MAX = 40;

// CgsMaterialState.h:37
namespace CgsGraphics {
	// Declaration
	struct PerformanceTracker {
		// CgsPerformanceTracker.h:44
		struct Counter {
			// CgsPerformanceTracker.h:45
			int32_t current;

			// CgsPerformanceTracker.h:46
			int32_t previous;

			// CgsPerformanceTracker.h:47
			int32_t snapshot;

			// CgsPerformanceTracker.h:48
			int32_t peak;

			// CgsPerformanceTracker.h:49
			float average;

		}

		// CgsPerformanceTracker.h:57
		enum CounterType {
			E_COUNTER_TYPE_VERTEX = 0,
			E_COUNTER_TYPE_INDEX = 1,
			E_COUNTER_TYPE_PRIMITIVE = 2,
			E_COUNTER_TYPE_MATERIAL = 3,
			E_COUNTER_TYPE_MESH = 4,
			E_COUNTER_TYPE_MESH_INSTANCE = 5,
			E_COUNTER_TYPE_MESH_INSTANCE_GROUP = 6,
			E_COUNTER_TYPE_TEXTURE = 7,
			E_COUNTER_TYPE_PIXEL_SHADER = 8,
			E_COUNTER_TYPE_PIXEL_SHADER_CONSTANT = 9,
			E_COUNTER_TYPE_PIXEL_SHADER_INSTRUCTION = 10,
			E_COUNTER_TYPE_PIXEL_SHADER_CONSTANT_TRIVIALLY_DISCARDED = 11,
			E_COUNTER_TYPE_PIXEL_SHADER_CONSTANT_TRIVIALLY_ACCEPTED = 12,
			E_COUNTER_TYPE_PIXEL_SHADER_CONSTANT_VALUE_DISCARDED = 13,
			E_COUNTER_TYPE_PIXEL_SHADER_CONSTANT_VALUE_ACCEPTED = 14,
			E_COUNTER_TYPE_VERTEX_SHADER = 15,
			E_COUNTER_TYPE_VERTEX_SHADER_CONSTANT = 16,
			E_COUNTER_TYPE_VERTEX_SHADER_INSTRUCTION = 17,
			E_COUNTER_TYPE_VERTEX_SHADER_CONSTANT_TRIVIALLY_DISCARDED = 18,
			E_COUNTER_TYPE_VERTEX_SHADER_CONSTANT_TRIVIALLY_ACCEPTED = 19,
			E_COUNTER_TYPE_VERTEX_SHADER_CONSTANT_VALUE_DISCARDED = 20,
			E_COUNTER_TYPE_VERTEX_SHADER_CONSTANT_VALUE_ACCEPTED = 21,
			E_COUNTER_TYPE_DISPATCH_BIN = 22,
			E_COUNTER_TYPE_PUSH_BUFFER = 23,
			E_COUNTER_TYPE_MAX = 24,
		}

		// CgsPerformanceTracker.h:90
		enum CounterUsage {
			E_COUNTER_USAGE_INSTANCE = 0,
			E_COUNTER_USAGE_MEMORY = 1,
			E_COUNTER_USAGE_STREAM = 2,
			E_COUNTER_USAGE_DISPATCHBIN = 3,
			E_COUNTER_USAGE_CULL = 4,
			E_COUNTER_USAGE_RENDER = 5,
			E_COUNTER_USAGE_TRANSFER = 6,
			E_COUNTER_USAGE_TIME = 7,
			E_COUNTER_USAGE_MAX = 8,
		}

		// CgsPerformanceTracker.h:116
		struct CounterInfo {
			// CgsPerformanceTracker.h:117
			CgsGraphics::PerformanceTracker::Counter[8] usageArray;

			// CgsPerformanceTracker.h:118
			const char * name;

			// CgsPerformanceTracker.h:120
			extern const int KI_CLIENT_NAME_MAX = 40;

			// CgsPerformanceTracker.h:121
			char[40] clientName;

		}

	}

}

// CgsPerformanceTracker.h:30
struct CgsGraphics::PerformanceTracker {
private:
	// CgsPerformanceTracker.h:165
	extern CgsGraphics::PerformanceTracker::CounterType sCounterTypeForSectionBreaks;

	// CgsPerformanceTracker.h:167
	extern bool sbTraceSummaryNextFrame;

	// CgsPerformanceTracker.h:168
	extern bool sbTraceHistograms;

	// CgsPerformanceTracker.h:169
	extern int siTraceSummaryFramePeriod;

	// CgsPerformanceTracker.h:170
	extern int siDiagnosticLevel;

public:
	// CgsPerformanceTracker.h:124
	void Startup();

	// CgsPerformanceTracker.h:125
	void Shutdown();

	// CgsPerformanceTracker.h:127
	void BeginFrame();

	// CgsPerformanceTracker.h:128
	void EndFrame();

	// CgsPerformanceTracker.h:130
	CgsGraphics::PerformanceTracker::CounterInfo & GetCounterInfo(CgsGraphics::PerformanceTracker::CounterType);

	// CgsPerformanceTracker.h:131
	const char * GetCounterName(CgsGraphics::PerformanceTracker::CounterType);

	// CgsPerformanceTracker.h:134
	CgsGraphics::PerformanceTracker::Counter & GetCounter(CgsGraphics::PerformanceTracker::CounterType, CgsGraphics::PerformanceTracker::CounterUsage);

	// CgsPerformanceTracker.h:136
	void TraceSummary();

	// CgsPerformanceTracker.h:137
	void TraceSummaryOnNextFrame();

	// CgsPerformanceTracker.h:138
	void TraceCounterInfo(CgsGraphics::PerformanceTracker::CounterType);

	// CgsPerformanceTracker.h:140
	void ResetCounterPeaks();

	// CgsPerformanceTracker.h:142
	void TakeSnapshot();

	// CgsPerformanceTracker.h:146
	// Declaration
	void SetCounterClient(CgsGraphics::PerformanceTracker::CounterType, const char *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPerformanceTracker.cpp:359
		using namespace CgsDev::Message;

	}

	// CgsPerformanceTracker.h:151
	void AdjustCounter(CgsGraphics::PerformanceTracker::CounterType, CgsGraphics::PerformanceTracker::CounterUsage, int32_t);

	// CgsPerformanceTracker.h:155
	int32_t GetIncrementSinceSnapshot(CgsGraphics::PerformanceTracker::CounterType, CgsGraphics::PerformanceTracker::CounterUsage);

	// CgsPerformanceTracker.h:157
	void SetDiagnosticLevel(int);

	// CgsPerformanceTracker.h:158
	int GetDiagnosticLevel();

}

