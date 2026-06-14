// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsVoIPManagerDirtySock.h:48
	enum ENetworkHeadsetOutputMode {
		E_NETWORK_HEADSET_OUTPUT_MODE_HEADSET = 0,
		E_NETWORK_HEADSET_OUTPUT_MODE_TVSPEAKERS = 1,
		E_NETWORK_HEADSET_OUTPUT_MODE_COUNT = 2,
	}

	// CgsVoIPManagerDirtySock.h:57
	enum EVoIPManagerStatus {
		E_VOIP_MANAGER_STATUS_UNPREPARED = 0,
		E_VOIP_MANAGER_STATUS_READY = 1,
		E_VOIP_MANAGER_STATUS_COUNT = 2,
	}

	// CgsVoIPManagerDirtySock.h:66
	enum ENetworkHeadsetPlayerStatus {
		E_NETWORK_HEADSET_PLAYER_STATUS_NONE = 0,
		E_NETWORK_HEADSET_PLAYER_STATUS_HAS_HEADSET = 1,
		E_NETWORK_HEADSET_PLAYER_STATUS_TALKING = 2,
		E_NETWORK_HEADSET_PLAYER_STATUS_COUNT = 3,
	}

}

// CgsVoIPManagerDirtySock.h:85
struct CgsNetwork::VoIPClient {
	// CgsVoIPManagerDirtySock.h:87
	RoadRulesRecvData::NetworkPlayerID mPlayerID;

	// CgsVoIPManagerDirtySock.h:88
	int32_t miConnectionID;

	// CgsVoIPManagerDirtySock.h:89
	bool mbIsBlocked;

	// CgsVoIPManagerDirtySock.h:90
	CgsNetwork::HeadsetStatusMessage mHeadsetSendMsg;

	// CgsVoIPManagerDirtySock.h:91
	CgsNetwork::HeadsetStatusMessage mHeadsetRecMsg;

}

// CgsVoIPManagerDirtySock.h:103
struct CgsNetwork::VoIPManager {
private:
	// CgsVoIPManagerDirtySock.h:193
	CgsNetwork::DirtySock::VoipRefT * mpVoiceRef;

	// CgsVoIPManagerDirtySock.h:194
	CgsNetwork::PlayerManager * mpPlayerManager;

	// CgsVoIPManagerDirtySock.h:195
	CgsNetwork::TimeManager * mpTimeManager;

	// CgsVoIPManagerDirtySock.h:196
	CgsNetwork::NetworkManager * mpNetworkManager;

	// CgsVoIPManagerDirtySock.h:197
	CgsNetwork::ServerInterface * mpServerInterface;

	// CgsVoIPManagerDirtySock.h:198
	CgsNetwork::BuddyManagerBase * mpBuddyManager;

	// CgsVoIPManagerDirtySock.h:200
	VoIPClient[7] maRegisteredTalkers;

	// CgsVoIPManagerDirtySock.h:201
	int32_t miControllerPort;

	// CgsVoIPManagerDirtySock.h:202
	int32_t miVoipVolumePercent;

	// CgsVoIPManagerDirtySock.h:203
	CgsNetwork::ENetworkHeadsetOutputMode meVoIPOutput;

	// CgsVoIPManagerDirtySock.h:204
	CgsNetwork::EVoIPManagerStatus meStatus;

	// CgsVoIPManagerDirtySock.h:205
	uint8_t mu8HeadsetStatus;

	// CgsVoIPManagerDirtySock.h:206
	bool mbIsVoiceAllowed;

	// CgsVoIPManagerDirtySock.h:207
	bool mbLocalPlayerHasHeadset;

	// CgsVoIPManagerDirtySock.h:208
	bool mbIsLocalPlayerInGame;

	// CgsVoIPManagerDirtySock.h:209
	bool mbIsChatRestricted;

	// CgsVoIPManagerDirtySock.h:210
	bool mbGameIsHandlingHeadsetStatus;

public:
	// CgsVoIPManagerDirtySock.h:109
	void Construct(CgsNetwork::NetworkManager *);

	// CgsVoIPManagerDirtySock.h:118
	bool Prepare(CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *, CgsNetwork::ServerInterface *, CgsNetwork::BuddyManagerBase *, bool);

	// CgsVoIPManagerDirtySock.h:122
	bool Release();

	// CgsVoIPManagerDirtySock.h:126
	void Destruct();

	// CgsVoIPManagerDirtySock.h:131
	void Update(bool);

