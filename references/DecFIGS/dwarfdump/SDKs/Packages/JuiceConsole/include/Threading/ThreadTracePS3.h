// JuiceDefines.h:17
namespace Juice {
	// ThreadTracePS3.h:20
	enum ThreadTraceType {
		PPU_THREAD_TRACE = 3,
		SPU_THREAD_TRACE = 19,
	}

}

// ThreadTracePS3.h:27
struct Juice::ThreadTraceRecord {
	// ThreadTracePS3.h:28
	unsigned int cpu;

	// ThreadTracePS3.h:29
	unsigned int timeBase;

	// ThreadTracePS3.h:30
	unsigned int processId;

	// ThreadTracePS3.h:31
	unsigned int threadId;

	// ThreadTracePS3.h:32
	unsigned int status;

	// ThreadTracePS3.h:33
	char[32] threadName;

}

// ThreadTracePS3.h:37
struct Juice::ThreadTrace : public TraceReader {
private:
	// ThreadTracePS3.h:49
	extern const unsigned int kThreadSize = 32768;

	// ThreadTracePS3.h:50
	Juice::ThreadTraceType mTraceType;

	// ThreadTracePS3.h:51
	unsigned int mProcessID;

public:
	// ThreadTracePS3.h:39
	void ThreadTrace();

	// ThreadTracePS3.h:40
	void ~ThreadTrace();

	// ThreadTracePS3.h:42
	int Initialize(unsigned int, Juice::ThreadTraceType);

	// ThreadTracePS3.h:43
	void Disable();

	// ThreadTracePS3.h:44
	void Start();

	// ThreadTracePS3.h:45
	void Stop();

	// ThreadTracePS3.h:46
	// Declaration
	bool GetNextRecord(ThreadTraceRecord *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// ThreadTracePS3.h:34
		typedef ThreadTraceRecord ThreadTraceRecord;

	}

}

// ThreadTracePS3.h:49
extern const unsigned int kThreadSize = 32768;

