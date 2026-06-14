// BrnRaceCarEntityModuleOutputInterface.h:476
struct BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface {
private:
	// BrnRaceCarEntityModuleOutputInterface.h:583
	Vector3[35] maRaceCarPositions;

	// BrnRaceCarEntityModuleOutputInterface.h:584
	Vector3[35] maRaceCarAts;

	// BrnRaceCarEntityModuleOutputInterface.h:585
	WorldRegion[35] maRaceCarWorldRegions;

	// BrnRaceCarEntityModuleOutputInterface.h:586
	CgsID[35] maRivalIds;

	// BrnRaceCarEntityModuleOutputInterface.h:587
	CgsID[35] maCarModelIds;

	// BrnRaceCarEntityModuleOutputInterface.h:589
	float32_t[35] mafRaceCarSpeeds;

	// BrnRaceCarEntityModuleOutputInterface.h:590
	EActiveRaceCarIndex[35] maeActiveRaceCarIndices;

	// BrnRaceCarEntityModuleOutputInterface.h:591
	int8_t[35] maiRivalIndices;

	// BrnRaceCarEntityModuleOutputInterface.h:592
	uint16_t[35] mauAISectionIndices;

	// BrnRaceCarEntityModuleOutputInterface.h:593
	BitArray<35u> mGlobalRaceCarIndices;

	// BrnRaceCarEntityModuleOutputInterface.h:594
	BitArray<35u> mIsPlayerFlags;

	// BrnRaceCarEntityModuleOutputInterface.h:595
	BitArray<35u> mIsRivalAIFlags;

	// BrnRaceCarEntityModuleOutputInterface.h:596
	BitArray<35u> mIsNetworkFlags;

	// BrnRaceCarEntityModuleOutputInterface.h:597
	BitArray<35u> mIsInCurrentModeFlags;

	// BrnRaceCarEntityModuleOutputInterface.h:598
	BitArray<35u> mIsDispersingFlags;

	// BrnRaceCarEntityModuleOutputInterface.h:599
	BitArray<35u> mIsInRangeFlags;

	// BrnRaceCarEntityModuleOutputInterface.h:600
	EGlobalRaceCarIndex mePlayerGlobalRaceCarIndex;

public:
	// BrnRaceCarEntityModuleOutputInterface.h:483
	void operator=(const RCEntityGlobalRaceCarOutputInterface &);

	// BrnRaceCarEntityModuleOutputInterface.h:486
	void Clear();

	// BrnRaceCarEntityModuleOutputInterface.h:490
	void SetPlayerGlobalRaceCarIndex(EGlobalRaceCarIndex);

	// BrnRaceCarEntityModuleOutputInterface.h:509
	void SetRaceCarData(Vector3, Vector3, WorldRegion, CgsID, CgsID, float32_t, uint16_t, EGlobalRaceCarIndex, int8_t, EActiveRaceCarIndex, bool, bool, bool, bool, bool, bool);

	// BrnRaceCarEntityModuleOutputInterface.h:512
	EGlobalRaceCarIndex GetPlayerGlobalRaceCarIndex() const;

