// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct ArbStateCrashMode {
		// BrnArbStateCrashMode.h:72
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

// BrnArbStateCrashMode.h:37
struct BrnDirector::ArbStateCrashMode : public BrnDirector::ArbitratorState {
private:
	// BrnArbStateCrashMode.h:83
	BehaviourHandle<BrnDirector::Camera::BehaviourAftertouchCrash> mAftertouch;

	// BrnArbStateCrashMode.h:85
	BrnDirector::ArbStateCrashMode::EState meState;

	// BrnArbStateCrashMode.h:87
	float32_t mfFlashTime;

	// BrnArbStateCrashMode.h:88
	float32_t mfBordersTime;

	// BrnArbStateCrashMode.h:90
	float32_t mfBlurInTime;

	// BrnArbStateCrashMode.h:91
	float32_t mfBlurOutTime;

	// BrnArbStateCrashMode.h:92
	float32_t mfCurrentBlur;

	// BrnArbStateCrashMode.h:93
	float32_t mfMaximumBlur;

	// BrnArbStateCrashMode.h:94
	float32_t mfBlurRampSpeed;

	// BrnArbStateCrashMode.h:95
	bool mbLinearBlurRamp;

	// BrnArbStateCrashMode.h:96
	bool mbBlurShake;

	// BrnArbStateCrashMode.h:98
	float32_t mfTiltAngle;

	// BrnArbStateCrashMode.h:99
	float32_t mfTargetTiltAngle;

	// BrnArbStateCrashMode.h:100
	float32_t mfTiltChangeTime;

	// BrnArbStateCrashMode.h:102
	float32_t mfCloseupTime;

	// BrnArbStateCrashMode.h:103
	float32_t mfTimeSinceCloseup;

	// BrnArbStateCrashMode.h:105
	bool mbDoingCloseup;

	// BrnArbStateCrashMode.h:106
	bool mbAllowCloseup;

	// BrnArbStateCrashMode.h:107
	bool mbSuperSloMoCloseUp;

	// BrnBehaviourAftertouchCrash.cpp:40
	extern float32_t KF_PLAYER_SPEED_HEIGHT_MODIFIER;

	// BrnArbStateCrashMode.cpp:41
	extern float32_t KF_MIN_TIME_BETWEEN_CLOSEUPS;

	// BrnArbStateCrashMode.cpp:42
	extern float32_t KF_CLOSEUP_DURATION;

	// BrnArbStateCrashMode.cpp:43
	extern float32_t KF_CLOSEUP_BLEND_IN_DURATION;

public:
	// BrnArbStateCrashMode.cpp:50
	virtual void Construct();

	// BrnArbStateCrashMode.cpp:84
	virtual bool Prepare(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateCrashMode.cpp:110
	virtual void Update(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateCrashMode.cpp:345
	virtual bool Release(BrnDirector::ArbStateSharedInfo &);

	// BrnArbStateCrashMode.cpp:356
	virtual void Destruct();

	// BrnArbStateCrashMode.cpp:365
	virtual const char * GetName() const;

private:
	// BrnArbStateCrashMode.cpp:324
	void DoCloseup(BrnDirector::ArbStateSharedInfo &);

}

// BrnArbStateCrashMode.h:37
void BrnDirector::ArbStateCrashMode::ArbStateCrashMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

