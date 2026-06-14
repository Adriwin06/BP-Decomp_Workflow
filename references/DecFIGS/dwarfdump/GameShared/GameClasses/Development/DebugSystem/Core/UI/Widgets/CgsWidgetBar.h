// CgsWidgetBar.h:52
struct CgsDev::DebugUI::WidgetBar : public CgsDev::DebugUI::Widget {
protected:
	// CgsWidgetBar.h:61
	float32_t mfPercent;

public:
	void WidgetBar(const WidgetBar &);

	void WidgetBar();

	// CgsWidgetBar.cpp:55
	void Prepare();

	// CgsWidgetBar.cpp:75
	virtual void Render(CgsDev::Debug2DImmediateRender *, float32_t, float32_t, float32_t, float32_t);

	// CgsWidgetBar.h:71
	void SetValue(float32_t);

}

// CgsWidgetBar.h:52
void CgsDev::DebugUI::WidgetBar::WidgetBar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

