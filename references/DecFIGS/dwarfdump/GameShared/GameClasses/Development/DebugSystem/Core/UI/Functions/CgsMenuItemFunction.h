// CgsMenuItemFunction.h:52
struct CgsDev::DebugUI::MenuItemFunction : public MenuItem {
protected:
	// CgsMenuItemFunction.h:83
	Function * mpFunction;

public:
	void MenuItemFunction(const MenuItemFunction &);

	void MenuItemFunction();

	// CgsMenuItemFunction.cpp:54
	void Prepare(Function *);

	// CgsMenuItemFunction.cpp:92
	virtual void Update(float32_t, CgsDev::DebugUI::InputEvent);

	// CgsMenuItemFunction.cpp:74
	virtual void Render(CgsDev::Debug2DImmediateRender *, float32_t, float32_t, bool, float32_t);

	// CgsMenuItemFunction.cpp:119
	virtual void ComputeSize();

	// CgsMenuItemFunction.cpp:138
	virtual bool IsUseful() const;

	// CgsMenuItemFunction.cpp:156
	virtual void GetDisplayName(char *, int32_t) const;

	// CgsMenuItemFunction.cpp:174
	virtual void GetItemString(char *, int32_t) const;

	// CgsMenuItemFunction.h:94
	Function * GetFunction();

}

// CgsMenuItemFunction.h:52
void CgsDev::DebugUI::MenuItemFunction::MenuItemFunction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

