// BrnWorldRegion.h:27
namespace BrnWorld {
	// Declaration
	struct BoostManager {
		// BrnBoostManager.h:60
		enum BoostStrategyId {
			E_BOOSTSTRATEGY_BURNOUT1 = 1,
			E_BOOSTSTRATEGY_BURNOUT2 = 2,
			E_BOOSTSTRATEGY_BURNOUT3 = 3,
			E_BOOSTSTRATEGY_BURNOUT4 = 4,
			E_BOOSTSTRATEGY_BURNOUT5 = 5,
		}

	}

	// BrnBoostManager.h:40
	const float32_t KF_MIN_AIR_TIME_FOR_BOOST;

}

// BrnBoostManager.h:56
struct BrnWorld::BoostManager {
private:
	// BrnBoostManager.h:287
	bool mbBoostEarningEnabled;

	// BrnBoostManager.h:289
	BrnWorld::BoostManager::BoostStrategyId meBoostStrategy;

	// BrnBoostManager.h:293
	BrnWorld::BoostBurnout2 mBoostBurnout2;

	// BrnBoostManager.h:294
	BrnWorld::BoostBurnout3 mBoostBurnout3;

	// BrnBoostManager.h:296
	BrnWorld::BoostBurnout5 mBoostBurnout5;

	// BrnBoostManager.h:297
	BrnWorld::BoostStrategy * mpBoostStrategy;

	// BrnBoostManager.h:299
	int32_t miCurrentCarBoostLevel;

	// BrnBoostManager.h:300
	int32_t miCurrentPlayerBoostLevel;

	// BrnBoostManager.h:302
	float32_t mfJustBounceBoostedTimer;

public:
	// BrnBoostManager.h:70
	bool Prepare();

	// BrnBoostManager.h:74
	// Declaration
	void SetBoostStrategy(BrnWorld::BoostManager::BoostStrategyId) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnBoostManager.h:397
		using namespace CgsDev::Message;