	// CgsVoIPManagerDirtySock.h:136
	bool AddPlayer(RoadRulesRecvData::NetworkPlayerID);

	// CgsVoIPManagerDirtySock.h:142
	void RemotePlayerFinalised(CgsNetwork::ServerInterface *, RoadRulesRecvData::NetworkPlayerID);

	// CgsVoIPManagerDirtySock.h:148
	bool RemovePlayer(CgsNetwork::ServerInterface *, RoadRulesRecvData::NetworkPlayerID);

	// CgsVoIPManagerDirtySock.h:153
	void SetControllerPort(int32_t);

	// CgsVoIPManagerDirtySock.h:157
	void SetVoipVolume(int32_t);

	// CgsVoIPManagerDirtySock.h:160
	int32_t GetVoipVolume();

	// CgsVoIPManagerDirtySock.h:164
	void SetChatRestricted(bool);

	// CgsVoIPManagerDirtySock.h:170
	void HandleReceivedHeadsetStatus(RoadRulesRecvData::NetworkPlayerID, CgsNetwork::ENetworkHeadsetPlayerStatus);

	// CgsVoIPManagerDirtySock.h:175
	void SetGameSendingHeadsetStatus(bool);

private:
	// CgsVoIPManagerDirtySock.h:214
	void ClearData();

	// CgsVoIPManagerDirtySock.h:218
	void UpdateLocalPlayer();

	// CgsVoIPManagerDirtySock.h:223
	void UpdateHeadsetStatusMessages(bool);

	// CgsVoIPManagerDirtySock.h:228
	void RegisterMessage(RoadRulesRecvData::NetworkPlayerID);

	// CgsVoIPManagerDirtySock.h:233
	void UnregisterMessage(RoadRulesRecvData::NetworkPlayerID);

	// CgsVoIPManagerDirtySock.h:237
	bool DoesLocalPlayerHaveHeadset();

	// CgsVoIPManagerDirtySock.h:241
	uint32_t GetConnectionMask();

	// CgsVoIPManagerDirtySock.h:246
	void SetBroadcastClients(uint32_t);

	// CgsVoIPManagerDirtySock.h:251
	int32_t GetIndexFromID(RoadRulesRecvData::NetworkPlayerID);

	// CgsVoIPManagerDirtySock.h:256
	int32_t GetIndexFromPlayerName(const char *) const;

	// CgsVoIPManagerDirtySock.h:261
	void UpdateConnectionIDsAndSendMask(CgsNetwork::ServerInterface *);

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsVoIPManagerDirtySock.h:66
	enum ENetworkHeadsetPlayerStatus {
		E_NETWORK_HEADSET_PLAYER_STATUS_NONE = 0,
		E_NETWORK_HEADSET_PLAYER_STATUS_HAS_HEADSET = 1,
		E_NETWORK_HEADSET_PLAYER_STATUS_TALKING = 2,
		E_NETWORK_HEADSET_PLAYER_STATUS_COUNT = 3,
	}

}

// CgsVoIPManagerDirtySock.h:85
struct CgsNetwork::VoIPClient {
	// CgsVoIPManagerDirtySock.h:87
	GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

	// CgsVoIPManagerDirtySock.h:88
	int32_t miConnectionID;

	// CgsVoIPManagerDirtySock.h:89
	bool mbIsBlocked;

	// CgsVoIPManagerDirtySock.h:90
	CgsNetwork::HeadsetStatusMessage mHeadsetSendMsg;

	// CgsVoIPManagerDirtySock.h:91
	CgsNetwork::HeadsetStatusMessage mHeadsetRecMsg;

}

// CgsVoIPManagerDirtySock.h:103
struct CgsNetwork::VoIPManager {
private:
	// CgsVoIPManagerDirtySock.h:193
	CgsNetwork::DirtySock::VoipRefT * mpVoiceRef;

	// CgsVoIPManagerDirtySock.h:194
	CgsNetwork::PlayerManager * mpPlayerManager;

	// CgsVoIPManagerDirtySock.h:195
	CgsNetwork::TimeManager * mpTimeManager;

	// CgsVoIPManagerDirtySock.h:196
	CgsNetwork::NetworkManager * mpNetworkManager;

	// CgsVoIPManagerDirtySock.h:197
	CgsNetwork::ServerInterface * mpServerInterface;

	// CgsVoIPManagerDirtySock.h:198
	CgsNetwork::BuddyManagerBase * mpBuddyManager;

