// ChallengeListEntry.h:47
extern const int32_t KI_MAX_TARGETS_PER_CHALLENGE_ACTION = 2;

// ChallengeListEntry.h:48
extern const uint8_t KU_MAX_LOCATIONS_PER_ACTION = 4;

// ChallengeListEntry.h:127
extern const uint8_t KX_MODIFIER_NONE;

// ChallengeListEntry.h:328
extern const int32_t KI_MAX_ACTIONS_PER_CHALLENGE = 2;

// ChallengeListEntry.h:329
extern const int32_t KI_MAX_CHALLENGE_STRING_ID_LENGTH = 16;

// BrnAssetIds.h:25
namespace BrnResource {
	// Declaration
	struct ChallengeListEntryAction {
		// ChallengeListEntry.h:50
		enum ELocationType {
			E_LOCATION_TYPE_ANYWHERE = 0,
			E_LOCATION_TYPE_DISTRICT = 1,
			E_LOCATION_TYPE_TRIGGER = 2,
			E_LOCATION_TYPE_ROAD = 3,
			E_LOCATION_TYPE_ROAD_NO_MARKER = 4,
			E_LOCATION_TYPE_COUNT = 5,
		}

		// ChallengeListEntry.h:61
		enum EChallengeActionType {
			E_CHALLENGE_ACTION_MINIMUM_SPEED = 0,
			E_CHALLENGE_ACTION_IN_AIR = 1,
			E_CHALLENGE_ACTION_AIR_DISTANCE = 2,
			E_CHALLENGE_ACTION_LEAP_CARS = 3,
			E_CHALLENGE_ACTION_DRIFT = 4,
			E_CHALLENGE_ACTION_NEAR_MISS = 5,
			E_CHALLENGE_ACTION_BARREL_ROLLS = 6,
			E_CHALLENGE_ACTION_ONCOMING = 7,
			E_CHALLENGE_ACTION_FLATSPIN = 8,
			E_CHALLENGE_ACTION_LAND_SUCCESSFUL = 9,
			E_CHALLENGE_ACTION_ROAD_RULE_TIME = 10,
			E_CHALLENGE_ACTION_ROAD_RULE_CRASH = 11,
			E_CHALLENGE_ACTION_PLAYER_POWER_PARKING = 12,
			E_CHALLENGE_ACTION_TRAFFIC_POWER_PARKING = 13,
			E_CHALLENGE_ACTION_CRASH_INTO_PLAYER = 14,
			E_CHALLENGE_ACTION_BURNOUTS = 15,
			E_CHALLENGE_ACTION_MEET_UP = 16,
			E_CHALLENGE_ACTION_BILLBOARD = 17,
			E_CHALLENGE_ACTION_BOOST_TIME = 18,
			E_CHALLENGE_ACTION_BARREL_ROLLS_REVERSE = 19,
			E_CHALLENGE_ACTION_FLATSPIN_REVERSE = 20,
			E_CHALLENGE_ACTION_LAND_SUCCESSFUL_REVERSE = 21,
			E_ACTION_COUNT = 22,
		}

		// ChallengeListEntry.h:90
		enum EChallengeDataType {
			E_CHALLENGE_DATA_TYPE_CRASHES = 0,
			E_CHALLENGE_DATA_TYPE_NEAR_MISS = 1,
			E_CHALLENGE_DATA_TYPE_ONCOMING = 2,
			E_CHALLENGE_DATA_TYPE_DRIFT = 3,
			E_CHALLENGE_DATA_TYPE_AIR = 4,
			E_CHALLENGE_DATA_TYPE_AIR_DISTANCE = 5,
			E_CHALLENGE_DATA_TYPE_BARREL_ROLLS = 6,
			E_CHALLENGE_DATA_TYPE_FLAT_SPINS = 7,
			E_CHALLENGE_DATA_TYPE_CARS_LEAPT = 8,
			E_CHALLENGE_DATA_TYPE_SPEED_ROAD_RULE = 9,
			E_CHALLENGE_DATA_TYPE_CRASH_ROAD_RULE = 10,
			E_CHALLENGE_DATA_TYPE_SUCCESSFUL_LANDINGS = 11,
			E_CHALLENGE_DATA_TYPE_BURNOUTS = 12,
			E_CHALLENGE_DATA_TYPE_POWER_PARKS = 13,
			E_CHALLENGE_DATA_TYPE_PERCENTAGE = 14,
			E_CHALLENGE_DATA_TYPE_MEET_UP = 15,
			E_CHALLENGE_DATA_TYPE_BILLBOARDS = 16,
			E_CHALLENGE_DATA_TYPE_BOOST_TIME = 17,
			E_CHALLENGE_DATA_TYPE_COUNT = 18,
		}

		// ChallengeListEntry.h:114
		enum EChallengeCoopType {
			E_CHALLENGE_COOP_TYPE_ONCE = 0,
			E_CHALLENGE_COOP_TYPE_INDIVIDUAL = 1,
			E_CHALLENGE_COOP_TYPE_INDIVIDUAL_ACCUMULATION = 2,
			E_CHALLENGE_COOP_TYPE_SIMULTANEOUS = 3,
			E_CHALLENGE_COOP_TYPE_CUMULATIVE = 4,
			E_CHALLENGE_COOP_TYPE_AVERAGE = 5,
			E_CHALLENGE_COOP_TYPE_COUNT = 6,
		}

		// ChallengeListEntry.h:134
		enum ECombineActionType {
			E_COMBINE_ACTION_CHAIN = 0,
			E_COMBINE_ACTION_FAILURE_RESETS_CHAIN = 1,
			E_COMBINE_ACTION_FAILURE_RESETS_EVERYONE = 2,
			E_COMBINE_ACTION_SIMULTANEOUS = 3,
			E_COMBINE_ACTION_INDEPENDENT = 4,
			E_COMBINE_ACTION_COUNT = 5,
		}

	}

	// Declaration
	struct ChallengeListEntry {
		// ChallengeListEntry.h:331
		enum ECarRestrictionType {
			E_CAR_TYPE_NONE = 0,
			E_CAR_TYPE_DANGER = 1,
			E_CAR_TYPE_AGGRESSION = 2,
			E_CAR_TYPE_STUNT = 3,
			E_CAR_TYPE_COUNT = 4,
		}

		// ChallengeListEntry.h:341
		enum EFreeburnChallengeStyle {
			E_FREEBURN_STYLE_NONE = 0,
			E_FREEBURN_STYLE_NORMAL = 1,
			E_FREEBURN_STYLE_ROAD_RULES_TIME = 2,
			E_FREEBURN_STYLE_ROAD_RULES_CRASH = 3,
			E_FREEBURN_STYLE_COUNT = 4,
		}

		// ChallengeListEntry.h:351
		enum EChallengeDifficulty {
			E_CHALLENGE_DIFFICULTY_EASY = 0,
			E_CHALLENGE_DIFFICULTY_MEDIUM = 1,
			E_CHALLENGE_DIFFICULTY_HARD = 2,
			E_CHALLENGE_DIFFICULTY_VERY_HARD = 3,
			E_CHALLENGE_DIFFICULTY_COUNT = 4,
		}

	}

}

// ChallengeListEntry.h:44
struct BrnResource::ChallengeListEntryAction {
	// ChallengeListEntry.h:47
	extern const int32_t KI_MAX_TARGETS_PER_CHALLENGE_ACTION = 2;

	// ChallengeListEntry.h:48
	extern const uint8_t KU_MAX_LOCATIONS_PER_ACTION = 4;

	// ChallengeListEntry.h:127
	extern const uint8_t KX_MODIFIER_NONE;

	// ChallengeListEntry.h:128
	extern const uint8_t KX_MODIFIER_WITHOUT_CRASHING = 1;

	// ChallengeListEntry.h:129
	extern const uint8_t KX_MODIFIER_PRISTINE = 2;

	// ChallengeListEntry.h:130
	extern const uint8_t KX_MODIFIER_HEAD_ON = 4;

	// ChallengeListEntry.h:131
	extern const uint8_t KX_MODIFIER_IN_AIR = 8;

	// ChallengeListEntry.h:132
	extern const uint8_t KX_MODIFIER_BANK_FOR_SUCCESS = 16;

private:
	// ChallengeListEntry.h:294
	uint8_t muActionType;

	// ChallengeListEntry.h:295
	uint8_t muCoopType;

	// ChallengeListEntry.h:296
	uint8_t mxModifier;

	// ChallengeListEntry.h:297
	uint8_t muCombineActionType;

	// ChallengeListEntry.h:299
	uint8_t muNumLocations;

	// ChallengeListEntry.h:300
	uint8_t[4] mauLocationType;

	// Unknown accessibility
	// ChallengeListEntry.h:146
	union LocationData {
		// ChallengeListEntry.h:147
		BrnWorld::EDistrict meDistrict;

		// ChallengeListEntry.h:148
		CgsID mTriggerID;

		// ChallengeListEntry.h:149
		CgsID mRoadID;

	}
	// ChallengeListEntry.h:301
	ChallengeListEntryAction::LocationData[4] maLocationData;

	// ChallengeListEntry.h:303
	uint8_t muNumTargets;

	// ChallengeListEntry.h:304
	int32_t[2] maiTargetValue;

	// ChallengeListEntry.h:305
	uint8_t[2] mau8TargetDataType;

	// ChallengeListEntry.h:307
	float32_t mfTimeLimit;

	// ChallengeListEntry.h:308
	float32_t mfConvoyTime;

	// ChallengeListEntry.h:310
	uint32_t muPropType;

public:
	// ChallengeListEntry.h:153
	void Construct();

	// ChallengeListEntry.h:156
	void FixUp(void *);

	// ChallengeListEntry.h:159
	void FixDown(void *);

	// ChallengeListEntry.h:162
	BrnResource::ChallengeListEntryAction::EChallengeActionType GetActionType() const;

	// ChallengeListEntry.h:165
	bool HasTimeLimit() const;

	// ChallengeListEntry.h:169
	float32_t GetTimeLimit() const;

	// ChallengeListEntry.h:172
	bool HasConvoyTime() const;

	// ChallengeListEntry.h:175
	float32_t GetConvoyTime() const;

	// ChallengeListEntry.h:179
	int32_t GetTargetValue(int32_t) const;

	// ChallengeListEntry.h:183
	BrnResource::ChallengeListEntryAction::EChallengeDataType GetTargetDataType(int32_t) const;

	// ChallengeListEntry.h:187
	CgsID GetCgsIDTarget(int32_t) const;

	// ChallengeListEntry.h:190
	int32_t GetNumTargets() const;

	// ChallengeListEntry.h:193
	BrnResource::ChallengeListEntryAction::ECombineActionType GetCombineAction() const;

