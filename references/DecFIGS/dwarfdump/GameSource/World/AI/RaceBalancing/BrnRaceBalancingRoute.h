// BrnRaceBalancingRoute.h:43
struct BrnAI::RaceBalancingRoute {
private:
	// BrnRaceBalancingRoute.h:106
	extern const float32_t KF_TAKEN_DOWN_TIME_PENALTY;

	// BrnRaceBalancingRoute.h:108
	float32_t[2][320] mafTimes;

	// BrnRaceBalancingRoute.h:109
	int32_t miTimeCount;

	// BrnRaceBalancingRoute.h:110
	int32_t miTakenDownCount;

	// BrnRaceBalancingRoute.h:111
	int32_t miCurrentCheckpointIndex;

	// BrnRaceBalancingRoute.h:112
	float32_t mfDistance;

	// BrnRaceBalancingRoute.h:113
	bool mbValid;

public:
	// BrnRaceBalancingRoute.h:48
	void Construct();

	// BrnRaceBalancingRoute.h:56
	bool Prepare(Vector3, const AISectionsData *, const RaceBalancingGraph *, const Route *, int32_t);

	// BrnRaceBalancingRoute.h:63
	bool Recalculate(const AISectionsData *, const RaceBalancingGraph *, const Route *, int32_t);

	// BrnRaceBalancingRoute.h:68
	void OnCheckpoint(int32_t, float32_t);

	// BrnRaceBalancingRoute.h:71
	void OnTakenDown();

	// BrnRaceBalancingRoute.h:76
	float32_t ComputeRaceCompletionRatio(float32_t, int32_t) const;

	// BrnRaceBalancingRoute.h:81
	float32_t GetTime(BrnAI::GraphType, int32_t) const;

	// BrnRaceBalancingRoute.h:84
	int32_t GetTimeCount() const;

	// BrnRaceBalancingRoute.h:88
	float32_t GetTotalTime(BrnAI::GraphType) const;

	// BrnRaceBalancingRoute.h:91
	bool IsValid() const;

	// BrnRaceBalancingRoute.h:97
	float32_t GetAISectionSpeed(const AISection *, const AISectionsData *, float32_t);

	// BrnRaceBalancingRoute.h:100
	int32_t GetCurrentCheckpointIndex() const;

	// BrnRaceBalancingRoute.h:103
	float32_t GetDistance() const;

}

// BrnRaceBalancingRoute.h:106
extern const float32_t KF_TAKEN_DOWN_TIME_PENALTY;

