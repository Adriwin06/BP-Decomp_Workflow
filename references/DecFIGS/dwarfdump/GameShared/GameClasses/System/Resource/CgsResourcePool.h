// CgsResourcePool.h:127
extern const uint32_t KI_MAX_DEPENDENCIES = 16;

// CgsResourcePool.h:150
extern int32_t _miPoolFixupResourcePerfMon;

// CgsResourcePool.h:58
struct CgsResource::PoolStats {
	// CgsResourcePool.h:60
	const char * mpcPoolName;

	// CgsResourcePool.h:61
	int32_t miPoolMaxResources;

	// CgsResourcePool.h:62
	int32_t miPoolUsedResources;

	// CgsResourcePool.h:63
	int32_t miPoolFreeResources;

	// CgsResourcePool.h:64
	int32_t[3] maiHeapSize;

	// CgsResourcePool.h:65
	int32_t[3] maiHeapUsed;

	// CgsResourcePool.h:66
	int32_t[3] maiHeapFree;

	// CgsResourcePool.h:67
	int32_t[3] maiHeapMaxResources;

	// CgsResourcePool.h:68
	int32_t[3] maiHeapUsedResources;

	// CgsResourcePool.h:69
	int32_t[3] maiHeapFreeResources;

	// CgsResourcePool.h:70
	int32_t[3] maiHeapLargestBlock;

}

// CgsResourceID.h:30
namespace CgsResource {
	// Declaration
	struct Pool {
		// CgsResourcePool.h:179
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_DONE = 1,
		}

		// CgsResourcePool.h:186
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_DONE = 1,
		}

		// CgsResourcePool.h:193
		enum ECreateResult {
			CREATERESULT_OK = 0,
			CREATERESULT_NEEDDEFRAGGING = 1,
			CREATERESULT_OUTOFMEMORY = 2,
			CREATERESULT_OUTOFENTRIES = 3,
			CREATERESULT_OUTOFIMPORTS = 4,
		}

		// CgsResourcePool.h:203
		enum EDefragStage {
			DEFRAGSTAGE_IDLE = 0,
			DEFRAGSTAGE_WAIT_FOR_INITIAL_DEATHS = 1,
			DEFRAGSTAGE_MAKE_TEMP_COPIES = 2,
			DEFRAGSTAGE_WAIT_FOR_SOURCE_DEATH = 3,
			DEFRAGSTAGE_MAKE_DEST_COPIES = 4,
			DEFRAGSTAGE_WAIT_FOR_TEMP_DEATH = 5,
			DEFRAGSTAGE_DONE = 6,
		}

		// CgsResourcePool.h:216
		struct HeapInfo {
			// CgsResourcePool.h:218
			uint32_t muMaxNodes;

			// CgsResourcePool.h:219
			uint32_t muHeapMemorySize;

			// CgsResourcePool.h:220
			uint32_t muHeapAlignment;

		}

		// CgsResourcePool.h:225
		struct InitOptions {
			// CgsResourcePool.h:227
			int32_t miId;

			// CgsResourcePool.h:228
			const char * mpcName;

			// CgsResourcePool.h:229
			CgsResource::Pool::HeapInfo[3] maHeapInfo;

			// CgsResourcePool.h:231
			ResourceHandle::Resource mResource;

			// CgsResourcePool.h:232
			Entry::ResourceDescriptor mDescriptor;

			// CgsResourcePool.h:234
			uint32_t muMaxResources;

			// CgsResourcePool.h:235
			uint32_t muMaxImports;

			// CgsResourcePool.h:237
			int32_t miRefCountThreshold;

			// CgsResourcePool.h:239
			int32_t miNumDependencies;

			// CgsResourcePool.h:240
			CgsResource::Pool *[16] mapDependencies;

			// CgsResourcePool.h:242
			int32_t miBankId;

			// CgsResourcePool.h:244
			bool mbAllowDefragmentation;

		}

	}

}

// CgsResourcePool.h:85
struct CgsResource::AllocListSet {
	// CgsResourcePool.h:91
	uint32_t[3] manAllocRequestCounts;

	// CgsResourcePool.h:92
	CgsResource::EBatchAllocResult[3] maeAllocRequestResults;

	// CgsResourcePool.h:93
	AllocRequest *[3] mapAllocRequests;

	// CgsResourcePool.h:94
	AllocResult *[3] mapAllocResults;

public:
	// CgsResourcePool.h:89
	void ClearCountsAndResults();

}

// CgsResourcePool.h:106
struct CgsResource::NewResource {
	// CgsResourcePool.h:108
	ID mID;

	// CgsResourcePool.h:109
	Entry::ResourceDescriptor mResourceDescriptor;

	// CgsResourcePool.h:110
	int32_t miNumImports;

	// CgsResourcePool.h:111
	const CgsResource::Type * mpResourceType;

	// CgsResourcePool.h:112
	uint32_t muImportTableOffset;

}

// CgsResourcePool.h:124
struct CgsResource::Pool : public BasePool {
	// CgsResourcePool.h:127
	extern const uint32_t KI_MAX_DEPENDENCIES = 16;

	// CgsResourcePool.h:128
	extern const uint32_t KU_IMPORT_MASK_DIVISION = 134217728;

	// CgsResourcePool.h:135
	extern int32_t _miPoolUpdatePerfMon;

	// CgsResourcePool.h:136
	extern int32_t _miPoolModuleStatePerfMon;

	// CgsResourcePool.h:137
	extern int32_t _miPoolModuleIdle;

	// CgsResourcePool.h:138
	extern int32_t _miPoolModuleAllocating;

	// CgsResourcePool.h:139
	extern int32_t _miPoolModuleDeallocating;

	// CgsResourcePool.h:140
	extern int32_t _miPoolModuleLiveupdate;

	// CgsResourcePool.h:141
	extern int32_t _miPoolModuleIntellifrag;

	// CgsResourcePool.h:142
	extern int32_t _miPoolModuleEmergencyFrag;

	// CgsResourcePool.h:144
	extern int32_t _miPoolAllocateResourceListPerfMon;

	// CgsResourcePool.h:145
	extern int32_t _miPoolCreateEntriesPerfMon;

	// CgsResourcePool.h:146
	extern int32_t _miPoolAllocatePerfMon;

	// CgsResourcePool.h:147
	extern int32_t _miPoolMergeAllocatePerfMon;

	// CgsResourcePool.h:148
	extern int32_t _miPoolFixupPerfMon;

	// CgsResourcePool.h:149
	extern int32_t _miPoolFindByIndexPerfMon;

	// CgsResourcePool.h:150
	extern int32_t _miPoolFixupResourcePerfMon;

	// CgsResourcePool.h:152
	extern int32_t _miPoolDefragPerfMon;

	// CgsResourcePool.h:153
	extern int32_t _miPoolDefragWFInitialDeathsPerfMon;

