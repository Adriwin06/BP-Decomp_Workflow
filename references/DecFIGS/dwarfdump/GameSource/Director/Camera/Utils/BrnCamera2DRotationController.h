// BrnCamera2DRotationController.h:49
struct BrnDirector::Camera::Utils::Camera2DRotationController {
	// BrnCamera2DRotationController.h:52
	extern const float32_t kfDefaultBlendFactor;

	// BrnCamera2DRotationController.h:53
	extern const float32_t kfDefaultReturnBlendFactor;

	// BrnCamera2DRotationController.h:54
	extern const float32_t kfDefaultMinRotationTime;

	// BrnCamera2DRotationController.h:55
	extern const float32_t kfDeadZoneRadius;

private:
	// BrnCamera2DRotationController.h:95
	Vector2 mStickVector;

	// BrnCamera2DRotationController.h:96
	float32_t mfTimeSinceRotation;

	// BrnCamera2DRotationController.h:97
	float32_t mfMinRotationTime;

	// BrnCamera2DRotationController.h:98
	float32_t mfRotationAngleDegs;

	// BrnCamera2DRotationController.h:99
	float32_t mfRotationBlendFactor;

	// BrnCamera2DRotationController.h:100
	float32_t mfRotationReturnBlendFactor;

	// BrnCamera2DRotationController.h:101
	bool mbIsRotated;

	// BrnCamera2DRotationController.h:102
	bool mbIsLookbackLastFrame;

	// BrnCamera2DRotationController.h:103
	bool mbIsLookback;

public:
	// BrnCamera2DRotationController.h:59
	void Construct();

	// BrnCamera2DRotationController.h:66
	void Update(float32_t, Vector2, bool, bool);

	// BrnCamera2DRotationController.h:69
	bool IsRotated() const;

	// BrnCamera2DRotationController.h:72
	Vector2 GetAdjustedStickVector() const;

	// BrnCamera2DRotationController.h:75
	Vector2 GetRawStickVector() const;

	// BrnCamera2DRotationController.h:78
	float32_t GetRotationAngleDegs() const;

	// BrnCamera2DRotationController.h:81
	float32_t GetRotationAngleRads() const;

	// BrnCamera2DRotationController.h:84
	bool IsLookback() const;

	// BrnCamera2DRotationController.h:87
	bool IsStartingLookbackThisFrame() const;

	// BrnCamera2DRotationController.h:90
	bool IsEndingLookbackThisFrame() const;

}

// BrnCamera2DRotationController.h:52
extern const float32_t kfDefaultBlendFactor;

// BrnCamera2DRotationController.h:53
extern const float32_t kfDefaultReturnBlendFactor;

// BrnCamera2DRotationController.h:54
extern const float32_t kfDefaultMinRotationTime;

// BrnCamera2DRotationController.h:55
extern const float32_t kfDeadZoneRadius;

