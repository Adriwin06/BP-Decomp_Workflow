// BrnWorldRegion.h:27
namespace BrnWorld {
	// Declaration
	struct BoostBurnout5 {
		// BrnBoostBurnout5.h:143
		enum BoostMode {
			E_BOOSTMODE_B3_RED = 0,
			E_BOOSTMODE_B2_BLUE = 1,
		}

	}

}

// BrnBoostBurnout5.h:50
struct BrnWorld::BoostBurnout5 : public BrnWorld::BoostStrategy {
private:
	// BrnBoostBurnout5.h:149
	BrnWorld::BoostBurnout5::BoostMode meBoostMode;

	// BrnBoostBurnout5.h:151
	bool mbLeaveBlueDueToCrash;

	// BrnBoostBurnout5.h:152
	bool mbLeaveBlueDueToInsufficientHidden;

	// BrnBoostBurnout5.h:153
	bool mbSwicthBlueToRed;

	// BrnBoostBurnout5.h:155
	bool mbAddRemoveChunkMode;

	// BrnBoostBurnout5.h:156
	bool mbAllowBoostEarning;

	// BrnBoostBurnout5.h:160
	extern const int32_t KI_BOOST_LEVELS_IF_RED_MODE = 5;

	// BrnBoostBurnout5.h:163
	float32_t mfHiddenBoost;

	// BrnBoostBurnout5.h:164
	bool mbBoostInterrupted;

	// BrnBoostBurnout5.h:165
	int32_t miChainSize;

	// BrnBoostBurnout5.cpp:30
	extern const float32_t mfTakeDownBoostReward;

	// BrnBoostBurnout5.h:168
	float32_t mfBlueCrashDecrease;

	// BrnBoostBurnout5.cpp:31
	extern const float32_t mfBoostAmountOnStunt;

	// BrnBoostBurnout5.cpp:32
	extern const float32_t mfOnCrashBoostToLoseProportion;

	// BrnBoostBurnout5.cpp:37
	extern const float32_t KF_STUNT_BOOST_AIR_SPIN_ANGLE;

	// BrnBoostBurnout5.cpp:38
	extern const float32_t KF_STUNT_BOOST_AIR_ROLL_ANGLE;

	// BrnBoostBurnout5.cpp:39
	extern const float32_t KF_STUNT_BOOST_HANDBREAK_MAX_TIME;

	// BrnBoostBurnout5.cpp:41
	extern const float32_t KF_STUNT_BOOST_HANDBREAK_90;

	// BrnBoostBurnout5.cpp:42
	extern const float32_t KF_STUNT_BOOST_HANDBREAK_180;

	// BrnBoostBurnout5.cpp:43
	extern const float32_t KF_STUNT_BOOST_HANDBREAK_360;

	// BrnBoostBurnout5.cpp:44
	extern const float32_t KF_STUNT_BOOST_LANDING_TIME_ELAPSED;

	// BrnBoostBurnout5.cpp:34
	extern const float32_t KF_STUNT_BOOST_MODIFIER_DOWNSCALER;

	// BrnBoostBurnout5.cpp:35
	extern const float32_t KF_STUNT_BOOST_MODIFIER;

	// BrnBoostBurnout5.h:187
	Vector3 mStuntRollInProgress;

	// BrnBoostBurnout5.h:188
	Vector3 mvPositionLastFrame;

	// BrnBoostBurnout5.h:189
	Vector3 mvTakeOffAtVec;

	// BrnBoostBurnout5.h:190
	Vector3 mvLandAtVec;

	// BrnBoostBurnout5.h:192
	float32_t mfBearingLastFrame;

	// BrnBoostBurnout5.h:193
	float32_t mfAngleSoFar;

	// BrnBoostBurnout5.h:194
	float32_t mfTimeElapsed;

	// BrnBoostBurnout5.h:195
	float32_t mfTimeBoosting;

	// BrnBoostBurnout5.h:196
	bool mbHandbreakTurnAttempting;

	// BrnBoostBurnout5.h:197
	bool mbWasJustInTheAir;

	// BrnBoostBurnout5.h:198
	bool mbTestForCleanLanding;

public:
	// BrnBoostBurnout5.cpp:63
	virtual bool Prepare();

	// BrnBoostBurnout5.cpp:406
	virtual void ApplyUpdate(float32_t);

	// BrnBoostBurnout5.cpp:741
	virtual void OnEnterInfiniteBoost();

	// BrnBoostBurnout5.cpp:655
	virtual void OnTakedown();

	// BrnBoostBurnout5.cpp:251
	virtual void OnStuntCompletion(BrnGameState::StuntElementType);

	// BrnBoostBurnout5.cpp:668
	virtual void OnNearMiss(BrnWorld::ENearMissType);

	// BrnBoostBurnout5.cpp:702
	virtual void OnCrash();

	// BrnBoostBurnout5.cpp:715
	virtual void OnSlammed();

	// BrnBoostBurnout5.cpp:212
	virtual void OnTakenDownByAIOrPlayer();

	// BrnBoostBurnout5.cpp:576
	virtual void OnShortcut();

	// BrnBoostBurnout5.cpp:640
	virtual void OnTrafficCheck();

	// BrnBoostBurnout5.cpp:590
	virtual void OnPlayerAttacksRival(BrnPhysics::Vehicle::EImpactType);

	// BrnBoostBurnout5.cpp:760
	virtual void OnStartCrashPlay();

	// BrnBoostBurnout5.cpp:774
	virtual void OnEndCrashPlay();

	// BrnBoostBurnout5.cpp:728
	virtual const char * GetName() const;

	// BrnBoostBurnout5.cpp:237
	virtual bool IsBlueMode();

	// BrnBoostBurnout5.cpp:199
	virtual void OnDriveThru();

