// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnCrashModule.h:37
	const uint32_t KU_MAX_RACE_CAR_CRASHES = 8;

	// BrnCrashModule.h:38
	const uint32_t KU_MAX_TRAFFIC_CRASHES = 160;

	// BrnCrashModule.h:40
	const uint32_t KU_MAX_FROZEN_TRAFFIC_VEHICLES = 160;

	// BrnCrashModule.h:42
	const float32_t KF_PLAYER_NETWORK_CAR_RESET_SECONDS;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnCrashModule.h:37
	const uint32_t KU_MAX_RACE_CAR_CRASHES = 8;

	// BrnCrashModule.h:38
	const uint32_t KU_MAX_TRAFFIC_CRASHES = 160;

	// BrnCrashModule.h:40
	const uint32_t KU_MAX_FROZEN_TRAFFIC_VEHICLES = 160;

	// BrnCrashModule.h:42
	const float32_t KF_PLAYER_NETWORK_CAR_RESET_SECONDS;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCrashModule.h:37
	const uint32_t KU_MAX_RACE_CAR_CRASHES = 8;

	// BrnCrashModule.h:38
	const uint32_t KU_MAX_TRAFFIC_CRASHES = 160;

	// BrnCrashModule.h:40
	const uint32_t KU_MAX_FROZEN_TRAFFIC_VEHICLES = 160;

	// BrnCrashModule.h:42
	const float32_t KF_PLAYER_NETWORK_CAR_RESET_SECONDS;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnCrashModule.h:37
	const uint32_t KU_MAX_RACE_CAR_CRASHES = 8;

	// BrnCrashModule.h:38
	const uint32_t KU_MAX_TRAFFIC_CRASHES = 160;

	// BrnCrashModule.h:40
	const uint32_t KU_MAX_FROZEN_TRAFFIC_VEHICLES = 160;

	// BrnCrashModule.h:42
	const float32_t KF_PLAYER_NETWORK_CAR_RESET_SECONDS;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// Declaration
	struct CrashModule {
		// BrnCrashModule.h:222
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_MANAGER = 1,
			E_PREPARESTAGE_DONE = 2,
		}

		// BrnCrashModule.h:229
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_MANAGER = 1,
			E_RELEASESTAGE_DONE = 2,
		}

		// BrnCrashModule.h:239
		struct FrozenTrafficTransform {
			// BrnCrashModule.h:241
			uint16_t muVehicleId;

			// BrnCrashModule.h:243
			Matrix44Affine mTransform;

		}

	}

	// BrnCrashModule.h:37
	const uint32_t KU_MAX_RACE_CAR_CRASHES = 8;

	// BrnCrashModule.h:38
	const uint32_t KU_MAX_TRAFFIC_CRASHES = 160;

	// BrnCrashModule.h:40
	const uint32_t KU_MAX_FROZEN_TRAFFIC_VEHICLES = 160;

	// BrnCrashModule.h:42
	const float32_t KF_PLAYER_NETWORK_CAR_RESET_SECONDS;

}

// BrnCrashModule.h:55
struct BrnWorld::RaceCarCrash {
private:
	// BrnCrashModule.h:89
	VolumeInstanceId mRaceCarVolumeInstanceId;

	// BrnCrashModule.h:90
	float32_t mfPlayerOnlyTotalCrashTime;

	// BrnCrashModule.h:91
	float32_t mfSecondsBeforeClearup;

	// BrnCrashModule.h:92
	float32_t mfTimeSinceCarMoved;

	// BrnCrashModule.h:93
	int8_t miNumTimeExtensionsDone;

	// BrnCrashModule.h:94
	bool mbHasBeenSkipped;

public:
	// BrnCrashModule.h:62
	void Construct(VolumeInstanceId, float32_t);

	// BrnCrashModule.h:74
	void Tick(float32_t, const InputBuffer_PreScene::ActiveRaceCarInterface *, bool, int32_t, bool, bool, bool, bool *);

	// BrnCrashModule.h:78
	void ResetNetworkTimeout();

	// BrnCrashModule.h:82
	EActiveRaceCarIndex GetOwner() const;

	// BrnCrashModule.h:83
	VolumeInstanceId GetRaceCarVolumeInstanceId() const;

