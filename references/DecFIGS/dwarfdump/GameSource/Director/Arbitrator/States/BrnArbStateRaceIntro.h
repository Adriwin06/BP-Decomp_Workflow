// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct ArbStateRaceIntro {
		// BrnArbStateRaceIntro.h:68
		enum EState {
			E_STATE_INACTIVE = 0,
			E_STATE_PREPARING = 1,
			E_STATE_ACTIVE_PRE_COUNTDOWN = 2,
			E_STATE_ACTIVE_COUNTDOWN = 3,
			E_STATE_CHANGING_TO_ROAMING = 4,
			E_STATE_RELEASING = 5,
			E_NUM_STATES = 6,
		}

	}

}

// BrnArbStateRaceIntro.h:39
struct BrnDirector::ArbStateRaceIntro : public BrnDirector::ArbitratorState {
private:
	// BrnArbStateRaceIntro.h:80
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim> mRaceIntroBehaviourHandle;

	// BrnArbStateRaceIntro.h:81
	BrnDirector::ArbStateRaceIntro::EState meState;

	// BrnArbStateRaceIntro.h:83
	shotgroup mShotGroup;

	// BrnArbStateRaceIntro.h:84
	const shotgroup * mpRaceStartShotGroup;

public:
	// BrnArbStateRaceIntro.cpp:29
	virtual void Construct();

	// BrnArbStateRaceIntro.cpp:43
	virtual bool Prepare(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateRaceIntro.cpp:118
	virtual void Update(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateRaceIntro.cpp:234
	virtual bool Release(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateRaceIntro.cpp:247
	virtual void Destruct();

	// BrnArbStateRaceIntro.cpp:256
	virtual const char * GetName() const;

}

// BrnArbStateRaceIntro.h:39
void BrnDirector::ArbStateRaceIntro::ArbStateRaceIntro() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnArbStateRaceIntro.h:39
void BrnDirector::ArbStateRaceIntro::~ArbStateRaceIntro() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

