// TraceReaderPS3.h:22
struct Juice::TraceReader {
private:
	// TraceReaderPS3.h:34
	bool mInitialized;

	// TraceReaderPS3.h:35
	unsigned int * mPTraceEnd;

	// TraceReaderPS3.h:36
	unsigned int * mTraceData;

	// TraceReaderPS3.h:37
	unsigned int mTraceDataSize;

	// TraceReaderPS3.h:38
	unsigned int mCurrPos;

public:
	// TraceReaderPS3.h:24
	void TraceReader();

	// TraceReaderPS3.h:25
	void ~TraceReader();

	// TraceReaderPS3.h:27
	bool Initialize(unsigned int *, unsigned int);

	// TraceReaderPS3.h:28
	unsigned int GetUInt();

	// TraceReaderPS3.h:29
	void GetString(char *, unsigned int);

	// TraceReaderPS3.h:30
	bool IsEmpty();

}

