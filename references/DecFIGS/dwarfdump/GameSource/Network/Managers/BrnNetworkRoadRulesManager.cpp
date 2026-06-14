// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// BrnNetworkRoadRulesManager.cpp:45
	const int32_t KI_NUM_SCORES_TO_DOWNLOAD_IN_A_BATCH = 10;

	// BrnNetworkRoadRulesManager.cpp:46
	const float32_t KF_TIME_BETWEEN_ROAD_RULES_DOWNLOADS;

	// BrnNetworkRoadRulesManager.cpp:48
	const char[16] KAC_RR_SERVER_KEY_ID;

	// BrnNetworkRoadRulesManager.cpp:49
	const char[22] KAC_RR_RESET_DATE_ID;

}

// BrnNetworkRoadRulesManager.cpp:1403
void BrnNetwork::NetworkRoadRulesManager::StartSendingRoadRulesScoresToPlayer(BrnNetwork::NetworkRoadRulesManager::RoadRulesData *  lpPlayerDataEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkRoadRulesManager.cpp:1345
void BrnNetwork::NetworkRoadRulesManager::GetRoadRulesDataEntry(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkRoadRulesManager.cpp:1347
		int32_t liIndex;

	}
}

// BrnNetworkRoadRulesManager.cpp:1309
void BrnNetwork::NetworkRoadRulesManager::RemovePlayer(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkRoadRulesManager.cpp:1311
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

		// BrnNetworkRoadRulesManager.cpp:1312
		BrnNetwork::NetworkRoadRulesManager::RoadRulesData * lpDataEntry;

	}
}

// BrnNetworkRoadRulesManager.cpp:1516
void BrnNetwork::NetworkRoadRulesManager::Disconnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkRoadRulesManager.cpp:1518
		int32_t liPlayerIndex;

	}
}

// BrnNetworkRoadRulesManager.cpp:1601
void BrnNetwork::NetworkRoadRulesManager::OnEnterGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkRoadRulesManager.cpp:1603
		int32_t liIndex;

	}
}

// BrnNetworkRoadRulesManager.cpp:1621
void BrnNetwork::NetworkRoadRulesManager::OnGameLaunching() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkRoadRulesManager.cpp:189
void BrnNetwork::NetworkRoadRulesManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::Release(/* parameters */);
}

// BrnNetworkRoadRulesManager.cpp:765
void BrnNetwork::NetworkRoadRulesManager::SendPersonalBestScore() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkRoadRulesManager.cpp:767
		NetworkInRoadRulesPBEvent lPersonalBestData;

		// BrnNetworkRoadRulesManager.cpp:768
		AggressiveMoveData::NetworkPlayerID lPlayerID;

		// BrnNetworkRoadRulesManager.cpp:769
		int32_t liIndex;

		// BrnNetworkRoadRulesManager.cpp:770
		int32_t liNumPlayersToSendTo;

		// BrnNetworkRoadRulesManager.cpp:771
		uint16_t lu16CurrentFrame;

		// BrnNetworkRoadRulesManager.cpp:772
		BrnNetwork::RoadRulesPersonalBestMessage *[7] lapPersonalBestMessages;

		// BrnNetworkRoadRulesManager.cpp:773
		BrnNetwork::RoadRulesPersonalBestMessage * lpRoadRulesMessage;

		// BrnNetworkRoadRulesManager.cpp:774
		BrnNetwork::NetworkRoadRulesManager::RoadRulesData * lpRoadRulesData;

	}
	CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesPBEvent,2>::Pop(/* parameters */);
}

// BrnNetworkRoadRulesManager.cpp:1698
void BrnNetwork::NetworkRoadRulesManager::OnLeaveGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesPBEvent,2>::Clear(/* parameters */);
}

// BrnNetworkRoadRulesManager.cpp:1675
void BrnNetwork::NetworkRoadRulesManager::OnRoundFinish() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesPBEvent,2>::Clear(/* parameters */);
}

// BrnNetworkRoadRulesManager.cpp:1642
void BrnNetwork::NetworkRoadRulesManager::OnGameFinish() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesPBEvent,2>::Clear(/* parameters */);
}

