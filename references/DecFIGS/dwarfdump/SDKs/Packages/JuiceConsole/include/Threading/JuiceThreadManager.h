// JuiceDefines.h:17
namespace Juice {
	// Declaration
	struct ThreadManager {
		// JuiceThreadManager.h:52
		struct tThreadHangInfo {
			// JuiceThreadManager.h:53
			unsigned int mThreadID;

			// JuiceThreadManager.h:54
			unsigned int mLastActivityCounter;

			// JuiceThreadManager.h:55
			unsigned int mHangTime;

			// JuiceThreadManager.h:56
			unsigned int mHangTimeStart;

			// JuiceThreadManager.h:57
			unsigned int mActivityCounter;

			// JuiceThreadManager.h:58
			unsigned int mThreadDelay;

			// JuiceThreadManager.h:59
			unsigned int mHangTimeout;

			// JuiceThreadManager.h:60
			bool mIsHung;

		}

		// JuiceThreadManager.h:63
		enum eThreadMonkeyState {
			THREAD_MONKEY_RANDOM = 0,
			THREAD_MONKEY_FIXED = 1,
		}

		// JuiceThreadManager.h:70
		struct tThreadMonkeyInfo {
			// JuiceThreadManager.h:71
			unsigned int mFixedRate;

			// JuiceThreadManager.h:72
			unsigned int mRandMin;

			// JuiceThreadManager.h:73
			unsigned int mRandMax;

			// JuiceThreadManager.h:74
			unsigned int mFrequency;

			// JuiceThreadManager.h:75
			Juice::ThreadManager::eThreadMonkeyState mState;

		}

	}

}

// JuiceThreadManager.h:48
struct Juice::ThreadManager : public Juice::Processor {
	// JuiceThreadManager.cpp:35
	extern Juice::ThreadManager *(*)() Instance;

private:
	// JuiceThreadManager.h:135
	extern const int mkThreadBufferSize = 64;

	// JuiceThreadManager.h:136
	extern const unsigned int mkRegisteredThreadMax = 24;

	// JuiceThreadManager.h:142
	extern const int mkDefualtThreadCheckpointInterval = 500;

	// JuiceThreadManager.h:143
	extern const int mkDefaultJuiceUpdateFrequencyMS = 5;

	// JuiceThreadManager.h:145
	int mMonkeyFrequency;

	// JuiceThreadManager.h:146
	bool mHangInflicted;

	// JuiceThreadManager.h:147
	bool mThreadMonkeyEnabled;

	// JuiceThreadManager.h:148
	bool mNewRegisteredThread;

	// JuiceThreadManager.h:149
	bool mThreadMonitorEnabled;

	// JuiceThreadManager.h:150
	unsigned int mJuiceThreadIDCount;

	// JuiceThreadManager.h:151
	unsigned int mThreadUpdateInterval;

	// JuiceThreadManager.h:152
	unsigned int mThreadCount;

	// JuiceThreadManager.h:153
	unsigned int mThreadJuiceUpdate;

	// JuiceThreadManager.h:154
	unsigned int mThreadIntervalStart;

	// JuiceThreadManager.h:155
	unsigned int mThreadIntervalCurrent;

	// JuiceThreadManager.h:156
	unsigned int mCheckPointCount;

	// JuiceThreadManager.h:158
	Juice::ThreadManager::tThreadMonkeyInfo mThreadMonkeyInfo;

	// JuiceThreadManager.h:159
	JuiceMutex mThreadMgrMutex;

	// JuiceThreadManager.h:160
	ThreadInfoNode[64] mThreadBuff;

	// JuiceThreadManager.h:161
	Juice::ThreadManager::tThreadHangInfo[24] mJuiceRegisteredThreadList;

	// JuiceThreadManager.h:164
	ThreadTrace mPPUThreadTrace;

	// JuiceThreadManager.h:165
	ThreadTrace mSPUThreadTrace;

	// JuiceThreadManager.h:166
	SchedulerTrace mPPUSchedulerTrace;

public:
	void ThreadManager(const ThreadManager &);

	// JuiceThreadManager.cpp:42
	Juice::ThreadManager * InstanceFunction();

