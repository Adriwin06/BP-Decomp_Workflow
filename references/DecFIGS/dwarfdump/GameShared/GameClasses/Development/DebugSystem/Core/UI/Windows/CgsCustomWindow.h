// CgsCustomWindow.h:94
void CgsDev::DebugUI::CustomWindow::CustomWindow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsCustomWindow.h:55
void CgsDev::DebugUI::CustomWindowMenuItem::CustomWindowMenuItem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsCustomWindow.h:55
struct CgsDev::DebugUI::CustomWindowMenuItem : public CgsDev::DebugUI::MenuItem {
protected:
	// CgsCustomWindow.h:81
	CgsDev::DebugUI::Window * mpWindow;

public:
	void CustomWindowMenuItem();

	void CustomWindowMenuItem(const CustomWindowMenuItem &);

	// CgsCustomWindow.cpp:219
	void Prepare(CgsDev::DebugUI::Window *);

	// CgsCustomWindow.cpp:239
	virtual void Update(float32_t, CgsDev::DebugUI::InputEvent);

	// CgsCustomWindow.cpp:263
	virtual void Render(CgsDev::Debug2DImmediateRender *, float32_t, float32_t, bool, float32_t);

	// CgsCustomWindow.cpp:278
	virtual void ComputeSize();

	// CgsCustomWindow.cpp:296
	virtual bool IsUseful() const;

	// CgsCustomWindow.cpp:314
	virtual void GetDisplayName(char *, int32_t) const;

	// CgsCustomWindow.cpp:330
	virtual CgsDev::DebugUI::Window * OpenAsWindow();

}

// CgsCustomWindow.h:94
struct CgsDev::DebugUI::CustomWindow : public CgsDev::DebugUI::Window {
protected:
	// CgsCustomWindow.h:107
	CustomWindowMenuItem mMenuItem;

public:
	void CustomWindow();

	void CustomWindow(const CustomWindow &);

	// CgsCustomWindow.cpp:60
	void Prepare(float32_t, float32_t, const char *, const char *, int32_t);

	// CgsCustomWindow.cpp:86
	virtual void Update(float32_t, CgsDev::DebugUI::InputEvent);

	// CgsCustomWindow.cpp:155
	void Register(const char *);

	// CgsCustomWindow.cpp:173
	void Unregister();

protected:
	// CgsCustomWindow.cpp:191
	virtual void GetMenuPath(char *, int32_t);

}