// BrnNetworkRoadRulesManager.cpp:1177
void BrnNetwork::NetworkRoadRulesManager::HandleDownloadingRoadRulesScores() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkRoadRulesManager.cpp:1214
void BrnNetwork::NetworkRoadRulesManager::HandleDownloadingLocalRoadRulesScores() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnServerInterfaceBase::GetCustomCommandsComponent(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
}

// BrnNetworkRoadRulesManager.cpp:2048
void BrnNetwork::NetworkRoadRulesManager::_DownloadRoadRulesCallback(void *  lpData, void *  lpParamData, bool  lbSuccess) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkRoadRulesManager.cpp:2050
		RoadRulesDownloadEvent lRoadRulesDownloadedEvent;

		// BrnNetworkRoadRulesManager.cpp:2051
		Road::ChallengeIndex lChallengeIndex;

		// BrnNetworkRoadRulesManager.cpp:2052
		Road::ChallengeIndex lEndChallengeIndex;

		// BrnNetworkRoadRulesManager.cpp:2053
		int32_t liDownloadScoreIndex;

		// BrnNetworkRoadRulesManager.cpp:2054
		NetworkRoadRulesManager * lpRoadRulesManager;

		// BrnNetworkRoadRulesManager.cpp:2055
		RoadRulesDownloadData * lpDownloadedData;

		// BrnNetworkRoadRulesManager.cpp:2056
		NetworkToGameStateInterface * lpNetworkToGameStateInterface;

	}
	{
		// BrnNetworkRoadRulesManager.cpp:2151
		BrnNetwork::BrnServerInterface * lpServerInterface;

	}
	rw::core::stdc::Min(/* parameters */);
	{
		// BrnNetworkRoadRulesManager.cpp:2084
		char[20] lacPlayerName;

		// BrnNetworkRoadRulesManager.cpp:2085
		int32_t liScoreType;

		// BrnNetworkRoadRulesManager.cpp:2086
		int32_t liScoreValue;

		// BrnNetworkRoadRulesManager.cpp:2087
		BrnStreetData::ScoreType leScoreType;

		// BrnNetworkRoadRulesManager.cpp:2088
		BrnNetworkManager::BuddyManager * lpBuddyManager;

		RoadRulesDownloadEvent::Construct(/* parameters */);
	}
	BrnStreetData::operator++(/* parameters */);
	CgsNetwork::PlayerName::Clear(/* parameters */);
	RoadRulesMessageData::Construct(/* parameters */);
	{
		// BrnNetworkRoadRulesManager.cpp:2097
		PlayerName lPlayerName;

		RoadRulesDownloadData::GetRoadRulesDataForDownloadIndex(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BrnNetworkManager::GetBuddyManager(/* parameters */);
		CgsNetwork::PlayerName::Construct(/* parameters */);
		CgsCore::StrnCpy(/* parameters */);
		CgsNetwork::PlayerName::Construct(/* parameters */);
		CgsCore::StrnCpy(/* parameters */);
	}
	BrnStreetData::operator++(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnNetworkModule::GetNetworkToGameStateInterface(/* parameters */);
	BrnNetworkModule::GetNetworkToGameStateInterface(/* parameters */);
	BrnNetworkModuleIO::NetworkToGameStateInterface::GetRoadRulesDownloadedQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::AddEvent(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnNetwork::RoadRulesDownloadEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnNetworkRoadRulesManager.cpp:1422
void BrnNetwork::NetworkRoadRulesManager::StartUploadingRoadRulesScoresToServer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::SetFloatVal(/* parameters */);
}

// BrnNetworkRoadRulesManager.cpp:833
void BrnNetwork::NetworkRoadRulesManager::AttemptToUploadNewRoadRulesScores() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkRoadRulesManager.cpp:213
void BrnNetwork::NetworkRoadRulesManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkRoadRulesManager.cpp:215
		int32_t liPlayerIndex;

		// BrnNetworkRoadRulesManager.cpp:216
		int32_t liRoadIndex;

		CgsCore::MemSet(/* parameters */);
	}
	CgsSystem::Time::SetFloatVal(/* parameters */);
	CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesPBEvent,2>::Clear(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesPBEvent,14>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::Destruct(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
}

// BrnNetworkRoadRulesManager.cpp:151
void BrnNetwork::NetworkRoadRulesManager::Prepare(BrnNetwork::BrnNetworkModule *  lpNetworkModule, BrnNetwork::BrnServerInterface *  lpServerInterface, CgsNetwork::PlayerManager *  lpPlayerManager, CgsNetwork::TimeManager *  lpTimeManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::SetFloatVal(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::Prepare(/* parameters */);
}

// BrnNetworkRoadRulesManager.cpp:71
void BrnNetwork::NetworkRoadRulesManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkRoadRulesManager.cpp:73
		int32_t liPlayerIndex;

		// BrnNetworkRoadRulesManager.cpp:74
		int32_t liRoadIndex;

	}
	CgsSystem::Time::SetFloatVal(/* parameters */);
	CgsModule::EventQueue<BrnNetwork::RoadRulesRecvData,14>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::Construct(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::SetEventPointer(/* parameters */);
	CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesPBEvent,14>::Clear(/* parameters */);
	CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesPBEvent,2>::Clear(/* parameters */);
}

// BrnNetworkRoadRulesManager.cpp:1055
void BrnNetwork::NetworkRoadRulesManager::GetRoadRulesDataToUpload(RoadRulesUploadData *  lpUploadData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkRoadRulesManager.cpp:1057
		Road::ChallengeIndex lChallengeIndex;

		// BrnNetworkRoadRulesManager.cpp:1058
		ChallengePlayerScoreEntry * lpRoadScoreDataEntry;

		// BrnNetworkRoadRulesManager.cpp:1059
		bool lbContinue;

	}
	{
		// BrnNetworkRoadRulesManager.cpp:1106
		BrnStreetData::ScoreType leScoreType;

		{
			// BrnNetworkRoadRulesManager.cpp:1131
			CgsID lCarID;

			// BrnNetworkRoadRulesManager.cpp:1132
			int32_t liScore;

		}
	}
	BrnStreetData::ChallengeData::IsDirty(/* parameters */);
	BrnStreetData::ChallengeData::GetScore(/* parameters */);
	{
	}
	BrnStreetData::ScoreList::GetScore(/* parameters */);
	BrnStreetData::operator++(/* parameters */);
	BrnStreetData::ChallengeData::IsDirty(/* parameters */);
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	BrnStreetData::ChallengeData::GetScore(/* parameters */);
	{
	}
	{
		// BrnNetworkRoadRulesManager.cpp:1079
		BrnStreetData::ScoreType leScoreType;

		BrnStreetData::operator++(/* parameters */);
		BrnStreetData::ChallengeData::IsDirty(/* parameters */);
		BrnStreetData::ChallengeData::GetScore(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		BrnStreetData::ScoreList::GetScore(/* parameters */);
	}
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
}

// BrnNetworkRoadRulesManager.cpp:999
void BrnNetwork::NetworkRoadRulesManager::HandleUploadingRoadRulesScores() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkRoadRulesManager.cpp:1001
		RoadRulesUploadData lUploadData;

		// BrnNetworkRoadRulesManager.cpp:1002
		bool lbIsUploadPossibleThisFrame;

	}
}

