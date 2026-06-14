// AptValueGCAllocator.h:100
struct AptValueGC_PoolManager : public DOGMA_PoolManager {
protected:
	// AptValueGCAllocator.h:149
	extern uint8_t snOffsetToStoreNext;

	// AptValueGCAllocator.h:150
	extern uint8_t snOffsetToStoreSize;

	// AptValueGCAllocator.h:151
	extern uint8_t snMinAllocation;

	// AptValueGCAllocator.h:152
	extern uint32_t snMaxAllocation;

public:
	// AptValueGCAllocator.h:102
	void * operator new(size_t);

	// AptValueGCAllocator.h:106
	void operator delete(void *, size_t);

	// AptValueGCAllocator.h:110
	void * operator new [](size_t);

	// AptValueGCAllocator.h:114
	void operator delete [](void *);

	// AptValueGCAllocator.h:119
	AptValueGC_PoolManager(uint32_t, uint32_t);

	// AptValueGCAllocator.h:130
	AptValueGC * AllocateAptValueGC(size_t);

	// AptValueGCAllocator.h:131
	void DeallocateAptValueGC(AptValueGC *, size_t);

	// AptValueGCAllocator.h:138
	AptValue * GetNextAptValue(const AptValue *);

	// AptValueGCAllocator.h:139
	AptValue * GetFirstAptValue();

	// AptValueGCAllocator.h:140
	void VerifyList();

	// AptValueGCAllocator.h:142
	AptValue ** GetAllAllocatedAptValues();

	// AptValueGCAllocator.h:143
	void ReleaseAllocatedAptValuesArray(AptValue **, int32_t);

	// AptValueGCAllocator.h:145
	void StaticInitialize();

private:
	// AptValueGCAllocator.h:155
	AptValueGC_PoolManager & operator=(const AptValueGC_PoolManager &);

}

// AptValueGCAllocator.h:149
extern uint8_t snOffsetToStoreNext;

// AptValueGCAllocator.h:150
extern uint8_t snOffsetToStoreSize;

// AptValueGCAllocator.h:151
extern uint8_t snMinAllocation;

// AptValueGCAllocator.h:152
extern uint32_t snMaxAllocation;

