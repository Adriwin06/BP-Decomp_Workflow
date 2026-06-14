// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnBoostStrategy.h:63
	enum OncomingState {
		E_ONCOMING_STATE_TRUE = 0,
		E_ONCOMING_STATE_FALSE = 1,
		E_ONCOMING_STATE_PREVIOUS = 2,
	}

	// BrnBoostStrategy.h:38
	const float32_t KF_BOOST_EFFECT_LOSS_MAX;

	// BrnBoostStrategy.h:39
	const float32_t KF_BOOST_EFFECT_LOSS_MIN;

	// BrnBoostStrategy.h:41
	const float32_t KF_MIN_BOOST_BEFORE_USE;

	// BrnBoostStrategy.h:43
	const float32_t KF_MIN_BOOST_BEFORE_BOUNCE;

	// BrnBoostStrategy.h:45
	const float32_t KF_MIN_SPIN_ANGLE;

	// BrnBoostStrategy.h:47
	const float32_t KF_BOUNCE_BOOST_FLASH_BAR_TIME;

	// BrnBoostStrategy.h:49
	const float32_t KF_MIN_BOOST_TIME;

}

// BrnBoostStrategy.h:81
struct BrnWorld::BoostStrategy {
	int (*)(...) * _vptr.BoostStrategy;

protected:
	// BrnBoostStrategy.h:295
	float32_t mfNearMissBoostEarning;

	// BrnBoostStrategy.h:296
	float32_t mfDriftEarning;

	// BrnBoostStrategy.h:297
	float32_t mfAirEarning;

	// BrnBoostStrategy.h:298
	float32_t mfSpeedForMinEarning;

	// BrnBoostStrategy.h:299
	float32_t mfSpeedForMaxEarning;

	// BrnBoostStrategy.h:300
	float32_t mfMaxSpeedBoostModifier;

	// BrnBoostStrategy.h:301
	float32_t mfTakedownEarning;

	// BrnBoostStrategy.h:302
	float32_t mfShuntEarning;

	// BrnBoostStrategy.h:303
	float32_t mfSlamEarning;

	// BrnBoostStrategy.h:304
	float32_t mfNudgeEarning;

	// BrnBoostStrategy.h:305
	float32_t mfTradingPaintEarning;

	// BrnBoostStrategy.h:306
	float32_t mfGrindingEarning;

	// BrnBoostStrategy.h:307
	float32_t mfRubbingEarning;

	// BrnBoostStrategy.h:308
	float32_t mfTailgatingEarning;

	// BrnBoostStrategy.h:309
	float32_t mfTrafficCheck;

	// BrnBoostStrategy.h:310
	float32_t mfBoostSlamStrength;

	// BrnBoostStrategy.h:311
	float32_t mfHandbrake180Earning;

	// BrnBoostStrategy.h:312
	float32_t mfHandbrake360Earning;

	// BrnBoostStrategy.h:313
	float32_t mfAirSpinEarning;

	// BrnBoostStrategy.h:314
	float32_t mfBarrelRollEarning;

	// BrnBoostStrategy.h:315
	float32_t mfCleanLanding;

	// BrnBoostStrategy.h:316
	float32_t mfFakieLanding;

	// BrnBoostStrategy.h:317
	float32_t mfBoostSpinIncrease;

	// BrnBoostStrategy.h:318
	float32_t mfComboModifier;

	// BrnBoostStrategy.h:319
	float32_t mfBurnRateBoost;

	// BrnBoostStrategy.h:320
	float32_t mfBoostChainMin;

	// BrnBoostStrategy.h:321
	float32_t mfBoostOnComing;

	// BrnBoostStrategy.h:322
	float32_t mfBeingSlammed;

	// BrnBoostStrategy.h:323
	float32_t mfStuntJumpEarning;

	// BrnBoostStrategy.h:324
	float32_t mfStuntSmashEarning;

	// BrnBoostStrategy.h:325
	float32_t mfStuntBillBoardEarning;

	// BrnBoostStrategy.h:326
	float32_t mfCrashEscapeBoostEarning;

	// BrnBoostStrategy.h:327
	float32_t mfBoostChainBonus;

	// BrnBoostStrategy.h:328
	float32_t mfOnWrecked;