// BrnNetworkRoadRulesManager.cpp:1767
void BrnNetwork::NetworkRoadRulesManager::_RoadRulesMessageArrivedCallback(CgsNetwork::ReliableMessage *  lpMessage, AggressiveMoveData::NetworkPlayerID  lSendingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkRoadRulesManager.cpp:1769
		RoadRulesRecvData lRoadRulesRecvData;

		// BrnNetworkRoadRulesManager.cpp:1770
		RoadRulesMessageData[10] laRoadRulesMessageData;

		// BrnNetworkRoadRulesManager.cpp:1771
		PlayerName lPlayerName;

		// BrnNetworkRoadRulesManager.cpp:1772
		int32_t liNumRoadRulesScoresRecv;

		// BrnNetworkRoadRulesManager.cpp:1773
		BrnNetwork::RoadRulesMessage * lpRoadRulesMessage;

		// BrnNetworkRoadRulesManager.cpp:1774
		NetworkRoadRulesManager * lpRoadRulesManager;

		// BrnNetworkRoadRulesManager.cpp:1775
		CgsNetwork::PlayerMenuData * lpPlayerMenuData;

		// BrnNetworkRoadRulesManager.cpp:1776
		NetworkToGameStateInterface * lpNetworkToGameStateInterface;

	}
	CgsNetwork::PlayerName::Construct(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	BrnNetworkModule::GetNetworkToGameStateInterface(/* parameters */);
	BrnNetworkModule::GetNetworkToGameStateInterface(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::AddEvent(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::GetMaxLength(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::GetMaxLength(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkRoadRulesManager.cpp:1448
void BrnNetwork::NetworkRoadRulesManager::StartDownloadingRoadRulesScoresFromServer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::operator=(/* parameters */);
}

// BrnNetworkRoadRulesManager.cpp:1718
void BrnNetwork::NetworkRoadRulesManager::AttemptToDownloadRoadRulesHighScores() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkRoadRulesManager.cpp:690
void BrnNetwork::NetworkRoadRulesManager::UpdateLocalRoadRulesScoresWithNewPB(const NetworkInRoadRulesPBEvent *  lpNetworkRoadRulesPBEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkRoadRulesManager.cpp:692
		BrnStreetData::ScoreType leScoreType;

		// BrnNetworkRoadRulesManager.cpp:693
		ChallengePlayerScoreEntry * lpChallengeDataToUpdate;

	}
	BrnStreetData::operator++(/* parameters */);
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	BrnStreetData::ChallengeData::GetScore(/* parameters */);
	BrnStreetData::ChallengeData::SetScore(/* parameters */);
	BrnStreetData::ChallengePlayerScoreEntry::GetCarID(/* parameters */);
	BrnStreetData::ChallengePlayerScoreEntry::SetCarID(/* parameters */);
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
}

// BrnNetworkRoadRulesManager.cpp:597
void BrnNetwork::NetworkRoadRulesManager::ProcessGameActions(const InputBuffer::GameActionQueue *  lpGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkRoadRulesManager.cpp:600
		const CgsModule::Event * lpAction;

		// BrnNetworkRoadRulesManager.cpp:601
		int32_t liActionSize;

		// BrnNetworkRoadRulesManager.cpp:602
		int32_t liActionType;

		CgsModule::VariableEventQueue<13312,16>::GetFirstEvent(/* parameters */);
	}
	{
	}
	{
		// BrnNetworkRoadRulesManager.cpp:611
		const PrepareForModeAction * lpPrepareForModeAction;

	}
	{
		// BrnNetworkRoadRulesManager.cpp:624
		const StopModeAction * lpStopModeAction;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkRoadRulesManager.cpp:728
void BrnNetwork::NetworkRoadRulesManager::UpdateLocalLobbyScoresWithNewPB(const NetworkInRoadRulesPBEvent *  lpNetworkRoadRulesPBEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkRoadRulesManager.cpp:730
		BrnStreetData::ScoreType leScoreType;

		// BrnNetworkRoadRulesManager.cpp:731
		ChallengeData * lpChallengeDataToUpdate;

	}
	BrnStreetData::operator++(/* parameters */);
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	BrnStreetData::ChallengeData::GetScore(/* parameters */);
	BrnStreetData::ChallengeData::SetScore(/* parameters */);
	CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesPBEvent,2>::Push(/* parameters */);
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
}

// BrnNetworkRoadRulesManager.cpp:656
void BrnNetwork::NetworkRoadRulesManager::HandleNewPersonalBest(const NetworkInRoadRulesPBEvent *  lpNetworkRoadRulesPBEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkRoadRulesManager.cpp:1375
void BrnNetwork::NetworkRoadRulesManager::GetNextFreeRoadRulesDataEntry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkRoadRulesManager.cpp:1377
		int32_t liIndex;

		{
			// BrnNetworkRoadRulesManager.cpp:1388
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

// BrnNetworkRoadRulesManager.cpp:1252
void BrnNetwork::NetworkRoadRulesManager::AddPlayer(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkRoadRulesManager.cpp:1254
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

		// BrnNetworkRoadRulesManager.cpp:1255
		BrnNetwork::NetworkRoadRulesManager::RoadRulesData * lpDataEntry;

	}
}

// BrnNetworkRoadRulesManager.cpp:1473
void BrnNetwork::NetworkRoadRulesManager::StartDownloadingLocalRoadRulesScoresFromServer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::operator=(/* parameters */);
}

// BrnNetworkRoadRulesManager.cpp:1741
void BrnNetwork::NetworkRoadRulesManager::AttemptToDownloadLocalRoadRulesHighScores() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkRoadRulesManager.cpp:1502
void BrnNetwork::NetworkRoadRulesManager::DoesLocalPlayerHaveValidLobbyScoreForRoad(Road::ChallengeIndex  lChallengeIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
}

// BrnNetworkRoadRulesManager.cpp:943
void BrnNetwork::NetworkRoadRulesManager::GetRoadRulesDataToSend(RoadRulesMessageData *  lpRoadRulesDataMessageArray, int32_t *  lpiNumRoadRulesScoresToSend, Road::ChallengeIndex  lIndexOfNextChallengeToSend) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkRoadRulesManager.cpp:945
		Road::ChallengeIndex lChallengeIndex;

		// BrnNetworkRoadRulesManager.cpp:946
		int32_t liRoadRulesScoresWritten;

	}
	{
		// BrnNetworkRoadRulesManager.cpp:961
		int32_t liScore;

		// BrnNetworkRoadRulesManager.cpp:962
		int32_t liScoreIndex;

		RoadRulesMessageData::Construct(/* parameters */);
		BrnStreetData::ChallengeData::ContainsData(/* parameters */);
		BrnStreetData::ChallengeData::GetScore(/* parameters */);
	}
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
}

// BrnNetworkRoadRulesManager.cpp:864
void BrnNetwork::NetworkRoadRulesManager::HandleSendingRoadRulesScores(bool  lbAreWePlaying) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkRoadRulesManager.cpp:866
		RoadRulesMessageData[10] laRoadRulesMessageData;

		// BrnNetworkRoadRulesManager.cpp:867
		AggressiveMoveData::NetworkPlayerID lPlayerID;

		// BrnNetworkRoadRulesManager.cpp:868
		int32_t liIndex;

		// BrnNetworkRoadRulesManager.cpp:869
		int32_t liNumRoadRulesToSend;

		// BrnNetworkRoadRulesManager.cpp:870
		Road::ChallengeIndex lNumberOfChallengesConsideredForSend;

		// BrnNetworkRoadRulesManager.cpp:871
		uint16_t lu16CurrentFrame;

		// BrnNetworkRoadRulesManager.cpp:872
		BrnNetwork::RoadRulesMessage * lpRoadRulesMessage;

		// BrnNetworkRoadRulesManager.cpp:873
		BrnNetwork::NetworkRoadRulesManager::RoadRulesData * lpRoadRulesData;

	}
}