	// CgsResourcePool.h:154
	extern int32_t _miPoolDefragWFSourceDeathsPerfMon;

	// CgsResourcePool.h:155
	extern int32_t _miPoolDefragWFTempDeathsPerfMon;

	// CgsResourcePool.h:156
	extern int32_t _miPoolDefragWFDonePerfMon;

	// CgsResourcePool.h:158
	extern int32_t _miPoolDefragMakeTempPerfMon;

	// CgsResourcePool.h:159
	extern int32_t _miPoolDefragMoveToTempPerfMon;

	// CgsResourcePool.h:160
	extern int32_t _miPoolDefragResolveTempPerfMon;

	// CgsResourcePool.h:162
	extern int32_t _miPoolDefragMakeDestPerfMon;

	// CgsResourcePool.h:163
	extern int32_t _miPoolDefragMoveToDestPerfMon;

	// CgsResourcePool.h:164
	extern int32_t _miPoolDefragMoveDestRebasePerfMon;

	// CgsResourcePool.h:165
	extern int32_t _miPoolDefragResolveDestPerfMon;

	// CgsResourcePool.h:167
	extern int32_t _miPoolFindTypePerfMon;

	// CgsResourcePool.h:169
	extern int32_t _miPoolDeleteHashEntryPerfMon;

	// CgsResourcePool.h:170
	extern int32_t _miPoolDeleteMemoryPerfMon;

	// CgsResourcePool.h:171
	extern int32_t _miPoolDeleteResourcePerfMon;

	// CgsResourcePool.h:173
	extern int32_t _miPoolAddTempTrace;

	// CgsResourcePool.h:174
	extern int32_t _miResolveAllTrace;

	// CgsResourcePool.h:176
	extern int32_t _miFixupTrace;

private:
	// CgsResourcePool.h:561
	Heap[3] maHeaps;

	// CgsResourcePool.h:562
	ResourceHandle::Resource mResource;

	// CgsResourcePool.h:563
	Entry::ResourceDescriptor mDescriptor;

	// CgsResourcePool.h:565
	bool mbIsValid;

	// CgsResourcePool.h:567
	CgsResource::Entry * mpResourceEntries;

	// CgsResourcePool.h:568
	uint8_t * mpx8ResourceStatuses;

	// CgsResourcePool.h:569
	int16_t * mpiResourceRefCounts;

	// CgsResourcePool.h:570
	int32_t * mpiResourceImportCounts;

	// CgsResourcePool.h:572
	ID * mpHash;

	// CgsResourcePool.h:575
	DebugResourceTracker * mpTracker;

	// CgsResourcePool.h:578
	int16_t * mpnBatchIndices;

	// CgsResourcePool.h:579
	uint16_t muMaxResources;

	// CgsResourcePool.h:580
	uint16_t muNumFreeResources;

	// CgsResourcePool.h:581
	int32_t miRefCountThreshold;

	// CgsResourcePool.h:583
	int32_t miId;

	// CgsResourcePool.h:584
	char[32] macName;

	// CgsResourcePool.h:586
	CgsResource::Pool::EPrepareStage mePrepareStage;

	// CgsResourcePool.h:587
	CgsResource::Pool::EReleaseStage meReleaseStage;

	// CgsResourcePool.h:589
	CgsResource::Pool::EDefragStage meDefragStage;

	// CgsResourcePool.h:591
	int32_t miNumDependencies;

	// CgsResourcePool.h:592
	CgsResource::Pool *[16] mapDependencies;

	// CgsResourcePool.h:594
	HashEntry * mpHashEntries;

	// CgsResourcePool.h:595
	HashTable mHashTable;

	// CgsResourcePool.h:597
	int32_t miBankId;

	// CgsResourcePool.h:599
	CgsMemory::Relocator * mpCurrentRelocator;

	// CgsResourcePool.h:600
	CgsResource::ScratchPool * mpCurrentScratchPool;

	// CgsResourcePool.h:601
	uint32_t muNumRelocations;

	// CgsResourcePool.h:602
	uint32_t muNextRelocation;

	// CgsResourcePool.h:603
	RelocateRequest * mpRelocateRequests;

	// CgsResourcePool.h:604
	RelocateSource * mpRelocateSources;

	// CgsResourcePool.h:605
	int32_t miDefragFrame;

	// CgsResourcePool.h:606
	int32_t miDefragMemType;

	// CgsResourcePool.h:607
	bool mbAllowDefragmentation;

	// CgsResourcePool.h:608
	bool mbDefragHitEndResource;

	// CgsResourcePool.h:610
	int32_t miNumResourcesInPurgatory;

public:
	// CgsResourcePool.h:249
	uint32_t GetOverheadMemoryRequired(const CgsResource::Pool::InitOptions *);

	// CgsResourcePool.h:253
	// Declaration
	uint32_t PrintOverheadMemoryRequired(const CgsResource::Pool::InitOptions *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsResourcePool.h:818
		using namespace CgsDev::Message;

		// CgsResourcePool.h:823
		using namespace CgsDev::Message;

		// CgsResourcePool.h:827
		using namespace CgsDev::Message;

	}

	// CgsResourcePool.h:257
	void Construct();

	// CgsResourcePool.h:261
	bool Prepare();

	// CgsResourcePool.h:265
	bool Release();

	// CgsResourcePool.h:269
	void Destruct();

	// CgsResourcePool.h:275
	void InitPool(const CgsResource::Pool::InitOptions *);

	// CgsResourcePool.h:279
	void ResetPool();

	// CgsResourcePool.h:287
	CgsResource::Entry * GetResource(int32_t, bool, uint16_t);

	// CgsResourcePool.h:296
	CgsResource::Entry * FindResource(ID, bool, uint16_t, int32_t *);

	// CgsResourcePool.h:304
	int32_t FindResourceIndex(ID, bool, uint16_t);

	// CgsResourcePool.h:314
	CgsResource::Entry * FindResourceWithDependencies(ID, CgsResource::Pool **, bool, uint16_t, int32_t *);

	// CgsResourcePool.h:323
	int32_t FindResourceIndexWithDependencies(ID, CgsResource::Pool **, bool, uint16_t);

	// CgsResourcePool.h:332
	CgsResource::Pool::ECreateResult CreateEntry(const NewResource *, CgsResource::Entry **, int32_t *, bool);

	// CgsResourcePool.h:341
	CgsResource::Pool::ECreateResult CreateEntryInSlot(const NewResource *, CgsResource::Entry **, int32_t, bool);

	// CgsResourcePool.h:345
	bool Invalidate(ResourceHandle::Resource *, Entry::ResourceDescriptor *);

	// CgsResourcePool.h:349
	bool Validate();

	// CgsResourcePool.h:353
	const int16_t * CreateBatchEntrySlots(int16_t);

	// CgsResourcePool.h:359
	CgsResource::Pool::ECreateResult ExecuteBatchAllocations(AllocListSet *, bool);

