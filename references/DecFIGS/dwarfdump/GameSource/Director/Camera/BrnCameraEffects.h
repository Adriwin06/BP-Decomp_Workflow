// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		struct MotionBlurData;

		struct CameraEffects;

		struct DepthOfField;

		struct BehaviourHelperIndex;

		struct VehicleInfo;

		struct PlayerCrashInfo;

		struct BehaviourSharedInfo;

		struct BehaviourSharedPrepareReleaseInfo;

		struct BehaviourControllerLockInterface;

		struct CollisionPolicySharedInfo;

		struct FrustrumCollisionResolver;

		struct GeometryCollisionPredictor;

		struct VisibilityTest;

		struct GroundConstraint;

		struct ImpactSlomoController;

		struct ImpactShakeController;

		struct TrafficLaneTruck;

		struct NamedParameters;

		struct BehaviourParameterBank;

		struct BehaviourIceAnim;

		struct TestbedSetupSerialiser;

		struct BehaviourParameterNamingSerialiser;

		struct TextFileReadSerialiser;

		struct TextFileWriteSerialiser;

		struct CollisionPolicyAttachedToVehicle;

		struct CollisionPolicy;

		struct VisibilityCollisionPolicy;

		struct CollisionPolicyStayOutOfWalls;

		// BrnCameraEffects.h:36
		const float KF_SUPER_SLO_MO_FACTOR;

		// BrnCameraEffects.h:37
		const float KF_SLO_MO_FACTOR;

	}

}

// BrnCameraEffects.h:45
struct BrnDirector::Camera::MotionBlurData {
	// BrnCameraEffects.h:76
	extern const float32_t KF_DEFAULT_CAR_BLEND_AMOUNT;

	// BrnCameraEffects.h:77
	extern const float32_t KF_DEFAULT_WORLD_BLEND_AMOUNT;

private:
	// BrnCameraEffects.h:81
	float32_t mfCarsBlurAmount;

	// BrnCameraEffects.h:82
	float32_t mfWorldBlurAmount;

	// BrnCameraEffects.h:83
	bool mbIsActive;

	// BrnCameraEffects.h:84
	bool mbIsExpensiveMotionBlur;

public:
	// BrnCameraEffects.h:49
	void Construct();

	// BrnCameraEffects.h:56
	void Set(bool, bool, float32_t, float32_t);

	// BrnCameraEffects.h:59
	float32_t GetCarsBlendAmount() const;

	// BrnCameraEffects.h:62
	float32_t GetWorldBlendAmount() const;

	// BrnCameraEffects.h:65
	bool IsActive() const;

	// BrnCameraEffects.h:68
	bool IsExpensiveMotionBlur() const;

	// BrnCameraEffects.h:74
	const MotionBlurData Interpolate(const MotionBlurData &, const MotionBlurData &, float32_t);

}

// BrnCameraEffects.h:90
struct BrnDirector::Camera::CameraEffects {
private:
	// BrnCameraEffects.h:293
	extern float32_t KF_BLACK_BAR_SIZE;

	// BrnCameraEffects.h:295
	HookNameStringWrapper mStartHookNameStringWrapper;

	// BrnCameraEffects.h:296
	HookNameStringWrapper mStopHookNameStringWrapper;

	// BrnCameraEffects.h:298
	MotionBlurData mMotionBlurData;

	// BrnCameraEffects.h:300
	BackgroundEffectRequest mBackgroundEffectRequest;

	// BrnCameraEffects.h:302
	uint32_t muRequestedPostFX;

	// BrnCameraEffects.h:303
	float32_t mfStartHookBlendAmount;

	// BrnCameraEffects.h:304
	float32_t mfRaceEndEffectAmount;

	// BrnCameraEffects.h:306
	uint32_t muFadeColor;

	// BrnCameraEffects.h:307
	BrnDirector::OverlayEnums::EOverlay meOverlay;

