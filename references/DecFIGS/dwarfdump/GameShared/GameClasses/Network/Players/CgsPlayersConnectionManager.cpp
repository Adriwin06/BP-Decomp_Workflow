// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsPlayersConnectionManager.cpp:48
	const Time K_TEST_PACKET_TIMEOUT_SECONDS;

}

// CgsPlayersConnectionManager.cpp:73
struct CgsNetwork::DefaultPlayerParameters : public ServerInterfacePlayerParamsBase {
public:
	void DefaultPlayerParameters(const DefaultPlayerParameters &);

	void DefaultPlayerParameters();

	// CgsPlayersConnectionManager.cpp:129
	virtual bool Prepare();

protected:
	// CgsPlayersConnectionManager.cpp:140
	virtual const char * GetPattern() const;

	// CgsPlayersConnectionManager.cpp:145
	virtual uint32_t GetDataSize() const;

	// CgsPlayersConnectionManager.cpp:151
	virtual void * GetData();

	// CgsPlayersConnectionManager.cpp:157
	virtual const void * GetData() const;

public:
	virtual void ~DefaultPlayerParameters();

}

// CgsPlayersConnectionManager.cpp:52
struct CgsNetwork::DefaultPlayerInfoData : public ServerInterfacePlayerInfoDataBase {
public:
	void DefaultPlayerInfoData(const DefaultPlayerInfoData &);

	void DefaultPlayerInfoData();

	// CgsPlayersConnectionManager.cpp:95
	virtual bool Prepare();

protected:
	// CgsPlayersConnectionManager.cpp:106
	virtual const char * GetPattern() const;

	// CgsPlayersConnectionManager.cpp:111
	virtual uint32_t GetDataSize() const;

	// CgsPlayersConnectionManager.cpp:117
	virtual void * GetData();

	// CgsPlayersConnectionManager.cpp:123
	virtual const void * GetData() const;

public:
	virtual void ~DefaultPlayerInfoData();

}

// CgsPlayersConnectionManager.cpp:172
void CgsNetwork::PlayersConnectionManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayersConnectionManager.cpp:174
		int32_t i;

	}
}

// CgsPlayersConnectionManager.cpp:197
void CgsNetwork::PlayersConnectionManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPlayersConnectionManager.cpp:247
void CgsNetwork::PlayersConnectionManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPlayersConnectionManager.cpp:1547
void CgsNetwork::PlayersConnectionManager::Disconnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayersConnectionManager.cpp:1549
		int32_t liIndex;

	}
}

// CgsPlayersConnectionManager.cpp:1592
void CgsNetwork::PlayersConnectionManager::OnLobbyApiCreated() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPlayersConnectionManager.cpp:217
void CgsNetwork::PlayersConnectionManager::Prepare(CgsNetwork::PlayerManager *  lpPlayerManager, CgsNetwork::ServerInterface *  lpServerInterface, PlayersConnectionManager::ConnMgrConnectionFinalisedCallback  lpfConnectionFinalisedCallback, void *  lpConnectionFinalisedUserData, PlayersConnectionManager::ConnMgrPlayerDisconnectedCallback  lpfPlayerDisconnectedCallback, void *  lpPlayerDisconnectedUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayersConnectionManager.cpp:219
		int32_t i;

	}
}

// CgsPlayersConnectionManager.cpp:1162
void CgsNetwork::PlayersConnectionManager::GetEntry(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayersConnectionManager.cpp:1164
		CgsNetwork::PlayersConnectionManager::ConnectionDataEntry * lpEntry;

		// CgsPlayersConnectionManager.cpp:1165
		int32_t i;

	}
}

// CgsPlayersConnectionManager.cpp:1196
void CgsNetwork::PlayersConnectionManager::TestConnectionMessageDeliveredCallback(bool  lbSuccess, bool  lbFakeNack, CgsNetwork::SignalMessage *  lpAck, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lRecvingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayersConnectionManager.cpp:1198
		PlayersConnectionManager * lpConnMgr;

		// CgsPlayersConnectionManager.cpp:1199
		CgsNetwork::PlayersConnectionManager::ConnectionDataEntry * lpEntry;

	}
}

