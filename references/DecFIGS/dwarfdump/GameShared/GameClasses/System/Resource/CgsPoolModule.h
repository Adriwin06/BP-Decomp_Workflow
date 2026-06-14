// CgsPoolModule.h:60
extern const int32_t kiMaxPools = 128;

// CgsPoolModule.h:65
extern const int32_t KI_MAX_RESOURCE_TYPES = 512;

// CgsResourceID.h:30
namespace CgsResource {
	// Declaration
	struct PoolModule {
		// CgsPoolModule.h:121
		struct InitOptions {
			// CgsPoolModule.h:125
			struct GSResourceType {
				// CgsPoolModule.h:127
				CgsResource::Type * mpType;

				// CgsPoolModule.h:128
				const char * mpcName;

			}

			// CgsPoolModule.h:131
			int32_t miMaxResourceToDefrag;

			// CgsPoolModule.h:132
			ResourceDescriptor mDefragBufferDescriptor;

			// CgsPoolModule.h:133
			Resource mDefragBufferResource;

			// CgsPoolModule.h:134
			uint32_t muDebugBufferSize;

			// CgsPoolModule.h:135
			CgsResource::PoolModule::InitOptions::GSResourceType * mpGameSpecificTypes;

			// CgsPoolModule.h:136
			int32_t miNumGameSpecificTypes;

		}

	}

}

// CgsSmallResource.h:24
namespace CgsResource {
	// Declaration
	struct PoolModule {
	public:
		~PoolModule();

		PoolModule();

		// Unknown accessibility
		// CgsPoolModule.h:60
		extern const int32_t kiMaxPools = 128;

		// Unknown accessibility
		// CgsPoolModule.h:65
		extern const int32_t KI_MAX_RESOURCE_TYPES = 512;

	}

}

// CgsPoolModule.h:57
void CgsResource::PoolModule::~PoolModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPoolModule.h:57
void CgsResource::PoolModule::PoolModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceID.h:30
namespace CgsResource {
	// Declaration
	struct PoolModule {
		// CgsPoolModule.h:72
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_MANAGER = 1,
			E_PREPARESTAGE_POOLS = 2,
			E_PREPARESTAGE_DONE = 3,
		}

		// CgsPoolModule.h:80
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_POOLS = 1,
			E_RELEASESTAGE_MANAGER = 2,
			E_RELEASESTAGE_DONE = 3,
		}

		// CgsPoolModule.h:89
		enum EUpdateState {
			E_UPDATESTATE_IDLE = 0,
			E_UPDATESTATE_ALLOCATING_LIST = 1,
			E_UPDATESTATE_DEALLOCATING_LIST = 2,
			E_UPDATESTATE_INTELLIFRAG = 3,
			E_UPDATESTATE_SIMPLEFRAG = 4,
			E_UPDATESTATE_LIVEUPDATE = 5,
			E_UPDATESTATE_EMERGENCYFRAG = 6,
			E_UPDATESTATE_COUNT = 7,
		}

		// CgsPoolModule.h:101
		enum EUpdateResult {
			E_RESULT_OK = 0,
			E_RESULT_REQUIRE_STALL = 1,
		}

		// CgsPoolModule.h:113
		struct ResourceTypePair {
			// CgsPoolModule.h:115
			uint32_t mID;

			// CgsPoolModule.h:116
			const CgsResource::Type * mpType;

			// CgsPoolModule.h:117
			const char * mpcName;

		}

		// CgsPoolModule.h:121
		struct InitOptions {
			// CgsPoolModule.h:125
			struct GSResourceType {
				// CgsPoolModule.h:127
				CgsResource::Type * mpType;

				// CgsPoolModule.h:128
				const char * mpcName;

			}

			// CgsPoolModule.h:131
			int32_t miMaxResourceToDefrag;

			// CgsPoolModule.h:132
			ResourceDescriptor mDefragBufferDescriptor;

			// CgsPoolModule.h:133
			Resource mDefragBufferResource;

			// CgsPoolModule.h:134
			uint32_t muDebugBufferSize;

			// CgsPoolModule.h:135
			CgsResource::PoolModule::InitOptions::GSResourceType * mpGameSpecificTypes;

			// CgsPoolModule.h:136
			int32_t miNumGameSpecificTypes;

		}

	}

}

// CgsPoolModule.h:57
struct CgsResource::PoolModule : public CgsModule::ModuleSingleBuffered {
	// CgsPoolModule.h:60
	extern const int32_t kiMaxPools = 128;

