// BrnProgressionRankData.h:44
struct BrnProgression::ProgressionRankData {
private:
	// BrnProgressionRankData.h:277
	float32_t mfTrafficDensityRace;

	// BrnProgressionRankData.h:278
	float32_t mfBurningRouteTimeScale;

	// BrnProgressionRankData.h:279
	float32_t mfTrafficDensityBurningRoute;

	// BrnProgressionRankData.h:280
	float32_t mfTrafficDensityRoadRage;

	// BrnProgressionRankData.h:281
	float32_t mfTrafficDensitySurvival;

	// BrnProgressionRankData.h:282
	float32_t mfTrafficDensityPursuit;

	// BrnProgressionRankData.h:284
	float32_t mfShuntStrengthRace;

	// BrnProgressionRankData.h:285
	float32_t mfShuntStrengthRoadRage;

	// BrnProgressionRankData.h:286
	float32_t mfShuntStrengthMarkedMan;

	// BrnProgressionRankData.h:288
	float32_t mfLargeVehicleProbability;

	// BrnProgressionRankData.h:290
	uint32_t muId;

	// BrnProgressionRankData.h:292
	float32_t[8] maOvertakingDifficulty;

	// BrnProgressionRankData.h:294
	uint16_t mu16MedalThresholdToNextRank;

	// BrnProgressionRankData.h:295
	uint16_t mu16EventThresholdToNextRank;

	// BrnProgressionRankData.h:296
	uint16_t muRoadRageTakedownTarget;

	// BrnProgressionRankData.h:297
	uint16_t muRoadRageTime;

	// BrnProgressionRankData.h:298
	uint16_t muRoadRageTimeExtensions;

	// BrnProgressionRankData.h:299
	uint16_t muRoadRageExtensionTime;

	// BrnProgressionRankData.h:300
	uint16_t muRoadRageDamageLimit;

	// BrnProgressionRankData.h:301
	uint16_t muRoadRageTriggerExtension;

	// BrnProgressionRankData.h:305
	uint8_t muRaceRivalsNumber;

	// BrnProgressionRankData.h:306
	uint8_t muGauntletRivalsNumber;

	// BrnProgressionRankData.h:307
	uint8_t muRoadRageRivalsNumber;

	// BrnProgressionRankData.h:308
	uint8_t muNumGiftCars;

	// BrnProgressionRankData.h:310
	uint8_t muNumWinsToRankUpRace;

	// BrnProgressionRankData.h:311
	uint8_t muNumWinsToRankUpStunt;

	// BrnProgressionRankData.h:312
	uint8_t muNumWinsToRankUpRoadRage;

	// BrnProgressionRankData.h:313
	uint8_t muNumWinsToRankUpMarkedMan;

	// BrnProgressionRankData.h:315
	CgsID mFreeCarForRankUpID;

public:
	// BrnProgressionRankData.h:48
	void Construct();

	// BrnProgressionRankData.h:53
	void FixDown(MemoryResource);

	// BrnProgressionRankData.h:58
	void FixUp(MemoryResource);

	// BrnProgressionRankData.h:64
	uint32_t GetId() const;

	// BrnProgressionRankData.h:67
	uint32_t GetRaceRivalsNumber() const;

	// BrnProgressionRankData.h:70
	uint32_t GetGauntletRivalsNumber() const;

	// BrnProgressionRankData.h:73
	uint32_t GetRoadRageRivalsNumber() const;

	// BrnProgressionRankData.h:76
	float32_t GetLargeVehicleProbability() const;

	// BrnProgressionRankData.h:79
	uint32_t GetNumGiftCars() const;

	// BrnProgressionRankData.h:82
	uint16_t GetMedalThresholdToNextRank() const;

	// BrnProgressionRankData.h:85
	uint16_t GetEventThresholdToNextRank() const;

	// BrnProgressionRankData.h:88
	float32_t GetBurningRouteTimeScale() const;

	// BrnProgressionRankData.h:91
	uint16_t GetRoadRageTakedownTarget() const;

	// BrnProgressionRankData.h:94
	uint16_t GetRoadRageTime() const;

	// BrnProgressionRankData.h:97
	uint16_t GetRoadRageExtensionTime() const;

	// BrnProgressionRankData.h:100
	uint16_t GetRoadRageTimeExtensions() const;

	// BrnProgressionRankData.h:103
	uint16_t GetRoadRageTriggerExtension() const;

	// BrnProgressionRankData.h:106
	uint16_t GetTrafficDensityTrigger() const;

