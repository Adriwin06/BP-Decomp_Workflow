// CgsHostMigrationManager.h:55
struct CgsNetwork::HostMigrationNetworkPlayerData {
	// CgsHostMigrationManager.h:56
	RoadRulesRecvData::NetworkPlayerID mOwnerPlayer;

	// CgsHostMigrationManager.h:58
	CgsNetwork::HostKeepAliveMessage mHostKeepAliveMessageSend;

	// CgsHostMigrationManager.h:59
	CgsNetwork::HostKeepAliveMessage mHostKeepAliveMessageRecv;

	// CgsHostMigrationManager.h:61
	CgsNetwork::NewHostMessage mNewHostMessageSend;

	// CgsHostMigrationManager.h:62
	CgsNetwork::NewHostMessage mNewHostMessageRecv;

}

// CgsHostMigrationManager.h:66
struct CgsNetwork::HostMigrationManager {
private:
	// CgsHostMigrationManager.h:138
	extern const int32_t KI_MAX_HOST_MIGRATION_CALLBACKS = 2;

	// CgsHostMigrationManager.h:140
	HostMigrationNetworkPlayerData[7] maMessageData;

	// CgsHostMigrationManager.h:142
	RoadRulesRecvData::NetworkPlayerID mHostPlayerID;

	// CgsHostMigrationManager.h:143
	RoadRulesRecvData::NetworkPlayerID[8] maHostMigrationPlayerIDs;

	// CgsHostMigrationManager.h:145
	uint16_t mu16LastHostKeepAliveSendTime;

	// CgsHostMigrationManager.h:146
	uint16_t mu16LastHostKeepAliveReceivedTime;

	// Unknown accessibility
	// CgsHostMigrationManager.h:52
	typedef void (const TimerStatus *, RoadRulesRecvData::NetworkPlayerID, RoadRulesRecvData::NetworkPlayerID, void *) HostMigrationCallback;

	// CgsHostMigrationManager.h:148
	HostMigrationManager::HostMigrationCallback *[2] mapHostMigrationCallback;

	// CgsHostMigrationManager.h:149
	void *[2] mapHostMigrationCallbackData;

	// CgsHostMigrationManager.h:151
	CgsNetwork::PlayerManager * mpPlayerManager;

	// CgsHostMigrationManager.h:154
	uint16_t mu16HostKeepAliveSendTimeout;

	// CgsHostMigrationManager.h:155
	uint16_t mu16HostKeepAliveTimeout;

	// CgsHostMigrationManager.h:156
	uint16_t mu16HostKeepAliveInitialTimeout;

	// CgsHostMigrationManager.h:157
	CgsSystem::EFrameRate meFrameRate;

	// CgsHostMigrationManager.h:222
	CgsNetwork::HostMigrationDebugComponent mHostMigrationDebugComponent;

public:
	// CgsHostMigrationManager.h:70
	void Construct();

	// CgsHostMigrationManager.h:76
	bool Prepare(CgsNetwork::PlayerManager *, CgsSystem::EFrameRate, uint16_t);

	// CgsHostMigrationManager.h:81
	void Update(const TimerStatus *, uint16_t);

	// CgsHostMigrationManager.h:84
	bool Release();

	// CgsHostMigrationManager.h:87
	void Destruct();

	// CgsHostMigrationManager.h:90
	RoadRulesRecvData::NetworkPlayerID GetHostPlayerID();

	// CgsHostMigrationManager.h:97
	void Enable(RoadRulesRecvData::NetworkPlayerID, const TimerStatus *, uint16_t);

	// CgsHostMigrationManager.h:103
	void Disable(RoadRulesRecvData::NetworkPlayerID, const TimerStatus *, uint16_t);

	// CgsHostMigrationManager.h:107
	void AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// CgsHostMigrationManager.h:111
	void RemovePlayer(RoadRulesRecvData::NetworkPlayerID);

	// CgsHostMigrationManager.h:114
	void Disconnected();

	// CgsHostMigrationManager.h:120
	void RegisterHostMigrationCallback(HostMigrationManager::HostMigrationCallback *, void *);

	// CgsHostMigrationManager.h:124
	void UnregisterHostMigrationCallback(HostMigrationManager::HostMigrationCallback *);

