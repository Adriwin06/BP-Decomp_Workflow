// CgsPlayerDescriptionsArray.h:47
struct CgsNetwork::PlayerData {
private:
	// CgsPlayerDescriptionsArray.h:76
	CgsNetwork::PlayerMenuData * mpMenuData;

	// CgsPlayerDescriptionsArray.h:77
	CgsNetwork::NetworkPlayer * mpNetworkPlayer;

	// CgsPlayerDescriptionsArray.h:78
	RoadRulesRecvData::NetworkPlayerID mPlayerID;

public:
	// CgsPlayerDescriptionsArray.h:50
	CgsNetwork::NetworkPlayer * GetNetworkPlayer() const;

	// CgsPlayerDescriptionsArray.h:54
	void SetNetworkPlayer(CgsNetwork::NetworkPlayer *);

	// CgsPlayerDescriptionsArray.h:57
	CgsNetwork::PlayerMenuData * GetMenuData() const;

	// CgsPlayerDescriptionsArray.h:61
	void SetMenuData(CgsNetwork::PlayerMenuData *);

	// CgsPlayerDescriptionsArray.h:66
	void Set(CgsNetwork::NetworkPlayer *, CgsNetwork::PlayerMenuData *);

	// CgsPlayerDescriptionsArray.h:69
	RoadRulesRecvData::NetworkPlayerID GetPlayerID() const;

	// CgsPlayerDescriptionsArray.h:73
	void SetPlayerID(RoadRulesRecvData::NetworkPlayerID);

}

// CgsPlayerDescriptionsArray.h:47
struct CgsNetwork::PlayerData {
private:
	// CgsPlayerDescriptionsArray.h:76
	CgsNetwork::PlayerMenuData * mpMenuData;

	// CgsPlayerDescriptionsArray.h:77
	CgsNetwork::NetworkPlayer * mpNetworkPlayer;

	// CgsPlayerDescriptionsArray.h:78
	GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

public:
	// CgsPlayerDescriptionsArray.h:50
	CgsNetwork::NetworkPlayer * GetNetworkPlayer() const;

	// CgsPlayerDescriptionsArray.h:54
	void SetNetworkPlayer(CgsNetwork::NetworkPlayer *);

	// CgsPlayerDescriptionsArray.h:57
	CgsNetwork::PlayerMenuData * GetMenuData() const;

	// CgsPlayerDescriptionsArray.h:61
	void SetMenuData(CgsNetwork::PlayerMenuData *);

	// CgsPlayerDescriptionsArray.h:66
	void Set(CgsNetwork::NetworkPlayer *, CgsNetwork::PlayerMenuData *);

	// CgsPlayerDescriptionsArray.h:69
	GuiEventNetworkLaunching::NetworkPlayerID GetPlayerID() const;

	// CgsPlayerDescriptionsArray.h:73
	void SetPlayerID(GuiEventNetworkLaunching::NetworkPlayerID);

}

// CgsPlayerDescriptionsArray.h:47
struct CgsNetwork::PlayerData {
private:
	// CgsPlayerDescriptionsArray.h:76
	CgsNetwork::PlayerMenuData * mpMenuData;

	// CgsPlayerDescriptionsArray.h:77
	CgsNetwork::NetworkPlayer * mpNetworkPlayer;

	// CgsPlayerDescriptionsArray.h:78
	AggressiveMoveData::NetworkPlayerID mPlayerID;

public:
	// CgsPlayerDescriptionsArray.h:50
	CgsNetwork::NetworkPlayer * GetNetworkPlayer() const;

	// CgsPlayerDescriptionsArray.h:54
	void SetNetworkPlayer(CgsNetwork::NetworkPlayer *);

	// CgsPlayerDescriptionsArray.h:57
	CgsNetwork::PlayerMenuData * GetMenuData() const;

	// CgsPlayerDescriptionsArray.h:61
	void SetMenuData(CgsNetwork::PlayerMenuData *);

	// CgsPlayerDescriptionsArray.h:66
	void Set(CgsNetwork::NetworkPlayer *, CgsNetwork::PlayerMenuData *);

	// CgsPlayerDescriptionsArray.h:69
	AggressiveMoveData::NetworkPlayerID GetPlayerID() const;

	// CgsPlayerDescriptionsArray.h:73
	void SetPlayerID(AggressiveMoveData::NetworkPlayerID);

}

// CgsPlayerDescriptionsArray.h:47
struct CgsNetwork::PlayerData {
private:
	// CgsPlayerDescriptionsArray.h:76
	CgsNetwork::PlayerMenuData * mpMenuData;

	// CgsPlayerDescriptionsArray.h:77
	CgsNetwork::NetworkPlayer * mpNetworkPlayer;

	// CgsPlayerDescriptionsArray.h:78
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID mPlayerID;

public:
	// CgsPlayerDescriptionsArray.h:50
	CgsNetwork::NetworkPlayer * GetNetworkPlayer() const;

	// CgsPlayerDescriptionsArray.h:54
	void SetNetworkPlayer(CgsNetwork::NetworkPlayer *);

	// CgsPlayerDescriptionsArray.h:57
	CgsNetwork::PlayerMenuData * GetMenuData() const;

	// CgsPlayerDescriptionsArray.h:61
	void SetMenuData(CgsNetwork::PlayerMenuData *);

	// CgsPlayerDescriptionsArray.h:66
	void Set(CgsNetwork::NetworkPlayer *, CgsNetwork::PlayerMenuData *);

	// CgsPlayerDescriptionsArray.h:69
	CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID GetPlayerID() const;

	// CgsPlayerDescriptionsArray.h:73
	void SetPlayerID(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID);

}

