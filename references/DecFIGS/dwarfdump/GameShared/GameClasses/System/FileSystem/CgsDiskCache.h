// CgsFile.h:40
namespace CgsFileSystem {
	// CgsDiskCache.h:51
	const int32_t KI_MAX_CACHE_PATH_LENGTH = 15;

	// CgsDiskCache.h:164
	const int32_t KI_NUM_CACHE_BLOCKS = 16;

}

// CgsDiskCache.h:62
struct CgsFileSystem::DiskCacheEntry {
	// CgsDiskCache.h:64
	int32_t volatile miAmountCached;

	// CgsDiskCache.h:65
	bool volatile mbFullyCached;

	// CgsDiskCache.h:66
	bool volatile mbDumped;

	// CgsDiskCache.h:67
	bool volatile mbWrittenByte0;

	// CgsDiskCache.h:68
	Handle mHandle;

	// CgsDiskCache.h:69
	uint32_t volatile muHash;

	// CgsDiskCache.h:71
	char[16] macFileName;

}

// CgsDiskCache.h:133
struct CgsFileSystem::CacheDebugEntry {
	// CgsDiskCache.h:135
	char[256] macText;

}

// CgsDiskCache.h:183
struct CgsFileSystem::DiskCache {
	// CgsDiskCache.h:186
	extern const int32_t KI_HEADER_WRITE_BUFFER_SIZE = 65536;

private:
	// CgsDiskCache.h:235
	bool mbDEBUG_EnableCache;

	// CgsDiskCache.h:236
	bool mbDEBUG_ErrorTest;

	// CgsDiskCache.h:237
	bool mbDEBUG_EnableDumping;

	// CgsDiskCache.h:241
	bool mbInitialized;

	// Unknown accessibility
	// CgsDiskCache.h:139
	typedef LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile> DiskCacheHashTable;

	// CgsDiskCache.h:242
	DiskCache::DiskCacheHashTable mTable;

	// CgsDiskCache.h:243
	int32_t miCacheBlockSize;

	// CgsDiskCache.h:244
	int32_t miMaxFilesToCache;

	// CgsDiskCache.h:245
	char[128] macCachePath;

	// CgsDiskCache.h:246
	DiskCacheEntry * mpCacheEntries;

	// CgsDiskCache.h:247
	char * mpcHeaderWriteBuffer;

	// CgsDiskCache.h:248
	AsyncOp mAsyncOp;

	// CgsDiskCache.h:251
	Futex mFutex;

	// CgsDiskCache.h:252
	Thread mThread;

	// CgsDiskCache.h:255
	DiskCacheCommandBuffer mCommandBuffer;

	// CgsDiskCache.h:258
	int32_t volatile miNumCacheEntriesAllocated;

	// CgsDiskCache.h:259
	char *[16] mapCacheBlocks;

	// CgsDiskCache.h:260
	char *[16] mapFreeCacheBlocks;

	// CgsDiskCache.h:261
	LocklessQueue<char*> mFreeCacheBlockQueue;

	// CgsDiskCache.h:264
	LinearMalloc mAllocator;

	// CgsDiskCache.h:267
	Futex mDebugFutex;

	// Unknown accessibility
	// CgsDiskCache.h:140
	typedef FixedRingBuffer<CgsFileSystem::CacheDebugEntry,4> CacheDebugBuffer;

	// CgsDiskCache.h:268
	DiskCache::CacheDebugBuffer mDebugBuffer;

public:
	// CgsDiskCache.h:190
	void Construct();

	// CgsDiskCache.h:198
	void Initialize(const char *, int32_t, int32_t, rw::IResourceAllocator *);

	// CgsDiskCache.h:202
	void Destruct();

	// CgsDiskCache.h:207
	int32_t GetOverheadRequired(int32_t, int32_t);

	// CgsDiskCache.h:212
	bool BeginFileCache(const char *, uint32_t *);

	// CgsDiskCache.h:220
	bool AddToFileCache(uint32_t, int32_t, void *, int32_t, bool);

	// CgsDiskCache.h:224
	bool EndFileCache(uint32_t);

	// CgsDiskCache.h:231
	bool GetFileInCache(const char *, char *, int32_t, const DiskCacheEntry **);

private:
	// CgsDiskCache.h:280
	void Update();

