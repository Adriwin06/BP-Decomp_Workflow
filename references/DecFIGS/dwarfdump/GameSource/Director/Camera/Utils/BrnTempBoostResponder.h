// BrnTempBoostResponder.h:43
struct BrnDirector::Camera::Utils::TempCameraBoostResponder {
	// BrnTempBoostResponder.h:46
	extern const float32_t kfBoostTime;

	// BrnTempBoostResponder.h:47
	extern const float32_t kfMinSpeedMphForBoostEffect;

private:
	// BrnTempBoostResponder.h:62
	bool mbBoosting;

	// BrnTempBoostResponder.h:63
	float32_t mfParametricTime;

public:
	// BrnTempBoostResponder.h:50
	void Construct();

	// BrnTempBoostResponder.h:55
	void Update(bool, float32_t);

	// BrnTempBoostResponder.h:58
	float32_t GetFOVBoostAmount();

}

// BrnTempBoostResponder.h:46
extern const float32_t kfBoostTime;

// BrnTempBoostResponder.h:47
extern const float32_t kfMinSpeedMphForBoostEffect;

