// CgsFileRW.cpp:106
void CgsFileSystem::File::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[9] __FUNCTION__;

	{
		// CgsFileRW.cpp:108
		FileFutexHelper lFutexHelper;

	}
	FileFutexHelper::FileFutexHelper(/* parameters */);
	FileFutexHelper::~FileFutexHelper(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

// CgsFileRW.cpp:85
void CgsFileSystem::File::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[8] __FUNCTION__;

	{
		// CgsFileRW.cpp:87
		FileFutexHelper lFutexHelper;

	}
	FileFutexHelper::FileFutexHelper(/* parameters */);
	FileFutexHelper::~FileFutexHelper(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

// CgsFileRW.cpp:64
void CgsFileSystem::File::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[8] __FUNCTION__;

	{
		// CgsFileRW.cpp:66
		FileFutexHelper lFutexHelper;

	}
	FileFutexHelper::FileFutexHelper(/* parameters */);
	FileFutexHelper::~FileFutexHelper(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

// CgsFileRW.cpp:43
void CgsFileSystem::File::Construct(CgsFileSystem::FileSystem *  lpFileSystem, CgsFileSystem::FileLog *  lpLog, int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[10] __FUNCTION__;

	{
		// CgsFileRW.cpp:45
		FileFutexHelper lFutexHelper;

	}
	FileFutexHelper::FileFutexHelper(/* parameters */);
	FileFutexHelper::~FileFutexHelper(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

// CgsFileRW.cpp:126
void CgsFileSystem::File::Open(const char *  lpcFileName, CgsFileSystem::FileAccess  leFileAccessType, int32_t  liPriority, bool  lbUseHDCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[5] __FUNCTION__;

	{
		// CgsFileRW.cpp:128
		FileFutexHelper lFutexHelper;

		// CgsFileRW.cpp:129
		char[256] lacTempFileName;

		// CgsFileRW.cpp:146
		uint32_t luFileAccess;

		// CgsFileRW.cpp:160
		const char * lpcFileToOpen;

		// CgsFileRW.cpp:187
		AsyncOp * lpOperator;

	}
	FileFutexHelper::FileFutexHelper(/* parameters */);
	rw::core::filesys::AsyncOp::operator new(/* parameters */);
	FileFutexHelper::~FileFutexHelper(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	{
		// CgsFileRW.cpp:132
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFileRW.cpp:131
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsFileRW.cpp:206
void CgsFileSystem::File::Read(void *  lpBuffer, uint64_t  luPosition, uint64_t  luSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[5] __FUNCTION__;

	{
		// CgsFileRW.cpp:208
		FileFutexHelper lFutexHelper;

		// CgsFileRW.cpp:223
		AsyncOp * lpOperator;

	}
	FileFutexHelper::FileFutexHelper(/* parameters */);
	rw::core::filesys::AsyncOp::operator new(/* parameters */);
	FileFutexHelper::~FileFutexHelper(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	{
		// CgsFileRW.cpp:212
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFileRW.cpp:213
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsFileRW.cpp:242
void CgsFileSystem::File::Write(const void *  lpBuffer, uint64_t  luPosition, uint64_t  luSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[6] __FUNCTION__;

	{
		// CgsFileRW.cpp:244
		FileFutexHelper lFutexHelper;

		// CgsFileRW.cpp:253
		AsyncOp * lpOperator;

	}
	FileFutexHelper::FileFutexHelper(/* parameters */);
	{
		// CgsFileRW.cpp:247
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::core::filesys::AsyncOp::operator new(/* parameters */);
	FileFutexHelper::~FileFutexHelper(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	{
		// CgsFileRW.cpp:246
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFileRW.cpp:248
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsFileRW.cpp:272
void CgsFileSystem::File::Close() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[6] __FUNCTION__;

	{
		// CgsFileRW.cpp:274
		FileFutexHelper lFutexHelper;

		// CgsFileRW.cpp:281
		AsyncOp * lpOperator;

	}
	FileFutexHelper::FileFutexHelper(/* parameters */);
	rw::core::filesys::AsyncOp::operator new(/* parameters */);
	FileFutexHelper::~FileFutexHelper(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	{
		// CgsFileRW.cpp:276
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsFileRW.cpp:298
void CgsFileSystem::File::OnOpen(AsyncOp *  lpOperator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[7] __FUNCTION__;

	{
		// CgsFileRW.cpp:302
		FileFutexHelper lFutexHelper;

	}
	FileFutexHelper::FileFutexHelper(/* parameters */);
	{
		// CgsFileRW.cpp:305
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFileRW.cpp:334
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFileRW.cpp:306
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::core::filesys::AsyncOp::operator delete(/* parameters */);
	FileFutexHelper::~FileFutexHelper(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	{
		// CgsFileRW.cpp:328
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsFileRW.cpp:515
void CgsFileSystem::File::OpenCallback(AsyncOp *  lpOperator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFileRW.cpp:517
		File * lpFile;

	}
}

// CgsFileRW.cpp:411
void CgsFileSystem::File::OnWrite(AsyncOp *  lpOperator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[8] __FUNCTION__;

	{
		// CgsFileRW.cpp:415
		FileFutexHelper lFutexHelper;

	}
	FileFutexHelper::FileFutexHelper(/* parameters */);
	{
		// CgsFileRW.cpp:443
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFileRW.cpp:418
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::core::filesys::AsyncOp::operator delete(/* parameters */);
	FileFutexHelper::~FileFutexHelper(/* parameters */);
	{
		// CgsFileRW.cpp:417
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

// CgsFileRW.cpp:545
void CgsFileSystem::File::WriteCallback(AsyncOp *  lpOperator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFileRW.cpp:547
		File * lpFile;

	}
}

// CgsFileRW.cpp:460
void CgsFileSystem::File::OnClose(AsyncOp *  lpOperator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[8] __FUNCTION__;

	{
		// CgsFileRW.cpp:464
		FileFutexHelper lFutexHelper;

	}
	FileFutexHelper::FileFutexHelper(/* parameters */);
	{
		// CgsFileRW.cpp:498
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFileRW.cpp:467
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::core::filesys::AsyncOp::operator delete(/* parameters */);
	FileFutexHelper::~FileFutexHelper(/* parameters */);
	{
		// CgsFileRW.cpp:466
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

// CgsFileRW.cpp:560
void CgsFileSystem::File::CloseCallback(AsyncOp *  lpOperator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFileRW.cpp:562
		File * lpFile;

	}
}

// CgsFileRW.cpp:351
void CgsFileSystem::File::OnRead(AsyncOp *  lpOperator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[7] __FUNCTION__;

	{
		// CgsFileRW.cpp:355
		FileFutexHelper lFutexHelper;

	}
	FileFutexHelper::FileFutexHelper(/* parameters */);
	{
		// CgsFileRW.cpp:394
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFileRW.cpp:359
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::core::filesys::AsyncOp::operator delete(/* parameters */);
	FileFutexHelper::~FileFutexHelper(/* parameters */);
	{
		// CgsFileRW.cpp:358
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

// CgsFileRW.cpp:530
void CgsFileSystem::File::ReadCallback(AsyncOp *  lpOperator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFileRW.cpp:532
		File * lpFile;

	}
}