	// CgsResourcePool.h:365
	CgsResource::EBatchAllocResult ExecuteBatchAllocation(AllocListSet *, int32_t);

	// CgsResourcePool.h:374
	CgsResource::EBatchAllocResult ExecuteBatchAddressedAllocation(int32_t, AllocRequestAddressed *, AllocResult *, uint32_t, bool);

	// CgsResourcePool.h:381
	CgsResource::Pool::ECreateResult MergeBatchAllocations(AllocListSet *, const CgsResource::BundleV2::ResourceEntry *, ResourceHandle::Resource *);

	// CgsResourcePool.h:388
	CgsResource::Entry * AddReference(uint32_t);

	// CgsResourcePool.h:394
	bool RemoveReference(uint32_t);

	// CgsResourcePool.h:398
	void Update();

	// CgsResourcePool.h:402
	const char * GetName() const;

	// CgsResourcePool.h:406
	int32_t GetId() const;

	// CgsResourcePool.h:410
	int32_t GetBankId();

	// CgsResourcePool.h:415
	uint32_t GetHeapAlignment(int32_t) const;

	// CgsResourcePool.h:419
	int32_t GetNumDependencies() const;

	// CgsResourcePool.h:423
	CgsResource::Pool * GetDependency(int32_t) const;

	// CgsResourcePool.h:427
	void ResolveAllResources();

	// CgsResourcePool.h:431
	void ResolveAllTempScratchResources();

	// CgsResourcePool.h:435
	void ResolveAllDestScratchResources();

	// CgsResourcePool.h:439
	void ResolveAllResourcesThatImportList(const ID *, uint32_t);

	// CgsResourcePool.h:443
	void ResolveAllResourcesThatImportList(const ID *, void **, uint32_t);

	// CgsResourcePool.h:454
	void FixUpAndResolveResourceList(const ID *, int32_t, int32_t, int32_t, bool, bool);

	// CgsResourcePool.h:467
	void BeginDefragmentation(CgsResource::ScratchPool *, RelocateRequest *, RelocateSource *, uint32_t, int32_t);

	// CgsResourcePool.h:476
	void BeginEmergencyDefragmentation(CgsMemory::Relocator *, CgsMemory::RelocationParams *, RelocateRequest *, RelocateSource *, uint32_t, int32_t);

	// CgsResourcePool.h:482
	void DeleteEntry(int16_t);

	// CgsResourcePool.h:485
	void DeleteMemoryForEntry(ID);

	// CgsResourcePool.h:492
	bool ReAllocateMemoryForEntry(ID, Entry::ResourceDescriptor *, int32_t, ResourceHandle::Resource *);

	// CgsResourcePool.h:495
	bool IsDefragmenting() const;

	// CgsResourcePool.h:498
	void BuildAllocRequestForEntry(AllocListSet *, uint16_t, CgsResource::Entry *);

	// CgsResourcePool.h:501
	int16_t GetEntryRefCount(int32_t) const;

	// CgsResourcePool.h:504
	void SetEntryRefCount(int32_t, int16_t);

	// CgsResourcePool.h:507
	void IncEntryRefCount(int32_t);

	// CgsResourcePool.h:510
	void DecEntryRefCount(int32_t);

	// CgsResourcePool.h:513
	uint8_t GetEntryStatus(int32_t) const;

	// CgsResourcePool.h:516
	void SetEntryStatus(int32_t, uint8_t);

	// CgsResourcePool.h:519
	int32_t GetEntryImportCount(int32_t) const;

	// CgsResourcePool.h:522
	void SetEntryImportCount(int32_t, int32_t);

	// CgsResourcePool.h:525
	int32_t GetNumEntriesInPurgatory() const;

	// CgsResourcePool.h:528
	int32_t VerifyResourceImports();

	// CgsResourcePool.h:531
	int32_t GetRefCountThreshold();

	// CgsResourcePool.h:534
	bool GetAllowDefragmentation() const;

	// CgsResourcePool.h:537
	void SetAllowDefragmentation(bool);

	// CgsResourcePool.h:540
	bool IsValid() const;

	// CgsResourcePool.h:543
	uint16_t GenerateLinearHeap(int32_t, LinearHeapNode *, uint16_t);

	// CgsResourcePool.h:552
	void DebugWipeHeap(int32_t);

	// CgsResourcePool.h:557
	// Declaration
	void DebugReport() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsResourcePool.h:74
		typedef void (const PoolStats &, void *) FPoolReportCallback;

	}

private:
	// CgsResourcePool.h:619
	void InitManagementData();

	// CgsResourcePool.h:626
	bool AllocateResourceEntry(CgsResource::Entry **, int32_t *);

	// CgsResourcePool.h:632
	void FreeResourceEntry(int16_t);

	// CgsResourcePool.h:638
	void FreeMemoryForResource(CgsResource::Entry *);

	// CgsResourcePool.h:644
	void FixUpEntry(CgsResource::Entry *);

	// CgsResourcePool.h:650
	void PostFixUpEntry(CgsResource::Entry *);

	// CgsResourcePool.h:656
	CgsResource::BundleV2::ImportEntry * GetResourceEntryImports(uint16_t);

	// CgsResourcePool.h:665
	bool AllocateMemoryForResource(CgsResource::Entry *, const char *, void *, const CgsResource::Type *);

	// CgsResourcePool.h:669
	void UpdateDefrag();

	// CgsResourcePool.h:673
	void UpdateEmergencyDefrag();

	// CgsResourcePool.h:677
	void BeginDefragNextSetOfRelocations();

	// CgsResourcePool.h:681
	bool AddResourceToScratchPool(uint32_t);

	// CgsResourcePool.h:685
	bool RebaseResourceToScratchPool(int32_t);

	// CgsResourcePool.h:689
	bool RebaseResourceFromScratchPool(int32_t);

	// CgsResourcePool.h:693
	bool AddResourcesToScratchPool();

	// CgsResourcePool.h:697
	bool RebaseResourcesToScratchPool();

	// CgsResourcePool.h:701
	bool RebaseResourcesFromScratchPool();

	// CgsResourcePool.h:705
	void DebugWipeSourceResources();

	// CgsResourcePool.h:709
	void DebugWipeTempResources();

	// CgsResourcePool.h:713
	uint32_t GenerateRangeMask(const ID *, int32_t);

	// CgsResourcePool.h:717
	bool ResolveImportForEntry(CgsResource::Entry *, CgsResource::BundleV2::ImportEntry *);

	// CgsResourcePool.h:721
	void ClearImportsForEntry(int32_t, uint32_t);

	// CgsResourcePool.h:725
	bool CheckImportsStillClearForEntry(int32_t, uint32_t);

	// CgsResourcePool.h:729
	bool ResolveImportsForEntry(int32_t);

}

// CgsSmallResource.h:24
namespace CgsResource {
	// Declaration
	struct Pool {
		// CgsResourcePool.h:179
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_DONE = 1,
		}

