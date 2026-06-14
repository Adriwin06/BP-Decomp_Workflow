// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct ArbStateRankUp {
		// BrnArbStateRankUp.h:66
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

// BrnArbStateRankUp.h:37
struct BrnDirector::ArbStateRankUp : public BrnDirector::ArbitratorState {
private:
	// BrnArbStateRankUp.h:77
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim> mIceCam;

	// BrnArbStateRankUp.h:79
	int32_t miRival;

	// BrnArbStateRankUp.h:81
	BrnDirector::ArbStateRankUp::EState meState;

public:
	// BrnArbStateRankUp.cpp:28
	virtual void Construct();

	// BrnArbStateRankUp.cpp:42
	virtual bool Prepare(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateRankUp.cpp:73
	virtual void Update(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateRankUp.cpp:163
	virtual bool Release(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateRankUp.cpp:174
	virtual void Destruct();

	// BrnArbStateRankUp.cpp:182
	virtual const char * GetName() const;

}

// BrnArbStateRankUp.h:37
void BrnDirector::ArbStateRankUp::ArbStateRankUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

