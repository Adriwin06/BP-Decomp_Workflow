// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct NetworkPlayerStats {
		// BrnNetworkPlayerStats.h:57
		enum EStatsStatus {
			E_STATS_AGE_UNPREPARED = 0,
			E_STATS_AGE_ERROR = 1,
			E_STATS_AGE_INVALID = 2,
			E_STATS_AGE_CURRENT = 3,
			E_STATS_AGE_UPDATING = 4,
		}

		// BrnNetworkPlayerStats.h:67
		enum EStatsValue {
			E_STATS_VALUE_START = 0,
			E_STATS_VALUE_TOTAL_GAMES_COMPLETED = 0,
			E_STATS_VALUE_RANKED_GAMES_COMPLETED = 1,
			E_STATS_VALUE_UNRANKED_GAMES_COMPLETED = 2,
			E_STATS_VALUE_WIN_PERCENT = 3,
			E_STATS_VALUE_TAKEDOWNS = 4,
			E_STATS_VALUE_NUMBER_OF_RIVALS = 5,
			E_STATS_VALUE_ACHIEVEMENTS_EARNT = 6,
			E_STATS_VALUE_CHALLENGES_COMPLETED = 7,
			E_STATS_VALUE_RANK = 8,
			E_STATS_VALUE_RANKED_GAMES_STARTED = 9,
			E_STATS_VALUE_UNRANKED_GAMES_STARTED = 10,
			E_STATS_VALUE_WINS = 11,
			E_STATS_VALUE_COUNT = 12,
		}

		// BrnNetworkPlayerStats.h:87
		enum EStatType {
			E_STAT_TYPE_NUMBER = 0,
			E_STAT_TYPE_STRING = 1,
			E_STAT_TYPE_MONEY = 2,
			E_STAT_TYPE_TIME = 3,
			E_STAT_TYPE_PERCENT = 4,
			E_STAT_TYPE_COUNT = 5,
		}

	}

}

// BrnNetworkPlayerStats.h:53
struct BrnNetwork::NetworkPlayerStats {
	// BrnNetworkPlayerStats.h:196
	extern const int32_t KI_NO_RANK;

	// BrnNetworkPlayerStats.h:197
	extern const int32_t KI_MININUM_CHAR_BUFFER_SIZE = 11;

private:
	// BrnNetworkPlayerStats.h:201
	int32_t[12] maiValues;

	// BrnNetworkPlayerStats.h:202
	BrnNetwork::NetworkPlayerStats::EStatType[12] maeStatType;

	// BrnNetworkPlayerStats.h:204
	Time mTimeStamp;

	// BrnNetworkPlayerStats.h:205
	char[20] macName;

	// BrnNetworkPlayerStats.h:206
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

	// BrnNetworkPlayerStats.h:208
	BrnNetwork::NetworkPlayerStats::EStatsStatus meStatsStatus;

	// BrnNetworkPlayerStats.h:210
	bool mbIsCalulated;

	// BrnNetworkPlayerStats.h:211
	bool mbIsLocalPlayer;

public:
	// BrnNetworkPlayerStats.h:100
	void Construct();

