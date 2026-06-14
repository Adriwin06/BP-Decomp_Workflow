// BrnBoostBurnout2.h:46
struct BrnWorld::BoostBurnout2 : public BrnWorld::BoostStrategy {
private:
	// BrnBoostBurnout2.h:132
	float32_t mfCrashDecrease;

	// BrnBoostBurnout2.h:134
	float32_t mfHiddenBoost;

	// BrnBoostBurnout2.h:135
	bool mbBoostInterrupted;

	// BrnBoostBurnout2.h:137
	int32_t miChainSize;

	// BrnBoostBurnout2.h:139
	float32_t mfTimeBasedBoostingBonus;

	// BrnBoostBurnout2.h:140
	float32_t mfContinuousBoostingTimeAdd;

	// BrnBoostBurnout2.h:142
	float32_t mfTimeBoosting;

	// BrnBoostBurnout2.cpp:32
	extern const float32_t KF_DANGER_BOOST_MODIFIER_NEAR_MISS;

	// BrnBoostBurnout2.cpp:33
	extern const float32_t KF_DANGER_BOOST_MODIFIER_CRASH_ESCAPE;

	// BrnBoostBurnout2.cpp:34
	extern const float32_t KF_DANGER_BOOST_MODIFIER_ONCOMING;

	// BrnBoostBurnout2.cpp:37
	extern const float32_t KF_DANGER_BOOST_MODIFIERS_PERCENTAGE;

	// BrnBoostBurnout2.cpp:40
	extern const float32_t KF_DANGER_BOOST_SPEED_THRESH_HOLD;

	// BrnBoostBurnout2.cpp:41
	extern const float32_t KF_DANGER_BOOST_PROXIMITY_THRESH_HOLD;

public:
	// BrnBoostBurnout2.cpp:61
	virtual bool Prepare();

	// BrnBoostBurnout2.cpp:133
	virtual void ApplyUpdate(float32_t);

	// BrnBoostBurnout2.cpp:667
	virtual void OnEnterInfiniteBoost();

	// BrnBoostBurnout2.cpp:410
	virtual void OnTakedown();

	// BrnBoostBurnout2.cpp:454
	virtual void OnNearMiss(BrnWorld::ENearMissType);

	// BrnBoostBurnout2.cpp:430
	virtual void OnWrecked(bool);

	// BrnBoostBurnout2.cpp:350
	virtual void OnStuntCompletion(BrnGameState::StuntElementType);

	// BrnBoostBurnout2.cpp:580
	virtual void OnCrash();

	// BrnBoostBurnout2.cpp:617
	virtual void OnSlammed();

	// BrnBoostBurnout2.cpp:596
	virtual void OnPropHit();

	// BrnBoostBurnout2.cpp:396
	virtual void OnTakenDownByAIOrPlayer();

	// BrnBoostBurnout2.cpp:503
	virtual void OnPlayerAttacksRival(BrnPhysics::Vehicle::EImpactType);

	// BrnBoostBurnout2.cpp:555
	virtual void OnShortcut();

	// BrnBoostBurnout2.cpp:567
	virtual void OnTrafficCheck();

	// BrnBoostBurnout2.cpp:681
	virtual void OnStartCrashPlay();

	// BrnBoostBurnout2.cpp:695
	virtual void OnEndCrashPlay();

	// BrnBoostBurnout2.cpp:654
	virtual const char * GetName() const;

	// BrnBoostBurnout2.cpp:633
	virtual void OnDriveThru();

	// BrnBoostBurnout2.cpp:722
	virtual bool AreWeAllowedToBoost();

	// BrnBoostBurnout2.cpp:709
	virtual void RemoveAllBoostAndChunks();

	// BrnBoostBurnout2.cpp:809
	virtual bool GetIsChainNotifyPending(uint32_t *);

	// BrnBoostBurnout2.cpp:770
	virtual void UpdateStuntBoost(const CompletedStuntAction *);

	// BrnBoostBurnout2.cpp:757
	virtual bool IsBoostFull() const;

}

// BrnBoostBurnout2.h:144
extern const float32_t KF_DANGER_BOOST_MODIFIER_NEAR_MISS;

// BrnBoostBurnout2.h:145
extern const float32_t KF_DANGER_BOOST_MODIFIER_CRASH_ESCAPE;

// BrnBoostBurnout2.h:146
extern const float32_t KF_DANGER_BOOST_MODIFIER_ONCOMING;

// BrnBoostBurnout2.h:149
extern const float32_t KF_DANGER_BOOST_MODIFIERS_PERCENTAGE;

// BrnBoostBurnout2.h:152
extern const float32_t KF_DANGER_BOOST_SPEED_THRESH_HOLD;

// BrnBoostBurnout2.h:153
extern const float32_t KF_DANGER_BOOST_PROXIMITY_THRESH_HOLD;

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// Declaration
	struct BoostBurnout2 {
	private:
		// BrnBoostBurnout2.h:144
		extern const float32_t KF_DANGER_BOOST_MODIFIER_NEAR_MISS;

		// BrnBoostBurnout2.h:145
		extern const float32_t KF_DANGER_BOOST_MODIFIER_CRASH_ESCAPE;

		// BrnBoostBurnout2.h:146
		extern const float32_t KF_DANGER_BOOST_MODIFIER_ONCOMING;

		// BrnBoostBurnout2.h:149
		extern const float32_t KF_DANGER_BOOST_MODIFIERS_PERCENTAGE;

		// BrnBoostBurnout2.h:152
		extern const float32_t KF_DANGER_BOOST_SPEED_THRESH_HOLD;

		// BrnBoostBurnout2.h:153
		extern const float32_t KF_DANGER_BOOST_PROXIMITY_THRESH_HOLD;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// Declaration
	struct BoostBurnout2 {
	public:
		BoostBurnout2();

	private:
		// BrnBoostBurnout2.h:144
		extern const float32_t KF_DANGER_BOOST_MODIFIER_NEAR_MISS;

		// BrnBoostBurnout2.h:145
		extern const float32_t KF_DANGER_BOOST_MODIFIER_CRASH_ESCAPE;

		// BrnBoostBurnout2.h:146
		extern const float32_t KF_DANGER_BOOST_MODIFIER_ONCOMING;

		// BrnBoostBurnout2.h:149
		extern const float32_t KF_DANGER_BOOST_MODIFIERS_PERCENTAGE;

		// BrnBoostBurnout2.h:152
		extern const float32_t KF_DANGER_BOOST_SPEED_THRESH_HOLD;

		// BrnBoostBurnout2.h:153
		extern const float32_t KF_DANGER_BOOST_PROXIMITY_THRESH_HOLD;

	}

}

// BrnBoostBurnout2.h:46
void BrnWorld::BoostBurnout2::BoostBurnout2() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

