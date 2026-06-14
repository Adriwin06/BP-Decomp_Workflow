// BrnSpeedResponder.h:43
struct BrnDirector::Camera::Utils::SpeedResponder {
private:
	// BrnSpeedResponder.h:59
	float32_t mfSpeedRatio;

public:
	// BrnSpeedResponder.h:47
	void Construct();

	// BrnSpeedResponder.h:52
	void Update(float32_t, float32_t);

	// BrnSpeedResponder.h:55
	float32_t GetSpeedRatio();

}

