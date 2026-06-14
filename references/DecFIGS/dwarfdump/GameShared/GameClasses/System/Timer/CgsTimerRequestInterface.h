// CgsTimerRequestInterface.h:42
struct CgsSystem::TimerRequests {
private:
	// CgsTimerRequestInterface.h:81
	uint32_t muFlags;

	// CgsTimerRequestInterface.h:82
	float32_t mfMultiplier;

public:
	// CgsTimerRequestInterface.h:53
	void Clear();

	// CgsTimerRequestInterface.h:56
	void Start();

	// CgsTimerRequestInterface.h:59
	void Stop();

	// CgsTimerRequestInterface.h:62
	void SetTimestepMultiplier(float32_t);

	// CgsTimerRequestInterface.h:65
	bool IsStartRequested() const;

	// CgsTimerRequestInterface.h:68
	bool IsStopRequested() const;

	// CgsTimerRequestInterface.h:71
	bool IsMultiplierRequested() const;

	// CgsTimerRequestInterface.h:74
	float32_t GetMultiplier() const;

	// CgsTimerRequestInterface.h:77
	void Append(const TimerRequests &);

}

// CgsTimerRequestInterface.h:95
struct CgsSystem::TimerRequestInterface {
private:
	// CgsTimerRequestInterface.h:120
	TimerRequests mGameTimer;

	// CgsTimerRequestInterface.h:121
	TimerRequests mSimTimer;

public:
	// CgsTimerRequestInterface.h:99
	void Clear();

	// CgsTimerRequestInterface.h:102
	const TimerRequests * GetGameTimerRequests() const;

	// CgsTimerRequestInterface.h:105
	TimerRequests * GetGameTimerRequests();

	// CgsTimerRequestInterface.h:108
	const TimerRequests * GetSimTimerRequests() const;

	// CgsTimerRequestInterface.h:111
	TimerRequests * GetSimTimerRequests();

	// CgsTimerRequestInterface.h:114
	void Append(const TimerRequestInterface &);

	// CgsTimerRequestInterface.h:117
	void ApplyToTimers(Timer *, Timer *) const;

}