	// CgsHostMigrationManager.h:130
	bool ABecomesHostBeforeB(RoadRulesRecvData::NetworkPlayerID, RoadRulesRecvData::NetworkPlayerID);

	// CgsHostMigrationManager.h:135
	int32_t QSortCallback(const void *, const void *);

private:
	// CgsHostMigrationManager.h:160
	void SetFrameRate(CgsSystem::EFrameRate);

	// CgsHostMigrationManager.h:164
	void RegisterMessages(RoadRulesRecvData::NetworkPlayerID);

	// CgsHostMigrationManager.h:167
	void UnregisterMessages();

	// CgsHostMigrationManager.h:171
	void UnregisterMessages(RoadRulesRecvData::NetworkPlayerID);

	// CgsHostMigrationManager.h:174
	bool IsHostAlive(uint16_t);

	// CgsHostMigrationManager.h:177
	void UpdateSendingOfHostKeepAliveMessage(uint16_t);

	// CgsHostMigrationManager.h:183
	void SetNewHost(RoadRulesRecvData::NetworkPlayerID, const TimerStatus *, uint16_t);

	// CgsHostMigrationManager.h:190
	void SendNewHostMessage(CgsNetwork::NetworkPlayer *, uint16_t, RoadRulesRecvData::NetworkPlayerID, RoadRulesRecvData::NetworkPlayerID *);

	// CgsHostMigrationManager.h:195
	void SendHostKeepAliveMessage(CgsNetwork::NetworkPlayer *, uint16_t);

	// CgsHostMigrationManager.h:199
	void InitialiseHostKeepAliveReceivedTime(uint16_t);

	// CgsHostMigrationManager.h:205
	void FindBestHostIDs(RoadRulesRecvData::NetworkPlayerID *, RoadRulesRecvData::NetworkPlayerID *, RoadRulesRecvData::NetworkPlayerID *);

	// CgsHostMigrationManager.h:211
	void SendNewHostMessageIfRequired(uint16_t, RoadRulesRecvData::NetworkPlayerID, RoadRulesRecvData::NetworkPlayerID *);

	// CgsHostMigrationManager.h:216
	void FindNextHostAndSend(const TimerStatus *, uint16_t);

	// CgsHostMigrationManager.h:219
	void ClearAllCallbacks();

}

// CgsHostMigrationManager.h:138
extern const int32_t KI_MAX_HOST_MIGRATION_CALLBACKS = 2;

// CgsHostMigrationManager.h:55
struct CgsNetwork::HostMigrationNetworkPlayerData {
	// CgsHostMigrationManager.h:56
	GuiEventNetworkLaunching::NetworkPlayerID mOwnerPlayer;

	// CgsHostMigrationManager.h:58
	CgsNetwork::HostKeepAliveMessage mHostKeepAliveMessageSend;

	// CgsHostMigrationManager.h:59
	CgsNetwork::HostKeepAliveMessage mHostKeepAliveMessageRecv;

	// CgsHostMigrationManager.h:61
	CgsNetwork::NewHostMessage mNewHostMessageSend;

	// CgsHostMigrationManager.h:62
	CgsNetwork::NewHostMessage mNewHostMessageRecv;

}

// CgsHostMigrationManager.h:66
struct CgsNetwork::HostMigrationManager {
private:
	// CgsHostMigrationManager.h:138
	extern const int32_t KI_MAX_HOST_MIGRATION_CALLBACKS = 2;

	// CgsHostMigrationManager.h:140
	HostMigrationNetworkPlayerData[7] maMessageData;

	// CgsHostMigrationManager.h:142
	GuiEventNetworkLaunching::NetworkPlayerID mHostPlayerID;

	// CgsHostMigrationManager.h:143
	GuiEventNetworkLaunching::NetworkPlayerID[8] maHostMigrationPlayerIDs;

	// CgsHostMigrationManager.h:145
	uint16_t mu16LastHostKeepAliveSendTime;

	// CgsHostMigrationManager.h:146
	uint16_t mu16LastHostKeepAliveReceivedTime;

	// Unknown accessibility
	// CgsHostMigrationManager.h:52
	typedef void (const TimerStatus *, GuiEventNetworkLaunching::NetworkPlayerID, GuiEventNetworkLaunching::NetworkPlayerID, void *) HostMigrationCallback;

	// CgsHostMigrationManager.h:148
	HostMigrationManager::HostMigrationCallback *[2] mapHostMigrationCallback;

