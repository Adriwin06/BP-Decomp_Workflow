// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnCrashPlayManager.h:32
	const float32_t KF_MAX_BOOST;

	// BrnCrashPlayManager.h:34
	const int32_t KI_MAX_RECENTLY_HIT_CARS = 32;

	// BrnCrashPlayManager.h:36
	const int32_t KI_MAX_RECENTLY_LEAPT_CARS = 8;

}

// BrnCrashPlayManager.h:51
struct BrnWorld::CrashPlayManager {
private:
	// BrnCrashPlayManager.h:229
	BrnWorld::CrashPlayDebugComponent mCrashPlayDebugComponent;

	// BrnCrashPlayManager.h:233
	VolumeInstanceId mPlayerCarVolumeInstanceID;

	// BrnCrashPlayManager.h:236
	Vector3 mLastPlayerPos;

	// BrnCrashPlayManager.h:240
	FixedRingBuffer<CgsSceneManager::EntityId,32> mRecentCrashSet;

	// BrnCrashPlayManager.h:244
	FixedRingBuffer<CgsSceneManager::EntityId,8> mRecentLeaptSet;

	// BrnCrashPlayManager.h:245
	int32_t miCarsLeaptThisFrame;

	// BrnCrashPlayManager.h:248
	CgsID miLastStreetEntered;

	// BrnCrashPlayManager.h:249
	bool mbSendNewRoadMessage;

	// BrnCrashPlayManager.h:250
	uint32_t muLastJunctionEnteredID;

	// BrnCrashPlayManager.h:251
	bool mbSendNewJunctionMessage;

	// BrnCrashPlayManager.h:254
	float32_t mfCrashPlayTime;

	// BrnCrashPlayManager.h:255
	float32_t mfTimeSinceLastInAir;

	// BrnCrashPlayManager.h:256
	float32_t mfTimeSinceLastOnGround;

	// BrnCrashPlayManager.h:259
	float32_t mfTimeSinceLastVehicleImpact;

	// BrnCrashPlayManager.h:260
	float32_t mfTimeSinceLastHitOverheadSign;

	// BrnCrashPlayManager.h:263
	bool mbTrafficStomp;

	// BrnCrashPlayManager.h:264
	int32_t miFramesUntilAirRam;

	// BrnCrashPlayManager.h:265
	float32_t mfTimeSinceLastTrafficStomp;

	// BrnCrashPlayManager.h:268
	float32_t mfBoostPercentage;

	// BrnCrashPlayManager.h:269
	float32_t mfAftertouchPower;

	// BrnCrashPlayManager.h:270
	float32_t mfDifficultyLevel;

	// BrnCrashPlayManager.h:271
	float32_t mfBounceBoostTimer;

	// BrnCrashPlayManager.h:272
	float32_t mfLoseBoostGracePeriod;

	// BrnCrashPlayManager.h:273
	int32_t miConsecutiveBouncesOnGround;

	// BrnCrashPlayManager.h:276
	bool mbIsCrashPlayActive;

	// BrnCrashPlayManager.h:277
	bool mbIsInShowtime;

	// BrnCrashPlayManager.h:278
	bool mbInfiniteAftertouch;

	// BrnCrashPlayManager.h:279
	bool mbInfiniteBoost;

	// BrnCrashPlayManager.h:280
	bool mbEarningAirTimeBoost;

	// BrnCrashPlayManager.h:281
	bool mbAboutToLoseBoost;

	// BrnCrashPlayManager.h:282
	bool mbBouncePromptNeeded;

	// BrnCrashPlayManager.h:283
	bool mbBoostChargePending;

public:
	// BrnCrashPlayManager.h:58
	void Construct();

	// BrnCrashPlayManager.h:62
	bool Prepare();

	// BrnCrashPlayManager.h:71
	void Update(Matrix44Affine, float32_t, OutputBuffer_PrePhysics *, BrnWorld::ActiveRaceCar *, BrnWorld::PlayerVehicleControls *);

