// BrnInterestManager.h:24
namespace BrnProgression {
	// Declaration
	struct RaceEventData {
		// BrnRaceEventData.h:293
		enum EModeType {
			E_MODE_INVALID = -1,
			E_MODE_RACE = 0,
			E_MODE_ROAD_RAGE = 1,
			E_MODE_STUNT_ATTACK = 2,
			E_MODE_SURVIVOR = 3,
			E_MODE_BURNING_ROUTE = 4,
			E_MODE_PURSUIT = 5,
			E_MODE_COUNT = 6,
		}

		// BrnRaceEventData.h:306
		enum EOnlineModeType {
			E_ONLINE_MODE_RACE = 0,
			E_ONLINE_MODE_ROAD_RAGE = 1,
			E_ONLINE_MODE_BURNING_HOME_RUN = 2,
			E_ONLINE_MODE_COUNT = 3,
		}

		// BrnRaceEventData.h:316
		enum AStarType {
			E_ASTAR_TYPE_EUCLIDEAN = 0,
			E_ASTAR_TYPE_EUCLIDEAN_X_BIASED = 1,
			E_ASTAR_TYPE_EUCLIDEAN_Y_BIASED = 2,
		}

		// BrnRaceEventData.h:324
		enum EFlags {
			E_FLAG_CRASHBREAKER = 1,
		}

	}

	// Declaration
	struct EventStartGridSlot {
		// BrnRaceEventData.h:155
		enum EFlags {
			E_FLAG_CAN_DEVIATE_FROM_ROUTE = 1,
			E_FLAG_CAN_TAKE_SHORTCUTS = 2,
		}

	}

}

// BrnRaceEventData.h:99
struct BrnProgression::EventRacerPersonality {
private:
	// BrnRaceEventData.h:137
	float32_t mfMinAggression;

	// BrnRaceEventData.h:138
	float32_t mfMaxAggression;

	// BrnRaceEventData.h:139
	float32_t mfSkill;

	// BrnRaceEventData.h:140
	float32_t mfSpeed;

public:
	// BrnRaceEventData.h:104
	void Construct();

	// BrnRaceEventData.h:108
	void FixDown();

	// BrnRaceEventData.h:112
	void FixUp();

	// BrnRaceEventData.h:115
	float32_t GetMinAggression() const;

	// BrnRaceEventData.h:118
	float32_t GetMaxAggression() const;

	// BrnRaceEventData.h:121
	void SetAggression(float32_t, float32_t);

	// BrnRaceEventData.h:124
	float32_t GetSkill() const;

	// BrnRaceEventData.h:127
	void SetSkill(float32_t);

	// BrnRaceEventData.h:130
	float32_t GetSpeed() const;

	// BrnRaceEventData.h:133
	void SetSpeed(float32_t);

}

// BrnRaceEventData.h:152
struct BrnProgression::EventStartGridSlot {
private:
	// BrnRaceEventData.h:228
	uint32_t muOpponentIndex;

	// BrnRaceEventData.h:229
	uint32_t muPersonalityIndex;

	// BrnRaceEventData.h:230
	int32_t miFastAIBalanceGraphIndex;

	// BrnRaceEventData.h:231
	int32_t miSlowAIBalanceGraphIndex;

	// BrnRaceEventData.h:232
	uint8_t muColourIndex;

	// BrnRaceEventData.h:233
	uint8_t muFlags;

public:
	// BrnRaceEventData.h:163
	void Construct();

	// BrnRaceEventData.h:167
	void FixDown();

	// BrnRaceEventData.h:171
	void FixUp();

	// BrnRaceEventData.h:174
	uint32_t GetOpponentIndex() const;

	// BrnRaceEventData.h:178
	void SetOpponentIndex(uint32_t);

	// BrnRaceEventData.h:181
	uint32_t GetPersonalityIndex() const;

