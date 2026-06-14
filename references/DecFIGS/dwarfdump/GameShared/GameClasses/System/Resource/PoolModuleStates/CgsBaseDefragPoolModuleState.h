// CgsBaseDefragPoolModuleState.h:48
struct CgsResource::BaseDefragParams {
	// CgsBaseDefragPoolModuleState.h:50
	CgsResource::Pool * mpPool;

	// CgsBaseDefragPoolModuleState.h:51
	AllocListSet * mpAllocListSet;

	// CgsBaseDefragPoolModuleState.h:52
	AllocRequestAddressed * mpAddressedAllocRequests;

	// CgsBaseDefragPoolModuleState.h:53
	RelocateRequest * mpRelocateRequests;

	// CgsBaseDefragPoolModuleState.h:54
	DistributionEntry * mpDistributionEntries;

	// CgsBaseDefragPoolModuleState.h:55
	LinearHeapNode * mpLinearHeapNodes;

	// CgsBaseDefragPoolModuleState.h:56
	RelocateSource * mpRelocateSources;

	// CgsBaseDefragPoolModuleState.h:57
	uint32_t muMaxAddressedAllocRequests;

	// CgsBaseDefragPoolModuleState.h:58
	uint32_t muMaxRelocateRequests;

	// CgsBaseDefragPoolModuleState.h:59
	uint32_t muMaxDistributionRequests;

	// CgsBaseDefragPoolModuleState.h:60
	uint32_t muMaxLinearHeapNodes;

	// CgsBaseDefragPoolModuleState.h:61
	uint32_t muMaxRelocateSources;

}

// CgsBaseDefragPoolModuleState.h:74
struct CgsResource::BaseDefragPoolModuleState : public BasePoolModuleState {
	int (*)(...) * _vptr.BaseDefragPoolModuleState;

private:
	// CgsBaseDefragPoolModuleState.h:125
	CgsResource::PoolModule * mpPoolModule;

	// CgsBaseDefragPoolModuleState.h:127
	int32_t miCurrentMemType;

	// CgsBaseDefragPoolModuleState.h:129
	CgsResource::Pool * mpPool;

	// CgsBaseDefragPoolModuleState.h:130
	AllocListSet * mpAllocListSet;

	// CgsBaseDefragPoolModuleState.h:131
	AllocRequestAddressed * mpAddressedAllocRequests;

	// CgsBaseDefragPoolModuleState.h:132
	RelocateRequest * mpRelocateRequests;

	// CgsBaseDefragPoolModuleState.h:133
	DistributionEntry * mpDistributionEntries;

	// CgsBaseDefragPoolModuleState.h:134
	LinearHeapNode * mpLinearHeapNodes;

	// CgsBaseDefragPoolModuleState.h:135
	RelocateSource * mpRelocateSources;

	// CgsBaseDefragPoolModuleState.h:137
	uint32_t muMaxAddressedAllocRequests;

	// CgsBaseDefragPoolModuleState.h:138
	uint32_t muMaxRelocateRequests;

	// CgsBaseDefragPoolModuleState.h:139
	uint32_t muMaxDistributionRequests;

	// CgsBaseDefragPoolModuleState.h:140
	uint32_t muMaxLinearHeapNodes;

	// CgsBaseDefragPoolModuleState.h:141
	uint32_t muMaxRelocateSources;

	// CgsBaseDefragPoolModuleState.h:143
	uint32_t muAddressedAllocCount;

	// CgsBaseDefragPoolModuleState.h:144
	uint32_t muRelocationCount;

	// CgsBaseDefragPoolModuleState.h:146
	uint16_t muNumLinearHeapNodes;

	// CgsBaseDefragPoolModuleState.h:148
	int32_t miMaxToMove;

public:
	void BaseDefragPoolModuleState(const BaseDefragPoolModuleState &);

	void BaseDefragPoolModuleState();

protected:
	// CgsBaseDefragPoolModuleState.h:80
	void Construct(CgsResource::PoolModule *);

	// CgsBaseDefragPoolModuleState.h:83
	void Begin(BaseDefragParams *);

	// CgsBaseDefragPoolModuleState.h:86
	bool BeginDefragment(int32_t);

	// CgsBaseDefragPoolModuleState.h:89
	bool DoFinalAllocations();

	// CgsBaseDefragPoolModuleState.h:92
	int32_t FindFirstFreeNode();

	// CgsBaseDefragPoolModuleState.h:95
	int32_t FindNextFreeNode(int32_t);

	// CgsBaseDefragPoolModuleState.h:98
	int32_t BuildFinalRelocationData();

	// CgsBaseDefragPoolModuleState.h:181
	uint32_t AddAddressedAllocRequest(uint32_t, uint32_t, void *);

	// CgsBaseDefragPoolModuleState.h:203
	uint32_t AddRelocateRequest(uint16_t, uint32_t);

	// CgsBaseDefragPoolModuleState.h:217
	CgsResource::Pool * GetPool();

