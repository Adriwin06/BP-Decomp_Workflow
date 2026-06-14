// BrnNetworkPostRoundManager.cpp:70
void BrnNetwork::PostRoundManager::InitialiseUpdateArray() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPostRoundManager.cpp:72
		int32_t liIndex;

	}
}

// BrnNetworkPostRoundManager.cpp:101
void BrnNetwork::PostRoundManager::InitialiseActionArray() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPostRoundManager.cpp:103
		int32_t liProcessIndex;

		// BrnNetworkPostRoundManager.cpp:104
		int32_t liActionIndex;

	}
}

// BrnNetworkPostRoundManager.cpp:44
void BrnNetwork::PostRoundManager::Construct(BrnNetwork::BrnNetworkManager *  lpNetworkManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkPostRoundManager.cpp:191
void BrnNetwork::PostRoundManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkPostRoundManager.cpp:219
void BrnNetwork::PostRoundManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkPostRoundManager.cpp:242
void BrnNetwork::PostRoundManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkPostRoundManager.cpp:263
void BrnNetwork::PostRoundManager::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkPostRoundManager.cpp:279
void BrnNetwork::PostRoundManager::UpdateNone() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkPostRoundManager.cpp:308
void BrnNetwork::PostRoundManager::UpdateWaitCallback() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkPostRoundManager.cpp:922
void BrnNetwork::PostRoundManager::Disconnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkPostRoundManager.cpp:321
void BrnNetwork::PostRoundManager::UpdateWaitResume() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkPostRoundManager.cpp:789
void BrnNetwork::PostRoundManager::ProcessRaceResults(const OnlineGameResults *  lpRaceResults) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkPostRoundManager.cpp:427
void BrnNetwork::PostRoundManager::StartProcess(BrnNetwork::PostRoundManager::EProcess  leProcess, void (*)(bool, void *)  lCallback, void *  lpCallbackUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPostRoundManager.cpp:430
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkPostRoundManager.cpp:538
void BrnNetwork::PostRoundManager::StartEndOfRound(void (*)(bool, void *)  lCallback, void *  lpCallbackUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkPostRoundManager.cpp:451
void BrnNetwork::PostRoundManager::ProcessComplete(bool  lbSuccess) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPostRoundManager.cpp:453
		void (*)(bool, void *) lCallback;

		// BrnNetworkPostRoundManager.cpp:454
		void * lpCallbackUserData;

		// BrnNetworkPostRoundManager.cpp:456
		BrnNetwork::BrnServerInterface * lpServerInterface;

		// BrnNetworkPostRoundManager.cpp:457
		CgsNetwork::ServerInterfaceGames * lpServerInterfaceGames;

		// BrnNetworkPostRoundManager.cpp:458
		AggressiveMoveData::NetworkPlayerID lLocalNetworkPlayerID;

		// BrnNetworkPostRoundManager.cpp:459
		PlayerParams lLocalPlayerParams;

		PlayerParams::PlayerParams(/* parameters */);
	}
	BrnNetworkManager::GetServerInterface(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
	CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	PlayerParams::~PlayerParams(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkPostRoundManager.cpp:556
void BrnNetwork::PostRoundManager::StartEndOfGame(bool  lbQuit, bool  lbLeaveGame, void (*)(bool, void *)  lCallback, void *  lpCallbackUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkPostRoundManager.cpp:503
void BrnNetwork::PostRoundManager::SetNextAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPostRoundManager.cpp:505
		BrnNetwork::PostRoundManager::EAction leNextAction;

	}
}

// BrnNetworkPostRoundManager.cpp:334
void BrnNetwork::PostRoundManager::UpdateWaitGameUnstart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPostRoundManager.cpp:336
		CgsNetwork::ServerInterfaceGames * lpGamesComponent;

		CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
	}
}

// BrnNetworkPostRoundManager.cpp:368
void BrnNetwork::PostRoundManager::ServerInterfaceIdle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPostRoundManager.cpp:387
		BrnNetwork::PostRoundManager::EAction leCurrentAction;

	}
}

