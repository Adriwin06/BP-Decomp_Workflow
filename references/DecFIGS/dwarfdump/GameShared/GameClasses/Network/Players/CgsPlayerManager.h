// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct PlayerManager {
		// CgsPlayerManager.h:125
		enum EEvent {
			E_EVENT_PLAYER_ADDED = 0,
			E_EVENT_START_PLAYER_REMOVAL = 1,
			E_EVENT_END_PLAYER_REMOVAL = 2,
			E_EVENT_PLAYER_FINALISED = 3,
			E_EVENT_PLAYER_LOST_CONTACT = 4,
			E_EVENT_PLAYER_REGAINED_CONTACT = 5,
			E_EVENT_PLAYER_DISCONNECTED = 6,
			E_EVENT_COUNT = 7,
		}

		// CgsPlayerManager.h:138
		enum EPlayersToConsider {
			E_CONSIDER_PLAYERS_WHO_HAVE_FINALISED = 0,
			E_CONSIDER_ALL_PLAYERS = 1,
			E_CONSIDER_PLAYERS_COUNT = 2,
		}

		// CgsPlayerManager.h:389
		enum EPrepareState {
			E_CONSTRUCTED = 0,
			E_RELEASED = 1,
			E_PREPARING_CONNECTION_MANAGER = 2,
			E_PREPARING_RELIABLE_MESSAGE_MANAGER = 3,
			E_FULLY_PREPARED = 4,
			E_PREPARING_COUNT = 5,
		}

		// CgsPlayerManager.h:409
		struct EventCallback {
			// CgsPlayerManager.h:412
			void (*)(CgsNetwork::PlayerManager::EEvent, void *, void *) mCallback;

			// CgsPlayerManager.h:413
			void * mpUserData;

		}

	}

	// CgsPlayerManager.h:59
	const int32_t KI_MAX_ACKS_TO_BUFFER = 10;

	// CgsPlayerManager.h:60
	const int32_t KI_MAX_NACKS_TO_BUFFER = 10;

	// CgsPlayerManager.h:63
	const int32_t KI_FRAME_GAP_BETWEEN_ROUND_ROBIN = 3;

	// CgsPlayerManager.h:64
	const int32_t KI_FRAME_GAP_BETWEEN_ROUND_ROBIN_IN_GAME = 1;

}

// CgsPlayerManager.h:91
struct CgsNetwork::PlayerManagerConstructParams {
	// CgsPlayerManager.h:94
	CgsNetworkPlayerConstructParams *[8] mapConstructParams;

	// CgsPlayerManager.h:95
	CgsNetwork::NetworkPlayer *[8] mapPlayerList;

	// CgsPlayerManager.h:96
	CgsNetwork::PlayerMenuData *[8] mapMenuData;

}

// CgsPlayerManager.h:108
struct CgsNetwork::PlayerManagerPrepareParams {
	// CgsPlayerManager.h:110
	NetworkAdapter * mpNetworkAdapter;

	// CgsPlayerManager.h:111
	CgsNetwork::ServerInterface * mpServerInterface;

	// CgsPlayerManager.h:112
	CgsNetwork::TimeManager * mpTimeManager;

	// CgsPlayerManager.h:113
	CgsSystem::EFrameRate meLocalConsoleFrameRate;

	// CgsPlayerManager.h:80
	typedef void (CgsNetwork::NetworkPlayer *, int32_t, int32_t) OnReceivedFromWrongIPCallback;

	// CgsPlayerManager.h:114
	PlayerManagerPrepareParams::OnReceivedFromWrongIPCallback * mpfOnReceivedFromWrongIPCallback;

	// CgsPlayerManager.h:115
	PlayersConnectionManager::ConnMgrConnectionFinalisedCallback mpfConnectionFinalisedCallback;

	// CgsPlayerManager.h:116
	void * mpConnectionFinalisedUserData;

	// CgsPlayerManager.h:117
	HeapMalloc * mpNetworkHeapAllocator;

}

// CgsPlayerManager.h:122
struct CgsNetwork::PlayerManager {
	// CgsPlayerManager.h:341
	PlayersConnectionManager mConnectionManager;

	// CgsPlayerManager.h:342
	ReliableMessageManager mReliableMessageManager;

private:
	// CgsPlayerManager.h:416
	extern const int32_t KI_NUM_EVENT_CALLBACKS = 1;

	// CgsPlayerManager.h:418
	CgsNetwork::SignalMessage[10] maAckMessage;

	// CgsPlayerManager.h:419
	CgsNetwork::SignalMessage[10] maNackMessage;

	// CgsPlayerManager.h:421
	PlayerData[8] maInactivePlayers;

	// CgsPlayerManager.h:422
	PlayerData[8] maActivePlayers;

	// CgsPlayerManager.h:424
	CgsNetwork::PlayerManager::EventCallback[1] maEventCallbacks;

	// CgsPlayerManager.h:425
	int32_t miNumEventCallbacks;

	// CgsPlayerManager.h:427
	extern int32_t mnNumMessagesArrivedThisFrame;

	// CgsPlayerManager.h:429
	CgsNetwork::PlayerManager::EPrepareState mePrepareState;

	// CgsPlayerManager.h:432
	int32_t miNumActivePlayers;

	// CgsPlayerManager.h:433
	int32_t miNumInactivePlayers;

	// CgsPlayerManager.h:435
	CgsNetwork::ServerInterface * mpServerInterface;

	// CgsPlayerManager.h:436
	NetworkAdapter * mpNetworkAdapter;

	// CgsPlayerManager.h:437
	CgsNetwork::TimeManager * mpTimeManager;

	// CgsPlayerManager.h:438
	CgsSystem::EFrameRate meLocalConsoleFrameRate;

	// CgsPlayerManager.h:440
	RoadRulesRecvData::NetworkPlayerID mHostPlayerID;

	// CgsPlayerManager.h:445
	RoadRulesRecvData::NetworkPlayerID mLocalPlayerID;

	// CgsPlayerManager.h:448
	PlayerManagerPrepareParams::OnReceivedFromWrongIPCallback * mpfOnReceivedFromWrongIPCallback;

	// CgsPlayerManager.h:451
	PlayersConnectionManager::ConnMgrConnectionFinalisedCallback mpfConnectionFinalisedCallback;

	// CgsPlayerManager.h:452
	void * mpConnectionFinalisedUserData;

