// BrnCameraSphericalRotationController.h:57
struct BrnDirector::Camera::Utils::CameraSphericalRotationController {
	// BrnCameraSphericalRotationController.h:106
	extern const float32_t KF_PITCH_MAX;

	// BrnCameraSphericalRotationController.h:107
	extern const float32_t KF_PITCH_MIN;

private:
	// BrnCameraSphericalRotationController.h:111
	Vector2 mStickVector;

	// BrnCameraSphericalRotationController.h:112
	float32_t mfYawDegs;

	// BrnCameraSphericalRotationController.h:113
	float32_t mfYawVelocity;

	// BrnCameraSphericalRotationController.h:114
	float32_t mfYawReturnRate;

	// BrnCameraSphericalRotationController.h:115
	float32_t mfUnRotatedTime;

	// BrnCameraSphericalRotationController.h:116
	bool mbIsLookback;

	// BrnCameraSphericalRotationController.h:117
	bool mbWasLookbackLastFrame;

	// BrnCameraSphericalRotationController.h:118
	bool mbIsRotated;

	// BrnCameraSphericalRotationController.h:120
	SmoothMover mPitchMover;

	// BrnCameraSphericalRotationController.h:122
	extern const float32_t KF_DEAD_ZONE;

	// BrnCameraSphericalRotationController.h:123
	extern const float32_t KF_YAW_SPEED;

	// BrnCameraSphericalRotationController.h:124
	extern const float32_t KF_MOVING_YAW_SPEED;

	// BrnCameraSphericalRotationController.h:125
	extern const float32_t KF_PITCH_SPEED;

	// BrnCameraSphericalRotationController.h:126
	extern const float32_t KF_MOVING_YAW_RETURN_RATE;

	// BrnCameraSphericalRotationController.h:127
	extern const float32_t KF_PITCH_RETURN_RATE;

	// BrnCameraSphericalRotationController.h:129
	extern const float32_t KF_YAW_MAX;

	// BrnCameraSphericalRotationController.h:130
	extern const float32_t KF_YAW_MIN;

	// BrnCameraSphericalRotationController.h:131
	extern const float32_t KF_DEADENING_RANGE_FOR_PITCH_MAX;

	// BrnCameraSphericalRotationController.h:132
	extern const float32_t KF_DEADENING_RANGE_FOR_PITCH_MIN;

	// BrnCameraSphericalRotationController.h:134
	extern const float32_t KF_DEADENING_RANGE_FOR_YAW;

public:
	// BrnCameraSphericalRotationController.h:61
	void Construct();

	// BrnCameraSphericalRotationController.h:70
	void Update(float32_t, Vector2, bool, bool, float32_t, float32_t);

	// BrnCameraSphericalRotationController.h:73
	bool IsRotated() const;

	// BrnCameraSphericalRotationController.h:76
	Vector2 GetAdjustedStickVector() const;

	// BrnCameraSphericalRotationController.h:79
	Vector2 GetRawStickVector() const;

	// BrnCameraSphericalRotationController.h:82
	float32_t GetYawRotationAngleDegs() const;

	// BrnCameraSphericalRotationController.h:85
	float32_t GetYawRotationAngleRads() const;

	// BrnCameraSphericalRotationController.h:88
	float32_t GetPitchRotationAngleDegs() const;

	// BrnCameraSphericalRotationController.h:91
	float32_t GetPitchRotationAngleRads() const;

	// BrnCameraSphericalRotationController.h:94
	float32_t GetUnRotatedTime() const;

	// BrnCameraSphericalRotationController.h:97
	bool IsLookback() const;

	// BrnCameraSphericalRotationController.h:100
	bool IsStartingLookbackThisFrame() const;

	// BrnCameraSphericalRotationController.h:103
	bool IsEndingLookbackThisFrame() const;

}

// BrnCameraSphericalRotationController.h:106
extern const float32_t KF_PITCH_MAX;

// BrnCameraSphericalRotationController.h:107
extern const float32_t KF_PITCH_MIN;

// BrnCameraSphericalRotationController.h:122
extern const float32_t KF_DEAD_ZONE;

// BrnCameraSphericalRotationController.h:123
extern const float32_t KF_YAW_SPEED;

// BrnCameraSphericalRotationController.h:124
extern const float32_t KF_MOVING_YAW_SPEED;

// BrnCameraSphericalRotationController.h:125
extern const float32_t KF_PITCH_SPEED;

// BrnCameraSphericalRotationController.h:126
extern const float32_t KF_MOVING_YAW_RETURN_RATE;

// BrnCameraSphericalRotationController.h:127
extern const float32_t KF_PITCH_RETURN_RATE;

// BrnCameraSphericalRotationController.h:129
extern const float32_t KF_YAW_MAX;

// BrnCameraSphericalRotationController.h:130
extern const float32_t KF_YAW_MIN;

// BrnCameraSphericalRotationController.h:131
extern const float32_t KF_DEADENING_RANGE_FOR_PITCH_MAX;

// BrnCameraSphericalRotationController.h:132
extern const float32_t KF_DEADENING_RANGE_FOR_PITCH_MIN;

// BrnCameraSphericalRotationController.h:134
extern const float32_t KF_DEADENING_RANGE_FOR_YAW;

