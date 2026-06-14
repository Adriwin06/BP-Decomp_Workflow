// BrnReplayDiskWriteStream.cpp:51
void BrnReplays::DiskWriteStream::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskWriteStream.cpp:58
		MutexParameters lParams;

		// BrnReplayDiskWriteStream.cpp:64
		int32_t liIndex;

	}
}

// BrnReplayDiskWriteStream.cpp:611
void BrnReplays::DiskWriteStream::GetBufferUsage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskWriteStream.cpp:614
		AutoMutex lMutexHelper;

		// BrnReplayDiskWriteStream.cpp:616
		int32_t liUsed;

		// BrnReplayDiskWriteStream.cpp:618
		int32_t liIndex;

		EA::Thread::AutoMutex::AutoMutex(/* parameters */);
	}
	EA::Thread::AutoMutex::~AutoMutex(/* parameters */);
}

// BrnReplayDiskWriteStream.cpp:140
void BrnReplays::DiskWriteStream::ResetStreamBlocks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskWriteStream.cpp:147
		int32_t liIndex;

	}
	{
		// BrnReplayDiskWriteStream.cpp:144
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayDiskWriteStream.cpp:84
void BrnReplays::DiskWriteStream::Open(const char *  lpcFileName, void *  lpBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskWriteStream.cpp:93
		AutoMutex lMutexHelper;

		// BrnReplayDiskWriteStream.cpp:116
		AsyncOp * lpOperator;

	}
	EA::Thread::AutoMutex::AutoMutex(/* parameters */);
	rw::core::filesys::AsyncOp::operator new(/* parameters */);
	EA::Thread::AutoMutex::~AutoMutex(/* parameters */);
	{
		// BrnReplayDiskWriteStream.cpp:95
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskWriteStream.cpp:102
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayDiskWriteStream.cpp:217
void BrnReplays::DiskWriteStream::SubmitWriteRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskWriteStream.cpp:238
		AsyncOp * lpOperator;

	}
	{
		// BrnReplayDiskWriteStream.cpp:227
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskWriteStream.cpp:230
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::core::filesys::AsyncOp::operator new(/* parameters */);
	{
		// BrnReplayDiskWriteStream.cpp:239
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayDiskWriteStream.cpp:262
void BrnReplays::DiskWriteStream::SubmitCloseRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskWriteStream.cpp:266
		AsyncOp * lpOperator;

		rw::core::filesys::AsyncOp::operator new(/* parameters */);
	}
	{
		// BrnReplayDiskWriteStream.cpp:267
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayDiskWriteStream.cpp:175
void BrnReplays::DiskWriteStream::Service() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReplayDiskWriteStream.cpp:291
void BrnReplays::DiskWriteStream::Close() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskWriteStream.cpp:293
		AutoMutex lMutexHelper;

		EA::Thread::AutoMutex::AutoMutex(/* parameters */);
	}
	EA::Thread::AutoMutex::~AutoMutex(/* parameters */);
	{
		// BrnReplayDiskWriteStream.cpp:295
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayDiskWriteStream.cpp:318
void BrnReplays::DiskWriteStream::AddBlock(int32_t  liFilePosition, void *  lpData, int32_t  liDataSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskWriteStream.cpp:320
		AutoMutex lMutexHelper;

		// BrnReplayDiskWriteStream.cpp:325
		int32_t liBlocksNeeded;

		// BrnReplayDiskWriteStream.cpp:326
		int32_t liBlocksAvailable;

		// BrnReplayDiskWriteStream.cpp:333
		char * lpcBuffer;

		// BrnReplayDiskWriteStream.cpp:336
		int32_t liIndex;

		EA::Thread::AutoMutex::AutoMutex(/* parameters */);
	}
	EA::Thread::AutoMutex::~AutoMutex(/* parameters */);
	{
		// BrnReplayDiskWriteStream.cpp:322
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayDiskWriteStream.cpp:369
void BrnReplays::DiskWriteStream::OnOpen(AsyncOp *  lpOperator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskWriteStream.cpp:372
		AutoMutex lMutexHelper;

		EA::Thread::AutoMutex::AutoMutex(/* parameters */);
	}
	{
		// BrnReplayDiskWriteStream.cpp:376
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskWriteStream.cpp:408
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskWriteStream.cpp:391
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::core::filesys::AsyncOp::operator delete(/* parameters */);
	EA::Thread::AutoMutex::~AutoMutex(/* parameters */);
	{
		// BrnReplayDiskWriteStream.cpp:399
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskWriteStream.cpp:402
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskWriteStream.cpp:377
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayDiskWriteStream.cpp:433
void BrnReplays::DiskWriteStream::OnWrite(AsyncOp *  lpOperator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskWriteStream.cpp:436
		AutoMutex lMutexHelper;

		// BrnReplayDiskWriteStream.cpp:439
		WriteStreamBlock * lpStreamBlock;

		EA::Thread::AutoMutex::AutoMutex(/* parameters */);
	}
	{
		// BrnReplayDiskWriteStream.cpp:477
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskWriteStream.cpp:446
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskWriteStream.cpp:464
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::core::filesys::AsyncOp::operator delete(/* parameters */);
	EA::Thread::AutoMutex::~AutoMutex(/* parameters */);
	{
		// BrnReplayDiskWriteStream.cpp:444
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskWriteStream.cpp:445
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskWriteStream.cpp:471
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnReplayDiskWriteStream.cpp:503
void BrnReplays::DiskWriteStream::OnClose(AsyncOp *  lpOperator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskWriteStream.cpp:506
		AutoMutex lMutexHelper;

		EA::Thread::AutoMutex::AutoMutex(/* parameters */);
	}
	{
		// BrnReplayDiskWriteStream.cpp:540
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskWriteStream.cpp:511
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskWriteStream.cpp:512
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskWriteStream.cpp:526
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::core::filesys::AsyncOp::operator delete(/* parameters */);
	EA::Thread::AutoMutex::~AutoMutex(/* parameters */);
	{
		// BrnReplayDiskWriteStream.cpp:533
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayDiskWriteStream.cpp:562
void BrnReplays::DiskWriteStream::OpenCallback(AsyncOp *  lpOperator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskWriteStream.cpp:564
		BrnReplays::DiskWriteStream * lpStream;

	}
	rw::core::filesys::AsyncOp::GetContext(/* parameters */);
	{
		// BrnReplayDiskWriteStream.cpp:567
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayDiskWriteStream.cpp:578
void BrnReplays::DiskWriteStream::WriteCallback(AsyncOp *  lpOperator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskWriteStream.cpp:580
		WriteStreamBlock * lpStreamBlock;

		rw::core::filesys::AsyncOp::GetContext(/* parameters */);
	}
	{
		// BrnReplayDiskWriteStream.cpp:583
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayDiskWriteStream.cpp:582
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayDiskWriteStream.cpp:595
void BrnReplays::DiskWriteStream::CloseCallback(AsyncOp *  lpOperator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDiskWriteStream.cpp:597
		BrnReplays::DiskWriteStream * lpStream;

		rw::core::filesys::AsyncOp::GetContext(/* parameters */);
	}
	{
		// BrnReplayDiskWriteStream.cpp:599
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

