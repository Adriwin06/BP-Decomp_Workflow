// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// BrnNetworkPlayerStatsManager.cpp:29
	const char * KPC_VIEW_STATS;

	// BrnNetworkPlayerStatsManager.cpp:30
	const int32_t KI_INVALID_STAT_VERSION = 4294967295;

}

// BrnNetworkPlayerStatsManager.cpp:571
void BrnNetwork::NetworkPlayerStatsManager::AddEvent(const StatsRequestEvent *  lpStatsRequestEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FifoQueue<BrnNetwork::StatsRequestEvent,32>::Push(/* parameters */);
}

// BrnNetworkPlayerStatsManager.cpp:1092
void BrnNetwork::NetworkPlayerStatsManager::GetStatsUpdateEntry(const AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerStatsManager.cpp:1094
		int32_t liEntryIndex;

	}
}

// BrnNetworkPlayerStatsManager.cpp:1071
void BrnNetwork::NetworkPlayerStatsManager::ClearAllMessaage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerStatsManager.cpp:1073
		int32_t liEntry;

	}
}

// BrnNetworkPlayerStatsManager.cpp:193
void BrnNetwork::NetworkPlayerStatsManager::Disconnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FifoQueue<BrnNetwork::StatsRequestEvent,32>::Clear(/* parameters */);
}

// BrnNetworkPlayerStatsManager.cpp:723
void BrnNetwork::NetworkPlayerStatsManager::OnGameStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkPlayerStatsManager.cpp:946
void BrnNetwork::NetworkPlayerStatsManager::GetLocalPlayerStats() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerStatsManager.cpp:948
		const NetworkPlayerStats * lpLocalPlayerStats;

	}
}

// BrnNetworkPlayerStatsManager.cpp:963
void BrnNetwork::NetworkPlayerStatsManager::GetNonConstLocalPlayerStats() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerStatsManager.cpp:965
		const NetworkPlayerStats * lpLocalPlayerStats;

	}
}

// BrnNetworkPlayerStatsManager.cpp:1114
void BrnNetwork::NetworkPlayerStatsManager::MarkNeedsUpdatingFlagInAllPlayers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerStatsManager.cpp:1116
		int32_t liEntryIndex;

	}
}

// BrnNetworkPlayerStatsManager.cpp:548
void BrnNetwork::NetworkPlayerStatsManager::CopyNextValidEventOutOfQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FifoQueue<BrnNetwork::StatsRequestEvent,32>::Pop(/* parameters */);
}

// BrnNetworkPlayerStatsManager.cpp:1192
void BrnNetwork::NetworkPlayerStatsManager::UpdateLocalPlayersStat(BrnNetwork::NetworkPlayerStats::EStatsValue  leStatType, int32_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerStatsManager.cpp:1194
		AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

		// BrnNetworkPlayerStatsManager.cpp:1195
		NetworkPlayerStats * lpPlayerStats;

	}
	CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	NetworkPlayerStats::SetStatAsInt(/* parameters */);
}

// BrnNetworkPlayerStatsManager.cpp:1269
void BrnNetwork::NetworkPlayerStatsManager::HandleNewNumberOfAchievements(int32_t  liNumberOfAchievements) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkPlayerStatsManager.cpp:773
void BrnNetwork::NetworkPlayerStatsManager::HandleFreeburnChallengeEvent(const NetworkInFreeburnChallengeEvent *  lpFreeburnEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkPlayerStatsManager.cpp:425
void BrnNetwork::NetworkPlayerStatsManager::CopyEvents(const StatsInputInterface::StatsInputQueue *  lpStatsEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerStatsManager.cpp:429
		int32_t liEventQueueLoopCounter;

	}
	CgsModule::BaseEventQueue<BrnNetwork::StatsRequestEvent>::GetEvent(/* parameters */);
}

// BrnNetworkPlayerStatsManager.cpp:591
void BrnNetwork::NetworkPlayerStatsManager::GetPlayerStatsByName(const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerStatsManager.cpp:594
		NetworkPlayerStats * lpPlayerStats;

	}
}

// BrnNetworkPlayerStatsManager.cpp:987
void BrnNetwork::NetworkPlayerStatsManager::IsThisLocalPlayer(const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerStatsManager.cpp:989
		BrnNetwork::PlayerInfoData lPlayerInfo;

	}
	PlayerInfoData::PlayerInfoData(/* parameters */);
	CgsNetwork::UsernameCompare(/* parameters */);
	PlayerInfoData::~PlayerInfoData(/* parameters */);
}

