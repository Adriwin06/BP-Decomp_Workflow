// BrnDepthOfField.h:39
struct BrnDirector::Camera::DepthOfField {
private:
	// BrnDepthOfField.h:98
	float32_t mfFocusStartDistanceMeters;

	// BrnDepthOfField.h:99
	float32_t mfPerfectFocusStartDistanceMeters;

	// BrnDepthOfField.h:100
	float32_t mfPerfectFocusEndDistanceMeters;

	// BrnDepthOfField.h:101
	float32_t mfFocusEndDistanceMeters;

	// BrnDepthOfField.h:102
	float32_t mfBlurriness;

public:
	// BrnDepthOfField.h:43
	void Construct();

	// BrnDepthOfField.h:46
	void Clear();

	// BrnDepthOfField.h:49
	bool IsActive() const;

	// BrnDepthOfField.h:57
	void SetParams(float32_t, float32_t, float32_t, float32_t, float32_t);

	// BrnDepthOfField.h:64
	void SetParams(float32_t, float32_t, float32_t, float32_t);

	// BrnDepthOfField.h:69
	void SetParams(float32_t, float32_t);

	// BrnDepthOfField.h:72
	float32_t GetFocusStartDistanceMeters() const;

	// BrnDepthOfField.h:75
	float32_t GetPerfectFocusStartDistanceMeters() const;

	// BrnDepthOfField.h:78
	float32_t GetPerfectFocusEndDistanceMeters() const;

	// BrnDepthOfField.h:81
	float32_t GetFocusEndDistanceMeters() const;

	// BrnDepthOfField.h:84
	float32_t GetBlurriness() const;

	// BrnDepthOfField.h:88
	void SetBlurriness(float32_t);

	// BrnDepthOfField.h:94
	DepthOfField Interpolate(const DepthOfField &, const DepthOfField &, float32_t);

}

