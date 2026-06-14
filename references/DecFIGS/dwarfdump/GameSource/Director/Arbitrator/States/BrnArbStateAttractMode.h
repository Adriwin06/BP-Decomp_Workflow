// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct ArbStateAttractMode {
		// BrnArbStateAttractMode.h:66
		enum EState {
			E_STATE_INACTIVE = 0,
			E_STATE_PREPARING = 1,
			E_STATE_ACTIVE = 2,
			E_STATE_CHANGING_TO_ROAMING = 3,
			E_STATE_RELEASING = 4,
			E_NUM_STATES = 5,
		}

	}

}

// BrnArbStateAttractMode.h:37
struct BrnDirector::ArbStateAttractMode : public BrnDirector::ArbitratorState {
private:
	// BrnArbStateAttractMode.h:77
	BehaviourHandle<BrnDirector::Camera::BehaviourRoadRunner> mRoadRunnerCam;

	// BrnArbStateAttractMode.h:79
	BrnDirector::ArbStateAttractMode::EState meState;

public:
	// BrnArbStateAttractMode.cpp:28
	virtual void Construct();

	// BrnArbStateAttractMode.cpp:42
	virtual bool Prepare(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateAttractMode.cpp:70
	virtual void Update(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateAttractMode.cpp:140
	virtual bool Release(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateAttractMode.cpp:151
	virtual void Destruct();

	// BrnArbStateAttractMode.cpp:159
	virtual const char * GetName() const;

}

// BrnArbStateAttractMode.h:37
void BrnDirector::ArbStateAttractMode::ArbStateAttractMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

