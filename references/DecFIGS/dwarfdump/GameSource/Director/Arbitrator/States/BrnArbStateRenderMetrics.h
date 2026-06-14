// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct ArbStateRenderMetrics {
		// BrnArbStateRenderMetrics.h:66
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

// BrnArbStateRenderMetrics.h:37
struct BrnDirector::ArbStateRenderMetrics : public BrnDirector::ArbitratorState {
private:
	// BrnArbStateRenderMetrics.h:77
	BehaviourHandle<BrnDirector::Camera::BehaviourRenderMetrics> mCam;

	// BrnArbStateRenderMetrics.h:79
	BrnDirector::ArbStateRenderMetrics::EState meState;

public:
	// BrnArbStateRenderMetrics.cpp:28
	virtual void Construct();

	// BrnArbStateRenderMetrics.cpp:42
	virtual bool Prepare(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateRenderMetrics.cpp:72
	virtual void Update(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateRenderMetrics.cpp:142
	virtual bool Release(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateRenderMetrics.cpp:153
	virtual void Destruct();

	// BrnArbStateRenderMetrics.cpp:161
	virtual const char * GetName() const;

}

// BrnArbStateRenderMetrics.h:37
void BrnDirector::ArbStateRenderMetrics::ArbStateRenderMetrics() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

