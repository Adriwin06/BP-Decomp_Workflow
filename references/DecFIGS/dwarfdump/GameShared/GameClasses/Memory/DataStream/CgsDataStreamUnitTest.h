// CgsDataStreamUnitTest.h:43
struct CgsMemory::DataStreamUnitTest {
	// CgsDataStreamUnitTest.h:49
	extern const int32_t KI_MAX_JOBS = 4;

private:
	// CgsDataStreamUnitTest.h:57
	RelocatorData[4] mJobData;

	// CgsDataStreamUnitTest.h:58
	RelocationTestParams[4] mJobParams;

	// CgsDataStreamUnitTest.h:59
	Job[4] mJobs;

	// CgsDataStreamUnitTest.h:60
	JobScheduler * mpScheduler;

	// CgsDataStreamUnitTest.h:62
	char[131072] macCommandBuffer;

	// CgsDataStreamUnitTest.h:63
	char[131072] macResultBuffer;

	// CgsDataStreamUnitTest.h:64
	int32_t[1000] maiResultIndices;

	// CgsDataStreamUnitTest.h:66
	DataStreamCommandPoster mCommandPoster;

	// CgsDataStreamUnitTest.h:67
	DataStreamResultReader mResultReader;

public:
	// CgsDataStreamUnitTest.h:53
	// Declaration
	void Run(JobScheduler *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsDataStreamUnitTest.cpp:90
		using namespace CgsDev::Message;

		// CgsDataStreamUnitTest.cpp:96
		using namespace CgsDev::Message;

		// CgsDataStreamUnitTest.cpp:108
		using namespace CgsDev::Message;

		// CgsDataStreamUnitTest.cpp:118
		using namespace CgsDev::Message;

		// CgsDataStreamUnitTest.cpp:130
		using namespace CgsDev::Message;

	}

}

// CgsDataStreamUnitTest.h:49
extern const int32_t KI_MAX_JOBS = 4;