// BrnNetworkPlayerStatsManager.cpp:828
void BrnNetwork::NetworkPlayerStatsManager::GetPlayerNameFromID(AggressiveMoveData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerStatsManager.cpp:830
		BrnNetwork::PlayerInfoData lPlayerInfo;

		PlayerInfoData::PlayerInfoData(/* parameters */);
	}
	{
		// BrnNetworkPlayerStatsManager.cpp:839
		CgsNetwork::PlayerMenuData * lpMenuData;

	}
	PlayerInfoData::~PlayerInfoData(/* parameters */);
}

// BrnNetworkPlayerStatsManager.cpp:619
void BrnNetwork::NetworkPlayerStatsManager::GetPlayerStatsByID(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkPlayerStatsManager.cpp:1040
void BrnNetwork::NetworkPlayerStatsManager::UploadOfflineProgression(const NetworkInOfflineProgression *  lpProgression) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ServerBusy(/* parameters */);
}

// BrnNetworkPlayerStatsManager.cpp:170
void BrnNetwork::NetworkPlayerStatsManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::SetFloatVal(/* parameters */);
}

// BrnNetworkPlayerStatsManager.cpp:135
void BrnNetwork::NetworkPlayerStatsManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::SetFloatVal(/* parameters */);
	CgsContainers::FifoQueue<BrnNetwork::StatsRequestEvent,32>::Clear(/* parameters */);
}

