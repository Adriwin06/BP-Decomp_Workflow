// BrnRaceBalancingManager.h:48
struct BrnAI::RaceBalancingManager {
private:
	// BrnRaceBalancingManager.h:102
	extern const float32_t KF_DEFAULT_SPEED;

	// BrnRaceBalancingManager.h:103
	extern const float32_t KF_TARGET_TIME_TOLERANCE;

	// BrnRaceBalancingManager.h:104
	extern const float32_t KF_SPEED_DIFFERENCE_MULTIPLIER;

	// BrnRaceBalancingManager.h:105
	extern const float32_t KF_MAX_SPEED_MULTIPLIER_IN_RANGE;

	// BrnRaceBalancingManager.h:106
	extern const float32_t KF_MIN_SPEED_MULTIPLIER_IN_RANGE;

	// BrnRaceBalancingManager.h:107
	extern const float32_t KF_MAX_SPEED_MULTIPLIER_OUT_OF_RANGE;

	// BrnRaceBalancingManager.h:108
	extern const float32_t KF_MIN_SPEED_MULTIPLIER_OUT_OF_RANGE;

	// BrnRaceBalancingManager.h:109
	extern const float32_t KF_PLAYER_CRASHING_TIME_FACTOR;

	// BrnRaceBalancingManager.h:123
	Array<BrnAI::RaceBalancingGraph,7u> maRaceBalancingGraphs;

	// BrnRaceBalancingManager.h:124
	Array<BrnAI::RaceBalancingRoute,7u> maRaceBalancingRoutes;

	// BrnRaceBalancingManager.h:125
	float32_t mfRaceTime;

	// BrnRaceBalancingManager.h:126
	int32_t miCheckpointCount;

	// BrnRaceBalancingManager.h:127
	bool mbInRace;

	// BrnRaceBalancingManager.h:128
	bool mbOnStartLine;

	// BrnRaceBalancingManager.h:131
	BrnAI::RaceBalancingDebugComponent mRaceBalancingDebugComponent;

public:
	// BrnRaceBalancingManager.h:56
	void Construct(BrnAI::AIModule *);

	// BrnRaceBalancingManager.h:61
	void OnRaceStart(const Array<BrnAI::RaceBalancingGraph,7u> *, int32_t);

	// BrnRaceBalancingManager.h:64
	void OnRaceStartPlaying();

	// BrnRaceBalancingManager.h:67
	void OnRaceEnd();

	// BrnRaceBalancingManager.h:72
	void Update(const AICar *, float32_t);

	// BrnRaceBalancingManager.h:77
	void UpdateOpponentRoute(const AICar *, const AISectionsData *);

	// BrnRaceBalancingManager.h:82
	void OnOpponentReachedCheckpoint(const AICar *, int32_t);

	// BrnRaceBalancingManager.h:86
	void OnOpponentTakenDown(const AICar *);

	// BrnRaceBalancingManager.h:92
	float32_t ComputeTargetSpeed(const AICar *, const AISectionsData *, bool) const;

	// BrnRaceBalancingManager.h:97
	void CalculateScheduleOffset(const AICar *, float32_t *) const;

private:
	// BrnRaceBalancingManager.h:115
	float32_t ComputeTargetSpeed(BrnAI::GraphType, const AICar *, const AISectionsData *) const;

	// BrnRaceBalancingManager.h:121
	float32_t ComputeParSpeed(BrnAI::GraphType, const AICar *, const AISectionsData *) const;

}

// BrnRaceBalancingManager.h:102
extern const float32_t KF_DEFAULT_SPEED;

// BrnRaceBalancingManager.h:103
extern const float32_t KF_TARGET_TIME_TOLERANCE;

// BrnRaceBalancingManager.h:104
extern const float32_t KF_SPEED_DIFFERENCE_MULTIPLIER;

// BrnRaceBalancingManager.h:105
extern const float32_t KF_MAX_SPEED_MULTIPLIER_IN_RANGE;

// BrnRaceBalancingManager.h:106
extern const float32_t KF_MIN_SPEED_MULTIPLIER_IN_RANGE;

// BrnRaceBalancingManager.h:107
extern const float32_t KF_MAX_SPEED_MULTIPLIER_OUT_OF_RANGE;

// BrnRaceBalancingManager.h:108
extern const float32_t KF_MIN_SPEED_MULTIPLIER_OUT_OF_RANGE;

// BrnRaceBalancingManager.h:109
extern const float32_t KF_PLAYER_CRASHING_TIME_FACTOR;

