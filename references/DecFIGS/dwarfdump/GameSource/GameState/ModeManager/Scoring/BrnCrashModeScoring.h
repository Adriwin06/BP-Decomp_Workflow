// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct CrashModeScoring {
		// BrnCrashModeScoring.h:200
		struct RecentCrash {
			// BrnCrashModeScoring.h:202
			uint16_t muTrafficCarIndex;

			// BrnCrashModeScoring.h:203
			uint16_t muCrashChainCount;

			// BrnCrashModeScoring.h:204
			float32_t mfTimeOfCrash;

		}

	}

	// BrnCrashModeScoring.h:43
	const int32_t KI_MAX_RECENTLY_HIT_PROPS = 8;

	// BrnCrashModeScoring.h:44
	const int32_t KI_MAX_RECENTLY_HIT_CARS = 64;

	// BrnCrashModeScoring.h:45
	const int32_t KI_MAX_RECENTLY_HIT_STUNTS = 8;

	// BrnCrashModeScoring.h:46
	const int32_t KI_SCORE_BONUS_PER_OVERHEAD_SIGN = 10000;

	// BrnCrashModeScoring.h:47
	const int32_t KI_SCORE_BONUS_FOR_COMBO_CRASH = 1000;

	// BrnCrashModeScoring.h:48
	const int32_t KI_SCORE_BONUS_PER_YARD = 100;

}

// BrnCrashModeScoring.h:34
typedef RCEntityActiveRaceCarOutputInterface RCEntityActiveRaceCarOutputInterface;

// BrnCrashModeScoring.h:63
struct BrnGameState::CrashModeScoring {
private:
	// BrnCrashModeScoring.h:215
	BrnGameState::CrashScoreDebugComponent mCrashScoreDebugComponent;

	// BrnCrashModeScoring.h:219
	Vector3 mPlayerPosLastFrame;

	// BrnCrashModeScoring.h:220
	Vector3 mPlayerPosLastStored;

	// BrnCrashModeScoring.h:221
	float32_t mfTimeSincePlayerCarMoved;

	// BrnCrashModeScoring.h:222
	float32_t mfTimeSinceLastEvent;

	// BrnCrashModeScoring.h:223
	float32_t mfTimeSinceModeStart;

	// BrnCrashModeScoring.h:224
	float32_t mfDistanceUntilStorePosition;

	// BrnCrashModeScoring.h:225
	float32_t mfPlayerBoostPercentage;

	// BrnCrashModeScoring.h:226
	bool mbPlayerIsCrashing;

	// BrnCrashModeScoring.h:227
	bool mbInfiniteCrashMode;

	// BrnCrashModeScoring.h:231
	FixedRingBuffer<uint16_t,8> mRecentlyHitPropSet;

	// BrnCrashModeScoring.h:234
	Array<BrnGameState::CrashModeScoring::RecentCrash,64u> mRecentCrashSet;

	// BrnCrashModeScoring.h:237
	FixedRingBuffer<CgsID,8> mRecentStuntSet;

	// BrnCrashModeScoring.h:239
	int32_t miNumWheelsLastFrame;

	// BrnCrashModeScoring.h:242
	int32_t miBaseScore;

	// BrnCrashModeScoring.h:243
	int32_t miCurrentComboCount;

	// BrnCrashModeScoring.h:244
	int32_t miScoreMultiplier;

	// BrnCrashModeScoring.h:245
	int32_t[4] maiNumCarsCrashed;

	// BrnCrashModeScoring.h:246
	int32_t miNumCarsLeaped;

	// BrnCrashModeScoring.h:247
	int32_t miNumPropsDestroyed;

	// BrnCrashModeScoring.h:248
	bool mbAboutToResetCombo;

	// BrnCrashModeScoring.h:249
	float32_t mfResetComboGracePeriod;

	// BrnCrashModeScoring.h:250
	float32_t mfDistanceTravelled;

	// BrnCrashModeScoring.h:251
	float32_t mfTimeSinceLastHitOverheadSign;

	// BrnCrashModeScoring.h:252
	float32_t mfTimeContactingWall;

	// BrnCrashModeScoring.h:253
	float32_t mfTotalAirTime;

	// BrnCrashModeScoring.h:254
	float32_t mfCurrentJumpAirTime;

	// BrnCrashModeScoring.h:255
	float32_t mfLongestJumpAirTime;

	// BrnCrashModeScoring.h:256
	float32_t mfHighestJump;

	// BrnCrashModeScoring.h:257
	int32_t miStuntsPerformed;

	// BrnCrashModeScoring.h:258
	int32_t miCarDestructionBonus;

public:
	// BrnCrashModeScoring.h:70
	void Construct();

	// BrnCrashModeScoring.h:74
	bool Prepare();

	// BrnCrashModeScoring.h:81
	void Update(const RCEntityActiveRaceCarOutputInterface *, const VehicleOutputInterface::PhysicalTrafficStateQueue *, float32_t);

	// BrnCrashModeScoring.h:85
	bool Release();

	// BrnCrashModeScoring.h:89
	void Destruct();

	// BrnCrashModeScoring.h:93
	void ClearData();

