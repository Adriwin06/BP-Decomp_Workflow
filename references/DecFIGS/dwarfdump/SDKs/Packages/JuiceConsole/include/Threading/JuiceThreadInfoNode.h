// JuiceThreadInfoNode.h:37
struct Juice::ThreadInfoNode {
private:
	// JuiceThreadInfoNode.h:79
	extern unsigned int mStartTimeZero;

	// JuiceThreadInfoNode.h:82
	unsigned int mHandle;

	// JuiceThreadInfoNode.h:83
	unsigned int mThreadID;

	// JuiceThreadInfoNode.h:84
	unsigned int mSuspendCount;

	// JuiceThreadInfoNode.h:85
	unsigned int mPriority;

	// JuiceThreadInfoNode.h:86
	int mCpuId;

	// JuiceThreadInfoNode.h:87
	int mLastCpuId;

	// JuiceThreadInfoNode.h:88
	bool mSentThreadName;

	// JuiceThreadInfoNode.h:89
	bool mMarkedForDelete;

	// JuiceThreadInfoNode.h:90
	unsigned int mHooksHit;

	// JuiceThreadInfoNode.h:93
	unsigned int mStartTime;

	// JuiceThreadInfoNode.h:94
	unsigned int mEndTime;

	// JuiceThreadInfoNode.h:95
	uint64_t mExecTime;

	// JuiceThreadInfoNode.h:96
	unsigned int mSchedStartTime;

	// JuiceThreadInfoNode.h:97
	unsigned int mState;

public:
	// JuiceThreadInfoNode.h:39
	void ThreadInfoNode();

	// JuiceThreadInfoNode.h:40
	unsigned int GetHandle();

	// JuiceThreadInfoNode.h:41
	bool GetSentName();

	// JuiceThreadInfoNode.h:42
	bool GetMarkForDelete();

	// JuiceThreadInfoNode.h:43
	int GetCpuId();

	// JuiceThreadInfoNode.h:44
	int GetLastCpuId();

	// JuiceThreadInfoNode.h:45
	unsigned int GetCallStack(unsigned int *, unsigned int);

	// JuiceThreadInfoNode.h:46
	unsigned int GetID();

	// JuiceThreadInfoNode.h:47
	unsigned int GetOriginalID();

	// JuiceThreadInfoNode.h:48
	unsigned int GetSuspendCount();

	// JuiceThreadInfoNode.h:49
	unsigned int GetPriority();

	// JuiceThreadInfoNode.h:50
	unsigned int GetStartTime();

	// JuiceThreadInfoNode.h:51
	unsigned int GetEndTime();

	// JuiceThreadInfoNode.h:52
	unsigned int GetExecutionTime();

	// JuiceThreadInfoNode.h:53
	unsigned int GetExitCode();

	// JuiceThreadInfoNode.h:54
	void GetTimes(unsigned int &, unsigned int &, unsigned int &);

	// JuiceThreadInfoNode.h:55
	void UpdateInfo(const char *&);

	// JuiceThreadInfoNode.h:58
	void UpdateInfo(const SchedulerTraceRecord *);

	// JuiceThreadInfoNode.h:61
	void ReleaseHandle();

	// JuiceThreadInfoNode.h:62
	void SetHandle(unsigned int);

	// JuiceThreadInfoNode.h:63
	void SetID(unsigned int);

	// JuiceThreadInfoNode.h:64
	void SetCpuId(int);

	// JuiceThreadInfoNode.h:65
	void SetLastCpuId(int);

	// JuiceThreadInfoNode.h:66
	void SetSuspendCount(unsigned int);

	// JuiceThreadInfoNode.h:67
	void SetSentName(bool);

	// JuiceThreadInfoNode.h:68
	void SetMarkForDelete(bool);

	// JuiceThreadInfoNode.h:69
	unsigned int GetHookHits();

	// JuiceThreadInfoNode.h:70
	void ThreadInfoUpdate();

	// JuiceThreadInfoNode.h:71
	void HookHit();

	// JuiceThreadInfoNode.h:74
	void SetStartTime(unsigned int);

	// JuiceThreadInfoNode.h:75
	unsigned int GetTime(unsigned int);

private:
	// JuiceThreadInfoNode.h:80
	unsigned int ConvertThreadTimeToMS(system_time_t);

}

