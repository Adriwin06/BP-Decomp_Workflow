// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct PlayersConnectionManager {
		// CgsPlayersConnectionManager.h:147
		struct ConnectionDataEntry {
			// CgsPlayersConnectionManager.h:150
			PlayerConnectionData mPlayerConnectionData;

			// CgsPlayersConnectionManager.h:154
			PlayerConnectionData[7] maLastFinaliseStateSent;

			// CgsPlayersConnectionManager.h:155
			PlayerConnectionData[7] maLastFinaliseStateRecvd;

			// CgsPlayersConnectionManager.h:157
			CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData mConnectionData;

			// CgsPlayersConnectionManager.h:159
			CgsNetwork::TestConnectionMessage mTestConnectionMessageSend;

			// CgsPlayersConnectionManager.h:160
			CgsNetwork::TestConnectionMessage mTestConnectionMessageRecv;

			// CgsPlayersConnectionManager.h:161
			Time mTimeTestConnectionSent;

			// CgsPlayersConnectionManager.h:162
			bool mbHaveReceivedTestPacketFromPlayer;

			// CgsPlayersConnectionManager.h:163
			bool mbTestConnectionPacketDelivered;

			// CgsPlayersConnectionManager.h:164
			bool mbTestConnectionPacketNacked;

			// CgsPlayersConnectionManager.h:166
			CgsNetwork::ConnectionStatusMessage mConnectionStatusMessageSend;

			// CgsPlayersConnectionManager.h:167
			CgsNetwork::ConnectionStatusMessage mConnectionStatusMessageRecv;

		}

	}

}

// CgsPlayersConnectionManager.h:70
struct CgsNetwork::PlayersConnectionManager {
private:
	// CgsPlayersConnectionManager.h:281
	CgsNetwork::PlayerManager * mpPlayerManager;

	// Unknown accessibility
	// CgsPlayersConnectionManager.h:63
	typedef void (*)(bool, RoadRulesRecvData::NetworkPlayerID, CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData, void *) ConnMgrConnectionFinalisedCallback;

	// CgsPlayersConnectionManager.h:286
	PlayersConnectionManager::ConnMgrConnectionFinalisedCallback mpfConnectionFinalisedCallback;

	// CgsPlayersConnectionManager.h:287
	void * mpConnectionFinalisedUserData;

	// Unknown accessibility
	// CgsPlayersConnectionManager.h:67
	typedef void (*)(RoadRulesRecvData::NetworkPlayerID, void *) ConnMgrPlayerDisconnectedCallback;

	// CgsPlayersConnectionManager.h:290
	PlayersConnectionManager::ConnMgrPlayerDisconnectedCallback mpfPlayerDisconnectedCallback;

	// CgsPlayersConnectionManager.h:291
	void * mpPlayerDisconnectedCallbackData;

	// CgsPlayersConnectionManager.h:293
	CgsNetwork::PlayersConnectionManager::ConnectionDataEntry[7] maConnectionDataEntry;

	// CgsPlayersConnectionManager.h:296
	CgsNetwork::ServerInterface * mpServerInterface;

	// CgsPlayersConnectionManager.h:299
	uint32_t muLocalPlayerIPAddress;

public:
	// CgsPlayersConnectionManager.h:74
	void Construct();

	// CgsPlayersConnectionManager.h:77
	void Destruct();

	// CgsPlayersConnectionManager.h:88
	bool Prepare(CgsNetwork::PlayerManager *, CgsNetwork::ServerInterface *, PlayersConnectionManager::ConnMgrConnectionFinalisedCallback, void *, PlayersConnectionManager::ConnMgrPlayerDisconnectedCallback, void *);

	// CgsPlayersConnectionManager.h:91
	bool Release();

	// CgsPlayersConnectionManager.h:105
	void Update(const TimerStatus *, uint16_t);

