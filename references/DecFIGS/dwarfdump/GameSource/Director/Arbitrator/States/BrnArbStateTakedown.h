// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct B3ClassicTakedownPlayer {
		// BrnArbStateTakedown.h:96
		enum EState {
			E_STATE_INACTIVE = 0,
			E_STATE_PREPARING = 1,
			E_STATE_FLYBACK = 2,
			E_STATE_INTERPOLATING_TO_GAMEPLAY = 3,
			E_STATE_FINISHED = 4,
			E_NUM_STATES = 5,
		}

	}

	// Declaration
	struct DestructionPathTakedownPlayer {
		// BrnArbStateTakedown.h:146
		enum EState {
			E_STATE_INACTIVE = 0,
			E_STATE_PREPARING = 1,
			E_STATE_FLYBACK1 = 2,
			E_STATE_FLYBACK2 = 3,
			E_STATE_FINISHED = 4,
			E_NUM_STATES = 5,
		}

	}

	// Declaration
	struct DriveByTakedownPlayer {
		// BrnArbStateTakedown.h:193
		enum EState {
			E_STATE_INACTIVE = 0,
			E_STATE_PREPARING = 1,
			E_STATE_DRIVEBY = 2,
			E_STATE_FINISHED = 3,
			E_NUM_STATES = 4,
		}

	}

	// Declaration
	struct SimpleIceTakedownPlayer {
		// BrnArbStateTakedown.h:242
		enum EState {
			E_STATE_INACTIVE = 0,
			E_STATE_PREPARING = 1,
			E_STATE_ACTIVE = 2,
			E_STATE_FINISHED = 3,
			E_NUM_STATES = 4,
		}

	}

	// Declaration
	struct ShutdownTakedownPlayer {
		// BrnArbStateTakedown.h:300
		enum EState {
			E_STATE_INACTIVE = 0,
			E_STATE_PREPARING = 1,
			E_STATE_LOOKBACK = 2,
			E_STATE_FLYBACK = 3,
			E_STATE_ZOOM1 = 4,
			E_STATE_ZOOM2 = 5,
			E_STATE_ZOOM3 = 6,
			E_STATE_RELEASING = 7,
			E_STATE_FINISHED = 8,
			E_NUM_STATES = 9,
		}

	}

	// Declaration
	struct ArbStateTakedown {
		// BrnArbStateTakedown.h:353
		enum ETakedownType {
			E_TYPE_B3CLASSIC = 0,
			E_NUM_TYPES = 1,
		}

		// BrnArbStateTakedown.h:364
		enum EState {
			E_STATE_INACTIVE = 0,
			E_STATE_PREPARING = 1,
			E_STATE_TAKEDOWN_PLAYING = 2,
			E_STATE_ROAD_RAGE_TAKEDOWN_PLAYING = 3,
			E_STATE_CHANGING_TO_ROAMING = 4,
			E_STATE_RELEASING = 5,
			E_NUM_STATES = 6,
		}

	}

}

// BrnArbStateTakedown.h:323
struct BrnDirector::ArbStateTakedown : public BrnDirector::ArbitratorState {
private:
	// BrnArbStateTakedown.h:380
	BrnDirector::B3ClassicTakedownPlayer mClassicTakedown;

	// BrnArbStateTakedown.h:381
	BrnDirector::DestructionPathTakedownPlayer mDestructionPathTakedown;

	// BrnArbStateTakedown.h:382
	BrnDirector::SimpleIceTakedownPlayer mSimpleIceTakedown;

	// BrnArbStateTakedown.h:383
	BrnDirector::ShutdownTakedownPlayer mShutdownTakedown;

	// BrnArbStateTakedown.h:384
	BrnDirector::DriveByTakedownPlayer mDriveByTakedown;

	// BrnArbStateTakedown.h:386
	ImpactShakeController mImpactShakeController;

