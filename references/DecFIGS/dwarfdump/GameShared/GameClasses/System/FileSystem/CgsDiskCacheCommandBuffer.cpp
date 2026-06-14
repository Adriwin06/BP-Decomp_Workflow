// CgsDiskCacheCommandBuffer.cpp:30
void CgsFileSystem::DiskCacheCommandBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::LocklessQueue<CgsFileSystem::DiskCacheCommand>::Construct(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::SetValue(/* parameters */);
}

// CgsDiskCacheCommandBuffer.cpp:60
void CgsFileSystem::DiskCacheCommandBuffer::Post(const DiskCacheCommand *  lpCommand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::LocklessQueue<CgsFileSystem::DiskCacheCommand>::Post(/* parameters */);
}

// CgsDiskCacheCommandBuffer.cpp:90
void CgsFileSystem::DiskCacheCommandBuffer::Pop(DiskCacheCommand *  lpCommand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::LocklessQueue<CgsFileSystem::DiskCacheCommand>::Pop(/* parameters */);
}

