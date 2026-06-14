// BrnNetworkModuleInGamePlayerStatusInterface.h:39
using BrnGameState::GameStateModuleIO;

// BrnNetworkModuleInGamePlayerStatusInterface.h:63
struct BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusData {
	// BrnNetworkModuleInGamePlayerStatusInterface.h:65
	NetworkPlayerStats mPlayerStats;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:66
	LiveRevengeRelationship mLiveRevengeRelationship;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:67
	PlayerName mPlayerName;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:68
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:69
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:70
	CgsNetwork::ENetworkHeadsetPlayerStatus meVOIPStatus;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:71
	BrnNetwork::ECameraStatus meCameraStatus;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:72
	RoadRulesRecvData::NetworkPlayerID mMarkedManPlayerID;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:73
	EActiveRaceCarIndex meMarkedManActiveRaceCarIndex;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:74
	BrnWorld::EDistrict meDistrict;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:75
	bool mbMarkedMan;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:76
	bool mbIsHost;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:77
	bool mbIsLocalPlayer;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:78
	bool mbIsInLocalGameWorld;

public:
	// BrnNetworkModuleInGamePlayerStatusInterface.h:81
	void Clear();

}

// BrnNetworkModuleInGamePlayerStatusInterface.h:117
struct BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface {
private:
	// BrnNetworkModuleInGamePlayerStatusInterface.h:175
	InGamePlayerStatusData[8] maInGamePlayerData;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:176
	char[36] macGameName;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:177
	int32_t miNumPlayers;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:178
	bool mbLocalPlayerIsHost;

public:
	// BrnNetworkModuleInGamePlayerStatusInterface.h:123
	const InGamePlayerStatusData * GetPlayerStatusData(int32_t) const;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:127
	const InGamePlayerStatusData * GetPlayerStatusDataByActiveRaceCarIndex(EActiveRaceCarIndex) const;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:131
	const InGamePlayerStatusData * GetPlayerStatusDataByPlayerID(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:135
	int32_t GetNumPlayers() const;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:139
	void Clear();

	// BrnNetworkModuleInGamePlayerStatusInterface.h:144
	void SetNumPlayers(int32_t);

	// BrnNetworkModuleInGamePlayerStatusInterface.h:149
	InGamePlayerStatusData * GetPlayerStatusDataForWriting(int32_t);

	// BrnNetworkModuleInGamePlayerStatusInterface.h:153
	const char * GetGameName() const;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:158
	void SetGameName(const char *);

	// BrnNetworkModuleInGamePlayerStatusInterface.h:162
	bool GetLocalPlayerIsHost() const;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:167
	void SetLocalPlayerIsHost(bool);

	// BrnNetworkModuleInGamePlayerStatusInterface.h:172
	RoadRulesRecvData::NetworkPlayerID GetNetworkIDFromPlayerName(PlayerName) const;

}

// BrnNetworkModuleInGamePlayerStatusInterface.h:63
struct BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusData {
	// BrnNetworkModuleInGamePlayerStatusInterface.h:65
	NetworkPlayerStats mPlayerStats;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:66
	LiveRevengeRelationship mLiveRevengeRelationship;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:67
	PlayerName mPlayerName;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:68
	GuiEventNetworkLaunching::NetworkPlayerID mNetworkPlayerID;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:69
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:70
	CgsNetwork::ENetworkHeadsetPlayerStatus meVOIPStatus;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:71
	BrnNetwork::ECameraStatus meCameraStatus;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:72
	GuiEventNetworkLaunching::NetworkPlayerID mMarkedManPlayerID;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:73
	EActiveRaceCarIndex meMarkedManActiveRaceCarIndex;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:74
	BrnWorld::EDistrict meDistrict;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:75
	bool mbMarkedMan;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:76
	bool mbIsHost;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:77
	bool mbIsLocalPlayer;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:78
	bool mbIsInLocalGameWorld;

public:
	// BrnNetworkModuleInGamePlayerStatusInterface.h:81
	void Clear();

}

// BrnNetworkModuleInGamePlayerStatusInterface.h:117
struct BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface {
private:
	// BrnNetworkModuleInGamePlayerStatusInterface.h:175
	InGamePlayerStatusData[8] maInGamePlayerData;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:176
	char[36] macGameName;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:177
	int32_t miNumPlayers;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:178
	bool mbLocalPlayerIsHost;

public:
	// BrnNetworkModuleInGamePlayerStatusInterface.h:123
	const InGamePlayerStatusData * GetPlayerStatusData(int32_t) const;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:127
	const InGamePlayerStatusData * GetPlayerStatusDataByActiveRaceCarIndex(EActiveRaceCarIndex) const;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:131
	const InGamePlayerStatusData * GetPlayerStatusDataByPlayerID(GuiEventNetworkLaunching::NetworkPlayerID) const;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:135
	int32_t GetNumPlayers() const;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:139
	void Clear();

