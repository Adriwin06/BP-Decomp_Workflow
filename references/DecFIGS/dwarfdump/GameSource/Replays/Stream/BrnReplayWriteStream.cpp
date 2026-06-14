// BrnReplayWriteStream.cpp:42
void BrnReplays::WriteStream::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReplayWriteStream.cpp:65
void BrnReplays::WriteStream::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReplayWriteStream.cpp:350
void BrnReplays::WriteStream::Write(void *  lpData, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReplayWriteStream.cpp:311
void BrnReplays::WriteStream::InvalidateFrunksAhead(int32_t  liStartFrunk) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayWriteStream.cpp:313
		int32_t liIndex;

		{
			// BrnReplayWriteStream.cpp:319
			int32_t liDataMin;

			// BrnReplayWriteStream.cpp:320
			int32_t liDataMax;

		}
		{
			// BrnReplayWriteStream.cpp:337
			int32_t liFrunkIndex;

			// BrnReplayWriteStream.cpp:338
			uint16_t luFlags;

		}
	}
}

// BrnReplayWriteStream.cpp:284
void BrnReplays::WriteStream::EndStream() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnReplayWriteStream.cpp:81
void BrnReplays::WriteStream::StartNewStream(void *  lpHeaderBuffer, int32_t  liHeaderBufferSize, BrnReplays::DiskWriteStream *  lpStream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	StreamHeader::Clear(/* parameters */);
	{
		// BrnReplayWriteStream.cpp:83
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayWriteStream.cpp:251
void BrnReplays::WriteStream::PauseStream() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayWriteStream.cpp:253
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayWriteStream.cpp:267
void BrnReplays::WriteStream::ContinueStream() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayWriteStream.cpp:270
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayWriteStream.cpp:269
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayWriteStream.cpp:366
void BrnReplays::WriteStream::ResetStartFrame(float32_t  lfNumSecondsInPast) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayWriteStream.cpp:369
		int32_t liFramesInPast;

		// BrnReplayWriteStream.cpp:378
		int32_t liNewStartFrunk;

		// BrnReplayWriteStream.cpp:381
		int32_t liIndex;

		// BrnReplayWriteStream.cpp:398
		int32_t liNewNumFrunks;

	}
	{
		// BrnReplayWriteStream.cpp:385
		int32_t liFrunkIndex;

		// BrnReplayWriteStream.cpp:386
		const StreamOffset & lOffset;

	}
	{
		// BrnReplayWriteStream.cpp:411
		bool _lbLoop;

		{
			// BrnReplayWriteStream.cpp:423
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnReplayWriteStream.cpp:111
void BrnReplays::WriteStream::AddFrunk(int32_t  liFrameIndex, float32_t  lfFrameTime, FrunkSerialiserEntry *  lpEntries, void **  lppBlocks, int32_t  liNumBlocks, bool  lbIsKeyFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayWriteStream.cpp:117
		int32_t liWritten;

		// BrnReplayWriteStream.cpp:118
		int32_t liRequired;

		// BrnReplayWriteStream.cpp:119
		uint16_t luFlags;

		// BrnReplayWriteStream.cpp:121
		StreamOffset * lpNewEntry;

		// BrnReplayWriteStream.cpp:173
		int32_t liIndex;

		// BrnReplayWriteStream.cpp:183
		bool lbSuccess;

	}
	{
		// BrnReplayWriteStream.cpp:229
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayWriteStream.cpp:140
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayWriteStream.cpp:114
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayWriteStream.cpp:113
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayWriteStream.cpp:115
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayWriteStream.cpp:116
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayWriteStream.cpp:127
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnReplayWriteStream.cpp:30