	// CgsPlayersConnectionManager.h:111
	CgsNetwork::EConnectionStatus GetConnectionStatus(RoadRulesRecvData::NetworkPlayerID) const;

	// CgsPlayersConnectionManager.h:117
	void ResetConnectionData();

	// CgsPlayersConnectionManager.h:124
	bool HavePlayersFailedToConnect(RoadRulesRecvData::NetworkPlayerID, RoadRulesRecvData::NetworkPlayerID) const;

	// CgsPlayersConnectionManager.h:131
	RoadRulesRecvData::NetworkPlayerID GetIDOfPlayerToKick(RoadRulesRecvData::NetworkPlayerID, RoadRulesRecvData::NetworkPlayerID) const;

	// CgsPlayersConnectionManager.h:134
	bool AreAllConnectionsSuccessful() const;

	// CgsPlayersConnectionManager.h:137
	void Disconnected();

	// CgsPlayersConnectionManager.h:141
	void OnLobbyApiCreated();

private:
	// CgsPlayersConnectionManager.h:171
	const char * GetPlayerName(RoadRulesRecvData::NetworkPlayerID) const;

	// CgsPlayersConnectionManager.h:183
	CgsNetwork::PlayersConnectionManager::ConnectionDataEntry * AddPlayer(const TimerStatus *, const char *, RoadRulesRecvData::NetworkPlayerID, int32_t, bool);

	// CgsPlayersConnectionManager.h:190
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// CgsPlayersConnectionManager.h:194
	const CgsNetwork::PlayersConnectionManager::ConnectionDataEntry * GetEntry(RoadRulesRecvData::NetworkPlayerID) const;

	// CgsPlayersConnectionManager.h:198
	CgsNetwork::PlayersConnectionManager::ConnectionDataEntry * GetEntry(RoadRulesRecvData::NetworkPlayerID);

	// CgsPlayersConnectionManager.h:206
	void RegisterMessageTypes(CgsNetwork::PlayersConnectionManager::ConnectionDataEntry *);

	// CgsPlayersConnectionManager.h:210
	void UnRegisterMessageTypes(CgsNetwork::PlayersConnectionManager::ConnectionDataEntry *);

	// CgsPlayersConnectionManager.h:213
	void CheckAndUpdateGameID();

	// CgsPlayersConnectionManager.h:219
	void UpdatePlayerList(const CgsNetwork::DirtySock::ConnApiClientListT *, const TimerStatus *, uint16_t);

	// CgsPlayersConnectionManager.h:224
	void CheckTestConnectionMessageStatus(const TimerStatus *, uint16_t);

	// CgsPlayersConnectionManager.h:230
	void SendTestConnectionMessage(CgsNetwork::PlayersConnectionManager::ConnectionDataEntry *, const TimerStatus *, uint16_t);

	// CgsPlayersConnectionManager.h:234
	void SendConnectionStatusMessages(uint16_t);

	// CgsPlayersConnectionManager.h:247
	void TestConnectionMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// CgsPlayersConnectionManager.h:253
	void TestConnectionMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// CgsPlayersConnectionManager.h:266
	void ConnectionStatusMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// CgsPlayersConnectionManager.h:272
	void ConnectionStatusMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// CgsPlayersConnectionManager.h:278
	void ConnApiStatusChangeCallback(CgsNetwork::DirtySock::ConnApiRefT *, CgsNetwork::DirtySock::ConnApiCbInfoT *, void *);

}

// CgsPlayersConnectionManager.h:70
struct CgsNetwork::PlayersConnectionManager {
private:
	// CgsPlayersConnectionManager.h:281
	CgsNetwork::PlayerManager * mpPlayerManager;

	// Unknown accessibility
	// CgsPlayersConnectionManager.h:63
	typedef void (*)(bool, GuiEventNetworkLaunching::NetworkPlayerID, CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData, void *) ConnMgrConnectionFinalisedCallback;

