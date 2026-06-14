// BrnPositionLag.h:48
struct BrnDirector::Camera::Utils::PositionLag {
private:
	// BrnPositionLag.h:64
	Vector3 mLastLocalOffset;

	// BrnPositionLag.h:65
	Vector3 mLastWorldPosition;

	// BrnPositionLag.h:66
	bool mbFirstFrame;

	// BrnPositionLag.h:67
	bool mbConstructed;

	// Unknown accessibility
	struct Parameters;

public:
	// BrnPositionLag.h:54
	void Construct();

	// BrnPositionLag.h:60
	void Update(const PositionLag::Parameters &, float32_t, Matrix44Affine &);

}

// BrnPositionLag.h:73
struct BrnDirector::Camera::Utils::PositionLag::Parameters {
	// BrnPositionLag.h:76
	VersionNumber muVersion;

	// BrnPositionLag.h:78
	float32_t mfXResponse;

	// BrnPositionLag.h:79
	float32_t mfYResponse;

	// BrnPositionLag.h:80
	float32_t mfZResponse;

	// BrnPositionLag.h:82
	float32_t mfSmoothing;

public:
	// BrnPositionLag.h:85
	void Construct();

}

// BrnPositionLag.h:98
extern void Serialise<BrnDirector::Camera::DebugMenuSerialiser>(const DebugMenuSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPositionLag.h:100
		const unsigned int luCurrentVersion;

	}
}

// BrnPositionLag.h:98
extern void Serialise<BrnDirector::Camera::TextFileReadSerialiser>(const TextFileReadSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPositionLag.h:100
		const unsigned int luCurrentVersion;

	}
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
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
}

// BrnPositionLag.h:98
extern void Serialise<BrnDirector::Camera::TextFileWriteSerialiser>(const TextFileWriteSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPositionLag.h:100
		const unsigned int luCurrentVersion;

		BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	}
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
}

