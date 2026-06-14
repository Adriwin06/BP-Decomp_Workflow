// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct ArbStateTestbed {
		// BrnArbStateTestbed.h:92
		enum EState {
			E_STATE_INACTIVE = 0,
			E_STATE_GENERIC_PREPARE = 1,
			E_STATE_GENERIC_UPDATE = 2,
			E_STATE_RELEASING = 3,
			E_NUM_STATES = 4,
		}

	}

}

// BrnArbStateTestbed.h:47
struct BrnDirector::ArbStateTestbed : public BrnDirector::ArbitratorState {
private:
	// BrnArbStateTestbed.h:103
	BehaviourHandle<BrnDirector::Camera::BehaviourAftertouchCam> mAftertouch;

	// BrnArbStateTestbed.h:104
	BehaviourHandle<BrnDirector::Camera::BehaviourAftertouchCrash> mAftertouchCrash;

	// BrnArbStateTestbed.h:105
	BehaviourHandle<BrnDirector::Camera::BehaviourRig> mRigCam;

	// BrnArbStateTestbed.h:106
	BehaviourHandle<BrnDirector::Camera::BehaviourHeliCam> mHeliCam;

	// BrnArbStateTestbed.h:107
	BehaviourHandle<BrnDirector::Camera::BehaviourBystanderCam> mBystander;

	// BrnArbStateTestbed.h:108
	BehaviourHandle<BrnDirector::Camera::BehaviourGyroCam> mGyroCam;

	// BrnArbStateTestbed.h:109
	BehaviourHandle<BrnDirector::Camera::BehaviourGameplayExternal> mGameplayExternal;

	// BrnArbStateTestbed.h:110
	BehaviourHandle<BrnDirector::Camera::BehaviourFailsafe> mFailsafe;

	// BrnArbStateTestbed.h:111
	BehaviourHandle<BrnDirector::Camera::BehaviourPassengerCam> mPassenger;

	// BrnArbStateTestbed.h:112
	BehaviourHandle<BrnDirector::Camera::BehaviourLooseAttachment> mLooseAttachment;

	// BrnArbStateTestbed.h:113
	BehaviourHandle<BrnDirector::Camera::BehaviourFixedCam> mFixedCam;

	// BrnArbStateTestbed.h:114
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim> mIceCam;

	// BrnArbStateTestbed.h:115
	BehaviourHandle<BrnDirector::Camera::BehaviourRotateAboutVehicle> mRotateAboutVehicleCam;

	// BrnArbStateTestbed.h:116
	BehaviourHandle<BrnDirector::Camera::BehaviourSpirallingDeathcam> mSpirallingDeathCam;

	// BrnArbStateTestbed.h:117
	BehaviourHandle<BrnDirector::Camera::BehaviourRoadRunner> mRoadRunner;

	// BrnArbStateTestbed.h:119
	Camera::ShotReference * mpShotRef;

	// BrnArbStateTestbed.h:120
	BrnDirector::Camera::Behaviour::Parameters * mpParameters;

	// BrnArbStateTestbed.h:121
	const Camera * mpCamera;

	// BrnArbStateTestbed.h:123
	float32_t mfRunningTime;

	// BrnArbStateTestbed.h:125
	BrnDirector::ArbStateTestbed::EState meState;

	// BrnArbStateTestbed.h:127
	bool mbLoopIceMovies;

	// BrnArbStateTestbed.cpp:28
	extern ArbStateTestbed * spTestbed;

	// BrnArbStateTestbed.cpp:27
	extern BrnDirector::DebugComponent * spDebugComponent;

	// BrnArbStateTestbed.h:132
	bool mbUseSlomo;

public:
	// BrnArbStateTestbed.cpp:35
	virtual void Construct();

	// BrnArbStateTestbed.cpp:67
	virtual bool Prepare(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTestbed.cpp:77
	virtual void Update(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTestbed.cpp:440
	virtual bool Release(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTestbed.cpp:297
	virtual void Destruct();

	// BrnArbStateTestbed.cpp:306
	virtual const char * GetName() const;

	// BrnArbStateTestbed.h:156
	bool IsActive() const;

	// BrnArbStateTestbed.cpp:373
	void SetDebugComponent(BrnDirector::DebugComponent *);

	// BrnArbStateTestbed.cpp:384
	void RegisterIceAnimsWithDebugComponent(const shotgroup *, const BrnDirector::DirectorResourceManager &, const char *);

private:
	// BrnArbStateTestbed.cpp:342
	void RegisterParameters();

	// BrnArbStateTestbed.cpp:355
	void UnregisterParameters();

	// BrnArbStateTestbed.cpp:316
	void Deactivate(void *);

	// BrnArbStateTestbed.cpp:326
	void GenericActivateCam(void *);

	// BrnArbStateTestbed.cpp:423
	void ActivateIceCam(void *);

}

// BrnArbStateTestbed.h:47
void BrnDirector::ArbStateTestbed::ArbStateTestbed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

