// BrnGuiEventTypes.h:28
namespace BrnGui {
	// BrnPfxHookBlender.h:27
	const uint8_t KU_MAX_CONCURRENT_NODES = 8;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// BrnPfxHookBlender.h:27
	const uint8_t KU_MAX_CONCURRENT_NODES = 8;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct PFXNodeFader {
		// BrnPfxHookBlender.h:169
		enum ENodePhase {
			E_WAITING = 0,
			E_FADEIN = 1,
			E_HOLD = 2,
			E_FADEOUT = 3,
			E_FINISHED = 4,
		}

	}

	// BrnPfxHookBlender.h:27
	const uint8_t KU_MAX_CONCURRENT_NODES = 8;

}

// BrnPfxHookBlender.h:42
struct BrnGui::ColourCubeInfo {
	// BrnPfxHookBlender.h:44
	ResourcePtr<rw::graphics::postfx::ColourCube> mpColourCube;

	// BrnPfxHookBlender.h:45
	uint64_t muResourceId;

}

// BrnPfxHookBlender.h:91
struct BrnGui::PfxContainer<BrnEffects::TintData> {
private:
	// BrnPfxHookBlender.h:100
	TintData mData;

	// BrnPfxHookBlender.h:101
	float32_t mfWeight;

	// BrnPfxHookBlender.h:102
	float32_t mfCount;

public:
	// BrnPfxHookBlender.h:93
	void Construct();

	// BrnPfxHookBlender.h:95
	void Add(const TintData *, float32_t);

	// BrnPfxHookBlender.h:96
	float32_t GetWeight() const;

	// BrnPfxHookBlender.h:97
	const TintData & GetData() const;

	// BrnPfxHookBlender.h:98
	float32_t GetCount() const;

}

// BrnPfxHookBlender.h:115
struct BrnGui::PFXNodeFader {
private:
	// BrnPfxHookBlender.h:184
	PFXHookNode * mpPfxNode;

	// BrnPfxHookBlender.h:185
	BrnGui::PFXNodeFader::ENodePhase meState;

	// BrnPfxHookBlender.h:186
	float32_t mfWeight;

	// BrnPfxHookBlender.h:187
	float32_t mfExpiredTime;

	// BrnPfxHookBlender.h:188
	float32_t mfForcedFadeoutTime;

	// BrnPfxHookBlender.h:190
	BloomData mBloomData;

	// BrnPfxHookBlender.h:191
	VignetteData mVignetteData;

	// BrnPfxHookBlender.h:192
	BlurData mBlurData;

	// BrnPfxHookBlender.h:193
	DepthOfFieldData mDepthOfFieldData;

	// BrnPfxHookBlender.h:194
	TintData2d mTint2DData;

	// BrnPfxHookBlender.h:195
	TintData mTint3DData;

public:
	// BrnPfxHookBlender.h:121
	void Initialise(ColourCubeInfo *, uint32_t, PFXHookNode *);

	// BrnPfxHookBlender.h:126
	void Update(float32_t, float32_t);

	// BrnPfxHookBlender.h:130
	float32_t GetWeight() const;

	// BrnPfxHookBlender.h:134
	bool IsActive() const;

	// BrnPfxHookBlender.h:138
	bool IsFinished() const;

	// BrnPfxHookBlender.h:142
	void StartFadeOut(float32_t);

	// BrnPfxHookBlender.h:146
	const BloomData * GetBloom() const;

	// BrnPfxHookBlender.h:150
	const VignetteData * GetVignette() const;

	// BrnPfxHookBlender.h:154
	const BlurData * GetBlur() const;

	// BrnPfxHookBlender.h:158
	const DepthOfFieldData * GetDepthOfField() const;

	// BrnPfxHookBlender.h:162
	const TintData2d * Get2DTint() const;

	// BrnPfxHookBlender.h:166
	const TintData * Get3DTint() const;

private:
	// BrnPfxHookBlender.h:182
	rw::graphics::postfx::ColourCube * LookupColourCube(ColourCubeInfo *, uint32_t, uint64_t);

}