	// BrnCrashPlayManager.h:75
	bool Release();

	// BrnCrashPlayManager.h:79
	void Destruct();

	// BrnCrashPlayManager.h:86
	void HandlePlayerToVehicleImpact(BrnWorld::ActiveRaceCar *, EntityId, const RaceCarContact *);

	// BrnCrashPlayManager.h:92
	// Declaration
	void Activate(BrnWorld::ActiveRaceCar *, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCrashPlayManager.cpp:227
		using namespace CgsDev::Message;

	}

	// BrnCrashPlayManager.h:96
	// Declaration
	void Deactivate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCrashPlayManager.cpp:244
		using namespace CgsDev::Message;

	}

	// BrnCrashPlayManager.h:100
	bool IsActive();

	// BrnCrashPlayManager.h:106
	void OnPlayerCarCrash(const RaceCarCrashEvent *, BrnWorld::ActiveRaceCar *);

	// BrnCrashPlayManager.h:112
	void OnCarCrash(EntityId, bool);

	// BrnCrashPlayManager.h:118
	void OnCarLeapt(EntityId, bool);

	// BrnCrashPlayManager.h:123
	void OnEnterRoad(const RoadRulesEnterRoadAction *);

	// BrnCrashPlayManager.h:128
	void OnEnterJunction(const SendJunctionPlayerIsAtAction *);

	// BrnCrashPlayManager.h:133
	void OnBounce(const JustBouncedAction *);

	// BrnCrashPlayManager.h:137
	void OnSmashStunt();

	// BrnCrashPlayManager.h:141
	void OnHitOverheadSign();

	// BrnCrashPlayManager.h:148
	void OnVehicleHitConfirmed(int32_t, int32_t, int32_t);

	// BrnCrashPlayManager.h:152
	float32_t GetBoostLevel();

	// BrnCrashPlayManager.h:156
	bool IsBounceBoosting() const;

	// BrnCrashPlayManager.h:160
	bool IsPlayerInShowtimeOnGround() const;

	// BrnCrashPlayManager.h:164
	float32_t GetShowtimeTrafficDensityScale() const;

	// BrnCrashPlayManager.h:168
	float32_t GetAftertouchLevel();

	// BrnCrashPlayManager.h:172
	void OnShowtimeStart();

	// BrnCrashPlayManager.h:175
	void OnShowtimeEnd();

	// BrnCrashPlayManager.h:178
	bool IsInShowtime() const;

private:
	// BrnCrashPlayManager.h:186
	void UpdateMomentum(float32_t, BrnWorld::ActiveRaceCar *, OutputBuffer_PrePhysics *);

	// BrnCrashPlayManager.h:195
	void UpdateTrafficStomp(float32_t, BrnWorld::PlayerVehicleControls *, BrnWorld::ActiveRaceCar *, OutputBuffer_PrePhysics *, Vector3, Vector3);

	// BrnCrashPlayManager.h:202
	void UpdateBounceBoost(float32_t, BrnWorld::PlayerVehicleControls *, BrnWorld::ActiveRaceCar *, OutputBuffer_PrePhysics *);

	// BrnCrashPlayManager.h:207
	void UpdateCarLeaping(float32_t, OutputBuffer_PrePhysics *);

	// BrnCrashPlayManager.h:213
	void UpdateNewRoad(float32_t, OutputBuffer_PrePhysics *);

	// BrnCrashPlayManager.h:219
	void SetBouncePromptNeeded(bool, OutputBuffer_PrePhysics *);

	// BrnCrashPlayManager.h:222
	float32_t GetMaxAftertouchPower() const;

	// BrnCrashPlayManager.h:225
	void ClampBoostLevel();

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCrashPlayManager.h:32
	const float32_t KF_MAX_BOOST;

	// BrnCrashPlayManager.h:34
	const int32_t KI_MAX_RECENTLY_HIT_CARS = 32;

	// BrnCrashPlayManager.h:36
	const int32_t KI_MAX_RECENTLY_LEAPT_CARS = 8;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnCrashPlayManager.h:32
	const float32_t KF_MAX_BOOST;

	// BrnCrashPlayManager.h:34
	const int32_t KI_MAX_RECENTLY_HIT_CARS = 32;

	// BrnCrashPlayManager.h:36
	const int32_t KI_MAX_RECENTLY_LEAPT_CARS = 8;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnCrashPlayManager.h:32
	const float32_t KF_MAX_BOOST;

	// BrnCrashPlayManager.h:34
	const int32_t KI_MAX_RECENTLY_HIT_CARS = 32;

	// BrnCrashPlayManager.h:36
	const int32_t KI_MAX_RECENTLY_LEAPT_CARS = 8;

}