	// CgsPlayerManager.h:454
	uint16_t mu16CurrentFrame;

	// CgsPlayerManager.h:455
	uint8_t mu8GameID;

	// CgsPlayerManager.h:457
	bool mbDiskAccessible;

	// CgsPlayerManager.h:458
	bool mbPlayerListIsValid;

	// CgsPlayerManager.h:461
	int32_t miPLAYERManagerSendMessagesPM;

	// CgsPlayerManager.h:462
	extern int32_t miNextPlayerIDPerfmon;

	// CgsPlayerManager.h:463
	extern bool _mbRegisteredPerfmon;

	// CgsPlayerManager.h:467
	CgsNetwork::PlayerManagerDebugComponent mDebugComponent;

	// CgsPlayerManager.h:469
	int32_t miBytesUsedForAcks;

	// CgsPlayerManager.h:470
	int32_t miBytesUsedForUnreliableMessages;

	// CgsPlayerManager.h:471
	int32_t miBytesUsedForReliableMessages;

	// CgsPlayerManager.h:472
	int32_t miBytesUsedForReliableResendMessages;

	// CgsPlayerManager.h:473
	int32_t[41] maMessageBytes;

public:
	// CgsPlayerManager.h:150
	void Construct(PlayerManagerConstructParams *);

	// CgsPlayerManager.h:153
	void Destruct();

	// CgsPlayerManager.h:157
	bool Prepare(PlayerManagerPrepareParams *);

	// CgsPlayerManager.h:160
	bool Release();

	// CgsPlayerManager.h:173
	void Update(const TimerStatus *, uint16_t, bool);

	// CgsPlayerManager.h:177
	void PostUpdate(uint16_t);

	// CgsPlayerManager.h:186
	void AddPlayer(const TimerStatus *, const char *, RoadRulesRecvData::NetworkPlayerID, int32_t, CgsSystem::EFrameRate, bool);

	// CgsPlayerManager.h:190
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// CgsPlayerManager.h:212
	bool GetNextPlayerID(RoadRulesRecvData::NetworkPlayerID *, CgsNetwork::PlayerManager::EPlayersToConsider) const;

	// CgsPlayerManager.h:217
	bool GetNextLocalPlayerID(RoadRulesRecvData::NetworkPlayerID *) const;

	// CgsPlayerManager.h:222
	bool GetNextRemotePlayerID(RoadRulesRecvData::NetworkPlayerID *) const;

	// CgsPlayerManager.h:226
	CgsNetwork::NetworkPlayer * GetPlayerByID(RoadRulesRecvData::NetworkPlayerID) const;

	// CgsPlayerManager.h:230
	CgsNetwork::NetworkPlayer * GetPlayerByName(const PlayerName *);

	// CgsPlayerManager.h:234
	CgsNetwork::NetworkPlayer * GetPlayerByName(const char *);

	// CgsPlayerManager.h:238
	CgsNetwork::PlayerMenuData * GetMenuDataByID(RoadRulesRecvData::NetworkPlayerID) const;

	// CgsPlayerManager.h:242
	CgsNetwork::PlayerMenuData * GetMenuDataByName(const char *);

	// CgsPlayerManager.h:245
	void SendMessages();

	// CgsPlayerManager.h:248
	void ReceiveMessages();

	// CgsPlayerManager.h:253
	bool AckNeedsSending(RoadRulesRecvData::NetworkPlayerID, int32_t) const;

	// CgsPlayerManager.h:258
	bool NackNeedsSending(RoadRulesRecvData::NetworkPlayerID, int32_t) const;

	// CgsPlayerManager.h:262
	CgsNetwork::SignalMessage * GetAck(int32_t);

	// CgsPlayerManager.h:266
	CgsNetwork::SignalMessage * GetNack(int32_t);

	// CgsPlayerManager.h:269
	RoadRulesRecvData::NetworkPlayerID GetHostPlayerID();

	// CgsPlayerManager.h:273
	void SetHostPlayerID(RoadRulesRecvData::NetworkPlayerID);

	// CgsPlayerManager.h:276
	bool AmIHost();

	// CgsPlayerManager.h:281
	int32_t GetTotalNumberPlayers(CgsNetwork::PlayerManager::EPlayersToConsider) const;

	// CgsPlayerManager.h:286
	int32_t GetNumberNetworkPlayers(CgsNetwork::PlayerManager::EPlayersToConsider) const;

	// CgsPlayerManager.h:290
	int32_t GetNumberLocalPlayers() const;

	// CgsPlayerManager.h:294
	void SetGameID(int32_t);

	// CgsPlayerManager.h:297
	uint8_t GetGameID() const;

	// CgsPlayerManager.h:301
	bool PlayerHasAppliedInitialNATData(RoadRulesRecvData::NetworkPlayerID);

	// CgsPlayerManager.h:304
	void OnRoundLoadingStart();

	// CgsPlayerManager.h:307
	void OnRoundStart();

	// CgsPlayerManager.h:310
	void OnRoundFinish();

	// CgsPlayerManager.h:314
	void SetPortTestIPAddress(int32_t);

	// CgsPlayerManager.h:318
	void SetDiskAccessible(bool);

	// CgsPlayerManager.h:323
	void SetPlayerIPAddress(RoadRulesRecvData::NetworkPlayerID, int32_t);

	// CgsPlayerManager.h:327
	bool CheckForAck(CgsNetwork::Message *);

	// CgsPlayerManager.h:331
	bool CheckForNack(CgsNetwork::Message *);

	// CgsPlayerManager.h:335
	void AcceptMessage(CgsNetwork::Message *);

	// CgsPlayerManager.h:339
	void ThrowAwayMessage(CgsNetwork::Message *);

	// CgsPlayerManager.h:347
	void RegisterEventCallback(void (*)(CgsNetwork::PlayerManager::EEvent, void *, void *), void *);

	// CgsPlayerManager.h:351
	void UnRegisterEventCallback(void (*)(CgsNetwork::PlayerManager::EEvent, void *, void *));

	// CgsPlayerManager.h:354
	void Disconnected();

	// CgsPlayerManager.h:358
	bool IsPlayerFinalised(RoadRulesRecvData::NetworkPlayerID) const;

	// CgsPlayerManager.h:364
	bool IsPlayerTurnToSendRoundRobinMessage(RoadRulesRecvData::NetworkPlayerID, bool, int32_t);

	// CgsPlayerManager.h:367
	bool IsLocalPlayer(RoadRulesRecvData::NetworkPlayerID) const;

