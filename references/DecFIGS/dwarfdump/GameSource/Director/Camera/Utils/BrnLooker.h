// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// CameraUtils.h:42
		namespace Utils {
			// Declaration
			struct Looker {
				// BrnLooker.h:61
				struct Parameters {
					// BrnLooker.h:99
					enum EZoomType {
						E_ZOOM_PERCEIVED_DISTANCE = 0,
						E_ZOOM_SCREEN_AREA = 1,
						E_ZOOM_SCREEN_REGION = 2,
					}

					// BrnLooker.h:64
					VersionNumber mVersion;

					// BrnLooker.h:66
					float32_t mfInitialXLookOffsetRange;

					// BrnLooker.h:67
					float32_t mfInitialYLookOffsetRange;

					// BrnLooker.h:69
					float32_t mfTargetSubjectSize;

					// BrnLooker.h:70
					float32_t mfTargetSubjectXSize;

					// BrnLooker.h:71
					float32_t mfTargetSubjectYSize;

					// BrnLooker.h:73
					float32_t mfTargetSubjectXScreenOffset;

					// BrnLooker.h:74
					float32_t mfTargetSubjectYScreenOffset;

					// BrnLooker.h:76
					float32_t mfTrackingTolerance;

					// BrnLooker.h:77
					float32_t mfTrackingSpeed;

					// BrnLooker.h:78
					float32_t mfTrackingAcceleration;

					// BrnLooker.h:80
					float32_t mfMinFOVVelocity;

					// BrnLooker.h:81
					float32_t mfMaxFOVVelocity;

					// BrnLooker.h:82
					float32_t mfDesiredPerceivedDistance;

					// BrnLooker.h:83
					float32_t mfDistanceToVelocityFactor;

					// BrnLooker.h:84
					float32_t mfToleranceForDistanceFromIdeal;

					// BrnLooker.h:85
					float32_t mfToleranceForDistanceFromTarget;

					// BrnLooker.h:86
					float32_t mfOvershootFactor;

					// BrnLooker.h:87
					float32_t mfMinFOV;

					// BrnLooker.h:88
					float32_t mfMaxFOV;

					// BrnLooker.h:89
					float32_t mfIdealFOVVelocityLerpAmount;

					// BrnLooker.h:91
					float32_t mfStaticDOF;

					// BrnLooker.h:92
					float32_t mfStaticFocalLength;

					// BrnLooker.h:93
					bool mbUseStaticDOF;

					// BrnLooker.h:95
					bool mbInitialiseToLookingAtTarget;

					// BrnLooker.h:96
					bool mbInitialiseToZoomedToTarget;

					// BrnLooker.h:97
					bool mbUseZoom;

					// BrnLooker.h:106
					BrnDirector::Camera::Utils::Looker::Parameters::EZoomType meZoomType;

				public:
					// BrnLooker.h:109
					void Construct();

				}

			}

		}

	}

}

// BrnLooker.h:57
struct BrnDirector::Camera::Utils::Looker {
private:
	// BrnLooker.h:155
	float32_t mfSlerpFactor;

	// BrnLooker.h:157
	float32_t mfTargetFOV;

	// BrnLooker.h:158
	float32_t mfMaxFOVVelocity;

	// BrnLooker.h:159
	float32_t mfFOVVelocity;

	// BrnLooker.h:161
	float32_t mfAssessmentTime;

	// BrnLooker.h:163
	float32_t mfLastIdealFOV;

	// BrnLooker.h:164
	float32_t mfSmoothedIdealFOVVelocity;

	// BrnLooker.h:166
	bool mbFirstFrame;

	// BrnLooker.h:167
	bool mbAssessingFOV;

	// BrnLooker.h:168
	bool mbConstructed;

	// BrnLooker.h:169
	bool mbForceZoomTargetUpdate;

public:
	// BrnLooker.h:118
	void Construct();

	// BrnLooker.h:128
	void Update(VecFloat, Random, const BrnDirector::Camera::Utils::Looker::Parameters &, Camera &, Matrix44Affine, Vector3, AABBox);

