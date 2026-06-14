// BrnRaceCarAIInterfaces.h:56
struct BrnAI::AIModuleIO::RaceCarAIInterface {
private:
	// BrnRaceCarAIInterfaces.h:193
	Matrix44Affine[8] maMatrices;

	// BrnRaceCarAIInterfaces.h:194
	Vector3[8] maVelocities;

	// BrnRaceCarAIInterfaces.h:195
	float32_t[8] mafSpeeds;

	// BrnRaceCarAIInterfaces.h:196
	uint16_t[8] mauSectionIndices;

	// Unknown accessibility
	// BrnRaceCarAIInterfaces.h:44
	typedef BitArray<8u> ActiveRaceCarBitArray;

	// BrnRaceCarAIInterfaces.h:197
	RaceCarAIInterface::ActiveRaceCarBitArray mInAirBits;

	// BrnRaceCarAIInterfaces.h:198
	RaceCarAIInterface::ActiveRaceCarBitArray mCrashingBits;

	// BrnRaceCarAIInterfaces.h:199
	RaceCarAIInterface::ActiveRaceCarBitArray mShowtimeBits;

	// BrnRaceCarAIInterfaces.h:200
	RaceCarAIInterface::ActiveRaceCarBitArray mOnStartLineBits;

	// BrnRaceCarAIInterfaces.h:201
	RaceCarAIInterface::ActiveRaceCarBitArray mDriftingBits;

	// BrnRaceCarAIInterfaces.h:202
	RaceCarAIInterface::ActiveRaceCarBitArray mRaceCarContactBits;

	// BrnRaceCarAIInterfaces.h:203
	RaceCarAIInterface::ActiveRaceCarBitArray mPlayerContactBits;

	// BrnRaceCarAIInterfaces.h:204
	RaceCarAIInterface::ActiveRaceCarBitArray mSetActiveRaceCars;

	// BrnRaceCarAIInterfaces.h:205
	RaceCarAIInterface::ActiveRaceCarBitArray mFrontRayOccluded;

	// BrnRaceCarAIInterfaces.h:207
	VariableEventQueue<16384,16> mManagementQueue;

	// BrnRaceCarAIInterfaces.h:209
	Vector3 mPlayerCarPosition;

	// BrnRaceCarAIInterfaces.h:210
	Vector3 mPlayerCarDirection;

	// BrnRaceCarAIInterfaces.h:211
	EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

	// BrnRaceCarAIInterfaces.h:212
	bool mbPlayerDataSet;

	// BrnRaceCarAIInterfaces.h:213
	EActiveRaceCarIndex[35] maeActiveRaceCarIndices;

public:
	// BrnRaceCarAIInterfaces.h:64
	void Construct();

	// BrnRaceCarAIInterfaces.h:73
	void AttachAIControl(EGlobalRaceCarIndex, Attribute::Key, BrnAI::EPersonalityType, bool);

	// BrnRaceCarAIInterfaces.h:79
	void ActivateRaceCar(EGlobalRaceCarIndex, EActiveRaceCarIndex);

	// BrnRaceCarAIInterfaces.h:85
	void DeactivateRaceCar(EGlobalRaceCarIndex, bool);

	// BrnRaceCarAIInterfaces.h:90
	void DetachAIControl(EGlobalRaceCarIndex);

	// BrnRaceCarAIInterfaces.h:94
	void ClearRaceCarItinerary(EGlobalRaceCarIndex);

	// BrnRaceCarAIInterfaces.h:101
	void SetPlayerActiveRaceCarData(Vector3, Vector3, EActiveRaceCarIndex);

	// BrnRaceCarAIInterfaces.h:106
	void SetPlayerControlChange(bool);

	// BrnRaceCarAIInterfaces.h:116
	void AddAICarToCurrentMode(EGlobalRaceCarIndex, int32_t, uint16_t, float32_t, float32_t, bool);

	// BrnRaceCarAIInterfaces.h:120
	void RemoveAICarFromCurrentMode(EGlobalRaceCarIndex);

	// BrnRaceCarAIInterfaces.h:130
	void SetUpOutOfRangeRaceCar(EGlobalRaceCarIndex, Vector3, Vector3, uint16_t, BrnWorld::EDistrict, uint8_t);

	// BrnRaceCarAIInterfaces.h:147
	void UpdateActiveRaceCarData(EActiveRaceCarIndex, Matrix44Affine, Vector3, float32_t, uint16_t, bool, bool, bool, bool, bool, bool, bool, bool);

	// BrnRaceCarAIInterfaces.h:152
	void SetGridPositionIndices(const int8_t *);

	// BrnRaceCarAIInterfaces.h:157
	void SetActiveRaceCarIndex(EGlobalRaceCarIndex, EActiveRaceCarIndex);