	// BrnCrashModeScoring.h:101
	bool DealWithHitTrafficCar(EActiveRaceCarIndex, EntityId, EntityId, uint16_t *);

	// BrnCrashModeScoring.h:113
	void DealWithScoreForVehicleClass(uint16_t, BrnTraffic::VehicleClass, CgsID, int32_t *, int32_t *, BrnTraffic::VehicleScoreCategory *, int32_t *, int32_t *);

	// BrnCrashModeScoring.h:117
	void DealWithComboItem(const CrashComboItemEvent *);

	// BrnCrashModeScoring.h:121
	void DealWithHitProp(uint16_t, uint8_t);

	// BrnCrashModeScoring.h:125
	void DealWithHitOverheadSign();

	// BrnCrashModeScoring.h:129
	void DealWithCrashbreakerRequest(const TriggerCrashBreakerEvent *);

	// BrnCrashModeScoring.h:133
	void DealWithPickup(const PickupEvent *);

	// BrnCrashModeScoring.h:137
	void DealWithVehicleLeaping(const VehicleLeaptEvent *);

	// BrnCrashModeScoring.h:141
	void DealWithDetachedWheel();

	// BrnCrashModeScoring.h:145
	void DealWithShowtimeStunt(const BrnGameState::GameStateModuleIO::WorldStuntAction *);

	// BrnCrashModeScoring.h:152
	void DealWithPlayerBounced(bool, bool, EntityId);

	// BrnCrashModeScoring.h:157
	void DealWithRemovedTraffic(const GuiRemovedTrafficEvent *);

	// BrnCrashModeScoring.h:161
	bool HasCrashModeEnded(float32_t) const;

	// BrnCrashModeScoring.h:165
	int32_t GetRawScore() const;

	// BrnCrashModeScoring.h:168
	int32_t GetOverallScore() const;

	// BrnCrashModeScoring.h:171
	int32_t GetScoreMultiplier() const;

	// BrnCrashModeScoring.h:174
	int32_t GetCurrentComboCount() const;

	// BrnCrashModeScoring.h:177
	int32_t GetNumCarsCrashed() const;

	// BrnCrashModeScoring.h:180
	int32_t GetNumCarsLeapt() const;

	// BrnCrashModeScoring.h:183
	float32_t GetBestAirTime() const;

	// BrnCrashModeScoring.h:186
	float32_t GetDistanceTravelled() const;

	// BrnCrashModeScoring.h:195
	void GetVehicleScoreData(BrnTraffic::VehicleClass, CgsID, int32_t *, int32_t *, BrnTraffic::VehicleScoreCategory *);

private:
	// BrnCrashModeScoring.h:208
	const BrnGameState::CrashModeScoring::RecentCrash * GetRecentCrash(uint16_t) const;

	// BrnCrashModeScoring.h:212
	bool IsActiveCrash(const BrnGameState::CrashModeScoring::RecentCrash *) const;

}

// BrnCrashModeScoring.h:63
struct BrnGameState::CrashModeScoring {
private:
	// BrnCrashModeScoring.h:215
	BrnGameState::CrashScoreDebugComponent mCrashScoreDebugComponent;

	// BrnCrashModeScoring.h:219
	Vector3 mPlayerPosLastFrame;

	// BrnCrashModeScoring.h:220
	Vector3 mPlayerPosLastStored;

	// BrnCrashModeScoring.h:221
	float32_t mfTimeSincePlayerCarMoved;

	// BrnCrashModeScoring.h:222
	float32_t mfTimeSinceLastEvent;

	// BrnCrashModeScoring.h:223
	float32_t mfTimeSinceModeStart;

	// BrnCrashModeScoring.h:224
	float32_t mfDistanceUntilStorePosition;

	// BrnCrashModeScoring.h:225
	float32_t mfPlayerBoostPercentage;

	// BrnCrashModeScoring.h:226
	bool mbPlayerIsCrashing;

	// BrnCrashModeScoring.h:227
	bool mbInfiniteCrashMode;

	// BrnCrashModeScoring.h:231
	FixedRingBuffer<uint16_t,8> mRecentlyHitPropSet;

	// BrnCrashModeScoring.h:234
	Array<BrnGameState::CrashModeScoring::RecentCrash,64u> mRecentCrashSet;

	// BrnCrashModeScoring.h:237
	FixedRingBuffer<CgsID,8> mRecentStuntSet;

	// BrnCrashModeScoring.h:239
	int32_t miNumWheelsLastFrame;

	// BrnCrashModeScoring.h:242
	int32_t miBaseScore;

	// BrnCrashModeScoring.h:243
	int32_t miCurrentComboCount;

	// BrnCrashModeScoring.h:244
	int32_t miScoreMultiplier;

	// BrnCrashModeScoring.h:245
	int32_t[4] maiNumCarsCrashed;

	// BrnCrashModeScoring.h:246
	int32_t miNumCarsLeaped;

	// BrnCrashModeScoring.h:247
	int32_t miNumPropsDestroyed;

	// BrnCrashModeScoring.h:248
	bool mbAboutToResetCombo;

	// BrnCrashModeScoring.h:249
	float32_t mfResetComboGracePeriod;

