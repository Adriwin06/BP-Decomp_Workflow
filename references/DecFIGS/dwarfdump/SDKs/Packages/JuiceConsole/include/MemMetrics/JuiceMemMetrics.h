// JuiceMemMetrics.h:26
struct Juice::MemMetricsMgr : public Juice::Processor {
	// JuiceMemMetrics.cpp:22
	extern Juice::MemMetricsMgr *(*)() Activate;

private:
	// JuiceMemMetrics.h:54
	extern const int SEND_THRESHOLD = 512;

	// JuiceMemMetrics.h:58
	Juice::JuiceMsgWriter mWriter;

	// JuiceMemMetrics.h:59
	char * mWriteBuff;

	// JuiceMemMetrics.h:60
	unsigned int mWriteBuffSize;

	// JuiceMemMetrics.h:61
	unsigned int mMaxSendSize;

	// JuiceMemMetrics.h:62
	unsigned int mUsedOverFlowBufferSegment;

	// JuiceMemMetrics.h:63
	unsigned int mNumberOfOverFlowSegments;

	// JuiceMemMetrics.h:66
	bool mComEnabled;

	// JuiceMemMetrics.h:69
	unsigned int mStackDepth;

	// JuiceMemMetrics.h:70
	unsigned int mPreferredLoadAddress;

	// JuiceMemMetrics.h:71
	const char * mXBModuleName;

	// JuiceMemMetrics.h:74
	extern const unsigned int MAX_TIME_TO_WAIT_BETWEEN_SENDS = 1000;

	// JuiceMemMetrics.h:75
	unsigned int mTimerStartTime;

	// JuiceMemMetrics.h:76
	unsigned int mTimerDiff;

public:
	void MemMetricsMgr(const MemMetricsMgr &);

	// JuiceMemMetrics.cpp:43
	Juice::MemMetricsMgr * InstanceFunction();

	// JuiceMemMetrics.cpp:54
	virtual void ProcessMessage(int);

	// JuiceMemMetrics.cpp:86
	virtual void Initialize(Juice::cJuiceCom *);

	// JuiceMemMetrics.cpp:105
	virtual void Update();

	// JuiceMemMetrics.cpp:341
	virtual void Flush();

	// JuiceMemMetrics.cpp:93
	virtual void Disable();

	// JuiceMemMetrics.cpp:115
	void InitMemoryMonitor(char *, unsigned int, unsigned int, unsigned int, const char *, unsigned int);

	// JuiceMemMetrics.cpp:142
	void ChangeBuffer(char *, unsigned int, unsigned int);

	// JuiceMemMetrics.cpp:172
	void DefineRamSpace(const char *, unsigned int, unsigned int);

	// JuiceMemMetrics.cpp:185
	void DefineHeap(const char *, const char *, unsigned int);

	// JuiceMemMetrics.cpp:198
	void ClearHeap(const char *, unsigned int);

	// JuiceMemMetrics.cpp:213
	void RemoveHeap(const char *, unsigned int);

	// JuiceMemMetrics.cpp:228
	void Alloc(const char *, const char *, unsigned int, unsigned int, unsigned int, unsigned int);

	// JuiceMemMetrics.cpp:247
	void AllocInfo(const char *, unsigned int, const char *);

	// JuiceMemMetrics.cpp:260
	void Free(const char *, unsigned int);

	// JuiceMemMetrics.cpp:275
	void SetLabel(const char *);

private:
	// JuiceMemMetrics.cpp:286
	void PutCallStack();

	// JuiceMemMetrics.cpp:307
	bool WriterStart();

	// JuiceMemMetrics.cpp:331
	void WriterEnd();

	// JuiceMemMetrics.cpp:346
	void SendData();

	// JuiceMemMetrics.cpp:27
	void MemMetricsMgr();

	// JuiceMemMetrics.h:53
	virtual void ~MemMetricsMgr();

}

// JuiceMemMetrics.h:54
extern const int SEND_THRESHOLD = 512;

// JuiceMemMetrics.h:74
extern const unsigned int MAX_TIME_TO_WAIT_BETWEEN_SENDS = 1000;