		// CgsResourcePool.h:186
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_DONE = 1,
		}

		// CgsResourcePool.h:193
		enum ECreateResult {
			CREATERESULT_OK = 0,
			CREATERESULT_NEEDDEFRAGGING = 1,
			CREATERESULT_OUTOFMEMORY = 2,
			CREATERESULT_OUTOFENTRIES = 3,
			CREATERESULT_OUTOFIMPORTS = 4,
		}

		// CgsResourcePool.h:203
		enum EDefragStage {
			DEFRAGSTAGE_IDLE = 0,
			DEFRAGSTAGE_WAIT_FOR_INITIAL_DEATHS = 1,
			DEFRAGSTAGE_MAKE_TEMP_COPIES = 2,
			DEFRAGSTAGE_WAIT_FOR_SOURCE_DEATH = 3,
			DEFRAGSTAGE_MAKE_DEST_COPIES = 4,
			DEFRAGSTAGE_WAIT_FOR_TEMP_DEATH = 5,
			DEFRAGSTAGE_DONE = 6,
		}

		// CgsResourcePool.h:216
		struct HeapInfo {
			// CgsResourcePool.h:218
			uint32_t muMaxNodes;

			// CgsResourcePool.h:219
			uint32_t muHeapMemorySize;

			// CgsResourcePool.h:220
			uint32_t muHeapAlignment;

		}

		// CgsResourcePool.h:225
		struct InitOptions {
			// CgsResourcePool.h:227
			int32_t miId;

			// CgsResourcePool.h:228
			const char * mpcName;

			// CgsResourcePool.h:229
			CgsResource::Pool::HeapInfo[3] maHeapInfo;

			// CgsResourcePool.h:231
			ResourceHandle::Resource mResource;

			// CgsResourcePool.h:232
			Entry::ResourceDescriptor mDescriptor;

			// CgsResourcePool.h:234
			uint32_t muMaxResources;

			// CgsResourcePool.h:235
			uint32_t muMaxImports;

			// CgsResourcePool.h:237
			int32_t miRefCountThreshold;

			// CgsResourcePool.h:239
			int32_t miNumDependencies;

			// CgsResourcePool.h:240
			CgsResource::Pool *[16] mapDependencies;

			// CgsResourcePool.h:242
			int32_t miBankId;

			// CgsResourcePool.h:244
			bool mbAllowDefragmentation;

		}

	}

}

// CgsResourcePool.h:124
struct CgsResource::Pool : public BasePool {
	// CgsResourcePool.h:127
	extern const uint32_t KI_MAX_DEPENDENCIES = 16;

	// CgsResourcePool.h:128
	extern const uint32_t KU_IMPORT_MASK_DIVISION = 134217728;

	// CgsResourcePool.h:135
	extern int32_t _miPoolUpdatePerfMon;

	// CgsResourcePool.h:136
	extern int32_t _miPoolModuleStatePerfMon;

	// CgsResourcePool.h:137
	extern int32_t _miPoolModuleIdle;

	// CgsResourcePool.h:138
	extern int32_t _miPoolModuleAllocating;

	// CgsResourcePool.h:139
	extern int32_t _miPoolModuleDeallocating;

	// CgsResourcePool.h:140
	extern int32_t _miPoolModuleLiveupdate;

	// CgsResourcePool.h:141
	extern int32_t _miPoolModuleIntellifrag;

	// CgsResourcePool.h:142
	extern int32_t _miPoolModuleEmergencyFrag;

	// CgsResourcePool.h:144
	extern int32_t _miPoolAllocateResourceListPerfMon;

	// CgsResourcePool.h:145
	extern int32_t _miPoolCreateEntriesPerfMon;

	// CgsResourcePool.h:146
	extern int32_t _miPoolAllocatePerfMon;

	// CgsResourcePool.h:147
	extern int32_t _miPoolMergeAllocatePerfMon;

	// CgsResourcePool.h:148
	extern int32_t _miPoolFixupPerfMon;

	// CgsResourcePool.h:149
	extern int32_t _miPoolFindByIndexPerfMon;

	// CgsResourcePool.h:150
	extern int32_t _miPoolFixupResourcePerfMon;

	// CgsResourcePool.h:152
	extern int32_t _miPoolDefragPerfMon;

	// CgsResourcePool.h:153
	extern int32_t _miPoolDefragWFInitialDeathsPerfMon;

	// CgsResourcePool.h:154
	extern int32_t _miPoolDefragWFSourceDeathsPerfMon;

	// CgsResourcePool.h:155
	extern int32_t _miPoolDefragWFTempDeathsPerfMon;

	// CgsResourcePool.h:156
	extern int32_t _miPoolDefragWFDonePerfMon;

	// CgsResourcePool.h:158
	extern int32_t _miPoolDefragMakeTempPerfMon;

	// CgsResourcePool.h:159
	extern int32_t _miPoolDefragMoveToTempPerfMon;

	// CgsResourcePool.h:160
	extern int32_t _miPoolDefragResolveTempPerfMon;

	// CgsResourcePool.h:162
	extern int32_t _miPoolDefragMakeDestPerfMon;

	// CgsResourcePool.h:163
	extern int32_t _miPoolDefragMoveToDestPerfMon;

	// CgsResourcePool.h:164
	extern int32_t _miPoolDefragMoveDestRebasePerfMon;

	// CgsResourcePool.h:165
	extern int32_t _miPoolDefragResolveDestPerfMon;

	// CgsResourcePool.h:167
	extern int32_t _miPoolFindTypePerfMon;

	// CgsResourcePool.h:169
	extern int32_t _miPoolDeleteHashEntryPerfMon;

	// CgsResourcePool.h:170
	extern int32_t _miPoolDeleteMemoryPerfMon;

	// CgsResourcePool.h:171
	extern int32_t _miPoolDeleteResourcePerfMon;

	// CgsResourcePool.h:173
	extern int32_t _miPoolAddTempTrace;

	// CgsResourcePool.h:174
	extern int32_t _miResolveAllTrace;

	// CgsResourcePool.h:176
	extern int32_t _miFixupTrace;

private:
	// CgsResourcePool.h:561
	Heap[3] maHeaps;

	// CgsResourcePool.h:562
	ResourceHandle::Resource mResource;

	// CgsResourcePool.h:563
	Entry::ResourceDescriptor mDescriptor;

	// CgsResourcePool.h:565
	bool mbIsValid;

	// CgsResourcePool.h:567
	CgsResource::Entry * mpResourceEntries;

	// CgsResourcePool.h:568
	uint8_t * mpx8ResourceStatuses;

	// CgsResourcePool.h:569
	int16_t * mpiResourceRefCounts;

	// CgsResourcePool.h:570
	int32_t * mpiResourceImportCounts;

	// CgsResourcePool.h:572
	ID * mpHash;

