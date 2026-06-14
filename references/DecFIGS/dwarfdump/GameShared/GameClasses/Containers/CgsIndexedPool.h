// CgsIndexedPool.h:24
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>;

	struct IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>;

	struct LinearHashTable<std::uint64_t,std::int32_t>;

	struct LinearHashEntry<std::uint64_t,std::int32_t>;

	struct CgsHash;

	struct LocklessQueue<CgsFileSystem::DiskCacheCommand>;

	struct LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LinearHashEntry<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LocklessQueue<char*>;

	struct RingBuffer<CgsFileSystem::CacheDebugEntry>;

	struct FixedRingBuffer<CgsFileSystem::CacheDebugEntry,4>;

	struct LinearSOAHashTable<std::uint64_t,CgsResource::ImportHashTableValue>;

	struct DictEntry;

	struct DictionaryBase;

	struct Dictionary<ICE::ICETakeData>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct IndexedPool<BrnResource::CacheDeviceHandle,int8_t>;

	struct FixedIndexedPool<BrnResource::CacheDeviceHandle,8,int8_t>;

	struct IndexedPool<BrnResource::GameDataEventSlot,int16_t>;

	struct FixedIndexedPool<BrnResource::GameDataEventSlot,96,int16_t>;

	struct IndexedPool16<BrnResource::GameDataEventSlot,96>;

	struct BitArray<32u>;

	struct RingBuffer<BrnResource::GameDataModule::TestStreamEntry>;

	struct DictionaryResourceType<ICE::ICETakeData>;

	// Declaration
	struct DictionaryResourceTypeBase {
	public:
		DictionaryResourceTypeBase();

	}

	struct SimpleDictionary<ICE::ICETakeData>;

}

// CgsIndexedPool.h:33
struct CgsContainers::IndexedPool<BrnResource::CacheDeviceHandle,int8_t> {
private:
	// CgsIndexedPool.h:77
	CacheDeviceHandle * mpObjects;

	// CgsIndexedPool.h:78
	int8_t * mpiFreeIndices;

	// CgsIndexedPool.h:79
	int8_t miNumUsed;

	// CgsIndexedPool.h:80
	int8_t miNumFree;

	// CgsIndexedPool.h:81
	int8_t miMaxLength;

public:
	// CgsIndexedPool.h:111
	void Construct(CacheDeviceHandle *, int8_t *, int);

	// CgsIndexedPool.h:147
	void Clear();

	// CgsIndexedPool.h:171
	int8_t GetPoolSize();

	// CgsIndexedPool.h:187
	int8_t GetNumFree();

	// CgsIndexedPool.h:203
	int8_t GetNumUsed();

	// CgsIndexedPool.h:330
	CacheDeviceHandle * Pop();

	// CgsIndexedPool.h:357
	void Push(CacheDeviceHandle *);

	// CgsIndexedPool.h:219
	int8_t GetObjectIndex(const CacheDeviceHandle *);

	// CgsIndexedPool.h:238
	CacheDeviceHandle * GetObject(signed char);

	// CgsIndexedPool.h:267
	int8_t PopIndex();

	// CgsIndexedPool.h:298
	void PushIndex(signed char);

	// CgsIndexedPool.h:374
	bool DebugIsIndexFree(signed char);

	// CgsIndexedPool.h:398
	int32_t GetUsedList(CacheDeviceHandle **, int);

}

// CgsIndexedPool.h:85
struct CgsContainers::FixedIndexedPool<BrnResource::CacheDeviceHandle,8,int8_t> : public IndexedPool<BrnResource::CacheDeviceHandle,int8_t> {
private:
	// CgsIndexedPool.h:93
	CacheDeviceHandle[8] maObjects;

	// CgsIndexedPool.h:94
	int8_t[8] maiFreeIndices;

public:
	// CgsIndexedPool.h:131
	void Construct();

}

// CgsIndexedPool.h:33
struct CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t> {
private:
	// CgsIndexedPool.h:77
	GameDataEventSlot * mpObjects;

	// CgsIndexedPool.h:78
	int16_t * mpiFreeIndices;

	// CgsIndexedPool.h:79
	int16_t miNumUsed;

	// CgsIndexedPool.h:80
	int16_t miNumFree;

	// CgsIndexedPool.h:81
	int16_t miMaxLength;

public:
	// CgsIndexedPool.h:111
	void Construct(GameDataEventSlot *, int16_t *, int);

