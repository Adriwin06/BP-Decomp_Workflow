// CgsHeapMalloc.h:33
namespace CgsMemory {
	struct HeapMalloc;

	struct LinearMalloc;

	// CgsHeapMalloc.h:37
	const int32_t KI_DEFAULT_ALIGNMENT = 4;

}

// CgsHeapMalloc.h:53
struct CgsMemory::HeapMalloc {
private:
	// CgsHeapMalloc.h:117
	void * mpBuffer;

	// CgsHeapMalloc.h:118
	int32_t mnBufferSize;

	// Unknown accessibility
	// GeneralAllocator.h:294
	typedef GeneralAllocator GeneralAllocator;

	// CgsHeapMalloc.h:123
	HeapMalloc::GeneralAllocator mAllocator;

public:
	// CgsHeapMalloc.h:59
	void Construct(void *, int32_t);

	// CgsHeapMalloc.h:63
	void Destruct();

	// CgsHeapMalloc.h:67
	bool Prepare();

	// CgsHeapMalloc.h:73
	void * Malloc(int32_t, int32_t);

	// CgsHeapMalloc.h:78
	void Free(void *);

	// CgsHeapMalloc.h:84
	void * ReAlloc(void *, int32_t);

	// CgsHeapMalloc.h:90
	void * CAlloc(int32_t, int32_t);

	// CgsHeapMalloc.h:97
	void PrintAllocations();

	// CgsHeapMalloc.h:102
	uint32_t GetLargestFreeBlock(bool);

	// CgsHeapMalloc.h:111
	HeapMalloc::GeneralAllocator * GetAllocator();

}

// CgsHeapMalloc.h:33
namespace CgsMemory {
	struct HeapMalloc;

	struct LinearMalloc;

	struct DataStreamCommandPoster;

	struct SimpleDataStreamResultIterator;

	struct MemoryBankResourceSet;

	struct MemoryMapBaseBank;

	struct MemoryMapBank;

	struct MemoryMapPool;

	struct MemoryMapRawResource;

	struct MemoryMapLinearAllocator;

	struct MemoryMapHeapAllocator;

	struct MemoryMapRWLinearAllocator;

	struct MemoryMapRWGeneralAllocator;

	// CgsHeapMalloc.h:37
	const int32_t KI_DEFAULT_ALIGNMENT = 4;

}

// CgsHeapMalloc.h:33
namespace CgsMemory {
	struct HeapMalloc;

	struct MemoryBankResourceSet;

	struct LinearMalloc;

	struct MemoryMapBaseBank;

	struct MemoryMapBank;

	struct MemoryMapPool;

	struct MemoryMapRawResource;

	struct MemoryMapLinearAllocator;

	struct MemoryMapHeapAllocator;

	struct MemoryMapRWLinearAllocator;

	struct MemoryMapRWGeneralAllocator;

	struct DataStreamCommandPoster;

	struct SimpleDataStreamResultIterator;

	// CgsHeapMalloc.h:37
	const int32_t KI_DEFAULT_ALIGNMENT = 4;

}

// CgsHeapMalloc.h:33
namespace CgsMemory {
	struct HeapMalloc;

	struct LinearMalloc;

	struct MemoryBankResourceSet;

	struct DataStreamCommandPoster;

	struct SimpleDataStreamResultIterator;

	// CgsHeapMalloc.h:37
	const int32_t KI_DEFAULT_ALIGNMENT = 4;

}

// CgsHeapMalloc.h:33
namespace CgsMemory {
	struct HeapMalloc;

	struct LinearMalloc;

	struct MemoryBankResourceSet;

	struct MemoryMapBaseBank;

	struct MemoryMapBank;

	struct MemoryMapPool;

	struct MemoryMapRawResource;

	struct MemoryMapLinearAllocator;

	struct MemoryMapHeapAllocator;

	struct MemoryMapRWLinearAllocator;

	struct MemoryMapRWGeneralAllocator;

	struct DataStreamCommandPoster;

	struct SimpleDataStreamResultIterator;

	// CgsHeapMalloc.h:37
	const int32_t KI_DEFAULT_ALIGNMENT = 4;

}

// CgsHeapMalloc.h:33
namespace CgsMemory {
	struct HeapMalloc;

	struct MemoryBankResourceSet;

	struct LinearMalloc;

	struct MemoryMapBaseBank;

	struct MemoryMapBank;

	struct MemoryMapPool;

	struct MemoryMapRawResource;

	struct MemoryMapLinearAllocator;

	struct MemoryMapHeapAllocator;

	struct MemoryMapRWLinearAllocator;

	struct MemoryMapRWGeneralAllocator;

	// CgsHeapMalloc.h:37
	const int32_t KI_DEFAULT_ALIGNMENT = 4;

}

// CgsHeapMalloc.h:33
namespace CgsMemory {
	struct HeapMalloc;

	struct LinearMalloc;

	struct MemoryBankResourceSet;

	// CgsHeapMalloc.h:37
	const int32_t KI_DEFAULT_ALIGNMENT = 4;

}