	// CgsPoolModule.h:61
	extern const int32_t KI_MAX_ALLOCATION_REQUESTS = 4096;

	// CgsPoolModule.h:62
	extern const uint16_t KU_MAX_POOL_ENTRIES = 36863;

	// CgsPoolModule.h:63
	extern const uint16_t KU_MAX_LINEAR_HEAP_LENGTH = 65535;

	// CgsPoolModule.h:64
	extern const uint16_t KU_MAX_DISTRIBUTION_COMMANDS = 65535;

	// CgsPoolModule.h:65
	extern const int32_t KI_MAX_RESOURCE_TYPES = 512;

	// CgsPoolModule.cpp:30
	extern int32_t _miAllocateListTraceId;

	// CgsPoolModule.cpp:31
	extern int32_t _miFixupListTraceId;

	// CgsPoolModule.cpp:32
	extern int32_t _miAllocateStateTraceId;

	// CgsPoolModule.cpp:33
	extern int32_t _miIntellifragStateTraceId;

private:
	// CgsPoolModule.h:189
	int32_t miNumTypes;

	// CgsPoolModule.h:190
	CgsResource::PoolModule::ResourceTypePair[512] maTypes;

	// CgsPoolModule.h:191
	CgsResource::PoolModule::EPrepareStage mePrepareStage;

	// CgsPoolModule.h:192
	CgsResource::PoolModule::EReleaseStage meReleaseStage;

	// CgsPoolModule.h:193
	Pool[128] maPools;

	// CgsPoolModule.h:194
	FifoQueue<CgsResource::Events::CreatePoolRequest,128> mPendingCreateRequests;

	// CgsPoolModule.h:195
	EventReceiverQueue<16384,16> mReceiverQueue;

	// CgsPoolModule.h:196
	ScratchPool mScratchPool;

	// CgsPoolModule.h:198
	AllocListSet mAllocList;

	// CgsPoolModule.h:200
	CgsResource::PoolModule::EUpdateState meCurrentState;

	// CgsPoolModule.h:202
	int32_t miAllocateRequestEventId;

	// CgsPoolModule.h:203
	AllocatePoolModuleState mAllocateState;

	// CgsPoolModule.h:204
	DeAllocatePoolModuleState mDeAllocateState;

	// CgsPoolModule.h:205
	IntelliFragPoolModuleState mIntelliFragState;

	// CgsPoolModule.h:206
	LiveUpdatePoolModuleState mLiveUpdateState;

	// CgsPoolModule.h:207
	EmergencyFragPoolModuleState mEmergencyFragState;

	// CgsPoolModule.h:209
	AllocRequestAddressed * mpAddressedAllocRequests;

	// CgsPoolModule.h:210
	RelocateRequest * mpRelocateRequests;

	// CgsPoolModule.h:211
	DistributionEntry * mpDistributionEntries;

	// CgsPoolModule.h:212
	RelocationEntry * mpRelocationEntries;

	// CgsPoolModule.h:213
	LinearHeapNode * mpLinearHeapNodes;

	// CgsPoolModule.h:214
	RelocateSource * mpRelocateSources;

	// CgsPoolModule.h:216
	Relocator mRelocator;

	// CgsPoolModule.h:217
	RelocationParams mRelocationParams;

	// CgsPoolModule.h:219
	FifoQueue<CgsResource::Events::AllocateResourceListRequest,4> mPendingAllocationRequests;

	// CgsPoolModule.cpp:28
	extern int32_t _miDebugDefragPoolId;

	// CgsPoolModule.cpp:29
	extern bool _mbDebugTriggerDefrag;

public:
	// CgsPoolModule.h:383
	uint32_t GetMemoryOverhead(const CgsResource::PoolModule::InitOptions *);

	// CgsPoolModule.cpp:984
	void GetRequiredResourceDescriptor(const CreatePoolRequest *, ResourceDescriptor *);

	// CgsPoolModule.cpp:53
	virtual void Construct(const CgsResource::PoolModule::InitOptions *, rw::IResourceAllocator *, rw::IResourceAllocator *);

	// CgsPoolModule.cpp:195
	virtual bool Prepare();

	// CgsPoolModule.cpp:263
	virtual bool Release();

	// CgsPoolModule.cpp:331
	virtual void Destruct();