// CgsPlayersConnectionManager.cpp:1230
void CgsNetwork::PlayersConnectionManager::TestConnectionMessageArrivedCallback(CgsNetwork::ReliableMessage *  lpMessage, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lSendingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayersConnectionManager.cpp:1232
		PlayersConnectionManager * lpConnMgr;

		// CgsPlayersConnectionManager.cpp:1233
		CgsNetwork::PlayersConnectionManager::ConnectionDataEntry * lpEntry;

	}
}

// CgsPlayersConnectionManager.cpp:1262
void CgsNetwork::PlayersConnectionManager::ConnectionStatusMessageDeliveredCallback(bool  lbSuccess, bool  lbFakeNack, CgsNetwork::SignalMessage *  lpAck, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lRecvingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayersConnectionManager.cpp:1271
		PlayersConnectionManager * lpConnMgr;

		// CgsPlayersConnectionManager.cpp:1272
		CgsNetwork::PlayersConnectionManager::ConnectionDataEntry * lpEntry;

	}
	{
		// CgsPlayersConnectionManager.cpp:1278
		int32_t i;

	}
}

// CgsPlayersConnectionManager.cpp:1347
void CgsNetwork::PlayersConnectionManager::RegisterMessageTypes(CgsNetwork::PlayersConnectionManager::ConnectionDataEntry *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayersConnectionManager.cpp:1349
		CgsNetwork::NetworkPlayer * lpNetPlayer;

	}
}

// CgsPlayersConnectionManager.cpp:73
void CgsNetwork::DefaultPlayerParameters::~DefaultPlayerParameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPlayersConnectionManager.cpp:52
void CgsNetwork::DefaultPlayerInfoData::~DefaultPlayerInfoData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPlayersConnectionManager.cpp:311
void CgsNetwork::PlayersConnectionManager::CheckAndUpdateGameID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayersConnectionManager.cpp:313
		uint8_t lu8GameID;

	}
}

// CgsPlayersConnectionManager.cpp:52
void CgsNetwork::DefaultPlayerInfoData::DefaultPlayerInfoData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPlayersConnectionManager.cpp:824
void CgsNetwork::PlayersConnectionManager::GetPlayerName(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayersConnectionManager.cpp:826
		DefaultPlayerInfoData lLocalPlayerInfo;

		// CgsPlayersConnectionManager.cpp:827
		CgsNetwork::NetworkPlayer * lpNetPlayer;

		DefaultPlayerInfoData::DefaultPlayerInfoData(/* parameters */);
	}
	NetworkPlayer::GetName(/* parameters */);
	DefaultPlayerInfoData::~DefaultPlayerInfoData(/* parameters */);
}

// CgsPlayersConnectionManager.cpp:858
void CgsNetwork::PlayersConnectionManager::GetIDOfPlayerToKick(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// connapi.h:139
		typedef ConnApiClientListT ConnApiClientListT;

		// CgsPlayersConnectionManager.cpp:860
		const ConnApiClientListT * lpClientList;

		// CgsPlayersConnectionManager.cpp:861
		ConnApiRefT * lpConnApi;

		// CgsPlayersConnectionManager.cpp:862
		const char * lpcPlayerName1;

		// CgsPlayersConnectionManager.cpp:863
		const char * lpcPlayerName2;

	}
	ServerInterfaceDirtySock::GetConnAPIRef(/* parameters */);
	{
		// CgsPlayersConnectionManager.cpp:894
		int32_t liPlayerIndex;

		{
			// CgsPlayersConnectionManager.cpp:898
			const ConnApiClientListT::ConnApiClientT * lpClient;

		}
	}
}