	// CgsPlayerManager.h:371
	void OnLobbyApiCreated();

	// CgsPlayerManager.h:375
	int32_t GetNumBufferedReliableMessages();

	// CgsPlayerManager.h:379
	uint32_t GetTotalBytesSent();

	// CgsPlayerManager.h:382
	uint32_t GetTotalBytesSentWithOverhead();

	// CgsPlayerManager.h:385
	uint32_t GetTotalBytesSentToDirtySock();

private:
	// CgsPlayerManager.h:478
	void ResetAllBandwidthCounters();

	// CgsPlayerManager.h:484
	PlayerData * AssignActiveLocalPlayer(int32_t);

	// CgsPlayerManager.h:489
	PlayerData * AssignActiveNetworkPlayer(int32_t);

	// CgsPlayerManager.h:493
	void ReleasePlayer(int32_t);

	// CgsPlayerManager.h:496
	void ResetEventCallbacks();

	// CgsPlayerManager.h:501
	void BroadcastEvent(CgsNetwork::PlayerManager::EEvent, void *);

	// CgsPlayerManager.h:505
	bool AreAnyPlayersConnected() const;

	// CgsPlayerManager.h:512
	void ConnectionFinalisedCallback(bool, RoadRulesRecvData::NetworkPlayerID, CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData, void *);

	// CgsPlayerManager.h:518
	void PlayerDisconnectedCallback(RoadRulesRecvData::NetworkPlayerID, void *);

}

// CgsPlayerManager.h:416
extern const int32_t KI_NUM_EVENT_CALLBACKS = 1;

// CgsPlayerManager.h:108
struct CgsNetwork::PlayerManagerPrepareParams {
	// CgsPlayerManager.h:110
	NetworkAdapter * mpNetworkAdapter;

	// CgsPlayerManager.h:111
	CgsNetwork::ServerInterface * mpServerInterface;

	// CgsPlayerManager.h:112
	CgsNetwork::TimeManager * mpTimeManager;

	// CgsPlayerManager.h:113
	CgsSystem::EFrameRate meLocalConsoleFrameRate;

	// CgsPlayerManager.h:80
	typedef void (CgsNetwork::NetworkPlayer *, int32_t, int32_t) OnReceivedFromWrongIPCallback;

	// CgsPlayerManager.h:114
	PlayerManagerPrepareParams::OnReceivedFromWrongIPCallback * mpfOnReceivedFromWrongIPCallback;

	// CgsPlayerManager.h:115
	PlayersConnectionManager::ConnMgrConnectionFinalisedCallback mpfConnectionFinalisedCallback;

	// CgsPlayerManager.h:116
	void * mpConnectionFinalisedUserData;

	// CgsPlayerManager.h:117
	CgsMemory::HeapMalloc * mpNetworkHeapAllocator;

}

// CgsPlayerManager.h:122
struct CgsNetwork::PlayerManager {
	// CgsPlayerManager.h:341
	PlayersConnectionManager mConnectionManager;

	// CgsPlayerManager.h:342
	ReliableMessageManager mReliableMessageManager;

private:
	// CgsPlayerManager.h:416
	extern const int32_t KI_NUM_EVENT_CALLBACKS = 1;

	// CgsPlayerManager.h:418
	CgsNetwork::SignalMessage[10] maAckMessage;

	// CgsPlayerManager.h:419
	CgsNetwork::SignalMessage[10] maNackMessage;

	// CgsPlayerManager.h:421
	PlayerData[8] maInactivePlayers;

	// CgsPlayerManager.h:422
	PlayerData[8] maActivePlayers;

	// CgsPlayerManager.h:424
	CgsNetwork::PlayerManager::EventCallback[1] maEventCallbacks;

	// CgsPlayerManager.h:425
	int32_t miNumEventCallbacks;

	// CgsPlayerManager.h:427
	extern int32_t mnNumMessagesArrivedThisFrame;

	// CgsPlayerManager.h:429
	CgsNetwork::PlayerManager::EPrepareState mePrepareState;

	// CgsPlayerManager.h:432
	int32_t miNumActivePlayers;

	// CgsPlayerManager.h:433
	int32_t miNumInactivePlayers;

	// CgsPlayerManager.h:435
	CgsNetwork::ServerInterface * mpServerInterface;

	// CgsPlayerManager.h:436
	NetworkAdapter * mpNetworkAdapter;

	// CgsPlayerManager.h:437
	CgsNetwork::TimeManager * mpTimeManager;

	// CgsPlayerManager.h:438
	CgsSystem::EFrameRate meLocalConsoleFrameRate;

	// CgsPlayerManager.h:440
	GuiEventNetworkLaunching::NetworkPlayerID mHostPlayerID;

	// CgsPlayerManager.h:445
	GuiEventNetworkLaunching::NetworkPlayerID mLocalPlayerID;

	// CgsPlayerManager.h:448
	PlayerManagerPrepareParams::OnReceivedFromWrongIPCallback * mpfOnReceivedFromWrongIPCallback;

	// CgsPlayerManager.h:451
	PlayersConnectionManager::ConnMgrConnectionFinalisedCallback mpfConnectionFinalisedCallback;

	// CgsPlayerManager.h:452
	void * mpConnectionFinalisedUserData;

	// CgsPlayerManager.h:454
	uint16_t mu16CurrentFrame;

	// CgsPlayerManager.h:455
	uint8_t mu8GameID;

	// CgsPlayerManager.h:457
	bool mbDiskAccessible;

	// CgsPlayerManager.h:458
	bool mbPlayerListIsValid;

	// CgsPlayerManager.h:461
	int32_t miPLAYERManagerSendMessagesPM;

	// CgsPlayerManager.h:462
	extern int32_t miNextPlayerIDPerfmon;

	// CgsPlayerManager.h:463
	extern bool _mbRegisteredPerfmon;

	// CgsPlayerManager.h:467
	CgsNetwork::PlayerManagerDebugComponent mDebugComponent;

	// CgsPlayerManager.h:469
	int32_t miBytesUsedForAcks;

	// CgsPlayerManager.h:470
	int32_t miBytesUsedForUnreliableMessages;

	// CgsPlayerManager.h:471
	int32_t miBytesUsedForReliableMessages;

	// CgsPlayerManager.h:472
	int32_t miBytesUsedForReliableResendMessages;

