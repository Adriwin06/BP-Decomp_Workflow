// BrnRaceCar.h:293
extern const float32_t KF_IN_RANGE_DISTANCE_RACE_AHEAD;

// BrnRaceCar.h:294
extern const float32_t KF_IN_RANGE_DISTANCE_RACE_BEHIND;

// BrnRaceCar.h:295
extern const float32_t KF_IN_RANGE_DISTANCE_FREE_ROAM;

// BrnRaceCar.h:298
extern const float32_t KF_OUT_OF_RANGE_DISTANCE_RACE_AHEAD;

// BrnRaceCar.h:299
extern const float32_t KF_OUT_OF_RANGE_DISTANCE_RACE_BEHIND;

// BrnRaceCar.h:300
extern const float32_t KF_OUT_OF_RANGE_DISTANCE_FREE_ROAM;

// BrnRaceCar.h:302
extern const float32_t KF_PERSISTENT_DAMAGE_STEP;

// BrnRaceCar.h:57
struct BrnWorld::RaceCar {
private:
	// BrnRaceCar.h:293
	extern const float32_t KF_IN_RANGE_DISTANCE_RACE_AHEAD;

	// BrnRaceCar.h:294
	extern const float32_t KF_IN_RANGE_DISTANCE_RACE_BEHIND;

	// BrnRaceCar.h:295
	extern const float32_t KF_IN_RANGE_DISTANCE_FREE_ROAM;

	// BrnRaceCar.h:298
	extern const float32_t KF_OUT_OF_RANGE_DISTANCE_RACE_AHEAD;

	// BrnRaceCar.h:299
	extern const float32_t KF_OUT_OF_RANGE_DISTANCE_RACE_BEHIND;

	// BrnRaceCar.h:300
	extern const float32_t KF_OUT_OF_RANGE_DISTANCE_FREE_ROAM;

	// BrnRaceCar.h:302
	extern const float32_t KF_PERSISTENT_DAMAGE_STEP;

	// BrnRaceCar.h:304
	Matrix44Affine mTransform;

	// BrnRaceCar.h:305
	Vector3 mPreviousPosition;

	// BrnRaceCar.h:306
	Vector3 mVelocity;

	// BrnRaceCar.h:308
	CgsID mRivalId;

	// BrnRaceCar.h:309
	CgsID mModelId;

	// BrnRaceCar.h:310
	CgsID mWheelId;

	// BrnRaceCar.h:312
	BrnWorld::ActiveRaceCar * mpActiveRaceCar;

	// BrnRaceCar.h:314
	WorldRegion mWorldRegion;

	// BrnRaceCar.h:317
	float32_t mfResetOnTrackSpeed;

	// BrnRaceCar.h:318
	float32_t mfResetOnTrackDistance;

	// BrnRaceCar.h:319
	BrnAI::EResetType meResetOnTrackType;

	// BrnRaceCar.h:320
	bool mbToBeResetOnTrack;

	// BrnRaceCar.h:323
	int32_t miColourIndex;

	// BrnRaceCar.h:324
	int32_t miColourPalette;

	// BrnRaceCar.h:326
	int32_t miOpponentIndex;

	// BrnRaceCar.h:328
	float32_t mfPersistentDamage;

	// BrnRaceCar.h:330
	uint8_t muType;

	// BrnRaceCar.h:331
	int8_t miGlobalRaceCarIndex;

	// BrnRaceCar.h:332
	bool mbIsInGameMode;

	// BrnRaceCar.h:333
	bool mbCarSelectAllowedInGameMode;

	// BrnRaceCar.h:334
	int8_t miRivalIndex;

	// BrnRaceCar.h:335
	int8_t miRivalDistrict;

	// BrnRaceCar.h:336
	int8_t miStartingGridPosition;

	// BrnRaceCar.h:338
	bool mbIsDispersing;

	// BrnRaceCar.h:340
	int8_t miActiveRaceCarIndex;

	// BrnRaceCar.h:341
	bool mbCanPassThroughTraffic;

	// BrnRaceCar.h:342
	bool mbIsAllowedInRoadRage;

public:
	// BrnRaceCar.h:61
	void Construct(EGlobalRaceCarIndex);

	// BrnRaceCar.h:64
	bool Prepare();

	// BrnRaceCar.h:67
	void Release();

	// BrnRaceCar.h:70
	void Destruct();

	// BrnRaceCar.h:81
	void AddToWorld(BrnWorld::ERaceCarType, Matrix44Affine, CgsID, CgsID, CgsID, int8_t, int32_t);

	// BrnRaceCar.h:86
	void AssignActiveRaceCar(BrnWorld::ActiveRaceCar *);

	// BrnRaceCar.h:90
	void RemoveActiveRaceCar();

	// BrnRaceCar.h:94
	void RemoveFromWorld();

	// BrnRaceCar.h:101
	void UpdatePositioningData(Matrix44Affine, WorldMap2D *);