	// BrnLooker.h:131
	void ForceZoomTargetUpdate();

private:
	// BrnLooker.h:143
	void Track(VecFloat, Random, const BrnDirector::Camera::Utils::Looker::Parameters &, Camera &, Matrix44Affine, Vector3);

	// BrnLooker.h:153
	void Zoom(VecFloat, Random, const BrnDirector::Camera::Utils::Looker::Parameters &, Camera &, Matrix44Affine, Vector3, AABBox);

}

// BrnLooker.h:177
extern void Serialise<BrnDirector::Camera::DebugMenuSerialiser>(const DebugMenuSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLooker.h:179
		const unsigned int luCurrentVersion;

	}
	BrnDirector::Camera::DebugMenuSerialiser::Serialise(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::Serialise(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::Serialise(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::Serialise(/* parameters */);
}

// BrnLooker.h:177
extern void Serialise<BrnDirector::Camera::TextFileReadSerialiser>(const TextFileReadSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLooker.h:179
		const unsigned int luCurrentVersion;

	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	{
		// BrnLooker.h:222
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
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
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
}

// BrnLooker.h:177
extern void Serialise<BrnDirector::Camera::TextFileWriteSerialiser>(const TextFileWriteSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLooker.h:179
		const unsigned int luCurrentVersion;

		BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	}
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	{
		// BrnLooker.h:222
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// BrnDebugController.h:40
		namespace Utils {
			// Declaration
			struct Looker {
				// BrnLooker.h:61
				struct Parameters {
					// BrnLooker.h:99
					enum EZoomType {
						E_ZOOM_PERCEIVED_DISTANCE = 0,
						E_ZOOM_SCREEN_AREA = 1,
						E_ZOOM_SCREEN_REGION = 2,
					}

					// BrnLooker.h:64
					VersionNumber mVersion;

					// BrnLooker.h:66
					float32_t mfInitialXLookOffsetRange;

					// BrnLooker.h:67
					float32_t mfInitialYLookOffsetRange;

					// BrnLooker.h:69
					float32_t mfTargetSubjectSize;

					// BrnLooker.h:70
					float32_t mfTargetSubjectXSize;

					// BrnLooker.h:71
					float32_t mfTargetSubjectYSize;

					// BrnLooker.h:73
					float32_t mfTargetSubjectXScreenOffset;

					// BrnLooker.h:74
					float32_t mfTargetSubjectYScreenOffset;

					// BrnLooker.h:76
					float32_t mfTrackingTolerance;

					// BrnLooker.h:77
					float32_t mfTrackingSpeed;

					// BrnLooker.h:78
					float32_t mfTrackingAcceleration;

					// BrnLooker.h:80
					float32_t mfMinFOVVelocity;

					// BrnLooker.h:81
					float32_t mfMaxFOVVelocity;

					// BrnLooker.h:82
					float32_t mfDesiredPerceivedDistance;

					// BrnLooker.h:83
					float32_t mfDistanceToVelocityFactor;

					// BrnLooker.h:84
					float32_t mfToleranceForDistanceFromIdeal;

					// BrnLooker.h:85
					float32_t mfToleranceForDistanceFromTarget;

					// BrnLooker.h:86
					float32_t mfOvershootFactor;

					// BrnLooker.h:87
					float32_t mfMinFOV;

					// BrnLooker.h:88
					float32_t mfMaxFOV;

					// BrnLooker.h:89
					float32_t mfIdealFOVVelocityLerpAmount;

					// BrnLooker.h:91
					float32_t mfStaticDOF;

					// BrnLooker.h:92
					float32_t mfStaticFocalLength;

					// BrnLooker.h:93
					bool mbUseStaticDOF;

					// BrnLooker.h:95
					bool mbInitialiseToLookingAtTarget;

					// BrnLooker.h:96
					bool mbInitialiseToZoomedToTarget;

					// BrnLooker.h:97
					bool mbUseZoom;

					// BrnLooker.h:106
					BrnDirector::Camera::Utils::Looker::Parameters::EZoomType meZoomType;

				public:
					// BrnLooker.h:109
					void Construct();

				}

			}

		}

	}

}