	// ChallengeListEntry.h:196
	const BrnResource::ChallengeListEntryAction::EChallengeCoopType GetCoopType() const;

	// ChallengeListEntry.h:199
	uint8_t GetModifier() const;

	// ChallengeListEntry.h:202
	uint8_t GetNumLocations() const;

	// ChallengeListEntry.h:206
	BrnResource::ChallengeListEntryAction::ELocationType GetLocationType(uint8_t) const;

	// ChallengeListEntry.h:210
	BrnWorld::EDistrict GetDistrict(uint8_t) const;

	// ChallengeListEntry.h:214
	CgsID GetTriggerID(uint8_t) const;

	// ChallengeListEntry.h:218
	CgsID GetRoadID(uint8_t) const;

	// ChallengeListEntry.h:223
	void SetActionType(BrnResource::ChallengeListEntryAction::EChallengeActionType);

	// ChallengeListEntry.h:226
	void SetTimeLimit(float32_t);

	// ChallengeListEntry.h:230
	void SetConvoyTime(float32_t);

	// ChallengeListEntry.h:234
	void SetNumTargets(int32_t);

	// ChallengeListEntry.h:239
	void SetTargetValue(int32_t, int32_t);

	// ChallengeListEntry.h:244
	void SetTargetDataType(int32_t, BrnResource::ChallengeListEntryAction::EChallengeDataType);

	// ChallengeListEntry.h:249
	void SetCgsIDTarget(int32_t, CgsID);

	// ChallengeListEntry.h:253
	void SetCombineAction(BrnResource::ChallengeListEntryAction::ECombineActionType);

	// ChallengeListEntry.h:257
	void SetCoopType(BrnResource::ChallengeListEntryAction::EChallengeCoopType);

	// ChallengeListEntry.h:261
	void SetModifier(uint8_t);

	// ChallengeListEntry.h:270
	void SetNumLocations(uint8_t);

	// ChallengeListEntry.h:275
	void SetLocationType(uint8_t, BrnResource::ChallengeListEntryAction::ELocationType);

	// ChallengeListEntry.h:280
	void SetDistrict(uint8_t, BrnWorld::EDistrict);

	// ChallengeListEntry.h:285
	void SetTriggerID(uint8_t, CgsID);

	// ChallengeListEntry.h:291
	void SetRoadID(uint8_t, CgsID, bool);

}

// ChallengeListEntry.h:324
struct BrnResource::ChallengeListEntry {
	// ChallengeListEntry.h:327
	extern const int32_t KI_CHALLENGE_VERSION = 1;

	// ChallengeListEntry.h:328
	extern const int32_t KI_MAX_ACTIONS_PER_CHALLENGE = 2;

	// ChallengeListEntry.h:329
	extern const int32_t KI_MAX_CHALLENGE_STRING_ID_LENGTH = 16;

private:
	// ChallengeListEntry.h:453
	ChallengeListEntryAction[2] maAction;

	// ChallengeListEntry.h:455
	char[16] macDescriptionStringID;

	// ChallengeListEntry.h:456
	char[16] macTitleStringID;

	// ChallengeListEntry.h:458
	CgsID mChallengeID;

	// ChallengeListEntry.h:459
	CgsID mCarID;

	// ChallengeListEntry.h:460
	uint8_t muCarType;

	// ChallengeListEntry.h:461
	int8_t miCarColourIndex;

	// ChallengeListEntry.h:462
	int8_t miCarColourPaletteIndex;

	// ChallengeListEntry.h:463
	uint8_t muNumPlayers;

	// ChallengeListEntry.h:464
	uint8_t muNumActions;

	// ChallengeListEntry.h:465
	uint8_t muDifficulty;

public:
	// ChallengeListEntry.h:362
	void Construct();

	// ChallengeListEntry.h:365
	void FixUp(void *);

	// ChallengeListEntry.h:368
	void FixDown(void *);

	// ChallengeListEntry.h:372
	CgsID GetChallengeID() const;

	// ChallengeListEntry.h:375
	int32_t GetNumPlayers() const;

	// ChallengeListEntry.h:378
	int32_t GetOriginalNumPlayers() const;

	// ChallengeListEntry.h:381
	int32_t GetNumActions() const;

	// ChallengeListEntry.h:384
	const ChallengeListEntryAction * GetAction(int32_t) const;

	// ChallengeListEntry.h:387
	BrnResource::ChallengeListEntry::EChallengeDifficulty GetDifficulty() const;

	// ChallengeListEntry.h:390
	const char * GetDescriptionStringID() const;

	// ChallengeListEntry.h:393
	const char * GetTitleStringID() const;

	// ChallengeListEntry.h:396
	BrnResource::ChallengeListEntry::EFreeburnChallengeStyle GetChallengeStyle() const;

	// ChallengeListEntry.h:399
	BrnResource::ChallengeListEntry::ECarRestrictionType GetCarType() const;

	// ChallengeListEntry.h:402
	CgsID GetCarID() const;

	// ChallengeListEntry.h:409
	void SetChallengeID(CgsID);

	// ChallengeListEntry.h:412
	void SetNumPlayers(int32_t);

	// ChallengeListEntry.h:415
	void SetNewNumPlayers(int32_t);

	// ChallengeListEntry.h:418
	void ResetNumPlayers();

	// ChallengeListEntry.h:421
	void SetNumActions(int32_t);

	// ChallengeListEntry.h:424
	ChallengeListEntryAction * GetAction(int32_t);

	// ChallengeListEntry.h:427
	void SetDifficulty(BrnResource::ChallengeListEntry::EChallengeDifficulty);

	// ChallengeListEntry.h:431
	void SetDescriptionStringID(const char *);

	// ChallengeListEntry.h:435
	void SetTitleStringID(const char *);

	// ChallengeListEntry.h:438
	void SetCarType(BrnResource::ChallengeListEntry::ECarRestrictionType);

	// ChallengeListEntry.h:441
	void SetCarID(CgsID);

	// ChallengeListEntry.h:444
	void SetCarColours(int32_t, int32_t);

	// ChallengeListEntry.h:447
	int32_t GetCarColourIndex();

	// ChallengeListEntry.h:450
	int32_t GetCarColourPaletteIndex();

}

// ChallengeListEntry.h:27
namespace BrnResource {
	// Declaration
	struct ChallengeListEntryAction {
		// ChallengeListEntry.h:50
		enum ELocationType {
			E_LOCATION_TYPE_ANYWHERE = 0,
			E_LOCATION_TYPE_DISTRICT = 1,
			E_LOCATION_TYPE_TRIGGER = 2,
			E_LOCATION_TYPE_ROAD = 3,
			E_LOCATION_TYPE_ROAD_NO_MARKER = 4,
			E_LOCATION_TYPE_COUNT = 5,
		}

		// ChallengeListEntry.h:61
		enum EChallengeActionType {
			E_CHALLENGE_ACTION_MINIMUM_SPEED = 0,
			E_CHALLENGE_ACTION_IN_AIR = 1,
			E_CHALLENGE_ACTION_AIR_DISTANCE = 2,
			E_CHALLENGE_ACTION_LEAP_CARS = 3,
			E_CHALLENGE_ACTION_DRIFT = 4,
			E_CHALLENGE_ACTION_NEAR_MISS = 5,
			E_CHALLENGE_ACTION_BARREL_ROLLS = 6,
			E_CHALLENGE_ACTION_ONCOMING = 7,
			E_CHALLENGE_ACTION_FLATSPIN = 8,
			E_CHALLENGE_ACTION_LAND_SUCCESSFUL = 9,
			E_CHALLENGE_ACTION_ROAD_RULE_TIME = 10,
			E_CHALLENGE_ACTION_ROAD_RULE_CRASH = 11,
			E_CHALLENGE_ACTION_PLAYER_POWER_PARKING = 12,
			E_CHALLENGE_ACTION_TRAFFIC_POWER_PARKING = 13,
			E_CHALLENGE_ACTION_CRASH_INTO_PLAYER = 14,
			E_CHALLENGE_ACTION_BURNOUTS = 15,
			E_CHALLENGE_ACTION_MEET_UP = 16,
			E_CHALLENGE_ACTION_BILLBOARD = 17,
			E_CHALLENGE_ACTION_BOOST_TIME = 18,
			E_CHALLENGE_ACTION_BARREL_ROLLS_REVERSE = 19,
			E_CHALLENGE_ACTION_FLATSPIN_REVERSE = 20,
			E_CHALLENGE_ACTION_LAND_SUCCESSFUL_REVERSE = 21,
			E_ACTION_COUNT = 22,
		}

		// ChallengeListEntry.h:90
		enum EChallengeDataType {
			E_CHALLENGE_DATA_TYPE_CRASHES = 0,
			E_CHALLENGE_DATA_TYPE_NEAR_MISS = 1,
			E_CHALLENGE_DATA_TYPE_ONCOMING = 2,
			E_CHALLENGE_DATA_TYPE_DRIFT = 3,
			E_CHALLENGE_DATA_TYPE_AIR = 4,
			E_CHALLENGE_DATA_TYPE_AIR_DISTANCE = 5,
			E_CHALLENGE_DATA_TYPE_BARREL_ROLLS = 6,
			E_CHALLENGE_DATA_TYPE_FLAT_SPINS = 7,
			E_CHALLENGE_DATA_TYPE_CARS_LEAPT = 8,
			E_CHALLENGE_DATA_TYPE_SPEED_ROAD_RULE = 9,
			E_CHALLENGE_DATA_TYPE_CRASH_ROAD_RULE = 10,
			E_CHALLENGE_DATA_TYPE_SUCCESSFUL_LANDINGS = 11,
			E_CHALLENGE_DATA_TYPE_BURNOUTS = 12,
			E_CHALLENGE_DATA_TYPE_POWER_PARKS = 13,
			E_CHALLENGE_DATA_TYPE_PERCENTAGE = 14,
			E_CHALLENGE_DATA_TYPE_MEET_UP = 15,
			E_CHALLENGE_DATA_TYPE_BILLBOARDS = 16,
			E_CHALLENGE_DATA_TYPE_BOOST_TIME = 17,
			E_CHALLENGE_DATA_TYPE_COUNT = 18,
		}

		// ChallengeListEntry.h:114
		enum EChallengeCoopType {
			E_CHALLENGE_COOP_TYPE_ONCE = 0,
			E_CHALLENGE_COOP_TYPE_INDIVIDUAL = 1,
			E_CHALLENGE_COOP_TYPE_INDIVIDUAL_ACCUMULATION = 2,
			E_CHALLENGE_COOP_TYPE_SIMULTANEOUS = 3,
			E_CHALLENGE_COOP_TYPE_CUMULATIVE = 4,
			E_CHALLENGE_COOP_TYPE_AVERAGE = 5,
			E_CHALLENGE_COOP_TYPE_COUNT = 6,
		}

