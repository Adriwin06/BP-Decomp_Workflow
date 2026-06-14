struct _CGprogram;

struct _CGparameter;

struct AptSharedPtr<AptFile>;

struct AptFloatArrayCXForm;

struct AptUint32CXForm;

struct AptSavedInputRecord;

// Declaration
struct AptValue {
	// AptValue.h:596
	enum CIH_ONLY {
		CO_CIH = 0,
	}

protected:
	// AptValue.h:554
	extern const uint32_t MAX_REFCOUNT = 4095;

}

struct cParticleEmitter;

void CgsDev::StrStreamBase::operator<<(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::SPrintf(char *  lpcDest, unsigned int  luBytes, const char *  lpcFormat, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:106
		va_list lArgument;

		// CgsStringUtils.h:107
		int32_t lNumBytesCopied;

	}
}

void CgsCore::SnPrintf(char *  lpcDest, unsigned int  luBytes, const char *  lpcFormat, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:129
		va_list lArgument;

		// CgsStringUtils.h:130
		int32_t lNumBytesCopied;

	}
}

void BrnGui::CrashbreakerHudComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FlaptAnimatorComponent::Run(const char *  lpcFrameName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFlaptIconComponent.cpp:249
		int32_t lChildMovieClipCount;

	}
}

void BrnGui::Selectable::ClearFlag(BrnGui::Selectable::StateFlags  lxFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		(None)unknown_arg
	}
}

void BrnGui::Selectable::Update(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnGui::Selectable::ClearFlag(/* parameters */);
}

void BrnGui::FriendsListEntry::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PreRaceMessagesComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPreRaceMessagesComponent.cpp:71
		float32_t lfFramesPerSec;

	}
}

void BrnGui::NorthIndicatorComponent::Update(float32_t  lrAngle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNorthIndicator.cpp:60
		float32_t lrDegreeAngle;

		// BrnNorthIndicator.cpp:62
		const int32_t KI_MAX_ROTATION;

		// BrnNorthIndicator.cpp:63
		char[8] lacAngle;

	}
}

void BrnGui::NorthIndicatorComponent::SetEventType(BrnGameState::GameStateModuleIO::EGameModeType  leCurrentGameMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNorthIndicator.cpp:83
		BrnGui::NorthIndicatorComponent::E_STYLES leStyle;

	}
}

void BrnGui::PaybackComponent::SetDisplayedIcon(BrnGui::PaybackComponent::EAwardTypes  leAwardType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SingleMetric::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SingleMetric::SetValue(const int32_t  lnValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSingleMetric.cpp:78
		char[128] lacValue;

	}
}

void BrnGui::SingleMetric::SetLabel(const char *  lpcText) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SingleMetric::SetVisible(bool  lVisibleFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FractionMetric::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FractionMetric::SetLabel(const char *  lpcText) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FractionMetric::SetVisible(bool  lVisibleFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::AttachToTextFieldComponent(const char *  lpcTextFieldName, const char *  lpcComponentName, const char *  lpcParentName, const const BrnFlapt::FileRef &  lFileRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFlaptComponentUtils.cpp:51
		char[128] lacBuffer;

		// BrnGuiFlaptComponentUtils.cpp:55
		MovieClipRef lTextFieldCpt;

		// BrnGuiFlaptComponentUtils.cpp:60
		MovieClipRef lTextFieldParent;

	}
}

void BrnGui::PositionIndicator::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PositionIndicator::SetVisible(bool  lVisibleFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PositionIndicator::SetLoaded() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FriendsListEntry::SetText(const char *  lpcText, bool  lbIsStringID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FriendsListEntry::GetPlayerName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FriendsListEntry::SetIndexText(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsListEntry.cpp:421
		char[32] lacBuffer;

	}
}

void BrnGui::FriendsListChangeIconComponent::AnimateIn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FriendsListChangeIconComponent::ShowNow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FriendsListChangeIconComponent::Hide() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RoadRuleShotComponent::HandleLoadNotifications(const char *  lpcComponentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RoadRuleShotComponent::Show(bool  lbImmediately) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RoadRuleShotComponent::Hide() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BrnVersionTextComponent::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BrnVersionTextComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BrnVersionTextComponent::Show() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BrnVersionTextComponent::Hide() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::OnlineTimeoutComponent::SetTime(float32_t  lfCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FreeburnChallengeStartComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FreeburnChallengeStartComponent::Show() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FreeburnChallengeStartComponent::Hide() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FreeburnChallengeStartComponent::HandleButtonRelease(int32_t  liButtonId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ChallengeSelector::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ChallengeSelector::GetChallengeIndex(int32_t  liAvailableChallengeIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ChallengeSelector::GetAvailableChallengeCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<60u>::IsZero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::IsFriendsListShowing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::IsEasyDriveAllowed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::IsEATraxChyronActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::PassedTheJunkyard() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BrnSaveIconComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BrnSaveIconComponent::ShowSaveIcon() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BrnSaveIconComponent::HideSaveIcon() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BrnShowtimeMessageComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BrnShowtimeMessageComponent::Show() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BrnShowtimeMessageComponent::Hide(bool  lbImmediately) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCursor::SetActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCursor::SetInactive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCursor::SetAlwaysSnap(bool  lbAlwaysSnap) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::DangerousDrivingBox::SetupComponent(const char *  lpTitleName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::DangerousDrivingBox::UpdateAptField(BrnGui::DangerousDrivingBox::FieldType  leField, float32_t  lfValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDangerousDrivingBox.cpp:159
		char[16] lacText;

		// BrnDangerousDrivingBox.cpp:160
		const float32_t lfEpsilon;

	}
}

void BrnGui::DangerousDrivingBox::UpdateApt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::DangerousDrivingBox::SetValues(const BrnGui::DangerousDrivingBox::DangerousDrivingValues *  lpValues) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::DangerousDrivingDisplay::SetupComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDangerousDrivingDisplay.cpp:101
		int32_t liBox;

		// BrnDangerousDrivingDisplay.cpp:107
		int32_t liField;

	}
}

void BrnGui::GuiNetworkPlayerStats::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiNetworkPlayerStats.cpp:104
		char[32] lacComponentName;

		// BrnGuiNetworkPlayerStats.cpp:105
		int32_t liComponentIndex;

	}
}

void BrnGui::GuiNetworkPlayerStats::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiNetworkPlayerStats::SetState(BrnGui::GuiNetworkPlayerStats::EState  leState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiNetworkPlayerStats::SetPlayerImageIndex(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiNetworkPlayerStats::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiNetworkPlayerStats.cpp:371
		char[32] lacIndex;

	}
}

void BrnGui::GuiNetworkRouteInfo::SetState(BrnGui::GuiNetworkRouteInfo::EState  leState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiNetworkRouteInfo::SetOptionText(BrnGui::GuiNetworkRouteInfo::EOptionComponent  leOptionComponent, const int32_t *  lpiMappingTable, const char *  lpcValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RivalMapPanel::TransitionIn(BrnGui::RivalMapPanel::ERivalType  leRivalType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RivalMapPanel::TransitionOut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RoadPanel::TransitionOut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RoadPanel::GetSignColour() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadPanel.cpp:504
		BrnGui::RoadSignIcon::ESignColour leNewSignColour;

		// BrnRoadPanel.cpp:505
		bool lbPlayerRulesTime;

		// BrnRoadPanel.cpp:506
		bool lbPlayerRulesCrash;

	}
}

void BrnGui::CrashNavPanel::SetAnimState(BrnGui::CrashNavPanel::AnimState  leAnimState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavPanel::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RoadPanel::GetSelectedFriendName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RoadPanel::GetScoringMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RoadPanel::GetCurrentRule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavPanel::GetRoadRuleFriendSelectedName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	RoadPanel::GetSelectedFriendName(/* parameters */);
}

void CgsGui::GuiComponent::GetNameHash() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavLegend::RecEvent(const CgsModule::Event *  lpEvent, int32_t  liEventId, int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavLegend.cpp:121
		const GuiEventAptTrigger * lpAptTrigger;

	}
}

void BrnGui::CrashNavLegend::UpdateIcons() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavLegend.cpp:234
		const int32_t KI_MIDDLE_ICON_INDEX;

		// BrnCrashNavLegend.cpp:235
		int32_t liIconDisplayIndex;

		// BrnCrashNavLegend.cpp:236
		int32_t liIndex;

	}
}

void BrnGui::CrashNavLegend::SetActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavLegend::SetInactive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavLegend::HighlightNext() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavLegend::HighlightPrevious() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavBorough::SetActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavBorough::SetInactive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::OffenceMenuItem::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TextField::GetText() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::OffenceMenuItem::GetItemText() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MenuItem::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SelectRoutes::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RivalTableCell::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RivalTableCell::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName, uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RivalTableCell::SetWrecked(bool  lbWrecked) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::LeaderboardColumnComponent::Init(const char *  lpcTitle, int8_t  liHighlight, int8_t  liYourIndex, int32_t  liHalfWidth) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLeaderboardColumnComponent.cpp:79
		char[4] lacHighlight;

		// BrnLeaderboardColumnComponent.cpp:84
		char[4] lacYourIndex;

	}
	{
		// BrnLeaderboardColumnComponent.cpp:91
		char[8] lacHalfWidth;

	}
}

void BrnGui::LeaderboardColumnComponent::FinaliseColumn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLeaderboardColumnComponent.cpp:132
		char[4] lacCellCount;

	}
}

void BrnGui::LeaderboardColumnComponent::SetCell(const char *  lpcCellData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::LeaderboardColumnComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::EATraxMenuComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName, int32_t  liParentAptLayer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::EATraxMenuComponent::BuildStringIDs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEATraxMenuComponent.cpp:88
		int32_t i;

	}
}

void BrnGui::EATraxMenuComponent::SetSendDrawInformationPending(bool  lbDrawSendPending) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::EATraxMenuComponent::IsDrawRequestPending() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::EATraxMenuComponent::UpdatePlayOrderMode(BrnGui::GuiEventAudioTraxPlayOrder::ETraxPlayOrderMode  liPlayOrderMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ImageGallerySelectable::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName, uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ImageGallerySelectable::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ImageGalleryCarouselSelectable::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName, uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ImageGalleryCarouselSelectable::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ImageGalleryCarouselItem::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void BrnGui::OnlineLoadingPlayer::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::OnlineLoadingPlayer::Show() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::OnlineLoadingPlayer::Hide() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MarkManSelectable::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName, uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MarkManSelectable::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MarkManSelectable::UnMark() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MarkManSelectable::SetVoIP(bool  lbOn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MarkManSelectableGroup::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName, uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::OnlinePreEventMessages::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlinePreEventMessages.cpp:48
		int32_t liIndex;

		// BrnOnlinePreEventMessages.cpp:49
		char[32] lacComponentName;

	}
}

void BrnGui::OnlinePreEventMessages::Show(const BrnGui::GuiEventPreRaceMessages::MessageInfo *  lpInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlinePreEventMessages.cpp:81
		int32_t liIndex;

		{
			// BrnOnlinePreEventMessages.cpp:86
			CgsLanguage::LanguageManager::ParameterFormatType leTextType;

			// BrnOnlinePreEventMessages.cpp:87
			const char * lpcParameter;

		}
	}
}

void BrnGui::OnlinePreEventMessages::Hide() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TableCell::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TableRow::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::LicenseComponent::IsVisible() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::LicenseComponent::ShowScore() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::LicenseComponent::SetPercentageComplete(int32_t  liPercentageComplete) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLicenseComponent.cpp:1281
		char[128] lacNewText;

	}
}

void BrnGui::PhotoBoothComponent::HideComponent(bool  lbImmediately) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CarSelectOnlineCountdown::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CarSelectOnlineCountdown::SetTimeLeft(float32_t  lfTimeLeft) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectOnlineCountdown.cpp:66
		int32_t liNewTime;

		{
			// BrnCarSelectOnlineCountdown.cpp:81
			char[16] lacTempBuffer;

		}
	}
}

void BrnGui::CarSelectOnlinePlayerListItem::SetPlayerName(const char *  lpcGamertag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CarSelectOnlinePlayerListItem::SetPlayerCar(CgsID  lCarID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectOnlinePlayerListItem.cpp:99
		char[13] lacCarNameId;

		// BrnCarSelectOnlinePlayerListItem.cpp:100
		char[32] lacCarNameStringId;

	}
}

void BrnGui::CarSelectOnlinePlayerListItem::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ChallengeListComponent::HandleEveryPlayerCompletionStatus(const GuiEventFburnChallengeEveryPlayerStatus *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::LargeCarComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::LargeCarComponent::SetCarInfo(CgsID  lCarId, BrnGui::BrnGuiResourceId  lResourceType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLargeCarComponent.cpp:80
		char[13] lacCarIdText;

	}
}

void BrnGui::LargeCarComponent::ShowCar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::LargeCarComponent::HideCar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::LargeCarComponent::HandleLoadNotification(const GuiEventLoadNotification *  lpLoadEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::LargeCarComponent::HandleUnloadNotification(const GuiEventUnloadNotification *  lpUnloadEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::LargeCarComponent::SetVisible(bool  lbVisibleFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CarouselSliderBar::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CarouselSliderBar::Update(int32_t  lmNumCars, int32_t  liCurrentIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarouselSliderBar.cpp:70
		const int32_t liEffectiveNumSlots;

		// BrnCarouselSliderBar.cpp:71
		const float32_t lfEffectiveNumSlots;

		// BrnCarouselSliderBar.cpp:72
		const float32_t lfCurrentIndex;

		// BrnCarouselSliderBar.cpp:74
		char[8] lacBarStartNum;

		// BrnCarouselSliderBar.cpp:78
		char[8] lacBarEndNum;

	}
}

void BrnGui::CarouselSliderBar::SetVisible(bool  lbVisible) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ManufacturersIcon::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ManufacturersIcon::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ManufacturersIcon::Set(BrnGui::ManufacturersIcon::E_MANUFACTURER  leManufacturer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::AchievementsListComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAchievementsListComponent.cpp:60
		int32_t liIndex;

		{
			// BrnAchievementsListComponent.cpp:69
			char[32] lacBuffer;

		}
	}
}

void BrnGui::OverlayComponent::SetTransitionComplete(const bool  flag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavDistance::UpdateDistanceLeft(float32_t  lfDistanceLeft) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavDistance::Show() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SatNavDistance::Hide() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FlaptAnimatorComponent::RefreshControlledMovieClips() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFlaptIconComponent.cpp:214
		int32_t liTriggerParameterCount;

		// BrnGuiFlaptIconComponent.cpp:215
		const TriggerParameters * lpTriggerParameters;

		// BrnGuiFlaptIconComponent.cpp:216
		MovieClipRef lParent;

	}
}

void BrnGui::FlaptRoadSignIconComponent::SetIcon(BrnGui::ERoadIcon  leIcon, const rw::math::vpu::Vector2 *  lpv2Location, BrnGui::FlaptRoadSignIconComponent::EIconType  leType, CgsID  lRoadId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::AttachToAutosizingTextFieldComponent(const char *  lpcTextFieldName, const char *  lpcComponentName, const char *  lpcParentName, const const BrnFlapt::FileRef &  lFileRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGuiFlaptComponentUtils.cpp:79
	TextFieldRef lTargetTextfield;

	{
		// BrnGuiFlaptComponentUtils.cpp:79
		TextFieldRef lTargetTextfield;

	}
}

void CgsContainers::BitArray<60u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<60u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:231
		float ret;

		{
			// vec_float_type_inline.h:232
			VectorIntrinsicUnion vecUnion;

		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:231
		float ret;

		{
			// vec_float_type_inline.h:232
			VectorIntrinsicUnion vecUnion;

		}
	}
}

void BrnGui::LicenseComponent::SetPosition(Vector2  lv2Pos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLicenseComponent.cpp:718
		const int32_t KI_TEMP_STRING_LENGTH;

		// BrnLicenseComponent.cpp:719
		char[12] lacTempString;

		rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisY>::GetFloat(/* parameters */);
}

void BrnGui::AftertouchHudComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector2::SetZero(/* parameters */);
}

void BrnGui::GuiCursor::Construct(const char *  lacName, StateInterface *  lpStateInterface, float32_t  lfCursorSpeed, float32_t  lfInitialX, float32_t  lfInitialY, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector4::SetZero(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
}

void rw::math::vpu::GetVecFloat_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1248
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::IntFloor(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:32
		int result;

		// scalar_operation_inline.h:33
		VectorIntrinsicUnion::VectorIntrinsic flooredVec;

		// scalar_operation_inline.h:37
		VectorIntrinsicUnion::VectorIntrinsic intVector;

	}
}

void BrnGui::SingleMetric::SetValue(const float32_t  lnValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSingleMetric.cpp:104
		char[128] lacValue;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	}
	rw::math::vpu::IntFloor(/* parameters */);
}

void rw::math::vpu::Normalize(const rw::math::vpu::Vector2  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:203
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector2_operation_inline.h:204
			VectorIntrinsicUnion::VectorIntrinsic temp_one_over_rqrt_dot;

			{
				// vector2_operation_inline.h:204
				VectorIntrinsicUnion::VectorIntrinsic dotproduct;

				{
					// vector2_operation_inline.h:204
					VectorIntrinsicUnion::VectorIntrinsic product;

					// vector2_operation_inline.h:204
					VectorIntrinsicUnion::VectorIntrinsic x_product;

					// vector2_operation_inline.h:204
					VectorIntrinsicUnion::VectorIntrinsic y_product;

				}
				{
					// vector2_operation_inline.h:204
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector2_operation_inline.h:204
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector2_operation_inline.h:204
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector2_operation_inline.h:204
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector2_operation_inline.h:204
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector2_operation_inline.h:204
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector2_operation_inline.h:204
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector2_operation_inline.h:204
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Dot(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:107
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector2_operation_inline.h:108
			VectorIntrinsicUnion::VectorIntrinsic product;

			// vector2_operation_inline.h:108
			VectorIntrinsicUnion::VectorIntrinsic x_product;

			// vector2_operation_inline.h:108
			VectorIntrinsicUnion::VectorIntrinsic y_product;

		}
	}
}

void rw::math::vpu::Magnitude(const rw::math::vpu::Vector2  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:168
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector2_operation_inline.h:169
			VectorIntrinsicUnion::VectorIntrinsic dotproduct;

			{
				// vector2_operation_inline.h:169
				VectorIntrinsicUnion::VectorIntrinsic product;

				// vector2_operation_inline.h:169
				VectorIntrinsicUnion::VectorIntrinsic x_product;

				// vector2_operation_inline.h:169
				VectorIntrinsicUnion::VectorIntrinsic y_product;

			}
			{
				// vector2_operation_inline.h:169
				const VectorIntrinsicUnion::VectorIntrinsic zero;

				// vector2_operation_inline.h:169
				VectorIntrinsicUnion::VectorIntrinsic isZeroMask;

				// vector2_operation_inline.h:169
				VectorIntrinsicUnion::VectorIntrinsic recipSqrt;

				// vector2_operation_inline.h:169
				VectorIntrinsicUnion::VectorIntrinsic result;

				{
					// vector2_operation_inline.h:169
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector2_operation_inline.h:169
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector2_operation_inline.h:169
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector2_operation_inline.h:169
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector2_operation_inline.h:169
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector2_operation_inline.h:169
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector2_operation_inline.h:169
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector2_operation_inline.h:169
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void rw::math::vpu::operator/(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCursor::FindClosestSnapIndexInDirection(Vector2 *  laSnapLocations, uint32_t  luNumSnapLocations, const rw::math::vpu::Vector2  lDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCursor.cpp:312
		float32_t lfQuotient;

		// BrnCursor.cpp:313
		float32_t lfLargestQuotient;

		// BrnCursor.cpp:314
		float32_t lfLocationDirectionDot;

		// BrnCursor.cpp:315
		uint32_t luSmallestDistanceIndex;

		// BrnCursor.cpp:316
		Vector2 lNormalisedDirection;

		// BrnCursor.cpp:317
		Vector2 lDiff;

		// BrnCursor.cpp:318
		Vector2 lNormalisedDiff;

		// BrnCursor.cpp:320
		uint32_t luSnapToIndex;

		rw::math::vpu::Normalize(/* parameters */);
		{
			{
			}
		}
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
}

void rw::math::fpu::Clamp<float>(float  value, float  min, float  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Max<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:222
		float test;

		// scalar.h:223
		float r;

	}
}

void rw::math::fpu::Min<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:155
		float test;

		// scalar.h:156
		float r;

	}
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(float  s, const rw::math::vpu::Vector4  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:506
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector4_operation_inline.h:507
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vector4_operation_inline.h:507
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator+(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Clamp(const const float &  value, const const float &  min, const const float &  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Max<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:29
		float test;

		// scalar_operation_platform_inline.h:30
		float r;

	}
}

void rw::math::vpu::Min<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:20
		float test;

		// scalar_operation_platform_inline.h:21
		float r;

	}
}

void rw::math::vpu::operator-(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1394
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector4  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:445
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnGui::FlaptTimerFieldComponent::CalculateColour() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFlaptTimerFieldComponent.cpp:138
		float32_t lfInterpolateValue;

		// BrnGuiFlaptTimerFieldComponent.cpp:139
		VecFloat lvfInterpolateValue;

		// BrnGuiFlaptTimerFieldComponent.cpp:140
		VecFloat lvfInterpolateValueComplement;

	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	rw::math::vpu::VecFloat::SetFloat(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	rw::math::vpu::VecFloat::SetFloat(/* parameters */);
}

void BrnFlapt::TextFieldRef::IsValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FlaptTimerFieldComponent::SetTime(float32_t  lfCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::OnlineTimeoutComponent::Transin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::OnlineTimeoutComponent::Transout() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::OnlineTimeoutComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Transin(/* parameters */);
	Transout(/* parameters */);
}

void rw::math::vpu::operator< <VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const rw::math::vpu::VecFloatRefIndex &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:554
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:556
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:558
		bool ret;

		{
			// vec_float_operation_inline.h:557
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
	}
}

void rw::math::vpu::operator><VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const rw::math::vpu::VecFloatRefIndex &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:396
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:398
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:400
		bool ret;

		{
			// vec_float_operation_inline.h:399
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
	}
}

void rw::math::vpu::operator< <VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const rw::math::vpu::VecFloatRefIndex &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:554
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:556
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:558
		bool ret;

		{
			// vec_float_operation_inline.h:557
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
	}
}

void rw::math::vpu::operator><VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const rw::math::vpu::VecFloatRefIndex &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:396
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:398
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:400
		bool ret;

		{
			// vec_float_operation_inline.h:399
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCursor::ClampPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::operator< <VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector4::operator[](/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::Vector2::SetX(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	rw::math::vpu::operator><VectorAxisX>(/* parameters */);
	rw::math::vpu::operator< <VectorAxisY>(/* parameters */);
	{
	}
	rw::math::vpu::operator><VectorAxisY>(/* parameters */);
}

void CgsGui::GuiComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::DangerousDrivingBox::Construct(const char *  lacName, StateInterface *  lpStateInterface, float32_t  lfScale, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDangerousDrivingBox.cpp:89
		int32_t liField;

	}
}

void BrnGui::DangerousDrivingDisplay::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDangerousDrivingDisplay.cpp:82
		int32_t liField;

	}
}

void BrnGui::GuiNetworkPlayerStats::AppendExpectedAptComponent(BrnGui::GuiFlow  leFlow, BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiNetworkPlayerStats.cpp:396
		int32_t liComponentIndex;

	}
}

void BrnGui::GuiNetworkRouteInfo::AppendExpectedAptComponent(BrnGui::GuiFlow  leFlow, BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiNetworkRouteInfo.cpp:646
		int32_t liIndex;

	}
}

void BrnGui::DriveThruMapPanel::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDriveThruMapPanel.cpp:63
		int32_t liEntry;

	}
}

void BrnGui::OffenceMenuItem::AppendExpectedAptComponent(BrnGui::GuiFlow  leFlow, BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SelectRoutes::AppendExpectedAptComponent(BrnGui::GuiFlow  leFlow, BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::OnlineLoadingPlayer::AppendExpectedAptComponent(BrnGui::GuiFlow  leFlow, BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MarkManSelectable::HandleTransitionComplete(const char *  lpcComponentName, int32_t  liUniqueId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::LicenseComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::LicenseComponent::AppendExpectedAptComponent(BrnGui::GuiFlow  leFlow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PhotoBoothComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, BrnGui::ButtonIconComponent::EPadButton  leBackButton, BrnGui::ButtonIconComponent::EPadButton  leConfirmButton, BrnGui::PhotoBoothComponent::ETakePhotoStringType  leTakePhotoStringType, BrnGui::PhotoBoothComponent::EBackStringType  leBackStringType, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void BrnGui::PhotoBoothComponent::AppendExpectedAptComponents(BrnGui::GuiFlow  leFlow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::LargeCarComponent::AppendExpectedAptComponent(BrnGui::GuiFlow  leFlow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::LargeCarComponent::HandleAptLoadTriggers(const GuiEventAptTrigger *  lpAptTrigger) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLargeCarComponent.cpp:276
		bool lbTriggerDealtWith;

	}
}

void BrnGui::GuiCache::GetOnlineGameModeOptions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SelectRoutes::GetNumberCheckpoints(int32_t  liRoundNumber) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SelectRoutes::GetMenuItemType(int32_t  liMenuItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetNumberCheckpoints(/* parameters */);
	GetNumberCheckpoints(/* parameters */);
}

void BrnFlapt::TextFieldRef::SetInvalid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TryFindTextFieldFromMovieClip(MovieClipRef  lSearchStartMovieClipRef, const char *  lpTextFieldComponentName, const char *  lpTextEditBoxName, TextFieldRef *  lpOutTextFieldRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFlaptComponentUtils.cpp:113
		MovieClipRef lTextFieldComponent;

	}
	{
		// BrnGuiFlaptComponentUtils.cpp:117
		MovieClipRef lParent;

	}
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
}

void CgsNetwork::PlayerName::GetPlayerName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::DriveThruMapPanel::AppendExpectedAptComponents(BrnGui::GuiFlow  leFlow, BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDriveThruMapPanel.cpp:92
		int32_t liEntry;

	}
}

void BrnGui::RivalMapPanel::AppendExpectedAptComponents(BrnGui::GuiFlow  leFlow, BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRivalMapPanel.cpp:95
		int32_t liEntry;

	}
}

void BrnGui::EventPanel::AppendExpectedAptComponents(BrnGui::GuiFlow  leFlow, BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEventPanel.cpp:137
		int32_t liEntry;

	}
}

void BrnGui::RoadPanel::AppendExpectedAptComponents(BrnGui::GuiFlow  leFlow, BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadPanel.cpp:180
		int32_t liRow;

	}
}

void BrnGui::CrashNavPanel::AppendExpectedAptComponents(BrnGui::GuiFlow  leFlow, BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RivalTableCell::GetCarID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::SetFlag(BrnGui::Selectable::StateFlags  lxFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RivalTableCell::SetScreenPosition(Vector2  lv2ScreenPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRivalTableCell.cpp:135
		char[32] lacText;

		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	}
	Selectable::SetFlag(/* parameters */);
}

void BrnGui::Selectable::SetDirty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavPanel::HandleAptEvents(const GuiEventAptTrigger *  lpAptEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::SetDirty(/* parameters */);
}

void BrnGui::OffenceMenuItem::Construct(const char *  lacName, StateInterface *  lpStateInterface, bool  lbDone, const char *  lacOffenceText, const char *  lacParentName, uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::SetDirty(/* parameters */);
}

void BrnGui::MapIconManager::SetIconFilter(BrnGui::MapIconManager::IconFilterMode  leIconFilter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MapIconManager::SetIsDisplayingEvent(bool  lbIsDisplayingEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MapIconManager::SetSelectedCheckpointInMenu(int32_t  liSelectedCheckpoint) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetLightTriggerID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MapIconManager::SetSelectedLightTriggerID(LightTriggerId  lSelectedLightTriggerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MapIconManager::ClearIconInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiNetworkRouteInfo::UpdateIconManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	MapIconManager::SetIconFilter(/* parameters */);
	MapIconManager::SetSelectedCheckpointInMenu(/* parameters */);
	MapIconManager::SetIsDisplayingEvent(/* parameters */);
	MapIconManager::ClearIconInfo(/* parameters */);
}

void CgsNetwork::PlayerName::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::MovieClipRef::IsValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FlaptRoadSignIconComponent::SetVisible(bool  lbVisible) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FlaptRoadSignIconComponent::DisplayPost(bool  lbShowPost) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FlaptRoadSignIconComponent::DisplayRoad(const char *  lpcRoadName, bool  lbShowPost) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::GetFlag(BrnGui::Selectable::StateFlags  lxFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::SetActive(bool  lbActive) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		(None)unknown_arg
	}
	{
		(None)unknown_arg
		(None)unknown_arg
	}
	{
		(None)unknown_arg
		(None)unknown_arg
	}
	{
		(None)unknown_arg
		(None)unknown_arg
	}
}

void BrnGui::Selectable::SetActive(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnGui::Selectable::SetFlag(/* parameters */);
	BrnGui::Selectable::ClearFlag(/* parameters */);
	BrnGui::Selectable::SetFlag(/* parameters */);
}

void BrnGui::Selectable::SetHighlightable(bool  lbHighlightable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		(None)unknown_arg
	}
	{
		(None)unknown_arg
		(None)unknown_arg
	}
	{
		(None)unknown_arg
		(None)unknown_arg
	}
	{
		(None)unknown_arg
		(None)unknown_arg
	}
}

void BrnGui::Selectable::SetHighlightable(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnGui::Selectable::SetFlag(/* parameters */);
	BrnGui::Selectable::ClearFlag(/* parameters */);
	BrnGui::Selectable::SetFlag(/* parameters */);
}

void BrnGui::Selectable::SetSelectable(bool  lbSelectable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetFlag(/* parameters */);
	ClearFlag(/* parameters */);
	SetFlag(/* parameters */);
}

void BrnGui::Selectable::IsDirty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::IsHighlighted() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FriendsListEntry::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsListEntry.cpp:364
		BrnGui::FriendsListEntry::EFriendListBarState leCurrentBarState;

		Selectable::Update(/* parameters */);
	}
}

