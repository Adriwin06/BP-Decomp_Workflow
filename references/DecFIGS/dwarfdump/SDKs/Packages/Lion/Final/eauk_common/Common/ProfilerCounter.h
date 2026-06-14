// ProfilerCounter.h:16
struct sProfilerCounter {
	// ProfilerCounter.h:28
	U32 mAverage;

	// ProfilerCounter.h:29
	U32 mBudget;

	// ProfilerCounter.h:30
	U32 mHighTide;

	// ProfilerCounter.h:31
	U32 mHits;

	// ProfilerCounter.h:32
	U32 mStamp;

	// ProfilerCounter.h:33
	U32 mPauseStamp;

	// ProfilerCounter.h:34
	U32 mState;

	// ProfilerCounter.h:35
	U32 mTotal;

	// ProfilerCounter.h:36
	U32 mValue;

public:
	// ProfilerCounter.h:17
	void Reset();

	// ProfilerCounter.h:18
	void Init();

	// ProfilerCounter.h:19
	void Start(U32);

	// ProfilerCounter.h:20
	void Stop(U32);

	// ProfilerCounter.h:21
	void Pause(U32);

	// ProfilerCounter.h:22
	void UnPause(U32);

	// ProfilerCounter.h:23
	void Show() const;

	// ProfilerCounter.h:24
	void Update(U32);

	// ProfilerCounter.h:26
	sProfilerCounter operator+(const sProfilerCounter &) const;

}