// CgsHeapMalloc.h:33
namespace CgsMemory {
	struct HeapMalloc;

	struct LinearMalloc;

	struct MemoryBankResourceSet;

	struct MemoryMapBaseBank;

	struct MemoryMapBank;

	struct MemoryMapPool;

	struct MemoryMapRawResource;

	struct MemoryMapLinearAllocator;

	struct MemoryMapHeapAllocator;

	struct MemoryMapRWLinearAllocator;

	struct MemoryMapRWGeneralAllocator;

	// CgsHeapMalloc.h:37
	const int32_t KI_DEFAULT_ALIGNMENT = 4;

}

// CgsLuaState.h:32
namespace CgsMemory {
	// CgsHeapMalloc.h:37
	const int32_t KI_DEFAULT_ALIGNMENT = 4;

}

// CgsLinearMalloc.h:28
namespace CgsMemory {
	// CgsHeapMalloc.h:37
	const int32_t KI_DEFAULT_ALIGNMENT = 4;

}

// CgsHeapMalloc.h:33
namespace CgsMemory {
	struct HeapMalloc;

	struct MemoryBlock;

	struct MemoryBankResourceSet;

	struct LinearMalloc;

	struct MemoryMapBaseBank;

	struct MemoryMapBank;

	struct MemoryMapPool;

	struct MemoryMapRawResource;

	struct MemoryMapLinearAllocator;

	struct MemoryMapHeapAllocator;

	struct MemoryMapRWLinearAllocator;

	struct MemoryMapRWGeneralAllocator;

	struct DataStreamCommandPoster;

	struct SimpleDataStreamResultIterator;

	struct IOStackLinearMalloc<1048576>;

	// CgsHeapMalloc.h:37
	const int32_t KI_DEFAULT_ALIGNMENT = 4;

}

// CgsHeapMalloc.h:33
namespace CgsMemory {
	struct HeapMalloc;

	struct LinearMalloc;

	struct DataStreamCommandPoster;

	struct SimpleDataStreamResultIterator;

	struct MemoryBankResourceSet;

	// CgsHeapMalloc.h:37
	const int32_t KI_DEFAULT_ALIGNMENT = 4;

}

// CgsHeapMalloc.h:33
namespace CgsMemory {
	struct HeapMalloc;

	struct LinearMalloc;

	struct Relocator;

	struct RelocationParams;

	struct MemoryBankResourceSet;

	struct DistributionEntry;

	struct DistributionStream;

	struct GatherStreamBase;

	struct GatherStream;

	struct ScatterStreamBase;

	struct ScatterStream;

	struct DataStreamCommandPoster;

	struct RelocationEntry;

	struct RelocationTestParams;

	struct MemoryMapBaseBank;

	struct MemoryMapBank;

	struct MemoryMapPool;

	struct MemoryMapRawResource;

	struct MemoryMapLinearAllocator;

	struct MemoryMapHeapAllocator;

	struct MemoryMapRWLinearAllocator;

	struct MemoryMapRWGeneralAllocator;

	// CgsHeapMalloc.h:37
	const int32_t KI_DEFAULT_ALIGNMENT = 4;

}

// CgsHeapMalloc.h:33
namespace CgsMemory {
	struct HeapMalloc;

	struct MemoryBankResourceSet;

	struct LinearMalloc;

	struct DataStreamCommandPoster;

	struct SimpleDataStreamResultIterator;

	// CgsHeapMalloc.h:37
	const int32_t KI_DEFAULT_ALIGNMENT = 4;

}

// CgsHeapMalloc.h:33
namespace CgsMemory {
	struct HeapMalloc;

	struct LinearMalloc;

	struct Relocator;

	struct RelocationParams;

	struct MemoryBankResourceSet;

	struct MemoryMapBaseBank;

	struct MemoryMapBank;

	struct MemoryMapPool;

	struct MemoryMapRawResource;

	struct MemoryMapLinearAllocator;

	struct MemoryMapHeapAllocator;

	struct MemoryMapRWLinearAllocator;

	struct MemoryMapRWGeneralAllocator;

	struct DataStreamCommandPoster;

	struct SimpleDataStreamResultIterator;

	struct DistributionEntry;

	struct DistributionStream;

	struct GatherStreamBase;

	struct GatherStream;

	struct ScatterStreamBase;

	struct ScatterStream;

	struct RelocationEntry;

	struct RelocationTestParams;

	struct IndexedNodeHeapEntry;

	struct IndexedNodeHeap;

	// Declaration
	struct MemoryModule {
	public:
		~MemoryModule();

		MemoryModule();

	}

	// CgsHeapMalloc.h:37
	const int32_t KI_DEFAULT_ALIGNMENT = 4;

}

// CgsHeapMalloc.h:33
namespace CgsMemory {
	struct HeapMalloc;

	struct LinearMalloc;

	// Declaration
	struct HeapMallocCoreAllocator {
	public:
		HeapMallocCoreAllocator();

		virtual ~HeapMallocCoreAllocator();

	}

	// CgsHeapMalloc.h:37
	const int32_t KI_DEFAULT_ALIGNMENT = 4;

}

