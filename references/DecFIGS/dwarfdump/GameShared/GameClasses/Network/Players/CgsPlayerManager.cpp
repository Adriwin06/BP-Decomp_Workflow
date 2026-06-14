// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsPlayerManager.cpp:45
	void MessageSentCallbackFunction(void *);

}

// CgsPlayerManager.cpp:1470
void CgsNetwork::PlayerManager::SetHostPlayerID(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPlayerManager.cpp:1661
void CgsNetwork::PlayerManager::ResetEventCallbacks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:1663
		int32_t liIndex;

	}
}

// CgsPlayerManager.cpp:1736
void CgsNetwork::PlayerManager::BroadcastEvent(CgsNetwork::PlayerManager::EEvent  lEvent, void *  lpEventData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:1738
		int32_t liIndex;

	}
}

// CgsPlayerManager.cpp:1488
void CgsNetwork::PlayerManager::GetHostPlayerID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPlayerManager.cpp:1508
void CgsNetwork::PlayerManager::OnRoundLoadingStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPlayerManager.cpp:1685
void CgsNetwork::PlayerManager::RegisterEventCallback(void (*)(CgsNetwork::PlayerManager::EEvent, void *, void *)  lCallback, void *  lpCallback) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPlayerManager.cpp:1704
void CgsNetwork::PlayerManager::UnRegisterEventCallback(void (*)(CgsNetwork::PlayerManager::EEvent, void *, void *)  lCallback) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:1706
		int32_t liIndex;

	}
}

// CgsPlayerManager.cpp:1762
void CgsNetwork::PlayerManager::ConnectionFinalisedCallback(bool  lbSuccess, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID, CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData  lConnectionData, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:1764
		CgsNetwork::PlayerManager * lpPlayerManager;

	}
}

// CgsPlayerManager.cpp:2077
void CgsNetwork::PlayerManager::GetNumberLocalPlayers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:2079
		int32_t liIndex;

		// CgsPlayerManager.cpp:2080
		int32_t liNumLocalPlayers;

	}
}

// CgsPlayerManager.cpp:2105
void CgsNetwork::PlayerManager::OnLobbyApiCreated() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPlayerManager.cpp:1407
void CgsNetwork::PlayerManager::AssignActiveLocalPlayer(int32_t  liPlayerIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:1409
		int32_t liIndex;

	}
}

// CgsPlayerManager.cpp:1437
void CgsNetwork::PlayerManager::AssignActiveNetworkPlayer(int32_t  liPlayerIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:1439
		int32_t liIndex;

	}
}

// CgsPlayerManager.cpp:1860
void CgsNetwork::PlayerManager::Disconnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:1862
		int32_t liPlayerIndex;

	}
	PlayerData::GetNetworkPlayer(/* parameters */);
	PlayerData::SetPlayerID(/* parameters */);
	PlayerData::SetNetworkPlayer(/* parameters */);
}

// CgsPlayerManager.cpp:1642
void CgsNetwork::PlayerManager::AmIHost() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:1645
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lLocalPlayerID;

		GetNextLocalPlayerID(/* parameters */);
	}
}

// CgsPlayerManager.cpp:700
void CgsNetwork::PlayerManager::GetPlayerByID(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:702
		int32_t i;

	}
	PlayerData::GetNetworkPlayer(/* parameters */);
}

// CgsPlayerManager.cpp:1194
void CgsNetwork::PlayerManager::GetMenuDataByID(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:1196
		int32_t liIndex;

	}
	PlayerData::GetMenuData(/* parameters */);
}

// CgsPlayerManager.cpp:1222
void CgsNetwork::PlayerManager::GetMenuDataByName(const char *  lpcPlayerName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:1224
		int32_t liIndex;

	}
	PlayerData::GetMenuData(/* parameters */);
}

// CgsPlayerManager.cpp:1830
void CgsNetwork::PlayerManager::AreAnyPlayersConnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:1832
		int32_t liPlayer;

		// CgsPlayerManager.cpp:1833
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

		PlayerData::GetNetworkPlayer(/* parameters */);
	}
}

// CgsPlayerManager.cpp:1368
void CgsNetwork::PlayerManager::ReleasePlayer(int32_t  liPlayerIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	PlayerData::GetNetworkPlayer(/* parameters */);
	PlayerData::SetPlayerID(/* parameters */);
	PlayerData::SetNetworkPlayer(/* parameters */);
}

// CgsPlayerManager.cpp:1320
void CgsNetwork::PlayerManager::RemovePlayer(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:1322
		int32_t liPlayerIndex;

	}
}

// CgsPlayerManager.cpp:332
void CgsNetwork::PlayerManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ResetAllBandwidthCounters(/* parameters */);
}

