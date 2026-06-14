// CgsMenuWindow.h:55
struct CgsDev::DebugUI::MenuWindow : public CgsDev::DebugUI::Window {
	// CgsMenuWindow.cpp:46
	extern const char * KPC_EMPTYMENU;

protected:
	// CgsMenuWindow.h:77
	CgsDev::DebugUI::Menu * mpMenu;

public:
	void MenuWindow(const MenuWindow &);

	void MenuWindow();

	// CgsMenuWindow.cpp:62
	void Prepare(CgsDev::DebugUI::Menu *);

	// CgsMenuWindow.cpp:94
	virtual void Update(float32_t, CgsDev::DebugUI::InputEvent);

	// CgsMenuWindow.cpp:251
	virtual void Render(CgsDev::Debug2DImmediateRender *);

	// CgsMenuWindow.h:87
	CgsDev::DebugUI::Menu * GetMenu() const;

protected:
	// CgsMenuWindow.cpp:296
	virtual void GetMenuPath(char *, int32_t);

	// CgsMenuWindow.cpp:313
	virtual void GetSelectedItemString(char *, int32_t) const;

}

// CgsMenuWindow.h:55
void CgsDev::DebugUI::MenuWindow::MenuWindow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

