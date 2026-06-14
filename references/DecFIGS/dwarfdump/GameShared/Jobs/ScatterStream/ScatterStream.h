// ScatterStream.h:42
struct ScatterStreamStatus {
	// ScatterStream.h:44
	uint32_t muCurrentEntry;

	// ScatterStream.h:45
	uint32_t muCurrentEntryPosition;

	// ScatterStream.h:46
	uint32_t muBufferPosition;

	// ScatterStream.h:47
	uint32_t muIsDone;

public:
	// ScatterStream.h:50
	void Clear();

}

// ScatterStream.h:56
struct ScatterStreamData {
	// ScatterStream.h:59
	ScatterStreamStatus * mpStatus;

	// ScatterStream.h:60
	uint32_t muMaximumToMove;

	// ScatterStream.h:61
	DistributionEntry * mpDistributionList;

	// ScatterStream.h:62
	uint32_t muDistributionListLength;

	// ScatterStream.h:63
	void * mpLinearBuffer;

}

// _built-in_
namespace :: {
	// ScatterStream.h:83
	extern char[] _binary_ScattJb_elf_start;

	// ScatterStream.h:84
	extern uint32_t _binary_ScattJb_elf_size;

}

// ScatterStream.h:83
extern char[] _binary_ScattJb_elf_start;

// ScatterStream.h:84
extern uint32_t _binary_ScattJb_elf_size;