	// CgsBaseDefragPoolModuleState.h:223
	CgsResource::PoolModule * GetPoolModule();

	// CgsBaseDefragPoolModuleState.h:229
	CgsResource::EBatchAllocResult GetAllocationResult(int32_t);

	// CgsBaseDefragPoolModuleState.h:235
	void SetMaxToMove(int32_t);

private:
	// CgsBaseDefragPoolModuleState.h:155
	virtual bool RunDefragAlgorithm(AllocListSet *, LinearHeapNode *, int32_t, int32_t);

	// CgsBaseDefragPoolModuleState.h:162
	virtual void RunPoolDefragmentation(RelocateRequest *, RelocateSource *, uint32_t, int32_t);

}

// CgsBaseDefragPoolModuleState.h:74
void CgsResource::BaseDefragPoolModuleState::BaseDefragPoolModuleState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsBaseDefragPoolModuleState.h:74
struct CgsResource::BaseDefragPoolModuleState : public BasePoolModuleState {
	int (*)(...) * _vptr.BaseDefragPoolModuleState;

private:
	// CgsBaseDefragPoolModuleState.h:125
	CgsResource::PoolModule * mpPoolModule;

	// CgsBaseDefragPoolModuleState.h:127
	int32_t miCurrentMemType;

	// CgsBaseDefragPoolModuleState.h:129
	CgsResource::Pool * mpPool;

	// CgsBaseDefragPoolModuleState.h:130
	AllocListSet * mpAllocListSet;

	// CgsBaseDefragPoolModuleState.h:131
	AllocRequestAddressed * mpAddressedAllocRequests;

	// CgsBaseDefragPoolModuleState.h:132
	RelocateRequest * mpRelocateRequests;

	// CgsBaseDefragPoolModuleState.h:133
	DistributionEntry * mpDistributionEntries;

	// CgsBaseDefragPoolModuleState.h:134
	LinearHeapNode * mpLinearHeapNodes;

	// CgsBaseDefragPoolModuleState.h:135
	RelocateSource * mpRelocateSources;

	// CgsBaseDefragPoolModuleState.h:137
	uint32_t muMaxAddressedAllocRequests;

	// CgsBaseDefragPoolModuleState.h:138
	uint32_t muMaxRelocateRequests;

	// CgsBaseDefragPoolModuleState.h:139
	uint32_t muMaxDistributionRequests;

	// CgsBaseDefragPoolModuleState.h:140
	uint32_t muMaxLinearHeapNodes;

	// CgsBaseDefragPoolModuleState.h:141
	uint32_t muMaxRelocateSources;

	// CgsBaseDefragPoolModuleState.h:143
	uint32_t muAddressedAllocCount;

	// CgsBaseDefragPoolModuleState.h:144
	uint32_t muRelocationCount;

	// CgsBaseDefragPoolModuleState.h:146
	uint16_t muNumLinearHeapNodes;

	// CgsBaseDefragPoolModuleState.h:148
	int32_t miMaxToMove;

protected:
	// CgsBaseDefragPoolModuleState.cpp:41
	void Construct(CgsResource::PoolModule *);

	// CgsBaseDefragPoolModuleState.cpp:71
	void Begin(BaseDefragParams *);

	// CgsBaseDefragPoolModuleState.cpp:122
	// Declaration
	bool BeginDefragment(int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsBaseDefragPoolModuleState.cpp:226
		using namespace CgsDev::Message;

		// CgsBaseDefragPoolModuleState.cpp:231
		using namespace CgsDev::Message;

	}

	// CgsBaseDefragPoolModuleState.cpp:251
	bool DoFinalAllocations();

	// CgsBaseDefragPoolModuleState.cpp:289
	int32_t FindFirstFreeNode();

	// CgsBaseDefragPoolModuleState.cpp:305
	int32_t FindNextFreeNode(int32_t);

	// CgsBaseDefragPoolModuleState.cpp:335
	int32_t BuildFinalRelocationData();

	// CgsBaseDefragPoolModuleState.h:181
	uint32_t AddAddressedAllocRequest(uint32_t, uint32_t, void *);

	// CgsBaseDefragPoolModuleState.h:203
	uint32_t AddRelocateRequest(uint16_t, uint32_t);

	// CgsBaseDefragPoolModuleState.h:217
	CgsResource::Pool * GetPool();

	// CgsBaseDefragPoolModuleState.h:223
	CgsResource::PoolModule * GetPoolModule();

	// CgsBaseDefragPoolModuleState.h:229
	CgsResource::EBatchAllocResult GetAllocationResult(int32_t);

	// CgsBaseDefragPoolModuleState.h:235
	void SetMaxToMove(int32_t);

private:
	// CgsBaseDefragPoolModuleState.h:155
	virtual bool RunDefragAlgorithm(AllocListSet *, LinearHeapNode *, int32_t, int32_t);

	// CgsBaseDefragPoolModuleState.h:162
	virtual void RunPoolDefragmentation(RelocateRequest *, RelocateSource *, uint32_t, int32_t);

}

