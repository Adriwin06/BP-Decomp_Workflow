// BrnStatsRequestEvent.h:43
struct BrnNetwork::StatsRequestEvent {
	// BrnStatsRequestEvent.h:62
	extern const char * KPC_USER_STAT_NAME;

private:
	// BrnStatsRequestEvent.h:65
	char[20] macName;

	// BrnStatsRequestEvent.h:66
	RoadRulesRecvData::NetworkPlayerID mPlayerID;

public:
	// BrnStatsRequestEvent.h:50
	void Construct(const char *, RoadRulesRecvData::NetworkPlayerID);

	// BrnStatsRequestEvent.h:54
	const char * GetName() const;

	// BrnStatsRequestEvent.h:58
	RoadRulesRecvData::NetworkPlayerID GetPlayerID() const;

}

// BrnStatsRequestEvent.h:43
struct BrnNetwork::StatsRequestEvent {
	// BrnStatsRequestEvent.h:62
	extern const char * KPC_USER_STAT_NAME;

private:
	// BrnStatsRequestEvent.h:65
	char[20] macName;

	// BrnStatsRequestEvent.h:66
	GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

public:
	// BrnStatsRequestEvent.h:50
	void Construct(const char *, GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnStatsRequestEvent.h:54
	const char * GetName() const;

	// BrnStatsRequestEvent.h:58
	GuiEventNetworkLaunching::NetworkPlayerID GetPlayerID() const;

}

// BrnStatsRequestEvent.h:43
struct BrnNetwork::StatsRequestEvent {
	// BrnStatsRequestEvent.h:62
	extern const char * KPC_USER_STAT_NAME;

private:
	// BrnStatsRequestEvent.h:65
	char[20] macName;

	// BrnStatsRequestEvent.h:66
	AggressiveMoveData::NetworkPlayerID mPlayerID;

public:
	// BrnStatsRequestEvent.h:50
	void Construct(const char *, AggressiveMoveData::NetworkPlayerID);

	// BrnStatsRequestEvent.h:54
	const char * GetName() const;

	// BrnStatsRequestEvent.h:58
	AggressiveMoveData::NetworkPlayerID GetPlayerID() const;

}