	// CgsPlayersConnectionManager.h:286
	PlayersConnectionManager::ConnMgrConnectionFinalisedCallback mpfConnectionFinalisedCallback;

	// CgsPlayersConnectionManager.h:287
	void * mpConnectionFinalisedUserData;

	// Unknown accessibility
	// CgsPlayersConnectionManager.h:67
	typedef void (*)(GuiEventNetworkLaunching::NetworkPlayerID, void *) ConnMgrPlayerDisconnectedCallback;

	// CgsPlayersConnectionManager.h:290
	PlayersConnectionManager::ConnMgrPlayerDisconnectedCallback mpfPlayerDisconnectedCallback;

	// CgsPlayersConnectionManager.h:291
	void * mpPlayerDisconnectedCallbackData;

	// CgsPlayersConnectionManager.h:293
	CgsNetwork::PlayersConnectionManager::ConnectionDataEntry[7] maConnectionDataEntry;

	// CgsPlayersConnectionManager.h:296
	CgsNetwork::ServerInterface * mpServerInterface;

	// CgsPlayersConnectionManager.h:299
	uint32_t muLocalPlayerIPAddress;

public:
	// CgsPlayersConnectionManager.h:74
	void Construct();

	// CgsPlayersConnectionManager.h:77
	void Destruct();

	// CgsPlayersConnectionManager.h:88
	bool Prepare(CgsNetwork::PlayerManager *, CgsNetwork::ServerInterface *, PlayersConnectionManager::ConnMgrConnectionFinalisedCallback, void *, PlayersConnectionManager::ConnMgrPlayerDisconnectedCallback, void *);

	// CgsPlayersConnectionManager.h:91
	bool Release();

	// CgsPlayersConnectionManager.h:105
	void Update(const TimerStatus *, uint16_t);

	// CgsPlayersConnectionManager.h:111
	CgsNetwork::EConnectionStatus GetConnectionStatus(GuiEventNetworkLaunching::NetworkPlayerID) const;

	// CgsPlayersConnectionManager.h:117
	void ResetConnectionData();

	// CgsPlayersConnectionManager.h:124
	bool HavePlayersFailedToConnect(GuiEventNetworkLaunching::NetworkPlayerID, GuiEventNetworkLaunching::NetworkPlayerID) const;

	// CgsPlayersConnectionManager.h:131
	GuiEventNetworkLaunching::NetworkPlayerID GetIDOfPlayerToKick(GuiEventNetworkLaunching::NetworkPlayerID, GuiEventNetworkLaunching::NetworkPlayerID) const;

	// CgsPlayersConnectionManager.h:134
	bool AreAllConnectionsSuccessful() const;

	// CgsPlayersConnectionManager.h:137
	void Disconnected();

	// CgsPlayersConnectionManager.h:141
	void OnLobbyApiCreated();

private:
	// CgsPlayersConnectionManager.h:171
	const char * GetPlayerName(GuiEventNetworkLaunching::NetworkPlayerID) const;

	// CgsPlayersConnectionManager.h:183
	CgsNetwork::PlayersConnectionManager::ConnectionDataEntry * AddPlayer(const TimerStatus *, const char *, GuiEventNetworkLaunching::NetworkPlayerID, int32_t, bool);

	// CgsPlayersConnectionManager.h:190
	void RemovePlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsPlayersConnectionManager.h:194
	const CgsNetwork::PlayersConnectionManager::ConnectionDataEntry * GetEntry(GuiEventNetworkLaunching::NetworkPlayerID) const;

