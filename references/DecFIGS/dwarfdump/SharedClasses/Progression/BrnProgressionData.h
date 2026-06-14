// BrnProgressionData.h:54
struct BrnProgression::ProgressionData {
	// BrnProgressionData.h:244
	extern const uint32_t KU_VERSION_NUMBER = 43;

	// BrnProgressionData.h:245
	extern const uint32_t KU_ALIGNMENT = 16;

private:
	// BrnProgressionData.h:249
	uint32_t muVersionNumber;

	// BrnProgressionData.h:250
	uint32_t muSize;

	// BrnProgressionData.h:252
	CgsID * mpaPlayerCarIds;

	// BrnProgressionData.h:253
	uint32_t muPlayerCarIdCount;

	// BrnProgressionData.h:255
	ProgressionRankData * mpaProgressionRanks;

	// BrnProgressionData.h:256
	uint32_t muProgressionRankCount;

	// BrnProgressionData.h:258
	EventJunction * mpaEventJunctions;

	// BrnProgressionData.h:259
	uint32_t muEventJunctionCount;

	// BrnProgressionData.h:261
	RaceEventData * mpaEvents;

	// BrnProgressionData.h:262
	uint32_t muEventCount;

	// BrnProgressionData.h:264
	Rival * mpaRivals;

	// BrnProgressionData.h:265
	int32_t miRivalCount;

	// BrnProgressionData.h:267
	OpponentBalanceData * mpaAIBalances;

	// BrnProgressionData.h:268
	uint32_t muAIBalanceCount;

	// BrnProgressionData.h:270
	EventRacerPersonality * mpaPersonalities;

	// BrnProgressionData.h:271
	uint32_t muPersonalityCount;

	// BrnProgressionData.h:273
	TrophyUnlockData * mpaTrophyUnlocks;

	// BrnProgressionData.h:274
	uint32_t muTrophyUnlockCount;

	// BrnProgressionData.h:276
	CarOpponentSet * mpaCarOpponentSet;

	// BrnProgressionData.h:277
	uint32_t muCarOpponentsCount;

public:
	// BrnProgressionData.h:71
	void Construct(uint32_t, uint32_t, uint32_t, uint32_t, int32_t, uint32_t, uint32_t, uint32_t, uint32_t, LinearMalloc *);

	// BrnProgressionData.h:75
	CgsID GetPlayerCarId(uint32_t) const;

	// BrnProgressionData.h:78
	uint32_t GetPlayerCarIDCount() const;

	// BrnProgressionData.h:81
	uint32_t GetProgressionRankCount() const;

	// BrnProgressionData.h:86
	CarOpponentSet * FindCarOpponentSet(CgsID, int32_t) const;

	// BrnProgressionData.h:90
	const ProgressionRankData * GetProgressionRankData(uint32_t) const;

	// BrnProgressionData.h:110
	uint32_t GetEventJunctionCount() const;

	// BrnProgressionData.h:114
	const EventJunction * GetEventJunction(uint32_t) const;

	// BrnProgressionData.h:118
	const EventJunction * FindEventJunction(uint32_t) const;

	// BrnProgressionData.h:122
	const BrnProgression::RaceEventData * GetOfflineEvent(uint32_t) const;

	// BrnProgressionData.h:126
	const BrnProgression::RaceEventData * GetOnlineEvent(uint32_t) const;

	// BrnProgressionData.h:130
	const BrnProgression::RaceEventData * FindOfflineEvent(uint32_t) const;

	// BrnProgressionData.h:134
	const BrnProgression::RaceEventData * FindOnlineEvent(uint32_t) const;

	// BrnProgressionData.h:138
	const Rival * GetRival(int32_t) const;

	// BrnProgressionData.h:142
	Rival * GetRival(int32_t);

	// BrnProgressionData.h:146
	int32_t GetRivalCount() const;

	// BrnProgressionData.h:150
	int32_t FindRivalIndexFromId(CgsID) const;

	// BrnProgressionData.h:154
	const Rival * FindRival(CgsID) const;

	// BrnProgressionData.h:158
	const OpponentBalanceData * GetAIBalanceGraph(uint32_t) const;

	// BrnProgressionData.h:161
	uint32_t GetAIBalanceGraphCount() const;

	// BrnProgressionData.h:167
	OpponentBalanceData GetInterpolatedAIBalanceGraph(int32_t, int32_t, float32_t) const;

	// BrnProgressionData.h:171
	const EventRacerPersonality * GetPersonality(uint32_t) const;

	// BrnProgressionData.h:174
	uint32_t GetPersonalityCount() const;

	// BrnProgressionData.h:226
	void FixUp(MemoryResource);

	// BrnProgressionData.h:231
	void FixDown(MemoryResource);

	// BrnProgressionData.h:235
	uint32_t GetSize() const;

	// BrnProgressionData.h:239
	TrophyUnlockData * GetTrophyUnlock(uint32_t) const;

	// BrnProgressionData.h:242
	uint32_t GetTrophyUnlockCount() const;

}

// BrnProgressionData.h:244
extern const uint32_t KU_VERSION_NUMBER = 43;

// BrnProgressionData.h:245
extern const uint32_t KU_ALIGNMENT = 16;

