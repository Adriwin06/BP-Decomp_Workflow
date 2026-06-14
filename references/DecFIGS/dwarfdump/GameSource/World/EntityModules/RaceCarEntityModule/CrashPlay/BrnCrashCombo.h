// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnCrashCombo.h:34
	const RwInt32 knCrashComboMaxSize = 8;

	// BrnCrashCombo.h:35
	const RwInt32 knMaxVehiclesInCrash = 64;

}

// BrnCrashCombo.h:42
struct BrnWorld::CrashComboItem {
	// BrnCrashCombo.h:44
	BrnWorld::EComboEntryType meType;

	// BrnCrashCombo.h:45
	int32_t miValue;

	// BrnCrashCombo.h:46
	float32_t mfValue;

}

// BrnCrashCombo.h:50
struct BrnWorld::CrashCombo {
private:
	// BrnCrashCombo.h:115
	CrashComboItem[8] maCombo;

	// BrnCrashCombo.h:116
	RwInt32 miComboQueueSize;

	// BrnCrashCombo.h:117
	RwInt32 miComboQueueHead;

	// BrnCrashCombo.h:118
	RwInt32 miComboQueueTail;

	// BrnCrashCombo.h:119
	CrashComboItem * mpNewComboItem;

	// BrnCrashCombo.h:120
	CrashComboItem * mpLastSkidComboEntry;

	// BrnCrashCombo.h:121
	CrashComboItem * mpLastAirComboEntry;

	// BrnCrashCombo.h:122
	int32_t miNumNewItemsThisFrame;

	// BrnCrashCombo.h:123
	bool mbAddedItemThisFrame;

	// BrnCrashCombo.h:126
	bool mbCrashing;

	// BrnCrashCombo.h:127
	bool mbCrashCausedByWall;

	// BrnCrashCombo.h:128
	float32_t mfRampSkidIgnoreTime;

	// BrnCrashCombo.h:131
	Vector3 mCrashStartPos;

	// BrnCrashCombo.h:132
	Vector3 mLastPosition;

	// BrnCrashCombo.h:135
	extern const int32_t KI_MAX_SPINS = 3;

	// BrnCrashCombo.h:137
	Vector3 mRotationDelta;

	// BrnCrashCombo.h:138
	bool[3] mabSpinsFinished;

	// BrnCrashCombo.h:139
	RwInt32[3] manCurrentSpins;

	// BrnCrashCombo.h:140
	RwInt32[3] manTotalSpins;

	// BrnCrashCombo.h:141
	RwInt32 miAllTotalSpins;

	// BrnCrashCombo.h:142
	float32_t[3] mafTotalSpinTime;

	// BrnCrashCombo.h:143
	float32_t[3] mafSpins;

	// BrnCrashCombo.h:144
	BrnWorld::ECrashComboSideUp meSideUp;

	// BrnCrashCombo.h:145
	RwInt32[7] manTotalAxisSpins;

	// BrnCrashCombo.h:146
	RwInt32 miTotalBackFlips;

	// BrnCrashCombo.h:149
	bool mbLanded;

	// BrnCrashCombo.h:150
	bool mbLandedThisFrame;

	// BrnCrashCombo.h:151
	bool mbInAir;

	// BrnCrashCombo.h:152
	float32_t mfAirTime;

	// BrnCrashCombo.h:153
	float32_t mfGroundTime;

	// BrnCrashCombo.h:154
	float32_t mfTotalAirTime;

	// BrnCrashCombo.h:155
	float32_t mfCurrentAirTime;

	// BrnCrashCombo.h:157
	BrnWorld::ECrashComboSideUp meHardestLanding;

	// BrnCrashCombo.h:158
	float32_t mfHardestLandingVelocity;

	// BrnCrashCombo.h:159
	float32_t mfLastLandingVelocity;

	// BrnCrashCombo.h:162
	Vector3 mSkidStartPos;

	// BrnCrashCombo.h:163
	bool mbStoppedThisFrame;

	// BrnCrashCombo.h:164
	bool mbSkidFinished;

	// BrnCrashCombo.h:165
	bool mbSkidding;

	// BrnCrashCombo.h:166
	bool mbExploded;

	// BrnCrashCombo.h:167
	bool mbOnFire;

