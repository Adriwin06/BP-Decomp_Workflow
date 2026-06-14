// CgsMenu.h:61
struct CgsDev::DebugUI::Menu : public MenuItem {
protected:
	// CgsMenu.h:134
	extern const int32_t KI_MAXMENUNAME = 25;

	// CgsMenu.h:136
	char[25] macCaption;

	// CgsMenu.h:137
	CgsDev::DebugUI::Menu * mpParent;

	// CgsMenu.h:138
	CgsDev::DebugUI::MenuItem * mpCurrentMenuItem;

	// CgsMenu.h:140
	DebugLinkedList<CgsDev::DebugUI::MenuItem> mMenuItems;

public:
	void Menu(const CgsDev::DebugUI::Menu &);

	void Menu();

	// CgsMenu.cpp:64
	void Prepare(const char *, CgsDev::DebugUI::Menu *);

	// CgsMenu.cpp:121
	virtual void Update(float32_t, CgsDev::DebugUI::InputEvent);

	// CgsMenu.cpp:100
	virtual void Render(CgsDev::Debug2DImmediateRender *, float32_t, float32_t, bool, float32_t);

	// CgsMenu.cpp:159
	virtual void ComputeSize();

	// CgsMenu.h:156
	const char * GetCaption() const;

	// CgsMenu.h:162
	CgsDev::DebugUI::Menu * GetParent() const;

	// CgsMenu.cpp:178
	void GetPath(char *, int32_t);

	// CgsMenu.cpp:215
	void AddMenuItem(CgsDev::DebugUI::MenuItem *);

	// CgsMenu.cpp:237
	void RemoveMenuItem(CgsDev::DebugUI::MenuItem *);

	// CgsMenu.cpp:316
	bool IsMenuItemAdded(const CgsDev::DebugUI::MenuItem *) const;

	// CgsMenu.h:168
	bool IsEmpty() const;

	// CgsMenu.cpp:268
	void ReplaceMenuItem(CgsDev::DebugUI::MenuItem *, CgsDev::DebugUI::MenuItem *);

	// CgsMenu.cpp:294
	void AddMenuItemAfter(CgsDev::DebugUI::MenuItem *, CgsDev::DebugUI::MenuItem *);

	// CgsMenu.cpp:454
	CgsDev::DebugUI::MenuItem * SelectNextMenuItem();

	// CgsMenu.cpp:476
	CgsDev::DebugUI::MenuItem * SelectPreviousMenuItem();

	// CgsMenu.cpp:336
	bool IsMenuUseful() const;

	// CgsMenu.cpp:365
	virtual void GetDisplayName(char *, int32_t) const;

	// CgsMenu.cpp:416
	virtual CgsDev::DebugUI::Window * OpenAsWindow();

	// CgsMenu.cpp:384
	CgsDev::DebugUI::MenuItem * FindMenuItemByName(const char *);

	// CgsMenu.cpp:433
	void GetSelectedItemString(char *, int32_t) const;

}

// CgsMenu.h:61
void CgsDev::DebugUI::Menu::Menu() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMenu.h:134
extern const int32_t KI_MAXMENUNAME = 25;

