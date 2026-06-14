// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// CameraUtils.h:42
		namespace Utils {
			// Declaration
			struct SmoothMover {
				// BrnCameraSmoothMover.h:51
				struct Parameters {
					// BrnCameraSmoothMover.h:52
					float32_t mfMaxValue;

					// BrnCameraSmoothMover.h:53
					float32_t mfMinValue;

					// BrnCameraSmoothMover.h:55
					float32_t mfDampeningRange;

					// BrnCameraSmoothMover.h:57
					float32_t mfMaxSpeed;

					// BrnCameraSmoothMover.h:59
					float32_t mfDeadZoneHalfSize;

					// BrnCameraSmoothMover.h:61
					float32_t mfBrakingLag;

					// BrnCameraSmoothMover.h:62
					float32_t mfNormalLag;

					// BrnCameraSmoothMover.h:64
					float32_t mfCenteringRate;

					// BrnCameraSmoothMover.h:65
					float32_t mfCenteringRateBlend;

					// BrnCameraSmoothMover.h:67
					bool mbUseCentering;

					// BrnCameraSmoothMover.h:68
					bool mbUseLimits;

				}

			}

		}

	}

}

// BrnCameraSmoothMover.h:47
struct BrnDirector::Camera::Utils::SmoothMover {
private:
	// BrnCameraSmoothMover.h:117
	float32_t mfCenteringRate;

	// BrnCameraSmoothMover.h:118
	float32_t mfCurrentSpeed;

	// BrnCameraSmoothMover.h:119
	float32_t mfCurrentValue;

public:
	// BrnCameraSmoothMover.h:73
	void Construct(float32_t);

	// BrnCameraSmoothMover.h:77
	float32_t GetCurrentValue() const;

	// BrnCameraSmoothMover.h:82
	void SetCurrentValue(float32_t);

	// BrnCameraSmoothMover.h:89
	void Update(float32_t, float32_t, const BrnDirector::Camera::Utils::SmoothMover::Parameters &);

private:
	// BrnCameraSmoothMover.h:97
	void UpdateNoLimitsWithCentering(float32_t, float32_t, const BrnDirector::Camera::Utils::SmoothMover::Parameters &);

	// BrnCameraSmoothMover.h:103
	void UpdateNoLimitsNoCentering(float32_t, float32_t, const BrnDirector::Camera::Utils::SmoothMover::Parameters &);

	// BrnCameraSmoothMover.h:109
	void UpdateWithLimitsWithCentering(float32_t, float32_t, const BrnDirector::Camera::Utils::SmoothMover::Parameters &);

	// BrnCameraSmoothMover.h:115
	void UpdateWithLimitsNoCentering(float32_t, float32_t, const BrnDirector::Camera::Utils::SmoothMover::Parameters &);

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnPlayerInfo.h:43
	namespace Camera {
		// BrnDebugController.h:40
		namespace Utils {
			// Declaration
			struct SmoothMover {
				// BrnCameraSmoothMover.h:51
				struct Parameters {
					// BrnCameraSmoothMover.h:52
					float32_t mfMaxValue;

					// BrnCameraSmoothMover.h:53
					float32_t mfMinValue;

					// BrnCameraSmoothMover.h:55
					float32_t mfDampeningRange;

					// BrnCameraSmoothMover.h:57
					float32_t mfMaxSpeed;

					// BrnCameraSmoothMover.h:59
					float32_t mfDeadZoneHalfSize;

					// BrnCameraSmoothMover.h:61
					float32_t mfBrakingLag;

					// BrnCameraSmoothMover.h:62
					float32_t mfNormalLag;

					// BrnCameraSmoothMover.h:64
					float32_t mfCenteringRate;

					// BrnCameraSmoothMover.h:65
					float32_t mfCenteringRateBlend;

					// BrnCameraSmoothMover.h:67
					bool mbUseCentering;

					// BrnCameraSmoothMover.h:68
					bool mbUseLimits;

				}

			}

		}

	}

}