	// CgsPlayerManager.h:473
	int32_t[41] maMessageBytes;

public:
	// CgsPlayerManager.h:150
	void Construct(PlayerManagerConstructParams *);

	// CgsPlayerManager.h:153
	void Destruct();

	// CgsPlayerManager.h:157
	bool Prepare(PlayerManagerPrepareParams *);

	// CgsPlayerManager.h:160
	bool Release();

	// CgsPlayerManager.h:173
	void Update(const TimerStatus *, uint16_t, bool);

	// CgsPlayerManager.h:177
	void PostUpdate(uint16_t);

	// CgsPlayerManager.h:186
	void AddPlayer(const TimerStatus *, const char *, GuiEventNetworkLaunching::NetworkPlayerID, int32_t, CgsSystem::EFrameRate, bool);

	// CgsPlayerManager.h:190
	void RemovePlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsPlayerManager.h:212
	bool GetNextPlayerID(GuiEventNetworkLaunching::NetworkPlayerID *, CgsNetwork::PlayerManager::EPlayersToConsider) const;

	// CgsPlayerManager.h:217
	bool GetNextLocalPlayerID(GuiEventNetworkLaunching::NetworkPlayerID *) const;

	// CgsPlayerManager.h:222
	bool GetNextRemotePlayerID(GuiEventNetworkLaunching::NetworkPlayerID *) const;

	// CgsPlayerManager.h:226
	CgsNetwork::NetworkPlayer * GetPlayerByID(GuiEventNetworkLaunching::NetworkPlayerID) const;

	// CgsPlayerManager.h:230
	CgsNetwork::NetworkPlayer * GetPlayerByName(const PlayerName *);

	// CgsPlayerManager.h:234
	CgsNetwork::NetworkPlayer * GetPlayerByName(const char *);

	// CgsPlayerManager.h:238
	CgsNetwork::PlayerMenuData * GetMenuDataByID(GuiEventNetworkLaunching::NetworkPlayerID) const;

	// CgsPlayerManager.h:242
	CgsNetwork::PlayerMenuData * GetMenuDataByName(const char *);

	// CgsPlayerManager.h:245
	void SendMessages();

	// CgsPlayerManager.h:248
	void ReceiveMessages();

	// CgsPlayerManager.h:253
	bool AckNeedsSending(GuiEventNetworkLaunching::NetworkPlayerID, int32_t) const;

	// CgsPlayerManager.h:258
	bool NackNeedsSending(GuiEventNetworkLaunching::NetworkPlayerID, int32_t) const;

	// CgsPlayerManager.h:262
	CgsNetwork::SignalMessage * GetAck(int32_t);

	// CgsPlayerManager.h:266
	CgsNetwork::SignalMessage * GetNack(int32_t);

	// CgsPlayerManager.h:269
	GuiEventNetworkLaunching::NetworkPlayerID GetHostPlayerID();