	// BrnCrashModule.h:84
	float32_t GetSecondsBeforeCleanup() const;

	// BrnCrashModule.h:85
	void SetSecondsBeforeCleanup(float32_t);

}

// BrnCrashModule.h:107
struct BrnWorld::TrafficCrash {
private:
	// BrnCrashModule.h:163
	int8_t miOwner;

	// BrnCrashModule.h:164
	uint8_t mxFlags;

	// BrnCrashModule.h:165
	uint16_t muVehicleIndex;

	// BrnCrashModule.h:166
	float32_t mfTimeTillClearup;

public:
	// BrnCrashModule.h:116
	void Construct(int32_t, uint16_t, float32_t, bool);

	// BrnCrashModule.h:121
	void Tick(float32_t);

	// BrnCrashModule.h:125
	void MarkVehicleAsOnscreen();

	// BrnCrashModule.h:130
	void ConfirmNetworkOwner(EActiveRaceCarIndex);

	// BrnCrashModule.h:134
	void ResetNetworkTimeout();

	// BrnCrashModule.h:138
	void SetNetworkVehicleClearedUp();

	// BrnCrashModule.h:142
	void OnOwnerDisconnected();

	// BrnCrashModule.h:146
	EActiveRaceCarIndex GetOwner() const;

	// BrnCrashModule.h:147
	bool WantsToBeClearedUp() const;

	// BrnCrashModule.h:148
	bool IsAllowedToBeClearedUp() const;

	// BrnCrashModule.h:149
	bool IsUnconfirmedNetwork() const;

	// BrnCrashModule.h:150
	bool IsConfirmedNetwork() const;

	// BrnCrashModule.h:151
	uint32_t GetVehicleIndex() const;

}

// BrnCrashModule.h:182
struct BrnWorld::CrashModule : public CgsModule::ModuleSingleBuffered {
private:
	// BrnCrashModule.h:254
	extern const uint32_t KU_INVALID_CRASH = 4294967295;

	// BrnCrashModule.h:257
	BrnWorld::CrashModule::EPrepareStage mePrepareStage;

	// BrnCrashModule.h:258
	BrnWorld::CrashModule::EReleaseStage meReleaseStage;

	// BrnCrashModule.h:260
	Array<BrnWorld::RaceCarCrash,8u> mRaceCarCrashes;

	// BrnCrashModule.h:261
	Array<BrnWorld::TrafficCrash,160u> mTrafficCrashes;

	// BrnCrashModule.h:263
	FastBitArray<8> mCrashingRaceCars;

	// BrnCrashModule.h:264
	FastBitArray<601> mCrashingTraffic;

	// BrnCrashModule.h:265
	FastBitArray<601> mCrashingNetworkTraffic;

	// BrnCrashModule.h:266
	int8_t[601] maiSlammedTrafficOwners;

	// BrnCrashModule.h:268
	Set<uint16_t,160u>[8] maCrashingTrafficForPlayers;

	// BrnCrashModule.h:270
	EActiveRaceCarIndex meLocalActiveRaceCarIndex;

	// BrnCrashModule.h:271
	float32_t mfPlayerCrashTime;

	// BrnCrashModule.h:272
	bool mbFastCrashesForAI;

	// BrnCrashModule.h:273
	bool mbIsOnlineGameMode;

	// BrnCrashModule.h:274
	bool mbIsShowtimeGameMode;

	// BrnCrashModule.h:275
	bool mbClearUpEnabled;

	// BrnCrashModule.h:276
	int8_t miNumCrashExtensions;

	// BrnCrashModule.h:277
	uint8_t muNumFramesBeforeStateChange;

	// BrnCrashModule.h:278
	bool mbNeedToSendEndingMessage;

	// BrnCrashModule.h:279
	bool mbIsInAGameMode;

	// BrnCrashModule.h:283
	VehicleManagerOutputInterface::RemovedTrafficEventQueue mRecycledTrafficQueue;

	// BrnCrashModule.h:285
	TrafficInputInterface::TrafficVehicleBits mTrafficRenderedLastFrame;

	// BrnCrashModule.h:286
	TrafficInputInterface::TrafficVehicleBits mTrafficFarFromCameraLastFrame;

public:
	// BrnCrashModule.cpp:383
	virtual void Construct();