	// CgsPlayersConnectionManager.h:198
	CgsNetwork::PlayersConnectionManager::ConnectionDataEntry * GetEntry(GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsPlayersConnectionManager.h:206
	void RegisterMessageTypes(CgsNetwork::PlayersConnectionManager::ConnectionDataEntry *);

	// CgsPlayersConnectionManager.h:210
	void UnRegisterMessageTypes(CgsNetwork::PlayersConnectionManager::ConnectionDataEntry *);

	// CgsPlayersConnectionManager.h:213
	void CheckAndUpdateGameID();

	// CgsPlayersConnectionManager.h:219
	void UpdatePlayerList(const CgsNetwork::DirtySock::ConnApiClientListT *, const TimerStatus *, uint16_t);

	// CgsPlayersConnectionManager.h:224
	void CheckTestConnectionMessageStatus(const TimerStatus *, uint16_t);

	// CgsPlayersConnectionManager.h:230
	void SendTestConnectionMessage(CgsNetwork::PlayersConnectionManager::ConnectionDataEntry *, const TimerStatus *, uint16_t);

	// CgsPlayersConnectionManager.h:234
	void SendConnectionStatusMessages(uint16_t);

	// CgsPlayersConnectionManager.h:247
	void TestConnectionMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// CgsPlayersConnectionManager.h:253
	void TestConnectionMessageArrivedCallback(CgsNetwork::ReliableMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// CgsPlayersConnectionManager.h:266
	void ConnectionStatusMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// CgsPlayersConnectionManager.h:272
	void ConnectionStatusMessageArrivedCallback(CgsNetwork::ReliableMessage *, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// CgsPlayersConnectionManager.h:278
	void ConnApiStatusChangeCallback(CgsNetwork::DirtySock::ConnApiRefT *, CgsNetwork::DirtySock::ConnApiCbInfoT *, void *);

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct PlayersConnectionManager {
		// CgsPlayersConnectionManager.h:147
		struct ConnectionDataEntry {
			// CgsPlayersConnectionManager.h:150
			PlayerConnectionData mPlayerConnectionData;

			// CgsPlayersConnectionManager.h:154
			PlayerConnectionData[7] maLastFinaliseStateSent;

			// CgsPlayersConnectionManager.h:155
			PlayerConnectionData[7] maLastFinaliseStateRecvd;

			// CgsConnectionDataPS3.h:88
			typedef ConnectionDataPS3 ConnectionData;

			// CgsPlayersConnectionManager.h:157
			CgsNetwork::PlayersConnectionManager::ConnectionDataEntry::ConnectionData mConnectionData;

			// CgsPlayersConnectionManager.h:159
			CgsNetwork::TestConnectionMessage mTestConnectionMessageSend;

			// CgsPlayersConnectionManager.h:160
			CgsNetwork::TestConnectionMessage mTestConnectionMessageRecv;

			// CgsPlayersConnectionManager.h:161
			Time mTimeTestConnectionSent;

			// CgsPlayersConnectionManager.h:162
			bool mbHaveReceivedTestPacketFromPlayer;

			// CgsPlayersConnectionManager.h:163
			bool mbTestConnectionPacketDelivered;

			// CgsPlayersConnectionManager.h:164
			bool mbTestConnectionPacketNacked;

			// CgsPlayersConnectionManager.h:166
			CgsNetwork::ConnectionStatusMessage mConnectionStatusMessageSend;

			// CgsPlayersConnectionManager.h:167
			CgsNetwork::ConnectionStatusMessage mConnectionStatusMessageRecv;

		}

	}

}

// CgsPlayersConnectionManager.h:70
struct CgsNetwork::PlayersConnectionManager {
private:
	// CgsPlayersConnectionManager.h:281
	CgsNetwork::PlayerManager * mpPlayerManager;

	// Unknown accessibility
	// CgsPlayersConnectionManager.h:63
	typedef void (*)(bool, AggressiveMoveData::NetworkPlayerID, CgsNetwork::PlayersConnectionManager::ConnectionDataEntry::ConnectionData, void *) ConnMgrConnectionFinalisedCallback;

	// CgsPlayersConnectionManager.h:286
	PlayersConnectionManager::ConnMgrConnectionFinalisedCallback mpfConnectionFinalisedCallback;

	// CgsPlayersConnectionManager.h:287
	void * mpConnectionFinalisedUserData;

	// Unknown accessibility
	// CgsPlayersConnectionManager.h:67
	typedef void (*)(AggressiveMoveData::NetworkPlayerID, void *) ConnMgrPlayerDisconnectedCallback;

	// CgsPlayersConnectionManager.h:290
	PlayersConnectionManager::ConnMgrPlayerDisconnectedCallback mpfPlayerDisconnectedCallback;

	// CgsPlayersConnectionManager.h:291
	void * mpPlayerDisconnectedCallbackData;

	// CgsPlayersConnectionManager.h:293
	CgsNetwork::PlayersConnectionManager::ConnectionDataEntry[7] maConnectionDataEntry;

	// CgsPlayersConnectionManager.h:296
	CgsNetwork::ServerInterface * mpServerInterface;

	// CgsPlayersConnectionManager.h:299
	uint32_t muLocalPlayerIPAddress;

public:
	// CgsPlayersConnectionManager.h:74
	void Construct();

	// CgsPlayersConnectionManager.h:77
	void Destruct();

	// CgsPlayersConnectionManager.h:88
	bool Prepare(CgsNetwork::PlayerManager *, CgsNetwork::ServerInterface *, PlayersConnectionManager::ConnMgrConnectionFinalisedCallback, void *, PlayersConnectionManager::ConnMgrPlayerDisconnectedCallback, void *);

	// CgsPlayersConnectionManager.h:91
	bool Release();

	// CgsPlayersConnectionManager.h:105
	void Update(const TimerStatus *, uint16_t);

	// CgsPlayersConnectionManager.h:111
	CgsNetwork::EConnectionStatus GetConnectionStatus(AggressiveMoveData::NetworkPlayerID) const;

	// CgsPlayersConnectionManager.h:117
	void ResetConnectionData();

	// CgsPlayersConnectionManager.h:124
	bool HavePlayersFailedToConnect(AggressiveMoveData::NetworkPlayerID, AggressiveMoveData::NetworkPlayerID) const;

	// CgsPlayersConnectionManager.h:131
	AggressiveMoveData::NetworkPlayerID GetIDOfPlayerToKick(AggressiveMoveData::NetworkPlayerID, AggressiveMoveData::NetworkPlayerID) const;

	// CgsPlayersConnectionManager.h:134
	bool AreAllConnectionsSuccessful() const;

	// CgsPlayersConnectionManager.h:137
	void Disconnected();

	// CgsPlayersConnectionManager.h:141
	void OnLobbyApiCreated();

private:
	// CgsPlayersConnectionManager.h:171
	const char * GetPlayerName(AggressiveMoveData::NetworkPlayerID) const;

	// CgsPlayersConnectionManager.h:183
	CgsNetwork::PlayersConnectionManager::ConnectionDataEntry * AddPlayer(const TimerStatus *, const char *, AggressiveMoveData::NetworkPlayerID, int32_t, bool);

	// CgsPlayersConnectionManager.h:190
	void RemovePlayer(AggressiveMoveData::NetworkPlayerID);

	// CgsPlayersConnectionManager.h:194
	const CgsNetwork::PlayersConnectionManager::ConnectionDataEntry * GetEntry(AggressiveMoveData::NetworkPlayerID) const;

	// CgsPlayersConnectionManager.h:198
	CgsNetwork::PlayersConnectionManager::ConnectionDataEntry * GetEntry(AggressiveMoveData::NetworkPlayerID);

	// CgsPlayersConnectionManager.h:206
	void RegisterMessageTypes(CgsNetwork::PlayersConnectionManager::ConnectionDataEntry *);

	// CgsPlayersConnectionManager.h:210
	void UnRegisterMessageTypes(CgsNetwork::PlayersConnectionManager::ConnectionDataEntry *);

	// CgsPlayersConnectionManager.h:213
	void CheckAndUpdateGameID();

	// CgsPlayersConnectionManager.h:219
	void UpdatePlayerList(const CgsNetwork::DirtySock::ConnApiClientListT *, const TimerStatus *, uint16_t);

	// CgsPlayersConnectionManager.h:224
	void CheckTestConnectionMessageStatus(const TimerStatus *, uint16_t);

	// CgsPlayersConnectionManager.h:230
	void SendTestConnectionMessage(CgsNetwork::PlayersConnectionManager::ConnectionDataEntry *, const TimerStatus *, uint16_t);

	// CgsPlayersConnectionManager.h:234
	void SendConnectionStatusMessages(uint16_t);

	// CgsPlayersConnectionManager.h:247
	void TestConnectionMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, AggressiveMoveData::NetworkPlayerID, void *);

	// CgsPlayersConnectionManager.h:253
	void TestConnectionMessageArrivedCallback(CgsNetwork::ReliableMessage *, AggressiveMoveData::NetworkPlayerID, void *);

	// CgsPlayersConnectionManager.h:266
	void ConnectionStatusMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, AggressiveMoveData::NetworkPlayerID, void *);

	// CgsPlayersConnectionManager.h:272
	void ConnectionStatusMessageArrivedCallback(CgsNetwork::ReliableMessage *, AggressiveMoveData::NetworkPlayerID, void *);

	// CgsPlayersConnectionManager.h:278
	void ConnApiStatusChangeCallback(CgsNetwork::DirtySock::ConnApiRefT *, CgsNetwork::DirtySock::ConnApiCbInfoT *, void *);

}

// CgsBitStream.h:26
namespace CgsNetwork {
	// Declaration
	struct PlayersConnectionManager {
		// CgsPlayersConnectionManager.h:147
		struct ConnectionDataEntry {
			// CgsPlayersConnectionManager.h:150
			PlayerConnectionData mPlayerConnectionData;

