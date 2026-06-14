// CgsResourceID.h:30
namespace CgsResource {
	// Declaration
	struct ScratchPool {
		// CgsResourceScratchPool.h:60
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_DONE = 1,
		}

		// CgsResourceScratchPool.h:67
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_DONE = 1,
		}

		// CgsResourceScratchPool.h:74
		enum EUpdateStage {
			E_UPDATESTAGE_IDLE = 0,
			E_UPDATESTAGE_GATHERING = 1,
			E_UPDATESTAGE_SCATTERING = 2,
		}

		// CgsResourceScratchPool.h:83
		struct InitOptions {
			// CgsResourceScratchPool.h:86
			uint32_t muMaxEntries;

			// CgsResourceScratchPool.h:88
			void * mpOverhead;

			// CgsResourceScratchPool.h:89
			uint32_t muOverheadMemorySize;

			// CgsResourceScratchPool.h:91
			ResourceDescriptor mDescriptor;

			// CgsResourceScratchPool.h:92
			Resource mResource;

			// CgsResourceScratchPool.h:94
			int32_t miBankId;

		}

	}

}

// CgsResourceScratchPool.h:36
struct CgsResource::ScratchEntry {
	// CgsResourceScratchPool.h:38
	int32_t miEntryId;

	// CgsResourceScratchPool.h:39
	void * mpSrcLocation;

	// CgsResourceScratchPool.h:40
	void * mpTempLocation;

	// CgsResourceScratchPool.h:41
	void * mpDestLocation;

	// CgsResourceScratchPool.h:42
	uint32_t muSize;

}

// CgsResourceScratchPool.h:54
struct CgsResource::ScratchPool : public BasePool {
	// CgsResourceScratchPool.h:57
	extern const uint32_t KU_SCRATCH_MEMORY_ALIGNMENT = 128;

private:
	// CgsResourceScratchPool.h:173
	LinearMalloc mAllocator;

	// CgsResourceScratchPool.h:174
	LinearMalloc[3] maResourceAllocators;

	// CgsResourceScratchPool.h:176
	CgsResource::ScratchPool::EPrepareStage mePrepareStage;

	// CgsResourceScratchPool.h:177
	CgsResource::ScratchPool::EReleaseStage meReleaseStage;

	// CgsResourceScratchPool.h:178
	CgsResource::ScratchPool::EUpdateStage meUpdateStage;

	// CgsResourceScratchPool.h:180
	int32_t miBankId;

	// CgsResourceScratchPool.h:182
	ScratchEntry * mpEntries;

	// CgsResourceScratchPool.h:183
	ID * mpEntryIds;

	// CgsResourceScratchPool.h:184
	uint32_t muNumEntries;

	// CgsResourceScratchPool.h:185
	uint32_t muMaxEntries;

	// CgsResourceScratchPool.h:186
	int32_t miCurrentMemType;

	// CgsResourceScratchPool.h:188
	GatherStream mGatherStream;

	// CgsResourceScratchPool.h:189
	ScatterStream mScatterStream;

	// CgsResourceScratchPool.h:190
	DistributionEntry * mpDistributionEntries;

	// CgsResourceScratchPool.h:192
	ImportHashTable mImportHashTable;

public:
	// CgsResourceScratchPool.h:99
	uint32_t GetOverheadMemoryRequired(const CgsResource::ScratchPool::InitOptions *);

	// CgsResourceScratchPool.h:103
	void Construct();

	// CgsResourceScratchPool.h:107
	bool Prepare();

	// CgsResourceScratchPool.h:111
	bool Release();

	// CgsResourceScratchPool.h:115
	void Destruct();

	// CgsResourceScratchPool.h:119
	void InitPool(const CgsResource::ScratchPool::InitOptions *);

	// CgsResourceScratchPool.h:123
	int32_t GetBankId();

	// CgsResourceScratchPool.h:127
	void Clear();

	// CgsResourceScratchPool.h:131
	void * AddEntry(CgsResource::Entry *, int32_t, int32_t, void *);

	// CgsResourceScratchPool.h:135
	uint32_t GetNumEntries() const;

	// CgsResourceScratchPool.h:139
	ScratchEntry * GetEntry(uint32_t);

	// CgsResourceScratchPool.h:143
	const ID * GetIdList() const;

	// CgsResourceScratchPool.h:147
	void BeginDistribution(int32_t);

	// CgsResourceScratchPool.h:151
	bool UpdateGather();

	// CgsResourceScratchPool.h:155
	bool UpdateScatter();

	// CgsResourceScratchPool.h:159
	void SortIdList();

	// CgsResourceScratchPool.h:163
	void * GetTempAddress(ID);

	// CgsResourceScratchPool.h:167
	void * GetDestAddress(ID);

private:
	// CgsResourceScratchPool.h:195
	void BuildGatherDistributionList();

	// CgsResourceScratchPool.h:198
	void BuildScatterDistributionList();

	// CgsResourceScratchPool.h:204
	int32_t SortIdsQSortCallback(const void *, const void *);

}

// CgsSmallResource.h:24
namespace CgsResource {
	// Declaration
	struct ScratchPool {
		// CgsResourceScratchPool.h:60
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_DONE = 1,
		}

		// CgsResourceScratchPool.h:67
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_DONE = 1,
		}

		// CgsResourceScratchPool.h:74
		enum EUpdateStage {
			E_UPDATESTAGE_IDLE = 0,
			E_UPDATESTAGE_GATHERING = 1,
			E_UPDATESTAGE_SCATTERING = 2,
		}

		// CgsResourceScratchPool.h:83
		struct InitOptions {
			// CgsResourceScratchPool.h:86
			uint32_t muMaxEntries;

			// CgsResourceScratchPool.h:88
			void * mpOverhead;

			// CgsResourceScratchPool.h:89
			uint32_t muOverheadMemorySize;

			// CgsResourceScratchPool.h:91
			ResourceDescriptor mDescriptor;

			// CgsResourceScratchPool.h:92
			Resource mResource;

			// CgsResourceScratchPool.h:94
			int32_t miBankId;

		}

	}

}

