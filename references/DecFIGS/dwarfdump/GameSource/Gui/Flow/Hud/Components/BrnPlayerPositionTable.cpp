// BrnPlayerPositionTable.cpp:1310
void BrnGui::PlayerPositionTableComponent::SetSkillsText(const char *  lpcText) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlayerPositionTable.cpp:1314
		MovieClipRef lTextFieldParent;

	}
}

// BrnPlayerPositionTable.cpp:1334
void BrnGui::PlayerPositionTableComponent::SetValuesDirty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlayerPositionTable.cpp:1336
		int32_t liIndex;

		PlayerPositionSingleComponent::SetValueChanged(/* parameters */);
	}
}

// BrnPlayerPositionTable.cpp:803
void BrnGui::PlayerPositionTableComponent::FunctionSortHighToLow(const void *  lp1, const void *  lp2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlayerPositionTable.cpp:805
		const PlayerPositionSingleData * lpPlayer1;

		// BrnPlayerPositionTable.cpp:806
		const PlayerPositionSingleData * lpPlayer2;

	}
	CgsNetwork::UsernameCompare(/* parameters */);
}

// BrnPlayerPositionTable.cpp:868
void BrnGui::PlayerPositionTableComponent::FunctionSortLowToHigh(const void *  lp1, const void *  lp2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlayerPositionTable.cpp:870
		const PlayerPositionSingleData * lpPlayer1;

		// BrnPlayerPositionTable.cpp:871
		const PlayerPositionSingleData * lpPlayer2;

	}
	CgsNetwork::UsernameCompare(/* parameters */);
}

// BrnPlayerPositionTable.cpp:933
void BrnGui::PlayerPositionTableComponent::FunctionSortLowToHighZeroInvalid(const void *  lp1, const void *  lp2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlayerPositionTable.cpp:935
		const PlayerPositionSingleData * lpPlayer1;

		// BrnPlayerPositionTable.cpp:936
		const PlayerPositionSingleData * lpPlayer2;

	}
	CgsNetwork::UsernameCompare(/* parameters */);
}

// BrnPlayerPositionTable.cpp:1008
void BrnGui::PlayerPositionTableComponent::FunctionSortTeamLowToHigh(const void *  lp1, const void *  lp2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlayerPositionTable.cpp:1010
		const PlayerPositionSingleData * lpPlayer1;

		// BrnPlayerPositionTable.cpp:1011
		const PlayerPositionSingleData * lpPlayer2;

	}
	CgsNetwork::UsernameCompare(/* parameters */);
}

// BrnPlayerPositionTable.cpp:1086
void BrnGui::PlayerPositionTableComponent::FunctionSortAlphabetical(const void *  lp1, const void *  lp2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlayerPositionTable.cpp:1088
		const PlayerPositionSingleData * lpPlayer1;

		// BrnPlayerPositionTable.cpp:1089
		const PlayerPositionSingleData * lpPlayer2;

	}
	CgsNetwork::UsernameCompare(/* parameters */);
}

// BrnPlayerPositionTable.cpp:158
void BrnGui::PlayerPositionTableComponent::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlayerPositionTable.cpp:162
		char[128] lacBuffer;

		// BrnPlayerPositionTable.cpp:163
		int32_t liIndex;

		BrnFlaptComponent::Prepare(/* parameters */);
	}
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
}

// BrnPlayerPositionTable.cpp:97
void BrnGui::PlayerPositionTableComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlayerPositionTable.cpp:133
		int32_t liIndex;

		BrnFlaptComponent::Construct(/* parameters */);
	}
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	ClearStoredData(/* parameters */);
}

// BrnPlayerPositionTable.cpp:751
void BrnGui::PlayerPositionTableComponent::CountLinesAndAddTotal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlayerPositionTable.cpp:754
		int32_t liIndex;

		// BrnPlayerPositionTable.cpp:771
		PlayerPositionSingleData * lpTotalData;

	}
	FreeburnChallengeManager::IsStarted(/* parameters */);
	FreeburnChallengeManager::GetCurrentAction(/* parameters */);
	CgsNetwork::PlayerName::Construct(/* parameters */);
}