	// BrnArbStateTakedown.h:388
	BehaviourHandle<BrnDirector::Camera::BehaviourAftertouchCrash> mTakedownDebugCam;

	// BrnArbStateTakedown.h:390
	BehaviourHandle<BrnDirector::Camera::BehaviourGyroCam> mGyroCam;

	// BrnArbStateTakedown.h:391
	BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate> mInterpolator;

	// BrnArbStateTakedown.h:392
	BrnDirector::Camera::BehaviourInterpolate::Parameters mInterpolatorParams;

	// BrnArbStateTakedown.h:394
	MomentSelector mMomentSelector;

	// BrnArbStateTakedown.h:396
	BrnDirector::TakedownPlayer * mpCurrentTakedown;

	// BrnArbStateTakedown.h:397
	BrnDirector::ArbStateTakedown::ETakedownType meTakedownType;

	// BrnArbStateTakedown.h:398
	int32_t miIceMovieIndex;

	// BrnArbStateTakedown.h:399
	int32_t miRoadRageRDCutCount;

	// BrnArbStateTakedown.h:401
	float32_t mfFailsafeTimer;

	// BrnArbStateTakedown.h:402
	float32_t mfActiveTime;

	// BrnArbStateTakedown.h:403
	BrnDirector::ArbStateTakedown::EState meState;

	// BrnArbStateTakedown.h:405
	bool mbAlwaysUseShutdownCam;

	// BrnArbStateTakedown.h:406
	bool mbUseTakedownDebugCam;

	// BrnArbStateTakedown.h:407
	bool mbHasTriggeredFlash;

	// BrnArbStateTakedown.cpp:28
	extern const int32_t KI_MAX_ROADRAGE_CUTS = 2;

	// BrnArbStateTakedown.cpp:26
	extern const float32_t KF_TRANSITION_TIME;

	// BrnArbStateTakedown.cpp:27
	extern const float32_t KF_MIN_FAILSAFE_TIME;

public:
	// BrnArbStateTakedown.cpp:994
	virtual void Construct();

