// CgsResourceID.h:30
namespace CgsResource {
	// CgsResourceHeap.h:153
	const const char *[3] KAC_BATCH_ALLOC_RESULT_TEXT;

}

// CgsResourceHeap.h:172
extern const uint32_t KU_MAX_SIZE = 2415919103;

// programbuffer.h:24
namespace CgsResource {
	// CgsResourceHeap.h:153
	const const char *[3] KAC_BATCH_ALLOC_RESULT_TEXT;

}

// CgsSmallResource.h:24
namespace CgsResource {
	// CgsResourceHeap.h:153
	const const char *[3] KAC_BATCH_ALLOC_RESULT_TEXT;

}

// CgsLuaState.h:37
namespace CgsResource {
	// CgsResourceHeap.h:153
	const const char *[3] KAC_BATCH_ALLOC_RESULT_TEXT;

}

// CgsResourceID.h:30
namespace CgsResource {
	// CgsResourceHeap.h:146
	enum EBatchAllocResult {
		E_BATCHALLOCRESULT_SUCCESS = 0,
		E_BATCHALLOCRESULT_FAIL_NEED_DEFRAG = 1,
		E_BATCHALLOCRESULT_FAIL_NO_ROOM = 2,
	}

	// CgsResourceHeap.h:153
	const const char *[3] KAC_BATCH_ALLOC_RESULT_TEXT;

}

// CgsResourceHeap.h:54
struct CgsResource::AllocRequest {
	// CgsResourceHeap.h:56
	uint32_t muSize;

	// CgsResourceHeap.h:57
	uint32_t muAlignment;

	// CgsResourceHeap.h:58
	bool mbAllocateTop;

	// CgsResourceHeap.h:59
	void * mpOwner;

}

// CgsResourceHeap.h:71
struct CgsResource::AllocRequestAddressed {
	// CgsResourceHeap.h:73
	uint32_t muSize;

	// CgsResourceHeap.h:74
	uint32_t muOffset;

	// CgsResourceHeap.h:75
	void * mpOwner;

}

// CgsResourceHeap.h:87
struct CgsResource::AllocResult {
	// CgsResourceHeap.h:89
	void * mpData;

	// CgsResourceHeap.h:90
	uint16_t muIndex;

}

// CgsResourceHeap.h:102
struct CgsResource::RelocateRequest {
	// CgsResourceHeap.h:104
	uint16_t muNode;

	// CgsResourceHeap.h:105
	uint32_t muDestOffset;

}

// CgsResourceHeap.h:117
struct CgsResource::RelocateSource {
	// CgsResourceHeap.h:119
	uint32_t muSourceOffset;

	// CgsResourceHeap.h:120
	uint32_t muSize;

	// CgsResourceHeap.h:121
	void * mpOwner;

}

// CgsResourceHeap.h:133
struct CgsResource::LinearHeapNode {
	// CgsResourceHeap.h:135
	extern const uint32_t KU_STATUS_FREE;

	// CgsResourceHeap.h:136
	extern const uint32_t KU_STATUS_USED = 1;

	// CgsResourceHeap.h:138
	uint32_t muOffset;

	// CgsResourceHeap.h:139
	uint32_t muSize;

	// CgsResourceHeap.h:140
	uint16_t muStatus;

	// CgsResourceHeap.h:141
	uint16_t muNode;

	// CgsResourceHeap.h:142
	void * mpOwner;

}

// CgsResourceHeap.h:169
struct CgsResource::HeapEntry {
	// CgsResourceHeap.h:172
	extern const uint32_t KU_MAX_SIZE = 2415919103;

private:
	// CgsResourceHeap.h:215
	char * mpAddress;

	// CgsResourceHeap.h:216
	uint32_t muSize;

	// CgsResourceHeap.h:217
	void * mpOwner;

public:
	// CgsResourceHeap.h:175
	bool Contains(char *) const;

	// CgsResourceHeap.h:178
	bool IsFree() const;

	// CgsResourceHeap.h:181
	bool IsAllocated() const;

	// CgsResourceHeap.h:184
	char * GetAddress(bool, uint32_t) const;

	// CgsResourceHeap.h:187
	void * GetOwner() const;

	// CgsResourceHeap.h:190
	uint32_t GetSize() const;

