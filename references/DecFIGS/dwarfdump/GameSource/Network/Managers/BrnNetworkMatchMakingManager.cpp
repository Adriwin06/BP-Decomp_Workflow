// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// BrnNetworkMatchMakingManager.cpp:31
	const float32_t KF_SEARCH_INTERVAL;

	// BrnNetworkMatchMakingManager.cpp:37
	const CgsNetwork::ServerInterfaceGames::EGameServerConnectionType KE_GAME_SERVER_CONNECTION_TYPE;

}

// BrnNetworkMatchMakingManager.cpp:81
void BrnNetwork::MatchMakingManager::InitialiseUpdateArray() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkMatchMakingManager.cpp:83
		int32_t liIndex;

	}
}

// BrnNetworkMatchMakingManager.cpp:111
void BrnNetwork::MatchMakingManager::InitialiseActionArray() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkMatchMakingManager.cpp:113
		int32_t liProcessIndex;

		// BrnNetworkMatchMakingManager.cpp:114
		int32_t liActionIndex;

	}
}

// BrnNetworkMatchMakingManager.cpp:319
void BrnNetwork::MatchMakingManager::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkMatchMakingManager.cpp:337
void BrnNetwork::MatchMakingManager::UpdateNone() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkMatchMakingManager.cpp:436
void BrnNetwork::MatchMakingManager::ProcessComplete(bool  lbSuccess) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkMatchMakingManager.cpp:438
		void (*)(bool, void *) lCallback;

		// BrnNetworkMatchMakingManager.cpp:439
		void * lpCallbackUserData;

	}
}

// BrnNetworkMatchMakingManager.cpp:463
void BrnNetwork::MatchMakingManager::SetNextAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkMatchMakingManager.cpp:465
		BrnNetwork::MatchMakingManager::EAction leNextAction;

	}
}

// BrnNetworkMatchMakingManager.cpp:635
void BrnNetwork::MatchMakingManager::SortGameSearchResultsCallback(void *  lpUserData, CgsNetwork::ServerInterfaceGameParams *  lpGameA, CgsNetwork::ServerInterfaceGameParams *  lpGameB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkMatchMakingManager.cpp:1013
void BrnNetwork::MatchMakingManager::ActionWaitSearchForGames() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkMatchMakingManager.cpp:1149
void BrnNetwork::MatchMakingManager::ActionWaitInGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkMatchMakingManager.cpp:990
void BrnNetwork::MatchMakingManager::ActionSearchForGames() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkManager::GetTime(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
}

// BrnNetworkMatchMakingManager.cpp:917
void BrnNetwork::MatchMakingManager::ActionLeaveGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkMatchMakingManager.cpp:1128
void BrnNetwork::MatchMakingManager::ActionLeaveUserset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkMatchMakingManager.cpp:1032
void BrnNetwork::MatchMakingManager::ActionUnLockUserset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkMatchMakingManager.cpp:1038
		BrnNetwork::UsersetParams lParams;

		UsersetParams::UsersetParams(/* parameters */);
		CgsNetwork::ServerInterfaceUsersetParamsBase::IsLocked(/* parameters */);
		CgsNetwork::ServerInterfaceUsersetParamsBase::Unlock(/* parameters */);
		UsersetParams::~UsersetParams(/* parameters */);
	}
}

// BrnNetworkMatchMakingManager.cpp:758
void BrnNetwork::MatchMakingManager::ActionLockUserset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkMatchMakingManager.cpp:763
		BrnNetwork::UsersetParams lParams;

	}
	UsersetParams::UsersetParams(/* parameters */);
	CgsNetwork::ServerInterfaceUsersetParamsBase::Lock(/* parameters */);
	UsersetParams::~UsersetParams(/* parameters */);
}

// BrnNetworkMatchMakingManager.cpp:1098
void BrnNetwork::MatchMakingManager::ActionJoinUserset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkMatchMakingManager.cpp:1100
		BrnNetwork::UsersetParams lUsersetParams;

		// BrnNetworkMatchMakingManager.cpp:1101
		BrnNetwork::GameParams lGameParams;

		GameParams::GameParams(/* parameters */);
	}
	UsersetParams::UsersetParams(/* parameters */);
	PlayerParams::PlayerParams(/* parameters */);
	CgsNetwork::ServerInterfaceUsersetParamsBase::SetName(/* parameters */);
	GameParams::~GameParams(/* parameters */);
	CgsNetwork::ServerInterfaceGameParams::~ServerInterfaceGameParams(/* parameters */);
	UsersetParams::~UsersetParams(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkMatchMakingManager.cpp:1067
void BrnNetwork::MatchMakingManager::ActionCreateUserset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkMatchMakingManager.cpp:1069
		BrnNetwork::UsersetParams lUsersetParams;

		// BrnNetworkMatchMakingManager.cpp:1070
		BrnNetwork::GameParams lGameParams;

		GameParams::GameParams(/* parameters */);
	}
	UsersetParams::UsersetParams(/* parameters */);
	PlayerParams::PlayerParams(/* parameters */);
	CgsNetwork::ServerInterfaceUsersetParamsBase::SetName(/* parameters */);
	CgsNetwork::ServerInterfaceUsersetParamsBase::SetMaxPlayers(/* parameters */);
	GameParams::~GameParams(/* parameters */);
	CgsNetwork::ServerInterfaceGameParams::~ServerInterfaceGameParams(/* parameters */);
	UsersetParams::~UsersetParams(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkMatchMakingManager.cpp:1164
void BrnNetwork::MatchMakingManager::Disconnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::SetFloatVal(/* parameters */);
}