	// BrnBoostStrategy.h:331
	float32_t mfTimeSpentCheating;

	// BrnBoostStrategy.h:334
	BrnWorld::OncomingState mePreviousOncomingState;

	// BrnBoostStrategy.h:337
	float32_t mfBoostAmount;

	// BrnBoostStrategy.h:338
	float32_t mfMaxBoost;

	// BrnBoostStrategy.h:339
	float32_t mfBoostModifier;

	// BrnBoostStrategy.h:340
	float32_t mfBoostEventModeModifier;

	// BrnBoostStrategy.h:341
	float32_t mfOriginalBoostEarning;

	// BrnBoostStrategy.h:344
	float32_t mfSpeed;

	// BrnBoostStrategy.h:345
	float32_t mfOncomingFade;

	// BrnBoostStrategy.h:348
	bool mbCrashing;

	// BrnBoostStrategy.h:349
	bool mbWrecking;

	// BrnBoostStrategy.h:350
	bool mbInAir;

	// BrnBoostStrategy.h:351
	bool mbDrifting;

	// BrnBoostStrategy.h:352
	bool mbOncoming;

	// BrnBoostStrategy.h:353
	bool mbIsTailgating;

	// BrnBoostStrategy.h:354
	bool mbJustTrafficChecked;

	// BrnBoostStrategy.h:355
	bool mbIsBoostFull;

	// BrnBoostStrategy.h:356
	bool mbInfiniteBoost;

	// BrnBoostStrategy.h:357
	bool mbBoosting;

	// BrnBoostStrategy.h:358
	bool mbBoostingLastUpdate;

	// BrnBoostStrategy.h:359
	bool mbBoostRequested;

	// BrnBoostStrategy.h:360
	bool mbBoostEarningEnabled;

	// BrnBoostStrategy.h:361
	bool mbInChainMode;

	// BrnBoostStrategy.h:362
	bool mbJustLostBoostChunk;

	// BrnBoostStrategy.h:363
	bool mbChainNotifyPending;

	// BrnBoostStrategy.h:365
	bool mbForceBoost;

	// BrnBoostStrategy.h:368
	float32_t mfDriftingDistance;

	// BrnBoostStrategy.h:369
	float32_t mfInAirDistance;

	// BrnBoostStrategy.h:370
	float32_t mfOncomingDistance;

	// BrnBoostStrategy.h:371
	float32_t mfTailgatingDistance;

	// BrnBoostStrategy.h:372
	float32_t mfSpinAngle;

	// BrnBoostStrategy.cpp:29
	extern const float32_t KF_ON_SHORTCUT;

	// BrnBoostStrategy.cpp:30
	extern const float32_t KF_ON_TAILGATING_EARNING;

	// BrnBoostStrategy.cpp:32
	extern const float32_t KF_ON_TRAFFIC_CHECK_BASE_AMOUNT;

	// BrnBoostStrategy.cpp:39
	extern const float32_t KF_MAX_MAX_BOOST;

	// BrnBoostStrategy.cpp:40
	extern const float32_t KF_USAGE_DECREASE;

	// BrnBoostStrategy.cpp:41
	extern const float32_t KF_AIR_EARNING;

	// BrnBoostStrategy.cpp:42
	extern const float32_t KF_DRIFT_EARNING;

	// BrnBoostStrategy.cpp:43
	extern const float32_t KF_SPIN_EARNING;

	// BrnBoostStrategy.cpp:44
	extern const float32_t KF_ONCOMING_EARNING;

	// BrnBoostStrategy.cpp:45
	extern const float32_t KF_NEAR_MISS_EARNING;

	// BrnBoostStrategy.cpp:46
	extern const float32_t KF_ONCOMING_MINSPEED;

	// BrnBoostStrategy.h:388
	extern const float32_t KF_NEAR_MISS_MINSPEED;

	// BrnBoostStrategy.cpp:47
	extern const float32_t KF_ONCOMING_TOLERANCE;

	// BrnBoostStrategy.cpp:48
	extern const float32_t KF_SLAM_EARNING;

	// BrnBoostStrategy.cpp:49
	extern const float32_t KF_SLAM_LOSS;

	// BrnBoostStrategy.h:394
	float32_t mfCurrentBoostLevelTotal;

	// BrnBoostStrategy.h:395
	int32_t miCombinedBoostLevel;