		// ChallengeListEntry.h:134
		enum ECombineActionType {
			E_COMBINE_ACTION_CHAIN = 0,
			E_COMBINE_ACTION_FAILURE_RESETS_CHAIN = 1,
			E_COMBINE_ACTION_FAILURE_RESETS_EVERYONE = 2,
			E_COMBINE_ACTION_SIMULTANEOUS = 3,
			E_COMBINE_ACTION_INDEPENDENT = 4,
			E_COMBINE_ACTION_COUNT = 5,
		}

	}

	// Declaration
	struct ChallengeListEntry {
		// ChallengeListEntry.h:331
		enum ECarRestrictionType {
			E_CAR_TYPE_NONE = 0,
			E_CAR_TYPE_DANGER = 1,
			E_CAR_TYPE_AGGRESSION = 2,
			E_CAR_TYPE_STUNT = 3,
			E_CAR_TYPE_COUNT = 4,
		}

		// ChallengeListEntry.h:341
		enum EFreeburnChallengeStyle {
			E_FREEBURN_STYLE_NONE = 0,
			E_FREEBURN_STYLE_NORMAL = 1,
			E_FREEBURN_STYLE_ROAD_RULES_TIME = 2,
			E_FREEBURN_STYLE_ROAD_RULES_CRASH = 3,
			E_FREEBURN_STYLE_COUNT = 4,
		}

		// ChallengeListEntry.h:351
		enum EChallengeDifficulty {
			E_CHALLENGE_DIFFICULTY_EASY = 0,
			E_CHALLENGE_DIFFICULTY_MEDIUM = 1,
			E_CHALLENGE_DIFFICULTY_HARD = 2,
			E_CHALLENGE_DIFFICULTY_VERY_HARD = 3,
			E_CHALLENGE_DIFFICULTY_COUNT = 4,
		}

	}

	struct ChallengeListResource;

	struct ChallengeSlot;

	struct ChallengeList;

	struct CarStatsCollection;

	struct VehicleListEntryAudioData;

	struct VehicleListResource;

	struct VehicleSlot;

	struct SponsorCarSlot;

	struct VehicleList;

	struct WheelList;

	struct HudMessageController;

	struct HeapResourceAllocator;

	struct LinearResourceAllocator;

	struct PopupController;

	struct HudMessageEvent;

}

// ChallengeListEntry.h:128
extern const uint8_t KX_MODIFIER_WITHOUT_CRASHING = 1;

// ChallengeListEntry.h:129
extern const uint8_t KX_MODIFIER_PRISTINE = 2;

// ChallengeListEntry.h:130
extern const uint8_t KX_MODIFIER_HEAD_ON = 4;

// ChallengeListEntry.h:131
extern const uint8_t KX_MODIFIER_IN_AIR = 8;

// ChallengeListEntry.h:132
extern const uint8_t KX_MODIFIER_BANK_FOR_SUCCESS = 16;

// ChallengeListEntry.h:27
namespace BrnResource {
	// Declaration
	struct ChallengeListEntryAction {
		// ChallengeListEntry.h:50
		enum ELocationType {
			E_LOCATION_TYPE_ANYWHERE = 0,
			E_LOCATION_TYPE_DISTRICT = 1,
			E_LOCATION_TYPE_TRIGGER = 2,
			E_LOCATION_TYPE_ROAD = 3,
			E_LOCATION_TYPE_ROAD_NO_MARKER = 4,
			E_LOCATION_TYPE_COUNT = 5,
		}

		// ChallengeListEntry.h:61
		enum EChallengeActionType {
			E_CHALLENGE_ACTION_MINIMUM_SPEED = 0,
			E_CHALLENGE_ACTION_IN_AIR = 1,
			E_CHALLENGE_ACTION_AIR_DISTANCE = 2,
			E_CHALLENGE_ACTION_LEAP_CARS = 3,
			E_CHALLENGE_ACTION_DRIFT = 4,
			E_CHALLENGE_ACTION_NEAR_MISS = 5,
			E_CHALLENGE_ACTION_BARREL_ROLLS = 6,
			E_CHALLENGE_ACTION_ONCOMING = 7,
			E_CHALLENGE_ACTION_FLATSPIN = 8,
			E_CHALLENGE_ACTION_LAND_SUCCESSFUL = 9,
			E_CHALLENGE_ACTION_ROAD_RULE_TIME = 10,
			E_CHALLENGE_ACTION_ROAD_RULE_CRASH = 11,
			E_CHALLENGE_ACTION_PLAYER_POWER_PARKING = 12,
			E_CHALLENGE_ACTION_TRAFFIC_POWER_PARKING = 13,
			E_CHALLENGE_ACTION_CRASH_INTO_PLAYER = 14,
			E_CHALLENGE_ACTION_BURNOUTS = 15,
			E_CHALLENGE_ACTION_MEET_UP = 16,
			E_CHALLENGE_ACTION_BILLBOARD = 17,
			E_CHALLENGE_ACTION_BOOST_TIME = 18,
			E_CHALLENGE_ACTION_BARREL_ROLLS_REVERSE = 19,
			E_CHALLENGE_ACTION_FLATSPIN_REVERSE = 20,
			E_CHALLENGE_ACTION_LAND_SUCCESSFUL_REVERSE = 21,
			E_ACTION_COUNT = 22,
		}

		// ChallengeListEntry.h:90
		enum EChallengeDataType {
			E_CHALLENGE_DATA_TYPE_CRASHES = 0,
			E_CHALLENGE_DATA_TYPE_NEAR_MISS = 1,
			E_CHALLENGE_DATA_TYPE_ONCOMING = 2,
			E_CHALLENGE_DATA_TYPE_DRIFT = 3,
			E_CHALLENGE_DATA_TYPE_AIR = 4,
			E_CHALLENGE_DATA_TYPE_AIR_DISTANCE = 5,
			E_CHALLENGE_DATA_TYPE_BARREL_ROLLS = 6,
			E_CHALLENGE_DATA_TYPE_FLAT_SPINS = 7,
			E_CHALLENGE_DATA_TYPE_CARS_LEAPT = 8,
			E_CHALLENGE_DATA_TYPE_SPEED_ROAD_RULE = 9,
			E_CHALLENGE_DATA_TYPE_CRASH_ROAD_RULE = 10,
			E_CHALLENGE_DATA_TYPE_SUCCESSFUL_LANDINGS = 11,
			E_CHALLENGE_DATA_TYPE_BURNOUTS = 12,
			E_CHALLENGE_DATA_TYPE_POWER_PARKS = 13,
			E_CHALLENGE_DATA_TYPE_PERCENTAGE = 14,
			E_CHALLENGE_DATA_TYPE_MEET_UP = 15,
			E_CHALLENGE_DATA_TYPE_BILLBOARDS = 16,
			E_CHALLENGE_DATA_TYPE_BOOST_TIME = 17,
			E_CHALLENGE_DATA_TYPE_COUNT = 18,
		}

		// ChallengeListEntry.h:114
		enum EChallengeCoopType {
			E_CHALLENGE_COOP_TYPE_ONCE = 0,
			E_CHALLENGE_COOP_TYPE_INDIVIDUAL = 1,
			E_CHALLENGE_COOP_TYPE_INDIVIDUAL_ACCUMULATION = 2,
			E_CHALLENGE_COOP_TYPE_SIMULTANEOUS = 3,
			E_CHALLENGE_COOP_TYPE_CUMULATIVE = 4,
			E_CHALLENGE_COOP_TYPE_AVERAGE = 5,
			E_CHALLENGE_COOP_TYPE_COUNT = 6,
		}

		// ChallengeListEntry.h:134
		enum ECombineActionType {
			E_COMBINE_ACTION_CHAIN = 0,
			E_COMBINE_ACTION_FAILURE_RESETS_CHAIN = 1,
			E_COMBINE_ACTION_FAILURE_RESETS_EVERYONE = 2,
			E_COMBINE_ACTION_SIMULTANEOUS = 3,
			E_COMBINE_ACTION_INDEPENDENT = 4,
			E_COMBINE_ACTION_COUNT = 5,
		}

	}

	// Declaration
	struct ChallengeListEntry {
		// ChallengeListEntry.h:331
		enum ECarRestrictionType {
			E_CAR_TYPE_NONE = 0,
			E_CAR_TYPE_DANGER = 1,
			E_CAR_TYPE_AGGRESSION = 2,
			E_CAR_TYPE_STUNT = 3,
			E_CAR_TYPE_COUNT = 4,
		}

		// ChallengeListEntry.h:341
		enum EFreeburnChallengeStyle {
			E_FREEBURN_STYLE_NONE = 0,
			E_FREEBURN_STYLE_NORMAL = 1,
			E_FREEBURN_STYLE_ROAD_RULES_TIME = 2,
			E_FREEBURN_STYLE_ROAD_RULES_CRASH = 3,
			E_FREEBURN_STYLE_COUNT = 4,
		}

		// ChallengeListEntry.h:351
		enum EChallengeDifficulty {
			E_CHALLENGE_DIFFICULTY_EASY = 0,
			E_CHALLENGE_DIFFICULTY_MEDIUM = 1,
			E_CHALLENGE_DIFFICULTY_HARD = 2,
			E_CHALLENGE_DIFFICULTY_VERY_HARD = 3,
			E_CHALLENGE_DIFFICULTY_COUNT = 4,
		}

	}

	struct ChallengeListResource;

	struct ChallengeSlot;

	struct ChallengeList;

	struct CarStatsCollection;

	struct VehicleListEntryAudioData;

	struct VehicleListResource;

	struct VehicleSlot;

	struct SponsorCarSlot;

	struct VehicleList;

	struct WheelList;

	struct HeapResourceAllocator;

	struct LinearResourceAllocator;

	struct WheelListEntry;

	struct WheelListResource;

	struct WheelSlot;

}

// VehicleListEntry.h:28
namespace BrnResource {
	// Declaration
	struct ChallengeListEntryAction {
		// ChallengeListEntry.h:50
		enum ELocationType {
			E_LOCATION_TYPE_ANYWHERE = 0,
			E_LOCATION_TYPE_DISTRICT = 1,
			E_LOCATION_TYPE_TRIGGER = 2,
			E_LOCATION_TYPE_ROAD = 3,
			E_LOCATION_TYPE_ROAD_NO_MARKER = 4,
			E_LOCATION_TYPE_COUNT = 5,
		}