		// BrnBoostManager.h:398
		using namespace CgsDev::Message;

	}

	// BrnBoostManager.h:78
	void SetBoostEarningAmount(float32_t);

	// BrnBoostManager.h:81
	void ResetBoostEarningAmount();

	// BrnBoostManager.h:84
	BrnWorld::BoostManager::BoostStrategyId GetBoostStrategyId() const;

	// BrnBoostManager.h:87
	BrnWorld::EBoostType GetBoostType() const;

	// BrnBoostManager.h:90
	BrnWorld::BoostStrategy * GetBoostStrategy() const;

	// BrnBoostManager.h:94
	void OnModeStart(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnBoostManager.h:98
	void UpdateChainExploits(Vector3);

	// BrnBoostManager.h:104
	void Update(OutputBuffer_PrePhysics::GameEventQueue *, float32_t, float32_t);

	// BrnBoostManager.h:108
	void UpdateStuntBoost(const CompletedStuntAction *);

	// BrnBoostManager.h:112
	bool IsBlueMode();

	// BrnBoostManager.h:115
	void OnTakedown();

	// BrnBoostManager.h:119
	void OnNearMiss(BrnWorld::ENearMissType);

	// BrnBoostManager.h:122
	void OnTakenDownByAIOrPlayer();

	// BrnBoostManager.h:125
	void OnTrafficCheck();

	// BrnBoostManager.h:128
	void OnCrash();

	// BrnBoostManager.h:131
	void OnSlammed();

	// BrnBoostManager.h:135
	void OnStuntCompletion(BrnGameState::StuntElementType);

	// BrnBoostManager.h:138
	void OnShortcut();

	// BrnBoostManager.h:142
	void OnPlayerAttacksRival(BrnPhysics::Vehicle::EImpactType);

	// BrnBoostManager.h:145
	void OnStartCrashPlay();

	// BrnBoostManager.h:148
	void OnEndCrashPlay();

	// BrnBoostManager.h:151
	bool IsBoosting() const;

	// BrnBoostManager.h:154
	bool IsOncoming() const;

	// BrnBoostManager.h:157
	bool IsInAir() const;

	// BrnBoostManager.h:160
	bool IsDrifting() const;

	// BrnBoostManager.h:163
	bool IsSpinning() const;

	// BrnBoostManager.h:166
	bool IsATrafficCheckPending();

	// BrnBoostManager.h:169
	bool HasJustLostBoostChunk();

	// BrnBoostManager.h:172
	bool IsBoostFull() const;

	// BrnBoostManager.h:175
	void OnPropHit();

	// BrnBoostManager.h:178
	bool IsTailgating() const;

	// BrnBoostManager.h:181
	float32_t GetBoostAmount() const;

	// BrnBoostManager.h:184
	float32_t GetMaxBoost() const;

	// BrnBoostManager.h:187
	bool GetIsChainNotifyPending(uint32_t *);

	// BrnBoostManager.h:191
	void SetCrashing(bool);

	// BrnBoostManager.h:196
	void SetWrecking(bool, bool);

	// BrnBoostManager.h:200
	void SetForceBoost(bool);

	// BrnBoostManager.h:204
	void SetInfiniteBoost(bool);

	// BrnBoostManager.h:208
	void SetSpeed(float32_t);

	// BrnBoostManager.h:212
	void SetBoostRequested(bool);

	// BrnBoostManager.h:217
	void SetTailgating(bool, EActiveRaceCarIndex);

	// BrnBoostManager.h:221
	void SetInAir(float32_t);

	// BrnBoostManager.h:225
	void SetDrifting(bool);

	// BrnBoostManager.h:229
	void SetSpinAngle(float32_t);

	// BrnBoostManager.h:233
	void SetOncomingState(BrnWorld::OncomingState);

	// BrnBoostManager.h:237
	void SetBoostAmount(float32_t);

	// BrnBoostManager.h:241
	void SetBoostSegments(int32_t);

	// BrnBoostManager.h:244
	void RemoveAllBoostAndChunks();

	// BrnBoostManager.h:248
	void SetBoostEarningEnabled(bool);

	// BrnBoostManager.h:251
	void TurnOffBoosting();

	// BrnBoostManager.h:256
	void ApplyCarStats(int32_t, int32_t);

	// BrnBoostManager.h:259
	void ApplyPreviousCarStats();

	// BrnBoostManager.h:262
	BrnWorld::OncomingState GetPreviousOncomingState() const;

	// BrnBoostManager.h:265
	float32_t GetCurrentBoostingTime();

	// BrnBoostManager.h:268
	void OnDriveThru();

	// BrnBoostManager.h:271
	bool AreWeAllowedToBoost();

	// BrnBoostManager.h:274
	bool AreWeAllowedToBounceBoost() const;

	// BrnBoostManager.h:277
	bool HasJustBounceBoosted() const;

	// BrnBoostManager.h:280
	void OnBounceBoost();

private:
	// BrnBoostManager.h:285
	void DebugRender();

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnBoostManager.h:40
	const float32_t KF_MIN_AIR_TIME_FOR_BOOST;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnBoostManager.h:40
	const float32_t KF_MIN_AIR_TIME_FOR_BOOST;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnBoostManager.h:40
	const float32_t KF_MIN_AIR_TIME_FOR_BOOST;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnBoostManager.h:40
	const float32_t KF_MIN_AIR_TIME_FOR_BOOST;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// Declaration
	struct BoostManager {
		// BrnBoostManager.h:60
		enum BoostStrategyId {
			E_BOOSTSTRATEGY_BURNOUT1 = 1,
			E_BOOSTSTRATEGY_BURNOUT2 = 2,
			E_BOOSTSTRATEGY_BURNOUT3 = 3,
			E_BOOSTSTRATEGY_BURNOUT4 = 4,
			E_BOOSTSTRATEGY_BURNOUT5 = 5,
		}

	}

	// BrnBoostManager.h:40
	const float32_t KF_MIN_AIR_TIME_FOR_BOOST;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// Declaration
	struct BoostManager {
		// BrnBoostManager.h:60
		enum BoostStrategyId {
			E_BOOSTSTRATEGY_BURNOUT1 = 1,
			E_BOOSTSTRATEGY_BURNOUT2 = 2,
			E_BOOSTSTRATEGY_BURNOUT3 = 3,
			E_BOOSTSTRATEGY_BURNOUT4 = 4,
			E_BOOSTSTRATEGY_BURNOUT5 = 5,
		}

	}

	// BrnBoostManager.h:40
	const float32_t KF_MIN_AIR_TIME_FOR_BOOST;

}

