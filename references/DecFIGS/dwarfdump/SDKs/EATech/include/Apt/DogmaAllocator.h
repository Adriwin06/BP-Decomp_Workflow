// DogmaAllocator.h:100
struct _DOGMA_MemPool {
protected:
	// DogmaAllocator.h:267
	_DOGMA_MemPool * mpNextPool;

	// DogmaAllocator.h:268
	size_t mnPoolSize;

	// DogmaAllocator.h:269
	size_t mnPoolFree;

	// DogmaAllocator.h:270
	uint8_t mPoolStart;

public:
	// DogmaAllocator.h:128
	void SetupPool(_DOGMA_MemPool *, size_t);

	// DogmaAllocator.h:134
	_DOGMA_MemPool * GetNextPool() const;

	// DogmaAllocator.h:153
	bool CanFitBytes(size_t) const;

	// DogmaAllocator.h:176
	void * ConsumeBytes(size_t);

	// DogmaAllocator.h:205
	void * GetFirstItem();

	// DogmaAllocator.h:231
	bool PtrIsInThisPool(const void *) const;

	// DogmaAllocator.h:260
	size_t GetBytesUsed();

}

// DogmaAllocator.h:271
typedef _DOGMA_MemPool DOGMA_MemPool;

// DogmaAllocator.h:308
struct DOGMA_PoolManager {
	// DogmaAllocator.h:356
	struct _OutsideAllocationT {
		// DogmaAllocator.h:358
		DOGMA_PoolManager::_OutsideAllocationT * pNext;

		// DogmaAllocator.h:359
		DOGMA_PoolManager::_OutsideAllocationT * pPrev;

	private:
		// DogmaAllocator.h:378
		uint8_t[1] returnedMemory;

	public:
		// DogmaAllocator.h:361
		void * GetReturnedPointer();

		// DogmaAllocator.h:366
		size_t GetStructOverHead();

		// DogmaAllocator.h:371
		DOGMA_PoolManager::_OutsideAllocationT * GetStructPointerFromReturnedPointer(const void *);

	}

protected:
	// DogmaAllocator.h:339
	uintptr_t ** mpaFirstFreeBySize;

	// DogmaAllocator.h:341
	DOGMA_MemPool * mpFirstPool;

	// DogmaAllocator.h:343
	const size_t mnOverflowPoolSize;

	// DogmaAllocator.h:346
	const size_t mnMaxSizeAllocation;

	// DogmaAllocator.h:349
	uint32_t mnOffsetToStoreNext;

	// DogmaAllocator.h:350
	uint32_t mnOffsetToStoreSize;

	// DogmaAllocator.h:351
	uint32_t mnMinimumAllocationSize;

	// DogmaAllocator.h:352
	uint32_t mbStoreFreeBlockSize;

	// DogmaAllocator.h:353
	uint32_t mbTrackOutsideAllocations;

	// DogmaAllocator.h:382
	DOGMA_PoolManager::_OutsideAllocationT * mpFirstOutSideAllocation;

	// Unknown accessibility
	// DogmaAllocator.h:386
	uint32_t mnItemsAllocated;

	// Unknown accessibility
	// DogmaAllocator.h:387
	uint32_t mnItemsFreed;

public:
	// DogmaAllocator.h:310
	void * operator new(size_t);

	// DogmaAllocator.h:311
	void operator delete(void *, size_t);

	// DogmaAllocator.h:312
	void * operator new [](size_t);

	// DogmaAllocator.h:313
	void operator delete [](void *);

	// DogmaAllocator.h:321
	DOGMA_PoolManager(size_t, size_t, size_t, size_t, uint8_t, bool, uint8_t, bool);

	// DogmaAllocator.h:323
	~DOGMA_PoolManager();

	// DogmaAllocator.h:325
	void * Allocate(size_t);

	// DogmaAllocator.h:326
	bool Deallocate(void *, size_t);

	// DogmaAllocator.h:328
	size_t GetTotalBytesUsed();

	// DogmaAllocator.h:330
	void * GetFirstOutsideAllocation();

	// DogmaAllocator.h:331
	void * GetNextOutsideAllocation(const void *);

protected:
	// DogmaAllocator.h:335
	void * ConsumeFreeBlockBySize(size_t);

	// DogmaAllocator.h:336
	void AddFreeBlockBySize(void *, size_t);

	// DogmaAllocator.h:337
	size_t ToNextValidSize(size_t);

private:
	// DogmaAllocator.h:419
	DOGMA_PoolManager & operator=(const DOGMA_PoolManager &);

}