// CgsPlayerManager.cpp:157
void CgsNetwork::PlayerManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:159
		int32_t i;

		PlayerData::SetPlayerID(/* parameters */);
		PlayerData::Set(/* parameters */);
		PlayerData::SetPlayerID(/* parameters */);
		PlayerData::Set(/* parameters */);
		ResetAllBandwidthCounters(/* parameters */);
	}
}

// CgsPlayerManager.cpp:1159
void CgsNetwork::PlayerManager::GetPlayerByName(const char *  lpcPlayerName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:1161
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

		// CgsPlayerManager.cpp:1162
		int32_t liIndex;

	}
	PlayerData::GetNetworkPlayer(/* parameters */);
	UsernameCompare(/* parameters */);
}

// CgsPlayerManager.cpp:1141
void CgsNetwork::PlayerManager::GetPlayerByName(const PlayerName *  lpPlayerName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPlayerManager.cpp:72
void CgsNetwork::PlayerManager::Construct(PlayerManagerConstructParams *  lpConstructParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:74
		int32_t i;

		// CgsPlayerManager.cpp:75
		int32_t liIndex;

		PlayerData::Set(/* parameters */);
		PlayerData::SetMenuData(/* parameters */);
		PlayerData::SetPlayerID(/* parameters */);
		PlayerData::Set(/* parameters */);
		PlayerData::SetPlayerID(/* parameters */);
		PlayerData::SetMenuData(/* parameters */);
		PlayerData::Set(/* parameters */);
		PlayerData::SetPlayerID(/* parameters */);
		PlayerData::SetPlayerID(/* parameters */);
		PlayerData::SetMenuData(/* parameters */);
		PlayerData::Set(/* parameters */);
		MessageWithPlayerIDs::Construct(/* parameters */);
		MessageWithPlayerIDs::Construct(/* parameters */);
		ResetAllBandwidthCounters(/* parameters */);
	}
}

// CgsPlayerManager.cpp:471
void CgsNetwork::PlayerManager::SetGameID(int32_t  liGameID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:473
		int32_t i;

	}
	MessageWithPlayerIDs::Construct(/* parameters */);
	Message::SetDealtWith(/* parameters */);
	Message::SetGameID(/* parameters */);
	MessageWithPlayerIDs::Construct(/* parameters */);
	Message::SetDealtWith(/* parameters */);
	Message::SetGameID(/* parameters */);
}

// CgsPlayerManager.cpp:1791
void CgsNetwork::PlayerManager::PlayerDisconnectedCallback(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:1793
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

		// CgsPlayerManager.cpp:1794
		CgsNetwork::PlayerManager * lpPlayerManager;

		// CgsPlayerManager.cpp:1795
		CgsNetwork::ServerInterfaceConnection * lpServerInterfaceConnection;

	}
	NetworkPlayer::SetDisconnected(/* parameters */);
	ServerInterfaceDirtySock::GetConnectionComponent(/* parameters */);
}

// CgsPlayerManager.cpp:1609
void CgsNetwork::PlayerManager::NackNeedsSending(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID, int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	MessageWithPlayerIDs::GetSendingPlayerID(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsPlayerManager.cpp:1574
void CgsNetwork::PlayerManager::AckNeedsSending(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID, int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	MessageWithPlayerIDs::GetSendingPlayerID(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsPlayerManager.cpp:223
void CgsNetwork::PlayerManager::Prepare(PlayerManagerPrepareParams *  lpPrepareParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:304
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	NetworkAdapterBase::SetMessageSentCallback(/* parameters */);
	ResetAllBandwidthCounters(/* parameters */);
}

// CgsPlayerManager.cpp:653
void CgsNetwork::PlayerManager::GetNextRemotePlayerID(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID *  lpPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:655
		int32_t liIndex;

	}
	{
		// CgsPlayerManager.cpp:667
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsPlayerManager.cpp:2182
void CgsNetwork::PlayerManager::GetTotalBytesSentWithOverhead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:2184
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lPlayerID;

		// CgsPlayerManager.cpp:2185
		int32_t liBytesSent;

	}
	{
		// CgsPlayerManager.cpp:2189
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

	}
}

// CgsPlayerManager.cpp:2153
void CgsNetwork::PlayerManager::GetTotalBytesSentToDirtySock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:2155
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lPlayerID;

		// CgsPlayerManager.cpp:2156
		int32_t liBytesSent;

	}
	{
		// CgsPlayerManager.cpp:2160
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

	}
}

// CgsPlayerManager.cpp:2125
void CgsNetwork::PlayerManager::GetTotalBytesSent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:2127
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lPlayerID;

		// CgsPlayerManager.cpp:2128
		int32_t liBytesSent;

	}
	{
		// CgsPlayerManager.cpp:2132
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

	}
}