	// BrnRaceEventData.h:185
	void SetPersonalityIndex(uint32_t);

	// BrnRaceEventData.h:188
	int32_t GetFastAIBalanceGraphIndex() const;

	// BrnRaceEventData.h:191
	int32_t GetSlowAIBalanceGraphIndex() const;

	// BrnRaceEventData.h:195
	void SetSlowAIBalanceGraphIndex(int32_t);

	// BrnRaceEventData.h:199
	void SetFastAIBalanceGraphIndex(int32_t);

	// BrnRaceEventData.h:202
	uint8_t GetColourIndex() const;

	// BrnRaceEventData.h:206
	void SetColourIndex(uint8_t);

	// BrnRaceEventData.h:210
	bool GetFlag(BrnProgression::EventStartGridSlot::EFlags) const;

	// BrnRaceEventData.h:213
	uint8_t GetFlags() const;

	// BrnRaceEventData.h:217
	void SetFlag(BrnProgression::EventStartGridSlot::EFlags);

	// BrnRaceEventData.h:221
	void SetFlags(uint8_t);

	// BrnRaceEventData.h:225
	void ClearFlag(BrnProgression::EventStartGridSlot::EFlags);

}

// BrnRaceEventData.h:246
struct BrnProgression::CheckpointData {
	// BrnRaceEventData.h:248
	extern const int32_t KI_MAX_BLOCK_SECTION_COUNT = 8;

private:
	// BrnRaceEventData.h:275
	uint32_t muLandmarkId;

	// BrnRaceEventData.h:276
	int32_t miBlockSectionCount;

	// BrnRaceEventData.h:277
	uint32_t[8] mauBlockSectionIds;

public:
	// BrnRaceEventData.h:252
	void Construct(uint32_t);

	// BrnRaceEventData.h:255
	void FixDown();

	// BrnRaceEventData.h:258
	void FixUp();

	// BrnRaceEventData.h:262
	void AddBlockSection(uint32_t);

	// BrnRaceEventData.h:265
	uint32_t GetLandmarkId() const;

	// BrnRaceEventData.h:268
	int32_t GetBlockSectionCount() const;

	// BrnRaceEventData.h:272
	uint32_t GetBlockSectionId(int32_t) const;

}

// BrnRaceEventData.h:289
struct BrnProgression::RaceEventData {
private:
	// BrnRaceEventData.h:586
	uint32_t muId;

	// BrnRaceEventData.h:587
	uint32_t muFlags;

	// BrnRaceEventData.h:589
	float32_t mfTrafficDensity;

	// BrnRaceEventData.h:590
	float32_t mfBoostEarning;

	// BrnRaceEventData.h:592
	CgsID mSpecialEventCarId;

	// BrnRaceEventData.h:594
	CheckpointData * mpaCheckpoints;

	// BrnRaceEventData.h:595
	int32_t miCheckpointCount;

	// BrnRaceEventData.h:597
	float32_t mfTimeLimitFast;

	// BrnRaceEventData.h:598
	float32_t mfTimeLimitSlow;

	// BrnRaceEventData.h:600
	int32_t[6] miRankScore;

	// BrnRaceEventData.h:601
	float32_t[6] mfRankTime;

	// BrnRaceEventData.h:603
	float32_t mfExtensionTime;

	// BrnRaceEventData.h:605
	EventStartGridSlot[7] maStartGridSlots;

	// BrnRaceEventData.h:606
	uint32_t muStartGridCount;

	// BrnRaceEventData.h:608
	uint8_t mu8Mode;

	// BrnRaceEventData.h:609
	uint8_t mu8OnlineMode;

	// BrnRaceEventData.h:610
	uint8_t mu8StartRivalCount;

	// BrnRaceEventData.h:611
	uint8_t mu8AddRivalCount;

	// BrnRaceEventData.h:612
	uint8_t mu8TakeDownBronze;

	// BrnRaceEventData.h:613
	uint8_t mu8TakeDownSilver;

