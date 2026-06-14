// ps3mem.h:5
namespace BrnResource {
	// BrnPS3DiskBenchmark.cpp:37
	extern Random gRandom;

}

// BrnPS3DiskBenchmark.cpp:59
void BrnResource::PS3DiskBenchmark::Execute() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPS3DiskBenchmark.cpp:65
		BarrierParameters lBarrierParams;

		// BrnPS3DiskBenchmark.cpp:66
		SemaphoreParameters lSemaphoreParams;

	}
}

// BrnPS3DiskBenchmark.cpp:276
void BrnResource::PS3DiskBenchmark::TunerMarker() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPS3DiskBenchmark.cpp:799
void BrnResource::PS3DiskBenchmark::PrintResultHeader() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPS3DiskBenchmark.cpp:801
		char[1024] lacBuffer;

	}
}

// BrnPS3DiskBenchmark.cpp:808
void BrnResource::PS3DiskBenchmark::PrintResults(const char *  lpTestName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPS3DiskBenchmark.cpp:811
		int32_t liReadSpeed;

		// BrnPS3DiskBenchmark.cpp:812
		int32_t liWriteSpeed;

		// BrnPS3DiskBenchmark.cpp:814
		char[1024] lacBuffer;

	}
}

// BrnPS3DiskBenchmark.cpp:510
void BrnResource::PS3DiskBenchmark::RunTest(const char *  lpTestName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPS3DiskBenchmark.cpp:282
void BrnResource::PS3DiskBenchmark::RunAllDriveTests(bool  lbRandomReads) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPS3DiskBenchmark.cpp:284
		int32_t liReadIndex;

		// BrnPS3DiskBenchmark.cpp:284
		int32_t liWriteIndex;

	}
	{
		// BrnPS3DiskBenchmark.cpp:294
		int32_t liReadChunkSize;

		// BrnPS3DiskBenchmark.cpp:295
		int32_t liReadChunks;

	}
	{
		// BrnPS3DiskBenchmark.cpp:317
		int32_t liReadChunkSize;

		// BrnPS3DiskBenchmark.cpp:318
		int32_t liReadChunks;

	}
	{
		// BrnPS3DiskBenchmark.cpp:342
		int32_t liReadChunkSize;

		// BrnPS3DiskBenchmark.cpp:343
		int32_t liWriteChunkSize;

		// BrnPS3DiskBenchmark.cpp:344
		int32_t liReadChunks;

		// BrnPS3DiskBenchmark.cpp:345
		int32_t liWriteChunks;

	}
	{
		// BrnPS3DiskBenchmark.cpp:370
		int32_t liReadChunkSize;

		// BrnPS3DiskBenchmark.cpp:371
		int32_t liWriteChunkSize;

		// BrnPS3DiskBenchmark.cpp:372
		int32_t liReadChunks;

		// BrnPS3DiskBenchmark.cpp:373
		int32_t liWriteChunks;

	}
}

// BrnPS3DiskBenchmark.cpp:529
void BrnResource::PS3DiskBenchmark::RunRWTest(const char *  lpTestName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPS3DiskBenchmark.cpp:538
		AsyncOp * lpReadOperator;

		// BrnPS3DiskBenchmark.cpp:542
		AsyncOp * lpWriteOperator;

		rw::core::filesys::AsyncOp::operator new(/* parameters */);
		rw::core::filesys::AsyncOp::operator new(/* parameters */);
	}
}