	// BrnCameraEffects.h:309
	float32_t mfBloomThreshold;

	// BrnCameraEffects.h:310
	float32_t mfBloomLuminance;

	// BrnCameraEffects.h:311
	float32_t mfTimeOfDay;

	// BrnCameraEffects.h:313
	float32_t mfSimTimeScale;

	// BrnCameraEffects.h:314
	float32_t mfGameCameraBlend;

	// BrnCameraEffects.h:315
	float32_t mfCameraLag;

	// BrnCameraEffects.h:317
	float32_t mfBlackBarAmount;

	// BrnCameraEffects.h:320
	float32_t mfShakeAmplitude;

	// BrnCameraEffects.h:321
	float32_t mfShakeFrequency;

	// BrnCameraEffects.h:322
	uint8_t mu8ShakeType;

	// BrnCameraEffects.h:324
	uint8_t mu8GameCameraBlendCurve;

	// BrnCameraEffects.h:325
	uint8_t mu8GameCameraBlendMethod;

	// BrnCameraEffects.h:327
	bool mbHasStartHookNameString;

	// BrnCameraEffects.h:328
	bool mbHasStopHookNameString;

	// BrnCameraEffects.h:329
	bool mbSetTimeOfDay;

	// BrnCameraEffects.h:330
	bool mbRequestingScreenshot;

public:
	// BrnCameraEffects.h:94
	void Construct();

	// BrnCameraEffects.h:97
	void Clear();

	// BrnCameraEffects.h:102
	void SetFadeColor(uint32_t);

	// BrnCameraEffects.h:105
	uint32_t GetFadeColor() const;

	// BrnCameraEffects.h:109
	void SetOverlay(BrnDirector::OverlayEnums::EOverlay);

	// BrnCameraEffects.h:112
	BrnDirector::OverlayEnums::EOverlay GetOverlay() const;

	// BrnCameraEffects.h:115
	float32_t GetBloomThresholdModifier() const;

	// BrnCameraEffects.h:119
	void SetBloomThresholdModifier(float32_t);

	// BrnCameraEffects.h:122
	float32_t GetBloomLuminanceModifier() const;

	// BrnCameraEffects.h:126
	void SetBloomLuminanceModifier(float32_t);

	// BrnCameraEffects.h:130
	void SetShowBlackBars(bool);

	// BrnCameraEffects.h:134
	void SetShowBlackBarsAmount(float32_t);

	// BrnCameraEffects.h:138
	float32_t GetShowBlackBarsAmount() const;

	// BrnCameraEffects.h:142
	void SetTimeOfDay(float32_t);

	// BrnCameraEffects.h:145
	void ClearTimeOfDay();

	// BrnCameraEffects.h:148
	bool IsTimeOfDaySet() const;

	// BrnCameraEffects.h:151
	float32_t GetTimeOfDay() const;

	// BrnCameraEffects.h:155
	void SetRequestingScreenshot(bool);

	// BrnCameraEffects.h:158
	bool IsRequestingScreenshot() const;

	// BrnCameraEffects.h:163
	void SetStartHookNameString(const char *, float32_t);

	// BrnCameraEffects.h:166
	void ClearStartHookNameString();

	// BrnCameraEffects.h:169
	bool HasStartHookNameString() const;

	// BrnCameraEffects.h:172
	const char * GetStartHookNameString() const;

	// BrnCameraEffects.h:175
	float32_t GetStartHookNameBlendAmount() const;

	// BrnCameraEffects.h:178
	const HookNameStringWrapper & GetStartHookNameStringWrapper() const;

	// BrnCameraEffects.h:182
	void SetStopHookNameString(const char *);

	// BrnCameraEffects.h:185
	void ClearStopHookNameString();

	// BrnCameraEffects.h:188
	bool HasStopHookNameString() const;

	// BrnCameraEffects.h:191
	const char * GetStopHookNameString() const;

	// BrnCameraEffects.h:194
	const HookNameStringWrapper & GetStopHookNameStringWrapper() const;