// CgsPlayersConnectionManager.cpp:1382
void CgsNetwork::PlayersConnectionManager::UnRegisterMessageTypes(CgsNetwork::PlayersConnectionManager::ConnectionDataEntry *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayersConnectionManager.cpp:1384
		CgsNetwork::NetworkPlayer * lpNetPlayer;

	}
}

// CgsPlayersConnectionManager.cpp:1099
void CgsNetwork::PlayersConnectionManager::RemovePlayer(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayersConnectionManager.cpp:1101
		CgsNetwork::PlayersConnectionManager::ConnectionDataEntry * lpEntry;

		// CgsPlayersConnectionManager.cpp:1103
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lLocalPlayerID;

	}
	PlayerManager::GetNextLocalPlayerID(/* parameters */);
}

// CgsPlayersConnectionManager.cpp:1031
void CgsNetwork::PlayersConnectionManager::AddPlayer(const TimerStatus *  lpTimerStatus, const char *  lpacName, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID, int32_t  liPlayerIndex, bool  lbLocalPlayer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayersConnectionManager.cpp:1033
		CgsNetwork::PlayersConnectionManager::ConnectionDataEntry * lpEntry;

	}
	{
		// CgsPlayersConnectionManager.cpp:1037
		int32_t i;

		ConnectionDataPS3::Clear(/* parameters */);
		CgsSystem::TimerStatus::GetTime(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
	}
}

