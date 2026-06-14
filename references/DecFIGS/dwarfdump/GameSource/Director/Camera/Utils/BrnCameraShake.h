// BrnCameraShake.h:56
struct BrnDirector::Camera::Utils::CameraShake {
private:
	// BrnCameraShake.h:74
	float32_t mfCurrentWobbleX;

	// BrnCameraShake.h:75
	float32_t mfCurrentWobbleY;

	// BrnCameraShake.h:76
	float32_t mfCurrentWobbleXVel;

	// BrnCameraShake.h:77
	float32_t mfCurrentWobbleYVel;

	// Unknown accessibility
	struct Parameters;

public:
	// BrnCameraShake.h:62
	void Construct();

	// BrnCameraShake.h:70
	void Update(Matrix44Affine &, const CameraShake::Parameters &, Random &, float32_t, float32_t);

}

// BrnCameraShake.h:83
struct BrnDirector::Camera::Utils::CameraShake::Parameters {
	// BrnCameraShake.h:86
	float32_t mfXYShakeMagnitudeDegs;

	// BrnCameraShake.h:87
	float32_t mfZShakeMagnitudeDegs;

	// BrnCameraShake.h:89
	float32_t mfXYWobbleMagnitudeDegs;

	// BrnCameraShake.h:90
	float32_t mfWobbleCenteringFactor;

public:
	// BrnCameraShake.h:93
	void Construct();

}

// BrnCameraShake.h:105
struct BrnDirector::Camera::Utils::CameraImpactEffect {
private:
	// BrnCameraShake.h:126
	float32_t mfImpactFactor;

	// BrnCameraShake.h:127
	CameraShake mCameraShake;

	// Unknown accessibility
	struct Parameters;

public:
	// BrnCameraShake.h:111
	void Construct();

	// BrnCameraShake.h:118
	void Update(Camera &, const CameraImpactEffect::Parameters &, Random &, float32_t);

	// BrnCameraShake.h:122
	void RegisterImpact(float32_t);

}

// BrnCameraShake.h:133
struct BrnDirector::Camera::Utils::CameraImpactEffect::Parameters {
	// BrnCameraShake.h:136
	Parameters mShakeParams;

	// BrnCameraShake.h:138
	float32_t mfShakeDecayFactor;

	// BrnCameraShake.h:139
	float32_t mfMagnitude;

	// BrnCameraShake.h:140
	float32_t mfFrequencyScale;

public:
	// BrnCameraShake.h:143
	void Construct();

}

// BrnCameraShake.h:160
struct BrnDirector::Camera::Utils::CameraShakeICEController {
private:
	// BrnCameraShake.h:179
	Matrix44Affine mMatrix;

	// BrnCameraShake.h:180
	CameraShake mProceduralShake;

	// BrnCameraShake.h:181
	Parameters mProceduralShakeParams;

	// BrnCameraShake.h:182
	ICETake mShakeTake;

	// BrnCameraShake.h:183
	uint8_t mu8ActiveShake;

	// BrnCameraShake.h:184
	Random mRandom;

	// BrnCameraShake.h:185
	float32_t mfShotRunningTime;

	// BrnCameraShake.h:186
	float32_t mfBumpValue;

public:
	// BrnCameraShake.h:164
	void Construct();

	// BrnCameraShake.h:172
	void Update(const BrnDirector::DirectorResourceManager *, float32_t, uint8_t, float32_t, float32_t);

	// BrnCameraShake.h:175
	const rw::math::vpu::Matrix44Affine & GetMatrix() const;

}

// BrnCameraShake.h:194
extern void Serialise<BrnDirector::Camera::DebugMenuSerialiser>(const DebugMenuSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCameraShake.h:194
extern void Serialise<BrnDirector::Camera::TextFileReadSerialiser>(const TextFileReadSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
}

// BrnCameraShake.h:207
extern void Serialise<BrnDirector::Camera::TextFileReadSerialiser>(const TextFileReadSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Serialise<BrnDirector::Camera::Utils::CameraShake::Parameters>(/* parameters */);
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
}

// BrnCameraShake.h:194
extern void Serialise<BrnDirector::Camera::TextFileWriteSerialiser>(const TextFileWriteSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCameraShake.h:207
extern void Serialise<BrnDirector::Camera::TextFileWriteSerialiser>(const TextFileWriteSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Serialise<BrnDirector::Camera::Utils::CameraShake::Parameters>(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
}

// BrnCameraShake.h:207
extern void Serialise<BrnDirector::Camera::DebugMenuSerialiser>(const DebugMenuSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Serialise<BrnDirector::Camera::Utils::CameraShake::Parameters>(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::RemoveFromPath(/* parameters */);
}

