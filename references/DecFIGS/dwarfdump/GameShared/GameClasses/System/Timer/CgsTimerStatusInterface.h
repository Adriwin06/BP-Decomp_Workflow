// CgsTimerStatusInterface.h:44
struct CgsSystem::TimerStatus {
private:
	// CgsTimerStatusInterface.h:67
	int32_t miFrameCount;

	// CgsTimerStatusInterface.h:68
	float32_t mfBaseTimeStep;

	// CgsTimerStatusInterface.h:69
	float32_t mfTimeStepMultiplier;

	// CgsTimerStatusInterface.h:70
	bool mbRunning;

	// CgsTimerStatusInterface.h:71
	Time mTime;

public:
	// CgsTimerStatusInterface.h:48
	int32_t GetFrameCount() const;

	// CgsTimerStatusInterface.h:51
	float32_t GetBaseTimeStep() const;

	// CgsTimerStatusInterface.h:54
	float32_t GetTimeStepMultiplier() const;

	// CgsTimerStatusInterface.h:57
	float32_t GetCurrentTimeStep() const;

	// CgsTimerStatusInterface.h:60
	bool IsRunning() const;

	// CgsTimerStatusInterface.h:63
	Time GetTime() const;

private:
	// CgsTimerStatusInterface.h:74
	void Clear();

	// CgsTimerStatusInterface.h:77
	TimerStatus & operator=(const TimerStatus &);

}

// CgsTimerStatusInterface.h:91
struct CgsSystem::TimerStatusInterface {
private:
	// CgsTimerStatusInterface.h:123
	TimerStatus mGameTimerStatus;

	// CgsTimerStatusInterface.h:124
	TimerStatus mSimTimerStatus;

public:
	// CgsTimerStatusInterface.h:95
	void Clear();

	// CgsTimerStatusInterface.h:98
	TimerStatusInterface & operator=(const TimerStatusInterface &);

	// CgsTimerStatusInterface.h:101
	const TimerStatus * GetGameTimerStatus() const;

	// CgsTimerStatusInterface.h:104
	const TimerStatus * GetSimTimerStatus() const;

	// CgsTimerStatusInterface.h:107
	TimerStatus * GetGameTimerStatus();

	// CgsTimerStatusInterface.h:110
	TimerStatus * GetSimTimerStatus();

	// CgsTimerStatusInterface.h:113
	bool IsGameTimerFrequency50Hz() const;

	// CgsTimerStatusInterface.h:116
	bool IsSimTimerFrequency50Hz() const;

	// CgsTimerStatusInterface.h:119
	void StoreTimers(Timer *, Timer *);

}