		// ChallengeListEntry.h:61
		enum EChallengeActionType {
			E_CHALLENGE_ACTION_MINIMUM_SPEED = 0,
			E_CHALLENGE_ACTION_IN_AIR = 1,
			E_CHALLENGE_ACTION_AIR_DISTANCE = 2,
			E_CHALLENGE_ACTION_LEAP_CARS = 3,
			E_CHALLENGE_ACTION_DRIFT = 4,
			E_CHALLENGE_ACTION_NEAR_MISS = 5,
			E_CHALLENGE_ACTION_BARREL_ROLLS = 6,
			E_CHALLENGE_ACTION_ONCOMING = 7,
			E_CHALLENGE_ACTION_FLATSPIN = 8,
			E_CHALLENGE_ACTION_LAND_SUCCESSFUL = 9,
			E_CHALLENGE_ACTION_ROAD_RULE_TIME = 10,
			E_CHALLENGE_ACTION_ROAD_RULE_CRASH = 11,
			E_CHALLENGE_ACTION_PLAYER_POWER_PARKING = 12,
			E_CHALLENGE_ACTION_TRAFFIC_POWER_PARKING = 13,
			E_CHALLENGE_ACTION_CRASH_INTO_PLAYER = 14,
			E_CHALLENGE_ACTION_BURNOUTS = 15,
			E_CHALLENGE_ACTION_MEET_UP = 16,
			E_CHALLENGE_ACTION_BILLBOARD = 17,
			E_CHALLENGE_ACTION_BOOST_TIME = 18,
			E_CHALLENGE_ACTION_BARREL_ROLLS_REVERSE = 19,
			E_CHALLENGE_ACTION_FLATSPIN_REVERSE = 20,
			E_CHALLENGE_ACTION_LAND_SUCCESSFUL_REVERSE = 21,
			E_ACTION_COUNT = 22,
		}

		// ChallengeListEntry.h:90
		enum EChallengeDataType {
			E_CHALLENGE_DATA_TYPE_CRASHES = 0,
			E_CHALLENGE_DATA_TYPE_NEAR_MISS = 1,
			E_CHALLENGE_DATA_TYPE_ONCOMING = 2,
			E_CHALLENGE_DATA_TYPE_DRIFT = 3,
			E_CHALLENGE_DATA_TYPE_AIR = 4,
			E_CHALLENGE_DATA_TYPE_AIR_DISTANCE = 5,
			E_CHALLENGE_DATA_TYPE_BARREL_ROLLS = 6,
			E_CHALLENGE_DATA_TYPE_FLAT_SPINS = 7,
			E_CHALLENGE_DATA_TYPE_CARS_LEAPT = 8,
			E_CHALLENGE_DATA_TYPE_SPEED_ROAD_RULE = 9,
			E_CHALLENGE_DATA_TYPE_CRASH_ROAD_RULE = 10,
			E_CHALLENGE_DATA_TYPE_SUCCESSFUL_LANDINGS = 11,
			E_CHALLENGE_DATA_TYPE_BURNOUTS = 12,
			E_CHALLENGE_DATA_TYPE_POWER_PARKS = 13,
			E_CHALLENGE_DATA_TYPE_PERCENTAGE = 14,
			E_CHALLENGE_DATA_TYPE_MEET_UP = 15,
			E_CHALLENGE_DATA_TYPE_BILLBOARDS = 16,
			E_CHALLENGE_DATA_TYPE_BOOST_TIME = 17,
			E_CHALLENGE_DATA_TYPE_COUNT = 18,
		}

		// ChallengeListEntry.h:114
		enum EChallengeCoopType {
			E_CHALLENGE_COOP_TYPE_ONCE = 0,
			E_CHALLENGE_COOP_TYPE_INDIVIDUAL = 1,
			E_CHALLENGE_COOP_TYPE_INDIVIDUAL_ACCUMULATION = 2,
			E_CHALLENGE_COOP_TYPE_SIMULTANEOUS = 3,
			E_CHALLENGE_COOP_TYPE_CUMULATIVE = 4,
			E_CHALLENGE_COOP_TYPE_AVERAGE = 5,
			E_CHALLENGE_COOP_TYPE_COUNT = 6,
		}

		// ChallengeListEntry.h:134
		enum ECombineActionType {
			E_COMBINE_ACTION_CHAIN = 0,
			E_COMBINE_ACTION_FAILURE_RESETS_CHAIN = 1,
			E_COMBINE_ACTION_FAILURE_RESETS_EVERYONE = 2,
			E_COMBINE_ACTION_SIMULTANEOUS = 3,
			E_COMBINE_ACTION_INDEPENDENT = 4,
			E_COMBINE_ACTION_COUNT = 5,
		}

	}

	// Declaration
	struct ChallengeListEntry {
		// ChallengeListEntry.h:331
		enum ECarRestrictionType {
			E_CAR_TYPE_NONE = 0,
			E_CAR_TYPE_DANGER = 1,
			E_CAR_TYPE_AGGRESSION = 2,
			E_CAR_TYPE_STUNT = 3,
			E_CAR_TYPE_COUNT = 4,
		}

		// ChallengeListEntry.h:341
		enum EFreeburnChallengeStyle {
			E_FREEBURN_STYLE_NONE = 0,
			E_FREEBURN_STYLE_NORMAL = 1,
			E_FREEBURN_STYLE_ROAD_RULES_TIME = 2,
			E_FREEBURN_STYLE_ROAD_RULES_CRASH = 3,
			E_FREEBURN_STYLE_COUNT = 4,
		}

		// ChallengeListEntry.h:351
		enum EChallengeDifficulty {
			E_CHALLENGE_DIFFICULTY_EASY = 0,
			E_CHALLENGE_DIFFICULTY_MEDIUM = 1,
			E_CHALLENGE_DIFFICULTY_HARD = 2,
			E_CHALLENGE_DIFFICULTY_VERY_HARD = 3,
			E_CHALLENGE_DIFFICULTY_COUNT = 4,
		}

	}

}

// ps3mem.h:5
namespace BrnResource {
	// Declaration
	struct ChallengeListEntryAction {
		// ChallengeListEntry.h:50
		enum ELocationType {
			E_LOCATION_TYPE_ANYWHERE = 0,
			E_LOCATION_TYPE_DISTRICT = 1,
			E_LOCATION_TYPE_TRIGGER = 2,
			E_LOCATION_TYPE_ROAD = 3,
			E_LOCATION_TYPE_ROAD_NO_MARKER = 4,
			E_LOCATION_TYPE_COUNT = 5,
		}

		// ChallengeListEntry.h:61
		enum EChallengeActionType {
			E_CHALLENGE_ACTION_MINIMUM_SPEED = 0,
			E_CHALLENGE_ACTION_IN_AIR = 1,
			E_CHALLENGE_ACTION_AIR_DISTANCE = 2,
			E_CHALLENGE_ACTION_LEAP_CARS = 3,
			E_CHALLENGE_ACTION_DRIFT = 4,
			E_CHALLENGE_ACTION_NEAR_MISS = 5,
			E_CHALLENGE_ACTION_BARREL_ROLLS = 6,
			E_CHALLENGE_ACTION_ONCOMING = 7,
			E_CHALLENGE_ACTION_FLATSPIN = 8,
			E_CHALLENGE_ACTION_LAND_SUCCESSFUL = 9,
			E_CHALLENGE_ACTION_ROAD_RULE_TIME = 10,
			E_CHALLENGE_ACTION_ROAD_RULE_CRASH = 11,
			E_CHALLENGE_ACTION_PLAYER_POWER_PARKING = 12,
			E_CHALLENGE_ACTION_TRAFFIC_POWER_PARKING = 13,
			E_CHALLENGE_ACTION_CRASH_INTO_PLAYER = 14,
			E_CHALLENGE_ACTION_BURNOUTS = 15,
			E_CHALLENGE_ACTION_MEET_UP = 16,
			E_CHALLENGE_ACTION_BILLBOARD = 17,
			E_CHALLENGE_ACTION_BOOST_TIME = 18,
			E_CHALLENGE_ACTION_BARREL_ROLLS_REVERSE = 19,
			E_CHALLENGE_ACTION_FLATSPIN_REVERSE = 20,
			E_CHALLENGE_ACTION_LAND_SUCCESSFUL_REVERSE = 21,
			E_ACTION_COUNT = 22,
		}

		// ChallengeListEntry.h:90
		enum EChallengeDataType {
			E_CHALLENGE_DATA_TYPE_CRASHES = 0,
			E_CHALLENGE_DATA_TYPE_NEAR_MISS = 1,
			E_CHALLENGE_DATA_TYPE_ONCOMING = 2,
			E_CHALLENGE_DATA_TYPE_DRIFT = 3,
			E_CHALLENGE_DATA_TYPE_AIR = 4,
			E_CHALLENGE_DATA_TYPE_AIR_DISTANCE = 5,
			E_CHALLENGE_DATA_TYPE_BARREL_ROLLS = 6,
			E_CHALLENGE_DATA_TYPE_FLAT_SPINS = 7,
			E_CHALLENGE_DATA_TYPE_CARS_LEAPT = 8,
			E_CHALLENGE_DATA_TYPE_SPEED_ROAD_RULE = 9,
			E_CHALLENGE_DATA_TYPE_CRASH_ROAD_RULE = 10,
			E_CHALLENGE_DATA_TYPE_SUCCESSFUL_LANDINGS = 11,
			E_CHALLENGE_DATA_TYPE_BURNOUTS = 12,
			E_CHALLENGE_DATA_TYPE_POWER_PARKS = 13,
			E_CHALLENGE_DATA_TYPE_PERCENTAGE = 14,
			E_CHALLENGE_DATA_TYPE_MEET_UP = 15,
			E_CHALLENGE_DATA_TYPE_BILLBOARDS = 16,
			E_CHALLENGE_DATA_TYPE_BOOST_TIME = 17,
			E_CHALLENGE_DATA_TYPE_COUNT = 18,
		}

		// ChallengeListEntry.h:114
		enum EChallengeCoopType {
			E_CHALLENGE_COOP_TYPE_ONCE = 0,
			E_CHALLENGE_COOP_TYPE_INDIVIDUAL = 1,
			E_CHALLENGE_COOP_TYPE_INDIVIDUAL_ACCUMULATION = 2,
			E_CHALLENGE_COOP_TYPE_SIMULTANEOUS = 3,
			E_CHALLENGE_COOP_TYPE_CUMULATIVE = 4,
			E_CHALLENGE_COOP_TYPE_AVERAGE = 5,
			E_CHALLENGE_COOP_TYPE_COUNT = 6,
		}

