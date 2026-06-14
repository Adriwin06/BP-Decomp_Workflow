// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct ArbStateCrashing {
		// BrnArbStateCrashing.h:91
		enum EState {
			E_STATE_INACTIVE = 0,
			E_STATE_PREPARING = 1,
			E_STATE_ACTIVE = 2,
			E_STATE_AFTERCRASH = 3,
			E_STATE_AFTERCRASH_SLOW = 4,
			E_STATE_INTERPOLATING_TO_ROAMING = 5,
			E_STATE_CHANGING_TO_ROAMING = 6,
			E_STATE_RELEASING = 7,
			E_NUM_STATES = 8,
		}

	}

}

// BrnArbStateCrashing.h:39
struct BrnDirector::ArbStateCrashing : public BrnDirector::ArbitratorState {
private:
	// BrnArbStateCrashing.cpp:21
	extern const float32_t kfMomentTime;

	// BrnArbStateCrashing.cpp:22
	extern const float32_t kfFailsafeTime;

	// BrnArbStateCrashing.h:105
	BehaviourHandle<BrnDirector::Camera::BehaviourSpirallingDeathcam> mDeathcam;

	// BrnArbStateCrashing.h:107
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim> mTakenDownCam;

	// BrnArbStateCrashing.h:109
	ImpactSlomoController mImpactSlomoController;

	// BrnArbStateCrashing.h:110
	ImpactShakeController mImpactShakeController;

	// BrnArbStateCrashing.h:112
	MomentSelector mMomentSelector;

	// BrnArbStateCrashing.h:114
	BrnDirector::VehicleTracker::ECrashType meCrashType;

	// BrnArbStateCrashing.h:116
	float32_t mfTimeActive;

	// BrnArbStateCrashing.h:117
	float32_t mfMomentTimer;

	// BrnArbStateCrashing.h:118
	float32_t mfFailsafeTimer;

	// BrnArbStateCrashing.h:120
	bool mbAftertouchingSinceStart;

	// BrnArbStateCrashing.h:121
	bool mbAftertouchActivated;

	// BrnArbStateCrashing.h:123
	bool mbShouldUseDeathcam;

	// BrnArbStateCrashing.h:124
	bool mbPlayerWasWreckedThisCrash;

	// BrnArbStateCrashing.h:126
	bool mbPlayerWasTakenDown;

	// BrnArbStateCrashing.h:127
	EActiveRaceCarIndex mePlayerKillerIndex;

	// BrnArbStateCrashing.h:129
	BrnDirector::ArbStateCrashing::EState meState;

public:
	// BrnArbStateCrashing.cpp:29
	virtual void Construct();

	// BrnArbStateCrashing.cpp:159
	virtual bool Prepare(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateCrashing.cpp:223
	virtual void Update(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateCrashing.cpp:722
	virtual bool Release(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateCrashing.cpp:735
	virtual void Destruct();

	// BrnArbStateCrashing.cpp:754
	virtual bool CanRun(BrnDirector::ArbStateSharedInfo &) const;

	// BrnArbStateCrashing.cpp:744
	virtual const char * GetName() const;

private:
	// BrnArbStateCrashing.cpp:456
	void SelectNormalCrashCamera(BrnDirector::ArbStateSharedInfo &, bool);

	// BrnArbStateCrashing.cpp:567
	void ProcessPossibleStateChanges(BrnDirector::ArbStateSharedInfo &, bool *);

	// BrnArbStateCrashing.cpp:666
	void ApplySlomoAndShake(BrnDirector::ArbStateSharedInfo &);

}

// BrnArbStateCrashing.h:88
extern const float32_t kfMomentTime;

// BrnArbStateCrashing.h:89
extern const float32_t kfFailsafeTime;

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// Declaration
	struct ArbStateCrashing {
	public:
		ArbStateCrashing();

	private:
		// BrnArbStateCrashing.h:88
		extern const float32_t kfMomentTime;

		// BrnArbStateCrashing.h:89
		extern const float32_t kfFailsafeTime;

	}

}

// BrnArbStateCrashing.h:39
void BrnDirector::ArbStateCrashing::ArbStateCrashing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

