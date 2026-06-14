// BrnEventIconManager.cpp:45
void BrnGui::EventIconManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEventIconManager.cpp:120
void BrnGui::EventIconManager::GetEventIconPositions(Vector2 *  lv2IconPositions, int32_t *  lpiNumIcons) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEventIconManager.cpp:124
		int32_t liIconIndex;

	}
	rw::math::vpu::Vector2::Set(/* parameters */);
}

// BrnEventIconManager.cpp:151
void BrnGui::EventIconManager::GetEventIDForIconIndex(int32_t  liIconIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEventIconManager.cpp:99
void BrnGui::EventIconManager::Update2DIcons(const BrnGui::EventIconManager::EventIcon2D *  lpaEventIcons, int32_t  liNumIcons) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEventIconManager.cpp:195
void BrnGui::EventIconManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEventIconManager.cpp:171
void BrnGui::EventIconManager::ReleaseResources(StateInterface *  lpStateInterface, float32_t  lfOptionalFadeDuration) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEventIconManager.cpp:179
		GuiEventDrawEventIcons lDrawEventIcons;

	}
	OutputViewState<BrnGui::GuiEventDrawEventIcons>(/* parameters */);
	AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventDrawEventIcons> >(/* parameters */);
	GuiEventDrawEventIcons::Construct(/* parameters */);
	OutputInternalState<BrnGui::GuiEventDrawEventIcons>(/* parameters */);
}

// BrnEventIconManager.cpp:70
void BrnGui::EventIconManager::Prepare(StateInterface *  lpStateInterface, BrnGui::GuiCache *  lpGuiCache, float32_t  lfOptionalFadeDuration, BrnGui::GuiEventDrawEventIcons::EIconDisplayType  leNewEventIconType, uint32_t *  lpuIconsToIgnore, int32_t  liNumIconstoIgnore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEventIconManager.cpp:81
		GuiEventDrawEventIcons lDrawEventIcons;

	}
	GuiEventDrawEventIcons::Construct(/* parameters */);
	OutputViewState<BrnGui::GuiEventDrawEventIcons>(/* parameters */);
	OutputInternalState<BrnGui::GuiEventDrawEventIcons>(/* parameters */);
}

