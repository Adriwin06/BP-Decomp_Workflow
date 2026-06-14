// BrnEffectsDebugComponent.h:36
namespace BrnEffects {
	struct EffectsDebugJumping;

	struct EffectsDebugProps;

	struct BloomData;

	struct VignetteData;

	struct DepthOfFieldData;

	struct BlurData;

	struct TintData;

	struct TintData2d;

	struct EffectsEnvironmentInterface;

	struct PropToVFXMaterialMapping;

	struct PropCollisions;

	struct BrnCrashTriangleCache;

	struct ParticleEffectHelper;

	struct RaceCarParticleEffectHelper;

	struct ActiveRaceCarData;

	struct EffectsDebugComponent;

	struct TaggedEffect;

	struct WheelStateMachine;

	struct CarState;

	struct BurstAccumulator;

	struct JumpStateMachine;

	struct BoostStateMachine;

	struct BrnCrashLineTriangleCacheFormat;

	struct BrnCrashTrianglePackedFormat;

	struct BrnGlassSmashEffect;

	struct BrnEffectsGlassManager;

	struct EffectsModuleParams;

	struct VFXRuntimeMaterialLef;

	struct EffectsStateMachine;

}

// BrnEffectsDebugComponent.h:47
struct BrnEffects::EffectsDebugJumping {
	// BrnEffectsDebugComponent.h:79
	bool mbForceJumping;

	// BrnEffectsDebugComponent.h:80
	float32_t mfJumpLandingSparkSpeed;

	// BrnEffectsDebugComponent.h:81
	float32_t mfLandingSparksTime;

	// BrnEffectsDebugComponent.h:82
	float32_t mfVapourDelayTime;

	// BrnEffectsDebugComponent.h:83
	float32_t mfVapourRampTime;

public:
	// BrnEffectsDebugComponent.h:50
	void EffectsDebugJumping();

	// BrnEffectsDebugComponent.h:59
	bool IsForceJumping() const;

	// BrnEffectsDebugComponent.h:64
	float32_t LandingSparksTime() const;

	// BrnEffectsDebugComponent.h:69
	float32_t VapourStartDelay() const;

	// BrnEffectsDebugComponent.h:74
	float32_t VapourRampEndTime() const;

}

// BrnEffectsDebugComponent.h:87
struct BrnEffects::EffectsDebugProps {
	// BrnEffectsDebugComponent.h:96
	bool mbEnable;

	// BrnEffectsDebugComponent.h:97
	uint32_t mMaterialIndex;

public:
	// BrnEffectsDebugComponent.h:90
	void EffectsDebugProps();

}

