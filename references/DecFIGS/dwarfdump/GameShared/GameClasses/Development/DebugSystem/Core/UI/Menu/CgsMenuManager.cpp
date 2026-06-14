// CgsMenuManager.cpp:86
void CgsDev::DebugUI::MenuManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMenuManager.cpp:283
void CgsDev::DebugUI::MenuManager::FindMenuWindow(const CgsDev::DebugUI::Menu *  lpMenu) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuManager.cpp:286
		int32_t liIndex;

		Internal::DebugStaticPool<CgsDev::DebugUI::MenuWindow>::GetActiveCount(/* parameters */);
		Internal::DebugStaticPool<CgsDev::DebugUI::MenuWindow>::GetActiveAt(/* parameters */);
	}
}

// CgsMenuManager.cpp:314
void CgsDev::DebugUI::MenuManager::FindMenu(const CgsDev::DebugUI::MenuItem *  lpMenuItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuManager.cpp:317
		int32_t liIndex;

	}
	Internal::DebugStaticPool<CgsDev::DebugUI::Menu>::GetActiveAt(/* parameters */);
}

// CgsMenuManager.cpp:685
void CgsDev::DebugUI::MenuManager::GetMenuItemPath(const CgsDev::DebugUI::MenuItem *  lpMenuItem, char *  lpcPathOut, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuManager.cpp:687
		CgsDev::DebugUI::Menu * lpMenu;

	}
}

// CgsMenuManager.cpp:664
void CgsDev::DebugUI::MenuManager::IsMenuItemAdded(CgsDev::DebugUI::MenuItem *  lpMenuItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuManager.cpp:666
		CgsDev::DebugUI::Menu * lpMenu;

	}
}

// CgsMenuManager.cpp:761
void CgsDev::DebugUI::MenuManager::SplitPath(const char *  lpcMenuItemPath, char *  lpcPath, char *  lpcMenuItem, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuManager.cpp:767
		char * lpcTemp;

	}
	std(/* parameters */);
	std(/* parameters */);
}

// CgsMenuManager.cpp:172
void CgsDev::DebugUI::MenuManager::FindSubMenu(const char *  lpcName, CgsDev::DebugUI::Menu *  lpParent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuManager.cpp:175
		int32_t liIndex;

	}
	Internal::DebugStaticPool<CgsDev::DebugUI::Menu>::GetActiveAt(/* parameters */);
}

// CgsMenuManager.cpp:345
void CgsDev::DebugUI::MenuManager::GetMenuFromPath(const char *  lpcPath, CgsDev::DebugUI::Menu *  lpParent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuManager.cpp:360
		const char * lpcStart;

		// CgsMenuManager.cpp:361
		const char * lpcEnd;

	}
	{
		// CgsMenuManager.cpp:373
		int32_t liLength;

		{
			// CgsMenuManager.cpp:377
			char[256] lacName;

			// CgsMenuManager.cpp:382
			CgsDev::DebugUI::Menu * lpSubMenu;

		}
	}
}

// CgsMenuManager.cpp:803
void CgsDev::DebugUI::MenuManager::OpenWindowFromPath(const char *  lpcMenuItemPath) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuManager.cpp:806
		char[256] lacPath;

		// CgsMenuManager.cpp:807
		char[256] lacMenuItem;

		// CgsMenuManager.cpp:811
		CgsDev::DebugUI::Menu * lpMenu;

		// CgsMenuManager.cpp:818
		CgsDev::DebugUI::MenuItem * lpMenuItem;

	}
}

// CgsMenuManager.cpp:474
void CgsDev::DebugUI::MenuManager::Close(CgsDev::DebugUI::Menu *  lpMenu) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuManager.cpp:477
		CgsDev::DebugUI::MenuWindow * lpWindow;

		Internal::DebugStaticPool<CgsDev::DebugUI::MenuWindow>::Free(/* parameters */);
	}
}

// CgsMenuManager.cpp:514
void CgsDev::DebugUI::MenuManager::EnsureFreeMenuWindow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuManager.cpp:523
		int32_t liIndex;

	}
	Internal::DebugStaticPool<CgsDev::DebugUI::MenuWindow>::GetFirstActive(/* parameters */);
	Internal::DebugStaticPool<CgsDev::DebugUI::MenuWindow>::GetFirstActive(/* parameters */);
}

// CgsMenuManager.cpp:104
void CgsDev::DebugUI::MenuManager::CreateMenu(const char *  lpcName, CgsDev::DebugUI::Menu *  lpParent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuManager.cpp:107
		CgsDev::DebugUI::Menu * lpMenu;

		Internal::DebugStaticPool<CgsDev::DebugUI::Menu>::Allocate(/* parameters */);
	}
	Internal::DebugStaticArray<CgsDev::DebugUI::Menu>::GetFree(/* parameters */);
	Internal::DebugStaticArray<CgsDev::DebugUI::Menu>::Add(/* parameters */);
}

