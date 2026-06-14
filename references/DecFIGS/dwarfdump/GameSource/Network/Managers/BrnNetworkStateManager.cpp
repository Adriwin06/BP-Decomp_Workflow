// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// BrnNetworkStateManager.cpp:45
	const int32_t KI_TIME_INCREMENTS = 10;

	// BrnNetworkStateManager.cpp:46
	const float32_t KF_TIME_MAX;

	// BrnNetworkStateManager.cpp:47
	const float32_t KF_TIME_MIN;

}

// BrnNetworkStateManager.cpp:4114
using BrnGameState::GameStateModuleIO;

// BrnNetworkStateManager.cpp:4371
using BrnGameState::GameStateModuleIO;

// BrnNetworkStateManager.cpp:4840
using BrnGameState::GameStateModuleIO;

// BrnNetworkStateManager.cpp:5288
void BrnNetwork::StateManager::IsIdle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkStateManager.cpp:269
void BrnNetwork::StateManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkStateManager.cpp:5343
void BrnNetwork::StateManager::PlayerRemoved() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkStateManager.cpp:5477
void BrnNetwork::StateManager::SuspendToLeaveGame(BrnNetwork::ELeftGameReason  leLeftReason, CgsNetwork::EKickReason  leKickReason) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkStateManager.cpp:133
void BrnNetwork::StateManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkStateManager.cpp:199
void BrnNetwork::StateManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkStateManager.cpp:5002
void BrnNetwork::StateManager::StripWebOfferControlCodes(char *  lpcBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:5004
		char * lpcEndTag;

		std(/* parameters */);
	}
	std(/* parameters */);
}

// BrnNetworkStateManager.cpp:5303
void BrnNetwork::StateManager::PlayerAdded() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkStateManager.cpp:5261
void BrnNetwork::StateManager::IsGameLaunched() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkStateManager.cpp:3497
void BrnNetwork::StateManager::PostRoundProcessingFinished() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:3499
		AggressiveMoveData::NetworkPlayerID lPlayerID;

		// BrnNetworkStateManager.cpp:3500
		BrnNetwork::PlayerMenuData * lpMenuData;

	}
}

// BrnNetworkStateManager.cpp:3477
void BrnNetwork::StateManager::PostRoundFinishedCallback(bool  lbSuccess, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:3479
		StateManager * lpStateManager;

	}
}

// BrnNetworkStateManager.cpp:2818
void BrnNetwork::StateManager::UpdateMarkedMan(AggressiveMoveData::NetworkPlayerID  lMarkedManID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkStateManager.cpp:3768
void BrnNetwork::StateManager::MarkedManLoaded(const MarkedManLoadedAction *  lpMarkedManLoadedAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnGameState::GameStateModuleIO::IsShowtimeGameMode(/* parameters */);
}

// BrnNetworkStateManager.cpp:3717
void BrnNetwork::StateManager::IntroStopped(const StopModeIntroAction *  lpStopIntroAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkManager::IsDoingFreeBurnLobby(/* parameters */);
	BrnGameState::GameStateModuleIO::IsShowtimeGameMode(/* parameters */);
}

// BrnNetworkStateManager.cpp:5193
void BrnNetwork::StateManager::StartTOSDownload() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:5195
		const char * lpcUrlToUse;

		// BrnNetworkStateManager.cpp:5196
		char[256] lacTosURL;

	}
}

// BrnNetworkStateManager.cpp:5166
void BrnNetwork::StateManager::StartNewsDownload() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:5168
		const char * lpcUrlToUse;

		// BrnNetworkStateManager.cpp:5169
		char[256] lacNewsURL;

	}
}

// BrnNetworkStateManager.cpp:2891
void BrnNetwork::StateManager::ModifyGame(const BrnGui::GuiEventNetworkGameParams *  lpGameParamsEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:2893
		BrnNetwork::GameParams lGameParams;

		// BrnNetworkStateManager.cpp:2894
		BrnNetwork::PlayerInfoData lPlayerInfo;

		GameParams::GameParams(/* parameters */);
	}
	PlayerParams::PlayerParams(/* parameters */);
	PlayerInfoData::PlayerInfoData(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
	GameParams::~GameParams(/* parameters */);
	PlayerInfoData::~PlayerInfoData(/* parameters */);
	CgsNetwork::ServerInterfaceGameParams::~ServerInterfaceGameParams(/* parameters */);
}

// BrnNetworkStateManager.cpp:4074
void BrnNetwork::StateManager::HaveAllSelectedACar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:4076
		CgsNetwork::NetworkPlayer * lpPlayer;

		// BrnNetworkStateManager.cpp:4077
		BrnNetwork::PlayerMenuData * lpMenuData;

		// BrnNetworkStateManager.cpp:4078
		AggressiveMoveData::NetworkPlayerID lPlayerID;

		// BrnNetworkStateManager.cpp:4079
		BrnNetwork::GameParams lGameParams;

		GameParams::GameParams(/* parameters */);
	}
	PlayerParams::PlayerParams(/* parameters */);
	GameParams::~GameParams(/* parameters */);
}

// BrnNetworkStateManager.cpp:4901
void BrnNetwork::StateManager::GameModeHasTeams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:4903
		BrnNetwork::GameParams lGameParams;

		GameParams::GameParams(/* parameters */);
	}
	PlayerParams::PlayerParams(/* parameters */);
	GameParams::~GameParams(/* parameters */);
}

// BrnNetworkStateManager.cpp:4923
void BrnNetwork::StateManager::GameModeHasEnoughTeams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:4925
		int32_t liNumTeamsFound;

	}
	{
		// BrnNetworkStateManager.cpp:4934
		int32_t liPlayerIndex;

		// BrnNetworkStateManager.cpp:4935
		bool[3] labFoundTeams;

		// BrnNetworkStateManager.cpp:4936
		PlayerParams lPlayerParams;

		PlayerParams::PlayerParams(/* parameters */);
		CgsCore::MemSet(/* parameters */);
		PlayerParamsBase::GetPlayerTeam(/* parameters */);
		PlayerParamsBase::GetPlayerTeam(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:4954
		BrnNetwork::GameParams lGameParams;

		GameParams::GameParams(/* parameters */);
	}
	PlayerParams::~PlayerParams(/* parameters */);
	PlayerParams::PlayerParams(/* parameters */);
	GameParams::~GameParams(/* parameters */);
}

// BrnNetworkStateManager.cpp:65
void BrnNetwork::StateManager::Construct(BrnNetwork::BrnNetworkModule *  lpNetworkModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkStateManager.cpp:5517
void BrnNetwork::StateManager::IsInLimbo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkModule::GetGameStateToNetworkInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkStateManager.cpp:5533
void BrnNetwork::StateManager::CloseLimboGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkStateManager.cpp:5624
void BrnNetwork::StateManager::DoInstantFreeburn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkStateManager.cpp:2839
void BrnNetwork::StateManager::CreateGame(const GuiEventNetworkCreateGame *  lpGameParamsEvent, bool  lbCreatedFromMenus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:2841
		BrnNetwork::GameParams lGameParams;

		// BrnNetworkStateManager.cpp:2842
		BrnNetwork::PlayerInfoData lPlayerInfo;

		GameParams::GameParams(/* parameters */);
	}
	PlayerParams::PlayerParams(/* parameters */);
	PlayerInfoData::PlayerInfoData(/* parameters */);
	CgsNetwork::ServerInterfaceGameParamsBase::SetName(/* parameters */);
	CgsNetwork::ServerInterfaceGameParamsBase::SetMaxPlayers(/* parameters */);
	CgsNetwork::ServerInterfaceGameParamsBase::SetMinPlayers(/* parameters */);
	CgsNetwork::ServerInterfaceGameParamsBase::SetFixedGame(/* parameters */);
	CgsNetwork::ServerInterfaceGameParamsBase::SetRankedGame(/* parameters */);
	GameParams::~GameParams(/* parameters */);
	PlayerInfoData::~PlayerInfoData(/* parameters */);
	CgsNetwork::ServerInterfacePlayerInfoData::~ServerInterfacePlayerInfoData(/* parameters */);
	CgsNetwork::ServerInterfaceGameParams::~ServerInterfaceGameParams(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkStateManager.cpp:5601
void BrnNetwork::StateManager::CreateInviteGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:5603
		GuiEventNetworkCreateGame lGameParamsEvent;

		GuiEventNetworkCreateGame(/* parameters */);
		BrnGui::GuiEventNetworkCreateGame::Construct(/* parameters */);
	}
}

// BrnNetworkStateManager.cpp:3633
void BrnNetwork::StateManager::StartEndOfRound() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkStateManager.cpp:3650
void BrnNetwork::StateManager::StartEndOfGame(bool  lbAborted, bool  lbLeaveGame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkStateManager.cpp:4879
void BrnNetwork::StateManager::OnFullConnection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:4881
		BrnNetwork::PlayerInfoData lPlayerInfo;

	}
	PlayerInfoData::PlayerInfoData(/* parameters */);
	PlayerInfoData::~PlayerInfoData(/* parameters */);
}