	// CgsPlayerManager.h:273
	void SetHostPlayerID(GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsPlayerManager.h:276
	bool AmIHost();

	// CgsPlayerManager.h:281
	int32_t GetTotalNumberPlayers(CgsNetwork::PlayerManager::EPlayersToConsider) const;

	// CgsPlayerManager.h:286
	int32_t GetNumberNetworkPlayers(CgsNetwork::PlayerManager::EPlayersToConsider) const;

	// CgsPlayerManager.h:290
	int32_t GetNumberLocalPlayers() const;

	// CgsPlayerManager.h:294
	void SetGameID(int32_t);

	// CgsPlayerManager.h:297
	uint8_t GetGameID() const;

	// CgsPlayerManager.h:301
	bool PlayerHasAppliedInitialNATData(GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsPlayerManager.h:304
	void OnRoundLoadingStart();

	// CgsPlayerManager.h:307
	void OnRoundStart();

	// CgsPlayerManager.h:310
	void OnRoundFinish();

	// CgsPlayerManager.h:314
	void SetPortTestIPAddress(int32_t);

	// CgsPlayerManager.h:318
	void SetDiskAccessible(bool);

	// CgsPlayerManager.h:323
	void SetPlayerIPAddress(GuiEventNetworkLaunching::NetworkPlayerID, int32_t);

	// CgsPlayerManager.h:327
	bool CheckForAck(CgsNetwork::Message *);

	// CgsPlayerManager.h:331
	bool CheckForNack(CgsNetwork::Message *);

	// CgsPlayerManager.h:335
	void AcceptMessage(CgsNetwork::Message *);

	// CgsPlayerManager.h:339
	void ThrowAwayMessage(CgsNetwork::Message *);

	// CgsPlayerManager.h:347
	void RegisterEventCallback(void (*)(CgsNetwork::PlayerManager::EEvent, void *, void *), void *);

	// CgsPlayerManager.h:351
	void UnRegisterEventCallback(void (*)(CgsNetwork::PlayerManager::EEvent, void *, void *));

	// CgsPlayerManager.h:354
	void Disconnected();

	// CgsPlayerManager.h:358
	bool IsPlayerFinalised(GuiEventNetworkLaunching::NetworkPlayerID) const;

	// CgsPlayerManager.h:364
	bool IsPlayerTurnToSendRoundRobinMessage(GuiEventNetworkLaunching::NetworkPlayerID, bool, int32_t);

	// CgsPlayerManager.h:367
	bool IsLocalPlayer(GuiEventNetworkLaunching::NetworkPlayerID) const;

	// CgsPlayerManager.h:371
	void OnLobbyApiCreated();

	// CgsPlayerManager.h:375
	int32_t GetNumBufferedReliableMessages();

	// CgsPlayerManager.h:379
	uint32_t GetTotalBytesSent();

	// CgsPlayerManager.h:382
	uint32_t GetTotalBytesSentWithOverhead();

	// CgsPlayerManager.h:385
	uint32_t GetTotalBytesSentToDirtySock();

private:
	// CgsPlayerManager.h:478
	void ResetAllBandwidthCounters();

	// CgsPlayerManager.h:484
	PlayerData * AssignActiveLocalPlayer(int32_t);

	// CgsPlayerManager.h:489
	PlayerData * AssignActiveNetworkPlayer(int32_t);

	// CgsPlayerManager.h:493
	void ReleasePlayer(int32_t);

	// CgsPlayerManager.h:496
	void ResetEventCallbacks();

	// CgsPlayerManager.h:501
	void BroadcastEvent(CgsNetwork::PlayerManager::EEvent, void *);

	// CgsPlayerManager.h:505
	bool AreAnyPlayersConnected() const;

	// CgsPlayerManager.h:512
	void ConnectionFinalisedCallback(bool, GuiEventNetworkLaunching::NetworkPlayerID, CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData, void *);

	// CgsPlayerManager.h:518
	void PlayerDisconnectedCallback(GuiEventNetworkLaunching::NetworkPlayerID, void *);

}

// CgsPlayerManager.h:122
struct CgsNetwork::PlayerManager {
	// CgsPlayerManager.h:341
	PlayersConnectionManager mConnectionManager;

	// CgsPlayerManager.h:342
	ReliableMessageManager mReliableMessageManager;

private:
	// CgsPlayerManager.h:416
	extern const int32_t KI_NUM_EVENT_CALLBACKS = 1;

	// CgsPlayerManager.h:418
	CgsNetwork::SignalMessage[10] maAckMessage;

	// CgsPlayerManager.h:419
	CgsNetwork::SignalMessage[10] maNackMessage;

	// CgsPlayerManager.h:421
	PlayerData[8] maInactivePlayers;

	// CgsPlayerManager.h:422
	PlayerData[8] maActivePlayers;

	// CgsPlayerManager.h:424
	CgsNetwork::PlayerManager::EventCallback[1] maEventCallbacks;

	// CgsPlayerManager.h:425
	int32_t miNumEventCallbacks;

	// CgsPlayerManager.h:427
	extern int32_t mnNumMessagesArrivedThisFrame;

	// CgsPlayerManager.h:429
	CgsNetwork::PlayerManager::EPrepareState mePrepareState;

	// CgsPlayerManager.h:432
	int32_t miNumActivePlayers;

	// CgsPlayerManager.h:433
	int32_t miNumInactivePlayers;

	// CgsPlayerManager.h:435
	CgsNetwork::ServerInterface * mpServerInterface;

	// CgsPlayerManager.h:436
	NetworkAdapter * mpNetworkAdapter;

	// CgsPlayerManager.h:437
	CgsNetwork::TimeManager * mpTimeManager;

	// CgsPlayerManager.h:438
	CgsSystem::EFrameRate meLocalConsoleFrameRate;

	// CgsPlayerManager.h:440
	AggressiveMoveData::NetworkPlayerID mHostPlayerID;

	// CgsPlayerManager.h:445
	AggressiveMoveData::NetworkPlayerID mLocalPlayerID;

	// CgsPlayerManager.h:448
	PlayerManagerPrepareParams::OnReceivedFromWrongIPCallback * mpfOnReceivedFromWrongIPCallback;

	// CgsPlayerManager.h:451
	PlayersConnectionManager::ConnMgrConnectionFinalisedCallback mpfConnectionFinalisedCallback;

	// CgsPlayerManager.h:452
	void * mpConnectionFinalisedUserData;

	// CgsPlayerManager.h:454
	uint16_t mu16CurrentFrame;

	// CgsPlayerManager.h:455
	uint8_t mu8GameID;

	// CgsPlayerManager.h:457
	bool mbDiskAccessible;

	// CgsPlayerManager.h:458
	bool mbPlayerListIsValid;

	// CgsPlayerManager.h:461
	int32_t miPLAYERManagerSendMessagesPM;

	// CgsPlayerManager.h:462
	extern int32_t miNextPlayerIDPerfmon;

	// CgsPlayerManager.h:463
	extern bool _mbRegisteredPerfmon;

	// CgsPlayerManager.h:467
	CgsNetwork::PlayerManagerDebugComponent mDebugComponent;

	// CgsPlayerManager.h:469
	int32_t miBytesUsedForAcks;

	// CgsPlayerManager.h:470
	int32_t miBytesUsedForUnreliableMessages;

	// CgsPlayerManager.h:471
	int32_t miBytesUsedForReliableMessages;

	// CgsPlayerManager.h:472
	int32_t miBytesUsedForReliableResendMessages;

	// CgsPlayerManager.h:473
	int32_t[41] maMessageBytes;

public:
	// CgsPlayerManager.h:150
	void Construct(PlayerManagerConstructParams *);

	// CgsPlayerManager.h:153
	void Destruct();

	// CgsPlayerManager.h:157
	bool Prepare(PlayerManagerPrepareParams *);

	// CgsPlayerManager.h:160
	bool Release();

	// CgsPlayerManager.h:173
	void Update(const TimerStatus *, uint16_t, bool);

	// CgsPlayerManager.h:177
	void PostUpdate(uint16_t);

	// CgsPlayerManager.h:186
	void AddPlayer(const TimerStatus *, const char *, AggressiveMoveData::NetworkPlayerID, int32_t, CgsSystem::EFrameRate, bool);

	// CgsPlayerManager.h:190
	void RemovePlayer(AggressiveMoveData::NetworkPlayerID);

	// CgsPlayerManager.h:212
	bool GetNextPlayerID(AggressiveMoveData::NetworkPlayerID *, CgsNetwork::PlayerManager::EPlayersToConsider) const;

	// CgsPlayerManager.h:217
	bool GetNextLocalPlayerID(AggressiveMoveData::NetworkPlayerID *) const;

	// CgsPlayerManager.h:222
	bool GetNextRemotePlayerID(AggressiveMoveData::NetworkPlayerID *) const;

	// CgsPlayerManager.h:226
	CgsNetwork::NetworkPlayer * GetPlayerByID(AggressiveMoveData::NetworkPlayerID) const;

	// CgsPlayerManager.h:230
	CgsNetwork::NetworkPlayer * GetPlayerByName(const PlayerName *);

	// CgsPlayerManager.h:234
	CgsNetwork::NetworkPlayer * GetPlayerByName(const char *);

	// CgsPlayerManager.h:238
	CgsNetwork::PlayerMenuData * GetMenuDataByID(AggressiveMoveData::NetworkPlayerID) const;

	// CgsPlayerManager.h:242
	CgsNetwork::PlayerMenuData * GetMenuDataByName(const char *);

	// CgsPlayerManager.h:245
	void SendMessages();

	// CgsPlayerManager.h:248
	void ReceiveMessages();

	// CgsPlayerManager.h:253
	bool AckNeedsSending(AggressiveMoveData::NetworkPlayerID, int32_t) const;

	// CgsPlayerManager.h:258
	bool NackNeedsSending(AggressiveMoveData::NetworkPlayerID, int32_t) const;

	// CgsPlayerManager.h:262
	CgsNetwork::SignalMessage * GetAck(int32_t);

	// CgsPlayerManager.h:266
	CgsNetwork::SignalMessage * GetNack(int32_t);

	// CgsPlayerManager.h:269
	AggressiveMoveData::NetworkPlayerID GetHostPlayerID();

	// CgsPlayerManager.h:273
	void SetHostPlayerID(AggressiveMoveData::NetworkPlayerID);

	// CgsPlayerManager.h:276
	bool AmIHost();

	// CgsPlayerManager.h:281
	int32_t GetTotalNumberPlayers(CgsNetwork::PlayerManager::EPlayersToConsider) const;

	// CgsPlayerManager.h:286
	int32_t GetNumberNetworkPlayers(CgsNetwork::PlayerManager::EPlayersToConsider) const;

	// CgsPlayerManager.h:290
	int32_t GetNumberLocalPlayers() const;

	// CgsPlayerManager.h:294
	void SetGameID(int32_t);

	// CgsPlayerManager.h:297
	uint8_t GetGameID() const;

	// CgsPlayerManager.h:301
	bool PlayerHasAppliedInitialNATData(AggressiveMoveData::NetworkPlayerID);

	// CgsPlayerManager.h:304
	void OnRoundLoadingStart();

	// CgsPlayerManager.h:307
	void OnRoundStart();

	// CgsPlayerManager.h:310
	void OnRoundFinish();

	// CgsPlayerManager.h:314
	void SetPortTestIPAddress(int32_t);

	// CgsPlayerManager.h:318
	void SetDiskAccessible(bool);

	// CgsPlayerManager.h:323
	void SetPlayerIPAddress(AggressiveMoveData::NetworkPlayerID, int32_t);

	// CgsPlayerManager.h:327
	bool CheckForAck(CgsNetwork::Message *);

	// CgsPlayerManager.h:331
	bool CheckForNack(CgsNetwork::Message *);

	// CgsPlayerManager.h:335
	void AcceptMessage(CgsNetwork::Message *);

	// CgsPlayerManager.h:339
	void ThrowAwayMessage(CgsNetwork::Message *);

	// CgsPlayerManager.h:347
	void RegisterEventCallback(void (*)(CgsNetwork::PlayerManager::EEvent, void *, void *), void *);

	// CgsPlayerManager.h:351
	void UnRegisterEventCallback(void (*)(CgsNetwork::PlayerManager::EEvent, void *, void *));

	// CgsPlayerManager.h:354
	void Disconnected();

	// CgsPlayerManager.h:358
	bool IsPlayerFinalised(AggressiveMoveData::NetworkPlayerID) const;

	// CgsPlayerManager.h:364
	bool IsPlayerTurnToSendRoundRobinMessage(AggressiveMoveData::NetworkPlayerID, bool, int32_t);

	// CgsPlayerManager.h:367
	bool IsLocalPlayer(AggressiveMoveData::NetworkPlayerID) const;

	// CgsPlayerManager.h:371
	void OnLobbyApiCreated();

	// CgsPlayerManager.h:375
	int32_t GetNumBufferedReliableMessages();

	// CgsPlayerManager.h:379
	uint32_t GetTotalBytesSent();

	// CgsPlayerManager.h:382
	uint32_t GetTotalBytesSentWithOverhead();

	// CgsPlayerManager.h:385
	uint32_t GetTotalBytesSentToDirtySock();

private:
	// CgsPlayerManager.h:478
	void ResetAllBandwidthCounters();

	// CgsPlayerManager.h:484
	PlayerData * AssignActiveLocalPlayer(int32_t);

	// CgsPlayerManager.h:489
	PlayerData * AssignActiveNetworkPlayer(int32_t);

	// CgsPlayerManager.h:493
	void ReleasePlayer(int32_t);

	// CgsPlayerManager.h:496
	void ResetEventCallbacks();

	// CgsPlayerManager.h:501
	void BroadcastEvent(CgsNetwork::PlayerManager::EEvent, void *);

	// CgsPlayerManager.h:505
	bool AreAnyPlayersConnected() const;

	// CgsPlayerManager.h:512
	void ConnectionFinalisedCallback(bool, AggressiveMoveData::NetworkPlayerID, CgsNetwork::PlayersConnectionManager::ConnectionDataEntry::ConnectionData, void *);

	// CgsPlayerManager.h:518
	void PlayerDisconnectedCallback(AggressiveMoveData::NetworkPlayerID, void *);

}

// CgsBitStream.h:26
namespace CgsNetwork {
	// Declaration
	struct PlayerManager {
		// CgsPlayerManager.h:125
		enum EEvent {
			E_EVENT_PLAYER_ADDED = 0,
			E_EVENT_START_PLAYER_REMOVAL = 1,
			E_EVENT_END_PLAYER_REMOVAL = 2,
			E_EVENT_PLAYER_FINALISED = 3,
			E_EVENT_PLAYER_LOST_CONTACT = 4,
			E_EVENT_PLAYER_REGAINED_CONTACT = 5,
			E_EVENT_PLAYER_DISCONNECTED = 6,
			E_EVENT_COUNT = 7,
		}

		// CgsPlayerManager.h:138
		enum EPlayersToConsider {
			E_CONSIDER_PLAYERS_WHO_HAVE_FINALISED = 0,
			E_CONSIDER_ALL_PLAYERS = 1,
			E_CONSIDER_PLAYERS_COUNT = 2,
		}

		// CgsPlayerManager.h:389
		enum EPrepareState {
			E_CONSTRUCTED = 0,
			E_RELEASED = 1,
			E_PREPARING_CONNECTION_MANAGER = 2,
			E_PREPARING_RELIABLE_MESSAGE_MANAGER = 3,
			E_FULLY_PREPARED = 4,
			E_PREPARING_COUNT = 5,
		}

		// CgsPlayerManager.h:409
		struct EventCallback {
			// CgsPlayerManager.h:412
			void (*)(CgsNetwork::PlayerManager::EEvent, void *, void *) mCallback;

			// CgsPlayerManager.h:413
			void * mpUserData;

		}

	}

	// CgsPlayerManager.h:59
	const int32_t KI_MAX_ACKS_TO_BUFFER = 10;

	// CgsPlayerManager.h:60
	const int32_t KI_MAX_NACKS_TO_BUFFER = 10;

	// CgsPlayerManager.h:63
	const int32_t KI_FRAME_GAP_BETWEEN_ROUND_ROBIN = 3;

	// CgsPlayerManager.h:64
	const int32_t KI_FRAME_GAP_BETWEEN_ROUND_ROBIN_IN_GAME = 1;

}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// Declaration
	struct PlayerManager {
		// CgsPlayerManager.h:125
		enum EEvent {
			E_EVENT_PLAYER_ADDED = 0,
			E_EVENT_START_PLAYER_REMOVAL = 1,
			E_EVENT_END_PLAYER_REMOVAL = 2,
			E_EVENT_PLAYER_FINALISED = 3,
			E_EVENT_PLAYER_LOST_CONTACT = 4,
			E_EVENT_PLAYER_REGAINED_CONTACT = 5,
			E_EVENT_PLAYER_DISCONNECTED = 6,
			E_EVENT_COUNT = 7,
		}

		// CgsPlayerManager.h:138
		enum EPlayersToConsider {
			E_CONSIDER_PLAYERS_WHO_HAVE_FINALISED = 0,
			E_CONSIDER_ALL_PLAYERS = 1,
			E_CONSIDER_PLAYERS_COUNT = 2,
		}

		// CgsPlayerManager.h:389
		enum EPrepareState {
			E_CONSTRUCTED = 0,
			E_RELEASED = 1,
			E_PREPARING_CONNECTION_MANAGER = 2,
			E_PREPARING_RELIABLE_MESSAGE_MANAGER = 3,
			E_FULLY_PREPARED = 4,
			E_PREPARING_COUNT = 5,
		}

		// CgsPlayerManager.h:409
		struct EventCallback {
			// CgsPlayerManager.h:412
			void (*)(CgsNetwork::PlayerManager::EEvent, void *, void *) mCallback;

			// CgsPlayerManager.h:413
			void * mpUserData;

		}

	}

	// CgsPlayerManager.h:59
	const int32_t KI_MAX_ACKS_TO_BUFFER = 10;

	// CgsPlayerManager.h:60
	const int32_t KI_MAX_NACKS_TO_BUFFER = 10;

	// CgsPlayerManager.h:63
	const int32_t KI_FRAME_GAP_BETWEEN_ROUND_ROBIN = 3;

	// CgsPlayerManager.h:64
	const int32_t KI_FRAME_GAP_BETWEEN_ROUND_ROBIN_IN_GAME = 1;

}

// CgsPlayerManager.h:122
struct CgsNetwork::PlayerManager {
	// CgsPlayerManager.h:341
	PlayersConnectionManager mConnectionManager;