			// CgsPlayersConnectionManager.h:154
			PlayerConnectionData[7] maLastFinaliseStateSent;

			// CgsPlayersConnectionManager.h:155
			PlayerConnectionData[7] maLastFinaliseStateRecvd;

			// CgsPlayersConnectionManager.h:157
			CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData mConnectionData;

			// CgsPlayersConnectionManager.h:159
			CgsNetwork::TestConnectionMessage mTestConnectionMessageSend;

			// CgsPlayersConnectionManager.h:160
			CgsNetwork::TestConnectionMessage mTestConnectionMessageRecv;

			// CgsPlayersConnectionManager.h:161
			Time mTimeTestConnectionSent;

			// CgsPlayersConnectionManager.h:162
			bool mbHaveReceivedTestPacketFromPlayer;

			// CgsPlayersConnectionManager.h:163
			bool mbTestConnectionPacketDelivered;

			// CgsPlayersConnectionManager.h:164
			bool mbTestConnectionPacketNacked;

			// CgsPlayersConnectionManager.h:166
			CgsNetwork::ConnectionStatusMessage mConnectionStatusMessageSend;

			// CgsPlayersConnectionManager.h:167
			CgsNetwork::ConnectionStatusMessage mConnectionStatusMessageRecv;

		}

	}

}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// Declaration
	struct PlayersConnectionManager {
		// CgsPlayersConnectionManager.h:147
		struct ConnectionDataEntry {
			// CgsPlayersConnectionManager.h:150
			PlayerConnectionData mPlayerConnectionData;

