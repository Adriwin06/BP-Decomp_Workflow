// CgsSmallResource.h:24
namespace CgsResource {
	// Declaration
	struct AllocatePoolModuleState {
		// CgsAllocatePoolModuleState.h:46
		enum EAllocateResult {
			E_RESULT_SUCCESS = 0,
			E_RESULT_ERROR = 1,
			E_RESULT_PEND = 2,
			E_RESULT_DEFRAGMENT = 3,
			E_RESULT_FAILED_SAFELY = 4,
		}

		// CgsAllocatePoolModuleState.h:55
		enum EInternalState {
			E_STATE_IDLE = 0,
			E_STATE_CHECK_CREATE_ENTRIES = 1,
			E_STATE_ALLOCATE = 2,
			E_STATE_MERGE_ALLOCATIONS = 3,
			E_STATE_DEFRAG_WAITING = 4,
		}

	}

}

// CgsAllocatePoolModuleState.h:43
struct CgsResource::AllocatePoolModuleState : public BasePoolModuleState {
private:
	// CgsAllocatePoolModuleState.h:93
	CgsResource::AllocatePoolModuleState::EInternalState meState;

	// CgsAllocatePoolModuleState.h:94
	CgsResource::Pool * mpPool;

	// CgsAllocatePoolModuleState.h:95
	ID mListId;

	// CgsAllocatePoolModuleState.h:96
	const CgsResource::BundleV2::ResourceEntry * mpEntries;

	// CgsAllocatePoolModuleState.h:97
	int32_t miNumEntries;

	// CgsAllocatePoolModuleState.h:98
	AllocListSet * mpAllocListSet;

	// CgsAllocatePoolModuleState.h:99
	bool * mpOutNeeds;

	// CgsAllocatePoolModuleState.h:100
	ResourceHandle::Resource * mpOutResources;

	// CgsAllocatePoolModuleState.h:101
	CgsResource::Entry * mpOutListEntry;

	// CgsAllocatePoolModuleState.h:102
	int16_t miNeedCount;

	// CgsAllocatePoolModuleState.h:103
	CgsResource::EntryListResourceType mEntryListResourceType;

	// CgsAllocatePoolModuleState.h:104
	CgsResource::PoolModule * mpPoolModule;

	// CgsAllocatePoolModuleState.h:105
	int32_t miCountDown;

	// CgsAllocatePoolModuleState.h:106
	bool mbAllowFailiure;

	// CgsAllocatePoolModuleState.h:107
	bool mbCreateEntryListResource;

	// CgsAllocatePoolModuleState.h:108
	bool mbWaitingForPurgatory;

public:
	// CgsAllocatePoolModuleState.h:65
	void Construct(CgsResource::PoolModule *);

	// CgsAllocatePoolModuleState.h:76
	void BeginAllocation(CgsResource::Pool *, ID, const CgsResource::BundleV2::ResourceEntry *, int32_t, AllocListSet *, bool *, ResourceHandle::Resource *, bool);

	// CgsAllocatePoolModuleState.h:79
	CgsResource::AllocatePoolModuleState::EAllocateResult Update();

	// CgsAllocatePoolModuleState.h:83
	void GenerateResponse(AllocateResourceListResponse *);

	// CgsAllocatePoolModuleState.h:86
	CgsResource::Pool * GetPool();

	// CgsAllocatePoolModuleState.h:89
	AllocListSet * GetAllocSet();

private:
	// CgsAllocatePoolModuleState.h:111
	int32_t CheckListDependencies();

	// CgsAllocatePoolModuleState.h:114
	bool CheckEntryListDependency();

	// CgsAllocatePoolModuleState.h:117
	bool CreateResourceList();

	// CgsAllocatePoolModuleState.h:120
	CgsResource::Entry * CreateEntryListResource();

	// CgsAllocatePoolModuleState.h:123
	void UndoEntryCreations();

	// CgsAllocatePoolModuleState.h:126
	void BeginDefragmentation();

	// CgsAllocatePoolModuleState.h:129
	void ForceAllAllocsToDefrag();

	// CgsAllocatePoolModuleState.h:132
	void DebugPrintAllocListSet();

}

// CgsResourceID.h:30
namespace CgsResource {
	// Declaration
	struct AllocatePoolModuleState {
		// CgsAllocatePoolModuleState.h:46
		enum EAllocateResult {
			E_RESULT_SUCCESS = 0,
			E_RESULT_ERROR = 1,
			E_RESULT_PEND = 2,
			E_RESULT_DEFRAGMENT = 3,
			E_RESULT_FAILED_SAFELY = 4,
		}

