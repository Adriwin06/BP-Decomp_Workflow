// CgsMenuItemVariable.h:52
struct CgsDev::DebugUI::MenuItemVariable : public CgsDev::DebugUI::MenuItem {
protected:
	// CgsMenuItemVariable.h:86
	Variable * mpVariable;

public:
	void MenuItemVariable(const MenuItemVariable &);

	void MenuItemVariable();

	// CgsMenuItemVariable.cpp:54
	virtual void Prepare(Variable *);

	// CgsMenuItemVariable.cpp:96
	virtual void Update(float32_t, CgsDev::DebugUI::InputEvent);

	// CgsMenuItemVariable.cpp:74
	virtual void Render(CgsDev::Debug2DImmediateRender *, float32_t, float32_t, bool, float32_t);

	// CgsMenuItemVariable.cpp:135
	virtual void ComputeSize();

	// CgsMenuItemVariable.cpp:158
	virtual bool IsUseful() const;

	// CgsMenuItemVariable.cpp:172
	virtual bool IsVisible() const;

	// CgsMenuItemVariable.h:96
	Variable * GetVariable();

	// CgsMenuItemVariable.cpp:190
	virtual void GetDisplayName(char *, int32_t) const;

	// CgsMenuItemVariable.cpp:212
	virtual void GetItemString(char *, int32_t) const;

}

// CgsMenuItemVariable.h:52
void CgsDev::DebugUI::MenuItemVariable::MenuItemVariable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

