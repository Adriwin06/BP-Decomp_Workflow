// BrnEnvironmentKeyframe.cpp:48
void BrnWorld::EnvironmentSettings::Keyframe::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnEffects::BloomData::Construct(/* parameters */);
	BrnEffects::VignetteData::Construct(/* parameters */);
	ScatteringData::Construct(/* parameters */);
	BrnEffects::TintData::Construct(/* parameters */);
	LightingData::Construct(/* parameters */);
	CloudsData::Construct(/* parameters */);
}

// BrnEnvironmentKeyframe.cpp:174
void BrnWorld::EnvironmentSettings::Keyframe::EndianSwap(const Keyframe &  lKeyframe) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEnvironmentKeyframe.cpp:72
void BrnWorld::EnvironmentSettings::Keyframe::ParseFile(const Keyframe &  lKeyframe, char *  lpcColourCubeURI, const char *  lpcFilename) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEnvironmentKeyframe.cpp:74
		float32_t lfTimeOfDay;

		ParseEnvironmentFile(/* parameters */);
	}
}

