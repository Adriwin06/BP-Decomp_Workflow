// JobManager.h:27
struct Juice::JobExecInfo {
	// JobManager.h:31
	uint64_t mExecTime;

	// JobManager.h:32
	uint32_t mDoneCounter;

	// JobManager.h:33
	uint32_t mDmaPad;

public:
	// JobManager.h:28
	void JobExecInfo();

}

// JobManager.h:37
struct Juice::JobInfo {
	// JobManager.h:34
	typedef JobExecInfo JobExecInfo;

	// JobManager.h:41
	JobInfo::JobExecInfo mJobExecInfo;

	// JobManager.h:43
	uint32_t mJobPtr;

	// JobManager.h:44
	uint32_t mSubmitCounter;

	// JobManager.h:45
	uint64_t mLastExecTime;

public:
	// JobManager.h:38
	void JobInfo();

}

// JobManager.h:52
struct Juice::JobManager : public Processor {
	// JobManager.cpp:33
	extern Juice::JobManager *(*)() Instance;

private:
	// JobManager.h:75
	extern const unsigned int kMaxJobs = 127;

	// JobManager.h:76
	extern const unsigned int mkDefaultJobMonitorUpdateInterval = 500;

	// JobManager.h:78
	bool mJobMonitorEnabled;

	// Unknown accessibility
	// JobManager.h:48
	typedef JobInfo JobInfo;

	// JobManager.h:81
	JobManager::JobInfo[127] mJobInfoList;

	// JobManager.h:83
	unsigned int mNumJobs;

	// JobManager.h:84
	unsigned int mJobMonitorIntervalCurrent;

	// JobManager.h:85
	unsigned int mJobMonitorIntervalStart;

	// JobManager.h:86
	unsigned int mJobMonitorUpdateInterval;

public:
	void JobManager(const JobManager &);

	// JobManager.cpp:40
	Juice::JobManager * InstanceFunction();

	// JobManager.cpp:70
	virtual void ProcessMessage(int);

	// JobManager.cpp:116
	virtual void Initialize(Juice::cJuiceCom *);

	// JobManager.cpp:135
	virtual void Update();

	// JobManager.cpp:125
	virtual void Disable();

	// JobManager.cpp:149
	bool JobManagerEnabled();

	// JobManager.cpp:157
	unsigned int JobSubmit(unsigned int, const char *, unsigned int, unsigned int, unsigned int, unsigned int);

	// JobManager.cpp:220
	void UpdateInfo();

	// JobManager.cpp:187
	JobManager::JobInfo * GetJobInfo(unsigned int);

	// JobManager.cpp:202
	JobManager::JobInfo * AddJobInfo(unsigned int);

	// JobManager.cpp:247
	void ResetJobList();

private:
	// JobManager.cpp:47
	void JobManager();

	// JobManager.h:73
	virtual void ~JobManager();

}

// JobManager.h:75
extern const unsigned int kMaxJobs = 127;

// JobManager.h:76
extern const unsigned int mkDefaultJobMonitorUpdateInterval = 500;

