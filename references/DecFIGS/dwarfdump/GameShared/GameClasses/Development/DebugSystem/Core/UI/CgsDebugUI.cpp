// CgsDebugUI.cpp:345
void CgsDev::DebugUI::DebugUI::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugUI.cpp:753
void CgsDev::DebugUI::DebugUI::UpdateCascadePosition(bool  lbOpeningWindow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugUI.cpp:756
		float32_t lfMinX;

		// CgsDebugUI.cpp:757
		float32_t lfMinY;

		// CgsDebugUI.cpp:758
		float32_t lfMaxX;

		// CgsDebugUI.cpp:759
		float32_t lfMaxY;

		// CgsDebugUI.cpp:762
		float32_t lfDirection;

	}
}

// CgsDebugUI.cpp:852
void CgsDev::DebugUI::DebugUI::SafeStringCopy(char *  lpcDst, const char *  lpcSrc, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugUI.cpp:878
void CgsDev::DebugUI::DebugUI::SafeStringCat(char *  lpcDst, const char *  lpcSrc, int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugUI.cpp:880
		int32_t liLength;

	}
}

// CgsDebugUI.cpp:894
void CgsDev::DebugUI::DebugUI::GetDebugManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugUI.cpp:733
void CgsDev::DebugUI::DebugUI::GetCascadePosition(const CgsDev::DebugUI::Window *  lpWindow, const float32_t &  lfX, const float32_t &  lfY) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugUI.cpp:630
void CgsDev::DebugUI::DebugUI::GetNextWindow(CgsDev::DebugUI::Window *  lpWindow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Internal::DebugLinkedList<CgsDev::DebugUI::Window>::GetNextWrap(/* parameters */);
	Internal::DebugLinkedList<CgsDev::DebugUI::Window>::GetFirst(/* parameters */);
}

// CgsDebugUI.cpp:1064
void CgsDev::DebugUI::DebugUI::FindWindowNearPosition(float32_t  lfX, float32_t  lfY, float32_t  lfAlignX, float32_t  lfAlignY, float32_t  lfTolerance, CgsDev::DebugUI::Window *  lpWindowToIgnore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugUI.cpp:1067
		CgsDev::DebugUI::Window * lpWindow;

	}
	Internal::DebugLinkedList<CgsDev::DebugUI::Window>::GetFirst(/* parameters */);
	{
		// CgsDebugUI.cpp:1083
		float32_t lfWindowX;

		// CgsDebugUI.cpp:1084
		float32_t lfWindowY;

		// CgsDebugUI.cpp:1087
		float32_t lfDx;

		// CgsDebugUI.cpp:1088
		float32_t lfDy;

		rw::math::vpu::Abs<float>(/* parameters */);
	}
	Internal::DebugLinkedList<CgsDev::DebugUI::Window>::GetNext(/* parameters */);
	rw::math::vpu::Abs<float>(/* parameters */);
}

// CgsDebugUI.cpp:811
void CgsDev::DebugUI::DebugUI::HasModalWindow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugUI.cpp:560
void CgsDev::DebugUI::DebugUI::IsWindowAdded(CgsDev::DebugUI::Window *  lpWindow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Internal::DebugLinkedList<CgsDev::DebugUI::Window>::IsAdded(/* parameters */);
}

// CgsDebugUI.cpp:578
void CgsDev::DebugUI::DebugUI::GetNextActiveWindow(CgsDev::DebugUI::Window *  lpWindow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugUI.cpp:581
		CgsDev::DebugUI::Window * lpNextWindow;

	}
}

// CgsDebugUI.cpp:396
void CgsDev::DebugUI::DebugUI::Render() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugUI.cpp:398
		CgsDev::DebugUI::Window * lpWindow;

		Internal::DebugLinkedList<CgsDev::DebugUI::Window>::GetFirst(/* parameters */);
		Internal::DebugLinkedList<CgsDev::DebugUI::Window>::GetNext(/* parameters */);
		Internal::DebugLinkedList<CgsDev::DebugUI::Window>::GetFirst(/* parameters */);
		Internal::DebugLinkedList<CgsDev::DebugUI::Window>::GetNext(/* parameters */);
	}
}

