// BrnFriendsList.cpp:2435
void BrnGui::FriendsListComponent::GetArrowState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:2437
		BrnGui::FriendsListComponent::EArrowConfigurations leCurrentArrowState;

	}
}

// BrnFriendsList.cpp:552
void BrnGui::FriendsListComponent::DoTransitionComplete() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnFriendsList.cpp:3174
void BrnGui::FriendsListComponent::RemoveUnneededFriends() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:3176
		bool lbIsUnneeded;

	}
}

// BrnFriendsList.cpp:1692
void BrnGui::FriendsListComponent::HandleBranchDPadRightChallenges() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnFriendsList.cpp:2086
void BrnGui::FriendsListComponent::HasMultiplayerPrivileges() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnFriendsList.cpp:3897
void BrnGui::FriendsListComponent::TransitionCompleteCallback(void *  lpUserData, uint16_t  luArg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:3900
		FriendsListComponent * lpThis;

	}
}

// BrnFriendsList.cpp:3533
void BrnGui::FriendsListComponent::Highlight(int8_t  liSlotToHighlight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:3535
		int32_t liIndex;

	}
}

// BrnFriendsList.cpp:3299
void BrnGui::FriendsListComponent::BuddySortFunction(const void *  lp1, const void *  lp2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:3304
		const BuddyInformation * lpBuddy1;

		// BrnFriendsList.cpp:3305
		const BuddyInformation * lpBuddy2;

	}
	CgsNetwork::UsernameCompare(/* parameters */);
}

// BrnFriendsList.cpp:3060
void BrnGui::FriendsListComponent::SortFullList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:3062
		int32_t liCurrentIndex;

		// BrnFriendsList.cpp:3063
		int32_t liBuddyIndex;

		// BrnFriendsList.cpp:3064
		int32_t liPlayerIndex;

		// BrnFriendsList.cpp:3065
		BuddyInformation * lpBuddy;

	}
	{
		// BrnFriendsList.cpp:3076
		const InGamePlayerStatusData * lpPlayerStatusData;

		GuiCache::GetOnlinePlayerInfoByIndex(/* parameters */);
		CgsNetwork::PlayerName::IsEqualTo(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:3135
		BrnGameState::GameStateModuleIO::EGameModeType leGameMode;

		GuiCache::GetGameMode(/* parameters */);
	}
}

// BrnFriendsList.cpp:3424
void BrnGui::FriendsListComponent::MoveHighlightDueToBranchOpen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:3436
		int32_t liIndex;

	}
	{
		// BrnFriendsList.cpp:3472
		int32_t liSlotsBelow;

		// BrnFriendsList.cpp:3475
		int32_t liFriendsBelow;

		// BrnFriendsList.cpp:3478
		int32_t liNumberToShiftDown;

	}
	CgsNetwork::PlayerName::IsEqualTo(/* parameters */);
	CgsNetwork::PlayerName::Clear(/* parameters */);
}

// BrnFriendsList.cpp:2381
void BrnGui::FriendsListComponent::SetVisible(bool  lVisibleFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetDirty(/* parameters */);
	SetDirty(/* parameters */);
}

// BrnFriendsList.cpp:2464
void BrnGui::FriendsListComponent::WithdrawBranches() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetDirty(/* parameters */);
	CgsNetwork::PlayerName::Clear(/* parameters */);
	SetDirty(/* parameters */);
	SetDirty(/* parameters */);
}

// BrnFriendsList.cpp:2931
void BrnGui::FriendsListComponent::BuildShortcutOptions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:2933
		int32_t liIndex;

	}
	GuiCache::GetFreeburnChallengeManager(/* parameters */);
	GuiCache::GetFreeburnChallengeManager(/* parameters */);
	GuiCache::GetFreeburnChallengeManager(/* parameters */);
}

// BrnFriendsList.cpp:374
void BrnGui::FriendsListComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:389
		int8_t liCurrentBranch;

		// BrnFriendsList.cpp:404
		int32_t liCurrentEntry;

		BrnFlaptComponent::Construct(/* parameters */);
	}
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	CgsNetwork::PlayerName::Clear(/* parameters */);
}

