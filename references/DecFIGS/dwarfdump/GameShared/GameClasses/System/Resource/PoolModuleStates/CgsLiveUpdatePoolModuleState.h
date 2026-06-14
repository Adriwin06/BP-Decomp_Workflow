// CgsSmallResource.h:24
namespace CgsResource {
	// Declaration
	struct LiveUpdatePoolModuleState {
		// CgsLiveUpdatePoolModuleState.h:50
		enum EAllocateResult {
			E_RESULT_SUCCESS = 0,
			E_RESULT_ERROR = 1,
			E_RESULT_PEND = 2,
			E_RESULT_DEFRAGMENT = 3,
		}

		// CgsLiveUpdatePoolModuleState.h:58
		enum EInternalState {
			E_STATE_IDLE = 0,
			E_STATE_FREE_SOURCE_ENTRIES = 1,
			E_STATE_ALLOCATE = 2,
			E_STATE_WAIT = 3,
		}

	}

}

// CgsLiveUpdatePoolModuleState.h:47
struct CgsResource::LiveUpdatePoolModuleState : public BasePoolModuleState {
private:
	// CgsLiveUpdatePoolModuleState.h:93
	CgsResource::LiveUpdatePoolModuleState::EInternalState meState;

	// CgsLiveUpdatePoolModuleState.h:94
	CgsResource::Pool * mpPool;

	// CgsLiveUpdatePoolModuleState.h:95
	ID mListId;

	// CgsLiveUpdatePoolModuleState.h:96
	const CgsResource::BundleV2::ResourceEntry * mpEntries;

	// CgsLiveUpdatePoolModuleState.h:97
	int32_t miNumEntries;

	// CgsLiveUpdatePoolModuleState.h:98
	bool * mpOutNeeds;

	// CgsLiveUpdatePoolModuleState.h:99
	ResourceHandle::Resource * mpOutResources;

	// CgsLiveUpdatePoolModuleState.h:100
	CgsResource::Entry * mpOutListEntry;

	// CgsLiveUpdatePoolModuleState.h:101
	int16_t miNeedCount;

	// CgsLiveUpdatePoolModuleState.h:102
	CgsResource::EntryListResourceType mEntryListResourceType;

	// CgsLiveUpdatePoolModuleState.h:103
	CgsResource::PoolModule * mpPoolModule;

	// CgsLiveUpdatePoolModuleState.h:104
	int32_t miElapsedWaitFrames;

public:
	// CgsLiveUpdatePoolModuleState.h:67
	void Construct(CgsResource::PoolModule *);

	// CgsLiveUpdatePoolModuleState.h:76
	void BeginAllocation(CgsResource::Pool *, ID, const CgsResource::BundleV2::ResourceEntry *, int32_t, bool *, ResourceHandle::Resource *);

	// CgsLiveUpdatePoolModuleState.h:79
	CgsResource::LiveUpdatePoolModuleState::EAllocateResult Update();

	// CgsLiveUpdatePoolModuleState.h:83
	void GenerateResponse(AllocateResourceListResponse *);

	// CgsLiveUpdatePoolModuleState.h:86
	CgsResource::Pool * GetPool();

	// CgsLiveUpdatePoolModuleState.h:89
	AllocListSet * GetAllocSet();

private:
	// CgsLiveUpdatePoolModuleState.h:107
	int32_t CheckListDependencies();

	// CgsLiveUpdatePoolModuleState.h:110
	bool DeleteOriginalResources();

	// CgsLiveUpdatePoolModuleState.h:113
	bool AllocateNewResources();

	// CgsLiveUpdatePoolModuleState.h:116
	CgsResource::Entry * CreateEntryListResource();

	// CgsLiveUpdatePoolModuleState.h:119
	void UndoEntryCreations();

	// CgsLiveUpdatePoolModuleState.h:122
	void FindPoolToUpdate();

	// CgsLiveUpdatePoolModuleState.h:125
	void ForceAllAllocsToDefrag();

}