// BrnNetworkStateManager.cpp:3453
void BrnNetwork::StateManager::ResumeFinishedCallback(bool  lbSuccess, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:3455
		StateManager * lpStateManager;

	}
}

// BrnNetworkStateManager.cpp:4512
void BrnNetwork::StateManager::StartLogIn(BrnNetwork::LoginManagerBase::ESignInType  leSignInType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:4527
		DebugInterface lDebugInterface;

	}
	CgsDev::DebugInterface::DebugInterface(/* parameters */);
	CgsDev::DebugInterface::GetDebugManager(/* parameters */);
	BrnNetworkManager::GetLoginManager(/* parameters */);
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	{
		// BrnNetworkStateManager.cpp:4520
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkStateManager.cpp:4343
void BrnNetwork::StateManager::SendFreeburnLobbyRoundMessage(int32_t  liRoundIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:4345
		StartNetworkRoundEvent lEvent;

		StartNetworkRoundEvent(/* parameters */);
		BrnNetworkModule::GetGameEventQueue(/* parameters */);
	}
}

// BrnNetworkStateManager.cpp:4303
void BrnNetwork::StateManager::SendStartNextRoundMessage(int32_t  liRoundIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:4305
		StartNetworkRoundEvent lEvent;

		// BrnNetworkStateManager.cpp:4306
		int32_t liLandmarkIndex;

		// BrnNetworkStateManager.cpp:4307
		BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event[10] laEvents;

		// BrnNetworkStateManager.cpp:4308
		AggressiveMoveData::NetworkPlayerID lPlayerID;

		StartNetworkRoundEvent(/* parameters */);
		Event(/* parameters */);
		BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetNumLandmarks(/* parameters */);
		BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetLandmark(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetNumLandmarks(/* parameters */);
		BrnNetworkModule::GetGameEventQueue(/* parameters */);
		CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkStateManager.cpp:4111
void BrnNetwork::StateManager::StartGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:4116
		PlayerParams lPlayerParams;

		// BrnNetworkStateManager.cpp:4117
		BrnNetwork::GameParams lGameParams;

		// BrnNetworkStateManager.cpp:4118
		BrnNetwork::PlayerMenuData * lpMenuData;

		// BrnNetworkStateManager.cpp:4119
		BrnNetwork::PlayerMenuData * lpHostMenuData;

		// BrnNetworkStateManager.cpp:4120
		CgsID lFirstCarID;

		// BrnNetworkStateManager.cpp:4121
		CgsID lFirstWheelID;

		// BrnNetworkStateManager.cpp:4122
		StartNetworkGameEvent lEvent;

		// BrnNetworkStateManager.cpp:4123
		int32_t liGridPosition;

		// BrnNetworkStateManager.cpp:4124
		float32_t lfTimeLimit;

		// BrnNetworkStateManager.cpp:4125
		uint16_t lu16FirstCarColourIndex;

		// BrnNetworkStateManager.cpp:4126
		uint16_t lu16FirstCarPaintFinishIndex;

		// BrnNetworkStateManager.cpp:4159
		AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

		// BrnNetworkStateManager.cpp:4160
		AggressiveMoveData::NetworkPlayerID lPlayerID;

		PlayerParams::PlayerParams(/* parameters */);
	}
	GameParams::GameParams(/* parameters */);
	PlayerParams::PlayerParams(/* parameters */);
	BrnGameState::GameStateModuleIO::StartNetworkGameEvent::Clear(/* parameters */);
	CgsNetwork::ServerInterfaceGameParamsBase::IsRankedGame(/* parameters */);
	CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	BrnGameState::GameStateModuleIO::StartNetworkGameEvent::SetGameData(/* parameters */);
	BrnGameState::GameStateModuleIO::StartNetworkGameEvent::SetTimeLimit(/* parameters */);
	BrnGameState::GameStateModuleIO::StartNetworkGameEvent::SetLocalNetworkPlayerID(/* parameters */);
	PlayerParamsBase::GetPlayerTeam(/* parameters */);
	BrnGameState::GameStateModuleIO::StartNetworkGameEvent::SetPlayerData(/* parameters */);
	{
		// BrnNetworkStateManager.cpp:4245
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:4246
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnNetworkModule::GetGameEventQueue(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	BrnNetworkManager::SetRound(/* parameters */);
	GameParams::~GameParams(/* parameters */);
	PlayerParams::~PlayerParams(/* parameters */);
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
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkManager::SetRound(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkStateManager.cpp:3665
void BrnNetwork::StateManager::PrepareForInvite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:3698
		PreparedForInviteEvent lPreparedForInviteEvent;

		BrnNetworkModule::GetGameEventQueue(/* parameters */);
	}
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkManager::SetRound(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkStateManager.cpp:4835
void BrnNetwork::StateManager::UpdateSyncTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:4842
		FinishedSyncingPlayersEvent lEvent;

		BrnNetworkModule::GetGameEventQueue(/* parameters */);
		AddEvent<BrnGameState::GameStateModuleIO::FinishedSyncingPlayersEvent>(/* parameters */);
		BrnNetworkManager::IsDoingFreeBurnLobby(/* parameters */);
		CgsNetwork::VoIPManager::SetGameSendingHeadsetStatus(/* parameters */);
	}
	CameraPS3::SendCameraStatusMessages(/* parameters */);
	CgsNetwork::VoIPManager::SetGameSendingHeadsetStatus(/* parameters */);
	CameraPS3::SendCameraStatusMessages(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkStateManager.cpp:3393
void BrnNetwork::StateManager::SearchFinishedCallback(bool  lbSuccess, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:3395
		StateManager * lpStateManager;

	}
	{
		// BrnNetworkStateManager.cpp:3403
		GuiEventNetworkCustomMatchResults lSearchResults;

	}
	BrnNetworkModule::AddOutputGuiEvent<BrnGui::GuiEventNetworkCustomMatchResults>(/* parameters */);
	BrnNetworkModule::GetOutputGuiEventQueue(/* parameters */);
	AddGuiEvent<BrnGui::GuiEventNetworkCustomMatchResults>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkStateManager.cpp:3243
void BrnNetwork::StateManager::LeaveGameForOfflineGameFinishedCallback(bool  lbSuccess, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:3245
		StateManager * lpStateManager;

	}
	{
		// BrnNetworkStateManager.cpp:3256
		GuiEventNetworkPlayerImage lNetworkPlayerImageEvent;

		BrnNetworkModule::AddOutputGuiEvent<BrnGui::GuiEventNetworkPlayerImage>(/* parameters */);
		BrnNetworkModule::GetOutputGuiEventQueue(/* parameters */);
		AddGuiEvent<BrnGui::GuiEventNetworkPlayerImage>(/* parameters */);
		BrnNetworkModule::GetGameStateToNetworkInterface(/* parameters */);
		BrnNetworkModule::GetGameStateToNetworkInterface(/* parameters */);
		BrnNetworkModule::GetGameStateToNetworkInterface(/* parameters */);
		CgsNetwork::VersionDisplay::SetGameServerGame(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:3295
		GuiEventNetworkLeavingGameFailed lLeavingGameFailedEvent;

		BrnNetworkModule::AddOutputGuiEvent<BrnGui::GuiEventNetworkLeavingGameFailed>(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:3270
		ChangePlayerCarEvent lChangeCarEvent;

		BrnNetworkModule::GetGameEventQueue(/* parameters */);
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

// BrnNetworkStateManager.cpp:5044
void BrnNetwork::StateManager::UpdateNewsAndTOSDownload() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:5050
		char * lpacDownloadBuffer;

		// BrnNetworkStateManager.cpp:5051
		const char * lpcDatabaseID;

		// BrnNetworkStateManager.cpp:5052
		UnicodeBuffer::CgsUtf8 ** lppBuffer;

		// BrnNetworkStateManager.cpp:5053
		BrnGui::GuiEventNetworkNewsAndTOS::EEventType leEventType;

	}
	{
		// BrnNetworkStateManager.cpp:5122
		GuiEventAddLocalisedTextPointer lAddTextPointer;

		CgsCore::StrnCpy(/* parameters */);
		BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventAddLocalisedTextPointer>(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:5149
		GuiEventNetworkNewsAndTOS lNewsAndTOSEvent;

		BrnNetworkModule::AddOutputGuiEvent<BrnGui::GuiEventNetworkNewsAndTOS>(/* parameters */);
		BrnNetworkModule::GetOutputGuiEventQueue(/* parameters */);
		AddGuiEvent<BrnGui::GuiEventNetworkNewsAndTOS>(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkStateManager.cpp:5220
void BrnNetwork::StateManager::ReleaseNewsAndTOSDownload() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:5232
		GuiEventAddLocalisedTextPointer lAddTextPointer;

		CgsCore::StrnCpy(/* parameters */);
		BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventAddLocalisedTextPointer>(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:5241
		GuiEventAddLocalisedTextPointer lAddTextPointer;

		CgsCore::StrnCpy(/* parameters */);
		BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventAddLocalisedTextPointer>(/* parameters */);
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

// BrnNetworkStateManager.cpp:5551
void BrnNetwork::StateManager::HandleConnectEvent(const GuiEventNetworkConnect *  lpConnectEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnNetworkStateManager.cpp:5561
		GuiEventNetworkConnected lConnectedEvent;

		BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventNetworkConnected>(/* parameters */);
	}
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
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkStateManager.cpp:5449
void BrnNetwork::StateManager::GetCompressedCameraPicCallback(void *  lpPixels, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:5451
		NetworkOutCamPicCompressedEvent lCamPicCompressedEvent;

		// BrnNetworkStateManager.cpp:5452
		StateManager * lpStateManager;

	}
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutCamPicCompressedEvent>(/* parameters */);
}

// BrnNetworkStateManager.cpp:5402
void BrnNetwork::StateManager::HostChangedCallback(const TimerStatus *  lpTimerStatus, AggressiveMoveData::NetworkPlayerID  lOldHostID, AggressiveMoveData::NetworkPlayerID  lNewHostID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:5404
		StateManager * lpStateManager;

		// BrnNetworkStateManager.cpp:5405
		NetworkOutHostChangedEvent lNewHostEvent;

		// BrnNetworkStateManager.cpp:5406
		AggressiveMoveData::NetworkPlayerID lNetworkPlayerID;

	}
	CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutHostChangedEvent>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkStateManager.cpp:4546
void BrnNetwork::StateManager::UpdateLogin(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:4548
		uint32_t luMemory;

		// BrnNetworkStateManager.cpp:4551
		bool lbAgreeToShareInfoEA;

		// BrnNetworkStateManager.cpp:4552
		bool lbAgreeToShareInfoPartners;

		// BrnNetworkStateManager.cpp:4553
		bool lbTelemetryEnable;

		// BrnNetworkStateManager.cpp:4554
		bool lbLoggedIn;

		// BrnNetworkStateManager.cpp:4555
		BrnNetwork::LoginManagerBase::ESignInType leSignInType;

		// BrnNetworkStateManager.cpp:4556
		BrnNetwork::PlayerInfoData lPlayerInfo;

		{
			// BrnNetworkStateManager.cpp:4549
			uint32_t luNewAvailableMemory;

		}
		PlayerInfoData::PlayerInfoData(/* parameters */);
		{
			// BrnNetworkStateManager.cpp:4703
			uint32_t luNewAvailableMemory;

		}
		PlayerInfoData::~PlayerInfoData(/* parameters */);
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
	{
		// BrnNetworkStateManager.cpp:4560
		uint32_t luNewAvailableMemory;

	}
	LoginManagerBase::GetCompletedSignInType(/* parameters */);
	{
		// BrnNetworkStateManager.cpp:4580
		GuiEventNetworkConnected lConnectedEvent;

		// BrnNetworkStateManager.cpp:4588
		NetworkOutLocalPlayerConnected lPlayerConnectedEvent;

		// BrnNetworkStateManager.cpp:4589
		BrnNetwork::PlayerInfoData lPlayerInfo;

		{
			// BrnNetworkStateManager.cpp:4573
			uint32_t luNewAvailableMemory;

		}
		CgsNetwork::VoIPManager::SetGameSendingHeadsetStatus(/* parameters */);
		{
			// BrnNetworkStateManager.cpp:4578
			uint32_t luNewAvailableMemory;

		}
		BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventNetworkConnected>(/* parameters */);
		{
			// BrnNetworkStateManager.cpp:4584
			uint32_t luNewAvailableMemory;

		}
		PlayerInfoData::PlayerInfoData(/* parameters */);
		{
			// BrnNetworkStateManager.cpp:4591
			uint32_t luNewAvailableMemory;

		}
		{
			// BrnNetworkStateManager.cpp:4595
			uint32_t luNewAvailableMemory;

		}
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutLocalPlayerConnected>(/* parameters */);
		{
			// BrnNetworkStateManager.cpp:4600
			uint32_t luNewAvailableMemory;

		}
		CgsNetwork::ServerInterfaceTelemetry::EnableTemetry(/* parameters */);
		{
			// BrnNetworkStateManager.cpp:4617
			NetworkOutCaughtFever lCaughtFeverMessage;

			BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
			AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutCaughtFever>(/* parameters */);
			BrnNetworkManager::SetIsDeveloper(/* parameters */);
		}
		{
			// BrnNetworkStateManager.cpp:4648
			uint32_t luNewAvailableMemory;

		}
		PlayerInfoData::~PlayerInfoData(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:4691
		uint32_t luNewAvailableMemory;

	}
	{
		// BrnNetworkStateManager.cpp:4697
		NetworkOutInstantFreeburnEvent lInstantFreeburnEvent;

		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutInstantFreeburnEvent>(/* parameters */);
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
	{
		// BrnNetworkStateManager.cpp:4660
		GuiEventNetworkDisconnected lDisconnectedEvent;

		BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventNetworkDisconnected>(/* parameters */);
		{
			// BrnNetworkStateManager.cpp:4687
			uint32_t luNewAvailableMemory;

		}
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
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:4672
		int32_t liConnectionStatus;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkStateManager.cpp:4365
void BrnNetwork::StateManager::StartFreeBurnLobbyGameMode(bool  lbStartingAfterJoin, bool  lbStartingAfterOnlineEvent, bool  lbForceStartFreeburnLobby, bool  lbRefreshOnly) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:4373
		PlayerParams lPlayerParams;

		// BrnNetworkStateManager.cpp:4374
		BrnNetwork::GameParams lGameParams;

		// BrnNetworkStateManager.cpp:4375
		BrnNetwork::PlayerMenuData * lpMenuData;

		// BrnNetworkStateManager.cpp:4376
		StartNetworkGameEvent lEvent;

		// BrnNetworkStateManager.cpp:4377
		int32_t liGridPosition;

		// BrnNetworkStateManager.cpp:4392
		AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

		// BrnNetworkStateManager.cpp:4393
		AggressiveMoveData::NetworkPlayerID lPlayerID;

	}
	GameParams::GameParams(/* parameters */);
	PlayerParams::PlayerParams(/* parameters */);
	PlayerParams::PlayerParams(/* parameters */);
	BrnGameState::GameStateModuleIO::StartNetworkGameEvent::Clear(/* parameters */);
	CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	BrnGameState::GameStateModuleIO::StartNetworkGameEvent::SetGameData(/* parameters */);
	BrnGameState::GameStateModuleIO::StartNetworkGameEvent::SetTimeLimit(/* parameters */);
	BrnGameState::GameStateModuleIO::StartNetworkGameEvent::SetForceStartFreeburnLobby(/* parameters */);
	BrnGameState::GameStateModuleIO::StartNetworkGameEvent::SetLocalNetworkPlayerID(/* parameters */);
	PlayerParamsBase::GetPlayerTeam(/* parameters */);
	BrnGameState::GameStateModuleIO::StartNetworkGameEvent::SetPlayerData(/* parameters */);
	BrnGameState::GameStateModuleIO::StartNetworkGameEvent::SetStartingFreeburnLobbyAfterOnlineEvent(/* parameters */);
	BrnGameState::GameStateModuleIO::StartNetworkGameEvent::SetStartingGameAfterPlayerJoin(/* parameters */);
	BrnNetworkModule::GetGameEventQueue(/* parameters */);
	BrnNetworkModule::GetGameStateToNetworkInterface(/* parameters */);
	BrnNetworkModule::GetGameStateToNetworkInterface(/* parameters */);
	{
		// BrnNetworkStateManager.cpp:4472
		NetworkOutStartingGameDueToPlayerJoin lStartingGameDueToPlayerJoin;

		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutStartingGameDueToPlayerJoin>(/* parameters */);
	}
	GameParams::~GameParams(/* parameters */);
	PlayerParams::~PlayerParams(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:4400
		AggressiveMoveData::NetworkPlayerID lDEBUGPlayerID;

		{
			// BrnNetworkStateManager.cpp:4413
			BrnNetwork::PlayerMenuData * lpMenuData;

		}
	}
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
		CgsDev::StrStream::StrStream(/* parameters */);
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
}

// BrnNetworkStateManager.cpp:5358
void BrnNetwork::StateManager::OnGameIDChanged() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkStateManager.cpp:4489
void BrnNetwork::StateManager::RefreshFreeBurnLobbyGameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkManager::IsDoingFreeBurnLobby(/* parameters */);
}

// BrnNetworkStateManager.cpp:3144
void BrnNetwork::StateManager::JoinGameFinishedCallback(bool  lbSuccess, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:3146
		int32_t liErrorCode;

		// BrnNetworkStateManager.cpp:3147
		StateManager * lpStateManager;

		// BrnNetworkStateManager.cpp:3148
		CgsNetwork::ServerInterfaceGames * lpGames;

		// BrnNetworkStateManager.cpp:3149
		bool lbInGame;

	}
	CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
	{
		// BrnNetworkStateManager.cpp:3167
		GuiEventNetworkInGame lInGameEvent;

		BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventNetworkInGame>(/* parameters */);
		CgsNetwork::VersionDisplay::SetGameServerGame(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:3189
		GuiEventNetworkInGameFailed lInGameFailedEvent;

		BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventNetworkInGameFailed>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	AddGuiEvent<CgsGui::GuiEventNetworkInGameFailed>(/* parameters */);
}

// BrnNetworkStateManager.cpp:3009
void BrnNetwork::StateManager::CreateGameFinishedCallback(bool  lbSuccess, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:3011
		BrnNetwork::GameParams lGameParams;

		// BrnNetworkStateManager.cpp:3012
		int32_t liErrorCode;

		// BrnNetworkStateManager.cpp:3013
		StateManager * lpStateManager;

		// BrnNetworkStateManager.cpp:3014
		CgsNetwork::ServerInterfaceGames * lpGames;

		// BrnNetworkStateManager.cpp:3015
		bool lbInGame;

		GameParams::GameParams(/* parameters */);
	}
	PlayerParams::PlayerParams(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
	{
		// BrnNetworkStateManager.cpp:3064
		GuiEventNetworkInGameFailed lInGameFailedEvent;

		BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventNetworkInGameFailed>(/* parameters */);
	}
	GameParams::~GameParams(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:3030
		GuiEventNetworkInGame lInGameEvent;

		BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventNetworkInGame>(/* parameters */);
		CgsNetwork::VersionDisplay::SetGameServerGame(/* parameters */);
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

// BrnNetworkStateManager.cpp:3555
void BrnNetwork::StateManager::PostGameProcessingFinished() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:3557
		NetworkOutPostGameProcessingFinished lPostGameProcessingFinished;

	}
	{
		// BrnNetworkStateManager.cpp:3566
		AggressiveMoveData::NetworkPlayerID lPlayerID;

		// BrnNetworkStateManager.cpp:3567
		BrnNetwork::PlayerMenuData * lpMenuData;

	}
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutPostGameProcessingFinished>(/* parameters */);
	BrnNetworkModule::GetGameStateToNetworkInterface(/* parameters */);
	BrnNetworkModule::GetGameStateToNetworkInterface(/* parameters */);
	{
		// BrnNetworkStateManager.cpp:3606
		ChangePlayerCarEvent lChangeCarEvent;

		BrnNetworkModule::GetGameEventQueue(/* parameters */);
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

// BrnNetworkStateManager.cpp:3535
void BrnNetwork::StateManager::PostGameFinishedCallback(bool  lbSuccess, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:3537
		StateManager * lpStateManager;

	}
}

// BrnNetworkStateManager.cpp:3420
void BrnNetwork::StateManager::SuspensionFinishedCallback(bool  lbSuccess, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:3422
		StateManager * lpStateManager;

		// BrnNetworkStateManager.cpp:3428
		GuiEventNetworkGoneOffline lGoneOfflineEvent;

	}
	BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventNetworkGoneOffline>(/* parameters */);
	{
		// BrnNetworkStateManager.cpp:3433
		NetworkOutPlayerLeftGame lLeftGameEvent;

		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerLeftGame>(/* parameters */);
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

// BrnNetworkStateManager.cpp:2976
void BrnNetwork::StateManager::JoinGameSessionByID(int32_t  liGameID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:2978
		NetworkOutJoiningGameEvent lJoiningGameEvent;

		// BrnNetworkStateManager.cpp:2979
		BrnNetwork::GameParams lGameParams;

		GameParams::GameParams(/* parameters */);
	}
	PlayerParams::PlayerParams(/* parameters */);
	CgsNetwork::ServerInterfaceGameParamsBase::SetSession(/* parameters */);
	CgsNetwork::ServerInterfaceGameParamsBase::SetGameID(/* parameters */);
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutJoiningGameEvent>(/* parameters */);
	GameParams::~GameParams(/* parameters */);
	CgsNetwork::ServerInterfaceGameParams::~ServerInterfaceGameParams(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkStateManager.cpp:3804
void BrnNetwork::StateManager::OutputPlayerTexture() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:3853
		int32_t liDisplayedImageIndex;

		// BrnNetworkStateManager.cpp:3854
		CgsNetwork::ServerInterfaceGames * lpGamesComponent;

		CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
		{
			// BrnNetworkStateManager.cpp:3867
			bool lbAlreadyShowingPhotoFinish;

			// BrnNetworkStateManager.cpp:3868
			const NetworkTexture * lpTextureToDisplay;

		}
	}
	{
		// BrnNetworkStateManager.cpp:3994
		int32_t liPlayerIndex;

		// BrnNetworkStateManager.cpp:3995
		const NetworkTexture * lpTextureToDisplay;

		{
			// BrnNetworkStateManager.cpp:4007
			NetworkOutNoPhotoBoothGamerPic lNoPhotoBoothGamerPicEvent;

			AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutNoPhotoBoothGamerPic>(/* parameters */);
		}
	}
	{
		// BrnNetworkStateManager.cpp:3900
		const NetworkTexture * lpTextureToDisplay;

	}
	{
		// BrnNetworkStateManager.cpp:3808
		int32_t liPlayerIndex;

		// BrnNetworkStateManager.cpp:3809
		PlayerParams lPlayerParams;

		// BrnNetworkStateManager.cpp:3810
		CgsNetwork::ServerInterfaceGames * lpGamesComponent;

		// BrnNetworkStateManager.cpp:3811
		const NetworkTexture * lpTextureToDisplay;

		PlayerParams::PlayerParams(/* parameters */);
	}
	PlayerParams::~PlayerParams(/* parameters */);
	{
		// BrnNetworkStateManager.cpp:4030
		int32_t liPlayerIndex;

		// BrnNetworkStateManager.cpp:4031
		const NetworkTexture * lpTextureToDisplay;

	}
	{
		// BrnNetworkStateManager.cpp:3919
		BitArray<8u> lRaceCarsWithScalps;

		// BrnNetworkStateManager.cpp:3920
		AggressiveMoveData::NetworkPlayerID lVictimID;

		// BrnNetworkStateManager.cpp:3921
		AggressiveMoveData::NetworkPlayerID lPlayerID;

		// BrnNetworkStateManager.cpp:3922
		int32_t liPlayerIndex;

		// BrnNetworkStateManager.cpp:3923
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnNetworkStateManager.cpp:3924
		CgsNetwork::ServerInterfaceGames * lpGamesComponent;

		// BrnNetworkStateManager.cpp:3925
		const NetworkTexture * lpTextureToDisplay;

		CgsContainers::BitArray<8u>::UnSetAll(/* parameters */);
		CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
		CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
	CgsContainers::BitArray<8u>::SetBit(/* parameters */);
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	{
		// BrnNetworkStateManager.cpp:4050
		NetworkOutNoPhotoBoothGamerPic lNoPhotoBoothGamerPicEvent;

		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutNoPhotoBoothGamerPic>(/* parameters */);
	}
	CgsNetwork::PlayerManager::IsLocalPlayer(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkStateManager.cpp:4715
void BrnNetwork::StateManager::UpdateLaunching() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:4717
		BrnNetwork::LaunchManager::EStatus leLaunchStatus;

	}
	{
		// BrnNetworkStateManager.cpp:4725
		BrnNetwork::GameParams lGameParams;

		// BrnNetworkStateManager.cpp:4726
		NetworkOutLaunchedEvent lNetworkLaunchedEvent;

		// BrnNetworkStateManager.cpp:4727
		GuiEventNetworkLaunched lLaunchedEvent;

		// BrnNetworkStateManager.cpp:4728
		AggressiveMoveData::NetworkPlayerID lPlayerID;

		// BrnNetworkStateManager.cpp:4729
		BrnNetwork::PlayerMenuData * lpMenuData;

		GameParams::GameParams(/* parameters */);
		BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventNetworkLaunched>(/* parameters */);
		BrnNetworkModule::GetOutputGuiEventQueue(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventNetworkLaunched>(/* parameters */);
		BrnNetworkModule::GetGameEventQueue(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutLaunchedEvent>(/* parameters */);
		GameParams::~GameParams(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:4787
		NetworkOutLaunchedEvent lNetworkLaunchedEvent;

		// BrnNetworkStateManager.cpp:4788
		GuiEventNetworkLaunched lLaunchedEvent;

		BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventNetworkLaunched>(/* parameters */);
		BrnNetworkModule::GetOutputGuiEventQueue(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventNetworkLaunched>(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutLaunchedEvent>(/* parameters */);
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

// BrnNetworkStateManager.cpp:2947
void BrnNetwork::StateManager::JoinGameSession(char *  lpcSessionID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:2949
		NetworkOutJoiningGameEvent lJoiningGameEvent;

		// BrnNetworkStateManager.cpp:2950
		BrnNetwork::GameParams lGameParams;

		GameParams::GameParams(/* parameters */);
	}
	PlayerParams::PlayerParams(/* parameters */);
	CgsNetwork::ServerInterfaceGameParamsBase::SetSession(/* parameters */);
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutJoiningGameEvent>(/* parameters */);
	GameParams::~GameParams(/* parameters */);
	CgsNetwork::ServerInterfaceGameParams::~ServerInterfaceGameParams(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkStateManager.cpp:896
void BrnNetwork::StateManager::ProcessGuiEvents(const InputBuffer::GuiEventQueue *  lpQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:899
		const CgsModule::Event * lpEvent;

		// BrnNetworkStateManager.cpp:900
		int32_t liEventSize;

		// BrnNetworkStateManager.cpp:901
		int32_t liEventId;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	}
	{
	}
	{
		// BrnNetworkStateManager.cpp:1520
		AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

		// BrnNetworkStateManager.cpp:1521
		PlayerParams lPlayerParams;

		PlayerParams::PlayerParams(/* parameters */);
		CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
		PlayerParamsBase::GetPlayerTeam(/* parameters */);
		PlayerParamsBase::GetPlayerTeam(/* parameters */);
		PlayerParamsBase::SetPlayerTeam(/* parameters */);
		PlayerParams::~PlayerParams(/* parameters */);
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:1565
		const GuiEventLocalisedTextPointerRemoved * lpTextRemovedEvent;

		CgsGui::GuiEventLocalisedTextPointerRemoved::IsThisTheRemovedString(/* parameters */);
		CgsGui::GuiEventLocalisedTextPointerRemoved::IsThisTheRemovedString(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:1585
		const GuiEventNetworkSplashEvent * lpSplashEvent;

		{
			// BrnNetworkStateManager.cpp:1592
			AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

			CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
		}
	}
	{
		// BrnNetworkStateManager.cpp:1545
		const GuiEventNetworkNewsAndTOS * lpNewsAndTOSEvent;

	}
	{
		// BrnNetworkStateManager.cpp:1330
		BrnNetwork::PlayerInfoData lPlayerInfo;

		PlayerInfoData::PlayerInfoData(/* parameters */);
		PlayerInfoData::~PlayerInfoData(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:1455
		const BrnGui::GuiEventNetworkGameParams * lpGameParamsEvent;

	}
	{
		// BrnNetworkStateManager.cpp:1447
		const GuiEventNetworkCreateGame * lpGameParamsEvent;

	}
	{
		// BrnNetworkStateManager.cpp:1493
		const GuiEventNetworkOutputPlayerTexture * lpOutputPlayerTextureEvent;

	}
	{
		// BrnNetworkStateManager.cpp:1429
		const GuiEventNetworkCustomMatchJoin * lpCustomMatchJoinEvent;

		// BrnNetworkStateManager.cpp:1431
		BrnNetwork::GameParams lGameParams;

		GameParams::GameParams(/* parameters */);
		GameParams::~GameParams(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:1152
		BrnNetwork::GameParams lGameParams;

		// BrnNetworkStateManager.cpp:1153
		NetworkOutLaunchEvent lNetworkLaunchEvent;

		GameParams::GameParams(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutLaunchEvent>(/* parameters */);
		GameParams::~GameParams(/* parameters */);
		CgsNetwork::ServerInterfaceGameParams::~ServerInterfaceGameParams(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:1065
		BrnNetwork::GameParams lGameParams;

		// BrnNetworkStateManager.cpp:1066
		NetworkOutLaunchEvent lNetworkLaunchEvent;

		// BrnNetworkStateManager.cpp:1067
		GuiEventNetworkLaunched lLaunchedEvent;

		// BrnNetworkStateManager.cpp:1068
		int32_t liPlayerIndex;

		// BrnNetworkStateManager.cpp:1069
		bool lbPlayerStillPlaying;

		// BrnNetworkStateManager.cpp:1070
		PlayerParams lPlayerParams;

		GameParams::GameParams(/* parameters */);
		PlayerParams::PlayerParams(/* parameters */);
		BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventNetworkLaunched>(/* parameters */);
		GameParams::~GameParams(/* parameters */);
		PlayerParams::~PlayerParams(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:1050
		GuiEventNetworkLeavingGameFailed lLeavingGameFailedEvent;

		BrnNetworkModule::AddOutputGuiEvent<BrnGui::GuiEventNetworkLeavingGameFailed>(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:981
		const GuiEventAnswerLoginQuestion * lpAnswerQuestionEvent;

	}
	{
		// BrnNetworkStateManager.cpp:917
		const GuiEventNetworkSuspension * lpSuspensionEvent;

	}
	{
		// BrnNetworkStateManager.cpp:1480
		const GuiEventLoadingScreenState * lpLoadingScreenStateEvent;

	}
	BrnNetworkModule::GetGameEventQueue(/* parameters */);
	{
		// BrnNetworkStateManager.cpp:1358
		PlayerFinishedModeEvent lPlayerFinishedMode;

		BrnNetworkModule::GetGameEventQueue(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:1319
		const GuiEventNetworkHighlightedPlayer * lpHighlightedPlayerEvent;

	}
	{
		// BrnNetworkStateManager.cpp:1171
		const GuiEventNetworkSelectedPlayerOption * lpSelectedPlayerOptionEvent;

		{
			// BrnNetworkStateManager.cpp:1222
			PlayerParams lLocalPlayerParams;

			// BrnNetworkStateManager.cpp:1223
			PlayerParams lPlayerParams;

			// BrnNetworkStateManager.cpp:1224
			AggressiveMoveData::NetworkPlayerID lLocalNetworkPlayerID;

			CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
			PlayerParams::PlayerParams(/* parameters */);
			PlayerParams::PlayerParams(/* parameters */);
			CgsNetwork::ServerInterfacePlayerParamsBase::GetID(/* parameters */);
			PlayerParams::~PlayerParams(/* parameters */);
			PlayerParams::~PlayerParams(/* parameters */);
		}
	}
	{
		// BrnNetworkStateManager.cpp:1386
		const GuiEventNetworkCustomMatchSearch * lpCustomMatchSearchEvent;

		// BrnNetworkStateManager.cpp:1388
		GameSearchParams lSearchParams;

		// BrnNetworkStateManager.cpp:1389
		PlayerParams lPlayerParams;

		// BrnNetworkStateManager.cpp:1390
		BrnNetwork::PlayerInfoData lPlayerInfo;

		PlayerInfoData::PlayerInfoData(/* parameters */);
		GameSearchParams::GameSearchParams(/* parameters */);
		PlayerParams::PlayerParams(/* parameters */);
		CgsNetwork::ServerInterfaceGameSearchParamsBase::SetReturnPlayers(/* parameters */);
		PlayerInfoData::~PlayerInfoData(/* parameters */);
	}
	PlayerParams::~PlayerParams(/* parameters */);
	GameSearchParams::~GameSearchParams(/* parameters */);
	{
		// BrnNetworkStateManager.cpp:1375
		const GuiEventNetworkQuickMatch * lpQuickMatchEvent;

	}
	BrnNetworkManager::IsDoingFreeBurnLobby(/* parameters */);
	{
		// BrnNetworkStateManager.cpp:1337
		const NetworkPlayerStats * lpPlayerStats;

		{
			// BrnNetworkStateManager.cpp:1343
			GuiEventNetworkPlayerStats lPlayerStatsEvent;

			NetworkPlayerStats::GetName(/* parameters */);
			GuiEventNetworkPlayerStats(/* parameters */);
			CgsCore::StrnCpy(/* parameters */);
			operator=(/* parameters */);
			CgsSystem::Time::operator=(/* parameters */);
			BrnNetworkModule::AddOutputGuiEvent<BrnGui::GuiEventNetworkPlayerStats>(/* parameters */);
			BrnNetworkModule::GetOutputGuiEventQueue(/* parameters */);
			AddGuiEvent<BrnGui::GuiEventNetworkPlayerStats>(/* parameters */);
		}
	}
	{
		// BrnNetworkStateManager.cpp:1191
		CgsNetwork::ServerInterfaceGames * lpGames;

		// BrnNetworkStateManager.cpp:1192
		CgsNetwork::ServerInterfaceUsersets * lpUsersets;

		CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
		CgsNetwork::ServerInterfaceDirtySock::GetUsersetsComponent(/* parameters */);
	}
	BrnNetworkManager::IsDoingFreeBurnLobby(/* parameters */);
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
	}
	{
		// BrnNetworkStateManager.cpp:1045
		GuiEventNetworkLeavingGame lLeavingGameEvent;

		BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventNetworkLeavingGame>(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:1135
		PlayerParams lPlayerParams;

		// BrnNetworkStateManager.cpp:1136
		AggressiveMoveData::NetworkPlayerID lLocalNetworkPlayerID;

		CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
		PlayerParams::PlayerParams(/* parameters */);
		PlayerParamsBase::IsReady(/* parameters */);
		PlayerParamsBase::SetReady(/* parameters */);
		PlayerParams::~PlayerParams(/* parameters */);
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
		// BrnNetworkStateManager.cpp:1247
		AggressiveMoveData::NetworkPlayerID lLocalNetworkPlayerID;

		// BrnNetworkStateManager.cpp:1248
		BrnNetwork::PlayerMenuData * lpMenuData;

		CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	}
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutLaunchEvent>(/* parameters */);
	BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventNetworkLaunched>(/* parameters */);
	PlayerParamsBase::SetPlayerTeam(/* parameters */);
}

// BrnNetworkStateManager.cpp:395
void BrnNetwork::StateManager::Update(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:397
		uint32_t luMemory;

		{
			// BrnNetworkStateManager.cpp:398
			uint32_t luNewAvailableMemory;

		}
		{
			// BrnNetworkStateManager.cpp:401
			uint32_t luNewAvailableMemory;

		}
		{
			// BrnNetworkStateManager.cpp:404
			uint32_t luNewAvailableMemory;

		}
		{
			// BrnNetworkStateManager.cpp:407
			CgsNetwork::ServerInterfaceGames * lpGamesComponent;

			// BrnNetworkStateManager.cpp:408
			AggressiveMoveData::NetworkPlayerID lLocalNetworkPlayerID;

			// BrnNetworkStateManager.cpp:409
			PlayerParams lPlayerParams;

			// BrnNetworkStateManager.cpp:410
			EActiveRaceCarIndex lePlayerActiveRaceCarIndex;

			CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
			PlayerParams::PlayerParams(/* parameters */);
			BrnNetworkModuleIO::PostSimulationInputBuffer::GetActiveRaceCarInterface(/* parameters */);
			BrnNetworkModuleIO::PostSimulationInputBuffer::GetActiveRaceCarInterface(/* parameters */);
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
			BrnNetworkModuleIO::PostSimulationInputBuffer::GetActiveRaceCarInterface(/* parameters */);
			BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
			PlayerParams::~PlayerParams(/* parameters */);
		}
		{
			// BrnNetworkStateManager.cpp:467
			uint32_t luNewAvailableMemory;

		}
		{
			// BrnNetworkStateManager.cpp:610
			GuiEventNetworkInGame lInGameEvent;

			BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventNetworkInGame>(/* parameters */);
			{
				// BrnNetworkStateManager.cpp:615
				uint32_t luNewAvailableMemory;

			}
		}
		{
			// BrnNetworkStateManager.cpp:839
			uint32_t luNewAvailableMemory;

		}
		BrnNetworkModule::GetGameStateToNetworkInterface(/* parameters */);
		{
			// BrnNetworkStateManager.cpp:881
			uint32_t luNewAvailableMemory;

		}
	}
	{
		// BrnNetworkStateManager.cpp:835
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:423
		uint32_t luColourIndex;

		// BrnNetworkStateManager.cpp:424
		uint32_t luPaintFinishIndex;

		BrnNetworkModuleIO::PostSimulationInputBuffer::GetActiveRaceCarInterface(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetActiveRaceCarColourIndex(/* parameters */);
		BrnNetworkModuleIO::PostSimulationInputBuffer::GetActiveRaceCarInterface(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetActiveRaceCarPaintFinishIndex(/* parameters */);
		{
			// BrnNetworkStateManager.cpp:435
			uint16_t lu16CarColourIndex;

			// BrnNetworkStateManager.cpp:436
			uint16_t lu16PaintFinishIndex;

			BrnNetworkManager::SetCurrentCarColourIndex(/* parameters */);
			BrnNetworkManager::SetCurrentPaintFinishIndex(/* parameters */);
		}
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
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnNetworkModule::GetGameStateToNetworkInterface(/* parameters */);
	{
		// BrnNetworkStateManager.cpp:853
		BrnNetwork::GameParams lGameParams;

		// BrnNetworkStateManager.cpp:854
		NetworkOutLaunchEvent lNetworkLaunchEvent;

		GameParams::GameParams(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutLaunchEvent>(/* parameters */);
		CgsNetwork::VoIPManager::SetGameSendingHeadsetStatus(/* parameters */);
		CameraPS3::SendCameraStatusMessages(/* parameters */);
		GameParams::~GameParams(/* parameters */);
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
	CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	PlayerParamsBase::GetCarColourIndex(/* parameters */);
	{
		// BrnNetworkStateManager.cpp:495
		uint32_t luNewAvailableMemory;

	}
	{
		// BrnNetworkStateManager.cpp:502
		uint32_t luNewAvailableMemory;

	}
	{
		// BrnNetworkStateManager.cpp:632
		uint32_t luNewAvailableMemory;

	}
	{
		// BrnNetworkStateManager.cpp:829
		uint32_t luNewAvailableMemory;

	}
	{
		// BrnNetworkStateManager.cpp:546
		uint32_t luNewAvailableMemory;

	}
	{
		// BrnNetworkStateManager.cpp:531
		uint32_t luNewAvailableMemory;

	}
	{
		// BrnNetworkStateManager.cpp:538
		uint32_t luNewAvailableMemory;

	}
	{
		// BrnNetworkStateManager.cpp:593
		uint32_t luNewAvailableMemory;

	}
	{
		// BrnNetworkStateManager.cpp:639
		NetworkOutShowLoadingScreen lShowLoadingScreen;

		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutShowLoadingScreen>(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:566
		uint32_t luNewAvailableMemory;

	}
	{
		// BrnNetworkStateManager.cpp:657
		uint32_t luNewAvailableMemory;

	}
	{
		// BrnNetworkStateManager.cpp:586
		uint32_t luNewAvailableMemory;

	}
	{
		// BrnNetworkStateManager.cpp:510
		NetworkOutShowLoadingScreen lShowLoadingScreen;

		// BrnNetworkStateManager.cpp:514
		BrnNetwork::PlayerMenuData * lpMenuData;

		// BrnNetworkStateManager.cpp:515
		AggressiveMoveData::NetworkPlayerID lPlayerID;

		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutShowLoadingScreen>(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:524
		uint32_t luNewAvailableMemory;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:698
		NetworkOutAccountUpdateComplete lNetworkUpdateAccountCompleteEvent;

		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutAccountUpdateComplete>(/* parameters */);
	}
	BrnNetworkManager::GetTime(/* parameters */);
	BrnNetworkManager::GetTime(/* parameters */);
	{
		// BrnNetworkStateManager.cpp:744
		PlayerParams lLocalPlayerParams;

		// BrnNetworkStateManager.cpp:745
		AggressiveMoveData::NetworkPlayerID lLocalNetworkPlayerID;

		// BrnNetworkStateManager.cpp:746
		bool lbParamsUpdated;

		CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
		PlayerParams::PlayerParams(/* parameters */);
		PlayerParamsBase::SetMarkedPlayerID(/* parameters */);
		PlayerParamsBase::HasFever(/* parameters */);
		PlayerParamsBase::SetHasFever(/* parameters */);
		PlayerParamsBase::GetCarColourIndex(/* parameters */);
		PlayerParamsBase::SetCarColourIndex(/* parameters */);
		PlayerParamsBase::GetPaintFinishIndex(/* parameters */);
		PlayerParamsBase::SetPaintFinishIndex(/* parameters */);
		BrnNetworkManager::GetTime(/* parameters */);
		PlayerParamsBase::IsPlaying(/* parameters */);
		PlayerParamsBase::SetPlaying(/* parameters */);
		PlayerParams::~PlayerParams(/* parameters */);
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
		// BrnNetworkStateManager.cpp:679
		bool lbAgreeToShareInfoEA;

		// BrnNetworkStateManager.cpp:680
		bool lbAgreeToShareInfoPartners;

		// BrnNetworkStateManager.cpp:681
		bool lbTelemetryEnable;

		// BrnNetworkStateManager.cpp:683
		NetworkOutAccountUpdateComplete lNetworkUpdateAccountCompleteEvent;

		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutAccountUpdateComplete>(/* parameters */);
		CgsNetwork::ServerInterfaceTelemetry::EnableTemetry(/* parameters */);
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
		// BrnNetworkStateManager.cpp:451
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
		// BrnNetworkStateManager.cpp:778
		CgsID lCarModelID;

		PlayerParamsBase::GetFreeBurnCarID(/* parameters */);
		PlayerParamsBase::SetFreeBurnCarID(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// BrnNetworkStateManager.cpp:804
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:797
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkStateManager.cpp:1643
void BrnNetwork::StateManager::ProcessGameStateActions(const InputBuffer::GameActionQueue *  lpGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:1646
		const CgsModule::Event * lpAction;

		// BrnNetworkStateManager.cpp:1647
		int32_t liActionSize;

		// BrnNetworkStateManager.cpp:1648
		int32_t liActionType;

		CgsModule::VariableEventQueue<13312,16>::GetFirstEvent(/* parameters */);
	}
	{
	}
	{
		// BrnNetworkStateManager.cpp:1656
		const ResetPlayerCarAction * lpResetPlayerCarAction;

		BrnGameState::GameStateModuleIO::ResetPlayerCarAction::GetWheelModelId(/* parameters */);
		BrnNetworkManager::SetFreeBurnCar(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:2071
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:1681
		BrnNetwork::CollectableMessage::ECollectableType leCollectableType;

		// BrnNetworkStateManager.cpp:1682
		const OnStuntElementCompleteAction * lpStuntElementAction;

		// BrnNetworkStateManager.cpp:1686
		BrnNetwork::BrnNetworkPlayer * lpNetworkPlayer;

		// BrnNetworkStateManager.cpp:1689
		AggressiveMoveData::NetworkPlayerID lNetworkPlayerID;

	}
	{
		// BrnNetworkStateManager.cpp:1862
		const StopModeAction * lpStopModeAction;

		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BrnNetworkManager::SetRound(/* parameters */);
	}
	BrnNetworkManager::SetHasFever(/* parameters */);
	{
		// BrnNetworkStateManager.cpp:1976
		const MarkedManLoadedAction * lpMarkedManLoadedAction;

	}
	{
		// BrnNetworkStateManager.cpp:1990
		const PlayerEliminatedAction * lpPlayerEliminatedAction;

		// BrnNetworkStateManager.cpp:1991
		AggressiveMoveData::NetworkPlayerID lEliminatedPlayerID;

		// BrnNetworkStateManager.cpp:1992
		BrnNetwork::BrnNetworkPlayer * lpPlayer;

		BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
		BrnNetworkPlayer::SetEliminated(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:2060
		const AchievementsEarnedAction * lpAchievementAction;

	}
	{
		// BrnNetworkStateManager.cpp:1797
		BrnNetwork::BrnNetworkPlayer * lpNetPlayer;

		// BrnNetworkStateManager.cpp:1798
		AggressiveMoveData::NetworkPlayerID lPlayerID;

		BrnNetworkPlayer::SetOnStartLine(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:1734
		const PrepareForModeAction * lpPrepareForModeAction;

		// BrnNetworkStateManager.cpp:1735
		BrnNetwork::BrnNetworkPlayer * lpNetPlayer;

		// BrnNetworkStateManager.cpp:1736
		AggressiveMoveData::NetworkPlayerID lPlayerID;

		BrnGameState::GameStateModuleIO::PrepareForModeAction::GetGameModeParams(/* parameters */);
		BrnGameState::GameModeParams::GetGameModeType(/* parameters */);
		BrnGameState::GameStateModuleIO::IsShowtimeGameMode(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:1817
		AggressiveMoveData::NetworkPlayerID lLocalNetworkPlayerID;

		// BrnNetworkStateManager.cpp:1818
		const FinishedModeAction * lpFinishedModeAction;

		CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:2008
		const OnlineGameResults * lpResults;

	}
	{
		// BrnNetworkStateManager.cpp:1903
		const PerformInviteAction * lpPerformInviteAction;

		BrnNetworkManager::GetNetworkInviteManager(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:1925
		const StopModeIntroAction * lpStopIntroAction;

	}
	BrnNetworkPlayer::SetOnStartLine(/* parameters */);
	{
		// BrnNetworkStateManager.cpp:1940
		const CarSelectOnlineSelectCarAction * lpSelectCarAction;

		// BrnNetworkStateManager.cpp:1943
		BrnNetwork::PlayerMenuData * lpMenuData;

		// BrnNetworkStateManager.cpp:1944
		BrnNetwork::BrnNetworkPlayer * lpNetPlayer;

		// BrnNetworkStateManager.cpp:1945
		AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

		// BrnNetworkStateManager.cpp:1946
		AggressiveMoveData::NetworkPlayerID lPlayerID;

		CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:1845
		const ShowModeResultsAction * lpShowModeResultsAction;

	}
	{
		// BrnNetworkStateManager.cpp:2034
		const OnlineRoundResults * lpRoundResults;

	}
	BrnGameState::GameStateModuleIO::PrepareForModeAction::GetGameModeParams(/* parameters */);
	BrnGameState::GameModeParams::GetGameModeType(/* parameters */);
	BrnGameState::GameStateModuleIO::PrepareForModeAction::IsMovingBetweenOnlineLobbyModes(/* parameters */);
	{
		// BrnNetworkStateManager.cpp:1750
		BrnNetwork::BrnServerInterfaceDownloadableConfig * lpDownloadableConfig;

		CgsSystem::Time::Time(/* parameters */);
		BrnServerInterfaceBase::GetDownloadableConfigComponent(/* parameters */);
		CgsNetwork::NetworkManager::GetStartTimeManager(/* parameters */);
		BrnServerInterfaceDownloadableConfig::MinSyncTime(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		BrnServerInterfaceDownloadableConfig::MaxSyncTime(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsNetwork::StartTimeManager::SetSyncTimeTimeouts(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
		CgsNetwork::NetworkManager::GetStartTimeManager(/* parameters */);
		BrnServerInterfaceDownloadableConfig::TimeToWaitForSilentClientReady(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		BrnServerInterfaceDownloadableConfig::TimeToWaitForCommunicatingClientReady(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsNetwork::StartTimeManager::SetWaitForClientReadyTimeouts(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
		CgsNetwork::NetworkManager::GetStartTimeManager(/* parameters */);
		BrnServerInterfaceDownloadableConfig::WaitForStartTime(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		CgsNetwork::StartTimeManager::SetWaitForStartTimeTimeout(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
		BrnServerInterfaceDownloadableConfig::TimeGapBeforeStartTime(/* parameters */);
		CgsNetwork::NetworkManager::GetStartTimeManager(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsNetwork::StartTimeManager::SetGapTillStartTime(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsNetwork::StartTimeManager::SetGapTillStartTime(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkManager::SetRound(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkStateManager.cpp:333
void BrnNetwork::StateManager::Disconnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:335
		NetworkOutInstantFreeburnEvent lInstantFreeburnEvent;

	}
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutInstantFreeburnEvent>(/* parameters */);
}

// BrnNetworkStateManager.cpp:3313
void BrnNetwork::StateManager::QuickJoinFinishedCallback(bool  lbSuccess, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:3315
		NetworkOutInstantFreeburnEvent lInstantFreeburnEvent;

		// BrnNetworkStateManager.cpp:3316
		StateManager * lpStateManager;

		// BrnNetworkStateManager.cpp:3317
		BrnNetwork::BrnNetworkManager * lpNetworkManager;

		// BrnNetworkStateManager.cpp:3318
		CgsNetwork::ServerInterfaceGames * lpGames;

		// BrnNetworkStateManager.cpp:3319
		bool lbInGame;

	}
	CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
	{
		// BrnNetworkStateManager.cpp:3357
		GuiEventNetworkCustomMatchResults lSearchResults;

		BrnNetworkModule::AddOutputGuiEvent<BrnGui::GuiEventNetworkCustomMatchResults>(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:3365
		NetworkOutInstantFreeburnComplete lInstantFreeburnComplete;

		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutInstantFreeburnComplete>(/* parameters */);
	}
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutInstantFreeburnEvent>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:3334
		GuiEventNetworkInGame lInGameEvent;

		BrnNetworkModule::AddOutputGuiEvent<CgsGui::GuiEventNetworkInGame>(/* parameters */);
		CgsNetwork::VersionDisplay::SetGameServerGame(/* parameters */);
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

// BrnNetworkStateManager.cpp:2091
void BrnNetwork::StateManager::ProcessNetworkEvents(const NetworkEventQueue *  lpNetworkEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:2093
		const CgsModule::Event * lpEvent;

		// BrnNetworkStateManager.cpp:2094
		int32_t liEventSize;

		// BrnNetworkStateManager.cpp:2095
		int32_t liEventType;

		CgsModule::VariableEventQueue<14000,16>::GetFirstEvent(/* parameters */);
	}
	{
	}
	{
		// BrnNetworkStateManager.cpp:2238
		NetworkOutShowSignInGui lShowSignInGui;

		// BrnNetworkStateManager.cpp:2239
		NetworkOutInstantFreeburnEvent lInstantFreeburnEvent;

		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutShowSignInGui>(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutInstantFreeburnEvent>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:2693
		const NetworkInLocalPlayerCrashesEvent * lpPlayerCrashesEvent;

		// BrnNetworkStateManager.cpp:2694
		AggressiveMoveData::NetworkPlayerID lNetworkPlayerID;

		// BrnNetworkStateManager.cpp:2695
		BrnNetwork::BrnNetworkPlayer * lpNetworkPlayer;

		{
			// BrnNetworkStateManager.cpp:2708
			AggressiveMoveData::NetworkPlayerID lCrasherEntityNetworkID;

			BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
			BrnNetworkPlayer::SetLocalPlayerCrasherID(/* parameters */);
		}
	}
	{
		// BrnNetworkStateManager.cpp:2588
		BrnNetworkManager::Camera * lpCamera;

		// BrnNetworkStateManager.cpp:2589
		const NetworkInReqCamPicEvent * lpReqCompPicEvent;

	}
	CgsNetwork::ServerInterfaceDirtySock::GetPlayerInfoComponent(/* parameters */);
	{
		// BrnNetworkStateManager.cpp:2632
		NetworkOutAccountUpdateComplete lNetworkUpdateAccountCompleteEvent;

		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutAccountUpdateComplete>(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:2654
		NetworkOutAccountSettings lNetworkAccountSettings;

		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutAccountSettings>(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:2618
		const NetworkInSelectScoreboardEvent * lpScoreboardEvent;

	}
	{
		// BrnNetworkStateManager.cpp:2668
		const NetworkInLocalPlayerReachesCheckpoint * lpLandmarkEvent;

		// BrnNetworkStateManager.cpp:2669
		AggressiveMoveData::NetworkPlayerID lNetworkPlayerID;

		{
			// BrnNetworkStateManager.cpp:2681
			BrnNetwork::BrnNetworkPlayer * lpNetworkPlayer;

		}
	}
	{
		// BrnNetworkStateManager.cpp:2146
		const NetworkInChangeDistrictEvent * lpChangeDistrictEvent;

		BrnNetworkManager::SetCurrentDistrict(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:2533
		const NetworkInFburnChallengeStatusEvent * lpFreeburnChallengeStatusEvent;

		// BrnNetworkStateManager.cpp:2534
		BrnNetwork::BrnNetworkPlayer * lpNetworkPlayer;

	}
	{
		// BrnNetworkStateManager.cpp:2499
		const NetworkInFreeburnChallengeEvent * lpFreeburnChallengeEvent;

		// BrnNetworkStateManager.cpp:2500
		AggressiveMoveData::NetworkPlayerID lNetworkPlayerID;

		BrnNetworkModule::GetNetworkManager(/* parameters */);
		{
			// BrnNetworkStateManager.cpp:2511
			BrnNetwork::BrnNetworkPlayer * lpNetworkPlayer;

		}
	}
	{
		// BrnNetworkStateManager.cpp:2556
		const NetworkInActiveFburnChallengeEvent * lpActiveFreeburnChallengeEvent;

		// BrnNetworkStateManager.cpp:2557
		BrnNetwork::BrnNetworkPlayer * lpNetworkPlayer;

		{
			// BrnNetworkStateManager.cpp:2570
			int32_t liIndex;

			// BrnNetworkStateManager.cpp:2572
			AggressiveMoveData::NetworkPlayerID[7] laPlayerInChallengeIDs;

			BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
		}
	}
	{
		// BrnNetworkStateManager.cpp:2453
		const NetworkInShowtimeSwitchEvent * lpShowtimeModeSwitchEvent;

		// BrnNetworkStateManager.cpp:2454
		AggressiveMoveData::NetworkPlayerID lNetworkPlayerID;

		CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:2414
		const NetworkInShowtimeUpdateEvent * lpShowtimeUpdateEvent;

		// BrnNetworkStateManager.cpp:2415
		AggressiveMoveData::NetworkPlayerID lNetworkPlayerID;

		CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:2346
		const NetworkInBurnoutSkillzEvent * lpBurnoutSkillzEvent;

		{
			// BrnNetworkStateManager.cpp:2405
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// BrnNetworkStateManager.cpp:2311
		const NetworkInSwitchBurningHomeRunRunner * lpSwitchRunnerEvent;

		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		{
			// BrnNetworkStateManager.cpp:2323
			NetworkOutSwitchBurningHomeRunRunner lSwitchRunnerEvent;

			// BrnNetworkStateManager.cpp:2324
			AggressiveMoveData::NetworkPlayerID lPlayerID;

			{
				// BrnNetworkStateManager.cpp:2329
				BrnNetwork::BrnNetworkPlayer * lpNetPlayer;

			}
			BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
			AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutSwitchBurningHomeRunRunner>(/* parameters */);
		}
	}
	{
		// BrnNetworkStateManager.cpp:2277
		const NetworkInPaybackSucceeded * lpPaybackEvent;

		LiveRevengeManager::HandlePaybackSucceededEvent(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:2265
		const NetworkInPaybackIntialised * lpPaybackEvent;

		LiveRevengeManager::HandlePaybackInitialisedEvent(/* parameters */);
	}
	BrnNetworkManager::GetRoadRulesManager(/* parameters */);
	NetworkRoadRulesManager::FinishedBooting(/* parameters */);
	{
		// BrnNetworkStateManager.cpp:2778
		const NetworkInVoipEvent * lpVoipEvent;

	}
	{
		// BrnNetworkStateManager.cpp:2208
		const NetworkInRevokeInvite * lpRevokeInviteEvent;

	}
	{
		// BrnNetworkStateManager.cpp:2163
		const NetworkInSendInvite * lpBuddyEvent;

		{
			// BrnNetworkStateManager.cpp:2172
			BrnNetwork::GameParams lGameParams;

			GameParams::GameParams(/* parameters */);
			CgsNetwork::ServerInterfaceGameParamsBase::IsRankedGame(/* parameters */);
			CgsNetwork::ServerInterfaceGameParamsBase::IsRankedGame(/* parameters */);
			GameParams::~GameParams(/* parameters */);
		}
	}
	{
		// BrnNetworkStateManager.cpp:2289
		const NetworkInLiveRevengeProfileLoaded * lpLoadedEvent;

	}
	{
		// BrnNetworkStateManager.cpp:2256
		const NetworkInSettingsUpdateEvent * lpSettingsUpdateEvent;

	}
	{
		// BrnNetworkStateManager.cpp:2187
		NetworkOutShowSignInGui lShowSignInGui;

		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutShowSignInGui>(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:2359
		AggressiveMoveData::NetworkPlayerID lNetworkPlayerID;

		CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
		{
			// BrnNetworkStateManager.cpp:2375
			BrnNetwork::BrnNetworkPlayer * lpNetworkPlayer;

		}
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
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkStateManager.cpp:2437
		BrnNetwork::BrnNetworkPlayer * lpNetworkPlayer;

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
		// BrnNetworkStateManager.cpp:2637
		const NetworkInAccountUpdate * lpAccountUpdateEvent;

	}
	{
		// BrnNetworkStateManager.cpp:2474
		BrnNetwork::BrnNetworkPlayer * lpNetworkPlayer;

	}
	{
		// BrnNetworkStateManager.cpp:2391
		BrnNetwork::BrnNetworkPlayer * lpNetworkPlayer;

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

// BrnNetworkStateManager.cpp:372
void BrnNetwork::StateManager::UpdateEvents(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkStateManager.cpp:374
		uint32_t luMemory;

		{
			// BrnNetworkStateManager.cpp:375
			uint32_t luNewAvailableMemory;

		}
		BrnNetworkModuleIO::PostSimulationInputBuffer::GetGuiEventQueue(/* parameters */);
		{
			// BrnNetworkStateManager.cpp:379
			uint32_t luNewAvailableMemory;

		}
		BrnNetworkModuleIO::PostSimulationInputBuffer::GetGameActionQueue(/* parameters */);
		{
			// BrnNetworkStateManager.cpp:381
			uint32_t luNewAvailableMemory;

		}
		BrnNetworkModuleIO::PostSimulationInputBuffer::GetNetworkEventQueue(/* parameters */);
		{
			// BrnNetworkStateManager.cpp:383
			uint32_t luNewAvailableMemory;

		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkStateManager.cpp:38
// BrnNetworkStateManager.cpp:39
// BrnNetworkStateManager.cpp:41
// BrnNetworkStateManager.cpp:42