// BrnPlayerPositionTable.cpp:404
void BrnGui::PlayerPositionTableComponent::FillOutOnlineData(EActiveRaceCarIndex  leCurrentActiveRaceCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlayerPositionTable.cpp:408
		const InGamePlayerStatusData * lpPlayerStatus;

		GuiCache::GetOnlinePlayerInfo(/* parameters */);
	}
	CgsNetwork::PlayerName::GetPlayerName(/* parameters */);
	CgsNetwork::PlayerName::Construct(/* parameters */);
	CgsCore::StrnCpy(/* parameters */);
	GuiCache::GetCurrentOnlinePlayerTeam(/* parameters */);
	GuiCache::GetOnlinePlayerDisconnected(/* parameters */);
	BrnNetwork::LiveRevengeRelationship::GetRelationshipStatus(/* parameters */);
	GuiCache::IsOnlinePlayerEliminated(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	FreeburnChallengeManager::GetCurrentSuccessForARCI(/* parameters */);
	{
		// BrnPlayerPositionTable.cpp:515
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		FreeburnChallengeManager::GetCurrentSuccessForARCI(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPlayerPositionTable.cpp:589
void BrnGui::PlayerPositionTableComponent::FillOutOnlineValueData(EActiveRaceCarIndex  leCurrentActiveRaceCar, const GuiEventRaceDistanceRemaining *  lpDistanceEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlayerPositionTable.cpp:627
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GuiCache::GetCurrentOnlinePlayerTeam(/* parameters */);
	FreeburnChallengeManager::IsStarted(/* parameters */);
	GuiCache::GetBurnoutSkill(/* parameters */);
	GuiCache::GetCurrentSkillzSelected(/* parameters */);
	BrnGameState::BurnoutSkillzData::GetBurnoutSkill(/* parameters */);
	FreeburnChallengeManager::GetCurrentContributionForARCI(/* parameters */);
}

// BrnPlayerPositionTable.cpp:379
void BrnGui::PlayerPositionTableComponent::FillOutInActiveRaceCarOrder(const GuiEventRaceDistanceRemaining *  lpDistanceEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlayerPositionTable.cpp:381
		EActiveRaceCarIndex leCurrentActiveRaceCar;

		operator++(/* parameters */);
	}
}

// BrnPlayerPositionTable.cpp:661
void BrnGui::PlayerPositionTableComponent::SortData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlayerPositionTable.cpp:730
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPlayerPositionTable.cpp:1280
void BrnGui::PlayerPositionTableComponent::SetTitleText(const char *  lpcText) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlayerPositionTable.cpp:1284
		MovieClipRef lTextFieldParent;

		// BrnPlayerPositionTable.cpp:1290
		GuiAudioTriggerEvent lAudioTrigger;

	}
	OutputGuiEvent<BrnGui::GuiAudioTriggerEvent>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiAudioTriggerEvent> >(/* parameters */);
}

// BrnPlayerPositionTable.cpp:1138
void BrnGui::PlayerPositionTableComponent::ProcessOnlineFreeburnTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlayerPositionTable.cpp:1197
		BrnGameState::BurnoutSkillzData::EBurnoutSkillType leNewSkillzState;

	}
	GuiCache::GetCurrentSkillzSelected(/* parameters */);
	{
		// BrnPlayerPositionTable.cpp:1249
		char[16] lacBuffer;

	}
	FreeburnChallengeManager::GetCurrentTargetType(/* parameters */);
	FreeburnChallengeManager::GetCurrentTargetType(/* parameters */);
	FreeburnChallengeManager::GetCurrentTargetType(/* parameters */);
	FreeburnChallengeManager::GetCurrentTargetType(/* parameters */);
}

// BrnPlayerPositionTable.cpp:186
void BrnGui::PlayerPositionTableComponent::SetupGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::GetGameMode(/* parameters */);
	{
		// BrnPlayerPositionTable.cpp:250
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnPlayerPositionTable.cpp:312
void BrnGui::PlayerPositionTableComponent::DisplayData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlayerPositionTable.cpp:315
		int32_t liIndex;

	}
	PlayerPositionSingleComponent::SetInvisible(/* parameters */);
}

// BrnPlayerPositionTable.cpp:267
void BrnGui::PlayerPositionTableComponent::UpdatePositionDetails(const GuiEventRaceDistanceRemaining *  lpDistanceEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	ClearStoredData(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnPlayerPositionTable.cpp:35
// BrnPlayerPositionTable.cpp:33
// BrnPlayerPositionTable.cpp:57
// BrnPlayerPositionTable.cpp:25
// BrnPlayerPositionTable.cpp:26
// BrnPlayerPositionTable.cpp:29
// BrnPlayerPositionTable.cpp:30
