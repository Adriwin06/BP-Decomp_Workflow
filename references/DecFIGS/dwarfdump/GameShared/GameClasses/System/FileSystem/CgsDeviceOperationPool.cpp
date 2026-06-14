// CgsDeviceOperationPool.cpp:76
void CgsFileSystem::OperationPool::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDeviceOperationPool.cpp:40
void CgsFileSystem::OperationPool::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceOperationPool.cpp:43
		int32_t liIndex;

		EA::Thread::Futex::Lock(/* parameters */);
		EA::Thread::Futex::Unlock(/* parameters */);
	}
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

// CgsDeviceOperationPool.cpp:94
void CgsFileSystem::OperationPool::AddOperation(Operation *  lpOperation) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceOperationPool.cpp:96
		int32_t liIndex;

		{
			// CgsDeviceOperationPool.cpp:99
			AutoFutex lAutoFutex;

			EA::Thread::AutoFutex::AutoFutex(/* parameters */);
			{
				// CgsDeviceOperationPool.cpp:101
				CgsDev::StrStream lStrStream;

			}
			EA::Thread::AutoFutex::~AutoFutex(/* parameters */);
		}
	}
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsDeviceOperationPool.cpp:149
void CgsFileSystem::OperationPool::ReadOperation(Operation *  lpOutOperation) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceOperationPool.cpp:161
		AutoFutex lAutoFutex;

		// CgsDeviceOperationPool.cpp:163
		int32_t liIndex;

		// CgsDeviceOperationPool.cpp:164
		int32_t liMaxPriority;

		// CgsDeviceOperationPool.cpp:165
		uint64_t luEarliestNumber;

		// CgsDeviceOperationPool.cpp:166
		int32_t liMaxIndex;

		EA::Thread::AutoFutex::AutoFutex(/* parameters */);
		EA::Thread::AutoFutex::~AutoFutex(/* parameters */);
	}
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	{
		// CgsDeviceOperationPool.cpp:210
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