		// ChallengeListEntry.h:134
		enum ECombineActionType {
			E_COMBINE_ACTION_CHAIN = 0,
			E_COMBINE_ACTION_FAILURE_RESETS_CHAIN = 1,
			E_COMBINE_ACTION_FAILURE_RESETS_EVERYONE = 2,
			E_COMBINE_ACTION_SIMULTANEOUS = 3,
			E_COMBINE_ACTION_INDEPENDENT = 4,
			E_COMBINE_ACTION_COUNT = 5,
		}

	}

	// Declaration
	struct ChallengeListEntry {
		// ChallengeListEntry.h:331
		enum ECarRestrictionType {
			E_CAR_TYPE_NONE = 0,
			E_CAR_TYPE_DANGER = 1,
			E_CAR_TYPE_AGGRESSION = 2,
			E_CAR_TYPE_STUNT = 3,
			E_CAR_TYPE_COUNT = 4,
		}

		// ChallengeListEntry.h:341
		enum EFreeburnChallengeStyle {
			E_FREEBURN_STYLE_NONE = 0,
			E_FREEBURN_STYLE_NORMAL = 1,
			E_FREEBURN_STYLE_ROAD_RULES_TIME = 2,
			E_FREEBURN_STYLE_ROAD_RULES_CRASH = 3,
			E_FREEBURN_STYLE_COUNT = 4,
		}

		// ChallengeListEntry.h:351
		enum EChallengeDifficulty {
			E_CHALLENGE_DIFFICULTY_EASY = 0,
			E_CHALLENGE_DIFFICULTY_MEDIUM = 1,
			E_CHALLENGE_DIFFICULTY_HARD = 2,
			E_CHALLENGE_DIFFICULTY_VERY_HARD = 3,
			E_CHALLENGE_DIFFICULTY_COUNT = 4,
		}

	}

}

// ChallengeListEntry.h:27
namespace BrnResource {
	// Declaration
	struct ChallengeListEntryAction {
		// ChallengeListEntry.h:50
		enum ELocationType {
			E_LOCATION_TYPE_ANYWHERE = 0,
			E_LOCATION_TYPE_DISTRICT = 1,
			E_LOCATION_TYPE_TRIGGER = 2,
			E_LOCATION_TYPE_ROAD = 3,
			E_LOCATION_TYPE_ROAD_NO_MARKER = 4,
			E_LOCATION_TYPE_COUNT = 5,
		}

		// ChallengeListEntry.h:61
		enum EChallengeActionType {
			E_CHALLENGE_ACTION_MINIMUM_SPEED = 0,
			E_CHALLENGE_ACTION_IN_AIR = 1,
			E_CHALLENGE_ACTION_AIR_DISTANCE = 2,
			E_CHALLENGE_ACTION_LEAP_CARS = 3,
			E_CHALLENGE_ACTION_DRIFT = 4,
			E_CHALLENGE_ACTION_NEAR_MISS = 5,
			E_CHALLENGE_ACTION_BARREL_ROLLS = 6,
			E_CHALLENGE_ACTION_ONCOMING = 7,
			E_CHALLENGE_ACTION_FLATSPIN = 8,
			E_CHALLENGE_ACTION_LAND_SUCCESSFUL = 9,
			E_CHALLENGE_ACTION_ROAD_RULE_TIME = 10,
			E_CHALLENGE_ACTION_ROAD_RULE_CRASH = 11,
			E_CHALLENGE_ACTION_PLAYER_POWER_PARKING = 12,
			E_CHALLENGE_ACTION_TRAFFIC_POWER_PARKING = 13,
			E_CHALLENGE_ACTION_CRASH_INTO_PLAYER = 14,
			E_CHALLENGE_ACTION_BURNOUTS = 15,
			E_CHALLENGE_ACTION_MEET_UP = 16,
			E_CHALLENGE_ACTION_BILLBOARD = 17,
			E_CHALLENGE_ACTION_BOOST_TIME = 18,
			E_CHALLENGE_ACTION_BARREL_ROLLS_REVERSE = 19,
			E_CHALLENGE_ACTION_FLATSPIN_REVERSE = 20,
			E_CHALLENGE_ACTION_LAND_SUCCESSFUL_REVERSE = 21,
			E_ACTION_COUNT = 22,
		}

		// ChallengeListEntry.h:90
		enum EChallengeDataType {
			E_CHALLENGE_DATA_TYPE_CRASHES = 0,
			E_CHALLENGE_DATA_TYPE_NEAR_MISS = 1,
			E_CHALLENGE_DATA_TYPE_ONCOMING = 2,
			E_CHALLENGE_DATA_TYPE_DRIFT = 3,
			E_CHALLENGE_DATA_TYPE_AIR = 4,
			E_CHALLENGE_DATA_TYPE_AIR_DISTANCE = 5,
			E_CHALLENGE_DATA_TYPE_BARREL_ROLLS = 6,
			E_CHALLENGE_DATA_TYPE_FLAT_SPINS = 7,
			E_CHALLENGE_DATA_TYPE_CARS_LEAPT = 8,
			E_CHALLENGE_DATA_TYPE_SPEED_ROAD_RULE = 9,
			E_CHALLENGE_DATA_TYPE_CRASH_ROAD_RULE = 10,
			E_CHALLENGE_DATA_TYPE_SUCCESSFUL_LANDINGS = 11,
			E_CHALLENGE_DATA_TYPE_BURNOUTS = 12,
			E_CHALLENGE_DATA_TYPE_POWER_PARKS = 13,
			E_CHALLENGE_DATA_TYPE_PERCENTAGE = 14,
			E_CHALLENGE_DATA_TYPE_MEET_UP = 15,
			E_CHALLENGE_DATA_TYPE_BILLBOARDS = 16,
			E_CHALLENGE_DATA_TYPE_BOOST_TIME = 17,
			E_CHALLENGE_DATA_TYPE_COUNT = 18,
		}

		// ChallengeListEntry.h:114
		enum EChallengeCoopType {
			E_CHALLENGE_COOP_TYPE_ONCE = 0,
			E_CHALLENGE_COOP_TYPE_INDIVIDUAL = 1,
			E_CHALLENGE_COOP_TYPE_INDIVIDUAL_ACCUMULATION = 2,
			E_CHALLENGE_COOP_TYPE_SIMULTANEOUS = 3,
			E_CHALLENGE_COOP_TYPE_CUMULATIVE = 4,
			E_CHALLENGE_COOP_TYPE_AVERAGE = 5,
			E_CHALLENGE_COOP_TYPE_COUNT = 6,
		}

		// ChallengeListEntry.h:134
		enum ECombineActionType {
			E_COMBINE_ACTION_CHAIN = 0,
			E_COMBINE_ACTION_FAILURE_RESETS_CHAIN = 1,
			E_COMBINE_ACTION_FAILURE_RESETS_EVERYONE = 2,
			E_COMBINE_ACTION_SIMULTANEOUS = 3,
			E_COMBINE_ACTION_INDEPENDENT = 4,
			E_COMBINE_ACTION_COUNT = 5,
		}

	}

	// Declaration
	struct ChallengeListEntry {
		// ChallengeListEntry.h:331
		enum ECarRestrictionType {
			E_CAR_TYPE_NONE = 0,
			E_CAR_TYPE_DANGER = 1,
			E_CAR_TYPE_AGGRESSION = 2,
			E_CAR_TYPE_STUNT = 3,
			E_CAR_TYPE_COUNT = 4,
		}

		// ChallengeListEntry.h:341
		enum EFreeburnChallengeStyle {
			E_FREEBURN_STYLE_NONE = 0,
			E_FREEBURN_STYLE_NORMAL = 1,
			E_FREEBURN_STYLE_ROAD_RULES_TIME = 2,
			E_FREEBURN_STYLE_ROAD_RULES_CRASH = 3,
			E_FREEBURN_STYLE_COUNT = 4,
		}

		// ChallengeListEntry.h:351
		enum EChallengeDifficulty {
			E_CHALLENGE_DIFFICULTY_EASY = 0,
			E_CHALLENGE_DIFFICULTY_MEDIUM = 1,
			E_CHALLENGE_DIFFICULTY_HARD = 2,
			E_CHALLENGE_DIFFICULTY_VERY_HARD = 3,
			E_CHALLENGE_DIFFICULTY_COUNT = 4,
		}

	}

	struct ChallengeListResource;

	struct ChallengeSlot;

	struct ChallengeList;

	struct CarStatsCollection;

	struct VehicleListEntryAudioData;

	struct VehicleListResource;

	struct VehicleSlot;

	struct SponsorCarSlot;

	struct VehicleList;

	struct WheelList;

	struct HudMessageController;

	struct HeapResourceAllocator;

	struct LinearResourceAllocator;

	struct PopupController;

	struct HudMessageEvent;

	struct WheelListEntry;

	struct WheelListResource;

	struct WheelSlot;

}

// ChallengeListEntry.h:27
namespace BrnResource {
	// Declaration
	struct ChallengeListEntryAction {
		// ChallengeListEntry.h:50
		enum ELocationType {
			E_LOCATION_TYPE_ANYWHERE = 0,
			E_LOCATION_TYPE_DISTRICT = 1,
			E_LOCATION_TYPE_TRIGGER = 2,
			E_LOCATION_TYPE_ROAD = 3,
			E_LOCATION_TYPE_ROAD_NO_MARKER = 4,
			E_LOCATION_TYPE_COUNT = 5,
		}

		// ChallengeListEntry.h:61
		enum EChallengeActionType {
			E_CHALLENGE_ACTION_MINIMUM_SPEED = 0,
			E_CHALLENGE_ACTION_IN_AIR = 1,
			E_CHALLENGE_ACTION_AIR_DISTANCE = 2,
			E_CHALLENGE_ACTION_LEAP_CARS = 3,
			E_CHALLENGE_ACTION_DRIFT = 4,
			E_CHALLENGE_ACTION_NEAR_MISS = 5,
			E_CHALLENGE_ACTION_BARREL_ROLLS = 6,
			E_CHALLENGE_ACTION_ONCOMING = 7,
			E_CHALLENGE_ACTION_FLATSPIN = 8,
			E_CHALLENGE_ACTION_LAND_SUCCESSFUL = 9,
			E_CHALLENGE_ACTION_ROAD_RULE_TIME = 10,
			E_CHALLENGE_ACTION_ROAD_RULE_CRASH = 11,
			E_CHALLENGE_ACTION_PLAYER_POWER_PARKING = 12,
			E_CHALLENGE_ACTION_TRAFFIC_POWER_PARKING = 13,
			E_CHALLENGE_ACTION_CRASH_INTO_PLAYER = 14,
			E_CHALLENGE_ACTION_BURNOUTS = 15,
			E_CHALLENGE_ACTION_MEET_UP = 16,
			E_CHALLENGE_ACTION_BILLBOARD = 17,
			E_CHALLENGE_ACTION_BOOST_TIME = 18,
			E_CHALLENGE_ACTION_BARREL_ROLLS_REVERSE = 19,
			E_CHALLENGE_ACTION_FLATSPIN_REVERSE = 20,
			E_CHALLENGE_ACTION_LAND_SUCCESSFUL_REVERSE = 21,
			E_ACTION_COUNT = 22,
		}

