// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct ArbStateRoaming {
		// BrnArbStateRoaming.h:94
		enum EState {
			E_STATE_INACTIVE = 0,
			E_STATE_PREPARING = 1,
			E_STATE_DRIVING = 2,
			E_STATE_CHANGING_TO_IDLE_INTERPOLATE = 3,
			E_STATE_CHANGING_TO_IDLE_BLACKOUT = 4,
			E_STATE_IDLE = 5,
			E_STATE_IDLE_RESET = 6,
			E_STATE_CHANGING_TO_CRASHING = 7,
			E_STATE_CHANGING_TO_TAKEDOWN = 8,
			E_STATE_CHANGING_TO_RACE_INTRO = 9,
			E_STATE_CHANGING_TO_ONLINE_RACE_INTRO = 10,
			E_STATE_CHANGING_TO_RACE_POST_EVENT = 11,
			E_STATE_CHANGING_TO_DRIVETHRU = 12,
			E_STATE_CHANGING_TO_CAR_SELECT = 13,
			E_STATE_CHANGING_TO_RANK_UP = 14,
			E_STATE_CHANGING_TO_ONLINE_CAR_SELECT = 15,
			E_STATE_RELEASING = 16,
			E_NUM_STATES = 17,
		}

	}

}

// BrnArbStateRoaming.h:40
struct BrnDirector::ArbStateRoaming : public BrnDirector::ArbitratorState {
private:
	// BrnArbStateRoaming.h:82
	BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate> mInterpolater;

	// BrnArbStateRoaming.h:83
	BehaviourHandle<BrnDirector::Camera::BehaviourRoadRunner> mRoadRunnerCam;

	// BrnArbStateRoaming.h:85
	BrnDirector::Camera::BehaviourInterpolate::Parameters mInterpolateParams;

	// BrnArbStateRoaming.h:87
	MomentSelector mMomentSelector;

	// BrnArbStateRoaming.cpp:44
	extern const const char *[4] KAPC_PAYBACK_EFFECT_NAMES;

	// BrnArbStateRoaming.cpp:34
	extern float32_t KF_IDLE_TIME_BEFORE_PICTURE_PARADISE;

	// BrnArbStateRoaming.cpp:38
	extern const float32_t KF_PAD_IDLE_TIME_BEFORE_PICTURE_PARADISE;

	// BrnArbStateRoaming.h:117
	bool mbHasReversed;

	// BrnArbStateRoaming.h:118
	bool mbStartedJumpEffect;

	// BrnArbStateRoaming.h:119
	bool mbUsingInterpolator;

	// BrnArbStateRoaming.h:120
	bool mbDisablePictureParadise;

	// BrnArbStateRoaming.h:121
	bool mbPlayRaceEndEffect;

	// BrnArbStateRoaming.h:123
	float32_t mfTimeInShowtimeIntro;

	// BrnArbStateRoaming.h:124
	float32_t mfBordersTime;

	// BrnArbStateRoaming.h:126
	float32_t mfImpactShakeAmount;

	// BrnArbStateRoaming.h:127
	float32_t mfNormalShakeAmount;

	// BrnArbStateRoaming.h:129
	float32_t mfTimeUntilNextStrobe;

	// BrnArbStateRoaming.h:130
	int32_t miStrobeCount;

	// BrnArbStateRoaming.h:132
	BrnDirector::ArbStateRoaming::EState meState;

	// BrnArbStateRoaming.h:133
	float32_t mfStateTimer;

	// BrnArbStateRoaming.h:135
	uint8_t mu8ImpactShakeType;

public:
	// BrnArbStateRoaming.cpp:68
	virtual void Construct();

	// BrnArbStateRoaming.cpp:130
	virtual bool Prepare(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateRoaming.cpp:182
	virtual void Update(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateRoaming.cpp:649
	virtual bool Release(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateRoaming.cpp:668
	virtual void Destruct();

	// BrnArbStateRoaming.cpp:1052
	virtual const char * GetName() const;

private:
	// BrnArbStateRoaming.cpp:677
	void ProcessPossibleFX(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateRoaming.cpp:854
	void ProcessPossibleStateChanges(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateRoaming.cpp:1017
	void ProcessPossiblePaybackEffects(BrnDirector::ArbStateSharedInfo &);

}

// BrnArbStateRoaming.h:89
extern const char *[] KAPC_PAYBACK_EFFECT_NAMES;

// BrnArbStateRoaming.h:92
extern const float32_t KF_PAD_IDLE_TIME_BEFORE_PICTURE_PARADISE;

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// Declaration
	struct ArbStateRoaming {
	public:
		ArbStateRoaming();

	private:
		// BrnArbStateRoaming.h:89
		extern const char *[] KAPC_PAYBACK_EFFECT_NAMES;

		// BrnArbStateRoaming.h:92
		extern const float32_t KF_PAD_IDLE_TIME_BEFORE_PICTURE_PARADISE;

	}

}

// BrnArbStateRoaming.h:40
void BrnDirector::ArbStateRoaming::ArbStateRoaming() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