// CgsMenuManager.cpp:205
void CgsDev::DebugUI::MenuManager::CreateMenuPath(const char *  lpcPath, CgsDev::DebugUI::Menu *  lpParent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuManager.cpp:220
		const char * lpcStart;

		// CgsMenuManager.cpp:221
		const char * lpcEnd;

	}
	{
		// CgsMenuManager.cpp:233
		int32_t liLength;

		{
			// CgsMenuManager.cpp:237
			char[256] lacName;

			// CgsMenuManager.cpp:242
			CgsDev::DebugUI::Menu * lpSubMenu;

		}
	}
}

// CgsMenuManager.cpp:590
void CgsDev::DebugUI::MenuManager::AddMenuItem(const char *  lpcPath, CgsDev::DebugUI::MenuItem *  lpMenuItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuManager.cpp:593
		CgsDev::DebugUI::Menu * lpMenu;

	}
}

// CgsMenuManager.cpp:59
void CgsDev::DebugUI::MenuManager::Construct(const DebugManagerConstructParameters *  lpConstructParameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Internal::DebugStaticPool<CgsDev::DebugUI::Menu>::Construct(/* parameters */);
	operator new [](/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	Menu::Menu(/* parameters */);
	Internal::DebugStaticArray<CgsDev::DebugUI::Menu>::Construct(/* parameters */);
	Internal::DebugStaticArray<CgsDev::DebugUI::Menu>::Construct(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	Internal::DebugStaticArray<CgsDev::DebugUI::Menu>::Clear(/* parameters */);
	Internal::DebugStaticPool<CgsDev::DebugUI::MenuWindow>::Construct(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	MenuWindow::MenuWindow(/* parameters */);
	Internal::DebugStaticArray<CgsDev::DebugUI::MenuWindow>::Construct(/* parameters */);
	Internal::DebugStaticArray<CgsDev::DebugUI::MenuWindow>::Construct(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	Internal::DebugStaticArray<CgsDev::DebugUI::MenuWindow>::Clear(/* parameters */);
	Internal::DebugStaticPool<CgsDev::DebugUI::Menu>::Clear(/* parameters */);
	Internal::DebugStaticPool<CgsDev::DebugUI::MenuWindow>::Clear(/* parameters */);
}

// CgsMenuManager.cpp:710
void CgsDev::DebugUI::MenuManager::ReplaceMenuItem(CgsDev::DebugUI::MenuItem *  lpMenuItemOld, CgsDev::DebugUI::MenuItem *  lpMenuItemNew) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuManager.cpp:712
		CgsDev::DebugUI::Menu * lpMenu;

	}
}

// CgsMenuManager.cpp:731
void CgsDev::DebugUI::MenuManager::MoveItemAfter(CgsDev::DebugUI::MenuItem *  lpMenuItemReference, CgsDev::DebugUI::MenuItem *  lpMenuItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuManager.cpp:734
		CgsDev::DebugUI::Menu * lpMenuReference;

		// CgsMenuManager.cpp:735
		CgsDev::DebugUI::Menu * lpMenu;

	}
}

// CgsMenuManager.cpp:615
void CgsDev::DebugUI::MenuManager::RemoveMenuItemFromMenu(CgsDev::DebugUI::Menu *  lpMenu, CgsDev::DebugUI::MenuItem *  lpMenuItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Menu::IsEmpty(/* parameters */);
}

// CgsMenuManager.cpp:553
void CgsDev::DebugUI::MenuManager::DeleteMenu(CgsDev::DebugUI::Menu *  lpMenu) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuManager.cpp:568
		CgsDev::DebugUI::Menu * lpParent;

	}
	Menu::IsEmpty(/* parameters */);
	Menu::GetParent(/* parameters */);
	Internal::DebugStaticPool<CgsDev::DebugUI::Menu>::Free(/* parameters */);
}

// CgsMenuManager.cpp:636
void CgsDev::DebugUI::MenuManager::RemoveMenuItem(CgsDev::DebugUI::MenuItem *  lpMenuItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuManager.cpp:638
		CgsDev::DebugUI::Menu * lpMenu;

		Menu::IsEmpty(/* parameters */);
	}
}

// CgsMenuManager.cpp:136
void CgsDev::DebugUI::MenuManager::CreateMenuWindow(CgsDev::DebugUI::Menu *  lpMenu) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuManager.cpp:142
		CgsDev::DebugUI::MenuWindow * lpWindow;

	}
	Internal::DebugStaticPool<CgsDev::DebugUI::MenuWindow>::Allocate(/* parameters */);
	Internal::DebugStaticArray<CgsDev::DebugUI::MenuWindow>::Add(/* parameters */);
}

// CgsMenuManager.cpp:419
void CgsDev::DebugUI::MenuManager::Open(CgsDev::DebugUI::Menu *  lpMenu) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuManager.cpp:422
		CgsDev::DebugUI::MenuWindow * lpWindow;

	}
}

// CgsMenuManager.cpp:499
void CgsDev::DebugUI::MenuManager::ShowMainMenu() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMenuManager.cpp:450
void CgsDev::DebugUI::MenuManager::Open(const char *  lpcPath, CgsDev::DebugUI::Menu *  lpParent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMenuManager.cpp:453
		CgsDev::DebugUI::Menu * lpMenu;

	}
}

