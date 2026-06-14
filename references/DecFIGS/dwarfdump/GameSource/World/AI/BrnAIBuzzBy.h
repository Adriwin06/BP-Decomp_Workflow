// BrnAIBuzzBy.h:24
struct BrnAI::BuzzBy {
private:
	// BrnAIBuzzBy.h:115
	extern Random mRandom;

	// BrnAIBuzzBy.h:117
	float32_t mfTimeInFreeRoam;

	// BrnAIBuzzBy.h:119
	bool mbIsInGameMode;

	// BrnAIBuzzBy.h:120
	bool mbIsInJunkyard;

	// BrnAIBuzzBy.h:121
	bool mbResetBuzzTimers;

	// BrnAIBuzzBy.h:123
	AICar * mpGlobalRaceCars;

	// BrnAIBuzzBy.h:125
	EGlobalRaceCarIndex[35] maeActiveList;

	// BrnAIBuzzBy.h:126
	float32_t[35] mafBuzzTimes;

	// BrnAIBuzzBy.h:127
	int32_t miNumActiveCars;

	// BrnAIBuzzBy.h:128
	ResetOnTrackManager * mpResetOnTrackManager;

	// BrnAIBuzzBy.h:129
	int32_t miCarsAwaitingCollection;

public:
	// BrnAIBuzzBy.h:34
	void Update(float32_t, AICar *, AICar *, bool *);

	// BrnAIBuzzBy.h:39
	void Prepare(AICar *, ResetOnTrackManager *);

	// BrnAIBuzzBy.h:43
	void SetInGameMode(bool);

	// BrnAIBuzzBy.h:47
	void SetInJunkyard(bool);

	// BrnAIBuzzBy.h:50
	void DrawBuzzTimer();

	// BrnAIBuzzBy.h:59
	void MaintainAheadOrBehind(ResetOnTrackRequest *, Vector3, Vector3, Vector3, Vector3, Vector3);

	// BrnAIBuzzBy.h:63
	void SetCarsAwaitingCollection(int32_t);

	// BrnAIBuzzBy.h:66
	void AddCarAwaitingCollection();

	// BrnAIBuzzBy.h:69
	void ClearCarsAwaitingCollection();

	// BrnAIBuzzBy.h:73
	bool IsPositionInNoBuzzZone(Vector3);

	// BrnAIBuzzBy.h:76
	void RequestResetBuzzTimers();

private:
	// BrnAIBuzzBy.h:84
	void ChooseAheadOrBehind(ResetOnTrackRequest *, float32_t, EGlobalRaceCarIndex);

	// BrnAIBuzzBy.h:88
	void RunFreeBurnTimer(float32_t);

	// BrnAIBuzzBy.h:92
	bool IsPlayerBuzzable(AICar *);

	// BrnAIBuzzBy.h:97
	void StartABuzzBy(const AICar *, EGlobalRaceCarIndex);

	// BrnAIBuzzBy.h:101
	bool AICarCanBuzz(const AICar *);

	// BrnAIBuzzBy.h:106
	bool BuzzOccured(const AICar *, const AICar *);

	// BrnAIBuzzBy.h:109
	void ResetActiveList();

	// BrnAIBuzzBy.h:113
	float32_t GetBuzzFrequency(const AICar *);

}