			// CgsPlayersConnectionManager.h:154
			PlayerConnectionData[7] maLastFinaliseStateSent;

			// CgsPlayersConnectionManager.h:155
			PlayerConnectionData[7] maLastFinaliseStateRecvd;

			// CgsPlayersConnectionManager.h:157
			CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData mConnectionData;

			// CgsPlayersConnectionManager.h:159
			CgsNetwork::TestConnectionMessage mTestConnectionMessageSend;

			// CgsPlayersConnectionManager.h:160
			CgsNetwork::TestConnectionMessage mTestConnectionMessageRecv;

			// CgsPlayersConnectionManager.h:161
			Time mTimeTestConnectionSent;

			// CgsPlayersConnectionManager.h:162
			bool mbHaveReceivedTestPacketFromPlayer;

			// CgsPlayersConnectionManager.h:163
			bool mbTestConnectionPacketDelivered;

			// CgsPlayersConnectionManager.h:164
			bool mbTestConnectionPacketNacked;

			// CgsPlayersConnectionManager.h:166
			CgsNetwork::ConnectionStatusMessage mConnectionStatusMessageSend;

			// CgsPlayersConnectionManager.h:167
			CgsNetwork::ConnectionStatusMessage mConnectionStatusMessageRecv;

		}

	}

}