// CgsResourceID.h:30
namespace CgsResource {
	// Declaration
	struct LiveUpdatePoolModuleState {
		// CgsLiveUpdatePoolModuleState.h:50
		enum EAllocateResult {
			E_RESULT_SUCCESS = 0,
			E_RESULT_ERROR = 1,
			E_RESULT_PEND = 2,
			E_RESULT_DEFRAGMENT = 3,
		}

		// CgsLiveUpdatePoolModuleState.h:58
		enum EInternalState {
			E_STATE_IDLE = 0,
			E_STATE_FREE_SOURCE_ENTRIES = 1,
			E_STATE_ALLOCATE = 2,
			E_STATE_WAIT = 3,
		}

	}

}

// CgsLiveUpdatePoolModuleState.h:47
struct CgsResource::LiveUpdatePoolModuleState : public BasePoolModuleState {
private:
	// CgsLiveUpdatePoolModuleState.h:93
	CgsResource::LiveUpdatePoolModuleState::EInternalState meState;

	// CgsLiveUpdatePoolModuleState.h:94
	CgsResource::Pool * mpPool;

	// CgsLiveUpdatePoolModuleState.h:95
	ID mListId;

	// CgsLiveUpdatePoolModuleState.h:96
	const CgsResource::BundleV2::ResourceEntry * mpEntries;

	// CgsLiveUpdatePoolModuleState.h:97
	int32_t miNumEntries;

	// CgsLiveUpdatePoolModuleState.h:98
	bool * mpOutNeeds;

	// CgsLiveUpdatePoolModuleState.h:99
	ResourceHandle::Resource * mpOutResources;

	// CgsLiveUpdatePoolModuleState.h:100
	CgsResource::Entry * mpOutListEntry;

	// CgsLiveUpdatePoolModuleState.h:101
	int16_t miNeedCount;

	// CgsLiveUpdatePoolModuleState.h:102
	CgsResource::EntryListResourceType mEntryListResourceType;

	// CgsLiveUpdatePoolModuleState.h:103
	CgsResource::PoolModule * mpPoolModule;

	// CgsLiveUpdatePoolModuleState.h:104
	int32_t miElapsedWaitFrames;

public:
	// CgsLiveUpdatePoolModuleState.h:67
	void Construct(CgsResource::PoolModule *);

	// CgsLiveUpdatePoolModuleState.h:76
	void BeginAllocation(CgsResource::Pool *, ID, const CgsResource::BundleV2::ResourceEntry *, int32_t, bool *, ResourceHandle::Resource *);

	// CgsLiveUpdatePoolModuleState.h:79
	// Declaration
	CgsResource::LiveUpdatePoolModuleState::EAllocateResult Update() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsLiveUpdatePoolModuleState.cpp:141
		using namespace CgsDev::Message;

	}

	// CgsLiveUpdatePoolModuleState.h:83
	void GenerateResponse(AllocateResourceListResponse *);

	// CgsLiveUpdatePoolModuleState.h:86
	CgsResource::Pool * GetPool();

	// CgsLiveUpdatePoolModuleState.h:89
	AllocListSet * GetAllocSet();

private:
	// CgsLiveUpdatePoolModuleState.h:107
	int32_t CheckListDependencies();

	// CgsLiveUpdatePoolModuleState.h:110
	bool DeleteOriginalResources();

	// CgsLiveUpdatePoolModuleState.h:113
	// Declaration
	bool AllocateNewResources() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsLiveUpdatePoolModuleState.cpp:427
		using namespace CgsDev::Message;

		// CgsLiveUpdatePoolModuleState.cpp:456
		using namespace CgsDev::Message;

	}

	// CgsLiveUpdatePoolModuleState.h:116
	CgsResource::Entry * CreateEntryListResource();

	// CgsLiveUpdatePoolModuleState.h:119
	void UndoEntryCreations();

	// CgsLiveUpdatePoolModuleState.h:122
	void FindPoolToUpdate();

	// CgsLiveUpdatePoolModuleState.h:125
	void ForceAllAllocsToDefrag();

}