		// ChallengeListEntry.h:90
		enum EChallengeDataType {
			E_CHALLENGE_DATA_TYPE_CRASHES = 0,
			E_CHALLENGE_DATA_TYPE_NEAR_MISS = 1,
			E_CHALLENGE_DATA_TYPE_ONCOMING = 2,
			E_CHALLENGE_DATA_TYPE_DRIFT = 3,
			E_CHALLENGE_DATA_TYPE_AIR = 4,
			E_CHALLENGE_DATA_TYPE_AIR_DISTANCE = 5,
			E_CHALLENGE_DATA_TYPE_BARREL_ROLLS = 6,
			E_CHALLENGE_DATA_TYPE_FLAT_SPINS = 7,
			E_CHALLENGE_DATA_TYPE_CARS_LEAPT = 8,
			E_CHALLENGE_DATA_TYPE_SPEED_ROAD_RULE = 9,
			E_CHALLENGE_DATA_TYPE_CRASH_ROAD_RULE = 10,
			E_CHALLENGE_DATA_TYPE_SUCCESSFUL_LANDINGS = 11,
			E_CHALLENGE_DATA_TYPE_BURNOUTS = 12,
			E_CHALLENGE_DATA_TYPE_POWER_PARKS = 13,
			E_CHALLENGE_DATA_TYPE_PERCENTAGE = 14,
			E_CHALLENGE_DATA_TYPE_MEET_UP = 15,
			E_CHALLENGE_DATA_TYPE_BILLBOARDS = 16,
			E_CHALLENGE_DATA_TYPE_BOOST_TIME = 17,
			E_CHALLENGE_DATA_TYPE_COUNT = 18,
		}

		// ChallengeListEntry.h:114
		enum EChallengeCoopType {
			E_CHALLENGE_COOP_TYPE_ONCE = 0,
			E_CHALLENGE_COOP_TYPE_INDIVIDUAL = 1,
			E_CHALLENGE_COOP_TYPE_INDIVIDUAL_ACCUMULATION = 2,
			E_CHALLENGE_COOP_TYPE_SIMULTANEOUS = 3,
			E_CHALLENGE_COOP_TYPE_CUMULATIVE = 4,
			E_CHALLENGE_COOP_TYPE_AVERAGE = 5,
			E_CHALLENGE_COOP_TYPE_COUNT = 6,
		}

		// ChallengeListEntry.h:134
		enum ECombineActionType {
			E_COMBINE_ACTION_CHAIN = 0,
			E_COMBINE_ACTION_FAILURE_RESETS_CHAIN = 1,
			E_COMBINE_ACTION_FAILURE_RESETS_EVERYONE = 2,
			E_COMBINE_ACTION_SIMULTANEOUS = 3,
			E_COMBINE_ACTION_INDEPENDENT = 4,
			E_COMBINE_ACTION_COUNT = 5,
		}

	}

	// Declaration
	struct ChallengeListEntry {
		// ChallengeListEntry.h:331
		enum ECarRestrictionType {
			E_CAR_TYPE_NONE = 0,
			E_CAR_TYPE_DANGER = 1,
			E_CAR_TYPE_AGGRESSION = 2,
			E_CAR_TYPE_STUNT = 3,
			E_CAR_TYPE_COUNT = 4,
		}

		// ChallengeListEntry.h:341
		enum EFreeburnChallengeStyle {
			E_FREEBURN_STYLE_NONE = 0,
			E_FREEBURN_STYLE_NORMAL = 1,
			E_FREEBURN_STYLE_ROAD_RULES_TIME = 2,
			E_FREEBURN_STYLE_ROAD_RULES_CRASH = 3,
			E_FREEBURN_STYLE_COUNT = 4,
		}

		// ChallengeListEntry.h:351
		enum EChallengeDifficulty {
			E_CHALLENGE_DIFFICULTY_EASY = 0,
			E_CHALLENGE_DIFFICULTY_MEDIUM = 1,
			E_CHALLENGE_DIFFICULTY_HARD = 2,
			E_CHALLENGE_DIFFICULTY_VERY_HARD = 3,
			E_CHALLENGE_DIFFICULTY_COUNT = 4,
		}

	}

	struct ChallengeListResource;

	struct ChallengeSlot;

	struct ChallengeList;

	struct CarStatsCollection;

	struct VehicleListEntryAudioData;

	struct VehicleListResource;

	struct VehicleSlot;

	struct SponsorCarSlot;

	struct VehicleList;

	struct HudMessageController;

	struct HeapResourceAllocator;

	struct LinearResourceAllocator;

	struct PopupController;

	struct HudMessageEvent;

}

// BrnResourceAllocator.h:32
namespace BrnResource {
	// Declaration
	struct ChallengeListEntryAction {
		// ChallengeListEntry.h:50
		enum ELocationType {
			E_LOCATION_TYPE_ANYWHERE = 0,
			E_LOCATION_TYPE_DISTRICT = 1,
			E_LOCATION_TYPE_TRIGGER = 2,
			E_LOCATION_TYPE_ROAD = 3,
			E_LOCATION_TYPE_ROAD_NO_MARKER = 4,
			E_LOCATION_TYPE_COUNT = 5,
		}

		// ChallengeListEntry.h:61
		enum EChallengeActionType {
			E_CHALLENGE_ACTION_MINIMUM_SPEED = 0,
			E_CHALLENGE_ACTION_IN_AIR = 1,
			E_CHALLENGE_ACTION_AIR_DISTANCE = 2,
			E_CHALLENGE_ACTION_LEAP_CARS = 3,
			E_CHALLENGE_ACTION_DRIFT = 4,
			E_CHALLENGE_ACTION_NEAR_MISS = 5,
			E_CHALLENGE_ACTION_BARREL_ROLLS = 6,
			E_CHALLENGE_ACTION_ONCOMING = 7,
			E_CHALLENGE_ACTION_FLATSPIN = 8,
			E_CHALLENGE_ACTION_LAND_SUCCESSFUL = 9,
			E_CHALLENGE_ACTION_ROAD_RULE_TIME = 10,
			E_CHALLENGE_ACTION_ROAD_RULE_CRASH = 11,
			E_CHALLENGE_ACTION_PLAYER_POWER_PARKING = 12,
			E_CHALLENGE_ACTION_TRAFFIC_POWER_PARKING = 13,
			E_CHALLENGE_ACTION_CRASH_INTO_PLAYER = 14,
			E_CHALLENGE_ACTION_BURNOUTS = 15,
			E_CHALLENGE_ACTION_MEET_UP = 16,
			E_CHALLENGE_ACTION_BILLBOARD = 17,
			E_CHALLENGE_ACTION_BOOST_TIME = 18,
			E_CHALLENGE_ACTION_BARREL_ROLLS_REVERSE = 19,
			E_CHALLENGE_ACTION_FLATSPIN_REVERSE = 20,
			E_CHALLENGE_ACTION_LAND_SUCCESSFUL_REVERSE = 21,
			E_ACTION_COUNT = 22,
		}

		// ChallengeListEntry.h:90
		enum EChallengeDataType {
			E_CHALLENGE_DATA_TYPE_CRASHES = 0,
			E_CHALLENGE_DATA_TYPE_NEAR_MISS = 1,
			E_CHALLENGE_DATA_TYPE_ONCOMING = 2,
			E_CHALLENGE_DATA_TYPE_DRIFT = 3,
			E_CHALLENGE_DATA_TYPE_AIR = 4,
			E_CHALLENGE_DATA_TYPE_AIR_DISTANCE = 5,
			E_CHALLENGE_DATA_TYPE_BARREL_ROLLS = 6,
			E_CHALLENGE_DATA_TYPE_FLAT_SPINS = 7,
			E_CHALLENGE_DATA_TYPE_CARS_LEAPT = 8,
			E_CHALLENGE_DATA_TYPE_SPEED_ROAD_RULE = 9,
			E_CHALLENGE_DATA_TYPE_CRASH_ROAD_RULE = 10,
			E_CHALLENGE_DATA_TYPE_SUCCESSFUL_LANDINGS = 11,
			E_CHALLENGE_DATA_TYPE_BURNOUTS = 12,
			E_CHALLENGE_DATA_TYPE_POWER_PARKS = 13,
			E_CHALLENGE_DATA_TYPE_PERCENTAGE = 14,
			E_CHALLENGE_DATA_TYPE_MEET_UP = 15,
			E_CHALLENGE_DATA_TYPE_BILLBOARDS = 16,
			E_CHALLENGE_DATA_TYPE_BOOST_TIME = 17,
			E_CHALLENGE_DATA_TYPE_COUNT = 18,
		}

		// ChallengeListEntry.h:114
		enum EChallengeCoopType {
			E_CHALLENGE_COOP_TYPE_ONCE = 0,
			E_CHALLENGE_COOP_TYPE_INDIVIDUAL = 1,
			E_CHALLENGE_COOP_TYPE_INDIVIDUAL_ACCUMULATION = 2,
			E_CHALLENGE_COOP_TYPE_SIMULTANEOUS = 3,
			E_CHALLENGE_COOP_TYPE_CUMULATIVE = 4,
			E_CHALLENGE_COOP_TYPE_AVERAGE = 5,
			E_CHALLENGE_COOP_TYPE_COUNT = 6,
		}

		// ChallengeListEntry.h:134
		enum ECombineActionType {
			E_COMBINE_ACTION_CHAIN = 0,
			E_COMBINE_ACTION_FAILURE_RESETS_CHAIN = 1,
			E_COMBINE_ACTION_FAILURE_RESETS_EVERYONE = 2,
			E_COMBINE_ACTION_SIMULTANEOUS = 3,
			E_COMBINE_ACTION_INDEPENDENT = 4,
			E_COMBINE_ACTION_COUNT = 5,
		}

	}

	// Declaration
	struct ChallengeListEntry {
		// ChallengeListEntry.h:331
		enum ECarRestrictionType {
			E_CAR_TYPE_NONE = 0,
			E_CAR_TYPE_DANGER = 1,
			E_CAR_TYPE_AGGRESSION = 2,
			E_CAR_TYPE_STUNT = 3,
			E_CAR_TYPE_COUNT = 4,
		}

		// ChallengeListEntry.h:341
		enum EFreeburnChallengeStyle {
			E_FREEBURN_STYLE_NONE = 0,
			E_FREEBURN_STYLE_NORMAL = 1,
			E_FREEBURN_STYLE_ROAD_RULES_TIME = 2,
			E_FREEBURN_STYLE_ROAD_RULES_CRASH = 3,
			E_FREEBURN_STYLE_COUNT = 4,
		}