// BrnPS3DiskBenchmark.cpp:396
void BrnResource::PS3DiskBenchmark::RunAllDriveRWTests(bool  lbRandomReads) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPS3DiskBenchmark.cpp:398
		int32_t liReadIndex;

		// BrnPS3DiskBenchmark.cpp:398
		int32_t liWriteIndex;

	}
	{
		// BrnPS3DiskBenchmark.cpp:408
		int32_t liReadChunkSize;

		// BrnPS3DiskBenchmark.cpp:409
		int32_t liReadChunks;

	}
	{
		// BrnPS3DiskBenchmark.cpp:431
		int32_t liReadChunkSize;

		// BrnPS3DiskBenchmark.cpp:432
		int32_t liReadChunks;

	}
	{
		// BrnPS3DiskBenchmark.cpp:456
		int32_t liReadChunkSize;

		// BrnPS3DiskBenchmark.cpp:457
		int32_t liWriteChunkSize;

		// BrnPS3DiskBenchmark.cpp:458
		int32_t liReadChunks;

		// BrnPS3DiskBenchmark.cpp:459
		int32_t liWriteChunks;

	}
	{
		// BrnPS3DiskBenchmark.cpp:484
		int32_t liReadChunkSize;

		// BrnPS3DiskBenchmark.cpp:485
		int32_t liWriteChunkSize;

		// BrnPS3DiskBenchmark.cpp:486
		int32_t liReadChunks;

		// BrnPS3DiskBenchmark.cpp:487
		int32_t liWriteChunks;

	}
}

// BrnPS3DiskBenchmark.cpp:44
void BrnResource::PS3DiskBenchmark::PS3DiskBenchmark() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPS3DiskBenchmark.cpp:682
void BrnResource::PS3DiskBenchmark::OpenReadCallback(AsyncOp *  lpOperator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPS3DiskBenchmark.cpp:685
		BenchmarkParams * lpParams;

	}
	{
		// BrnPS3DiskBenchmark.cpp:684
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GetTimeMS(/* parameters */);
	{
		// BrnPS3DiskBenchmark.cpp:691
		AsyncOp * lpNextOperator;

		rw::core::filesys::AsyncOp::operator new(/* parameters */);
		rw::core::filesys::AsyncOp::GetPriority(/* parameters */);
	}
	{
		// BrnPS3DiskBenchmark.cpp:697
		AsyncOp * lpNextOperator;

		rw::core::filesys::AsyncOp::operator delete(/* parameters */);
	}
	rw::core::filesys::AsyncOp::operator new(/* parameters */);
	rw::core::filesys::AsyncOp::GetPriority(/* parameters */);
}

// BrnPS3DiskBenchmark.cpp:704
void BrnResource::PS3DiskBenchmark::OpenWriteCallback(AsyncOp *  lpOperator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPS3DiskBenchmark.cpp:707
		BenchmarkParams * lpParams;

	}
	{
		// BrnPS3DiskBenchmark.cpp:706
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GetTimeMS(/* parameters */);
	{
		// BrnPS3DiskBenchmark.cpp:713
		AsyncOp * lpNextOperator;

		rw::core::filesys::AsyncOp::operator new(/* parameters */);
		rw::core::filesys::AsyncOp::GetPriority(/* parameters */);
	}
	{
		// BrnPS3DiskBenchmark.cpp:719
		AsyncOp * lpNextOperator;

		rw::core::filesys::AsyncOp::operator delete(/* parameters */);
	}
	rw::core::filesys::AsyncOp::operator new(/* parameters */);
	rw::core::filesys::AsyncOp::GetPriority(/* parameters */);
}

// BrnPS3DiskBenchmark.cpp:726
void BrnResource::PS3DiskBenchmark::ReadCallback(AsyncOp *  lpOperator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPS3DiskBenchmark.cpp:730
		BenchmarkParams * lpParams;

	}
	{
		// BrnPS3DiskBenchmark.cpp:728
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnPS3DiskBenchmark.cpp:734
		int32_t liChunkInFile;

		// BrnPS3DiskBenchmark.cpp:744
		AsyncOp * lpNextOperator;

		CgsNumeric::Random::RandomInt(/* parameters */);
		rw::core::filesys::AsyncOp::operator new(/* parameters */);
		rw::core::filesys::AsyncOp::GetPriority(/* parameters */);
	}
	{
		// BrnPS3DiskBenchmark.cpp:750
		AsyncOp * lpNextOperator;

		rw::core::filesys::AsyncOp::operator delete(/* parameters */);
	}
	rw::core::filesys::AsyncOp::operator new(/* parameters */);
	rw::core::filesys::AsyncOp::GetPriority(/* parameters */);
}