// BrnNetworkPlayerStatsManager.cpp:92
void BrnNetwork::NetworkPlayerStatsManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkManager::GetServerInterface(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetPlayerInfoComponent(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	CgsContainers::FifoQueue<BrnNetwork::StatsRequestEvent,32>::Clear(/* parameters */);
}

// BrnNetworkPlayerStatsManager.cpp:57
void BrnNetwork::NetworkPlayerStatsManager::Construct(BrnNetwork::BrnNetworkModule *  lpNetworkModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	CgsContainers::FifoQueue<BrnNetwork::StatsRequestEvent,32>::Clear(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkPlayerStatsManager.cpp:1256
void BrnNetwork::NetworkPlayerStatsManager::HandleNewNumberOfRivals() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkPlayerStatsManager.cpp:1008
void BrnNetwork::NetworkPlayerStatsManager::UploadFreeBurnLobbyStats(const OnlineGameResults *  lpResults) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ServerBusy(/* parameters */);
	operator=(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	BrnServerInterfaceBase::GetCustomCommandsComponent(/* parameters */);
}

// BrnNetworkPlayerStatsManager.cpp:213
void BrnNetwork::NetworkPlayerStatsManager::ValidateQueueAndPostGettingStatsEvents(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerStatsManager.cpp:215
		int32_t liQueueSize;

		// BrnNetworkPlayerStatsManager.cpp:216
		int32_t liQueueIndex;

		// BrnNetworkPlayerStatsManager.cpp:217
		float32_t lfStatsExpireTime;

	}
	CgsContainers::FifoQueue<BrnNetwork::StatsRequestEvent,32>::GetLength(/* parameters */);
	BrnServerInterfaceDownloadableConfig::TimeTillStatsExpire(/* parameters */);
	{
		// BrnNetworkPlayerStatsManager.cpp:231
		StatsRequestEvent lEvent;

		// BrnNetworkPlayerStatsManager.cpp:235
		NetworkPlayerStats * lpExistingStats;

		BrnNetworkModuleIO::StatsOutputInterface::AppendStatsEvent(/* parameters */);
	}
	CgsContainers::FifoQueue<BrnNetwork::StatsRequestEvent,32>::Pop(/* parameters */);
	NetworkPlayerStats::SetPlayerID(/* parameters */);
	BrnNetworkManager::GetTime(/* parameters */);
	CgsSystem::Time::operator-(/* parameters */);
	NetworkPlayerStats::GetTimeStamp(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::operator>(/* parameters */);
	CgsContainers::FifoQueue<BrnNetwork::StatsRequestEvent,32>::Push(/* parameters */);
	BrnNetworkModuleIO::OutputBuffer::GetStatsOutputInterface(/* parameters */);
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
		// BrnNetworkPlayerStatsManager.cpp:241
		NetworkPlayerStats lStats;

		NetworkPlayerStats(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		BrnNetworkModuleIO::OutputBuffer::GetStatsOutputInterface(/* parameters */);
		BrnNetworkModuleIO::StatsOutputInterface::AppendStatsEvent(/* parameters */);
		CgsContainers::FifoQueue<BrnNetwork::StatsRequestEvent,32>::Push(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkPlayerStatsManager.cpp:447
void BrnNetwork::NetworkPlayerStatsManager::CheckForAndHandleServerErrors(CgsNetwork::EComponents  leComponent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkPlayerStatsManager.cpp:469
void BrnNetwork::NetworkPlayerStatsManager::ProcessResults() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerStatsManager.cpp:471
		NetworkPlayerStats lPlayerStats;

		// BrnNetworkPlayerStatsManager.cpp:472
		int32_t liStatType;

		// BrnNetworkPlayerStatsManager.cpp:473
		BrnNetwork::NetworkPlayerStats::EStatType leStatType;

		// BrnNetworkPlayerStatsManager.cpp:484
		char[11] lacBuffer;

		// BrnNetworkPlayerStatsManager.cpp:486
		BrnNetwork::NetworkPlayerStats::EStatsValue leLoopCounter;

	}
	BrnNetworkManager::GetTime(/* parameters */);
	NetworkPlayerStats(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	NetworkPlayerStats::SetStatus(/* parameters */);
	operator++(/* parameters */);
	{
		// BrnNetworkPlayerStatsManager.cpp:517
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnNetworkManager::GetTime(/* parameters */);
	NetworkPlayerStats::SetCalculated(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	NetworkPlayerStats::SetTimeStamp(/* parameters */);
}

// BrnNetworkPlayerStatsManager.cpp:690
void BrnNetwork::NetworkPlayerStatsManager::RemovePlayer(AggressiveMoveData::NetworkPlayerID  lNetworkPlayerId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[13] __FUNCTION__;

	{
		// BrnNetworkPlayerStatsManager.cpp:692
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

	}
	{
		// BrnNetworkPlayerStatsManager.cpp:703
		BrnNetwork::NetworkPlayerStatsManager::StatsUpdateEntry * lpStatsEntry;

	}
	{
		// BrnNetworkPlayerStatsManager.cpp:705
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkPlayerStatsManager.cpp:807
void BrnNetwork::NetworkPlayerStatsManager::CopyResultsToOutputBuffer(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkModuleIO::OutputBuffer::GetStatsOutputInterface(/* parameters */);
	BrnNetworkModuleIO::OutputBuffer::GetStatsOutputInterface(/* parameters */);
	BrnNetworkModuleIO::StatsOutputInterface::AppendStatsEvent(/* parameters */);
	operator=(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkPlayerStatsManager.cpp:284
void BrnNetwork::NetworkPlayerStatsManager::ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerStatsManager.cpp:289
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	ServerBusy(/* parameters */);
	ServerBusy(/* parameters */);
	ServerBusy(/* parameters */);
	ServerBusy(/* parameters */);
	ServerBusy(/* parameters */);
	ServerBusy(/* parameters */);
}

// BrnNetworkPlayerStatsManager.cpp:1229
void BrnNetwork::NetworkPlayerStatsManager::UpdatePlayersStats(AggressiveMoveData::NetworkPlayerID  lPlayerID, int32_t  liNumberOfFreeburnChallengesComplete, int32_t  liNumberOfRivals, int32_t  liNumberOfAchivements, int32_t  liNumberOfTakedowns) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerStatsManager.cpp:1231
		NetworkPlayerStats * lpPlayerStats;

	}
	NetworkPlayerStats::SetStatAsInt(/* parameters */);
	NetworkPlayerStats::SetStatAsInt(/* parameters */);
	NetworkPlayerStats::SetStatAsInt(/* parameters */);
	NetworkPlayerStats::SetStatAsInt(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkPlayerStatsManager.cpp:1134
void BrnNetwork::NetworkPlayerStatsManager::SendAndRecieveUpdateMessages() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerStatsManager.cpp:1136
		int32_t liEntryIndex;

		{
			// BrnNetworkPlayerStatsManager.cpp:1142
			int32_t liRemoteNumberOfChallenges;

			// BrnNetworkPlayerStatsManager.cpp:1143
			int32_t liRemoteNumberOfRivals;

			// BrnNetworkPlayerStatsManager.cpp:1144
			int32_t liRemoteNumberOfAchievements;

			// BrnNetworkPlayerStatsManager.cpp:1145
			int32_t liRemoteNumberOfTakedowns;

		}
		{
			// BrnNetworkPlayerStatsManager.cpp:1151
			const NetworkPlayerStats * lpLocalPlayerStats;

		}
	}
}

// BrnNetworkPlayerStatsManager.cpp:1281
void BrnNetwork::NetworkPlayerStatsManager::CheckForLocalPlayerTakedowns() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerStatsManager.cpp:1283
		const InputBuffer::TakedownEventQueue * lpTakedownEventQueue;

		// BrnNetworkPlayerStatsManager.cpp:1284
		int32_t liTakedownIndex;

		// BrnNetworkPlayerStatsManager.cpp:1285
		AggressiveMoveData::NetworkPlayerID lLocalPlayerID;

		BrnNetworkModule::GetTakedownEventInputQueue(/* parameters */);
	}
	CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	{
		// BrnNetworkPlayerStatsManager.cpp:1296
		AggressiveMoveData::NetworkPlayerID lAggressorPlayerID;

		// BrnNetworkPlayerStatsManager.cpp:1297
		const TakedownEvent lEvent;

		CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetEvent(/* parameters */);
		BrnNetworkModule::GetNetworkPlayerID(/* parameters */);
	}
	{
		// BrnNetworkPlayerStatsManager.cpp:1305
		NetworkPlayerStats * lpLocalPlayersStats;

		// BrnNetworkPlayerStatsManager.cpp:1306
		int32_t liPreviousNumberOfTakedowns;

		NetworkPlayerStats::SetStatAsInt(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkPlayerStatsManager.cpp:789
void BrnNetwork::NetworkPlayerStatsManager::AddEventFromNetworkPlayerID(AggressiveMoveData::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerStatsManager.cpp:791
		StatsRequestEvent lEvent;

	}
}

// BrnNetworkPlayerStatsManager.cpp:736
void BrnNetwork::NetworkPlayerStatsManager::HandleGameResults(const OnlineGameResults *  lpResults) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerStatsManager.cpp:744
		CgsNetwork::PlayerManager * lpPlayerManager;

		// BrnNetworkPlayerStatsManager.cpp:745
		AggressiveMoveData::NetworkPlayerID lPlayerID;

		CgsNetwork::NetworkManager::GetPlayerManager(/* parameters */);
		CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	}
}

// BrnNetworkPlayerStatsManager.cpp:633
void BrnNetwork::NetworkPlayerStatsManager::AddPlayer(AggressiveMoveData::NetworkPlayerID  lNetworkPlayerId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[10] __FUNCTION__;

	{
		// BrnNetworkPlayerStatsManager.cpp:635
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

	}
	{
		// BrnNetworkPlayerStatsManager.cpp:647
		BrnNetwork::NetworkPlayerStatsManager::StatsUpdateEntry * lpStatsEntry;

	}
	{
		// BrnNetworkPlayerStatsManager.cpp:649
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkPlayerStatsManager.cpp:671
void BrnNetwork::NetworkPlayerStatsManager::RequestPlayerStats(const char *  lpcPlayerName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkPlayerStatsManager.cpp:673
		StatsRequestEvent lEvent;

	}
}

// BrnNetworkPlayerStatsManager.cpp:870
void BrnNetwork::NetworkPlayerStatsManager::ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkModuleIO::PostSimulationInputBuffer::GetStatsInputInterface(/* parameters */);
	BrnNetworkModuleIO::PostSimulationInputBuffer::GetStatsInputInterface(/* parameters */);
	BrnNetworkModule::GetTimerStatusOutputInterface(/* parameters */);
	BrnNetworkModule::GetTimerStatusOutputInterface(/* parameters */);
	BrnNetworkModule::GetTimerStatusOutputInterface(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::TimerStatus::GetCurrentTimeStep(/* parameters */);
	CgsSystem::Time::operator+=(/* parameters */);
	{
		// BrnNetworkPlayerStatsManager.cpp:901
		const CgsModule::Event * lpEvent;

		// BrnNetworkPlayerStatsManager.cpp:902
		int32_t liEventType;

		// BrnNetworkPlayerStatsManager.cpp:903
		int32_t liEventSize;

		BrnNetworkModuleIO::PostSimulationInputBuffer::GetNetworkEventQueue(/* parameters */);
		BrnNetworkModuleIO::PostSimulationInputBuffer::GetNetworkEventQueue(/* parameters */);
		CgsModule::VariableEventQueue<14000,16>::GetFirstEvent(/* parameters */);
		{
			// BrnNetworkPlayerStatsManager.cpp:915
			const NetworkInOfflineProgression * lpProgression;

		}
		BrnNetworkModuleIO::PostSimulationInputBuffer::GetNetworkEventQueue(/* parameters */);
	}
	{
		// BrnNetworkPlayerStatsManager.cpp:892
		NetworkOutGetOfflineProgression lProgressionEvent;

		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutGetOfflineProgression>(/* parameters */);
		CgsSystem::Time::SetFloatVal(/* parameters */);
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
	CgsDev::StrStream::StrStream(/* parameters */);
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

