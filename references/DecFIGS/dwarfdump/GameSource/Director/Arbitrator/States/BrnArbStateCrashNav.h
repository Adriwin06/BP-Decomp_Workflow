// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct ArbStateCrashNav {
		// BrnArbStateCrashNav.h:70
		enum EState {
			E_STATE_INACTIVE = 0,
			E_STATE_PREPARING = 1,
			E_STATE_INTERPOLATE_FROM_GAMEPLAY = 2,
			E_STATE_ACTIVE = 3,
			E_STATE_ACTIVE_TURNABOUT = 4,
			E_STATE_INTERPOLATE_TO_GAMEPLAY = 5,
			E_STATE_WAITING_TO_STOP = 6,
			E_STATE_RELEASING = 7,
			E_NUM_STATES = 8,
		}

	}

}

// BrnArbStateCrashNav.h:38
struct BrnDirector::ArbStateCrashNav : public BrnDirector::ArbitratorState {
private:
	// BrnArbStateCrashNav.h:84
	ICEPlayingMovie mICEPlayingMovie;

	// BrnArbStateCrashNav.h:85
	ICEMoviePlayer mICEMoviePlayer;

	// BrnArbStateCrashNav.h:87
	BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate> mInterpolater;

	// BrnArbStateCrashNav.h:88
	BrnDirector::Camera::BehaviourInterpolate::Parameters mInterpolateParams;

	// BrnArbStateCrashNav.h:90
	BehaviourHandle<BrnDirector::Camera::BehaviourRoadRunner> mRoadRunnerCam;

	// BrnArbStateCrashNav.h:92
	BrnDirector::ArbStateCrashNav::EState meState;

	// BrnArbStateCrashNav.h:94
	uint32_t muCurrentIceMovie;

	// BrnArbStateCrashNav.h:95
	float32_t mfTimeInState;

	// BrnArbStateCrashNav.h:96
	bool mbHasReversed;

public:
	// BrnArbStateCrashNav.cpp:30
	virtual void Construct();

	// BrnArbStateCrashNav.cpp:50
	virtual bool Prepare(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateCrashNav.cpp:98
	virtual void Update(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateCrashNav.cpp:290
	virtual bool Release(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateCrashNav.cpp:308
	virtual void Destruct();

	// BrnArbStateCrashNav.cpp:317
	virtual const char * GetName() const;

	// BrnArbStateCrashNav.h:102
	bool IsActive() const;

}

// BrnArbStateCrashNav.h:38
void BrnDirector::ArbStateCrashNav::ArbStateCrashNav() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

