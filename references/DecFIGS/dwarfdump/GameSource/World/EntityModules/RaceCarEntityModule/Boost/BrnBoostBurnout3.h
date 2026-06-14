// BrnBoostBurnout3.h:46
struct BrnWorld::BoostBurnout3 : public BrnWorld::BoostStrategy {
private:
	// BrnBoostBurnout3.h:134
	extern const int32_t KI_BOOST_LEVELS = 3;

	// BrnBoostBurnout3.cpp:41
	extern const float KF_BOOST_CHUNK_AMOUNT;

	// BrnBoostBurnout3.cpp:26
	extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_IMPACT_SLAM;

	// BrnBoostBurnout3.cpp:27
	extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_IMPACT_SHUNT;

	// BrnBoostBurnout3.cpp:28
	extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_IMPACT_TRADING_PAINT;

	// BrnBoostBurnout3.cpp:29
	extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_IMPACT_NUDGE;

	// BrnBoostBurnout3.cpp:31
	extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_IMPACT_GRINDRUB;

	// BrnBoostBurnout3.cpp:30
	extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_TRAFFIC_CHECK;

	// BrnBoostBurnout3.cpp:32
	extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_TAILGATE;

	// BrnBoostBurnout3.cpp:35
	extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_DOWNSCALER;

	// BrnBoostBurnout3.cpp:37
	extern const float32_t KF_BOOST_LOSS_SCALE;

	// BrnBoostBurnout3.cpp:38
	extern const float32_t KF_MIN_BOOST_LOSS_SCALE;

	// BrnBoostBurnout3.h:152
	float32_t mfBoostChunkAmount;

	// BrnBoostBurnout3.h:153
	int32_t miBoostLevel;

	// BrnBoostBurnout3.h:154
	int32_t miOldBoostLevel;

	// BrnBoostBurnout3.h:155
	float32_t mfTimeBoosting;

public:
	// BrnBoostBurnout3.cpp:60
	virtual bool Prepare();

	// BrnBoostBurnout3.cpp:134
	virtual void ApplyUpdate(float32_t);

	// BrnBoostBurnout3.cpp:645
	virtual void OnEnterInfiniteBoost();

	// BrnBoostBurnout3.cpp:273
	virtual void OnTakedown();

	// BrnBoostBurnout3.cpp:260
	virtual void OnPropHit();

	// BrnBoostBurnout3.cpp:294
	virtual void OnNearMiss(BrnWorld::ENearMissType);

	// BrnBoostBurnout3.cpp:368
	virtual void OnStuntCompletion(BrnGameState::StuntElementType);

	// BrnBoostBurnout3.cpp:408
	virtual void OnCrash();

	// BrnBoostBurnout3.cpp:490
	virtual void OnPlayerAttacksRival(BrnPhysics::Vehicle::EImpactType);

	// BrnBoostBurnout3.cpp:548
	virtual void OnSlammed();

	// BrnBoostBurnout3.cpp:465
	virtual void OnShortcut();

	// BrnBoostBurnout3.cpp:477
	virtual void OnTrafficCheck();

	// BrnBoostBurnout3.cpp:659
	virtual void OnStartCrashPlay();

	// BrnBoostBurnout3.cpp:445
	virtual void OnWrecked(bool);

	// BrnBoostBurnout3.cpp:675
	virtual void OnEndCrashPlay();

	// BrnBoostBurnout3.cpp:602
	virtual const char * GetName() const;

	// BrnBoostBurnout3.cpp:561
	virtual void OnDriveThru();

	// BrnBoostBurnout3.cpp:580
	virtual void SetCarStatBoostLevel(int32_t, int32_t);

	// BrnBoostBurnout3.cpp:710
	virtual bool AreWeAllowedToBoost();

	// BrnBoostBurnout3.cpp:427
	virtual void OnTakenDownByAIOrPlayer();

	// BrnBoostBurnout3.cpp:695
	virtual void RemoveAllBoostAndChunks();