// CgsDebugUI.cpp:911
void CgsDev::DebugUI::DebugUI::DockWindow(CgsDev::DebugUI::Window *  lpDockWindow, CgsDev::DebugUI::DockEdge  leDockEdge) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugUI.cpp:923
		float32_t lfStartX;

		// CgsDebugUI.cpp:924
		float32_t lfStartY;

		// CgsDebugUI.cpp:925
		float32_t lfDx;

		// CgsDebugUI.cpp:926
		float32_t lfDy;

		// CgsDebugUI.cpp:927
		float32_t lfAlignX;

		// CgsDebugUI.cpp:928
		float32_t lfAlignY;

		// CgsDebugUI.cpp:929
		float32_t lfStepSign;

		// CgsDebugUI.cpp:932
		float32_t lfMaxX;

		// CgsDebugUI.cpp:933
		float32_t lfMaxY;

		// CgsDebugUI.cpp:992
		bool lbFailed;

		// CgsDebugUI.cpp:993
		float32_t lfX;

		// CgsDebugUI.cpp:994
		float32_t lfY;

		// CgsDebugUI.cpp:995
		float32_t lfMaxWidth;

		// CgsDebugUI.cpp:996
		float32_t lfMaxHeight;

	}
	{
		// CgsDebugUI.cpp:1000
		CgsDev::DebugUI::Window * lpWindow;

		// CgsDebugUI.cpp:1010
		float32_t lfWindowScreenWidth;

		// CgsDebugUI.cpp:1011
		float32_t lfWindowScreenHeight;

	}
}

// CgsDebugUI.cpp:663
void CgsDev::DebugUI::DebugUI::SetActiveWindow(CgsDev::DebugUI::Window *  lpWindow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugUI.cpp:666
		CgsDev::DebugUI::Window * lpPrevActiveWindow;

	}
}

// CgsDebugUI.cpp:648
void CgsDev::DebugUI::DebugUI::GetPreviousWindow(CgsDev::DebugUI::Window *  lpWindow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Internal::DebugLinkedList<CgsDev::DebugUI::Window>::GetPreviousWrap(/* parameters */);
	Internal::DebugLinkedList<CgsDev::DebugUI::Window>::IsAdded(/* parameters */);
	{
	}
	Internal::DebugLinkedList<CgsDev::DebugUI::Window>::GetLast(/* parameters */);
}

// CgsDebugUI.cpp:604
void CgsDev::DebugUI::DebugUI::GetPreviousActiveWindow(CgsDev::DebugUI::Window *  lpWindow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugUI.cpp:607
		CgsDev::DebugUI::Window * lpPreviousWindow;

	}
}

// CgsDebugUI.cpp:516
void CgsDev::DebugUI::DebugUI::RemoveWindow(CgsDev::DebugUI::Window *  lpWindow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Internal::DebugLinkedList<CgsDev::DebugUI::Window>::Remove(/* parameters */);
	Internal::DebugLinkedList<CgsDev::DebugUI::Window>::IsAdded(/* parameters */);
	{
	}
}

// CgsDebugUI.cpp:488
void CgsDev::DebugUI::DebugUI::AddWindow(CgsDev::DebugUI::Window *  lpWindow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Internal::DebugLinkedList<CgsDev::DebugUI::Window>::Add(/* parameters */);
	Internal::DebugLinkedList<CgsDev::DebugUI::Window>::IsAdded(/* parameters */);
	{
	}
}

// CgsDebugUI.cpp:832
void CgsDev::DebugUI::DebugUI::ShowErrorMessage(const char *  lpcMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugUI.cpp:101
void CgsDev::DebugUI::DebugUI::Construct(const DebugManagerConstructParameters *  lpConstructParameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Internal::DebugLinkedList<CgsDev::DebugUI::Window>::Clear(/* parameters */);
	VariableManager::RegisterVariable(/* parameters */);
}

// CgsDebugUI.cpp:144
void CgsDev::DebugUI::DebugUI::Update(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugUI.cpp:146
		CgsDev::DebugUI::Window * lpWindow;

		// CgsDebugUI.cpp:160
		CgsDev::DebugUI::InputEvent leInputEvent;

		// CgsDebugUI.cpp:163
		CgsDev::DebugUI::InputEvent leWindowInputEvent;

		DebugController::GetInputEvent(/* parameters */);
		Internal::DebugLinkedList<CgsDev::DebugUI::Window>::GetFirst(/* parameters */);
		Internal::DebugLinkedList<CgsDev::DebugUI::Window>::GetNext(/* parameters */);
		Internal::DebugLinkedList<CgsDev::DebugUI::Window>::GetCount(/* parameters */);
	}
	{
		// CgsDebugUI.cpp:314
		float32_t lfDX;

		// CgsDebugUI.cpp:315
		float32_t lfDY;

	}
	Window::TogglePin(/* parameters */);
	Internal::DebugLinkedList<CgsDev::DebugUI::Window>::GetCount(/* parameters */);
}

// CgsDebugUI.cpp:36
// CgsDebugUI.cpp:59
