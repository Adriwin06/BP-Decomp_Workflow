// BrnInterpolatorComponent.h:70
extern const float32_t KF_INVALID_PROPORTION;

// BrnInterpolatorComponent.h:48
struct BrnGui::InterpolatorComponent : public CgsGui::GuiComponent {
private:
	// BrnInterpolatorComponent.cpp:28
	extern const float32_t KF_INVALID_PROPORTION;

	// BrnInterpolatorComponent.h:72
	float32_t mfCurrentProportion;

public:
	// BrnInterpolatorComponent.cpp:49
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnInterpolatorComponent.cpp:68
	void SetProportion(float32_t);

	// BrnInterpolatorComponent.h:88
	void Refresh();

}

