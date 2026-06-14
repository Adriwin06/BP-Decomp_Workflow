// CgsWidget.h:55
struct CgsDev::DebugUI::Widget : public DebugInternal {
	int (*)(...) * _vptr.Widget;

public:
	void Widget(const Widget &);

	void Widget();

	// CgsWidget.cpp:72
	virtual void Update(float32_t);

	// CgsWidget.cpp:59
	virtual void Render(CgsDev::Debug2DImmediateRender *, float32_t, float32_t, float32_t, float32_t);

protected:
	// CgsWidget.cpp:101
	const Palette & GetPalette() const;

	// CgsWidget.cpp:116
	const Metrics & GetMetrics() const;

	// CgsWidget.cpp:87
	CgsDev::Debug2DImmediateRender *const Get2DRenderer() const;

}

// CgsWidget.h:55
void CgsDev::DebugUI::Widget::Widget() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

