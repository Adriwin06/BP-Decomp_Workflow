// BrnGuiFlaptInterpolatorComponent.h:83
extern const float32_t KF_INVALID_PROPORTION;

// BrnGuiFlaptInterpolatorComponent.h:45
struct BrnGui::FlaptInterpolatorComponent : public BrnFlaptComponent {
protected:
	// BrnGuiFlaptInterpolatorComponent.h:83
	extern const float32_t KF_INVALID_PROPORTION;

	// BrnGuiFlaptInterpolatorComponent.h:85
	MovieClipRef mControlledMovieClip;

	// BrnGuiFlaptInterpolatorComponent.h:87
	Vector4 mv4StartColour;

	// BrnGuiFlaptInterpolatorComponent.h:88
	Vector4 mv4EndColour;

	// BrnGuiFlaptInterpolatorComponent.h:89
	Vector2 mv2StartScale;

	// BrnGuiFlaptInterpolatorComponent.h:90
	Vector2 mv2EndScale;

	// BrnGuiFlaptInterpolatorComponent.h:92
	float32_t mfCurrentProportion;

	// BrnGuiFlaptInterpolatorComponent.h:94
	bool mbSetInterpValues;

public:
	// BrnGuiFlaptInterpolatorComponent.h:53
	void Construct(const void *, StateInterface *, const void *);

	// BrnGuiFlaptInterpolatorComponent.h:60
	void Prepare(const char *, const BrnFlapt::FileRef &, const char *);

	// BrnGuiFlaptInterpolatorComponent.h:69
	void SetInterpValues(const char *, Vector4, Vector4, Vector2, Vector2);

	// BrnGuiFlaptInterpolatorComponent.h:75
	void SetProportion(float32_t);

	// BrnGuiFlaptInterpolatorComponent.h:79
	void Refresh();

}

