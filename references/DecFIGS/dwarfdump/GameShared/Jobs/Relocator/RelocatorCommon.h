// RelocatorCommon.h:44
struct CgsMemory::RelocationEntry {
	// RelocatorCommon.h:53
	void * mpSource;

	// RelocatorCommon.h:54
	void * mpDest;

	// RelocatorCommon.h:55
	int32_t miSize;

	// RelocatorCommon.h:56
	uint32_t mxFlags;

}

// RelocatorCommon.h:69
struct CgsMemory::RelocationParams {
	// RelocatorCommon.h:71
	RelocationEntry * mpCommands;

	// RelocatorCommon.h:72
	int32_t miNumCommands;

	// RelocatorCommon.h:78
	void * mpGPUMemoryTempBuffer;

	// RelocatorCommon.h:79
	int32_t miGPUMemoryTempBufferSize;

}

// RelocatorCommon.h:94
struct CgsMemory::RelocationTestParams {
	// RelocatorCommon.h:117
	void * mpDummy;

	// RelocatorCommon.h:118
	DataStreamCommandPoster * mpCommandPoster;

	// RelocatorCommon.h:119
	DataStreamResultReader * mpResultReader;

	// RelocatorCommon.h:120
	int32_t miCounter;

}

// CgsHeapMalloc.h:33
namespace CgsMemory {
	// Declaration
	struct RelocationTestParams {
		// RelocatorCommon.h:99
		struct Command {
			// RelocatorCommon.h:101
			char[32] macString;

			// RelocatorCommon.h:102
			int32_t miNumber;

		}

		// RelocatorCommon.h:107
		struct Result {
			// RelocatorCommon.h:109
			char[32] macInputSting;

			// RelocatorCommon.h:110
			int32_t miJobId;

			// RelocatorCommon.h:111
			int32_t miNumber;

			// RelocatorCommon.h:112
			uint32_t muGetCommandUS;

			// RelocatorCommon.h:113
			uint32_t muExecuteCommandUS;

			// RelocatorCommon.h:114
			uint32_t muAddResultUS;

		}

	}

}