	// CgsPlayerManager.h:342
	ReliableMessageManager mReliableMessageManager;

private:
	// CgsPlayerManager.h:416
	extern const int32_t KI_NUM_EVENT_CALLBACKS = 1;

	// CgsPlayerManager.h:418
	CgsNetwork::SignalMessage[10] maAckMessage;

	// CgsPlayerManager.h:419
	CgsNetwork::SignalMessage[10] maNackMessage;

	// CgsPlayerManager.h:421
	PlayerData[8] maInactivePlayers;

	// CgsPlayerManager.h:422
	PlayerData[8] maActivePlayers;

	// CgsPlayerManager.h:424
	CgsNetwork::PlayerManager::EventCallback[1] maEventCallbacks;

	// CgsPlayerManager.h:425
	int32_t miNumEventCallbacks;

	// CgsPlayerManager.h:427
	extern int32_t mnNumMessagesArrivedThisFrame;

	// CgsPlayerManager.h:429
	CgsNetwork::PlayerManager::EPrepareState mePrepareState;

	// CgsPlayerManager.h:432
	int32_t miNumActivePlayers;

	// CgsPlayerManager.h:433
	int32_t miNumInactivePlayers;

	// CgsPlayerManager.h:435
	CgsNetwork::ServerInterface * mpServerInterface;