	// CgsPoolModule.cpp:351
	CgsResource::PoolModule::EUpdateResult Update(IOBufferStack *, IOBufferStack *, const InputBuffer *, OutputBuffer *);

	// CgsPoolModule.cpp:1027
	void ConvertPoolRequestOptions(const CreatePoolRequest *, CgsResource::Pool::InitOptions *);

	// CgsPoolModule.cpp:1808
	const char * DebugGetTypeName(uint32_t) const;

	// CgsPoolModule.cpp:1838
	void DebugReport(FPoolReportCallback *, void *);

private:
	// CgsPoolModule.cpp:485
	void UpdateIdle(OutputBuffer *);

	// CgsPoolModule.cpp:518
	void UpdateAllocating(OutputBuffer *);

	// CgsPoolModule.cpp:606
	void UpdateDeAllocating(OutputBuffer *);

	// CgsPoolModule.cpp:660
	void UpdateIntelliFrag(OutputBuffer *);

	// CgsPoolModule.cpp:731
	void UpdateSimpleFrag(OutputBuffer *);

	// CgsPoolModule.cpp:745
	void UpdateLiveUpdate(OutputBuffer *);

	// CgsPoolModule.cpp:805
	void UpdateEmergencyFrag(OutputBuffer *);

	// CgsPoolModule.cpp:911
	// Declaration
	void CreatePool(const CgsResource::Pool::InitOptions *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPoolModule.cpp:939
		using namespace CgsDev::Message;

	}

	// CgsPoolModule.cpp:954
	bool DestroyPool(int32_t);

	// CgsPoolModule.cpp:1065
	void ProcessInputBuffer(const InputBuffer *, OutputBuffer *);

	// CgsPoolModule.cpp:1249
	void DoCreatePoolRequest(const CreateResourceResponse *, OutputBuffer *);

	// CgsPoolModule.cpp:1307
	void DoDeletePoolRequest(const DestroyBankResponse *, OutputBuffer *);

	// CgsPoolModule.cpp:1327
	void DoAcquireResourceRequest(const AcquireResourceRequest *, OutputBuffer *);

	// CgsPoolModule.cpp:1367
	void DoAcquireResourceListRequest(const AcquireResourceListRequest *, OutputBuffer *);

	// CgsPoolModule.cpp:1423
	void DoUnacquireResourceRequest(const UnacquireResourceRequest *, OutputBuffer *);

	// CgsPoolModule.cpp:1448
	void DoAllocateResourceListRequest(const AllocateResourceListRequest *, OutputBuffer *);

	// CgsPoolModule.cpp:1483
	void DoFixUpAndResolveResourceListRequest(const FixUpAndResolveResourceListRequest *, OutputBuffer *);

	// CgsPoolModule.cpp:1544
	void DoUnloadResourceListRequest(const UnloadResourceListRequest *, OutputBuffer *);

	// CgsPoolModule.cpp:1582
	void DoInvalidatePoolRequest(const InvalidatePoolRequest *, OutputBuffer *);

	// CgsPoolModule.cpp:1624
	void DoValidatePoolRequest(const ValidatePoolRequest *, OutputBuffer *);

	// CgsPoolModule.cpp:1659
	const CgsResource::Type * FindResourceType(uint32_t);

	// CgsPoolModule.cpp:1694
	bool AllocateResourceList(ID, int32_t, const CgsResource::BundleV2::ResourceEntry *, int32_t, bool *, ResourceHandle::Resource *, bool, bool);

	// CgsPoolModule.cpp:1767
	void UnloadResourceList(int32_t, const ID *, uint16_t);

	// CgsPoolModule.h:407
	int32_t GetPoolIndex(int32_t) const;

	// CgsPoolModule.cpp:1177
	void SendCreatePoolMemoryRequest(const CreatePoolRequest *, OutputBuffer *);

	// CgsPoolModule.cpp:1214
	void SendDeletePoolMemoryRequest(const DeletePoolRequest *, OutputBuffer *);

	// CgsPoolModule.cpp:856
	void ProcessReceiverQueue(OutputBuffer *);

}

// CgsPoolModule.h:61
extern const int32_t KI_MAX_ALLOCATION_REQUESTS = 4096;

// CgsPoolModule.h:62
extern const uint16_t KU_MAX_POOL_ENTRIES = 36863;

// CgsPoolModule.h:63
extern const uint16_t KU_MAX_LINEAR_HEAP_LENGTH = 65535;

