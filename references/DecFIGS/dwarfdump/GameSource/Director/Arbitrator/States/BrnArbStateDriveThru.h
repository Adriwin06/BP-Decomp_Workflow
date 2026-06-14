// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct ArbStateDriveThru {
		// BrnArbStateDriveThru.h:73
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

// BrnArbStateDriveThru.h:37
struct BrnDirector::ArbStateDriveThru : public BrnDirector::ArbitratorState {
private:
	// BrnArbStateDriveThru.h:84
	BehaviourHandle<BrnDirector::Camera::Behaviour> mDriveThruBehaviourHandle;

	// BrnArbStateDriveThru.h:85
	BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate> mInterpolater;

	// BrnArbStateDriveThru.h:86
	BrnDirector::Camera::BehaviourInterpolate::Parameters mInterpolaterParams;

	// BrnArbStateDriveThru.h:87
	BrnDirector::ArbStateDriveThru::EState meState;

	// BrnArbStateDriveThru.h:88
	bool mbIsReversed;

public:
	// BrnArbStateDriveThru.cpp:28
	virtual void Construct();

	// BrnArbStateDriveThru.cpp:46
	virtual bool Prepare(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateDriveThru.cpp:147
	virtual void Update(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateDriveThru.cpp:211
	virtual bool Release(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateDriveThru.cpp:224
	virtual void Destruct();

	// BrnArbStateDriveThru.cpp:233
	virtual const char * GetName() const;

private:
	// BrnArbStateDriveThru.cpp:246
	void TransformCameraToDriveThruSpace(Matrix44Affine &, Matrix44Affine, Matrix44Affine, bool);

}

// BrnArbStateDriveThru.h:37
void BrnDirector::ArbStateDriveThru::ArbStateDriveThru() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

