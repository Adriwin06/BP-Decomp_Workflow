// DecompressionJob.h:46
struct CgsResource::DecompressionJobData {
	// DecompressionJob.h:48
	DecompressionJobStatus * mpStatus;

	// DecompressionJob.h:49
	CompressedData * mpEntries;

	// DecompressionJob.h:50
	uint32_t muNumEntries;

	// DecompressionJob.h:55
	char * mpcMallocBuffer;

	// DecompressionJob.h:56
	IndexedNodeHeapListNode * mpMallocNodes;

}

// _built-in_
namespace :: {
	// DecompressionJob.h:83
	extern char[] _binary_DecomJob_elf_start;

	// DecompressionJob.h:84
	extern uint32_t _binary_DecomJob_elf_size;

}

// DecompressionJob.h:83
extern char[] _binary_DecomJob_elf_start;

// DecompressionJob.h:84
extern uint32_t _binary_DecomJob_elf_size;

