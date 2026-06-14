// CgsMenuItemVariableBar.h:51
struct CgsDev::DebugUI::MenuItemVariableBar : public CgsDev::DebugUI::MenuItemVariable {
private:
	// CgsMenuItemVariableBar.h:68
	float32_t mfMinVal;

	// CgsMenuItemVariableBar.h:69
	float32_t mfMaxVal;

public:
	// CgsMenuItemVariableBar.cpp:55
	virtual void Prepare(Variable *);

	// CgsMenuItemVariableBar.cpp:76
	virtual void Update(float32_t, CgsDev::DebugUI::InputEvent);

	// CgsMenuItemVariableBar.cpp:108
	virtual void Render(CgsDev::Debug2DImmediateRender *, float32_t, float32_t, bool, float32_t);

	// CgsMenuItemVariableBar.cpp:151
	virtual void ComputeSize();

}