	// BrnRaceCar.h:106
	void UpdateVelocity(Vector3);

	// BrnRaceCar.h:110
	void SetStartingPositionOnGrid(int8_t);

	// BrnRaceCar.h:116
	void SetInCurrentGameMode(bool, bool);

	// BrnRaceCar.h:120
	BrnWorld::ERaceCarType GetType() const;

	// BrnRaceCar.h:125
	Vector3 GetPosition() const;

	// BrnRaceCar.h:128
	Vector3 GetPreviousPosition() const;

	// BrnRaceCar.h:131
	Vector3 GetDirection() const;

	// BrnRaceCar.h:134
	Vector3 GetVelocity() const;

	// BrnRaceCar.h:137
	Matrix44Affine GetTransform() const;

	// BrnRaceCar.h:140
	BrnWorld::ActiveRaceCar * GetActiveRaceCar();

	// BrnRaceCar.h:143
	EGlobalRaceCarIndex GetGlobalRaceCarIndex() const;

	// BrnRaceCar.h:146
	int32_t GetOpponentIndex() const;

	// BrnRaceCar.h:149
	CgsID GetRivalId() const;

	// BrnRaceCar.h:152
	CgsID GetModelId() const;

	// BrnRaceCar.h:155
	CgsID GetWheelModelId() const;

	// BrnRaceCar.h:158
	bool ToBeResetOnTrack() const;

	// BrnRaceCar.h:161
	BrnAI::EResetType GetResetOnTrackType() const;

	// BrnRaceCar.h:164
	float32_t GetResetOnTrackSpeed() const;

	// BrnRaceCar.h:167
	float32_t GetResetOnTrackDist() const;

	// BrnRaceCar.h:170
	int8_t GetRivalIndex() const;

	// BrnRaceCar.h:173
	BrnWorld::EDistrict GetRivalDistrict() const;

	// BrnRaceCar.h:176
	bool IsActive() const;

	// BrnRaceCar.h:179
	bool IsInWorld() const;

	// BrnRaceCar.h:182
	bool HasActiveRaceCar() const;

	// BrnRaceCar.h:185
	bool IsPlayerDriven() const;

	// BrnRaceCar.h:188
	bool IsNetworkDriven() const;

	// BrnRaceCar.h:191
	bool IsAIDriven() const;

	// BrnRaceCar.h:194
	bool IsOutOfRangeRival() const;

	// BrnRaceCar.h:197
	bool IsInRangeRival() const;

	// BrnRaceCar.h:200
	bool IsInCurrentGameMode() const;

	// BrnRaceCar.h:203
	EActiveRaceCarIndex GetActiveRaceCarIndex() const;

	// BrnRaceCar.h:206
	bool CanPassThroughTraffic() const;

	// BrnRaceCar.h:209
	void SetCanPassThroughTraffic(bool);

	// BrnRaceCar.h:212
	void SetActiveRaceCarIndex(EActiveRaceCarIndex);

	// BrnRaceCar.h:215
	void ClearActiveRaceCarIndex();

	// BrnRaceCar.h:218
	void ClearActiveRaceCar();

	// BrnRaceCar.h:221
	int8_t GetStartingGridPosition();

	// BrnRaceCar.h:224
	int8_t IsInRace();

	// BrnRaceCar.h:227
	bool IsDispersing() const;

	// BrnRaceCar.h:230
	void SetDispersing(bool);

	// BrnRaceCar.h:236
	void RequestResetOnTrack(float32_t, BrnAI::EResetType, float32_t);

	// BrnRaceCar.h:239
	void ClearResetOnTrack();

	// BrnRaceCar.h:242
	WorldRegion GetWorldRegion() const;

	// BrnRaceCar.h:245
	bool IsAllowedInRoadRage();

	// BrnRaceCar.h:249
	void SetAllowedInRoadRage(bool);

	// BrnRaceCar.h:253
	bool ShouldBeInRange(const RaceCar *) const;

	// BrnRaceCar.h:257
	bool ShouldBeOutOfRange(const RaceCar *) const;

	// BrnRaceCar.h:261
	void SetColourIndex(int32_t);

	// BrnRaceCar.h:265
	void SetColourPalette(int32_t);

	// BrnRaceCar.h:268
	void ResetColourIndex();

	// BrnRaceCar.h:271
	int32_t GetColourIndex() const;

	// BrnRaceCar.h:274
	int32_t GetColourPalette() const;

	// BrnRaceCar.h:277
	bool ToBeRenderedDamaged() const;

	// BrnRaceCar.h:280
	float32_t GetPersistentDamage() const;

	// BrnRaceCar.h:283
	bool IncreasePersistentDamage();

	// BrnRaceCar.h:289
	void FillInOutputInterface(BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface *, float32_t, uint16_t);

private:
	// BrnRaceCar.h:347
	bool AreCarsHeadOn(const RaceCar *, const RaceCar *) const;

}