	// BrnCrashModule.cpp:423
	virtual bool Prepare();

	// BrnCrashModule.cpp:474
	virtual bool Release();

	// BrnCrashModule.cpp:522
	virtual void Destruct();

	// BrnCrashModule.cpp:540
	void PreSceneUpdate(IOBufferStack *, IOBufferStack *, const InputBuffer_PreScene *, OutputBuffer_PreScene *, BrnUpdateSet);

	// BrnCrashModule.cpp:600
	void PostPhysicsUpdate(IOBufferStack *, IOBufferStack *, const InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *, BrnUpdateSet);

private:
	// BrnCrashModule.h:445
	bool IsOnlineGameMode() const;

	// BrnCrashModule.cpp:660
	void Reset();

	// BrnCrashModule.cpp:688
	void HandleGameActions(const InputBuffer_PreScene *, OutputBuffer_PreScene *);

	// BrnCrashModule.cpp:869
	void ProcessCrashedRaceCarEvents(const InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *);

	// BrnCrashModule.cpp:953
	void ProcessSlammedTrafficEvents(const InputBuffer_PostPhysics *);

	// BrnCrashModule.cpp:1025
	void HandleNewCrashingTraffic(const InputBuffer_PostPhysics *);

	// BrnCrashModule.cpp:1054
	void HandleNetworkCrashingTraffic(const InputBuffer_PreScene *, OutputBuffer_PreScene *);

	// BrnCrashModule.cpp:1258
	void HandleRecoveredSlammedTraffic(const InputBuffer_PostPhysics *);

	// BrnCrashModule.cpp:1289
	void HandleCleanedUpTrafficEvents(const InputBuffer_PostPhysics *);

	// BrnCrashModule.cpp:1355
	void GenerateOwnedTrafficUpdates(const InputBuffer_PostPhysics *, OutputBuffer_PostPhysics *);

	// BrnCrashModule.cpp:1461
	void OnContactFromNetworkPlayer(EActiveRaceCarIndex);

	// BrnCrashModule.cpp:1495
	void OnNetworkPlayerDisconnected(EActiveRaceCarIndex, OutputBuffer_PreScene *);

	// BrnCrashModule.cpp:1532
	// Declaration
	void AddCrashingTrafficVehicle(VolumeInstanceId, EntityId, BrnPhysics::Vehicle::eCrashTrafficType) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCrashModule.cpp:1597
		using namespace CgsDev::Message;

	}

	// BrnCrashModule.cpp:1685
	void TickCrashes(const InputBuffer_PreScene *);

	// BrnCrashModule.cpp:1738
	void ForceClearupAllCrashes(OutputBuffer_PreScene *);

	// BrnCrashModule.cpp:1781
	void ClearupCrashes(const InputBuffer_PreScene *, OutputBuffer_PreScene *);

	// BrnCrashModule.cpp:1935
	void OnTrafficCarRemovedFromCrash(uint32_t, EActiveRaceCarIndex);

	// BrnCrashModule.cpp:1977
	uint32_t FindCrashForRaceCar(EActiveRaceCarIndex) const;

	// BrnCrashModule.cpp:2000
	uint32_t FindCrashForTrafficVehicle(uint32_t) const;

	// BrnCrashModule.cpp:2024
	void ResetCrashedNetworkRaceCars(const InputBuffer_PreScene *, OutputBuffer_PreScene *);

	// BrnCrashModule.cpp:2081
	void ResetRaceCarFromCrashIndex(OutputBuffer_PreScene *, uint32_t, bool);

	// BrnCrashModule.h:416
	void EnsureVehicleNotInFrozenList(uint32_t);

	// BrnCrashModule.h:420
	void StartTearingDown();

	// BrnCrashModule.cpp:1884
	void ClearUpRecycledTraffic(OutputBuffer_PreScene *);

	// BrnCrashModule.h:465
	bool WillTrafficVehicleBeRecycledNextFrame(uint16_t);

}

// BrnCrashModule.h:254
extern const uint32_t KU_INVALID_CRASH = 4294967295;

// BrnCrashModule.h:182
void BrnWorld::CrashModule::CrashModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModule.h:182
void BrnWorld::CrashModule::~CrashModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

