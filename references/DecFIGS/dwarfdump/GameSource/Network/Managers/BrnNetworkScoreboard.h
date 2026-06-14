// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkScoreboard.h:30
	const int32_t KI_MAX_SCOREBOARD_COLUMNS = 10;

	// BrnNetworkScoreboard.h:31
	const int32_t KI_MAX_SCOREBOARD_ROWS = 8;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct ScoreboardColumn {
		// BrnNetworkScoreboard.h:50
		enum EDataType {
			E_DATATYPE_START = 0,
			E_DATATYPE_NUMBER = 0,
			E_DATATYPE_PERCENT = 1,
			E_DATATYPE_NAME = 2,
			E_DATATYPE_STRING = 3,
			E_DATATYPE_CAR_CGS_ID = 4,
			E_DATATYPE_TIME = 5,
			E_DATATYPE_DISTANCE = 6,
			E_DATATYPE_CURRENCY = 7,
			E_DATATYPE_COUNT = 8,
		}

	}

	// BrnNetworkScoreboard.h:30
	const int32_t KI_MAX_SCOREBOARD_COLUMNS = 10;

	// BrnNetworkScoreboard.h:31
	const int32_t KI_MAX_SCOREBOARD_ROWS = 8;

}

// BrnNetworkScoreboard.h:46
struct BrnNetwork::ScoreboardColumn {
private:
	// BrnNetworkScoreboard.h:107
	BrnNetwork::ScoreboardColumn::EDataType meDataType;

	// BrnNetworkScoreboard.h:108
	int16_t miWidth;

	// BrnNetworkScoreboard.h:111
	char[31] macTitle;

	// BrnNetworkScoreboard.h:112
	int8_t miStyle;

public:
	// BrnNetworkScoreboard.h:67
	void Construct();

	// BrnNetworkScoreboard.h:75
	bool Prepare(const char *, int32_t, int32_t, BrnNetwork::ScoreboardColumn::EDataType);

	// BrnNetworkScoreboard.h:79
	bool Release();

	// BrnNetworkScoreboard.h:83
	void Destruct();

	// BrnNetworkScoreboard.h:87
	void Clear();

	// BrnNetworkScoreboard.h:91
	const char * GetTitle() const;

	// BrnNetworkScoreboard.h:95
	int32_t GetWidth() const;

	// BrnNetworkScoreboard.h:99
	int32_t GetStyle() const;

	// BrnNetworkScoreboard.h:102
	BrnNetwork::ScoreboardColumn::EDataType GetType() const;

}

// BrnNetworkScoreboard.h:125
struct BrnNetwork::ScoreboardRow {
private:
	// BrnNetworkScoreboard.h:157
	char[10][31] maacData;

	// BrnNetworkScoreboard.h:160
	int8_t miNumberOfColumns;

public:
	// BrnNetworkScoreboard.h:130
	void Construct();

	// BrnNetworkScoreboard.h:134
	bool Release();

	// BrnNetworkScoreboard.h:138
	void Destruct();

	// BrnNetworkScoreboard.h:142
	void Clear();

	// BrnNetworkScoreboard.h:147
	void AddCell(const char *);

	// BrnNetworkScoreboard.h:152
	const char * GetData(int32_t) const;

}

// BrnNetworkScoreboard.h:173
struct BrnNetwork::Scoreboard {
private:
	// BrnNetworkScoreboard.h:242
	ScoreboardColumn[10] maColumns;

	// BrnNetworkScoreboard.h:245
	ScoreboardRow[8] maRows;

	// BrnNetworkScoreboard.h:247
	char[31] macTitle;

	// BrnNetworkScoreboard.h:250
	int8_t miNumberOfColumns;

	// BrnNetworkScoreboard.h:253
	int8_t miNumberOfRows;

	// BrnNetworkScoreboard.h:256
	int8_t miNumberOfRowsBefore;

	// BrnNetworkScoreboard.h:259
	int8_t miNumberOfRowsAfter;

public:
	// BrnNetworkScoreboard.h:178
	void Construct();

	// BrnNetworkScoreboard.h:183
	bool Prepare(const char *);

	// BrnNetworkScoreboard.h:187
	bool Release();

	// BrnNetworkScoreboard.h:191
	void Destruct();

	// BrnNetworkScoreboard.h:195
	int32_t GetNumberOfRows() const;

	// BrnNetworkScoreboard.h:199
	int32_t GetNumberOfColumns() const;

	// BrnNetworkScoreboard.h:204
	const ScoreboardColumn * GetColumn(int32_t) const;

	// BrnNetworkScoreboard.h:209
	const ScoreboardRow * GetRow(int32_t) const;

	// BrnNetworkScoreboard.h:213
	const char * GetTitle() const;

	// BrnNetworkScoreboard.h:218
	void AddRow(ScoreboardRow *);

	// BrnNetworkScoreboard.h:223
	void AddColumn(ScoreboardColumn *);

	// BrnNetworkScoreboard.h:229
	void AddNumberBeforeAndAfter(int8_t, int8_t);

	// BrnNetworkScoreboard.h:233
	int8_t GetNumberBefore() const;

	// BrnNetworkScoreboard.h:237
	int8_t GetNumberAfter() const;

private:
	// BrnNetworkScoreboard.h:264
	void ClearAllScoreboardData();

	// BrnNetworkScoreboard.h:268
	void ClearAllRowData();

	// BrnNetworkScoreboard.h:272
	void ClearAllColumnData();

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct ScoreboardColumn {
		// BrnNetworkScoreboard.h:50
		enum EDataType {
			E_DATATYPE_START = 0,
			E_DATATYPE_NUMBER = 0,
			E_DATATYPE_PERCENT = 1,
			E_DATATYPE_NAME = 2,
			E_DATATYPE_STRING = 3,
			E_DATATYPE_CAR_CGS_ID = 4,
			E_DATATYPE_TIME = 5,
			E_DATATYPE_DISTANCE = 6,
			E_DATATYPE_CURRENCY = 7,
			E_DATATYPE_COUNT = 8,
		}

	}

	// BrnNetworkScoreboard.h:30
	const int32_t KI_MAX_SCOREBOARD_COLUMNS = 10;

	// BrnNetworkScoreboard.h:31
	const int32_t KI_MAX_SCOREBOARD_ROWS = 8;

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct ScoreboardColumn {
		// BrnNetworkScoreboard.h:50
		enum EDataType {
			E_DATATYPE_START = 0,
			E_DATATYPE_NUMBER = 0,
			E_DATATYPE_PERCENT = 1,
			E_DATATYPE_NAME = 2,
			E_DATATYPE_STRING = 3,
			E_DATATYPE_CAR_CGS_ID = 4,
			E_DATATYPE_TIME = 5,
			E_DATATYPE_DISTANCE = 6,
			E_DATATYPE_CURRENCY = 7,
			E_DATATYPE_COUNT = 8,
		}

	}

	// BrnNetworkScoreboard.h:30
	const int32_t KI_MAX_SCOREBOARD_COLUMNS = 10;

	// BrnNetworkScoreboard.h:31
	const int32_t KI_MAX_SCOREBOARD_ROWS = 8;

}

