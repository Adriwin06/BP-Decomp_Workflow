// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct ArbStateOnlineCarSelect {
		// BrnArbStateOnlineCarSelect.h:66
		enum EState {
			E_STATE_INACTIVE = 0,
			E_STATE_PREPARING = 1,
			E_STATE_SELECTING_CAR = 2,
			E_STATE_SELECTING_LIVERY = 3,
			E_STATE_WAIT_TO_CHANGE_TO_INTRO = 4,
			E_STATE_CHANGING_TO_INTRO = 5,
			E_STATE_CHANGING_TO_ROAMING = 6,
			E_STATE_RELEASING = 7,
			E_NUM_STATES = 8,
		}

	}

}

// BrnArbStateOnlineCarSelect.h:37
struct BrnDirector::ArbStateOnlineCarSelect : public BrnDirector::ArbitratorState {
private:
	// BrnArbStateOnlineCarSelect.h:80
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim> mIceCam;

	// BrnArbStateOnlineCarSelect.h:81
	BehaviourHandle<BrnDirector::Camera::BehaviourRotateAboutVehicle> mLookAroundCarCam;

	// BrnArbStateOnlineCarSelect.h:83
	bool mbWasCarModScreen;

	// BrnArbStateOnlineCarSelect.h:85
	BrnDirector::ArbStateOnlineCarSelect::EState meState;

public:
	// BrnArbStateOnlineCarSelect.cpp:28
	virtual void Construct();

	// BrnArbStateOnlineCarSelect.cpp:43
	virtual bool Prepare(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateOnlineCarSelect.cpp:74
	virtual void Update(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateOnlineCarSelect.cpp:282
	virtual bool Release(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateOnlineCarSelect.cpp:294
	virtual void Destruct();

	// BrnArbStateOnlineCarSelect.cpp:302
	virtual const char * GetName() const;

}

// BrnArbStateOnlineCarSelect.h:37
void BrnDirector::ArbStateOnlineCarSelect::ArbStateOnlineCarSelect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

