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

// Declaration
struct LoadingScriptedState {
	// BrnGameMainFlowStates.h:81
	enum ELoadingStateStage {
		E_LOADINGSTATESTAGE_START = 0,
		E_LOADINGSTATESTAGE_SOUND_AGAIN = 1,
		E_LOADINGSTATESTAGE_EFFECTS = 2,
		E_LOADINGSTATESTAGE_WORLD = 3,
		E_LOADINGSTATESTAGE_SOUND_BINDPROPS = 4,
		E_LOADINGSTATESTAGE_WORLD_COLLISION = 5,
		E_LOADINGSTATESTAGE_DONE = 6,
		E_LOADINGSTATE_NUM = 7,
	}

}

struct SpliceSample;

void CgsDev::StrStreamBase::StrStreamBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStream::StrStream(char *  lpcCharBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStream::StrStream(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::StrStreamBase(/* parameters */);
}

void CgsDev::StrStreamBase::operator<<(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::IsBitSet(None, None) {
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

void CgsNetwork::ServerInterfaceGameParamsBase::SetRankedGame(bool  lbIsRanked) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceDirtySock::GetComponent(CgsNetwork::EComponents  leComponent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceDirtySock::GetComponent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Object::~Object() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Object::~Object(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Content::DoOnPostLoad() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Content::DoOnPreUnload() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Content::DoDispose() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsContent.h:484
		const CgsSound::Playback::Factory & lFactory;

	}
}

void BrnGui::Selectable::ClearFlag(BrnGui::Selectable::StateFlags  lxFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ClearFlag(/* parameters */);
}

void BrnGui::MenuItem::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TableCell::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TableRow::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::OnPlayerInShortCut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::FillInGameModeSpecificResults(const ScoringSystem *  lpScoringSystem, FinishedModeAction *  lpFinishedModeActionOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::HandleGameEvents(const CgsModule::Event *  lpEvent, int32_t  liEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::HasTimedIntro() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::ShouldCountdownEnd() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::GetOutroTimeout() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::GetGlobalRivalToShow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::GetActiveRivalToShow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::HasLoadingScreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::OnPlayerUsesPaintShop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CrashMode::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CrashMode::GetIntroDurationSeconds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CrashMode::RequiresStreaming() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineShowtimeMode::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineShowtimeMode::GetIntroDurationSeconds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineShowtimeMode::RequiresStreaming() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::ClearCachedNetworkPlayerIDsAtGameEnd() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.cpp:550
		int32_t liIndex;

	}
}

void BrnNetwork::SetServerType(CgsNetwork::EServerType  type) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GetServerType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::GameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::PreviousGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::PreparePattern() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::WebcamPS3::GetCameraStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::InfiniteBoost() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::VehicleLevelLimit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::Security() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::NumberRounds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::IsTrafficOn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::IsTrafficCheckingOn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::NumRunnerCrashes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::BoostType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::VehicleChoice() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::TimeLimit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceGameParamsBase::GetNumberOfPlayers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::GetPlayerParams(int32_t  liPlayerIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::OnRoundFinish() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::OnRoundLoadingStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayer.cpp:404
		int32_t liIndex;

	}
}

void BrnNetwork::BrnNetworkPlayer::SendCollectableDone(CgsID  lID, BrnNetwork::CollectableMessage::ECollectableType  leType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::SendNewBurnoutSkillzData(const BurnoutSkillzData *  lpBurnoutSkillzData, bool  lbInitialData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkPlayer::GetPlayerID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::_CarSelectMessageArrivedCallback(CgsNetwork::ReliableMessage *  lpMessage, RoadRulesRecvData::NetworkPlayerID  lSendingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayer.cpp:1980
		BrnNetwork::BrnNetworkPlayer * lpNetPlayer;

		// BrnNetworkPlayer.cpp:1981
		BrnNetwork::CarSelectMessage * lpCarSelectMessage;

		// BrnNetworkPlayer.cpp:1982
		PlayerMenuData * lpMenuData;

		// BrnNetworkPlayer.cpp:1983
		CgsID lCarId;

		// BrnNetworkPlayer.cpp:1984
		CgsID lWheelId;

		// BrnNetworkPlayer.cpp:1985
		uint16_t lu16CarColourIndex;

		// BrnNetworkPlayer.cpp:1986
		uint16_t lu16CarPaintFinishIndex;

		// BrnNetworkPlayer.cpp:1987
		bool lbFinalSelection;

	}
}

void BrnNetwork::BrnNetworkPlayer::_CarSelectMessageDeliveredCallback(bool  lbSuccess, bool  lbFakeNack, CgsNetwork::SignalMessage *  lpAck, RoadRulesRecvData::NetworkPlayerID  lRecvingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::_CollectableMessageDeliveredCallback(bool  lbSuccess, bool  lbFakeNack, CgsNetwork::SignalMessage *  lpAck, RoadRulesRecvData::NetworkPlayerID  lRecvingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::_BurningHomeRunSwitchRunnerMessageDeliveredCallback(bool  lbSuccess, bool  lbFakeNack, CgsNetwork::SignalMessage *  lpAck, RoadRulesRecvData::NetworkPlayerID  lRecvingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::_BurnoutSkillzMessageDeliveredCallback(bool  lbSuccess, bool  lbFakeNack, CgsNetwork::SignalMessage *  lpAck, RoadRulesRecvData::NetworkPlayerID  lRecvingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::_ShowtimeSwitchMessageDeliveredCallback(bool  lbSuccess, bool  lbFakeNack, CgsNetwork::SignalMessage *  lpAck, RoadRulesRecvData::NetworkPlayerID  lRecvingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::_FreeburnChallengeMessageDeliveredCallback(bool  lbSuccess, bool  lbFakeNack, CgsNetwork::SignalMessage *  lpAck, RoadRulesRecvData::NetworkPlayerID  lRecvingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::_ActiveFreeburnChallengeMessageDeliveredCallback(bool  lbSuccess, bool  lbFakeNack, CgsNetwork::SignalMessage *  lpAck, RoadRulesRecvData::NetworkPlayerID  lRecvingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::_FburnChallengeStatusMessageDeliveredCallback(bool  lbSuccess, bool  lbFakeNack, CgsNetwork::SignalMessage *  lpAck, RoadRulesRecvData::NetworkPlayerID  lRecvingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::_CheckpointTriggeredMessageDeliveredCallback(bool  lbSuccess, bool  lbFakeNack, CgsNetwork::SignalMessage *  lpAck, RoadRulesRecvData::NetworkPlayerID  lRecvingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GetServerIP() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GetServerPort() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ServerInterfaceDebugComponent::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ServerInterfaceDebugComponent::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ServerInterfaceCustomCommands::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceBase::Suspend(int32_t  liUpdateFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceBase::Resume() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceDownloadableConfig::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceDownloadableConfig::GetConfigDataFromConf() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceDownloadableConfig::GetConfigDataFromNews(int32_t  liRequestedIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceTelemetry::Prepare(CgsNetwork::ServerInterfaceDirtySock *  lpServerInterface, bool  lbNeedsFirstUsageBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void BrnNetwork::ServerInterfaceCustomCommands::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ServerInterfaceCustomCommands::Prepare(CgsNetwork::ServerInterfaceDirtySock *  lpServerInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ServerInterfaceCustomCommands::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ServerInterfaceCustomCommands::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceDirtySock::GetLobbyAPIRef() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ServerInterfaceCustomCommands::SendCustomCommand(BrnNetwork::ServerInterfaceCustomCommands::EAction  meNewAction, const char *  lpcMessageData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ServerInterfaceCustomCommands::GetEloOfLocalPlayer(int32_t *  lpRaceElo, int32_t *  lpBurningHomeRunElo, int32_t *  lpRoadRageElo, ServerInterfaceCustomCommands::CustomCommandCallback  lCallback, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::SerialiseFromGame(const LobbyApiPlayT *  lpGame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkGameParams.cpp:50
		int8_t liIndex;

	}
}

void BrnNetwork::GameParams::SetRagerVehicleLevelLimit(int32_t  liLevelLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::SetInfiniteBoost(bool  lbInfiniteBoost) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::SetLapsLimit(int32_t  liLapsLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::SetTimeLimit(int32_t  liTimeLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::SetNetworkVersion(int32_t  liNetworkVersion) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::SetSkillLevel(uint32_t  lunSkillLevel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::SetSecurity(BrnNetwork::EBrnGameSecurity  leSecurity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::SetTrafficCheckingOn(bool  lbTrafficCheckingOn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::SetBoostType(BrnNetwork::EBoostType  leBoostType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::SetNumRunnerCrashes(int32_t  liNumCrashes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::SetGameMode(BrnGameState::GameStateModuleIO::EGameModeType  leGameMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkGameParams.cpp:296
		int32_t liOnlineGameModeOffset;

	}
}

void BrnNetwork::GameParams::SetPreviousGameMode(BrnGameState::GameStateModuleIO::EGameModeType  leGameMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkGameParams.cpp:316
		int32_t liOnlineGameModeOffset;

	}
}

void BrnNetwork::GameParams::SetVehicleLevelLimit(int32_t  liLevelLimit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::SetTrafficOn(bool  lbTrafficOn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::SetLocality(uint32_t  luLocality) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::GetPattern() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::GetDataSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::GetData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::SetNumberRounds(int32_t  liNumRounds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::SetVehicleChoice(BrnNetwork::EVehicleChoice  leVehicleChoice) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::RagerVehicleLevelLimit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::LapsLimit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::NetworkVersion() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::SkillLevel() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::GetLocality() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameSearchParamsBase::GameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameSearchParamsBase::GameState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameSearchParamsBase::SkillLevel() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameSearchParamsBase::OpponentType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameSearchParamsBase::GetPattern() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameSearchParamsBase::GetDataSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameSearchParamsBase::GetData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameSearchParamsBase::GetCustomFlagsMask() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameSearchParamsBase::GetCustomFlagsValue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameSearchParamsBase::GetPatternLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerInfoData::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerInfoData::GetPattern() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerInfoData::GetDataSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerInfoData::GetData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::GetPattern() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::GetDataSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::GetData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::QuickJoinParams::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::QuickJoinParams::SetMatchmakingParameter(BrnNetwork::EBrnQuickJoinParameters  leParameter, int32_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::QuickJoinParams::SetMatchmakingParameter(BrnNetwork::EBrnQuickJoinParameters  leParameter, bool  lbValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameResults::ClearGameData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkGameResults.cpp:53
		int32_t liPlayerIndex;

		// BrnNetworkGameResults.cpp:54
		int32_t liRoundIndex;

	}
}

void BrnNetwork::GameResults::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameResults::GetPattern() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameResults::GetPatternLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameResults::GetDataSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameResults::GetData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::UsersetParams::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::UsersetParams::GetPattern() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::UsersetParams::GetDataSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::UsersetParams::GetData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ServerInterfaceDebugComponent::Construct(BrnNetwork::BrnServerInterfaceBase *  lpServerInterfaceBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeDebugComponent::Construct(LiveRevengeManager *  lpLiveRevengeManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeDebugComponent::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeDebugComponent::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ServerInterfaceDebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceBase::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeDebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeDebugComponent::RegisterRelationship(CommonRelationship *  lpCommonRelationship, const char *  lpcPath) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeDebugComponent::UnregisterRelationship(CommonRelationship *  lpCommonRelationship) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeDebugComponent::RemovePlayer(LiveRevengeRelationship *  lpRelationship) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeDebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeDebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeDebugComponent::UploadToServer(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeDebugComponent.cpp:300
		LiveRevengeDebugComponent * lpDebugComponent;

	}
}

void BrnNetwork::StatsDebugComponent::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::StatsDebugComponent::Prepare(CgsNetwork::ServerInterface *  lpServerInterface, NetworkPlayerStatsManager *  lpStatsManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::StatsDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::StatsDebugComponent::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::StatsDebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::StatsDebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::StatsDebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::operator++(const BrnNetwork::NetworkPlayerStats::EStatsValue &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerStats.h:218
		BrnNetwork::NetworkPlayerStats::EStatsValue leOldEnumIndex;

	}
}

void BrnNetwork::StatsDebugComponent::RemoveStats(NetworkPlayerStats *  lpStats) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStatsDebugComponent.cpp:237
		BrnNetwork::NetworkPlayerStats::EStatsValue leLoopCounter;

	}
	operator++(/* parameters */);
}

void CgsNetwork::PlayerName::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerDebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::PlayerName::Clear(/* parameters */);
}

void BrnNetwork::BuddyManagerDebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerDebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerDebugComponent::SetGameInviteBuddy(const PlayerName *  lpPlayerName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ServerInterfaceDebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ServerInterfaceDebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ServerInterfaceDebugComponent::Disconnect(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkServerInterfaceDebugComponent.cpp:174
		ServerInterfaceDebugComponent * lpServerInterfaceDebugComponent;

	}
}

void BrnNetwork::ServerInterfaceDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutScoreboardEvent::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ScoreboardDebugComponent::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkModuleIO::NetworkOutScoreboardEvent::Construct(/* parameters */);
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutScoreboardEvent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ScoreboardDebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkModuleIO::NetworkOutScoreboardEvent::Destruct(/* parameters */);
}

void BrnNetwork::ScoreboardDebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ScoreboardDebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent::GetCategories() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ScoreboardDebugComponent::GetCategories(void *  lpValue, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkScoreboardDebugComponent.cpp:176
		ScoreboardDebugComponent * lpScoreboardDebugComponent;

		// BrnNetworkScoreboardDebugComponent.cpp:178
		NetworkInSelectScoreboardEvent lEvent;

		BrnNetworkModuleIO::NetworkInSelectScoreboardEvent::GetCategories(/* parameters */);
	}
}

void BrnNetwork::ScoreboardDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent::GetIndexes(int32_t  liCategory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ScoreboardDebugComponent::GetIndexes(void *  lpValue, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkScoreboardDebugComponent.cpp:198
		ScoreboardDebugComponent * lpScoreboardDebugComponent;

		{
			// BrnNetworkScoreboardDebugComponent.cpp:202
			NetworkInSelectScoreboardEvent lEvent;

		}
	}
	BrnNetworkModuleIO::NetworkInSelectScoreboardEvent::GetIndexes(/* parameters */);
}

void BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent::GetVariations(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ScoreboardDebugComponent::GetVariations(void *  lpValue, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkScoreboardDebugComponent.cpp:225
		ScoreboardDebugComponent * lpScoreboardDebugComponent;

	}
	{
		// BrnNetworkScoreboardDebugComponent.cpp:230
		NetworkInSelectScoreboardEvent lEvent;

	}
	BrnNetworkModuleIO::NetworkInSelectScoreboardEvent::GetVariations(/* parameters */);
}

void BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent::GetScoreboard(int32_t  liVariation) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ScoreboardDebugComponent::GetScoreboard(void *  lpValue, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkScoreboardDebugComponent.cpp:253
		ScoreboardDebugComponent * lpScoreboardDebugComponent;

	}
	{
		// BrnNetworkScoreboardDebugComponent.cpp:259
		NetworkInSelectScoreboardEvent lEvent;

		BrnNetworkModuleIO::NetworkInSelectScoreboardEvent::GetScoreboard(/* parameters */);
	}
}

void BrnNetwork::RoadRulesManagerDebugComponent::Construct(NetworkRoadRulesManager *  lpRoadRulesManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::RoadRulesManagerDebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::RoadRulesManagerDebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::RoadRulesManagerDebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::RoadRulesManagerDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::RoadRulesManagerDebugComponent::RequestRoadRulesHighScores(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkRoadRulesManagerDebugComponent.cpp:139
		RoadRulesManagerDebugComponent * lpRoadRulesManagerDebugCmpt;

	}
}

void BrnNetwork::ImageManagerDebugComponent::Construct(NetworkImageManager *  lpImageManager, CgsNetwork::NetworkTextureDXTCompress *  lpTextureCompressor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ImageManagerDebugComponent::Prepare(HeapMalloc *  lpHeapMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ImageManagerDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ImageManagerDebugComponent::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ImageManagerDebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ImageManagerDebugComponent::PreWorldUpdate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ImageManagerDebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ImageManagerDebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ImageManagerDebugComponent::SetImageToEncode(const char *  lpcPixels) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ImageManagerDebugComponent::EncodeMugshotAtSelectedQuality(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ImageManagerDebugComponent::_GetCompressImageCallback(void *  lpPixels, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ImageManagerDebugComponent::_GetDecodedImageCallback(void *  lpPixels, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerMenuData::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfacePS3::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfacePS3::Suspend(int32_t  liUpdateFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfacePS3::Resume() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkTexture::GetTexture() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkTexture::GetTextureSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkTexture::GetWidth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkTexture::GetHeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkTexture::GetFormat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkTexture::IsUncompressedYUV() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Construct(DirtyTrickEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::SetEventPointer(DirtyTrickEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnNetwork::RoadRulesDownloadEvent,40>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::Construct(RoadRulesDownloadEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::SetEventPointer(RoadRulesDownloadEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnNetwork::RoadRulesMessageData,40>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::Construct(RoadRulesMessageData *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::SetEventPointer(RoadRulesMessageData *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnNetwork::RoadRulesRecvData,14>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::Construct(RoadRulesRecvData *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::SetEventPointer(RoadRulesRecvData *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData,7>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::Construct(CompletedFburnChallengesData *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::SetEventPointer(CompletedFburnChallengesData *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkToGameStateInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			(None)unknown_arg
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
				(None)unknown_arg
			}
			{
				(None)unknown_arg
			}
		}
	}
	{
		(None)unknown_arg
		{
			(None)unknown_arg
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
				(None)unknown_arg
			}
			{
				(None)unknown_arg
			}
		}
	}
	{
		(None)unknown_arg
		{
			(None)unknown_arg
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
				(None)unknown_arg
			}
			{
				(None)unknown_arg
			}
		}
	}
	{
		(None)unknown_arg
		{
			(None)unknown_arg
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
				(None)unknown_arg
			}
			{
				(None)unknown_arg
			}
		}
	}
	{
		(None)unknown_arg
		{
			(None)unknown_arg
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
				(None)unknown_arg
			}
			{
				(None)unknown_arg
			}
		}
	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkToGameStateInterface::Construct(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnNetwork::RoadRulesDownloadEvent,40>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnNetwork::RoadRulesMessageData,40>::Construct(/* parameters */);
	CgsModule::EventQueue<BrnNetwork::RoadRulesRecvData,14>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData,7>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::Construct(/* parameters */);
}

void CgsNetwork::ServerInterfaceStructureInterface::~ServerInterfaceStructureInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::UsersetParams::~UsersetParams(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceUsersetParams::~ServerInterfaceUsersetParams(/* parameters */);
}

void CgsNetwork::ServerInterfaceQuickJoinParamsBase::~ServerInterfaceQuickJoinParamsBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::QuickJoinParams::~QuickJoinParams(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceQuickJoinParams::~ServerInterfaceQuickJoinParams(/* parameters */);
}

void rw::math::fpu::Round<float>(float  a) {
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

void rw::math::vpu::Normalize(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:195
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:196
			VectorIntrinsicUnion::VectorIntrinsic temp_one_over_rqrt_dot;

			{
				// vector3_operation_inline.h:196
				VectorIntrinsicUnion::VectorIntrinsic dotproduct;

				{
					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic yy;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic zz;

				}
				{
					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
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

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVecFloat_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator><VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:374
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:376
		bool ret;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator><VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:374
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:376
		bool ret;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator><VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:374
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:376
		bool ret;

	}
}

void rw::math::vpu::Dot(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:146
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:147
			VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

			// vector3_operation_inline.h:147
			VectorIntrinsicUnion::VectorIntrinsic yy;

			// vector3_operation_inline.h:147
			VectorIntrinsicUnion::VectorIntrinsic zz;

		}
	}
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

void rw::math::vpu::operator< <VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:492
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:494
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:496
		bool ret;

	}
}

void rw::math::vpu::operator< <VectorAxisX, VectorAxisZ>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:492
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:494
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:496
		bool ret;

	}
}

void rw::math::vpu::operator< <VectorAxisY, VectorAxisZ>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:492
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:494
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:496
		bool ret;

	}
}

void rw::math::vpu::Cross(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:153
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic crossV2;

			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic crossV1;

			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic vZero;

			// vector3_operation_inline.h:154
			VectorIntrinsicUnion::VectorIntrinsic crossV3;

		}
	}
}

void rw::math::vpu::OrthoNormalize3x3(const rw::math::vpu::Matrix44Affine &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// matrix44affine_operation_platform_inline.h:487
	Matrix44Affine & result;

	{
		// matrix44affine_operation_platform_inline.h:415
		Vector3 * vpU;

		// matrix44affine_operation_platform_inline.h:415
		Vector3 * vpV;

		// matrix44affine_operation_platform_inline.h:415
		Vector3 * vpW;

		// matrix44affine_operation_platform_inline.h:417
		Vector3 right;

		// matrix44affine_operation_platform_inline.h:418
		Vector3 up;

		// matrix44affine_operation_platform_inline.h:419
		Vector3 at;

		// matrix44affine_operation_platform_inline.h:420
		const const rw::math::vpu::Vector3 & pos;

		// matrix44affine_operation_platform_inline.h:422
		Vector3 vInner;

		// matrix44affine_operation_platform_inline.h:487
		Matrix44Affine result;

		Vector3::Vector3(/* parameters */);
		Normalize(/* parameters */);
	}
	Normalize(/* parameters */);
	{
		{
			{
			}
		}
	}
	{
	}
	{
		{
		}
	}
	Normalize(/* parameters */);
	{
		{
		}
	}
	Magnitude(/* parameters */);
	Magnitude(/* parameters */);
	{
		{
		}
	}
	Magnitude(/* parameters */);
	operator><VectorAxisX>(/* parameters */);
	{
		// matrix44affine_operation_platform_inline.h:432
		Vector3 vOuter;

	}
	Cross(/* parameters */);
	Normalize(/* parameters */);
	{
	}
	Cross(/* parameters */);
	Normalize(/* parameters */);
	Matrix44Affine::Matrix44Affine(/* parameters */);
	operator><VectorAxisY>(/* parameters */);
	operator><VectorAxisZ>(/* parameters */);
	Dot(/* parameters */);
	Dot(/* parameters */);
	Abs<rw::math::vpu::VecFloat>(/* parameters */);
	Dot(/* parameters */);
	Abs<rw::math::vpu::VecFloat>(/* parameters */);
	Abs<rw::math::vpu::VecFloat>(/* parameters */);
	Vector3::Vector3(/* parameters */);
	operator< <VectorAxisX, VectorAxisY>(/* parameters */);
	operator< <VectorAxisX, VectorAxisZ>(/* parameters */);
	operator< <VectorAxisY, VectorAxisZ>(/* parameters */);
}

void rw::math::vpu::Max<int32_t>(const const int32_t &  a, const const int32_t &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkManager::GetPlayerManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkManager::GetTimeManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::DataIDToMemoryAddr::DataIDToMemoryAddr(char *  lpacName, CgsNetwork::EDataTypes  leDataType, int32_t  liOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceDownloadableConfig::Prepare(CgsNetwork::ServerInterface *  lpServerInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceBase::Prepare(ServerInterfacePrepareParams *  lpPrepareParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::Message::GetU16Frame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern UpdateData & operator=(const const UpdateData &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::RemoveBufferedMessage(BrnNetwork::UpdateMessage *  lpUpdateMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayer.cpp:1041
		int32_t liBufIndex;

	}
	UpdateMessage::operator=(/* parameters */);
	CgsNetwork::Message::operator=(/* parameters */);
}

void CgsNetwork::TimeManager::GetU16FrameCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::TimeManager::GetFrameCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::SendSelectedCar(CgsID  lCarId, CgsID  lWheelId, uint16_t  lu16CarColourIndex, uint16_t  lu16CarPaintFinishIndex, bool  lbFinalSelection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::SendLandmarkTriggeredMessage(const int32_t  liCheckpointIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::SendSwitchBurningHomeRunRunnerMessage(RoadRulesRecvData::NetworkPlayerID  lNewBurningHomeRunRunner) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::SendShowtimeUpdateData(const int32_t  liShowtimeScore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::SendShowtimeModeSwitchMessage(const int32_t  liFinalShowtimeScore, const bool  lbEnteringShowtime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::Message::IsMessageValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::Message::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::Message::SetDealtWith() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::SendFreeburnChallengeMessage(CgsID  lChallengeID, BrnNetwork::BrnNetworkModuleIO::EChallengeEventType  leEventType, BrnGameState::EChallengeStatus  leChallengeStatus, int32_t  liActionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::BrnNetworkPlayer::SendActiveFburnChallengeMessage(const NetworkInActiveFburnChallengeEvent *  lpActiveFreeburnChallengeEvent, RoadRulesRecvData::NetworkPlayerID *  lpaNetworkPlayerIDs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::PlayerManager::GetNextLocalPlayerID(RoadRulesRecvData::NetworkPlayerID *  lpPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerDebugComponent::Construct(BrnNetwork::BuddyManagerBase *  lpBuddyManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::PlayerName::Clear(/* parameters */);
}

void BrnNetwork::BuddyManagerDebugComponent::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::PlayerName::Clear(/* parameters */);
}

void CgsNetwork::NetworkPlayer::HasConnectionFailed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::IsOurTurnToSend() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::SendFburnChallengeStatusMessage(const CompletedFburnChallengesData::CompletedFburnChallenges *  lpCompletedFreeburnChallenges) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::GetFlag(BrnGui::Selectable::StateFlags  lxFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::SetFlag(BrnGui::Selectable::StateFlags  lxFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::SetActive(bool  lbActive) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetFlag(/* parameters */);
	ClearFlag(/* parameters */);
	SetFlag(/* parameters */);
}

void BrnGui::Selectable::SetHighlightable(bool  lbHighlightable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetFlag(/* parameters */);
	ClearFlag(/* parameters */);
	SetFlag(/* parameters */);
}

void BrnGui::Selectable::SetSelectable(bool  lbSelectable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetFlag(/* parameters */);
	ClearFlag(/* parameters */);
	SetFlag(/* parameters */);
}

void CgsSystem::Time::GetSeconds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OnlineGameResults::GetConnectedPlayerID(EActiveRaceCarIndex  leActiveRaceCarIndex, int32_t  liRound) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::OnlineGameResults::GetPosition(int32_t  liRound) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameResults::SetGameStats(const OnlineGameResults *  lpResults, int32_t  liNumberOfRivals) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkGameResults.cpp:198
		int32_t liRoundIndex;

		// BrnNetworkGameResults.cpp:199
		EActiveRaceCarIndex lePlayerIndex;

		BrnGameState::GameStateModuleIO::OnlineGameResults::GetConnectedPlayerID(/* parameters */);
		operator++(/* parameters */);
		BrnGameState::GameStateModuleIO::OnlineGameResults::GetPosition(/* parameters */);
	}
}

void CgsContainers::FastBitArray<2000>::IsZero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:521
		uint64_t luIndex;

	}
}

void CgsContainers::FastBitArray<2000>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:511
		uint64_t luIndex;

	}
}

void BrnNetwork::BrnNetworkPlayer::HandleSendingFburnChallengeMessages(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FastBitArray<2000>::IsZero(/* parameters */);
	CgsContainers::FastBitArray<2000>::UnSetAll(/* parameters */);
}

void CgsNetwork::ServerInterfaceDownloadableConfig::GetServerInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceDownloadableConfig::GetTelemetryDisabledList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnServerInterfaceDownloadableConfig.cpp:272
		const char * lpacConfig;

		// BrnServerInterfaceDownloadableConfig.cpp:273
		const char * lpacField;

	}
}

void CgsSystem::Time::GetFraction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameResults::TimeToInt32(Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::Time(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::operator=(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator<=(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:832
		bool result;

	}
}

void rw::math::vpu::AngleBetweenVectors(const rw::math::vpu::Vector3  v0, const rw::math::vpu::Vector3  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:334
		VectorIntrinsicUnion::VectorIntrinsic nv0;

		// vector3_operation_inline.h:334
		VectorIntrinsicUnion::VectorIntrinsic nv1;

		{
			// vector3_operation_inline.h:335
			VectorIntrinsicUnion::VectorIntrinsic temp_one_over_rqrt_dot;

			{
				// vector3_operation_inline.h:335
				VectorIntrinsicUnion::VectorIntrinsic dotproduct;

				{
					// vector3_operation_inline.h:335
					VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

					// vector3_operation_inline.h:335
					VectorIntrinsicUnion::VectorIntrinsic yy;

					// vector3_operation_inline.h:335
					VectorIntrinsicUnion::VectorIntrinsic zz;

				}
				{
					// vector3_operation_inline.h:335
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector3_operation_inline.h:335
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:335
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:335
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

				}
			}
		}
		{
			// vector3_operation_inline.h:336
			VectorIntrinsicUnion::VectorIntrinsic temp_one_over_rqrt_dot;

			{
				// vector3_operation_inline.h:336
				VectorIntrinsicUnion::VectorIntrinsic dotproduct;

				{
					// vector3_operation_inline.h:336
					VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

					// vector3_operation_inline.h:336
					VectorIntrinsicUnion::VectorIntrinsic yy;

					// vector3_operation_inline.h:336
					VectorIntrinsicUnion::VectorIntrinsic zz;

				}
				{
					// vector3_operation_inline.h:336
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector3_operation_inline.h:336
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:336
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:336
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

				}
			}
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

void rw::math::vpu::GetVecFloat_One() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator>=(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:673
		bool result;

	}
}

void rw::math::vpu::InverseOrthonormal(const rw::math::vpu::Matrix44Affine &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Transpose(const rw::math::vpu::Matrix44Affine &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_platform_inline.h:133
		VectorIntrinsicUnion::VectorIntrinsic temp0;

		// matrix44affine_operation_platform_inline.h:134
		VectorIntrinsicUnion::VectorIntrinsic temp1;

		// matrix44affine_operation_platform_inline.h:135
		VectorIntrinsicUnion::VectorIntrinsic temp2;

		// matrix44affine_operation_platform_inline.h:136
		VectorIntrinsicUnion::VectorIntrinsic temp3;

	}
}

void rw::math::vpu::Mult(const rw::math::vpu::Matrix44Affine &  m, const rw::math::vpu::Matrix44Affine &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_platform_inline.h:84
		VectorIntrinsicUnion::VectorIntrinsic sp0;

		// matrix44affine_operation_platform_inline.h:84
		VectorIntrinsicUnion::VectorIntrinsic sp1;

		// matrix44affine_operation_platform_inline.h:84
		VectorIntrinsicUnion::VectorIntrinsic sp2;

		// matrix44affine_operation_platform_inline.h:84
		VectorIntrinsicUnion::VectorIntrinsic sp3;

		// matrix44affine_operation_platform_inline.h:85
		VectorIntrinsicUnion::VectorIntrinsic ma0;

		// matrix44affine_operation_platform_inline.h:85
		VectorIntrinsicUnion::VectorIntrinsic ma1;

		// matrix44affine_operation_platform_inline.h:85
		VectorIntrinsicUnion::VectorIntrinsic ma2;

		// matrix44affine_operation_platform_inline.h:85
		VectorIntrinsicUnion::VectorIntrinsic ma3;

		// matrix44affine_operation_platform_inline.h:86
		VectorIntrinsicUnion::VectorIntrinsic bx;

		// matrix44affine_operation_platform_inline.h:87
		VectorIntrinsicUnion::VectorIntrinsic by;

		// matrix44affine_operation_platform_inline.h:88
		VectorIntrinsicUnion::VectorIntrinsic bz;

		// matrix44affine_operation_platform_inline.h:90
		VectorIntrinsicUnion::VectorIntrinsic zero;

	}
}

void rw::math::vpu::QueryRotate(const rw::math::vpu::Matrix44Affine &  matrix, const Vector3 &  unitAxis, const VecFloat &  angle, const Vector3 &  center) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_platform_inline.h:278
		Vector3 twoSinThetaAxis;

		// matrix44affine_operation_platform_inline.h:279
		VecFloat twoCosTheta;

		// matrix44affine_operation_platform_inline.h:283
		VecFloat twoSinTheta;

		// matrix44affine_operation_platform_inline.h:298
		Vector3 axisXpos;

		{
			// matrix44affine_operation_platform_inline.h:286
			const VecFloat lrRecipLength;

		}
	}
}

void rw::math::vpu::operator+<VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1294
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1295
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1297
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator+<VectorAxisZ>(const VecFloat  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1256
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1257
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator-(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1394
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator-<VectorAxisZ, VectorAxisY>(VecFloatRef<VectorAxisZ> &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1440
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1441
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1443
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(const VecFloat  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:298
		VectorIntrinsicUnion::VectorIntrinsic permuteControl;

	}
}

void rw::math::vpu::operator-<VectorAxisX, VectorAxisZ>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1440
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1441
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1443
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(const VecFloat  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:298
		VectorIntrinsicUnion::VectorIntrinsic permuteControl;

	}
}

void rw::math::vpu::operator-<VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1440
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1441
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1443
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::operator=(const VecFloat  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:298
		VectorIntrinsicUnion::VectorIntrinsic permuteControl;

	}
}

void rw::math::vpu::operator>(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:356
		bool result;

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

void rw::math::vpu::operator*(const rw::math::vpu::Vector3  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:393
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::ATan2(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// trig_operation_inline.h:60
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic zeroVec;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic signBit;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic a_signBit;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic bNeg;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic bZero;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic res1;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic bRecip;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic res2;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic b_signBit;

			// trig_operation_inline.h:61
			VectorIntrinsicUnion::VectorIntrinsic newRes;

			{
				// trig_operation_inline.h:61
				VectorIntrinsicUnion::VectorIntrinsic estimate;

				// trig_operation_inline.h:61
				VectorIntrinsicUnion::VectorIntrinsic vOne;

			}
		}
	}
}

void std::atanf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// atanf4.h:25
		float[4] bias;

		// atanf4.h:26
		float[4] x2;

		// atanf4.h:26
		float[4] x3;

		// atanf4.h:26
		float[4] x4;

		// atanf4.h:26
		float[4] x8;

		// atanf4.h:26
		float[4] x9;

		// atanf4.h:27
		float[4] hi;

		// atanf4.h:27
		float[4] lo;

		// atanf4.h:28
		float[4] result;

		// atanf4.h:29
		float[4] inv_x;

		// atanf4.h:30
		unsigned int[4] sign;

		// atanf4.h:31
		unsigned int[4] select;

		// atanf4.h:32
		float[4] xabs;

		// atanf4.h:33
		float[4] vzero;

	}
}

void std::recipf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// recipf4.h:15
		float[4] y0;

	}
}

void rw::math::vpu::QueryRotateDegenerateUnitAxis(const rw::math::vpu::Matrix44Affine &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::QueryRotateDegenerateUnitAxis(const rw::math::vpu::Matrix33 &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix33_operation_platform_inline.h:246
		VecFloat xVal;

	}
	{
		// matrix33_operation_platform_inline.h:255
		VecFloat zVal;

	}
	{
		// matrix33_operation_platform_inline.h:267
		VecFloat yVal;

	}
	{
		// matrix33_operation_platform_inline.h:276
		VecFloat zVal;

	}
}

void rw::math::vpu::operator><VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:334
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:336
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:338
		bool ret;

	}
}

void rw::math::vpu::operator><VectorAxisX, VectorAxisZ>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:334
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:336
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:338
		bool ret;

	}
}

void rw::math::vpu::operator+<VectorAxisX>(const VecFloat  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1256
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1257
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator*(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1539
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator+<VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1294
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1295
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1297
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator+<VectorAxisZ, VectorAxisX>(VecFloatRef<VectorAxisZ> &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1294
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1295
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1297
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator+<VectorAxisX, VectorAxisZ>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1294
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1295
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1297
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator+<VectorAxisY, VectorAxisZ>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1294
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1295
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1297
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator><VectorAxisY, VectorAxisZ>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:334
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:336
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:338
		bool ret;

	}
}

void rw::math::vpu::operator+<VectorAxisY>(const VecFloat  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1256
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1257
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator+<VectorAxisZ, VectorAxisY>(VecFloatRef<VectorAxisZ> &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1294
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1295
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1297
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator+=(const Vector3 &  v, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator<(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:514
		bool result;

	}
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const rw::math::vpu::Matrix44Affine &  m, const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const VecFloat  s, const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:400
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator+(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector3_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Matrix44AffineFromAxisRotationAngle(const rw::math::vpu::Vector3  axis, const VecFloat  angle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_platform_inline.h:148
		VecFloat s;

		// matrix44affine_operation_platform_inline.h:148
		VecFloat c;

		// matrix44affine_operation_platform_inline.h:151
		VecFloat t;

		// matrix44affine_operation_platform_inline.h:152
		VecFloat tx;

		// matrix44affine_operation_platform_inline.h:153
		VecFloat ty;

		// matrix44affine_operation_platform_inline.h:154
		VecFloat tz;

		// matrix44affine_operation_platform_inline.h:155
		VecFloat sx;

		// matrix44affine_operation_platform_inline.h:156
		VecFloat sy;

		// matrix44affine_operation_platform_inline.h:157
		VecFloat sz;

		// matrix44affine_operation_platform_inline.h:159
		const VecFloat zero;

		// matrix44affine_operation_platform_inline.h:161
		Vector3 lRow0;

		// matrix44affine_operation_platform_inline.h:162
		Vector3 lRow1;

		// matrix44affine_operation_platform_inline.h:163
		Vector3 lRow2;

		// matrix44affine_operation_platform_inline.h:164
		Vector3 lRow3;

	}
}

void rw::math::vpu::SinCos(const VecFloat  a, const VecFloat &  s_out, const VecFloat &  c_out) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::sincosf4(float[4]  x, float *[4]  s, float *[4]  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// sincosf4.h:14
		float[4] xl;

		// sincosf4.h:14
		float[4] xl2;

		// sincosf4.h:14
		float[4] xl3;

		// sincosf4.h:15
		int[4] q;

		// sincosf4.h:16
		int[4] offsetSin;

		// sincosf4.h:16
		int[4] offsetCos;

		// sincosf4.h:37
		float[4] qf;

		// sincosf4.h:38
		float[4] p1;

		// sincosf4.h:52
		float[4] ct1;

		// sincosf4.h:53
		float[4] st1;

		// sincosf4.h:55
		float[4] ct2;

		// sincosf4.h:56
		float[4] st2;

		// sincosf4.h:58
		float[4] cx;

		// sincosf4.h:59
		float[4] sx;

		// sincosf4.h:64
		unsigned int[4] sinMask;

		// sincosf4.h:65
		unsigned int[4] cosMask;

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

void rw::math::vpu::operator*<VectorAxisY>(const VecFloat  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1547
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1548
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator*<VectorAxisZ>(const VecFloat  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1547
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1548
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator+(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1248
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::SLerp(const rw::math::vpu::Matrix44Affine &  lFrom, const rw::math::vpu::Matrix44Affine &  lTo, const VecFloat  lrParam, const VecFloat &  lprAngle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_platform_inline.h:305
		Matrix44Affine lReturnmatrix;

		// matrix44affine_operation_platform_inline.h:306
		Matrix44Affine lScratch;

		// matrix44affine_operation_platform_inline.h:307
		Vector3 axis;

		// matrix44affine_operation_platform_inline.h:308
		Vector3 lCentre;

		// matrix44affine_operation_platform_inline.h:309
		VecFloat lrAngle;

		GetVecFloat_Zero(/* parameters */);
	}
	operator<=(/* parameters */);
	AngleBetweenVectors(/* parameters */);
	std(/* parameters */);
	{
		{
			{
			}
		}
	}
	CosAngleBetweenNormalizedVectors(/* parameters */);
	{
	}
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_sra(/* parameters */);
	Matrix44Affine::Matrix44Affine(/* parameters */);
	{
	}
	{
	}
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
	vec_sel(/* parameters */);
	GetVecFloat_One(/* parameters */);
	operator>=(/* parameters */);
	Matrix44Affine::Matrix44Affine(/* parameters */);
	Matrix44Affine::Matrix44Affine(/* parameters */);
	InverseOrthonormal(/* parameters */);
	Matrix44Affine::Matrix44Affine(/* parameters */);
	QueryRotate(/* parameters */);
	Mult(/* parameters */);
	VecFloatRef<VectorAxisX>::operator=(/* parameters */);
	Magnitude(/* parameters */);
	VecFloatRef<VectorAxisZ>::operator=(/* parameters */);
	operator+<VectorAxisZ>(/* parameters */);
	operator+<VectorAxisX, VectorAxisY>(/* parameters */);
	operator-<VectorAxisZ, VectorAxisY>(/* parameters */);
	operator-<VectorAxisX, VectorAxisZ>(/* parameters */);
	operator-<VectorAxisY, VectorAxisX>(/* parameters */);
	{
	}
	operator-(/* parameters */);
	operator>(/* parameters */);
	Vector3::Vector3(/* parameters */);
	ATan2(/* parameters */);
	VecFloat::VecFloat(/* parameters */);
	vec_and(/* parameters */);
	std(/* parameters */);
	vec_madd(/* parameters */);
	operator<=(/* parameters */);
	vec_re(/* parameters */);
	vec_andc(/* parameters */);
	vec_cmpgt(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	VecFloat::VecFloat(/* parameters */);
	operator<(/* parameters */);
	{
		// matrix44affine_operation_platform_inline.h:332
		Matrix44Affine lLerpmat;

		operator-(/* parameters */);
		operator-(/* parameters */);
		Normalize(/* parameters */);
		operator-(/* parameters */);
		Mult(/* parameters */);
		operator-(/* parameters */);
		operator+(/* parameters */);
		operator*(/* parameters */);
		operator*(/* parameters */);
		operator*(/* parameters */);
		operator+(/* parameters */);
		operator+(/* parameters */);
		Normalize(/* parameters */);
		{
		}
		Normalize(/* parameters */);
		operator+(/* parameters */);
		{
			{
			}
		}
		{
			{
			}
		}
	}
	operator*(/* parameters */);
	Matrix44Affine::Matrix44Affine(/* parameters */);
	operator-(/* parameters */);
	GetVecFloat_Zero(/* parameters */);
	Matrix44Affine::Matrix44Affine(/* parameters */);
	{
		operator/(/* parameters */);
		operator*(/* parameters */);
	}
	{
		// matrix44affine_operation_platform_inline.h:350
		Matrix44Affine lRotatematrix;

		// matrix44affine_operation_platform_inline.h:352
		Vector3 lStartPos;

		// matrix44affine_operation_platform_inline.h:353
		Vector3 lEndPos;

		operator*(/* parameters */);
		Matrix44AffineFromAxisRotationAngle(/* parameters */);
		Matrix44Affine::operator=(/* parameters */);
		vec_nmsub(/* parameters */);
		operator*<VectorAxisZ>(/* parameters */);
		vec_add(/* parameters */);
		operator*<VectorAxisY>(/* parameters */);
		vec_nmsub(/* parameters */);
		operator*<VectorAxisX>(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_and(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		operator-(/* parameters */);
	}
	GetVecFloat_One(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	operator-(/* parameters */);
	Vector3::Vector3(/* parameters */);
	Mult(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	operator*(/* parameters */);
	vec_madd(/* parameters */);
	operator+(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	operator*<VectorAxisZ>(/* parameters */);
	operator*<VectorAxisY>(/* parameters */);
	operator*<VectorAxisX>(/* parameters */);
	operator*<VectorAxisX>(/* parameters */);
	operator*<VectorAxisY>(/* parameters */);
	operator*<VectorAxisZ>(/* parameters */);
	operator*<VectorAxisX>(/* parameters */);
	operator*<VectorAxisY>(/* parameters */);
	operator*<VectorAxisZ>(/* parameters */);
	operator*<VectorAxisX>(/* parameters */);
	operator*<VectorAxisY>(/* parameters */);
	operator*<VectorAxisZ>(/* parameters */);
	operator+(/* parameters */);
	operator+(/* parameters */);
	operator-(/* parameters */);
	operator-(/* parameters */);
	operator+(/* parameters */);
	operator+(/* parameters */);
	operator+(/* parameters */);
	operator-(/* parameters */);
	operator+(/* parameters */);
	Vector3::Vector3(/* parameters */);
	Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	operator<=(/* parameters */);
	Matrix44Affine::Matrix44Affine(/* parameters */);
	QueryRotateDegenerateUnitAxis(/* parameters */);
	operator><VectorAxisX, VectorAxisZ>(/* parameters */);
	{
		operator+<VectorAxisX>(/* parameters */);
		operator+<VectorAxisY, VectorAxisX>(/* parameters */);
		Vector3::Vector3(/* parameters */);
		operator+<VectorAxisZ, VectorAxisX>(/* parameters */);
		Normalize(/* parameters */);
		{
		}
		operator*(/* parameters */);
		{
		}
	}
	operator><VectorAxisY, VectorAxisZ>(/* parameters */);
	{
		operator+<VectorAxisY>(/* parameters */);
		operator+<VectorAxisX, VectorAxisY>(/* parameters */);
		Normalize(/* parameters */);
		operator+<VectorAxisZ, VectorAxisY>(/* parameters */);
		Vector3::Vector3(/* parameters */);
		operator*(/* parameters */);
		{
		}
		{
		}
	}
	{
		operator+<VectorAxisZ>(/* parameters */);
		operator+<VectorAxisX, VectorAxisZ>(/* parameters */);
		operator+<VectorAxisY, VectorAxisZ>(/* parameters */);
		Vector3::Vector3(/* parameters */);
		{
		}
		operator*(/* parameters */);
		Normalize(/* parameters */);
		{
		}
	}
}

void BrnNetwork::BrnNetworkPlayer::SetEliminated(bool  lbIsEliminated) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::OnRoundStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	SetEliminated(/* parameters */);
}

void CgsNetwork::UsernameCompare(const char *  lpacName1, const char *  lpacName2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceDownloadableConfig::IsGamertagInFeverList(const char *  lpcGamertag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnServerInterfaceDownloadableConfig.cpp:238
		const char * lpacConfig;

		// BrnServerInterfaceDownloadableConfig.cpp:239
		const char * lpacField;

		// BrnServerInterfaceDownloadableConfig.cpp:240
		char[20] lacFevertag;

		// BrnServerInterfaceDownloadableConfig.cpp:241
		int32_t liFriendIndex;

	}
	CgsNetwork::UsernameCompare(/* parameters */);
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

void CgsResource::ResourceHandle::ResourceHandle(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::Construct(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator/(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::JointId::JointId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::DriveId::DriveId(uint64_t  lId) {
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

void BrnGameState::LandmarkIndex::LandmarkIndex(int32_t  lTriggerRegionIndex) {
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

void BrnPhysics::ContactId::ContactId(uint32_t  luId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsSceneManager::VolumeInstanceId::VolumeInstanceId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::EntityId::EntityId(/* parameters */);
	CgsSceneManager::VolumeId::VolumeId(/* parameters */);
	CgsResource::ResourceHandle::ResourceHandle(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	CgsPhysics::RigidBodyId::RigidBodyId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	CgsPhysics::JointId::JointId(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	CgsPhysics::DriveId::DriveId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	BrnPhysics::ContactId::ContactId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent,24>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::Append(const const BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::MemCpy(void *  lpDestination, const void *  lpSource, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent,24>::operator=(const const EventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent,24> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::Clear(/* parameters */);
	BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::Append(/* parameters */);
	BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::Append(const const BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8>::operator=(const const EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
		(None)unknown_arg
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
	}
}

void CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8>::operator=(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>::operator=(const const EventQueue<BrnPhysics::Vehicle::ImpactEvent,16> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
		(None)unknown_arg
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
	}
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>::operator=(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void CgsCore::MemSet(void *  lpDestination, int  liValue, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::DebugMemoryInit(BrnNetwork::BrnNetworkModule *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemSet(/* parameters */);
}

void BrnNetwork::BrnServerInterfaceDownloadableConfig::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemSet(/* parameters */);
	CgsCore::MemSet(/* parameters */);
	CgsCore::MemSet(/* parameters */);
}

void BrnNetwork::BrnServerInterfaceBase::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfacePS3::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceDownloadableConfig::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemSet(/* parameters */);
	CgsCore::MemSet(/* parameters */);
	CgsCore::MemSet(/* parameters */);
}

void BrnNetwork::BrnServerInterfaceTelemetry::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemSet(/* parameters */);
}

void BrnNetwork::BrnServerInterfaceBase::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfacePS3::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeRelationship::GetRivalName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::UniquePlayerIDPS3::GetPlayerName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::PlayerName::IsEmpty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::PlayerName::GetPlayerName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeDebugComponent::AddPlayer(LiveRevengeRelationship *  lpRelationship) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ScoreboardDebugComponent::Construct(ScoreboardManager *  lpScoreboardManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkModuleIO::NetworkOutScoreboardEvent::Construct(/* parameters */);
}

void BrnNetwork::ScoreboardDebugComponent::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkModuleIO::NetworkOutScoreboardEvent::Destruct(/* parameters */);
}

void renderengine::Texture::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptorType<0u>::BaseResourceDescriptorType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::BaseResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::~BaseResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::ResourceDescriptor(const const MemoryResourceDescriptor &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<6u>::BaseResourceDescriptors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~BaseResourceDescriptors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptorType<0u>::~BaseResourceDescriptorType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::Resource::Resource(const const MemoryResource &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<6u>::BaseResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resource.h:307
		uint32_t i;

	}
}

void rw::BaseResources<6u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkTexture::SetIsUncompressedYUV(bool  lbIsUncompressedYUV) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<8u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::Construct(OutEventLineTestNearestResult *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::SetEventPointer(OutEventLineTestNearestResult *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>::Construct(CreateRaceCarEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>::SetEventPointer(CreateRaceCarEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>::Construct(RemoveRaceCarEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>::SetEventPointer(RemoveRaceCarEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>::Construct(ResetVehicleEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>::SetEventPointer(ResetVehicleEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::Construct(CreatePhysicalTrafficEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::SetEventPointer(CreatePhysicalTrafficEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::Construct(SetTrafficCrashingEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::SetEventPointer(SetTrafficCrashingEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::Construct(RemoveTrafficEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::SetEventPointer(RemoveTrafficEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>::Construct(UpdateNetworkTrafficEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>::SetEventPointer(UpdateNetworkTrafficEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Construct(ImpactEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::SetEventPointer(ImpactEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::Construct(ValidateRaceCarEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::SetEventPointer(ValidateRaceCarEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>::Construct(SetRaceCarCollisionEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>::SetEventPointer(SetRaceCarCollisionEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>::Construct(SetRaceCarCullingGroupEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>::SetEventPointer(SetRaceCarCullingGroupEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneManagerIO::TriangleCacheInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::Construct(CreateArticulatedTrafficEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::SetEventPointer(CreateArticulatedTrafficEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::Construct(VehicleAddedForCollisionEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::SetEventPointer(VehicleAddedForCollisionEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleInputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::SetEventPointer(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>::SetEventPointer(/* parameters */);
	CgsSceneManager::SceneManagerIO::TriangleCacheInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::SetEventPointer(/* parameters */);
	CgsContainers::BitArray<8u>::UnSetAll(/* parameters */);
}

void CgsNetwork::ServerInterfaceQuickJoinParams::~ServerInterfaceQuickJoinParams(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceQuickJoinParamsBase::~ServerInterfaceQuickJoinParamsBase(/* parameters */);
}

void BrnGameState::BurnoutSkillzData::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBurnoutSkillzData.h:120
		BrnGameState::BurnoutSkillzData::EBurnoutSkillType leSkillIndex;

	}
}

void BrnGameState::operator++(const BrnGameState::BurnoutSkillzData::EBurnoutSkillType &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBurnoutSkillzData.h:107
		BrnGameState::BurnoutSkillzData::EBurnoutSkillType leOldEnumIndex;

	}
}

void CgsContainers::FastBitArray<2000>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::Construct(CgsNetworkPlayerConstructParams *  lpConstructParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayer.cpp:266
		BrnNetworkPlayerConstructParams * lpBrnConstructParams;

		BrnGameState::BurnoutSkillzData::Clear(/* parameters */);
		CgsContainers::FastBitArray<2000>::Construct(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkPlayer::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnGameState::BurnoutSkillzData::Clear(/* parameters */);
	CgsContainers::FastBitArray<2000>::UnSetAll(/* parameters */);
}

void CgsContainers::FastBitArray<2000>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnGameState::BurnoutSkillzData::Clear(/* parameters */);
}

void CgsModule::EventQueue<BrnNetwork::RoadRulesRecvData,14>::operator=(const const EventQueue<BrnNetwork::RoadRulesRecvData,14> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnNetwork::RoadRulesRecvData,14>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::Append(const const BaseEventQueue<BrnNetwork::RoadRulesRecvData> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnNetwork::RoadRulesDownloadEvent,40>::operator=(const const EventQueue<BrnNetwork::RoadRulesDownloadEvent,40> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnNetwork::RoadRulesDownloadEvent,40>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::Append(const const BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnNetwork::RoadRulesMessageData,40>::operator=(const const EventQueue<BrnNetwork::RoadRulesMessageData,40> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnNetwork::RoadRulesMessageData,40>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::Append(const const BaseEventQueue<BrnNetwork::RoadRulesMessageData> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData,7>::operator=(const const EventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData,7> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData,7>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::Append(const const BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28>::operator=(const const EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Append(const const BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern NetworkToGameStateInterface & operator=(const const NetworkToGameStateInterface &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventQueue<BrnNetwork::RoadRulesRecvData,14>::operator=(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnNetwork::RoadRulesDownloadEvent,40>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnNetwork::RoadRulesDownloadEvent,40>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnNetwork::RoadRulesMessageData,40>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnNetwork::RoadRulesMessageData,40>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData,7>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData,7>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28>::operator=(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent,28>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000>::operator=(const const EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8>::operator=(const const EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8>::operator=(const const EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16>::operator=(const const EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8>::operator=(const const EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10>::operator=(const const EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10>::operator=(const const EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64>::operator=(const const EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25>::operator=(const const EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10>::operator=(const const EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25>::operator=(const const EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25>::operator=(const const EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20>::operator=(const const EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern VehicleInputInterface & operator=(const const VehicleInputInterface &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000>::operator=(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void CgsSound::MemBase::operator delete(void *  lpvMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::FreeMemoryResource(MemoryResource  memoryResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resourceallocator.h:191
		Resource resource;

	}
}

void rw::Resource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::MemBase::~MemBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::MemBase::~MemBase(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::MemBase::operator delete(/* parameters */);
	rw::IResourceAllocator::FreeMemoryResource(/* parameters */);
}

void CgsSound::MemBase::~MemBase(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Environment::operator delete(void *  lpVoid, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Environment::DoDispose() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEnvironment.h:538
		rw::IResourceAllocator * lpAllocator;

		operator delete(/* parameters */);
	}
}

void CgsSound::Playback::Factory::operator delete(void *  lpVoid, const CgsSound::Playback::Environment &  lEnvironment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Environment::Free(void *  lpVoid) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Factory::DoDispose() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFactory.h:322
		const CgsSound::Playback::Environment & lEnvironment;

		operator delete(/* parameters */);
	}
}

void BrnNetwork::GameResults::~GameResults(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceGameResultsBase::~ServerInterfaceGameResultsBase(/* parameters */);
}

void BrnNetwork::GameParams::~GameParams(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceGameParams::~ServerInterfaceGameParams(/* parameters */);
}

void BrnNetwork::GameSearchParamsPS3::~GameSearchParamsPS3(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetwork::GameSearchParamsBase::~GameSearchParamsBase(/* parameters */);
}

void BrnNetwork::PlayerInfoData::~PlayerInfoData(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfacePlayerInfoData::~ServerInterfacePlayerInfoData(/* parameters */);
}

void BrnNetwork::PlayerParamsBase::~PlayerParamsBase(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfacePlayerParams::~ServerInterfacePlayerParams(/* parameters */);
}

void BrnNetwork::NetworkPlayerStats::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::StatsDebugComponent::AddStats(NetworkPlayerStats *  lpStats) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStatsDebugComponent.cpp:218
		BrnNetwork::NetworkPlayerStats::EStatsValue eLoopCounter;

		operator++(/* parameters */);
	}
}

void CgsNetwork::ServerInterfaceDirtySock::~ServerInterfaceDirtySock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterface::~ServerInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceDirtySockPS3::~ServerInterfaceDirtySockPS3(/* parameters */);
}

void CgsNetwork::ServerInterfaceGameSearchParams::~ServerInterfaceGameSearchParams(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceGameSearchParamsBase::~ServerInterfaceGameSearchParamsBase(/* parameters */);
}

void BrnNetwork::GameSearchParamsBase::~GameSearchParamsBase(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceGameSearchParams::~ServerInterfaceGameSearchParams(/* parameters */);
}

void CgsNetwork::ServerInterfaceUsersetParams::~ServerInterfaceUsersetParams(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceUsersetParamsBase::~ServerInterfaceUsersetParamsBase(/* parameters */);
}

void CgsNetwork::ServerInterfaceComponent::~ServerInterfaceComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceDownloadableConfig::~BrnServerInterfaceDownloadableConfig(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceDownloadableConfig::~ServerInterfaceDownloadableConfig(/* parameters */);
}

void BrnNetwork::BrnServerInterfaceTelemetry::~BrnServerInterfaceTelemetry(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceTelemetry::~ServerInterfaceTelemetry(/* parameters */);
}

void BrnNetwork::ServerInterfaceCustomCommands::~ServerInterfaceCustomCommands(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceCustomCommands::~ServerInterfaceCustomCommands(/* parameters */);
}

void CgsSound::Playback::Handle<CgsSound::Playback::Voice>::~Handle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::Voice>::ReleaseObject() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Object::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Logic::Voice::~Voice() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Logic::Voice::~Voice(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Handle<CgsSound::Playback::Voice>::~Handle(/* parameters */);
	CgsSound::Playback::Object::Release(/* parameters */);
}

void CgsSound::Playback::Handle<CgsSound::Playback::Content>::~Handle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::Content>::ReleaseObject() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Logic::VoiceWrapper::~VoiceWrapper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Logic::VoiceWrapper::~VoiceWrapper(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Handle<CgsSound::Playback::Content>::~Handle(/* parameters */);
	CgsSound::Logic::Voice::~Voice(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::Voice>::~Handle(/* parameters */);
	CgsSound::MemBase::~MemBase(/* parameters */);
}

void CgsSound::Logic::VoiceWrapper::~VoiceWrapper(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Handle<CgsSound::Playback::Content>::~Handle(/* parameters */);
	CgsSound::Logic::Voice::~Voice(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::Voice>::~Handle(/* parameters */);
	CgsSound::MemBase::operator delete(/* parameters */);
	CgsSound::MemBase::~MemBase(/* parameters */);
	rw::IResourceAllocator::FreeMemoryResource(/* parameters */);
}

void CgsNetwork::ServerInterfacePlayerInfoData::~ServerInterfacePlayerInfoData(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfacePlayerInfoDataBase::~ServerInterfacePlayerInfoDataBase(/* parameters */);
}

void CgsNetwork::ServerInterfacePlayerParams::~ServerInterfacePlayerParams(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfacePlayerParamsBase::~ServerInterfacePlayerParamsBase(/* parameters */);
}

void BrnNetwork::PlayerParams::~PlayerParams(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetwork::PlayerParamsBase::~PlayerParamsBase(/* parameters */);
}

void CgsNetwork::ServerInterfaceGameParams::~ServerInterfaceGameParams(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceGameParamsBase::~ServerInterfaceGameParamsBase(/* parameters */);
}

void BrnNetwork::BrnServerInterfaceBase::~BrnServerInterfaceBase(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetwork::ServerInterfaceCustomCommands::~ServerInterfaceCustomCommands(/* parameters */);
	CgsNetwork::ServerInterface::~ServerInterface(/* parameters */);
	CgsNetwork::ServerInterfaceRankings::~ServerInterfaceRankings(/* parameters */);
	BrnNetwork::BrnServerInterfaceTelemetry::~BrnServerInterfaceTelemetry(/* parameters */);
	BrnNetwork::BrnServerInterfaceDownloadableConfig::~BrnServerInterfaceDownloadableConfig(/* parameters */);
	CgsNetwork::ServerInterfacePingRegions::~ServerInterfacePingRegions(/* parameters */);
	CgsNetwork::ServerInterfaceUsersets::~ServerInterfaceUsersets(/* parameters */);
	CgsNetwork::ServerInterfaceServerInfo::~ServerInterfaceServerInfo(/* parameters */);
	CgsNetwork::ServerInterfaceHttp::~ServerInterfaceHttp(/* parameters */);
	CgsNetwork::ServerInterfaceBroadcastMessages::~ServerInterfaceBroadcastMessages(/* parameters */);
	CgsNetwork::ServerInterfacePlayerInfo::~ServerInterfacePlayerInfo(/* parameters */);
	CgsNetwork::ServerInterfaceConnection::~ServerInterfaceConnection(/* parameters */);
}

void BrnNetwork::BrnServerInterfacePS3::~BrnServerInterfacePS3(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceGamesPS3::~ServerInterfaceGamesPS3(/* parameters */);
}

void BrnNetwork::BrnNetworkManager::GetServerInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceDirtySock::GetGameComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::CacheNetworkPlayerIDsAtGameStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.cpp:511
		RoadRulesRecvData::NetworkPlayerID lPlayerID;

		// BrnNetworkModule.cpp:512
		CgsNetwork::ServerInterfaceGames * lpServerInterfaceGames;

		// BrnNetworkModule.cpp:513
		CgsNetwork::PlayerManager * lpPlayerManager;

		BrnNetworkManager::GetServerInterface(/* parameters */);
	}
	CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
	CgsNetwork::NetworkManager::GetPlayerManager(/* parameters */);
}

void CgsNetwork::ServerInterfaceDirtySock::GetCustomCommandsComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::StatsDebugComponent::GetELOFromServer(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStatsDebugComponent.cpp:255
		StatsDebugComponent * lpStatsDebugComponent;

		// BrnNetworkStatsDebugComponent.cpp:256
		BrnNetwork::ServerInterfaceCustomCommands * lpCustomCommandsComponent;

	}
	CgsNetwork::ServerInterfaceDirtySock::GetCustomCommandsComponent(/* parameters */);
}

void BrnNetwork::BrnServerInterfaceBase::GetTelemetryComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceDirtySock::GetTelemetryComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceDirtySock::GetPlayerInfoComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfacePlayerInfoDataBase::GetID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceDirtySock::GetConnectionComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ServerInterfaceDebugComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkPlayer::GetLocalConsoleFrameRate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkPlayer::GetRemoteConsoleFrameRate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::UpdateMessage::GetU16FramesSinceStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::Message::IsOlderThan(uint16_t  lu16Frame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::UInt16IsLargerWrapped(uint16_t  lu16A, uint16_t  lu16B) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::UInt16IsLargerOrEqualWrapped(uint16_t  lu16A, uint16_t  lu16B) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::RetrieveBufferedMessage(uint16_t  lu16FramesSinceStart) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayer.cpp:935
		int32_t liBufIndex;

		// BrnNetworkPlayer.cpp:936
		uint16_t lu16MessageThatWeWantFrame;

		// BrnNetworkPlayer.cpp:937
		BrnNetwork::UpdateMessage * lpUpdateMessage;

		CgsNetwork::NetworkPlayer::GetLocalConsoleFrameRate(/* parameters */);
		CgsNetwork::NetworkPlayer::GetRemoteConsoleFrameRate(/* parameters */);
		CgsNetwork::NetworkPlayer::GetLocalConsoleFrameRate(/* parameters */);
		UpdateMessage::GetU16FramesSinceStart(/* parameters */);
		UpdateMessage::GetU16FramesSinceStart(/* parameters */);
		CgsNetwork::Message::IsOlderThan(/* parameters */);
		UpdateMessage::GetU16FramesSinceStart(/* parameters */);
	}
}

void CgsSound::Playback::Content::operator delete(void *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Content::~Content() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Content::~Content(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Object::~Object(/* parameters */);
}

void CgsSound::Playback::Content::~Content(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Object::~Object(/* parameters */);
	CgsSound::Playback::Content::operator delete(/* parameters */);
}

void CgsSound::Playback::Factory::operator delete(void *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Factory::~Factory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Factory::~Factory(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Object::~Object(/* parameters */);
}

void CgsSound::Playback::Factory::~Factory(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Object::~Object(/* parameters */);
	CgsSound::Playback::Factory::operator delete(/* parameters */);
}

void CgsContainers::FlagSet<std::int8_t>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::UnlockForWrite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
}

void CgsModule::IOBuffer::UnlockForWrite(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FlagSet<std::int8_t>::UnSetBit(/* parameters */);
}

void CgsModule::IOBuffer::UnlockForRead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FlagSet<std::int8_t>::UnSetBit(/* parameters */);
}

void CgsContainers::FlagSet<std::int8_t>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::LockForRead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
}

void CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceDirtySock::GetMessageBufferLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ServerInterfaceCustomCommands::SetEloOfLocalPlayer(int32_t  liRaceElo, int32_t  liRoadRageElo, int32_t  liBurningHomeRunElo, ServerInterfaceCustomCommands::CustomCommandCallback  lCallback, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
}

void BrnNetwork::StatsDebugComponent::SetELOOnServer(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStatsDebugComponent.cpp:290
		StatsDebugComponent * lpStatsDebugComponent;

		// BrnNetworkStatsDebugComponent.cpp:291
		BrnNetwork::ServerInterfaceCustomCommands * lpCustomCommandsComponent;

	}
	CgsNetwork::ServerInterfaceDirtySock::GetCustomCommandsComponent(/* parameters */);
}

void BrnNetwork::RoadRulesUploadData::GetNumScores() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::RoadRulesUploadData::GetScoreValue(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::RoadRulesUploadData::GetRecordIndex(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::RoadRulesUploadData::GetCarID(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkEncodeUncompressedCgsID(char *  lpcBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNetworkUtils.h:179
		int32_t liChar;

	}
}

void BrnNetwork::RoadRulesUploadData::GetUniqueID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ServerInterfaceCustomCommands::SetRoadRulesForLocalPlayer(RoadRulesUploadData *  lpRoadRulesData, const char *  lpcRoadRulesServerKey, ServerInterfaceCustomCommands::CustomCommandCallback  lCallback, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnServerInterfaceCustomCommands.cpp:628
		char[165] lacRecordValues;

		// BrnServerInterfaceCustomCommands.cpp:629
		char[60] lacRecordIndices;

		// BrnServerInterfaceCustomCommands.cpp:630
		char[195] lacRecordCarIDs;

		// BrnServerInterfaceCustomCommands.cpp:631
		char[11] lacRecordValue;

		// BrnServerInterfaceCustomCommands.cpp:632
		char[4] lacRecordIndex;

		// BrnServerInterfaceCustomCommands.cpp:633
		char[13] lacCarID;

		// BrnServerInterfaceCustomCommands.cpp:634
		int32_t liIndex;

	}
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsCore::MemSet(/* parameters */);
	CgsCore::MemSet(/* parameters */);
	CgsCore::MemSet(/* parameters */);
	CgsCore::MemSet(/* parameters */);
	RoadRulesUploadData::GetScoreValue(/* parameters */);
	RoadRulesUploadData::GetRecordIndex(/* parameters */);
	RoadRulesUploadData::GetCarID(/* parameters */);
	CgsNetwork::NetworkEncodeUncompressedCgsID(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
}

void rw::core::stdc::Min(int  a, int  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ServerInterfaceCustomCommands::GetRoadRulesHighScores(uint32_t  luTimeStampOfLastDownload, int32_t  liNumScoresToDownload, int32_t  liNextRoadIndexToDownload, ServerInterfaceCustomCommands::CustomCommandCallback  lCallback, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnServerInterfaceCustomCommands.cpp:722
		char[4] lacRoadIndex;

		// BrnServerInterfaceCustomCommands.cpp:723
		char[120] lacRoadsToGetScoresFor;

		// BrnServerInterfaceCustomCommands.cpp:724
		int32_t liIndex;

		// BrnServerInterfaceCustomCommands.cpp:725
		int32_t liEndRoadIndex;

	}
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsCore::MemSet(/* parameters */);
	CgsCore::MemSet(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
}

void BrnNetwork::ServerInterfaceCustomCommands::GetLocalRoadRulesHighScores(int32_t  liNumScoresToDownload, int32_t  liNextRoadIndexToDownload, const char *  lpcRoadRulesServerKey, ServerInterfaceCustomCommands::CustomCommandCallback  lCallback, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
}

void BrnNetwork::ServerInterfaceCustomCommands::GetFriendsListFromServer(ServerInterfaceCustomCommands::CustomCommandCallback  lCallback, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
}

void BrnNetwork::ServerInterfaceCustomCommands::UpdateServerFriendsRecord(PlayerName *  lpaPlayerNamesToAdd, PlayerName *  lpaPlayerNamesToRemove, int32_t  liNumPlayersToAdd, int32_t  liNumPlayersToRemove, ServerInterfaceCustomCommands::CustomCommandCallback  lCallback, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnServerInterfaceCustomCommands.cpp:851
		char[2300] lacFriendsList;

		// BrnServerInterfaceCustomCommands.cpp:852
		char[23] lacAppendPlayerName;

		// BrnServerInterfaceCustomCommands.cpp:853
		int32_t liFriendIndex;

	}
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsCore::MemSet(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsCore::MemSet(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
}

void BrnNetwork::ServerInterfaceCustomCommands::OverWriteServerFriendsRecord(PlayerName *  lpaFriendsNames, int32_t  liNumBuddies) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnServerInterfaceCustomCommands.cpp:961
		char[2300] lacFriendsList;

		// BrnServerInterfaceCustomCommands.cpp:962
		char[23] lacAppendPlayerName;

		// BrnServerInterfaceCustomCommands.cpp:963
		int32_t liFriendIndex;

	}
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsCore::MemSet(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
}

void BrnNetwork::BuddyManagerDebugComponent::ForceServerFriendsOverwrite(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerDebugComponent.cpp:524
		int32_t liBuddyIndex;

		// BrnNetworkBuddyManagerDebugComponent.cpp:525
		BrnNetwork::BuddyManagerDebugComponent * lpBuddyDebug;

		// BrnNetworkBuddyManagerDebugComponent.cpp:526
		BrnNetwork::BuddyManagerBase * lpBuddyManager;

		// BrnNetworkBuddyManagerDebugComponent.cpp:527
		BrnNetwork::ServerInterfaceCustomCommands * lpCustomCommandsComponent;

	}
	CgsNetwork::ServerInterfaceDirtySock::GetCustomCommandsComponent(/* parameters */);
}

void BrnNetwork::ServerInterfaceCustomCommands::UploadOfflineProgress(const NetworkInOfflineProgression::OfflineProgressionT *  lpOfflineProgression) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
}

void BrnNetwork::ServerInterfaceCustomCommands::UploadLiveRevengeData(const RivalDataT *  lpRivalData, int32_t *  lpiRivalIDs, int32_t  liNumberToUpload) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnServerInterfaceCustomCommands.cpp:1230
		int32_t liRivalIndex;

	}
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	{
		// BrnServerInterfaceCustomCommands.cpp:1246
		char[7] lacBuffer;

	}
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
}

void CgsNetwork::ServerInterfaceGameParamsBase::SetName(const char *  lacName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::StrnCpy(char *  lpcDest, const char *  lpcSource, unsigned int  luBytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:55
		CgsDev::StrStream lStrStream;

	}
}

void CgsNetwork::ServerInterfaceGameParamsBase::SetPassword(const char *  lacPassword) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceGameParamsBase::SetMinPlayers(int32_t  liMinPlayers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceGameParamsBase::SetMaxPlayers(int32_t  liMaxPlayers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceGameParamsBase::SetRoomID(int32_t  liRoomID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceGameParamsBase::SetJoinUserset(bool  lbJoinUserset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameParams::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkGameParams.cpp:75
		int32_t liIndex;

	}
	CgsNetwork::ServerInterfaceGameParamsBase::SetName(/* parameters */);
	CgsNetwork::ServerInterfaceGameParamsBase::SetPassword(/* parameters */);
	CgsNetwork::ServerInterfaceGameParamsBase::SetMaxPlayers(/* parameters */);
	CgsNetwork::ServerInterfaceGameParamsBase::SetMinPlayers(/* parameters */);
	CgsNetwork::ServerInterfaceGameParamsBase::SetRoomID(/* parameters */);
	CgsNetwork::ServerInterfaceGameParamsBase::SetJoinUserset(/* parameters */);
}

void CgsSystem::Time::SetFloatVal(float32_t  lfFloatVal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTime.h:329
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::GetWebCamContainerId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::WebcamPS3::SetConvertYUVToARGB(bool  lbConvert) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::SetFreeBurnCar(CgsID  lModelID, CgsID  lWheelID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::SetCurrentDistrict(BrnWorld::EDistrict  leDistrict) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::SetCurrentCarColourIndex(uint16_t  lu16CarColourIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::SetCurrentPaintFinishIndex(uint16_t  lu16PaintFinishIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<1536,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<1536,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

		{
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
			}
		}
	}
}

void CgsModule::VariableEventQueue<1536,16>::Construct(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	CgsModule::VariableEventQueue<1536,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<14000,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<14000,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

		{
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
			}
		}
	}
}

void CgsModule::VariableEventQueue<14000,16>::Construct(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	CgsModule::VariableEventQueue<14000,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsSystem::Time::GetFloatVal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::Time(float32_t  lfTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTime.h:115
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkManager::GetStandingsManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::IsDoingFreeBurnLobby() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkManager.h:766
		CgsNetwork::ServerInterfaceGames * lpGames;

	}
}

void BrnNetwork::BrnNetworkManager::GetTrafficManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetAggressiveDrivingManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetLiveRevengeManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetTimeStep() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetNetworkImageManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetMarkedManManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetStatsManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetCamera() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::GetNetworkManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:448
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkPlayer::SendDirtySockConnectionTelemetry(uint32_t  luGameConnectionFlags, uint32_t  luVoipConnectionFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayer.cpp:2495
		char[2] lacTelemetryData;

	}
	BrnNetworkModule::GetNetworkManager(/* parameters */);
}

void BrnNetwork::BrnNetworkManager::GetRound() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::IsCurrentRoundNumberOdd() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkPlayer::IsFreeBurnLobby() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsNetwork::ServerInterfacePlayerParamsBase::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::PlayerName::Construct(const char *  lpcPlayerName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerName.h:87
		CgsDev::StrStream lStrStream;

	}
}

void CgsSystem::Time::operator=(float  lfTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTime.h:137
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::IOBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::IsBufferLocked() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::IsBufferLockedForReading() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::IsBufferLockedForWriting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<14000,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:281
		CgsDev::StrStream lStrStream;

	}
}

void CgsSystem::Time::operator-(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsTime.h:165
	Time & lNewTime;

	{
		// CgsTime.h:165
		Time lNewTime;

		{
			// CgsTime.h:188
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsSystem::Time::Time() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::operator>=(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeManager::GetRevengeRelationshipByIndex(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::LiveRevengeRelationship::GetTotalTakedowns() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameSearchParamsBase::FillInRivals(BrnNetwork::BrnNetworkManager *  lpNetworkManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkGameSearchParams.cpp:286
		int32_t liPlayerNameIndex;

		// BrnNetworkGameSearchParams.cpp:287
		int32_t liRivalIndex;

		// BrnNetworkGameSearchParams.cpp:289
		bool[250] lbRivalInSameGame;

	}
	{
		// BrnNetworkGameSearchParams.cpp:305
		int32_t liValidRivalIndex;

		LiveRevengeManager::GetRevengeRelationshipByIndex(/* parameters */);
		LiveRevengeRelationship::GetTotalTakedowns(/* parameters */);
		LiveRevengeManager::GetRevengeRelationshipByIndex(/* parameters */);
		CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::operator[](/* parameters */);
		CgsNetwork::PlayerName::GetPlayerName(/* parameters */);
		CgsCore::StrnCpy(/* parameters */);
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
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

void BrnNetwork::GameSearchParamsBase::Prepare(BrnNetwork::ESearchGameModes  leGameSearchGameMode, BrnNetwork::EBrnGameState  leGameState, uint32_t  luSkillLevel, BrnNetwork::ESearchOpponentTypes  leOpponentType, bool  lbIsRanked, bool  lbIsFreeburn, uint32_t  luRequiredSlots, CgsNetwork::EFirewallSettings  leFirewallSettings, BrnNetwork::BrnNetworkManager *  lpNetworkManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkGameSearchParams.cpp:59
		char[10] lacStringPattern;

		// BrnNetworkGameSearchParams.cpp:60
		int32_t liIndex;

	}
}

void CgsDev::DebugInterface::DebugInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::ThreadSafeAquire() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<14000,16>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:263
		CgsDev::StrStream lStrStream;

	}
}

void CgsDev::DebugInterface::~DebugInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::ThreadSafeRelease(DebugManager *  lpDebugManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::GetGameEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:328
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModule::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.cpp:253
		DebugInterface lDebugInterface;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
		CgsModule::VariableEventQueue<14000,16>::Release(/* parameters */);
		CgsDev::DebugInterface::~DebugInterface(/* parameters */);
		CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
	}
	GetGameEventQueue(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Clear(/* parameters */);
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

void CgsSystem::TimerStatusInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::SetFraction(float32_t  lfFraction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTime.h:316
		CgsDev::StrStream lStrStream;

	}
}

void CgsSystem::Time::SetSeconds(int32_t  liSeconds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameSearchParamsPS3::AreRivalsInSameGame(bool *  lpbRivalInSameGame, BrnNetwork::BrnNetworkManager *  lpNetworkManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkGameSearchParams.cpp:433
		int32_t liIndex;

		// BrnNetworkGameSearchParams.cpp:434
		int32_t liRivalIndex;

	}
	LiveRevengeManager::GetRevengeRelationshipByIndex(/* parameters */);
	LiveRevengeRelationship::GetTotalTakedowns(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::LiveRevengeManager::GetRevengeRelationshipByName(const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeManager.h:550
		uint32_t luIndex;

		// BrnNetworkLiveRevengeManager.h:551
		const LiveRevengeRelationship * lpRelationship;

	}
}

void CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<1536,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:281
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModule::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.cpp:319
		int32_t liIndex;

	}
	CgsModule::VariableEventQueue<1536,16>::Destruct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkModuleIO::OutputBuffer::GetNetworkToGameStateInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:883
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkModuleIO::OutputBuffer::GetTrafficNetworkInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:876
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<4096,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkModuleIO::OutputBuffer::GetGuiEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:767
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkModuleIO::OutputBuffer::GetGameEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:737
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsDev::StrStreamBase::operator<<(CgsDev::PrintMode  lePrintMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::Flags() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::LockForWrite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		// CgsIOBuffer.h:218
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
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
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
	{
		(None)unknown_arg
	}
	{
		// CgsIOBuffer.h:219
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
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
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
	{
		(None)unknown_arg
	}
}

void CgsModule::IOBuffer::LockForWrite(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
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

void CgsModule::VariableEventQueue<16384,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
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

void CgsModule::VariableEventQueue<16384,16>::OutputQueueContents() {
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
	GetFirstEvent(/* parameters */);
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
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer::GetGameStateToNetworkInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:617
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<16384,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
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
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
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
	}
}

void CgsModule::VariableEventQueue<16384,16>::Clear(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
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
}

void CgsModule::VariableEventQueue<13312,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
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
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
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
	}
}

void CgsModule::VariableEventQueue<13312,16>::Clear(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
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
}

void CgsModule::VariableEventQueue<13312,16>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:263
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<13312,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:281
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<4920,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
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
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
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
	}
}

void CgsModule::VariableEventQueue<4920,16>::Clear(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
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
}

void CgsModule::VariableEventQueue<4096,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
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
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
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
	}
}

void CgsModule::VariableEventQueue<4096,16>::Clear(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
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
}

void CgsModule::VariableEventQueue<1536,16>::Clear(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
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
}

void CgsNetwork::NetworkManagerConstructParams::Construct(PlayerManagerConstructParams *  lpPlayerManagerParam, StartTimeManager::ClientReadyCallback *  lpClientReadyCallback, void *  lpClientReadyCallbackData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceBase::SetNetworkManager(BrnNetwork::BrnNetworkManager *  lpNetworkManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkManager::GetStartTimeManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::StartTimeManager::SetGapTillStartTime(Time &  lGapToLeaveBeforeStartTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::OutputBuffer::GetPlayerResultsInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:957
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::PlayerResultsInterface::GetPlayerResultsDataForWriting(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::PlayerResultsData::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::GetActiveRaceCarIndex(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::GetActiveRaceCarIndex(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleGameStateIOInterfaces.h:493
		int32_t liIndex;

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

void CgsModule::VariableEventQueue<1536,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<1536,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<1536,16>::OutputQueueContents() {
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

void CgsModule::VariableEventQueue<1536,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<1536,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<1536,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[160] __PRETTY_FUNCTION__;

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

void BrnNetwork::BrnNetworkModule::GetGameEventQueue(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGui::GuiEventQueueBase<16384,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<16384,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsGui::GuiEventQueueBase<4096,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<4096,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void BrnPhysics::Vehicle::VehicleDriverInputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<4920,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void BrnTraffic::BrnTrafficIO::TrafficNetworkInputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::Construct(ActivateHullEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::SetEventPointer(ActivateHullEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashIO::NetworkInputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleNetworkIOInterfaces.h:166
		int32_t liRaceCar;

	}
}

void CgsModule::EventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent,24>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::Construct(CrashingTrafficUpdateEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::SetEventPointer(CrashingTrafficUpdateEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashIO::NetworkInputInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleNetworkIOInterfaces.h:186
		int32_t liRaceCar;

	}
}

void BrnWorld::CrashIO::NetworkOutputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashIO::NetworkOutputInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleOutputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::Construct(PhysicalTrafficState *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::SetEventPointer(PhysicalTrafficState *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::AggressiveDrivingFlags::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleOutputInterface.h:714
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnRaceCarEntityModuleOutputInterface.h:715
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex lePlayerScoringIndex;

	}
}

void CgsResource::ResourceHandle::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::SetActiveRaceCarIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex  lePlayerScoringIndex, EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::operator++(const BrnGameState::GameStateModuleIO::EPlayerScoringIndex &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateSharedIO.h:158
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex leOldEnumIndex;

	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::ClearCarsInRace() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleGameStateIOInterfaces.h:286
		int32_t liMappingIndex;

		// BrnNetworkModuleGameStateIOInterfaces.h:287
		EActiveRaceCarIndex leActiveRaceCarIndex;

	}
}

void CgsModule::EventQueue<BrnGameState::TakedownEvent,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Construct(TakedownEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::SetEventPointer(TakedownEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::TrafficNetworkOutputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficNetworkInterfaces.h:282
		EActiveRaceCarIndex leRaceCarIndex;

	}
}

void BrnNetwork::BrnNetworkModule::Construct(bool  bEnableJuice) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.cpp:65
		int32_t liIndex;

	}
	CgsGui::GuiEventQueueBase<16384,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<16384,16>::Construct(/* parameters */);
	CgsGui::GuiEventQueueBase<4096,16>::Construct(/* parameters */);
	BrnPhysics::Vehicle::VehicleDriverInputInterface::Construct(/* parameters */);
	BrnTraffic::BrnTrafficIO::TrafficNetworkInputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::Clear(/* parameters */);
	BrnWorld::CrashIO::NetworkInputInterface::Construct(/* parameters */);
	BrnNetworkModuleIO::NetworkToGameStateInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::SetEventPointer(/* parameters */);
	BrnWorld::CrashIO::NetworkOutputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::SetEventPointer(/* parameters */);
	BrnWorld::CrashIO::NetworkOutputInterface::Clear(/* parameters */);
	BrnPhysics::Vehicle::VehicleOutputInterface::Construct(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::Clear(/* parameters */);
	CgsResource::ResourceHandle::Clear(/* parameters */);
	operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::SetActiveRaceCarIndex(/* parameters */);
	BrnGameState::GameStateModuleIO::operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::ClearCarsInRace(/* parameters */);
	BrnNetworkModuleIO::GameStateToNetworkInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Construct(/* parameters */);
	BrnNetworkModuleIO::GameStateToNetworkInterface::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent>::Clear(/* parameters */);
	operator++(/* parameters */);
	CgsModule::EventQueue<BrnGameState::TakedownEvent,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Clear(/* parameters */);
	BrnTraffic::BrnTrafficIO::TrafficNetworkOutputInterface::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::Clear(/* parameters */);
	operator++(/* parameters */);
	CgsSystem::TimerStatusInterface::Clear(/* parameters */);
	CgsSystem::Time::SetFraction(/* parameters */);
	CgsSystem::Time::SetSeconds(/* parameters */);
	CgsSystem::Time::SetFraction(/* parameters */);
}

void CgsModule::VariableEventQueue<4096,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<4096,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<4096,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
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
}

void CgsModule::VariableEventQueue<4096,16>::GetLength(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<4096,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<4096,16>::OutputQueueContents() {
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
	GetFirstEvent(/* parameters */);
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
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<4096,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[160] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:464
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
}

void BrnNetwork::BrnNetworkModule::GetOutputGuiEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:468
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEvent<256>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<47>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::GetOutputGuiEventQueue(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void rw::math::vpu::operator< <VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:492
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:494
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:496
		bool ret;

	}
}

void rw::math::vpu::operator><VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:334
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:336
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:338
		bool ret;

	}
}

void rw::math::vpu::operator< <VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:492
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:494
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:496
		bool ret;

	}
}

void rw::math::vpu::operator><VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:334
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:336
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:338
		bool ret;

	}
}

void rw::math::vpu::operator< <VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:492
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:494
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:496
		bool ret;

	}
}

void rw::math::vpu::operator><VectorAxisZ, VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:334
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:336
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:338
		bool ret;

	}
}

void CgsDev::StrStreamBase::operator<<(const rw::math::vpu::Vector3  lVec) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:720
		float32_t lfX;

		// CgsStrStream.h:721
		float32_t lfY;

		// CgsStrStream.h:722
		float32_t lfZ;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::operator float() {
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

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator float() {
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

void rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::GetFloat() {
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

void BrnNetwork::BrnNetworkPlayer::IsPositionReasonableDEBUG(const rw::math::vpu::Vector3  lInputPos, float_t  lfTolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayer.cpp:90
		Vector3 lMinPos;

		// BrnNetworkPlayer.cpp:91
		Vector3 lMaxPos;

		// BrnNetworkPlayer.cpp:92
		Vector3 lTolerance;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator< <VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator><VectorAxisY, VectorAxisY>(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::operator><VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator< <VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator><VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator< <VectorAxisZ, VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator><VectorAxisZ, VectorAxisZ>(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::operator< <VectorAxisY, VectorAxisY>(/* parameters */);
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

void rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(const rw::math::vpu::Matrix44Affine &  in) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_platform_inline.h:204
		VectorIntrinsicUnion::VectorIntrinsic zero;

		// matrix44affine_operation_platform_inline.h:206
		VectorIntrinsicUnion::VectorIntrinsic negatePos;

		// matrix44affine_operation_platform_inline.h:208
		VectorIntrinsicUnion::VectorIntrinsic[4] tempT;

		// matrix44affine_operation_platform_inline.h:214
		VectorIntrinsicUnion::VectorIntrinsic[4] transposedTransform;

		// matrix44affine_operation_platform_inline.h:219
		VectorIntrinsicUnion::VectorIntrinsic Z;

		// matrix44affine_operation_platform_inline.h:220
		VectorIntrinsicUnion::VectorIntrinsic Y;

		// matrix44affine_operation_platform_inline.h:221
		VectorIntrinsicUnion::VectorIntrinsic X;

	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Matrix44Affine &  a, const rw::math::vpu::Matrix44Affine &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsNormal3x3(const rw::math::vpu::Matrix44Affine &  matrix, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetNormalError3x3(const rw::math::vpu::Matrix44Affine &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetNormalError(const rw::math::vpu::Matrix33 &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// matrix33_operation_platform_inline.h:45
	VecFloat error;

	{
		// matrix33_operation_platform_inline.h:41
		VecFloat one;

		// matrix33_operation_platform_inline.h:42
		Vector3 errorVec;

		// matrix33_operation_platform_inline.h:45
		VecFloat error;

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

void rw::math::vpu::IsZero(const VecFloat  v, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsOrthogonal3x3(const rw::math::vpu::Matrix44Affine &  matrix, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetOrthogonalError3x3(const rw::math::vpu::Matrix44Affine &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetOrthogonalError(const rw::math::vpu::Matrix33 &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// matrix33_operation_inline.h:63
	VecFloat error;

	{
		// matrix33_operation_inline.h:53
		Matrix33 identity;

		// matrix33_operation_inline.h:56
		Matrix33 result;

		// matrix33_operation_inline.h:59
		Vector3 errorVec;

		// matrix33_operation_inline.h:63
		VecFloat error;

	}
}

void rw::math::vpu::Transpose(const rw::math::vpu::Matrix33 &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix33_operation_platform_inline.h:80
		VectorIntrinsicUnion::VectorIntrinsic x;

		// matrix33_operation_platform_inline.h:80
		VectorIntrinsicUnion::VectorIntrinsic y;

		// matrix33_operation_platform_inline.h:80
		VectorIntrinsicUnion::VectorIntrinsic z;

		{
			// matrix33_operation_platform_inline.h:81
			VectorIntrinsicUnion::VectorIntrinsic temp0;

			// matrix33_operation_platform_inline.h:81
			VectorIntrinsicUnion::VectorIntrinsic temp1;

			// matrix33_operation_platform_inline.h:81
			VectorIntrinsicUnion::VectorIntrinsic temp2;

			// matrix33_operation_platform_inline.h:81
			VectorIntrinsicUnion::VectorIntrinsic temp3;

		}
	}
}

void rw::math::vpu::Mult(const rw::math::vpu::Matrix33 &  m, const rw::math::vpu::Matrix33 &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix33_operation_platform_inline.h:67
		VectorIntrinsicUnion::VectorIntrinsic bX;

		// matrix33_operation_platform_inline.h:68
		VectorIntrinsicUnion::VectorIntrinsic bY;

		// matrix33_operation_platform_inline.h:69
		VectorIntrinsicUnion::VectorIntrinsic bZ;

		// matrix33_operation_platform_inline.h:70
		VectorIntrinsicUnion::VectorIntrinsic row0;

		// matrix33_operation_platform_inline.h:70
		VectorIntrinsicUnion::VectorIntrinsic row1;

		// matrix33_operation_platform_inline.h:70
		VectorIntrinsicUnion::VectorIntrinsic row2;

		{
			// matrix33_operation_platform_inline.h:72
			VectorIntrinsicUnion::VectorIntrinsic xSplat;

			// matrix33_operation_platform_inline.h:72
			VectorIntrinsicUnion::VectorIntrinsic ySplat;

			// matrix33_operation_platform_inline.h:72
			VectorIntrinsicUnion::VectorIntrinsic zSplat;

		}
		{
			// matrix33_operation_platform_inline.h:73
			VectorIntrinsicUnion::VectorIntrinsic xSplat;

			// matrix33_operation_platform_inline.h:73
			VectorIntrinsicUnion::VectorIntrinsic ySplat;

			// matrix33_operation_platform_inline.h:73
			VectorIntrinsicUnion::VectorIntrinsic zSplat;

		}
		{
			// matrix33_operation_platform_inline.h:74
			VectorIntrinsicUnion::VectorIntrinsic xSplat;

			// matrix33_operation_platform_inline.h:74
			VectorIntrinsicUnion::VectorIntrinsic ySplat;

			// matrix33_operation_platform_inline.h:74
			VectorIntrinsicUnion::VectorIntrinsic zSplat;

		}
	}
}

void rw::math::vpu::SelfSubtract(const Matrix33 &  a, const rw::math::vpu::Matrix33 &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Subtract(const rw::math::vpu::Matrix33 &  a, const rw::math::vpu::Matrix33 &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Subtract(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsSimilar(const rw::math::vpu::Matrix44Affine &  a, const rw::math::vpu::Matrix44Affine &  b, const VecFloat  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsSimilarV3(VectorIntrinsicInParam  x0, VectorIntrinsicInParam  y0, VectorIntrinsicInParam  z0, VectorIntrinsicInParam  w0, VectorIntrinsicInParam  x1, VectorIntrinsicInParam  y1, VectorIntrinsicInParam  z1, VectorIntrinsicInParam  w1, VectorIntrinsicInParam  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:447
		bool ret;

		{
			// vector_intrinsic_operation_inline.h:448
			VectorIntrinsicUnion::VectorIntrinsic difference0;

			// vector_intrinsic_operation_inline.h:448
			VectorIntrinsicUnion::VectorIntrinsic difference1;

			// vector_intrinsic_operation_inline.h:448
			VectorIntrinsicUnion::VectorIntrinsic difference2;

			// vector_intrinsic_operation_inline.h:448
			VectorIntrinsicUnion::VectorIntrinsic difference3;

			{
				// vector_intrinsic_operation_inline.h:448
				VectorIntrinsicUnion::VectorIntrinsic comparisonValue0;

				// vector_intrinsic_operation_inline.h:448
				VectorIntrinsicUnion::VectorIntrinsic comparisonValue1;

				// vector_intrinsic_operation_inline.h:448
				VectorIntrinsicUnion::VectorIntrinsic comparisonValue2;

				// vector_intrinsic_operation_inline.h:448
				VectorIntrinsicUnion::VectorIntrinsic comparisonValue3;

				// vector_intrinsic_operation_inline.h:448
				int any_greater_than;

				{
					// vector_intrinsic_operation_inline.h:448
					const VectorIntrinsicUnion::VectorIntrinsic mask;

					// vector_intrinsic_operation_inline.h:448
					const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

				}
				{
					// vector_intrinsic_operation_inline.h:448
					const VectorIntrinsicUnion::VectorIntrinsic mask;

					// vector_intrinsic_operation_inline.h:448
					const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

				}
				{
					// vector_intrinsic_operation_inline.h:448
					const VectorIntrinsicUnion::VectorIntrinsic mask;

					// vector_intrinsic_operation_inline.h:448
					const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

				}
				{
					// vector_intrinsic_operation_inline.h:448
					const VectorIntrinsicUnion::VectorIntrinsic mask;

					// vector_intrinsic_operation_inline.h:448
					const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

				}
			}
		}
	}
}

void rw::math::vpu::operator/(const rw::math::vpu::Vector3  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:467
		VectorIntrinsicUnion::VectorIntrinsic result;

		// vector3_operation_inline.h:468
		VectorIntrinsicUnion::VectorIntrinsic divisor;

		{
			// vector3_operation_inline.h:470
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vector3_operation_inline.h:470
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vector3_operation_inline.h:470
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vector3_operation_inline.h:470
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector3_operation_inline.h:470
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

void BrnNetwork::BrnNetworkPlayer::CalculateDiffs(int32_t  liNumSteps, const rw::math::vpu::Matrix44Affine &  lStartMatrix, const rw::math::vpu::Matrix44Affine &  lEndMatrix, Matrix44Affine *  lpTransMatrix, Vector3 *  lpPosDiff) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayer.cpp:145
		Matrix44Affine lTmpMatrix;

		// BrnNetworkPlayer.cpp:146
		Matrix44Affine lIdentityMatrix;

		// BrnNetworkPlayer.cpp:147
		float_t lfSlerpFrac;

		// BrnNetworkPlayer.cpp:148
		VecFloat lDummyAngleOut;

		// BrnNetworkPlayer.cpp:214
		RwInt32 i;

	}
	rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
	rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::IsNormal3x3(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::IsOrthogonal3x3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::SelfSubtract(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::IsNormal3x3(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::IsOrthogonal3x3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::SelfSubtract(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsNormal3x3(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::IsOrthogonal3x3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::SelfSubtract(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsNormal3x3(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::IsOrthogonal3x3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::SelfSubtract(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::IsNormal3x3(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::GetNormalError3x3(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	{
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::IsOrthogonal3x3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::SelfSubtract(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsNormal3x3(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::IsOrthogonal3x3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::SelfSubtract(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
	}
	{
	}
	{
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
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
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
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
	{
		// BrnNetworkPlayer.cpp:220
		Vector3 lOldPos;

		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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

void BrnNetwork::BrnNetworkPlayer::UpdateLatencyValue(uint16_t  lu16FrameSent, uint16_t  lu16FrameRecvd) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayer.cpp:585
		int32_t liIndex;

		// BrnNetworkPlayer.cpp:586
		float_t lfLatencyTime;

		// BrnNetworkPlayer.cpp:587
		float_t lfFPS;

	}
	{
		// BrnNetworkPlayer.cpp:603
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsNetwork::NetworkPlayer::GetLocalConsoleFrameRate(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsNetwork::NetworkPlayer::GetRemoteConsoleFrameRate(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	rw::math::vpu::Max<int32_t>(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
}

void CgsNetwork::Message::IsNewerThan(uint16_t  lu16Frame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::StoreBufferedMessage(const BrnNetwork::UpdateMessage *  lpUpdateMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[21] __FUNCTION__;

	{
		// BrnNetworkPlayer.cpp:886
		int32_t i;

	}
	CgsNetwork::Message::IsNewerThan(/* parameters */);
	UpdateMessage::operator=(/* parameters */);
	operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
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
	CgsNetwork::UInt16IsLargerOrEqualWrapped(/* parameters */);
}

void CgsModule::VariableEventQueue<4920,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<4920,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<4920,16>::OutputQueueContents() {
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

void CgsModule::VariableEventQueue<4920,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<4920,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<4920,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[160] __PRETTY_FUNCTION__;

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

extern void UpdateData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::TimeManager::HasStartFrameBeenSetValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::GetActiveRaceCarInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:360
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModule::GetPlayerVehicleControls() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:431
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::GetGameStateToNetworkInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:495
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkPlayer::IsEliminated() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::GetIsInCarSelect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::IsSendUpdateMessageToBeShown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:514
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkPlayer::HandleSendingUpdateMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayer.cpp:1433
		UpdateData lUpdateData;

		// BrnNetworkPlayer.cpp:1434
		RoadRulesRecvData::NetworkPlayerID lLocalPlayerID;

		// BrnNetworkPlayer.cpp:1435
		EActiveRaceCarIndex leLocalActiveRaceCarIndex;

		// BrnNetworkPlayer.cpp:1436
		uint16_t lu16CurrentFrame;

		// BrnNetworkPlayer.cpp:1437
		BrnWorld::PlayerVehicleControls * lpPlayerVehicleControls;

		// BrnNetworkPlayer.cpp:1438
		CgsNetwork::PlayerManager * lpPlayerManager;

		// BrnNetworkPlayer.cpp:1439
		const RaceCarState * lpRaceCarState;

		// BrnNetworkPlayer.cpp:1440
		const RCEntityActiveRaceCarOutputInterface * lpActiveRaceCarInterface;

		// BrnNetworkPlayer.cpp:1441
		PlayerMenuData * lpLocalPlayerMenuData;

		BrnNetworkModule::GetActiveRaceCarInterface(/* parameters */);
		BrnNetworkModule::GetPlayerVehicleControls(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
		BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
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
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
	BrnNetworkModule::GetGameStateToNetworkInterface(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	BrnNetworkModule::GetGameStateToNetworkInterface(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkModule::IsSendUpdateMessageToBeShown(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsNetwork::NetworkPlayer::GetPlayerID(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsNetwork::GetFrameDiffWrapped16(uint16_t  lu16FrameA, uint16_t  lu16FrameB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMessage.h:441
		uint16_t lu16Option1;

		// CgsMessage.h:442
		uint16_t lu16Option2;

	}
}

void rw::core::stdc::Min(uint16_t  a, uint16_t  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::CheckForPlayerPausedTimeout(uint16_t  lu16CurrentFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayer.cpp:1674
		bool lbWasPaused;

	}
	{
		// BrnNetworkPlayer.cpp:1681
		RwUInt16 lu16FrameGap;

		CgsNetwork::GetFrameDiffWrapped16(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsNetwork::NetworkPlayer::GetPlayerID(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsNetwork::NetworkPlayer::GetPlayerID(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::AddEvent(const const CompletedFburnChallengesData &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[151] __PRETTY_FUNCTION__;

	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		// CgsBaseEventQueue.h:313
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
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
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
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkModule::GetNetworkToGameStateInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:487
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkToGameStateInterface::GetCompletedChallengesQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::_FburnChallengeStatusMessageArrivedCallback(CgsNetwork::ReliableMessage *  lpMessage, RoadRulesRecvData::NetworkPlayerID  lSendingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayer.cpp:2319
		BrnNetwork::BrnNetworkPlayer * lpPlayer;

		// BrnNetworkPlayer.cpp:2320
		BrnNetwork::FburnChallengeStatusMessage * lpFreeburnChallengeStatusMessage;

		// BrnNetworkPlayer.cpp:2321
		CompletedFburnChallengesData lCompletedChallengesData;

	}
	{
		// BrnNetworkPlayer.cpp:2334
		NetworkToGameStateInterface * lpNetworkToGameStateInterface;

		BrnNetworkModule::GetNetworkToGameStateInterface(/* parameters */);
		BrnNetworkModuleIO::NetworkToGameStateInterface::GetCompletedChallengesQueue(/* parameters */);
		CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::AddEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::CompletedFburnChallengesData>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkModule::GetNetworkEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:530
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
}

void BrnNetwork::BrnNetworkModule::GetNetworkEventQueue(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkModule::GetNetworkManager(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::ServerInterfaceCustomCommands::ConvertError(int  liMessageCode, int  liErrorCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnServerInterfaceCustomCommands.cpp:1081
		int32_t liErrorMappingIndex;

		// BrnServerInterfaceCustomCommands.cpp:1092
		char[5] lacMessageCode;

		// BrnServerInterfaceCustomCommands.cpp:1093
		char[5] lacErrorCode;

	}
	CgsCore::MemCpy(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	{
		// BrnServerInterfaceCustomCommands.cpp:1101
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnServerInterfaceCustomCommands.cpp:1064
		char[5] lacMessageCode;

		CgsCore::MemCpy(/* parameters */);
		{
			// BrnServerInterfaceCustomCommands.cpp:1068
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::ServerInterfaceCustomCommands::EndAction(int32_t  liMessageCode, int32_t  liErrorCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ServerInterfaceCustomCommands::UploadFreeBurnLobbyStats(const OnlineGameResults *  lpResults, int32_t  liNumberOfRivals, int32_t  liNumberOfFreeburnChallengesCompleted) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnNetwork::PlayerParamsBase::SetConsoleFrameRate(CgsSystem::EFrameRate  leConsoleFrameRate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerParams.h:309
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::PlayerParamsBase::SetPlayerTeam(BrnGameState::GameStateModuleIO::EPlayerTeam  lePlayerTeam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::SetReady(bool  lbIsReady) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::SetPlaying(bool  lbIsPlaying) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::SetMarkedPlayerID(RoadRulesRecvData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::SetRank(int32_t  liRank) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::SetCarColourIndex(uint16_t  lu16CarColourIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::SetPaintFinishIndex(uint16_t  lu16PaintFinishIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::SetFreeBurnCarID(CgsID  lCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetConsoleFrameRate(/* parameters */);
	SetFreeBurnCarID(/* parameters */);
	SetPlaying(/* parameters */);
	SetPlayerTeam(/* parameters */);
	SetMarkedPlayerID(/* parameters */);
	SetPaintFinishIndex(/* parameters */);
	SetRank(/* parameters */);
	CgsNetwork::NetworkEncodeUncompressedCgsID(/* parameters */);
}

void CgsNetwork::NetworkPlayer::GetConnectionData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::GetConsoleFrameRate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::Prepare(NetworkAdapter *  lpNetworkAdapter, const TimerStatus *  lpTimerStatus, const char *  lpacPlayerName, CgsSystem::EFrameRate  leLocalConsoleFrameRate, CgsSystem::EFrameRate  leRemoteConsoleFrameRate, RoadRulesRecvData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayer.cpp:440
		PlayerParams lPlayerParams;

		// BrnNetworkPlayer.cpp:441
		int32_t liIndex;

		// BrnNetworkPlayer.cpp:442
		CgsNetwork::ServerInterfaceGames * lpGameComponent;

	}
	PlayerParams::PlayerParams(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
	PlayerParamsBase::GetConsoleFrameRate(/* parameters */);
	SetEliminated(/* parameters */);
	CgsContainers::FastBitArray<2000>::UnSetAll(/* parameters */);
	PlayerParams::~PlayerParams(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::CameraPS3::GetRequestedPlayerID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkPlayerStats::GetTimeStamp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::operator>(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkPlayerStats::IsCalculated() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::GetRank() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfacePlayerInfoDataBase::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfacePlayerInfoDataBase::GetRank() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::NetworkPlayerStats::GetStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEventNetworkPlayerStats() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NetworkPlayerStats() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern NetworkPlayerStats & operator=(const const NetworkPlayerStats &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<245>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameResults::GameModeToEvent(BrnGameState::GameStateModuleIO::EGameModeType  leModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkGameResults.cpp:290
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::LiveRevengeDebugComponent::UnregisterAll(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeDebugComponent.cpp:273
		LiveRevengeDebugComponent * lpDebugComponent;

		// BrnNetworkLiveRevengeDebugComponent.cpp:274
		int32_t liRivalIndex;

		// BrnNetworkLiveRevengeDebugComponent.cpp:275
		int32_t liNumberOfRivals;

	}
	CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::operator[](/* parameters */);
}

void BrnNetwork::LiveRevengeDebugComponent::RegisterAll(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeDebugComponent.cpp:246
		LiveRevengeDebugComponent * lpDebugComponent;

		// BrnNetworkLiveRevengeDebugComponent.cpp:247
		int32_t liRivalIndex;

		// BrnNetworkLiveRevengeDebugComponent.cpp:248
		int32_t liNumberOfRivals;

		CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::GetLength(/* parameters */);
		CgsContainers::Array<BrnNetwork::LiveRevengeRelationship,250u>::operator[](/* parameters */);
	}
}

void CgsNetwork::ServerInterfaceComponent::GetStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::StatsDebugComponent::_GetEloCallbackFunction(void *  lpData, void *  lpParamData, bool  lbSuccess) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStatsDebugComponent.cpp:328
		StatsDebugComponent * lpStatsDebugComponent;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnNetwork::StatsDebugComponent::_SetEloCallbackFunction(void *  lpData, void *  lpParamData, bool  lbSuccess) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStatsDebugComponent.cpp:370
		StatsDebugComponent * lpStatsDebugComponent;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnResource::GetDebugAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::AllocateMemoryResource(uint32_t  size, uint32_t  alignment, const char8_t *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::ResourceDescriptor(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptorType<0u>::BaseResourceDescriptorType(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::BaseResourceDescriptor(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<14000,16>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:245
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BuddyManagerDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerDebugComponent.cpp:113
		rw::IResourceAllocator * lpResourceAllocator;

		BrnResource::GetDebugAllocator(/* parameters */);
		rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
		CgsModule::VariableEventQueue<14000,16>::Construct(/* parameters */);
		CgsModule::VariableEventQueue<14000,16>::Prepare(/* parameters */);
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

void CgsModule::VariableEventQueue<14000,16>::Clear(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
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
}

void CgsGui::GuiEventQueueBase<16384,16>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<16384,16>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:245
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<13312,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<13312,16>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:245
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::StatsInputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnNetwork::StatsRequestEvent,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::StatsRequestEvent>::Construct(StatsRequestEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::StatsRequestEvent>::SetEventPointer(StatsRequestEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::StatsRequestEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::StatsInputInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerDebugComponent::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::PlayerName::Clear(/* parameters */);
	{
		// BrnNetworkBuddyManagerDebugComponent.cpp:160
		rw::IResourceAllocator * lpResourceAllocator;

		BrnResource::GetDebugAllocator(/* parameters */);
		CgsModule::VariableEventQueue<14000,16>::Release(/* parameters */);
		CgsModule::VariableEventQueue<14000,16>::Destruct(/* parameters */);
		rw::IResourceAllocator::FreeMemoryResource(/* parameters */);
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

void CgsModule::VariableEventQueue<14000,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<14000,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<14000,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void BrnNetwork::BuddyManagerDebugComponent::ProcessOutgoingEvents(NetworkEventQueue *  lpEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerDebugComponent.cpp:374
		const CgsModule::Event * lpEvent;

		// BrnNetworkBuddyManagerDebugComponent.cpp:375
		int32_t liEventSize;

		// BrnNetworkBuddyManagerDebugComponent.cpp:376
		int32_t liEventType;

		CgsModule::VariableEventQueue<14000,16>::GetFirstEvent(/* parameters */);
		{
			// BrnNetworkBuddyManagerDebugComponent.cpp:441
			const NetworkOutUnreadChatMessage * lpChatEvent;

		}
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnNetworkBuddyManagerDebugComponent.cpp:394
		const NetworkOutBuddyInformation * lpInformation;

		// BrnNetworkBuddyManagerDebugComponent.cpp:395
		int32_t liBuddyIndex;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkBuddyManagerDebugComponent.cpp:387
		const NetworkOutBuddyCount * lpCountEvent;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsNetwork::PlayerName::GetPlayerName(/* parameters */);
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnNetworkBuddyManagerDebugComponent.cpp:433
		const NetworkOutChatMessage * lpChatEvent;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer::GetNetworkEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:708
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnServerInterfaceTelemetry::Update(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnServerInterfaceTelemetry.cpp:175
		const CgsModule::Event * lpEvent;

		// BrnServerInterfaceTelemetry.cpp:176
		int32_t liEventSize;

		// BrnServerInterfaceTelemetry.cpp:177
		int32_t liEventType;

		BrnNetworkModuleIO::PostSimulationInputBuffer::GetNetworkEventQueue(/* parameters */);
		CgsModule::VariableEventQueue<14000,16>::GetFirstEvent(/* parameters */);
		{
			// BrnServerInterfaceTelemetry.cpp:187
			const NetworkInTelemetryEvent * lpTelemetryEvent;

		}
		BrnNetworkModuleIO::PostSimulationInputBuffer::GetNetworkEventQueue(/* parameters */);
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

void CgsModule::VariableEventQueue<14000,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
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
}

void CgsModule::VariableEventQueue<14000,16>::GetLength(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<14000,16>::OutputQueueContents() {
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
	GetFirstEvent(/* parameters */);
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
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<14000,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[161] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:464
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<7>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerDebugComponent::LeaveFeedback(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerDebugComponent.cpp:502
		BrnNetwork::BuddyManagerDebugComponent * lpBuddyDebug;

		// BrnNetworkBuddyManagerDebugComponent.cpp:504
		NetworkInSendFeedback lEvent;

		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkInSendFeedback>(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<12>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerDebugComponent::JoinBuddy(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerDebugComponent.cpp:481
		BrnNetwork::BuddyManagerDebugComponent * lpBuddyDebug;

		// BrnNetworkBuddyManagerDebugComponent.cpp:483
		NetworkInJoinBuddy lEvent;

		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkInJoinBuddy>(/* parameters */);
	}
}

void BrnNetwork::BuddyManagerDebugComponent::GetEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<10>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerDebugComponent::AcceptInvite(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerDebugComponent.cpp:334
		BrnNetwork::BuddyManagerDebugComponent * lpBuddyDebug;

		// BrnNetworkBuddyManagerDebugComponent.cpp:341
		NetworkInAcceptInvite lEvent;

		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkInAcceptInvite>(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<8>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerDebugComponent::SendInvite(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerDebugComponent.cpp:317
		BrnNetwork::BuddyManagerDebugComponent * lpBuddyDebug;

		// BrnNetworkBuddyManagerDebugComponent.cpp:319
		NetworkInSendInvite lEvent;

		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkInSendInvite>(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<4>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerDebugComponent::SendTestMessage(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerDebugComponent.cpp:299
		BrnNetwork::BuddyManagerDebugComponent * lpBuddyDebug;

		// BrnNetworkBuddyManagerDebugComponent.cpp:301
		NetworkInSendChatMessage lEvent;

		CgsCore::StrnCpy(/* parameters */);
	}
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkInSendChatMessage>(/* parameters */);
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<5>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerDebugComponent::PrintNextUnreadMessage(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerDebugComponent.cpp:282
		BrnNetwork::BuddyManagerDebugComponent * lpBuddyDebug;

		// BrnNetworkBuddyManagerDebugComponent.cpp:284
		NetworkInGetNextUnreadMessage lEvent;

		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkInGetNextUnreadMessage>(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<3>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerDebugComponent::PrintMessage(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerDebugComponent.cpp:264
		BrnNetwork::BuddyManagerDebugComponent * lpBuddyDebug;

		// BrnNetworkBuddyManagerDebugComponent.cpp:266
		NetworkInGetChatMessage lEvent;

		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkInGetChatMessage>(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<2>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerDebugComponent::PrintBuddyInfo(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerDebugComponent.cpp:248
		BrnNetwork::BuddyManagerDebugComponent * lpBuddyDebug;

		// BrnNetworkBuddyManagerDebugComponent.cpp:250
		NetworkInGetBuddies lEvent;

		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkInGetBuddies>(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<1>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BuddyManagerDebugComponent::GetBuddyCount(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkBuddyManagerDebugComponent.cpp:232
		BrnNetwork::BuddyManagerDebugComponent * lpBuddyDebug;

		// BrnNetworkBuddyManagerDebugComponent.cpp:234
		NetworkInBuddyCountRequest lEvent;

		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkInBuddyCountRequest>(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<44>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::_CheckpointTriggeredMessageArrivedCallback(CgsNetwork::ReliableMessage *  lpMessage, RoadRulesRecvData::NetworkPlayerID  lSendingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayer.cpp:2441
		BrnNetwork::CheckpointTriggeredMessage * lpCheckpointTriggeredMessage;

		// BrnNetworkPlayer.cpp:2442
		NetworkOutRemotePlayerHitCheckpoint lNetworkOutEvent;

	}
	{
		// BrnNetworkPlayer.cpp:2450
		BrnNetwork::BrnNetworkPlayer * lpPlayer;

	}
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutRemotePlayerHitCheckpoint>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<61>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::_ActiveFreeburnChallengeMessageArrivedCallback(CgsNetwork::ReliableMessage *  lpMessage, RoadRulesRecvData::NetworkPlayerID  lSendingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayer.cpp:2359
		RoadRulesRecvData::NetworkPlayerID[7] laNetworkPlayerIDs;

		// BrnNetworkPlayer.cpp:2360
		NetworkOutActiveFburnChallengeEvent lActiveFreeburnChallengeEvent;

		// BrnNetworkPlayer.cpp:2361
		int32_t liIndex;

		// BrnNetworkPlayer.cpp:2362
		BrnNetwork::BrnNetworkPlayer * lpNetworkPlayer;

		// BrnNetworkPlayer.cpp:2363
		BrnNetwork::ActiveFburnChallengeMessage * lpActiveChallengeMessage;

	}
	BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutActiveFburnChallengeEvent>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<60>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::_FreeburnChallengeMessageArrivedCallback(CgsNetwork::ReliableMessage *  lpMessage, RoadRulesRecvData::NetworkPlayerID  lSendingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayer.cpp:2268
		BrnNetwork::BrnNetworkPlayer * lpPlayer;

		// BrnNetworkPlayer.cpp:2269
		BrnNetwork::FreeburnChallengeMessage * lpFreeburnChallengeMessage;

		// BrnNetworkPlayer.cpp:2270
		NetworkOutFreeburnChallenge lNetworkOutEvent;

	}
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutFreeburnChallenge>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<59>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::_ShowtimeSwitchMessageArrivedCallback(CgsNetwork::ReliableMessage *  lpMessage, RoadRulesRecvData::NetworkPlayerID  lSendingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayer.cpp:2218
		BrnNetwork::BrnNetworkPlayer * lpPlayer;

		// BrnNetworkPlayer.cpp:2219
		BrnNetwork::ShowtimeSwitchMessage * lpShowtimeSwitchMessage;

		// BrnNetworkPlayer.cpp:2220
		NetworkOutShowtimeSwitch lNetworkOutEvent;

	}
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutShowtimeSwitch>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<57>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::_BurnoutSkillzMessageArrivedCallback(CgsNetwork::ReliableMessage *  lpMessage, RoadRulesRecvData::NetworkPlayerID  lSendingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayer.cpp:2167
		BrnNetwork::BrnNetworkPlayer * lpPlayer;

		// BrnNetworkPlayer.cpp:2168
		BrnNetwork::BurnoutSkillzMessage * lpBurnoutSkillzMessage;

		// BrnNetworkPlayer.cpp:2169
		NetworkOutBurnoutSkillzChanged lNetworkOutEvent;

	}
	BrnGameState::BurnoutSkillzData::Clear(/* parameters */);
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutBurnoutSkillzChanged>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<56>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::_BurningHomeRunSwitchRunnerMessageArrivedCallback(CgsNetwork::ReliableMessage *  lpMessage, RoadRulesRecvData::NetworkPlayerID  lSendingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayer.cpp:2118
		BrnNetwork::BrnNetworkPlayer * lpNetPlayer;

		// BrnNetworkPlayer.cpp:2119
		BrnNetwork::BurningHomeRunSwitchRunnerMessage * lpSwitchRunnerMessage;

		// BrnNetworkPlayer.cpp:2120
		NetworkOutSwitchBurningHomeRunRunner lSwitchRunnerEvent;

	}
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutSwitchBurningHomeRunRunner>(/* parameters */);
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<42>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::_CollectableMessageArrivedCallback(CgsNetwork::ReliableMessage *  lpMessage, RoadRulesRecvData::NetworkPlayerID  lSendingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayer.cpp:2037
		NetworkOutNetworkPlayerCollectableEvent lNetworkPlayerCollectableEvent;

		// BrnNetworkPlayer.cpp:2038
		BrnNetwork::CollectableMessage * lpCollectabledMessage;

		// BrnNetworkPlayer.cpp:2039
		BrnNetwork::BrnNetworkPlayer * lpNetPlayer;

		// BrnNetworkPlayer.cpp:2040
		BrnNetwork::CollectableMessage::ECollectableType leCollectableType;

	}
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutNetworkPlayerCollectableEvent>(/* parameters */);
}

void BrnPhysics::Vehicle::BrnNetworkDriverControls::BrnNetworkDriverControls() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::BrnPlayerDriverControls::BrnPlayerDriverControls() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Event() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::GetVehicleDriverInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:376
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::UpdateMessage::GetUpdateData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::BrnNetworkDriverControls::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::BrnPlayerDriverControls::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkManager::GetVoIPManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::IsRecvUpdateMessageToBeShown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:522
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Vehicle::VehicleDriverInputInterface::UpdateNetworkDriver(const BrnNetworkDriverControls *  lpDriverControls) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<45>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::TellNetworkCarAboutRecievedUpdateMessage(uint16_t  lu16OurFramesSinceStart, BrnNetwork::UpdateMessage *  lpUpdateMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayer.cpp:1106
		NetworkOutPlayerCarSelectStatus lNetworkCarSelectStatusEvent;

		// BrnNetworkPlayer.cpp:1107
		EActiveRaceCarIndex leCrasherRaceCarIndex;

		// BrnNetworkPlayer.cpp:1108
		EActiveRaceCarIndex lePlayerActiveRaceCarIndex;

		// BrnNetworkPlayer.cpp:1109
		VehicleDriverInputInterface * lpVehicleDriverInputInterface;

		// BrnNetworkPlayer.cpp:1110
		BrnNetworkDriverControls lDriver;

		// BrnNetworkPlayer.cpp:1111
		const UpdateData * lpUpdateData;

		// BrnNetworkPlayer.cpp:1112
		PlayerMenuData * lpMenuData;

		// BrnNetworkPlayer.cpp:1113
		VoIPManager * lpVoipManager;

		BrnPhysics::Vehicle::BrnNetworkDriverControls::BrnNetworkDriverControls(/* parameters */);
	}
	CgsNetwork::NetworkPlayer::GetLocalConsoleFrameRate(/* parameters */);
	CgsNetwork::NetworkPlayer::GetRemoteConsoleFrameRate(/* parameters */);
	BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
	BrnNetworkModule::GetVehicleDriverInputInterface(/* parameters */);
	UpdateMessage::GetUpdateData(/* parameters */);
	BrnPhysics::Vehicle::BrnNetworkDriverControls::Clear(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	{
		// BrnNetworkPlayer.cpp:1144
		RoadRulesRecvData::NetworkPlayerID lLocalPlayerID;

		CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
		BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	CgsNetwork::NetworkManager::GetVoIPManager(/* parameters */);
	BrnNetworkModule::IsRecvUpdateMessageToBeShown(/* parameters */);
	BrnPhysics::Vehicle::VehicleDriverInputInterface::UpdateNetworkDriver(/* parameters */);
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerCarSelectStatus>(/* parameters */);
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnNetwork::BrnNetworkPlayer::TellNetworkCarAboutBufferedUpdateMessage(uint16_t  lu16FramesSinceStart, BrnNetwork::UpdateMessage *  lpUpdateMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::WrapFrameToValidRange(uint16_t *  lpu16Frame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Abs<int16_t>(const const int16_t &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<58>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::CheckForNewMessages(uint16_t  lu16FramesSinceStart) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayer.cpp:722
		uint16_t lu16LatencyAffectedFrame;

		// BrnNetworkPlayer.cpp:723
		int32_t liLatencyAffectedFrameWrapCount;

	}
	CgsNetwork::NetworkPlayer::GetLocalConsoleFrameRate(/* parameters */);
	CgsNetwork::NetworkPlayer::GetRemoteConsoleFrameRate(/* parameters */);
	WrapFrameToValidRange(/* parameters */);
	{
		// BrnNetworkPlayer.cpp:748
		bool lbPastMessage;

		UpdateMessage::GetUpdateData(/* parameters */);
	}
	{
		// BrnNetworkPlayer.cpp:838
		NetworkOutShowtimeUpdate lNetworkOutEvent;

		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutShowtimeUpdate>(/* parameters */);
		CgsNetwork::Message::Release(/* parameters */);
	}
	{
		// BrnNetworkPlayer.cpp:739
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	UpdateMessage::GetUpdateData(/* parameters */);
	UpdateMessage::GetU16FramesSinceStart(/* parameters */);
	CgsNetwork::Message::IsNewerThan(/* parameters */);
	{
		// BrnNetworkPlayer.cpp:764
		bool lbMessageShouldBeBuffered;

		// BrnNetworkPlayer.cpp:765
		float_t lfTimeDiff;

		UpdateMessage::GetU16FramesSinceStart(/* parameters */);
		CgsNetwork::Message::IsNewerThan(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsNetwork::UInt16IsLargerOrEqualWrapped(/* parameters */);
	CgsNetwork::UInt16IsLargerOrEqualWrapped(/* parameters */);
}

void CgsSystem::TimerStatus::GetCurrentTimeStep() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::Update(const TimerStatus *  lpTimerStatus, uint16_t  lu16CurrentFrame, bool  lbWeAreInGame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayer.cpp:1308
		uint16_t lu16BuffMsgPlusSome;

		WrapFrameToValidRange(/* parameters */);
		CgsNetwork::UInt16IsLargerWrapped(/* parameters */);
		WrapFrameToValidRange(/* parameters */);
	}
	{
		// BrnNetworkPlayer.cpp:1332
		uint16_t lu16FramesSinceStart;

		// BrnNetworkPlayer.cpp:1333
		uint16_t lu16LatencyAffectedFrame;

		// BrnNetworkPlayer.cpp:1334
		BrnNetwork::UpdateMessage * lpUpdateMessage;

		WrapFrameToValidRange(/* parameters */);
		UpdateMessage::GetUpdateData(/* parameters */);
		UpdateMessage::GetUpdateData(/* parameters */);
		CgsNetwork::Message::IsNewerThan(/* parameters */);
	}
	CgsNetwork::UInt16IsLargerOrEqualWrapped(/* parameters */);
}

void CgsNetwork::PlayerManager::SetDiskAccessible(bool  lbDiskAccessible) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<44>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<38>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<64>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NetworkOutGameParamsChanged() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NetworkEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::LandmarkIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutGameParamsChanged::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkOutEventTypeDefs.h:1264
		uint32_t luRoundIndex;

		// BrnNetworkOutEventTypeDefs.h:1265
		LightTriggerId lTriggerID;

	}
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

void CgsNetwork::ServerInterfaceGameParamsBase::IsRankedGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<15>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfacePlayerParamsBase::GetID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::GetMarkedPlayerID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::GetFreeBurnCarID(CgsID *  lpCarId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerParams.h:352
		char[13] lacCarID;

	}
}

void CgsNetwork::NetworkDecodeUncompressedCgsID(char *  lpcBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsNetworkUtils.h:201
		int32_t liChar;

	}
}

void BrnNetwork::PlayerParamsBase::GetCarColourIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::GetPaintFinishIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerChangedCarEvent::SetNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerChangedCarEvent::SetModelID(CgsID  lModelID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerChangedCarEvent::SetWheelID(CgsID  lWheelID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<18>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerChangedCarColourEvent::SetNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerChangedCarColourEvent::SetActiveRaceCarIndex(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerChangedCarColourEvent::SetCarColourIndex(uint16_t  lu16CarColourIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerChangedCarColourEvent::SetPaintFinishIndex(uint16_t  lu16CarPaintFinishIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<19>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkManager::GetHostMigrationManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetBuddyManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerAddedEvent::SetNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerAddedEvent::SetModelID(CgsID  lModelID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerAddedEvent::SetWheelID(CgsID  lWheelID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::GetPlayerTeam() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerAddedEvent::SetTeam(BrnGameState::GameStateModuleIO::EPlayerTeam  leTeam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerAddedEvent::SetLocalPlayer(bool  lbIsLocalPlayer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerAddedEvent::SetCarColourIndex(uint16_t  lu16CarColourIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerAddedEvent::SetCarPaintFinishIndex(uint16_t  lu16CarPaintFinishIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<16>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkManager::GetStateManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerFinalisedEvent::SetNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<20>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerRemovedEvent::SetNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerRemovedEvent::SetIsLocalPlayerInGame(bool  lbIsLocalPlayerInGame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerRemovedEvent::SetIsLocalPlayerLeavingGame(bool  lbIsLocalPlayerInGame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerRemovedEvent::SetPlayerName(PlayerName *  lpPlayerName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<17>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkPlayerDisconnectedEvent::Construct(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID, EActiveRaceCarIndex  leActiveRaceCarIndex, BrnNetwork::BrnNetworkModuleIO::NetworkPlayerDisconnectedEvent::EDisconnectStatus  leDisconnectStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkEvent<22>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::StrnCpy(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void std::atoi(const char *  _Str) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::RoadRulesDownloadData::SetDownloadedRoadRulesData(char *  lacPlayerName, int32_t  liScoreType, int32_t  liQuantisedScore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnStreetData::operator++(const BrnStreetData::ScoreType &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeData.h:56
		BrnStreetData::ScoreType leOldEnumIndex;

	}
}

void BrnNetwork::RoadRulesLocalPlayerDownloadedScores::Construct(uint64_t  lu64RoadRulesID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::RoadRulesLocalPlayerDownloadedScores::SetDownloadedRoadRulesData(int32_t  liScoreType, int32_t  liScore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ServerInterfaceCustomCommands::HandleIncomingMessage(LobbyApiMsgT *  lpMsg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnServerInterfaceCustomCommands.cpp:290
		char[100][20] laServerPlayerNames;

		// BrnServerInterfaceCustomCommands.cpp:291
		bool lbSuccess;

		// BrnServerInterfaceCustomCommands.cpp:292
		void * lpParamData;

	}
	{
		// BrnServerInterfaceCustomCommands.cpp:467
		int32_t liFriendIndex;

		{
			// BrnServerInterfaceCustomCommands.cpp:471
			const char * lpcFriends;

			CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
			CgsCore::MemSet(/* parameters */);
		}
	}
	{
		// BrnServerInterfaceCustomCommands.cpp:357
		RoadRulesDownloadData lDownloadData;

		// BrnServerInterfaceCustomCommands.cpp:358
		BrnStreetData::ScoreType leScoreType;

		// BrnServerInterfaceCustomCommands.cpp:359
		char[20] lacPlayerName;

		// BrnServerInterfaceCustomCommands.cpp:360
		char[11] lacScoreValue;

		// BrnServerInterfaceCustomCommands.cpp:361
		char * lpcToken;

		CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
		CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
		CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
		std(/* parameters */);
		RoadRulesDownloadData::SetDownloadedRoadRulesData(/* parameters */);
		CgsCore::StrnCpy(/* parameters */);
		BrnStreetData::operator++(/* parameters */);
		CgsCore::MemSet(/* parameters */);
		CgsCore::MemSet(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnServerInterfaceCustomCommands.cpp:412
		RoadRulesLocalPlayerDownloadedScores lDownloadData;

		// BrnServerInterfaceCustomCommands.cpp:413
		BrnStreetData::ScoreType leScoreType;

		// BrnServerInterfaceCustomCommands.cpp:414
		uint64_t lu64UniqueID;

		// BrnServerInterfaceCustomCommands.cpp:415
		uint32_t luUniqueIDLowBits;

		// BrnServerInterfaceCustomCommands.cpp:416
		uint32_t luUniqueIDHighBits;

		// BrnServerInterfaceCustomCommands.cpp:417
		char[13] lacUniqueID;

		// BrnServerInterfaceCustomCommands.cpp:418
		char[11] lacScoreValue;

		// BrnServerInterfaceCustomCommands.cpp:419
		char * lpcToken;

		CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
		CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
		CgsNetwork::ServerInterfaceDirtySock::GetMessageBuffer(/* parameters */);
		std(/* parameters */);
		RoadRulesLocalPlayerDownloadedScores::Construct(/* parameters */);
		std(/* parameters */);
		BrnStreetData::operator++(/* parameters */);
		RoadRulesLocalPlayerDownloadedScores::SetDownloadedRoadRulesData(/* parameters */);
		std(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::ServerInterfaceCustomCommands::_CustomCommandSentCallback(LobbyApiRefT *  lpApiRef, LobbyApiMsgT *  lpMsg, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnServerInterfaceCustomCommands.cpp:273
		BrnNetwork::ServerInterfaceCustomCommands * lpServerInterfaceCustomCommands;

	}
}

void BrnNetwork::BrnNetworkModuleIO::OutputBuffer::GetInGamePlayerStatusInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:939
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::SetGameName(const char *  lpcGameName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::SetLocalPlayerIsHost(bool  lbIsLocalPlayerHost) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::GetPlayerStatusDataForWriting(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusData::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeRelationship::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::UniquePlayerIDPS3::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CommonRelationship::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CommonRelationshipStats::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeManager::GetRevengeRelationship(RoadRulesRecvData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkPlayer::IsWaitingForFirstUpdate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::OutputBuffer::GetOnlineLobbyPlayerStatusInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:979
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::OnlineLobbyPlayerStatusInterface::GetPlayerLobbyData(int32_t  liPlayerIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::LobbyPlayerStatusData::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::GetPlayerColourIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::IsDeveloper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::PlayerManager::IsLocalPlayer(RoadRulesRecvData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::IsPlaying() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerParamsBase::IsReady() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::SetNumPlayers(int32_t  liNumPlayers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<555>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::GetTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::GetFrameCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::GetBaseTimeStep() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::OutputBuffer::SetInvitesOpen(bool  lbInvitesOpen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::GetHeadingType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::GetHeading(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::GetNumberOfHeadings() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ScoreboardDebugComponent::HandleScoreboardHeadingEvent(NetworkOutScoreboardHeadingList *  lpHeadingEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::GetHeadingType(/* parameters */);
	{
		// BrnNetworkScoreboardDebugComponent.cpp:359
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::GetHeadingType(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkScoreboardDebugComponent.cpp:285
		int32_t liCategoryIndex;

		CgsCore::StrnCpy(/* parameters */);
		BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::GetHeading(/* parameters */);
	}
	{
		// BrnNetworkScoreboardDebugComponent.cpp:313
		int32_t liIndexIndex;

	}
	{
		// BrnNetworkScoreboardDebugComponent.cpp:337
		int32_t liVariationIndex;

	}
	CgsCore::StrnCpy(/* parameters */);
	BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::GetHeading(/* parameters */);
	CgsCore::StrnCpy(/* parameters */);
	BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::GetHeading(/* parameters */);
}

void BrnNetwork::BrnNetworkModuleIO::NetworkOutScoreboardEvent::GetScoreboard() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::Scoreboard::GetTitle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::Scoreboard::GetColumn(int32_t  liColumnNumber) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ScoreboardColumn::GetTitle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::Scoreboard::GetNumberOfColumns() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::Scoreboard::GetRow(int32_t  liRowNumber) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::Scoreboard::GetNumberOfRows() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ScoreboardDebugComponent::PrintScoreboard(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkScoreboardDebugComponent.cpp:396
		ScoreboardDebugComponent * lpScoreboardDebugComponent;

		// BrnNetworkScoreboardDebugComponent.cpp:397
		const Scoreboard * lpScoreboard;

		// BrnNetworkScoreboardDebugComponent.cpp:398
		int32_t liRowIndex;

		// BrnNetworkScoreboardDebugComponent.cpp:399
		int32_t liColumnIndex;

	}
	ScoreboardColumn::GetTitle(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	Scoreboard::GetColumn(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	Scoreboard::GetRow(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	Scoreboard::GetTitle(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnNetwork::ScoreboardDebugComponent::HandleScoreboardEvent(NetworkOutScoreboardEvent *  lpScoreboardEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnStreetData::ChallengeData::SetScore(BrnStreetData::ScoreType  leScoreType, int32_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<2u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void BrnStreetData::ScoreList::SetScore(BrnStreetData::ScoreType  leScoreType, int32_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::RoadRulesManagerDebugComponent::TriggerPersonalBest(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkRoadRulesManagerDebugComponent.cpp:101
		NetworkInRoadRulesPBEvent lRoadRulesPB;

		// BrnNetworkRoadRulesManagerDebugComponent.cpp:102
		RoadRulesManagerDebugComponent * lpRoadRulesManagerDebugCmpt;

	}
	BrnStreetData::ChallengeData::SetScore(/* parameters */);
	CgsContainers::BitArray<2u>::SetBit(/* parameters */);
	BrnStreetData::ScoreList::SetScore(/* parameters */);
	CgsContainers::BitArray<2u>::SetBit(/* parameters */);
}

void BrnNetwork::BrnServerInterfacePS3::Prepare(ServerInterfacePrepareParams *  lpPrepareParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[8] __FUNCTION__;

	{
		// BrnServerInterfacePS3.cpp:112
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsNetwork::NetworkManagerPrepareParams::VersionDisplayPrepareParams::Construct(const char *  lpcVersion, CgsNetwork::EServerType  leServerType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkAdapterPrepareParams::PlatformIDs::Construct(const CgsNetwork::NetworkAdapterPrepareParams::PlatformIDs::SceNpCommunicationId *  lpCommunicationID, const char *  lpcNPTitleID, const char *  lpcServiceIDPrefix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkAdapterPrepareParams::Construct(CgsNetwork::EServerType  leServerType, HeapMalloc *  lpHeapMalloc, CgsNetwork::NetworkManager *  lpNetworkManager, CgsNetwork::ServerInterface *  lpServerInterface, CgsNetwork::NetworkAdapterPrepareParams::PlatformIDs  lTitleID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkManagerPrepareParams::PlayerManagerPrepareParams::Construct(CgsNetwork::ServerInterface *  lpServerInterface, PlayerManagerPrepareParams::OnReceivedFromWrongIPCallback *  lpfOnReceivedFromWrongIPCallback, PlayersConnectionManager::ConnMgrConnectionFinalisedCallback  lpfConnectionFinalisedCallback, void *  lpConnectionFinalisedUserData, HeapMalloc *  lpNetworkHeapAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkManagerPrepareParams::Construct(const CgsNetwork::NetworkManagerPrepareParams::VersionDisplayPrepareParams *  lpVersionDisplay, const NetworkAdapterPrepareParams *  lpNetworkAdapter, const CgsNetwork::NetworkManagerPrepareParams::PlayerManagerPrepareParams *  lpPlayerManager, CgsSystem::EFrameRate  leLocalConsoleFrameRate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfacePrepareParams::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::LobbyPrepareParams::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ConnAPIPrepareParams::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::AllocatorList::GetHeapAllocator(int32_t  liBankId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataAllocatorList.h:141
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameDataAllocatorList.h:142
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameDataAllocatorList.h:143
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEventQueueBase<4096,16>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<4096,16>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:245
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModule::Prepare(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *  lpOutput, CgsSystem::EFrameRate  leLocalConsoleFrameRate, const LaunchData *  lpSoftRebootData, const AllocatorList *  lpAllocatorList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.cpp:153
		HeapMalloc * lpHeapMalloc;

	}
	CgsModule::IOBuffer::LockForWrite(/* parameters */);
	CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
	BrnResource::GameDataIO::AllocatorList::GetHeapAllocator(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	{
		// BrnNetworkModule.cpp:203
		DebugInterface lDebugInterface;

		CgsGui::GuiEventQueueBase<16384,16>::Prepare(/* parameters */);
		CgsModule::VariableEventQueue<16384,16>::Prepare(/* parameters */);
		CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
		CgsGui::GuiEventQueueBase<4096,16>::Prepare(/* parameters */);
		CgsModule::VariableEventQueue<4096,16>::Prepare(/* parameters */);
		CgsModule::VariableEventQueue<14000,16>::Prepare(/* parameters */);
		CgsDev::DebugInterface::DebugInterface(/* parameters */);
		CgsDev::DebugManager::ThreadSafeAquire(/* parameters */);
		CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
		CgsContainers::FlagSet<std::int8_t>::UnSetBit(/* parameters */);
		CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsDev::PerfMonCpu::StopMonitor(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsDev::PerfMonCpu::StartMonitor(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::BrnServerInterfaceBase::Update(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfacePS3::Update(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkManager::IsSysMenuOnScreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkAdapterPS3::SetShutdownAllowed(bool  lbAllowed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::StateManager::IsReadyToJoinGameSession() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::StateManager::AreWeAutosaving() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::SelectedRoutesManager::HaveRoutesChanged() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::SelectedRoutesManager::SetRoutesChanged(bool  lbRoutesChanged) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::TimeManager::NextFrame(const TimerStatus *  lpTimerStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTimeManager.h:302
		float32_t lfTimeStep;

	}
}

void CgsSystem::Time::operator+=(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTime.h:205
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::NetworkToGameStateInterface::SetFramesSinceStart(int32_t  liFramesSinceStart) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::GameStateToNetworkInterface::GetIsInOnlineGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatusInterface::GetSimTimerStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::GetTimeStepMultiplier() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleDriverInputInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer::GetVehicleOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:589
		CgsDev::StrStream lStrStream;

	}
}

extern VehicleOutputInterface & operator=(const const VehicleOutputInterface &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::RaceCarState::operator=(const const RaceCarState &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>::operator=(const const EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer::GetActiveRaceCarInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:596
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::operator=(const const RCEntityActiveRaceCarOutputInterface &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer::GetPlayerVehicleControls() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:631
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer::GetTrafficNetworkOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:610
		CgsDev::StrStream lStrStream;

	}
}

extern TrafficNetworkOutputInterface & operator=(const const TrafficNetworkOutputInterface &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer::GetCrashNetworkOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:603
		CgsDev::StrStream lStrStream;

	}
}

extern NetworkOutputInterface & operator=(const const NetworkOutputInterface &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern GameStateToNetworkInterface & operator=(const const GameStateToNetworkInterface &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer::GetTakedownEventInputQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:550
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::EventQueue<BrnGameState::TakedownEvent,8>::operator=(const const EventQueue<BrnGameState::TakedownEvent,8> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnGameState::TakedownEvent,8>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Append(const const BaseEventQueue<BrnGameState::TakedownEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventQueueBase<16384,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModule::GetInputGuiEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.h:458
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer::GetGuiEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:566
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<16384,16>::Append<16384, 16>(const const VariableEventQueue<16384,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:757
		int32_t liSourceSizeInBytes;

		{
			// CgsVariableEventQueue.h:759
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<16384,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<16384,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModule::ProcessAfterSimulation(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *  lpInput, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.cpp:425
		uint32_t luMemory;

		{
			// BrnNetworkModule.cpp:426
			uint32_t luNewAvailableMemory;

		}
		BrnPhysics::Vehicle::VehicleDriverInputInterface::Clear(/* parameters */);
		BrnTraffic::BrnTrafficIO::TrafficNetworkInputInterface::Construct(/* parameters */);
		BrnWorld::CrashIO::NetworkInputInterface::Clear(/* parameters */);
		CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::SetEventPointer(/* parameters */);
		CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::Clear(/* parameters */);
		CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::Clear(/* parameters */);
		BrnNetworkModuleIO::PostSimulationInputBuffer::GetVehicleOutputInterface(/* parameters */);
		operator=(/* parameters */);
		BrnPhysics::Vehicle::RaceCarState::operator=(/* parameters */);
		CgsModule::EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>::operator=(/* parameters */);
		BrnNetworkModuleIO::PostSimulationInputBuffer::GetActiveRaceCarInterface(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::operator=(/* parameters */);
		BrnNetworkModuleIO::PostSimulationInputBuffer::GetPlayerVehicleControls(/* parameters */);
		BrnNetworkModuleIO::PostSimulationInputBuffer::GetTrafficNetworkOutputInterface(/* parameters */);
		operator=(/* parameters */);
		CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::Clear(/* parameters */);
		CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::GetQueueStartPointer(/* parameters */);
		CgsCore::MemCpy(/* parameters */);
		BrnNetworkModuleIO::PostSimulationInputBuffer::GetCrashNetworkOutputInterface(/* parameters */);
		operator=(/* parameters */);
		operator=(/* parameters */);
		BrnNetworkModuleIO::PostSimulationInputBuffer::GetTakedownEventInputQueue(/* parameters */);
		CgsModule::EventQueue<BrnGameState::TakedownEvent,8>::operator=(/* parameters */);
		CgsGui::GuiEventQueueBase<16384,16>::Clear(/* parameters */);
		GetInputGuiEventQueue(/* parameters */);
		BrnNetworkModuleIO::PostSimulationInputBuffer::GetGuiEventQueue(/* parameters */);
		AppendGuiQueue<16384, 16>(/* parameters */);
		{
			// BrnNetworkModule.cpp:475
			uint32_t luNewAvailableMemory;

		}
		{
			// BrnNetworkModule.cpp:480
			uint32_t luNewAvailableMemory;

		}
		{
			// BrnNetworkModule.cpp:498
			uint32_t luNewAvailableMemory;

		}
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
	{
		// BrnNetworkModule.cpp:443
		CgsDev::StrStream lStrStream;

	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
}

void BrnNetwork::BrnNetworkModuleIO::PreSimulationInputBuffer::IsPadIdle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:485
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::PreSimulationInputBuffer::GetTimerStatusInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:507
		CgsDev::StrStream lStrStream;

	}
}

void CgsSystem::TimerStatusInterface::operator=(const const TimerStatusInterface &  lOtherInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::operator=(const const TimerStatus &  lOtherTimer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatusInterface::GetGameTimerStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::PreSimulationInputBuffer::GetControllerPort() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:500
		CgsDev::StrStream lStrStream;

	}
}

void CgsNetwork::NetworkManager::SetActiveControllerPort(int32_t  liActiveControllerPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::PreSimulationInputBuffer::IsSysMenuOnScreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:530
		CgsDev::StrStream lStrStream;

	}
}

void CgsNetwork::NetworkManager::SetSysMenuOnScreen(bool  lbOnScreen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::OutputBuffer::SetIsPlaying(bool  lbIsPlaying) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:783
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkManager::GetNetworkInviteManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::OutputBuffer::SetIsInInvite(bool  lbIsInInvite) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:813
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::OutputBuffer::SetConnected(bool  lbIsConnected) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:798
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<4096,16>::Append<4096, 16>(const const VariableEventQueue<4096,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:757
		int32_t liSourceSizeInBytes;

		{
			// CgsVariableEventQueue.h:759
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<4096,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEventQueueBase<4096,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::OutputBuffer::GetVehicleDriverInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:848
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModuleIO::OutputBuffer::GetVehicleInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:841
		CgsDev::StrStream lStrStream;

	}
}

extern TrafficNetworkInputInterface & operator=(const const TrafficNetworkInputInterface &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::OutputBuffer::GetCrashNetworkInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:862
		CgsDev::StrStream lStrStream;

	}
}

extern NetworkInputInterface & operator=(const const NetworkInputInterface &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::OutputBuffer::GetNetworkEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleIO.h:994
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<14000,16>::Append<14000, 16>(const const VariableEventQueue<14000,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:757
		int32_t liSourceSizeInBytes;

		{
			// CgsVariableEventQueue.h:759
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<14000,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<14000,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::BrnNetworkModule::ProcessBeforeSimulation(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const PreSimulationInputBuffer *  lpInput, BrnNetwork::BrnNetworkModuleIO::OutputBuffer *  lpOutput, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModule.cpp:351
		TimerStatus * lpGameTimerStatus;

		// BrnNetworkModule.cpp:404
		bool lbIsOnline;

	}
	BrnNetworkModuleIO::PreSimulationInputBuffer::IsPadIdle(/* parameters */);
	BrnNetworkModuleIO::PreSimulationInputBuffer::GetTimerStatusInterface(/* parameters */);
	CgsSystem::TimerStatusInterface::operator=(/* parameters */);
	CgsSystem::TimerStatus::operator=(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	BrnNetworkModuleIO::PreSimulationInputBuffer::GetControllerPort(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	CgsNetwork::NetworkManager::SetActiveControllerPort(/* parameters */);
	BrnNetworkModuleIO::PreSimulationInputBuffer::IsSysMenuOnScreen(/* parameters */);
	CgsNetwork::NetworkManager::SetSysMenuOnScreen(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
	BrnNetworkModuleIO::OutputBuffer::SetIsPlaying(/* parameters */);
	BrnNetworkModuleIO::OutputBuffer::SetIsInInvite(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetConnectionComponent(/* parameters */);
	BrnNetworkModuleIO::OutputBuffer::SetConnected(/* parameters */);
	AppendGuiQueue<4096, 16>(/* parameters */);
	CgsGui::GuiEventQueueBase<4096,16>::Clear(/* parameters */);
	BrnNetworkModuleIO::OutputBuffer::GetVehicleDriverInputInterface(/* parameters */);
	BrnNetworkModuleIO::OutputBuffer::GetVehicleInputInterface(/* parameters */);
	operator=(/* parameters */);
	BrnNetworkModuleIO::OutputBuffer::GetCrashNetworkInputInterface(/* parameters */);
	operator=(/* parameters */);
	BrnNetworkModuleIO::OutputBuffer::GetNetworkEventQueue(/* parameters */);
	CgsModule::VariableEventQueue<14000,16>::Append<14000, 16>(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
}

void CgsNetwork::ServerInterfaceGameParamsBase::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceGameParamsBase::GetMaxPlayers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceGameParamsBase::GetHostName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<252>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LoginManagerBase::GetSignInType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::NetworkAdapterBase::HadDuplicateLogin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceBase::OnEvent(CgsNetwork::EServerInterfaceEvent  leEvent, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::operator<=(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::SetFloatVal(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<1536,16>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:245
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::RequestInterface<256>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<256,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<256,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnResource::GameDataIO::RequestInterface<256>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::StatsOutputInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnNetwork::NetworkPlayerStats,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::NetworkPlayerStats>::Construct(NetworkPlayerStats *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::NetworkPlayerStats>::SetEventPointer(NetworkPlayerStats *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::NetworkPlayerStats>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::StatsOutputInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkToGuiInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate,4>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate>::Construct(NetworkToGuiLiveRevengeUpdate *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate>::SetEventPointer(NetworkToGuiLiveRevengeUpdate *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnNetwork::NetworkToGuiLiveRevengeUpdate>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::NetworkToGuiInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnNetworkModuleIO::PlayerResultsInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModulePlayerResultsInterface.h:118
		int32_t liIndex;

	}
}

void BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkModuleInGamePlayerStatusInterface.h:224
		int32_t liIndex;

	}
}

void CgsSound::Playback::Registry::~Registry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::RwacCommandQueue::~RwacCommandQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::GenericRwacFactory::~GenericRwacFactory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::GenericRwacFactory::~GenericRwacFactory(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Factory::~Factory(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsSound::Playback::GenericRwacFactory::~GenericRwacFactory(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Factory::~Factory(/* parameters */);
	CgsSound::Playback::Factory::operator delete(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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

void CgsModule::ModuleSingleBuffered::DestroyInputDataStructure(CgsModule::DataStructure *  lpDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:133
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::DestroyOutputDataStructure(CgsModule::DataStructure *  lpDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:137
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::PrepareDataStructures(CgsModule::DataStructure *  lpInputDataStructure, CgsModule::DataStructure *  lpOutputDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:141
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::ReleaseDataStructures(CgsModule::DataStructure *  lpInputDataStructure, CgsModule::DataStructure *  lpOutputDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:145
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::CreateInputDataStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:125
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::CreateOutputDataStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:129
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

::::KI_NETWORK_COMPRESSED_PICTURE_FORMAT = 1433534630;

::::KI_NETWORK_PHOTO_FORMAT = 1433536677;

::::K_GAMER_PICTURE_FORMAT = 1433536677;

::::K_NETWORK_PERF_CHANNEL = 8;

::::K_NETWORK2_PERF_CHANNEL = 9;

::::K_NETWORK3_PERF_CHANNEL = 18;

::::KF_ASPECTRATIO_WIDESCREEN = [63, 227, 142, 57];

::::KF_ASPECTRATIO_STANDARD = [63, 170, 170, 171];

::::KF_ASPECTRATIO_SQUARE = [63, 128, 0, 0];

::::KF_ASPECTRATIO_STAND_IN_PLEASE_REMOVE_ME = [63, 227, 142, 57];

::::KF_DEFAULT_FOVHORIZONTAL = [63, 201, 15, 219];

::::KF_DEFAULT_ASPECTRATIO = [63, 227, 142, 57];

::::KF_DEFAULT_NEARCLIPPLANE = [61, 204, 204, 205];

::::KF_DEFAULT_FARCLIPPLANE = [68, 122, 0, 0];

::::KF_DEFAULT_DEPTHOFFIELD = [63, 128, 0, 0];

::::KF_GRAVITY = [65, 28, 245, 195];

::::KE_PHYSICS_PERFMON_PAGE = 6;

::::KU_INVALID_LANDMARK_INDEX = -1;

::::KF_CORONA_OFFSET = [63, 0, 0, 0];

::::KF_BLOBBY_SHADOW_ALPHA = [63, 51, 51, 51];

::::KF_DEFAULT_TIMESTEP = [60, 136, 136, 137];

::::KF_VECTOR_NORMALISED_TOLERANCE = [60, 35, 215, 10];

::::KF_DEFAULT_CONTACT_RELAXATION = [63, 0, 0, 0];

::::KF_DEFAULT_BAR_RELAXATION = [63, 128, 0, 0];

::::KF_DEFAULT_DEFORMABLE_BAR_RELAXATION = [63, 76, 204, 205];

::::fMAX_DEFORMATION = [61, 204, 204, 205];

::::KF_MAX_UNRESOLVED_ERROR_THRESHOLD = [61, 76, 204, 205];

::::msfTicksPerSecond = [69, 59, 128, 0];

::::msfOneOverTicksPerSecond = [57, 174, 195, 62];

::::KE_WORLD_PERFMON_PAGE = 4;

::::SPLICE_TYPE_UNKNOWN = -1;

::::kfSteeringPower = [63, 128, 0, 0];

::::KAC_TITLE_ID = "BLUS30061";

BrnProgression_2007_10_04::KF_PLAYER_BOOST_THRESHOLD = [65, 160, 0, 0];

BrnProgression_2007_10_04::KF_PLAYERSTAT_OVERDRIVE_EARNER = [67, 250, 0, 0];

BrnProgression_2007_10_04::KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX = [66, 112, 0, 0];

BrnProgression_2007_10_04::KF_PLAYER_STAT_TEMPORARY_ACCELERATOR = [65, 32, 0, 0];

Snd9::AZIMUTH_DEFAULT = [201, 116, 36, 0];

Snd9::FILE_SIZE_UNKNOWN = -1;

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

BrnReplays::KF_REPLAY_START_TIME = [65, 112, 0, 0];

BrnReplays::KF_REPLAY_LENGTH = [65, 160, 0, 0];

BrnReplays::KAC_STREAM_MAGIC_NUMBER = "REPLAY ";

BrnEffects::SKID_FACTOR_THRESHOLD = [62, 153, 153, 154];

CgsFileSystem::KU_INVALID_FILE_ID = -1;

BrnAI::KF_MAX_TURN_ANGLE = [62, 178, 184, 194];

BrnAI::KF_AVERAGE_TURN_ANGLE = [62, 50, 184, 194];

BrnAI::KF_AI_MAX_SPEED_MULTIPLIER = [63, 153, 153, 154];

BrnAI::KF_AI_MAX_BOOST_SPEED_MULTIPLIER = [63, 140, 204, 205];

BrnAI::KF_IN_FRONT_OF_PLAYER_DISTANCE = [66, 160, 0, 0];

BrnAI::KX_SECTION_FLAG_AI_INTERSTATE_EXIT = -128;

BrnAI::KF_CENTRE_LINE_AHEAD_CLOSE = [63, 127, 92, 41];

BrnAI::KF_CENTRE_LINE_AHEAD_FAR = [63, 124, 40, 246];

BrnAI::KF_HNG_CROSSPIECE_LENGTH = [64, 160, 0, 0];

BrnAI::KF_AI_VULNERABILITY_RADIUS_BEHIND = [65, 240, 0, 0];

BrnAI::KF_AI_PASSTHROUGH_RADIUS = [66, 200, 0, 0];

BrnAI::KE_AI_PERFMON_PAGE = 7;

BrnProgression::KF_PLAYER_BOOST_THRESHOLD = [65, 160, 0, 0];

BrnProgression::KF_PLAYERSTAT_OVERDRIVE_EARNER = [67, 250, 0, 0];

BrnProgression::KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX = [66, 112, 0, 0];

BrnProgression::KF_PLAYER_STAT_TEMPORARY_ACCELERATOR = [65, 32, 0, 0];

BrnProgression::KE_GAMESTATE_PERFMON_PAGE = 5;

BrnNetwork::KF_NETWORK_TIME_ACCURACY = [58, 218, 116, 14];

BrnNetwork::KF_NETWORK_DISTANCE_ACCURACY = [59, 163, 215, 10];

BrnNetwork::KU16_INVALID_FRAME = -1;

BrnNetwork::KF_TIME_GAP_TO_LEAVE_BEFORE_START_TIME = [63, 128, 0, 0];

BrnNetwork::KF_CAMERA_FEED_REQUEST_DELAY = [63, 128, 0, 0];

BrnNetwork::KF_CAR_IN_WORLD_TOLERANCE = [68, 122, 0, 0];

BrnNetwork::KF_TIME_TO_DELAY_SELECTED_CHALLENGE_SEND = [63, 128, 0, 0];

BrnNetwork::KI_INVALID_RACE_POSITION = -1;

BrnNetwork::KI_INVALID_GAME_ID = -1;

BrnNetwork::KF_NO_DATA_RECEIVED_TIMEOUT = [63, 128, 0, 0];

BrnStreetData::KI_INTERSTATE_EXIT_ROAD_INDEX = -2;

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

CgsNetwork::KE_ACK_OR_NACK;

CgsNetwork::KE_HEADER = 41;

CgsNetwork::KE_ALL_MESSAGE_TYPES = 42;

CgsNetwork::KF_ONLINE_TIME_DIFFERENCE_TOLERANCE = [61, 76, 204, 205];

BrnDirector::KE_DIRECTOR_PERFMON_PAGE = 13;

BrnDirector::Camera::KF_SUPER_SLO_MO_FACTOR = [61, 8, 136, 137];

BrnDirector::Camera::KF_SLO_MO_FACTOR = [62, 146, 73, 37];

CgsSound::Playback::K_MIN_RESERVED_IDENT = -16;

CgsSound::Playback::K_INIT_SND9_SUBMIX_IDENT = -16;

CgsUnicode::KU_TRAILING_BYTE_MASK = -64;

CgsUnicode::KU_TRAILING_BYTE = -128;

CgsUnicode::KU_SINGLE_BYTE_CHAR_MASK = -128;

CgsUnicode::KU_TWO_BYTE_CHAR_MASK = -32;

CgsUnicode::KU_TWO_BYTE_CHAR = -64;

CgsUnicode::KU_THREE_BYTE_CHAR_MASK = -16;

CgsUnicode::KU_THREE_BYTE_CHAR = -32;

CgsUnicode::KU_FOUR_BYTE_CHAR_MASK = -8;

CgsUnicode::KU_FOUR_BYTE_CHAR = -16;

BrnParticle::kfNumberOfSecondsInTenYears = [77, 150, 96, 24];

BrnGameState::KF_OUT_OF_RANGE_TO_LOSE_TIME = [65, 160, 0, 0];

BrnGameState::KF_DONT_SHOW_RIVAL = [191, 128, 0, 0];

BrnGameState::KF_NO_INPUT_TIME_FOR_MODE_EXIT = [64, 128, 0, 0];

BrnGameState::KF_STATIONARY_TIME_FOR_MODE_EXIT = [64, 64, 0, 0];

BrnGameState::KF_MAX_STATIONARY_TIME_FOR_MODE_EXIT = [65, 32, 0, 0];

BrnGameState::KF_PURSUIT_INTRO_TIME = [63, 128, 0, 0];

BrnGameState::KE_GAMESTATE_PERFMON_PAGE = 5;

BrnGameState::GameStateModuleIO::KF_RACE_START_PRESSED_VALUE = [62, 128, 0, 0];

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

BrnPhysics::KF_DEFAULT_RACE_CAR_CACHE_SPHERE_SIZE = [64, 160, 0, 0];

BrnPhysics::KF_DEFAULT_TRAFFIC_CACHE_SPHERE_SIZE = [64, 160, 0, 0];

BrnPhysics::KF_DEFAULT_PROP_CACHE_SPHERE_SIZE = [64, 32, 0, 0];

BrnPhysics::KR_MIN_TIMESTEP_MULTIPLIER = [63, 128, 0, 0];

BrnPhysics::Verlet::KF_DEFAULT_BAR_MAX_DISPLACEMENT = [65, 32, 0, 0];

BrnPhysics::Verlet::KF_DEFAULT_BAR_DEFORMATION_THRESHOLD = [59, 163, 215, 10];

BrnPhysics::RWPhysicsTypeData::K_DEFAULT_JOINT_SWING_DISPLACEMENT_LIMIT = [68, 122, 0, 0];

BrnPhysics::RWPhysicsTypeData::K_DEFAULT_JOINT_TWIST_DISPLACEMENT_LIMIT = [68, 122, 0, 0];

BrnPhysics::Props::KI_PROP_FLAG_MASK = -67108864;

BrnPhysics::Props::KI_PROP_ANIM_MINSPEED = [192, 201, 22, 135];

BrnPhysics::Props::KI_PROP_ANIM_MAXSPEED = [64, 201, 22, 135];

BrnPhysics::Props::KI_PROP_MAX_ANGULARCONSTRAINT = [64, 201, 22, 135];

BrnPhysics::Props::KI_PROP_MIN_ANGULARCONSTRAINT = [0, 0, 0, 0];

BrnPhysics::Props::knZAngularRotation = -128;

BrnPhysics::Props::knNoAngularRotation = -64;

BrnPhysics::Props::knAngularRotationBits = -64;

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MIN = [70, 28, 64, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MAX = [71, 67, 80, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_RANGE = [71, 28, 64, 0];

BrnPhysics::Deformation::KE_PMP_DEFORMATION = 15;

BrnPhysics::Deformation::KF_DEFORMATION_MODEL_DATA_WHEEL_OFFSET = [61, 204, 204, 205];

BrnPhysics::Deformation::KF_JOINT_DETACH_THRESHOLD_MODIFIER = [64, 0, 0, 0];

BrnPhysics::Deformation::KF_JOINT_DETACH_THRESHOLD_MODIFIER_SQUARED = [64, 128, 0, 0];

BrnPhysics::Deformation::KF_PART_EXTRA_GRAVITY = [0, 0, 0, 0];

BrnPhysics::Deformation::KF_MIN_SWEPT_SPHERE_SPEED = [64, 192, 0, 0];

BrnPhysics::Deformation::KF_PART_DYNAMIC_FRICTION = [62, 153, 153, 154];

BrnPhysics::Deformation::KF_PART_STATIC_FRICTION = [62, 153, 153, 154];

BrnPhysics::Vehicle::krMPS2MPH = [64, 15, 41, 247];

BrnPhysics::Vehicle::krMPH2MPS = [62, 228, 226, 109];

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

BrnPhysics::Vehicle::KF_STICK_AFTERTOUCH_MODIFIER = [62, 128, 0, 0];

BrnPhysics::Vehicle::KF_STUCK_IN_COLLISION_TEST_INTERVAL = [64, 160, 0, 0];

BrnPhysics::Vehicle::KF_AIR_RAM_SCALE_FACTOR = [66, 72, 0, 0];

BrnPhysics::Vehicle::KF_SLAM_MAGNITUDE = [65, 200, 0, 0];

BrnPhysics::Vehicle::KF_POST_PLAYER_TD_INVULNERABILITY_TIME = [64, 0, 0, 0];

BrnPhysics::Vehicle::KF_JOINT_ANGLE_BREAK_EXTENT = [63, 76, 204, 205];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_SIZE_X = [67, 150, 0, 0];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_SIZE_Y = [67, 97, 0, 0];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_BORDER_X = [65, 160, 0, 0];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_BORDER_Y = [65, 160, 0, 0];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_TEXT_SIZE = [65, 144, 0, 0];

BrnPhysics::Vehicle::KF_SHOWTIME_UNCAP_SPEED_LIMIT_TIME = [62, 153, 153, 154];

CgsNumeric::KU_RANDOM_DEFAULT_SEED = -1881117246;

Attrib::key_default = -2887443745685561006;

Attrib::h64_default = -2887443745685561006;

Attrib::Hash::junkyardlocators::LocatorData = -570084516953988955;

Attrib::Hash::sparkeffect::Bounciness = -3817220592226588377;

Attrib::Hash::sparkeffect::DragDuration = -5041530831918900097;

Attrib::Hash::sparkeffect::MotionBlurTime = -4706437283823970344;

Attrib::Hash::sparkeffect::NumParticlesPerImpactMin = -372394079317485815;

Attrib::Hash::sparkeffect::SparkRandomColour1 = -5500759238284303219;

Attrib::Hash::sparkeffect::SparkRandomColour2 = -377198750846029218;

Attrib::Hash::sparkeffect::SpawnLineLengthMax = -1484334559578632962;

Attrib::Hash::sparkeffect::T1_VelocityInheritanceMax = -1736401039282896638;

Attrib::Hash::burnoutglobaldata::EaTrax = -3928707850451763780;

Attrib::Hash::burnoutglobaldata::FatalFlagEnum = -1998159337474592529;

Attrib::Hash::burnoutglobaldata::MaterialTypeEnum = -2716257156762056581;

Attrib::Hash::burnoutglobaldata::mPassbyBins = -4188795827779376598;

Attrib::Hash::burnoutglobaldata::mPresentationActions = -3695537172128070359;

Attrib::Hash::burnoutglobaldata::NumShiftPatterns = -5246617198867624784;

Attrib::Hash::burnoutglobaldata::OrientationEnum = -6791005438007148636;

Attrib::Hash::burnoutglobaldata::ReverbSettings = -1487269786437321408;

Attrib::Hash::burnoutglobaldata::ReverbTypes = -4882948758934672803;

Attrib::Hash::burnoutglobaldata::SampleTags = -6421355425626342460;

Attrib::Hash::burnoutglobaldata::ShiftPatterns = -8770309864078353478;

Attrib::Hash::burnoutglobaldata::StreamMappings = -8414824317506067834;

Attrib::Hash::burnoutglobaldata::StreamSettings = -4887161515125358683;

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

Attrib::Hash::surface::AudioSurface = -2951005994454003311;

Attrib::Hash::boostparamsasset::AirEarning = -1891887715510008784;

Attrib::Hash::boostparamsasset::AirSpinEarning = -4352757040966857742;

Attrib::Hash::boostparamsasset::BarrelRollEarning = -1035108252361594191;

Attrib::Hash::boostparamsasset::BoostChainMin = -2343420446165730523;

Attrib::Hash::boostparamsasset::BoostSlamStrength = -7766274748171065765;

Attrib::Hash::boostparamsasset::BoostSpinIncrease = -6502808958254691887;

Attrib::Hash::boostparamsasset::BurnRateBoost = -3648956812362844215;

Attrib::Hash::boostparamsasset::CleanLanding = -6630060647361528260;

Attrib::Hash::boostparamsasset::ComboModifier = -4173559742227163691;

Attrib::Hash::boostparamsasset::GrindingEarning = -4363492811123288973;

Attrib::Hash::boostparamsasset::Handbrake180Earning = -103186127672983849;

Attrib::Hash::boostparamsasset::MaxSpeedBoostModifier = -9097027527144457540;

Attrib::Hash::boostparamsasset::NearMissBoostEarning = -8500197340308483883;

Attrib::Hash::boostparamsasset::OnComing = -8123106555570631457;

Attrib::Hash::boostparamsasset::RubbingEarning = -5657847537147772142;

Attrib::Hash::boostparamsasset::SlamEarning = -1643247501148292748;

Attrib::Hash::boostparamsasset::SpeedForMaxEarning = -1574127377284081412;

Attrib::Hash::boostparamsasset::StuntSmashEarning = -7010097363749819817;

Attrib::Hash::boostparamsasset::TailgatingEarning = -1992470372002763846;

Attrib::Hash::boostparamsasset::TradingPaintEarning = -6557756835454833620;

Attrib::Hash::boostparamsasset::TrafficCheck = -4306685691871961585;

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

Attrib::ClassName::boostparamsasset = -2728788314741784660;

Attrib::ClassName::sparkeffect = -3821321658093367652;

BrnWorld::KU_COLLISION_MASK_TOP_BIT = -32768;

BrnWorld::KI_INVALID_OPPONENT = -1;

BrnWorld::KI_INVALID_RIVAL = -1;

BrnWorld::KF_AI_INACTIVE_DISTANCE_BIAS = [65, 240, 0, 0];

BrnWorld::KF_INVALID_DISTANCE = [127, 127, 255, 255];

BrnWorld::KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME = [64, 0, 0, 0];

BrnWorld::KI_INVALID_CAR_COLOUR = -1;

BrnWorld::KI_INVALID_CAR_COLOUR_PALETTE = -1;

BrnWorld::KE_RACEECAR_PERFMON_PAGE = 12;

BrnWorld::KF_MIN_SPEED_FOR_AIR_MPH = [64, 0, 0, 0];

BrnWorld::KF_POWER_PARK_NEARBY_RADIUS = [65, 112, 0, 0];

BrnWorld::KF_BLUESTWOS_FLASH_DURATION = [63, 128, 0, 0];

BrnWorld::KF_BLUESTWOS_FLASH_HALF_DURATION = [63, 0, 0, 0];

BrnWorld::KF_BLUESTWOS_ONE_OVER_FLASH_DURATION = [63, 128, 0, 0];

BrnWorld::KF_BLUESTWOS_FLASH_TIMEOUT = [61, 204, 204, 205];

BrnWorld::KF_EVENT_START_RESET_DEFER_TIME = [62, 25, 153, 154];

BrnWorld::KF_BOOST_EFFECT_LOSS_MAX = [64, 0, 0, 0];

BrnWorld::KF_BOOST_EFFECT_LOSS_MIN = [63, 128, 0, 0];

BrnWorld::KF_MIN_BOOST_BEFORE_USE = [62, 25, 153, 154];

BrnWorld::KF_MIN_BOOST_BEFORE_BOUNCE = [60, 35, 215, 10];

BrnWorld::KF_MIN_SPIN_ANGLE = [66, 52, 0, 0];

BrnWorld::KF_BOUNCE_BOOST_FLASH_BAR_TIME = [63, 25, 153, 154];

BrnWorld::KF_MIN_BOOST_TIME = [63, 160, 0, 0];

BrnWorld::KF_MIN_AIR_TIME_FOR_BOOST = [63, 0, 0, 0];

BrnWorld::KF_INFORMATION_REMEMBER_TIME_GENERAL = [63, 0, 0, 0];

BrnWorld::KF_INFORMATION_REMEMBER_TIME_TAKEDOWNS = [65, 32, 0, 0];

BrnWorld::KF_MAX_BOOST = [66, 200, 0, 0];

BrnWorld::KF_PLAYER_NETWORK_CAR_RESET_SECONDS = [64, 160, 0, 0];

BrnWorld::KF_PLANE_SEGMENT_TRIGGER_DEPTH = [60, 35, 215, 10];

CgsSceneManager::KF_DEFAULT_MIN_PADDING = [61, 204, 204, 205];

CgsSceneManager::KF_DEFAULT_MAX_PADDING = [64, 0, 0, 0];

CgsSceneManager::KU16_INVALID_ENTITY_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INSTANCE_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INDEX = -1;

CgsSceneManager::KU_SPATIAL_PARTITION_INVALID_ID = -1;

CgsGraphics::DefaultValues::mkDefault_float_t = [0, 0, 0, 0];

CgsGraphics::DefaultValues::mkDefault_double_t = [0, 0, 0, 0, 0, 0, 0, 0];

CgsInput::KF_BUTTONDOWNTHRESHOLD = [61, 204, 204, 205];

CgsContainers::kxDictFlag_DuplicateDataReference = -2147483648;

CgsContainers::KI_DICTIONARY_INVALID_KEY = -1;

CgsAttribSys::KF_LOG_WINDOW_WIDTH = [67, 160, 0, 0];

CgsAttribSys::KF_LOG_WINDOW_HEIGHT = [66, 112, 0, 0];

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

CgsDev::DebugUI::KF_OFFSET_TO_MIN_MAX = [63, 0, 0, 0];

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

rw::math::fpu::TWO_PI = [64, 201, 15, 219];

rw::math::fpu::HALF_PI = [63, 201, 15, 219];

rw::math::fpu::QUARTER_PI = [63, 73, 15, 219];

rw::math::fpu::SQRT_PI = [63, 226, 223, 197];

rw::math::fpu::INV_PI = [62, 162, 249, 131];

rw::math::fpu::SQRT_2 = [63, 181, 4, 243];

rw::math::fpu::SQRT_HALF = [63, 53, 4, 243];

rw::math::fpu::SQRT_3 = [63, 221, 179, 215];

rw::math::fpu::ZERO_FLOAT = [0, 0, 0, 0];

rw::math::fpu::VECTOR_MIN_SLERP_ANGLE = [61, 178, 184, 195];

rw::math::fpu::QUATERNION_SLERP_DOT_TOLERANCE = [63, 127, 190, 119];

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