	// BrnRaceCarEntityModuleOutputInterface.h:516
	Vector3 GetRaceCarPosition(EGlobalRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:520
	Vector3 GetRaceCarAt(EGlobalRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:524
	WorldRegion GetWorldRegion(EGlobalRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:528
	CgsID GetRivalId(EGlobalRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:532
	CgsID GetCarModelId(EGlobalRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:536
	float32_t GetRaceCarSpeed(EGlobalRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:540
	EActiveRaceCarIndex GetActiveRaceCarIndex(EGlobalRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:544
	EGlobalRaceCarIndex GetGlobalRaceCarIndex(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:548
	int16_t GetAISectionIndex(EGlobalRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:552
	bool IsPlayer(EGlobalRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:556
	bool IsRivalAI(EGlobalRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:560
	int8_t GetRivalIndex(EGlobalRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:564
	bool IsNetwork(EGlobalRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:568
	bool IsInCurrentMode(EGlobalRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:572
	bool IsDispersing(EGlobalRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:576
	bool IsInRange(EGlobalRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:579
	BitArray<35u> GetGlobalRaceCarBitArray() const;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
		// BrnRaceCarEntityModuleOutputInterface.h:71
		enum EActiveRaceCarEngineState {
			E_ACTIVE_RACE_CAR_ENGINE_STATE_OFF = 0,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_STARTING = 1,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_RUNNING = 2,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_STOPPING = 3,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_COUNT = 4,
		}

	}

}

// BrnRaceCarEntityModuleOutputInterface.h:157
struct BrnWorld::RaceCarEntityModuleIO::BoostOutputInfo {
	// BrnRaceCarEntityModuleOutputInterface.h:159
	bool mbIsBoosting;

	// BrnRaceCarEntityModuleOutputInterface.h:160
	bool mbIsInAir;

	// BrnRaceCarEntityModuleOutputInterface.h:161
	bool mbIsOncoming;

	// BrnRaceCarEntityModuleOutputInterface.h:162
	bool mbIsDrifting;

	// BrnRaceCarEntityModuleOutputInterface.h:163
	bool mbNearMiss;

	// BrnRaceCarEntityModuleOutputInterface.h:164
	bool mbIsBlueMode;

	// BrnRaceCarEntityModuleOutputInterface.h:165
	bool mbWasChainJustCompleted;

	// BrnRaceCarEntityModuleOutputInterface.h:166
	bool mbHoldingBoostButton;

	// BrnRaceCarEntityModuleOutputInterface.h:167
	bool mbIsTailgating;

	// BrnRaceCarEntityModuleOutputInterface.h:168
	bool mbTrafficCheck;

	// BrnRaceCarEntityModuleOutputInterface.h:169
	bool mbAllowedToBoost;

	// BrnRaceCarEntityModuleOutputInterface.h:170
	bool mbJustLostBoostChunk;

	// BrnRaceCarEntityModuleOutputInterface.h:171
	uint32_t muNumChained;

	// BrnRaceCarEntityModuleOutputInterface.h:172
	float32_t mfBoostAmount;

	// BrnRaceCarEntityModuleOutputInterface.h:173
	float32_t mfMaxBoost;

	// BrnRaceCarEntityModuleOutputInterface.h:174
	float32_t mfCurrentBoostingTime;

	// BrnRaceCarEntityModuleOutputInterface.h:175
	bool mbBoostIsFull;

	// BrnRaceCarEntityModuleOutputInterface.h:177
	BrnWorld::EBoostType meBoostType;

public:
	// BrnRaceCarEntityModuleOutputInterface.h:184
	void Construct();

}

// BrnRaceCarEntityModuleOutputInterface.h:189
struct BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData {
	// BrnRaceCarEntityModuleOutputInterface.h:191
	Vector3 mPosition;

	// BrnRaceCarEntityModuleOutputInterface.h:192
	Vector3 mPreviousPosition;

	// BrnRaceCarEntityModuleOutputInterface.h:193
	Vector3 mDirection;

	// BrnRaceCarEntityModuleOutputInterface.h:194
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnRaceCarEntityModuleOutputInterface.h:195
	EGlobalRaceCarIndex meGlobalRaceCarIndex;

	// BrnRaceCarEntityModuleOutputInterface.h:196
	bool mbIsPlayer;

}

// BrnRaceCarEntityModuleOutputInterface.h:208
struct BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface {
	// BrnRaceCarEntityModuleOutputInterface.h:415
	Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u> maCarsInTheRace;

private:
	// BrnRaceCarEntityModuleOutputInterface.h:443
	BoostOutputInfo[8] maBoostOutputInfo;

	// Unknown accessibility
	// BrnRaceCarEntityModuleOutputInterface.h:61
	typedef RaceCarState RaceCarState;

	// BrnRaceCarEntityModuleOutputInterface.h:444
	RCEntityActiveRaceCarOutputInterface::RaceCarState[8] maRaceCarStates;

	// BrnRaceCarEntityModuleOutputInterface.h:445
	CgsID[8] maRivalIds;

	// BrnRaceCarEntityModuleOutputInterface.h:446
	CgsID[8] maCarModelIds;

	// BrnRaceCarEntityModuleOutputInterface.h:447
	uint32_t[8] mauActiveRaceCarColourIndex;

	// BrnRaceCarEntityModuleOutputInterface.h:448
	int32_t[8] maiActiveRaceCarPaintFinishIndex;

	// BrnRaceCarEntityModuleOutputInterface.h:449
	uint16_t[8] mau16ActiveRaceCarAISections;

	// BrnRaceCarEntityModuleOutputInterface.h:450
	RwRGBAReal[8] maRaceCarMaterialColours;

	// BrnRaceCarEntityModuleOutputInterface.h:451
	uint16_t[8] maxRaceCarFlags;

	// BrnRaceCarEntityModuleOutputInterface.h:452
	Vector3[8] maCurrentInAirRotations;

	// BrnRaceCarEntityModuleOutputInterface.h:453
	bool[8] mbHasCrashedIntoWater;

	// BrnRaceCarEntityModuleOutputInterface.h:454
	EGlobalRaceCarIndex[8] maGlobalRaceCarIndices;

	// BrnRaceCarEntityModuleOutputInterface.h:455
	EActiveRaceCarIndex[8] maeActiveRaceCarIndex;

	// BrnRaceCarEntityModuleOutputInterface.h:456
	EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

	// BrnRaceCarEntityModuleOutputInterface.h:457
	BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState mePlayerEngineState;

	// BrnRaceCarEntityModuleOutputInterface.h:458
	bool mbIsPlayerCarActive;

	// BrnRaceCarEntityModuleOutputInterface.h:459
	bool mbAllActiveCarsReady;

	// BrnRaceCarEntityModuleOutputInterface.h:460
	ResourceHandle[8] maDeformationModelResourceHandles;

	// BrnRaceCarEntityModuleOutputInterface.h:461
	WorldMap2D mWorldMap2D;

	// BrnRaceCarEntityModuleOutputInterface.h:462
	bool mbPlayerWrecked;

	// BrnRaceCarEntityModuleOutputInterface.h:463
	bool mbCanDriveAwayFromCrash;

public:
	// BrnRaceCarEntityModuleOutputInterface.h:213
	void operator=(const RCEntityActiveRaceCarOutputInterface &);

	// BrnRaceCarEntityModuleOutputInterface.h:216
	void Clear();

	// BrnRaceCarEntityModuleOutputInterface.h:220
	const RCEntityActiveRaceCarOutputInterface::RaceCarState * GetRaceCarState(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:224
	const RwRGBAReal & GetRaceCarColour(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:228
	uint16_t GetRaceCarAISection(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:232
	CgsID GetRivalId(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:236
	EGlobalRaceCarIndex GetGlobalRaceCarIndex(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:240
	CgsID GetCarModelId(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:244
	bool IsRaceCarActive(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:248
	bool IsRaceCarLoaded(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:252
	bool IsRaceCarRival(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:256
	bool IsRaceCarPlayer(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:260
	bool IsRaceCarNetwork(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:264
	bool IsCarConnecting(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:268
	bool HaveWeLostContactWithThisCar(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:272
	bool IsCarDisconnected(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:276
	bool IsCarInShowtime(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:280
	uint32_t GetActiveRaceCarColourIndex(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:284
	int32_t GetActiveRaceCarPaintFinishIndex(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:287
	bool IsPlayerCarActive() const;

	// BrnRaceCarEntityModuleOutputInterface.h:290
	EActiveRaceCarIndex GetPlayerActiveRaceCarIndex() const;

	// BrnRaceCarEntityModuleOutputInterface.h:293
	EntityId GetPlayerRaceCarEntityId() const;

	// BrnRaceCarEntityModuleOutputInterface.h:296
	bool IsPlayerCarCrashing() const;

	// BrnRaceCarEntityModuleOutputInterface.h:299
	bool IsPlayerCarDeforming() const;

	// BrnRaceCarEntityModuleOutputInterface.h:302
	bool IsThePlayerDrivableFromCrash() const;

	// BrnRaceCarEntityModuleOutputInterface.h:305
	bool IsPlayerCarFatalyCrashing() const;

	// BrnRaceCarEntityModuleOutputInterface.h:308
	bool IsPlayerInAir() const;

	// BrnRaceCarEntityModuleOutputInterface.h:311
	float32_t TimePlayerInAir() const;

	// BrnRaceCarEntityModuleOutputInterface.h:314
	bool IsPlayerInReverseGear() const;

	// BrnRaceCarEntityModuleOutputInterface.h:317
	bool IsPlayerEngineOn() const;

	// BrnRaceCarEntityModuleOutputInterface.h:320
	bool IsPlayerEngineStarting() const;

	// BrnRaceCarEntityModuleOutputInterface.h:323
	BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState GetPlayerEngineState() const;

	// BrnRaceCarEntityModuleOutputInterface.h:327
	bool IsRaceCarEngineOn(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:331
	bool IsRaceCarEngineStarting(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:337
	const BoostOutputInfo & GetBoostOutputInfo() const;

	// BrnRaceCarEntityModuleOutputInterface.h:342
	void SetBoostOutputInfoN(EActiveRaceCarIndex, const BoostOutputInfo &);

	// BrnRaceCarEntityModuleOutputInterface.h:346
	const BoostOutputInfo * GetBoostOutputInfoN(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:362
	void SetRaceCarState(EActiveRaceCarIndex, EGlobalRaceCarIndex, CgsID, CgsID, const RCEntityActiveRaceCarOutputInterface::RaceCarState *, uint32_t, uint16_t, uint32_t, int32_t, Vector4, Vector3, bool, bool);

	// BrnRaceCarEntityModuleOutputInterface.h:367
	void SetPlayerActiveRaceCarData(EActiveRaceCarIndex, BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState);

	// BrnRaceCarEntityModuleOutputInterface.h:370
	bool GetAllActiveCarsRead() const;

	// BrnRaceCarEntityModuleOutputInterface.h:374
	void SetAllActiveCarsReady(bool);

	// BrnRaceCarEntityModuleOutputInterface.h:378
	CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> GetDeformationModelResourcePtr(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:383
	void SetDeformationModelResourcePtr(EActiveRaceCarIndex, const CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> &);

	// BrnRaceCarEntityModuleOutputInterface.h:386
	const WorldMap2D * GetWorldMap2D() const;

	// BrnRaceCarEntityModuleOutputInterface.h:390
	void SetWorldMap2D(const WorldMap2D *);

	// BrnRaceCarEntityModuleOutputInterface.h:393
	const RCEntityActiveRaceCarOutputInterface::RaceCarState * GetPlayerRaceCarState() const;

	// BrnRaceCarEntityModuleOutputInterface.h:396
	Vector3 GetPlayerPosition() const;

	// BrnRaceCarEntityModuleOutputInterface.h:399
	Vector3 GetPlayerDirection() const;

	// BrnRaceCarEntityModuleOutputInterface.h:402
	Vector3 GetPlayerLinearVelocity() const;

	// BrnRaceCarEntityModuleOutputInterface.h:405
	bool GetCanDriveAwayFromCrash() const;

	// BrnRaceCarEntityModuleOutputInterface.h:408
	void ClearCarsInRace();

	// BrnRaceCarEntityModuleOutputInterface.h:413
	void AddCarToRace(RaceCar *, EGlobalRaceCarIndex);

	// BrnRaceCarEntityModuleOutputInterface.h:420
	void SetActiveRaceCarIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex, EActiveRaceCarIndex);

	// BrnRaceCarEntityModuleOutputInterface.h:424
	EActiveRaceCarIndex GetActiveRaceCarIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:428
	void SetPlayerWrecked(bool);

	// BrnRaceCarEntityModuleOutputInterface.h:431
	bool IsPlayerWrecked() const;

	// BrnRaceCarEntityModuleOutputInterface.h:435
	Vector3 GetCurrentInAirRotations(EActiveRaceCarIndex) const;

	// BrnRaceCarEntityModuleOutputInterface.h:440
	bool HasCrashedIntoWater(EActiveRaceCarIndex) const;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
		// BrnRaceCarEntityModuleOutputInterface.h:71
		enum EActiveRaceCarEngineState {
			E_ACTIVE_RACE_CAR_ENGINE_STATE_OFF = 0,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_STARTING = 1,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_RUNNING = 2,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_STOPPING = 3,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_COUNT = 4,
		}

		// Declaration
		struct AudioCarDataLoadedEvent {
			// BrnRaceCarEntityModuleOutputInterface.h:93
			enum EMessageType {
				E_NONE = 0,
				E_REQUEST_LOAD_DATA = 1,
				E_DATA_IS_LOADED = 2,
				E_REQUEST_UNLOAD_DATA = 3,
				E_DATA_IS_UNLOADED = 4,
			}

		}

	}

}

// BrnRaceCarEntityModuleOutputInterface.h:91
struct BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent : public Event {
private:
	// BrnRaceCarEntityModuleOutputInterface.h:138
	BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent::EMessageType meMessageType;

	// BrnRaceCarEntityModuleOutputInterface.h:139
	const VehicleListEntry * mpVehicleListEntry;

	// BrnRaceCarEntityModuleOutputInterface.h:140
	CgsID mAssetID;

	// BrnRaceCarEntityModuleOutputInterface.h:141
	uint8_t miActiveRaceCarIndex;

	// BrnRaceCarEntityModuleOutputInterface.h:142
	bool mbIsPlayer;

public:
	// BrnRaceCarEntityModuleOutputInterface.h:110
	void Construct(uint8_t, const VehicleListEntry *, CgsID, BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent::EMessageType, bool);

	// BrnRaceCarEntityModuleOutputInterface.h:117
	void Construct(uint8_t, CgsID, BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent::EMessageType, bool);

	// BrnRaceCarEntityModuleOutputInterface.h:121
	uint8_t GetCarIndex() const;

	// BrnRaceCarEntityModuleOutputInterface.h:124
	BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent::EMessageType GetMessageType() const;

	// BrnRaceCarEntityModuleOutputInterface.h:128
	const VehicleListEntry * GetVehicleEntry() const;

	// BrnRaceCarEntityModuleOutputInterface.h:131
	CgsID GetAssetID() const;

	// BrnRaceCarEntityModuleOutputInterface.h:134
	bool GetIsPlayer() const;

}

// BrnRaceCarEntityModuleOutputInterface.h:612
struct BrnWorld::RaceCarEntityModuleIO::RCEntityPlayerResetInterface {
private:
	// BrnRaceCarEntityModuleOutputInterface.h:629
	Vector3 mRestPos;

	// BrnRaceCarEntityModuleOutputInterface.h:630
	bool mbPlayerResetThisFrame;

public:
	// BrnRaceCarEntityModuleOutputInterface.h:615
	void Clear();

	// BrnRaceCarEntityModuleOutputInterface.h:619
	void SetPlayerResetPos(Vector3);

	// BrnRaceCarEntityModuleOutputInterface.h:622
	const bool PlayerHasRestThisFrame() const;

	// BrnRaceCarEntityModuleOutputInterface.h:625
	const rw::math::vpu::Vector3 GetPlayerResetPos() const;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
		// BrnRaceCarEntityModuleOutputInterface.h:71
		enum EActiveRaceCarEngineState {
			E_ACTIVE_RACE_CAR_ENGINE_STATE_OFF = 0,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_STARTING = 1,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_RUNNING = 2,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_STOPPING = 3,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_COUNT = 4,
		}

	}

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
		// BrnRaceCarEntityModuleOutputInterface.h:71
		enum EActiveRaceCarEngineState {
			E_ACTIVE_RACE_CAR_ENGINE_STATE_OFF = 0,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_STARTING = 1,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_RUNNING = 2,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_STOPPING = 3,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_COUNT = 4,
		}

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
		// BrnRaceCarEntityModuleOutputInterface.h:71
		enum EActiveRaceCarEngineState {
			E_ACTIVE_RACE_CAR_ENGINE_STATE_OFF = 0,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_STARTING = 1,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_RUNNING = 2,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_STOPPING = 3,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_COUNT = 4,
		}

		// Declaration
		struct AudioCarDataLoadedEvent {
			// BrnRaceCarEntityModuleOutputInterface.h:93
			enum EMessageType {
				E_NONE = 0,
				E_REQUEST_LOAD_DATA = 1,
				E_DATA_IS_LOADED = 2,
				E_REQUEST_UNLOAD_DATA = 3,
				E_DATA_IS_UNLOADED = 4,
			}

		}

	}

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
		// BrnRaceCarEntityModuleOutputInterface.h:71
		enum EActiveRaceCarEngineState {
			E_ACTIVE_RACE_CAR_ENGINE_STATE_OFF = 0,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_STARTING = 1,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_RUNNING = 2,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_STOPPING = 3,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_COUNT = 4,
		}

		// Declaration
		struct AudioCarDataLoadedEvent {
			// BrnRaceCarEntityModuleOutputInterface.h:93
			enum EMessageType {
				E_NONE = 0,
				E_REQUEST_LOAD_DATA = 1,
				E_DATA_IS_LOADED = 2,
				E_REQUEST_UNLOAD_DATA = 3,
				E_DATA_IS_UNLOADED = 4,
			}

		}

	}

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
		// BrnRaceCarEntityModuleOutputInterface.h:71
		enum EActiveRaceCarEngineState {
			E_ACTIVE_RACE_CAR_ENGINE_STATE_OFF = 0,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_STARTING = 1,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_RUNNING = 2,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_STOPPING = 3,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_COUNT = 4,
		}

		// Declaration
		struct AudioCarDataLoadedEvent {
			// BrnRaceCarEntityModuleOutputInterface.h:93
			enum EMessageType {
				E_NONE = 0,
				E_REQUEST_LOAD_DATA = 1,
				E_DATA_IS_LOADED = 2,
				E_REQUEST_UNLOAD_DATA = 3,
				E_DATA_IS_UNLOADED = 4,
			}

		}

	}

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
		// BrnRaceCarEntityModuleOutputInterface.h:71
		enum EActiveRaceCarEngineState {
			E_ACTIVE_RACE_CAR_ENGINE_STATE_OFF = 0,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_STARTING = 1,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_RUNNING = 2,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_STOPPING = 3,
			E_ACTIVE_RACE_CAR_ENGINE_STATE_COUNT = 4,
		}

	}

}

