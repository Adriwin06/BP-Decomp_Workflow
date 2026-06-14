// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct ArbStateOnlineRaceIntro {
		// BrnArbStateOnlineRaceIntro.h:79
		enum EState {
			E_STATE_INACTIVE = 0,
			E_STATE_PREPARING = 1,
			E_STATE_ACTIVE = 2,
			E_STATE_SHOWING_PLAYER = 3,
			E_STATE_SHOWING_RIVAL = 4,
			E_STATE_MOVING_TO_RIVAL = 5,
			E_STATE_MOVING_TO_PLAYER = 6,
			E_STATE_SHOWING_PLAYER_AGAIN = 7,
			E_STATE_WAITING_FOR_COUNTDOWN = 8,
			E_STATE_SHOWING_LIGHTS = 9,
			E_STATE_CHANGING_TO_ROAMING = 10,
			E_STATE_RELEASING = 11,
			E_NUM_STATES = 12,
		}

	}

}

// BrnArbStateOnlineRaceIntro.h:40
struct BrnDirector::ArbStateOnlineRaceIntro : public BrnDirector::ArbitratorState {
private:
	// BrnArbStateOnlineRaceIntro.h:113
	BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate> mInterpolator;

	// BrnArbStateOnlineRaceIntro.h:114
	BrnDirector::Camera::BehaviourInterpolate::Parameters mInterpolatorParams;

	// BrnArbStateOnlineRaceIntro.h:116
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim>[3] maRivalBehaviourHandle;

	// BrnArbStateOnlineRaceIntro.h:117
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim> mPlayerBehaviourHandle;

	// BrnArbStateOnlineRaceIntro.h:118
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim> mLightsBehaviourHandle;

	// BrnArbStateOnlineRaceIntro.h:120
	float32_t mfTimeToSpendInterpolating;

	// BrnArbStateOnlineRaceIntro.h:121
	float32_t mfTimeToSpendLookingAtRival;

	// BrnArbStateOnlineRaceIntro.h:122
	float32_t mfTimeToSpendLookingAtPlayer;

	// BrnArbStateOnlineRaceIntro.h:123
	float32_t mfTimeInState;

	// BrnArbStateOnlineRaceIntro.h:124
	uint32_t muCurrentRival;

	// BrnArbStateOnlineRaceIntro.h:125
	uint32_t muRivalMovieOffset;

	// BrnArbStateOnlineRaceIntro.h:127
	BrnDirector::ArbStateOnlineRaceIntro::EState meState;

public:
	// BrnArbStateOnlineRaceIntro.cpp:26
	virtual void Construct();

	// BrnArbStateOnlineRaceIntro.cpp:53
	virtual bool Prepare(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateOnlineRaceIntro.cpp:74
	void CalculateStateTimes(uint32_t, float32_t);

	// BrnArbStateOnlineRaceIntro.cpp:130
	virtual void Update(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateOnlineRaceIntro.cpp:499
	virtual bool Release(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateOnlineRaceIntro.cpp:529
	virtual void Destruct();

	// BrnArbStateOnlineRaceIntro.cpp:520
	virtual const char * GetName() const;

private:
	// BrnArbStateOnlineRaceIntro.cpp:472
	void SetupRivalMovie(BrnDirector::ArbStateSharedInfo &, uint32_t);

}

// BrnArbStateOnlineRaceIntro.h:40
void BrnDirector::ArbStateOnlineRaceIntro::ArbStateOnlineRaceIntro() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

