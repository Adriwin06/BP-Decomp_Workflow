// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// Declaration
		struct GameStats {
			// BrnGameActionData.h:57
			enum IntValueType {
				E_INT_VALUE_TYPE_DISTANCE_DRIVEN_ONLINE = 0,
				E_INT_VALUE_TYPE_DISTANCE_DRIVEN_OFFLINE = 1,
				E_INT_VALUE_TYPE_TIME_PLAYED = 2,
				E_INT_VALUE_TYPE_CARS_COLLECTED = 3,
				E_INT_VALUE_TYPE_BEST_POWER_PARKING = 4,
				E_INT_VALUE_TYPE_BEST_POWER_PARKING_BETWEEN_OTHER_PLAYERS = 5,
				E_INT_VALUE_TYPE_MEDALS_GOLD = 6,
				E_INT_VALUE_TYPE_MEDALS_SILVER = 7,
				E_INT_VALUE_TYPE_MEDALS_BRONZE = 8,
				E_INT_VALUE_TYPE_NUM_EVENT_MEDALS = 9,
				E_INT_VALUE_TYPE_TOTAL_EVENT_MEDALS = 10,
				E_INT_VALUE_TYPE_NUM_ROAD_RULE_MEDALS = 11,
				E_INT_VALUE_TYPE_TOTAL_ROAD_RULE_MEDALS = 12,
				E_INT_VALUE_TYPE_JUMPS = 13,
				E_INT_VALUE_TYPE_SMASHES = 14,
				E_INT_VALUE_TYPE_STUNTS = 15,
				E_INT_VALUE_TYPE_JUMPS_MAX = 16,
				E_INT_VALUE_TYPE_SMASHES_MAX = 17,
				E_INT_VALUE_TYPE_STUNTS_MAX = 18,
				E_INT_VALUE_TYPE_TAKEDOWNS = 19,
				E_INT_VALUE_TYPE_BEST_SHOWTIME = 20,
				E_INT_VALUE_TYPE_BEST_BOOST_CHAIN = 21,
				E_INT_VALUE_TYPE_BEST_DRIFT = 22,
				E_INT_VALUE_TYPE_BEST_ONCOMING = 23,
				E_INT_VALUE_TYPE_BEST_NO_BARREL_ROLLS = 24,
				E_INT_VALUE_TYPE_TOTAL_WINS_FOR_NEXT_RANK = 25,
				E_INT_VALUE_TYPE_TOTAL_CARS_TO_SHUTDOWN = 26,
				E_INT_VALUE_TYPE_EVENTS_FOUND = 27,
				E_INT_VALUE_TYPE_EVENTS_TOTAL = 28,
				E_INT_VALUE_TYPE_HIGHEST_STUNT_SCORE = 29,
				E_INT_VALUE_TYPE_TOTALROADSRULED = 30,
				E_INT_VALUE_TYPE_ACHIEVEMENTS = 31,
				E_INT_VALUE_TYPE_COUNT = 32,
			}

			// BrnGameActionData.h:100
			enum FloatValueType {
				E_FLOAT_VALUE_TYPE_BEST_AIRTIME = 0,
				E_FLOAT_VALUE_TYPE_BEST_SPIN = 1,
				E_FLOAT_VALUE_PERCENTAGE_COMPLETE = 2,
				E_FLOAT_VALUE_TYPE_COUNT = 3,
			}

			// BrnGameActionData.h:109
			enum IdValueType {
				E_ID_VALUE_TYPE_FAVOURITE_CAR = 0,
				E_ID_VALUE_TYPE_FORGOTTEN_CAR = 1,
				E_ID_VALUE_TYPE_NEMESIS = 2,
				E_ID_VALUE_TYPE_COUNT = 3,
			}

		}

	}

}

// BrnGameActionData.h:53
struct BrnGameState::GameStateModuleIO::GameStats {
private:
	// BrnGameActionData.h:196
	CgsID[3] maIdValues;

	// BrnGameActionData.h:197
	int32_t[32] maIntValues;

	// BrnGameActionData.h:198
	float32_t[3] maFloatValues;

	// BrnGameActionData.h:200
	int32_t[13] maTakedownTypeCounts;