// BrnNetworkRoadRulesManager.cpp:1846
void BrnNetwork::NetworkRoadRulesManager::_RoadRulesMessageDeliveredCallback(bool  lbSuccess, bool  lbFakeNack, CgsNetwork::SignalMessage *  lpAck, AggressiveMoveData::NetworkPlayerID  lRecvingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[35] __FUNCTION__;

	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkRoadRulesManager.cpp:1931
void BrnNetwork::NetworkRoadRulesManager::_RoadRulesPersonalBestDeliveredCallback(bool  lbSuccess, bool  lbFakeNack, CgsNetwork::SignalMessage *  lpAck, AggressiveMoveData::NetworkPlayerID  lRecvingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[40] __FUNCTION__;

	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkRoadRulesManager.cpp:2182
void BrnNetwork::NetworkRoadRulesManager::_DownloadLocalRoadRulesCallback(void *  lpData, void *  lpParamData, bool  lbSuccess) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkRoadRulesManager.cpp:2184
		RoadRulesMessageData lRoadRulesDownloadedEvent;

		// BrnNetworkRoadRulesManager.cpp:2185
		Road::ChallengeIndex lChallengeIndex;

		// BrnNetworkRoadRulesManager.cpp:2186
		Road::ChallengeIndex lEndChallengeIndex;

		// BrnNetworkRoadRulesManager.cpp:2187
		int32_t liDownloadScoreIndex;

		// BrnNetworkRoadRulesManager.cpp:2188
		NetworkRoadRulesManager * lpRoadRulesManager;

		// BrnNetworkRoadRulesManager.cpp:2189
		RoadRulesLocalPlayerDownloadedScores * lpDownloadedData;

		// BrnNetworkRoadRulesManager.cpp:2190
		NetworkToGameStateInterface * lpNetworkToGameStateInterface;

	}
	{
		// BrnNetworkRoadRulesManager.cpp:2256
		BrnNetwork::BrnServerInterface * lpServerInterface;

	}
	rw::core::stdc::Min(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	{
		// BrnNetworkRoadRulesManager.cpp:2212
		int32_t liScoreType;

		// BrnNetworkRoadRulesManager.cpp:2213
		int32_t liScoreValue;

		// BrnNetworkRoadRulesManager.cpp:2214
		BrnStreetData::ScoreType leScoreType;

		RoadRulesMessageData::Construct(/* parameters */);
	}
	CgsCore::MemSet(/* parameters */);
	RoadRulesLocalPlayerDownloadedScores::GetRoadRulesDataForDownloadIndex(/* parameters */);
	BrnStreetData::operator++(/* parameters */);
	BrnNetworkModule::GetNetworkToGameStateInterface(/* parameters */);
	BrnNetworkModule::GetNetworkToGameStateInterface(/* parameters */);
	BrnNetworkModuleIO::NetworkToGameStateInterface::GetLocalRoadRulesDownloadedQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnNetwork::RoadRulesMessageData>::GetMaxLength(/* parameters */);
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

// BrnNetworkRoadRulesManager.cpp:1951
void BrnNetwork::NetworkRoadRulesManager::_UploadRoadRulesCallback(void *  lpData, void *  lpParamData, bool  lbSuccess) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkRoadRulesManager.cpp:1953
		NetworkOutRecvRoadRulesUploadedEvent lRoadRulesUploadedEvent;

		// BrnNetworkRoadRulesManager.cpp:1954
		float32_t lfTimeBetweenRoadRulesUploads;

		// BrnNetworkRoadRulesManager.cpp:1955
		Road::ChallengeIndex lChallengeIndex;

		// BrnNetworkRoadRulesManager.cpp:1956
		Road::ChallengeIndex lNewIndexOfNextChallengeToUpload;

		// BrnNetworkRoadRulesManager.cpp:1957
		BrnNetwork::BrnServerInterfaceBase * lpServerInterface;

		// BrnNetworkRoadRulesManager.cpp:1958
		ChallengePlayerScoreEntry * lpChallengeData;

		// BrnNetworkRoadRulesManager.cpp:1959
		NetworkRoadRulesManager * lpRoadRulesManager;

	}
	BrnStreetData::ChallengeData::SetClean(/* parameters */);
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesUploadedEvent>(/* parameters */);
	BrnServerInterfaceDownloadableConfig::TimeBetweenRoadRulesUploads(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
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

// BrnNetworkRoadRulesManager.cpp:1866
void BrnNetwork::NetworkRoadRulesManager::_RoadRulesPersonalBestArrivedCallback(CgsNetwork::ReliableMessage *  lpMessage, AggressiveMoveData::NetworkPlayerID  lSendingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkRoadRulesManager.cpp:1868
		NetworkOutRecvRoadRulesPBEvent lRecvRoadRulesPBEvent;

		// BrnNetworkRoadRulesManager.cpp:1869
		PlayerName lPlayerName;

		// BrnNetworkRoadRulesManager.cpp:1870
		BrnNetwork::RoadRulesPersonalBestMessage * lpRoadRulesPBMessage;

		// BrnNetworkRoadRulesManager.cpp:1871
		NetworkRoadRulesManager * lpRoadRulesManager;

		// BrnNetworkRoadRulesManager.cpp:1872
		BrnNetworkManager::BuddyManager * lpBuddyManager;

		// BrnNetworkRoadRulesManager.cpp:1873
		CgsNetwork::PlayerMenuData * lpPlayerMenuData;

	}
	CgsNetwork::PlayerName::Construct(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkModule::GetNetworkManager(/* parameters */);
	BrnNetworkManager::GetBuddyManager(/* parameters */);
	CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesPBEvent,14>::Push(/* parameters */);
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesPBEvent>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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

// BrnNetworkRoadRulesManager.cpp:1549
void BrnNetwork::NetworkRoadRulesManager::Connect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkRoadRulesManager.cpp:1553
		NetworkOutRoadRulesConnectedOnlineEvent lConnectedEvent;

		// BrnNetworkRoadRulesManager.cpp:1554
		float32_t lfTimeBetweenDownloadPolls;

		BrnServerInterfaceDownloadableConfig::TimeBetweenRoadRulesDownloads(/* parameters */);
		CgsSystem::Time::SetFloatVal(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutRoadRulesConnectedOnlineEvent>(/* parameters */);
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

// BrnNetworkRoadRulesManager.cpp:529
void BrnNetwork::NetworkRoadRulesManager::ProcessNetworkEvents(const NetworkEventQueue *  lpNetworkEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkRoadRulesManager.cpp:531
		const CgsModule::Event * lpEvent;

		// BrnNetworkRoadRulesManager.cpp:532
		int32_t liEventSize;

		// BrnNetworkRoadRulesManager.cpp:533
		int32_t liEventType;

		CgsModule::VariableEventQueue<14000,16>::GetFirstEvent(/* parameters */);
	}
	{
	}
	{
		// BrnNetworkRoadRulesManager.cpp:545
		const NetworkInRoadRulesDataEvent * lpRoadRulesScoreDataEvent;

		BrnNetworkModuleIO::NetworkInRoadRulesDataEvent::GetRoadRulesScoreData(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkRoadRulesManager.cpp:472
void BrnNetwork::NetworkRoadRulesManager::ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *  lpInput, bool  lbAreWePlaying) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkModuleIO::PostSimulationInputBuffer::GetNetworkEventQueue(/* parameters */);
	BrnNetworkModuleIO::PostSimulationInputBuffer::GetGameActionQueue(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkRoadRulesManager.cpp:286
void BrnNetwork::NetworkRoadRulesManager::ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *  lpOutput, float32_t  lfGameTimeStep, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkRoadRulesManager.cpp:288
		NetworkToGameStateInterface::RoadRulesReceivedQueue * lpOutputRoadRulesRecvQueue;

	}
	BrnNetworkModule::GetNetworkToGameStateInterface(/* parameters */);
	BrnNetworkModule::GetNetworkToGameStateInterface(/* parameters */);
	BrnNetworkModuleIO::NetworkToGameStateInterface::GetRoadRulesReceivedQueue(/* parameters */);
	Append<14>(/* parameters */);
	CgsModule::BaseEventQueue<BrnNetwork::RoadRulesRecvData>::Clear(/* parameters */);
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	{
		// BrnNetworkRoadRulesManager.cpp:375
		NetworkOutRecvRoadRulesPBEvent lRoadRulesPbEvent;

		CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesPBEvent,14>::Pop(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesPBEvent>(/* parameters */);
	}
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::operator-=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::operator-=(/* parameters */);
	BrnNetworkModule::GetGameStateToNetworkInterface(/* parameters */);
	BrnNetworkModule::GetGameStateToNetworkInterface(/* parameters */);
	{
		// BrnNetworkRoadRulesManager.cpp:326
		float32_t lfTimeBetweenDownloadPolls;

		BrnServerInterfaceDownloadableConfig::TimeBetweenRoadRulesDownloads(/* parameters */);
		CgsSystem::Time::SetFloatVal(/* parameters */);
		{
			// BrnNetworkRoadRulesManager.cpp:346
			GuiEventNetworkConnect lConnectEvent;

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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsSystem::Time::Time(/* parameters */);
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
	BrnNetworkModule::GetGameStateToNetworkInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