	// CgsResourcePool.h:575
	DebugResourceTracker * mpTracker;

	// CgsResourcePool.h:578
	int16_t * mpnBatchIndices;

	// CgsResourcePool.h:579
	uint16_t muMaxResources;

	// CgsResourcePool.h:580
	uint16_t muNumFreeResources;

	// CgsResourcePool.h:581
	int32_t miRefCountThreshold;

	// CgsResourcePool.h:583
	int32_t miId;

	// CgsResourcePool.h:584
	char[32] macName;

	// CgsResourcePool.h:586
	CgsResource::Pool::EPrepareStage mePrepareStage;

	// CgsResourcePool.h:587
	CgsResource::Pool::EReleaseStage meReleaseStage;

	// CgsResourcePool.h:589
	CgsResource::Pool::EDefragStage meDefragStage;

	// CgsResourcePool.h:591
	int32_t miNumDependencies;

	// CgsResourcePool.h:592
	CgsResource::Pool *[16] mapDependencies;

	// CgsResourcePool.h:594
	HashEntry * mpHashEntries;

	// CgsResourcePool.h:595
	HashTable mHashTable;

	// CgsResourcePool.h:597
	int32_t miBankId;

	// CgsResourcePool.h:599
	CgsMemory::Relocator * mpCurrentRelocator;

	// CgsResourcePool.h:600
	CgsResource::ScratchPool * mpCurrentScratchPool;

	// CgsResourcePool.h:601
	uint32_t muNumRelocations;

	// CgsResourcePool.h:602
	uint32_t muNextRelocation;

	// CgsResourcePool.h:603
	RelocateRequest * mpRelocateRequests;

	// CgsResourcePool.h:604
	RelocateSource * mpRelocateSources;

	// CgsResourcePool.h:605
	int32_t miDefragFrame;

	// CgsResourcePool.h:606
	int32_t miDefragMemType;

	// CgsResourcePool.h:607
	bool mbAllowDefragmentation;

	// CgsResourcePool.h:608
	bool mbDefragHitEndResource;

	// CgsResourcePool.h:610
	int32_t miNumResourcesInPurgatory;

public:
	// CgsResourcePool.h:249
	uint32_t GetOverheadMemoryRequired(const CgsResource::Pool::InitOptions *);

	// CgsResourcePool.h:253
	// Declaration
	uint32_t PrintOverheadMemoryRequired(const CgsResource::Pool::InitOptions *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsResourcePool.h:818
		using namespace CgsDev::Message;

		// CgsResourcePool.h:823
		using namespace CgsDev::Message;

		// CgsResourcePool.h:827
		using namespace CgsDev::Message;

	}

	// CgsResourcePool.h:257
	void Construct();

	// CgsResourcePool.h:261
	bool Prepare();

	// CgsResourcePool.h:265
	bool Release();

	// CgsResourcePool.h:269
	void Destruct();

	// CgsResourcePool.h:275
	void InitPool(const CgsResource::Pool::InitOptions *);

	// CgsResourcePool.h:279
	void ResetPool();

	// CgsResourcePool.h:287
	CgsResource::Entry * GetResource(int32_t, bool, uint16_t);

	// CgsResourcePool.h:296
	CgsResource::Entry * FindResource(ID, bool, uint16_t, int32_t *);

	// CgsResourcePool.h:304
	int32_t FindResourceIndex(ID, bool, uint16_t);

	// CgsResourcePool.h:314
	CgsResource::Entry * FindResourceWithDependencies(ID, CgsResource::Pool **, bool, uint16_t, int32_t *);

	// CgsResourcePool.h:323
	int32_t FindResourceIndexWithDependencies(ID, CgsResource::Pool **, bool, uint16_t);

	// CgsResourcePool.h:332
	CgsResource::Pool::ECreateResult CreateEntry(const NewResource *, CgsResource::Entry **, int32_t *, bool);

	// CgsResourcePool.h:341
	CgsResource::Pool::ECreateResult CreateEntryInSlot(const NewResource *, CgsResource::Entry **, int32_t, bool);

	// CgsResourcePool.h:345
	bool Invalidate(ResourceHandle::Resource *, Entry::ResourceDescriptor *);

	// CgsResourcePool.h:349
	bool Validate();

	// CgsResourcePool.h:353
	const int16_t * CreateBatchEntrySlots(int16_t);

	// CgsResourcePool.h:359
	CgsResource::Pool::ECreateResult ExecuteBatchAllocations(AllocListSet *, bool);

	// CgsResourcePool.h:365
	CgsResource::EBatchAllocResult ExecuteBatchAllocation(AllocListSet *, int32_t);

	// CgsResourcePool.h:374
	CgsResource::EBatchAllocResult ExecuteBatchAddressedAllocation(int32_t, AllocRequestAddressed *, AllocResult *, uint32_t, bool);

	// CgsResourcePool.h:381
	CgsResource::Pool::ECreateResult MergeBatchAllocations(AllocListSet *, const CgsResource::BundleV2::ResourceEntry *, ResourceHandle::Resource *);

	// CgsResourcePool.h:388
	CgsResource::Entry * AddReference(uint32_t);

	// CgsResourcePool.h:394
	bool RemoveReference(uint32_t);

	// CgsResourcePool.h:398
	void Update();

	// CgsResourcePool.h:402
	const char * GetName() const;

	// CgsResourcePool.h:406
	int32_t GetId() const;

	// CgsResourcePool.h:410
	int32_t GetBankId();

	// CgsResourcePool.h:415
	uint32_t GetHeapAlignment(int32_t) const;

	// CgsResourcePool.h:419
	int32_t GetNumDependencies() const;

	// CgsResourcePool.h:423
	CgsResource::Pool * GetDependency(int32_t) const;

	// CgsResourcePool.h:427
	void ResolveAllResources();

	// CgsResourcePool.h:431
	void ResolveAllTempScratchResources();

	// CgsResourcePool.h:435
	void ResolveAllDestScratchResources();

	// CgsResourcePool.h:439
	void ResolveAllResourcesThatImportList(const ID *, uint32_t);

	// CgsResourcePool.h:443
	void ResolveAllResourcesThatImportList(const ID *, void **, uint32_t);

	// CgsResourcePool.h:454
	void FixUpAndResolveResourceList(const ID *, int32_t, int32_t, int32_t, bool, bool);

	// CgsResourcePool.h:467
	void BeginDefragmentation(CgsResource::ScratchPool *, RelocateRequest *, RelocateSource *, uint32_t, int32_t);

	// CgsResourcePool.h:476
	void BeginEmergencyDefragmentation(CgsMemory::Relocator *, CgsMemory::RelocationParams *, RelocateRequest *, RelocateSource *, uint32_t, int32_t);

	// CgsResourcePool.h:482
	void DeleteEntry(int16_t);

	// CgsResourcePool.h:485
	void DeleteMemoryForEntry(ID);