	// CgsPlayerManager.h:436
	NetworkAdapter * mpNetworkAdapter;

	// CgsPlayerManager.h:437
	CgsNetwork::TimeManager * mpTimeManager;

	// CgsPlayerManager.h:438
	CgsSystem::EFrameRate meLocalConsoleFrameRate;

	// CgsPlayerManager.h:440
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID mHostPlayerID;

	// CgsPlayerManager.h:445
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID mLocalPlayerID;

	// CgsPlayerManager.h:448
	PlayerManagerPrepareParams::OnReceivedFromWrongIPCallback * mpfOnReceivedFromWrongIPCallback;

	// CgsPlayerManager.h:451
	PlayersConnectionManager::ConnMgrConnectionFinalisedCallback mpfConnectionFinalisedCallback;

	// CgsPlayerManager.h:452
	void * mpConnectionFinalisedUserData;

	// CgsPlayerManager.h:454
	uint16_t mu16CurrentFrame;

	// CgsPlayerManager.h:455
	uint8_t mu8GameID;

	// CgsPlayerManager.h:457
	bool mbDiskAccessible;

	// CgsPlayerManager.h:458
	bool mbPlayerListIsValid;

	// CgsPlayerManager.h:461
	int32_t miPLAYERManagerSendMessagesPM;

	// CgsPlayerManager.h:462
	extern int32_t miNextPlayerIDPerfmon;

	// CgsPlayerManager.h:463
	extern bool _mbRegisteredPerfmon;

	// CgsPlayerManager.h:467
	CgsNetwork::PlayerManagerDebugComponent mDebugComponent;

	// CgsPlayerManager.h:469
	int32_t miBytesUsedForAcks;

	// CgsPlayerManager.h:470
	int32_t miBytesUsedForUnreliableMessages;

	// CgsPlayerManager.h:471
	int32_t miBytesUsedForReliableMessages;

	// CgsPlayerManager.h:472
	int32_t miBytesUsedForReliableResendMessages;

	// CgsPlayerManager.h:473
	int32_t[41] maMessageBytes;

public:
	// CgsPlayerManager.h:150
	void Construct(PlayerManagerConstructParams *);

	// CgsPlayerManager.h:153
	void Destruct();

	// CgsPlayerManager.h:157
	bool Prepare(PlayerManagerPrepareParams *);

	// CgsPlayerManager.h:160
	bool Release();

	// CgsPlayerManager.h:173
	void Update(const TimerStatus *, uint16_t, bool);

	// CgsPlayerManager.h:177
	void PostUpdate(uint16_t);

