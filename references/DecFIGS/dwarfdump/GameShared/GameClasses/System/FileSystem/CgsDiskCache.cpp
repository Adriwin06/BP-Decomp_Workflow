// CgsDeviceOperation.h:24
namespace CgsFileSystem {
	// CgsDiskCache.cpp:33
	const char[5] KAC_CACHEFILEMAGICNUMBER;

	// CgsDiskCache.cpp:34
	const int32_t KI_PERSISTENT_CACHE_VERSION = 1;

}

// CgsDiskCache.cpp:64
void CgsFileSystem::DiskCache::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDiskCache.cpp:93
void CgsFileSystem::DiskCache::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDiskCache.cpp:368
void CgsFileSystem::DiskCache::EndFileCache(uint32_t  luNameHash) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDiskCache.cpp:378
		DiskCacheCommand lCommand;

	}
}

// CgsDiskCache.cpp:918
void CgsFileSystem::DiskCache::PopCacheBlock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDiskCache.cpp:921
		char * lpBlock;

	}
	CgsContainers::LocklessQueue<char*>::Pop(/* parameters */);
}

// CgsDiskCache.cpp:942
void CgsFileSystem::DiskCache::PushCacheBlock(char *  lpBlock) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::LocklessQueue<char*>::Post(/* parameters */);
}

