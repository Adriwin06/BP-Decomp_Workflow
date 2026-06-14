// CgsDispatcher.h:62
struct CgsGraphics::DispatchBin {
	// CgsDispatcher.h:66
	extern const uint32_t KU_BLOCK_SIZE_IN_QUAD_WORDS = 1024;

	// CgsDispatcher.h:71
	extern const uint32_t KU_BLOCK_SIZE_IN_BYTES = 16384;

private:
	// CgsDispatcher.h:170
	void (*)(void *) mpMemoryCallback;

	// CgsDispatcher.h:171
	void * mpMemoryContext;

	// CgsDispatcher.h:173
	DispatchCommand * m_pBin;

	// CgsDispatcher.h:174
	DispatchCommand * m_pNextWord;

	// CgsDispatcher.h:176
	DispatchPacket * m_pPacketStart;

	// CgsDispatcher.h:177
	DispatchCommand * m_pLastCommandInPacket;

	// CgsDispatcher.h:179
	uint32_t m_uSize;

	// CgsDispatcher.h:180
	void * m_pActiveAllocateMemoryBlock;

	// CgsDispatcher.h:186
	uint32_t m_uSizeUsedLastTime;

	// CgsDispatcher.h:189
	DispatchCommand * mpSharedBinStart;

	// CgsDispatcher.h:191
	uint32_t muSharedBinBlockMax;

	// CgsDispatcher.h:192
	uint32_t * mpSharedBinBlockNextFree_Atomic;

	// CgsDispatcher.h:195
	CgsGraphics::DispatchFrame * mpDispatchFrame;

public:
	// CgsDispatcher.h:77
	void Construct(uint32_t, rw::IResourceAllocator *);

	// CgsDispatcher.h:80
	void Release();

	// CgsDispatcher.h:83
	void Reset();

	// CgsDispatcher.h:87
	void BeginPacket();

	// CgsDispatcher.h:91
	DispatchPacket * EndPacket();

	// CgsDispatcher.h:95
	DispatchCommand * AllocateCommand(uint32_t);

	// CgsDispatcher.h:97
	uint32_t GetPreviousTotalUsedBytes();

	// CgsDispatcher.h:113
	void * BeginAllocateMemory(uint32_t);

	// CgsDispatcher.h:117
	void EndAllocateMemory(uint32_t);

	// CgsDispatcher.h:122
	void SetSizeOfPreviousCommand(uint32_t);

	// CgsDispatcher.h:125
	void * AllocateMemoryFast(uint32_t);

	// CgsDispatcher.h:128
	void * GetBinStart() const;

	// CgsDispatcher.h:131
	void * GetBinCurrent() const;

	// CgsDispatcher.h:134
	void * GetBinEnd() const;

	// CgsDispatcher.h:137
	uint32_t GetBinSizeInBytes() const;

	// CgsDispatcher.h:140
	void Reserve(uint32_t);

	// CgsDispatcher.h:143
	void Align(uint32_t);

	// CgsDispatcher.h:148
	void SetMemoryCallback(void (*)(void *), void *);

	// CgsDispatcher.h:151
	void SetDispatchFrame(CgsGraphics::DispatchFrame *);

	// CgsDispatcher.h:155
	void SetBinCurrent(DispatchCommand *);

	// CgsDispatcher.h:158
	void SetBinRange(DispatchCommand *, DispatchCommand *);

private:
	// CgsDispatcher.h:162
	void HandleMemoryOverflow(uint32_t);

	// CgsDispatcher.h:168
	void ConstructWithSharedBinMemory(uintptr_t, uint32_t *, uint32_t);

}

// CgsDispatcher.h:208
struct CgsGraphics::DispatchList {
	// CgsDispatcher.h:210
	extern const uint32_t KU_MAX_KEYS_PER_BLOCK = 64;

	// CgsDispatcher.h:211
	extern const uint32_t KU_MAX_BLOCKS_PER_CHAIN = 64;

private:
	// CgsDispatcher.h:318
	uint32_t muFixedAllocationSize;

	// CgsDispatcher.h:320
	CgsGraphics::DispatchBin * mpDispatchBin;

	// CgsDispatcher.h:322
	DispatchCommand * mpDispatchBinMasterStart;

	// CgsDispatcher.h:325
	uint32_t muTotalKeyCount;

	// CgsDispatcher.h:329
	SortKeyBlock * mpBlockListHead;

