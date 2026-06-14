// BrnNetworkPlayerStatsResults.h:46
struct BrnNetwork::NetworkPlayerStatsResults {
private:
	// BrnNetworkPlayerStatsResults.h:106
	extern const int32_t KI_CACHE_SIZE = 32;

	// BrnNetworkPlayerStatsResults.h:108
	NetworkPlayerStats[32] maPlayerStatsCache;

	// BrnNetworkPlayerStatsResults.h:110
	int32_t miCacheSize;

	// BrnNetworkPlayerStatsResults.h:112
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkPlayerStatsResults.h:115
	BrnNetwork::StatsDebugComponent mStatsDebugComponent;

public:
	// BrnNetworkPlayerStatsResults.h:51
	void Construct(BrnNetwork::BrnNetworkManager *);

	// BrnNetworkPlayerStatsResults.h:55
	bool Prepare();

	// BrnNetworkPlayerStatsResults.h:59
	bool Release();

	// BrnNetworkPlayerStatsResults.h:63
	void Destruct();

	// BrnNetworkPlayerStatsResults.h:67
	void Clear();

	// BrnNetworkPlayerStatsResults.h:72
	NetworkPlayerStats * GetPlayerStats(const char *);

	// BrnNetworkPlayerStatsResults.h:77
	NetworkPlayerStats * GetPlayerStats(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkPlayerStatsResults.h:80
	NetworkPlayerStats * GetLocalPlayerStats();

	// BrnNetworkPlayerStatsResults.h:85
	NetworkPlayerStats * InsertPlayerStats(const NetworkPlayerStats &);

private:
	// BrnNetworkPlayerStatsResults.h:91
	NetworkPlayerStats * FindReplaceableRecordSet();

	// BrnNetworkPlayerStatsResults.h:96
	NetworkPlayerStats * FindFirstRecordWithState(BrnNetwork::NetworkPlayerStats::EStatsStatus);

	// BrnNetworkPlayerStatsResults.h:100
	bool IsPlayerInTheGame(const char *);

	// BrnNetworkPlayerStatsResults.h:103
	int32_t GetLength();

}

// BrnNetworkPlayerStatsResults.h:106
extern const int32_t KI_CACHE_SIZE = 32;

// BrnNetworkPlayerStatsResults.h:46
struct BrnNetwork::NetworkPlayerStatsResults {
private:
	// BrnNetworkPlayerStatsResults.h:106
	extern const int32_t KI_CACHE_SIZE = 32;

	// BrnNetworkPlayerStatsResults.h:108
	NetworkPlayerStats[32] maPlayerStatsCache;

	// BrnNetworkPlayerStatsResults.h:110
	int32_t miCacheSize;

	// BrnNetworkPlayerStatsResults.h:112
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkPlayerStatsResults.h:115
	BrnNetwork::StatsDebugComponent mStatsDebugComponent;

public:
	// BrnNetworkPlayerStatsResults.h:51
	void Construct(BrnNetwork::BrnNetworkManager *);

	// BrnNetworkPlayerStatsResults.h:55
	bool Prepare();

	// BrnNetworkPlayerStatsResults.h:59
	bool Release();

	// BrnNetworkPlayerStatsResults.h:63
	void Destruct();

	// BrnNetworkPlayerStatsResults.h:67
	void Clear();

	// BrnNetworkPlayerStatsResults.h:72
	NetworkPlayerStats * GetPlayerStats(const char *);

	// BrnNetworkPlayerStatsResults.h:77
	NetworkPlayerStats * GetPlayerStats(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkPlayerStatsResults.h:80
	NetworkPlayerStats * GetLocalPlayerStats();

	// BrnNetworkPlayerStatsResults.h:85
	NetworkPlayerStats * InsertPlayerStats(const NetworkPlayerStats &);

private:
	// BrnNetworkPlayerStatsResults.h:91
	NetworkPlayerStats * FindReplaceableRecordSet();

	// BrnNetworkPlayerStatsResults.h:96
	NetworkPlayerStats * FindFirstRecordWithState(BrnNetwork::NetworkPlayerStats::EStatsStatus);

	// BrnNetworkPlayerStatsResults.h:100
	bool IsPlayerInTheGame(const char *);

	// BrnNetworkPlayerStatsResults.h:103
	int32_t GetLength();

}

// BrnNetworkPlayerStatsResults.h:46
struct BrnNetwork::NetworkPlayerStatsResults {
private:
	// BrnNetworkPlayerStatsResults.h:106
	extern const int32_t KI_CACHE_SIZE = 32;

	// BrnNetworkPlayerStatsResults.h:108
	NetworkPlayerStats[32] maPlayerStatsCache;

	// BrnNetworkPlayerStatsResults.h:110
	int32_t miCacheSize;

	// BrnNetworkPlayerStatsResults.h:112
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkPlayerStatsResults.h:115
	BrnNetwork::StatsDebugComponent mStatsDebugComponent;

public:
	// BrnNetworkPlayerStatsResults.h:51
	void Construct(BrnNetwork::BrnNetworkManager *);

	// BrnNetworkPlayerStatsResults.h:55
	bool Prepare();

	// BrnNetworkPlayerStatsResults.h:59
	bool Release();

	// BrnNetworkPlayerStatsResults.h:63
	void Destruct();

	// BrnNetworkPlayerStatsResults.h:67
	void Clear();

	// BrnNetworkPlayerStatsResults.h:72
	NetworkPlayerStats * GetPlayerStats(const char *);

	// BrnNetworkPlayerStatsResults.h:77
	NetworkPlayerStats * GetPlayerStats(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkPlayerStatsResults.h:80
	NetworkPlayerStats * GetLocalPlayerStats();

	// BrnNetworkPlayerStatsResults.h:85
	NetworkPlayerStats * InsertPlayerStats(const NetworkPlayerStats &);

private:
	// BrnNetworkPlayerStatsResults.h:91
	NetworkPlayerStats * FindReplaceableRecordSet();

	// BrnNetworkPlayerStatsResults.h:96
	NetworkPlayerStats * FindFirstRecordWithState(BrnNetwork::NetworkPlayerStats::EStatsStatus);

	// BrnNetworkPlayerStatsResults.h:100
	bool IsPlayerInTheGame(const char *);

	// BrnNetworkPlayerStatsResults.h:103
	int32_t GetLength();

}

