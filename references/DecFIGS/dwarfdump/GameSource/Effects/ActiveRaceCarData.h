// ActiveRaceCarData.h:41
struct BrnEffects::BurstAccumulator {
private:
	// ActiveRaceCarData.h:120
	float32_t mfMinBurstSize;

	// ActiveRaceCarData.h:121
	float32_t mfMaxBurstSize;

	// ActiveRaceCarData.h:122
	float32_t mfBurstTimeout;

	// ActiveRaceCarData.h:124
	float32_t mfBurstSizeThreshold;

	// ActiveRaceCarData.h:125
	float32_t mfBurstTimeThreshold;

	// ActiveRaceCarData.h:126
	float32_t mfCurrentBurstSize;

public:
	// ActiveRaceCarData.h:49
	void Construct(float32_t, float32_t, float32_t);

	// ActiveRaceCarData.h:64
	void Reset(float32_t);

	// ActiveRaceCarData.h:76
	uint32_t Update(float32_t, float32_t, Random &);

	// ActiveRaceCarData.h:111
	float32_t GetBurstSizeAsInterpolatorBetweenMinAndMax(uint32_t);

}

// ActiveRaceCarData.h:130
struct BrnEffects::ActiveRaceCarData {
	// ActiveRaceCarData.h:166
	WheelStateMachine[4] mWheelStateMachine;

	// ActiveRaceCarData.h:167
	TrailEmitterData[4] mTrailEmitters;

	// ActiveRaceCarData.h:169
	BrnEffects::JumpStateMachine mJumpMachine;

	// ActiveRaceCarData.h:170
	uint32_t mJumpEffectHandle;

	// ActiveRaceCarData.h:171
	uint32_t[4] maJumpLandingWheelEffectHandles;

private:
	// ActiveRaceCarData.h:219
	extern const uint16_t eARDFlagWasCrashing = 1;

	// ActiveRaceCarData.h:220
	extern const uint16_t eARDFlagIsCrashing = 2;

	// ActiveRaceCarData.h:229
	CgsID mID;

	// ActiveRaceCarData.h:230
	uint16_t mFlags;

	// ActiveRaceCarData.h:232
	float32_t mfTimeCrashStarted;

	// ActiveRaceCarData.h:235
	float32_t mfGroundPositionY;

	// ActiveRaceCarData.h:237
	BrnEffects::BoostStateMachine mBoostMachine;

	// ActiveRaceCarData.h:240
	BurstAccumulator mBurstAccumulatorWorldGrinding;

public:
	// ActiveRaceCarData.h:133
	void Construct();

	// ActiveRaceCarData.h:141
	void Tick(BrnEffects::CarState &, const RaceCarState &, RaceCarParticleEffectHelper &, bool, bool);

	// ActiveRaceCarData.h:144
	bool HasChanged(CgsID);

	// ActiveRaceCarData.h:156
	void Initialise(CgsID, const CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> &, ParticleEffectHelper &);

	// ActiveRaceCarData.h:159
	void Reset(ParticleEffectHelper &);

	// ActiveRaceCarData.h:163
	void CameraChanged(ParticleEffectHelper &, const CameraState &);

	// ActiveRaceCarData.h:174
	float32_t GetGroundPositionY() const;

	// ActiveRaceCarData.h:180
	bool WasCrashing() const;

	// ActiveRaceCarData.h:186
	bool IsCrashing() const;

	// ActiveRaceCarData.h:192
	bool JustStartedCrashing() const;

	// ActiveRaceCarData.h:198
	bool JustFinishedCrashing() const;

	// ActiveRaceCarData.h:204
	float32_t GetCrashStartTime() const;

	// ActiveRaceCarData.h:210
	BurstAccumulator & GetBurstAccumulatorWorldGrinding();

private:
	// ActiveRaceCarData.h:227
	void ExtractTags(ParticleEffectHelper &, const CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> &);

}

// ActiveRaceCarData.h:219
extern const uint16_t eARDFlagWasCrashing = 1;

// ActiveRaceCarData.h:220
extern const uint16_t eARDFlagIsCrashing = 2;