	// CgsDiskCache.h:283
	intptr_t ThreadProc(void *);

	// CgsDiskCache.h:286
	char * PopCacheBlock();

	// CgsDiskCache.h:289
	void PushCacheBlock(char *);

}

// CgsDiskCache.h:186
extern const int32_t KI_HEADER_WRITE_BUFFER_SIZE = 65536;

// CgsDeviceOperation.h:24
namespace CgsFileSystem {
	// CgsDiskCache.h:51
	const int32_t KI_MAX_CACHE_PATH_LENGTH = 15;

	// CgsDiskCache.h:164
	const int32_t KI_NUM_CACHE_BLOCKS = 16;

}

// CgsDiskCache.h:183
struct CgsFileSystem::DiskCache {
	// CgsDiskCache.h:186
	extern const int32_t KI_HEADER_WRITE_BUFFER_SIZE = 65536;

private:
	// CgsDiskCache.h:235
	bool mbDEBUG_EnableCache;

	// CgsDiskCache.h:236
	bool mbDEBUG_ErrorTest;

	// CgsDiskCache.h:237
	bool mbDEBUG_EnableDumping;

	// CgsDiskCache.h:241
	bool mbInitialized;

	// Unknown accessibility
	// CgsDiskCache.h:139
	typedef LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile> DiskCacheHashTable;

	// CgsDiskCache.h:242
	DiskCache::DiskCacheHashTable mTable;

	// CgsDiskCache.h:243
	int32_t miCacheBlockSize;

	// CgsDiskCache.h:244
	int32_t miMaxFilesToCache;

	// CgsDiskCache.h:245
	char[128] macCachePath;

	// CgsDiskCache.h:246
	DiskCacheEntry * mpCacheEntries;

	// CgsDiskCache.h:247
	char * mpcHeaderWriteBuffer;

	// CgsDiskCache.h:248
	AsyncOp mAsyncOp;

	// CgsDiskCache.h:251
	Futex mFutex;

	// CgsDiskCache.h:252
	Thread mThread;

	// CgsDiskCache.h:255
	DiskCacheCommandBuffer mCommandBuffer;

	// CgsDiskCache.h:258
	int32_t volatile miNumCacheEntriesAllocated;

	// CgsDiskCache.h:259
	char *[16] mapCacheBlocks;

	// CgsDiskCache.h:260
	char *[16] mapFreeCacheBlocks;

	// CgsDiskCache.h:261
	LocklessQueue<char*> mFreeCacheBlockQueue;

	// CgsDiskCache.h:264
	LinearMalloc mAllocator;

	// CgsDiskCache.h:267
	Futex mDebugFutex;

	// Unknown accessibility
	// CgsDiskCache.h:140
	typedef FixedRingBuffer<CgsFileSystem::CacheDebugEntry,4> CacheDebugBuffer;

	// CgsDiskCache.h:268
	DiskCache::CacheDebugBuffer mDebugBuffer;

public:
	// CgsDiskCache.h:190
	void Construct();

	// CgsDiskCache.h:198
	// Declaration
	void Initialize(const char *, int32_t, int32_t, rw::IResourceAllocator *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsDiskCache.cpp:193
		using namespace CgsDev::Message;

	}

	// CgsDiskCache.h:202
	void Destruct();

	// CgsDiskCache.h:207
	int32_t GetOverheadRequired(int32_t, int32_t);

	// CgsDiskCache.h:212
	bool BeginFileCache(const char *, uint32_t *);

	// CgsDiskCache.h:220
	bool AddToFileCache(uint32_t, int32_t, void *, int32_t, bool);

	// CgsDiskCache.h:224
	bool EndFileCache(uint32_t);

	// CgsDiskCache.h:231
	bool GetFileInCache(const char *, char *, int32_t, const DiskCacheEntry **);

private:
	// CgsDiskCache.h:280
	void Update();

	// CgsDiskCache.h:283
	intptr_t ThreadProc(void *);

	// CgsDiskCache.h:286
	char * PopCacheBlock();

	// CgsDiskCache.h:289
	void PushCacheBlock(char *);

}

// CgsDiskCache.h:138
typedef LinearHashEntry<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile> DiskCacheHashTableEntry;