	// CgsDispatcher.h:330
	SortKeyBlock * mpBlockListTail;

	// CgsDispatcher.h:334
	SortKey * mpaSortedKeyArray;

	// CgsDispatcher.h:336
	SortKeyBlock *[64] mapChainBlockArray;

	// CgsDispatcher.h:337
	uint32_t muChainBlockCount;

public:
	// CgsDispatcher.h:214
	void Construct(CgsGraphics::DispatchBin *);

	// CgsDispatcher.h:217
	void Release();

	// CgsDispatcher.h:220
	void Reset();

	// CgsDispatcher.h:226
	void Submit(uint64_t, DispatchCommand *);

	// CgsDispatcher.h:233
	void DispatchAll(const DispatchPacketInterpreter *, void *);

	// CgsDispatcher.h:242
	void DispatchAllObjectToMesh(const DispatchPacketInterpreter *, CgsGraphics::DispatchFrame *, void *, int32_t, int32_t);

	// CgsDispatcher.h:250
	int32_t DispatchAllMeshes(const DispatchPacketInterpreter *, void *, int32_t, int32_t);

	// CgsDispatcher.h:257
	int32_t DispatchAllMeshOcclusionQueries(const DispatchPacketInterpreter *, int32_t, int32_t);

	// CgsDispatcher.h:264
	int32_t DispatchAllMeshOcclusionQueries_Bulk(const DispatchPacketInterpreter *, int32_t, int32_t);

	// CgsDispatcher.h:270
	void DispatchAllMeshesZOnly(const DispatchPacketInterpreter *, void *);

	// CgsDispatcher.h:273
	uint32_t ExposeKeyCount() const;

	// CgsDispatcher.h:276
	void PrepareSortJobInfo(SortJobInputOutput &);

	// CgsDispatcher.h:279
	DispatchCommand * GetCommandFromIndex(uint32_t) const;

	// CgsDispatcher.h:282
	DispatchCommand * GetCommandFromIndex_Sorted(uint32_t) const;

	// CgsDispatcher.h:285
	void Append(DispatchList *);

	// CgsDispatcher.h:288
	void SetDispatchBinMasterStart(DispatchCommand *);

	// CgsDispatcher.h:291
	void SetSingleKeyBlock(SortKeyBlock *);

	// CgsDispatcher.h:294
	void SetSortedKeyArray(SortKey *);

	// CgsDispatcher.h:297
	SortKey * GetSortedKeyArray() const;

	// CgsDispatcher.h:300
	SortKeyBlock * GetFirstKeyBlock() const;

	// CgsDispatcher.h:303
	void ReconnectChainBlocks();

	// CgsDispatcher.h:306
	void ReserveKey();

private:
	// CgsDispatcher.h:310
	void Verify();

	// CgsDispatcher.h:313
	void RelocateForMainMemory(uintptr_t, uintptr_t, uintptr_t);

	// CgsDispatcher.h:316
	void AllocateKeyBlock();

}

// CgsDispatcher.h:353
struct CgsGraphics::DispatchFrame {
	// CgsDispatcher.h:397
	DispatchList * m_paLists;

	// CgsDispatcher.h:398
	DispatchBin m_Bin;

	// CgsDispatcher.h:399
	uint32_t muNumDispatchLists;

	// CgsDispatcher.h:402
	uintptr_t mpDispatchBinOutputAddress;

	// CgsDispatcher.h:403
	uintptr_t mpDispatchBinMasterAddress;

public:
	// CgsDispatcher.h:360
	void Construct(uint32_t, uint32_t, rw::IResourceAllocator *);

	// CgsDispatcher.h:363
	void Release();

	// CgsDispatcher.h:366
	void Reset();

	// CgsDispatcher.h:371
	DispatchList * GetList(uint32_t);

	// CgsDispatcher.h:374
	CgsGraphics::DispatchBin * GetBin();

	// CgsDispatcher.h:383
	void ConstructWithSharedBinMemory(DispatchList *, uint32_t, uintptr_t, uintptr_t, uint32_t *, uint32_t);

	// CgsDispatcher.h:386
	void RelocateForMainMemory(uintptr_t, uintptr_t, uintptr_t);

	// CgsDispatcher.h:389
	void FlushBlockToSharedMemory();

	// CgsDispatcher.h:392
	void SetActiveBlockInSharedMemory(uintptr_t);

}