// CgsPlayersConnectionManager.cpp:691
void CgsNetwork::PlayersConnectionManager::SendTestConnectionMessage(CgsNetwork::PlayersConnectionManager::ConnectionDataEntry *  lpEntry, const TimerStatus *  lpTimerStatus, uint16_t  lu16CurrentFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::TimerStatus::GetTime(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsPlayersConnectionManager.cpp:619
void CgsNetwork::PlayersConnectionManager::CheckTestConnectionMessageStatus(const TimerStatus *  lpTimerStatus, uint16_t  lu16CurrentFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayersConnectionManager.cpp:621
		int32_t i;

		{
			// CgsPlayersConnectionManager.cpp:625
			CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lPlayerID;

			// CgsPlayersConnectionManager.cpp:632
			CgsNetwork::NetworkPlayer * lpNetPlayer;

			CgsSystem::TimerStatus::GetTime(/* parameters */);
			CgsSystem::Time::operator-(/* parameters */);
			CgsSystem::Time::operator>(/* parameters */);
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
}

// CgsPlayersConnectionManager.cpp:73
void CgsNetwork::DefaultPlayerParameters::DefaultPlayerParameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPlayersConnectionManager.cpp:340
void CgsNetwork::PlayersConnectionManager::UpdatePlayerList(const ConnApiClientListT *  lpClientList, const TimerStatus *  lpTimerStatus, uint16_t  lu16CurrentFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[17] __FUNCTION__;

	{
		// CgsPlayersConnectionManager.cpp:342
		DefaultPlayerInfoData lLocalPlayerInfo;

		// CgsPlayersConnectionManager.cpp:343
		DefaultPlayerParameters lNetworkPlayerParameters;

		// CgsPlayersConnectionManager.cpp:344
		const char * lpcLocalPlayerName;

		// CgsPlayersConnectionManager.cpp:347
		bool[7] labPlayerStillInClientList;

		// CgsPlayersConnectionManager.cpp:348
		bool lbLocalPlayerFound;

		// CgsPlayersConnectionManager.cpp:349
		int32_t liPlayerIndex;

		// CgsPlayersConnectionManager.cpp:586
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lLocalPlayerID;

		DefaultPlayerParameters::DefaultPlayerParameters(/* parameters */);
	}
	DefaultPlayerInfoData::DefaultPlayerInfoData(/* parameters */);
	PlayerManager::GetNextLocalPlayerID(/* parameters */);
	DefaultPlayerParameters::~DefaultPlayerParameters(/* parameters */);
	DefaultPlayerInfoData::~DefaultPlayerInfoData(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsPlayersConnectionManager.cpp:555
		const ConnApiClientListT::ConnApiClientT * lpClient;

		// CgsPlayersConnectionManager.cpp:556
		bool lbLocalPlayer;

	}
	{
		// CgsPlayersConnectionManager.cpp:567
		CgsNetwork::NetworkPlayer * lpNetPlayer;

		// CgsPlayersConnectionManager.cpp:568
		CgsNetwork::PlayersConnectionManager::ConnectionDataEntry * lpEntry;

		{
			// CgsPlayersConnectionManager.cpp:575
			int32_t liEntryOffset;

		}
	}
	{
		// CgsPlayersConnectionManager.cpp:364
		const ConnApiClientListT::ConnApiClientT * lpClient;

		// CgsPlayersConnectionManager.cpp:365
		bool lbLocalPlayer;

		// CgsPlayersConnectionManager.cpp:394
		CgsNetwork::NetworkPlayer * lpNetPlayer;

		// CgsPlayersConnectionManager.cpp:395
		CgsNetwork::PlayersConnectionManager::ConnectionDataEntry * lpEntry;

		// CgsPlayersConnectionManager.cpp:427
		int32_t liEntryOffset;

		{
			// CgsPlayersConnectionManager.cpp:372
			CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lLocalPlayerID;

			// CgsPlayersConnectionManager.cpp:378
			CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lPMLocalPlayerID;

			PlayerManager::GetNextLocalPlayerID(/* parameters */);
			ServerInterfacePlayerInfoDataBase::GetID(/* parameters */);
		}
	}
	{
		// CgsPlayersConnectionManager.cpp:411
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lNewPlayerID;

		// CgsPlayersConnectionManager.cpp:413
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lLocalPlayerID;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	PlayerManager::GetNextLocalPlayerID(/* parameters */);
	ServerInterfacePlayerParamsBase::GetID(/* parameters */);
	{
		// CgsPlayersConnectionManager.cpp:460
		char[17] lacIPAddress;

		// CgsPlayersConnectionManager.cpp:469
		CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData lConnData;

		// CgsPlayersConnectionManager.cpp:499
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

		NetworkPlayer::SetConnectionData(/* parameters */);
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
}

// CgsPlayersConnectionManager.cpp:712
void CgsNetwork::PlayersConnectionManager::ResetConnectionData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayersConnectionManager.cpp:715
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsPlayersConnectionManager.cpp:929
void CgsNetwork::PlayersConnectionManager::AreAllConnectionsSuccessful() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayersConnectionManager.cpp:931
		int32_t liPlayer1;

		// CgsPlayersConnectionManager.cpp:933
		int32_t liPlayersInGame;

		// CgsPlayersConnectionManager.cpp:934
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID[7] laPlayerID;

		// CgsPlayersConnectionManager.cpp:935
		int32_t[7] laiConnectionDataIndex;

		{
			// CgsPlayersConnectionManager.cpp:942
			const CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lPlayerID;

		}
		{
			// CgsPlayersConnectionManager.cpp:963
			const PlayerConnectionData * lpConnData1;

			// CgsPlayersConnectionManager.cpp:964
			int32_t liPlayer2;

			{
				// CgsPlayersConnectionManager.cpp:973
				CgsNetwork::NetworkPlayer * lpNetPlayer;

				// CgsPlayersConnectionManager.cpp:985
				int32_t liArrayIndex;

				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
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
}

// CgsPlayersConnectionManager.cpp:1134
void CgsNetwork::PlayersConnectionManager::GetEntry(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayersConnectionManager.cpp:1136
		int32_t i;

	}
	{
		// CgsPlayersConnectionManager.cpp:1148
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsPlayersConnectionManager.cpp:1568
void CgsNetwork::PlayersConnectionManager::GetConnectionStatus(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayersConnectionManager.cpp:1571
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lLocalPlayerID;

		// CgsPlayersConnectionManager.cpp:1578
		const CgsNetwork::PlayersConnectionManager::ConnectionDataEntry * lpEntry;

	}
	PlayerManager::GetNextLocalPlayerID(/* parameters */);
}

// CgsPlayersConnectionManager.cpp:728
void CgsNetwork::PlayersConnectionManager::HavePlayersFailedToConnect(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID1, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayersConnectionManager.cpp:730
		int32_t i;

		// CgsPlayersConnectionManager.cpp:736
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lLocalPlayerID;

	}
	PlayerManager::GetNextLocalPlayerID(/* parameters */);
	{
		// CgsPlayersConnectionManager.cpp:757
		const CgsNetwork::PlayersConnectionManager::ConnectionDataEntry * lpPlayer1Entry;

	}
	{
		// CgsPlayersConnectionManager.cpp:794
		const CgsNetwork::PlayersConnectionManager::ConnectionDataEntry * lpPlayer2Entry;

	}
}

// CgsPlayersConnectionManager.cpp:1299
void CgsNetwork::PlayersConnectionManager::ConnectionStatusMessageArrivedCallback(CgsNetwork::ReliableMessage *  lpMessage, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lSendingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayersConnectionManager.cpp:1301
		PlayersConnectionManager * lpConnMgr;

		// CgsPlayersConnectionManager.cpp:1302
		CgsNetwork::PlayersConnectionManager::ConnectionDataEntry * lpEntry;

		// CgsPlayersConnectionManager.cpp:1303
		CgsNetwork::ConnectionStatusMessage * lpConnStatMsg;

	}
	{
		// CgsPlayersConnectionManager.cpp:1321
		int32_t liArrayIndex;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsPlayersConnectionManager.cpp:1406
void CgsNetwork::PlayersConnectionManager::SendConnectionStatusMessages(uint16_t  lu16CurrentFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayersConnectionManager.cpp:1408
		PlayerConnectionData[7] laConnectionData;

		// CgsPlayersConnectionManager.cpp:1409
		int32_t liPlayerIndex;

		{
			// CgsPlayersConnectionManager.cpp:1420
			CgsNetwork::PlayersConnectionManager::ConnectionDataEntry * lpEntry;

			// CgsPlayersConnectionManager.cpp:1421
			int32_t liArrayIndex;

			// CgsPlayersConnectionManager.cpp:1422
			bool lbConnectionStatusIsUpToDate;

		}
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsPlayersConnectionManager.cpp:272
void CgsNetwork::PlayersConnectionManager::Update(const TimerStatus *  lpTimerStatus, uint16_t  lu16CurrentFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPlayersConnectionManager.cpp:274
		ConnApiRefT * lpConnApi;

		// CgsPlayersConnectionManager.cpp:275
		const ConnApiClientListT * lpClientList;

		ServerInterfaceDirtySock::GetConnAPIRef(/* parameters */);
	}
}

// CgsPlayersConnectionManager.cpp:1498
void CgsNetwork::PlayersConnectionManager::ConnApiStatusChangeCallback(ConnApiRefT *  lpConnApi, ConnApiCbInfoT *  lpCbInfo, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[28] __FUNCTION__;

	{
		// CgsPlayersConnectionManager.cpp:1500
		PlayersConnectionManager * lpConnMgr;

		// CgsPlayersConnectionManager.cpp:1501
		const ConnApiClientListT * lpClientList;

		// CgsPlayersConnectionManager.cpp:1502
		bool lbDisconnected;

	}
	{
		// CgsPlayersConnectionManager.cpp:1517
		const ConnApiClientListT::ConnApiClientT * lpClient;

		// CgsPlayersConnectionManager.cpp:1518
		CgsNetwork::NetworkPlayer * lpNetPlayer;

		{
			// CgsPlayersConnectionManager.cpp:1524
			CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData lConnectionData;

			ConnectionDataPS3::Clear(/* parameters */);
			NetworkPlayer::SetConnectionData(/* parameters */);
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
}