// BrnNetworkMatchMakingManager.cpp:293
void BrnNetwork::MatchMakingManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::SetFloatVal(/* parameters */);
}

// BrnNetworkMatchMakingManager.cpp:268
void BrnNetwork::MatchMakingManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::SetFloatVal(/* parameters */);
}

// BrnNetworkMatchMakingManager.cpp:215
void BrnNetwork::MatchMakingManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::SetFloatVal(/* parameters */);
	ServerInterfaceDebugComponent::SetConnectionType(/* parameters */);
}

// BrnNetworkMatchMakingManager.cpp:53
void BrnNetwork::MatchMakingManager::Construct(BrnNetwork::BrnNetworkManager *  lpNetworkManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::SetFloatVal(/* parameters */);
}

// BrnNetworkMatchMakingManager.cpp:413
void BrnNetwork::MatchMakingManager::StartProcess(BrnNetwork::MatchMakingManager::EProcess  leProcess, void (*)(bool, void *)  lCallback, void *  lpCallbackUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkMatchMakingManager.cpp:416
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkMatchMakingManager.cpp:668
void BrnNetwork::MatchMakingManager::ServerInterfaceIdle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkMatchMakingManager.cpp:670
		CgsNetwork::ServerInterfaceDirtySock::EStatus leStatus;

		{
			// BrnNetworkMatchMakingManager.cpp:689
			BrnNetwork::MatchMakingManager::EAction leNextAction;

		}
	}
	{
		// BrnNetworkMatchMakingManager.cpp:714
		void (*)(bool, void *) lCallback;

		// BrnNetworkMatchMakingManager.cpp:715
		void * lpCallbackUserData;

	}
}

// BrnNetworkMatchMakingManager.cpp:392
void BrnNetwork::MatchMakingManager::UpdateWaitInGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkMatchMakingManager.cpp:371
void BrnNetwork::MatchMakingManager::UpdateWaitToSearch() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkManager::GetTime(/* parameters */);
	CgsSystem::Time::operator-(/* parameters */);
	CgsSystem::Time::operator>=(/* parameters */);
	CgsSystem::Time::operator<=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkMatchMakingManager.cpp:352
void BrnNetwork::MatchMakingManager::UpdateWaitIdle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkMatchMakingManager.cpp:616
void BrnNetwork::MatchMakingManager::SearchForGames(const BrnNetwork::GameSearchParams *  lpSearchParams, void (*)(bool, void *)  lCallback, void *  lpCallbackUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameSearchParams::operator=(/* parameters */);
	GameSearchParamsBase::operator=(/* parameters */);
	CgsNetwork::ServerInterfaceGameSearchParams::operator=(/* parameters */);
}