// CgsPlayersConnectionManager.h:70
struct CgsNetwork::PlayersConnectionManager {
private:
	// CgsPlayersConnectionManager.h:281
	CgsNetwork::PlayerManager * mpPlayerManager;

	// Unknown accessibility
	// CgsPlayersConnectionManager.h:63
	typedef void (*)(bool, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData, void *) ConnMgrConnectionFinalisedCallback;

	// CgsPlayersConnectionManager.h:286
	PlayersConnectionManager::ConnMgrConnectionFinalisedCallback mpfConnectionFinalisedCallback;

	// CgsPlayersConnectionManager.h:287
	void * mpConnectionFinalisedUserData;

	// Unknown accessibility
	// CgsPlayersConnectionManager.h:67
	typedef void (*)(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, void *) ConnMgrPlayerDisconnectedCallback;

	// CgsPlayersConnectionManager.h:290
	PlayersConnectionManager::ConnMgrPlayerDisconnectedCallback mpfPlayerDisconnectedCallback;

	// CgsPlayersConnectionManager.h:291
	void * mpPlayerDisconnectedCallbackData;

	// CgsPlayersConnectionManager.h:293
	CgsNetwork::PlayersConnectionManager::ConnectionDataEntry[7] maConnectionDataEntry;

	// CgsPlayersConnectionManager.h:296
	CgsNetwork::ServerInterface * mpServerInterface;

	// CgsPlayersConnectionManager.h:299
	uint32_t muLocalPlayerIPAddress;

public:
	// CgsPlayersConnectionManager.h:74
	void Construct();

	// CgsPlayersConnectionManager.h:77
	void Destruct();

	// CgsPlayersConnectionManager.h:88
	bool Prepare(CgsNetwork::PlayerManager *, CgsNetwork::ServerInterface *, PlayersConnectionManager::ConnMgrConnectionFinalisedCallback, void *, PlayersConnectionManager::ConnMgrPlayerDisconnectedCallback, void *);

	// CgsPlayersConnectionManager.h:91
	bool Release();

	// CgsPlayersConnectionManager.h:105
	void Update(const TimerStatus *, uint16_t);

	// CgsPlayersConnectionManager.h:111
	CgsNetwork::EConnectionStatus GetConnectionStatus(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID) const;

	// CgsPlayersConnectionManager.h:117
	void ResetConnectionData();

	// CgsPlayersConnectionManager.h:124
	bool HavePlayersFailedToConnect(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID) const;

	// CgsPlayersConnectionManager.h:131
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID GetIDOfPlayerToKick(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID) const;

	// CgsPlayersConnectionManager.h:134
	// Declaration
	bool AreAllConnectionsSuccessful() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPlayersConnectionManager.cpp:954
		using namespace CgsDev::Message;

		// CgsPlayersConnectionManager.cpp:997
		using namespace CgsDev::Message;

		// CgsPlayersConnectionManager.cpp:1007
		using namespace CgsDev::Message;

	}

	// CgsPlayersConnectionManager.h:137
	void Disconnected();

	// CgsPlayersConnectionManager.h:141
	void OnLobbyApiCreated();