	// BrnProgressionRankData.h:109
	uint16_t GetRoadRageDamageLimit() const;

	// BrnProgressionRankData.h:112
	float32_t GetTrafficDensityRace() const;

	// BrnProgressionRankData.h:115
	float32_t GetTrafficDensityBurningRoute() const;

	// BrnProgressionRankData.h:118
	float32_t GetTrafficDensityRoadRage() const;

	// BrnProgressionRankData.h:121
	float32_t GetTrafficDensitySurvival() const;

	// BrnProgressionRankData.h:124
	float32_t GetTrafficDensityPursuit() const;

	// BrnProgressionRankData.h:127
	float32_t GetShuntStrengthRace() const;

	// BrnProgressionRankData.h:130
	float32_t GetShuntStrengthRoadRage() const;

	// BrnProgressionRankData.h:133
	float32_t GetShuntStrengthMarkedMan() const;

	// BrnProgressionRankData.h:138
	void SetId(uint32_t);

	// BrnProgressionRankData.h:142
	void SetMedalThresholdToNextRank(uint16_t);

	// BrnProgressionRankData.h:146
	void SetEventThresholdToNextRank(uint16_t);

	// BrnProgressionRankData.h:150
	void SetRaceRivalsNumber(uint8_t);

	// BrnProgressionRankData.h:154
	void SetGauntletRivalsNumber(uint8_t);

	// BrnProgressionRankData.h:158
	void SetRoadRageRivalsNumber(uint8_t);

	// BrnProgressionRankData.h:162
	void SetLargeVehicleProbability(float32_t);

	// BrnProgressionRankData.h:166
	void SetNumGiftCars(uint8_t);

	// BrnProgressionRankData.h:171
	void SetBurningRouteTimeScale(float32_t);

	// BrnProgressionRankData.h:175
	void SetRoadRageTakedownTarget(uint16_t);

	// BrnProgressionRankData.h:179
	void SetRoadRageTime(uint16_t);

	// BrnProgressionRankData.h:183
	void SetRoadRageTimeExtensions(uint16_t);

	// BrnProgressionRankData.h:188
	void SetOvertakingDifficulty(int32_t, float32_t);

	// BrnProgressionRankData.h:192
	void GetOvertakingDifficulty(float32_t *) const;

	// BrnProgressionRankData.h:196
	void SetRoadRageExtensionTime(uint16_t);

	// BrnProgressionRankData.h:200
	void SetRoadRageTriggerExtension(uint16_t);

	// BrnProgressionRankData.h:204
	void SetRoadRageDamageLimit(uint16_t);

	// BrnProgressionRankData.h:208
	void SetTrafficDensityRace(float32_t);

	// BrnProgressionRankData.h:212
	void SetTrafficDensityBurningRoute(float32_t);

	// BrnProgressionRankData.h:216
	void SetTrafficDensityRoadRage(float32_t);

	// BrnProgressionRankData.h:220
	void SetTrafficDensitySurvival(float32_t);

	// BrnProgressionRankData.h:224
	void SetTrafficDensityPursuit(float32_t);

	// BrnProgressionRankData.h:228
	void SetShuntStrengthRace(float32_t);

	// BrnProgressionRankData.h:232
	void SetShuntStrengthRoadRage(float32_t);

	// BrnProgressionRankData.h:236
	void SetShuntStrengthMarkedMan(float32_t);

	// BrnProgressionRankData.h:240
	void SetNumWinsToRankUpRace(uint8_t);

	// BrnProgressionRankData.h:244
	void SetNumWinsToRankUpStunt(uint8_t);

	// BrnProgressionRankData.h:248
	void SetNumWinsToRankUpRoadRage(uint8_t);

	// BrnProgressionRankData.h:252
	void SetNumWinsToRankUpMarkedMan(uint8_t);

	// BrnProgressionRankData.h:255
	uint8_t GetNumWinsToRankUpRace() const;

	// BrnProgressionRankData.h:258
	uint8_t GetNumWinsToRankUpStunt() const;

	// BrnProgressionRankData.h:261
	uint8_t GetNumWinsToRankUpRoadRage() const;

	// BrnProgressionRankData.h:264
	uint8_t GetNumWinsToRankUpMarkedMan() const;

	// BrnProgressionRankData.h:268
	void SetFreeCarForRankUpID(CgsID);

	// BrnProgressionRankData.h:271
	CgsID GetFreeCarForRankUpID() const;

}

