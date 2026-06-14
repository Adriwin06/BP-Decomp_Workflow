// BrnGuiBurnoutSkillsManager.cpp:477
void BrnGui::BurnoutSkillsManager::SelectNextSkill() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnGameState::operator++(/* parameters */);
}

// BrnGuiBurnoutSkillsManager.cpp:429
void BrnGui::BurnoutSkillsManager::SetRoadRuleMode(BrnGameState::EActiveRoadRule  leScoreType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiBurnoutSkillsManager.cpp:161
void BrnGui::BurnoutSkillsManager::SelectNext() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiBurnoutSkillsManager.cpp:331
void BrnGui::BurnoutSkillsManager::YouBeatSkill(BrnGameState::BurnoutSkillzData::EBurnoutSkillType  leSkill) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::GetTime(/* parameters */);
}

// BrnGuiBurnoutSkillsManager.cpp:141
void BrnGui::BurnoutSkillsManager::ResetSkillsData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::GetTime(/* parameters */);
}

// BrnGuiBurnoutSkillsManager.cpp:101
void BrnGui::BurnoutSkillsManager::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::GetTime(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	GuiCache::GetTime(/* parameters */);
}

// BrnGuiBurnoutSkillsManager.cpp:64
void BrnGui::BurnoutSkillsManager::Construct(BrnGui::GuiCache *  lpCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiBurnoutSkillsManager.cpp:75
		int32_t liIndex;

	}
	BrnGameState::BurnoutSkillzData::Clear(/* parameters */);
}

// BrnGuiBurnoutSkillsManager.cpp:359
void BrnGui::BurnoutSkillsManager::ResetPlayerData(EActiveRaceCarIndex  leActiveRaceCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiBurnoutSkillsManager.cpp:361
		BrnGameState::BurnoutSkillzData::EBurnoutSkillType leSkillIter;

		BrnGameState::operator++(/* parameters */);
		{
			// BrnGuiBurnoutSkillsManager.cpp:369
			EActiveRaceCarIndex leCurrentPossibleHighest;

			// BrnGuiBurnoutSkillsManager.cpp:370
			float32_t lfCurrentBest;

			// BrnGuiBurnoutSkillsManager.cpp:371
			EActiveRaceCarIndex leCarItter;

		}
		BrnGameState::BurnoutSkillzData::GetBurnoutSkill(/* parameters */);
		BrnGameState::BurnoutSkillzData::GetBurnoutSkill(/* parameters */);
		operator++(/* parameters */);
		BrnGameState::BurnoutSkillzData::Clear(/* parameters */);
	}
	BrnGameState::BurnoutSkillzData::GetBurnoutSkill(/* parameters */);
}

// BrnGuiBurnoutSkillsManager.cpp:188
void BrnGui::BurnoutSkillsManager::SetSkillsData(EActiveRaceCarIndex  leActiveRaceCar, const GuiNewBurnoutSkillzEvent *  lpEvent, CgsGui::CgsGuiModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiBurnoutSkillsManager.cpp:199
		BrnGameState::BurnoutSkillzData::EBurnoutSkillType leSkillIter;

		// BrnGuiBurnoutSkillsManager.cpp:200
		EActiveRaceCarIndex leLocalPlayerARCIndex;

		// BrnGuiBurnoutSkillsManager.cpp:201
		float32_t lfNewRecord;

		{
			// BrnGuiBurnoutSkillsManager.cpp:273
			GuiNewBurnoutHudMessageEvent lHudMessageEvent;

		}
	}
}

// BrnGuiBurnoutSkillsManager.cpp:25
// BrnGuiBurnoutSkillsManager.cpp:44
// BrnGuiBurnoutSkillsManager.cpp:45
