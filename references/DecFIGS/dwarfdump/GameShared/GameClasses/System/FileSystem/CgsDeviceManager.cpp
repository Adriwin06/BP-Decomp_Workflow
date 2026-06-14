// CgsDeviceManager.cpp:120
void CgsFileSystem::DeviceManager::ReleaseInternal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDeviceManager.cpp:659
void CgsFileSystem::DeviceManager::FindDevice(const char *  lpcDevicePrefix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceManager.cpp:661
		int32_t liIndex;

	}
}

// CgsDeviceManager.cpp:265
void CgsFileSystem::DeviceManager::RemoveDevice(const char *  lpcDevicePrefix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDeviceManager.cpp:61
void CgsFileSystem::DeviceManager::ReleaseDeviceManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	~DeviceManager(/* parameters */);
	operator delete(/* parameters */);
}

// CgsDeviceManager.cpp:90
void CgsFileSystem::DeviceManager::InitInternal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceManager.cpp:92
		AutoFutex lAutoFutex;

		// CgsDeviceManager.cpp:94
		int32_t liIndex;

	}
	EA::Thread::AutoFutex::AutoFutex(/* parameters */);
	EA::Thread::AutoFutex::~AutoFutex(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

// CgsDeviceManager.cpp:279
void CgsFileSystem::DeviceManager::SetDefaultPath(const char *  lpcDefaultPath) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::StrCpy(/* parameters */);
}