	// BrnRaceEventData.h:614
	uint8_t mu8TakeDownGold;

	// BrnRaceEventData.h:615
	uint8_t mu8DamageLimit;

	// BrnRaceEventData.h:617
	uint8_t mu8ExtensionTimeCount;

	// BrnRaceEventData.h:618
	uint8_t mu8AStarType;

	// BrnRaceEventData.h:619
	int8_t mi8UnlockRank;

public:
	// BrnRaceEventData.h:331
	void Construct();

	// BrnRaceEventData.h:336
	void AllocateCheckpoints(int32_t, LinearMalloc *);

	// BrnRaceEventData.h:341
	void FixDown(MemoryResource);

	// BrnRaceEventData.h:346
	void FixUp(MemoryResource);

	// BrnRaceEventData.h:355
	BrnProgression::RaceEventData::EModeType GetMode() const;

	// BrnRaceEventData.h:358
	BrnProgression::RaceEventData::EOnlineModeType GetOnlineMode() const;

	// BrnRaceEventData.h:362
	bool GetFlag(BrnProgression::RaceEventData::EFlags) const;

	// BrnRaceEventData.h:365
	uint32_t GetFlags() const;

	// BrnRaceEventData.h:368
	int32_t GetCheckpointCount() const;

	// BrnRaceEventData.h:372
	const CheckpointData * GetCheckpointData(int32_t) const;

	// BrnRaceEventData.h:375
	uint8_t GetStartRivalCount() const;

	// BrnRaceEventData.h:378
	uint8_t GetAddRivalCount() const;

	// BrnRaceEventData.h:381
	uint8_t GetTakeDownBronze() const;

	// BrnRaceEventData.h:384
	uint8_t GetTakeDownSilver() const;

	// BrnRaceEventData.h:387
	uint8_t GetTakeDownGold() const;

	// BrnRaceEventData.h:390
	uint8_t GetDamageLimit() const;

	// BrnRaceEventData.h:393
	uint8_t GetTimeExtensionCount() const;

	// BrnRaceEventData.h:396
	float32_t GetTimeExtension() const;

	// BrnRaceEventData.h:399
	bool IsSpecialEvent() const;

	// BrnRaceEventData.h:402
	CgsID GetSpecialEventCarId() const;

	// BrnRaceEventData.h:409
	void SetSpecialEventCarId(CgsID);

	// BrnRaceEventData.h:413
	void SetId(uint32_t);

	// BrnRaceEventData.h:417
	void SetMode(BrnProgression::RaceEventData::EModeType);

	// BrnRaceEventData.h:421
	void SetOnlineMode(BrnProgression::RaceEventData::EOnlineModeType);

	// BrnRaceEventData.h:425
	void SetFlag(BrnProgression::RaceEventData::EFlags);

	// BrnRaceEventData.h:429
	void SetTrafficDensity(float32_t);

	// BrnRaceEventData.h:433
	void SetBoostEarning(float32_t);

	// BrnRaceEventData.h:436
	float32_t GetTrafficDensity() const;

	// BrnRaceEventData.h:439
	float32_t GetBoostEarning() const;

	// BrnRaceEventData.h:443
	void SetFlags(uint32_t);

	// BrnRaceEventData.h:447
	void ClearFlag(BrnProgression::RaceEventData::EFlags);

	// BrnRaceEventData.h:452
	void SetCheckpointData(int32_t, const CheckpointData *);

	// BrnRaceEventData.h:456
	void SetStartRivalCount(uint8_t);

	// BrnRaceEventData.h:460
	void SetAddRivalCount(uint8_t);

	// BrnRaceEventData.h:464
	void SetTakeDownBronze(uint8_t);

	// BrnRaceEventData.h:468
	void SetTakeDownSilver(uint8_t);

	// BrnRaceEventData.h:472
	void SetTakeDownGold(uint8_t);