	// CgsResourceHeap.h:198
	void SetAllocated(bool);

	// CgsResourceHeap.h:201
	void SetAddress(char *);

	// CgsResourceHeap.h:204
	void SetOwner(void *);

	// CgsResourceHeap.h:207
	void SetSize(uint32_t);

}

// CgsResourceHeap.h:238
struct CgsResource::Heap {
	// CgsResourceHeap.h:241
	extern const uint32_t FREE_MAGIC_NUMBER = 170;

	// CgsResourceHeap.h:242
	extern const uint32_t USED_MAGIC_NUMBER = 187;

	// CgsResourceHeap.h:244
	extern int32_t _miMallocPerfMon;

	// CgsResourceHeap.h:245
	extern int32_t _miFindNodeContainingAddressPerfMon;

	// CgsResourceHeap.h:246
	extern int32_t _miFindNodeBestFitPerfMon;

	// CgsResourceHeap.h:247
	extern int32_t _miFindNodeTopPerfMon;

	// CgsResourceHeap.h:248
	extern int32_t _miFindNodeBottomPerfMon;

	// CgsResourceHeap.h:249
	extern int32_t _miFetchNewNodePerfMon;

	// CgsResourceHeap.h:250
	extern int32_t _miAddNewToUsedPerfMon;

	// CgsResourceHeap.h:251
	extern int32_t _miRepairListPerfMon;

	// CgsResourceHeap.h:253
	extern int32_t _miMallocTrace;

private:
	// CgsResourceHeap.h:412
	int32_t miNumNodes;

	// Unknown accessibility
	// CgsResourceHeap.h:225
	typedef CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> HeapEntryNode;

	// CgsResourceHeap.h:413
	Heap::HeapEntryNode * mpNodes;

	// Unknown accessibility
	// CgsResourceHeap.h:226
	typedef IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t> HeapEntryList;

	// CgsResourceHeap.h:414
	Heap::HeapEntryList mUnusedNodes;

	// CgsResourceHeap.h:415
	Heap::HeapEntryList mUsedNodes;

	// CgsResourceHeap.h:417
	const char * mpcDebugName;

	// CgsResourceHeap.h:418
	uint32_t muTotalSize;

	// CgsResourceHeap.h:419
	char * mpcAddress;

	// CgsResourceHeap.h:420
	uint32_t muHeapAlignment;

	// CgsResourceHeap.h:421
	int32_t miAllocationNumber;

	// CgsResourceHeap.h:422
	uint32_t muAmountFree;

	// CgsResourceHeap.h:423
	uint32_t muLargestFree;

	// CgsResourceHeap.h:425
	bool mbNeedToRecalcLargestFree;

	// CgsResourceHeap.h:427
	bool mbPrepared;

	// CgsResourceHeap.h:428
	bool mbTracingEnabled;

	// CgsResourceHeap.h:429
	bool mbUpdated;

public:
	// CgsResourceHeap.h:257
	uint32_t GetOverheadMemoryRequired(uint32_t);

	// CgsResourceHeap.h:261
	void Construct();

	// CgsResourceHeap.h:265
	bool Prepare(uint32_t, LinearMalloc *, void *, uint32_t, uint32_t, const char *);

	// CgsResourceHeap.h:269
	bool Reprepare();

	// CgsResourceHeap.h:273
	bool Release();

	// CgsResourceHeap.h:277
	void Destruct();

	// CgsResourceHeap.h:289
	void * Malloc(uint32_t, const char *, void *, uint16_t, uint16_t *, bool, bool, void *);

	// CgsResourceHeap.h:293
	void Free(void *);

	// CgsResourceHeap.h:297
	void Free(uint16_t);

	// CgsResourceHeap.h:301
	int GetAmountFree() const;

	// CgsResourceHeap.h:305
	int GetLargestFreeBlock();

	// CgsResourceHeap.h:309
	uint32_t GetPoolChecksum();

	// CgsResourceHeap.h:313
	bool IsUpdated();

	// CgsResourceHeap.h:317
	void EnableTracing(bool);

	// CgsResourceHeap.h:321
	void DebugPrint();

	// CgsResourceHeap.h:325
	void UnitTest();

	// CgsResourceHeap.h:329
	uint32_t GetHeapAlignment() const;