	// BrnCrashCombo.h:168
	float32_t mfSkidDistance;

	// BrnCrashCombo.h:169
	float32_t mfTotalSkidTime;

	// BrnCrashCombo.h:170
	float32_t mfTotalSkidDistance;

	// BrnCrashCombo.h:171
	float32_t[7] mafSkidDistance;

	// BrnCrashCombo.h:172
	BrnWorld::ECrashComboSideUp mePrevSideUp;

	// BrnCrashCombo.h:175
	Vector3 mCurrentCarPos;

	// BrnCrashCombo.h:178
	BrnWorld::ActiveRaceCar * mpCar;

	// BrnCrashCombo.h:181
	int16_t mi16CurrentComboIndex;

	// BrnCrashCombo.h:182
	bool mbReverse;

	// BrnCrashCombo.h:183
	int32_t miNumWheelsLastFrame;

	// BrnCrashCombo.h:186
	bool mbNeedToAddVehicleHit;

	// BrnCrashCombo.h:187
	bool mbNeedToAddVehicleLeapt;

	// BrnCrashCombo.h:188
	bool mbNeedToAddNewRoad;

public:
	// BrnCrashCombo.h:57
	void Construct();

	// BrnCrashCombo.h:60
	void Destruct();

	// BrnCrashCombo.h:63
	void Prepare();

	// BrnCrashCombo.h:66
	void Release();

	// BrnCrashCombo.h:71
	void Update(float32_t, OutputBuffer_PrePhysics *);

	// BrnCrashCombo.h:74
	void UpdateCollidingPairs();

	// BrnCrashCombo.h:79
	void OnCrashStart(BrnWorld::ActiveRaceCar *);

	// BrnCrashCombo.h:82
	void OnCrashFinished();

	// BrnCrashCombo.h:86
	void OnVehicleHit();

	// BrnCrashCombo.h:89
	void OnVehicleLeapt();

	// BrnCrashCombo.h:92
	void OnNewRoad();

	// BrnCrashCombo.h:97
	CrashComboItem * GetFirstItem(bool);

	// BrnCrashCombo.h:100
	CrashComboItem * GetNextItem();

	// BrnCrashCombo.h:104
	CrashComboItem * GetItemByIndex(int32_t);

	// BrnCrashCombo.h:107
	int32_t GetComboSize() const;

	// BrnCrashCombo.h:110
	int32_t GetNumNewItems();

private:
	// BrnCrashCombo.h:193
	void DetectAirAndGround(float32_t);

	// BrnCrashCombo.h:196
	void DetectSkid();

	// BrnCrashCombo.h:202
	void UpdateCurrentCombo(BrnGameState::GameStateModuleIO::GameEventQueue *, float32_t);

	// BrnCrashCombo.h:206
	void UpdateVehicles(BrnGameState::GameStateModuleIO::GameEventQueue *);

	// BrnCrashCombo.h:211
	void UpdateSpins(BrnGameState::GameStateModuleIO::GameEventQueue *, float32_t);

	// BrnCrashCombo.h:216
	void UpdateSkids(BrnGameState::GameStateModuleIO::GameEventQueue *, float32_t);

	// BrnCrashCombo.h:220
	void UpdateAir(BrnGameState::GameStateModuleIO::GameEventQueue *);

	// BrnCrashCombo.h:224
	void UpdateExtras(BrnGameState::GameStateModuleIO::GameEventQueue *);

	// BrnCrashCombo.h:228
	CrashComboItem * AddUninitialisedItemToCombo();

	// BrnCrashCombo.h:234
	void AddItemToCombo(BrnGameState::GameStateModuleIO::GameEventQueue *, BrnWorld::EComboEntryType, RwInt32);

	// BrnCrashCombo.h:240
	void AddItemToCombo(BrnGameState::GameStateModuleIO::GameEventQueue *, BrnWorld::EComboEntryType, float32_t);

	// BrnCrashCombo.h:244
	void AddLanding(BrnGameState::GameStateModuleIO::GameEventQueue *);

	// BrnCrashCombo.h:248
	BrnWorld::ECrashComboSideUp GetSideFacingUp(Matrix44Affine);

	// BrnCrashCombo.h:251
	void ResetData();

}

// BrnCrashCombo.h:135
extern const int32_t KI_MAX_SPINS = 3;