// BrnNetworkPostRoundManager.cpp:291
void BrnNetwork::PostRoundManager::UpdateWaitIdle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkPostRoundManager.cpp:610
void BrnNetwork::PostRoundManager::ActionResume() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[13] __FUNCTION__;

	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkPostRoundManager.cpp:631
void BrnNetwork::PostRoundManager::ActionLeaveGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[16] __FUNCTION__;

	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkPostRoundManager.cpp:657
void BrnNetwork::PostRoundManager::ActionSendResults() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[18] __FUNCTION__;

	{
		// BrnNetworkPostRoundManager.cpp:659
		BrnNetwork::BrnServerInterface * lpServerInterface;

		// BrnNetworkPostRoundManager.cpp:660
		CgsNetwork::ServerInterfaceGames * lpServerInterfaceGames;

	}
	BrnNetworkManager::GetServerInterface(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkPostRoundManager.cpp:688
void BrnNetwork::PostRoundManager::ActionChangePlayerParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[25] __FUNCTION__;

	{
		// BrnNetworkPostRoundManager.cpp:690
		BrnNetwork::BrnServerInterface * lpServerInterface;

		// BrnNetworkPostRoundManager.cpp:691
		CgsNetwork::ServerInterfaceGames * lpServerInterfaceGames;

		// BrnNetworkPostRoundManager.cpp:692
		PlayerParams lLocalPlayerParams;

		// BrnNetworkPostRoundManager.cpp:693
		AggressiveMoveData::NetworkPlayerID lLocalNetworkPlayerID;

	}
	PlayerParams::PlayerParams(/* parameters */);
	BrnNetworkManager::GetServerInterface(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
	CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	PlayerParamsBase::SetReady(/* parameters */);
	PlayerParamsBase::SetMarkedPlayerID(/* parameters */);
	PlayerParamsBase::SetPlaying(/* parameters */);
	PlayerParams::~PlayerParams(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkPostRoundManager.cpp:741
void BrnNetwork::PostRoundManager::ActionChangeGameParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[23] __FUNCTION__;

	{
		// BrnNetworkPostRoundManager.cpp:743
		BrnNetwork::BrnServerInterface * lpServerInterface;

		// BrnNetworkPostRoundManager.cpp:744
		CgsNetwork::ServerInterfaceGames * lpServerInterfaceGames;

		// BrnNetworkPostRoundManager.cpp:745
		BrnNetwork::GameParams lGameParams;

		GameParams::GameParams(/* parameters */);
	}
	PlayerParams::PlayerParams(/* parameters */);
	BrnNetworkManager::GetServerInterface(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
	GameParams::~GameParams(/* parameters */);
	CgsNetwork::ServerInterfaceGameParams::~ServerInterfaceGameParams(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsNetwork::ServerInterfaceGameParamsBase::UnlockGame(/* parameters */);
}

// BrnNetworkPostRoundManager.cpp:808
void BrnNetwork::PostRoundManager::ActionUnstartGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[18] __FUNCTION__;

	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkPostRoundManager.cpp:827
void BrnNetwork::PostRoundManager::ActionEndGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[14] __FUNCTION__;

	{
		// BrnNetworkPostRoundManager.cpp:829
		ServerInterfaceEndGameData lEndGameData;

	}
	CgsNetwork::ServerInterfaceEndGameData::ServerInterfaceEndGameData(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
	CgsNetwork::ServerInterfaceEndGameData::~ServerInterfaceEndGameData(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkPostRoundManager.cpp:870
void BrnNetwork::PostRoundManager::ResumeCompleteCallback(bool  lbSuccess, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPostRoundManager.cpp:872
		PostRoundManager * lpPostRoundManager;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnNetworkPostRoundManager.cpp:892
		int32_t liError;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

