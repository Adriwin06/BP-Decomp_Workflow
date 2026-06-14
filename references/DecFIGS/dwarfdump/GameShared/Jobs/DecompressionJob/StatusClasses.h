// StatusClasses.h:43
struct CgsResource::CompressedData {
	// StatusClasses.h:45
	void * mpSourceBuffer;

	// StatusClasses.h:46
	uint32_t muSourceSize;

	// StatusClasses.h:47
	void * mpDestinationBuffer;

	// StatusClasses.h:48
	uint32_t muDestinationSize;

}

// StatusClasses.h:64
struct CgsResource::DecompressionJobStatus {
	// StatusClasses.h:66
	z_stream mDecompressionStream;

	// StatusClasses.h:67
	uint32_t muAmountRead;

	// StatusClasses.h:68
	uint32_t muAmountWritten;

	// StatusClasses.h:69
	int32_t miLastInflateResult;

	// StatusClasses.h:72
	IndexedNodeHeap mHeap;

	// StatusClasses.h:73
	char[128] macCache;

	// StatusClasses.h:74
	uint32_t muCachePos;

}