// BrnPS3DiskBenchmark.cpp:757
void BrnResource::PS3DiskBenchmark::WriteCallback(AsyncOp *  lpOperator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPS3DiskBenchmark.cpp:761
		BenchmarkParams * lpParams;

	}
	{
		// BrnPS3DiskBenchmark.cpp:759
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnPS3DiskBenchmark.cpp:765
		int32_t liChunkInFile;

		// BrnPS3DiskBenchmark.cpp:766
		AsyncOp * lpNextOperator;

		rw::core::filesys::AsyncOp::operator new(/* parameters */);
		rw::core::filesys::AsyncOp::GetPriority(/* parameters */);
	}
	{
		// BrnPS3DiskBenchmark.cpp:772
		AsyncOp * lpNextOperator;

		rw::core::filesys::AsyncOp::operator delete(/* parameters */);
	}
	rw::core::filesys::AsyncOp::operator new(/* parameters */);
	rw::core::filesys::AsyncOp::GetPriority(/* parameters */);
}

// BrnPS3DiskBenchmark.cpp:779
void BrnResource::PS3DiskBenchmark::CloseReadCallback(AsyncOp *  lpOperator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPS3DiskBenchmark.cpp:782
		BenchmarkParams * lpParams;

	}
	{
		// BrnPS3DiskBenchmark.cpp:781
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GetTimeMS(/* parameters */);
	rw::core::filesys::AsyncOp::operator delete(/* parameters */);
}

// BrnPS3DiskBenchmark.cpp:789
void BrnResource::PS3DiskBenchmark::CloseWriteCallback(AsyncOp *  lpOperator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPS3DiskBenchmark.cpp:792
		BenchmarkParams * lpParams;

	}
	{
		// BrnPS3DiskBenchmark.cpp:791
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GetTimeMS(/* parameters */);
	rw::core::filesys::AsyncOp::operator delete(/* parameters */);
}