	// BrnBoostBurnout3.cpp:617
	// Declaration
	virtual void UpdateMaxBoost(bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnBoostBurnout3.cpp:625
		using namespace CgsDev::Message;

	}

	// BrnBoostBurnout3.cpp:328
	virtual void UpdateStuntBoost(const CompletedStuntAction *);

}

// BrnBoostBurnout3.h:134
extern const int32_t KI_BOOST_LEVELS = 3;

// BrnBoostBurnout3.h:135
extern const float KF_BOOST_CHUNK_AMOUNT;

// BrnBoostBurnout3.h:137
extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_IMPACT_SLAM;

// BrnBoostBurnout3.h:138
extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_IMPACT_SHUNT;

// BrnBoostBurnout3.h:139
extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_IMPACT_TRADING_PAINT;

// BrnBoostBurnout3.h:140
extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_IMPACT_NUDGE;

// BrnBoostBurnout3.h:141
extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_IMPACT_GRINDRUB;

// BrnBoostBurnout3.h:143
extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_TRAFFIC_CHECK;

// BrnBoostBurnout3.h:144
extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_TAILGATE;

// BrnBoostBurnout3.h:147
extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_DOWNSCALER;

// BrnBoostBurnout3.h:149
extern const float32_t KF_BOOST_LOSS_SCALE;

// BrnBoostBurnout3.h:150
extern const float32_t KF_MIN_BOOST_LOSS_SCALE;

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// Declaration
	struct BoostBurnout3 {
	private:
		// BrnBoostBurnout3.h:135
		extern const float KF_BOOST_CHUNK_AMOUNT;

		// BrnBoostBurnout3.h:137
		extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_IMPACT_SLAM;

		// BrnBoostBurnout3.h:138
		extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_IMPACT_SHUNT;

		// BrnBoostBurnout3.h:139
		extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_IMPACT_TRADING_PAINT;

		// BrnBoostBurnout3.h:140
		extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_IMPACT_NUDGE;

		// BrnBoostBurnout3.h:141
		extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_IMPACT_GRINDRUB;

		// BrnBoostBurnout3.h:143
		extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_TRAFFIC_CHECK;

		// BrnBoostBurnout3.h:144
		extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_TAILGATE;

		// BrnBoostBurnout3.h:147
		extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_DOWNSCALER;

		// BrnBoostBurnout3.h:149
		extern const float32_t KF_BOOST_LOSS_SCALE;

		// BrnBoostBurnout3.h:150
		extern const float32_t KF_MIN_BOOST_LOSS_SCALE;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// Declaration
	struct BoostBurnout3 {
	public:
		BoostBurnout3();

	private:
		// BrnBoostBurnout3.h:135
		extern const float KF_BOOST_CHUNK_AMOUNT;

		// BrnBoostBurnout3.h:137
		extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_IMPACT_SLAM;

		// BrnBoostBurnout3.h:138
		extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_IMPACT_SHUNT;

		// BrnBoostBurnout3.h:139
		extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_IMPACT_TRADING_PAINT;

		// BrnBoostBurnout3.h:140
		extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_IMPACT_NUDGE;

		// BrnBoostBurnout3.h:141
		extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_IMPACT_GRINDRUB;

		// BrnBoostBurnout3.h:143
		extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_TRAFFIC_CHECK;

		// BrnBoostBurnout3.h:144
		extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_TAILGATE;

		// BrnBoostBurnout3.h:147
		extern const float32_t KF_AGGRESSION_BOOST_MODIFIER_DOWNSCALER;

		// BrnBoostBurnout3.h:149
		extern const float32_t KF_BOOST_LOSS_SCALE;

		// BrnBoostBurnout3.h:150
		extern const float32_t KF_MIN_BOOST_LOSS_SCALE;

	}

}

// BrnBoostBurnout3.h:46
void BrnWorld::BoostBurnout3::BoostBurnout3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