void BrnGui::Selectable::IsHighlightable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ImageGalleryCarouselSelectable::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::Update(/* parameters */);
}

void BrnGui::Selectable::IsActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MarkManSelectable::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::Update(/* parameters */);
}

void BrnGui::Selectable::GetId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::SetId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RivalTableCell::SetCarID(CgsID  lNewCarID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RivalTableCell::GetRivalryStage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RivalTableCell::SetRivalryStage(BrnGui::ERivalryStage  leNewRivalryStage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RivalTable::ChangeSelection(int32_t  liCellIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRivalTable.cpp:380
		char[32] lacRivalCptName;

	}
	Selectable::SetId(/* parameters */);
	Selectable::SetFlag(/* parameters */);
	RivalTableCell::SetCarID(/* parameters */);
	RivalTableCell::SetRivalryStage(/* parameters */);
	Selectable::SetFlag(/* parameters */);
}

void BrnGui::RivalTable::SetupComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRivalTable.cpp:208
		int32_t liCell;

	}
	Selectable::SetDirty(/* parameters */);
	Selectable::SetDirty(/* parameters */);
}

void BrnGui::RivalTableCell::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::Update(/* parameters */);
	{
		// BrnRivalTableCell.cpp:87
		char[13] lacRivalId;

		// BrnRivalTableCell.cpp:90
		char[32] lacRivalStringId;

	}
}

void BrnGui::RivalTable::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRivalTable.cpp:133
		int32_t liCell;

	}
}

void BrnGui::PlayerPositionSingleComponent::SetValueChanged() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BoostMessageItem::IsInTransition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RivalTable::SetRivalData(const CgsModule::Event *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRivalTable.cpp:161
		const GuiEventRivalryFullInfoResponse * lpRivalryResponse;

		// BrnRivalTable.cpp:163
		int32_t liCell;

	}
	Selectable::SetId(/* parameters */);
	Selectable::SetFlag(/* parameters */);
	RivalTableCell::SetCarID(/* parameters */);
	RivalTableCell::SetRivalryStage(/* parameters */);
	Selectable::SetId(/* parameters */);
	RivalTableCell::SetCarID(/* parameters */);
	RivalTableCell::SetRivalryStage(/* parameters */);
}

void BrnGui::GuiCache::GetOnlinePlayerInfo(const EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.h:3430
		int32_t liIndex;

	}
}

void BrnGui::PaybackComponent::TriggerAptAnimation(BrnGui::PaybackComponent::EPaybackComponentAnimations  leAnimState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPaybackComponent.cpp:354
		const char * lpMainFrame;

		// BrnPaybackComponent.cpp:355
		const char * lpIconFrame;

	}
	GuiCache::GetOnlinePlayerInfo(/* parameters */);
}

void BrnGui::ImageGallerySelectable::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::Update(/* parameters */);
}

void CgsResource::ResourceHandle::ResourceHandle(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::Construct(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::BaseResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResource::SmallResource(const const SmallMemoryResource &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<3u>::BaseResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resource.h:307
		uint32_t i;

	}
}

void rw::BaseResources<3u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::ResourceHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::RGBA(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA32::RGBA32(float32_t  red, float32_t  green, float32_t  blue, float32_t  alpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Vector2Template(float  _x, float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Vector3Template(float  _x, float  _y, float  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::Vector4Template(float  _x, float  _y, float  _z, float  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<double>::Vector2Template(double  _x, double  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<double>::Vector3Template(double  _x, double  _y, double  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::Vector4Template(double  _x, double  _y, double  _z, double  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::LandmarkIndex(int32_t  lTriggerRegionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::EntityId(uint32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::VolumeInstanceId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeId::VolumeId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneQueryId::SceneQueryId(uint32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::RigidBodyId::RigidBodyId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::JointId::JointId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::DriveId::DriveId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::DegToRad<float>(float  angle_degrees) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Cos(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::cosf(float  _Left) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1539
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void CgsResource::BaseResourcePtr::~BaseResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::RemoveFromCurrentList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void __static_initialization_and_destruction_0(int  __initialize_p, int  __priority) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::BaseResourcePtr::~BaseResourcePtr(/* parameters */);
	CgsResource::ResourceHandle::ResourceHandle(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsSceneManager::VolumeInstanceId::VolumeInstanceId(/* parameters */);
	CgsSceneManager::VolumeId::VolumeId(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::EntityId::EntityId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsPhysics::RigidBodyId::RigidBodyId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsPhysics::JointId::JointId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsPhysics::DriveId::DriveId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
}

void CgsContainers::BitArray<60u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<60u>::ORArrays(const BitArray<60u> *  lpArrayA, const BitArray<60u> *  lpArrayB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:493
		int32_t liField;

	}
}

void BrnGui::GuiCache::GetShowTimeDistanceTravelled() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetShowTimeCarsCrashed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::DangerousDrivingBox::GetValues() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::DangerousDrivingDisplay::UpdateTotal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDangerousDrivingDisplay.cpp:148
		BrnGui::DangerousDrivingBox::DangerousDrivingValues lNewValues;

		// BrnDangerousDrivingDisplay.cpp:149
		const BrnGui::DangerousDrivingBox::DangerousDrivingValues * lpPlayerValues;

		// BrnDangerousDrivingDisplay.cpp:150
		const BrnGui::DangerousDrivingBox::DangerousDrivingValues * lpCarValues;

	}
	DangerousDrivingBox::GetValues(/* parameters */);
	DangerousDrivingBox::GetValues(/* parameters */);
}

void CgsNetwork::PlayerName::IsEmpty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::UsernameCompare(const char *  lpacName1, const char *  lpacName2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::LightTriggerId::SetInvalid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::TriggerId::SetIndex(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SelectRoutes::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectRoutes.cpp:75
		uint32_t luRoundNumber;

		// BrnSelectRoutes.cpp:76
		int32_t liCheckpointIndex;

		// BrnSelectRoutes.cpp:77
		BrnGui::SelectRoutes::CheckpointData * lpCheckpointData;

		BrnTraffic::LightTriggerId::SetInvalid(/* parameters */);
	}
}

void BrnGui::CompassComponent::SetViewState(const char *  lpStateId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventTimeInfo::GetTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<128>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<128>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:511
		uint64_t luIndex;

	}
}

void BrnGui::EATraxMenuComponent::Initialize(const GuiEventAudioTraxUpdate::EATraxArrayType *  lpEATraxEnabledInFreeBurnBitfield, const GuiEventAudioTraxUpdate::EATraxArrayType *  lpEATraxEnabledInEventsBitfield) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FastBitArray<128>::Construct(/* parameters */);
	CgsContainers::FastBitArray<128>::Construct(/* parameters */);
}

void BrnGameState::GameStateModuleIO::FburnChallengeEveryPlayerStatusData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateSharedIO.h:1670
		int32_t liIndex;

	}
}

void CgsContainers::FastBitArray<2000>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<2000>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:511
		uint64_t luIndex;

	}
}

void BrnGui::ChallengeListComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeListComponent.cpp:58
		int32_t liIndex;

	}
	BrnGameState::GameStateModuleIO::FburnChallengeEveryPlayerStatusData::Construct(/* parameters */);
}

void CgsNumeric::Random::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::SetSeed(uint64_t  luSeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:219
		uint32_t luPreflight;

	}
}

void CgsNumeric::Random::RandomFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:352
		float32_t lfRandomFractionPlusOne;

		// CgsRandom.h:356
		float32_t lfRandomFraction;

	}
}

void CgsNumeric::Random::AddRandomFloatToBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::RandomUInt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:273
		uint32_t luResult;

	}
}

void CgsNumeric::Random::ConvertUnsignedFixed32ToFloatRepresentation(uint32_t  lu32Random) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:230
		const uint32_t KU_IEEE_754_REPRESENTATION_FLOAT_ONE;

	}
}

void BrnGui::PaybackComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPaybackComponent.cpp:76
		int32_t lsCurrentSeed;

		CgsNumeric::Random::Construct(/* parameters */);
		{
			CgsNumeric::Random::RandomFloat(/* parameters */);
		}
		CgsNumeric::Random::SetSeed(/* parameters */);
	}
}

void BrnFlapt::MovieClipRef::GetCurrentFrameOneBased() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::MovieClipInstance::GetCurrentFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<3u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<3u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void BrnGui::GuiCache::GetOnlinePlayerInfoByIndex(int32_t  liPlayerInfoIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::PlayerName::IsEqualTo(const const PlayerName &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::IsOnlineFreeBurnLobby(const BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SelectableGroup::SetWrapped(bool  lbWrapAllowed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RivalTable::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRivalTable.cpp:75
		int32_t liRow;

		// BrnRivalTable.cpp:84
		int32_t liCell;

		// BrnRivalTable.cpp:97
		int32_t liRivalsPerRow;

		// BrnRivalTable.cpp:98
		int32_t liCurrentRow;

		// BrnRivalTable.cpp:99
		int32_t liCurrentRivalInRow;

		// BrnRivalTable.cpp:100
		int32_t liCurrentRival;

		SelectableGroup::SetWrapped(/* parameters */);
		Selectable::SetActive(/* parameters */);
		Selectable::SetHighlightable(/* parameters */);
		SelectableGroup::SetWrapped(/* parameters */);
		Selectable::SetDirty(/* parameters */);
		{
			// BrnRivalTable.cpp:87
			char[32] lacRivalCptName;

		}
	}
}

void BrnGui::TextField::RefreshText() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ChallengeSelector::HandleLoadNotification(const char *  lpcComponentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	TextField::RefreshText(/* parameters */);
}

void BrnGui::OffenceMenuItem::Refresh() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	TextField::RefreshText(/* parameters */);
	Selectable::SetDirty(/* parameters */);
}

void BrnGui::ImageGallerySelectable::HandleLoadNotifications(const char *  lpcComponentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnImageGallerySelectable.cpp:114
		bool lbReturnValue;

	}
	TextField::RefreshText(/* parameters */);
	TextField::RefreshText(/* parameters */);
}

void BrnGui::ImageGalleryCarouselItem::HandleLoadNotifications(const char *  lpcComponentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnImageGalleryCarouselItem.cpp:95
		bool lbSuccess;

	}
	TextField::RefreshText(/* parameters */);
}

void BrnGui::OnlineLoadingPlayer::SetCrown(bool  lbCrowned) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::OnlineLoadingPlayer::SetVOIPActive(bool  lbVOIPActive) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::OnlineLoadingPlayer::HandleLoadNotification(const char *  lpcComponentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetVOIPActive(/* parameters */);
	SetCrown(/* parameters */);
	TextField::RefreshText(/* parameters */);
}

void BrnGui::MarkManSelectable::HandleLoadNotification(const char *  lpcComponentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	TextField::RefreshText(/* parameters */);
}

void BrnGui::OnlinePreEventMessages::HandleLoadNotification(const char *  lpcComponentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlinePreEventMessages.cpp:153
		int32_t liIndex;

	}
	TextField::RefreshText(/* parameters */);
}

void BrnGui::LicenseComponent::HandleAptLoadTriggers(const GuiEventAptTrigger *  lpAptTrigger) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLicenseComponent.cpp:237
		bool lbTriggerDealtWith;

	}
	TextField::RefreshText(/* parameters */);
}

void BrnGui::TextField::ClearText() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::DriveThruMapPanel::SetDriveThruData(CgsID  lDriveThruID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDriveThruMapPanel.cpp:131
		const int32_t TEMP_STRING_LENGTH;

		// BrnDriveThruMapPanel.cpp:132
		char[32] lacTempString;

	}
	TextField::ClearText(/* parameters */);
	TextField::ClearText(/* parameters */);
}

void BrnGui::RivalMapPanel::SetPlayerData(BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRivalMapPanel.cpp:135
		const int32_t TEMP_STRING_LENGTH;

		// BrnRivalMapPanel.cpp:136
		char[32] lacTempString;

	}
	TextField::ClearText(/* parameters */);
}

void BrnGui::SatNavDistance::Construct(const char *  lpcName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UpdateDistanceLeft(/* parameters */);
}

void BrnGui::MapTransform::Flatten(const rw::math::vpu::Vector3  lv3In) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisZ>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:164
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnGui::MapTransform::Transform(const rw::math::vpu::Vector2  lv2In, const rw::math::vpu::Matrix33 &  lm33Transform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapUtils.h:417
		Vector3 lv3In;

		// BrnMapUtils.h:418
		Vector3 lv3Out;

	}
}

void rw::math::vpu::GetVecFloat_One() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY, VectorAxisZ>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y, VectorIntrinsicInParam  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:177
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_inline.h:178
			VectorIntrinsicUnion::VectorIntrinsic result;

			{
				// vector_intrinsic_operation_inline.h:178
				VectorIntrinsicUnion::VectorIntrinsic permuteControl;

			}
		}
	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector3  v, const rw::math::vpu::Matrix33 &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const rw::math::vpu::Vector3  v, const rw::math::vpu::Matrix33 &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix33_operation_platform_inline.h:25
		VectorIntrinsicUnion::VectorIntrinsic tmp;

		// matrix33_operation_platform_inline.h:26
		VectorIntrinsicUnion::VectorIntrinsic xSplat;

		// matrix33_operation_platform_inline.h:26
		VectorIntrinsicUnion::VectorIntrinsic ySplat;

		// matrix33_operation_platform_inline.h:26
		VectorIntrinsicUnion::VectorIntrinsic zSplat;

		// matrix33_operation_platform_inline.h:26
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:164
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::GetVecFloat_Half() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator!=<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:216
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:218
		bool ret;

	}
}

void rw::math::vpu::operator-<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1430
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1431
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
}

void rw::math::vpu::operator-<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1430
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1431
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
}

void rw::math::vpu::operator/(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1688
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1689
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vec_float_operation_inline.h:1689
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vec_float_operation_inline.h:1689
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vec_float_operation_inline.h:1689
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vec_float_operation_inline.h:1689
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void rw::math::vpu::operator*<VectorAxisX>(const VecFloat  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1547
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1548
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator<(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:514
		bool result;

	}
}

void rw::math::vpu::GetVecFloat_NegativeOne() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*=(const VecFloat &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1122
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator+=(const VecFloat &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:996
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator>(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:356
		bool result;

	}
}

void rw::math::vpu::Clamp(const VecFloat  value, const VecFloat  min, const VecFloat  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Max<rw::math::vpu::VecFloat>(const const VecFloat &  a, const const VecFloat &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:149
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::Min<rw::math::vpu::VecFloat>(const const VecFloat &  a, const const VecFloat &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:132
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void BrnGui::MapTransform::WorldToDevice(const rw::math::vpu::Vector3  lv3WorldPos, bool  lbClamp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMapUtils.h:591
		Vector2 lvViewPos;

		// BrnMapUtils.h:592
		Vector2 lvClampedPos;

		Flatten(/* parameters */);
		Transform(/* parameters */);
		rw::math::vpu::Matrix33::Matrix33(/* parameters */);
		{
		}
	}
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	Transform(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	rw::math::vpu::operator*(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	rw::math::vpu::operator!=<VectorAxisX>(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::Vector2::SetX(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
	rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	{
		// BrnMapUtils.h:602
		VecFloat lfGradient;

		// BrnMapUtils.h:603
		VecFloat lfIntercept;

		// BrnMapUtils.h:604
		VecFloat lfAbsX;

		// BrnMapUtils.h:605
		VecFloat lfAbsY;

		rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::GetVecFloat_One(/* parameters */);
		rw::math::vpu::Vector2::SetY(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::Vector2::SetX(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::Vector2::SetX(/* parameters */);
		rw::math::vpu::Vector2::SetY(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::GetVecFloat_NegativeOne(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::GetVecFloat_NegativeOne(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
	}
}

void BrnGui::MapTransform::Unflatten(const rw::math::vpu::Vector2  lv2In) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavBorough::SetCurrentBorough(BrnWorld::ECounty  leNewBorough) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavBorough.cpp:130
		const int32_t KI_BUFFER_SIZE;

		// BrnCrashNavBorough.cpp:131
		char[32] lacFloatBuffer;

		// BrnCrashNavBorough.cpp:135
		Vector2 lv2DevicePosition;

		// BrnCrashNavBorough.cpp:144
		Vector2 lv2DeviceWidthHeight;

	}
	MapTransform::Unflatten(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	MapTransform::Unflatten(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
}

void BrnGui::AnimationComponent::Run(const char *  lpcAnimation) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiNetworkRouteInfo::ShowAppropiateOptions(const int32_t *  lpiMappingTable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiNetworkRouteInfo.cpp:808
		int32_t liOptionIndex;

		// BrnGuiNetworkRouteInfo.cpp:809
		int32_t liMappingIndex;

	}
	AnimationComponent::Run(/* parameters */);
	AnimationComponent::Run(/* parameters */);
}

void BrnGui::OffenceMenuItem::IsDone() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::OffenceMenuItem::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOffenceMenuItem.cpp:158
		BrnGui::OffenceMenuItem::OffenceMenuItemStates leCurrentState;

		Selectable::Update(/* parameters */);
	}
	AnimationComponent::Run(/* parameters */);
	AnimationComponent::Run(/* parameters */);
}

void BrnGui::SelectRoutes::Hide() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AnimationComponent::Run(/* parameters */);
	AnimationComponent::Run(/* parameters */);
}

void BrnGui::BrnFlaptComponent::Prepare(const MovieClipRef *  lpMovieClipRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::MovieClipRef::ResetTimeline() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FlaptIconComponent::Prepare(const MovieClipRef *  lpMovieClipRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnFlaptComponent::Prepare(/* parameters */);
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
}

void BrnGui::FriendsListComponent::SetDirty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::IsOnline() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::IsLocalPlayerHost() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetFreeburnChallengeManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FreeburnChallengeManager::IsRunning() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FreeburnChallengeManager::IsShowingResults() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetOnlinePlayerCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FreeburnChallengeManager::IsStarted() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::AreRoadRulesAvailable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetTargetScoreInEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetCurrentScoreInEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetCurrentTimeInEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::IsComboWarningActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetComboWarningActiveTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Clamp<int>(int  value, int  min, int  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Max<int>(const const int &  a, const const int &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Min<int>(const const int &  a, const const int &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetCurrentComboInEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetMultiplierInEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Lerp<float>(float  a, float  b, float  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IntRound<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IntFloor<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Floor<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:45
		const double maxMantissa;

		// scalar.h:46
		const double doubleInput;

		// scalar.h:47
		double c;

		// scalar.h:48
		double result;

	}
}

void BrnGui::GuiCache::GetNumberOfStuntsToDisplay() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.h:3072
		int32_t liIndex;

	}
}

void BrnGui::GuiCache::GetStuntToDisplay(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetStuntsInProgress() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetAllStuntTypesInCurrentStunt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RoadRuleComponent::SetCurrentSignState(BrnGui::RoadRuleComponent::EAnimationState  leNewSignState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleComponent.h:773
		BrnGui::RoadRuleComponent::ERoadSignSizes leNewSignSize;

		// BrnRoadRuleComponent.h:774
		const char * lpcNewSignSizeFrame;

	}
}

void BrnGui::GuiCache::GetActiveRoadRuleScoringMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnStreetData::operator++(const BrnStreetData::ScoreType &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeData.h:56
		BrnStreetData::ScoreType leOldEnumIndex;

	}
}

void CgsNumeric::Random::RandomInt(int32_t  liMin, int32_t  liMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:322
		uint32_t luMod;

		// CgsRandom.h:327
		int32_t liResult;

	}
}

void BrnGui::PaybackComponent::ChooseRandomAward() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPaybackComponent.cpp:470
		int32_t liRandomInt;

		CgsNumeric::Random::RandomInt(/* parameters */);
	}
}

void BrnGui::PaybackComponent::EnterState(BrnGui::PaybackComponent::EPaybackComponentStates  leAnimState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PaybackComponent::BecomeInvisible() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PaybackComponent::ShowAvailableInstantly(BrnNetwork::EPaybackType  lePaybackType, EActiveRaceCarIndex  leVictimRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PaybackComponent::BeginAwardAnimation(BrnNetwork::EPaybackType  lePaybackType, EActiveRaceCarIndex  leVictimRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PaybackComponent::UpdateState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PaybackComponent::Update(float32_t  lfCurrentTime_Secs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PaybackComponent::Initialize(BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetCurrentOnlinePlayerTeam(EActiveRaceCarIndex  lePlayerActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetCheckpointsInEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::IsShowtimeGameMode(const BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetActiveRoadRule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FreeburnChallengeManager::AreTargetsAvailable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FreeburnChallengeManager::GetCurrentTargetType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetCurrentSkillzSelected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BurnoutSkillsManager::GetCurrentSkill() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BrnFlaptComponent::Construct(const void *  lpUnused1, StateInterface *  lpStateInterface, const void *  lpUnused2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::MovieClipRef::SetInvalid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FlaptIconComponent::Construct(const void *  lpUnused1, StateInterface *  lpStateInterface, const void *  lpUnused2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnFlaptComponent::Construct(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
}

void BrnGui::FlaptAnimatorComponent::Construct(const void *  lpUnused1, StateInterface *  lpStateInterface, const void *  lpUnused2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFlaptIconComponent.cpp:153
		int32_t lMovieClipCount;

		BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	}
}

void BrnGui::BrnShowtimeMessageComponent::Construct(const void *  lpUnused1, StateInterface *  lpStateInterface, const void *  lpUnused2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RoadRuleShotComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
		BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
		BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	}
}

void BrnGui::FriendsListChangeIconComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FriendsListEntry::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName, uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		BrnFlaptComponent::Construct(/* parameters */);
	}
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	Selectable::SetDirty(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
}

void BrnGui::FlaptRoadSignIconComponent::Construct(const void *  lpUnused1, StateInterface *  lpStateInterface, const void *  lpUnused2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnFlaptComponent::Construct(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
}

void BrnGui::FlaptMedalIcon::Construct(const void *  lpUnused1, StateInterface *  lpStateInterface, const void *  lpUnused2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnFlaptComponent::Construct(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
}

void BrnFlapt::FileRef::ConstructEmpty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::StateInterface::IsUsingMetricUnits() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::StateInterface::GetAccessPointers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsLanguage::LanguageManager::IsUsingMetricUnits() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiAccessPointers::GetGuiCache() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetProgressionProfile() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::IsRoadRuleShotLocalNewRuler() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetRoadRuleShotOpponentARCI() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RoadRuleShotComponent::Snap(bool  lbImmediately) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleShotComponent.cpp:324
		BrnGui::GuiCache * lpGuiCache;

	}
	CgsGui::StateInterface::GetAccessPointers(/* parameters */);
	CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
	GuiCache::GetRoadRuleShotOpponentARCI(/* parameters */);
	GuiCache::GetOnlinePlayerInfo(/* parameters */);
}

void BrnGui::RoadPanel::UpdateVisibleScores() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadPanel.cpp:388
		BrnGui::RoadSignIcon::ESignColour leSignColour;

		AnimationComponent::Run(/* parameters */);
		CgsGui::StateInterface::GetAccessPointers(/* parameters */);
		CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
		CgsGui::StateInterface::GetAccessPointers(/* parameters */);
		CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
	}
	AnimationComponent::Run(/* parameters */);
}

void BrnGui::RoadPanel::SetRoadPanelData(const char *  lpRoadName, const RoadPanelData &  lPanelData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadPanel.cpp:206
		BrnGui::ERoadIcon leIcon;

		// BrnRoadPanel.cpp:207
		const bool lbShowPost;

	}
}

void BrnGui::GuiCache::GetWorldDataController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::LeaderboardTableComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLeaderboardTableComponent.cpp:54
		int32_t liCounter;

		// BrnLeaderboardTableComponent.cpp:55
		char[64] lacColumnName;

		CgsGui::StateInterface::GetAccessPointers(/* parameters */);
		CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
		GuiCache::GetWorldDataController(/* parameters */);
	}
}

void BrnGui::CarSelectOnlinePlayerList::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectOnlinePlayerList.cpp:48
		char[32] lacComponentName;

		// BrnCarSelectOnlinePlayerList.cpp:49
		int32_t liIndex;

	}
	CgsGui::StateInterface::GetAccessPointers(/* parameters */);
	CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
	GuiCache::GetWorldDataController(/* parameters */);
}

void BrnGui::InGameMessagesComponent::GetCurrentIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameMessagesComponent::SwitchCurrentIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BrnFlaptComponent::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFile, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFlaptComponent.h:135
		const char * lpFullName;

		{
			// BrnGuiFlaptComponent.h:140
			char[128] lacTempString;

		}
	}
}

void BrnGui::FlaptIconComponent::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFile, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnFlaptComponent::Prepare(/* parameters */);
}

void BrnGui::FlaptAnimatorComponent::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFile, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFlaptIconComponent.cpp:176
		const TriggerParameters * lpTriggerParameters;

		// BrnGuiFlaptIconComponent.cpp:177
		MovieClipRef lParent;

		// BrnGuiFlaptIconComponent.cpp:183
		int32_t lTriggerParameterCount;

	}
}

void BrnGui::BrnShowtimeMessageComponent::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BrnSaveIconComponent::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RoadRuleShotComponent::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFlaptFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FriendsListChangeIconComponent::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BrnFlaptComponent::GetMovieClipRef() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FriendsListEntry::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFile, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsListEntry.cpp:236
		char[128] lacBuffer;

	}
	BrnFlaptComponent::Prepare(/* parameters */);
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
}

void BrnGui::FlaptTimerFieldComponent::Prepare(const char *  lacTargetMovieclip, const char *  lacName, const const BrnFlapt::FileRef &  lFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnFlaptComponent::Prepare(/* parameters */);
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
}

void BrnGui::OnlineTimeoutComponent::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFlaptFile, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOnlineTimeoutTimerComponent.cpp:90
		char[128] lacSubcomponentName;

	}
}

void BrnGui::FlaptRoadSignIconComponent::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnFlaptComponent::Prepare(/* parameters */);
	BrnFlapt::MovieClipRef::ResetTimeline(/* parameters */);
}

void BrnGui::EventInfoComponent::SetEventType(const char *  lpEventName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::EventInfoComponent::SetEventState(const char *  lpStateName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FreeburnChallengeManager::GetCurrentChallenge() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntry::GetChallengeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FlaptMedalIcon::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFile, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnFlaptComponent::Prepare(/* parameters */);
}

void CgsGui::StateInterface::GetLanguageManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PlayerPositionTableComponent::ClearStoredData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlayerPositionTable.h:273
		int32_t liCarIterator;

	}
}

void BrnGui::GuiCache::GetFreeburnChallengeList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.h:1990
		const ChallengeList * lpChallengeList;

	}
}

void BrnResource::ChallengeList::GetChallengeCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiNetworkPlayerStats::FormatNetworkStats(char *  lpcBuffer, int  liBufferSize, const NetworkPlayerStats *  lpStats, BrnNetwork::NetworkPlayerStats::EStatsValue  leValue, BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiNetworkPlayerStats.cpp:196
		char[11] lacBuffer;

		// BrnGuiNetworkPlayerStats.cpp:197
		char[11] lacBuffer2;

	}
	CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	GuiCache::GetFreeburnChallengeList(/* parameters */);
	CgsGui::StateInterface::GetLanguageManager(/* parameters */);
}

void BrnNetwork::Scoreboard::GetColumn(int32_t  liColumnNumber) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ScoreboardColumn::GetType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::Scoreboard::GetRow(int32_t  liRowNumber) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::PlayerName::Construct(const char *  lpcPlayerName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerName.h:87
		CgsDev::StrStream lStrStream;

	}
}

void CgsDev::StrStream::StrStream(char *  lpcCharBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::StrStreamBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::StrnCpy(char *  lpcDest, const char *  lpcSource, unsigned int  luBytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:55
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::LeaderboardTableComponent::GetHighlightedGamertag(PlayerName *  lpPlayerName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLeaderboardTableComponent.cpp:375
		const ScoreboardColumn * lpColumn;

		// BrnLeaderboardTableComponent.cpp:376
		int32_t liColumn;

	}
	BrnNetwork::Scoreboard::GetColumn(/* parameters */);
	BrnNetwork::Scoreboard::GetRow(/* parameters */);
	CgsNetwork::PlayerName::Construct(/* parameters */);
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

void BrnGui::FreeburnChallengeManager::GetCurrentAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntry::GetNumActions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntry::GetAction(int32_t  liActionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntryAction::GetCoopType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetPursuitCarID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetDistanceInEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.h:2867
		CgsDev::StrStream lStrStream;

	}
}

void CgsDev::StrStreamBase::operator<<(float32_t  lfReal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:598
		union UFloatInt {
			// CgsStrStream.h:599
			float32_t mfReal;

			// CgsStrStream.h:600
			int32_t miInt;

		}
		// CgsStrStream.h:602
		UFloatInt lFloatInt;

	}
}