// CgsDispatcher.h:66
extern const uint32_t KU_BLOCK_SIZE_IN_QUAD_WORDS = 1024;

// CgsDispatcher.h:211
extern const uint32_t KU_MAX_BLOCKS_PER_CHAIN = 64;

// CgsDispatcher.h:71
extern const uint32_t KU_BLOCK_SIZE_IN_BYTES = 16384;

// CgsDispatcher.h:208
struct CgsGraphics::DispatchList {
	// CgsDispatcher.h:210
	extern const uint32_t KU_MAX_KEYS_PER_BLOCK = 64;

	// CgsDispatcher.h:211
	extern const uint32_t KU_MAX_BLOCKS_PER_CHAIN = 64;

private:
	// CgsDispatcher.h:318
	uint32_t muFixedAllocationSize;

	// CgsDispatcher.h:320
	CgsGraphics::DispatchBin * mpDispatchBin;

	// CgsDispatcher.h:322
	DispatchCommand * mpDispatchBinMasterStart;

	// CgsDispatcher.h:325
	uint32_t muTotalKeyCount;

	// CgsDispatcher.h:329
	SortKeyBlock * mpBlockListHead;

	// CgsDispatcher.h:330
	SortKeyBlock * mpBlockListTail;

	// CgsDispatcher.h:334
	SortKey * mpaSortedKeyArray;

	// CgsDispatcher.h:336
	SortKeyBlock *[64] mapChainBlockArray;

	// CgsDispatcher.h:337
	uint32_t muChainBlockCount;

public:
	// CgsDispatcher.h:214
	void Construct(CgsGraphics::DispatchBin *);

	// CgsDispatcher.h:217
	void Release();

	// CgsDispatcher.h:220
	void Reset();

	// CgsDispatcher.h:226
	void Submit(uint64_t, DispatchCommand *);

	// CgsDispatcher.h:233
	void DispatchAll(const DispatchPacketInterpreter *, void *);

	// CgsDispatcher.h:242
	void DispatchAllObjectToMesh(const DispatchPacketInterpreter *, CgsGraphics::DispatchFrame *, void *, int32_t, int32_t);

	// CgsDispatcher.h:250
	// Declaration
	int32_t DispatchAllMeshes(const DispatchPacketInterpreter *, void *, int32_t, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsDispatcherCommands.cpp:2182
		using namespace renderengine;

		// CgsDispatcherCommands.cpp:2253
		using namespace renderengine;

	}

	// CgsDispatcher.h:257
	int32_t DispatchAllMeshOcclusionQueries(const DispatchPacketInterpreter *, int32_t, int32_t);

	// CgsDispatcher.h:264
	int32_t DispatchAllMeshOcclusionQueries_Bulk(const DispatchPacketInterpreter *, int32_t, int32_t);

	// CgsDispatcher.h:270
	void DispatchAllMeshesZOnly(const DispatchPacketInterpreter *, void *);

	// CgsDispatcher.h:273
	uint32_t ExposeKeyCount() const;

	// CgsDispatcher.h:276
	void PrepareSortJobInfo(SortJobInputOutput &);

	// CgsDispatcher.h:279
	DispatchCommand * GetCommandFromIndex(uint32_t) const;

	// CgsDispatcher.h:282
	DispatchCommand * GetCommandFromIndex_Sorted(uint32_t) const;

	// CgsDispatcher.h:285
	void Append(DispatchList *);

	// CgsDispatcher.h:288
	void SetDispatchBinMasterStart(DispatchCommand *);

	// CgsDispatcher.h:291
	void SetSingleKeyBlock(SortKeyBlock *);

	// CgsDispatcher.h:294
	void SetSortedKeyArray(SortKey *);

	// CgsDispatcher.h:297
	SortKey * GetSortedKeyArray() const;

	// CgsDispatcher.h:300
	SortKeyBlock * GetFirstKeyBlock() const;

	// CgsDispatcher.h:303
	void ReconnectChainBlocks();

	// CgsDispatcher.h:306
	void ReserveKey();

private:
	// CgsDispatcher.h:310
	void Verify();

	// CgsDispatcher.h:313
	void RelocateForMainMemory(uintptr_t, uintptr_t, uintptr_t);

	// CgsDispatcher.h:316
	void AllocateKeyBlock();

}

// CgsDispatcher.h:210
extern const uint32_t KU_MAX_KEYS_PER_BLOCK = 64;