// BrnPS3DiskBenchmark.cpp:180
void BrnResource::PS3DiskBenchmark::TestRepeatingHDWriteTimes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPS3DiskBenchmark.cpp:182
		int liFD;

		// BrnPS3DiskBenchmark.cpp:183
		uint64_t luAmountWritten;

		// BrnPS3DiskBenchmark.cpp:184
		int32_t liChunkIndex;

		// BrnPS3DiskBenchmark.cpp:185
		char[1024] lacBuffer;

		// BrnPS3DiskBenchmark.cpp:194
		char * lpcWriteBuffer;

		// BrnPS3DiskBenchmark.cpp:198
		int32_t liChunkSize;

		// BrnPS3DiskBenchmark.cpp:199
		int32_t liChunksPerFile;

		// BrnPS3DiskBenchmark.cpp:200
		int32_t liTotalChunks;

		// BrnPS3DiskBenchmark.cpp:204
		struct TimePosPair {
			// BrnPS3DiskBenchmark.cpp:205
			int32_t miPos;

			// BrnPS3DiskBenchmark.cpp:206
			int32_t miTime;

		}

		// BrnPS3DiskBenchmark.cpp:208
		TimePosPair * lpResults;

		// BrnPS3DiskBenchmark.cpp:212
		int liMountResult;

		// BrnPS3DiskBenchmark.cpp:213
		CellSysCacheParam lCacheParam;

		// BrnPS3DiskBenchmark.cpp:221
		CellFsErrno lError;

		// BrnPS3DiskBenchmark.cpp:247
		std::FILE * lpFile;

	}
	{
		// BrnPS3DiskBenchmark.cpp:222
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnPS3DiskBenchmark.cpp:236
		int32_t liWriteStart;

		// BrnPS3DiskBenchmark.cpp:239
		int32_t liWriteEnd;

		{
			// BrnPS3DiskBenchmark.cpp:238
			CgsDev::StrStream lStrStream;

			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		GetTimeUS(/* parameters */);
	}
	GetTimeUS(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		// BrnPS3DiskBenchmark.cpp:231
		uint64_t luNewPos;

	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnPS3DiskBenchmark.cpp:267
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPS3DiskBenchmark.cpp:556
void BrnResource::PS3DiskBenchmark::ReadThread(void *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPS3DiskBenchmark.cpp:558
		Random lRandom;

		CgsNumeric::Random::Construct(/* parameters */);
		CgsNumeric::Random::SetSeed(/* parameters */);
		{
			// BrnPS3DiskBenchmark.cpp:564
			BenchmarkParams * lpParams;

			{
				// BrnPS3DiskBenchmark.cpp:570
				int32_t liStartTime;

				GetTimeMS(/* parameters */);
				{
					// BrnPS3DiskBenchmark.cpp:576
					int liFD;

					// BrnPS3DiskBenchmark.cpp:577
					uint64_t luAmountRead;

					// BrnPS3DiskBenchmark.cpp:578
					int32_t liChunkIndex;

					// BrnPS3DiskBenchmark.cpp:581
					CellFsErrno lError;

					{
						// BrnPS3DiskBenchmark.cpp:589
						int32_t liRandChunk;

						// BrnPS3DiskBenchmark.cpp:590
						uint64_t luNewPos;

						CgsNumeric::Random::RandomInt(/* parameters */);
					}
					{
						// BrnPS3DiskBenchmark.cpp:607
						CgsDev::StrStream lStrStream;

						CgsDev::StrStream::StrStream(/* parameters */);
						CgsDev::StrStreamBase::operator<<(/* parameters */);
					}
					{
						// BrnPS3DiskBenchmark.cpp:599
						uint64_t luNewPos;

						{
							// BrnPS3DiskBenchmark.cpp:601
							CgsDev::StrStream lStrStream;

							CgsDev::StrStream::StrStream(/* parameters */);
							CgsDev::StrStreamBase::operator<<(/* parameters */);
						}
					}
					{
						// BrnPS3DiskBenchmark.cpp:612
						CgsDev::StrStream lStrStream;

						CgsDev::StrStream::StrStream(/* parameters */);
						CgsDev::StrStreamBase::operator<<(/* parameters */);
					}
				}
				GetTimeMS(/* parameters */);
			}
			{
				// BrnPS3DiskBenchmark.cpp:592
				CgsDev::StrStream lStrStream;

				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
			{
				// BrnPS3DiskBenchmark.cpp:582
				CgsDev::StrStream lStrStream;

				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
		}
	}
}

// BrnPS3DiskBenchmark.cpp:625
void BrnResource::PS3DiskBenchmark::WriteThread(void *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPS3DiskBenchmark.cpp:629
		BenchmarkParams * lpParams;

		{
			// BrnPS3DiskBenchmark.cpp:635
			int32_t liStartTime;

			GetTimeMS(/* parameters */);
			{
				// BrnPS3DiskBenchmark.cpp:642
				int liFD;

				// BrnPS3DiskBenchmark.cpp:643
				uint64_t luAmountWritten;

				// BrnPS3DiskBenchmark.cpp:644
				int32_t liChunkIndex;

				// BrnPS3DiskBenchmark.cpp:647
				CellFsErrno lError;

				{
					// BrnPS3DiskBenchmark.cpp:663
					CgsDev::StrStream lStrStream;

					CgsDev::StrStreamBase::operator<<(/* parameters */);
				}
				CgsDev::StrStream::StrStream(/* parameters */);
				{
					// BrnPS3DiskBenchmark.cpp:668
					CgsDev::StrStream lStrStream;

					CgsDev::StrStream::StrStream(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
				}
			}
			GetTimeMS(/* parameters */);
		}
		{
			// BrnPS3DiskBenchmark.cpp:656
			uint64_t luNewPos;

			{
				// BrnPS3DiskBenchmark.cpp:658
				CgsDev::StrStream lStrStream;

				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
		}
		{
			// BrnPS3DiskBenchmark.cpp:648
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

// BrnPS3DiskBenchmark.cpp:32