// CgsDeviceManager.cpp:41
void CgsFileSystem::DeviceManager::InitializeDeviceManager(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceManager.cpp:43
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	operator new(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	DeviceManager(/* parameters */);
	{
		// CgsDeviceManager.cpp:44
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDeviceManager.cpp:136
void CgsFileSystem::DeviceManager::AddPhysicalDevice(CgsFileSystem::Device *  lpDevice, const char *  lpcDevicePrefix, FDeviceErrorCallback  lpErrorCallback) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceManager.cpp:145
		int32_t liIndex;

		// CgsDeviceManager.cpp:156
		const CgsFileSystem::DeviceManager::PhysicalDeviceSlot & lSlot;

		// CgsDeviceManager.cpp:167
		char[32] lacName;

		// CgsDeviceManager.cpp:169
		ThreadParameters lThreadParams;

	}
	EA::Thread::Futex::Lock(/* parameters */);
	{
		// CgsDeviceManager.cpp:142
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsDeviceManager.cpp:153
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsCore::StrCpy(/* parameters */);
	EA::Thread::Futex::Unlock(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

// CgsDeviceManager.cpp:687
void CgsFileSystem::DeviceManager::Shutdown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceManager.cpp:689
		AutoFutex lLock;

		// CgsDeviceManager.cpp:691
		int32_t liIndex;

	}
	EA::Thread::AutoFutex::AutoFutex(/* parameters */);
	{
		// CgsDeviceManager.cpp:697
		Operation lOperation;

	}
	EA::Thread::AutoFutex::~AutoFutex(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

// CgsDeviceManager.cpp:499
void CgsFileSystem::DeviceManager::Close(Handle  lHandle, Operation::FCompletionCallback  lpCallback, void *  lpContext, int32_t  liPriority) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceManager.cpp:505
		CgsFileSystem::Device * lpPhysicalDevice;

		// CgsDeviceManager.cpp:508
		int32_t liDeviceIndex;

		// CgsDeviceManager.cpp:519
		Operation lOperation;

	}
	EA::Thread::Futex::Lock(/* parameters */);
	Device::GetPhysicalParent(/* parameters */);
	{
		// CgsDeviceManager.cpp:516
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	EA::Thread::Futex::Unlock(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

// CgsDeviceManager.cpp:447
void CgsFileSystem::DeviceManager::Write(Handle  lHandle, uint64_t  luPosition, const void *  lpBuffer, uint32_t  luBufferSize, Operation::FCompletionCallback  lpCallback, void *  lpContext, int32_t  liPriority) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceManager.cpp:453
		CgsFileSystem::Device * lpPhysicalDevice;

		// CgsDeviceManager.cpp:456
		int32_t liDeviceIndex;

		// CgsDeviceManager.cpp:467
		Operation lOperation;

	}
	EA::Thread::Futex::Lock(/* parameters */);
	Device::GetPhysicalParent(/* parameters */);
	{
		// CgsDeviceManager.cpp:464
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	EA::Thread::Futex::Unlock(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

// CgsDeviceManager.cpp:391
void CgsFileSystem::DeviceManager::Read(Handle  lHandle, uint64_t  luPosition, void *  lpBuffer, uint32_t  luBufferSize, Operation::FCompletionCallback  lpCallback, void *  lpContext, int32_t  liPriority) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceManager.cpp:397
		CgsFileSystem::Device * lpPhysicalDevice;

		// CgsDeviceManager.cpp:400
		int32_t liDeviceIndex;

		// CgsDeviceManager.cpp:411
		Operation lOperation;

	}
	EA::Thread::Futex::Lock(/* parameters */);
	Device::GetPhysicalParent(/* parameters */);
	{
		// CgsDeviceManager.cpp:408
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	EA::Thread::Futex::Unlock(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

// CgsDeviceManager.cpp:297
void CgsFileSystem::DeviceManager::Open(const char *  lpcFileName, uint32_t  luFlags, Operation::FCompletionCallback  lpCallback, void *  lpContext, int32_t  liPriority) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceManager.cpp:300
		int32_t liIndex;

		// CgsDeviceManager.cpp:301
		int32_t liPrefixEnd;

		{
			// CgsDeviceManager.cpp:315
			char[256] lacBuffer;

			CgsCore::StrCpy(/* parameters */);
			CgsCore::StrCat(/* parameters */);
		}
	}
	{
		// CgsDeviceManager.cpp:326
		char[256] lacBuffer;

		// CgsDeviceManager.cpp:331
		const char * lpcPrefix;

		// CgsDeviceManager.cpp:332
		const char * lpcPath;

		// CgsDeviceManager.cpp:335
		CgsFileSystem::Device * lpDevice;

		// CgsDeviceManager.cpp:339
		CgsFileSystem::Device * lpPhysicalDevice;

		// CgsDeviceManager.cpp:342
		int32_t liDeviceIndex;

		// CgsDeviceManager.cpp:353
		Operation lOperation;

		EA::Thread::Futex::Lock(/* parameters */);
		CgsCore::StrCpy(/* parameters */);
		{
			// CgsDeviceManager.cpp:336
			CgsDev::StrStream lStrStream;

		}
		Device::GetPhysicalParent(/* parameters */);
		{
			// CgsDeviceManager.cpp:350
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsCore::StrCpy(/* parameters */);
		EA::Thread::Futex::Unlock(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDeviceManager.cpp:189
void CgsFileSystem::DeviceManager::AddVirtualDevice(CgsFileSystem::Device *  lpDevice, const char *  lpcDevicePrefix, const char *  lpcParentDevicePrefix, FDeviceErrorCallback  lpErrorCallback) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceManager.cpp:198
		CgsFileSystem::Device * lpParentDevice;

		// CgsDeviceManager.cpp:202
		int32_t liIndex;

		// CgsDeviceManager.cpp:213
		const CgsFileSystem::DeviceManager::VirtualDeviceSlot & lSlot;

		// CgsDeviceManager.cpp:220
		CgsFileSystem::Device * lpPhysicalDevice;

		// CgsDeviceManager.cpp:223
		int32_t liDeviceIndex;

		// CgsDeviceManager.cpp:234
		Operation lOperation;

	}
	EA::Thread::Futex::Lock(/* parameters */);
	{
		// CgsDeviceManager.cpp:195
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsDeviceManager.cpp:199
		CgsDev::StrStream lStrStream;

	}
	CgsCore::StrCpy(/* parameters */);
	Device::GetPhysicalParent(/* parameters */);
	{
		// CgsDeviceManager.cpp:231
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	EA::Thread::Futex::Unlock(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	{
		// CgsDeviceManager.cpp:210
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsDeviceManager.cpp:548
void CgsFileSystem::DeviceManager::PhysicalDeviceThread(void *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceManager.cpp:550
		CgsFileSystem::DeviceManager::PhysicalDeviceSlot * lpSlot;

	}
	{
		// CgsDeviceManager.cpp:556
		Operation lNextOperation;

		{
			// CgsDeviceManager.cpp:571
			uint64_t luResultPos;

			// CgsDeviceManager.cpp:572
			uint32_t luResultSize;

			// CgsDeviceManager.cpp:573
			int32_t liResult;

		}
		{
			// CgsDeviceManager.cpp:587
			uint64_t luResultPos;

			// CgsDeviceManager.cpp:588
			uint32_t luResultSize;

			// CgsDeviceManager.cpp:589
			int32_t liResult;

		}
		{
			// CgsDeviceManager.cpp:602
			int32_t liResult;

			// CgsDeviceManager.cpp:603
			Handle lHandle;

		}
		{
			// CgsDeviceManager.cpp:614
			int32_t liResult;

			// CgsDeviceManager.cpp:615
			Handle lDummyHandle;

		}
		{
			// CgsDeviceManager.cpp:627
			Handle lHandle;

		}
	}
	{
		// CgsDeviceManager.cpp:636
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDeviceManager.cpp:30
// CgsDeviceManager.cpp:31