// BrnCrashPlayManager.h:51
struct BrnWorld::CrashPlayManager {
private:
	// BrnCrashPlayManager.h:229
	BrnWorld::CrashPlayDebugComponent mCrashPlayDebugComponent;

	// BrnCrashPlayManager.h:233
	VolumeInstanceId mPlayerCarVolumeInstanceID;

	// BrnCrashPlayManager.h:236
	Vector3 mLastPlayerPos;

	// BrnCrashPlayManager.h:240
	FixedRingBuffer<CgsSceneManager::EntityId,32> mRecentCrashSet;

	// BrnCrashPlayManager.h:244
	FixedRingBuffer<CgsSceneManager::EntityId,8> mRecentLeaptSet;

	// BrnCrashPlayManager.h:245
	int32_t miCarsLeaptThisFrame;

	// BrnCrashPlayManager.h:248
	CgsID miLastStreetEntered;

	// BrnCrashPlayManager.h:249
	bool mbSendNewRoadMessage;

	// BrnCrashPlayManager.h:250
	uint32_t muLastJunctionEnteredID;

	// BrnCrashPlayManager.h:251
	bool mbSendNewJunctionMessage;

	// BrnCrashPlayManager.h:254
	float32_t mfCrashPlayTime;

	// BrnCrashPlayManager.h:255
	float32_t mfTimeSinceLastInAir;

	// BrnCrashPlayManager.h:256
	float32_t mfTimeSinceLastOnGround;

	// BrnCrashPlayManager.h:259
	float32_t mfTimeSinceLastVehicleImpact;

	// BrnCrashPlayManager.h:260
	float32_t mfTimeSinceLastHitOverheadSign;

	// BrnCrashPlayManager.h:263
	bool mbTrafficStomp;

	// BrnCrashPlayManager.h:264
	int32_t miFramesUntilAirRam;

	// BrnCrashPlayManager.h:265
	float32_t mfTimeSinceLastTrafficStomp;

	// BrnCrashPlayManager.h:268
	float32_t mfBoostPercentage;

	// BrnCrashPlayManager.h:269
	float32_t mfAftertouchPower;

	// BrnCrashPlayManager.h:270
	float32_t mfDifficultyLevel;

	// BrnCrashPlayManager.h:271
	float32_t mfBounceBoostTimer;

	// BrnCrashPlayManager.h:272
	float32_t mfLoseBoostGracePeriod;

	// BrnCrashPlayManager.h:273
	int32_t miConsecutiveBouncesOnGround;

	// BrnCrashPlayManager.h:276
	bool mbIsCrashPlayActive;

	// BrnCrashPlayManager.h:277
	bool mbIsInShowtime;

	// BrnCrashPlayManager.h:278
	bool mbInfiniteAftertouch;

	// BrnCrashPlayManager.h:279
	bool mbInfiniteBoost;

	// BrnCrashPlayManager.h:280
	bool mbEarningAirTimeBoost;

	// BrnCrashPlayManager.h:281
	bool mbAboutToLoseBoost;

	// BrnCrashPlayManager.h:282
	bool mbBouncePromptNeeded;