	// CgsVoIPManagerDirtySock.h:200
	VoIPClient[7] maRegisteredTalkers;

	// CgsVoIPManagerDirtySock.h:201
	int32_t miControllerPort;

	// CgsVoIPManagerDirtySock.h:202
	int32_t miVoipVolumePercent;

	// CgsVoIPManagerDirtySock.h:203
	CgsNetwork::ENetworkHeadsetOutputMode meVoIPOutput;

	// CgsVoIPManagerDirtySock.h:204
	CgsNetwork::EVoIPManagerStatus meStatus;

	// CgsVoIPManagerDirtySock.h:205
	uint8_t mu8HeadsetStatus;

	// CgsVoIPManagerDirtySock.h:206
	bool mbIsVoiceAllowed;

	// CgsVoIPManagerDirtySock.h:207
	bool mbLocalPlayerHasHeadset;

	// CgsVoIPManagerDirtySock.h:208
	bool mbIsLocalPlayerInGame;

	// CgsVoIPManagerDirtySock.h:209
	bool mbIsChatRestricted;

	// CgsVoIPManagerDirtySock.h:210
	bool mbGameIsHandlingHeadsetStatus;

public:
	// CgsVoIPManagerDirtySock.h:109
	void Construct(CgsNetwork::NetworkManager *);

	// CgsVoIPManagerDirtySock.h:118
	bool Prepare(CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *, CgsNetwork::ServerInterface *, CgsNetwork::BuddyManagerBase *, bool);

	// CgsVoIPManagerDirtySock.h:122
	bool Release();

	// CgsVoIPManagerDirtySock.h:126
	void Destruct();

	// CgsVoIPManagerDirtySock.h:131
	void Update(bool);

