// BrnHudBorder.h:44
struct BrnGui::HudBorder : public CgsGui::GuiComponent {
private:
	// BrnHudBorder.h:90
	float32_t mfWidthFactor;

	// BrnHudBorder.h:91
	float32_t mfHeightFactor;

	// BrnHudBorder.h:93
	float32_t mfScreenWidth;

	// BrnHudBorder.h:94
	float32_t mfScreenHeight;

	// BrnHudBorder.cpp:24
	extern const float32_t KF_SCREENWIDTH;

	// BrnHudBorder.cpp:25
	extern const float32_t KF_SCREENHEIGHT;

	// BrnHudBorder.cpp:27
	extern const char[16] KAC_APTBORDERWIDTH;

	// BrnHudBorder.cpp:28
	extern const char[17] KAC_APTBORDERHEIGHT;

	// BrnHudBorder.cpp:30
	extern const char[14] KAC_APTSETSCREEN;

	// BrnHudBorder.cpp:31
	extern const char[16] KAC_APTSCREENWIDTH;

	// BrnHudBorder.cpp:32
	extern const char[17] KAC_APTSCREENHEIGHT;

public:
	// BrnHudBorder.cpp:55
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnHudBorder.cpp:78
	void SetWidthFactor(float32_t);

	// BrnHudBorder.cpp:100
	void SetHeightFactor(float32_t);

	// BrnHudBorder.cpp:123
	void SetZoomFactor(float32_t, float32_t);

	// BrnHudBorder.h:118
	float32_t GetWidthFactor() const;

	// BrnHudBorder.h:132
	float32_t GetHeightFactor() const;

private:
	// BrnHudBorder.cpp:158
	void SetupScreen(float32_t, float32_t);

	// BrnHudBorder.cpp:192
	void UpdateApt();

}

