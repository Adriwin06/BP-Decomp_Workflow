// CgsTimer.h:45
struct CgsSystem::Timer {
private:
	// CgsTimer.h:112
	int32_t miFrameCount;

	// CgsTimer.h:113
	int32_t miSecondCount;

	// CgsTimer.h:114
	float32_t mfFraction;

	// CgsTimer.h:116
	float32_t mfBaseTimeStep;

	// CgsTimer.h:117
	float32_t mfTimeStepMultiplier;

	// CgsTimer.h:118
	float32_t mfRequestedTimeStepMultiplier;

	// CgsTimer.h:120
	bool mbRunning;

public:
	// CgsTimer.h:49
	void Construct();

	// CgsTimer.h:54
	bool Prepare(float32_t);

	// CgsTimer.h:65
	bool Prepare(int32_t, int32_t, float32_t, float32_t, float32_t, float32_t, bool);

	// CgsTimer.h:69
	void Update();

	// CgsTimer.h:72
	void Reset();

	// CgsTimer.h:75
	void Start();

	// CgsTimer.h:78
	void Stop();

	// CgsTimer.h:82
	float32_t GetTime();

	// CgsTimer.h:86
	int32_t GetFrameCount();

	// CgsTimer.h:90
	float32_t GetBaseTimeStep();

	// CgsTimer.h:94
	float32_t GetTimeStep();

	// CgsTimer.h:104
	void GetState(int32_t *, int32_t *, float32_t *, float32_t *, float32_t *, float32_t *, bool *);

	// CgsTimer.h:109
	void SetTimeStepMultiplier(float32_t);

}