	// CgsResourceHeap.h:333
	char * GetBaseAddress() const;

	// CgsResourceHeap.h:337
	int32_t GetTotalSize() const;

	// CgsResourceHeap.h:341
	bool Contains(const void *) const;

	// CgsResourceHeap.h:345
	int32_t GetMaxNodes() const;

	// CgsResourceHeap.h:356
	void GetNodeUsageStatistics(int32_t *, int32_t *, int32_t *, int32_t *, int32_t *, int32_t *, int32_t *);

	// CgsResourceHeap.h:360
	float GetFragmentationLevel();

	// CgsResourceHeap.h:364
	Heap::HeapEntryNode * GetFirstNode(bool);

	// CgsResourceHeap.h:368
	Heap::HeapEntryNode * GetFirstFreeNode(bool);

	// CgsResourceHeap.h:372
	Heap::HeapEntryNode * GetFirstAllocatedNode(bool);

	// CgsResourceHeap.h:376
	Heap::HeapEntryNode * GetNextNode(bool, Heap::HeapEntryNode *);

	// CgsResourceHeap.h:380
	Heap::HeapEntryNode * GetNextFreeNode(bool, Heap::HeapEntryNode *);

	// CgsResourceHeap.h:384
	Heap::HeapEntryNode * GetNextAllocatedNode(bool, Heap::HeapEntryNode *);

	// CgsResourceHeap.h:388
	CgsResource::EBatchAllocResult ExecuteBatchAllocation(AllocRequest *, AllocResult *, uint32_t, bool);

	// CgsResourceHeap.h:392
	CgsResource::EBatchAllocResult ExecuteBatchAddressedAllocation(AllocRequestAddressed *, AllocResult *, uint32_t, bool);

	// CgsResourceHeap.h:396
	void ExecuteBatchRelocation(RelocateRequest *, uint32_t);

	// CgsResourceHeap.h:400
	uint16_t GenerateLinearHeap(LinearHeapNode *, uint16_t);

	// CgsResourceHeap.h:404
	uint32_t CalculateRequiredSizeForAllocList(const AllocRequest *, uint32_t) const;

	// CgsResourceHeap.h:408
	uint32_t CalculateRequiredSizeForAllocList(const AllocRequestAddressed *, uint32_t) const;

private:
	// CgsResourceHeap.h:433
	Heap::HeapEntryNode * GetNewNode(void *, int32_t, bool, const char *, void *);

	// CgsResourceHeap.h:437
	void RemoveNode(Heap::HeapEntryNode *);

	// CgsResourceHeap.h:441
	void UnitTestIteration(void **, int32_t);

	// CgsResourceHeap.h:445
	Heap::HeapEntryNode * FindFreeNodeContainingAddress(Heap::HeapEntryNode *, uint32_t, void *);

	// CgsResourceHeap.h:449
	Heap::HeapEntryNode * FindFreeNodeBestFit(Heap::HeapEntryNode *, uint32_t);

	// CgsResourceHeap.h:453
	Heap::HeapEntryNode * FindFreeNodeFromTop(Heap::HeapEntryNode *, uint32_t);

	// CgsResourceHeap.h:457
	Heap::HeapEntryNode * FindFreeNodeFromBottom(Heap::HeapEntryNode *, uint32_t);

	// CgsResourceHeap.h:463
	int32_t SortAllocsBySizeQSortCallback(const void *, const void *);

}

// CgsResourceTypeIds.h:28
namespace CgsResource {
	// CgsResourceHeap.h:153
	const const char *[3] KAC_BATCH_ALLOC_RESULT_TEXT;

}

// CgsSmallResource.h:24
namespace CgsResource {
	// CgsResourceHeap.h:146
	enum EBatchAllocResult {
		E_BATCHALLOCRESULT_SUCCESS = 0,
		E_BATCHALLOCRESULT_FAIL_NEED_DEFRAG = 1,
		E_BATCHALLOCRESULT_FAIL_NO_ROOM = 2,
	}

	// CgsResourceHeap.h:153
	const const char *[3] KAC_BATCH_ALLOC_RESULT_TEXT;

}

// CgsResourceHeap.h:135
extern const uint32_t KU_STATUS_FREE;

// CgsResourceHeap.h:136
extern const uint32_t KU_STATUS_USED = 1;

