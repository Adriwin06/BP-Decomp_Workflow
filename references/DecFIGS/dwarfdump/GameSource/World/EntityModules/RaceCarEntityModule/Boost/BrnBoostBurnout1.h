// BrnBoostBurnout1.h:46
struct BrnWorld::BoostBurnout1 : public BrnWorld::BoostStrategy {
private:
	// BrnBoostBurnout1.h:116
	float32_t mfCrashDecrease;

	// BrnBoostBurnout1.h:118
	float32_t mfHiddenBoost;

	// BrnBoostBurnout1.h:119
	float32_t mfTimeBoosting;

	// BrnBoostBurnout1.h:121
	bool mbBoostActive;

	// BrnBoostBurnout1.h:122
	bool mbBoostInterrupted;

public:
	// BrnBoostBurnout1.cpp:45
	virtual bool Prepare();

	// BrnBoostBurnout1.cpp:72
	virtual void ApplyUpdate(float32_t);

	// BrnBoostBurnout1.cpp:331
	virtual void OnEnterInfiniteBoost();

	// BrnBoostBurnout1.cpp:241
	virtual void OnTakedown();

	// BrnBoostBurnout1.cpp:254
	virtual void OnCrash();

	// BrnBoostBurnout1.cpp:273
	virtual void OnSlammed();

	// BrnBoostBurnout1.cpp:293
	virtual void OnPlayerAttacksRival(BrnPhysics::Vehicle::EImpactType);

	// BrnBoostBurnout1.cpp:190
	virtual void OnShortcut();

	// BrnBoostBurnout1.cpp:178
	virtual void OnWrecked(bool);

	// BrnBoostBurnout1.cpp:203
	virtual void OnNearMiss(BrnWorld::ENearMissType);

	// BrnBoostBurnout1.cpp:215
	virtual void OnStuntCompletion(BrnGameState::StuntElementType);

	// BrnBoostBurnout1.cpp:227
	virtual void OnTrafficCheck();

	// BrnBoostBurnout1.cpp:345
	virtual void OnStartCrashPlay();

	// BrnBoostBurnout1.cpp:165
	virtual void OnTakenDownByAIOrPlayer();

	// BrnBoostBurnout1.cpp:359
	virtual void OnEndCrashPlay();

	// BrnBoostBurnout1.cpp:319
	virtual const char * GetName() const;

	// BrnBoostBurnout1.cpp:306
	virtual void OnDriveThru();

	// BrnBoostBurnout1.cpp:386
	virtual bool AreWeAllowedToBoost();

	// BrnBoostBurnout1.cpp:373
	virtual void RemoveAllBoostAndChunks();

}