	// CgsPlayerManager.h:186
	// Declaration
	void AddPlayer(const TimerStatus *, const char *, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, int32_t, CgsSystem::EFrameRate, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPlayerManager.cpp:1299
		using namespace CgsDev::Message;

	}

	// CgsPlayerManager.h:190
	void RemovePlayer(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

	// CgsPlayerManager.h:212
	bool GetNextPlayerID(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID *, CgsNetwork::PlayerManager::EPlayersToConsider) const;

	// CgsPlayerManager.h:217
	bool GetNextLocalPlayerID(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID *) const;

	// CgsPlayerManager.h:222
	bool GetNextRemotePlayerID(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID *) const;

	// CgsPlayerManager.h:226
	CgsNetwork::NetworkPlayer * GetPlayerByID(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID) const;

	// CgsPlayerManager.h:230
	CgsNetwork::NetworkPlayer * GetPlayerByName(const PlayerName *);

	// CgsPlayerManager.h:234
	CgsNetwork::NetworkPlayer * GetPlayerByName(const char *);

	// CgsPlayerManager.h:238
	CgsNetwork::PlayerMenuData * GetMenuDataByID(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID) const;

	// CgsPlayerManager.h:242
	CgsNetwork::PlayerMenuData * GetMenuDataByName(const char *);

	// CgsPlayerManager.h:245
	void SendMessages();

	// CgsPlayerManager.h:248
	// Declaration
	void ReceiveMessages() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPlayerManager.cpp:777
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:844
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:845
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:846
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:847
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:848
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:849
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:850
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:853
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:855
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:856
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:858
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:863
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:864
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:865
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:866
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:872
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:879
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:882
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:883
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:884
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:885
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:886
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:887
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:888
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:889
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:890
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:891
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:892
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:896
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:899
		using namespace CgsDev::Message;

	}

	// CgsPlayerManager.h:253
	bool AckNeedsSending(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, int32_t) const;

	// CgsPlayerManager.h:258
	bool NackNeedsSending(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, int32_t) const;

	// CgsPlayerManager.h:262
	CgsNetwork::SignalMessage * GetAck(int32_t);

	// CgsPlayerManager.h:266
	CgsNetwork::SignalMessage * GetNack(int32_t);

	// CgsPlayerManager.h:269
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID GetHostPlayerID();

	// CgsPlayerManager.h:273
	void SetHostPlayerID(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

	// CgsPlayerManager.h:276
	bool AmIHost();

	// CgsPlayerManager.h:281
	int32_t GetTotalNumberPlayers(CgsNetwork::PlayerManager::EPlayersToConsider) const;

	// CgsPlayerManager.h:286
	int32_t GetNumberNetworkPlayers(CgsNetwork::PlayerManager::EPlayersToConsider) const;

	// CgsPlayerManager.h:290
	int32_t GetNumberLocalPlayers() const;

	// CgsPlayerManager.h:294
	void SetGameID(int32_t);

	// CgsPlayerManager.h:297
	uint8_t GetGameID() const;

	// CgsPlayerManager.h:301
	bool PlayerHasAppliedInitialNATData(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

	// CgsPlayerManager.h:304
	void OnRoundLoadingStart();

	// CgsPlayerManager.h:307
	void OnRoundStart();

	// CgsPlayerManager.h:310
	void OnRoundFinish();

	// CgsPlayerManager.h:314
	void SetPortTestIPAddress(int32_t);

	// CgsPlayerManager.h:318
	void SetDiskAccessible(bool);

	// CgsPlayerManager.h:323
	void SetPlayerIPAddress(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, int32_t);

	// CgsPlayerManager.h:327
	bool CheckForAck(CgsNetwork::Message *);

	// CgsPlayerManager.h:331
	// Declaration
	bool CheckForNack(CgsNetwork::Message *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPlayerManager.cpp:1117
		using namespace CgsDev::Message;

	}

	// CgsPlayerManager.h:335
	// Declaration
	void AcceptMessage(CgsNetwork::Message *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPlayerManager.cpp:966
		using namespace CgsDev::Message;

	}

	// CgsPlayerManager.h:339
	// Declaration
	void ThrowAwayMessage(CgsNetwork::Message *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPlayerManager.cpp:1029
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:1043
		using namespace CgsDev::Message;

		// CgsPlayerManager.cpp:1046
		using namespace CgsDev::Message;

	}

	// CgsPlayerManager.h:347
	void RegisterEventCallback(void (*)(CgsNetwork::PlayerManager::EEvent, void *, void *), void *);

	// CgsPlayerManager.h:351
	void UnRegisterEventCallback(void (*)(CgsNetwork::PlayerManager::EEvent, void *, void *));

	// CgsPlayerManager.h:354
	void Disconnected();

	// CgsPlayerManager.h:358
	bool IsPlayerFinalised(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID) const;

	// CgsPlayerManager.h:364
	bool IsPlayerTurnToSendRoundRobinMessage(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, bool, int32_t);

	// CgsPlayerManager.h:367
	bool IsLocalPlayer(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID) const;

	// CgsPlayerManager.h:371
	void OnLobbyApiCreated();

	// CgsPlayerManager.h:375
	int32_t GetNumBufferedReliableMessages();

	// CgsPlayerManager.h:379
	uint32_t GetTotalBytesSent();

	// CgsPlayerManager.h:382
	uint32_t GetTotalBytesSentWithOverhead();

	// CgsPlayerManager.h:385
	uint32_t GetTotalBytesSentToDirtySock();

private:
	// CgsPlayerManager.h:478
	void ResetAllBandwidthCounters();

	// CgsPlayerManager.h:484
	PlayerData * AssignActiveLocalPlayer(int32_t);

	// CgsPlayerManager.h:489
	PlayerData * AssignActiveNetworkPlayer(int32_t);

	// CgsPlayerManager.h:493
	void ReleasePlayer(int32_t);

	// CgsPlayerManager.h:496
	void ResetEventCallbacks();

	// CgsPlayerManager.h:501
	void BroadcastEvent(CgsNetwork::PlayerManager::EEvent, void *);

	// CgsPlayerManager.h:505
	bool AreAnyPlayersConnected() const;

	// CgsPlayerManager.h:512
	void ConnectionFinalisedCallback(bool, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData, void *);

	// CgsPlayerManager.h:518
	void PlayerDisconnectedCallback(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, void *);

}