	// JuiceThreadManager.cpp:54
	virtual void ProcessMessage(int);

	// JuiceThreadManager.cpp:184
	virtual void Initialize(Juice::cJuiceCom *);

	// JuiceThreadManager.cpp:199
	virtual void Update();

	// JuiceThreadManager.cpp:214
	virtual void Disable();

	// JuiceThreadManager.cpp:726
	virtual void CheckPoint(char *);

	// JuiceThreadManager.cpp:423
	virtual void GameActivityEvent(unsigned int);

	// JuiceThreadManager.cpp:819
	virtual int ThreadGameRegister(unsigned int);

	// JuiceThreadManager.cpp:770
	virtual void SendCallStacks();

	// JuiceThreadManager.cpp:887
	virtual void InflictHang();

	// JuiceThreadManager.cpp:872
	virtual void HookHit();

	// JuiceThreadManager.cpp:698
	virtual int GetMonkeyYieldValue();

	// JuiceThreadManager.cpp:721
	virtual bool GetThreadMonkeyState();

	// JuiceThreadManager.cpp:614
	virtual int GetDelayForThread(unsigned int);

	// JuiceThreadManager.cpp:418
	virtual bool ThreadMonitorEnabled();

	// JuiceThreadManager.cpp:599
	virtual void CheckThreadsForHangs();

	// JuiceThreadManager.cpp:439
	virtual void SetHangTimeout(unsigned int);

	// JuiceThreadManager.cpp:451
	virtual void SetHangTimeout(unsigned int, unsigned int);

	// JuiceThreadManager.cpp:476
	virtual void SetThreadName(unsigned int, char *);

	// JuiceThreadManager.cpp:514
	virtual void NewThreadMonitor();

	// JuiceThreadManager.cpp:294
	virtual void RegisterThread();

	// JuiceThreadManager.cpp:326
	virtual void ReleaseThread();

	// JuiceThreadManager.cpp:406
	virtual void ThreadInfoUpdate();

	// JuiceThreadManager.cpp:378
	void DecrementThreadCount();

	// JuiceThreadManager.cpp:386
	void PauseThread(unsigned int);

	// JuiceThreadManager.cpp:396
	void ContinueThread(unsigned int);

	// JuiceThreadManager.cpp:263
	ThreadInfoNode * GetThreadInfo(unsigned int);

	// JuiceThreadManager.cpp:463
	unsigned int CurrentThreadID();

	// JuiceThreadManager.cpp:589
	unsigned int GetJuiceCycle();

	// JuiceThreadManager.cpp:1066
	unsigned int GetOSThreadID();

private:
	// JuiceThreadManager.cpp:360
	void ReleaseAllThreads();

	// JuiceThreadManager.cpp:373
	unsigned int GetThreadCount();

	// JuiceThreadManager.cpp:283
	ThreadInfoNode * GetThreadAtIndex(unsigned int);

	// JuiceThreadManager.cpp:247
	ThreadInfoNode * GetEmptyThreadInfo();

	// JuiceThreadManager.cpp:627
	void CheckForHang(unsigned int);

	// JuiceThreadManager.cpp:594
	void SetJuiceCycle(unsigned int);

	// JuiceThreadManager.cpp:903
	void UpdateThreadInfo();

	// JuiceThreadManager.cpp:894
	unsigned int GetActivityCount(unsigned int);

	// JuiceThreadManager.cpp:862
	void RegisterThreadsWithServer();

	// JuiceThreadManager.cpp:837
	void RegisterThreadWithServer(unsigned int);

	// JuiceThreadManager.cpp:549
	void ThreadManager();

	// JuiceThreadManager.h:131
	virtual void ~ThreadManager();

}

// JuiceThreadManager.h:135
extern const int mkThreadBufferSize = 64;

// JuiceThreadManager.h:136
extern const unsigned int mkRegisteredThreadMax = 24;

// JuiceThreadManager.h:142
extern const int mkDefualtThreadCheckpointInterval = 500;

// JuiceThreadManager.h:143
extern const int mkDefaultJuiceUpdateFrequencyMS = 5;