	// BrnCrashModeScoring.h:250
	float32_t mfDistanceTravelled;

	// BrnCrashModeScoring.h:251
	float32_t mfTimeSinceLastHitOverheadSign;

	// BrnCrashModeScoring.h:252
	float32_t mfTimeContactingWall;

	// BrnCrashModeScoring.h:253
	float32_t mfTotalAirTime;

	// BrnCrashModeScoring.h:254
	float32_t mfCurrentJumpAirTime;

	// BrnCrashModeScoring.h:255
	float32_t mfLongestJumpAirTime;

	// BrnCrashModeScoring.h:256
	float32_t mfHighestJump;

	// BrnCrashModeScoring.h:257
	int32_t miStuntsPerformed;

	// BrnCrashModeScoring.h:258
	int32_t miCarDestructionBonus;

public:
	// BrnCrashModeScoring.h:70
	void Construct();

	// BrnCrashModeScoring.h:74
	bool Prepare();

	// BrnCrashModeScoring.h:81
	void Update(const RCEntityActiveRaceCarOutputInterface *, const VehicleOutputInterface::PhysicalTrafficStateQueue *, float32_t);

	// BrnCrashModeScoring.h:85
	bool Release();

	// BrnCrashModeScoring.h:89
	void Destruct();

	// BrnCrashModeScoring.h:93
	void ClearData();

	// BrnCrashModeScoring.h:101
	bool DealWithHitTrafficCar(EActiveRaceCarIndex, EntityId, EntityId, uint16_t *);

	// BrnCrashModeScoring.h:113
	void DealWithScoreForVehicleClass(uint16_t, BrnTraffic::VehicleClass, CgsID, int32_t *, int32_t *, BrnTraffic::VehicleScoreCategory *, int32_t *, int32_t *);

	// BrnCrashModeScoring.h:117
	void DealWithComboItem(const CrashComboItemEvent *);

	// BrnCrashModeScoring.h:121
	void DealWithHitProp(uint16_t, uint8_t);

	// BrnCrashModeScoring.h:125
	void DealWithHitOverheadSign();

	// BrnCrashModeScoring.h:129
	void DealWithCrashbreakerRequest(const TriggerCrashBreakerEvent *);

	// BrnCrashModeScoring.h:133
	void DealWithPickup(const PickupEvent *);

	// BrnCrashModeScoring.h:137
	void DealWithVehicleLeaping(const VehicleLeaptEvent *);

	// BrnCrashModeScoring.h:141
	void DealWithDetachedWheel();

	// BrnCrashModeScoring.h:145
	void DealWithShowtimeStunt(const BrnGameState::GameStateModuleIO::WorldStuntAction *);

	// BrnCrashModeScoring.h:152
	void DealWithPlayerBounced(bool, bool, EntityId);

	// BrnCrashModeScoring.h:157
	void DealWithRemovedTraffic(const GuiRemovedTrafficEvent *);

	// BrnCrashModeScoring.h:161
	bool HasCrashModeEnded(float32_t) const;

	// BrnCrashModeScoring.h:165
	int32_t GetRawScore() const;

	// BrnCrashModeScoring.h:168
	int32_t GetOverallScore() const;

	// BrnCrashModeScoring.h:171
	int32_t GetScoreMultiplier() const;

	// BrnCrashModeScoring.h:174
	int32_t GetCurrentComboCount() const;

	// BrnCrashModeScoring.h:177
	int32_t GetNumCarsCrashed() const;

	// BrnCrashModeScoring.h:180
	int32_t GetNumCarsLeapt() const;

	// BrnCrashModeScoring.h:183
	float32_t GetBestAirTime() const;

	// BrnCrashModeScoring.h:186
	float32_t GetDistanceTravelled() const;

	// BrnCrashModeScoring.h:195
	// Declaration
	void GetVehicleScoreData(BrnTraffic::VehicleClass, CgsID, int32_t *, int32_t *, BrnTraffic::VehicleScoreCategory *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCrashModeScoring.cpp:944
		using namespace CgsDev::Message;

	}

private:
	// BrnCrashModeScoring.h:208
	const BrnGameState::CrashModeScoring::RecentCrash * GetRecentCrash(uint16_t) const;

	// BrnCrashModeScoring.h:212
	bool IsActiveCrash(const BrnGameState::CrashModeScoring::RecentCrash *) const;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnCrashModeScoring.h:43
	const int32_t KI_MAX_RECENTLY_HIT_PROPS = 8;

	// BrnCrashModeScoring.h:44
	const int32_t KI_MAX_RECENTLY_HIT_CARS = 64;

	// BrnCrashModeScoring.h:45
	const int32_t KI_MAX_RECENTLY_HIT_STUNTS = 8;

	// BrnCrashModeScoring.h:46
	const int32_t KI_SCORE_BONUS_PER_OVERHEAD_SIGN = 10000;

	// BrnCrashModeScoring.h:47
	const int32_t KI_SCORE_BONUS_FOR_COMBO_CRASH = 1000;

	// BrnCrashModeScoring.h:48
	const int32_t KI_SCORE_BONUS_PER_YARD = 100;

}