	// CgsResourcePool.h:492
	bool ReAllocateMemoryForEntry(ID, Entry::ResourceDescriptor *, int32_t, ResourceHandle::Resource *);

	// CgsResourcePool.h:495
	bool IsDefragmenting() const;

	// CgsResourcePool.h:498
	void BuildAllocRequestForEntry(AllocListSet *, uint16_t, CgsResource::Entry *);

	// CgsResourcePool.h:501
	int16_t GetEntryRefCount(int32_t) const;

	// CgsResourcePool.h:504
	void SetEntryRefCount(int32_t, int16_t);

	// CgsResourcePool.h:507
	void IncEntryRefCount(int32_t);

	// CgsResourcePool.h:510
	void DecEntryRefCount(int32_t);

	// CgsResourcePool.h:513
	uint8_t GetEntryStatus(int32_t) const;

	// CgsResourcePool.h:516
	void SetEntryStatus(int32_t, uint8_t);

	// CgsResourcePool.h:519
	int32_t GetEntryImportCount(int32_t) const;

	// CgsResourcePool.h:522
	void SetEntryImportCount(int32_t, int32_t);

	// CgsResourcePool.h:525
	int32_t GetNumEntriesInPurgatory() const;

	// CgsResourcePool.h:528
	int32_t VerifyResourceImports();

	// CgsResourcePool.h:531
	int32_t GetRefCountThreshold();

	// CgsResourcePool.h:534
	bool GetAllowDefragmentation() const;

	// CgsResourcePool.h:537
	void SetAllowDefragmentation(bool);

	// CgsResourcePool.h:540
	bool IsValid() const;

	// CgsResourcePool.h:543
	uint16_t GenerateLinearHeap(int32_t, LinearHeapNode *, uint16_t);

	// CgsResourcePool.h:552
	void DebugWipeHeap(int32_t);

	// CgsResourcePool.h:557
	// Declaration
	void DebugReport(FPoolReportCallback *, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsResourcePool.h:74
		typedef void (const PoolStats &, void *) FPoolReportCallback;

	}

private:
	// CgsResourcePool.h:619
	void InitManagementData();

	// CgsResourcePool.h:626
	bool AllocateResourceEntry(CgsResource::Entry **, int32_t *);

	// CgsResourcePool.h:632
	void FreeResourceEntry(int16_t);

	// CgsResourcePool.h:638
	void FreeMemoryForResource(CgsResource::Entry *);

	// CgsResourcePool.h:644
	void FixUpEntry(CgsResource::Entry *);

	// CgsResourcePool.h:650
	void PostFixUpEntry(CgsResource::Entry *);

	// CgsResourcePool.h:656
	CgsResource::BundleV2::ImportEntry * GetResourceEntryImports(uint16_t);

	// CgsResourcePool.h:665
	bool AllocateMemoryForResource(CgsResource::Entry *, const char *, void *, const CgsResource::Type *);

	// CgsResourcePool.h:669
	void UpdateDefrag();

	// CgsResourcePool.h:673
	void UpdateEmergencyDefrag();

	// CgsResourcePool.h:677
	void BeginDefragNextSetOfRelocations();

	// CgsResourcePool.h:681
	bool AddResourceToScratchPool(uint32_t);

	// CgsResourcePool.h:685
	bool RebaseResourceToScratchPool(int32_t);

	// CgsResourcePool.h:689
	bool RebaseResourceFromScratchPool(int32_t);

	// CgsResourcePool.h:693
	bool AddResourcesToScratchPool();

	// CgsResourcePool.h:697
	bool RebaseResourcesToScratchPool();

	// CgsResourcePool.h:701
	bool RebaseResourcesFromScratchPool();

	// CgsResourcePool.h:705
	void DebugWipeSourceResources();

	// CgsResourcePool.h:709
	void DebugWipeTempResources();

	// CgsResourcePool.h:713
	uint32_t GenerateRangeMask(const ID *, int32_t);

	// CgsResourcePool.h:717
	bool ResolveImportForEntry(CgsResource::Entry *, CgsResource::BundleV2::ImportEntry *);

	// CgsResourcePool.h:721
	void ClearImportsForEntry(int32_t, uint32_t);

	// CgsResourcePool.h:725
	bool CheckImportsStillClearForEntry(int32_t, uint32_t);

	// CgsResourcePool.h:729
	bool ResolveImportsForEntry(int32_t);

}

// CgsResourcePool.h:124
struct CgsResource::Pool : public BasePool {
	// CgsResourcePool.h:127
	extern const uint32_t KI_MAX_DEPENDENCIES = 16;

	// CgsResourcePool.h:128
	extern const uint32_t KU_IMPORT_MASK_DIVISION = 134217728;

	// CgsResourcePool.h:135
	extern int32_t _miPoolUpdatePerfMon;

	// CgsResourcePool.h:136
	extern int32_t _miPoolModuleStatePerfMon;

	// CgsResourcePool.h:137
	extern int32_t _miPoolModuleIdle;

	// CgsResourcePool.h:138
	extern int32_t _miPoolModuleAllocating;

	// CgsResourcePool.h:139
	extern int32_t _miPoolModuleDeallocating;

	// CgsResourcePool.h:140
	extern int32_t _miPoolModuleLiveupdate;

	// CgsResourcePool.h:141
	extern int32_t _miPoolModuleIntellifrag;

	// CgsResourcePool.h:142
	extern int32_t _miPoolModuleEmergencyFrag;

	// CgsResourcePool.h:144
	extern int32_t _miPoolAllocateResourceListPerfMon;

	// CgsResourcePool.h:145
	extern int32_t _miPoolCreateEntriesPerfMon;

	// CgsResourcePool.h:146
	extern int32_t _miPoolAllocatePerfMon;

	// CgsResourcePool.h:147
	extern int32_t _miPoolMergeAllocatePerfMon;

	// CgsResourcePool.h:148
	extern int32_t _miPoolFixupPerfMon;

	// CgsResourcePool.h:149
	extern int32_t _miPoolFindByIndexPerfMon;

	// CgsResourcePool.h:150
	extern int32_t _miPoolFixupResourcePerfMon;

	// CgsResourcePool.h:152
	extern int32_t _miPoolDefragPerfMon;

	// CgsResourcePool.h:153
	extern int32_t _miPoolDefragWFInitialDeathsPerfMon;

	// CgsResourcePool.h:154
	extern int32_t _miPoolDefragWFSourceDeathsPerfMon;

	// CgsResourcePool.h:155
	extern int32_t _miPoolDefragWFTempDeathsPerfMon;

	// CgsResourcePool.h:156
	extern int32_t _miPoolDefragWFDonePerfMon;

	// CgsResourcePool.h:158
	extern int32_t _miPoolDefragMakeTempPerfMon;

	// CgsResourcePool.h:159
	extern int32_t _miPoolDefragMoveToTempPerfMon;

