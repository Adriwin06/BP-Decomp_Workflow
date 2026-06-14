// BrnBoostBurnout4.h:46
struct BrnWorld::BoostBurnout4 : public BrnWorld::BoostStrategy {
private:
	// BrnBoostBurnout4.h:117
	extern const int32_t KI_BOOST_LEVELS = 5;

	// BrnBoostBurnout4.h:119
	int32_t miBoostLevel;

	// BrnBoostBurnout4.h:120
	float32_t mfTimeBoosting;

public:
	// BrnBoostBurnout4.cpp:41
	virtual bool Prepare();

	// BrnBoostBurnout4.cpp:94
	virtual void ApplyUpdate(float32_t);

	// BrnBoostBurnout4.cpp:66
	virtual void OnWrecked(bool);

	// BrnBoostBurnout4.cpp:343
	virtual void OnEnterInfiniteBoost();

	// BrnBoostBurnout4.cpp:158
	virtual void OnTakedown();

	// BrnBoostBurnout4.cpp:179
	virtual void OnNearMiss(BrnWorld::ENearMissType);

	// BrnBoostBurnout4.cpp:193
	virtual void OnCrash();

	// BrnBoostBurnout4.cpp:256
	virtual void OnSlammed();

	// BrnBoostBurnout4.cpp:216
	virtual void OnShortcut();

	// BrnBoostBurnout4.cpp:228
	virtual void OnTrafficCheck();

	// BrnBoostBurnout4.cpp:242
	virtual void OnPlayerAttacksRival(BrnPhysics::Vehicle::EImpactType);

	// BrnBoostBurnout4.cpp:357
	virtual void OnStartCrashPlay();

	// BrnBoostBurnout4.cpp:79
	virtual void OnTakenDownByAIOrPlayer();

	// BrnBoostBurnout4.cpp:371
	virtual void OnEndCrashPlay();

	// BrnBoostBurnout4.cpp:283
	virtual const char * GetName() const;

	// BrnBoostBurnout4.cpp:269
	virtual void OnDriveThru();

	// BrnBoostBurnout4.cpp:401
	virtual bool AreWeAllowedToBoost();

	// BrnBoostBurnout4.cpp:385
	virtual void RemoveAllBoostAndChunks();

	// BrnBoostBurnout4.cpp:299
	virtual void UpdateMaxBoost(bool);

}

// BrnBoostBurnout4.h:117
extern const int32_t KI_BOOST_LEVELS = 5;