	// BrnCameraEffects.h:198
	float GetSimTimeScale() const;

	// BrnCameraEffects.h:201
	void SetSimTimeScale(float);

	// BrnCameraEffects.h:204
	void SetUsingRealTime();

	// BrnCameraEffects.h:207
	void SetUsingNormalSloMo();

	// BrnCameraEffects.h:210
	void SetUsingSuperSloMo();

	// BrnCameraEffects.h:213
	bool IsUsingSuperSloMo() const;

	// BrnCameraEffects.h:216
	bool IsUsingNormalSloMo() const;

	// BrnCameraEffects.h:219
	float GetShakeAmplitude() const;

	// BrnCameraEffects.h:222
	void SetShakeAmplitude(float);

	// BrnCameraEffects.h:225
	float GetShakeFrequency() const;

	// BrnCameraEffects.h:228
	void SetShakeFrequency(float);

	// BrnCameraEffects.h:231
	uint8_t GetShakeType() const;

	// BrnCameraEffects.h:234
	void SetShakeType(uint8_t);

	// BrnCameraEffects.h:237
	float GetCameraLag() const;

	// BrnCameraEffects.h:240
	void SetCameraLag(float);

	// BrnCameraEffects.h:243
	float GetGameCameraBlend() const;

	// BrnCameraEffects.h:246
	void SetGameCameraBlend(float);

	// BrnCameraEffects.h:249
	uint8_t GetGameCameraBlendCurve() const;

	// BrnCameraEffects.h:252
	void SetGameCameraBlendCurve(uint8_t);

	// BrnCameraEffects.h:255
	uint8_t GetGameCameraBlendMethod() const;

	// BrnCameraEffects.h:258
	void SetGameCameraBlendMethod(uint8_t);

	// BrnCameraEffects.h:261
	uint32_t GetRequestedPostFX() const;

	// BrnCameraEffects.h:264
	void SetRequestedPostFX(uint32_t);

	// BrnCameraEffects.h:270
	const CameraEffects Interpolate(const CameraEffects &, const CameraEffects &, float32_t);

	// BrnCameraEffects.h:274
	void SetRaceEndEffectAmount(float32_t);

	// BrnCameraEffects.h:277
	float32_t GetRaceEndEffectAmount() const;

	// BrnCameraEffects.h:280
	MotionBlurData & GetMotionBlurData();

	// BrnCameraEffects.h:283
	const MotionBlurData & GetMotionBlurData() const;

	// BrnCameraEffects.h:286
	BackgroundEffectRequest & GetBackgroundEffectRequest();

	// BrnCameraEffects.h:289
	const BackgroundEffectRequest & GetBackgroundEffectRequest() const;

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// BrnCameraEffects.h:36
		const float KF_SUPER_SLO_MO_FACTOR;

		// BrnCameraEffects.h:37
		const float KF_SLO_MO_FACTOR;

	}

}

// BrnCameraEffects.h:76
extern const float32_t KF_DEFAULT_CAR_BLEND_AMOUNT;

// BrnCameraEffects.h:77
extern const float32_t KF_DEFAULT_WORLD_BLEND_AMOUNT;

// BrnCameraEffects.h:293
extern float32_t KF_BLACK_BAR_SIZE;

// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		struct MotionBlurData;

		struct CameraEffects;

		struct DepthOfField;

		struct BehaviourHelperIndex;

		struct VehicleInfo;

		struct PlayerCrashInfo;

		struct BehaviourSharedInfo;

		struct BehaviourControllerLockInterface;

		struct CollisionPolicySharedInfo;

		struct BehaviourInterpolate;

		struct NamedParameters;

		struct BehaviourParameterBank;

		// BrnCameraEffects.h:36
		const float KF_SUPER_SLO_MO_FACTOR;

		// BrnCameraEffects.h:37
		const float KF_SLO_MO_FACTOR;

	}

}