	// BrnBoostBurnout5.cpp:164
	virtual bool AreWeAllowedToBoost();

	// BrnBoostBurnout5.cpp:225
	virtual void OnPropHit();

	// BrnBoostBurnout5.cpp:788
	virtual void RemoveAllBoostAndChunks();

	// BrnBoostBurnout5.cpp:867
	virtual bool GetIsChainNotifyPending(uint32_t *);

	// BrnBoostBurnout5.cpp:807
	virtual void OnWrecked(bool);

	// BrnBoostBurnout5.cpp:828
	virtual void UpdateStuntBoost(const CompletedStuntAction *);

private:
	// BrnBoostBurnout5.cpp:283
	void RecalculateBoostMode();

	// BrnBoostBurnout5.cpp:347
	bool BlueModeRequestBoost();

}

// BrnBoostBurnout5.h:160
extern const int32_t KI_BOOST_LEVELS_IF_RED_MODE = 5;

// BrnBoostBurnout5.h:167
extern const float32_t mfTakeDownBoostReward;

// BrnBoostBurnout5.h:169
extern const float32_t mfBoostAmountOnStunt;

// BrnBoostBurnout5.h:170
extern const float32_t mfOnCrashBoostToLoseProportion;

// BrnBoostBurnout5.h:173
extern const float32_t KF_STUNT_BOOST_AIR_SPIN_ANGLE;

// BrnBoostBurnout5.h:174
extern const float32_t KF_STUNT_BOOST_AIR_ROLL_ANGLE;

// BrnBoostBurnout5.h:175
extern const float32_t KF_STUNT_BOOST_HANDBREAK_MAX_TIME;

// BrnBoostBurnout5.h:177
extern const float32_t KF_STUNT_BOOST_HANDBREAK_90;

// BrnBoostBurnout5.h:178
extern const float32_t KF_STUNT_BOOST_HANDBREAK_180;

// BrnBoostBurnout5.h:179
extern const float32_t KF_STUNT_BOOST_HANDBREAK_360;

// BrnBoostBurnout5.h:180
extern const float32_t KF_STUNT_BOOST_LANDING_TIME_ELAPSED;

// BrnBoostBurnout5.h:184
extern const float32_t KF_STUNT_BOOST_MODIFIER_DOWNSCALER;

// BrnBoostBurnout5.h:185
extern const float32_t KF_STUNT_BOOST_MODIFIER;

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// Declaration
	struct BoostBurnout5 {
	private:
		// BrnBoostBurnout5.h:167
		extern const float32_t mfTakeDownBoostReward;

		// BrnBoostBurnout5.h:169
		extern const float32_t mfBoostAmountOnStunt;

		// BrnBoostBurnout5.h:170
		extern const float32_t mfOnCrashBoostToLoseProportion;

		// BrnBoostBurnout5.h:173
		extern const float32_t KF_STUNT_BOOST_AIR_SPIN_ANGLE;

		// BrnBoostBurnout5.h:174
		extern const float32_t KF_STUNT_BOOST_AIR_ROLL_ANGLE;

		// BrnBoostBurnout5.h:175
		extern const float32_t KF_STUNT_BOOST_HANDBREAK_MAX_TIME;

		// BrnBoostBurnout5.h:177
		extern const float32_t KF_STUNT_BOOST_HANDBREAK_90;

		// BrnBoostBurnout5.h:178
		extern const float32_t KF_STUNT_BOOST_HANDBREAK_180;

		// BrnBoostBurnout5.h:179
		extern const float32_t KF_STUNT_BOOST_HANDBREAK_360;

		// BrnBoostBurnout5.h:180
		extern const float32_t KF_STUNT_BOOST_LANDING_TIME_ELAPSED;

		// BrnBoostBurnout5.h:184
		extern const float32_t KF_STUNT_BOOST_MODIFIER_DOWNSCALER;

		// BrnBoostBurnout5.h:185
		extern const float32_t KF_STUNT_BOOST_MODIFIER;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// Declaration
	struct BoostBurnout5 {
	public:
		BoostBurnout5();

	private:
		// BrnBoostBurnout5.h:167
		extern const float32_t mfTakeDownBoostReward;

		// BrnBoostBurnout5.h:169
		extern const float32_t mfBoostAmountOnStunt;

		// BrnBoostBurnout5.h:170
		extern const float32_t mfOnCrashBoostToLoseProportion;

		// BrnBoostBurnout5.h:173
		extern const float32_t KF_STUNT_BOOST_AIR_SPIN_ANGLE;

		// BrnBoostBurnout5.h:174
		extern const float32_t KF_STUNT_BOOST_AIR_ROLL_ANGLE;

		// BrnBoostBurnout5.h:175
		extern const float32_t KF_STUNT_BOOST_HANDBREAK_MAX_TIME;

		// BrnBoostBurnout5.h:177
		extern const float32_t KF_STUNT_BOOST_HANDBREAK_90;

		// BrnBoostBurnout5.h:178
		extern const float32_t KF_STUNT_BOOST_HANDBREAK_180;

		// BrnBoostBurnout5.h:179
		extern const float32_t KF_STUNT_BOOST_HANDBREAK_360;

		// BrnBoostBurnout5.h:180
		extern const float32_t KF_STUNT_BOOST_LANDING_TIME_ELAPSED;

		// BrnBoostBurnout5.h:184
		extern const float32_t KF_STUNT_BOOST_MODIFIER_DOWNSCALER;

		// BrnBoostBurnout5.h:185
		extern const float32_t KF_STUNT_BOOST_MODIFIER;

	}

}

// BrnBoostBurnout5.h:50
void BrnWorld::BoostBurnout5::BoostBurnout5() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