	// BrnGameActionData.h:201
	int32_t[2] maRoadsRuledCounts;

	// BrnGameActionData.h:203
	int32_t[3][5] maaiMaxStuntElementsPerCounty;

	// BrnGameActionData.h:204
	int32_t[3][5] maaiCurrentStuntElementsPerCounty;

	// BrnGameActionData.h:206
	int32_t miTotalRoads;

public:
	// BrnGameActionData.h:119
	void Construct();

	// BrnGameActionData.h:123
	int32_t GetValue(BrnGameState::GameStateModuleIO::GameStats::IntValueType) const;

	// BrnGameActionData.h:127
	CgsID GetValue(BrnGameState::GameStateModuleIO::GameStats::IdValueType) const;

	// BrnGameActionData.h:131
	float32_t GetValue(BrnGameState::GameStateModuleIO::GameStats::FloatValueType) const;

	// BrnGameActionData.h:135
	int32_t GetTakedownTypeCount(BrnGameState::ETakedownType) const;

	// BrnGameActionData.h:139
	int32_t GetRoadsRuledCount(BrnStreetData::ScoreType) const;

	// BrnGameActionData.h:142
	int32_t GetTotalRoads() const;

	// BrnGameActionData.h:147
	void SetValue(BrnGameState::GameStateModuleIO::GameStats::IntValueType, int32_t);

	// BrnGameActionData.h:152
	void SetValue(BrnGameState::GameStateModuleIO::GameStats::IdValueType, CgsID);

	// BrnGameActionData.h:157
	void SetValue(BrnGameState::GameStateModuleIO::GameStats::FloatValueType, float32_t);

	// BrnGameActionData.h:162
	void SetTakedownTypeCount(BrnGameState::ETakedownType, int32_t);

	// BrnGameActionData.h:167
	void SetRoadsRuledCount(BrnStreetData::ScoreType, int32_t);

	// BrnGameActionData.h:171
	void SetTotalRoads(int32_t);

	// BrnGameActionData.h:176
	int32_t GetMaxStuntElementPerCounty(BrnGameState::StuntElementType, BrnWorld::ECounty) const;

	// BrnGameActionData.h:181
	int32_t GetCurrentStuntElementPerCounty(BrnGameState::StuntElementType, BrnWorld::ECounty) const;

	// BrnGameActionData.h:187
	void SetMaxStuntElementPerCounty(BrnGameState::StuntElementType, BrnWorld::ECounty, int32_t);

	// BrnGameActionData.h:193
	void SetCurrentStuntElementPerCounty(BrnGameState::StuntElementType, BrnWorld::ECounty, int32_t);

}

// BrnGameActionData.h:219
struct BrnGameState::GameStateModuleIO::PlayerInfo {
private:
	// BrnGameActionData.h:244
	char[32] macName;

	// BrnGameActionData.h:245
	CgsID mCarId;

	// BrnGameActionData.h:246
	int32_t miViolationPoints;

	// BrnGameActionData.h:247
	int32_t miViolationPointsToNextRank;

	// BrnGameActionData.h:248
	int32_t miCarUnlockedCount;

	// BrnGameActionData.h:249
	int32_t miRank;

public:
	// BrnGameActionData.h:229
	void Construct(const char *, CgsID, int32_t, int32_t, int32_t, int32_t, int32_t);

	// BrnGameActionData.h:232
	const char * GetName() const;

	// BrnGameActionData.h:235
	CgsID GetCarId() const;

	// BrnGameActionData.h:238
	int32_t GetCarUnlockedCount() const;

	// BrnGameActionData.h:241
	int32_t GetRank() const;

}

// BrnGameActionData.h:312
struct BrnGameState::GameStateModuleIO::LandmarkVariableInfo {
private:
	// BrnGameActionData.h:326
	Race mPresetRace;

	// BrnGameActionData.h:327
	int32_t miCustomRaceCount;

public:
	// BrnGameActionData.h:317
	void Construct(const Race *, int32_t);

	// BrnGameActionData.h:320
	const Race * GetPresetRace() const;

	// BrnGameActionData.h:323
	int32_t GetCustomRaceCount() const;

}