// CgsPlayerManager.cpp:925
void CgsNetwork::PlayerManager::AcceptMessage(CgsNetwork::Message *  lpMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:929
		int32_t i;

		// CgsPlayerManager.cpp:931
		CgsNetwork::SignalMessage * lpAckMsg;

		// CgsPlayerManager.cpp:932
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lSendPlayerID;

		// CgsPlayerManager.cpp:933
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lRecvPlayerID;

		MessageWithPlayerIDs::GetSendingPlayerIDForNack(/* parameters */);
		MessageWithPlayerIDs::GetRecvingPlayerIDForNack(/* parameters */);
		MessageWithPlayerIDs::GetSendingPlayerID(/* parameters */);
		MessageWithPlayerIDs::GetRecvingPlayerID(/* parameters */);
		Message::GetGameID(/* parameters */);
		Message::GetGameID(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	SignalMessage::PrepareAck(/* parameters */);
	MessageWithPlayerIDs::GetSendingPlayerID(/* parameters */);
	Message::SetReadyToSend(/* parameters */);
	MessageWithPlayerIDs::GetRecvingPlayerID(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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

// CgsPlayerManager.cpp:1008
void CgsNetwork::PlayerManager::ThrowAwayMessage(CgsNetwork::Message *  lpMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:1012
		int32_t i;

		// CgsPlayerManager.cpp:1013
		CgsNetwork::SignalMessage * lpNackMsg;

		// CgsPlayerManager.cpp:1014
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lRecvPlayerID;

		// CgsPlayerManager.cpp:1015
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lSendPlayerID;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	MessageWithPlayerIDs::GetSendingPlayerIDForNack(/* parameters */);
	MessageWithPlayerIDs::GetRecvingPlayerIDForNack(/* parameters */);
	SignalMessage::PrepareNack(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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

// CgsPlayerManager.cpp:1258
void CgsNetwork::PlayerManager::AddPlayer(const TimerStatus *  lpTimerStatus, const char *  lpacName, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID, int32_t  liConnectionIndex, CgsSystem::EFrameRate  leRemoteConsoleFrameRate, bool  lbLocalPlayer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[10] __FUNCTION__;

	{
		// CgsPlayerManager.cpp:1260
		PlayerData * lpPlayerData;

	}
	PlayerData::SetPlayerID(/* parameters */);
	{
		// CgsPlayerManager.cpp:1276
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	PlayerData::GetMenuData(/* parameters */);
	CgsCore::StrnCpy(/* parameters */);
	PlayerData::GetNetworkPlayer(/* parameters */);
	PlayerData::SetPlayerID(/* parameters */);
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

// CgsPlayerManager.cpp:1905
void CgsNetwork::PlayerManager::IsPlayerFinalised(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPlayerManager.cpp:2040
void CgsNetwork::PlayerManager::GetNumberNetworkPlayers(CgsNetwork::PlayerManager::EPlayersToConsider  lePlayersToConsider) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:2042
		int32_t liIndex;

		// CgsPlayerManager.cpp:2043
		int32_t liNumNetworkPlayers;

	}
	{
		// CgsPlayerManager.cpp:2054
		bool lbPlayerFinalised;

	}
}

// CgsPlayerManager.cpp:2003
void CgsNetwork::PlayerManager::GetTotalNumberPlayers(CgsNetwork::PlayerManager::EPlayersToConsider  lePlayersToConsider) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:2005
		int32_t liIndex;

		// CgsPlayerManager.cpp:2006
		int32_t liNumPlayers;

	}
	{
		// CgsPlayerManager.cpp:2011
		bool lbPlayerFinalised;

	}
}

// CgsPlayerManager.cpp:1925
void CgsNetwork::PlayerManager::IsPlayerTurnToSendRoundRobinMessage(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID, bool  lbAreWePlaying, int32_t  liFrameGapToUse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:1927
		int32_t liFrameGapBetweenMessages;

		// CgsPlayerManager.cpp:1928
		int32_t liSeriesNum;

		// CgsPlayerManager.cpp:1929
		int32_t liConnectionIndex;

		// CgsPlayerManager.cpp:1930
		int32_t liRemotePlayerIndex;

		// CgsPlayerManager.cpp:1931
		int32_t liAmountToDecrement;

		// CgsPlayerManager.cpp:1932
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lLocalPlayerID;

		IsLocalPlayer(/* parameters */);
	}
	GetNextLocalPlayerID(/* parameters */);
}

// CgsPlayerManager.cpp:539
void CgsNetwork::PlayerManager::GetNextPlayerID(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID *  lpPlayerID, CgsNetwork::PlayerManager::EPlayersToConsider  lePlayersToConsider) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:542
		int32_t liIndex;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		// CgsPlayerManager.cpp:554
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsPlayerManager.cpp:1524
void CgsNetwork::PlayerManager::OnRoundStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:1528
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lPlayerID;

	}
	{
		// CgsPlayerManager.cpp:1531
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

	}
}

// CgsPlayerManager.cpp:1109
void CgsNetwork::PlayerManager::CheckForNack(CgsNetwork::Message *  lpMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:1113
		CgsNetwork::SignalMessage * lpMessageWithIDs;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsPlayerManager.cpp:1076
void CgsNetwork::PlayerManager::CheckForAck(CgsNetwork::Message *  lpMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:1080
		CgsNetwork::SignalMessage * lpMessageWithIDs;

	}
}

// CgsPlayerManager.cpp:765
void CgsNetwork::PlayerManager::ReceiveMessages() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:767
		void * lpMsgData;

		// CgsPlayerManager.cpp:768
		int32_t liBytesRecvd;

		// CgsPlayerManager.cpp:783
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lPlayerId;

		{
			// CgsPlayerManager.cpp:786
			CgsNetwork::NetworkPlayer * lpNetPlayer;

			// CgsPlayerManager.cpp:787
			CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData lConnectionData;

			NetworkPlayer::GetConnectionData(/* parameters */);
			{
				// CgsPlayerManager.cpp:811
				CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lSendingPlayerIDFromMessageHeader;

				{
					// CgsPlayerManager.cpp:818
					int32_t liPlayerIndex;

					// CgsPlayerManager.cpp:819
					CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lOutputPlayerId;

					// CgsPlayerManager.cpp:820
					CgsNetwork::NetworkPlayer * lpOutputNetPlayer;

					// CgsPlayerManager.cpp:821
					CgsNetwork::PlayerMenuData * lpOutputMenuData;

					// CgsPlayerManager.cpp:822
					CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData lOutputConnectionData;

					// CgsPlayerManager.cpp:823
					CgsNetwork::CompressionAndEncryptionUtils::PackedPacketHeader * lpHeader;

					// CgsPlayerManager.cpp:824
					uint8_t * lpPackedTypes;

					// CgsPlayerManager.cpp:825
					uint8_t lu8MessageIndex;

					// CgsPlayerManager.cpp:826
					const char *[2] KPAC_CONNECTION_TYPE_STRING;

					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					CgsDev::StrStreamBase::operator<<(/* parameters */);
					NetworkPlayer::GetConnectionData(/* parameters */);
					{
						// CgsPlayerManager.cpp:876
						char[17] lacIPAddress;

						CgsDev::StrStreamBase::operator<<(/* parameters */);
						CgsDev::StrStreamBase::operator<<(/* parameters */);
						CgsDev::StrStreamBase::operator<<(/* parameters */);
						CgsDev::StrStreamBase::operator<<(/* parameters */);
						CgsDev::StrStreamBase::operator<<(/* parameters */);
						CgsDev::StrStreamBase::operator<<(/* parameters */);
						CgsDev::StrStreamBase::operator<<(/* parameters */);
						CgsDev::StrStreamBase::operator<<(/* parameters */);
						CgsDev::StrStreamBase::operator<<(/* parameters */);
						CgsDev::StrStreamBase::operator<<(/* parameters */);
						CgsDev::StrStreamBase::operator<<(/* parameters */);
						CgsDev::StrStreamBase::operator<<(/* parameters */);
						CgsDev::StrStreamBase::operator<<(/* parameters */);
						CgsDev::StrStreamBase::operator<<(/* parameters */);
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
				NetworkPlayer::GetPlayerID(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
		}
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsPlayerManager.cpp:1551
void CgsNetwork::PlayerManager::OnRoundFinish() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:1553
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lPlayerID;

	}
}

// CgsPlayerManager.cpp:390
void CgsNetwork::PlayerManager::Update(const TimerStatus *  lpTimerStatus, uint16_t  lu16CurrentFrame, bool  lbAreWePlaying) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:396
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

		// CgsPlayerManager.cpp:404
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lPlayerID;

		{
			// CgsPlayerManager.cpp:413
			bool lbTalking;

		}
	}
}

// CgsPlayerManager.cpp:728
void CgsNetwork::PlayerManager::SendMessages() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayerManager.cpp:730
		int32_t i;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsPlayerManager.cpp:447
void CgsNetwork::PlayerManager::PostUpdate(uint16_t  lu16CurrentFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPlayerManager.cpp:40
// CgsPlayerManager.cpp:32
// CgsPlayerManager.cpp:30
