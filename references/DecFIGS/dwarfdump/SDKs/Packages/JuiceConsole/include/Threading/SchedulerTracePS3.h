// SchedulerTracePS3.h:21
struct Juice::SchedulerTraceRecord {
	// SchedulerTracePS3.h:22
	unsigned int cpu;

	// SchedulerTracePS3.h:23
	unsigned int timeBase;

	// SchedulerTracePS3.h:24
	unsigned int threadId;

	// SchedulerTracePS3.h:25
	unsigned int stats;

}

// SchedulerTracePS3.h:29
struct Juice::SchedulerTrace {
private:
	// SchedulerTracePS3.h:42
	extern const unsigned int kThreadSize = 1048576;

	// SchedulerTracePS3.h:43
	bool mInitialized;

	// SchedulerTracePS3.h:44
	unsigned int * mPTraceEnd;

	// SchedulerTracePS3.h:45
	unsigned int * mTraceData;

	// SchedulerTracePS3.h:46
	unsigned int mTraceDataSize;

	// SchedulerTracePS3.h:47
	unsigned int mCurrPos;

	// SchedulerTracePS3.h:48
	unsigned int mMainThreadId;

public:
	// SchedulerTracePS3.h:31
	void SchedulerTrace();

	// SchedulerTracePS3.h:32
	void ~SchedulerTrace();

	// SchedulerTracePS3.h:34
	int Initialize(unsigned int);

	// SchedulerTracePS3.h:35
	void Disable();

	// SchedulerTracePS3.h:36
	void Start();

	// SchedulerTracePS3.h:37
	void Stop();

	// SchedulerTracePS3.h:38
	// Declaration
	bool GetNextRecord(SchedulerTraceRecord *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// SchedulerTracePS3.h:26
		typedef SchedulerTraceRecord SchedulerTraceRecord;

	}

	// SchedulerTracePS3.h:39
	bool IsEmpty();

}

// SchedulerTracePS3.h:42
extern const unsigned int kThreadSize = 1048576;

