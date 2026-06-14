// CgsDataStreamCommandPoster.cpp:79
void CgsMemory::DataStreamCommandPoster::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDataStreamCommandPoster.cpp:46
void CgsMemory::DataStreamCommandPoster::Construct(void *  lpCommandBuffer, int32_t  liCommandBufferSize, int32_t  liCommandSize, int32_t  liInitialCommandCount, void *  lpDataBuffer, int32_t  liDataBufferSize, int32_t  liInitialDataBufferUsed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDataStreamCommandPoster.cpp:52
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	EA::Thread::AtomicInt<std::uint64_t>::operator=(/* parameters */);
	{
		// CgsDataStreamCommandPoster.cpp:51
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsDataStreamCommandPoster.cpp:50
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsDataStreamCommandPoster.cpp:49
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsDataStreamCommandPoster.cpp:48
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDataStreamCommandPoster.cpp:92
void CgsMemory::DataStreamCommandPoster::Begin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDataStreamCommandPoster.cpp:95
		uint64_t luCurrValue;

		// CgsDataStreamCommandPoster.cpp:96
		uint64_t luNewValue;

	}
	GetEncodedStatus(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::SetValueConditional(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsDataStreamCommandPoster.cpp:94
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDataStreamCommandPoster.cpp:125
void CgsMemory::DataStreamCommandPoster::End() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDataStreamCommandPoster.cpp:134
		uint64_t luCurrValue;

		// CgsDataStreamCommandPoster.cpp:134
		uint8_t luNumUsers;

		// CgsDataStreamCommandPoster.cpp:134
		uint32_t luNextCommand;

		GetEncodedStatus(/* parameters */);
		DecodeStatus(/* parameters */);
	}
	{
		// CgsDataStreamCommandPoster.cpp:137
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
		// CgsDataStreamCommandPoster.cpp:130
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDataStreamCommandPoster.cpp:156
void CgsMemory::DataStreamCommandPoster::AllocateData(int32_t  liSize, int32_t  liAlignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDataStreamCommandPoster.cpp:160
		intptr_t liDataBase;

		// CgsDataStreamCommandPoster.cpp:160
		intptr_t liDataEnd;

		// CgsDataStreamCommandPoster.cpp:160
		intptr_t liAllocStart;

		// CgsDataStreamCommandPoster.cpp:160
		intptr_t liAllocEnd;

	}
	{
		// CgsDataStreamCommandPoster.cpp:158
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDataStreamCommandPoster.cpp:197
void CgsMemory::DataStreamCommandPoster::AddCommand(void *  lpCommand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDataStreamCommandPoster.cpp:200
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsCore::MemCpy(/* parameters */);
	{
		// CgsDataStreamCommandPoster.cpp:199
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDataStreamCommandPoster.cpp:219
void CgsMemory::DataStreamCommandPoster::AddCommands(void *  lpCommands, int32_t  liCommandCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemCpy(/* parameters */);
	{
		// CgsDataStreamCommandPoster.cpp:222
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsDataStreamCommandPoster.cpp:221
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDataStreamCommandPoster.cpp:240
void CgsMemory::DataStreamCommandPoster::AllocateCommand(void **  lppOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDataStreamCommandPoster.cpp:242
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsDataStreamCommandPoster.cpp:243
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsDataStreamCommandPoster.cpp:244
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsDataStreamCommandPoster.cpp:263
void CgsMemory::DataStreamCommandPoster::AllocateCommands(int32_t  liCommandCount, void **  lppOutBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDataStreamCommandPoster.cpp:265
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsDataStreamCommandPoster.cpp:266
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsDataStreamCommandPoster.cpp:267
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

