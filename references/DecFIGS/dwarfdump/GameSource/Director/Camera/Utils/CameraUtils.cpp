// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// CameraUtils.h:42
		namespace Utils {
			// CameraUtils.cpp:526
			extern float32_t GetSmallestDifferenceBetweenDegsAngles(float32_t, float32_t);

			// CameraUtils.cpp:332
			extern bool PointsWillPassEachOther(Vector3, Vector3, Vector3, Vector3, float32_t &);

			// CameraUtils.cpp:704
			extern Matrix44Affine CreateLookAt(Vector3, Vector3);

			// CameraUtils.cpp:1140
			extern bool IsPointInFrustrum(Vector3, Matrix44Affine, float32_t, float32_t);

			// CameraUtils.cpp:298
			extern bool ProjectWorldSpacePointToScreen(Matrix44, Vector3, Vector2 &);

			// CameraUtils.cpp:1285
			extern bool IsBoxIntersectingFrustrumFast(Matrix44Affine, const AABBox &, Matrix44Affine, float32_t, float32_t);

			// CameraUtils.cpp:616
			extern float32_t PositiveValueTendToLimit(float32_t, float32_t, float32_t);

			// CameraUtils.cpp:660
			extern float32_t TendToLimits(float32_t, float32_t, float32_t, float32_t, float32_t);

			// CameraUtils.cpp:680
			extern Vector3 TendToLimits(Vector3, Vector3, Vector3, Vector3, Vector3);

			// CameraUtils.cpp:808
			extern float32_t SineLerp(float32_t, float32_t, float32_t);

			// CameraUtils.cpp:838
			extern float32_t ExponentialLerp(float32_t, float32_t, float32_t);

			// CameraUtils.cpp:453
			extern Vector3 EulerAnglesZXYFromMatrix44Affine(Matrix44Affine, Vector3 *, float32_t);

			// CameraUtils.cpp:55
			extern const rw::math::vpu::Vector2 GetSizeOnScreen(Matrix44Affine, VecFloat, VecFloat, Matrix44Affine, AABBox);

			// CameraUtils.cpp:1194
			extern bool PointWillLeaveFrustrum(Vector3, Vector3, Matrix44Affine, float32_t, float32_t, float32_t *);

			// CameraUtils.cpp:211
			extern const VecFloat GetFOVDegsToFitObjectToScreenArea(VecFloat, Vector2, VecFloat);

			// CameraUtils.cpp:177
			extern const VecFloat GetFOVDegsToFitObjectToScreenSize(VecFloat, Vector2, Vector2);

			// CameraUtils.cpp:242
			extern const rw::math::vpu::Matrix44Affine CreateAdjustedLookAt(Matrix44Affine, VecFloat, VecFloat, Vector2);

			// CameraUtils.cpp:569
			extern float32_t GetSmallestDifferenceBetweenRadAngles(float32_t, float32_t);

			// CameraUtils.cpp:599
			extern Vector3 GetSmallestDifferenceBetweenRadAngles(Vector3, Vector3);

			// CameraUtils.cpp:767
			extern Matrix44Affine CreateLookAt(Vector3, Vector3, Vector3);

			// CameraUtils.cpp:872
			extern bool ResolveLineTestNearestUsingNormal(LineTestNearestPostBox &, Vector3 &, float32_t);

			// CameraUtils.cpp:908
			extern bool ResolveLineTestNearestUsingNormal(LineTestNearestPostBox &, Vector3, Vector3 &, float32_t);

			// CameraUtils.cpp:942
			extern bool ResolveLineTestNearestUsingNormalStrict(LineTestNearestPostBox &, Vector3 &, float32_t);

			// CameraUtils.cpp:979
			extern bool ResolveLineTestNearestUsingDisplacement(LineTestNearestPostBox &, Vector3 &, float32_t, bool);

			// CameraUtils.cpp:1029
			extern bool ResolveLineTestNearestUsingDisplacement(LineTestNearestPostBox &, Vector3, Vector3 &, float32_t, bool);

			// CameraUtils.cpp:1083
			extern bool ResolveLineTestNearestUsingDisplacementAndVector(LineTestNearestPostBox &, Vector3, Vector3 &, Vector3, VecFloat);

			// CameraUtils.cpp:394
			extern bool GetNearestRaceCarToPoint(Vector3, uint32_t &, BrnDirector::Camera::Utils::EPlayerSelectionOptions, VehicleInfo *, uint32_t, BitArray<8u>);

			// CameraUtils.cpp:371
			extern bool GetNearestRaceCarToPlayer(uint32_t &, VehicleInfo *, uint32_t, BitArray<8u>);

			// CameraUtils.cpp:1376
			extern bool TargetOutsideRange(Vector3, Vector3, float32_t);

			// CameraUtils.cpp:1399
			extern bool TargetWillExceedRangeInXSecs(Vector3, Vector3, Vector3, float32_t, float32_t);

			// CameraUtils.cpp:23
			extern const float KF_LENS_BASE_APERTURE;

		}

	}

}

