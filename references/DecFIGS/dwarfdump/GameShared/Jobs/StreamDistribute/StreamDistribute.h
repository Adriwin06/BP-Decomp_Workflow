// StreamDistribute.h:42
struct StreamDistributeTargetEntry {
	// StreamDistribute.h:44
	uint32_t muOffset;

	// StreamDistribute.h:45
	void * mpTarget;

	// StreamDistribute.h:46
	uint32_t muSize;

	// StreamDistribute.h:47
	uint32_t muPad;

}

// StreamDistribute.h:52
struct StreamDistributeData {
	// StreamDistribute.h:54
	void * mpBaseDataStream;

	// StreamDistribute.h:55
	uint32_t muTotalStreamSize;

	// StreamDistribute.h:56
	StreamDistributeTargetEntry * mpTargets;

	// StreamDistribute.h:57
	uint32_t muTargetCount;

	// StreamDistribute.h:58
	char[112] macPad;

}

// _built-in_
namespace :: {
	// StreamDistribute.h:78
	extern char[] _binary_StrmDist_elf_start;

	// StreamDistribute.h:79
	extern uint32_t _binary_StrmDist_elf_size;

}

// StreamDistribute.h:78
extern char[] _binary_StrmDist_elf_start;

// StreamDistribute.h:79
extern uint32_t _binary_StrmDist_elf_size;