// BrnPfxHookBlender.h:60
struct BrnGui::PfxContainer<BrnEffects::BloomData> {
private:
	// BrnPfxHookBlender.h:84
	BloomData mData;

	// BrnPfxHookBlender.h:85
	float32_t mfWeight;

	// BrnPfxHookBlender.h:86
	float32_t mfCount;

public:
	// BrnPfxHookBlender.h:64
	void Construct();

	// BrnPfxHookBlender.h:69
	void Add(const BloomData *, float);

	// BrnPfxHookBlender.h:73
	float32_t GetWeight() const;

	// BrnPfxHookBlender.h:77
	const BloomData & GetData() const;

	// BrnPfxHookBlender.h:81
	float32_t GetCount() const;

}

// BrnPfxHookBlender.h:60
struct BrnGui::PfxContainer<BrnEffects::VignetteData> {
private:
	// BrnPfxHookBlender.h:84
	VignetteData mData;

	// BrnPfxHookBlender.h:85
	float32_t mfWeight;

	// BrnPfxHookBlender.h:86
	float32_t mfCount;

public:
	// BrnPfxHookBlender.h:64
	void Construct();

	// BrnPfxHookBlender.h:69
	void Add(const VignetteData *, float);

	// BrnPfxHookBlender.h:73
	float32_t GetWeight() const;

	// BrnPfxHookBlender.h:77
	const VignetteData & GetData() const;

	// BrnPfxHookBlender.h:81
	float32_t GetCount() const;

}

// BrnPfxHookBlender.h:60
struct BrnGui::PfxContainer<BrnEffects::BlurData> {
private:
	// BrnPfxHookBlender.h:84
	BlurData mData;

	// BrnPfxHookBlender.h:85
	float32_t mfWeight;

	// BrnPfxHookBlender.h:86
	float32_t mfCount;

public:
	// BrnPfxHookBlender.h:64
	void Construct();

	// BrnPfxHookBlender.h:69
	void Add(const BlurData *, float);

	// BrnPfxHookBlender.h:73
	float32_t GetWeight() const;

	// BrnPfxHookBlender.h:77
	const BlurData & GetData() const;

	// BrnPfxHookBlender.h:81
	float32_t GetCount() const;

}

// BrnPfxHookBlender.h:60
struct BrnGui::PfxContainer<BrnEffects::DepthOfFieldData> {
private:
	// BrnPfxHookBlender.h:84
	DepthOfFieldData mData;

	// BrnPfxHookBlender.h:85
	float32_t mfWeight;

	// BrnPfxHookBlender.h:86
	float32_t mfCount;

public:
	// BrnPfxHookBlender.h:64
	void Construct();

	// BrnPfxHookBlender.h:69
	void Add(const DepthOfFieldData *, float);

	// BrnPfxHookBlender.h:73
	float32_t GetWeight() const;

	// BrnPfxHookBlender.h:77
	const DepthOfFieldData & GetData() const;

	// BrnPfxHookBlender.h:81
	float32_t GetCount() const;

}

// BrnPfxHookBlender.h:60
struct BrnGui::PfxContainer<BrnEffects::TintData2d> {
private:
	// BrnPfxHookBlender.h:84
	TintData2d mData;

	// BrnPfxHookBlender.h:85
	float32_t mfWeight;

	// BrnPfxHookBlender.h:86
	float32_t mfCount;

public:
	// BrnPfxHookBlender.h:64
	void Construct();

	// BrnPfxHookBlender.h:69
	void Add(const TintData2d *, float);

	// BrnPfxHookBlender.h:73
	float32_t GetWeight() const;

	// BrnPfxHookBlender.h:77
	const TintData2d & GetData() const;

	// BrnPfxHookBlender.h:81
	float32_t GetCount() const;

}

// BrnPfxHookBlender.h:209
struct BrnGui::PFXHookNodeBlender {
private:
	// BrnPfxHookBlender.h:302
	const PFXHook * mpHook;