// CgsHeapMalloc.h:137
void CgsMemory::HeapMallocCoreAllocator::HeapMallocCoreAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHeapMalloc.h:137
void CgsMemory::HeapMallocCoreAllocator::~HeapMallocCoreAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDataStreamResultReader.h:24
namespace CgsMemory {
	// CgsHeapMalloc.h:37
	const int32_t KI_DEFAULT_ALIGNMENT = 4;

}

// CgsHeapMalloc.h:33
namespace CgsMemory {
	struct HeapMalloc;

	struct LinearMalloc;

	struct DataStreamResultPoster;

	// CgsHeapMalloc.h:37
	const int32_t KI_DEFAULT_ALIGNMENT = 4;

}

// CgsHeapMalloc.h:33
namespace CgsMemory {
	struct LinearMalloc;

	// CgsHeapMalloc.h:37
	const int32_t KI_DEFAULT_ALIGNMENT = 4;

}

// CgsHeapMalloc.h:33
namespace CgsMemory {
	// CgsHeapMalloc.h:37
	const int32_t KI_DEFAULT_ALIGNMENT = 4;

}

// CgsHeapMalloc.h:33
namespace CgsMemory {
	struct HeapMalloc;

	struct HeapMallocCoreAllocator;

	struct LinearMalloc;

	struct MemoryBlock;

	struct MemoryBankResourceSet;

	struct DistributionEntry;

	struct DistributionStream;

	struct GatherStreamBase;

	struct GatherStream;

	struct ScatterStreamBase;

	struct ScatterStream;

	struct IndexedNodeHeapEntry;

	struct IndexedNodeHeap;

	struct Relocator;

	struct RelocationParams;

	struct MemoryMapBaseBank;

	struct MemoryMapBank;

	struct MemoryMapPool;

	struct MemoryMapRawResource;

	struct MemoryMapLinearAllocator;

	struct MemoryMapHeapAllocator;

	struct MemoryMapRWLinearAllocator;

	struct MemoryMapRWGeneralAllocator;

	struct MemoryMap;

	struct DataStreamCommandPoster;

	struct DataStreamResultPoster;

	struct SimpleDataStreamResultIterator;

	struct SimpleDataStreamConsumer;

	struct RelocationEntry;

	struct DataStreamUnitTest;

	struct DebugComponentMemory;

	struct MemoryBankMenuItem;

	void TraceFunc(const char *, void *);

	// CgsHeapMalloc.h:37
	const int32_t KI_DEFAULT_ALIGNMENT = 4;

}

// CgsHeapMalloc.h:137
struct CgsMemory::HeapMallocCoreAllocator : public EA::Allocator::ICoreAllocator {
private:
	// CgsHeapMalloc.h:162
	HeapMalloc mAllocator;

public:
	// CgsHeapMalloc.cpp:221
	void Construct(void *, int32_t);

	// CgsHeapMalloc.cpp:234
	void Destruct();

	// CgsHeapMalloc.cpp:247
	// Declaration
	virtual void * Alloc(size_t, const char *, unsigned int) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsHeapMalloc.cpp:249
		using namespace CgsDev::Message;

	}

	// CgsHeapMalloc.cpp:263
	// Declaration
	virtual void * Alloc(size_t, const char *, unsigned int, unsigned int, unsigned int) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsHeapMalloc.cpp:266
		using namespace CgsDev::Message;

	}

	// CgsHeapMalloc.cpp:280
	// Declaration
	virtual void Free(void *, size_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsHeapMalloc.cpp:282
		using namespace CgsDev::Message;

	}

	virtual void ~HeapMallocCoreAllocator();

}

// CgsServerInterfaceDirtySock.h:33
namespace CgsMemory {
	// CgsHeapMalloc.h:37
	const int32_t KI_DEFAULT_ALIGNMENT = 4;

}

// CgsHeapMalloc.h:33
namespace CgsMemory {
	struct HeapMalloc;

	struct LinearMalloc;

	struct DataStreamCommandPoster;

	struct SimpleDataStreamResultIterator;

	// CgsHeapMalloc.h:37
	const int32_t KI_DEFAULT_ALIGNMENT = 4;

}

// CgsHeapMalloc.h:33
namespace CgsMemory {
	struct HeapMalloc;

	// Declaration
	struct HeapMallocCoreAllocator {
	public:
		HeapMallocCoreAllocator();

		virtual ~HeapMallocCoreAllocator();

	}

	struct LinearMalloc;

	struct Relocator;

	struct RelocationParams;

	struct MemoryBankResourceSet;

	struct DistributionEntry;

	struct IndexedNodeHeapEntry;

	struct IndexedNodeHeap;

	struct DistributionStream;

	struct GatherStreamBase;

	struct GatherStream;

	struct ScatterStreamBase;

	struct ScatterStream;

	struct DataStreamCommandPoster;

	struct RelocationEntry;

	struct RelocationTestParams;

	struct SimpleDataStreamResultIterator;

	// CgsHeapMalloc.h:37
	const int32_t KI_DEFAULT_ALIGNMENT = 4;

}