	// CgsResourcePool.h:160
	extern int32_t _miPoolDefragResolveTempPerfMon;

	// CgsResourcePool.h:162
	extern int32_t _miPoolDefragMakeDestPerfMon;

	// CgsResourcePool.h:163
	extern int32_t _miPoolDefragMoveToDestPerfMon;

	// CgsResourcePool.h:164
	extern int32_t _miPoolDefragMoveDestRebasePerfMon;

	// CgsResourcePool.h:165
	extern int32_t _miPoolDefragResolveDestPerfMon;

	// CgsResourcePool.h:167
	extern int32_t _miPoolFindTypePerfMon;

	// CgsResourcePool.h:169
	extern int32_t _miPoolDeleteHashEntryPerfMon;

	// CgsResourcePool.h:170
	extern int32_t _miPoolDeleteMemoryPerfMon;

	// CgsResourcePool.h:171
	extern int32_t _miPoolDeleteResourcePerfMon;

	// CgsResourcePool.h:173
	extern int32_t _miPoolAddTempTrace;

	// CgsResourcePool.h:174
	extern int32_t _miResolveAllTrace;

	// CgsResourcePool.h:176
	extern int32_t _miFixupTrace;

private:
	// CgsResourcePool.h:561
	Heap[3] maHeaps;

	// CgsResourcePool.h:562
	ResourceHandle::Resource mResource;

	// CgsResourcePool.h:563
	Entry::ResourceDescriptor mDescriptor;

	// CgsResourcePool.h:565
	bool mbIsValid;

	// CgsResourcePool.h:567
	CgsResource::Entry * mpResourceEntries;

	// CgsResourcePool.h:568
	uint8_t * mpx8ResourceStatuses;

	// CgsResourcePool.h:569
	int16_t * mpiResourceRefCounts;

	// CgsResourcePool.h:570
	int32_t * mpiResourceImportCounts;

	// CgsResourcePool.h:572
	ID * mpHash;

	// CgsResourcePool.h:575
	DebugResourceTracker * mpTracker;

	// CgsResourcePool.h:578
	int16_t * mpnBatchIndices;

	// CgsResourcePool.h:579
	uint16_t muMaxResources;

	// CgsResourcePool.h:580
	uint16_t muNumFreeResources;

	// CgsResourcePool.h:581
	int32_t miRefCountThreshold;

	// CgsResourcePool.h:583
	int32_t miId;

	// CgsResourcePool.h:584
	char[32] macName;

	// CgsResourcePool.h:586
	CgsResource::Pool::EPrepareStage mePrepareStage;

	// CgsResourcePool.h:587
	CgsResource::Pool::EReleaseStage meReleaseStage;

	// CgsResourcePool.h:589
	CgsResource::Pool::EDefragStage meDefragStage;

	// CgsResourcePool.h:591
	int32_t miNumDependencies;

	// CgsResourcePool.h:592
	CgsResource::Pool *[16] mapDependencies;

	// CgsResourcePool.h:594
	HashEntry * mpHashEntries;

	// CgsResourcePool.h:595
	HashTable mHashTable;

	// CgsResourcePool.h:597
	int32_t miBankId;

	// CgsResourcePool.h:599
	CgsMemory::Relocator * mpCurrentRelocator;

	// CgsResourcePool.h:600
	CgsResource::ScratchPool * mpCurrentScratchPool;

	// CgsResourcePool.h:601
	uint32_t muNumRelocations;

	// CgsResourcePool.h:602
	uint32_t muNextRelocation;

	// CgsResourcePool.h:603
	RelocateRequest * mpRelocateRequests;

	// CgsResourcePool.h:604
	RelocateSource * mpRelocateSources;

	// CgsResourcePool.h:605
	int32_t miDefragFrame;

	// CgsResourcePool.h:606
	int32_t miDefragMemType;

	// CgsResourcePool.h:607
	bool mbAllowDefragmentation;

	// CgsResourcePool.h:608
	bool mbDefragHitEndResource;

	// CgsResourcePool.h:610
	int32_t miNumResourcesInPurgatory;

public:
	// CgsResourcePool.h:249
	uint32_t GetOverheadMemoryRequired(const CgsResource::Pool::InitOptions *);

	// CgsResourcePool.h:253
	// Declaration
	uint32_t PrintOverheadMemoryRequired(const CgsResource::Pool::InitOptions *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsResourcePool.h:818
		using namespace CgsDev::Message;

		// CgsResourcePool.h:823
		using namespace CgsDev::Message;

		// CgsResourcePool.h:827
		using namespace CgsDev::Message;

	}

	// CgsResourcePool.h:257
	void Construct();

	// CgsResourcePool.h:261
	bool Prepare();

	// CgsResourcePool.h:265
	bool Release();

	// CgsResourcePool.h:269
	void Destruct();

	// CgsResourcePool.h:275
	void InitPool(const CgsResource::Pool::InitOptions *);

	// CgsResourcePool.h:279
	void ResetPool();

	// CgsResourcePool.h:287
	CgsResource::Entry * GetResource(int32_t, bool, uint16_t);

	// CgsResourcePool.h:296
	CgsResource::Entry * FindResource(ID, bool, uint16_t, int32_t *);

	// CgsResourcePool.h:304
	int32_t FindResourceIndex(ID, bool, uint16_t);

	// CgsResourcePool.h:314
	CgsResource::Entry * FindResourceWithDependencies(ID, CgsResource::Pool **, bool, uint16_t, int32_t *);

	// CgsResourcePool.h:323
	int32_t FindResourceIndexWithDependencies(ID, CgsResource::Pool **, bool, uint16_t);

	// CgsResourcePool.h:332
	CgsResource::Pool::ECreateResult CreateEntry(const NewResource *, CgsResource::Entry **, int32_t *, bool);

	// CgsResourcePool.h:341
	CgsResource::Pool::ECreateResult CreateEntryInSlot(const NewResource *, CgsResource::Entry **, int32_t, bool);

	// CgsResourcePool.h:345
	bool Invalidate(ResourceHandle::Resource *, Entry::ResourceDescriptor *);

	// CgsResourcePool.h:349
	bool Validate();

	// CgsResourcePool.h:353
	const int16_t * CreateBatchEntrySlots(int16_t);

	// CgsResourcePool.h:359
	CgsResource::Pool::ECreateResult ExecuteBatchAllocations(AllocListSet *, bool);

	// CgsResourcePool.h:365
	CgsResource::EBatchAllocResult ExecuteBatchAllocation(AllocListSet *, int32_t);

	// CgsResourcePool.h:374
	CgsResource::EBatchAllocResult ExecuteBatchAddressedAllocation(int32_t, AllocRequestAddressed *, AllocResult *, uint32_t, bool);

	// CgsResourcePool.h:381
	CgsResource::Pool::ECreateResult MergeBatchAllocations(AllocListSet *, const CgsResource::BundleV2::ResourceEntry *, ResourceHandle::Resource *);

