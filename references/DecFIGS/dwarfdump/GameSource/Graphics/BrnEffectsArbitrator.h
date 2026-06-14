// BrnEffectsArbitrator.h:67
struct BrnGraphics::EffectsArbitrator {
	// BrnEffectsArbitrator.h:64
	typedef EffectsArbitrator::EffectsFramePair *[3] EffectsFramePairsPerLayerAndSlot;

	// BrnEffectsArbitrator.h:63
	typedef BrnEffectsFrame[2] EffectsFramePair;

private:
	// BrnEffectsArbitrator.h:130
	EffectsArbitrator::EffectsFramePairsPerLayerAndSlot mapaEffectsFrames;

	// BrnEffectsArbitrator.h:131
	uint8_t mu8EffectsFrameInternal;

	// BrnEffectsArbitrator.h:131
	uint8_t mu8EffectsFrameExternal;

public:
	// BrnEffectsArbitrator.h:72
	void Construct(rw::IResourceAllocator *);

	// BrnEffectsArbitrator.h:76
	void Destruct();

	// BrnEffectsArbitrator.h:79
	void StartOfFrame();

	// BrnEffectsArbitrator.h:82
	void EndOfFrame();

	// BrnEffectsArbitrator.h:85
	BrnEffectsFrame * GetExternalEffectsFrame(uint8_t, uint8_t);

	// BrnEffectsArbitrator.h:88
	bool EvalBloom(BloomData &) const;

	// BrnEffectsArbitrator.h:91
	bool EvalVignette(VignetteData &) const;

	// BrnEffectsArbitrator.h:94
	bool EvalDepthOfField(DepthOfFieldData &) const;

	// BrnEffectsArbitrator.h:97
	bool EvalBlur(BlurData &) const;

	// BrnEffectsArbitrator.h:102
	bool EvalTint(rw::graphics::postfx::ColourCube **, float32_t *) const;

	// BrnEffectsArbitrator.h:105
	bool EvalTint2d(TintData2d &) const;

	// BrnEffectsArbitrator.h:110
	Vector3 GetLinearVelocity() const;

	// BrnEffectsArbitrator.h:113
	Vector3 GetAngularVelocity() const;

	// BrnEffectsArbitrator.h:116
	float32_t GetSpeedMPH() const;

	// BrnEffectsArbitrator.h:119
	float32_t GetSteering() const;

	// BrnEffectsArbitrator.h:122
	bool GetIsRacingGameplayCamera() const;

	// BrnEffectsArbitrator.h:125
	const MotionBlurData & GetMotionBlurData() const;

}

