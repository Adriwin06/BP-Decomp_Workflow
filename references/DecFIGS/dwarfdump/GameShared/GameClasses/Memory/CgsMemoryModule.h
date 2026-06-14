// CgsHeapMalloc.h:33
namespace CgsMemory {
	// Declaration
	struct MemoryModule {
		// CgsMemoryModule.h:79
		struct RootResourceSet {
			// CgsMemoryModule.h:81
			void * mpDataStart;

			// CgsMemoryModule.h:82
			uint32_t muDataSize;

			// CgsMemoryModule.h:83
			uint16_t muNumBlocks;

		}

		// CgsMemoryModule.h:95
		struct InitOptions {
			// CgsMemoryModule.h:97
			uint32_t muMaxBanks;

			// CgsMemoryModule.h:98
			uint32_t muHighestId;

			// CgsMemoryModule.h:99
			uint32_t muMaxBlocks;

			// CgsMemoryModule.h:100
			CgsMemory::MemoryModule::RootResourceSet[6] maResourceSets;

		}

	}

}

// CgsMemoryModule.h:51
void CgsMemory::MemoryModule::~MemoryModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMemoryModule.h:51
void CgsMemory::MemoryModule::MemoryModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHeapMalloc.h:33
namespace CgsMemory {
	// Declaration
	struct MemoryModule {
		// CgsMemoryModule.h:54
		enum EPrepareStage {
			E_PREPARE_START = 0,
			E_PREPARE_MANAGER = 1,
			E_PREPARE_INIT_MEMORY = 2,
			E_PREPARE_DONE = 3,
		}

		// CgsMemoryModule.h:62
		enum EReleaseStage {
			E_RELEASE_START = 0,
			E_RELEASE_MANAGER = 1,
			E_RELEASE_DONE = 2,
		}

		// CgsMemoryModule.h:79
		struct RootResourceSet {
			// CgsMemoryModule.h:81
			void * mpDataStart;

			// CgsMemoryModule.h:82
			uint32_t muDataSize;

			// CgsMemoryModule.h:83
			uint16_t muNumBlocks;

		}

		// CgsMemoryModule.h:95
		struct InitOptions {
			// CgsMemoryModule.h:97
			uint32_t muMaxBanks;

			// CgsMemoryModule.h:98
			uint32_t muHighestId;

			// CgsMemoryModule.h:99
			uint32_t muMaxBlocks;

			// CgsMemoryModule.h:100
			CgsMemory::MemoryModule::RootResourceSet[6] maResourceSets;

		}

		// CgsMemoryModule.h:112
		struct InternalBankCreateParams {
			// CgsMemoryModule.h:114
			uint8_t mu8BankIndex;

			// CgsMemoryModule.h:115
			uint8_t mu8ParentBankIndex;

			// CgsMemoryModule.h:116
			uint16_t[6] mau16ParentBlockCounts;

			// CgsMemoryModule.h:117
			uint16_t[6] mau16ChildBankBlockSizes;

			// CgsMemoryModule.h:118
			bool mbIsLeaf;

		}

	}

}

// CgsMemoryModule.h:51
struct CgsMemory::MemoryModule : public CgsModule::ModuleSingleBuffered {
private:
	// CgsMemoryModule.h:161
	CgsMemory::MemoryModule::EPrepareStage mePrepareStage;

	// CgsMemoryModule.h:162
	CgsMemory::MemoryModule::EReleaseStage meReleaseStage;

	// CgsMemoryModule.h:164
	MemoryBank * mpBanks;

	// CgsMemoryModule.h:165
	MemoryBlock * mpBlocks;

	// CgsMemoryModule.h:166
	uint8_t * mpu8IdMap;

	// CgsMemoryModule.h:167
	char ** mppcNames;

	// CgsMemoryModule.h:168
	uint32_t muMaxBanks;

	// CgsMemoryModule.h:169
	uint32_t muMaxBlocks;

	// CgsMemoryModule.h:170
	uint32_t muHighestId;

	// CgsMemoryModule.h:172
	uint32_t muFirstFreeBlock;

	// CgsMemoryModule.h:173
	uint32_t muNumFreeBlocks;

	// CgsMemoryModule.h:175
	LinearMalloc mScratchSpace;

	// CgsMemoryModule.h:177
	CgsMemory::MemoryModule::RootResourceSet[6] maRootSets;

	// CgsMemoryModule.h:180
	DebugComponentMemory mDebugComponentMemory;

public:
	// CgsMemoryModule.h:391
	uint32_t GetOverheadRequired(const CgsMemory::MemoryModule::InitOptions *);

	// CgsMemoryModule.cpp:47
	virtual void Construct(CgsMemory::MemoryModule::InitOptions *, rw::IResourceAllocator *);

	// CgsMemoryModule.cpp:115
	virtual bool Prepare();

	// CgsMemoryModule.cpp:175
	virtual bool Release();

	// CgsMemoryModule.cpp:222
	virtual void Destruct();

	// CgsMemoryModule.cpp:245
	void Update(IOBufferStack *, IOBufferStack *, const InputBuffer *, OutputBuffer *);

	// CgsMemoryModule.cpp:1755
	// Declaration
	void DebugPrint() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsMemoryModule.cpp:1762
		using namespace CgsDev::Message;