	// BrnCrashPlayManager.h:283
	bool mbBoostChargePending;

public:
	// BrnCrashPlayManager.h:58
	void Construct();

	// BrnCrashPlayManager.h:62
	bool Prepare();

	// BrnCrashPlayManager.h:71
	void Update(Matrix44Affine, float32_t, OutputBuffer_PrePhysics *, BrnWorld::ActiveRaceCar *, BrnWorld::PlayerVehicleControls *);

	// BrnCrashPlayManager.h:75
	bool Release();

	// BrnCrashPlayManager.h:79
	void Destruct();

	// BrnCrashPlayManager.h:86
	void HandlePlayerToVehicleImpact(BrnWorld::ActiveRaceCar *, EntityId, const RaceCarContact *);

	// BrnCrashPlayManager.h:92
	void Activate(BrnWorld::ActiveRaceCar *, float32_t);

	// BrnCrashPlayManager.h:96
	void Deactivate();

	// BrnCrashPlayManager.h:100
	bool IsActive();

	// BrnCrashPlayManager.h:106
	void OnPlayerCarCrash(const RaceCarCrashEvent *, BrnWorld::ActiveRaceCar *);

	// BrnCrashPlayManager.h:112
	void OnCarCrash(EntityId, bool);

	// BrnCrashPlayManager.h:118
	void OnCarLeapt(EntityId, bool);

	// BrnCrashPlayManager.h:123
	void OnEnterRoad(const RoadRulesEnterRoadAction *);

	// BrnCrashPlayManager.h:128
	void OnEnterJunction(const SendJunctionPlayerIsAtAction *);

	// BrnCrashPlayManager.h:133
	void OnBounce(const JustBouncedAction *);

	// BrnCrashPlayManager.h:137
	void OnSmashStunt();

	// BrnCrashPlayManager.h:141
	void OnHitOverheadSign();

	// BrnCrashPlayManager.h:148
	void OnVehicleHitConfirmed(int32_t, int32_t, int32_t);

	// BrnCrashPlayManager.h:152
	float32_t GetBoostLevel();

	// BrnCrashPlayManager.h:156
	bool IsBounceBoosting() const;

	// BrnCrashPlayManager.h:160
	bool IsPlayerInShowtimeOnGround() const;

	// BrnCrashPlayManager.h:164
	float32_t GetShowtimeTrafficDensityScale() const;

	// BrnCrashPlayManager.h:168
	float32_t GetAftertouchLevel();

	// BrnCrashPlayManager.h:172
	void OnShowtimeStart();

	// BrnCrashPlayManager.h:175
	void OnShowtimeEnd();

	// BrnCrashPlayManager.h:178
	bool IsInShowtime() const;

private:
	// BrnCrashPlayManager.h:186
	void UpdateMomentum(float32_t, BrnWorld::ActiveRaceCar *, OutputBuffer_PrePhysics *);

	// BrnCrashPlayManager.h:195
	void UpdateTrafficStomp(float32_t, BrnWorld::PlayerVehicleControls *, BrnWorld::ActiveRaceCar *, OutputBuffer_PrePhysics *, Vector3, Vector3);

	// BrnCrashPlayManager.h:202
	void UpdateBounceBoost(float32_t, BrnWorld::PlayerVehicleControls *, BrnWorld::ActiveRaceCar *, OutputBuffer_PrePhysics *);

	// BrnCrashPlayManager.h:207
	void UpdateCarLeaping(float32_t, OutputBuffer_PrePhysics *);

	// BrnCrashPlayManager.h:213
	void UpdateNewRoad(float32_t, OutputBuffer_PrePhysics *);

	// BrnCrashPlayManager.h:219
	void SetBouncePromptNeeded(bool, OutputBuffer_PrePhysics *);

	// BrnCrashPlayManager.h:222
	float32_t GetMaxAftertouchPower() const;

	// BrnCrashPlayManager.h:225
	void ClampBoostLevel();

}