		// ChallengeListEntry.h:351
		enum EChallengeDifficulty {
			E_CHALLENGE_DIFFICULTY_EASY = 0,
			E_CHALLENGE_DIFFICULTY_MEDIUM = 1,
			E_CHALLENGE_DIFFICULTY_HARD = 2,
			E_CHALLENGE_DIFFICULTY_VERY_HARD = 3,
			E_CHALLENGE_DIFFICULTY_COUNT = 4,
		}

	}

}

// ChallengeListEntry.h:27
namespace BrnResource {
	struct SponsorCarSlot;

}

// ResourceTypeIds.h:30
namespace BrnResource {
	// Declaration
	struct ChallengeListEntryAction {
		// ChallengeListEntry.h:50
		enum ELocationType {
			E_LOCATION_TYPE_ANYWHERE = 0,
			E_LOCATION_TYPE_DISTRICT = 1,
			E_LOCATION_TYPE_TRIGGER = 2,
			E_LOCATION_TYPE_ROAD = 3,
			E_LOCATION_TYPE_ROAD_NO_MARKER = 4,
			E_LOCATION_TYPE_COUNT = 5,
		}

		// ChallengeListEntry.h:61
		enum EChallengeActionType {
			E_CHALLENGE_ACTION_MINIMUM_SPEED = 0,
			E_CHALLENGE_ACTION_IN_AIR = 1,
			E_CHALLENGE_ACTION_AIR_DISTANCE = 2,
			E_CHALLENGE_ACTION_LEAP_CARS = 3,
			E_CHALLENGE_ACTION_DRIFT = 4,
			E_CHALLENGE_ACTION_NEAR_MISS = 5,
			E_CHALLENGE_ACTION_BARREL_ROLLS = 6,
			E_CHALLENGE_ACTION_ONCOMING = 7,
			E_CHALLENGE_ACTION_FLATSPIN = 8,
			E_CHALLENGE_ACTION_LAND_SUCCESSFUL = 9,
			E_CHALLENGE_ACTION_ROAD_RULE_TIME = 10,
			E_CHALLENGE_ACTION_ROAD_RULE_CRASH = 11,
			E_CHALLENGE_ACTION_PLAYER_POWER_PARKING = 12,
			E_CHALLENGE_ACTION_TRAFFIC_POWER_PARKING = 13,
			E_CHALLENGE_ACTION_CRASH_INTO_PLAYER = 14,
			E_CHALLENGE_ACTION_BURNOUTS = 15,
			E_CHALLENGE_ACTION_MEET_UP = 16,
			E_CHALLENGE_ACTION_BILLBOARD = 17,
			E_CHALLENGE_ACTION_BOOST_TIME = 18,
			E_CHALLENGE_ACTION_BARREL_ROLLS_REVERSE = 19,
			E_CHALLENGE_ACTION_FLATSPIN_REVERSE = 20,
			E_CHALLENGE_ACTION_LAND_SUCCESSFUL_REVERSE = 21,
			E_ACTION_COUNT = 22,
		}

		// ChallengeListEntry.h:90
		enum EChallengeDataType {
			E_CHALLENGE_DATA_TYPE_CRASHES = 0,
			E_CHALLENGE_DATA_TYPE_NEAR_MISS = 1,
			E_CHALLENGE_DATA_TYPE_ONCOMING = 2,
			E_CHALLENGE_DATA_TYPE_DRIFT = 3,
			E_CHALLENGE_DATA_TYPE_AIR = 4,
			E_CHALLENGE_DATA_TYPE_AIR_DISTANCE = 5,
			E_CHALLENGE_DATA_TYPE_BARREL_ROLLS = 6,
			E_CHALLENGE_DATA_TYPE_FLAT_SPINS = 7,
			E_CHALLENGE_DATA_TYPE_CARS_LEAPT = 8,
			E_CHALLENGE_DATA_TYPE_SPEED_ROAD_RULE = 9,
			E_CHALLENGE_DATA_TYPE_CRASH_ROAD_RULE = 10,
			E_CHALLENGE_DATA_TYPE_SUCCESSFUL_LANDINGS = 11,
			E_CHALLENGE_DATA_TYPE_BURNOUTS = 12,
			E_CHALLENGE_DATA_TYPE_POWER_PARKS = 13,
			E_CHALLENGE_DATA_TYPE_PERCENTAGE = 14,
			E_CHALLENGE_DATA_TYPE_MEET_UP = 15,
			E_CHALLENGE_DATA_TYPE_BILLBOARDS = 16,
			E_CHALLENGE_DATA_TYPE_BOOST_TIME = 17,
			E_CHALLENGE_DATA_TYPE_COUNT = 18,
		}

		// ChallengeListEntry.h:114
		enum EChallengeCoopType {
			E_CHALLENGE_COOP_TYPE_ONCE = 0,
			E_CHALLENGE_COOP_TYPE_INDIVIDUAL = 1,
			E_CHALLENGE_COOP_TYPE_INDIVIDUAL_ACCUMULATION = 2,
			E_CHALLENGE_COOP_TYPE_SIMULTANEOUS = 3,
			E_CHALLENGE_COOP_TYPE_CUMULATIVE = 4,
			E_CHALLENGE_COOP_TYPE_AVERAGE = 5,
			E_CHALLENGE_COOP_TYPE_COUNT = 6,
		}

		// ChallengeListEntry.h:134
		enum ECombineActionType {
			E_COMBINE_ACTION_CHAIN = 0,
			E_COMBINE_ACTION_FAILURE_RESETS_CHAIN = 1,
			E_COMBINE_ACTION_FAILURE_RESETS_EVERYONE = 2,
			E_COMBINE_ACTION_SIMULTANEOUS = 3,
			E_COMBINE_ACTION_INDEPENDENT = 4,
			E_COMBINE_ACTION_COUNT = 5,
		}

	}

	// Declaration
	struct ChallengeListEntry {
		// ChallengeListEntry.h:331
		enum ECarRestrictionType {
			E_CAR_TYPE_NONE = 0,
			E_CAR_TYPE_DANGER = 1,
			E_CAR_TYPE_AGGRESSION = 2,
			E_CAR_TYPE_STUNT = 3,
			E_CAR_TYPE_COUNT = 4,
		}

		// ChallengeListEntry.h:341
		enum EFreeburnChallengeStyle {
			E_FREEBURN_STYLE_NONE = 0,
			E_FREEBURN_STYLE_NORMAL = 1,
			E_FREEBURN_STYLE_ROAD_RULES_TIME = 2,
			E_FREEBURN_STYLE_ROAD_RULES_CRASH = 3,
			E_FREEBURN_STYLE_COUNT = 4,
		}

		// ChallengeListEntry.h:351
		enum EChallengeDifficulty {
			E_CHALLENGE_DIFFICULTY_EASY = 0,
			E_CHALLENGE_DIFFICULTY_MEDIUM = 1,
			E_CHALLENGE_DIFFICULTY_HARD = 2,
			E_CHALLENGE_DIFFICULTY_VERY_HARD = 3,
			E_CHALLENGE_DIFFICULTY_COUNT = 4,
		}

	}

}

// ChallengeListEntry.h:27
namespace BrnResource {
	// Declaration
	struct ChallengeListEntryAction {
		// ChallengeListEntry.h:50
		enum ELocationType {
			E_LOCATION_TYPE_ANYWHERE = 0,
			E_LOCATION_TYPE_DISTRICT = 1,
			E_LOCATION_TYPE_TRIGGER = 2,
			E_LOCATION_TYPE_ROAD = 3,
			E_LOCATION_TYPE_ROAD_NO_MARKER = 4,
			E_LOCATION_TYPE_COUNT = 5,
		}

		// ChallengeListEntry.h:61
		enum EChallengeActionType {
			E_CHALLENGE_ACTION_MINIMUM_SPEED = 0,
			E_CHALLENGE_ACTION_IN_AIR = 1,
			E_CHALLENGE_ACTION_AIR_DISTANCE = 2,
			E_CHALLENGE_ACTION_LEAP_CARS = 3,
			E_CHALLENGE_ACTION_DRIFT = 4,
			E_CHALLENGE_ACTION_NEAR_MISS = 5,
			E_CHALLENGE_ACTION_BARREL_ROLLS = 6,
			E_CHALLENGE_ACTION_ONCOMING = 7,
			E_CHALLENGE_ACTION_FLATSPIN = 8,
			E_CHALLENGE_ACTION_LAND_SUCCESSFUL = 9,
			E_CHALLENGE_ACTION_ROAD_RULE_TIME = 10,
			E_CHALLENGE_ACTION_ROAD_RULE_CRASH = 11,
			E_CHALLENGE_ACTION_PLAYER_POWER_PARKING = 12,
			E_CHALLENGE_ACTION_TRAFFIC_POWER_PARKING = 13,
			E_CHALLENGE_ACTION_CRASH_INTO_PLAYER = 14,
			E_CHALLENGE_ACTION_BURNOUTS = 15,
			E_CHALLENGE_ACTION_MEET_UP = 16,
			E_CHALLENGE_ACTION_BILLBOARD = 17,
			E_CHALLENGE_ACTION_BOOST_TIME = 18,
			E_CHALLENGE_ACTION_BARREL_ROLLS_REVERSE = 19,
			E_CHALLENGE_ACTION_FLATSPIN_REVERSE = 20,
			E_CHALLENGE_ACTION_LAND_SUCCESSFUL_REVERSE = 21,
			E_ACTION_COUNT = 22,
		}

		// ChallengeListEntry.h:90
		enum EChallengeDataType {
			E_CHALLENGE_DATA_TYPE_CRASHES = 0,
			E_CHALLENGE_DATA_TYPE_NEAR_MISS = 1,
			E_CHALLENGE_DATA_TYPE_ONCOMING = 2,
			E_CHALLENGE_DATA_TYPE_DRIFT = 3,
			E_CHALLENGE_DATA_TYPE_AIR = 4,
			E_CHALLENGE_DATA_TYPE_AIR_DISTANCE = 5,
			E_CHALLENGE_DATA_TYPE_BARREL_ROLLS = 6,
			E_CHALLENGE_DATA_TYPE_FLAT_SPINS = 7,
			E_CHALLENGE_DATA_TYPE_CARS_LEAPT = 8,
			E_CHALLENGE_DATA_TYPE_SPEED_ROAD_RULE = 9,
			E_CHALLENGE_DATA_TYPE_CRASH_ROAD_RULE = 10,
			E_CHALLENGE_DATA_TYPE_SUCCESSFUL_LANDINGS = 11,
			E_CHALLENGE_DATA_TYPE_BURNOUTS = 12,
			E_CHALLENGE_DATA_TYPE_POWER_PARKS = 13,
			E_CHALLENGE_DATA_TYPE_PERCENTAGE = 14,
			E_CHALLENGE_DATA_TYPE_MEET_UP = 15,
			E_CHALLENGE_DATA_TYPE_BILLBOARDS = 16,
			E_CHALLENGE_DATA_TYPE_BOOST_TIME = 17,
			E_CHALLENGE_DATA_TYPE_COUNT = 18,
		}