private:
	// CgsPlayersConnectionManager.h:171
	const char * GetPlayerName(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID) const;

	// CgsPlayersConnectionManager.h:183
	CgsNetwork::PlayersConnectionManager::ConnectionDataEntry * AddPlayer(const TimerStatus *, const char *, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, int32_t, bool);

	// CgsPlayersConnectionManager.h:190
	void RemovePlayer(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

	// CgsPlayersConnectionManager.h:194
	const CgsNetwork::PlayersConnectionManager::ConnectionDataEntry * GetEntry(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID) const;

	// CgsPlayersConnectionManager.h:198
	CgsNetwork::PlayersConnectionManager::ConnectionDataEntry * GetEntry(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

	// CgsPlayersConnectionManager.h:206
	void RegisterMessageTypes(CgsNetwork::PlayersConnectionManager::ConnectionDataEntry *);

	// CgsPlayersConnectionManager.h:210
	void UnRegisterMessageTypes(CgsNetwork::PlayersConnectionManager::ConnectionDataEntry *);

	// CgsPlayersConnectionManager.h:213
	void CheckAndUpdateGameID();

	// CgsPlayersConnectionManager.h:219
	// Declaration
	void UpdatePlayerList(const CgsNetwork::DirtySock::ConnApiClientListT *, const TimerStatus *, uint16_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPlayersConnectionManager.cpp:385
		using namespace CgsDev::Message;

		// CgsPlayersConnectionManager.cpp:421
		using namespace CgsDev::Message;

		// CgsPlayersConnectionManager.cpp:462
		using namespace CgsDev::Message;

		// CgsPlayersConnectionManager.cpp:524
		using namespace CgsDev::Message;

		// CgsPlayersConnectionManager.cpp:601
		using namespace CgsDev::Message;

	}

	// CgsPlayersConnectionManager.h:224
	// Declaration
	void CheckTestConnectionMessageStatus(const TimerStatus *, uint16_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPlayersConnectionManager.cpp:642
		using namespace CgsDev::Message;

		// CgsPlayersConnectionManager.cpp:665
		using namespace CgsDev::Message;

	}

	// CgsPlayersConnectionManager.h:230
	// Declaration
	void SendTestConnectionMessage(CgsNetwork::PlayersConnectionManager::ConnectionDataEntry *, const TimerStatus *, uint16_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPlayersConnectionManager.cpp:695
		using namespace CgsDev::Message;

	}

	// CgsPlayersConnectionManager.h:234
	// Declaration
	void SendConnectionStatusMessages(uint16_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPlayersConnectionManager.cpp:1472
		using namespace CgsDev::Message;

		// CgsPlayersConnectionManager.cpp:1477
		using namespace CgsDev::Message;

	}

	// CgsPlayersConnectionManager.h:247
	void TestConnectionMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, void *);

	// CgsPlayersConnectionManager.h:253
	void TestConnectionMessageArrivedCallback(CgsNetwork::ReliableMessage *, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, void *);

	// CgsPlayersConnectionManager.h:266
	void ConnectionStatusMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, void *);

	// CgsPlayersConnectionManager.h:272
	// Declaration
	void ConnectionStatusMessageArrivedCallback(CgsNetwork::ReliableMessage *, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPlayersConnectionManager.cpp:1309
		using namespace CgsDev::Message;

		// CgsPlayersConnectionManager.cpp:1323
		using namespace CgsDev::Message;

		// CgsPlayersConnectionManager.cpp:1328
		using namespace CgsDev::Message;

	}

	// CgsPlayersConnectionManager.h:278
	// Declaration
	void ConnApiStatusChangeCallback(CgsNetwork::DirtySock::ConnApiRefT *, CgsNetwork::DirtySock::ConnApiCbInfoT *, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPlayersConnectionManager.cpp:1504
		using namespace CgsDev::Message;

	}

}