	// BrnBoostStrategy.h:396
	int32_t miCurrentCarBoostLevel;

	// BrnBoostStrategy.h:397
	float32_t mfCurrentCarBoostLossLevel;

	// BrnBoostStrategy.h:399
	float32_t mfTotalBoostingTimeFromStart;

	// BrnBoostStrategy.h:400
	float32_t mfCurrentBoostingTime;

	// BrnBoostStrategy.h:401
	float32_t mfCurrentNotBoostingTime;

	// BrnBoostStrategy.h:403
	float32_t mfMinBoostAllowedAmount;

	// BrnBoostStrategy.h:405
	int32_t miBoostLevel;

	// BrnBoostStrategy.h:407
	EActiveRaceCarIndex meTailgatedCarIndex;

	// BrnBoostStrategy.h:409
	Vector3 mStartPosition;

	// BrnBoostStrategy.h:410
	float32_t mfTotalDistanceTraveled;

public:
	// BrnBoostStrategy.cpp:68
	virtual bool Prepare();

	// BrnBoostStrategy.cpp:227
	void Update(OutputBuffer_PrePhysics::GameEventQueue *, float32_t, float32_t);

	// BrnBoostStrategy.h:99
	virtual void ApplyUpdate(float);

	// BrnBoostStrategy.h:102
	virtual void OnEnterInfiniteBoost();

	// BrnBoostStrategy.h:105
	virtual void OnTakedown();

	// BrnBoostStrategy.h:108
	virtual void OnTakenDownByAIOrPlayer();

	// BrnBoostStrategy.h:112
	virtual void OnPlayerAttacksRival(BrnPhysics::Vehicle::EImpactType);

	// BrnBoostStrategy.h:116
	virtual void OnNearMiss(BrnWorld::ENearMissType);

	// BrnBoostStrategy.h:119
	virtual void OnCrash();

	// BrnBoostStrategy.h:123
	virtual void OnWrecked(bool);

	// BrnBoostStrategy.h:126
	virtual void OnSlammed();

	// BrnBoostStrategy.h:130
	virtual void OnStuntCompletion(BrnGameState::StuntElementType);

	// BrnBoostStrategy.h:133
	virtual void OnShortcut();

	// BrnBoostStrategy.h:136
	virtual void OnTrafficCheck();

	// BrnBoostStrategy.cpp:388
	virtual void OnStartCrashPlay();

	// BrnBoostStrategy.cpp:403
	virtual void OnEndCrashPlay();

	// BrnBoostStrategy.h:145
	virtual const char * GetName() const;

	// BrnBoostStrategy.cpp:529
	virtual void OnPropHit();

	// BrnBoostStrategy.cpp:499
	virtual bool IsBlueMode();

	// BrnBoostStrategy.cpp:469
	virtual bool GetIsChainNotifyPending(uint32_t *);

	// BrnBoostStrategy.cpp:505
	virtual bool IsBoosting() const;

	// BrnBoostStrategy.cpp:511
	virtual bool IsInAir() const;

	// BrnBoostStrategy.cpp:517
	virtual bool IsDrifting() const;

	// BrnBoostStrategy.cpp:523
	virtual bool IsSpinning() const;

	// BrnBoostStrategy.cpp:535
	virtual bool IsATrafficCheckPending();

	// BrnBoostStrategy.cpp:547
	virtual bool HasJustLostBoostChunk();

	// BrnBoostStrategy.cpp:557
	virtual bool IsOncoming() const;

	// BrnBoostStrategy.cpp:563
	virtual bool IsBoostFull() const;

	// BrnBoostStrategy.cpp:569
	virtual bool IsTailgating() const;

	// BrnBoostStrategy.cpp:575
	virtual float32_t GetBoostAmount() const;

	// BrnBoostStrategy.cpp:581
	virtual float32_t GetMaxBoost() const;

	// BrnBoostStrategy.cpp:600
	virtual void SetCrashing(bool);

	// BrnBoostStrategy.cpp:589
	void SetWrecking(bool, bool);

	// BrnBoostStrategy.cpp:709
	virtual void SetTailgating(bool, EActiveRaceCarIndex);

	// BrnBoostStrategy.cpp:611
	virtual void SetInfiniteBoost(bool);

