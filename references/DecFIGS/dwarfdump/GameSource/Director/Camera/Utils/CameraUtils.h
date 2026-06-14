// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// CameraUtils.h:42
		namespace Utils {
			// CameraUtils.h:50
			enum EPlayerSelectionOptions {
				E_OPTION_EXCLUDE_PLAYER = 0,
				E_OPTION_INCLUDE_PLAYER = 1,
			}

			struct VersionNumber;

			struct FOV;

			struct TransitionSmoother;

			struct CameraSphericalRotationController;

			struct Camera2DRotationController;

			struct CameraShake;

			struct CameraImpactEffect;

			struct CameraShakeICEController;

			struct CameraRig;

			struct OrientationLag;

			struct PositionLag;

			struct Interpolater;

			struct TempCameraBoostResponder;

			struct SpeedResponder;

			// CameraUtils.h:1148
			extern float32_t ConvertFOVDegsToLensLength(float32_t, float32_t);

			// CameraUtils.h:593
			extern bool IsUnit(Vector3);

			// CameraUtils.h:612
			extern Vector3 FindNonParallelNormalisedVectorTo(Vector3);

			// CameraUtils.h:653
			extern Vector3 SafeSLerp(Vector3, Vector3, VecFloat);

			// CameraUtils.h:575
			extern float32_t GetFOVDegsFromZoom(float32_t);

			// CameraUtils.h:557
			extern float32_t GetZoomFromFOVDegs(float32_t);

			// CameraUtils.h:1092
			extern float32_t ClampToSensibleFOVDegs(float32_t);

			// CameraUtils.h:813
			extern Matrix44Affine DirectionPreservingSLerp(Matrix44Affine, Matrix44Affine, VecFloat, Vector3 &, bool *);

			// CameraUtils.h:423
			extern void RotateMatrix44AffineByEulerAnglesZXY(Matrix44Affine &, Vector3);

			// CameraUtils.h:735
			extern Matrix33 DirectionPreservingSLerp(Matrix33, Matrix33, VecFloat, Vector3 &, bool *);

			// CameraUtils.h:318
			extern bool IsOdd(int32_t);

			// CameraUtils.h:300
			extern bool IsEven(int32_t);

			// CameraUtils.h:1269
			extern void CalcNearClipCorners(Matrix44Affine, VecFloat, VecFloat, VecFloat, Vector3 *, Vector3 *, Vector3 *, Vector3 *);

			// CameraUtils.h:338
			extern const uint32_t Cycle(uint32_t, uint32_t, uint32_t, uint32_t);

			// CameraUtils.h:1202
			extern const VecFloat GetPitchAboutPointRads(Vector3, Vector3);

			// CameraUtils.h:1228
			extern void ApplyPitchAboutPointRads(Matrix44Affine &, Vector3, VecFloat);

		}

	}

}

// CameraUtils.h:58
struct BrnDirector::Camera::Utils::VersionNumber {
	// CameraUtils.h:59
	uint32_t muVersion;

}

// CameraUtils.h:64
struct BrnDirector::Camera::Utils::FOV {
	// CameraUtils.h:65
	float32_t mfFOV;

}

// CameraUtils.h:112
struct BrnDirector::Camera::Utils::TransitionSmoother {
private:
	// CameraUtils.h:138
	float32_t mfData;

	// CameraUtils.h:139
	float32_t mfTarget;

	// CameraUtils.h:140
	float32_t mfIdealLerpAmount;

	// CameraUtils.h:141
	float32_t mfLerpAmount;

	// CameraUtils.h:142
	float32_t mfLerpAmountLerpAmount;

	// CameraUtils.h:143
	float32_t mfSimilarityToleranceScale;

public:
	// CameraUtils.h:116
	const float32_t Get() const;

	// CameraUtils.h:119
	const float32_t & GetRef() const;

	// CameraUtils.h:126
	void Set(float32_t, float32_t, float32_t, float32_t);

	// CameraUtils.h:130
	void SetTarget(float32_t);

	// CameraUtils.h:134
	void Update(float32_t);

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// BrnDebugController.h:40
		namespace Utils {
			// CameraUtils.h:46
			extern const float KF_LENS_BASE_APERTURE;

		}

	}

}

// CameraUtils.h:46
extern const float KF_LENS_BASE_APERTURE;

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// CameraUtils.h:42
		namespace Utils {
			// CameraUtils.h:46
			extern const float KF_LENS_BASE_APERTURE;

		}

	}

}

// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// CameraUtils.h:42
		namespace Utils {
			struct VersionNumber;

			struct FOV;

			struct CameraSphericalRotationController;

			struct Camera2DRotationController;

			struct CameraShake;

			struct CameraImpactEffect;

			struct CameraRig;

			struct OrientationLag;

			struct PositionLag;

			struct TempCameraBoostResponder;

			struct SpeedResponder;

		}

	}

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// CameraUtils.h:42
		namespace Utils {
			// CameraUtils.h:557
			extern float32_t GetZoomFromFOVDegs(float32_t);

		}

	}

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// BrnDebugController.h:40
		namespace Utils {
			// CameraUtils.h:557
			extern float32_t GetZoomFromFOVDegs(float32_t);

			// CameraUtils.h:46
			extern const float KF_LENS_BASE_APERTURE;

		}

	}

}

