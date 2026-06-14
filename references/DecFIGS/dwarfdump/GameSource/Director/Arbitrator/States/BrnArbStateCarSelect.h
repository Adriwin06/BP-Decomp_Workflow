// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct ArbStateCarSelect {
		// BrnArbStateCarSelect.h:116
		enum EState {
			E_STATE_INACTIVE = 0,
			E_STATE_PREPARING = 1,
			E_STATE_GAME_INTRO_PART_ONE = 2,
			E_STATE_GAME_INTRO_PART_TWO = 3,
			E_STATE_GAME_INTRO_PART_THREE = 4,
			E_STATE_INTRO = 5,
			E_STATE_OUTRO = 6,
			E_STATE_CAR_UNLOCK = 7,
			E_STATE_ACTIVE = 8,
			E_STATE_ROTATE_ABOUT_CAR = 9,
			E_STATE_WAIT_FOR_CAR_DROP = 10,
			E_STATE_IDLE = 11,
			E_STATE_WAIT_FOR_AUDIO = 12,
			E_STATE_CHANGING_TO_ROAMING = 13,
			E_STATE_RELEASING = 14,
			E_NUM_STATES = 15,
		}

	}

}

// BrnArbStateCarSelect.h:39
struct BrnDirector::InterpolaterHelper {
private:
	// BrnArbStateCarSelect.h:75
	BehaviourHandle<BrnDirector::Camera::BehaviourInterpolate> mInterpolater;

	// BrnArbStateCarSelect.h:76
	BrnDirector::Camera::BehaviourInterpolate::Parameters mInterpolaterParams;

	// BrnArbStateCarSelect.h:77
	const BrnDirector::ArbitratorState * mpArbStateParent;

public:
	// BrnArbStateCarSelect.h:44
	void Construct(const BrnDirector::ArbitratorState *);

	// BrnArbStateCarSelect.h:53
	void Prepare(float32_t, BehaviourHelperIndex, BehaviourHelperIndex, BehaviourManager *, BrnDirector::CameraInterpolationController::EInterpolationMethod, BrnDirector::CameraInterpolationController::EInterpolationMapping);

	// BrnArbStateCarSelect.h:56
	void Release();

	// BrnArbStateCarSelect.h:59
	bool IsPrepared() const;

	// BrnArbStateCarSelect.h:62
	bool IsReady() const;

	// BrnArbStateCarSelect.h:65
	bool HasFinished() const;

	// BrnArbStateCarSelect.h:68
	Camera GetCamera() const;

	// BrnArbStateCarSelect.h:71
	BehaviourHelperIndex GetBehaviourHelperIndex() const;

}

// BrnArbStateCarSelect.h:83
struct BrnDirector::ArbStateCarSelect : public BrnDirector::ArbitratorState {
private:
	// BrnArbStateCarSelect.h:161
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim> mTransitionCam;

	// BrnArbStateCarSelect.h:162
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim> mCarUnlockCam;

	// BrnArbStateCarSelect.h:163
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim> mIntroNoNewCars;

	// BrnArbStateCarSelect.h:164
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim> mIntroNewCars;

	// BrnArbStateCarSelect.h:165
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim> mGameIntro;

	// BrnArbStateCarSelect.h:166
	BehaviourHandle<BrnDirector::Camera::BehaviourIceAnim> mIdleCam;

	// BrnArbStateCarSelect.h:168
	BehaviourHandle<BrnDirector::Camera::BehaviourRotateAboutVehicle> mLookAroundCarCam;

	// BrnArbStateCarSelect.h:170
	InterpolaterHelper mToCarSelectInterpolater;

	// BrnArbStateCarSelect.h:171
	InterpolaterHelper mToGameplayInterpolater;

	// BrnArbStateCarSelect.h:172
	InterpolaterHelper mFromGameplayInterpolater;

	// BrnArbStateCarSelect.h:174
	Camera::ShotReference * mpShotIntroNoNewCars;

	// BrnArbStateCarSelect.h:175
	Camera::ShotReference * mpIntroNewCarsShot;

	// BrnArbStateCarSelect.h:176
	Camera::ShotReference * mpOutroShot;

	// BrnArbStateCarSelect.h:177
	Camera::ShotReference * mpWaitForAudioShot;

	// BrnArbStateCarSelect.h:178
	Camera::ShotReference * mpLeftToRight;

	// BrnArbStateCarSelect.h:179
	Camera::ShotReference * mpRightToLeft;

	// BrnArbStateCarSelect.h:180
	Camera::ShotReference * mpIdle;

	// BrnArbStateCarSelect.h:182
	CameraImpactEffect mImpactEffect;

	// BrnArbStateCarSelect.h:184
	const shotgroup * mpRivalUnlockShotGroup;

	// BrnArbStateCarSelect.h:186
	float32_t mfTimeInState;

	// BrnArbStateCarSelect.h:187
	float32_t mfTimeWaitingToLookAtOriginalSelection;

	// BrnArbStateCarSelect.h:188
	float32_t mfTimeBeforeFadeInAfterLiveryChange;

	// BrnArbStateCarSelect.h:190
	bool mbIsLeft;

	// BrnArbStateCarSelect.h:191
	bool mbHasCarsToUnlock;

	// BrnArbStateCarSelect.h:193
	bool mbIsFirstCarSelect;

	// BrnArbStateCarSelect.h:195
	bool mbWaitingForCarToTouchGround;

	// BrnArbStateCarSelect.h:196
	bool mbWaitingForCarToSpawn;

	// BrnArbStateCarSelect.h:197
	bool mbSafeToBeAttachedToCar;

	// BrnArbStateCarSelect.h:199
	bool mbWaitingToLookAtOriginalSelection;

	// BrnArbStateCarSelect.h:201
	bool mbFadingOutCarUnlockMovie;

	// BrnArbStateCarSelect.h:203
	uint32_t muRivalUnlockMovie;

	// BrnArbStateCarSelect.h:204
	uint32_t muCarUnlockMovie;

	// BrnArbStateCarSelect.cpp:21
	extern float32_t KF_MAX_EARLY_OUT_OF_TRANSITION_CAM_SECS;

	// BrnArbStateCarSelect.cpp:22
	extern float32_t KF_TIME_BEFORE_ROTATE_ABOUT_CAR_SECS;

	// BrnArbStateCarSelect.cpp:23
	extern float32_t KF_CAR_STILLNESS_THRESHOLD;

	// BrnArbStateCarSelect.cpp:24
	extern float32_t KF_IMPACT_THRESHOLD;

	// BrnArbStateCarSelect.cpp:25
	extern float32_t KF_IMPACT_AMOUNT;

	// BrnArbStateCarSelect.h:212
	BrnDirector::ArbStateCarSelect::EState meState;

public:
	// BrnArbStateCarSelect.cpp:66
	virtual void Construct();

	// BrnArbStateCarSelect.cpp:98
	virtual bool Prepare(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateCarSelect.cpp:230
	virtual void Update(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateCarSelect.cpp:1017
	virtual bool Release(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateCarSelect.cpp:1038
	virtual void Destruct();

	// BrnArbStateCarSelect.cpp:1046
	virtual const char * GetName() const;

private:
	// BrnArbStateCarSelect.cpp:183
	void StartCarUnlockCam(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateCarSelect.cpp:1056
	const shotgroup * SetupJunkyardShotgroup(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateCarSelect.h:219
	Camera::ShotReference * GetTransitionMovie(bool);

}

// BrnArbStateCarSelect.h:83
void BrnDirector::ArbStateCarSelect::ArbStateCarSelect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

