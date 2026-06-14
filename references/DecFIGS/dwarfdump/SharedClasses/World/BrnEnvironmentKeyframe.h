// BrnEnvironmentKeyframe.h:49
struct BrnWorld::EnvironmentSettings::Keyframe {
	// BrnEnvironmentKeyframe.h:58
	uint32_t muVersion;

	// BrnEnvironmentData.h:40
	typedef BloomData BloomData;

	// BrnEnvironmentKeyframe.h:60
	Keyframe::BloomData mBloomData;

	// BrnEnvironmentData.h:41
	typedef VignetteData VignetteData;

	// BrnEnvironmentKeyframe.h:61
	Keyframe::VignetteData mVignetteData;

	// BrnEnvironmentData.h:42
	typedef TintData TintData;

	// BrnEnvironmentKeyframe.h:62
	Keyframe::TintData mTintData;

	// BrnEnvironmentKeyframe.h:63
	ScatteringData mScatteringData;

	// BrnEnvironmentKeyframe.h:64
	LightingData mLightingData;

	// BrnEnvironmentKeyframe.h:65
	CloudsData mCloudsData;

public:
	// BrnEnvironmentKeyframe.h:53
	void Construct();

	// BrnEnvironmentKeyframe.h:71
	bool ParseFile(Keyframe &, char *, const char *);

	// BrnEnvironmentKeyframe.h:90
	void EndianSwap(Keyframe &);

}

// BrnEnvironmentKeyFrame.h:49
struct BrnWorld::EnvironmentSettings::Keyframe {
	// BrnEnvironmentKeyFrame.h:58
	uint32_t muVersion;

	// BrnEnvironmentData.h:40
	typedef BloomData BloomData;

	// BrnEnvironmentKeyFrame.h:60
	Keyframe::BloomData mBloomData;

	// BrnEnvironmentData.h:41
	typedef VignetteData VignetteData;

	// BrnEnvironmentKeyFrame.h:61
	Keyframe::VignetteData mVignetteData;

	// BrnEnvironmentData.h:42
	typedef TintData TintData;

	// BrnEnvironmentKeyFrame.h:62
	Keyframe::TintData mTintData;

	// BrnEnvironmentKeyFrame.h:63
	ScatteringData mScatteringData;

	// BrnEnvironmentKeyFrame.h:64
	LightingData mLightingData;

	// BrnEnvironmentKeyFrame.h:65
	CloudsData mCloudsData;

public:
	// BrnEnvironmentKeyFrame.h:53
	void Construct();

	// BrnEnvironmentKeyFrame.h:71
	bool ParseFile(Keyframe &, char *, const char *);

	// BrnEnvironmentKeyFrame.h:90
	void EndianSwap(Keyframe &);

}

