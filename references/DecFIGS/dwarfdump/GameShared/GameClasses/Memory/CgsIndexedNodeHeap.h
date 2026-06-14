// CgsIndexedNodeHeap.h:42
struct CgsMemory::IndexedNodeHeapEntry {
	// CgsIndexedNodeHeap.h:51
	uint32_t muOffset;

	// CgsIndexedNodeHeap.h:52
	uint32_t muSize;

	// CgsIndexedNodeHeap.h:53
	uint32_t mxStatus;

}

// CgsIndexedNodeHeap.h:69
struct CgsMemory::IndexedNodeHeap {
	// CgsIndexedNodeHeap.h:57
	typedef IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,uint16_t> IndexedNodeHeapList;

private:
	// CgsIndexedNodeHeap.h:100
	IndexedNodeHeap::IndexedNodeHeapList mNodes;

	// CgsIndexedNodeHeap.h:101
	IndexedNodeHeap::IndexedNodeHeapList mUnusedNodes;

	// CgsIndexedNodeHeap.h:102
	void * mpBuffer;

	// CgsIndexedNodeHeap.h:103
	uint32_t muBufferSize;

	// CgsIndexedNodeHeap.h:104
	uint32_t muAlignment;

public:
	// CgsIndexedNodeHeap.h:74
	// Declaration
	void Construct(IndexedNodeHeapListNode *, uint32_t, void *, uint32_t, uint32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsIndexedNodeHeap.h:56
		typedef CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,uint16_t> IndexedNodeHeapListNode;

	}

	// CgsIndexedNodeHeap.h:78
	void Destruct();

	// CgsIndexedNodeHeap.h:81
	void * Malloc(uint32_t);

	// CgsIndexedNodeHeap.h:84
	void Free(void *);

	// CgsIndexedNodeHeap.h:87
	uint32_t GetTotalAllocated();

	// CgsIndexedNodeHeap.h:90
	void GetHeapBounds(uint32_t *, uint32_t *);

private:
	// CgsIndexedNodeHeap.h:95
	IndexedNodeHeapListNode * PopNode();

	// CgsIndexedNodeHeap.h:98
	void PushNode(IndexedNodeHeapListNode *);

}

// CgsIndexedNodeHeap.h:69
struct CgsMemory::IndexedNodeHeap {
	// CgsIndexedNodeHeap.h:57
	typedef IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> IndexedNodeHeapList;

private:
	// CgsIndexedNodeHeap.h:100
	IndexedNodeHeap::IndexedNodeHeapList mNodes;

	// CgsIndexedNodeHeap.h:101
	IndexedNodeHeap::IndexedNodeHeapList mUnusedNodes;

	// CgsIndexedNodeHeap.h:102
	void * mpBuffer;

	// CgsIndexedNodeHeap.h:103
	uint32_t muBufferSize;

	// CgsIndexedNodeHeap.h:104
	uint32_t muAlignment;

public:
	// CgsIndexedNodeHeap.h:74
	// Declaration
	void Construct(IndexedNodeHeapListNode *, uint32_t, void *, uint32_t, uint32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsIndexedNodeHeap.h:56
		typedef CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> IndexedNodeHeapListNode;

	}

	// CgsIndexedNodeHeap.h:78
	void Destruct();

	// CgsIndexedNodeHeap.h:81
	void * Malloc(uint32_t);

	// CgsIndexedNodeHeap.h:84
	void Free(void *);

	// CgsIndexedNodeHeap.h:87
	uint32_t GetTotalAllocated();

	// CgsIndexedNodeHeap.h:90
	void GetHeapBounds(uint32_t *, uint32_t *);

private:
	// CgsIndexedNodeHeap.h:95
	IndexedNodeHeapListNode * PopNode();

	// CgsIndexedNodeHeap.h:98
	void PushNode(IndexedNodeHeapListNode *);

}