	// BrnRaceCarAIInterfaces.h:161
	EActiveRaceCarIndex GetActiveRaceCarIndex(EGlobalRaceCarIndex);

	// BrnRaceCarAIInterfaces.h:165
	EGlobalRaceCarIndex GetGlobalIndexFromActiveIndex(EActiveRaceCarIndex) const;

	// BrnRaceCarAIInterfaces.h:168
	const VariableEventQueue<16384,16> * GetManagementQueue() const;

	// BrnRaceCarAIInterfaces.h:169
	bool IsPlayerCarActive() const;

	// BrnRaceCarAIInterfaces.h:170
	Vector3 GetPlayerCarPosition() const;

	// BrnRaceCarAIInterfaces.h:171
	Vector3 GetPlayerCarDirection() const;

	// BrnRaceCarAIInterfaces.h:172
	EActiveRaceCarIndex GetPlayerActiveRaceCarIndex() const;

	// BrnRaceCarAIInterfaces.h:173
	const rw::math::vpu::Matrix44Affine & GetActiveRaceCarMatrix(EActiveRaceCarIndex) const;

	// BrnRaceCarAIInterfaces.h:174
	Vector3 GetActiveRaceCarVelocity(EActiveRaceCarIndex) const;

	// BrnRaceCarAIInterfaces.h:175
	float32_t GetActiveRaceCarSpeed(EActiveRaceCarIndex) const;

	// BrnRaceCarAIInterfaces.h:176
	uint16_t GetActiveRaceCarSection(EActiveRaceCarIndex) const;

	// BrnRaceCarAIInterfaces.h:177
	bool IsActiveRaceCarInAir(EActiveRaceCarIndex) const;

	// BrnRaceCarAIInterfaces.h:178
	bool IsActiveRaceCarCrashing(EActiveRaceCarIndex) const;

	// BrnRaceCarAIInterfaces.h:179
	bool IsActiveRaceCarInShowtime(EActiveRaceCarIndex) const;

	// BrnRaceCarAIInterfaces.h:180
	bool IsActiveRaceCarOnStartLine(EActiveRaceCarIndex) const;

	// BrnRaceCarAIInterfaces.h:181
	bool IsActiveRaceCarDrifting(EActiveRaceCarIndex) const;

	// BrnRaceCarAIInterfaces.h:182
	bool IsActiveRaceCarTouchingAnother(EActiveRaceCarIndex) const;

	// BrnRaceCarAIInterfaces.h:183
	bool IsActiveRaceCarFrontRayOccluded(EActiveRaceCarIndex) const;

	// BrnRaceCarAIInterfaces.h:184
	bool IsActiveRaceCarTouchingPlayer(EActiveRaceCarIndex) const;

	// BrnRaceCarAIInterfaces.h:189
	bool IsActiveRaceCarDataValid(EActiveRaceCarIndex) const;

}

// BrnRaceCarAIInterfaces.h:229
struct BrnAI::AIModuleIO::AIRaceCarInterface {
private:
	// BrnRaceCarAIInterfaces.h:269
	Vector3[35] maPositions;

	// BrnRaceCarAIInterfaces.h:270
	Vector3[35] maAts;

	// BrnRaceCarAIInterfaces.h:272
	BitArray<35u> mSetRaceCars;

	// BrnRaceCarAIInterfaces.h:273
	BitArray<35u> mCanPassThroughTraffic;

	// BrnRaceCarAIInterfaces.h:276
	Vector2 mCurrentNodePosition;

	// BrnRaceCarAIInterfaces.h:277
	Vector2 mNextNodePosition;

public:
	// BrnRaceCarAIInterfaces.h:234
	void Construct();

	// BrnRaceCarAIInterfaces.h:241
	void UpdateInactiveRaceCarData(EGlobalRaceCarIndex, Vector3, Vector3);

	// BrnRaceCarAIInterfaces.h:246
	void UpdateAllRaceCarData(EGlobalRaceCarIndex, bool);

	// BrnRaceCarAIInterfaces.h:250
	void SetPlayerRouteNodePositions(AICar *);

	// BrnRaceCarAIInterfaces.h:253
	Vector2 GetPlayersCurrentRouteNodePosition() const;

	// BrnRaceCarAIInterfaces.h:256
	Vector2 GetPlayersNextRouteNodePosition() const;

	// BrnRaceCarAIInterfaces.h:260
	bool WasInactiveRaceCarUpdated(int8_t) const;

	// BrnRaceCarAIInterfaces.h:261
	Vector3 GetInactiveRaceCarPosition(int8_t) const;

	// BrnRaceCarAIInterfaces.h:262
	Vector3 GetInactiveRaceCarAt(int8_t) const;