	// CgsIndexedPool.h:147
	void Clear();

	// CgsIndexedPool.h:171
	int16_t GetPoolSize();

	// CgsIndexedPool.h:187
	int16_t GetNumFree();

	// CgsIndexedPool.h:203
	int16_t GetNumUsed();

	// CgsIndexedPool.h:330
	GameDataEventSlot * Pop();

	// CgsIndexedPool.h:357
	void Push(GameDataEventSlot *);

	// CgsIndexedPool.h:219
	int16_t GetObjectIndex(const GameDataEventSlot *);

	// CgsIndexedPool.h:238
	GameDataEventSlot * GetObject(short int);

	// CgsIndexedPool.h:267
	int16_t PopIndex();

	// CgsIndexedPool.h:298
	void PushIndex(short int);

	// CgsIndexedPool.h:374
	bool DebugIsIndexFree(short int);

	// CgsIndexedPool.h:398
	int32_t GetUsedList(GameDataEventSlot **, int);

}

// CgsIndexedPool.h:85
struct CgsContainers::FixedIndexedPool<BrnResource::GameDataEventSlot,96,int16_t> : public IndexedPool<BrnResource::GameDataEventSlot,int16_t> {
private:
	// CgsIndexedPool.h:93
	GameDataEventSlot[96] maObjects;

	// CgsIndexedPool.h:94
	int16_t[96] maiFreeIndices;

public:
	// CgsIndexedPool.h:131
	void Construct();

}

// CgsIndexedPool.h:443
struct CgsContainers::IndexedPool16<BrnResource::GameDataEventSlot,96> : public FixedIndexedPool<BrnResource::GameDataEventSlot,96,int16_t> {
}

// CgsIndexedPool.h:33
struct CgsContainers::IndexedPool<CgsSceneManager::LooseOctree::LooseOctreeNodeAllocation,std::uint16_t> {
private:
	// CgsIndexedPool.h:77
	CgsSceneManager::LooseOctree::LooseOctreeNodeAllocation * mpObjects;

	// CgsIndexedPool.h:78
	uint16_t * mpiFreeIndices;

	// CgsIndexedPool.h:79
	uint16_t miNumUsed;

	// CgsIndexedPool.h:80
	uint16_t miNumFree;

	// CgsIndexedPool.h:81
	uint16_t miMaxLength;

public:
	// CgsIndexedPool.h:111
	void Construct(CgsSceneManager::LooseOctree::LooseOctreeNodeAllocation *, uint16_t *, int);

	// CgsIndexedPool.h:147
	void Clear();

	// CgsIndexedPool.h:171
	uint16_t GetPoolSize();

	// CgsIndexedPool.h:187
	uint16_t GetNumFree();

	// CgsIndexedPool.h:203
	uint16_t GetNumUsed();

	// CgsIndexedPool.h:330
	CgsSceneManager::LooseOctree::LooseOctreeNodeAllocation * Pop();

	// CgsIndexedPool.h:357
	void Push(CgsSceneManager::LooseOctree::LooseOctreeNodeAllocation *);

	// CgsIndexedPool.h:219
	uint16_t GetObjectIndex(const CgsSceneManager::LooseOctree::LooseOctreeNodeAllocation *);

	// CgsIndexedPool.h:238
	CgsSceneManager::LooseOctree::LooseOctreeNodeAllocation * GetObject(short unsigned int);

	// CgsIndexedPool.h:267
	uint16_t PopIndex();

	// CgsIndexedPool.h:298
	void PushIndex(short unsigned int);

	// CgsIndexedPool.h:374
	bool DebugIsIndexFree(short unsigned int);

	// CgsIndexedPool.h:398
	int32_t GetUsedList(CgsSceneManager::LooseOctree::LooseOctreeNodeAllocation **, int);

}

// CgsIndexedPool.h:33
struct CgsContainers::IndexedPool<CgsFileSystem::PhysicalPS3Handle,std::int8_t> {
private:
	// CgsIndexedPool.h:77
	PhysicalPS3Handle * mpObjects;

	// CgsIndexedPool.h:78
	int8_t * mpiFreeIndices;

	// CgsIndexedPool.h:79
	int8_t miNumUsed;

	// CgsIndexedPool.h:80
	int8_t miNumFree;

	// CgsIndexedPool.h:81
	int8_t miMaxLength;

public:
	// CgsIndexedPool.h:111
	void Construct(PhysicalPS3Handle *, int8_t *, int);