// BrnFriendsList.cpp:485
void BrnGui::FriendsListComponent::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:492
		int8_t liCurrentBranch;

		// BrnFriendsList.cpp:498
		int32_t liCurrentEntry;

		// BrnFriendsList.cpp:499
		char[128] lacEntryName;

		BrnFlaptComponent::Prepare(/* parameters */);
	}
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
}

// BrnFriendsList.cpp:3794
void BrnGui::FriendsListComponent::SaveCurrentState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::PlayerName::GetPlayerName(/* parameters */);
	CgsNetwork::PlayerName::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnFriendsList.cpp:3030
void BrnGui::FriendsListComponent::BuildChallengeList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:3032
		int32_t liChallengeIndex;

		// BrnFriendsList.cpp:3034
		const ChallengeList * lpChallengeList;

		// BrnFriendsList.cpp:3036
		int32_t liPlayerCount;

		GuiCache::GetWorldDataController(/* parameters */);
	}
	GuiCache::GetOnlinePlayerCount(/* parameters */);
	{
		// BrnFriendsList.cpp:3041
		const ChallengeListEntry * lpChallenge;

		BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnFriendsList.cpp:1704
void BrnGui::FriendsListComponent::ShowFriendsListBranch() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:1707
		BrnGui::FriendsListEntry::EFriendListEntryState leEntryStatus;

		// BrnFriendsList.cpp:1749
		int8_t liCurrentBranch;

		// BrnFriendsList.cpp:1750
		int8_t liValidBranchCount;

		{
			// BrnFriendsList.cpp:1743
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	SetDirty(/* parameters */);
	CgsNetwork::PlayerName::GetPlayerName(/* parameters */);
	CgsNetwork::PlayerName::Construct(/* parameters */);
	SetDirty(/* parameters */);
	SetDirty(/* parameters */);
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
}

// BrnFriendsList.cpp:1829
void BrnGui::FriendsListComponent::ShowShortcutsBranch() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:1831
		int8_t liCurrentBranch;

		// BrnFriendsList.cpp:1832
		int8_t liValidBranchCount;

	}
	SetDirty(/* parameters */);
	CgsNetwork::PlayerName::Clear(/* parameters */);
	SetDirty(/* parameters */);
	{
		// BrnFriendsList.cpp:1901
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnFriendsList.cpp:2518
void BrnGui::FriendsListComponent::UpdateAptVariables() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:2520
		const char * lkpcStringID;

		// BrnFriendsList.cpp:2529
		const char * lpcStringIDToUse;

		// BrnFriendsList.cpp:2580
		float32_t lfPosition;

	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	BrnFlapt::MovieClipRef::SetPositionY(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	{
		// BrnFriendsList.cpp:2533
		char[64] lacText;

		CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnFriendsList.cpp:2409
void BrnGui::FriendsListComponent::SetTotalFriends(int32_t  liTotalFriends) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:2420
		GuiEventWrapper<CgsGui::GuiEvent<99>,40>::GuiEventOnlineGetBuddies lBuddiesRequest;

	}
	OutputGuiEvent<BrnGui::GuiEventOnlineGetBuddies>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventOnlineGetBuddies> >(/* parameters */);
}

// BrnFriendsList.cpp:2353
void BrnGui::FriendsListComponent::RequestRefreshedData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:2364
		GuiEventWrapper<CgsGui::GuiEvent<98>,40>::GuiEventOnlineGetBuddyCount lBuddyCount;

		OutputGuiEvent<BrnGui::GuiEventOnlineGetBuddyCount>(/* parameters */);
	}
	CgsGui::GuiEventWrapper<CgsGui::GuiEvent<98>,40>::SetRawEvent(/* parameters */);
}

// BrnFriendsList.cpp:2333
void BrnGui::FriendsListComponent::Invalidate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:2335
		int8_t liCurrentIndex;

	}
}

