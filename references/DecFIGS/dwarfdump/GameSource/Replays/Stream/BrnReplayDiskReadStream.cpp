// BrnReplayDiskReadStream.cpp:51
void BrnReplays::DiskReadStream::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskReadStream.cpp:58
		MutexParameters lParams;

		// BrnReplayDiskReadStream.cpp:64
		int32_t liIndex;

	}
}

// BrnReplayDiskReadStream.cpp:141
void BrnReplays::DiskReadStream::ResetStreamBlocks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskReadStream.cpp:148
		int32_t liIndex;

	}
	{
		// BrnReplayDiskReadStream.cpp:145
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayDiskReadStream.cpp:84
void BrnReplays::DiskReadStream::Open(const char *  lpcFileName, void *  lpBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskReadStream.cpp:91
		AutoMutex lMutexHelper;

		// BrnReplayDiskReadStream.cpp:117
		AsyncOp * lpOperator;

	}
	EA::Thread::AutoMutex::AutoMutex(/* parameters */);
	rw::core::filesys::AsyncOp::operator new(/* parameters */);
	EA::Thread::AutoMutex::~AutoMutex(/* parameters */);
	{
		// BrnReplayDiskReadStream.cpp:93
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskReadStream.cpp:101
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayDiskReadStream.cpp:232
void BrnReplays::DiskReadStream::SubmitReadRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskReadStream.cpp:254
		AsyncOp * lpOperator;

	}
	{
		// BrnReplayDiskReadStream.cpp:242
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::core::filesys::AsyncOp::operator new(/* parameters */);
	{
		// BrnReplayDiskReadStream.cpp:245
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskReadStream.cpp:255
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayDiskReadStream.cpp:286
void BrnReplays::DiskReadStream::SubmitCloseRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskReadStream.cpp:290
		AsyncOp * lpOperator;

		rw::core::filesys::AsyncOp::operator new(/* parameters */);
	}
	{
		// BrnReplayDiskReadStream.cpp:291
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayDiskReadStream.cpp:177
void BrnReplays::DiskReadStream::Service() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReplayDiskReadStream.cpp:720
void BrnReplays::DiskReadStream::SetRange(int32_t  liStartFilePos, int32_t  liEndFilePos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskReadStream.cpp:723
		AutoMutex lMutexHelper;

		EA::Thread::AutoMutex::AutoMutex(/* parameters */);
	}
	EA::Thread::AutoMutex::~AutoMutex(/* parameters */);
}

// BrnReplayDiskReadStream.cpp:315
void BrnReplays::DiskReadStream::Close() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskReadStream.cpp:317
		AutoMutex lMutexHelper;

		EA::Thread::AutoMutex::AutoMutex(/* parameters */);
	}
	EA::Thread::AutoMutex::~AutoMutex(/* parameters */);
	{
		// BrnReplayDiskReadStream.cpp:319
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayDiskReadStream.cpp:342
void BrnReplays::DiskReadStream::ReadBlock(int32_t  liFilePosition, void *  lpData, int32_t  liDataSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskReadStream.cpp:344
		AutoMutex lMutexHelper;

		// BrnReplayDiskReadStream.cpp:349
		char * lpcBuffer;

		// BrnReplayDiskReadStream.cpp:352
		bool lbFound;

		// BrnReplayDiskReadStream.cpp:396
		int32_t liNumBlocksRequired;

		// BrnReplayDiskReadStream.cpp:399
		int32_t liIndex;

		EA::Thread::AutoMutex::AutoMutex(/* parameters */);
	}
	EA::Thread::AutoMutex::~AutoMutex(/* parameters */);
	{
		// BrnReplayDiskReadStream.cpp:403
		int32_t liBlockIndex;

	}
	{
		// BrnReplayDiskReadStream.cpp:346
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayDiskReadStream.cpp:450
void BrnReplays::DiskReadStream::OnOpen(AsyncOp *  lpOperator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskReadStream.cpp:453
		AutoMutex lMutexHelper;

		EA::Thread::AutoMutex::AutoMutex(/* parameters */);
	}
	{
		// BrnReplayDiskReadStream.cpp:457
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskReadStream.cpp:489
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskReadStream.cpp:472
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::core::filesys::AsyncOp::operator delete(/* parameters */);
	EA::Thread::AutoMutex::~AutoMutex(/* parameters */);
	{
		// BrnReplayDiskReadStream.cpp:480
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskReadStream.cpp:483
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskReadStream.cpp:458
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayDiskReadStream.cpp:514
void BrnReplays::DiskReadStream::OnRead(AsyncOp *  lpOperator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskReadStream.cpp:517
		AutoMutex lMutexHelper;

		// BrnReplayDiskReadStream.cpp:520
		ReadStreamBlock * lpStreamBlock;

		EA::Thread::AutoMutex::AutoMutex(/* parameters */);
	}
	{
		// BrnReplayDiskReadStream.cpp:586
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskReadStream.cpp:527
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskReadStream.cpp:573
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::core::filesys::AsyncOp::operator delete(/* parameters */);
	EA::Thread::AutoMutex::~AutoMutex(/* parameters */);
	{
		// BrnReplayDiskReadStream.cpp:525
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskReadStream.cpp:526
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskReadStream.cpp:548
		AsyncOp * lpOperator;

		rw::core::filesys::AsyncOp::operator new(/* parameters */);
	}
	{
		// BrnReplayDiskReadStream.cpp:580
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnReplayDiskReadStream.cpp:565
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	}
	{
		// BrnReplayDiskReadStream.cpp:549
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayDiskReadStream.cpp:612
void BrnReplays::DiskReadStream::OnClose(AsyncOp *  lpOperator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskReadStream.cpp:615
		AutoMutex lMutexHelper;

		EA::Thread::AutoMutex::AutoMutex(/* parameters */);
	}
	{
		// BrnReplayDiskReadStream.cpp:649
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskReadStream.cpp:620
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskReadStream.cpp:621
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskReadStream.cpp:635
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::core::filesys::AsyncOp::operator delete(/* parameters */);
	EA::Thread::AutoMutex::~AutoMutex(/* parameters */);
	{
		// BrnReplayDiskReadStream.cpp:642
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayDiskReadStream.cpp:671
void BrnReplays::DiskReadStream::OpenCallback(AsyncOp *  lpOperator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskReadStream.cpp:673
		BrnReplays::DiskReadStream * lpStream;

	}
	rw::core::filesys::AsyncOp::GetContext(/* parameters */);
	{
		// BrnReplayDiskReadStream.cpp:676
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayDiskReadStream.cpp:687
void BrnReplays::DiskReadStream::ReadCallback(AsyncOp *  lpOperator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskReadStream.cpp:689
		ReadStreamBlock * lpStreamBlock;

		rw::core::filesys::AsyncOp::GetContext(/* parameters */);
	}
	{
		// BrnReplayDiskReadStream.cpp:692
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskReadStream.cpp:691
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayDiskReadStream.cpp:704
void BrnReplays::DiskReadStream::CloseCallback(AsyncOp *  lpOperator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskReadStream.cpp:706
		BrnReplays::DiskReadStream * lpStream;

		rw::core::filesys::AsyncOp::GetContext(/* parameters */);
	}
	{
		// BrnReplayDiskReadStream.cpp:708
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