	// CgsHostMigrationManager.h:149
	void *[2] mapHostMigrationCallbackData;

	// CgsHostMigrationManager.h:151
	CgsNetwork::PlayerManager * mpPlayerManager;

	// CgsHostMigrationManager.h:154
	uint16_t mu16HostKeepAliveSendTimeout;

	// CgsHostMigrationManager.h:155
	uint16_t mu16HostKeepAliveTimeout;

	// CgsHostMigrationManager.h:156
	uint16_t mu16HostKeepAliveInitialTimeout;

	// CgsHostMigrationManager.h:157
	CgsSystem::EFrameRate meFrameRate;

	// CgsHostMigrationManager.h:222
	CgsNetwork::HostMigrationDebugComponent mHostMigrationDebugComponent;

public:
	// CgsHostMigrationManager.h:70
	void Construct();

	// CgsHostMigrationManager.h:76
	bool Prepare(CgsNetwork::PlayerManager *, CgsSystem::EFrameRate, uint16_t);

	// CgsHostMigrationManager.h:81
	void Update(const TimerStatus *, uint16_t);

	// CgsHostMigrationManager.h:84
	bool Release();

	// CgsHostMigrationManager.h:87
	void Destruct();

	// CgsHostMigrationManager.h:90
	GuiEventNetworkLaunching::NetworkPlayerID GetHostPlayerID();

	// CgsHostMigrationManager.h:97
	void Enable(GuiEventNetworkLaunching::NetworkPlayerID, const TimerStatus *, uint16_t);

	// CgsHostMigrationManager.h:103
	void Disable(GuiEventNetworkLaunching::NetworkPlayerID, const TimerStatus *, uint16_t);

	// CgsHostMigrationManager.h:107
	void AddPlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsHostMigrationManager.h:111
	void RemovePlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsHostMigrationManager.h:114
	void Disconnected();

	// CgsHostMigrationManager.h:120
	void RegisterHostMigrationCallback(HostMigrationManager::HostMigrationCallback *, void *);

	// CgsHostMigrationManager.h:124
	void UnregisterHostMigrationCallback(HostMigrationManager::HostMigrationCallback *);

