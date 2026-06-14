// BrnPS3DiskBenchmark.h:44
struct BrnResource::BenchmarkParams {
	// BrnPS3DiskBenchmark.h:47
	char[512] macFileName;

	// BrnPS3DiskBenchmark.h:48
	int32_t miChunkSize;

	// BrnPS3DiskBenchmark.h:49
	int32_t miNumChunksInFile;

	// BrnPS3DiskBenchmark.h:50
	int32_t miTotalChunks;

	// BrnPS3DiskBenchmark.h:51
	Barrier * mpStartBarrier;

	// BrnPS3DiskBenchmark.h:52
	Barrier * mpEndBarrier;

	// BrnPS3DiskBenchmark.h:53
	Semaphore * mpSemaphore;

	// BrnPS3DiskBenchmark.h:54
	bool mbAsync;

	// BrnPS3DiskBenchmark.h:55
	bool mbRandomSeeks;

	// BrnPS3DiskBenchmark.h:58
	int32_t miChunksRead;

	// BrnPS3DiskBenchmark.h:59
	int32_t miStartTime;

	// BrnPS3DiskBenchmark.h:62
	int32_t miTotalTime;

}

// BrnPS3DiskBenchmark.h:75
struct BrnResource::PS3DiskBenchmark {
private:
	// BrnPS3DiskBenchmark.h:88
	Thread mReadThread;

	// BrnPS3DiskBenchmark.h:89
	Thread mWriteThread;

	// BrnPS3DiskBenchmark.h:90
	Barrier mStartBarrier;

	// BrnPS3DiskBenchmark.h:91
	Barrier mEndBarrier;

	// BrnPS3DiskBenchmark.h:92
	Semaphore mReadSemaphore;

	// BrnPS3DiskBenchmark.h:93
	Semaphore mWriteSemaphore;

	// BrnPS3DiskBenchmark.h:94
	BenchmarkParams mReadParams;

	// BrnPS3DiskBenchmark.h:95
	BenchmarkParams mWriteParams;

	// BrnPS3DiskBenchmark.h:96
	uint64_t muTestStart;

	// BrnPS3DiskBenchmark.h:97
	uint64_t muCounterFreq;

	// BrnPS3DiskBenchmark.h:98
	extern PS3DiskBenchmark * mpBenchmark;

	// BrnPS3DiskBenchmark.h:99
	std::FILE * mpLogFile;

	// BrnPS3DiskBenchmark.h:100
	char * mpcWriteBuffer;

	// BrnPS3DiskBenchmark.h:101
	char * mpcReadBuffer;

	// BrnPS3DiskBenchmark.h:103
	rw::core::filesys::Handle * mpReadHandle;

	// BrnPS3DiskBenchmark.h:104
	rw::core::filesys::Handle * mpWriteHandle;

public:
	// BrnPS3DiskBenchmark.h:78
	void PS3DiskBenchmark();

	// BrnPS3DiskBenchmark.h:81
	// Declaration
	void Execute() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPS3DiskBenchmark.cpp:63
		using namespace CgsDev::Message;

		// BrnPS3DiskBenchmark.cpp:172
		using namespace CgsDev::Message;

	}

	// BrnPS3DiskBenchmark.h:84
	void TestRepeatingHDWriteTimes();

private:
	// BrnPS3DiskBenchmark.h:107
	void RunTest(const char *);

	// BrnPS3DiskBenchmark.h:110
	void RunRWTest(const char *);

	// BrnPS3DiskBenchmark.h:114
	intptr_t ReadThread(void *);

	// BrnPS3DiskBenchmark.h:118
	intptr_t WriteThread(void *);

	// BrnPS3DiskBenchmark.h:121
	int32_t GetTimeMS();

	// BrnPS3DiskBenchmark.h:124
	int32_t GetTimeUS();

	// BrnPS3DiskBenchmark.h:127
	void OpenReadCallback(AsyncOp *);

	// BrnPS3DiskBenchmark.h:130
	void OpenWriteCallback(AsyncOp *);

	// BrnPS3DiskBenchmark.h:133
	void ReadCallback(AsyncOp *);

	// BrnPS3DiskBenchmark.h:136
	void WriteCallback(AsyncOp *);

	// BrnPS3DiskBenchmark.h:139
	void CloseReadCallback(AsyncOp *);

	// BrnPS3DiskBenchmark.h:142
	void CloseWriteCallback(AsyncOp *);

	// BrnPS3DiskBenchmark.h:146
	// Declaration
	void PrintResultHeader() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPS3DiskBenchmark.cpp:804
		using namespace CgsDev::Message;

	}

	// BrnPS3DiskBenchmark.h:149
	// Declaration
	void PrintResults(const char *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPS3DiskBenchmark.cpp:824
		using namespace CgsDev::Message;

	}

	// BrnPS3DiskBenchmark.h:152
	void RunAllDriveTests(bool);

	// BrnPS3DiskBenchmark.h:155
	void RunAllDriveRWTests(bool);

	// BrnPS3DiskBenchmark.h:158
	void TunerMarker();

}

