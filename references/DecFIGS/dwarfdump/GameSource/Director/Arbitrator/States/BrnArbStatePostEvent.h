// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct ArbStatePostEvent {
		// BrnArbStatePostEvent.h:72
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

// BrnArbStatePostEvent.h:38
struct BrnDirector::ArbStatePostEvent : public BrnDirector::ArbitratorState {
private:
	// BrnArbStatePostEvent.h:83
	float mfTimeActive;

	// BrnArbStatePostEvent.h:85
	bool mbPlayedFlash;

	// BrnArbStatePostEvent.h:87
	BrnDirector::ArbStatePostEvent::EState meState;

	// BrnArbStatePostEvent.h:88
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim> mPostEventCam;

public:
	// BrnArbStatePostEvent.cpp:28
	virtual void Construct();

	// BrnArbStatePostEvent.cpp:44
	virtual bool Prepare(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStatePostEvent.cpp:86
	virtual void Update(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStatePostEvent.cpp:295
	virtual bool Release(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStatePostEvent.cpp:308
	virtual void Destruct();

	// BrnArbStatePostEvent.cpp:317
	virtual const char * GetName() const;

private:
	// BrnArbStatePostEvent.cpp:171
	Camera::ShotReference & PickAppropriateShot(const shotgroup &, BrnDirector::ArbStateSharedInfo &);

}

// BrnArbStatePostEvent.h:38
void BrnDirector::ArbStatePostEvent::ArbStatePostEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