	// CgsHostMigrationManager.h:130
	bool ABecomesHostBeforeB(GuiEventNetworkLaunching::NetworkPlayerID, GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsHostMigrationManager.h:135
	int32_t QSortCallback(const void *, const void *);

private:
	// CgsHostMigrationManager.h:160
	void SetFrameRate(CgsSystem::EFrameRate);

	// CgsHostMigrationManager.h:164
	void RegisterMessages(GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsHostMigrationManager.h:167
	void UnregisterMessages();

	// CgsHostMigrationManager.h:171
	void UnregisterMessages(GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsHostMigrationManager.h:174
	bool IsHostAlive(uint16_t);

	// CgsHostMigrationManager.h:177
	void UpdateSendingOfHostKeepAliveMessage(uint16_t);

	// CgsHostMigrationManager.h:183
	void SetNewHost(GuiEventNetworkLaunching::NetworkPlayerID, const TimerStatus *, uint16_t);

	// CgsHostMigrationManager.h:190
	void SendNewHostMessage(CgsNetwork::NetworkPlayer *, uint16_t, GuiEventNetworkLaunching::NetworkPlayerID, GuiEventNetworkLaunching::NetworkPlayerID *);

	// CgsHostMigrationManager.h:195
	void SendHostKeepAliveMessage(CgsNetwork::NetworkPlayer *, uint16_t);

	// CgsHostMigrationManager.h:199
	void InitialiseHostKeepAliveReceivedTime(uint16_t);

	// CgsHostMigrationManager.h:205
	void FindBestHostIDs(GuiEventNetworkLaunching::NetworkPlayerID *, GuiEventNetworkLaunching::NetworkPlayerID *, GuiEventNetworkLaunching::NetworkPlayerID *);

	// CgsHostMigrationManager.h:211
	void SendNewHostMessageIfRequired(uint16_t, GuiEventNetworkLaunching::NetworkPlayerID, GuiEventNetworkLaunching::NetworkPlayerID *);

	// CgsHostMigrationManager.h:216
	void FindNextHostAndSend(const TimerStatus *, uint16_t);

	// CgsHostMigrationManager.h:219
	void ClearAllCallbacks();

}

// CgsHostMigrationManager.h:55
struct CgsNetwork::HostMigrationNetworkPlayerData {
	// CgsHostMigrationManager.h:56
	AggressiveMoveData::NetworkPlayerID mOwnerPlayer;

	// CgsHostMigrationManager.h:58
	CgsNetwork::HostKeepAliveMessage mHostKeepAliveMessageSend;

	// CgsHostMigrationManager.h:59
	CgsNetwork::HostKeepAliveMessage mHostKeepAliveMessageRecv;

	// CgsHostMigrationManager.h:61
	CgsNetwork::NewHostMessage mNewHostMessageSend;

	// CgsHostMigrationManager.h:62
	CgsNetwork::NewHostMessage mNewHostMessageRecv;

}

// CgsHostMigrationManager.h:66
struct CgsNetwork::HostMigrationManager {
private:
	// CgsHostMigrationManager.h:138
	extern const int32_t KI_MAX_HOST_MIGRATION_CALLBACKS = 2;

	// CgsHostMigrationManager.h:140
	HostMigrationNetworkPlayerData[7] maMessageData;

	// CgsHostMigrationManager.h:142
	AggressiveMoveData::NetworkPlayerID mHostPlayerID;

	// CgsHostMigrationManager.h:143
	AggressiveMoveData::NetworkPlayerID[8] maHostMigrationPlayerIDs;

	// CgsHostMigrationManager.h:145
	uint16_t mu16LastHostKeepAliveSendTime;

	// CgsHostMigrationManager.h:146
	uint16_t mu16LastHostKeepAliveReceivedTime;

	// Unknown accessibility
	// CgsHostMigrationManager.h:52
	typedef void (const TimerStatus *, AggressiveMoveData::NetworkPlayerID, AggressiveMoveData::NetworkPlayerID, void *) HostMigrationCallback;

	// CgsHostMigrationManager.h:148
	HostMigrationManager::HostMigrationCallback *[2] mapHostMigrationCallback;

	// CgsHostMigrationManager.h:149
	void *[2] mapHostMigrationCallbackData;

	// CgsHostMigrationManager.h:151
	CgsNetwork::PlayerManager * mpPlayerManager;

	// CgsHostMigrationManager.h:154
	uint16_t mu16HostKeepAliveSendTimeout;

	// CgsHostMigrationManager.h:155
	uint16_t mu16HostKeepAliveTimeout;

	// CgsHostMigrationManager.h:156
	uint16_t mu16HostKeepAliveInitialTimeout;

	// CgsHostMigrationManager.h:157
	CgsSystem::EFrameRate meFrameRate;

	// CgsHostMigrationManager.h:222
	CgsNetwork::HostMigrationDebugComponent mHostMigrationDebugComponent;

public:
	// CgsHostMigrationManager.h:70
	void Construct();

	// CgsHostMigrationManager.h:76
	bool Prepare(CgsNetwork::PlayerManager *, CgsSystem::EFrameRate, uint16_t);

	// CgsHostMigrationManager.h:81
	void Update(const TimerStatus *, uint16_t);

	// CgsHostMigrationManager.h:84
	bool Release();

	// CgsHostMigrationManager.h:87
	void Destruct();

	// CgsHostMigrationManager.h:90
	AggressiveMoveData::NetworkPlayerID GetHostPlayerID();

	// CgsHostMigrationManager.h:97
	void Enable(AggressiveMoveData::NetworkPlayerID, const TimerStatus *, uint16_t);

	// CgsHostMigrationManager.h:103
	void Disable(AggressiveMoveData::NetworkPlayerID, const TimerStatus *, uint16_t);

	// CgsHostMigrationManager.h:107
	void AddPlayer(AggressiveMoveData::NetworkPlayerID);

	// CgsHostMigrationManager.h:111
	void RemovePlayer(AggressiveMoveData::NetworkPlayerID);

	// CgsHostMigrationManager.h:114
	void Disconnected();

	// CgsHostMigrationManager.h:120
	void RegisterHostMigrationCallback(HostMigrationManager::HostMigrationCallback *, void *);

	// CgsHostMigrationManager.h:124
	void UnregisterHostMigrationCallback(HostMigrationManager::HostMigrationCallback *);

	// CgsHostMigrationManager.h:130
	bool ABecomesHostBeforeB(AggressiveMoveData::NetworkPlayerID, AggressiveMoveData::NetworkPlayerID);

	// CgsHostMigrationManager.h:135
	int32_t QSortCallback(const void *, const void *);

private:
	// CgsHostMigrationManager.h:160
	void SetFrameRate(CgsSystem::EFrameRate);

	// CgsHostMigrationManager.h:164
	void RegisterMessages(AggressiveMoveData::NetworkPlayerID);

	// CgsHostMigrationManager.h:167
	void UnregisterMessages();

	// CgsHostMigrationManager.h:171
	void UnregisterMessages(AggressiveMoveData::NetworkPlayerID);

	// CgsHostMigrationManager.h:174
	bool IsHostAlive(uint16_t);

	// CgsHostMigrationManager.h:177
	void UpdateSendingOfHostKeepAliveMessage(uint16_t);

	// CgsHostMigrationManager.h:183
	void SetNewHost(AggressiveMoveData::NetworkPlayerID, const TimerStatus *, uint16_t);

	// CgsHostMigrationManager.h:190
	void SendNewHostMessage(CgsNetwork::NetworkPlayer *, uint16_t, AggressiveMoveData::NetworkPlayerID, AggressiveMoveData::NetworkPlayerID *);

	// CgsHostMigrationManager.h:195
	void SendHostKeepAliveMessage(CgsNetwork::NetworkPlayer *, uint16_t);

	// CgsHostMigrationManager.h:199
	void InitialiseHostKeepAliveReceivedTime(uint16_t);

	// CgsHostMigrationManager.h:205
	void FindBestHostIDs(AggressiveMoveData::NetworkPlayerID *, AggressiveMoveData::NetworkPlayerID *, AggressiveMoveData::NetworkPlayerID *);

	// CgsHostMigrationManager.h:211
	void SendNewHostMessageIfRequired(uint16_t, AggressiveMoveData::NetworkPlayerID, AggressiveMoveData::NetworkPlayerID *);

	// CgsHostMigrationManager.h:216
	void FindNextHostAndSend(const TimerStatus *, uint16_t);

	// CgsHostMigrationManager.h:219
	void ClearAllCallbacks();

}

// CgsHostMigrationManager.h:55
struct CgsNetwork::HostMigrationNetworkPlayerData {
	// CgsHostMigrationManager.h:56
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID mOwnerPlayer;

	// CgsHostMigrationManager.h:58
	CgsNetwork::HostKeepAliveMessage mHostKeepAliveMessageSend;

	// CgsHostMigrationManager.h:59
	CgsNetwork::HostKeepAliveMessage mHostKeepAliveMessageRecv;

	// CgsHostMigrationManager.h:61
	CgsNetwork::NewHostMessage mNewHostMessageSend;

	// CgsHostMigrationManager.h:62
	CgsNetwork::NewHostMessage mNewHostMessageRecv;

}

// CgsHostMigrationManager.h:66
struct CgsNetwork::HostMigrationManager {
private:
	// CgsHostMigrationManager.h:138
	extern const int32_t KI_MAX_HOST_MIGRATION_CALLBACKS = 2;

	// CgsHostMigrationManager.h:140
	HostMigrationNetworkPlayerData[7] maMessageData;

	// CgsHostMigrationManager.h:142
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID mHostPlayerID;

	// CgsHostMigrationManager.h:143
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID[8] maHostMigrationPlayerIDs;

	// CgsHostMigrationManager.h:145
	uint16_t mu16LastHostKeepAliveSendTime;

	// CgsHostMigrationManager.h:146
	uint16_t mu16LastHostKeepAliveReceivedTime;

	// Unknown accessibility
	// CgsHostMigrationManager.h:52
	typedef void (const TimerStatus *, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, void *) HostMigrationCallback;

	// CgsHostMigrationManager.h:148
	HostMigrationManager::HostMigrationCallback *[2] mapHostMigrationCallback;

	// CgsHostMigrationManager.h:149
	void *[2] mapHostMigrationCallbackData;

	// CgsHostMigrationManager.h:151
	CgsNetwork::PlayerManager * mpPlayerManager;

	// CgsHostMigrationManager.h:154
	uint16_t mu16HostKeepAliveSendTimeout;

	// CgsHostMigrationManager.h:155
	uint16_t mu16HostKeepAliveTimeout;

	// CgsHostMigrationManager.h:156
	uint16_t mu16HostKeepAliveInitialTimeout;

	// CgsHostMigrationManager.h:157
	CgsSystem::EFrameRate meFrameRate;

	// CgsHostMigrationManager.h:222
	CgsNetwork::HostMigrationDebugComponent mHostMigrationDebugComponent;

public:
	// CgsHostMigrationManager.h:70
	void Construct();

	// CgsHostMigrationManager.h:76
	bool Prepare(CgsNetwork::PlayerManager *, CgsSystem::EFrameRate, uint16_t);

	// CgsHostMigrationManager.h:81
	// Declaration
	void Update(const TimerStatus *, uint16_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsHostMigrationManager.cpp:692
		using namespace CgsDev::Message;

	}

	// CgsHostMigrationManager.h:84
	bool Release();

	// CgsHostMigrationManager.h:87
	void Destruct();

	// CgsHostMigrationManager.h:90
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID GetHostPlayerID();

	// CgsHostMigrationManager.h:97
	void Enable(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, const TimerStatus *, uint16_t);

	// CgsHostMigrationManager.h:103
	void Disable(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, const TimerStatus *, uint16_t);

	// CgsHostMigrationManager.h:107
	// Declaration
	void AddPlayer(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsHostMigrationManager.cpp:745
		using namespace CgsDev::Message;

	}

	// CgsHostMigrationManager.h:111
	void RemovePlayer(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

	// CgsHostMigrationManager.h:114
	void Disconnected();

	// CgsHostMigrationManager.h:120
	void RegisterHostMigrationCallback(HostMigrationManager::HostMigrationCallback *, void *);

	// CgsHostMigrationManager.h:124
	void UnregisterHostMigrationCallback(HostMigrationManager::HostMigrationCallback *);

	// CgsHostMigrationManager.h:130
	// Declaration
	bool ABecomesHostBeforeB(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsHostMigrationManager.cpp:1203
		using namespace CgsDev::Message;

		// CgsHostMigrationManager.cpp:1204
		using namespace CgsDev::Message;

		// CgsHostMigrationManager.cpp:1205
		using namespace CgsDev::Message;

		// CgsHostMigrationManager.cpp:1208
		using namespace CgsDev::Message;

	}

	// CgsHostMigrationManager.h:135
	int32_t QSortCallback(const void *, const void *);

private:
	// CgsHostMigrationManager.h:160
	void SetFrameRate(CgsSystem::EFrameRate);

	// CgsHostMigrationManager.h:164
	// Declaration
	void RegisterMessages(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsHostMigrationManager.cpp:871
		using namespace CgsDev::Message;

	}

	// CgsHostMigrationManager.h:167
	void UnregisterMessages();

	// CgsHostMigrationManager.h:171
	void UnregisterMessages(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

	// CgsHostMigrationManager.h:174
	bool IsHostAlive(uint16_t);

	// CgsHostMigrationManager.h:177
	void UpdateSendingOfHostKeepAliveMessage(uint16_t);

	// CgsHostMigrationManager.h:183
	void SetNewHost(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, const TimerStatus *, uint16_t);

	// CgsHostMigrationManager.h:190
	void SendNewHostMessage(CgsNetwork::NetworkPlayer *, uint16_t, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID *);

	// CgsHostMigrationManager.h:195
	void SendHostKeepAliveMessage(CgsNetwork::NetworkPlayer *, uint16_t);

	// CgsHostMigrationManager.h:199
	void InitialiseHostKeepAliveReceivedTime(uint16_t);

	// CgsHostMigrationManager.h:205
	void FindBestHostIDs(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID *, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID *, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID *);

	// CgsHostMigrationManager.h:211
	void SendNewHostMessageIfRequired(uint16_t, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID *);

	// CgsHostMigrationManager.h:216
	// Declaration
	void FindNextHostAndSend(const TimerStatus *, uint16_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsHostMigrationManager.cpp:547
		using namespace CgsDev::Message;

		// CgsHostMigrationManager.cpp:554
		using namespace CgsDev::Message;

		// CgsHostMigrationManager.cpp:570
		using namespace CgsDev::Message;

	}

	// CgsHostMigrationManager.h:219
	void ClearAllCallbacks();

}