	// BrnPfxHookBlender.h:303
	PFXNodeFader[8] maNodeStates;

	// BrnPfxHookBlender.h:304
	float32_t mfTime;

	// BrnPfxHookBlender.h:306
	PfxContainer<BrnEffects::BloomData> mBlendedBloomData;

	// BrnPfxHookBlender.h:307
	PfxContainer<BrnEffects::VignetteData> mBlendedVignetteData;

	// BrnPfxHookBlender.h:308
	PfxContainer<BrnEffects::BlurData> mBlendedBlurData;

	// BrnPfxHookBlender.h:309
	PfxContainer<BrnEffects::DepthOfFieldData> mBlendedDepthOfFieldData;

	// BrnPfxHookBlender.h:310
	PfxContainer<BrnEffects::TintData2d> mBlendedTint2DData;

	// BrnPfxHookBlender.h:311
	PfxContainer<BrnEffects::TintData> mBlendedTint3DData;

	// BrnPfxHookBlender.h:313
	float32_t mfMaximumBloomWeight;

	// BrnPfxHookBlender.h:314
	float32_t mfMaximumVignetteWeight;

	// BrnPfxHookBlender.h:315
	float32_t mfMaximumBlurWeight;

	// BrnPfxHookBlender.h:316
	float32_t mfMaximumDepthOfFieldWeight;

	// BrnPfxHookBlender.h:317
	float32_t mfMaximum2DTintWeight;

	// BrnPfxHookBlender.h:318
	float32_t mfMaximum3DTintWeight;

public:
	// BrnPfxHookBlender.h:213
	void Construct();

	// BrnPfxHookBlender.h:225
	void Initialise(const PFXHook *, ColourCubeInfo *, uint32_t, float32_t, float32_t, float32_t, float32_t, float32_t, float32_t);

	// BrnPfxHookBlender.h:229
	void Update(float32_t);

	// BrnPfxHookBlender.h:233
	void Stop();

	// BrnPfxHookBlender.h:236
	void ForceTime(float32_t);

	// BrnPfxHookBlender.h:240
	bool IsActive() const;

	// BrnPfxHookBlender.h:244
	float32_t GetTime() const;

	// BrnPfxHookBlender.h:248
	const PFXHook * GetHook() const;

	// BrnPfxHookBlender.h:252
	void StartFadeOut(float32_t);

	// BrnPfxHookBlender.h:256
	const PfxContainer<BrnEffects::BloomData> & GetBloom() const;

	// BrnPfxHookBlender.h:260
	const PfxContainer<BrnEffects::VignetteData> & GetVignette() const;

	// BrnPfxHookBlender.h:264
	const PfxContainer<BrnEffects::BlurData> & GetBlur() const;

	// BrnPfxHookBlender.h:268
	const PfxContainer<BrnEffects::DepthOfFieldData> & GetDepthOfField() const;

	// BrnPfxHookBlender.h:272
	const PfxContainer<BrnEffects::TintData2d> & Get2DTint() const;

	// BrnPfxHookBlender.h:276
	const PfxContainer<BrnEffects::TintData> & Get3DTint() const;

	// BrnPfxHookBlender.h:280
	bool HasActiveBloom() const;

	// BrnPfxHookBlender.h:284
	bool HasActiveVignette() const;

	// BrnPfxHookBlender.h:288
	bool HasActiveBlur() const;

	// BrnPfxHookBlender.h:292
	bool HasActiveDepthOfField() const;

	// BrnPfxHookBlender.h:296
	bool HasActive2DTint() const;

	// BrnPfxHookBlender.h:300
	bool HasActive3DTint() const;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct PFXNodeFader {
		// BrnPfxHookBlender.h:169
		enum ENodePhase {
			E_WAITING = 0,
			E_FADEIN = 1,
			E_HOLD = 2,
			E_FADEOUT = 3,
			E_FINISHED = 4,
		}

	}

	// BrnPfxHookBlender.h:27
	const uint8_t KU_MAX_CONCURRENT_NODES = 8;

}