	// CgsIndexedPool.h:147
	void Clear();

	// CgsIndexedPool.h:171
	int8_t GetPoolSize();

	// CgsIndexedPool.h:187
	int8_t GetNumFree();

	// CgsIndexedPool.h:203
	int8_t GetNumUsed();

	// CgsIndexedPool.h:330
	PhysicalPS3Handle * Pop();

	// CgsIndexedPool.h:357
	void Push(PhysicalPS3Handle *);

	// CgsIndexedPool.h:219
	int8_t GetObjectIndex(const PhysicalPS3Handle *);

	// CgsIndexedPool.h:238
	PhysicalPS3Handle * GetObject(signed char);

	// CgsIndexedPool.h:267
	int8_t PopIndex();

	// CgsIndexedPool.h:298
	void PushIndex(signed char);

	// CgsIndexedPool.h:374
	bool DebugIsIndexFree(signed char);

	// CgsIndexedPool.h:398
	int32_t GetUsedList(PhysicalPS3Handle **, int);

}

// CgsIndexedPool.h:85
struct CgsContainers::FixedIndexedPool<CgsFileSystem::PhysicalPS3Handle,16,std::int8_t> : public IndexedPool<CgsFileSystem::PhysicalPS3Handle,std::int8_t> {
private:
	// CgsIndexedPool.h:93
	PhysicalPS3Handle[16] maObjects;

	// CgsIndexedPool.h:94
	int8_t[16] maiFreeIndices;

public:
	// CgsIndexedPool.h:131
	void Construct();

}

// CgsIndexedPool.h:436
struct CgsContainers::IndexedPool8<CgsFileSystem::PhysicalPS3Handle,16> : public FixedIndexedPool<CgsFileSystem::PhysicalPS3Handle,16,std::int8_t> {
}

// CgsIndexedPool.h:33
struct CgsContainers::IndexedPool<CgsResource::ResourceModule::PendingFileResponse,std::int8_t> {
private:
	// CgsIndexedPool.h:77
	CgsResource::ResourceModule::PendingFileResponse * mpObjects;

	// CgsIndexedPool.h:78
	int8_t * mpiFreeIndices;

	// CgsIndexedPool.h:79
	int8_t miNumUsed;

	// CgsIndexedPool.h:80
	int8_t miNumFree;

	// CgsIndexedPool.h:81
	int8_t miMaxLength;

public:
	// CgsIndexedPool.h:111
	void Construct(CgsResource::ResourceModule::PendingFileResponse *, int8_t *, int);

	// CgsIndexedPool.h:147
	void Clear();

	// CgsIndexedPool.h:171
	int8_t GetPoolSize();

	// CgsIndexedPool.h:187
	int8_t GetNumFree();

	// CgsIndexedPool.h:203
	int8_t GetNumUsed();

	// CgsIndexedPool.h:330
	CgsResource::ResourceModule::PendingFileResponse * Pop();

	// CgsIndexedPool.h:357
	void Push(CgsResource::ResourceModule::PendingFileResponse *);

	// CgsIndexedPool.h:219
	int8_t GetObjectIndex(const CgsResource::ResourceModule::PendingFileResponse *);

	// CgsIndexedPool.h:238
	CgsResource::ResourceModule::PendingFileResponse * GetObject(signed char);

	// CgsIndexedPool.h:267
	int8_t PopIndex();

	// CgsIndexedPool.h:298
	void PushIndex(signed char);

	// CgsIndexedPool.h:374
	bool DebugIsIndexFree(signed char);

	// CgsIndexedPool.h:398
	int32_t GetUsedList(CgsResource::ResourceModule::PendingFileResponse **, int);

}

// CgsIndexedPool.h:85
struct CgsContainers::FixedIndexedPool<CgsResource::ResourceModule::PendingFileResponse,16,std::int8_t> : public IndexedPool<CgsResource::ResourceModule::PendingFileResponse,std::int8_t> {
private:
	// CgsIndexedPool.h:93
	CgsResource::ResourceModule::PendingFileResponse[16] maObjects;

	// CgsIndexedPool.h:94
	int8_t[16] maiFreeIndices;

public:
	// CgsIndexedPool.h:131
	void Construct();

}

// CgsIndexedPool.h:436
struct CgsContainers::IndexedPool8<CgsResource::ResourceModule::PendingFileResponse,16> : public FixedIndexedPool<CgsResource::ResourceModule::PendingFileResponse,16,std::int8_t> {
}