	// BrnBoostStrategy.cpp:631
	void SetBoostEarningAmount(float32_t);

	// BrnBoostStrategy.cpp:640
	void OnModeStart(BrnGameState::GameStateModuleIO::EGameModeType, bool);

	// BrnBoostStrategy.cpp:686
	void ResetBoostEarningAmount();

	// BrnBoostStrategy.cpp:623
	virtual void SetSpeed(float32_t);

	// BrnBoostStrategy.cpp:694
	virtual void SetBoostRequested(bool);

	// BrnBoostStrategy.cpp:717
	virtual void SetInAir(bool);

	// BrnBoostStrategy.cpp:724
	virtual void SetDrifting(bool);

	// BrnBoostStrategy.cpp:731
	virtual void SetSpinAngle(float32_t);

	// BrnBoostStrategy.cpp:738
	virtual void SetOncomingState(BrnWorld::OncomingState);

	// BrnBoostStrategy.cpp:787
	virtual void SetBoostAmount(float32_t);

	// BrnBoostStrategy.cpp:772
	virtual void SetBoostSegments(int32_t);

	// BrnBoostStrategy.h:254
	virtual void RemoveAllBoostAndChunks();

	// BrnBoostStrategy.cpp:805
	virtual void SetBoostEarningEnabled(bool);

	// BrnBoostStrategy.cpp:364
	virtual void SetCarStatBoostLevel(int32_t, int32_t);

	// BrnBoostStrategy.cpp:419
	virtual void SetForceBoost(bool);

	// BrnBoostStrategy.cpp:486
	virtual float32_t GetCurrentBoostingTime();

	// BrnBoostStrategy.h:273
	virtual void OnDriveThru();

	// BrnBoostStrategy.h:276
	virtual bool AreWeAllowedToBoost();

	// BrnBoostStrategy.cpp:184
	virtual void UpdateStuntBoost(const CompletedStuntAction *);

	// BrnBoostStrategy.cpp:198
	void UpdateChainExploits(Vector3);

	// BrnBoostStrategy.h:439
	void TurnOffBoosting();

	// BrnBoostStrategy.h:433
	BrnWorld::OncomingState GetPreviousOncomingState() const;

protected:
	// BrnBoostStrategy.cpp:130
	virtual void AddBoost(float32_t);

	// BrnBoostStrategy.cpp:168
	void RemoveBoost(float32_t);

	// BrnBoostStrategy.cpp:434
	void UpdateMaxBoost(bool);

}

// BrnBoostStrategy.h:388
extern const float32_t KF_NEAR_MISS_MINSPEED;

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnBoostStrategy.h:38
	const float32_t KF_BOOST_EFFECT_LOSS_MAX;

	// BrnBoostStrategy.h:39
	const float32_t KF_BOOST_EFFECT_LOSS_MIN;

	// BrnBoostStrategy.h:41
	const float32_t KF_MIN_BOOST_BEFORE_USE;

	// BrnBoostStrategy.h:43
	const float32_t KF_MIN_BOOST_BEFORE_BOUNCE;

	// BrnBoostStrategy.h:45
	const float32_t KF_MIN_SPIN_ANGLE;

	// BrnBoostStrategy.h:47
	const float32_t KF_BOUNCE_BOOST_FLASH_BAR_TIME;

	// BrnBoostStrategy.h:49
	const float32_t KF_MIN_BOOST_TIME;

}

// BrnBoostStrategy.h:375
extern const float32_t KF_ON_SHORTCUT;

// BrnBoostStrategy.h:376
extern const float32_t KF_ON_TAILGATING_EARNING;

// BrnBoostStrategy.h:377
extern const float32_t KF_ON_TRAFFIC_CHECK_BASE_AMOUNT;

// BrnBoostStrategy.h:380
extern const float32_t KF_MAX_MAX_BOOST;

// BrnBoostStrategy.h:381
extern const float32_t KF_USAGE_DECREASE;

// BrnBoostStrategy.h:382
extern const float32_t KF_AIR_EARNING;

// BrnBoostStrategy.h:383
extern const float32_t KF_DRIFT_EARNING;

// BrnBoostStrategy.h:384
extern const float32_t KF_SPIN_EARNING;

// BrnBoostStrategy.h:385
extern const float32_t KF_ONCOMING_EARNING;