	// CgsVoIPManagerDirtySock.h:136
	bool AddPlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsVoIPManagerDirtySock.h:142
	void RemotePlayerFinalised(CgsNetwork::ServerInterface *, GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsVoIPManagerDirtySock.h:148
	bool RemovePlayer(CgsNetwork::ServerInterface *, GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsVoIPManagerDirtySock.h:153
	void SetControllerPort(int32_t);

	// CgsVoIPManagerDirtySock.h:157
	void SetVoipVolume(int32_t);

	// CgsVoIPManagerDirtySock.h:160
	int32_t GetVoipVolume();

	// CgsVoIPManagerDirtySock.h:164
	void SetChatRestricted(bool);

	// CgsVoIPManagerDirtySock.h:170
	void HandleReceivedHeadsetStatus(GuiEventNetworkLaunching::NetworkPlayerID, CgsNetwork::ENetworkHeadsetPlayerStatus);

	// CgsVoIPManagerDirtySock.h:175
	void SetGameSendingHeadsetStatus(bool);

private:
	// CgsVoIPManagerDirtySock.h:214
	void ClearData();

	// CgsVoIPManagerDirtySock.h:218
	void UpdateLocalPlayer();

	// CgsVoIPManagerDirtySock.h:223
	void UpdateHeadsetStatusMessages(bool);

	// CgsVoIPManagerDirtySock.h:228
	void RegisterMessage(GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsVoIPManagerDirtySock.h:233
	void UnregisterMessage(GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsVoIPManagerDirtySock.h:237
	bool DoesLocalPlayerHaveHeadset();

	// CgsVoIPManagerDirtySock.h:241
	uint32_t GetConnectionMask();

	// CgsVoIPManagerDirtySock.h:246
	void SetBroadcastClients(uint32_t);

	// CgsVoIPManagerDirtySock.h:251
	int32_t GetIndexFromID(GuiEventNetworkLaunching::NetworkPlayerID);

	// CgsVoIPManagerDirtySock.h:256
	int32_t GetIndexFromPlayerName(const char *) const;

	// CgsVoIPManagerDirtySock.h:261
	void UpdateConnectionIDsAndSendMask(CgsNetwork::ServerInterface *);

}

// CgsVoIPManagerDirtySock.h:85
struct CgsNetwork::VoIPClient {
	// CgsVoIPManagerDirtySock.h:87
	AggressiveMoveData::NetworkPlayerID mPlayerID;

	// CgsVoIPManagerDirtySock.h:88
	int32_t miConnectionID;

	// CgsVoIPManagerDirtySock.h:89
	bool mbIsBlocked;

	// CgsVoIPManagerDirtySock.h:90
	CgsNetwork::HeadsetStatusMessage mHeadsetSendMsg;

	// CgsVoIPManagerDirtySock.h:91
	CgsNetwork::HeadsetStatusMessage mHeadsetRecMsg;

}

// CgsVoIPManagerDirtySock.h:103
struct CgsNetwork::VoIPManager {
private:
	// CgsVoIPManagerDirtySock.h:193
	CgsNetwork::DirtySock::VoipRefT * mpVoiceRef;

	// CgsVoIPManagerDirtySock.h:194
	CgsNetwork::PlayerManager * mpPlayerManager;

	// CgsVoIPManagerDirtySock.h:195
	CgsNetwork::TimeManager * mpTimeManager;

	// CgsVoIPManagerDirtySock.h:196
	CgsNetwork::NetworkManager * mpNetworkManager;

	// CgsVoIPManagerDirtySock.h:197
	CgsNetwork::ServerInterface * mpServerInterface;

	// CgsVoIPManagerDirtySock.h:198
	CgsNetwork::BuddyManagerBase * mpBuddyManager;

	// CgsVoIPManagerDirtySock.h:200
	VoIPClient[7] maRegisteredTalkers;

	// CgsVoIPManagerDirtySock.h:201
	int32_t miControllerPort;

	// CgsVoIPManagerDirtySock.h:202
	int32_t miVoipVolumePercent;

	// CgsVoIPManagerDirtySock.h:203
	CgsNetwork::ENetworkHeadsetOutputMode meVoIPOutput;

	// CgsVoIPManagerDirtySock.h:204
	CgsNetwork::EVoIPManagerStatus meStatus;

	// CgsVoIPManagerDirtySock.h:205
	uint8_t mu8HeadsetStatus;

	// CgsVoIPManagerDirtySock.h:206
	bool mbIsVoiceAllowed;

	// CgsVoIPManagerDirtySock.h:207
	bool mbLocalPlayerHasHeadset;

	// CgsVoIPManagerDirtySock.h:208
	bool mbIsLocalPlayerInGame;

	// CgsVoIPManagerDirtySock.h:209
	bool mbIsChatRestricted;

	// CgsVoIPManagerDirtySock.h:210
	bool mbGameIsHandlingHeadsetStatus;

public:
	// CgsVoIPManagerDirtySock.h:109
	void Construct(CgsNetwork::NetworkManager *);

	// CgsVoIPManagerDirtySock.h:118
	bool Prepare(CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *, CgsNetwork::ServerInterface *, CgsNetwork::BuddyManagerBase *, bool);

	// CgsVoIPManagerDirtySock.h:122
	bool Release();

	// CgsVoIPManagerDirtySock.h:126
	void Destruct();

	// CgsVoIPManagerDirtySock.h:131
	void Update(bool);

	// CgsVoIPManagerDirtySock.h:136
	bool AddPlayer(AggressiveMoveData::NetworkPlayerID);

	// CgsVoIPManagerDirtySock.h:142
	void RemotePlayerFinalised(CgsNetwork::ServerInterface *, AggressiveMoveData::NetworkPlayerID);

	// CgsVoIPManagerDirtySock.h:148
	bool RemovePlayer(CgsNetwork::ServerInterface *, AggressiveMoveData::NetworkPlayerID);

	// CgsVoIPManagerDirtySock.h:153
	void SetControllerPort(int32_t);

	// CgsVoIPManagerDirtySock.h:157
	void SetVoipVolume(int32_t);

	// CgsVoIPManagerDirtySock.h:160
	int32_t GetVoipVolume();

	// CgsVoIPManagerDirtySock.h:164
	void SetChatRestricted(bool);

	// CgsVoIPManagerDirtySock.h:170
	void HandleReceivedHeadsetStatus(AggressiveMoveData::NetworkPlayerID, CgsNetwork::ENetworkHeadsetPlayerStatus);

	// CgsVoIPManagerDirtySock.h:175
	void SetGameSendingHeadsetStatus(bool);

private:
	// CgsVoIPManagerDirtySock.h:214
	void ClearData();

	// CgsVoIPManagerDirtySock.h:218
	void UpdateLocalPlayer();

	// CgsVoIPManagerDirtySock.h:223
	void UpdateHeadsetStatusMessages(bool);

	// CgsVoIPManagerDirtySock.h:228
	void RegisterMessage(AggressiveMoveData::NetworkPlayerID);

	// CgsVoIPManagerDirtySock.h:233
	void UnregisterMessage(AggressiveMoveData::NetworkPlayerID);

	// CgsVoIPManagerDirtySock.h:237
	bool DoesLocalPlayerHaveHeadset();

	// CgsVoIPManagerDirtySock.h:241
	uint32_t GetConnectionMask();

	// CgsVoIPManagerDirtySock.h:246
	void SetBroadcastClients(uint32_t);

	// CgsVoIPManagerDirtySock.h:251
	int32_t GetIndexFromID(AggressiveMoveData::NetworkPlayerID);

	// CgsVoIPManagerDirtySock.h:256
	int32_t GetIndexFromPlayerName(const char *) const;

	// CgsVoIPManagerDirtySock.h:261
	void UpdateConnectionIDsAndSendMask(CgsNetwork::ServerInterface *);

}

// CgsBitStream.h:26
namespace CgsNetwork {
	// CgsVoIPManagerDirtySock.h:48
	enum ENetworkHeadsetOutputMode {
		E_NETWORK_HEADSET_OUTPUT_MODE_HEADSET = 0,
		E_NETWORK_HEADSET_OUTPUT_MODE_TVSPEAKERS = 1,
		E_NETWORK_HEADSET_OUTPUT_MODE_COUNT = 2,
	}

	// CgsVoIPManagerDirtySock.h:57
	enum EVoIPManagerStatus {
		E_VOIP_MANAGER_STATUS_UNPREPARED = 0,
		E_VOIP_MANAGER_STATUS_READY = 1,
		E_VOIP_MANAGER_STATUS_COUNT = 2,
	}

	// CgsVoIPManagerDirtySock.h:66
	enum ENetworkHeadsetPlayerStatus {
		E_NETWORK_HEADSET_PLAYER_STATUS_NONE = 0,
		E_NETWORK_HEADSET_PLAYER_STATUS_HAS_HEADSET = 1,
		E_NETWORK_HEADSET_PLAYER_STATUS_TALKING = 2,
		E_NETWORK_HEADSET_PLAYER_STATUS_COUNT = 3,
	}

}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsVoIPManagerDirtySock.h:48
	enum ENetworkHeadsetOutputMode {
		E_NETWORK_HEADSET_OUTPUT_MODE_HEADSET = 0,
		E_NETWORK_HEADSET_OUTPUT_MODE_TVSPEAKERS = 1,
		E_NETWORK_HEADSET_OUTPUT_MODE_COUNT = 2,
	}

	// CgsVoIPManagerDirtySock.h:57
	enum EVoIPManagerStatus {
		E_VOIP_MANAGER_STATUS_UNPREPARED = 0,
		E_VOIP_MANAGER_STATUS_READY = 1,
		E_VOIP_MANAGER_STATUS_COUNT = 2,
	}

	// CgsVoIPManagerDirtySock.h:66
	enum ENetworkHeadsetPlayerStatus {
		E_NETWORK_HEADSET_PLAYER_STATUS_NONE = 0,
		E_NETWORK_HEADSET_PLAYER_STATUS_HAS_HEADSET = 1,
		E_NETWORK_HEADSET_PLAYER_STATUS_TALKING = 2,
		E_NETWORK_HEADSET_PLAYER_STATUS_COUNT = 3,
	}

}

// CgsVoIPManagerDirtySock.h:85
struct CgsNetwork::VoIPClient {
	// CgsVoIPManagerDirtySock.h:87
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID mPlayerID;

	// CgsVoIPManagerDirtySock.h:88
	int32_t miConnectionID;

	// CgsVoIPManagerDirtySock.h:89
	bool mbIsBlocked;

	// CgsVoIPManagerDirtySock.h:90
	CgsNetwork::HeadsetStatusMessage mHeadsetSendMsg;

	// CgsVoIPManagerDirtySock.h:91
	CgsNetwork::HeadsetStatusMessage mHeadsetRecMsg;

}

// CgsVoIPManagerDirtySock.h:103
struct CgsNetwork::VoIPManager {
private:
	// CgsVoIPManagerDirtySock.h:193
	CgsNetwork::DirtySock::VoipRefT * mpVoiceRef;

	// CgsVoIPManagerDirtySock.h:194
	CgsNetwork::PlayerManager * mpPlayerManager;

	// CgsVoIPManagerDirtySock.h:195
	CgsNetwork::TimeManager * mpTimeManager;

	// CgsVoIPManagerDirtySock.h:196
	CgsNetwork::NetworkManager * mpNetworkManager;

	// CgsVoIPManagerDirtySock.h:197
	CgsNetwork::ServerInterface * mpServerInterface;

	// CgsVoIPManagerDirtySock.h:198
	CgsNetwork::BuddyManagerBase * mpBuddyManager;

	// CgsVoIPManagerDirtySock.h:200
	VoIPClient[7] maRegisteredTalkers;

	// CgsVoIPManagerDirtySock.h:201
	int32_t miControllerPort;

	// CgsVoIPManagerDirtySock.h:202
	int32_t miVoipVolumePercent;

	// CgsVoIPManagerDirtySock.h:203
	CgsNetwork::ENetworkHeadsetOutputMode meVoIPOutput;

	// CgsVoIPManagerDirtySock.h:204
	CgsNetwork::EVoIPManagerStatus meStatus;

	// CgsVoIPManagerDirtySock.h:205
	uint8_t mu8HeadsetStatus;

	// CgsVoIPManagerDirtySock.h:206
	bool mbIsVoiceAllowed;

	// CgsVoIPManagerDirtySock.h:207
	bool mbLocalPlayerHasHeadset;

	// CgsVoIPManagerDirtySock.h:208
	bool mbIsLocalPlayerInGame;

	// CgsVoIPManagerDirtySock.h:209
	bool mbIsChatRestricted;

	// CgsVoIPManagerDirtySock.h:210
	bool mbGameIsHandlingHeadsetStatus;

public:
	// CgsVoIPManagerDirtySock.h:109
	void Construct(CgsNetwork::NetworkManager *);

	// CgsVoIPManagerDirtySock.h:118
	// Declaration
	bool Prepare(CgsNetwork::PlayerManager *, CgsNetwork::TimeManager *, CgsNetwork::ServerInterface *, CgsNetwork::BuddyManagerBase *, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsVoIPManagerDirtySock.cpp:164
		using namespace CgsDev::Message;

		// CgsVoIPManagerDirtySock.cpp:166
		using namespace CgsDev::Message;

		// CgsVoIPManagerDirtySock.cpp:170
		using namespace CgsDev::Message;

	}

	// CgsVoIPManagerDirtySock.h:122
	bool Release();

	// CgsVoIPManagerDirtySock.h:126
	void Destruct();

	// CgsVoIPManagerDirtySock.h:131
	void Update(bool);

	// CgsVoIPManagerDirtySock.h:136
	bool AddPlayer(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

	// CgsVoIPManagerDirtySock.h:142
	void RemotePlayerFinalised(CgsNetwork::ServerInterface *, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

	// CgsVoIPManagerDirtySock.h:148
	bool RemovePlayer(CgsNetwork::ServerInterface *, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

	// CgsVoIPManagerDirtySock.h:153
	void SetControllerPort(int32_t);

	// CgsVoIPManagerDirtySock.h:157
	void SetVoipVolume(int32_t);

	// CgsVoIPManagerDirtySock.h:160
	int32_t GetVoipVolume();

	// CgsVoIPManagerDirtySock.h:164
	void SetChatRestricted(bool);

	// CgsVoIPManagerDirtySock.h:170
	void HandleReceivedHeadsetStatus(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID, CgsNetwork::ENetworkHeadsetPlayerStatus);

	// CgsVoIPManagerDirtySock.h:175
	void SetGameSendingHeadsetStatus(bool);

private:
	// CgsVoIPManagerDirtySock.h:214
	void ClearData();

	// CgsVoIPManagerDirtySock.h:218
	void UpdateLocalPlayer();

	// CgsVoIPManagerDirtySock.h:223
	void UpdateHeadsetStatusMessages(bool);

	// CgsVoIPManagerDirtySock.h:228
	void RegisterMessage(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

	// CgsVoIPManagerDirtySock.h:233
	void UnregisterMessage(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

	// CgsVoIPManagerDirtySock.h:237
	bool DoesLocalPlayerHaveHeadset();

	// CgsVoIPManagerDirtySock.h:241
	uint32_t GetConnectionMask();

	// CgsVoIPManagerDirtySock.h:246
	void SetBroadcastClients(uint32_t);

	// CgsVoIPManagerDirtySock.h:251
	int32_t GetIndexFromID(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

	// CgsVoIPManagerDirtySock.h:256
	int32_t GetIndexFromPlayerName(const char *) const;

	// CgsVoIPManagerDirtySock.h:261
	void UpdateConnectionIDsAndSendMask(CgsNetwork::ServerInterface *);

}