		// ChallengeListEntry.h:114
		enum EChallengeCoopType {
			E_CHALLENGE_COOP_TYPE_ONCE = 0,
			E_CHALLENGE_COOP_TYPE_INDIVIDUAL = 1,
			E_CHALLENGE_COOP_TYPE_INDIVIDUAL_ACCUMULATION = 2,
			E_CHALLENGE_COOP_TYPE_SIMULTANEOUS = 3,
			E_CHALLENGE_COOP_TYPE_CUMULATIVE = 4,
			E_CHALLENGE_COOP_TYPE_AVERAGE = 5,
			E_CHALLENGE_COOP_TYPE_COUNT = 6,
		}

		// ChallengeListEntry.h:134
		enum ECombineActionType {
			E_COMBINE_ACTION_CHAIN = 0,
			E_COMBINE_ACTION_FAILURE_RESETS_CHAIN = 1,
			E_COMBINE_ACTION_FAILURE_RESETS_EVERYONE = 2,
			E_COMBINE_ACTION_SIMULTANEOUS = 3,
			E_COMBINE_ACTION_INDEPENDENT = 4,
			E_COMBINE_ACTION_COUNT = 5,
		}

	}

	// Declaration
	struct ChallengeListEntry {
		// ChallengeListEntry.h:331
		enum ECarRestrictionType {
			E_CAR_TYPE_NONE = 0,
			E_CAR_TYPE_DANGER = 1,
			E_CAR_TYPE_AGGRESSION = 2,
			E_CAR_TYPE_STUNT = 3,
			E_CAR_TYPE_COUNT = 4,
		}

		// ChallengeListEntry.h:341
		enum EFreeburnChallengeStyle {
			E_FREEBURN_STYLE_NONE = 0,
			E_FREEBURN_STYLE_NORMAL = 1,
			E_FREEBURN_STYLE_ROAD_RULES_TIME = 2,
			E_FREEBURN_STYLE_ROAD_RULES_CRASH = 3,
			E_FREEBURN_STYLE_COUNT = 4,
		}

		// ChallengeListEntry.h:351
		enum EChallengeDifficulty {
			E_CHALLENGE_DIFFICULTY_EASY = 0,
			E_CHALLENGE_DIFFICULTY_MEDIUM = 1,
			E_CHALLENGE_DIFFICULTY_HARD = 2,
			E_CHALLENGE_DIFFICULTY_VERY_HARD = 3,
			E_CHALLENGE_DIFFICULTY_COUNT = 4,
		}

	}

	struct ChallengeListResource;

	struct ChallengeSlot;

	struct ChallengeList;

	struct CarStatsCollection;

	struct VehicleListEntryAudioData;

	struct VehicleListResource;

	struct VehicleSlot;

	struct SponsorCarSlot;

	struct VehicleList;

	struct HudMessageController;

	struct HudMessageEvent;

	struct HeapResourceAllocator;

	struct LinearResourceAllocator;

	struct PopupController;

}

// ChallengeListEntry.h:27
namespace BrnResource {
	// Declaration
	struct ChallengeListEntryAction {
		// ChallengeListEntry.h:50
		enum ELocationType {
			E_LOCATION_TYPE_ANYWHERE = 0,
			E_LOCATION_TYPE_DISTRICT = 1,
			E_LOCATION_TYPE_TRIGGER = 2,
			E_LOCATION_TYPE_ROAD = 3,
			E_LOCATION_TYPE_ROAD_NO_MARKER = 4,
			E_LOCATION_TYPE_COUNT = 5,
		}

		// ChallengeListEntry.h:61
		enum EChallengeActionType {
			E_CHALLENGE_ACTION_MINIMUM_SPEED = 0,
			E_CHALLENGE_ACTION_IN_AIR = 1,
			E_CHALLENGE_ACTION_AIR_DISTANCE = 2,
			E_CHALLENGE_ACTION_LEAP_CARS = 3,
			E_CHALLENGE_ACTION_DRIFT = 4,
			E_CHALLENGE_ACTION_NEAR_MISS = 5,
			E_CHALLENGE_ACTION_BARREL_ROLLS = 6,
			E_CHALLENGE_ACTION_ONCOMING = 7,
			E_CHALLENGE_ACTION_FLATSPIN = 8,
			E_CHALLENGE_ACTION_LAND_SUCCESSFUL = 9,
			E_CHALLENGE_ACTION_ROAD_RULE_TIME = 10,
			E_CHALLENGE_ACTION_ROAD_RULE_CRASH = 11,
			E_CHALLENGE_ACTION_PLAYER_POWER_PARKING = 12,
			E_CHALLENGE_ACTION_TRAFFIC_POWER_PARKING = 13,
			E_CHALLENGE_ACTION_CRASH_INTO_PLAYER = 14,
			E_CHALLENGE_ACTION_BURNOUTS = 15,
			E_CHALLENGE_ACTION_MEET_UP = 16,
			E_CHALLENGE_ACTION_BILLBOARD = 17,
			E_CHALLENGE_ACTION_BOOST_TIME = 18,
			E_CHALLENGE_ACTION_BARREL_ROLLS_REVERSE = 19,
			E_CHALLENGE_ACTION_FLATSPIN_REVERSE = 20,
			E_CHALLENGE_ACTION_LAND_SUCCESSFUL_REVERSE = 21,
			E_ACTION_COUNT = 22,
		}

		// ChallengeListEntry.h:90
		enum EChallengeDataType {
			E_CHALLENGE_DATA_TYPE_CRASHES = 0,
			E_CHALLENGE_DATA_TYPE_NEAR_MISS = 1,
			E_CHALLENGE_DATA_TYPE_ONCOMING = 2,
			E_CHALLENGE_DATA_TYPE_DRIFT = 3,
			E_CHALLENGE_DATA_TYPE_AIR = 4,
			E_CHALLENGE_DATA_TYPE_AIR_DISTANCE = 5,
			E_CHALLENGE_DATA_TYPE_BARREL_ROLLS = 6,
			E_CHALLENGE_DATA_TYPE_FLAT_SPINS = 7,
			E_CHALLENGE_DATA_TYPE_CARS_LEAPT = 8,
			E_CHALLENGE_DATA_TYPE_SPEED_ROAD_RULE = 9,
			E_CHALLENGE_DATA_TYPE_CRASH_ROAD_RULE = 10,
			E_CHALLENGE_DATA_TYPE_SUCCESSFUL_LANDINGS = 11,
			E_CHALLENGE_DATA_TYPE_BURNOUTS = 12,
			E_CHALLENGE_DATA_TYPE_POWER_PARKS = 13,
			E_CHALLENGE_DATA_TYPE_PERCENTAGE = 14,
			E_CHALLENGE_DATA_TYPE_MEET_UP = 15,
			E_CHALLENGE_DATA_TYPE_BILLBOARDS = 16,
			E_CHALLENGE_DATA_TYPE_BOOST_TIME = 17,
			E_CHALLENGE_DATA_TYPE_COUNT = 18,
		}

		// ChallengeListEntry.h:114
		enum EChallengeCoopType {
			E_CHALLENGE_COOP_TYPE_ONCE = 0,
			E_CHALLENGE_COOP_TYPE_INDIVIDUAL = 1,
			E_CHALLENGE_COOP_TYPE_INDIVIDUAL_ACCUMULATION = 2,
			E_CHALLENGE_COOP_TYPE_SIMULTANEOUS = 3,
			E_CHALLENGE_COOP_TYPE_CUMULATIVE = 4,
			E_CHALLENGE_COOP_TYPE_AVERAGE = 5,
			E_CHALLENGE_COOP_TYPE_COUNT = 6,
		}

		// ChallengeListEntry.h:134
		enum ECombineActionType {
			E_COMBINE_ACTION_CHAIN = 0,
			E_COMBINE_ACTION_FAILURE_RESETS_CHAIN = 1,
			E_COMBINE_ACTION_FAILURE_RESETS_EVERYONE = 2,
			E_COMBINE_ACTION_SIMULTANEOUS = 3,
			E_COMBINE_ACTION_INDEPENDENT = 4,
			E_COMBINE_ACTION_COUNT = 5,
		}

	}

	// Declaration
	struct ChallengeListEntry {
		// ChallengeListEntry.h:331
		enum ECarRestrictionType {
			E_CAR_TYPE_NONE = 0,
			E_CAR_TYPE_DANGER = 1,
			E_CAR_TYPE_AGGRESSION = 2,
			E_CAR_TYPE_STUNT = 3,
			E_CAR_TYPE_COUNT = 4,
		}

		// ChallengeListEntry.h:341
		enum EFreeburnChallengeStyle {
			E_FREEBURN_STYLE_NONE = 0,
			E_FREEBURN_STYLE_NORMAL = 1,
			E_FREEBURN_STYLE_ROAD_RULES_TIME = 2,
			E_FREEBURN_STYLE_ROAD_RULES_CRASH = 3,
			E_FREEBURN_STYLE_COUNT = 4,
		}

		// ChallengeListEntry.h:351
		enum EChallengeDifficulty {
			E_CHALLENGE_DIFFICULTY_EASY = 0,
			E_CHALLENGE_DIFFICULTY_MEDIUM = 1,
			E_CHALLENGE_DIFFICULTY_HARD = 2,
			E_CHALLENGE_DIFFICULTY_VERY_HARD = 3,
			E_CHALLENGE_DIFFICULTY_COUNT = 4,
		}

	}

	struct ChallengeListResource;

	struct ChallengeSlot;

	struct ChallengeList;

	struct CarStatsCollection;

	struct VehicleListEntryAudioData;

	struct VehicleListResource;

	struct VehicleSlot;

	struct SponsorCarSlot;

	struct VehicleList;

	struct WheelList;

	struct HudMessageController;

	struct HeapResourceAllocator;

	struct LinearResourceAllocator;

	struct WheelListEntry;

	struct WheelListResource;

	struct WheelSlot;

	struct HudMessageEvent;

	struct PopupController;

}

// ChallengeListEntry.h:27
namespace BrnResource {
	struct SponsorCarSlot;

	struct HeapResourceAllocator;

	struct LinearResourceAllocator;

}

