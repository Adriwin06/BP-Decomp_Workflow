// BrnOrientationLag.h:47
struct BrnDirector::Camera::Utils::OrientationLag {
private:
	// BrnOrientationLag.h:69
	Matrix44Affine mLastTransform;

	// Unknown accessibility
	struct Parameters;

	// BrnOrientationLag.h:70
	const OrientationLag::Parameters * mpParameters;

	// BrnOrientationLag.h:71
	bool mbFirstFrame;

public:
	// BrnOrientationLag.h:53
	void Construct();

	// BrnOrientationLag.h:57
	void SetParameters(const OrientationLag::Parameters *);

	// BrnOrientationLag.h:62
	void Update(float32_t, Matrix44Affine);

	// BrnOrientationLag.h:65
	const rw::math::vpu::Matrix44Affine & GetTransform() const;

}

// BrnOrientationLag.h:77
struct BrnDirector::Camera::Utils::OrientationLag::Parameters {
	// BrnOrientationLag.h:80
	VersionNumber muVersion;

	// BrnOrientationLag.h:82
	float32_t mfPitchSpring;

	// BrnOrientationLag.h:83
	float32_t mfYawSpring;

	// BrnOrientationLag.h:84
	float32_t mfRollSpring;

	// BrnOrientationLag.h:86
	float32_t mfSlerpSpring;

	// BrnOrientationLag.h:87
	bool mbUseSlerpSpring;

public:
	// BrnOrientationLag.h:90
	void Construct();

}

// BrnOrientationLag.h:112
extern void Serialise<BrnDirector::Camera::DebugMenuSerialiser>(const DebugMenuSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOrientationLag.h:114
		const unsigned int luCurrentVersion;

	}
	BrnDirector::Camera::DebugMenuSerialiser::Serialise(/* parameters */);
}

// BrnOrientationLag.h:112
extern void Serialise<BrnDirector::Camera::TextFileReadSerialiser>(const TextFileReadSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOrientationLag.h:114
		const unsigned int luCurrentVersion;

		BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
}

// BrnOrientationLag.h:112
extern void Serialise<BrnDirector::Camera::TextFileWriteSerialiser>(const TextFileWriteSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOrientationLag.h:114
		const unsigned int luCurrentVersion;

		BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	}
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
}