// BrnBoostStrategy.h:386
extern const float32_t KF_NEAR_MISS_EARNING;

// BrnBoostStrategy.h:387
extern const float32_t KF_ONCOMING_MINSPEED;

// BrnBoostStrategy.h:389
extern const float32_t KF_ONCOMING_TOLERANCE;

// BrnBoostStrategy.h:390
extern const float32_t KF_SLAM_EARNING;

// BrnBoostStrategy.h:391
extern const float32_t KF_SLAM_LOSS;

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnBoostStrategy.h:38
	const float32_t KF_BOOST_EFFECT_LOSS_MAX;

	// BrnBoostStrategy.h:39
	const float32_t KF_BOOST_EFFECT_LOSS_MIN;

	// BrnBoostStrategy.h:41
	const float32_t KF_MIN_BOOST_BEFORE_USE;

	// BrnBoostStrategy.h:43
	const float32_t KF_MIN_BOOST_BEFORE_BOUNCE;

	// BrnBoostStrategy.h:45
	const float32_t KF_MIN_SPIN_ANGLE;

	// BrnBoostStrategy.h:47
	const float32_t KF_BOUNCE_BOOST_FLASH_BAR_TIME;

	// BrnBoostStrategy.h:49
	const float32_t KF_MIN_BOOST_TIME;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnBoostStrategy.h:38
	const float32_t KF_BOOST_EFFECT_LOSS_MAX;

	// BrnBoostStrategy.h:39
	const float32_t KF_BOOST_EFFECT_LOSS_MIN;

	// BrnBoostStrategy.h:41
	const float32_t KF_MIN_BOOST_BEFORE_USE;

	// BrnBoostStrategy.h:43
	const float32_t KF_MIN_BOOST_BEFORE_BOUNCE;

	// BrnBoostStrategy.h:45
	const float32_t KF_MIN_SPIN_ANGLE;

	// BrnBoostStrategy.h:47
	const float32_t KF_BOUNCE_BOOST_FLASH_BAR_TIME;

	// BrnBoostStrategy.h:49
	const float32_t KF_MIN_BOOST_TIME;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnBoostStrategy.h:38
	const float32_t KF_BOOST_EFFECT_LOSS_MAX;

	// BrnBoostStrategy.h:39
	const float32_t KF_BOOST_EFFECT_LOSS_MIN;

	// BrnBoostStrategy.h:41
	const float32_t KF_MIN_BOOST_BEFORE_USE;

	// BrnBoostStrategy.h:43
	const float32_t KF_MIN_BOOST_BEFORE_BOUNCE;

	// BrnBoostStrategy.h:45
	const float32_t KF_MIN_SPIN_ANGLE;

	// BrnBoostStrategy.h:47
	const float32_t KF_BOUNCE_BOOST_FLASH_BAR_TIME;

	// BrnBoostStrategy.h:49
	const float32_t KF_MIN_BOOST_TIME;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnBoostStrategy.h:63
	enum OncomingState {
		E_ONCOMING_STATE_TRUE = 0,
		E_ONCOMING_STATE_FALSE = 1,
		E_ONCOMING_STATE_PREVIOUS = 2,
	}

	// Declaration
	struct BoostStrategy {
	protected:
		// BrnBoostStrategy.h:375
		extern const float32_t KF_ON_SHORTCUT;

		// BrnBoostStrategy.h:376
		extern const float32_t KF_ON_TAILGATING_EARNING;

		// BrnBoostStrategy.h:377
		extern const float32_t KF_ON_TRAFFIC_CHECK_BASE_AMOUNT;

		// BrnBoostStrategy.h:380
		extern const float32_t KF_MAX_MAX_BOOST;

		// BrnBoostStrategy.h:381
		extern const float32_t KF_USAGE_DECREASE;

		// BrnBoostStrategy.h:382
		extern const float32_t KF_AIR_EARNING;

		// BrnBoostStrategy.h:383
		extern const float32_t KF_DRIFT_EARNING;

		// BrnBoostStrategy.h:384
		extern const float32_t KF_SPIN_EARNING;

		// BrnBoostStrategy.h:385
		extern const float32_t KF_ONCOMING_EARNING;

		// BrnBoostStrategy.h:386
		extern const float32_t KF_NEAR_MISS_EARNING;

		// BrnBoostStrategy.h:387
		extern const float32_t KF_ONCOMING_MINSPEED;

		// BrnBoostStrategy.h:388
		extern const float32_t KF_NEAR_MISS_MINSPEED;

		// BrnBoostStrategy.h:389
		extern const float32_t KF_ONCOMING_TOLERANCE;

		// BrnBoostStrategy.h:390
		extern const float32_t KF_SLAM_EARNING;

		// BrnBoostStrategy.h:391
		extern const float32_t KF_SLAM_LOSS;

	}

	// BrnBoostStrategy.h:38
	const float32_t KF_BOOST_EFFECT_LOSS_MAX;

	// BrnBoostStrategy.h:39
	const float32_t KF_BOOST_EFFECT_LOSS_MIN;

	// BrnBoostStrategy.h:41
	const float32_t KF_MIN_BOOST_BEFORE_USE;

	// BrnBoostStrategy.h:43
	const float32_t KF_MIN_BOOST_BEFORE_BOUNCE;

	// BrnBoostStrategy.h:45
	const float32_t KF_MIN_SPIN_ANGLE;

	// BrnBoostStrategy.h:47
	const float32_t KF_BOUNCE_BOOST_FLASH_BAR_TIME;

	// BrnBoostStrategy.h:49
	const float32_t KF_MIN_BOOST_TIME;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnBoostStrategy.h:63
	enum OncomingState {
		E_ONCOMING_STATE_TRUE = 0,
		E_ONCOMING_STATE_FALSE = 1,
		E_ONCOMING_STATE_PREVIOUS = 2,
	}

	// Declaration
	struct BoostStrategy {
	public:
		BoostStrategy();

	protected:
		// BrnBoostStrategy.h:375
		extern const float32_t KF_ON_SHORTCUT;

		// BrnBoostStrategy.h:376
		extern const float32_t KF_ON_TAILGATING_EARNING;

		// BrnBoostStrategy.h:377
		extern const float32_t KF_ON_TRAFFIC_CHECK_BASE_AMOUNT;

		// BrnBoostStrategy.h:380
		extern const float32_t KF_MAX_MAX_BOOST;

		// BrnBoostStrategy.h:381
		extern const float32_t KF_USAGE_DECREASE;

		// BrnBoostStrategy.h:382
		extern const float32_t KF_AIR_EARNING;

		// BrnBoostStrategy.h:383
		extern const float32_t KF_DRIFT_EARNING;

		// BrnBoostStrategy.h:384
		extern const float32_t KF_SPIN_EARNING;

		// BrnBoostStrategy.h:385
		extern const float32_t KF_ONCOMING_EARNING;

		// BrnBoostStrategy.h:386
		extern const float32_t KF_NEAR_MISS_EARNING;

		// BrnBoostStrategy.h:387
		extern const float32_t KF_ONCOMING_MINSPEED;

		// BrnBoostStrategy.h:388
		extern const float32_t KF_NEAR_MISS_MINSPEED;

		// BrnBoostStrategy.h:389
		extern const float32_t KF_ONCOMING_TOLERANCE;

		// BrnBoostStrategy.h:390
		extern const float32_t KF_SLAM_EARNING;

		// BrnBoostStrategy.h:391
		extern const float32_t KF_SLAM_LOSS;

	}

	// BrnBoostStrategy.h:38
	const float32_t KF_BOOST_EFFECT_LOSS_MAX;

	// BrnBoostStrategy.h:39
	const float32_t KF_BOOST_EFFECT_LOSS_MIN;

	// BrnBoostStrategy.h:41
	const float32_t KF_MIN_BOOST_BEFORE_USE;

	// BrnBoostStrategy.h:43
	const float32_t KF_MIN_BOOST_BEFORE_BOUNCE;

	// BrnBoostStrategy.h:45
	const float32_t KF_MIN_SPIN_ANGLE;

	// BrnBoostStrategy.h:47
	const float32_t KF_BOUNCE_BOOST_FLASH_BAR_TIME;

	// BrnBoostStrategy.h:49
	const float32_t KF_MIN_BOOST_TIME;

}

// BrnBoostStrategy.h:81
void BrnWorld::BoostStrategy::BoostStrategy() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

