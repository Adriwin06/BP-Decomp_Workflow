// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// Declaration
		struct BehaviourHeliCam {
			// BehaviourHeliCam.h:111
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BehaviourHeliCam.h:114
				Parameters mShakeParameters;

				// BehaviourHeliCam.h:115
				BrnDirector::Camera::Utils::Looker::Parameters mLookerParams;

				// BehaviourHeliCam.h:116
				VersionNumber mVersion;

				// BehaviourHeliCam.h:117
				FOV mFOV;

				// BehaviourHeliCam.h:118
				float32_t mfHeightKm;

				// BehaviourHeliCam.h:119
				float32_t mfInitialDistanceXKm;

				// BehaviourHeliCam.h:120
				float32_t mfInitialDistanceZKm;

				// BehaviourHeliCam.h:121
				float32_t mfVelocityMPS;

			public:
				// BehaviourHeliCam.h:124
				void Construct();

			}

		}

	}

}

// BehaviourHeliCam.h:54
struct BrnDirector::Camera::BehaviourHeliCam : public BrnDirector::Camera::Behaviour {
private:
	// BehaviourHeliCam.h:92
	Matrix44Affine mTransform;

	// BehaviourHeliCam.h:94
	Looker mLooker;

	// BehaviourHeliCam.h:96
	Vector3 mPosition;

	// BehaviourHeliCam.h:97
	Vector3 mTarget;

	// BehaviourHeliCam.h:98
	Vector3 mVelocity;

	// BehaviourHeliCam.h:100
	Random mRandom;

	// BehaviourHeliCam.h:102
	const BrnDirector::Camera::BehaviourHeliCam::Parameters * mpParameters;

	// BehaviourHeliCam.h:103
	CameraShake mCameraShake;

	// BehaviourHeliCam.h:105
	bool mbCalculatePosition;

public:
	void BehaviourHeliCam(const BrnDirector::Camera::BehaviourHeliCam &);

	void BehaviourHeliCam();

	// BehaviourHeliCam.cpp:192
	void WarpToNewPosition();

	// BehaviourHeliCam.h:136
	void SetParameters(const BrnDirector::Camera::BehaviourHeliCam::Parameters *);

	// BehaviourHeliCam.cpp:67
	virtual void Construct();

	// BehaviourHeliCam.cpp:84
	virtual bool Prepare(const BehaviourSharedPrepareReleaseInfo &);

	// BehaviourHeliCam.cpp:103
	virtual bool Update(Camera &, const BehaviourSharedInfo &);

	// BehaviourHeliCam.cpp:164
	virtual void SetupTweaker(Tweaker &);

	// BehaviourHeliCam.cpp:177
	virtual const char * GetName() const;

}

// BehaviourHeliCam.h:150
extern void Serialise<BrnDirector::Camera::DebugMenuSerialiser>(const DebugMenuSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BehaviourHeliCam.h:152
		const unsigned int luCurrentVersion;

	}
	Serialise<BrnDirector::Camera::Utils::CameraShake::Parameters>(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::RemoveFromPath(/* parameters */);
	Serialise<BrnDirector::Camera::Utils::Looker::Parameters>(/* parameters */);
	CgsCore::StrCat(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::RemoveFromPath(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::Serialise(/* parameters */);
}

// BehaviourHeliCam.h:150
extern void Serialise<BrnDirector::Camera::TextFileReadSerialiser>(const TextFileReadSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BehaviourHeliCam.h:152
		const unsigned int luCurrentVersion;

	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	{
		// BehaviourHeliCam.h:186
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	Serialise<BrnDirector::Camera::Utils::CameraShake::Parameters>(/* parameters */);
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
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	Serialise<BrnDirector::Camera::Utils::CameraShake::Parameters>(/* parameters */);
	{
	}
	Serialise<BrnDirector::Camera::Utils::Looker::Parameters>(/* parameters */);
	{
	}
}

// BehaviourHeliCam.h:150
extern void Serialise<BrnDirector::Camera::TextFileWriteSerialiser>(const TextFileWriteSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BehaviourHeliCam.h:152
		const unsigned int luCurrentVersion;

	}
	BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	{
		// BehaviourHeliCam.h:186
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	Serialise<BrnDirector::Camera::Utils::CameraShake::Parameters>(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	Serialise<BrnDirector::Camera::Utils::CameraShake::Parameters>(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	Serialise<BrnDirector::Camera::Utils::Looker::Parameters>(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
}

// BehaviourHeliCam.h:54
void BrnDirector::Camera::BehaviourHeliCam::BehaviourHeliCam() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// Declaration
		struct BehaviourHeliCam {
			// BehaviourHeliCam.h:111
			struct Parameters : public BrnDirector::Camera::Behaviour::Parameters {
				// BehaviourHeliCam.h:114
				Parameters mShakeParameters;

				// BehaviourHeliCam.h:115
				BrnDirector::Camera::Utils::Looker::Parameters mLookerParams;

				// BehaviourHeliCam.h:116
				VersionNumber mVersion;

				// BehaviourHeliCam.h:117
				FOV mFOV;

				// BehaviourHeliCam.h:118
				float32_t mfHeightKm;

				// BehaviourHeliCam.h:119
				float32_t mfInitialDistanceXKm;

				// BehaviourHeliCam.h:120
				float32_t mfInitialDistanceZKm;

				// BehaviourHeliCam.h:121
				float32_t mfVelocityMPS;

			public:
				// BehaviourHeliCam.h:124
				void Construct();

			}

		}

	}

}