void BrnGui::SelectableGroup::GetSelectable(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectableGroup.h:248
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::SelectableGroup::GetSelectableCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MarkManSelectableGroup::HandleLoadNotification(const char *  lpcComponentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMarkManSelectableGroup.cpp:92
		int8_t liIndex;

		// BrnMarkManSelectableGroup.cpp:93
		MarkManSelectable * lpCurrentSelectable;

		SelectableGroup::GetSelectable(/* parameters */);
		Selectable::SetDirty(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

extern void GuiEventSetActiveLandmarks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::LandmarkIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SatNavIconInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetNumLandmarks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetLandmark(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateSharedIO.h:1569
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameStateSharedIO.h:1570
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::GuiNetworkRouteInfo::SetActiveLandmarks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiNetworkRouteInfo.cpp:782
		GuiEventSetActiveLandmarks lActiveLandmarks;

		// BrnGuiNetworkRouteInfo.cpp:783
		BrnGui::GuiEventUpdateSatNav::SatNavIconInfo lLandmarkInfo;

		// BrnGuiNetworkRouteInfo.cpp:784
		int32_t liIndex;

		GuiEventSetActiveLandmarks(/* parameters */);
		BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetLandmark(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetNumLandmarks(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart::GetPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Min(const rw::math::vpu::Vector2  v0, const rw::math::vpu::Vector2  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:301
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::Max(const rw::math::vpu::Vector2  v0, const rw::math::vpu::Vector2  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:308
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::operator/=(const Vector2 &  v, float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:424
		VectorIntrinsicUnion::VectorIntrinsic result;

		// vector2_operation_inline.h:425
		VectorIntrinsicUnion::VectorIntrinsic divisor;

		{
			// vector2_operation_inline.h:427
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vector2_operation_inline.h:427
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vector2_operation_inline.h:427
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vector2_operation_inline.h:427
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector2_operation_inline.h:427
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(float  f0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_macros.h:237
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_macros.h:238
			VectorIntrinsicUnion u;

		}
	}
}

void BrnGui::MainMapComponent::SetDesiredWorldCentre(const rw::math::vpu::Vector2  lv2DesiredWorldCentre) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetAspectRatio() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiNetworkRouteInfo::CalculateZoomFactor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiNetworkRouteInfo.cpp:726
		int32_t liLandmarkIndex;

		// BrnGuiNetworkRouteInfo.cpp:727
		Vector2 lv2Pos1;

		// BrnGuiNetworkRouteInfo.cpp:728
		Vector2 lv2Pos2;

		// BrnGuiNetworkRouteInfo.cpp:730
		Vector2 lBBPos1;

		// BrnGuiNetworkRouteInfo.cpp:731
		Vector2 lBBPos2;

		// BrnGuiNetworkRouteInfo.cpp:733
		const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * lpEventStart;

		// BrnGuiNetworkRouteInfo.cpp:737
		LandmarkIndex lLandmarkIndex;

		// BrnGuiNetworkRouteInfo.cpp:738
		BrnGui::GuiEventUpdateSatNav::SatNavIconInfo lLandmarkInfo;

	}
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetLandmark(/* parameters */);
	MapTransform::Flatten(/* parameters */);
	MapTransform::Flatten(/* parameters */);
	rw::math::vpu::Max(/* parameters */);
	rw::math::vpu::Min(/* parameters */);
	MapTransform::Flatten(/* parameters */);
	rw::math::vpu::Max(/* parameters */);
	rw::math::vpu::Min(/* parameters */);
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetLandmark(/* parameters */);
	rw::math::vpu::operator/=(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
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
		BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetNumLandmarks(/* parameters */);
	}
}

void BrnGui::GuiCache::GetGuiTracker() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiTracker::GetCurrentlyTrackedIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetOnlineLandmarkIndex(int32_t  liCheckpointIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetOnlineRoundIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetEventDestinationLandmarkIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::operator int32_t() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetTargetTimeInEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeList::GetChallengeData(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ChallengeList.h:159
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::ResourcePtr<BrnResource::ChallengeListResource>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:562
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::SmallResource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ChallengeSelector::GetAvailableChallengeData(int32_t  liAvailableChallengeIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeSelector.cpp:133
		int32_t liChallengeIndex;

		BrnResource::ChallengeList::GetChallengeData(/* parameters */);
		CgsResource::ResourcePtr<BrnResource::ChallengeListResource>::operator->(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnResource::ChallengeListEntry::GetNumPlayers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ChallengeSelector::SetAvailableChallenges(int32_t  liNumPlayers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeSelector.cpp:92
		const ChallengeListEntry * lpChallenge;

		// BrnChallengeSelector.cpp:93
		int32_t liChallengeIndex;

	}
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	BrnResource::ChallengeList::GetChallengeCount(/* parameters */);
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

void BrnGui::GuiCache::GetPlayerInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector3_YAxis() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::AngleBetweenVectors(const rw::math::vpu::Vector3  v0, const rw::math::vpu::Vector3  v1, const rw::math::vpu::Vector3  windAxis) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:342
		VectorIntrinsicUnion::VectorIntrinsic nv0;

		// vector3_operation_inline.h:342
		VectorIntrinsicUnion::VectorIntrinsic nv1;

		// vector3_operation_inline.h:345
		VecFloat angle;

		// vector3_operation_inline.h:346
		VectorIntrinsicUnion::VectorIntrinsic norm;

		// vector3_operation_inline.h:346
		VectorIntrinsicUnion::VectorIntrinsic dotProduct;

		{
			// vector3_operation_inline.h:343
			VectorIntrinsicUnion::VectorIntrinsic temp_one_over_rqrt_dot;

			{
				// vector3_operation_inline.h:343
				VectorIntrinsicUnion::VectorIntrinsic dotproduct;

				{
					// vector3_operation_inline.h:343
					VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

					// vector3_operation_inline.h:343
					VectorIntrinsicUnion::VectorIntrinsic yy;

					// vector3_operation_inline.h:343
					VectorIntrinsicUnion::VectorIntrinsic zz;

				}
				{
					// vector3_operation_inline.h:343
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector3_operation_inline.h:343
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:343
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:343
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

				}
			}
		}
		{
			// vector3_operation_inline.h:344
			VectorIntrinsicUnion::VectorIntrinsic temp_one_over_rqrt_dot;

			{
				// vector3_operation_inline.h:344
				VectorIntrinsicUnion::VectorIntrinsic dotproduct;

				{
					// vector3_operation_inline.h:344
					VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

					// vector3_operation_inline.h:344
					VectorIntrinsicUnion::VectorIntrinsic yy;

					// vector3_operation_inline.h:344
					VectorIntrinsicUnion::VectorIntrinsic zz;

				}
				{
					// vector3_operation_inline.h:344
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector3_operation_inline.h:344
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:344
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:344
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

				}
			}
		}
		{
			// vector3_operation_inline.h:347
			VectorIntrinsicUnion::VectorIntrinsic crossV2;

			// vector3_operation_inline.h:347
			VectorIntrinsicUnion::VectorIntrinsic crossV1;

			// vector3_operation_inline.h:347
			VectorIntrinsicUnion::VectorIntrinsic vZero;

			// vector3_operation_inline.h:347
			VectorIntrinsicUnion::VectorIntrinsic crossV3;

		}
		{
			// vector3_operation_inline.h:348
			VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

			// vector3_operation_inline.h:348
			VectorIntrinsicUnion::VectorIntrinsic yy;

			// vector3_operation_inline.h:348
			VectorIntrinsicUnion::VectorIntrinsic zz;

		}
	}
}

void rw::math::vpu::CosAngleBetweenNormalizedVectors(const rw::math::vpu::Vector3  v0, const rw::math::vpu::Vector3  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:231
		VectorIntrinsicUnion::VectorIntrinsic dotProduct;

		// vector3_operation_inline.h:231
		VectorIntrinsicUnion::VectorIntrinsic temp0;

		// vector3_operation_inline.h:231
		VectorIntrinsicUnion::VectorIntrinsic result;

		// vector3_operation_inline.h:232
		VectorIntrinsicUnion::VectorIntrinsic one;

		// vector3_operation_inline.h:232
		VectorIntrinsicUnion::VectorIntrinsic negOne;

		{
			// vector3_operation_inline.h:235
			VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

			// vector3_operation_inline.h:235
			VectorIntrinsicUnion::VectorIntrinsic yy;

			// vector3_operation_inline.h:235
			VectorIntrinsicUnion::VectorIntrinsic zz;

		}
	}
}

void rw::math::vpu::ACos(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::acosf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// acosf4.h:23
		float[4] result;

		// acosf4.h:23
		float[4] xabs;

		// acosf4.h:24
		float[4] t1;

		// acosf4.h:25
		float[4] xabs2;

		// acosf4.h:25
		float[4] xabs4;

		// acosf4.h:26
		float[4] hi;

		// acosf4.h:26
		float[4] lo;

		// acosf4.h:27
		float[4] neg;

		// acosf4.h:27
		float[4] pos;

		// acosf4.h:28
		unsigned int[4] select;

	}
}

void std::sqrtf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// sqrtf4.h:16
		float[4] zero;

		// sqrtf4.h:17
		float[4] half;

		// sqrtf4.h:18
		float[4] one;

		// sqrtf4.h:19
		float[4] y0;

		// sqrtf4.h:19
		float[4] y0x;

		// sqrtf4.h:19
		float[4] y0xhalf;

		// sqrtf4.h:20
		unsigned int[4] cmp_zero;

	}
}

void BrnGui::CompassComponent::FindAngleInRange(float32_t  lfVal, float32_t  lfMin, float32_t  lfMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCompassComponent.h:225
		float32_t lfFullRange;

		// BrnCompassComponent.h:226
		float32_t lfReturnVal;

	}
}

void std::fabs(float  _Left) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CompassComponent::UpdatePlayerMarkerState(BrnGui::CompassComponent::EPlayerRouteState  lePlayerOnTrack) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CompassComponent::SetMarkerPos(float32_t  lfMarkerBearing, bool  lbVisible) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCompassComponent.h:341
		Vector2 lv2NewMarkerPos;

		// BrnCompassComponent.h:343
		float32_t lfNewMarkerPosX;

	}
}

void BrnFlapt::MovieClipRef::SetPosition(const rw::math::vpu::Vector2  lPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptMovieClipRef.h:285
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::FreeburnChallengeManager::IsActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntryAction::GetNumLocations() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntryAction::GetLocationType(uint8_t  luLocationIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntryAction::GetTriggerID(uint8_t  luLocationIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTrigger::BoxRegion::GetPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CompassComponent::SetMarkerIcon(const char *  lpIconFrameName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CompassComponent::SetBearing(float32_t  lfBearing) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCompassComponent.h:302
		Vector2 lv2NewViewPos;

		// BrnCompassComponent.h:304
		float32_t lfNewViewPosX;

	}
}

void BrnGui::GuiCache::IsInEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::WorldDataController::GetProgressionData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnProgression::ProgressionData>::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:598
		CgsDev::StrStream lStrStream;

	}
}

void BrnProgression::ProgressionData::GetProgressionRankData(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionRankData::GetNumWinsToRankUpRace() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionRankData::GetNumWinsToRankUpRoadRage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionRankData::GetNumWinsToRankUpStunt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::ProgressionRankData::GetNumWinsToRankUpMarkedMan() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::EventPanel::GetRankThresholdForEvent(int32_t  liProgressionRank, BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType, const WorldDataController *  lpGuiWorldData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEventPanel.cpp:380
		const ProgressionRankData * lpProgressionRankData;

		WorldDataController::GetProgressionData(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::GetMemoryResource(/* parameters */);
	BrnProgression::ProgressionData::GetProgressionRankData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnProgression::Profile::IsAchievementWritten(int32_t  liAchievementBit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<60u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsLanguage::LanguageManager::GetLanguage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::AchievementsListComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAchievementsListComponent.cpp:98
		int32_t liAchievementIndex;

	}
	{
		// BrnAchievementsListComponent.cpp:102
		int32_t liIndex;

		// BrnAchievementsListComponent.cpp:103
		char[16] lacBuffer;

		{
			// BrnAchievementsListComponent.cpp:114
			Profile * pProfile;

			// BrnAchievementsListComponent.cpp:126
			char[64] lacText;

			// BrnAchievementsListComponent.cpp:127
			char[64] lacStringID;

			// BrnAchievementsListComponent.cpp:128
			char[64] lacACH_NAME;

			// BrnAchievementsListComponent.cpp:139
			char[16] lacLanguageFormat;

			BrnProgression::Profile::IsAchievementWritten(/* parameters */);
			CgsContainers::BitArray<60u>::IsBitSet(/* parameters */);
			CgsGui::StateInterface::GetLanguageManager(/* parameters */);
			CgsGui::StateInterface::GetLanguageManager(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

void BrnResource::VehicleList::GetVehicleData(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// VehicleList.h:207
		int32_t liIndex;

	}
}

void BrnResource::VehicleList::GetVehicleIndex(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// VehicleList.h:230
		int32_t liIndex;

	}
}

void BrnResource::VehicleList::GetVehicleData(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// VehicleList.h:191
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::ResourcePtr<BrnResource::VehicleListResource>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:562
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::VehicleListEntry::GetId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleListEntry::GetLiveryType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleListEntry::GetParentId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RivalMapPanel::SetRivalData(CgsID  lRivalCarID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRivalMapPanel.cpp:182
		const int32_t TEMP_STRING_LENGTH;

		// BrnRivalMapPanel.cpp:189
		const VehicleListEntry * lpVehicleData;

		// BrnRivalMapPanel.cpp:201
		char[32] lacCarIdString;

		// BrnRivalMapPanel.cpp:206
		char[32] lacTempString;

		CgsGui::StateInterface::GetAccessPointers(/* parameters */);
		CgsGui::StateInterface::GetAccessPointers(/* parameters */);
		CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
		CgsGui::StateInterface::GetAccessPointers(/* parameters */);
		CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
		GuiCache::GetWorldDataController(/* parameters */);
		CgsGui::StateInterface::GetAccessPointers(/* parameters */);
		CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
		GuiCache::GetWorldDataController(/* parameters */);
		CgsGui::StateInterface::GetAccessPointers(/* parameters */);
		CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
		GuiCache::GetWorldDataController(/* parameters */);
		BrnResource::VehicleList::GetVehicleData(/* parameters */);
		BrnResource::VehicleList::GetVehicleData(/* parameters */);
		{
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		BrnResource::VehicleList::GetVehicleData(/* parameters */);
		TextField::ClearText(/* parameters */);
		TextField::ClearText(/* parameters */);
		TextField::ClearText(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnResource::VehicleListEntry::GetParentId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::RivalMapPanel::SetRivalData(const PlayerName *  lpPlayerName, CgsID  lRivalCarId, BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRivalMapPanel.cpp:255
		const int32_t TEMP_STRING_LENGTH;

		// BrnRivalMapPanel.cpp:256
		char[32] lacCarIdString;

		// BrnRivalMapPanel.cpp:263
		const VehicleListEntry * lpVehicleData;

		// BrnRivalMapPanel.cpp:281
		char[32] lacTempString;

		CgsGui::StateInterface::GetAccessPointers(/* parameters */);
		CgsGui::StateInterface::GetAccessPointers(/* parameters */);
		CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
		CgsGui::StateInterface::GetAccessPointers(/* parameters */);
		CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
		GuiCache::GetWorldDataController(/* parameters */);
		CgsGui::StateInterface::GetAccessPointers(/* parameters */);
		CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
		GuiCache::GetWorldDataController(/* parameters */);
		CgsGui::StateInterface::GetAccessPointers(/* parameters */);
		CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
		GuiCache::GetWorldDataController(/* parameters */);
		BrnResource::VehicleList::GetVehicleData(/* parameters */);
		BrnResource::VehicleList::GetVehicleData(/* parameters */);
		{
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		BrnResource::VehicleList::GetVehicleData(/* parameters */);
		BrnResource::VehicleListEntry::GetParentId(/* parameters */);
		TextField::ClearText(/* parameters */);
		TextField::ClearText(/* parameters */);
	}
	CgsNetwork::PlayerName::IsEqualTo(/* parameters */);
	CgsNetwork::PlayerName::Construct(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::GetNumEvents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::GetEvent(uint32_t  luEventIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::GuiCache::GetPresetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::GetNumEvents(/* parameters */);
	CgsContainers::Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u>::GetLength(/* parameters */);
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::GetEvent(/* parameters */);
	{
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnGui::GuiCache::GetNumPresetEvents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::TriggerId::operator uint32_t() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SelectRoutes::GetStartPointEventIndex(int32_t  liRoundNumber) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectRoutes.cpp:565
		uint32_t luEventIndex;

		// BrnSelectRoutes.cpp:566
		uint32_t luNumEvents;

		// BrnSelectRoutes.cpp:567
		const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * lpEventStart;

		GuiCache::GetNumPresetEvents(/* parameters */);
	}
	CgsContainers::Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u>::GetLength(/* parameters */);
}

void CgsContainers::Array<BrnGui::BoostMessageSlot,3u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGui::BoostMessageSlot,3u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::vpu::operator>(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:480
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:482
		bool ret;

		{
			// vec_float_operation_inline.h:481
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator<(const const rw::math::vpu::VecFloatRefIndex &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:627
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:629
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:631
		bool ret;

		{
			// vec_float_operation_inline.h:628
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
		{
			// vec_float_operation_inline.h:630
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator>(const const rw::math::vpu::VecFloatRefIndex &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:469
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:471
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:473
		bool ret;

		{
			// vec_float_operation_inline.h:470
			VectorIntrinsicUnion::VectorIntrinsic permConstant;

		}
		{
			// vec_float_operation_inline.h:472
			VectorIntrinsicUnion u;

		}
	}
}

void BrnGui::AftertouchHudComponent::SetController(const rw::math::vpu::Vector2  lv2ControllerPos, bool  lbIsShaking) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAftertouchHudComponent.cpp:93
		const float32_t lfControllerTolerance;

		// BrnAftertouchHudComponent.cpp:123
		BrnGui::AftertouchHudComponent::EControllerState leControllerState;

		rw::math::vpu::Magnitude(/* parameters */);
	}
	rw::math::vpu::operator>(/* parameters */);
	{
	}
	rw::math::vpu::operator-(/* parameters */);
	{
		// BrnAftertouchHudComponent.cpp:169
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnAftertouchHudComponent.cpp:131
		const BrnGui::AftertouchHudComponent::EControllerState[3][3] laeControllerStates;

		// BrnAftertouchHudComponent.cpp:138
		int32_t liRow;

		// BrnAftertouchHudComponent.cpp:139
		int32_t liCol;

		// BrnAftertouchHudComponent.cpp:142
		const float32_t lfDeadzoneSize;

		rw::math::vpu::operator<(/* parameters */);
		{
		}
		rw::math::vpu::operator<(/* parameters */);
		{
		}
	}
	{
		// BrnAftertouchHudComponent.cpp:98
		float32_t lfMagnitude;

		// BrnAftertouchHudComponent.cpp:99
		const rw::math::vpu::Vector2 lv2Up;

		// BrnAftertouchHudComponent.cpp:102
		Vector2 lv2NormalizedPos;

		// BrnAftertouchHudComponent.cpp:104
		float32_t lfRotation;

		// BrnAftertouchHudComponent.cpp:112
		char[16] lacText;

		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::ACos(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_nmsub(/* parameters */);
		{
		}
		vec_sra(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
			{
				{
				}
			}
		}
		vec_madd(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		vec_abs(/* parameters */);
		vec_madd(/* parameters */);
		vec_rsqrte(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
	}
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
}

void BrnGui::CrashbreakerHudComponent::SetTransition(BrnGui::CrashbreakerHudComponent::EState  leState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashBreakerHudComponent.cpp:94
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::CrashbreakerHudComponent::SetupCrashbreaker(int32_t  liTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashBreakerHudComponent.cpp:76
		char[8] lacTime;

	}
}

void BrnGui::InGameMessagesComponent::GetNextIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PreRaceMessagesComponent::StoreMessageInformation(const GuiEventPreRaceMessages *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPreRaceMessagesComponent.cpp:143
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::PreRaceMessagesComponent::SetMessageText(BrnGui::PreRaceMessagesComponent::EMessageTextIndices  leTextToUpdate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPreRaceMessagesComponent.cpp:366
		BrnGui::GuiEventPreRaceMessages::MessageInfo * lCurrentMsg;

	}
	{
		// BrnPreRaceMessagesComponent.cpp:385
		char[1024] lacParameter;

		// BrnPreRaceMessagesComponent.cpp:389
		char *[1] lapcParameters;

		CgsCore::StrnCpy(/* parameters */);
	}
	{
		// BrnPreRaceMessagesComponent.cpp:414
		char[1024] lacParameter;

		// BrnPreRaceMessagesComponent.cpp:418
		char *[1] lapcParameters;

	}
	{
		// BrnPreRaceMessagesComponent.cpp:431
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPreRaceMessagesComponent.cpp:363
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsCore::StrnCpy(/* parameters */);
	{
		// BrnPreRaceMessagesComponent.cpp:367
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::PreRaceMessagesComponent::ProcessEndOfTransition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPreRaceMessagesComponent.cpp:343
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::PreRaceMessagesComponent::EndMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPreRaceMessagesComponent.cpp:284
		BrnGui::GuiEventPreRaceMessages::MessageInfo * lCurrentMsg;

	}
	{
		// BrnPreRaceMessagesComponent.cpp:285
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::PreRaceMessagesComponent::StartMessage(int32_t  liMessageIndex, float32_t  lfMessageDuration) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPreRaceMessagesComponent.cpp:185
		BrnGui::GuiEventPreRaceMessages::MessageInfo * lCurrentMsg;

		// BrnPreRaceMessagesComponent.cpp:188
		int32_t liTransitionIndex;

	}
	{
		// BrnPreRaceMessagesComponent.cpp:228
		float32_t lfIdleTime;

	}
	{
		// BrnPreRaceMessagesComponent.cpp:175
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPreRaceMessagesComponent.cpp:179
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPreRaceMessagesComponent.cpp:177
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPreRaceMessagesComponent.cpp:186
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::PreRaceMessagesComponent::IsMessageShowing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PreRaceMessagesComponent::Update(float32_t  lfTimeElapsed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPreRaceMessagesComponent.cpp:110
		BrnGui::GuiEventPreRaceMessages::MessageInfo * lCurrentMsg;

	}
	{
		// BrnPreRaceMessagesComponent.cpp:111
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnFlapt::MovieClipRef::GetPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnFlaptMovieClipRef.h:357
	Vector2 lPosition;

	{
		// BrnFlaptMovieClipRef.h:357
		Vector2 lPosition;

		{
			// BrnFlaptMovieClipRef.h:355
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnGui::FractionMetric::SetValueText(const char *  lnValue, BrnGui::FractionMetric::EValueSection  leValueSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFractionMetric.cpp:158
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::FractionMetric::SetValue(const float32_t  lnValue, BrnGui::FractionMetric::EValueSection  leValueSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFractionMetric.cpp:107
		char[128] lacValue;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	}
	rw::math::vpu::IntFloor(/* parameters */);
}

void BrnGui::FractionMetric::SetValue(const int32_t  lnValue, BrnGui::FractionMetric::EValueSection  leValueSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFractionMetric.cpp:81
		char[128] lacValue;

	}
}

void BrnGui::BoostMessageSlot::IsInTransition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetPlayerActiveRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BoostMessageSlot::IsInUse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BoostMessageSlot::GetMessageId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGui::BoostMessageSlot,3u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGui::BoostMessageSlot,3u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnGui::BoostMessageSlot,3u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGui::BoostMessageSlot,3u>::Append(const const BoostMessageSlot &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::BoostMessageSlot::GetSlotPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsZero(float  value, float  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::FastFloatToInt32<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PositionIndicator::SetPosition(int32_t  liPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPositionIndicator.cpp:145
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPositionIndicator.cpp:146
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::GuiCache::GetTimeStep() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventTimeInfo::GetTimeStep() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::EventInfoComponent::SetPositionTextState(int32_t  liPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEventInfo.h:459
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::GuiCache::GetOpponentsInEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetCurrentTakedownsInEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetTargetTakedownsInEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeRelationship::GetRelationshipStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeRelationship::IsPlayerAheadInCurrentRelationship() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeRelationship::IsRivalAheadInCurrentRelationship() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FreeburnChallengeManager::GetCurrentSuccessForARCI(EActiveRaceCarIndex  leARCI) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetOnlinePlayerDisconnected(EActiveRaceCarIndex  lePlayerActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::IsOnlinePlayerEliminated(EActiveRaceCarIndex  leCurrentPlayer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetNumActiveLandmarks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetNumTargetLandmarks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FreeburnChallengeManager::GetCurrentContributionForARCI(EActiveRaceCarIndex  leARCI) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetBurnoutSkill(BrnGameState::BurnoutSkillzData::EBurnoutSkillType  leSkillType, EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BurnoutSkillsManager::GetBurnoutSkillForARC(BrnGameState::BurnoutSkillzData::EBurnoutSkillType  leSkillType, EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BurnoutSkillzData::GetBurnoutSkill(BrnGameState::BurnoutSkillzData::EBurnoutSkillType  leSkillType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RoadRuleComponent::GetActiveRoadRuleType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RoadRuleComponent::IsRoadRuleTime(BrnGameState::EActiveRoadRule  leActiveRoadRule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RoadRuleComponent::IsRoadRuleCrash(BrnGameState::EActiveRoadRule  leActiveRoadRule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetFriendsListWaitReason() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FriendsListEntry::GetEntryStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::MovieClipRef::SetPositionY(const VecFloat  lPositionY) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptMovieClipRef.h:340
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::GuiCache::GetDistanceDrivenInCurrentCar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetGameModeTypeDiscovered(BrnGameState::GameStateModuleIO::EGameModeType  lEGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetGameModeTypeAmount(BrnGameState::GameStateModuleIO::EGameModeType  lEGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RoadRuleShotComponent::SetupComponent(BrnGui::RoadRuleShotComponent::EPlayerState  lePlayerState, bool  lbLocalNewRuler, const char *  lpcOpponentName, CgsID  lRoadId, bool  lbTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleShotComponent.cpp:152
		char[13] lacRoadId;

		// BrnRoadRuleShotComponent.cpp:153
		const char * lpcTitleString;

		// BrnRoadRuleShotComponent.cpp:192
		MovieClipRef lTextFieldComponent;

		// BrnRoadRuleShotComponent.cpp:193
		MovieClipRef lParent;

	}
	{
		// BrnRoadRuleShotComponent.cpp:150
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::BrnShowtimeMessageComponent::HandleTransitionComplete() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnShowtimeMessageComponent.cpp:171
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::BrnShowtimeMessageComponent::TransitionCompleteCallback(void *  lpUserData, uint16_t  luArg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnShowtimeMessageComponent.cpp:191
		BrnShowtimeMessageComponent * lpThis;

	}
}

void BrnGui::GuiCursor::SetDelta(const rw::math::vpu::Vector2  lv2Position, float32_t  lfTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCursor.h:278
		bool lbUseInput;

	}
}

void rw::math::vpu::operator+=(const Vector2 &  v, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCursor::SetDelta(float32_t  lfDeltaX, float32_t  lfDeltaY, float32_t  lfTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	BrnGui::GuiCursor::SetDelta(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	{
		{
			{
			}
		}
	}
	{
	}
	rw::math::vpu::operator+=(/* parameters */);
	{
		// BrnCursor.cpp:95
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCursor.cpp:94
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::GuiCursor::FindClosestSnapIndex(Vector2 *  laSnapLocations, uint32_t  luNumSnapLocations) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCursor.cpp:271
		float32_t lfDistance;

		// BrnCursor.cpp:272
		float32_t lfSmallestDistance;

		// BrnCursor.cpp:273
		uint32_t luSmallestDistanceIndex;

		// BrnCursor.cpp:277
		uint32_t luSnapToIndex;

	}
	{
		// BrnCursor.cpp:275
		CgsDev::StrStream lStrStream;

	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
		// BrnCursor.cpp:291
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnCursor.cpp:290
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void rw::math::vpu::IsZero(const rw::math::vpu::Vector2  v, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsZero<VectorAxisX>(VecFloatRef<VectorAxisX> &  value, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const const VecFloatRef<VectorAxisX> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsZero(const VecFloat  v, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Abs<rw::math::vpu::VecFloat>(const const VecFloat &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:114
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// scalar_operation_inline.h:115
			const VectorIntrinsicUnion::VectorIntrinsic mask;

			// scalar_operation_inline.h:115
			const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

		}
	}
}

void rw::math::vpu::IsZero<VectorAxisY>(VecFloatRef<VectorAxisY> &  value, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::VecFloatRef(const const VecFloatRef<VectorAxisY> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*=(const Vector2 &  v, float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:416
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator-=(const Vector2 &  v, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCursor::SetPosition(const rw::math::vpu::Vector2  lv2Position, bool  lbClampToBounds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCursor.h:245
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnCursor.h:249
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::vpu::operator!=(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsEqualV2(VectorIntrinsicInParam  v0, VectorIntrinsicInParam  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:264
		bool ret;

		// vector_intrinsic_operation_inline.h:265
		VectorIntrinsicUnion::VectorIntrinsic v0comp;

		// vector_intrinsic_operation_inline.h:265
		VectorIntrinsicUnion::VectorIntrinsic v1comp;

	}
}

extern void SnapResults() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCursor::UpdateToSnapLocations(Vector2 *  laSnapLocations, uint32_t  luNumSnapLocations, bool  lbClampCursor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnCursor.cpp:249
	BrnGui::GuiCursor::SnapResults lSnapResults;

	{
		// BrnCursor.cpp:140
		bool lbIslockedToIndex;

		// BrnCursor.cpp:141
		uint32_t luClosestIndex;

		// BrnCursor.cpp:235
		Vector2 lv2Offshoot;

		// BrnCursor.cpp:238
		Vector2 lv2DesiredPosition;

		// BrnCursor.cpp:249
		BrnGui::GuiCursor::SnapResults lSnapResults;

		rw::math::vpu::IsZero(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Vector2::SetZero(/* parameters */);
		rw::math::vpu::Vector2::SetZero(/* parameters */);
		{
			// BrnCursor.cpp:170
			Vector2 lDiff;

			// BrnCursor.cpp:171
			float32_t lfDistance;

			rw::math::vpu::Magnitude(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			{
				{
					{
					}
				}
			}
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			{
				// BrnCursor.cpp:183
				float32_t lfScaler0;

				// BrnCursor.cpp:184
				float32_t lfScaler1;

				rw::math::vpu::operator*=(/* parameters */);
				rw::math::vpu::operator-=(/* parameters */);
			}
		}
		rw::math::vpu::operator-(/* parameters */);
		SetPosition(/* parameters */);
		rw::math::vpu::Vector2::X(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
	{
	}
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
}

void BrnGui::DangerousDrivingDisplay::SetDisplay(BrnGui::DangerousDrivingDisplay::DisplayType  leType, BrnGui::DangerousDrivingBox::DangerousDrivingValues *  lpValues, bool  lbUpdateTotal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDangerousDrivingDisplay.cpp:128
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::GuiNetworkPlayerStats::IsComponentLoaded() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiNetworkPlayerStats::SetInfo(const char *  lpcUserName, int32_t  liWorldRank, const NetworkPlayerStats *  lpStats, int32_t  liPlayerImageIndex, bool  lbShowRank, BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiNetworkPlayerStats.cpp:254
		int32_t liRowIndex;

		// BrnGuiNetworkPlayerStats.cpp:255
		char[32] lacFormattedString;

		// BrnGuiNetworkPlayerStats.cpp:256
		char[1024] lacBuffer;

		// BrnGuiNetworkPlayerStats.cpp:257
		UnicodeBuffer::CgsUtf8 * lpcString;

	}
	CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	CgsGui::StateInterface::GetLanguageManager(/* parameters */);
}

void BrnGui::GuiNetworkRouteInfo::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsDev::StrStreamBase::operator<<(CgsDev::PrintMode  lePrintMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(void *  lpPointer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:627
		CgsDev::PrintMode leSavedPrintMode;

	}
}

void CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<16384,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::GuiCache::GetMapIconManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiNetworkRouteInfo::HandleGuiCacheEvent(const GuiEventCache *  lpCacheEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GuiCache::GetMapIconManager(/* parameters */);
	{
		// BrnGuiNetworkRouteInfo.cpp:413
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiNetworkRouteInfo::IsComponentLoaded() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MainMapComponent::IsZooming() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiNetworkRouteInfo::Update(InputBuffer::GuiEventQueue *  lpInGuiEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiNetworkRouteInfo.cpp:359
		const CgsModule::Event * lpEvent;

		// BrnGuiNetworkRouteInfo.cpp:360
		int32_t liEventSize;

		// BrnGuiNetworkRouteInfo.cpp:361
		int32_t liEventId;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	}
	{
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::MapIconManager::SetRotateSatNav(bool  lbRotateSatNav) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MapIconManager::SetIconSize(BrnGui::MapIconManager::IconSizeMode  leIconMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MapIconManager::SetShowingOnlineRouteInMenu(bool  lbShowing) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiNetworkRouteInfo::SetupMap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	MapIconManager::SetRotateSatNav(/* parameters */);
	MapIconManager::SetIconSize(/* parameters */);
	MapIconManager::SetShowingOnlineRouteInMenu(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnTraffic::LightTriggerId::IsValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::LightTriggerId::GetHull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::TriggerId::GetIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::LightTriggerId::GetLightTriggerIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart::GetCounty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiNetworkRouteInfo::SetInfo(int32_t  liCurrentRound, const BrnGui::GuiEventNetworkGameParams *  lpCreateMatchEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiNetworkRouteInfo.cpp:471
		const int32_t * lpiMappingTable;

		// BrnGuiNetworkRouteInfo.cpp:472
		int32_t liGameModeIndex;

		// BrnGuiNetworkRouteInfo.cpp:473
		char[3][64] laacFormatBuffer;

	}
	CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	BrnTraffic::LightTriggerId::IsValid(/* parameters */);
	CgsGui::StateInterface::GetLanguageManager(/* parameters */);
}

void BrnProgression::ProgressionData::GetProgressionRankCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RaceEventData::GetRankScore(int32_t  liRank) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceEventData.h:883
		CgsDev::StrStream lStrStream;

	}
}

void BrnMath::RoundWithNumSignificantFigures(float32_t  lfRoundNo, float32_t  lfNoSignificantFigures) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMathUtils.h:193
		float32_t lfABSRoundNo;

		// BrnMathUtils.h:194
		float32_t lfCutOffValue;

		// BrnMathUtils.h:196
		float32_t lfScaler;

	}
}

void rw::math::fpu::Abs<float>(const const float &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:108
		float r;

	}
}

void rw::math::fpu::Pow(float  base, float  exponent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:373
		union VectorFloatUnion {
			// scalar.h:374
			float[4] vecValue;

			// scalar.h:375
			float fValue;

		}
		// scalar.h:377
		VectorFloatUnion baseU;

		// scalar.h:377
		VectorFloatUnion exponentU;

		// scalar.h:377
		VectorFloatUnion resultU;

	}
}

void std::powf4(float[4]  x, float[4]  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// powf4.h:8
		int[4] zeros;

		// powf4.h:9
		unsigned int[4] zeromask;

		// powf4.h:11
		unsigned int[4] negmask;

		// powf4.h:13
		float[4] sbit;

		// powf4.h:14
		float[4] absx;

		// powf4.h:15
		float[4] absy;

		// powf4.h:16
		unsigned int[4] oddy;

		// powf4.h:19
		float[4] res;

	}
}

void std::log2f4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// log2f4.h:16
		int[4] zeros;

		// log2f4.h:17
		float[4] ones;

		// log2f4.h:20
		int[4] expmask;

		// log2f4.h:21
		int[4] xexp;

		// log2f4.h:24
		unsigned int[4] mask;

		// log2f4.h:28
		float[4] x1;

		// log2f4.h:29
		float[4] z;

		// log2f4.h:30
		float[4] w;

		// log2f4.h:31
		float[4] polywneg;

		// log2f4.h:35
		float[4] y;

		// log2f4.h:36
		float[4] zz1;

		// log2f4.h:37
		float[4] zz2;

	}
}

void std::divf4(float[4]  numer, float[4]  denom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// divf4.h:15
		float[4] y0;

		// divf4.h:15
		float[4] y0numer;

	}
}

void std::exp2f4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// exp2f4.h:62
		int[4] ix;

		// exp2f4.h:63
		unsigned int[4] overflow;

		// exp2f4.h:64
		unsigned int[4] underflow;

		// exp2f4.h:65
		float[4] frac;

		// exp2f4.h:65
		float[4] frac2;

		// exp2f4.h:65
		float[4] frac4;

		// exp2f4.h:66
		float[4] exp_int;

		// exp2f4.h:66
		float[4] exp_frac;

		// exp2f4.h:67
		float[4] result;

		// exp2f4.h:68
		float[4] hi;

		// exp2f4.h:68
		float[4] lo;

		// exp2f4.h:69
		float[4] zeros;

		// exp2f4.h:70
		float[4] bias;

	}
}

void rw::math::fpu::Sgn<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::EventPanel::GetStuntRunScore(const WorldDataController *  lpGuiWorldData, const BrnProgression::RaceEventData *  lpEventData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEventPanel.cpp:432
		const BrnProgression::ProgressionData * lpProgressionData;

		// BrnEventPanel.cpp:436
		int8_t liLastRankForGameMode;

		// BrnEventPanel.cpp:437
		int32_t liCurrentRank;

		// BrnEventPanel.cpp:444
		float32_t lfTotalNumberOfWinsForThisRank;

		// BrnEventPanel.cpp:445
		float32_t lfTotalNumberOfWinsForNextRank;

		// BrnEventPanel.cpp:446
		float32_t lfCurrentEventWins;

		// BrnEventPanel.cpp:448
		float32_t lfCurrentRelativeEventRatio;

		// BrnEventPanel.cpp:452
		float32_t lfThisStuntRunScore;

		// BrnEventPanel.cpp:453
		float32_t lfNextStuntRunScore;

		// BrnEventPanel.cpp:455
		float32_t lfStuntRunScoreFinalTarget;

		WorldDataController::GetProgressionData(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::GetMemoryResource(/* parameters */);
	BrnProgression::RaceEventData::GetRankScore(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnProgression::RaceEventData::GetRankScore(/* parameters */);
	BrnProgression::RaceEventData::GetRankScore(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnMath::RoundWithNumSignificantFigures(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	std(/* parameters */);
	vec_and(/* parameters */);
	vec_sub(/* parameters */);
	vec_andc(/* parameters */);
	vec_cmpgt(/* parameters */);
	vec_sel(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_sr(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	rw::math::fpu::Abs<float>(/* parameters */);
	vec_sel(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	vec_sub(/* parameters */);
	std(/* parameters */);
	vec_sel(/* parameters */);
	std(/* parameters */);
	vec_andc(/* parameters */);
	vec_ctf(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_andc(/* parameters */);
	vec_madd(/* parameters */);
	vec_ctu(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_sel(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpgt(/* parameters */);
	vec_cmpgt(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpgt(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpgt(/* parameters */);
	vec_add(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_sub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::fpu::Floor<float>(/* parameters */);
	rw::math::fpu::Sgn<float>(/* parameters */);
	rw::math::fpu::FastFloatToInt32<float>(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnMath::RoundWithNumSignificantFigures(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnProgression::ProgressionRankData::GetRoadRageTakedownTarget() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Round<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::EventPanel::GetRoadRageTakedownScore(const WorldDataController *  lpGuiWorldData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEventPanel.cpp:483
		const BrnProgression::ProgressionData * lpProgressionData;

		// BrnEventPanel.cpp:487
		int8_t liLastRankForGameMode;

		// BrnEventPanel.cpp:488
		const ProgressionRankData * lpProgressionRankDataLastRank;

		// BrnEventPanel.cpp:491
		int32_t liCurrentRank;

		// BrnEventPanel.cpp:498
		const ProgressionRankData * lpProgressionRankDataThisRank;

		// BrnEventPanel.cpp:501
		const ProgressionRankData * lpProgressionRankDataNextRank;

		// BrnEventPanel.cpp:504
		float32_t lfTotalNumberOfWinsForThisRank;

		// BrnEventPanel.cpp:505
		float32_t lfTotalNumberOfWinsForNextRank;

		// BrnEventPanel.cpp:506
		float32_t lfCurrentEventWins;

		// BrnEventPanel.cpp:508
		float32_t lfCurrentRelativeEventRatio;

		// BrnEventPanel.cpp:512
		float32_t lfThisRoadRageTakedownTarget;

		// BrnEventPanel.cpp:513
		float32_t lfNextRoadRageTakedownTarget;

		// BrnEventPanel.cpp:515
		float32_t lfRoadRageFinalTarget;

		WorldDataController::GetProgressionData(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::GetMemoryResource(/* parameters */);
	BrnProgression::ProgressionData::GetProgressionRankCount(/* parameters */);
	BrnProgression::ProgressionData::GetProgressionRankData(/* parameters */);
	BrnProgression::ProgressionData::GetProgressionRankData(/* parameters */);
	BrnProgression::ProgressionData::GetProgressionRankData(/* parameters */);
	rw::math::fpu::Round<float>(/* parameters */);
	__fsel(/* parameters */);
	__fsel(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::fpu::FastFloatToInt32<float>(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	{
	}
}

void BrnProgression::RaceEventData::GetMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RaceEventData::GetCheckpointCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RaceEventData::GetCheckpointData(int32_t  liCheckpointIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::CheckpointData::GetLandmarkId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RaceEventData::GetTimeLimitSlow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::RaceEventData::GetSpecialEventCarId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::EventPanel::SetEventData(uint32_t  luEventID, const BrnGui::GuiCache *  lpGuiCache, bool  lbEventsToChooseFrom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEventPanel.cpp:190
		const int32_t TEMP_STRING_LENGTH;

		// BrnEventPanel.cpp:191
		char[32] lacTempString;

		// BrnEventPanel.cpp:207
		const WorldDataController * lpGuiWorldData;

		// BrnEventPanel.cpp:209
		const BrnProgression::RaceEventData * lpEventData;

	}
	GuiCache::GetWorldDataController(/* parameters */);
	GuiCache::GetWorldDataController(/* parameters */);
	{
		// BrnEventPanel.cpp:346
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		BrnProgression::RaceEventData::GetMode(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnEventPanel.cpp:223
		const CheckpointData * lpEndCheckpoint;

		// BrnEventPanel.cpp:226
		BrnGui::GuiEventUpdateSatNav::SatNavIconInfo lDestinationIconInfo;

		BrnProgression::RaceEventData::GetCheckpointCount(/* parameters */);
		BrnProgression::RaceEventData::GetCheckpointData(/* parameters */);
	}
	{
		// BrnEventPanel.cpp:245
		const CheckpointData * lpEndCheckpoint;

		// BrnEventPanel.cpp:248
		BrnGui::GuiEventUpdateSatNav::SatNavIconInfo lDestinationIconInfo;

		TextField::ClearText(/* parameters */);
		TextField::ClearText(/* parameters */);
	}
	{
		// BrnEventPanel.cpp:269
		const ProgressionRankData * lpRankData;

		WorldDataController::GetProgressionData(/* parameters */);
		BrnProgression::ProgressionData::GetProgressionRankData(/* parameters */);
	}
	BrnProgression::RaceEventData::GetCheckpointCount(/* parameters */);
	BrnProgression::RaceEventData::GetCheckpointData(/* parameters */);
	{
		// BrnEventPanel.cpp:315
		const CheckpointData * lpEndCheckpoint;

		// BrnEventPanel.cpp:318
		BrnGui::GuiEventUpdateSatNav::SatNavIconInfo lDestinationIconInfo;

		// BrnEventPanel.cpp:335
		char[13] lacCarName;

		BrnProgression::RaceEventData::GetCheckpointCount(/* parameters */);
		BrnProgression::RaceEventData::GetCheckpointData(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::EventPanel::SetCurrentGameMode(BrnGui::EventPanel::EEventType  leNewMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEventPanel.cpp:585
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::EventPanel::TransitionIn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEventPanel.cpp:631
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::EventPanel::TransitionOut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEventPanel.cpp:677
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::RoadPanel::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadPanel.cpp:137
		char[32] lacComponentName;

		// BrnRoadPanel.cpp:138
		int32_t liRow;

	}
	CgsGui::StateInterface::GetAccessPointers(/* parameters */);
	CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
	GuiCache::GetActiveRoadRuleScoringMode(/* parameters */);
}

void BrnGui::RoadPanel::SetCurrentRule(BrnStreetData::ScoreType  leNewRule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadPanel.cpp:275
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnRoadPanel.cpp:240
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnRoadPanel.cpp:265
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnRoadPanel.cpp:249
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::CrashNavPanel::GetPanelActiveFilterMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::EventPanel::GetCurrentGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavPanel::GetPanelActiveRoadRuleType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavPanel.h:348
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::CrashNavPanel::StoreSettings(bool  lbUseDefaults) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetPanelActiveFilterMode(/* parameters */);
	{
		// BrnCrashNavPanel.cpp:173
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetPanelActiveRoadRuleType(/* parameters */);
}

void BrnGui::MenuToggleGroup::GetSelectable(int32_t  liToggle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMenuToggleGroup.h:175
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
	}
	{
		(None)unknown_arg
		(None)unknown_arg
		{
			{
				(None)unknown_arg
				(None)unknown_arg
				{
					(None)unknown_arg
				}
			}
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
			{
				(None)unknown_arg
				(None)unknown_arg
			}
		}
	}
}

void BrnGui::MenuToggleGroup::GetSelectable(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnGui::SelectableGroup::GetSelectable(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::MenuToggleGroup::GetHighlightedItemIndex(int32_t  liToggle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MenuToggle::GetHighlightedIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SelectableGroup::GetHighlightedIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavPanel::UpdateDataPanel() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavPanel.cpp:1054
		int32_t liCurrentlySelectedItem;

		MenuToggleGroup::GetHighlightedItemIndex(/* parameters */);
	}
	SelectableGroup::GetSelectable(/* parameters */);
	MenuToggle::GetHighlightedIndex(/* parameters */);
	{
		// BrnCrashNavPanel.cpp:1085
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::CrashNavPanel::GetRoadPanelScoreMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavPanel.h:365
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::CrashNavPanel::IsRoadRuleFriendSelected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetRoadPanelScoreMode(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::CrashNavLegend::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavLegend.cpp:91
		int32_t liIndex;

	}
	{
		// BrnCrashNavLegend.cpp:84
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCrashNavLegend.cpp:85
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void rw::math::vpu::operator/<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1756
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1757
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1759
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1760
			VectorIntrinsicUnion u;

		}
		{
			// vec_float_operation_inline.h:1761
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			// vec_float_operation_inline.h:1761
			float floatRecip;

			{
				// vec_float_operation_inline.h:1761
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator+<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1284
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1285
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
}

void rw::math::vpu::operator/<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1756
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1757
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1759
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1760
			VectorIntrinsicUnion u;

		}
		{
			// vec_float_operation_inline.h:1761
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			// vec_float_operation_inline.h:1761
			float floatRecip;

			{
				// vec_float_operation_inline.h:1761
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator+<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1284
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1285
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
}

void BrnGui::CrashNavBorough::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavBorough.cpp:69
		BrnGui::CrashNavBorough::BoroughPositions * lpBorough;

		// BrnCrashNavBorough.cpp:70
		int32_t liIndex;

	}
	rw::math::vpu::operator/<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector2::X(/* parameters */);
	rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector2::SetX(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
	{
		// BrnCrashNavBorough.cpp:62
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCrashNavBorough.cpp:63
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::TextField::SetAutoSize(bool  lbAutosize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void MainMapParameterBundle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MainMapComponent::SetStickMapToScreenEdges(bool  lbStickUp, bool  lbStickDown, bool  lbStickLeft, bool  lbStickRight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::LightTriggerId::Set(uint32_t  luHull, uint32_t  luLightTriggerIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficLightTrigger.h:209
		uint32_t luIndex;

	}
}

void BrnWorld::TriggerId::Set(uint8_t  lu8Owner, uint32_t  lu32Index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::Construct(int32_t  liEventID, LightTriggerId  lTrafficLightTriggerId, LandmarkIndex *  lpLandmarks, int32_t  liNumLandmarks) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateSharedIO.h:1488
		int32_t liIndex;

	}
}

void BrnGui::GuiNetworkRouteInfo::Construct(const char *  lacName, BrnGui::GuiEventRenderMainMap::EMapType  leMapType, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiNetworkRouteInfo.cpp:279
		int32_t liIndex;

		// BrnGuiNetworkRouteInfo.cpp:281
		LightTriggerId lTriggerID;

		// BrnGuiNetworkRouteInfo.cpp:297
		BrnGui::MainMapComponent::MainMapParameterBundle lMainMapData;

	}
	TextField::SetAutoSize(/* parameters */);
	TextField::SetAutoSize(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	MainMapComponent::SetStickMapToScreenEdges(/* parameters */);
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::Construct(/* parameters */);
}

void BrnGui::OffenceMenuItem::SetText(const char *  lpcText) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Selectable::SetDirty(/* parameters */);
	{
		// BrnOffenceMenuItem.cpp:104
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::OffenceMenuItem::Rename(const char *  lacName, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnOffenceMenuItem.cpp:227
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetEventID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::GetCounty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEventTypeDefs.h:1828
		BrnWorld::ECounty leCounty;

	}
}

void BrnGui::SelectRoutes::Setup(const BrnGui::GuiEventNetworkGameParams *  lpGameParams, BrnGui::GuiCache *  lpGuiCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectRoutes.cpp:455
		uint32_t luEventIndex;

		// BrnSelectRoutes.cpp:456
		uint32_t luNumEvents;

		// BrnSelectRoutes.cpp:457
		int32_t liCheckpointIndex;

		// BrnSelectRoutes.cpp:458
		int32_t liRandomEventIndex;

		// BrnSelectRoutes.cpp:459
		int32_t liRoundNumber;

		// BrnSelectRoutes.cpp:461
		BrnGui::SelectRoutes::CheckpointData * lpCheckpointData;

		// BrnSelectRoutes.cpp:462
		BrnGui::GuiEventUpdateSatNav::SatNavIconInfo lIconInfo;

		// BrnSelectRoutes.cpp:463
		const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * lpEventStart;

		// BrnSelectRoutes.cpp:464
		const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event * lpEvent;

		// BrnSelectRoutes.cpp:465
		const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event * lpSelectedEvent;

		// BrnSelectRoutes.cpp:467
		Random lRandomNumber;

	}
	GuiCache::GetNumPresetEvents(/* parameters */);
	CgsContainers::Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u>::GetLength(/* parameters */);
	{
		// BrnSelectRoutes.cpp:477
		CgsDev::StrStream lStrStream;

	}
	CgsNumeric::Random::Construct(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	CgsNumeric::Random::SetSeed(/* parameters */);
	CgsNumeric::Random::RandomInt(/* parameters */);
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetLandmark(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetCounty(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetNumLandmarks(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsContainers::FastBitArray<512>::Iterator::operator++() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:250
		uint64_t luTempSourceMask;

		// CgsFastBitArray.h:251
		uint64_t luStartMaskIndex;

		// CgsFastBitArray.h:252
		uint64_t luStartMaskMod;

		// CgsFastBitArray.h:253
		uint64_t luMaskIndex;

		// CgsFastBitArray.h:254
		const uint64_t * lpxSourceMasks;

		// CgsFastBitArray.h:256
		int32_t liCurrIndex;

		// CgsFastBitArray.h:257
		uint64_t lxCurrMask;

	}
	{
		// CgsFastBitArray.h:279
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFastBitArray.h:311
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFastBitArray.h:247
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFastBitArray.h:281
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFastBitArray.h:313
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFastBitArray.h:248
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::FastBitArray<512>::Iterator::Iterator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SelectRoutes::GetCurrentRound() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SelectRoutes::GetStartLightTriggerID(int32_t  liRoundNumber) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::WorldDataController::GetTotalNumberOfOnlineLandmarks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnTrigger::TriggerData>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:562
		CgsDev::StrStream lStrStream;

	}
}

void BrnTrigger::TriggerData::GetOnlineLandmarkCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<512>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<512>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:511
		uint64_t luIndex;

	}
}

void BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::GetIconType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiEventTypeDefs.h:1874
		BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType leIconType;

	}
}

void rw::math::vpu::Magnitude(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:160
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:161
			VectorIntrinsicUnion::VectorIntrinsic dotproduct;

			{
				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic yy;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic zz;

			}
			{
				// vector3_operation_inline.h:161
				const VectorIntrinsicUnion::VectorIntrinsic zero;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic isZeroMask;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic recipSqrt;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic result;

				{
					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void rw::math::vpu::operator>=(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:797
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:799
		bool ret;

		{
			// vec_float_operation_inline.h:798
			VectorIntrinsicUnion u;

		}
	}
}

void CgsContainers::FastBitArray<512>::SetBit(const int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:430
		int32_t liMaskIndex;

		// CgsFastBitArray.h:431
		int32_t liBitIndex;

		{
			// CgsFastBitArray.h:428
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::FastBitArray<512>::IsZero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:521
		uint64_t luIndex;

	}
}

void CgsContainers::FastBitArray<512>::Begin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<512>::Iterator::Iterator(const uint64_t *  lpxSourceMasks) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<512>::IsBitSet(const const FastBitArray<512>::Iterator &  lIterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:414
		int32_t liIndex;

		// CgsFastBitArray.h:415
		int32_t liMaskIndex;

		{
			// CgsFastBitArray.h:412
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::FastBitArray<512>::Iterator::GetIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:232
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::FastBitArray<512>::Iterator::GetMask() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:371
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::FastBitArray<512>::End() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<512>::Iterator::operator!=(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SelectRoutes::GenerateRandomLandmark(int32_t  liRoundNumber, int32_t  liCheckpointItem, BrnWorld::ECounty  leCounty) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnSelectRoutes.cpp:709
	LandmarkIndex lLandmarkIndex;

	{
		// BrnSelectRoutes.cpp:699
		int32_t liRoundIndex;

		// BrnSelectRoutes.cpp:700
		int32_t liNumValidLandmarks;

		// BrnSelectRoutes.cpp:701
		int32_t liNumLandmarks;

		// BrnSelectRoutes.cpp:702
		int32_t liLandmarkIndex;

		// BrnSelectRoutes.cpp:703
		int32_t liNumIcons;

		// BrnSelectRoutes.cpp:704
		BrnGui::GuiEventUpdateSatNav::SatNavIconInfo lIconInfo;

		// BrnSelectRoutes.cpp:705
		FastBitArray<512> lSelectedLandmarks;

		// BrnSelectRoutes.cpp:706
		Iterator lIterator;

		// BrnSelectRoutes.cpp:707
		Random lRandom;

		// BrnSelectRoutes.cpp:708
		BrnGui::SelectRoutes::CheckpointData * lpCheckpointData;

		// BrnSelectRoutes.cpp:709
		LandmarkIndex lLandmarkIndex;

		// BrnSelectRoutes.cpp:710
		Vector3 lStartPosition;

		// BrnSelectRoutes.cpp:711
		Vector3 lDistance;

		// BrnSelectRoutes.cpp:712
		const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * lpEventStart;

		CgsContainers::FastBitArray<512>::Iterator::Iterator(/* parameters */);
	}
	CgsNumeric::Random::Construct(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	CgsNumeric::Random::SetSeed(/* parameters */);
	GuiCache::GetWorldDataController(/* parameters */);
	WorldDataController::GetTotalNumberOfOnlineLandmarks(/* parameters */);
	CgsContainers::FastBitArray<512>::Construct(/* parameters */);
	CgsContainers::FastBitArray<512>::IsZero(/* parameters */);
	CgsNumeric::Random::RandomInt(/* parameters */);
	CgsContainers::FastBitArray<512>::Begin(/* parameters */);
	CgsContainers::FastBitArray<512>::Iterator::operator!=(/* parameters */);
	CgsContainers::FastBitArray<512>::IsBitSet(/* parameters */);
	CgsContainers::FastBitArray<512>::Iterator::GetIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsContainers::FastBitArray<512>::Iterator::GetIndex(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	CgsNumeric::Random::RandomInt(/* parameters */);
	CgsContainers::FastBitArray<512>::Iterator::GetIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetCounty(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	CgsContainers::FastBitArray<512>::SetBit(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	{
		{
			{
			}
		}
	}
}

void BrnGui::GuiCache::GetNumOnlineFinishPoints() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<256u>::CountSetBits() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:824
		uint32_t luSetBits;

		{
			// CgsBitArray.h:826
			uint64_t luIndex;

			{
				// CgsBitArray.h:828
				uint64_t luCount;

			}
		}
	}
}

void BrnGui::SelectRoutes::GenerateRandomFinishPoint(int32_t  liRoundNumber, int32_t  liCheckpointItem, BrnWorld::ECounty  leCounty) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnSelectRoutes.cpp:821
	LandmarkIndex lLandmarkIndex;

	{
		// BrnSelectRoutes.cpp:811
		int32_t liRoundIndex;

		// BrnSelectRoutes.cpp:812
		int32_t liNumValidLandmarks;

		// BrnSelectRoutes.cpp:813
		int32_t liNumLandmarks;

		// BrnSelectRoutes.cpp:814
		int32_t liLandmarkIndex;

		// BrnSelectRoutes.cpp:815
		int32_t liNumIcons;

		// BrnSelectRoutes.cpp:816
		BrnGui::GuiEventUpdateSatNav::SatNavIconInfo lIconInfo;

		// BrnSelectRoutes.cpp:817
		FastBitArray<512> lSelectedLandmarks;

		// BrnSelectRoutes.cpp:818
		Iterator lIterator;

		// BrnSelectRoutes.cpp:819
		Random lRandom;

		// BrnSelectRoutes.cpp:820
		BrnGui::SelectRoutes::CheckpointData * lpCheckpointData;

		// BrnSelectRoutes.cpp:821
		LandmarkIndex lLandmarkIndex;

		// BrnSelectRoutes.cpp:822
		Vector3 lStartPosition;

		// BrnSelectRoutes.cpp:823
		Vector3 lDistance;

		// BrnSelectRoutes.cpp:824
		const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * lpEventStart;

		CgsContainers::FastBitArray<512>::Iterator::Iterator(/* parameters */);
	}
	CgsNumeric::Random::Construct(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	CgsNumeric::Random::SetSeed(/* parameters */);
	GuiCache::GetNumOnlineFinishPoints(/* parameters */);
	CgsContainers::FastBitArray<512>::Construct(/* parameters */);
	CgsContainers::FastBitArray<512>::IsZero(/* parameters */);
	CgsNumeric::Random::RandomInt(/* parameters */);
	CgsContainers::FastBitArray<512>::Begin(/* parameters */);
	CgsContainers::FastBitArray<512>::Iterator::operator!=(/* parameters */);
	CgsContainers::FastBitArray<512>::IsBitSet(/* parameters */);
	CgsContainers::FastBitArray<512>::Iterator::GetIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsContainers::FastBitArray<512>::Iterator::GetIndex(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	CgsNumeric::Random::RandomInt(/* parameters */);
	CgsContainers::FastBitArray<512>::Iterator::GetIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GuiEventUpdateSatNav::SatNavIconInfo::GetIconType(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetCounty(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	CgsContainers::FastBitArray<512>::SetBit(/* parameters */);
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
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	{
		{
			{
			}
		}
	}
}

void CgsContainers::FastBitArray<175>::Iterator::operator++() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:250
		uint64_t luTempSourceMask;

		// CgsFastBitArray.h:251
		uint64_t luStartMaskIndex;

		// CgsFastBitArray.h:252
		uint64_t luStartMaskMod;

		// CgsFastBitArray.h:253
		uint64_t luMaskIndex;

		// CgsFastBitArray.h:254
		const uint64_t * lpxSourceMasks;

		// CgsFastBitArray.h:256
		int32_t liCurrIndex;

		// CgsFastBitArray.h:257
		uint64_t lxCurrMask;

	}
	{
		// CgsFastBitArray.h:279
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFastBitArray.h:311
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFastBitArray.h:247
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFastBitArray.h:281
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFastBitArray.h:313
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFastBitArray.h:248
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::FastBitArray<175>::Iterator::Iterator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::GetNumEventStarts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::GetNumEventStarts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart,175u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<175>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<175>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:511
		uint64_t luIndex;

	}
}

void CgsNumeric::Random::RandomUInt(uint32_t  luMin, uint32_t  luMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:302
		uint32_t luMod;

		// CgsRandom.h:305
		uint32_t luResult;

	}
}

void CgsContainers::FastBitArray<175>::SetBit(const int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:430
		int32_t liMaskIndex;

		// CgsFastBitArray.h:431
		int32_t liBitIndex;

		{
			// CgsFastBitArray.h:428
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::FastBitArray<175>::IsZero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:521
		uint64_t luIndex;

	}
}

void CgsContainers::FastBitArray<175>::Begin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<175>::Iterator::Iterator(const uint64_t *  lpxSourceMasks) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<175>::IsBitSet(const const FastBitArray<175>::Iterator &  lIterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:414
		int32_t liIndex;

		// CgsFastBitArray.h:415
		int32_t liMaskIndex;

		{
			// CgsFastBitArray.h:412
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::FastBitArray<175>::Iterator::GetIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:232
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::FastBitArray<175>::Iterator::GetMask() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:371
		CgsDev::StrStream lStrStream;

	}
}

void BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart::GetLightTriggerID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<175>::End() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<175>::Iterator::operator!=(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SelectRoutes::GenerateRandomStartPoint(int32_t  liRoundNumber, BrnWorld::ECounty  leCounty) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnSelectRoutes.cpp:932
	LightTriggerId lTriggerID;

	{
		// BrnSelectRoutes.cpp:922
		int32_t liRoundIndex;

		// BrnSelectRoutes.cpp:923
		int32_t liCheckpointItem;

		// BrnSelectRoutes.cpp:924
		uint32_t luNumValidEvents;

		// BrnSelectRoutes.cpp:925
		uint32_t luEventIndex;

		// BrnSelectRoutes.cpp:926
		uint32_t luNumEvents;

		// BrnSelectRoutes.cpp:927
		const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * lpEventStart;

		// BrnSelectRoutes.cpp:928
		FastBitArray<175> lSelectedEvents;

		// BrnSelectRoutes.cpp:929
		Iterator lIterator;

		// BrnSelectRoutes.cpp:930
		Random lRandom;

		// BrnSelectRoutes.cpp:931
		BrnGui::SelectRoutes::CheckpointData * lpCheckpointData;

		// BrnSelectRoutes.cpp:932
		LightTriggerId lTriggerID;

		// BrnSelectRoutes.cpp:933
		BrnGui::GuiEventUpdateSatNav::SatNavIconInfo lIconInfo;

		// BrnSelectRoutes.cpp:934
		Vector3 lFirstCheckpointPosition;

		// BrnSelectRoutes.cpp:935
		Vector3 lDistance;

		BrnTraffic::LightTriggerId::SetInvalid(/* parameters */);
	}
	CgsContainers::FastBitArray<175>::Iterator::Iterator(/* parameters */);
	CgsNumeric::Random::Construct(/* parameters */);
	GuiCache::GetTime(/* parameters */);
	CgsNumeric::Random::SetSeed(/* parameters */);
	GuiCache::GetNumEventStarts(/* parameters */);
	CgsContainers::FastBitArray<175>::Construct(/* parameters */);
	CgsContainers::FastBitArray<175>::IsZero(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	CgsContainers::FastBitArray<175>::Begin(/* parameters */);
	CgsContainers::FastBitArray<175>::Iterator::operator!=(/* parameters */);
	CgsContainers::FastBitArray<175>::IsBitSet(/* parameters */);
	CgsContainers::FastBitArray<175>::Iterator::GetIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsContainers::FastBitArray<175>::Iterator::GetIndex(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	CgsNumeric::Random::RandomUInt(/* parameters */);
	CgsNumeric::Random::RandomUInt(/* parameters */);
	CgsContainers::FastBitArray<175>::Iterator::GetIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	{
		{
			{
			}
		}
	}
	CgsContainers::FastBitArray<175>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::SelectRoutes::SelectRandomLandmark(int32_t  liCheckpointItem, BrnWorld::ECounty  leCounty) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectRoutes.cpp:630
		BrnGui::GuiEventUpdateSatNav::SatNavIconInfo lIconInfo;

		// BrnSelectRoutes.cpp:631
		LandmarkIndex lCheckpoint;

		GuiEventUpdateSatNav::SatNavIconInfo::GetCounty(/* parameters */);
	}
	GuiEventUpdateSatNav::SatNavIconInfo::GetCounty(/* parameters */);
	{
		// BrnSelectRoutes.cpp:605
		const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * lpEventStart;

		// BrnSelectRoutes.cpp:606
		LightTriggerId lStartPoint;

		BrnTraffic::LightTriggerId::IsValid(/* parameters */);
	}
}

void BrnGui::SelectRoutes::SelectRandomLandmarkInWorld(int32_t  liCheckpointItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MenuComponent::SetText(int32_t  liIndex, const char *  lpText) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMenuComponent.h:138
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnMenuComponent.h:139
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::MenuComponent::GetSelectable(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMenuComponent.h:171
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::SelectRoutes::SetupMenuText() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectRoutes.cpp:1030
		BrnGui::SelectRoutes::EMenuItemType leMenuItemType;

		// BrnSelectRoutes.cpp:1031
		int32_t liCheckpointNumber;

		// BrnSelectRoutes.cpp:1032
		int32_t liIndex;

		// BrnSelectRoutes.cpp:1033
		int32_t liNumOptions;

		// BrnSelectRoutes.cpp:1034
		int32_t liNumCheckpoints;

		// BrnSelectRoutes.cpp:1035
		const char * lpcText;

		// BrnSelectRoutes.cpp:1036
		char[64] lacCheckpointStringID;

		GetNumberCheckpoints(/* parameters */);
	}
	CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	MenuComponent::SetText(/* parameters */);
	SelectableGroup::GetSelectable(/* parameters */);
	Selectable::SetDirty(/* parameters */);
	MenuComponent::GetSelectable(/* parameters */);
	Selectable::SetDirty(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnSelectRoutes.cpp:1095
		char[2][64] laacFormatBuffer;

		CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	{
		// BrnSelectRoutes.cpp:1127
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::SelectRoutes::HighlightAddCheckpoint() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SelectRoutes::Show() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AnimationComponent::Run(/* parameters */);
}

void BrnGui::GuiCache::GetPresetEventFromEventID(const int32_t  liEventID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiCache.h:4508
		uint32_t luIndex;

		// BrnGuiCache.h:4509
		const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event * lpEvent;

		{
			// BrnGuiCache.h:4522
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnGui::SelectRoutes::SetRouteFromPresetEvent(int32_t  liEventID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectRoutes.cpp:1174
		int32_t liCheckpointIndex;

		// BrnSelectRoutes.cpp:1175
		int32_t liRoundNumber;

		// BrnSelectRoutes.cpp:1176
		BrnGui::SelectRoutes::CheckpointData * lpCheckpointData;

		// BrnSelectRoutes.cpp:1177
		BrnGui::GuiEventUpdateSatNav::SatNavIconInfo lIconInfo;

		// BrnSelectRoutes.cpp:1178
		const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * lpEventStart;

		// BrnSelectRoutes.cpp:1179
		const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event * lpEvent;

		GuiCache::GetPresetEventFromEventID(/* parameters */);
		GetCurrentRound(/* parameters */);
		BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetLandmark(/* parameters */);
		GuiEventUpdateSatNav::SatNavIconInfo::GetCounty(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetNumLandmarks(/* parameters */);
	GuiEventUpdateSatNav::SatNavIconInfo::GetCounty(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::RivalPanelData::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RivalPanel::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRivalPanel.cpp:76
		int8_t liCptIndex;

	}
	RivalPanelData::Clear(/* parameters */);
	{
		// BrnRivalPanel.cpp:71
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnRivalPanel.cpp:72
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::RivalPanel::SetAptData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRivalPanel.cpp:176
		char[32] lacRivalStringId;

		// BrnRivalPanel.cpp:181
		char[13] lacCarId;

		// BrnRivalPanel.cpp:184
		char[32] lacCarStringId;

		// BrnRivalPanel.cpp:206
		char[32] lacWinsString;

		// BrnRivalPanel.cpp:212
		char[32] lacProgressString;

		// BrnRivalPanel.cpp:219
		int32_t liPercentPerBar;

		// BrnRivalPanel.cpp:220
		int32_t liFirstPartialBar;

		// BrnRivalPanel.cpp:239
		int32_t liAmountOfProgressInThisBar;

		// BrnRivalPanel.cpp:240
		float32_t lfProportionOfThisBar;

	}
	{
		// BrnRivalPanel.cpp:163
		int32_t liCurrentBar;

	}
	{
		// BrnRivalPanel.cpp:224
		CgsDev::StrStream lStrStream;

	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnRivalPanel.cpp:237
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::RivalPanel::SetupComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RivalPanel::SetPanelData(const const RivalPanelData &  lPanelData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RivalTable::ChangeSelection(uint64_t  lRivalId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRivalTable.cpp:348
		int32_t liCell;

	}
	{
		// BrnRivalTable.cpp:353
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::SelectableGroup::GetHighlightedId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SelectableGroup::GetHighlighted() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectableGroup.h:298
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::RivalTable::HandleControllerInput(int32_t  liButtonID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRivalTable.cpp:234
		int32_t liHighlightedRow;

		// BrnRivalTable.cpp:235
		int32_t liHighlightedCol;

		// BrnRivalTable.cpp:238
		bool lbSelectionChanged;

	}
	SelectableGroup::GetHighlightedIndex(/* parameters */);
	SelectableGroup::GetHighlightedIndex(/* parameters */);
	{
		// BrnRivalTable.cpp:327
		uint64_t liNewlyHighlightedId;

		SelectableGroup::GetHighlightedId(/* parameters */);
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

void BrnGui::LeaderboardTableComponent::LocaliseTextInCell(int32_t  liRow, int32_t  liColumn, const char *  lpcText, CgsLanguage::LanguageManager::ParameterFormatType  leTextType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLeaderboardTableComponent.cpp:339
		UnicodeBuffer::CgsUtf8 * lpcString;

		// BrnLeaderboardTableComponent.cpp:340
		char[1024] lacBuffer;

		// BrnLeaderboardTableComponent.cpp:341
		char[128] lacStringID;

	}
	CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	{
		// BrnLeaderboardTableComponent.cpp:337
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void std::atof(const char *  _Str) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::LeaderboardTableComponent::SetCell(int32_t  liRow, int32_t  liColumn, BrnNetwork::ScoreboardColumn::EDataType  leType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLeaderboardTableComponent.cpp:234
		const char * lpcData;

		BrnNetwork::Scoreboard::GetRow(/* parameters */);
	}
	{
		// BrnLeaderboardTableComponent.cpp:315
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnLeaderboardTableComponent.cpp:257
		float32_t lfDistance;

		// BrnLeaderboardTableComponent.cpp:260
		char[128] lacText;

		std(/* parameters */);
	}
	{
		// BrnLeaderboardTableComponent.cpp:288
		CgsID lCarId;

		// BrnLeaderboardTableComponent.cpp:290
		const VehicleListEntry * lpVehicleData;

		// BrnLeaderboardTableComponent.cpp:301
		char[13] lacCarID;

		// BrnLeaderboardTableComponent.cpp:304
		char[128] lacText;

		BrnResource::VehicleList::GetVehicleData(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnResource::VehicleListEntry::GetParentId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::ScoreboardColumn::GetWidth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ScoreboardColumn::GetTitle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::LeaderboardTableComponent::DrawScoreboard() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLeaderboardTableComponent.cpp:149
		int32_t liColumn;

		// BrnLeaderboardTableComponent.cpp:150
		int32_t liRow;

		// BrnLeaderboardTableComponent.cpp:151
		int32_t liWidth;

		// BrnLeaderboardTableComponent.cpp:152
		int32_t liCurrentPosition;

		// BrnLeaderboardTableComponent.cpp:153
		int32_t liCurrentHalfWidth;

		// BrnLeaderboardTableComponent.cpp:155
		char[8] lacColumnPosition;

		// BrnLeaderboardTableComponent.cpp:157
		char[8] lacColumnCount;

		// BrnLeaderboardTableComponent.cpp:184
		const ScoreboardColumn * lpCurrentColumn;

	}
	{
		// BrnLeaderboardTableComponent.cpp:168
		char[8] lacHighlight;

	}
	BrnNetwork::Scoreboard::GetColumn(/* parameters */);
	BrnNetwork::Scoreboard::GetColumn(/* parameters */);
}

void BrnNetwork::Scoreboard::GetNumberOfColumns() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::Scoreboard::GetNumberOfRows() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::LeaderboardTableComponent::SetupScoreboard(const Scoreboard *  lpScoreboard) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLeaderboardTableComponent.cpp:100
		int32_t liGamertagColumn;

	}
	BrnNetwork::Scoreboard::GetColumn(/* parameters */);
	{
		// BrnLeaderboardTableComponent.cpp:111
		BrnGui::GuiCache * lpCache;

		// BrnLeaderboardTableComponent.cpp:112
		const char * lpcGamertag;

		CgsGui::StateInterface::GetAccessPointers(/* parameters */);
		CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
		CgsGui::StateInterface::GetLanguageManager(/* parameters */);
		BrnNetwork::Scoreboard::GetRow(/* parameters */);
	}
}

void CgsNetwork::PlayerName::Construct(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::StrnCpy(/* parameters */);
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

void CgsContainers::FastBitArray<128>::UnSetBit(const int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:451
		int32_t liMaskIndex;

		// CgsFastBitArray.h:452
		int32_t liBitIndex;

	}
	{
		// CgsFastBitArray.h:449
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::FastBitArray<128>::SetBit(const int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:430
		int32_t liMaskIndex;

		// CgsFastBitArray.h:431
		int32_t liBitIndex;

	}
	{
		// CgsFastBitArray.h:428
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::EATraxMenuComponent::GetTrackMode(int32_t  liTrackIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<128>::IsBitSet(const int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:395
		int32_t liMaskIndex;

		// CgsFastBitArray.h:396
		int32_t liBitIndex;

		{
			// CgsFastBitArray.h:393
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnGui::EATraxMenuComponent::SendDrawInformationToApt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEATraxMenuComponent.cpp:298
		const int32_t liEffectiveNumSlots;

		// BrnEATraxMenuComponent.cpp:299
		const float32_t lfEffectiveNumSlots;

		// BrnEATraxMenuComponent.cpp:300
		const float32_t lfCurrentIndex;

		// BrnEATraxMenuComponent.cpp:302
		char[8] lacBarStartNum;

		// BrnEATraxMenuComponent.cpp:305
		char[8] lacBarEndNum;

		{
			// BrnEATraxMenuComponent.cpp:267
			int32_t lDrawIndex;

			{
				// BrnEATraxMenuComponent.cpp:269
				int32_t lTrackIndex;

			}
		}
	}
	{
		// BrnEATraxMenuComponent.cpp:286
		char[8] lacTrackIndexString;

		GetTrackMode(/* parameters */);
		CgsContainers::FastBitArray<128>::IsBitSet(/* parameters */);
		CgsContainers::FastBitArray<128>::IsBitSet(/* parameters */);
		CgsContainers::FastBitArray<128>::IsBitSet(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::EATraxMenuComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ComplexBar::RunTo(int32_t  liEndIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnComplexBar.h:141
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::MarkManSelectable::SetMarkCount(int32_t  liMarkCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ComplexBar::RunTo(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::MarkManSelectableGroup::HandleTransitionComplete(const char *  lpcComponentName, int32_t  liUniqueId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMarkManSelectableGroup.cpp:121
		int8_t liIndex;

		// BrnMarkManSelectableGroup.cpp:122
		MarkManSelectable * lpCurrentSelectable;

		SelectableGroup::GetSelectable(/* parameters */);
		Selectable::SetDirty(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

void BrnGui::WorldDataController::GetRequiredWinsInRank(int32_t  liRank) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiWorldDataController.h:258
		const ProgressionRankData * lpRankData;

	}
}

void CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:562
		CgsDev::StrStream lStrStream;

	}
}

void BrnProgression::ProgressionRankData::GetMedalThresholdToNextRank() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::LicenseComponent::UpdateDirt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLicenseComponent.cpp:1169
		char[128] lacNewText;

		// BrnLicenseComponent.cpp:1172
		int32_t liWinsInRank;

		// BrnLicenseComponent.cpp:1173
		float32_t lfProportionOfWinsRequired;

	}
	GuiCache::GetWorldDataController(/* parameters */);
	WorldDataController::GetRequiredWinsInRank(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void rw::math::vpu::Max<int32_t>(const const int32_t &  a, const const int32_t &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::LicenseComponent::AddWin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLicenseComponent.cpp:917
		char[128] lacNewText;

		// BrnLicenseComponent.cpp:920
		int32_t liWinsInRank;

		// BrnLicenseComponent.cpp:921
		int32_t liWinsLeftInRank;

		// BrnLicenseComponent.cpp:923
		const char * lacUpgradeString;

		GuiCache::GetWorldDataController(/* parameters */);
		WorldDataController::GetRequiredWinsInRank(/* parameters */);
		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
		BrnProgression::ProgressionData::GetProgressionRankData(/* parameters */);
		rw::math::vpu::Max<int32_t>(/* parameters */);
		{
			// BrnLicenseComponent.cpp:939
			char *[1] lpcParameterText;

			// BrnLicenseComponent.cpp:941
			CgsLanguage::LanguageManager::ParameterFormatType leParamType;

		}
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

void BrnGui::LicenseComponent::HideLicense() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PhotoBoothComponent::GetTakePhotoStringID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhotoBoothComponent.cpp:637
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::GuiCache::IsCameraConnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PhotoBoothComponent::SetButtonPromptVisible(bool  lbVisible) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CarSelectOnlinePlayerList::SetPlayerName(int32_t  liPlayerIndex, const char *  lpcGamertag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectOnlinePlayerList.cpp:79
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnGui::CarSelectOnlinePlayerList::SetPlayerCar(int32_t  liPlayerIndex, CgsID  lCarID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectOnlinePlayerList.cpp:100
		const VehicleListEntry * lpVehicleData;

	}
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnResource::VehicleListEntry::GetParentId(/* parameters */);
	{
		// BrnCarSelectOnlinePlayerList.cpp:98
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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

void BrnGui::CarSelectOnlinePlayerListItem::SetFinalSelection(bool  lbFinalSelection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CarSelectOnlinePlayerListItem::Show() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CarSelectOnlinePlayerList::SetFinalSelection(int32_t  liPlayerIndex, bool  lbFinalSelection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CarSelectOnlinePlayerListItem::SetFinalSelection(/* parameters */);
	CarSelectOnlinePlayerListItem::Show(/* parameters */);
	{
		// BrnCarSelectOnlinePlayerList.cpp:128
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::CarSelectOnlinePlayerList::Show(int32_t  liPlayerIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CarSelectOnlinePlayerListItem::Show(/* parameters */);
	{
		// BrnCarSelectOnlinePlayerList.cpp:146
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::CarSelectOnlinePlayerListItem::Hide() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CarSelectOnlinePlayerList::Hide(int32_t  liPlayerIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectOnlinePlayerList.cpp:164
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CarSelectOnlinePlayerListItem::Hide(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnGui::CarSelectOnlinePlayerListItem::OnLoad(const char *  lpcComponentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	TextField::RefreshText(/* parameters */);
	Show(/* parameters */);
	{
		// BrnCarSelectOnlinePlayerListItem.cpp:147
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Hide(/* parameters */);
}

void BrnGui::CarSelectOnlinePlayerList::HandleLoadNotification(const char *  lpcComponentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectOnlinePlayerList.cpp:182
		bool lbHandled;

		// BrnCarSelectOnlinePlayerList.cpp:183
		int32_t liIndex;

	}
}

void BrnResource::ChallengeListEntry::GetOriginalNumPlayers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ChallengeListComponent::GetFilteredChallenge(int32_t  liIndex, int32_t *  lpiActualIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeListComponent.cpp:337
		const ChallengeListEntry * lpChallengeEntry;

		// BrnChallengeListComponent.cpp:338
		int32_t liChallengeIndex;

		// BrnChallengeListComponent.cpp:339
		int32_t liFoundChallenges;

	}
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	BrnResource::ChallengeList::GetChallengeCount(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ChallengeListComponent::GetHighlightedChallengeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnResource::ChallengeListEntry::GetChallengeID(/* parameters */);
}

void BrnGameState::GameStateModuleIO::FburnChallengeEveryPlayerStatusData::GetLocalPlayerCompletionStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<2000>::IsBitSet(const int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:395
		int32_t liMaskIndex;

		// CgsFastBitArray.h:396
		int32_t liBitIndex;

		{
			// CgsFastBitArray.h:393
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnResource::ChallengeListEntry::GetTitleStringID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ChallengeListComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeListComponent.cpp:96
		const ChallengeListEntry * lpChallenge;

		// BrnChallengeListComponent.cpp:97
		int32_t liChallengeIndex;

	}
	{
		// BrnChallengeListComponent.cpp:101
		int32_t liIndex;

		// BrnChallengeListComponent.cpp:102
		int32_t liActualChallengeIndex;

		// BrnChallengeListComponent.cpp:103
		char[16] lacBuffer;

		{
			// BrnChallengeListComponent.cpp:138
			char[64] lacText;

			// BrnChallengeListComponent.cpp:139
			char[64] lacStringID;

			CgsContainers::FastBitArray<2000>::IsBitSet(/* parameters */);
			CgsGui::StateInterface::GetLanguageManager(/* parameters */);
			CgsGui::StateInterface::GetLanguageManager(/* parameters */);
			{
				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
			CgsGui::StateInterface::GetLanguageManager(/* parameters */);
		}
	}
}

void BrnGui::LargeCarComponent::HandleAptTransitionTriggers(const GuiEventAptTrigger *  lpAptTrigger) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLargeCarComponent.cpp:308
		bool lbTriggerDealtWith;

	}
	{
		// BrnLargeCarComponent.cpp:325
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ManufacturersIcon::Set(const BrnResource::VehicleList *  lVehicleList, const CgsID  liSelectedCardId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnManufacturerIcon.cpp:167
		char[13] lacCarNameId;

		// BrnManufacturerIcon.cpp:168
		bool lbManufactureMapFound;

		// BrnManufacturerIcon.cpp:169
		CgsID lParentCarId;

		// BrnManufacturerIcon.cpp:170
		const VehicleListEntry * lpVehicleData;

		// BrnManufacturerIcon.cpp:181
		uint32_t liManufacturerMapIndex;

		BrnResource::VehicleList::GetVehicleData(/* parameters */);
	}
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnResource::VehicleList::GetVehicleData(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	BrnResource::VehicleListEntry::GetParentId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<65536,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<65536,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<65536,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
}

void CgsModule::VariableEventQueue<65536,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<65536,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::VariableEventQueue<65536,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[161] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

		GetEventPaddingSize(/* parameters */);
		OutputQueueContents(/* parameters */);
		{
			// CgsVariableEventQueue.h:464
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGui::StateInterface::PlayAptMovie(const char *  lpacMovieName, int32_t  liLevelNum) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:542
		GuiEventPlayAptMovie lPlayMovieEvent;

	}
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41>::SetRawEvent(const GuiEventPlayAptMovie &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<18>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<41>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::StateInterface::RequestResource(const char *  lpacFileName, CgsGui::ResourceRequestTypes  leFileType, int32_t  liRequestId, CgsGui::ResourceRequestLoadUnload  leLoadUnload) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:500
		GuiEventLoadRequest lLoadRequest;

		{
			// CgsGuiStateInterface.h:498
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsGui::GuiEvent<39>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::LargeCarComponent::ReleaseResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::StateInterface::PlayAptMovie(/* parameters */);
	CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41>::SetRawEvent(/* parameters */);
	CgsGui::StateInterface::RequestResource(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventRequestCompressedCamPic,40>::SetRawEvent(const GuiEventRequestCompressedCamPic &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<553>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<40>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PhotoBoothComponent::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhotoBoothComponent.cpp:403
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPhotoBoothComponent.cpp:371
		GuiEventRequestCompressedCamPic lPicRequest;

		OutputGuiEvent<BrnGui::GuiEventRequestCompressedCamPic>(/* parameters */);
		CgsGui::GuiEventWrapper<BrnGui::GuiEventRequestCompressedCamPic,40>::SetRawEvent(/* parameters */);
	}
}

void BrnProgression::Profile::GetHaveSet100PercentCompletedDate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventStatsRequest,40>::SetRawEvent(const GuiEventStatsRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<430>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::LicenseComponent::SetPlayerInfo(const char *  lpcPlayerName, bool  lbElite, bool  lbHasCompleted100Percent, int32_t  liRank, int32_t  liPointsToNextRank, bool  lbShowUpgradePending, bool  lbShowPoints) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLicenseComponent.cpp:571
		char[128] lacNewText;

	}
	{
		// BrnLicenseComponent.cpp:581
		DateAndTime lCompletedDate;

		// BrnLicenseComponent.cpp:584
		int32_t liMonth;

	}
	{
		// BrnLicenseComponent.cpp:606
		const char * lacUpgradeString;

	}
	TextField::ClearText(/* parameters */);
	TextField::ClearText(/* parameters */);
	TextField::ClearText(/* parameters */);
	TextField::ClearText(/* parameters */);
	{
		// BrnLicenseComponent.cpp:676
		int32_t liWinsInRank;

		GuiCache::GetWorldDataController(/* parameters */);
		WorldDataController::GetRequiredWinsInRank(/* parameters */);
		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
		CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
		BrnProgression::ProgressionData::GetProgressionRankData(/* parameters */);
		rw::math::vpu::Max<int32_t>(/* parameters */);
	}
	{
		// BrnLicenseComponent.cpp:612
		GuiEventStatsRequest lDataRequest;

		OutputGuiEvent<BrnGui::GuiEventStatsRequest>(/* parameters */);
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

void CgsGui::GuiEventWrapper<BrnGui::GuiEventNetworkSelectedPlayerOption,40>::SetRawEvent(const GuiEventNetworkSelectedPlayerOption &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<243>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MarkManSelectable::Mark() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMarkManSelectable.cpp:199
		GuiEventNetworkSelectedPlayerOption lSelectedPlayerOptionEvent;

	}
	OutputGuiEvent<BrnGui::GuiEventNetworkSelectedPlayerOption>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventNetworkSelectedPlayerOption> >(/* parameters */);
}

void BrnGui::MarkManSelectable::IsMarked() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::MarkManSelectableGroup::Mark() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMarkManSelectableGroup.cpp:61
		int8_t liIndex;

		// BrnMarkManSelectableGroup.cpp:62
		MarkManSelectable * lpCurrentSelectable;

		SelectableGroup::GetSelectable(/* parameters */);
		Selectable::SetDirty(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventSetRoadRuleScoreMode,40>::SetRawEvent(const GuiEventSetRoadRuleScoreMode &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<328>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RoadPanel::TransitionIn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadPanel.cpp:345
		GuiEventSetRoadRuleScoreMode lSwitchModeEvent;

		OutputGuiEvent<BrnGui::GuiEventSetRoadRuleScoreMode>(/* parameters */);
		CgsGui::GuiEventWrapper<BrnGui::GuiEventSetRoadRuleScoreMode,40>::SetRawEvent(/* parameters */);
	}
}

void BrnGui::DriveThruMapPanel::TransitionOut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::DriveThruMapPanel::TransitionIn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavPanel::ChangeVisiblePanelState(BrnGui::CrashNavPanel::PanelType  leNextPanelType, BrnGui::RivalMapPanel::ERivalType  leNewRivalType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavPanel.cpp:430
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCrashNavPanel.cpp:481
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	DriveThruMapPanel::TransitionIn(/* parameters */);
	DriveThruMapPanel::TransitionOut(/* parameters */);
}

void BrnGui::GuiCache::IsInFreeburn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavPanel::RefreshSecondLevelFilter(BrnGui::EventPanel::EEventType  leEventMode, BrnStreetData::ScoreType  leRRScoreType, bool  lbForceRefresh) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavPanel.cpp:966
		int32_t liCurrentlySelectedItem;

	}
	GuiCache::IsInFreeburn(/* parameters */);
	MenuToggleGroup::GetSelectable(/* parameters */);
	Selectable::SetDirty(/* parameters */);
	MenuToggleGroup::GetHighlightedItemIndex(/* parameters */);
	{
		// BrnCrashNavPanel.cpp:1029
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	MenuToggleGroup::GetSelectable(/* parameters */);
	Selectable::SetDirty(/* parameters */);
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

void BrnGui::CrashNavPanel::RestoreSettings() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavPanel::SetRivalPanelData(const PlayerName *  lpPlayerName, CgsID  lRivalCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavPanel::SetRivalPanelData(CgsID  lRivalCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavPanel::SetRivalPanelData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavPanel.cpp:736
		const char * lpcPlayerName;

		// BrnCrashNavPanel.cpp:737
		PlayerName lPlayerName;

		// BrnCrashNavPanel.cpp:740
		CgsID lPlayersCar;

		CgsGui::StateInterface::GetLanguageManager(/* parameters */);
		CgsNetwork::PlayerName::Construct(/* parameters */);
	}
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

void BrnGui::CrashNavPanel::SetRoadPanelData(const char *  lpRoadName, const RoadPanelData &  lPanelData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavPanel::SetDrivethruPanelData(CgsID  lDriveThruId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavPanel::SetEventPanelData(uint32_t  luEventID, bool  lbEventsToChooseFrom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavPanel::ShowBlank() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	TextField::ClearText(/* parameters */);
	TextField::ClearText(/* parameters */);
}

void BrnGui::MenuToggle::GetTextSelection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavPanel::SetupComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavPanel.cpp:290
		BrnGui::MenuToggle * lpRedundantToggle;

	}
	{
		// BrnCrashNavPanel.cpp:298
		Selectable * lpEventOption;

		SelectableGroup::GetSelectable(/* parameters */);
		Selectable::SetDirty(/* parameters */);
		SelectableGroup::GetSelectable(/* parameters */);
		Selectable::SetDirty(/* parameters */);
	}
	{
		// BrnCrashNavPanel.cpp:308
		Selectable * lpEventOption;

		SelectableGroup::GetSelectable(/* parameters */);
		Selectable::SetDirty(/* parameters */);
		GuiCache::IsInFreeburn(/* parameters */);
		SelectableGroup::GetSelectable(/* parameters */);
		Selectable::SetDirty(/* parameters */);
		SelectableGroup::GetSelectable(/* parameters */);
		Selectable::SetDirty(/* parameters */);
		SelectableGroup::GetSelectable(/* parameters */);
		Selectable::SetDirty(/* parameters */);
		SelectableGroup::GetSelectable(/* parameters */);
		Selectable::SetDirty(/* parameters */);
		SelectableGroup::GetSelectable(/* parameters */);
		Selectable::SetDirty(/* parameters */);
		SelectableGroup::GetSelectable(/* parameters */);
		Selectable::SetDirty(/* parameters */);
		SelectableGroup::GetSelectable(/* parameters */);
		Selectable::SetDirty(/* parameters */);
		SelectableGroup::GetSelectable(/* parameters */);
		Selectable::SetDirty(/* parameters */);
		SelectableGroup::GetSelectable(/* parameters */);
		Selectable::SetDirty(/* parameters */);
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

void CgsGui::GuiEventWrapper<CgsGui::GuiEvent<107>,40>::SetRawEvent(const GuiEventWrapper<CgsGui::GuiEvent<107>,40>::GuiOnlineNotificationChyronFinishedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<107>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEATraxChyronActive,40>::SetRawEvent(const GuiEATraxChyronActive &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<466>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEvent<560>,40>::SetRawEvent(const GuiEventWrapper<CgsGui::GuiEvent<560>,40>::GuiChallengeTriggerRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<560>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FreeburnChallengeStartComponent::HandleButtonPress(int32_t  liButtonId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFreeburnChallengeStartComponent.cpp:149
		bool lbAllButtonsDown;

	}
	{
		// BrnFreeburnChallengeStartComponent.cpp:152
		GuiEventWrapper<CgsGui::GuiEvent<560>,40>::GuiChallengeTriggerRequest lRequest;

		OutputGuiEvent<BrnGui::GuiChallengeTriggerRequest>(/* parameters */);
	}
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEvent<99>,40>::SetRawEvent(const GuiEventWrapper<CgsGui::GuiEvent<99>,40>::GuiEventOnlineGetBuddies &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<99>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEvent<98>,40>::SetRawEvent(const GuiEventWrapper<CgsGui::GuiEvent<98>,40>::GuiEventOnlineGetBuddyCount &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<98>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventRequestTraining,40>::SetRawEvent(const GuiEventRequestTraining &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<557>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RoadRuleComponent::IsCurrentTimeLeaving() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEventSoundTrigger,40>::SetRawEvent(const GuiEventSoundTrigger &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<22>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiDirtyTrickTriggerableEvent,40>::SetRawEvent(const GuiDirtyTrickTriggerableEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<365>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PaybackComponent::SendAwardTriggerableEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPaybackComponent.cpp:493
		GuiDirtyTrickTriggerableEvent lTriggerableEvent;

		OutputGuiEvent<BrnGui::GuiDirtyTrickTriggerableEvent>(/* parameters */);
	}
	CgsGui::GuiEventWrapper<BrnGui::GuiDirtyTrickTriggerableEvent,40>::SetRawEvent(/* parameters */);
}

void BrnGui::PaybackComponent::RespondToTransitionComplete() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiAudioEvent::ConstructHudMessage(int32_t  liComponentType, int32_t  liAction, int32_t  liAdditionalInformation, CgsID  lHudMessageId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiAudioEvent,40>::SetRawEvent(const GuiAudioEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<451>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEvent<155>,40>::SetRawEvent(const GuiEventWrapper<CgsGui::GuiEvent<155>,40>::GuiHudMessageControllerRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<155>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RivalMapPanel::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRivalMapPanel.cpp:54
		int32_t liEntry;

		// BrnRivalMapPanel.cpp:74
		GuiEventStatsRequest lDataRequest;

	}
	CgsNetwork::PlayerName::Clear(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventStatsRequest>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventStatsRequest> >(/* parameters */);
}

void CgsContainers::BitArray<3u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::BitArray<3u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEvent<432>,40>::SetRawEvent(const GuiEventWrapper<CgsGui::GuiEvent<432>,40>::GuiEventRankProgressRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<432>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::EventPanel::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEventPanel.cpp:87
		int32_t liEntry;

		// BrnEventPanel.cpp:114
		GuiEventWrapper<CgsGui::GuiEvent<432>,40>::GuiEventRankProgressRequest lRankRequestEvent;

	}
	OutputGuiEvent<BrnGui::GuiEventRankProgressRequest>(/* parameters */);
}

void BrnGui::CrashNavPanel::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		// BrnCrashNavPanel.cpp:92
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCrashNavPanel.cpp:91
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::RoadPanel::SwitchScoreMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadPanel.cpp:314
		GuiEventSetRoadRuleScoreMode lSwitchModeEvent;

		OutputGuiEvent<BrnGui::GuiEventSetRoadRuleScoreMode>(/* parameters */);
	}
}

void BrnGui::CrashNavPanel::ToggleRoadPanelScores() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavPanel.cpp:697
		bool lbScoresSwitched;

		// BrnCrashNavPanel.cpp:699
		bool lbIsPlayerSelectedOnRoadRules;

		// BrnCrashNavPanel.cpp:700
		bool lbIsCursorScrollingOnRoadRules;

	}
}

void BrnGui::LicenseComponent::HandleAptTransitionTriggers(const GuiEventAptTrigger *  lpAptTrigger) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLicenseComponent.cpp:299
		bool lbTriggerDealtWith;

	}
	{
		// BrnLicenseComponent.cpp:381
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsGui::StateInterface::PlayAptMovie(/* parameters */);
	CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41>::SetRawEvent(/* parameters */);
}

void BrnGui::GuiCache::GetNumGoldMedalsToNextReward() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::LicenseComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::StateInterface::PlayAptMovie(/* parameters */);
	CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41>::SetRawEvent(/* parameters */);
	{
		// BrnLicenseComponent.cpp:454
		char[128] lacNewText;

		// BrnLicenseComponent.cpp:456
		int32_t liRemainingWinsRequired;

		// BrnLicenseComponent.cpp:458
		const char * lacUpgradeString;

		{
			// BrnLicenseComponent.cpp:487
			char *[1] lpcParameterText;

			// BrnLicenseComponent.cpp:489
			CgsLanguage::LanguageManager::ParameterFormatType leParamType;

		}
	}
}

void BrnGui::LicenseComponent::ShowUpgradedLicense(float32_t  lfMaxTickUpRequiredWinsTime, bool  lbShowPoints) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::StateInterface::PlayAptMovie(/* parameters */);
	CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41>::SetRawEvent(/* parameters */);
}

void BrnGui::LicenseComponent::RankUp(float32_t  lfMaxTickUpRequiredWinsTime, float32_t  lfInterRankDelay, bool  lbShowPoints) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::StateInterface::PlayAptMovie(/* parameters */);
	CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41>::SetRawEvent(/* parameters */);
	{
		// BrnLicenseComponent.cpp:1021
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnLicenseComponent.cpp:1022
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::LargeCarComponent::OnLoad() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::StateInterface::PlayAptMovie(/* parameters */);
}

void BrnGui::FlaptTimerFieldComponent::IsTimeSafe() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFlaptTimerFieldComponent.h:325
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGuiFlaptTimerFieldComponent.h:330
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::FlaptTimerFieldComponent::IsTimeDangerous() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFlaptTimerFieldComponent.h:353
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGuiFlaptTimerFieldComponent.h:358
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventRoadRuleFail,40>::SetRawEvent(const GuiEventRoadRuleFail &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<333>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnProgression::Profile::GetPlayerLicencePicture() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkTexture::IsUncompressedYUV() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventNetworkPlayerImage,41>::SetRawEvent(const GuiEventNetworkPlayerImage &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<256>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::LicenseComponent::SendPlayerPictureEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLicenseComponent.cpp:1204
		GuiEventNetworkPlayerImage lPlayerImageEvent;

		OutputViewState<BrnGui::GuiEventNetworkPlayerImage>(/* parameters */);
		BrnProgression::Profile::GetPlayerLicencePicture(/* parameters */);
	}
	AddGuiEvent<CgsGui::GuiOutViewState<BrnGui::GuiEventNetworkPlayerImage> >(/* parameters */);
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventNetworkOutputPlayerTexture,40>::SetRawEvent(const GuiEventNetworkOutputPlayerTexture &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<262>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::LicenseComponent::StartOutputtingGamerpic() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLicenseComponent.cpp:1234
		GuiEventNetworkOutputPlayerTexture lOutputPlayerTextureEvent;

		OutputGuiEvent<BrnGui::GuiEventNetworkOutputPlayerTexture>(/* parameters */);
	}
}

void BrnGui::LicenseComponent::ShowLicense(bool  lbForceCentred) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLicenseComponent.cpp:765
		bool lbAboutToUpgrade;

	}
	TextField::RefreshText(/* parameters */);
	TextField::RefreshText(/* parameters */);
	GuiCache::GetWorldDataController(/* parameters */);
	WorldDataController::GetRequiredWinsInRank(/* parameters */);
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::operator->(/* parameters */);
	BrnProgression::ProgressionData::GetProgressionRankData(/* parameters */);
	BrnProgression::Profile::GetPlayerLicencePicture(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::LicenseComponent::OnLoad() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::StateInterface::PlayAptMovie(/* parameters */);
	CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41>::SetRawEvent(/* parameters */);
	BrnProgression::Profile::GetPlayerLicencePicture(/* parameters */);
}

void BrnGui::LicenseComponent::StopOutputtingGamerpic() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLicenseComponent.cpp:1257
		GuiEventNetworkOutputPlayerTexture lOutputPlayerTextureEvent;

	}
	OutputGuiEvent<BrnGui::GuiEventNetworkOutputPlayerTexture>(/* parameters */);
	CgsGui::GuiEventWrapper<BrnGui::GuiEventNetworkOutputPlayerTexture,40>::SetRawEvent(/* parameters */);
}

void BrnGui::LicenseComponent::SetRank(int32_t  liNewRank) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLicenseComponent.h:343
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::LicenseComponent::SetVisible(bool  lbVisibleFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	TextField::RefreshText(/* parameters */);
	TextField::RefreshText(/* parameters */);
	SetRank(/* parameters */);
	BrnProgression::Profile::GetPlayerLicencePicture(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::LicenseComponent::ReleaseResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::StateInterface::PlayAptMovie(/* parameters */);
	CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41>::SetRawEvent(/* parameters */);
}

void BrnGui::PhotoBoothComponent::OnLoad() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::StateInterface::PlayAptMovie(/* parameters */);
	AddGuiEvent<CgsGui::GuiOutViewState<CgsGui::GuiEventPlayAptMovie> >(/* parameters */);
	{
		// BrnPhotoBoothComponent.cpp:171
		GuiEventNetworkOutputPlayerTexture lOutputPlayerTextureEvent;

		OutputGuiEvent<BrnGui::GuiEventNetworkOutputPlayerTexture>(/* parameters */);
	}
	{
		// BrnPhotoBoothComponent.cpp:185
		GuiEventNetworkOutputPlayerTexture lOutputPlayerTextureEvent;

		OutputGuiEvent<BrnGui::GuiEventNetworkOutputPlayerTexture>(/* parameters */);
	}
}

void BrnGui::PhotoBoothComponent::ReleaseResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhotoBoothComponent.cpp:214
		GuiEventNetworkOutputPlayerTexture lOutputPlayerTextureEvent;

		CgsGui::StateInterface::PlayAptMovie(/* parameters */);
	}
	AddGuiEvent<CgsGui::GuiOutViewState<CgsGui::GuiEventPlayAptMovie> >(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventNetworkOutputPlayerTexture>(/* parameters */);
}

void BrnGui::PhotoBoothComponent::ShowComponent(bool  lbImmediately) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhotoBoothComponent.cpp:253
		GuiEventNetworkOutputPlayerTexture lOutputPlayerTextureEvent;

	}
	{
		// BrnPhotoBoothComponent.cpp:267
		GuiEventNetworkOutputPlayerTexture lOutputPlayerTextureEvent;

	}
	OutputGuiEvent<BrnGui::GuiEventNetworkOutputPlayerTexture>(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventNetworkOutputPlayerTexture>(/* parameters */);
}

void BrnGui::PhotoBoothComponent::Cancel() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhotoBoothComponent.cpp:464
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPhotoBoothComponent.cpp:449
		GuiEventNetworkOutputPlayerTexture lOutputPlayerTextureEvent;

		OutputGuiEvent<BrnGui::GuiEventNetworkOutputPlayerTexture>(/* parameters */);
	}
}

void BrnGui::PhotoBoothComponent::HandleCompressedStillImageEvent(const GuiEventCamPicCompressed *  lpCompressedPicEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnPhotoBoothComponent.cpp:506
		GuiEventNetworkOutputPlayerTexture lOutputPlayerTextureEvent;

		OutputGuiEvent<BrnGui::GuiEventNetworkOutputPlayerTexture>(/* parameters */);
	}
}

void BrnGui::PhotoBoothComponent::SendPlayerPictureEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhotoBoothComponent.cpp:602
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPhotoBoothComponent.cpp:587
		GuiEventNetworkPlayerImage lPlayerImageEvent;

		OutputViewState<BrnGui::GuiEventNetworkPlayerImage>(/* parameters */);
	}
	{
		// BrnPhotoBoothComponent.cpp:574
		GuiEventNetworkOutputPlayerTexture lOutputPlayerTextureEvent;

		OutputGuiEvent<BrnGui::GuiEventNetworkOutputPlayerTexture>(/* parameters */);
	}
	{
		// BrnPhotoBoothComponent.cpp:553
		GuiEventNetworkOutputPlayerTexture lOutputPlayerTextureEvent;

		OutputGuiEvent<BrnGui::GuiEventNetworkOutputPlayerTexture>(/* parameters */);
	}
}

void BrnResource::ChallengeListEntryAction::GetNumTargets() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntryAction::GetTargetValue(int32_t  liTargetIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntry::GetDescriptionStringID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntry::GetChallengeStyle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeListEntryAction::GetActionType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiChallengeSelectedEvent,40>::SetRawEvent(const GuiChallengeSelectedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<558>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ChallengeSelector::SelectAvailableChallenge(int32_t  liAvailableChallengeIndex, bool  lbSelectingChallenge) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeSelector.cpp:206
		GuiChallengeSelectedEvent lChallengeSelected;

		// BrnChallengeSelector.cpp:207
		const ChallengeListEntry * lpChallengeEntry;

		// BrnChallengeSelector.cpp:216
		char * lpcStringID;

		// BrnChallengeSelector.cpp:217
		int32_t liActionIndex;

		// BrnChallengeSelector.cpp:218
		int32_t liParamCount;

		// BrnChallengeSelector.cpp:219
		const ChallengeListEntryAction * lpAction;

		// BrnChallengeSelector.cpp:221
		CgsLanguage::LanguageManager::ParameterFormatType[4] lParamTypes;

		// BrnChallengeSelector.cpp:222
		char[4][64] lParams;

		// BrnChallengeSelector.cpp:258
		char[16] lacCurrentChallenge;

	}
	BrnResource::ChallengeListEntry::GetAction(/* parameters */);
	CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	BrnResource::ChallengeListEntry::GetChallengeStyle(/* parameters */);
	BrnResource::ChallengeListEntry::GetChallengeID(/* parameters */);
	OutputGuiEvent<BrnGui::GuiChallengeSelectedEvent>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiChallengeSelectedEvent> >(/* parameters */);
}

void BrnResource::ChallengeList::IsChallengeInList(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ChallengeList::GetChallengeIndex(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ChallengeList.h:202
		int32_t liIndex;

	}
}

void BrnGui::ChallengeSelector::IsVisible() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ChallengeSelector::Show() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ChallengeSelector::SelectAvailableChallengeByID(CgsID  lAvailableChallengeID, bool  lbSelectingChallenge) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnResource::ChallengeList::IsChallengeInList(/* parameters */);
	{
		// BrnChallengeSelector.cpp:171
		int32_t liAvailableIndex;

		// BrnChallengeSelector.cpp:172
		int32_t liOverallIndex;

		Show(/* parameters */);
		BrnResource::ChallengeList::GetChallengeIndex(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	Show(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ChallengeSelector::Hide() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeSelector.h:204
		GuiChallengeSelectedEvent lChallengeSelected;

		// BrnChallengeSelector.h:205
		const ChallengeListEntry * lpChallenge;

	}
}

void BrnGui::ChallengeSelector::HandleControllerInput(const GuiEventControllerInputPressed *  lpControllerInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeSelector.cpp:325
		int32_t liNewIndex;

	}
	{
		// BrnChallengeSelector.cpp:336
		GuiChallengeSelectedEvent lChallengeSelected;

		// BrnChallengeSelector.cpp:337
		const ChallengeListEntry * lpChallenge;

		BrnResource::ChallengeListEntry::GetChallengeStyle(/* parameters */);
		BrnResource::ChallengeListEntry::GetChallengeID(/* parameters */);
		OutputGuiEvent<BrnGui::GuiChallengeSelectedEvent>(/* parameters */);
		CgsGui::GuiEventWrapper<BrnGui::GuiChallengeSelectedEvent,40>::SetRawEvent(/* parameters */);
		Hide(/* parameters */);
	}
	{
		// BrnChallengeSelector.cpp:355
		GuiChallengeSelectedEvent lChallengeSelected;

		// BrnChallengeSelector.cpp:356
		const ChallengeListEntry * lpChallenge;

		OutputGuiEvent<BrnGui::GuiChallengeSelectedEvent>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiChallengeSelectedEvent> >(/* parameters */);
	}
	Hide(/* parameters */);
	BrnResource::ChallengeListEntry::GetChallengeStyle(/* parameters */);
	BrnResource::ChallengeListEntry::GetChallengeID(/* parameters */);
}

void CgsGui::GuiEventWrapper<BrnGui::GuiAudioTriggerEvent,40>::SetRawEvent(const GuiAudioTriggerEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<452>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FreeburnChallengeManager::AreMultipleTargetsAvailable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PlayerPositionSingleComponent::SetInvisible() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlayerPositionSingle.h:282
		PlayerPositionSingleData lClearData;

	}
}

void BrnGui::CrashNavPanel::TriggerSound(const EGameInputActions  leButton) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavPanel.cpp:1104
		GuiAudioTriggerEvent lAudioTrigger;

		// BrnCrashNavPanel.cpp:1106
		const char * lpcLabel;

	}
	OutputGuiEvent<BrnGui::GuiAudioTriggerEvent>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiAudioTriggerEvent> >(/* parameters */);
}

void BrnGui::CrashNavPanel::HandleControllerInput(const GuiEventControllerInputPressed *  lpControllerEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavPanel.cpp:856
		bool lbFilterChanged;

		// BrnCrashNavPanel.cpp:858
		const EGameInputActions leButtonId;

	}
	{
		// BrnCrashNavPanel.cpp:910
		int32_t liCurrentlySelectedFilter;

	}
	SelectableGroup::GetHighlightedIndex(/* parameters */);
	{
		// BrnCrashNavPanel.cpp:884
		int32_t liCurrentlySelectedFilter;

		SelectableGroup::GetHighlightedIndex(/* parameters */);
	}
}

void BrnGui::GuiEventRankProgressResponse::HasPlayerFinishedLastRank() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::EventPanel::SetPlayerRank(int32_t  liCurrentRank) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiEventRankProgressResponse::GetPlayerRank() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::EventPanel::SetModeRanks(int32_t  liCurrentRaceRank, int32_t  liCurrentRoadRageRank, int32_t  liCurrentStuntAttackRank, int32_t  liCurrentMarkedManRank) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::EventPanel::SetModeRankWins(int32_t  liOfflineRaceRankWins, int32_t  liRoadRageRankWins, int32_t  liStuntAttackRankWins, int32_t  liMarkedManRankWins) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RivalMapPanel::StorePlayerInfo(const GuiEventStatsResponse *  lpStatsResponseEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavPanel::RecEvent(const CgsModule::Event *  lpEvent, int32_t  liEventId, int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashNavPanel.cpp:522
		bool lbUpdateNeeded;

	}
	RivalMapPanel::StorePlayerInfo(/* parameters */);
	{
		// BrnCrashNavPanel.cpp:530
		const GuiEventCache * lpCacheEvent;

		// BrnCrashNavPanel.cpp:535
		GuiEventWrapper<CgsGui::GuiEvent<432>,40>::GuiEventRankProgressRequest lRankRequestEvent;

		OutputGuiEvent<BrnGui::GuiEventRankProgressRequest>(/* parameters */);
	}
	{
		// BrnCrashNavPanel.cpp:555
		const GuiEventRankProgressResponse * lpRankResponse;

		GuiEventRankProgressResponse::HasPlayerFinishedLastRank(/* parameters */);
		{
			// BrnCrashNavPanel.cpp:561
			BrnGui::GuiCache * lpGuiCache;

			// BrnCrashNavPanel.cpp:567
			int32_t liLastRank;

			CgsGui::StateInterface::GetAccessPointers(/* parameters */);
			CgsGui::GuiAccessPointers::GetGuiCache(/* parameters */);
			GuiCache::GetWorldDataController(/* parameters */);
			GuiCache::GetWorldDataController(/* parameters */);
			WorldDataController::GetProgressionData(/* parameters */);
			GuiCache::GetWorldDataController(/* parameters */);
			WorldDataController::GetProgressionData(/* parameters */);
			EventPanel::SetPlayerRank(/* parameters */);
		}
	}
	EventPanel::SetPlayerRank(/* parameters */);
	EventPanel::SetModeRanks(/* parameters */);
	EventPanel::SetModeRankWins(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::SelectRoutes::GetCurrentMenuItemType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SelectRoutes::GetCurrentlySelectedCheckpointIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::SelectRoutes::HandleControllerInput(const GuiEventControllerInputPressed *  lpControllerEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectRoutes.cpp:136
		BrnGui::SelectRoutes::EChangedItem leItemChanged;

	}
	{
		// BrnSelectRoutes.cpp:360
		BrnGui::SelectRoutes::EMenuItemType leMenuItemType;

		GetCurrentMenuItemType(/* parameters */);
	}
	{
		// BrnSelectRoutes.cpp:410
		BrnGui::SelectRoutes::EMenuItemType leMenuItemType;

	}
	{
		// BrnSelectRoutes.cpp:204
		bool lbChanged;

		AnimationComponent::Run(/* parameters */);
		{
			// BrnSelectRoutes.cpp:232
			GuiAudioTriggerEvent lAudioTrigger;

			GetCurrentlySelectedCheckpointIndex(/* parameters */);
			AnimationComponent::Run(/* parameters */);
		}
	}
	{
		// BrnSelectRoutes.cpp:284
		BrnGui::SelectRoutes::EMenuItemType leMenuItemType;

		GetCurrentMenuItemType(/* parameters */);
		{
			// BrnSelectRoutes.cpp:298
			int32_t liCheckpointIndex;

		}
		GetCurrentlySelectedCheckpointIndex(/* parameters */);
	}
	GetCurrentMenuItemType(/* parameters */);
	GetCurrentMenuItemType(/* parameters */);
	GetCurrentlySelectedCheckpointIndex(/* parameters */);
	{
		// BrnSelectRoutes.cpp:142
		BrnGui::SelectRoutes::EMenuItemType leMenuItemType;

		// BrnSelectRoutes.cpp:196
		GuiAudioTriggerEvent lAudioTrigger;

		GetCurrentMenuItemType(/* parameters */);
		OutputGuiEvent<BrnGui::GuiAudioTriggerEvent>(/* parameters */);
	}
	OutputGuiEvent<BrnGui::GuiAudioTriggerEvent>(/* parameters */);
	{
		// BrnSelectRoutes.cpp:241
		bool lbChanged;

		AnimationComponent::Run(/* parameters */);
		{
			// BrnSelectRoutes.cpp:275
			GuiAudioTriggerEvent lAudioTrigger;

			GetCurrentlySelectedCheckpointIndex(/* parameters */);
			AnimationComponent::Run(/* parameters */);
			AnimationComponent::Run(/* parameters */);
		}
	}
	{
		// BrnSelectRoutes.cpp:367
		int32_t liCheckpointIndex;

		GetCurrentlySelectedCheckpointIndex(/* parameters */);
	}
	GetCurrentlySelectedCheckpointIndex(/* parameters */);
	AnimationComponent::Run(/* parameters */);
	GetCurrentlySelectedCheckpointIndex(/* parameters */);
	GetCurrentlySelectedCheckpointIndex(/* parameters */);
	GetCurrentlySelectedCheckpointIndex(/* parameters */);
	AnimationComponent::Run(/* parameters */);
	GetCurrentlySelectedCheckpointIndex(/* parameters */);
	GetCurrentlySelectedCheckpointIndex(/* parameters */);
	AnimationComponent::Run(/* parameters */);
	{
		// BrnSelectRoutes.cpp:148
		int32_t liCheckpointIndex;

		GetCurrentlySelectedCheckpointIndex(/* parameters */);
	}
	GetCurrentlySelectedCheckpointIndex(/* parameters */);
	GetCurrentlySelectedCheckpointIndex(/* parameters */);
	AnimationComponent::Run(/* parameters */);
	GetCurrentlySelectedCheckpointIndex(/* parameters */);
	AnimationComponent::Run(/* parameters */);
}

void BrnGui::EATraxMenuComponent::SetTrackMode(int32_t  liTrackIndex, BrnGui::EATraxMenuComponent::ETraxPlayState  leMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::EATraxMenuComponent::HandleInput(BrnGui::EATraxMenuComponent::InputCommand  leInputCommand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEATraxMenuComponent.cpp:122
		GuiAudioTriggerEvent lAudioTrigger;

	}
	{
		// BrnEATraxMenuComponent.cpp:141
		GuiAudioTriggerEvent lAudioTrigger;

		OutputGuiEvent<BrnGui::GuiAudioTriggerEvent>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiAudioTriggerEvent> >(/* parameters */);
	}
	{
		// BrnEATraxMenuComponent.cpp:171
		int32_t liMode;

		// BrnEATraxMenuComponent.cpp:174
		int32_t liTrackIndex;

		GetTrackMode(/* parameters */);
	}
	{
		// BrnEATraxMenuComponent.cpp:161
		int32_t liMode;

		GetTrackMode(/* parameters */);
	}
	{
		// BrnEATraxMenuComponent.cpp:151
		int32_t liMode;

		GetTrackMode(/* parameters */);
	}
	SetTrackMode(/* parameters */);
	SetTrackMode(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnGui::GuiEventTickerCustomMessage::Construct(bool  lbLoopMessage, bool  lbTrainingMessage, bool  lbAllowDuplicates, bool  lbIsChallengeMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiEventTickerCustomMessage::AddString(const char *  lpString, BrnGui::GuiEventTickerCustomMessage::EStringType  leStringType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventTickerCustomMessage,40>::SetRawEvent(const GuiEventTickerCustomMessage &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<522>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventTickerClearMessages,40>::SetRawEvent(const GuiEventTickerClearMessages &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<521>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ChallengeListComponent::ShowDescriptionInTicker() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeListComponent.cpp:389
		const ChallengeListEntry * lpChallenge;

		// BrnChallengeListComponent.cpp:390
		int32_t liActualChallengeIndex;

		// BrnChallengeListComponent.cpp:392
		GuiEventTickerClearMessages lClearTicker;

		// BrnChallengeListComponent.cpp:399
		GuiEventTickerCustomMessage lTickerMessage;

		OutputGuiEvent<BrnGui::GuiEventTickerClearMessages>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventTickerClearMessages> >(/* parameters */);
	}
	GuiEventTickerCustomMessage::Construct(/* parameters */);
	GuiEventTickerCustomMessage::AddString(/* parameters */);
	GuiEventTickerCustomMessage::AddString(/* parameters */);
	BrnResource::ChallengeListEntry::GetDescriptionStringID(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventTickerCustomMessage>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventTickerCustomMessage> >(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventTickerCustomMessage>(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventTickerCustomMessage>(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventTickerCustomMessage>(/* parameters */);
	GuiEventTickerCustomMessage::AddString(/* parameters */);
}

void BrnGui::ChallengeListComponent::Setup(BrnGui::GuiCache *  lpGuiCache, int32_t  liNumPlayers, bool  lbShowButton) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeListComponent.cpp:271
		int32_t liChallengeIndex;

		// BrnChallengeListComponent.cpp:272
		const ChallengeListEntry * lpChallengeEntry;

	}
	GuiCache::GetFreeburnChallengeList(/* parameters */);
	BrnResource::ChallengeList::GetChallengeData(/* parameters */);
	BrnResource::ChallengeList::GetChallengeCount(/* parameters */);
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

void BrnGui::ChallengeListComponent::HighlightNext() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeListComponent.cpp:235
		GuiAudioTriggerEvent lAudioTrigger;

	}
	OutputGuiEvent<BrnGui::GuiAudioTriggerEvent>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiAudioTriggerEvent> >(/* parameters */);
}

void BrnGui::ChallengeListComponent::HighlightPrevious() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeListComponent.cpp:197
		GuiAudioTriggerEvent lAudioTrigger;

	}
	OutputGuiEvent<BrnGui::GuiAudioTriggerEvent>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiAudioTriggerEvent> >(/* parameters */);
}

void BrnGui::AchievementsListComponent::ShowDescriptionInTicker() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAchievementsListComponent.cpp:293
		Profile * lpProfile;

		// BrnAchievementsListComponent.cpp:296
		GuiEventTickerClearMessages lClearTicker;

		// BrnAchievementsListComponent.cpp:301
		char[64] lacACH_DESC;

		// BrnAchievementsListComponent.cpp:312
		GuiEventTickerCustomMessage lTickerMessage;

	}
	OutputGuiEvent<BrnGui::GuiEventTickerClearMessages>(/* parameters */);
	BrnProgression::Profile::IsAchievementWritten(/* parameters */);
	GuiEventTickerCustomMessage::Construct(/* parameters */);
	GuiEventTickerCustomMessage::AddString(/* parameters */);
	GuiEventTickerCustomMessage::AddString(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventTickerCustomMessage>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiEventTickerCustomMessage> >(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventTickerCustomMessage>(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventTickerCustomMessage>(/* parameters */);
	OutputGuiEvent<BrnGui::GuiEventTickerCustomMessage>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::AchievementsListComponent::Setup(BrnGui::GuiCache *  lpGuiCache, bool  lbShowButton) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAchievementsListComponent.cpp:273
		int32_t liIndex;

	}
}

void BrnGui::AchievementsListComponent::HighlightNext() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAchievementsListComponent.cpp:222
		GuiAudioTriggerEvent lAudioTrigger;

	}
	OutputGuiEvent<BrnGui::GuiAudioTriggerEvent>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiAudioTriggerEvent> >(/* parameters */);
}

void BrnGui::AchievementsListComponent::HighlightPrevious() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAchievementsListComponent.cpp:184
		GuiAudioTriggerEvent lAudioTrigger;

	}
	OutputGuiEvent<BrnGui::GuiAudioTriggerEvent>(/* parameters */);
	AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiAudioTriggerEvent> >(/* parameters */);
}

void CgsContainers::CgsHash::CalculateHash(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FlaptIconComponent::SetState(const char *  lpcStateName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFlaptIconComponent.cpp:102
		uint32_t luState;

	}
	CgsContainers::CgsHash::CalculateHash(/* parameters */);
	{
		// BrnGuiFlaptIconComponent.cpp:103
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::BitArray<60u>::GetFirstNonZeroBit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:543
		uint32_t liIndex;

		{
			// CgsBitArray.h:553
			int32_t liFirstOneBit;

			{
				// CgsBitArray.h:554
				CgsDev::StrStream lStrStream;

			}
		}
		{
			// CgsBitArray.h:559
			int32_t liFirstOneBit;

		}
	}
}

void CgsContainers::BitArray<60u>::GetZeroBitInInt(int64_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:796
		uint32_t liLeadingZeros;

	}
}

void CgsContainers::_CountLeadingZeros64(uint64_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:169
		uint64_t luRes;

	}
}

void BrnProgression::Profile::GetNumAchievementsWritten() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<60u>::CountSetBits() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:824
		uint32_t luSetBits;

		{
			// CgsBitArray.h:826
			uint64_t luIndex;

			{
				// CgsBitArray.h:828
				uint64_t luCount;

			}
		}
	}
}

void CgsContainers::BitArray<60u>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FriendsListEntry::SetEntryStatus(BrnGui::FriendsListEntry::EFriendListEntryState  leNewStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FriendsListEntry::Invalidate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetEntryStatus(/* parameters */);
	Selectable::SetDirty(/* parameters */);
}

void BrnResource::ChallengeList::GetChallengeData(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ChallengeList.h:179
		int32_t liIndex;

	}
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventFriendListShowing,40>::SetRawEvent(const GuiEventFriendListShowing &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<95>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventRoadRuleModeRequest,40>::SetRawEvent(const GuiEventRoadRuleModeRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<324>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventPerformOnlineMainMenuOption,42>::SetRawEvent(const GuiEventPerformOnlineMainMenuOption &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<282>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<42>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventPerformOnlinePauseOption,42>::SetRawEvent(const GuiEventPerformOnlinePauseOption &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<281>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventOnlineShowProfile,40>::SetRawEvent(const GuiEventOnlineShowProfile &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<100>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventOnlineInviteEvent,40>::SetRawEvent(const GuiEventOnlineInviteEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<101>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::SetFriendsListWaitReason(BrnGui::GuiCache::EFriendsListWaitReason  leWaitReason) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::SetResetOnlineGameOptions(bool  lbReset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::operator--(const BrnGui::FriendsListComponent::EFriendListBranchState &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.h:603
		BrnGui::FriendsListComponent::EFriendListBranchState leOldEnumIndex;

	}
}

void BrnGui::operator++(const BrnGui::FriendsListComponent::EFriendListBranchState &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFriendsList.h:603
		BrnGui::FriendsListComponent::EFriendListBranchState leOldEnumIndex;

	}
}

extern void GuiEventNetworkGameParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Event() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEventOut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEventWrapper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiEventNetworkGameParams,40>::SetRawEvent(const GuiEventNetworkGameParams &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<255>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FreeburnChallengeManager::GetCompletedChallengesData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiCache::IsInGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FlaptIconComponent::GotoAndStopLabel(const char *  lpcStateName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFlaptIconComponent.cpp:125
		uint32_t luState;

	}
	CgsContainers::CgsHash::CalculateHash(/* parameters */);
	{
		// BrnGuiFlaptIconComponent.cpp:126
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::FlaptTimerFieldComponent::SetBoundaries(float32_t  lfSafeColourBoundary, float32_t  lfDangerColourBoundary) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFlaptTimerFieldComponent.h:182
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiFlaptTimerFieldComponent.h:177
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::FlaptTimerFieldComponent::SetSafeColours(uint8_t  luRed, uint8_t  luGreen, uint8_t  luBlue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FlaptTimerFieldComponent::SetDangerColours(uint8_t  luRed, uint8_t  luGreen, uint8_t  luBlue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FlaptTimerFieldComponent::Construct(const void *  lpUnused1, StateInterface *  lpStateInterface, BrnGui::FlaptTimerFieldComponent::ETimerMode  leCountingMode, const void *  lpUnused2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnFlaptComponent::Construct(/* parameters */);
	rw::math::vpu::Vector4::SetZero(/* parameters */);
	SetSafeColours(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::Vector4::SetZero(/* parameters */);
	rw::math::vpu::Vector4::SetZero(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	SetDangerColours(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
}

void BrnGui::OnlineTimeoutComponent::Construct(const char *  lacName, StateInterface *  lpStateInterface, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	FlaptTimerFieldComponent::SetSafeColours(/* parameters */);
	FlaptTimerFieldComponent::SetDangerColours(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	rw::math::vpu::Vector4::SetX(/* parameters */);
}

void BrnGui::FlaptTimerFieldComponent::SetCountingMode(BrnGui::FlaptTimerFieldComponent::ETimerMode  leNewCountingMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FlaptRoadSignIconComponent::SetScreenPosition(Vector2  lv2ScreenPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnFlapt::MovieClipRef::SetPosition(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void rw::math::vpu::MagnitudeSquared(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:167
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

			// vector3_operation_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic yy;

			// vector3_operation_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic zz;

		}
	}
}

void rw::math::vpu::operator-=(const VecFloat &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1058
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnGui::FlaptRoadSignIconComponent::DisplayRoad(BrnGui::ERoadIcon  leIcon, bool  lbShowPost) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFlaptRoadSignIconComponent.cpp:179
		char[32] lacRoadName;

	}
	{
		// BrnGuiFlaptRoadSignIconComponent.cpp:177
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnFlapt::MovieClipRef::SetColour(const rw::math::vpu::Vector4  lv4RGBAColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FlaptRoadSignIconComponent::SetColour(BrnGui::FlaptRoadSignIconComponent::ESignColour  leBackgroundColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFlaptRoadSignIconComponent.cpp:294
		MovieClipRef lSignBGMovieClip;

		// BrnGuiFlaptRoadSignIconComponent.cpp:298
		MovieClipRef lSignTextMovieClip;

		BrnFlapt::MovieClipRef::SetColour(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Vector4::SetX(/* parameters */);
		rw::math::vpu::Vector4::SetY(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Vector4::SetZ(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		SetX<VectorAxisX>(/* parameters */);
		SetY<VectorAxisY>(/* parameters */);
		SetZ<VectorAxisZ>(/* parameters */);
	}
	{
		// BrnGuiFlaptRoadSignIconComponent.cpp:287
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::FlaptRoadSignIconComponent::FindRoadFromName(const char *  lpIconName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFlaptRoadSignIconComponent.cpp:317
		int32_t liIcon;

	}
	{
		// BrnGuiFlaptRoadSignIconComponent.cpp:326
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::FlaptRoadSignIconComponent::DisplayRoadFromCgsID(CgsID  lRoadID, bool  lbShowPost) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFlaptRoadSignIconComponent.cpp:232
		char[32] lacRoadNameString;

		// BrnGuiFlaptRoadSignIconComponent.cpp:236
		BrnGui::ERoadIcon leRoadIcon;

	}
	{
		// BrnGuiFlaptRoadSignIconComponent.cpp:226
		char[32] lacRoadName;

	}
}

void BrnGui::FlaptRoadSignIconComponent::DisplayColouredRoadFromCgsID(CgsID  lRoadID, bool  lbShowPost, BrnGui::FlaptRoadSignIconComponent::ESignColour  leBackgroundColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::RoadRuleComponent::IsSameAsCurrentRoad(BrnGui::GuiEventRoadRuleUpcomingRoads::ERoadSide  leRoadSide, const GuiEventRoadRuleUpcomingRoads *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleComponent.h:710
		bool lbIdsMatch;

		// BrnRoadRuleComponent.h:711
		bool lbNavStatesMatch;

		// BrnRoadRuleComponent.h:712
		bool lbTimeRulerTypesMatch;

		// BrnRoadRuleComponent.h:713
		bool lbCrashRulerTypesMatch;

	}
}

void BrnGui::RoadRuleComponent::ShouldUseInEventColouring() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleComponent.h:733
		BrnGameState::GameStateModuleIO::EGameModeType leCurrentMode;

		// BrnRoadRuleComponent.h:735
		bool lbIsInFreeburn;

	}
}

void BrnGui::RoadRuleComponent::UpdateUpcomingRoadLeaders(GuiEventRoadRuleUpcomingRoads *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRuleComponent.h:802
		BrnStreetData::ScoreType leScoreType;

	}
	{
		// BrnRoadRuleComponent.h:814
		BrnStreetData::ScoreType leScoreType;

	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector4  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:499
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector4_operation_inline.h:500
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vector4_operation_inline.h:500
				VectorIntrinsicUnion u;

			}
		}
	}
}

void BrnFlapt::MovieClipRef::SetColourScale(const rw::math::vpu::Vector4  lv4NewColourScale) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptMovieClipRef.h:391
		CgsDev::StrStream lStrStream;

	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector2  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:434
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void BrnFlapt::MovieClipRef::SetSizeScale(const rw::math::vpu::Vector2  lv2NewSizeScale) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFlaptMovieClipRef.h:433
		Vector2 lXAxis;

		// BrnFlaptMovieClipRef.h:434
		Vector2 lYAxis;

		{
			// BrnFlaptMovieClipRef.h:431
			CgsDev::StrStream lStrStream;

		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisZ, VectorAxisW>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:164
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator*=<VectorAxisX>(const Vector2 &  v, VecFloatRef<VectorAxisX> &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:479
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vector2_operation_inline.h:480
		VectorIntrinsicUnion::VectorIntrinsic aVI;

	}
}

void rw::math::vpu::operator*=<VectorAxisY>(const Vector2 &  v, VecFloatRef<VectorAxisY> &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:479
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vector2_operation_inline.h:480
		VectorIntrinsicUnion::VectorIntrinsic aVI;

	}
}

void BrnGui::GuiCache::IsInShortcut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::FlaptMedalIcon::TransitionCompleteCallback(void *  lpUserData, uint16_t  luArg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFlaptMedalIcon.cpp:104
		FlaptMedalIcon * lpThis;

	}
	{
		// BrnGuiFlaptMedalIcon.cpp:106
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGuiFlaptMedalIcon.cpp:139
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::operator--(const BrnGui::FlaptMedalIcon::EMedalIconStates &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFlaptMedalIcon.h:113
		BrnGui::FlaptMedalIcon::EMedalIconStates leOldEnumIndex;

	}
}

void BrnGui::FlaptMedalIcon::MedalDown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator--(/* parameters */);
}

void BrnGui::operator++(const BrnGui::FlaptMedalIcon::EMedalIconStates &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFlaptMedalIcon.h:113
		BrnGui::FlaptMedalIcon::EMedalIconStates leOldEnumIndex;

	}
}

void BrnGui::FlaptMedalIcon::MedalUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator++(/* parameters */);
}

void BrnGui::FlaptMedalIcon::SetMedal(BrnGameState::ECurrentMedalTargetTime  leNewMedal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFlaptMedalIcon.cpp:196
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::FlaptButtonIconComponent::GetButton() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::SetHighlighted(bool  lbHighlighted) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ClearFlag(/* parameters */);
	SetFlag(/* parameters */);
	SetFlag(/* parameters */);
	{
		// BrnSelectable.h:395
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ProfileHost::HandleProfileTaskResult() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

::::KF_ASPECTRATIO_WIDESCREEN = [63, 227, 142, 57];

::::KF_ASPECTRATIO_STANDARD = [63, 170, 170, 171];

::::KF_ASPECTRATIO_SQUARE = [63, 128, 0, 0];

::::KF_ASPECTRATIO_STAND_IN_PLEASE_REMOVE_ME = [63, 227, 142, 57];

::::KF_DEFAULT_FOVHORIZONTAL = [63, 201, 15, 219];

::::KF_DEFAULT_ASPECTRATIO = [63, 227, 142, 57];

::::KF_DEFAULT_NEARCLIPPLANE = [61, 204, 204, 205];

::::KF_DEFAULT_FARCLIPPLANE = [68, 122, 0, 0];

::::KF_DEFAULT_DEPTHOFFIELD = [63, 128, 0, 0];

::::KI_NETWORK_COMPRESSED_PICTURE_FORMAT = 1433534630;

::::KI_NETWORK_PHOTO_FORMAT = 1433536677;

::::K_GAMER_PICTURE_FORMAT = 1433536677;

::::K_NETWORK_PERF_CHANNEL = 8;

::::K_NETWORK2_PERF_CHANNEL = 9;

::::K_NETWORK3_PERF_CHANNEL = 18;

::::KU_INVALID_LANDMARK_INDEX = -1;

::::KF_GRAVITY = [65, 28, 245, 195];

::::KE_PHYSICS_PERFMON_PAGE = 6;

::::KF_CORONA_OFFSET = [63, 0, 0, 0];

::::KF_BLOBBY_SHADOW_ALPHA = [63, 51, 51, 51];

::::kfSteeringPower = [63, 128, 0, 0];

::::msfTicksPerSecond = [69, 59, 128, 0];

::::msfOneOverTicksPerSecond = [57, 174, 195, 62];

ICE::TWO_PI_ANGLE = [71, 128, 0, 0];

ICE::TWO_PI_DEG = [67, 180, 0, 0];

ICE::TWO_PI = [64, 201, 15, 219];

ICE::MILE = [63, 205, 254, 252];

ICE::ICE_PARAMETER_MAX = -1;

ICE::ICE_LENS_DEFAULT = [65, 192, 0, 0];

ICE::ICE_NEAR_CLIP_DEFAULT = [63, 0, 0, 0];

ICE::ICE_TANGENT_LENGTH_DEFAULT = [63, 128, 0, 0];

ICE::ICE_INVALID_KEY = -1;

ICE::ICE_INVALID_INTERVAL = -1;

ICE::ICE_EPSILON = [55, 39, 197, 172];

ICE::ICE_DATA_SMALL_FLOAT = [58, 131, 18, 111];

ICE::ICEMath::ASPECT_X = [63, 170, 61, 113];

ICE::ICEMath::LENS_BASE = [65, 64, 0, 0];

CgsWorld::KU_INVALID_WORLD_MAP_VALUE = -1;

BrnProgression_2007_10_04::KF_PLAYER_BOOST_THRESHOLD = [65, 160, 0, 0];

BrnProgression_2007_10_04::KF_PLAYERSTAT_OVERDRIVE_EARNER = [67, 250, 0, 0];

BrnProgression_2007_10_04::KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX = [66, 112, 0, 0];

BrnProgression_2007_10_04::KF_PLAYER_STAT_TEMPORARY_ACCELERATOR = [65, 32, 0, 0];

BrnDirector::KE_DIRECTOR_PERFMON_PAGE = 13;

BrnDirector::Camera::KF_SUPER_SLO_MO_FACTOR = [61, 8, 136, 137];

BrnDirector::Camera::KF_SLO_MO_FACTOR = [62, 146, 73, 37];

CgsInput::KF_BUTTONDOWNTHRESHOLD = [61, 204, 204, 205];

BrnReplays::KF_REPLAY_START_TIME = [65, 112, 0, 0];

BrnReplays::KF_REPLAY_LENGTH = [65, 160, 0, 0];

BrnReplays::KAC_STREAM_MAGIC_NUMBER = "REPLAY ";

CgsSceneManager::KF_DEFAULT_MIN_PADDING = [61, 204, 204, 205];

CgsSceneManager::KF_DEFAULT_MAX_PADDING = [64, 0, 0, 0];

CgsSceneManager::KU16_INVALID_ENTITY_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INSTANCE_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INDEX = -1;

CgsSceneManager::KU_SPATIAL_PARTITION_INVALID_ID = -1;

CgsNumeric::KU_RANDOM_DEFAULT_SEED = -1881117246;

BrnPhysics::RWPhysicsTypeData::K_DEFAULT_JOINT_SWING_DISPLACEMENT_LIMIT = [68, 122, 0, 0];

BrnPhysics::RWPhysicsTypeData::K_DEFAULT_JOINT_TWIST_DISPLACEMENT_LIMIT = [68, 122, 0, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MIN = [70, 28, 64, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MAX = [71, 67, 80, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_RANGE = [71, 28, 64, 0];

BrnPhysics::Deformation::KE_PMP_DEFORMATION = 15;

BrnPhysics::Props::KI_PROP_FLAG_MASK = -67108864;

BrnPhysics::Props::KI_PROP_ANIM_MINSPEED = [192, 201, 22, 135];

BrnPhysics::Props::KI_PROP_ANIM_MAXSPEED = [64, 201, 22, 135];

BrnPhysics::Props::KI_PROP_MAX_ANGULARCONSTRAINT = [64, 201, 22, 135];

BrnPhysics::Props::KI_PROP_MIN_ANGULARCONSTRAINT = [0, 0, 0, 0];

BrnPhysics::Props::knZAngularRotation = -128;

BrnPhysics::Props::knNoAngularRotation = -64;

BrnPhysics::Props::knAngularRotationBits = -64;

BrnPhysics::Vehicle::kfVehicleDefaultAngularDrag = [55, 39, 197, 172];

BrnPhysics::Vehicle::kfVehicleDefaultLinearDrag = [55, 39, 197, 172];

BrnPhysics::Vehicle::kfVehicleDefaultMaxLinearDisplacement = [68, 250, 0, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxAngularDisplacement = [63, 0, 0, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxLinearVelocity = [71, 234, 96, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxAngularVelocity = [65, 240, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultAngularDrag = [0, 0, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultLinearDrag = [0, 0, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultMaxLinearDisplacement = [68, 250, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultMaxAngularDisplacement = [64, 160, 0, 0];

BrnPhysics::Vehicle::krMPS2MPH = [64, 15, 41, 247];

BrnPhysics::Vehicle::krMPH2MPS = [62, 228, 226, 109];

BrnPhysics::Vehicle::KF_STICK_AFTERTOUCH_MODIFIER = [62, 128, 0, 0];

BrnPhysics::Vehicle::KF_STUCK_IN_COLLISION_TEST_INTERVAL = [64, 160, 0, 0];

BrnPhysics::Vehicle::KF_AIR_RAM_SCALE_FACTOR = [66, 72, 0, 0];

BrnPhysics::Vehicle::KF_SLAM_MAGNITUDE = [65, 200, 0, 0];

BrnAI::KF_MAX_TURN_ANGLE = [62, 178, 184, 194];

BrnAI::KF_AVERAGE_TURN_ANGLE = [62, 50, 184, 194];

BrnAI::KF_AI_MAX_SPEED_MULTIPLIER = [63, 153, 153, 154];

BrnAI::KF_AI_MAX_BOOST_SPEED_MULTIPLIER = [63, 140, 204, 205];

BrnAI::KF_IN_FRONT_OF_PLAYER_DISTANCE = [66, 160, 0, 0];

BrnAI::KX_SECTION_FLAG_AI_INTERSTATE_EXIT = -128;

BrnTraffic::KU_INVALID_SECTION = -1;

BrnTraffic::KU_INVALID_HULL = -1;

BrnTraffic::KU_INVALID_NEIGHBOUR = -1;

BrnTraffic::KU_INVALID_STOPLINE = -1;

BrnTraffic::KU_INVALID_FLOWTYPE = -1;

BrnTraffic::KU_INVALID_KILLZONEREGION = -1;

BrnTraffic::KU_INVALID_TRAFFIC_LIGHT_TRIGGER = -1;

BrnTraffic::KF_TRAFFIC_LIGHT_MAX_TIME_IN_STATE = [69, 204, 204, 0];

BrnTraffic::KU_INVALID_HULL_RUNTIME = -1;

BrnTraffic::KU_INVALID_UPDATE_FRAME = -1;

BrnTraffic::KF_UPDATE_TIME_DELTA_NO_SLOWMO = [61, 204, 204, 205];

BrnTraffic::KF_SECONDS_PER_MINUTE = [66, 112, 0, 0];

BrnTraffic::KF_HULL_CHANGE_PREDICTION_TIME = [64, 160, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_FEELERS_ANGLE = [62, 134, 10, 146];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_IMPACT_TIME_MAX = [64, 128, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_IMPACT_TIME_SCORE_FACTOR = [65, 32, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_PASSING_MAX_DISTANCE = [65, 32, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_HEIGHT_SKIP = [64, 64, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_MAX_RADIUS = [66, 112, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_SCORE_NEEDS_ACTION = [66, 130, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_ONLINE_SCORE_NEEDS_ACTION = [67, 72, 0, 0];

BrnTraffic::KF_DENSITY_BASE_SCALE = [63, 128, 0, 0];

BrnTraffic::KF_VEHICLE_BBOX_FATNESS = [62, 225, 71, 174];

BrnTraffic::KF_VEHICLE_COLLIDABILITY_RADIUS = [65, 160, 0, 0];

BrnTraffic::KF_VEHICLE_PARTIAL_UPDATE_DISTANCE = [67, 22, 0, 0];

BrnTraffic::KF_GENERATOR_PHASE_SHIFT = [63, 51, 51, 51];

BrnTraffic::KF_MIN_GENERATION_FACTOR = [63, 76, 204, 205];

BrnTraffic::KF_MAX_GENERATION_FACTOR = [63, 153, 153, 154];

BrnTraffic::KF_MAX_DIST_ACROSS_LANE_lhs = [63, 51, 51, 51];

BrnTraffic::KF_PARAM_END_OF_SECTION_APPROACH_DIST = [66, 160, 0, 0];

BrnTraffic::KF_PARAM_AVOIDANCE_BIAS = [64, 64, 0, 0];

BrnTraffic::KF_PARAM_SPACE_FACTOR = [64, 64, 0, 0];

BrnTraffic::KF_PARAM_NEXT_PARAM_TIME_THRESHOLD = [64, 0, 0, 0];

BrnTraffic::KF_PARAM_MIN_NEXT_PARAM_DIST_THRESHOLD = [65, 200, 0, 0];

BrnTraffic::KF_PARAM_MAX_ACCEL_FORCE = [62, 117, 194, 143];

BrnTraffic::KF_PARAM_MIN_MERGE_DISTANCE = [65, 96, 0, 0];

BrnTraffic::KF_PARAM_MIN_SPAWN_DISTANCE = [65, 160, 0, 0];

BrnTraffic::KF_PARAM_MIN_SPEED_FOR_STOPPED_AT_LIGHTS = [64, 160, 0, 0];

BrnTraffic::KF_PARAM_MIN_DIST_AHEAD_FOR_LANE_CHANGE = [65, 112, 0, 0];

BrnTraffic::KF_PARAM_MIN_DIST_BEHIND_FOR_LANE_CHANGE = [65, 160, 0, 0];

BrnTraffic::KF_PARAM_IMPATIENCE_PROB = [62, 153, 153, 154];

BrnTraffic::KF_PARAM_MIN_SWERVE_FOR_ANNOYANCE = [63, 0, 0, 0];

BrnTraffic::KF_PARAM_FLASH_LIGHTS_PROB = [63, 25, 153, 154];

BrnTraffic::KF_PARAM_BEEP_HORN_PROB = [63, 76, 204, 205];

BrnTraffic::KF_PARAM_BEEP_HORN_PROB_PANICKING = [63, 51, 51, 51];

BrnTraffic::KF_SPONTANEOUS_CONE_DEPTH_lhs = [65, 240, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_HALF_ANGLE_lhs = [65, 32, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_DEPTH_lhs = [66, 72, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_HALF_ANGLE_lhs = [65, 160, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_DEPTH_lhs = [66, 72, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_HALF_ANGLE_lhs = [64, 32, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_BRAKING_FACTOR = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_OPTIMAL_DISTANCE_FROM_TARGET_lhs = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_SPEED_BALANCE_FACTOR_lhs = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_START_DISTANCE_FROM_TARGET = [64, 64, 0, 0];

BrnTraffic::KF_VEHICLE_SLOW_FOR_PARAM_SPEED_FACTOR_lhs = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_STEERING_DELTA_lhs = [60, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_STEERING_ANGLE_lhs = [65, 200, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_SWERVE_COS_ANGLE = [63, 0, 0, 0];

BrnTraffic::KF_VEHICLE_DIRECTION_DAMPING_FACTOR_lhs = [64, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SWERVE_DISTANCE = [66, 112, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_SPONTANEOUS_CRASH_SPEED = [65, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SIDEWAYS_SWERVE_DISTANCE = [64, 192, 0, 0];

BrnTraffic::KF_VEHICLE_SAME_WAY_SWERVE_FACTOR = [62, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_INDICATOR_FLASH_TIME = [62, 76, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_INDICATOR_FLASH_TIME = [62, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MIN_HEADLIGHT_FLASH_TIME = [62, 25, 153, 154];

BrnTraffic::KF_VEHICLE_MAX_HEADLIGHT_FLASH_TIME = [62, 204, 204, 205];

BrnTraffic::KI_VEHICLE_MIN_BRAKELIGHT_DEBOUNCE = -6;

BrnTraffic::KF_VEHICLE_REACT_TO_PLAYER_CONE_BACK_BIAS = [64, 192, 0, 0];

BrnTraffic::KF_VEHICLE_REACT_TO_PLAYER_CONE_LENGTH = [66, 152, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_REACT_TO_PLAYER_SPEED = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DISTANCE_TO_MOVE_lhs = [62, 204, 204, 205];

BrnTraffic::KF_VEHICLE_STOPLINE_SIDE_SPACE_lhs = [63, 102, 102, 102];

BrnTraffic::KF_VEHICLE_STOPLINE_SIDE_VARIATION_lhs = [62, 128, 0, 0];

BrnTraffic::KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT = [65, 112, 0, 0];

BrnTraffic::KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT_SHOWTIME = [66, 32, 0, 0];

BrnTraffic::KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_SCALE = [61, 143, 92, 41];

BrnTraffic::KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_DECAY = [63, 51, 51, 51];

BrnTraffic::KF_VEHICLE_PHYSICAL_STEERING_SCALE = [63, 128, 0, 0];

BrnTraffic::KF_VEHICLE_PHYSICAL_STEERING_IF_RISK = [63, 166, 102, 102];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_SLAM_RECOVERY = [63, 192, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_COS_ANGLE_FOR_SLAM_RECOVERY = [63, 122, 225, 72];

BrnTraffic::KF_VEHICLE_MAX_DIST_TO_RECOVER_FROM_SLAM = [65, 240, 0, 0];

BrnTraffic::KF_VEHICLE_FLIPOUT_AND_SPINOUT_AIRRAMMAG_SCALE = [63, 25, 153, 154];

BrnTraffic::KF_VEHICLE_TIME_TO_STEER_FROM_SLAM = [64, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_TIME_FOR_RECOVERY = [64, 160, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_CLEANUP = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_TIME_FOR_REINSERTION = [65, 112, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_REINSERTION = [65, 32, 0, 0];

BrnTraffic::KF_VEHICLE_ROLL_FACTOR_lhs = [189, 204, 204, 205];

BrnTraffic::KF_VEHICLE_ROLL_FILTER_lhs = [67, 180, 0, 0];

BrnTraffic::KF_VEHICLE_PITCH_RECIP_MAX_DECEL_lhs = [62, 76, 204, 205];

BrnTraffic::KF_VEHICLE_PITCH_SCALE_lhs = [61, 76, 204, 205];

BrnTraffic::KF_VEHICLE_PITCH_DAMPING_FACTOR_lhs = [63, 115, 51, 51];

BrnTraffic::KF_APPROX_LANE_WIDTH_lhs = [64, 144, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_DIST_FROM_LANE_CENTRE_lhs = [63, 166, 102, 102];

BrnTraffic::KF_RIVAL_MAX_DIST_TO_LANE = [65, 112, 0, 0];

BrnTraffic::KF_RIVAL_MIN_COS_ANGLE_TO_LANE_DIR = [63, 76, 204, 205];

BrnTraffic::KF_VEHICLE_TIME_FOR_NEW_SWERVE = [63, 0, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_CHANGE_SWERVE_DIRECTION_TIME = [61, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_CHANGE_SWERVE_DIRECTION_TIME = [63, 128, 0, 0];

BrnTraffic::KF_BULB_WARMTH_DELTA_PER_SECOND = [69, 156, 64, 0];

BrnTraffic::KF_STOP_LINE_REACTION_DISTANCE = [66, 32, 0, 0];

BrnTraffic::KF_LANE_CHANGE_DICE_ROLL_SCALE = [64, 160, 0, 0];

BrnTraffic::KF_RENDER_CULL_DISTANCE = [67, 122, 0, 0];

BrnTraffic::KF_RENDER_CULL_CORONA_DISTANCE = [67, 250, 0, 0];

BrnTraffic::KF_CORONA_SCALE_DIST_AT_ONE = [65, 0, 0, 0];

BrnTraffic::KF_CORONA_SCALE_DIST_AT_TWO = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SWERVE_DISTANCE_SQ = [69, 97, 0, 0];

BrnTraffic::KF_RENDER_CULL_DISTANCE_SQ = [71, 116, 36, 0];

BrnTraffic::KF_RENDER_CULL_CORONA_DISTANCE_SQ = [72, 116, 36, 0];

BrnTraffic::KF_VEHICLE_PARTIAL_UPDATE_DISTANCE_SQ = [70, 175, 200, 0];

BrnTraffic::KF_VEHICLE_AVOIDABILITY_RADIUS = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_DEFAULT = [63, 0, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_THRESHOLD = [63, 128, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_DEFAULT = [63, 76, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_EVENTS = [62, 76, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_EVENTS = [63, 192, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_TRAFFIC = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_RACECAR = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_PLAYER = [66, 200, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_RANGE_MIN = [65, 32, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_RANGE_MAX = [66, 200, 0, 0];

BrnTraffic::KF_CRASHSLIDER_HOLLYWOOD_ACTION_THRESHOLD = [60, 35, 215, 10];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME = [61, 204, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME = [63, 192, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME_SPIKE = [0, 0, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME_SPIKE = [65, 32, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MIN = [65, 240, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MAX = [66, 52, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_TIME_AFTER_SPIKE_RELEVEL = [64, 160, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_SPIKE_AFTER_MISBOUNCE_TIME = [64, 64, 0, 0];

BrnTraffic::KF_VEHICLE_NOT_DRIVING_SO_SHOULD_GET_CLEARED_TIME = [65, 32, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_MIN_THRESHOLD_TO_WHACK = [63, 128, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_WHACK_HIM_CHANCE = [64, 160, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_WHACK_HIM_TIMER = [64, 160, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_CLEAR_TRAFFIC_TIME = [65, 240, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_HEIGHT = [68, 122, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS_IN_DRIVE_THRU = [67, 122, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP = [66, 180, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP_MIN_DISTSQ = [70, 28, 64, 0];

BrnTraffic::KE_TRAFFIC_PERFMON_PAGE = 2;

BrnProgression::KF_PLAYER_BOOST_THRESHOLD = [65, 160, 0, 0];

BrnProgression::KF_PLAYERSTAT_OVERDRIVE_EARNER = [67, 250, 0, 0];

BrnProgression::KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX = [66, 112, 0, 0];

BrnProgression::KF_PLAYER_STAT_TEMPORARY_ACCELERATOR = [65, 32, 0, 0];

BrnNetwork::KF_NETWORK_TIME_ACCURACY = [58, 218, 116, 14];

BrnNetwork::KF_NETWORK_DISTANCE_ACCURACY = [59, 163, 215, 10];

BrnStreetData::KI_INTERSTATE_EXIT_ROAD_INDEX = -2;

BrnGui::KF_TIME_TO_DELAY_SHOWING_ICON = [63, 192, 0, 0];

BrnGui::KF_SHOWTIME_MESSAGE_TIME_TO_LIVE = [64, 64, 0, 0];

BrnGui::KF_MIN_TIME_FOR_GUI_RACE_POSITION_UPDATE = [63, 128, 0, 0];

BrnGui::KF_CRASH_SCORE_SLIDE_SPEED = [61, 35, 215, 10];

BrnGui::KF_CRASH_SCORE_SLIDE_SPEED_MINIMUM = [65, 32, 0, 0];

BrnGui::KF_TIME_FOR_DISPLAYING_EA_TRAX_SECS = [64, 128, 0, 0];

BrnGui::KF_TIME_FOR_DISPLAYING_POPUP_SECS = [64, 64, 0, 0];

BrnGui::KF_TIME_BETWEEN_POPUPS_SECS = [63, 192, 0, 0];

CgsSound::Playback::K_MIN_RESERVED_IDENT = -16;

CgsSound::Playback::K_INIT_SND9_SUBMIX_IDENT = -16;

Attrib::key_default = -2887443745685561006;

Attrib::h64_default = -2887443745685561006;

Attrib::Hash::debrisparams::Burst_CameraDirectedBurstProbability = -4911020043565991649;

Attrib::Hash::debrisparams::Burst_EmissionAngleVariance = -7672718436091033875;

Attrib::Hash::debrisparams::Burst_MaximumPercentage = -4045720663554568892;

Attrib::Hash::debrisparams::Burst_MidPointEmissionSpeed = -2388339733728337238;

Attrib::Hash::debrisparams::Burst_MidPointPercentage = -6093098408262815203;

Attrib::Hash::debrisparams::Burst_NumParticles_Coloured = -1120747857703290747;

Attrib::Hash::debrisparams::Burst_NumParticles_HighDetail = -8797829737603133935;

Attrib::Hash::debrisparams::Burst_NumParticles_Shiny = -2097299715269661146;

Attrib::Hash::debrisparams::Burst_ParticleSizeMax_Coloured = -3250550009145791469;

Attrib::Hash::debrisparams::Burst_ParticleSizeMax_Dark = -1303149371335787807;

Attrib::Hash::debrisparams::Burst_ParticleSizeMax_HighDetail = -2112811013008378960;

Attrib::Hash::debrisparams::Burst_ParticleSizeMax_Shiny = -7404559354884103995;

Attrib::Hash::debrisparams::Burst_ParticleSizeMin_Coloured = -6589561312631380998;

Attrib::Hash::debrisparams::Burst_ParticleSizeMin_HighDetail = -1036632279311570142;

Attrib::Hash::debrisparams::Burst_VelocityMin = -6514586815391291054;

Attrib::Hash::debrisparams::EmitterHalfExtents = -7728054833146959017;

Attrib::Hash::debrisparams::Trail_EmissionThreshold_Dark = -6557622440413492218;

Attrib::Hash::debrisparams::Trail_EmissionThreshold_GlassChunk = -7044734835905075578;

Attrib::Hash::debrisparams::Trail_EmissionThreshold_HighDetail = -4321421017727861513;

Attrib::Hash::debrisparams::Trail_MasterEmissionRate_HighDetail = -1066284894708561365;

Attrib::Hash::debrisparams::Trail_MasterEmissionRate_Shiny = -3177573945560636980;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_Dark = -3104049988774297466;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_GlassChunk = -1130302925735451789;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_HighDetail = -2181416400992529396;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_Shiny = -3160118430803200590;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_Smoke = -50646744464768722;

Attrib::Hash::debrisparams::Trail_ParticleSizeMin_GlassChunk = -1113091167386479757;

Attrib::Hash::debrisparams::Trail_ParticleSizeMin_HighDetail = -3637246564704219172;

Attrib::Hash::debrisparams::Trail_VelocityMin = -2399476863096052342;

Attrib::Hash::nativeparticleparams::DragDuration = -5041530831918900097;

Attrib::Hash::nativeparticleparams::EndColour = -8627483912619234383;

Attrib::Hash::nativeparticleparams::EndSize = -8619726482830642788;

Attrib::Hash::nativeparticleparams::FarClip = -5692632252225236236;

Attrib::Hash::nativeparticleparams::LifeTime = -1608884447590013666;

Attrib::Hash::nativeparticleparams::LightingMin = -3106857269163792920;

Attrib::Hash::nativeparticleparams::MidColour = -6822591414946377124;

Attrib::Hash::nativeparticleparams::MidSize = -926488105834939848;

Attrib::Hash::nativeparticleparams::StartColour = -4735521137697763443;

Attrib::Hash::cameradefaults::ImpactShakeDecayRate = -7687775437294225719;

Attrib::Hash::cameradefaults::ImpactShakeScale = -842583479824379615;

Attrib::Hash::cameradefaults::ImpactShakeType = -5456835001829100036;

Attrib::Hash::cameradefaults::SpeedShakeThreshold = -2676194790771603092;

Attrib::Hash::cameradefaults::SpeedShakeType = -7084916540873237413;

Attrib::Hash::iceanim::Guid = -7097409704044230467;

Attrib::Hash::aftertouchcam::MaxDistance = -8557505899279475338;

Attrib::Hash::aftertouchcam::MinHeight = -4927329763252819482;

Attrib::Hash::aftertouchcam::Pitch = -4570886707007131269;

Attrib::Hash::cameraexternalbehaviour::BoostFieldOfView = -3982979552416833250;

Attrib::Hash::cameraexternalbehaviour::PivotLength = -5488398596126602666;

Attrib::Hash::cameraexternalbehaviour::TiltCameraScale = -2098857104130072476;

Attrib::Hash::cameraexternalbehaviour::ZAndTiltCutoffSpeedMPH = -4276768861718081255;

Attrib::Hash::camerabumperbehaviour::AccelerationResponse = -4777123151109968498;

Attrib::Hash::camerabumperbehaviour::BodyPitchScale = -6812158392904343490;

Attrib::Hash::camerabumperbehaviour::BoostFieldOfView = -3982979552416833250;

Attrib::Hash::camerabumperbehaviour::RollSpring = -2603261772359457364;

Attrib::Hash::camerabumperbehaviour::ZOffset = -2031833194172202669;

Attrib::Hash::physicsvehicledriftattribs::DriftAngularDamping = -7987274848054600901;

Attrib::Hash::physicsvehicledriftattribs::DriftMaxAngle = -2994767941176318032;

Attrib::Hash::physicsvehicledriftattribs::DriftSidewaysDamping = -2483459419315854033;

Attrib::Hash::physicsvehicledriftattribs::ForcedDriftStartSlip = -6912247002206191947;

Attrib::Hash::physicsvehicledriftattribs::ForcedDriftTimeToReachBaseSlip = -6629571209366667655;

Attrib::Hash::physicsvehicledriftattribs::GasDriftScaleFactor = -4333709530778156113;

Attrib::Hash::physicsvehicledriftattribs::GripFromBrake = -2382352998964909567;

Attrib::Hash::physicsvehicledriftattribs::GripFromGasLetOff = -639186851837051004;

Attrib::Hash::physicsvehicledriftattribs::InitialDriftPushBaseInc = -1687458581941323946;

Attrib::Hash::physicsvehicledriftattribs::InitialDriftPushTime = -2635178875663518084;

Attrib::Hash::physicsvehicledriftattribs::NaturalDriftScaleDecay = -701798028399705032;

Attrib::Hash::physicsvehicledriftattribs::NaturalYawTorque = -30919134522791338;

Attrib::Hash::physicsvehicledriftattribs::NaturalYawTorqueCutOffAngle = -327284094809810262;

Attrib::Hash::physicsvehicledriftattribs::NeutralTimeToReduceDrift = -1265753866060659382;

Attrib::Hash::physicsvehicledriftattribs::SideForceDirftScaleCutOff = -3301564056552839641;

Attrib::Hash::physicsvehicledriftattribs::SideForceDriftAngleCutOff = -2437558699454416996;

Attrib::Hash::physicsvehicledriftattribs::SideForceDriftSpeedCutOff = -7527846554673069815;

Attrib::Hash::physicsvehicledriftattribs::SideForcePeakDriftAngle = -1859027027580878885;

Attrib::Hash::physicsvehicledriftattribs::TimeForNaturalDrift = -2192670478953321175;

Attrib::Hash::physicsvehiclebodyrollattribs::FactorOfWeightX = -8854577714803822838;

Attrib::Hash::physicsvehiclebodyrollattribs::FactorOfWeightZ = -2898700536974267796;

Attrib::Hash::physicsvehiclebodyrollattribs::PitchSpringDampening = -2769872210820837534;

Attrib::Hash::physicsvehiclebodyrollattribs::RollSpringDampening = -8279220931350705981;

Attrib::Hash::physicsvehiclebodyrollattribs::WeightTransferDecayZ = -8641409400008704383;

Attrib::Hash::physicsvehiclesuspensionattribs::InAirDamping = -4391887702944398535;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxPitchDampingOnLanding = -5239064295522386902;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxRollDampingOnLanding = -2189969058134543695;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxVertVelocityDampingOnLanding = -7578424394703509952;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxYawDampingOnLanding = -9159666339184342346;

Attrib::Hash::physicsvehiclesteeringattribs::AiPidCoefficientDriftI = -2790084423631939863;

Attrib::Hash::physicsvehiclesteeringattribs::AiPidCoefficientP = -5300428111701324124;

Attrib::Hash::physicsvehiclesteeringattribs::SpeedForMaxAngle = -5882573263584155911;

Attrib::Hash::physicsvehiclesteeringattribs::SpeedForMinAngle = -703227396336610229;

Attrib::Hash::physicsvehiclesteeringattribs::StraightReactionBias = -153043821033732338;

Attrib::Hash::physicsvehicleengineattribs::Differential = -1187171424841002758;

Attrib::Hash::physicsvehicleengineattribs::EngineBraking = -7261967632121772986;

Attrib::Hash::physicsvehicleengineattribs::EngineLowEndTorqueFactor = -2588301351876699819;

Attrib::Hash::physicsvehicleengineattribs::FlyWheelInertia = -8061433635503997159;

Attrib::Hash::physicsvehicleengineattribs::GearRatios1 = -2125503289046983800;

Attrib::Hash::physicsvehicleengineattribs::GearRatios2 = -1019379010385919379;

Attrib::Hash::physicsvehicleengineattribs::GearUpRPMs1 = -8165513262891634271;

Attrib::Hash::physicsvehicleengineattribs::GearUpRPMs2 = -1326377965340261792;

Attrib::Hash::physicsvehicleengineattribs::MaxTorque = -4687445904566254869;

Attrib::Hash::physicsvehicleengineattribs::TorqueScales2 = -4818449724105158753;

Attrib::Hash::physicsvehicleengineattribs::TransmissionEfficiency = -2275951549147437131;

Attrib::Hash::physicsvehiclecollisionattribs::BodyBox = -7996561706975887698;

Attrib::Hash::physicsvehicleboostattribs::BlueBoostBase = -4153969524460304374;

Attrib::Hash::physicsvehicleboostattribs::BlueBoostKick = -6909139712711029827;

Attrib::Hash::physicsvehicleboostattribs::BlueMaxBoostSpeed = -2832201897230299495;

Attrib::Hash::physicsvehicleboostattribs::BoostBase = -1449587645724428634;

Attrib::Hash::physicsvehicleboostattribs::BoostKick = -7916157251067609346;

Attrib::Hash::physicsvehicleboostattribs::BoostKickHeightOffset = -7644159426826663967;

Attrib::Hash::physicsvehicleboostattribs::BoostKickMaxStartSpeed = -6769221666331370883;

Attrib::Hash::physicsvehicleboostattribs::BoostKickTime = -2762519771875884640;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleBaseAttribs = -3240169895484535073;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleBodyRollAttribs = -4714783353325512142;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleDriftAttribs = -1740125582048760770;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleEngineAttribs = -3611665628868408173;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleSteeringAttribs = -3941675927247818081;

Attrib::Hash::burnoutcarasset::CameraBumperBehaviourAsset = -2996460651824973746;

Attrib::Hash::burnoutcarasset::CarUnlockShot = -3361774045014665585;

Attrib::Hash::burnoutcarasset::DefaultWheel = -5763545711493309811;

Attrib::Hash::burnoutcarasset::EngineEntityKey = -8286362179805877589;

Attrib::Hash::burnoutcarasset::GameplayAsset = -4159014215320274250;

Attrib::Hash::burnoutcarasset::GraphicsAsset = -2452633230673053972;

Attrib::Hash::burnoutcarasset::MasterSceneMayaBinaryFile = -4033406791020503385;

Attrib::Hash::burnoutcarasset::SoundEngineAsset = -3616434373283268524;

Attrib::Hash::burnoutcarasset::SoundExhaustAsset = -6601183205448776399;

Attrib::Hash::physicsvehiclebaseattribs::AngularDrag = -2587998968637529485;

Attrib::Hash::physicsvehiclebaseattribs::BrakeScaleToFactor = -6724323949230824050;

Attrib::Hash::physicsvehiclebaseattribs::DownForceZOffset = -7435943572713341390;

Attrib::Hash::physicsvehiclebaseattribs::DriveTimeDeformLimitNegY = -3280670874417285740;

Attrib::Hash::physicsvehiclebaseattribs::DriveTimeDeformLimitPosZ = -1666416025769953155;

Attrib::Hash::physicsvehiclebaseattribs::DrivingMass = -3787790934024483857;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurveFloorSlipRatio = -1630393006643118008;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurvePeakCoefficient = -5067077354339468201;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurvePeakSlipRatio = -4731126951183549001;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireAdhesiveLimit = -1286355289157071958;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireDynamicFrictionCoefficient = -6349451596478070934;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireLongForceBias = -1377722699248955594;

Attrib::Hash::physicsvehiclebaseattribs::FrontWheelMass = -6833821662839661425;

Attrib::Hash::physicsvehiclebaseattribs::HighSpeedAngularDamping = -8330303592681147153;

Attrib::Hash::physicsvehiclebaseattribs::LinearDrag = -8487842249909718459;

Attrib::Hash::physicsvehiclebaseattribs::LockBrakeScale = -4714331935212091080;

Attrib::Hash::physicsvehiclebaseattribs::MagicBrakeFactorStraightLine = -2858441074664930156;

Attrib::Hash::physicsvehiclebaseattribs::MagicBrakeFactorTurning = -897565922227798600;

Attrib::Hash::physicsvehiclebaseattribs::PitchDampingOnTakeOff = -5137150473961999634;

Attrib::Hash::physicsvehiclebaseattribs::PowerToFront = -8388318914847005089;

Attrib::Hash::physicsvehiclebaseattribs::RearLatGripCurvePeakCoefficient = -753131893419114293;

Attrib::Hash::physicsvehiclebaseattribs::RearLatGripCurvePeakSlipRatio = -7653661541150633661;

Attrib::Hash::physicsvehiclebaseattribs::RearLongGripCurvePeakCoefficient = -412225798706036160;

Attrib::Hash::physicsvehiclebaseattribs::RearTireAdhesiveLimit = -9041112529150658;

Attrib::Hash::physicsvehiclebaseattribs::RearTireDynamicFrictionCoefficient = -5724009369781865567;

Attrib::Hash::physicsvehiclebaseattribs::RearTireLongForceBias = -8694020640479969529;

Attrib::Hash::physicsvehiclebaseattribs::RearWheelMass = -1977907534454313347;

Attrib::Hash::physicsvehiclebaseattribs::SurfaceFrontGripFactor = -179166364723212449;

Attrib::Hash::physicsvehiclebaseattribs::SurfaceRoughnessFactor = -2535698590537951711;

Attrib::Hash::physicsvehiclebaseattribs::TractionLineLength = -3299690291498919306;

Attrib::Hash::physicsvehiclebaseattribs::YawDampingOnTakeOff = -1675471727477182158;

Attrib::ClassName::physicsvehiclebaseattribs = -604515486933319770;

Attrib::ClassName::physicsvehiclehandling = -7610765364513722643;

Attrib::ClassName::physicsvehicleboostattribs = -1522656162225671394;

Attrib::ClassName::physicsvehiclecollisionattribs = -2335842357891624052;

Attrib::ClassName::physicsvehicleengineattribs = -553898650669114478;

Attrib::ClassName::camerabumperbehaviour = -872580195161256039;

Attrib::ClassName::cameraexternalbehaviour = -1590435079418921852;

BrnWorld::KI_INVALID_OPPONENT = -1;

BrnWorld::KI_INVALID_RIVAL = -1;

BrnWorld::KF_AI_INACTIVE_DISTANCE_BIAS = [65, 240, 0, 0];

BrnWorld::KF_INVALID_DISTANCE = [127, 127, 255, 255];

BrnWorld::KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME = [64, 0, 0, 0];

BrnWorld::KI_INVALID_CAR_COLOUR = -1;

BrnWorld::KI_INVALID_CAR_COLOUR_PALETTE = -1;

BrnWorld::KE_RACEECAR_PERFMON_PAGE = 12;

BrnWorld::KF_MIN_SPEED_FOR_AIR_MPH = [64, 0, 0, 0];

BrnWorld::KU_COLLISION_MASK_TOP_BIT = -32768;

BrnWorld::KF_POWER_PARK_NEARBY_RADIUS = [65, 112, 0, 0];

BrnWorld::KF_INFORMATION_REMEMBER_TIME_GENERAL = [63, 0, 0, 0];

BrnWorld::KF_INFORMATION_REMEMBER_TIME_TAKEDOWNS = [65, 32, 0, 0];

CgsNetwork::K_INVALID_PLAYER_ID = -1;

CgsNetwork::KU16_MAX_FRAMES = -2;

CgsNetwork::KU8_INVALID_GAME_ID = -1;

CgsNetwork::KI8_INVALID_TYPE = -1;

CgsNetwork::KU16_INVALID_FRAME = -1;

CgsNetwork::KU16_HALF_OF_FRAMES = -32768;

CgsNetwork::KU_INVALID_FRAME = -1;

CgsNetwork::KU_HALF_OF_FRAMES = -2147483648;

CgsNetwork::KI_MAX_UINT32 = -1;

CgsNetwork::KI_MIN_INT32 = -2147483648;

CgsNetwork::KI_MIN_PLAYER_ID = -1;

CgsNetwork::KF_DEFAULT_MIN_TIME = [0, 0, 0, 0];

CgsNetwork::KF_DEFAULT_MAX_TIME = [72, 125, 32, 0];

CgsNetwork::KF_DEFAULT_MAX_TIME_ERROR = [60, 163, 215, 10];

CgsUnicode::KU_TRAILING_BYTE_MASK = -64;

CgsUnicode::KU_TRAILING_BYTE = -128;

CgsUnicode::KU_SINGLE_BYTE_CHAR_MASK = -128;

CgsUnicode::KU_TWO_BYTE_CHAR_MASK = -32;

CgsUnicode::KU_TWO_BYTE_CHAR = -64;

CgsUnicode::KU_THREE_BYTE_CHAR_MASK = -16;

CgsUnicode::KU_THREE_BYTE_CHAR = -32;

CgsUnicode::KU_FOUR_BYTE_CHAR_MASK = -8;

CgsUnicode::KU_FOUR_BYTE_CHAR = -16;

CgsGraphics::DefaultValues::mkDefault_float_t = [0, 0, 0, 0];

CgsGraphics::DefaultValues::mkDefault_double_t = [0, 0, 0, 0, 0, 0, 0, 0];

CgsFileSystem::KU_INVALID_FILE_ID = -1;

BrnParticle::kfNumberOfSecondsInTenYears = [77, 150, 96, 24];

CgsContainers::kxDictFlag_DuplicateDataReference = -2147483648;

CgsContainers::KI_DICTIONARY_INVALID_KEY = -1;

renderengine::PS3PIXELFORMAT_REMAP_MASK = -32768;

renderengine::PS3PIXELFORMAT_REMAPORDER_MASK = -2147483648;

renderengine::PS3VERTEXTYPE_NA = -1;

CgsDev::PI = [64, 73, 15, 219];

CgsDev::KC_DEBUG_CHARACTER_SQUARE = -128;

CgsDev::KC_DEBUG_CHARACTER_CROSS = -127;

CgsDev::KC_DEBUG_CHARACTER_CIRCLE = -126;

CgsDev::KC_DEBUG_CHARACTER_UP = -125;

CgsDev::KC_DEBUG_CHARACTER_DOWN = -124;

CgsDev::KC_DEBUG_CHARACTER_LEFT = -123;

CgsDev::KC_DEBUG_CHARACTER_RIGHT = -122;

CgsDev::KC_DEBUG_CHARACTER_DEBUG = -121;

CgsDev::WarningSystem::Discipline::ALL = -1;

CgsDev::WarningSystem::Discipline::SOUND_DESIGN = -2147483648;

CgsDev::WarningSystem::Discipline::SOUND_ALL = -2147483648;

CgsDev::Message::ALL = -1;

EA::Thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

EA::Thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

EA::Thread::kThreadPriorityUnknown = -2147483648;

EA::Thread::kThreadPriorityMin = -128;

EA::Thread::kProcessorDefault = -1;

EA::Thread::kProcessorAny = -2;

rw::audio::core::PRIORITY_PERMANENT = [66, 200, 0, 0];

rw::audio::core::PI = [64, 73, 15, 219];

rw::audio::core::CPU_CLOCK_MULTIPLIER = [66, 32, 0, 0];

rw::audio::core::PROCESSINGSTAGE_MASTERINGVOICE = -1;

rw::audio::core::DECIBEL_MIN = [196, 122, 0, 0];

rw::audio::core::LINEARGAIN_MIN = [0, 0, 0, 0];

rw::audio::core::CENTS_MIN = [199, 195, 80, 0];

rw::audio::core::LINEARPITCH_MIN = [21, 141, 145, 46];

rw::audio::core::PITCHLINEARTOCENTSCONST = [69, 121, 37, 5];

rw::audio::core::CODAERR_NOT_READY = -1;

rw::audio::core::CODAERR_UNSUPPORTED = -2;

rw::audio::core::EAXMA_HEADER_BLOCKSIZE_BITMASK = -4;

rw::datacontainer::DEFAULTBATCHSIZE = -2147483648;

rw::math::fpu::TOP_BIT32 = -2147483648;

rw::math::fpu::NOT_TOP_BIT32 = 2147483647;

rw::math::fpu::TOP_BIT64 = -9223372036854775808;

rw::math::fpu::MIN_INT32 = -2147483648;

rw::math::fpu::MIN_FLOAT = [0, 128, 0, 0];

rw::math::fpu::MAX_FLOAT = [127, 127, 255, 255];

rw::math::fpu::SMALL_FLOAT = [55, 128, 0, 0];

rw::math::fpu::DEGREES_TO_RADIANS = [60, 142, 250, 53];

rw::math::fpu::RADIANS_TO_DEGREES = [66, 101, 46, 225];

rw::math::fpu::E = [64, 45, 248, 84];

rw::math::fpu::PI = [64, 73, 15, 219];

rw::math::fpu::HALF_PI = [63, 201, 15, 219];

rw::math::fpu::QUARTER_PI = [63, 73, 15, 219];

rw::math::fpu::SQRT_PI = [63, 226, 223, 197];

rw::math::fpu::INV_PI = [62, 162, 249, 131];

rw::math::fpu::SQRT_2 = [63, 181, 4, 243];

rw::math::fpu::SQRT_HALF = [63, 53, 4, 243];

rw::math::fpu::SQRT_3 = [63, 221, 179, 215];

rw::math::fpu::ZERO_FLOAT = [0, 0, 0, 0];

rw::math::fpu::VECTOR_MIN_SLERP_ANGLE = [61, 178, 184, 195];

rw::math::fpu::MATRIX_MIN_SLERP_ANGLE = [61, 14, 250, 53];

rw::math::fpu::QUATERNION_SLERP_DOT_TOLERANCE = [63, 127, 190, 119];

rw::math::fpu::MINIMUM_RECIPROCAL = [0, 32, 0, 0];

rw::math::fpu::ONE_MINUS_EPSILON = [63, 127, 255, 254];

rw::math::fpu::TOLERANCE = [58, 131, 18, 111];

rw::collision::krGPFeatureSimplificationThreshold = [61, 76, 204, 205];

rw::collision::krGPMinimumAllowedClippingAngle = [58, 131, 18, 111];

rw::core::thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

rw::core::thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

rw::core::thread::kThreadPriorityUnknown = -2147483648;

rw::core::thread::kThreadPriorityMin = -128;

rw::core::thread::kProcessorDefault = -1;

rw::core::thread::kProcessorAny = -2;

BrnGui::OnlineTimeoutComponent::KU_SAFERED;

BrnGui::OnlineTimeoutComponent::KU_SAFEGREEN;

BrnGui::OnlineTimeoutComponent::KU_SAFEBLUE;

BrnGui::OnlineTimeoutComponent::KU_DANGERRED;

BrnGui::OnlineTimeoutComponent::KU_DANGERGREEN;

BrnGui::OnlineTimeoutComponent::KU_DANGERBLUE;

BrnGui::GuiNetworkRouteInfo::KI_NUM_COMPONENTS_TO_LOAD;

BrnGui::SelectRoutes::KI_NUM_DISPLAYABLE_CHECKPOINTS;

BrnGui::CarouselSliderBar::KI_NUM_VISIBLE_ITEMS;