	// BrnNetworkModuleInGamePlayerStatusInterface.h:144
	void SetNumPlayers(int32_t);

	// BrnNetworkModuleInGamePlayerStatusInterface.h:149
	InGamePlayerStatusData * GetPlayerStatusDataForWriting(int32_t);

	// BrnNetworkModuleInGamePlayerStatusInterface.h:153
	const char * GetGameName() const;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:158
	void SetGameName(const char *);

	// BrnNetworkModuleInGamePlayerStatusInterface.h:162
	bool GetLocalPlayerIsHost() const;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:167
	void SetLocalPlayerIsHost(bool);

	// BrnNetworkModuleInGamePlayerStatusInterface.h:172
	GuiEventNetworkLaunching::NetworkPlayerID GetNetworkIDFromPlayerName(PlayerName) const;

}

// BrnNetworkModuleInGamePlayerStatusInterface.h:63
struct BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusData {
	// BrnNetworkModuleInGamePlayerStatusInterface.h:65
	NetworkPlayerStats mPlayerStats;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:66
	LiveRevengeRelationship mLiveRevengeRelationship;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:67
	PlayerName mPlayerName;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:68
	AggressiveMoveData::NetworkPlayerID mNetworkPlayerID;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:69
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:70
	CgsNetwork::ENetworkHeadsetPlayerStatus meVOIPStatus;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:71
	BrnNetwork::ECameraStatus meCameraStatus;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:72
	AggressiveMoveData::NetworkPlayerID mMarkedManPlayerID;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:73
	EActiveRaceCarIndex meMarkedManActiveRaceCarIndex;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:74
	BrnWorld::EDistrict meDistrict;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:75
	bool mbMarkedMan;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:76
	bool mbIsHost;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:77
	bool mbIsLocalPlayer;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:78
	bool mbIsInLocalGameWorld;

public:
	// BrnNetworkModuleInGamePlayerStatusInterface.h:81
	void Clear();

}

// BrnNetworkModuleInGamePlayerStatusInterface.h:117
struct BrnNetwork::BrnNetworkModuleIO::InGamePlayerStatusInterface {
private:
	// BrnNetworkModuleInGamePlayerStatusInterface.h:175
	InGamePlayerStatusData[8] maInGamePlayerData;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:176
	char[36] macGameName;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:177
	int32_t miNumPlayers;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:178
	bool mbLocalPlayerIsHost;

public:
	// BrnNetworkModuleInGamePlayerStatusInterface.h:123
	const InGamePlayerStatusData * GetPlayerStatusData(int32_t) const;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:127
	const InGamePlayerStatusData * GetPlayerStatusDataByActiveRaceCarIndex(EActiveRaceCarIndex) const;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:131
	const InGamePlayerStatusData * GetPlayerStatusDataByPlayerID(AggressiveMoveData::NetworkPlayerID) const;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:135
	int32_t GetNumPlayers() const;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:139
	void Clear();

	// BrnNetworkModuleInGamePlayerStatusInterface.h:144
	void SetNumPlayers(int32_t);

	// BrnNetworkModuleInGamePlayerStatusInterface.h:149
	InGamePlayerStatusData * GetPlayerStatusDataForWriting(int32_t);

	// BrnNetworkModuleInGamePlayerStatusInterface.h:153
	const char * GetGameName() const;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:158
	void SetGameName(const char *);

	// BrnNetworkModuleInGamePlayerStatusInterface.h:162
	bool GetLocalPlayerIsHost() const;

	// BrnNetworkModuleInGamePlayerStatusInterface.h:167
	void SetLocalPlayerIsHost(bool);

	// BrnNetworkModuleInGamePlayerStatusInterface.h:172
	AggressiveMoveData::NetworkPlayerID GetNetworkIDFromPlayerName(PlayerName) const;

}

