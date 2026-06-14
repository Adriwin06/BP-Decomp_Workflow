// CgsMenuItemText.h:51
struct CgsDev::DebugUI::MenuItemText : public CgsDev::DebugUI::MenuItem {
protected:
	// CgsMenuItemText.h:71
	const char * mpcCaption;

public:
	// CgsMenuItemText.cpp:57
	void Prepare(const char *);

	// CgsMenuItemText.cpp:97
	virtual void Update(float32_t, CgsDev::DebugUI::InputEvent);

	// CgsMenuItemText.cpp:80
	virtual void Render(CgsDev::Debug2DImmediateRender *, float32_t, float32_t, bool, float32_t);

	// CgsMenuItemText.cpp:118
	virtual void ComputeSize();

	// CgsMenuItemText.cpp:135
	virtual void GetDisplayName(char *, int32_t) const;

}