	// BrnRaceEventData.h:476
	void SetTimeLimitBronze(float32_t);

	// BrnRaceEventData.h:480
	void SetTimeLimitSilver(float32_t);

	// BrnRaceEventData.h:484
	void SetTimeLimitGold(float32_t);

	// BrnRaceEventData.h:488
	void SetDamageLimit(uint8_t);

	// BrnRaceEventData.h:492
	void SetScoreTargetBronze(uint32_t);

	// BrnRaceEventData.h:496
	void SetScoreTargetSilver(uint32_t);

	// BrnRaceEventData.h:500
	void SetScoreTargetGold(uint32_t);

	// BrnRaceEventData.h:504
	void SetStartTime(float32_t);

	// BrnRaceEventData.h:508
	void SetDifficultyModifier(float32_t);

	// BrnRaceEventData.h:512
	void SetDifficultyLevel(uint8_t);

	// BrnRaceEventData.h:516
	void SetTimeExtensionCount(uint8_t);

	// BrnRaceEventData.h:520
	void SetTimeExtension(float32_t);

	// BrnRaceEventData.h:524
	const EventStartGridSlot * GetStartGridSlot(uint32_t) const;

	// BrnRaceEventData.h:529
	void SetStartGridSlot(uint32_t, const EventStartGridSlot &);

	// BrnRaceEventData.h:532
	uint32_t GetStartGridCount() const;

	// BrnRaceEventData.h:536
	void SetStartGridCount(uint32_t);

	// BrnRaceEventData.h:539
	int8_t GetUnlockRank() const;

	// BrnRaceEventData.h:543
	void SetUnlockRank(int8_t);

	// BrnRaceEventData.h:546
	float32_t GetTimeLimitFast() const;

	// BrnRaceEventData.h:550
	void SetTimeLimitFast(float32_t);

	// BrnRaceEventData.h:553
	float32_t GetTimeLimitSlow() const;

	// BrnRaceEventData.h:557
	void SetTimeLimitSlow(float32_t);

	// BrnRaceEventData.h:561
	int32_t GetRankScore(int32_t) const;

	// BrnRaceEventData.h:566
	void SetRankScore(int32_t, int32_t);

	// BrnRaceEventData.h:570
	float32_t GetRankTime(int32_t) const;

	// BrnRaceEventData.h:575
	void SetRankTime(int32_t, float32_t);

	// BrnRaceEventData.h:579
	void SetAStarType(BrnProgression::RaceEventData::AStarType);

	// BrnRaceEventData.h:582
	BrnProgression::RaceEventData::AStarType GetAStarType() const;

}

// BrnRaceEventData.h:248
extern const int32_t KI_MAX_BLOCK_SECTION_COUNT = 8;

// BrnRaceEventData.h:48
struct BrnProgression::EventJunction {
private:
	// BrnRaceEventData.h:80
	uint32_t muID;

	// BrnRaceEventData.h:82
	const BrnProgression::RaceEventData * mpOfflineEvent;

	// BrnRaceEventData.h:83
	const BrnProgression::RaceEventData * mpOnlineEvent;

	// BrnRaceEventData.h:85
	int32_t miShotGroup;

public:
	// BrnRaceEventData.h:55
	void Construct(uint32_t, const BrnProgression::RaceEventData *, const BrnProgression::RaceEventData *, int32_t);

	// BrnRaceEventData.h:60
	void FixDown(MemoryResource);

	// BrnRaceEventData.h:65
	void FixUp(MemoryResource);

	// BrnRaceEventData.h:68
	uint32_t GetID() const;

	// BrnRaceEventData.h:71
	const BrnProgression::RaceEventData * GetOfflineEvent() const;

	// BrnRaceEventData.h:74
	const BrnProgression::RaceEventData * GetOnlineEvent() const;

	// BrnRaceEventData.h:77
	int32_t GetShotGroup() const;

}