// BrnFriendsList.cpp:3976
void BrnGui::FriendsListComponent::Close() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetDirty(/* parameters */);
	{
		// BrnFriendsList.cpp:3982
		CgsID lChallengeID;

		// BrnFriendsList.cpp:3984
		GuiChallengeSelectedEvent lChallengeSelected;

		GuiCache::GetFreeburnChallengeList(/* parameters */);
		BrnResource::ChallengeList::GetChallengeData(/* parameters */);
		BrnResource::ChallengeListEntry::GetChallengeStyle(/* parameters */);
		OutputGuiEvent<BrnGui::GuiChallengeSelectedEvent>(/* parameters */);
		OutputGuiEvent<BrnGui::GuiChallengeSelectedEvent>(/* parameters */);
		CgsGui::GuiEventWrapper<BrnGui::GuiChallengeSelectedEvent,40>::SetRawEvent(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsResource::ResourcePtr<BrnResource::ChallengeListResource>::operator->(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

// BrnFriendsList.cpp:1981
void BrnGui::FriendsListComponent::ShowFriendsList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:1993
		GuiEventFriendListShowing lFriendListShowingEvent;

	}
	SetDirty(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventFriendListShowing>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventFriendListShowing> >(/* parameters */);
}

// BrnFriendsList.cpp:1539
void BrnGui::FriendsListComponent::HandleBranchDPadRightShortcuts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetDirty(/* parameters */);
	{
		// BrnFriendsList.cpp:1545
		GuiEventRoadRuleModeRequest lRoadRuleOffRequest;

	}
	{
		// BrnFriendsList.cpp:1563
		GuiEventRoadRuleModeRequest lRoadRuleOffRequest;

		OutputGuiEvent<BrnGui::GuiEventRoadRuleModeRequest>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventRoadRuleModeRequest> >(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1554
		GuiEventRoadRuleModeRequest lRoadRuleOffRequest;

		OutputGuiEvent<BrnGui::GuiEventRoadRuleModeRequest>(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1572
		GuiEventPerformOnlineMainMenuOption lEvent;

		OutputInternalState<BrnGui::GuiEventPerformOnlineMainMenuOption>(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1580
		GuiEventPerformOnlineMainMenuOption lEvent;

		OutputInternalState<BrnGui::GuiEventPerformOnlineMainMenuOption>(/* parameters */);
		AddGuiEvent<CgsGui::GuiOutInternalEvent<BrnGui::GuiEventPerformOnlineMainMenuOption> >(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1588
		GuiEventPerformOnlineMainMenuOption lEvent;

		OutputInternalState<BrnGui::GuiEventPerformOnlineMainMenuOption>(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1596
		GuiEventPerformOnlineMainMenuOption lEvent;

		OutputInternalState<BrnGui::GuiEventPerformOnlineMainMenuOption>(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1604
		GuiEventPerformOnlineMainMenuOption lEvent;

		OutputInternalState<BrnGui::GuiEventPerformOnlineMainMenuOption>(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1612
		GuiEventPerformOnlineMainMenuOption lEvent;

		OutputInternalState<BrnGui::GuiEventPerformOnlineMainMenuOption>(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1620
		GuiEventPerformOnlineMainMenuOption lEvent;

		OutputInternalState<BrnGui::GuiEventPerformOnlineMainMenuOption>(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1628
		GuiEventPerformOnlineMainMenuOption lEvent;

		OutputInternalState<BrnGui::GuiEventPerformOnlineMainMenuOption>(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1636
		GuiEventPerformOnlineMainMenuOption lEvent;

		OutputInternalState<BrnGui::GuiEventPerformOnlineMainMenuOption>(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1644
		GuiEventPerformOnlinePauseOption lEvent;

		OutputInternalState<BrnGui::GuiEventPerformOnlinePauseOption>(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1652
		GuiEventPerformOnlinePauseOption lEvent;

		OutputInternalState<BrnGui::GuiEventPerformOnlinePauseOption>(/* parameters */);
		AddGuiEvent<CgsGui::GuiOutInternalEvent<BrnGui::GuiEventPerformOnlinePauseOption> >(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1660
		GuiEventPerformOnlinePauseOption lEvent;

		OutputInternalState<BrnGui::GuiEventPerformOnlinePauseOption>(/* parameters */);
	}
}

// BrnFriendsList.cpp:1374
void BrnGui::FriendsListComponent::HandleBranchDPadRightFriends() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:1377
		BrnGui::FriendsListEntry::EFriendListEntryState leEntryStatus;

		// BrnFriendsList.cpp:1378
		bool lbHideEasyDrive;

	}
	{
		// BrnFriendsList.cpp:1414
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1514
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	SetDirty(/* parameters */);
	{
		// BrnFriendsList.cpp:1450
		GuiEventOnlineInviteEvent lInvite;

		OutputGuiEvent<BrnGui::GuiEventOnlineInviteEvent>(/* parameters */);
		CgsGui::GuiEventWrapper<BrnGui::GuiEventOnlineInviteEvent,40>::SetRawEvent(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1436
		GuiEventOnlineInviteEvent lInvite;

		OutputGuiEvent<BrnGui::GuiEventOnlineInviteEvent>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventOnlineInviteEvent> >(/* parameters */);
		GuiCache::SetFriendsListWaitReason(/* parameters */);
		GuiCache::SetResetOnlineGameOptions(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1425
		GuiEventOnlineShowProfile lProfile;

		OutputGuiEvent<BrnGui::GuiEventOnlineShowProfile>(/* parameters */);
		CgsGui::GuiEventWrapper<BrnGui::GuiEventOnlineShowProfile,40>::SetRawEvent(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1480
		GuiEventOnlineInviteEvent lRSVP;

		GuiCache::SetFriendsListWaitReason(/* parameters */);
		OutputGuiEvent<BrnGui::GuiEventOnlineInviteEvent>(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1460
		GuiEventOnlineInviteEvent lRSVP;

		OutputGuiEvent<BrnGui::GuiEventOnlineInviteEvent>(/* parameters */);
		CgsGui::GuiEventWrapper<BrnGui::GuiEventOnlineInviteEvent,40>::SetRawEvent(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1505
		GuiEventOnlineInviteEvent lInvite;

		OutputGuiEvent<BrnGui::GuiEventOnlineInviteEvent>(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1492
		GuiEventOnlineInviteEvent lRevokation;

		GuiCache::SetFriendsListWaitReason(/* parameters */);
		OutputGuiEvent<BrnGui::GuiEventOnlineInviteEvent>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventOnlineInviteEvent> >(/* parameters */);
	}
}

// BrnFriendsList.cpp:2106
void BrnGui::FriendsListComponent::HandleBranchInteraction(int32_t  liButtonId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:2152
		GuiAudioTriggerEvent lAudioTrigger;

		operator++(/* parameters */);
		SetDirty(/* parameters */);
		OutputGuiEvent<BrnGui::GuiAudioTriggerEvent>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiAudioTriggerEvent> >(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:2125
		GuiAudioTriggerEvent lAudioTrigger;

		operator--(/* parameters */);
		SetDirty(/* parameters */);
	}
}

// BrnFriendsList.cpp:1337
void BrnGui::FriendsListComponent::HandleDPadRightChallenges() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:1339
		CgsID lChallengeID;

		// BrnFriendsList.cpp:1341
		GuiChallengeSelectedEvent lChallengeSelected;

		GuiCache::GetFreeburnChallengeList(/* parameters */);
		BrnResource::ChallengeList::GetChallengeData(/* parameters */);
		BrnResource::ChallengeListEntry::GetChallengeStyle(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		OutputGuiEvent<BrnGui::GuiChallengeSelectedEvent>(/* parameters */);
		OutputGuiEvent<BrnGui::GuiChallengeSelectedEvent>(/* parameters */);
		CgsGui::GuiEventWrapper<BrnGui::GuiChallengeSelectedEvent,40>::SetRawEvent(/* parameters */);
		GuiCache::GetOnlineGameModeOptions(/* parameters */);
		{
			// BrnFriendsList.cpp:1353
			GuiEventNetworkGameParams lGameOptions;

			GuiEventNetworkGameParams(/* parameters */);
			OutputGuiEvent<BrnGui::GuiEventNetworkGameParams>(/* parameters */);
		}
		SetDirty(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnFriendsList.cpp:1080
void BrnGui::FriendsListComponent::HandleDPadRightFriends() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:1090
		GuiEventOnlineInviteEvent lInvite;

		OutputGuiEvent<BrnGui::GuiEventOnlineInviteEvent>(/* parameters */);
	}
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventOnlineInviteEvent> >(/* parameters */);
	CgsNetwork::PlayerName::Clear(/* parameters */);
	GuiCache::SetFriendsListWaitReason(/* parameters */);
	SetDirty(/* parameters */);
}

// BrnFriendsList.cpp:822
void BrnGui::FriendsListComponent::SetEntryData(int8_t  liEntryIndex, const char *  lpcPlayerName, BrnGui::FriendsListEntry::EFriendListEntryState  leEntryStatus, bool  lbIsStringID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	FriendsListEntry::SetEntryStatus(/* parameters */);
	Selectable::SetDirty(/* parameters */);
	{
		// BrnFriendsList.cpp:824
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnFriendsList.cpp:3238
void BrnGui::FriendsListComponent::HandleNoFriends() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:3240
		int32_t liScreenEntryIndex;

	}
	SetDirty(/* parameters */);
}

// BrnFriendsList.cpp:3203
void BrnGui::FriendsListComponent::HandleNotConnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:3205
		int32_t liScreenEntryIndex;

	}
	SetDirty(/* parameters */);
}

// BrnFriendsList.cpp:2817
void BrnGui::FriendsListComponent::UpdateAllChallengesEntryData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:2819
		int32_t liStartChallenge;

		// BrnFriendsList.cpp:2820
		int32_t liDifferenceToChange;

		// BrnFriendsList.cpp:2821
		int32_t liScreenEntryIndex;

		// BrnFriendsList.cpp:2823
		const ChallengeListEntry * lpChallenge;

		// BrnFriendsList.cpp:2824
		BrnGui::FriendsListEntry::EFriendListEntryState leEntryState;

		// BrnFriendsList.cpp:2912
		CgsID lChallengeID;

		// BrnFriendsList.cpp:2914
		GuiChallengeSelectedEvent lChallengeSelected;

		{
			// BrnFriendsList.cpp:2877
			int32_t liChallengeIndex;

			// BrnFriendsList.cpp:2878
			const CompletedFburnChallengesData::CompletedFburnChallenges * lpCompletedChallenges;

			GuiCache::GetFreeburnChallengeList(/* parameters */);
			BrnResource::ChallengeList::GetChallengeData(/* parameters */);
			BrnResource::ChallengeList::GetChallengeData(/* parameters */);
			{
			}
			{
				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
			BrnResource::ChallengeList::GetChallengeData(/* parameters */);
			GuiCache::GetFreeburnChallengeList(/* parameters */);
			BrnResource::ChallengeList::GetChallengeIndex(/* parameters */);
			BrnResource::ChallengeListEntry::GetChallengeID(/* parameters */);
			GuiCache::GetFreeburnChallengeManager(/* parameters */);
			CgsContainers::FastBitArray<2000>::IsBitSet(/* parameters */);
			BrnGameState::GameStateModuleIO::FburnChallengeEveryPlayerStatusData::GetLocalPlayerCompletionStatus(/* parameters */);
		}
		GuiCache::GetFreeburnChallengeList(/* parameters */);
		BrnResource::ChallengeList::GetChallengeData(/* parameters */);
		BrnResource::ChallengeListEntry::GetChallengeStyle(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		BrnResource::ChallengeList::GetChallengeData(/* parameters */);
		{
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		OutputGuiEvent<BrnGui::GuiChallengeSelectedEvent>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiChallengeSelectedEvent> >(/* parameters */);
		SetDirty(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnFriendsList.cpp:2739
void BrnGui::FriendsListComponent::UpdateAllShortcutsEntryData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:2741
		int32_t liStartFriend;

		// BrnFriendsList.cpp:2742
		int32_t liDifferenceToChange;

		// BrnFriendsList.cpp:2743
		BrnGui::FriendsListEntry::EFriendListEntryState leEntryStatus;

		{
			// BrnFriendsList.cpp:2761
			int32_t liScreenEntryIndex;

		}
		SetDirty(/* parameters */);
	}
}

// BrnFriendsList.cpp:2671
void BrnGui::FriendsListComponent::UpdateAllFriendsEntryData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:2673
		int32_t liStartFriend;

		// BrnFriendsList.cpp:2674
		int32_t liDifferenceToChange;

	}
	{
		// BrnFriendsList.cpp:2690
		int32_t liScreenEntryIndex;

	}
	SetDirty(/* parameters */);
}

// BrnFriendsList.cpp:3674
void BrnGui::FriendsListComponent::ShowSpecificFriend(PlayerName *  lpName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:3682
		int32_t liIndex;

	}
	{
		// BrnFriendsList.cpp:3701
		int32_t liSlotsUsedAfterCurrent;

	}
	CgsNetwork::PlayerName::IsEqualTo(/* parameters */);
}

// BrnFriendsList.cpp:2631
void BrnGui::FriendsListComponent::UpdateAllEntryData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnFriendsList.cpp:2278
void BrnGui::FriendsListComponent::SelectNext() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:2297
		CgsID lChallengeID;

		// BrnFriendsList.cpp:2299
		GuiChallengeSelectedEvent lChallengeSelected;

		GuiCache::GetFreeburnChallengeList(/* parameters */);
		BrnResource::ChallengeList::GetChallengeData(/* parameters */);
		BrnResource::ChallengeListEntry::GetChallengeStyle(/* parameters */);
		OutputGuiEvent<BrnGui::GuiChallengeSelectedEvent>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiChallengeSelectedEvent> >(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsResource::ResourcePtr<BrnResource::ChallengeListResource>::operator->(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

// BrnFriendsList.cpp:2224
void BrnGui::FriendsListComponent::SelectPrevious() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:2242
		CgsID lChallengeID;

		// BrnFriendsList.cpp:2244
		GuiChallengeSelectedEvent lChallengeSelected;

		GuiCache::GetFreeburnChallengeList(/* parameters */);
		BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	BrnResource::ChallengeListEntry::GetChallengeStyle(/* parameters */);
	OutputGuiEvent<BrnGui::GuiChallengeSelectedEvent>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiChallengeSelectedEvent> >(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnResource::ChallengeListResource>::operator->(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnFriendsList.cpp:2057
void BrnGui::FriendsListComponent::ShowChallengesList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:2069
		GuiEventFriendListShowing lFriendListShowingEvent;

	}
	SetDirty(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventFriendListShowing>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventFriendListShowing> >(/* parameters */);
}

// BrnFriendsList.cpp:3609
void BrnGui::FriendsListComponent::ShowSpecificChallenge(CgsID  lChallengeID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:3621
		int32_t liIndex;

	}
	{
		// BrnFriendsList.cpp:3640
		int32_t liSlotsUsedAfterCurrent;

	}
}

// BrnFriendsList.cpp:1121
void BrnGui::FriendsListComponent::HandleDPadRightShortcuts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:1123
		bool lbCloseList;

		SetDirty(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1289
		GuiEventPerformOnlinePauseOption lEvent;

		OutputInternalState<BrnGui::GuiEventPerformOnlinePauseOption>(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1304
		GuiEventPerformOnlinePauseOption lEvent;

		OutputInternalState<BrnGui::GuiEventPerformOnlinePauseOption>(/* parameters */);
		AddGuiEvent<CgsGui::GuiOutInternalEvent<BrnGui::GuiEventPerformOnlinePauseOption> >(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1173
		GuiEventPerformOnlineMainMenuOption lEvent;

		OutputInternalState<BrnGui::GuiEventPerformOnlineMainMenuOption>(/* parameters */);
		AddGuiEvent<CgsGui::GuiOutInternalEvent<BrnGui::GuiEventPerformOnlineMainMenuOption> >(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1165
		GuiEventPerformOnlineMainMenuOption lEvent;

		OutputInternalState<BrnGui::GuiEventPerformOnlineMainMenuOption>(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1195
		GuiEventPerformOnlineMainMenuOption lEvent;

		OutputInternalState<BrnGui::GuiEventPerformOnlineMainMenuOption>(/* parameters */);
		AddGuiEvent<CgsGui::GuiOutInternalEvent<BrnGui::GuiEventPerformOnlineMainMenuOption> >(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1203
		GuiEventPerformOnlineMainMenuOption lEvent;

		OutputInternalState<BrnGui::GuiEventPerformOnlineMainMenuOption>(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1212
		GuiEventPerformOnlinePauseOption lEvent;

		OutputInternalState<BrnGui::GuiEventPerformOnlinePauseOption>(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1220
		GuiEventPerformOnlinePauseOption lEvent;

		OutputInternalState<BrnGui::GuiEventPerformOnlinePauseOption>(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1228
		GuiEventPerformOnlinePauseOption lEvent;

		OutputInternalState<BrnGui::GuiEventPerformOnlinePauseOption>(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1236
		GuiEventPerformOnlinePauseOption lEvent;

		OutputInternalState<BrnGui::GuiEventPerformOnlinePauseOption>(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1244
		GuiEventPerformOnlinePauseOption lEvent;

		OutputInternalState<BrnGui::GuiEventPerformOnlinePauseOption>(/* parameters */);
		AddGuiEvent<CgsGui::GuiOutInternalEvent<BrnGui::GuiEventPerformOnlinePauseOption> >(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1252
		const ChallengeListEntry * lpChallenge;

		// BrnFriendsList.cpp:1254
		GuiChallengeSelectedEvent lChallengeSelected;

		GuiCache::GetFreeburnChallengeManager(/* parameters */);
		FreeburnChallengeManager::GetCurrentChallenge(/* parameters */);
		BrnResource::ChallengeListEntry::GetChallengeStyle(/* parameters */);
		BrnResource::ChallengeListEntry::GetChallengeID(/* parameters */);
		OutputGuiEvent<BrnGui::GuiChallengeSelectedEvent>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiChallengeSelectedEvent> >(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1273
		GuiEventPerformOnlinePauseOption lEvent;

		OutputInternalState<BrnGui::GuiEventPerformOnlinePauseOption>(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:1281
		GuiEventPerformOnlinePauseOption lEvent;

		OutputInternalState<BrnGui::GuiEventPerformOnlinePauseOption>(/* parameters */);
	}
}

// BrnFriendsList.cpp:2010
void BrnGui::FriendsListComponent::ShowShortcutList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:2028
		GuiEventFriendListShowing lFriendListShowingEvent;

	}
	SetDirty(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventFriendListShowing>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventFriendListShowing> >(/* parameters */);
}

// BrnFriendsList.cpp:3917
void BrnGui::FriendsListComponent::ReshowShortcuts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:3922
		BrnGui::FriendsListComponent::EShortcutOptions leShortcutOption;

		// BrnFriendsList.cpp:3926
		int32_t liIndex;

	}
	{
		// BrnFriendsList.cpp:3945
		int32_t liSlotsUsedAfterCurrent;

	}
}

// BrnFriendsList.cpp:3732
void BrnGui::FriendsListComponent::ShowSpecificShortcut(BrnGui::FriendsListComponent::EShortcutOptions  leShortcutOption) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:3744
		int32_t liIndex;

	}
	{
		// BrnFriendsList.cpp:3763
		int32_t liSlotsUsedAfterCurrent;

	}
}

// BrnFriendsList.cpp:3844
void BrnGui::FriendsListComponent::AttemptStateRestore() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:3872
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnFriendsList.cpp:1035
void BrnGui::FriendsListComponent::HandleDPadRight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnFriendsList.cpp:978
void BrnGui::FriendsListComponent::HandleDPadLeft() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetDirty(/* parameters */);
	{
		// BrnFriendsList.cpp:993
		CgsID lChallengeID;

		// BrnFriendsList.cpp:995
		GuiChallengeSelectedEvent lChallengeSelected;

		GuiCache::GetFreeburnChallengeList(/* parameters */);
		BrnResource::ChallengeList::GetChallengeData(/* parameters */);
		BrnResource::ChallengeListEntry::GetChallengeStyle(/* parameters */);
		OutputGuiEvent<BrnGui::GuiChallengeSelectedEvent>(/* parameters */);
		OutputGuiEvent<BrnGui::GuiChallengeSelectedEvent>(/* parameters */);
		CgsGui::GuiEventWrapper<BrnGui::GuiChallengeSelectedEvent,40>::SetRawEvent(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnResource::ChallengeListResource>::operator->(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnFriendsList.cpp:896
void BrnGui::FriendsListComponent::HandleTableInteraction(int32_t  liButtonId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:913
		GuiAudioTriggerEvent lAudioTrigger;

		SetDirty(/* parameters */);
	}
	{
		// BrnFriendsList.cpp:938
		GuiAudioTriggerEvent lAudioTrigger;

		SetDirty(/* parameters */);
		OutputGuiEvent<BrnGui::GuiAudioTriggerEvent>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiAudioTriggerEvent> >(/* parameters */);
	}
}

// BrnFriendsList.cpp:3563
void BrnGui::FriendsListComponent::EndWait() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::SetFriendsListWaitReason(/* parameters */);
}

// BrnFriendsList.cpp:846
void BrnGui::FriendsListComponent::HandleControllerInput(const GuiEventControllerInputPressed *  lpControllerInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::IsInGame(/* parameters */);
}

// BrnFriendsList.cpp:627
void BrnGui::FriendsListComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:629
		uint8_t luEntryIndex;

		// BrnFriendsList.cpp:630
		int32_t liNewPlayerCount;

	}
	{
		// BrnFriendsList.cpp:634
		GuiEventFriendListShowing lFriendListShowingEvent;

	}
	GuiCache::GetOnlinePlayerCount(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventFriendListShowing>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventFriendListShowing> >(/* parameters */);
}

// BrnFriendsList.cpp:703
void BrnGui::FriendsListComponent::ProcessNewEntryData(const GuiEventOnlineReceiveFriendInfo *  lpFriendInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.cpp:736
		int32_t liEventIndex;

		// BrnFriendsList.cpp:764
		int32_t liIndex;

		// BrnFriendsList.cpp:779
		bool lbShouldAnimateOut;

	}
}

// BrnFriendsList.cpp:28
// BrnFriendsList.cpp:29
// BrnFriendsList.cpp:30
// BrnFriendsList.cpp:31
// BrnFriendsList.cpp:32
// BrnFriendsList.cpp:33
// BrnFriendsList.cpp:35
// BrnFriendsList.cpp:45
// BrnFriendsList.cpp:53
// BrnFriendsList.cpp:71
// BrnFriendsList.cpp:88
// BrnFriendsList.cpp:89
// BrnFriendsList.cpp:114
// BrnFriendsList.cpp:115
// BrnFriendsList.cpp:116
// BrnFriendsList.cpp:118
// BrnFriendsList.cpp:126
// BrnFriendsList.cpp:91
// BrnFriendsList.cpp:157
// BrnFriendsList.cpp:164
// BrnFriendsList.cpp:171
// BrnFriendsList.cpp:178
// BrnFriendsList.cpp:190
// BrnFriendsList.cpp:201
// BrnFriendsList.cpp:212
// BrnFriendsList.cpp:223
// BrnFriendsList.cpp:235
// BrnFriendsList.cpp:246
// BrnFriendsList.cpp:257
// BrnFriendsList.cpp:268
// BrnFriendsList.cpp:279
// BrnFriendsList.cpp:286
// BrnFriendsList.cpp:293
// BrnFriendsList.cpp:300
// BrnFriendsList.cpp:26
// BrnFriendsList.cpp:321
// BrnFriendsList.cpp:328
// BrnFriendsList.cpp:335
// BrnFriendsList.cpp:336
// BrnFriendsList.cpp:337
// BrnFriendsList.cpp:338
// BrnFriendsList.cpp:339