	// CgsResourcePool.h:388
	CgsResource::Entry * AddReference(uint32_t);

	// CgsResourcePool.h:394
	bool RemoveReference(uint32_t);

	// CgsResourcePool.h:398
	void Update();

	// CgsResourcePool.h:402
	const char * GetName() const;

	// CgsResourcePool.h:406
	int32_t GetId() const;

	// CgsResourcePool.h:410
	int32_t GetBankId();

	// CgsResourcePool.h:415
	uint32_t GetHeapAlignment(int32_t) const;

	// CgsResourcePool.h:419
	int32_t GetNumDependencies() const;

	// CgsResourcePool.h:423
	CgsResource::Pool * GetDependency(int32_t) const;

	// CgsResourcePool.h:427
	void ResolveAllResources();

	// CgsResourcePool.h:431
	void ResolveAllTempScratchResources();

	// CgsResourcePool.h:435
	void ResolveAllDestScratchResources();

	// CgsResourcePool.h:439
	void ResolveAllResourcesThatImportList(const ID *, uint32_t);

	// CgsResourcePool.h:443
	void ResolveAllResourcesThatImportList(const ID *, void **, uint32_t);

	// CgsResourcePool.h:454
	void FixUpAndResolveResourceList(const ID *, int32_t, int32_t, int32_t, bool, bool);

	// CgsResourcePool.h:467
	void BeginDefragmentation(CgsResource::ScratchPool *, RelocateRequest *, RelocateSource *, uint32_t, int32_t);

	// CgsResourcePool.h:476
	void BeginEmergencyDefragmentation(CgsMemory::Relocator *, CgsMemory::RelocationParams *, RelocateRequest *, RelocateSource *, uint32_t, int32_t);

	// CgsResourcePool.h:482
	void DeleteEntry(int16_t);

	// CgsResourcePool.h:485
	void DeleteMemoryForEntry(ID);

	// CgsResourcePool.h:492
	// Declaration
	bool ReAllocateMemoryForEntry(ID, Entry::ResourceDescriptor *, int32_t, ResourceHandle::Resource *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsResourcePool.cpp:3211
		using namespace CgsDev::Message;

	}

	// CgsResourcePool.h:495
	bool IsDefragmenting() const;

	// CgsResourcePool.h:498
	void BuildAllocRequestForEntry(AllocListSet *, uint16_t, CgsResource::Entry *);

	// CgsResourcePool.h:501
	int16_t GetEntryRefCount(int32_t) const;

	// CgsResourcePool.h:504
	void SetEntryRefCount(int32_t, int16_t);

	// CgsResourcePool.h:507
	void IncEntryRefCount(int32_t);

	// CgsResourcePool.h:510
	void DecEntryRefCount(int32_t);

	// CgsResourcePool.h:513
	uint8_t GetEntryStatus(int32_t) const;

	// CgsResourcePool.h:516
	void SetEntryStatus(int32_t, uint8_t);

	// CgsResourcePool.h:519
	int32_t GetEntryImportCount(int32_t) const;

	// CgsResourcePool.h:522
	void SetEntryImportCount(int32_t, int32_t);

	// CgsResourcePool.h:525
	int32_t GetNumEntriesInPurgatory() const;

	// CgsResourcePool.h:528
	int32_t VerifyResourceImports();

	// CgsResourcePool.h:531
	int32_t GetRefCountThreshold();

	// CgsResourcePool.h:534
	bool GetAllowDefragmentation() const;

	// CgsResourcePool.h:537
	void SetAllowDefragmentation(bool);

	// CgsResourcePool.h:540
	bool IsValid() const;

	// CgsResourcePool.h:543
	uint16_t GenerateLinearHeap(int32_t, LinearHeapNode *, uint16_t);

	// CgsResourcePool.h:552
	void DebugWipeHeap(int32_t);

	// CgsResourcePool.h:557
	// Declaration
	void DebugReport(FPoolReportCallback *, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsResourcePool.h:74
		typedef void (const PoolStats &, void *) FPoolReportCallback;

	}

private:
	// CgsResourcePool.h:619
	void InitManagementData();

	// CgsResourcePool.h:626
	bool AllocateResourceEntry(CgsResource::Entry **, int32_t *);

	// CgsResourcePool.h:632
	void FreeResourceEntry(int16_t);

	// CgsResourcePool.h:638
	void FreeMemoryForResource(CgsResource::Entry *);

	// CgsResourcePool.h:644
	void FixUpEntry(CgsResource::Entry *);

	// CgsResourcePool.h:650
	void PostFixUpEntry(CgsResource::Entry *);

	// CgsResourcePool.h:656
	CgsResource::BundleV2::ImportEntry * GetResourceEntryImports(uint16_t);

	// CgsResourcePool.h:665
	bool AllocateMemoryForResource(CgsResource::Entry *, const char *, void *, const CgsResource::Type *);

	// CgsResourcePool.h:669
	// Declaration
	void UpdateDefrag() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsResourcePool.cpp:2134
		using namespace CgsDev::Message;

		// CgsResourcePool.cpp:2254
		using namespace CgsDev::Message;

	}

	// CgsResourcePool.h:673
	void UpdateEmergencyDefrag();

	// CgsResourcePool.h:677
	void BeginDefragNextSetOfRelocations();

	// CgsResourcePool.h:681
	bool AddResourceToScratchPool(uint32_t);

	// CgsResourcePool.h:685
	bool RebaseResourceToScratchPool(int32_t);

	// CgsResourcePool.h:689
	bool RebaseResourceFromScratchPool(int32_t);

	// CgsResourcePool.h:693
	bool AddResourcesToScratchPool();

	// CgsResourcePool.h:697
	bool RebaseResourcesToScratchPool();

	// CgsResourcePool.h:701
	bool RebaseResourcesFromScratchPool();

	// CgsResourcePool.h:705
	void DebugWipeSourceResources();

	// CgsResourcePool.h:709
	void DebugWipeTempResources();

	// CgsResourcePool.h:713
	uint32_t GenerateRangeMask(const ID *, int32_t);

	// CgsResourcePool.h:717
	bool ResolveImportForEntry(CgsResource::Entry *, CgsResource::BundleV2::ImportEntry *);

	// CgsResourcePool.h:721
	void ClearImportsForEntry(int32_t, uint32_t);

	// CgsResourcePool.h:725
	// Declaration
	bool CheckImportsStillClearForEntry(int32_t, uint32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsResourcePool.cpp:2598
		using namespace CgsDev::Message;

		// CgsResourcePool.cpp:2605
		using namespace CgsDev::Message;

	}

	// CgsResourcePool.h:729
	bool ResolveImportsForEntry(int32_t);

}

// CgsResourcePool.h:128
extern const uint32_t KU_IMPORT_MASK_DIVISION = 134217728;

