// GatherStream.h:42
struct GatherStreamStatus {
	// GatherStream.h:44
	uint32_t muCurrentEntry;

	// GatherStream.h:45
	uint32_t muCurrentEntryPosition;

	// GatherStream.h:46
	uint32_t muBufferPosition;

	// GatherStream.h:47
	uint32_t muIsDone;

public:
	// GatherStream.h:50
	void Clear();

}

// GatherStream.h:56
struct GatherStreamData {
	// GatherStream.h:59
	GatherStreamStatus * mpStatus;

	// GatherStream.h:60
	uint32_t muMaximumToMove;

	// GatherStream.h:61
	DistributionEntry * mpDistributionList;

	// GatherStream.h:62
	uint32_t muDistributionListLength;

	// GatherStream.h:63
	void * mpLinearBuffer;

}

// _built-in_
namespace :: {
	// GatherStream.h:83
	extern char[] _binary_GatherJb_elf_start;

	// GatherStream.h:84
	extern uint32_t _binary_GatherJb_elf_size;

}

// GatherStream.h:83
extern char[] _binary_GatherJb_elf_start;

// GatherStream.h:84
extern uint32_t _binary_GatherJb_elf_size;