	// BrnNetworkPlayerStats.h:108
	bool Prepare(const char *, Time, bool, RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkPlayerStats.h:112
	bool Release();

	// BrnNetworkPlayerStats.h:116
	void Destruct();

	// BrnNetworkPlayerStats.h:120
	void Clear();

	// BrnNetworkPlayerStats.h:125
	const int32_t GetStatAsInt(BrnNetwork::NetworkPlayerStats::EStatsValue) const;

	// BrnNetworkPlayerStats.h:132
	void GetStatAsString(BrnNetwork::NetworkPlayerStats::EStatsValue, char *, int32_t) const;

	// BrnNetworkPlayerStats.h:139
	void SetStat(BrnNetwork::NetworkPlayerStats::EStatsValue, const char *, BrnNetwork::NetworkPlayerStats::EStatType);

	// BrnNetworkPlayerStats.h:146
	void SetStatAsInt(BrnNetwork::NetworkPlayerStats::EStatsValue, int32_t, BrnNetwork::NetworkPlayerStats::EStatType);

	// BrnNetworkPlayerStats.h:151
	void SetPlayerID(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkPlayerStats.h:155
	const char * GetName() const;

	// BrnNetworkPlayerStats.h:159
	RoadRulesRecvData::NetworkPlayerID GetPlayerID() const;

	// BrnNetworkPlayerStats.h:163
	BrnNetwork::NetworkPlayerStats::EStatsStatus GetStatus() const;

	// BrnNetworkPlayerStats.h:168
	void SetStatus(BrnNetwork::NetworkPlayerStats::EStatsStatus);

	// BrnNetworkPlayerStats.h:173
	void SetTimeStamp(Time);

	// BrnNetworkPlayerStats.h:177
	Time GetTimeStamp() const;

	// BrnNetworkPlayerStats.h:182
	BrnNetwork::NetworkPlayerStats::EStatType GetStatType(BrnNetwork::NetworkPlayerStats::EStatsValue) const;

	// BrnNetworkPlayerStats.h:186
	bool IsCalculated() const;

	// BrnNetworkPlayerStats.h:191
	void SetCalculated(bool);

	// BrnNetworkPlayerStats.h:194
	bool IsLocalPlayer() const;

}

// BrnNetworkPlayerStats.h:53
struct BrnNetwork::NetworkPlayerStats {
	// BrnNetworkPlayerStats.h:196
	extern const int32_t KI_NO_RANK;

	// BrnNetworkPlayerStats.h:197
	extern const int32_t KI_MININUM_CHAR_BUFFER_SIZE = 11;

private:
	// BrnNetworkPlayerStats.h:201
	int32_t[12] maiValues;

	// BrnNetworkPlayerStats.h:202
	BrnNetwork::NetworkPlayerStats::EStatType[12] maeStatType;

	// BrnNetworkPlayerStats.h:204
	Time mTimeStamp;

	// BrnNetworkPlayerStats.h:205
	char[20] macName;

	// BrnNetworkPlayerStats.h:206
	GuiEventNetworkLaunching::NetworkPlayerID mNetworkPlayerID;

	// BrnNetworkPlayerStats.h:208
	BrnNetwork::NetworkPlayerStats::EStatsStatus meStatsStatus;

	// BrnNetworkPlayerStats.h:210
	bool mbIsCalulated;

	// BrnNetworkPlayerStats.h:211
	bool mbIsLocalPlayer;

public:
	// BrnNetworkPlayerStats.h:100
	void Construct();

	// BrnNetworkPlayerStats.h:108
	bool Prepare(const char *, Time, bool, GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkPlayerStats.h:112
	bool Release();

	// BrnNetworkPlayerStats.h:116
	void Destruct();

	// BrnNetworkPlayerStats.h:120
	void Clear();

	// BrnNetworkPlayerStats.h:125
	const int32_t GetStatAsInt(BrnNetwork::NetworkPlayerStats::EStatsValue) const;

	// BrnNetworkPlayerStats.h:132
	void GetStatAsString(BrnNetwork::NetworkPlayerStats::EStatsValue, char *, int32_t) const;

	// BrnNetworkPlayerStats.h:139
	void SetStat(BrnNetwork::NetworkPlayerStats::EStatsValue, const char *, BrnNetwork::NetworkPlayerStats::EStatType);

	// BrnNetworkPlayerStats.h:146
	void SetStatAsInt(BrnNetwork::NetworkPlayerStats::EStatsValue, int32_t, BrnNetwork::NetworkPlayerStats::EStatType);

	// BrnNetworkPlayerStats.h:151
	void SetPlayerID(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkPlayerStats.h:155
	const char * GetName() const;

	// BrnNetworkPlayerStats.h:159
	GuiEventNetworkLaunching::NetworkPlayerID GetPlayerID() const;

	// BrnNetworkPlayerStats.h:163
	BrnNetwork::NetworkPlayerStats::EStatsStatus GetStatus() const;

	// BrnNetworkPlayerStats.h:168
	void SetStatus(BrnNetwork::NetworkPlayerStats::EStatsStatus);

	// BrnNetworkPlayerStats.h:173
	void SetTimeStamp(Time);

	// BrnNetworkPlayerStats.h:177
	Time GetTimeStamp() const;

	// BrnNetworkPlayerStats.h:182
	BrnNetwork::NetworkPlayerStats::EStatType GetStatType(BrnNetwork::NetworkPlayerStats::EStatsValue) const;

	// BrnNetworkPlayerStats.h:186
	bool IsCalculated() const;

	// BrnNetworkPlayerStats.h:191
	void SetCalculated(bool);

	// BrnNetworkPlayerStats.h:194
	bool IsLocalPlayer() const;

}

// BrnNetworkPlayerStats.h:197
extern const int32_t KI_MININUM_CHAR_BUFFER_SIZE = 11;

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct NetworkPlayerStats {
		// BrnNetworkPlayerStats.h:57
		enum EStatsStatus {
			E_STATS_AGE_UNPREPARED = 0,
			E_STATS_AGE_ERROR = 1,
			E_STATS_AGE_INVALID = 2,
			E_STATS_AGE_CURRENT = 3,
			E_STATS_AGE_UPDATING = 4,
		}

		// BrnNetworkPlayerStats.h:67
		enum EStatsValue {
			E_STATS_VALUE_START = 0,
			E_STATS_VALUE_TOTAL_GAMES_COMPLETED = 0,
			E_STATS_VALUE_RANKED_GAMES_COMPLETED = 1,
			E_STATS_VALUE_UNRANKED_GAMES_COMPLETED = 2,
			E_STATS_VALUE_WIN_PERCENT = 3,
			E_STATS_VALUE_TAKEDOWNS = 4,
			E_STATS_VALUE_NUMBER_OF_RIVALS = 5,
			E_STATS_VALUE_ACHIEVEMENTS_EARNT = 6,
			E_STATS_VALUE_CHALLENGES_COMPLETED = 7,
			E_STATS_VALUE_RANK = 8,
			E_STATS_VALUE_RANKED_GAMES_STARTED = 9,
			E_STATS_VALUE_UNRANKED_GAMES_STARTED = 10,
			E_STATS_VALUE_WINS = 11,
			E_STATS_VALUE_COUNT = 12,
		}

		// BrnNetworkPlayerStats.h:87
		enum EStatType {
			E_STAT_TYPE_NUMBER = 0,
			E_STAT_TYPE_STRING = 1,
			E_STAT_TYPE_MONEY = 2,
			E_STAT_TYPE_TIME = 3,
			E_STAT_TYPE_PERCENT = 4,
			E_STAT_TYPE_COUNT = 5,
		}

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct NetworkPlayerStats {
		// BrnNetworkPlayerStats.h:57
		enum EStatsStatus {
			E_STATS_AGE_UNPREPARED = 0,
			E_STATS_AGE_ERROR = 1,
			E_STATS_AGE_INVALID = 2,
			E_STATS_AGE_CURRENT = 3,
			E_STATS_AGE_UPDATING = 4,
		}

		// BrnNetworkPlayerStats.h:67
		enum EStatsValue {
			E_STATS_VALUE_START = 0,
			E_STATS_VALUE_TOTAL_GAMES_COMPLETED = 0,
			E_STATS_VALUE_RANKED_GAMES_COMPLETED = 1,
			E_STATS_VALUE_UNRANKED_GAMES_COMPLETED = 2,
			E_STATS_VALUE_WIN_PERCENT = 3,
			E_STATS_VALUE_TAKEDOWNS = 4,
			E_STATS_VALUE_NUMBER_OF_RIVALS = 5,
			E_STATS_VALUE_ACHIEVEMENTS_EARNT = 6,
			E_STATS_VALUE_CHALLENGES_COMPLETED = 7,
			E_STATS_VALUE_RANK = 8,
			E_STATS_VALUE_RANKED_GAMES_STARTED = 9,
			E_STATS_VALUE_UNRANKED_GAMES_STARTED = 10,
			E_STATS_VALUE_WINS = 11,
			E_STATS_VALUE_COUNT = 12,
		}

		// BrnNetworkPlayerStats.h:87
		enum EStatType {
			E_STAT_TYPE_NUMBER = 0,
			E_STAT_TYPE_STRING = 1,
			E_STAT_TYPE_MONEY = 2,
			E_STAT_TYPE_TIME = 3,
			E_STAT_TYPE_PERCENT = 4,
			E_STAT_TYPE_COUNT = 5,
		}

	}

	// BrnNetworkPlayerStats.h:218
	extern BrnNetwork::NetworkPlayerStats::EStatsValue operator++(BrnNetwork::NetworkPlayerStats::EStatsValue &, int);

}

// BrnNetworkPlayerStats.h:53
struct BrnNetwork::NetworkPlayerStats {
	// BrnNetworkPlayerStats.h:196
	extern const int32_t KI_NO_RANK;

	// BrnNetworkPlayerStats.h:197
	extern const int32_t KI_MININUM_CHAR_BUFFER_SIZE = 11;

private:
	// BrnNetworkPlayerStats.h:201
	int32_t[12] maiValues;

	// BrnNetworkPlayerStats.h:202
	BrnNetwork::NetworkPlayerStats::EStatType[12] maeStatType;

	// BrnNetworkPlayerStats.h:204
	Time mTimeStamp;

	// BrnNetworkPlayerStats.h:205
	char[20] macName;

	// BrnNetworkPlayerStats.h:206
	AggressiveMoveData::NetworkPlayerID mNetworkPlayerID;

	// BrnNetworkPlayerStats.h:208
	BrnNetwork::NetworkPlayerStats::EStatsStatus meStatsStatus;

	// BrnNetworkPlayerStats.h:210
	bool mbIsCalulated;

	// BrnNetworkPlayerStats.h:211
	bool mbIsLocalPlayer;

public:
	// BrnNetworkPlayerStats.h:100
	void Construct();

	// BrnNetworkPlayerStats.h:108
	bool Prepare(const char *, Time, bool, AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkPlayerStats.h:112
	bool Release();

	// BrnNetworkPlayerStats.h:116
	void Destruct();

	// BrnNetworkPlayerStats.h:120
	void Clear();

	// BrnNetworkPlayerStats.h:125
	const int32_t GetStatAsInt(BrnNetwork::NetworkPlayerStats::EStatsValue) const;

	// BrnNetworkPlayerStats.h:132
	void GetStatAsString(BrnNetwork::NetworkPlayerStats::EStatsValue, char *, int32_t) const;

	// BrnNetworkPlayerStats.h:139
	void SetStat(BrnNetwork::NetworkPlayerStats::EStatsValue, const char *, BrnNetwork::NetworkPlayerStats::EStatType);

	// BrnNetworkPlayerStats.h:146
	void SetStatAsInt(BrnNetwork::NetworkPlayerStats::EStatsValue, int32_t, BrnNetwork::NetworkPlayerStats::EStatType);

	// BrnNetworkPlayerStats.h:151
	void SetPlayerID(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkPlayerStats.h:155
	const char * GetName() const;

	// BrnNetworkPlayerStats.h:159
	AggressiveMoveData::NetworkPlayerID GetPlayerID() const;

	// BrnNetworkPlayerStats.h:163
	BrnNetwork::NetworkPlayerStats::EStatsStatus GetStatus() const;

	// BrnNetworkPlayerStats.h:168
	void SetStatus(BrnNetwork::NetworkPlayerStats::EStatsStatus);

	// BrnNetworkPlayerStats.h:173
	void SetTimeStamp(Time);

	// BrnNetworkPlayerStats.h:177
	Time GetTimeStamp() const;

	// BrnNetworkPlayerStats.h:182
	BrnNetwork::NetworkPlayerStats::EStatType GetStatType(BrnNetwork::NetworkPlayerStats::EStatsValue) const;

	// BrnNetworkPlayerStats.h:186
	bool IsCalculated() const;

	// BrnNetworkPlayerStats.h:191
	void SetCalculated(bool);

	// BrnNetworkPlayerStats.h:194
	bool IsLocalPlayer() const;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct NetworkPlayerStats {
		// BrnNetworkPlayerStats.h:57
		enum EStatsStatus {
			E_STATS_AGE_UNPREPARED = 0,
			E_STATS_AGE_ERROR = 1,
			E_STATS_AGE_INVALID = 2,
			E_STATS_AGE_CURRENT = 3,
			E_STATS_AGE_UPDATING = 4,
		}

		// BrnNetworkPlayerStats.h:67
		enum EStatsValue {
			E_STATS_VALUE_START = 0,
			E_STATS_VALUE_TOTAL_GAMES_COMPLETED = 0,
			E_STATS_VALUE_RANKED_GAMES_COMPLETED = 1,
			E_STATS_VALUE_UNRANKED_GAMES_COMPLETED = 2,
			E_STATS_VALUE_WIN_PERCENT = 3,
			E_STATS_VALUE_TAKEDOWNS = 4,
			E_STATS_VALUE_NUMBER_OF_RIVALS = 5,
			E_STATS_VALUE_ACHIEVEMENTS_EARNT = 6,
			E_STATS_VALUE_CHALLENGES_COMPLETED = 7,
			E_STATS_VALUE_RANK = 8,
			E_STATS_VALUE_RANKED_GAMES_STARTED = 9,
			E_STATS_VALUE_UNRANKED_GAMES_STARTED = 10,
			E_STATS_VALUE_WINS = 11,
			E_STATS_VALUE_COUNT = 12,
		}

		// BrnNetworkPlayerStats.h:87
		enum EStatType {
			E_STAT_TYPE_NUMBER = 0,
			E_STAT_TYPE_STRING = 1,
			E_STAT_TYPE_MONEY = 2,
			E_STAT_TYPE_TIME = 3,
			E_STAT_TYPE_PERCENT = 4,
			E_STAT_TYPE_COUNT = 5,
		}

	}

	// BrnNetworkPlayerStats.h:218
	extern BrnNetwork::NetworkPlayerStats::EStatsValue operator++(BrnNetwork::NetworkPlayerStats::EStatsValue &, int);

}

