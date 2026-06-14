// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct CameraInterpolationController {
		// BrnCameraInterpolationController.h:56
		enum EInterpolationMapping {
			E_MAPPING_LINEAR = 0,
			E_MAPPING_SINUSOIDAL = 1,
			E_MAPPING_EXPONENTIAL_SYMMETRICAL = 2,
			E_MAPPING_EXPONENTIAL_OUT_X_CUBED = 3,
		}

		// BrnCameraInterpolationController.h:64
		enum EInterpolationMethod {
			E_METHOD_SLERP = 0,
			E_METHOD_ROTATE_ABOUT_POINT = 1,
		}

		// BrnCameraInterpolationController.h:75
		struct RotateAboutPivotParams {
			// BrnCameraInterpolationController.h:76
			Matrix33 mLookatLocalRotation;

			// BrnCameraInterpolationController.h:77
			Matrix33 mLookAtRotation;

			// BrnCameraInterpolationController.h:79
			float32_t mfRadius;

		public:
			// BrnCameraInterpolationController.h:88
			void Interpolate(const BrnDirector::CameraInterpolationController::RotateAboutPivotParams &, const BrnDirector::CameraInterpolationController::RotateAboutPivotParams &, VecFloat, Interpolater &, Interpolater &, BrnDirector::CameraInterpolationController::RotateAboutPivotParams *);

		}

	}

}

// BrnCameraInterpolationController.h:44
struct BrnDirector::CameraInterpolationController {
private:
	// BrnCameraInterpolationController.h:71
	Interpolater mInterpolaterA;

	// BrnCameraInterpolationController.h:72
	Interpolater mInterpolaterB;

public:
	// BrnCameraInterpolationController.h:48
	void Construct();

	// BrnCameraInterpolationController.h:54
	void Update(Camera *, const Camera &, Matrix44Affine);

private:
	// BrnCameraInterpolationController.h:98
	Matrix44Affine RotateAboutPivot(Matrix44Affine, Matrix44Affine, Matrix44Affine, VecFloat, Interpolater &, Interpolater &);

	// BrnCameraInterpolationController.h:104
	void ExtractRotateAboutPivotParams(Matrix44Affine, Matrix44Affine, BrnDirector::CameraInterpolationController::RotateAboutPivotParams *);

	// BrnCameraInterpolationController.h:109
	Matrix44Affine Matrix44AffineFromRotateAboutPivotParams(const BrnDirector::CameraInterpolationController::RotateAboutPivotParams &, Matrix44Affine);

	// BrnCameraInterpolationController.h:112
	void Reset();

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// Declaration
	struct CameraInterpolationController {
		// BrnCameraInterpolationController.h:56
		enum EInterpolationMapping {
			E_MAPPING_LINEAR = 0,
			E_MAPPING_SINUSOIDAL = 1,
			E_MAPPING_EXPONENTIAL_SYMMETRICAL = 2,
			E_MAPPING_EXPONENTIAL_OUT_X_CUBED = 3,
		}

		// BrnCameraInterpolationController.h:64
		enum EInterpolationMethod {
			E_METHOD_SLERP = 0,
			E_METHOD_ROTATE_ABOUT_POINT = 1,
		}

		// BrnCameraInterpolationController.h:75
		struct RotateAboutPivotParams {
			// BrnCameraInterpolationController.h:76
			Matrix33 mLookatLocalRotation;

			// BrnCameraInterpolationController.h:77
			Matrix33 mLookAtRotation;

			// BrnCameraInterpolationController.h:79
			float32_t mfRadius;

		public:
			// BrnCameraInterpolationController.h:88
			void Interpolate(const BrnDirector::CameraInterpolationController::RotateAboutPivotParams &, const BrnDirector::CameraInterpolationController::RotateAboutPivotParams &, VecFloat, Interpolater &, Interpolater &, BrnDirector::CameraInterpolationController::RotateAboutPivotParams *);

		}

	}

}