		// CgsAllocatePoolModuleState.h:55
		enum EInternalState {
			E_STATE_IDLE = 0,
			E_STATE_CHECK_CREATE_ENTRIES = 1,
			E_STATE_ALLOCATE = 2,
			E_STATE_MERGE_ALLOCATIONS = 3,
			E_STATE_DEFRAG_WAITING = 4,
		}

	}

}

// CgsAllocatePoolModuleState.h:43
struct CgsResource::AllocatePoolModuleState : public BasePoolModuleState {
private:
	// CgsAllocatePoolModuleState.h:93
	CgsResource::AllocatePoolModuleState::EInternalState meState;

	// CgsAllocatePoolModuleState.h:94
	CgsResource::Pool * mpPool;

	// CgsAllocatePoolModuleState.h:95
	ID mListId;

	// CgsAllocatePoolModuleState.h:96
	const CgsResource::BundleV2::ResourceEntry * mpEntries;

	// CgsAllocatePoolModuleState.h:97
	int32_t miNumEntries;

	// CgsAllocatePoolModuleState.h:98
	AllocListSet * mpAllocListSet;

	// CgsAllocatePoolModuleState.h:99
	bool * mpOutNeeds;

	// CgsAllocatePoolModuleState.h:100
	ResourceHandle::Resource * mpOutResources;

	// CgsAllocatePoolModuleState.h:101
	CgsResource::Entry * mpOutListEntry;

	// CgsAllocatePoolModuleState.h:102
	int16_t miNeedCount;

	// CgsAllocatePoolModuleState.h:103
	CgsResource::EntryListResourceType mEntryListResourceType;

	// CgsAllocatePoolModuleState.h:104
	CgsResource::PoolModule * mpPoolModule;

	// CgsAllocatePoolModuleState.h:105
	int32_t miCountDown;

	// CgsAllocatePoolModuleState.h:106
	bool mbAllowFailiure;

	// CgsAllocatePoolModuleState.h:107
	bool mbCreateEntryListResource;

	// CgsAllocatePoolModuleState.h:108
	bool mbWaitingForPurgatory;

public:
	// CgsAllocatePoolModuleState.h:65
	void Construct(CgsResource::PoolModule *);

	// CgsAllocatePoolModuleState.h:76
	void BeginAllocation(CgsResource::Pool *, ID, const CgsResource::BundleV2::ResourceEntry *, int32_t, AllocListSet *, bool *, ResourceHandle::Resource *, bool);

	// CgsAllocatePoolModuleState.h:79
	// Declaration
	CgsResource::AllocatePoolModuleState::EAllocateResult Update() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsAllocatePoolModuleState.cpp:180
		using namespace CgsDev::Message;

		// CgsAllocatePoolModuleState.cpp:197
		using namespace CgsDev::Message;

		// CgsAllocatePoolModuleState.cpp:203
		using namespace CgsDev::Message;

	}

	// CgsAllocatePoolModuleState.h:83
	void GenerateResponse(AllocateResourceListResponse *);

	// CgsAllocatePoolModuleState.h:86
	CgsResource::Pool * GetPool();

	// CgsAllocatePoolModuleState.h:89
	AllocListSet * GetAllocSet();

private:
	// CgsAllocatePoolModuleState.h:111
	// Declaration
	int32_t CheckListDependencies() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsAllocatePoolModuleState.cpp:334
		using namespace CgsDev::Message;

	}

	// CgsAllocatePoolModuleState.h:114
	bool CheckEntryListDependency();

	// CgsAllocatePoolModuleState.h:117
	// Declaration
	bool CreateResourceList() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsAllocatePoolModuleState.cpp:452
		using namespace CgsDev::Message;

	}

	// CgsAllocatePoolModuleState.h:120
	CgsResource::Entry * CreateEntryListResource();

	// CgsAllocatePoolModuleState.h:123
	void UndoEntryCreations();

	// CgsAllocatePoolModuleState.h:126
	void BeginDefragmentation();

	// CgsAllocatePoolModuleState.h:129
	void ForceAllAllocsToDefrag();

	// CgsAllocatePoolModuleState.h:132
	// Declaration
	void DebugPrintAllocListSet() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsAllocatePoolModuleState.cpp:615
		using namespace CgsDev::Message;

		// CgsAllocatePoolModuleState.cpp:616
		using namespace CgsDev::Message;

		// CgsAllocatePoolModuleState.cpp:617
		using namespace CgsDev::Message;

		// CgsAllocatePoolModuleState.cpp:618
		using namespace CgsDev::Message;

	}

}