	// BrnArbStateTakedown.cpp:1040
	virtual bool Prepare(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTakedown.cpp:1146
	virtual void Update(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTakedown.cpp:1383
	virtual bool Release(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTakedown.cpp:1401
	virtual void Destruct();

	// BrnArbStateTakedown.cpp:1410
	virtual const char * GetName() const;

private:
	// BrnArbStateTakedown.cpp:1420
	void PickNewTakedownType(BrnDirector::ArbStateSharedInfo &);

}

// BrnArbStateTakedown.h:260
struct BrnDirector::ShutdownTakedownPlayer : public BrnDirector::TakedownPlayer {
private:
	// BrnArbStateTakedown.h:286
	BehaviourHandle<BrnDirector::Camera::BehaviourGyroCam> mGyroCam;

	// BrnArbStateTakedown.h:287
	BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate> mInterpolaterA;

	// BrnArbStateTakedown.h:288
	BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate> mInterpolaterB;

	// BrnArbStateTakedown.h:289
	BehaviourHandle<BrnDirector::Camera::BehaviourLooseAttachment> mLooseAttachment;

	// BrnArbStateTakedown.h:291
	BehaviourHandle<BrnDirector::Camera::BehaviourLooseAttachment> mZoom1;

	// BrnArbStateTakedown.h:292
	BehaviourHandle<BrnDirector::Camera::BehaviourLooseAttachment> mZoom2;

	// BrnArbStateTakedown.h:293
	BehaviourHandle<BrnDirector::Camera::BehaviourLooseAttachment> mZoom3;

	// BrnArbStateTakedown.h:295
	BrnDirector::Camera::BehaviourInterpolate::Parameters mInterpolateParamsA;

	// BrnArbStateTakedown.h:296
	BrnDirector::Camera::BehaviourInterpolate::Parameters mInterpolateParamsB;

	// BrnArbStateTakedown.h:297
	BrnDirector::Camera::BehaviourInterpolate::Parameters mInterpolateParamsC;

	// BrnArbStateTakedown.h:298
	BrnDirector::Camera::BehaviourLooseAttachment::Parameters mLooseAttachmentParameters;

	// BrnArbStateTakedown.h:315
	float32_t mfActiveTime;

	// BrnArbStateTakedown.h:316
	BrnDirector::ShutdownTakedownPlayer::EState meState;

	// BrnArbStateTakedown.h:317
	bool mbUsedFinalShotImpact;

public:
	// BrnArbStateTakedown.cpp:701
	void Construct();

	// BrnArbStateTakedown.cpp:737
	virtual bool Prepare(const BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTakedown.cpp:774
	virtual Camera Update(const BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTakedown.cpp:970
	virtual void Release(const BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTakedown.cpp:986
	virtual bool HasFinished() const;

}

// BrnArbStateTakedown.h:210
struct BrnDirector::SimpleIceTakedownPlayer : public BrnDirector::TakedownPlayer {
private:
	// BrnArbStateTakedown.h:240
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim> mIceCam;

	// BrnArbStateTakedown.h:252
	Camera::ShotReference * mpIceAnim;

	// BrnArbStateTakedown.h:253
	float32_t mfActiveTime;

	// BrnArbStateTakedown.h:254
	BrnDirector::SimpleIceTakedownPlayer::EState meState;

public:
	// BrnArbStateTakedown.cpp:581
	void Construct();

	// BrnArbStateTakedown.cpp:592
	virtual bool Prepare(const BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTakedown.cpp:622
	virtual Camera Update(const BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTakedown.cpp:684
	virtual void Release(const BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTakedown.cpp:693
	virtual bool HasFinished() const;

	// BrnArbStateTakedown.h:236
	void SetIceAnim(Camera::ShotReference *);

}

// BrnArbStateTakedown.h:164
struct BrnDirector::DriveByTakedownPlayer : public BrnDirector::TakedownPlayer {
private:
	// BrnArbStateTakedown.h:190
	BehaviourHandle<BrnDirector::Camera::BehaviourGyroCam> mGyroCamDriveByL;

	// BrnArbStateTakedown.h:191
	BehaviourHandle<BrnDirector::Camera::BehaviourGyroCam> mGyroCamDriveByR;

	// BrnArbStateTakedown.h:203
	float32_t mfActiveTime;

	// BrnArbStateTakedown.h:204
	BrnDirector::DriveByTakedownPlayer::EState meState;

public:
	// BrnArbStateTakedown.cpp:426
	void Construct();

	// BrnArbStateTakedown.cpp:439
	virtual bool Prepare(const BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTakedown.cpp:475
	virtual Camera Update(const BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTakedown.cpp:561
	virtual void Release(const BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTakedown.cpp:572
	virtual bool HasFinished() const;

}

// BrnArbStateTakedown.h:114
struct BrnDirector::DestructionPathTakedownPlayer : public BrnDirector::TakedownPlayer {
private:
	// BrnArbStateTakedown.h:140
	BehaviourHandle<BrnDirector::Camera::BehaviourGyroCam> mGyroCamA;

	// BrnArbStateTakedown.h:141
	BehaviourHandle<BrnDirector::Camera::BehaviourGyroCam> mGyroCamB;

	// BrnArbStateTakedown.h:142
	BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate> mInterpolaterA;

	// BrnArbStateTakedown.h:143
	BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate> mInterpolaterB;

	// BrnArbStateTakedown.h:144
	BrnDirector::Camera::BehaviourInterpolate::Parameters mInterpolateParams;

	// BrnArbStateTakedown.h:157
	float32_t mfActiveTime;

	// BrnArbStateTakedown.h:158
	BrnDirector::DestructionPathTakedownPlayer::EState meState;

public:
	// BrnArbStateTakedown.cpp:228
	void Construct();

	// BrnArbStateTakedown.cpp:247
	virtual bool Prepare(const BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTakedown.cpp:313
	virtual Camera Update(const BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTakedown.cpp:405
	virtual void Release(const BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTakedown.cpp:418
	virtual bool HasFinished() const;

}

// BrnArbStateTakedown.h:65
struct BrnDirector::B3ClassicTakedownPlayer : public BrnDirector::TakedownPlayer {
private:
	// BrnArbStateTakedown.h:91
	BehaviourHandle<BrnDirector::Camera::BehaviourGyroCam> mGyroCam;

	// BrnArbStateTakedown.h:92
	BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate> mInterpolaterA;

	// BrnArbStateTakedown.h:93
	BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate> mInterpolaterB;

	// BrnArbStateTakedown.h:94
	BrnDirector::Camera::BehaviourInterpolate::Parameters mInterpolateParams;

	// BrnArbStateTakedown.h:107
	float32_t mfActiveTime;

	// BrnArbStateTakedown.h:108
	BrnDirector::B3ClassicTakedownPlayer::EState meState;

public:
	// BrnArbStateTakedown.cpp:37
	void Construct();

	// BrnArbStateTakedown.cpp:55
	virtual bool Prepare(const BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTakedown.cpp:103
	virtual Camera Update(const BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTakedown.cpp:208
	virtual void Release(const BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTakedown.cpp:220
	virtual bool HasFinished() const;

}

// BrnArbStateTakedown.h:40
struct BrnDirector::TakedownPlayer {
	int (*)(...) * _vptr.TakedownPlayer;

public:
	// BrnArbStateTakedown.h:46
	virtual bool Prepare(const BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTakedown.h:51
	virtual Camera Update(const BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTakedown.h:56
	virtual void Release(const BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTakedown.h:59
	virtual bool HasFinished() const;

}

// BrnArbStateTakedown.h:409
extern const int32_t KI_MAX_ROADRAGE_CUTS;

// BrnArbStateTakedown.h:410
extern const float32_t KF_TRANSITION_TIME;

// BrnArbStateTakedown.h:411
extern const float32_t KF_MIN_FAILSAFE_TIME;

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// Declaration
	struct ArbStateTakedown {
	public:
		ArbStateTakedown();

	private:
		// BrnArbStateTakedown.h:409
		extern const int32_t KI_MAX_ROADRAGE_CUTS;

		// BrnArbStateTakedown.h:410
		extern const float32_t KF_TRANSITION_TIME;

		// BrnArbStateTakedown.h:411
		extern const float32_t KF_MIN_FAILSAFE_TIME;

	}

}

// BrnArbStateTakedown.h:40
struct BrnDirector::TakedownPlayer {
	int (*)(...) * _vptr.TakedownPlayer;

public:
	void TakedownPlayer(const TakedownPlayer &);

	void TakedownPlayer();

	// BrnArbStateTakedown.h:46
	virtual bool Prepare(const BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTakedown.h:51
	virtual Camera Update(const BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTakedown.h:56
	virtual void Release(const BrnDirector::ArbitratorState *, BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateTakedown.h:59
	virtual bool HasFinished() const;

}

// BrnArbStateTakedown.h:323
void BrnDirector::ArbStateTakedown::ArbStateTakedown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnArbStateTakedown.h:65
void BrnDirector::B3ClassicTakedownPlayer::B3ClassicTakedownPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnArbStateTakedown.h:40
void BrnDirector::TakedownPlayer::TakedownPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnArbStateTakedown.h:114
void BrnDirector::DestructionPathTakedownPlayer::DestructionPathTakedownPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnArbStateTakedown.h:210
void BrnDirector::SimpleIceTakedownPlayer::SimpleIceTakedownPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnArbStateTakedown.h:260
void BrnDirector::ShutdownTakedownPlayer::ShutdownTakedownPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnArbStateTakedown.h:164
void BrnDirector::DriveByTakedownPlayer::DriveByTakedownPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

