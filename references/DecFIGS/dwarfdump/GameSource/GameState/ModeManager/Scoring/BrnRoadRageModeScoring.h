// BrnRoadRageModeScoring.h:47
struct BrnGameState::RoadRageModeScoring {
private:
	// BrnRoadRageModeScoring.h:112
	int32_t miNumTakedownsAchieved;

	// BrnRoadRageModeScoring.h:113
	int32_t miNumTakedownsAchievedForNextExtention;

	// BrnRoadRageModeScoring.h:114
	int16_t muRoadRageTriggerExtension;

	// BrnRoadRageModeScoring.h:115
	uint16_t muRoadRageExtensionTime;

	// BrnRoadRageModeScoring.h:116
	int32_t miTargetNumTakedowns;

	// BrnRoadRageModeScoring.h:117
	int32_t miNextTimeIncreaseIndex;

	// BrnRoadRageModeScoring.h:119
	bool mbDamageCriticalMessageNeedToBeSent;

	// BrnRoadRageModeScoring.h:120
	bool mbPlayerDamageCritical;

	// BrnRoadRageModeScoring.h:121
	bool mbPlayerCarDestroyed;

	// BrnRoadRageModeScoring.h:122
	bool mbGameModeActive;

public:
	// BrnRoadRageModeScoring.h:52
	void Construct();

	// BrnRoadRageModeScoring.h:58
	bool Prepare(int32_t, uint16_t);

	// BrnRoadRageModeScoring.h:64
	void Update(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, float32_t);

	// BrnRoadRageModeScoring.h:68
	bool Release();

	// BrnRoadRageModeScoring.h:72
	void Destruct();

	// BrnRoadRageModeScoring.h:76
	void ClearData();

	// BrnRoadRageModeScoring.h:83
	void IncrementPlayerNumTakedowns(BrnGameState::ScoringSystem *, Time, InputBuffer::GameActionQueue *);

	// BrnRoadRageModeScoring.h:86
	int32_t GetNumTakedownsAchieved() const;

	// BrnRoadRageModeScoring.h:89
	int32_t GetTargetNumTakedowns() const;

	// BrnRoadRageModeScoring.h:92
	bool PlayerCarWasDestroyed() const;

	// BrnRoadRageModeScoring.h:95
	bool DoesDamageCriticalMessageNeedToBeSent() const;

	// BrnRoadRageModeScoring.h:98
	void ResetDamageCriticalMessageFlag();

	// BrnRoadRageModeScoring.h:101
	bool IsActive();

	// BrnRoadRageModeScoring.h:105
	void SetTakeDownTarget(int32_t);

	// BrnRoadRageModeScoring.h:108
	bool HasBeatenRoadRageTarget() const;

}

// BrnRoadRageModeScoring.h:47
struct BrnGameState::RoadRageModeScoring {
private:
	// BrnRoadRageModeScoring.h:112
	int32_t miNumTakedownsAchieved;

	// BrnRoadRageModeScoring.h:113
	int32_t miNumTakedownsAchievedForNextExtention;

	// BrnRoadRageModeScoring.h:114
	int16_t muRoadRageTriggerExtension;

	// BrnRoadRageModeScoring.h:115
	uint16_t muRoadRageExtensionTime;

	// BrnRoadRageModeScoring.h:116
	int32_t miTargetNumTakedowns;

	// BrnRoadRageModeScoring.h:117
	int32_t miNextTimeIncreaseIndex;

	// BrnRoadRageModeScoring.h:119
	bool mbDamageCriticalMessageNeedToBeSent;

	// BrnRoadRageModeScoring.h:120
	bool mbPlayerDamageCritical;

	// BrnRoadRageModeScoring.h:121
	bool mbPlayerCarDestroyed;

	// BrnRoadRageModeScoring.h:122
	bool mbGameModeActive;

public:
	// BrnRoadRageModeScoring.h:52
	void Construct();

	// BrnRoadRageModeScoring.h:58
	bool Prepare(int32_t, uint16_t);

	// BrnRoadRageModeScoring.h:64
	void Update(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, float32_t);

	// BrnRoadRageModeScoring.h:68
	bool Release();

	// BrnRoadRageModeScoring.h:72
	void Destruct();

	// BrnRoadRageModeScoring.h:76
	void ClearData();

	// BrnRoadRageModeScoring.h:83
	void IncrementPlayerNumTakedowns(BrnGameState::ScoringSystem *, Time, OutputBuffer::GameActionQueue *);

	// BrnRoadRageModeScoring.h:86
	int32_t GetNumTakedownsAchieved() const;

	// BrnRoadRageModeScoring.h:89
	int32_t GetTargetNumTakedowns() const;

	// BrnRoadRageModeScoring.h:92
	bool PlayerCarWasDestroyed() const;

	// BrnRoadRageModeScoring.h:95
	bool DoesDamageCriticalMessageNeedToBeSent() const;

	// BrnRoadRageModeScoring.h:98
	void ResetDamageCriticalMessageFlag();

	// BrnRoadRageModeScoring.h:101
	bool IsActive();

	// BrnRoadRageModeScoring.h:105
	void SetTakeDownTarget(int32_t);

	// BrnRoadRageModeScoring.h:108
	bool HasBeatenRoadRageTarget() const;

}