	// BrnRaceCarAIInterfaces.h:263
	bool CanPassThroughTraffic(int8_t) const;

}

// BrnRaceCarAIInterfaces.h:301
struct BrnAI::AIModuleIO::AttachAIControlEvent : public Event {
	// BrnRaceCarAIInterfaces.h:303
	EGlobalRaceCarIndex meGlobalRaceCarIndex;

	// BrnRaceCarAIInterfaces.h:304
	Attribute::Key mCarAssetAttribKey;

	// BrnRaceCarAIInterfaces.h:305
	BrnAI::EPersonalityType mePersonalityType;

	// BrnRaceCarAIInterfaces.h:306
	bool mbKeepResetSection;

}

// BrnRaceCarAIInterfaces.h:311
struct BrnAI::AIModuleIO::ActivateRaceCarEvent : public Event {
	// BrnRaceCarAIInterfaces.h:313
	EGlobalRaceCarIndex meGlobalRaceCarIndex;

	// BrnRaceCarAIInterfaces.h:314
	EActiveRaceCarIndex meActiveRaceCarIndex;

}

// BrnRaceCarAIInterfaces.h:319
struct BrnAI::AIModuleIO::DeactivateRaceCarEvent : public Event {
	// BrnRaceCarAIInterfaces.h:321
	EGlobalRaceCarIndex meGlobalRaceCarIndex;

	// BrnRaceCarAIInterfaces.h:322
	bool mbIsInAMode;

}

// BrnRaceCarAIInterfaces.h:327
struct BrnAI::AIModuleIO::DetachAIControlEvent : public Event {
	// BrnRaceCarAIInterfaces.h:329
	EGlobalRaceCarIndex meGlobalRaceCarIndex;

}

// BrnRaceCarAIInterfaces.h:334
struct BrnAI::AIModuleIO::SetUpOutOfRangeRaceCarEvent : public Event {
	// BrnRaceCarAIInterfaces.h:336
	EGlobalRaceCarIndex meGlobalRaceCarIndex;

	// BrnRaceCarAIInterfaces.h:337
	Vector3 mPosition;

	// BrnRaceCarAIInterfaces.h:338
	Vector3 mAt;

	// BrnRaceCarAIInterfaces.h:339
	uint16_t muSection;

	// BrnRaceCarAIInterfaces.h:340
	BrnWorld::EDistrict meDistrict;

	// BrnRaceCarAIInterfaces.h:341
	uint8_t muNumberOfMedalsToUnlock;

}

// BrnRaceCarAIInterfaces.h:346
struct BrnAI::AIModuleIO::PlayerControlChangedEvent : public Event {
	// BrnRaceCarAIInterfaces.h:348
	bool mbPlayerIsInControl;

}

// BrnRaceCarAIInterfaces.h:353
struct BrnAI::AIModuleIO::AddCarToCurrentModeEvent : public Event {
	// BrnRaceCarAIInterfaces.h:355
	EGlobalRaceCarIndex meGlobalRaceCarIndex;

	// BrnRaceCarAIInterfaces.h:356
	int32_t miOpponentIndex;

	// BrnRaceCarAIInterfaces.h:357
	uint16_t muDestinationAISection;

	// BrnRaceCarAIInterfaces.h:358
	bool mbDeviateFromRoute;

	// BrnRaceCarAIInterfaces.h:359
	float32_t mfProgressionRankAsRatio;

	// BrnRaceCarAIInterfaces.h:360
	float32_t mfOvertakingDifficulty;

}

// BrnRaceCarAIInterfaces.h:366
struct BrnAI::AIModuleIO::RemoveCarFromCurrentModeEvent : public Event {
	// BrnRaceCarAIInterfaces.h:368
	EGlobalRaceCarIndex meGlobalRaceCarIndex;

}

// BrnRoute.h:26
namespace BrnAI {
	// BrnAICarOutputInterface.h:30
	namespace AIModuleIO {
		// BrnRaceCarAIInterfaces.h:284
		enum EEvent {
			E_EVENT_ATTACH_AI_CONTROL = 0,
			E_EVENT_ACTIVATE_RACE_CAR = 1,
			E_EVENT_DEACTIVATE_RACE_CAR = 2,
			E_EVENT_DETACH_AI_CONTROL = 3,
			E_EVENT_PLAYER_TAKEN_OVER = 4,
			E_EVENT_SET_UP_OUT_OF_RANGE_RACE_CAR = 5,
			E_EVENT_ADD_CAR_TO_MODE = 6,
			E_EVENT_REMOVE_CAR_FROM_MODE = 7,
			E_EVENT_COUNT = 8,
		}

	}

}