		// CgsMemoryModule.cpp:1763
		using namespace CgsDev::Message;

		// CgsMemoryModule.cpp:1764
		using namespace CgsDev::Message;

		// CgsMemoryModule.cpp:1765
		using namespace CgsDev::Message;

		// CgsMemoryModule.cpp:1766
		using namespace CgsDev::Message;

		// CgsMemoryModule.cpp:1769
		using namespace CgsDev::Message;

		// CgsMemoryModule.cpp:1806
		using namespace CgsDev::Message;

		// CgsMemoryModule.cpp:1807
		using namespace CgsDev::Message;

		// CgsMemoryModule.cpp:1810
		using namespace CgsDev::Message;

	}

private:
	// CgsMemoryModule.h:344
	uint8_t GetBankIndexFromId(int32_t);

	// CgsMemoryModule.h:360
	MemoryBank * GetBankFromId(int32_t);

	// CgsMemoryModule.h:375
	MemoryBank * GetBank(uint8_t);

	// CgsMemoryModule.cpp:281
	void ProcessMemoryRequest(const MemoryRequest *, OutputBuffer *);

	// CgsMemoryModule.cpp:352
	void ProcessCreateBankRequest(const CreateBankRequest *, OutputBuffer *);

	// CgsMemoryModule.cpp:377
	// Declaration
	void ProcessCreateResourceRequest(const CreateResourceRequest *, OutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsMemoryModule.cpp:424
		using namespace CgsDev::Message;

	}

	// CgsMemoryModule.cpp:487
	// Declaration
	void ProcessCreateLinearAllocatorRequest(const CreateLinearAllocatorRequest *, OutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsMemoryModule.cpp:541
		using namespace CgsDev::Message;

	}

	// CgsMemoryModule.cpp:607
	// Declaration
	void ProcessCreateGeneralAllocatorRequest(const CreateGeneralAllocatorRequest *, OutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsMemoryModule.cpp:661
		using namespace CgsDev::Message;

	}

	// CgsMemoryModule.cpp:727
	void ProcessDestroyBankRequest(const DestroyBankRequest *, OutputBuffer *);

	// CgsMemoryModule.cpp:753
	void ProcessCreateAllocatorRequest(const CreateAllocatorRequest *, OutputBuffer *);

	// CgsMemoryModule.cpp:838
	void ProcessDestroyAllocatorRequest(const DestroyAllocatorRequest *, OutputBuffer *);

	// CgsMemoryModule.cpp:1039
	// Declaration
	CgsMemory::MemoryIO::ResultCodes CreateBank(const CgsMemory::MemoryBank::Params *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsMemoryModule.cpp:1079
		using namespace CgsDev::Message;

		// CgsMemoryModule.cpp:1092
		using namespace CgsDev::Message;

	}

	// CgsMemoryModule.cpp:1180
	CgsMemory::MemoryIO::ResultCodes DestroyBank(int32_t, bool);

	// CgsMemoryModule.cpp:896
	void InitBlocks();

	// CgsMemoryModule.cpp:934
	void InitBanks();

	// CgsMemoryModule.cpp:1353
	bool AllocateBlocks(uint16_t, uint16_t, uint16_t, bool, uint32_t *, uint32_t *);

	// CgsMemoryModule.cpp:956
	void CreateRootBank();

	// CgsMemoryModule.cpp:1442
	CgsMemory::MemoryIO::ResultCodes AllocateIntoBank(CgsMemory::MemoryModule::InternalBankCreateParams *);

	// CgsMemoryModule.cpp:1585
	bool FindContiguousFreeBlocks(uint32_t, uint32_t, bool, uint32_t *, uint32_t *, uint32_t *, uint32_t *);

	// CgsMemoryModule.cpp:1657
	void MarkRangeAsUsed(uint16_t, uint32_t, uint32_t);

	// CgsMemoryModule.cpp:1694
	void VerifyMemoryMap();

	// CgsMemoryModule.cpp:1864
	void DebugPrintBlockStart(uint32_t, uint32_t);

	// CgsMemoryModule.cpp:1897
	// Declaration
	void DebugPrintBlockEnd(uint32_t, uint32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsMemoryModule.cpp:1899
		using namespace CgsDev::Message;

	}

	// CgsMemoryModule.h:415
	int32_t ComputeAlignment(int32_t, int32_t);

}

// CgsHeapMalloc.h:33
namespace CgsMemory {
	// Declaration
	struct MemoryModule {
		// CgsMemoryModule.h:79
		struct RootResourceSet {
			// CgsMemoryModule.h:81
			void * mpDataStart;

			// CgsMemoryModule.h:82
			uint32_t muDataSize;

			// CgsMemoryModule.h:83
			uint16_t muNumBlocks;

		}

		// CgsMemoryModule.h:95
		struct InitOptions {
			// CgsMemoryModule.h:97
			uint32_t muMaxBanks;

			// CgsMemoryModule.h:98
			uint32_t muHighestId;

			// CgsMemoryModule.h:99
			uint32_t muMaxBlocks;

			// CgsMemoryModule.h:100
			CgsMemory::MemoryModule::RootResourceSet[6] maResourceSets;

		}

	public:
		// CgsMemoryModule.h:391
		uint32_t GetOverheadRequired(const CgsMemory::MemoryModule::InitOptions *);

	}

}