// BrnEffectsDebugComponent.h:110
struct BrnEffects::EffectsDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnEffectsDebugComponent.h:183
	EffectsModule * mpEffectsModule;

	// BrnEffectsDebugComponent.h:185
	bool mbBypassAllVFXProcessing;

	// BrnEffectsDebugComponent.h:187
	bool mbSparksEnabled;

	// BrnEffectsDebugComponent.h:188
	bool mbTrailsEnabled;

	// BrnEffectsDebugComponent.h:189
	bool mbDebrisEnabled;

	// BrnEffectsDebugComponent.h:190
	bool mbGlassEnabled;

	// BrnEffectsDebugComponent.h:191
	bool mbPopcornEnabled;

	// BrnEffectsDebugComponent.h:192
	bool mbSimpleEnabled;

	// BrnEffectsDebugComponent.h:193
	bool mbLionEnabled;

	// BrnEffectsDebugComponent.h:194
	bool mbLionStatisticsEnabled;

	// BrnEffectsDebugComponent.h:195
	bool mbUseZFade;

	// BrnEffectsDebugComponent.h:196
	bool mbEngineCrashEffectsEnabled;

	// BrnEffectsDebugComponent.h:197
	bool mbSparksDebugEnabled;

	// BrnEffectsDebugComponent.h:198
	bool mbQAEnabled;

	// BrnEffectsDebugComponent.h:200
	bool mbEnabled;

	// BrnEffectsDebugComponent.h:201
	bool mbForceStateBlend;

	// BrnEffectsDebugComponent.h:202
	bool mbBoostTransition;

	// BrnEffectsDebugComponent.h:203
	bool mbForceFinishLineRendering;

	// BrnEffectsDebugComponent.h:204
	bool mbDumpRunningLionEffects;

	// BrnEffectsDebugComponent.h:205
	bool mbForceNonPlayerEffects;

	// BrnEffectsDebugComponent.h:207
	int mTagPointIndex;

	// BrnEffectsDebugComponent.h:208
	float32_t mfSimulationRate;

	// BrnEffectsDebugComponent.h:209
	float32_t mfForceStateBlendValue;

	// BrnEffectsDebugComponent.h:210
	float32_t mfTransitionMin;

	// BrnEffectsDebugComponent.h:211
	float32_t mfTransitionMax;

	// BrnEffectsDebugComponent.h:212
	float32_t mfBoostExhaustCutOffSpeed;

	// BrnEffectsDebugComponent.h:215
	bool mbBloom;

	// BrnEffectsDebugComponent.h:216
	bool mbVignette;

	// BrnEffectsDebugComponent.h:217
	bool mbDepthOfField;

	// BrnEffectsDebugComponent.h:218
	bool mbTint;

	// BrnEffectsDebugComponent.h:219
	bool mbTint2d;

	// BrnEffectsDebugComponent.h:220
	bool mbMotionBlur;

	// BrnEffectsDebugComponent.h:221
	bool mbMotionBlurEnableUserSettings;

	// BrnEffectsDebugComponent.h:222
	float32_t mfMotionBlurUserAmountCars;

	// BrnEffectsDebugComponent.h:223
	float32_t mfMotionBlurUserAmountWorld;

	// BrnEffectsDebugComponent.h:224
	bool mbMotionBlurUserHighQuality;

	// Unknown accessibility
	// BrnEffectsDebugComponent.h:230
	bool mbJunkyardVfxEdit;

	// Unknown accessibility
	// BrnEffectsDebugComponent.h:231
	bool mbJunkyardVfxShowAxes;

	// Unknown accessibility
	// BrnEffectsDebugComponent.h:232
	int mnJunkyardVfxId;

	// Unknown accessibility
	// BrnEffectsDebugComponent.h:233
	float32_t mfJunkyardVfxPosX;

	// Unknown accessibility
	// BrnEffectsDebugComponent.h:234
	float32_t mfJunkyardVfxPosY;

	// Unknown accessibility
	// BrnEffectsDebugComponent.h:235
	float32_t mfJunkyardVfxPosZ;

	// Unknown accessibility
	// BrnEffectsDebugComponent.h:236
	float32_t mfJunkyardVfxAngle;

	// BrnEffectsDebugComponent.h:240
	EffectsDebugJumping mJumpParams;

	// BrnEffectsDebugComponent.h:242
	EffectsDebugProps mPropParams;

public:
	// BrnEffectsDebugComponent.cpp:56
	void Construct(EffectsModule *);

	// BrnEffectsDebugComponent.cpp:137
	void Destruct();

	// BrnEffectsDebugComponent.cpp:154
	virtual void RenderWorld(CgsDev::Debug3DImmediateRender *);

	// BrnEffectsDebugComponent.h:126
	bool IsForceStateBlend() const;

	// BrnEffectsDebugComponent.h:131
	float32_t ForceStateBlendValue() const;

	// BrnEffectsDebugComponent.h:136
	bool IsBoostTransitionEditing() const;

	// BrnEffectsDebugComponent.h:141
	float32_t BoostTransitionMin() const;

	// BrnEffectsDebugComponent.h:146
	float32_t BoostTransitionMax() const;

	// BrnEffectsDebugComponent.h:151
	float32_t BoostExhaustCutOffSpeed() const;

	// BrnEffectsDebugComponent.h:156
	const EffectsDebugJumping & JumpParams() const;

	// BrnEffectsDebugComponent.h:161
	const EffectsDebugProps & PropParams() const;

	// BrnEffectsDebugComponent.h:166
	bool ForceNonPlayerEffects() const;

protected:
	// BrnEffectsDebugComponent.cpp:194
	virtual const char * GetName() const;

	// BrnEffectsDebugComponent.cpp:207
	virtual void OnActivate();

private:
	// BrnEffectsDebugComponent.cpp:511
	void SetupLionMenu();

	// BrnEffectsDebugComponent.cpp:531
	void SetupBoostMenu();

	// BrnEffectsDebugComponent.cpp:544
	void SetupJumpMenu();

	// BrnEffectsDebugComponent.h:253
	void SetupEnvironmentMenu();

	// BrnEffectsDebugComponent.cpp:558
	void SetupPropMenu();

	// BrnEffectsDebugComponent.cpp:335
	void OnJunkyardEffectEditChange(void *, void *);

	// BrnEffectsDebugComponent.cpp:368
	void OnJunkyardEffectValueChange(void *, void *);

	// BrnEffectsDebugComponent.cpp:421
	void OnJunkyardEffectIndexChange(void *, void *);

}

// BrnEffectsDebugComponent.h:110
void BrnEffects::EffectsDebugComponent::EffectsDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