// CgsDiskCache.cpp:413
void CgsFileSystem::DiskCache::GetFileInCache(const char *  lpInFileName, char *  lpOutFileName, int32_t  lnSizeOfOutFileName, const DiskCacheEntry **  lppOutHashTableEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDiskCache.cpp:422
		AutoFutex lAutoFutex;

		// CgsDiskCache.cpp:425
		uint32_t luNameHash;

		// CgsDiskCache.cpp:428
		DiskCacheEntry *volatile* lppEntry;

		// CgsDiskCache.cpp:434
		DiskCacheEntry * lpEntry;

	}
	EA::Thread::AutoFutex::AutoFutex(/* parameters */);
	CgsContainers::CgsHash::CalculateHash(/* parameters */);
	CgsContainers::LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>::FindEntry(/* parameters */);
	EA::Thread::AutoFutex::~AutoFutex(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

// CgsDiskCache.cpp:210
void CgsFileSystem::DiskCache::BeginFileCache(const char *  lpcFileName, uint32_t *  lpuNameHash) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDiskCache.cpp:231
		uint32_t luNameHash;

		// CgsDiskCache.cpp:257
		DiskCacheCommand lCommand;

	}
	CgsContainers::CgsHash::CalculateHash(/* parameters */);
	{
		// CgsDiskCache.cpp:236
		AutoFutex lAutoFutex;

		// CgsDiskCache.cpp:237
		DiskCacheEntry *volatile* lppEntry;

	}
	EA::Thread::AutoFutex::AutoFutex(/* parameters */);
	CgsContainers::LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>::FindEntry(/* parameters */);
	{
		// CgsDiskCache.cpp:240
		DiskCacheEntry * lpEntry;

	}
	EA::Thread::AutoFutex::~AutoFutex(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

// CgsDiskCache.cpp:114
void CgsFileSystem::DiskCache::Initialize(const char *  lpcCachePath, int32_t  liMaxFilesToCache, int32_t  liCacheBlockSize, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDiskCache.cpp:117
		int32_t liRequiredEntries;

		// CgsDiskCache.cpp:118
		DiskCacheHashTableEntry * lpTableEntries;

		// CgsDiskCache.cpp:121
		int32_t liOverheadSize;

		// CgsDiskCache.cpp:122
		void * lpOverheadData;

		// CgsDiskCache.cpp:151
		int32_t liIndex;

		// CgsDiskCache.cpp:162
		ThreadParameters lThreadParams;

		GetOverheadRequired(/* parameters */);
	}
	CgsContainers::LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>::CalculateRequiredSize(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	CgsContainers::LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>::CalculateRequiredSize(/* parameters */);
	MallocArray<CgsFileSystem::DiskCacheHashTableEntry>(/* parameters */);
	MallocArray<CgsFileSystem::DiskCacheEntry>(/* parameters */);
	MallocArray<char>(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	CgsContainers::LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>::Initialize(/* parameters */);
	CgsContainers::LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>::Clear(/* parameters */);
	CgsContainers::FixedRingBuffer<CgsFileSystem::CacheDebugEntry,4>::Construct(/* parameters */);
	CgsContainers::LocklessQueue<char*>::Construct(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::SetValue(/* parameters */);
	MallocArray<char>(/* parameters */);
	CgsContainers::LocklessQueue<char*>::Post(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsDiskCache.cpp:132
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsDiskCache.cpp:123
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDiskCache.cpp:296
void CgsFileSystem::DiskCache::AddToFileCache(uint32_t  luNameHash, int32_t  liFilePosition, void *  lpData, int32_t  liDataSize, bool  lbEOF) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDiskCache.cpp:323
		DiskCacheCommand lCommand;

	}
	{
		// CgsDiskCache.cpp:318
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDiskCache.cpp:477
void CgsFileSystem::DiskCache::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDiskCache.cpp:480
		DiskCacheCommand lCommand;

	}
	{
		// CgsDiskCache.cpp:493
		DiskCacheEntry *volatile* lppEntry;

		// CgsDiskCache.cpp:494
		DiskCacheEntry * lpEntry;

		// CgsDiskCache.cpp:550
		char[128] lacFileName;

		EA::Thread::Futex::Lock(/* parameters */);
		CgsContainers::LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>::FindEntry(/* parameters */);
		{
			// CgsDiskCache.cpp:495
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		Handle::Clear(/* parameters */);
		{
			// CgsDiskCache.cpp:523
			int32_t liNameLength;

			CgsCore::StrCpy(/* parameters */);
			{
				// CgsDiskCache.cpp:534
				int32_t liChar;

			}
		}
		EA::Thread::Futex::Unlock(/* parameters */);
		AsyncOp::GetLastOperationResult(/* parameters */);
		EA::Thread::Futex::Lock(/* parameters */);
		AsyncOp::GetLastOperationHandle(/* parameters */);
		EA::Thread::Futex::Unlock(/* parameters */);
		EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	}
	{
		// CgsDiskCache.cpp:701
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsDiskCache.cpp:581
		DiskCacheEntry *volatile* lppEntry;

		// CgsDiskCache.cpp:584
		DiskCacheEntry lEntry;

		EA::Thread::Futex::Lock(/* parameters */);
		CgsContainers::LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>::FindEntry(/* parameters */);
		EA::Thread::Futex::Unlock(/* parameters */);
		EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
		AsyncOp::GetLastOperationResult(/* parameters */);
		EA::Thread::Futex::Lock(/* parameters */);
		EA::Thread::Futex::Unlock(/* parameters */);
	}
	{
		// CgsDiskCache.cpp:582
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>::AddEntry(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	{
		// CgsDiskCache.cpp:561
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsDiskCache.cpp:654
		DiskCacheEntry *volatile* lppEntry;

		// CgsDiskCache.cpp:657
		DiskCacheEntry lEntry;

		EA::Thread::Futex::Lock(/* parameters */);
		CgsContainers::LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>::FindEntry(/* parameters */);
	}
	{
		// CgsDiskCache.cpp:502
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsDiskCache.cpp:655
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	EA::Thread::Futex::Unlock(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	AsyncOp::GetLastOperationResult(/* parameters */);
	{
		// CgsDiskCache.cpp:685
		AutoFutex lFutex;

		// CgsDiskCache.cpp:686
		CacheDebugEntry lDebugEntry;

		EA::Thread::AutoFutex::AutoFutex(/* parameters */);
		CgsContainers::RingBuffer<CgsFileSystem::CacheDebugEntry>::Push(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		EA::Thread::AutoFutex::~AutoFutex(/* parameters */);
	}
	EA::Thread::Futex::Lock(/* parameters */);
	EA::Thread::Futex::Unlock(/* parameters */);
	{
		// CgsDiskCache.cpp:599
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsDiskCache.cpp:629
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsDiskCache.cpp:620
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	{
		// CgsDiskCache.cpp:604
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsDiskCache.cpp:609
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsDiskCache.cpp:668
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsDiskCache.cpp:583
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsDiskCache.cpp:656
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDiskCache.cpp:717
void CgsFileSystem::DiskCache::ThreadProc(void *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDiskCache.cpp:719
		DiskCache * lpCache;

	}
}

