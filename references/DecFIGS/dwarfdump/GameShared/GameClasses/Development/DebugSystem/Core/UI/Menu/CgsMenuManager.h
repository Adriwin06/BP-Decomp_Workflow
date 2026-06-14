// CgsMenuManager.h:58
struct CgsDev::DebugUI::MenuManager : public DebugInternal {
private:
	// CgsMenuManager.h:138
	DebugStaticPool<CgsDev::DebugUI::Menu> mMenuPool;

	// CgsMenuManager.h:139
	DebugStaticPool<CgsDev::DebugUI::MenuWindow> mWindowPool;

	// CgsMenuManager.h:141
	CgsDev::DebugUI::Menu * mpMainMenu;

public:
	// CgsMenuManager.h:63
	void Construct(const DebugManagerConstructParameters *);

	// CgsMenuManager.h:66
	void Destruct();

	// CgsMenuManager.h:70
	CgsDev::DebugUI::Window * Open(CgsDev::DebugUI::Menu *);

	// CgsMenuManager.h:73
	CgsDev::DebugUI::Window * Open(const char *, CgsDev::DebugUI::Menu *);

	// CgsMenuManager.h:76
	void Close(CgsDev::DebugUI::Menu *);

	// CgsMenuManager.h:79
	void ShowMainMenu();

	// CgsMenuManager.h:82
	CgsDev::DebugUI::MenuWindow * FindMenuWindow(const CgsDev::DebugUI::Menu *) const;

	// CgsMenuManager.h:85
	CgsDev::DebugUI::Menu * FindMenu(const CgsDev::DebugUI::MenuItem *) const;

	// CgsMenuManager.h:88
	void AddMenuItem(const char *, CgsDev::DebugUI::MenuItem *);

	// CgsMenuManager.h:91
	void RemoveMenuItem(CgsDev::DebugUI::MenuItem *);

	// CgsMenuManager.h:94
	void RemoveMenuItemFromMenu(CgsDev::DebugUI::Menu *, CgsDev::DebugUI::MenuItem *);

	// CgsMenuManager.h:97
	bool IsMenuItemAdded(CgsDev::DebugUI::MenuItem *) const;

	// CgsMenuManager.h:100
	CgsDev::DebugUI::Menu * CreateMenuPath(const char *, CgsDev::DebugUI::Menu *);

	// CgsMenuManager.h:103
	CgsDev::DebugUI::Menu * GetMenuFromPath(const char *, CgsDev::DebugUI::Menu *);

	// CgsMenuManager.h:106
	void GetMenuItemPath(const CgsDev::DebugUI::MenuItem *, char *, int32_t);

	// CgsMenuManager.h:109
	void ReplaceMenuItem(CgsDev::DebugUI::MenuItem *, CgsDev::DebugUI::MenuItem *);

	// CgsMenuManager.h:112
	void MoveItemAfter(CgsDev::DebugUI::MenuItem *, CgsDev::DebugUI::MenuItem *);

	// CgsMenuManager.h:115
	CgsDev::DebugUI::Window * OpenWindowFromPath(const char *);

private:
	// CgsMenuManager.h:120
	void DeleteMenu(CgsDev::DebugUI::Menu *);

	// CgsMenuManager.h:123
	CgsDev::DebugUI::Menu * CreateMenu(const char *, CgsDev::DebugUI::Menu *);

	// CgsMenuManager.h:126
	CgsDev::DebugUI::MenuWindow * CreateMenuWindow(CgsDev::DebugUI::Menu *);

	// CgsMenuManager.h:129
	CgsDev::DebugUI::Menu * FindSubMenu(const char *, CgsDev::DebugUI::Menu *);

	// CgsMenuManager.h:132
	void EnsureFreeMenuWindow();

	// CgsMenuManager.h:135
	void SplitPath(const char *, char *, char *, int32_t);

}