// BrnNetworkMatchMakingManager.cpp:587
void BrnNetwork::MatchMakingManager::QuickJoinGame(bool  lbRanked, bool  lbFreeburn, void (*)(bool, void *)  lCallback, void *  lpCallbackUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkMatchMakingManager.cpp:569
void BrnNetwork::MatchMakingManager::LeaveGame(void (*)(bool, void *)  lCallback, void *  lpCallbackUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkMatchMakingManager.cpp:535
void BrnNetwork::MatchMakingManager::JoinGame(const BrnNetwork::GameParams *  lpParams, bool  lbPerformingInvite, void (*)(bool, void *)  lCallback, void *  lpCallbackUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameParams::operator=(/* parameters */);
	PlayerParams::operator=(/* parameters */);
}

// BrnNetworkMatchMakingManager.cpp:500
void BrnNetwork::MatchMakingManager::CreateGame(const BrnNetwork::GameParams *  lpParams, void (*)(bool, void *)  lCallback, void *  lpCallbackUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameParams::operator=(/* parameters */);
	PlayerParams::operator=(/* parameters */);
}

// BrnNetworkMatchMakingManager.cpp:788
void BrnNetwork::MatchMakingManager::ActionCreateGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkMatchMakingManager.cpp:790
		PlayerParams lPlayerParams;

		// BrnNetworkMatchMakingManager.cpp:791
		BrnNetwork::PlayerInfoData lPlayerInfo;

		PlayerInfoData::PlayerInfoData(/* parameters */);
	}
	PlayerParams::PlayerParams(/* parameters */);
	PlayerParamsBase::SetConsoleFrameRate(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	PlayerParamsBase::SetFreeBurnCarID(/* parameters */);
	PlayerParamsBase::SetRank(/* parameters */);
	CgsNetwork::NetworkEncodeUncompressedCgsID(/* parameters */);
	PlayerParamsBase::SetCarColourIndex(/* parameters */);
	PlayerParamsBase::SetHasFever(/* parameters */);
	BrnNetworkManager::HasFever(/* parameters */);
	PlayerParamsBase::SetPaintFinishIndex(/* parameters */);
	PlayerParamsBase::SetIsDeveloper(/* parameters */);
	BrnNetworkManager::IsDeveloper(/* parameters */);
	CgsNetwork::ServerInterfaceGameParamsBase::SetMaxPlayers(/* parameters */);
	BrnNetworkManager::GetServerInterface(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
	PlayerInfoData::~PlayerInfoData(/* parameters */);
	PlayerParams::~PlayerParams(/* parameters */);
	CgsNetwork::ServerInterfaceGameParamsBase::SetMaxPlayers(/* parameters */);
	{
		// BrnNetworkMatchMakingManager.cpp:851
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkMatchMakingManager.cpp:872
void BrnNetwork::MatchMakingManager::ActionJoinGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkMatchMakingManager.cpp:874
		PlayerParams lPlayerParams;

		// BrnNetworkMatchMakingManager.cpp:875
		BrnNetwork::PlayerInfoData lPlayerInfo;

		PlayerInfoData::PlayerInfoData(/* parameters */);
	}
	PlayerParams::PlayerParams(/* parameters */);
	PlayerParamsBase::SetConsoleFrameRate(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	PlayerParamsBase::SetFreeBurnCarID(/* parameters */);
	PlayerParamsBase::SetRank(/* parameters */);
	CgsNetwork::NetworkEncodeUncompressedCgsID(/* parameters */);
	PlayerParamsBase::SetCarColourIndex(/* parameters */);
	PlayerParamsBase::SetHasFever(/* parameters */);
	BrnNetworkManager::HasFever(/* parameters */);
	PlayerParamsBase::SetPaintFinishIndex(/* parameters */);
	PlayerParamsBase::SetIsDeveloper(/* parameters */);
	BrnNetworkManager::IsDeveloper(/* parameters */);
	BrnNetworkManager::GetServerInterface(/* parameters */);
	CgsNetwork::ServerInterfaceGameParamsBase::SetJoinUserset(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
	PlayerInfoData::~PlayerInfoData(/* parameters */);
	PlayerParams::~PlayerParams(/* parameters */);
	{
		// BrnNetworkMatchMakingManager.cpp:896
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkMatchMakingManager.cpp:938
void BrnNetwork::MatchMakingManager::ActionQuickJoinGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkMatchMakingManager.cpp:940
		BrnNetwork::QuickJoinParams lQuickJoinParams;

		// BrnNetworkMatchMakingManager.cpp:941
		PlayerParams lPlayerParams;

		// BrnNetworkMatchMakingManager.cpp:942
		BrnNetwork::PlayerInfoData lPlayerInfo;

	}
	PlayerParams::PlayerParams(/* parameters */);
	PlayerInfoData::PlayerInfoData(/* parameters */);
	QuickJoinParams::QuickJoinParams(/* parameters */);
	CgsNetwork::ServerInterfaceQuickJoinParamsBase::SetJoinUserset(/* parameters */);
	PlayerParamsBase::SetConsoleFrameRate(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	PlayerParamsBase::SetFreeBurnCarID(/* parameters */);
	PlayerParamsBase::SetRank(/* parameters */);
	CgsNetwork::NetworkEncodeUncompressedCgsID(/* parameters */);
	PlayerParamsBase::SetCarColourIndex(/* parameters */);
	PlayerParamsBase::SetHasFever(/* parameters */);
	BrnNetworkManager::HasFever(/* parameters */);
	PlayerParamsBase::SetPaintFinishIndex(/* parameters */);
	PlayerParamsBase::SetIsDeveloper(/* parameters */);
	BrnNetworkManager::IsDeveloper(/* parameters */);
	BrnNetworkManager::GetServerInterface(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
	PlayerInfoData::~PlayerInfoData(/* parameters */);
	QuickJoinParams::~QuickJoinParams(/* parameters */);
	PlayerParams::~PlayerParams(/* parameters */);
	{
		// BrnNetworkMatchMakingManager.cpp:969
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

