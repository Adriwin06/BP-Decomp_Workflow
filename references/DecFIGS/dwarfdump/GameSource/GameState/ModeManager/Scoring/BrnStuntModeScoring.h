// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
		struct RCEntityGlobalRaceCarOutputInterface;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct FlybyData;

		struct CarScoreData;

		struct RaceCarRaceDistanceInterface;

		struct GameAction<E_ACTION_RESET_PLAYER_CAR>;

		struct GameAction<E_ACTION_PREPARE_FOR_MODE>;

		struct GameAction<E_ACTION_BROADCAST_MODE_FINISH_LINES>;

		struct BroadcastModeFinishLinesAction;

		struct GameAction<E_ACTION_START_MODE_INTRO>;

		struct StartModeIntroAction;

		struct GameAction<E_ACTION_SHOW_MODE_RESULTS>;

		struct ShowModeResultsAction;

		struct GameAction<E_ACTION_STOP_MODE>;

		struct StopModeAction;

		struct GameAction<E_ACTION_SET_TAKEDOWN_CAMERA_STATE>;

		struct SetTakedownCameraAction;

		struct GameAction<E_ACTION_IMPACT_TIME_START>;

		struct ImpactTimeStartAction;

		struct GameAction<E_ACTION_DRIVE_THRU_BODY_SHOP>;

		struct BodyShopDriveThruAction;

		struct GameAction<E_ACTION_DRIVE_THRU_PAINT_SHOP>;

		struct PaintShopDriveThruAction;

		struct GameAction<E_ACTION_DRIVE_THRU_GAS_STATION>;

		struct GasStationDriveThruAction;

		struct GameAction<E_ACTION_RACE_CAR_REACHED_CHECKPOINT>;

		struct RaceCarReachedCheckpointAction;

		struct GameAction<E_ACTION_ROAD_RAGE_PLAYER_DAMAGE>;

		struct RoadRagePlayerDamageAction;

		struct GameAction<E_ACTION_CAR_SELECT_TRANSITION_IN>;

		struct CarSelectTransitionInAction;

		struct GameAction<E_ACTION_CAR_SELECT_READY>;

		struct CarSelectReadyAction;

		struct GameAction<E_ACTION_CAR_SELECT_MODIFICATION_SCREEN>;

		struct CarSelectModificationScreen;

		struct GameAction<E_ACTION_CAR_SELECT_EXIT>;

		struct CarSelectExitAction;

		struct GameAction<E_ACTION_CAR_SELECT_ONLINE_CAR_IS_SHOWABLE>;

		struct CarSelectOnlineCarIsShowable;

		struct GameAction<E_ACTION_PAYBACK_ACTIVATED>;

		struct PaybackActivatedAction;

		struct GameAction<E_ACTION_VEHICLE_HIT>;

		struct VehicleHitAction;

		struct GameAction<E_ACTION_JUST_BOUNCED>;

		struct JustBouncedAction;

		struct GameAction<E_ACTION_SOUND_TRIGGER>;

		struct GameAction<E_ACTION_NEW_CAR_UNLOCKED>;

		struct GameAction<E_ACTION_ON_JUMP_START>;

		struct OnJumpStartAction;

		struct GameAction<E_ACTION_ON_STUNT_ELEMENT_COMPLETE>;

		struct OnStuntElementCompleteAction;

		struct GameAction<E_ACTION_CAR_SELECTION_CHANGED>;

		struct CarSelectionChangedAction;

		struct GameAction<E_ACTION_CAR_SELECTION_CHANGED_DROPIN>;

		struct CarSelectionChangedDropInAction;

		struct GameAction<E_ACTION_CAR_ADDITION_PRESENTATION_START>;

		struct CarAdditionPresentationStartAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_STUNT_PERFORMED>;

		struct HUDMessageStuntPerformed;

		struct GameAction<E_ACTION_SHOWTIME_INTRO_START>;

		struct ShowtimeIntro;

		struct BaseGameActionQueue<13312>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BrnStuntModeScoring.h:50
using BrnGameState::GameStateModuleIO;

// BrnStuntModeScoring.h:98
struct BrnGameState::StuntInfo {
	// BrnStuntModeScoring.h:100
	uint32_t muStuntTypes;

	// BrnStuntModeScoring.h:101
	uint32_t muAwesomeStuntTypes;

	// BrnStuntModeScoring.h:102
	int32_t miStuntScore;

	// BrnStuntModeScoring.h:103
	int32_t miStuntMultiplier;

	// BrnStuntModeScoring.h:104
	uint16_t muFlatSpins;

	// BrnStuntModeScoring.h:105
	uint16_t muBarrelRolls;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
		struct RCEntityActiveRaceCarOutputInterface;

		struct RCEntityGlobalRaceCarOutputInterface;

		struct BoostOutputInfo;

		struct CarsInTheRaceData;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct RaceCarRaceDistanceInterface;

		struct GameEventQueue;

		struct GameAction<E_ACTION_PREPARE_FOR_MODE>;

		struct GameAction<E_ACTION_JUST_BOUNCED>;

		struct JustBouncedAction;

		struct GameEvent<E_EVENT_RECORD_PROP_HIT>;

		struct RecordPropHitEvent;

		struct GameEvent<E_EVENT_OVERHEAD_SIGN_HIT>;

		struct HitOverheadSignEvent;

		struct BaseGameActionQueue<13312>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
		struct RCEntityActiveRaceCarOutputInterface;

		struct RCEntityGlobalRaceCarOutputInterface;

		struct BoostOutputInfo;

		struct CarsInTheRaceData;

		struct RCEntityPlayerResetInterface;

		struct CreateRivalInTrafficSystemEvent;

		struct RemoveRivalFromTrafficSystemEvent;

		struct OutputBuffer_Prepare;

		struct InputBuffer_PreScene;

		struct OutputBuffer_PreScene;

		struct InputBuffer_PostScene;

		struct OutputBuffer_PostScene;

		struct InputBuffer_PrePhysics;

		struct OutputBuffer_PrePhysics;

		struct InputBuffer_PostPhysics;

		struct OutputBuffer_PostPhysics;

		struct InputBuffer_GenerateDispatchLists;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct WorldStuntAction;

		struct PowerParkResultAction;

		struct CompletedFburnChallengesData;

		struct FlybyData;

		struct CarScoreData;

		struct ScoringOutputInterface;

		struct OnlineScoringOutputInterface;

		struct RaceCarRaceDistanceInterface;

		struct InterestInterface;

		struct ControllerInput;

		struct OutputBuffer;

		struct PreWorldInputBuffer;

		struct OnlineRoadRulesPersonalBestRecvEvent;

		struct OnlineRoadRulesUploadedEvent;

		struct OnlineRoadRulesDownloadedEvent;

		struct OnlineRoadRulesConnectInfoEvent;

		struct RoadRulesScoreRequestEvent;

		struct BuddyRemovedEvent;

		struct RoadRulesBatchQueryAction;

		struct GameEventQueue;

		struct GameAction<E_ACTION_RESET_PLAYER_CAR>;

		struct GameAction<E_ACTION_SET_PLAYER_OPPONENTS>;

		struct SetPlayerOpponentsAction;

		struct GameAction<E_ACTION_SETUP_NETWORK_CAR>;

		struct SetupNetworkCarAction;

		struct GameAction<E_ACTION_COMPLETED_STUNT>;

		struct CompletedStuntAction;

		struct GameAction<E_ACTION_PREPARE_FOR_MODE>;

		struct GameAction<E_ACTION_START_MODE_INTRO>;

		struct StartModeIntroAction;

		struct GameAction<E_ACTION_STOP_MODE_INTRO>;

		struct StopModeIntroAction;

		struct GameAction<E_ACTION_MARKED_MAN_LOADED>;

		struct MarkedManLoadedAction;

		struct GameAction<E_ACTION_FINISHED_MODE>;

		struct FinishedModeAction;

		struct GameAction<E_ACTION_SHOW_MODE_RESULTS>;

		struct ShowModeResultsAction;

		struct GameAction<E_ACTION_STOP_MODE>;

		struct StopModeAction;

		struct GameAction<E_ACTION_SET_BOOST>;

		struct SetBoostAction;

		struct GameAction<E_ACTION_UPDATE_CAR_STATS>;

		struct SendCarStatsAction;

		struct GameAction<E_ACTION_EVENT_AT_JUNCTION_AVAILABLE>;

		struct SendJunctionPlayerIsAtAction;

		struct GameAction<E_ACTION_SET_PLAYER_CAR_DRIVER>;

		struct SetPlayerCarDriverAction;

		struct GameAction<E_ACTION_DRIVE_THRU_BODY_SHOP>;

		struct BodyShopDriveThruAction;

		struct GameAction<E_ACTION_DRIVE_THRU_PAINT_SHOP>;

		struct PaintShopDriveThruAction;

		struct GameAction<E_ACTION_ON_TRAFFIC_CHECKING>;

		struct TrafficCheckingAction;

		struct GameAction<E_ACTION_PLAYER_INVULNERABLE>;

		struct PlayerInvulnerableAction;

		struct GameAction<E_ACTION_TROPHY_UNLOCK>;

		struct TrophyUnlockAction;

		struct GameAction<E_ACTION_ROAD_RAGE_PLAYER_DAMAGE>;

		struct RoadRagePlayerDamageAction;

		struct GameAction<E_ACTION_CAR_SELECTION_REQUEST_STREAMING>;

		struct CarSelectionRequestStreamingAction;

		struct GameAction<E_ACTION_CAR_SELECT_TRANSITION_IN>;

		struct CarSelectTransitionInAction;

		struct GameAction<E_ACTION_CAR_SELECT_WAITING_FOR_AUDIO>;

		struct CarSelectWaitingForAudioAction;

		struct GameAction<E_ACTION_CAR_SELECT_MODIFICATION_SCREEN>;

		struct CarSelectModificationScreen;

		struct GameAction<E_ACTION_CAR_SELECT_CHANGE_COLOUR>;

		struct CarSelectChangeColourAction;

		struct GameAction<E_ACTION_ADD_RIVAL>;

		struct AddRivalAction;

		struct GameAction<E_ACTION_VEHICLE_HIT>;

		struct VehicleHitAction;

		struct GameAction<E_ACTION_SHOWTIME_MODE_SWITCH>;

		struct ShowtimeModeSwitchAction;

		struct GameAction<E_ACTION_JUST_BOUNCED>;

		struct JustBouncedAction;

		struct GameAction<E_ACTION_WORLD_STUNT_PERFORMED>;

		struct GameAction<E_ACTION_POWER_PARK_RESULT>;

		struct GameAction<E_ACTION_GAME_TRAINING_REQUEST>;

		struct RequestGameTrainingAction;

		struct GameAction<E_ACTION_SHUTDOWN>;

		struct ShutdownAction;

		struct GameAction<E_ACTION_SHUTDOWN_FINISHED>;

		struct ShutdownFinishedAction;

		struct GameAction<E_ACTION_SET_SIXAXIS_STEERING>;

		struct SetSixaxisSteeringAction;

		struct GameAction<E_ACTION_SOUND_TRIGGER>;

		struct GameAction<E_ACTION_PLAYER_HIT_RIVAL>;

		struct PlayerHitRivalAction;

		struct GameAction<E_ACTION_ON_STUNT_ELEMENT_COMPLETE>;

		struct OnStuntElementCompleteAction;

		struct GameAction<E_ACTION_STUNT_ELEMENT_BOOST>;

		struct OnStuntElementBoostAction;

		struct GameAction<E_ACTION_CAR_SELECTION_CHANGED>;

		struct CarSelectionChangedAction;

		struct GameAction<E_ACTION_SWITCH_CAR_CORONAS_ON_OFF>;

		struct SwitchCarCoronasOnOffAction;

		struct GameAction<E_ACTION_ALLOW_BOOST_EARNING>;

		struct AllowBoostEarningAction;

		struct GameAction<E_ACTION_REMOTE_PLAYER_DISCONNECTED>;

		struct RemotePlayerDisconnectedAction;

		struct GameAction<E_ACTION_ONLINE_PLAYER_ADDED>;

		struct OnlinePlayerAddedAction;

		struct GameAction<E_ACTION_ONLINE_PLAYER_REMOVED>;

		struct OnlinePlayerRemovedAction;

		struct GameAction<E_ACTION_OFFLINE_REMOVE_CAR_FROM_MODE>;

		struct OfflineRemoveCarFromModeAction;

		struct GameAction<E_ACTION_ROAD_RULES_ENTER_ROAD>;

		struct RoadRulesEnterRoadAction;

		struct GameAction<E_ACTION_ROAD_RULES_BATCH_QUERY>;

		struct GameAction<E_ACTION_UPCOMING_ROAD_CHANGE>;

		struct GameAction<E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE>;

		struct RoadRulesUpdateTargetScoreAction;

		struct GameAction<E_ACTION_ONLINE_GAME_RESULT>;

		struct OnlineGameResults;

		struct GameAction<E_ACTION_ONLINE_ROUND_RESULT>;

		struct OnlineRoundResults;

		struct GameAction<E_ACTION_SWITCH_CAR_COLOUR>;

		struct SwitchCarColourAction;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_UPDATE>;

		struct FreeburnChallengeUpdateAction;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateAction;

		struct GameAction<E_ACTION_ALLOW_CAR_TO_JOIN_ROAD_RAGE>;

		struct AllowCarToJoinRoadRageAction;

		struct GameEvent<E_EVENT_RACE_CAR_NEEDS_HIDING>;

		struct RaceCarNeedsHidingEvent;

		struct GameEvent<E_EVENT_RECORD_PROP_HIT>;

		struct RecordPropHitEvent;

		struct GameEvent<E_EVENT_OVERHEAD_SIGN_HIT>;

		struct HitOverheadSignEvent;

		struct GameEvent<E_EVENT_GAME_TRAINING_REQUEST>;

		struct RequestGameTrainingEvent;

		struct GameEvent<E_EVENT_STREAMING_COMPLETE>;

		struct GameEvent<E_EVENT_PLAYER_CAR_PLACED_ON_TRACK>;

		struct PlayerCarPlacedOnTrackEvent;

		struct GameEvent<E_EVENT_START_NETWORK_GAME>;

		struct StartNetworkGameEvent;

		struct GameEvent<E_EVENT_START_NETWORK_ROUND>;

		struct StartNetworkRoundEvent;

		struct GameEvent<E_EVENT_BUDDY_REMOVED>;

		struct GameEvent<E_EVENT_PLAYER_RESET_ON_TRACK>;

		struct PlayerResetOnTrackEvent;

		struct GameEvent<E_EVENT_RACE_CAR_DRIVING_IN_CRASH>;

		struct RaceCarDrivingInCrashEvent;

		struct GameEvent<E_EVENT_TRIGGER_CRASH_BREAKER>;

		struct TriggerCrashBreakerEvent;

		struct GameEvent<E_EVENT_SHOWTIME_BOUNCE_PROMPT>;

		struct ShowtimeBouncePromptEvent;

		struct GameEvent<E_EVENT_PICKUP>;

		struct PickupEvent;

		struct GameEvent<E_EVENT_VEHICLE_LEAPT>;

		struct VehicleLeaptEvent;

		struct GameEvent<E_EVENT_ENTER_NEW_ROAD>;

		struct EnterNewRoadEvent;

		struct GameEvent<E_EVENT_PLAYER_FINISHED_MODE>;

		struct PlayerFinishedModeEvent;

		struct GameEvent<E_EVENT_NEAR_MISS>;

		struct NearMissEvent;

		struct GameEvent<E_EVENT_NEAR_MISS_CHAIN_IN_PROGRESS>;

		struct NearMissChainInProgressEvent;

		struct GameEvent<E_EVENT_NEAR_MISS_CHAIN_COMPLETED>;

		struct NearMissChainCompleteEvent;

		struct GameEvent<E_EVENT_TAILGATING>;

		struct TailgatingEvent;

		struct GameEvent<E_EVENT_TRAFFIC_CHECKING_CHAIN>;

		struct TrafficCheckingChainEvent;

		struct GameEvent<E_EVENT_CRASH_COMBO_ITEM>;

		struct CrashComboItemEvent;

		struct GameEvent<E_EVENT_DRIFTING>;

		struct DriftingEvent;

		struct GameEvent<E_EVENT_SPINNING>;

		struct SpinningEvent;

		struct GameEvent<E_EVENT_IN_AIR>;

		struct InAirEvent;

		struct GameEvent<E_EVENT_WORLD_REGION_CHANGE>;

		struct WorldRegionChangeEvent;

		struct GameEvent<E_EVENT_ONCOMING>;

		struct OncomingEvent;

		struct GameEvent<E_EVENT_ONCOMING_COMPLETED>;

		struct OncomingCompletedEvent;

		struct GameEvent<E_EVENT_ROAD_RULE_ROAD_SCORE_REQUEST>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_PB_RECV>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_UPLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_DOWNLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_CONNECT_INFO>;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_RECEIVED>;

		struct OnlineImageReceivedEvent;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_SEND_ABORTED>;

		struct OnlineImageCaptureAbortedEvent;

		struct GameEvent<E_EVENT_BURNING_HOME_RUN_SWITCHED_RUNNER>;

		struct BurningHomeRunSwitchRunnerEvent;

		struct GameEvent<E_EVENT_POWER_PARK_RESULT>;

		struct PowerParkResultEvent;

		struct GameEvent<E_EVENT_BOOST_TIME_COMPLETE>;

		struct BoostTimeCompleteEvent;

		struct GameEvent<E_EVENT_ONLINE_NEW_HOST>;

		struct OnlineNewHostEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS>;

		struct FburnChallengeSuccessEvent;

		struct GameEvent<E_EVENT_MODE_MANAGER_ROUTE_INFO>;

		struct ModeManagerRouteInfoEvent;

		struct BaseGameActionQueue<13312>;

		struct GameStateToControllerInterface;

		struct ControllerToGameStateInterface;

		struct GameStateToGuiInterface;

		struct PostWorldInputBuffer;

		struct BaseGameActionQueue<256>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BrnStuntModeScoring.h:74
struct BrnGameState::StuntTypeInfo {
	// BrnStuntModeScoring.h:76
	float32_t mfTimeActive;

	// BrnStuntModeScoring.h:77
	float32_t mfTimeSinceLast;

	// BrnStuntModeScoring.h:78
	float32_t mfScore;

	// BrnStuntModeScoring.h:79
	bool mbActive;

}

// BrnStuntModeScoring.h:84
struct BrnGameState::StuntToDisplay {
	// BrnStuntModeScoring.h:92
	BrnGameState::EStuntType meStuntType;

	// BrnStuntModeScoring.h:93
	int32_t miStuntScore;

public:
	// BrnStuntModeScoring.h:87
	void Construct();

	// BrnStuntModeScoring.h:90
	bool IsValid() const;

}

// BrnStuntModeScoring.h:117
struct BrnGameState::StuntModeScoring {
private:
	// BrnStuntModeScoring.h:315
	int32_t miCurrentScore;

	// BrnStuntModeScoring.h:316
	int32_t miTargetScore;

	// BrnStuntModeScoring.h:317
	float32_t mfPendingNonGuaranteedScore;

	// BrnStuntModeScoring.h:318
	float32_t mfPendingGuaranteedScore;

	// BrnStuntModeScoring.h:319
	float32_t mfComboScore;

	// BrnStuntModeScoring.h:320
	int32_t miComboMultiplier;

	// BrnStuntModeScoring.h:322
	bool mbStuntModeActive;

	// BrnStuntModeScoring.h:323
	bool mbStuntInProgress;

	// BrnStuntModeScoring.h:324
	bool mbComboInProgress;

	// BrnStuntModeScoring.h:325
	bool mbValidStunt;

	// BrnStuntModeScoring.h:326
	bool mbWasInAirLastFrame;

	// BrnStuntModeScoring.h:327
	bool mbInitialDriftOngoing;

	// BrnStuntModeScoring.h:328
	bool mbTimeLimitExpired;

	// BrnStuntModeScoring.h:329
	bool mbTimeUpMessageSent;

	// BrnStuntModeScoring.h:330
	bool mbPlayerCarCrashing;

	// BrnStuntModeScoring.h:331
	Vector3 mStuntRollInProgress;

	// BrnStuntModeScoring.h:332
	uint32_t muStuntTypesInProgress;

	// BrnStuntModeScoring.h:333
	uint32_t muAwesomeStuntTypesInProgress;

	// BrnStuntModeScoring.h:334
	float32_t mfTimeSinceLastStunt;

	// BrnStuntModeScoring.h:335
	float32_t mfSpeedMPHBeforeCrashing;

	// BrnStuntModeScoring.h:336
	float32_t mfTimeDelayBeforeModeEnd;

	// BrnStuntModeScoring.h:338
	bool mbRecentStunt;

	// BrnStuntModeScoring.h:339
	StuntInfo mRecentStunt;

	// BrnStuntModeScoring.h:340
	bool mbRecentCombo;

	// BrnStuntModeScoring.h:341
	int32_t miRecentComboScore;

	// BrnStuntModeScoring.h:342
	float32_t mfPendingScoreTimer;

	// BrnStuntModeScoring.h:344
	StuntTypeInfo[15] mStuntTypeInfo;

	// Unknown accessibility
	// BrnStuntModeScoring.h:68
	typedef FixedRingBuffer<rw::math::vpu::Vector3,256> RecentJumpSet;

	// BrnStuntModeScoring.h:346
	StuntModeScoring::RecentJumpSet mRecentJumpSet;

	// Unknown accessibility
	// BrnStuntModeScoring.h:70
	typedef Set<CgsID,512u> StuntElementSet;

	// BrnStuntModeScoring.h:348
	StuntModeScoring::StuntElementSet mRecentStuntElementSet;

	// Unknown accessibility
	// BrnStuntModeScoring.h:69
	typedef FixedRingBuffer<std::uint16_t,64> RecentPropSet;

	// BrnStuntModeScoring.h:350
	StuntModeScoring::RecentPropSet mRecentPropSet;

	// BrnStuntModeScoring.h:352
	bool mbEndlessStuntRun;

	// Unknown accessibility
	// BrnStuntModeScoring.h:36
	typedef BrnGameState::AchievementManagerPS3 AchievementManager;

	// BrnStuntModeScoring.h:354
	StuntModeScoring::AchievementManager * mpAchievementManager;

public:
	// BrnStuntModeScoring.h:123
	void Construct(StuntModeScoring::AchievementManager *);

	// BrnStuntModeScoring.h:127
	bool Prepare();

	// BrnStuntModeScoring.h:133
	// Declaration
	void Update(const ActiveRaceCarOutputInterface *, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnStuntModeScoring.h:67
		typedef BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface ActiveRaceCarOutputInterface;

	}

	// BrnStuntModeScoring.h:137
	bool Release();

	// BrnStuntModeScoring.h:141
	void Destruct();

	// BrnStuntModeScoring.h:145
	void Activate(int32_t);

	// BrnStuntModeScoring.h:149
	void ClearData();

	// BrnStuntModeScoring.h:153
	void OutputStuntsToDisplay(int32_t, StuntToDisplay *);

	// BrnStuntModeScoring.h:157
	int32_t GetCurrentScore() const;

	// BrnStuntModeScoring.h:160
	int32_t GetTargetScore() const;

	// BrnStuntModeScoring.h:163
	int32_t GetComboScore() const;

	// BrnStuntModeScoring.h:166
	int32_t GetComboMultiplier() const;

	// BrnStuntModeScoring.h:170
	uint32_t GetCurrentStunts() const;

	// BrnStuntModeScoring.h:174
	uint32_t GetAllStuntTypesForInProgressStunt() const;

	// BrnStuntModeScoring.h:177
	bool HasTargetScoreBeenExceeded() const;

	// BrnStuntModeScoring.h:180
	bool IsComboInProgress() const;

	// BrnStuntModeScoring.h:183
	bool IsComboWarningActive() const;

	// BrnStuntModeScoring.h:187
	float32_t GetTimeSinceComboWarningActivated() const;

	// BrnStuntModeScoring.h:191
	bool HasStuntModeEnded(bool);

	// BrnStuntModeScoring.h:195
	void DealWithStunt(const BrnGameState::GameStateModuleIO::WorldStuntAction *);

	// BrnStuntModeScoring.h:199
	void DealWithHitProp(uint16_t, uint8_t);

	// BrnStuntModeScoring.h:203
	void DealWithPowerPark(const BrnGameState::GameStateModuleIO::PowerParkResultAction *);

	// BrnStuntModeScoring.h:208
	bool WasStuntRecentlyPerformed(StuntInfo *);

	// BrnStuntModeScoring.h:214
	bool WasComboRecentlyPerformed(int32_t *, bool *);

	// BrnStuntModeScoring.h:218
	bool WasTimeRecentlyUp();

protected:
	// BrnStuntModeScoring.h:224
	void BeginCombo();

	// BrnStuntModeScoring.h:229
	void EndCombo();

	// BrnStuntModeScoring.h:233
	void ClearStuntTypeInfo();

	// BrnStuntModeScoring.h:239
	void UpdateCombo(float32_t, const ActiveRaceCarOutputInterface *);

	// BrnStuntModeScoring.h:242
	void UpdateBufferedScore(float32_t);

	// BrnStuntModeScoring.h:245
	void UpdateStuntRepetition(float32_t);

	// BrnStuntModeScoring.h:250
	bool UpdateAirStunts(float32_t, const ActiveRaceCarOutputInterface *);

	// BrnStuntModeScoring.h:255
	bool UpdateDriftStunts(float32_t, const ActiveRaceCarOutputInterface *);

	// BrnStuntModeScoring.h:260
	bool UpdateBoostStunts(float32_t, const ActiveRaceCarOutputInterface *);

	// BrnStuntModeScoring.h:265
	bool UpdateDrivingStunts(float32_t, const ActiveRaceCarOutputInterface *);

	// BrnStuntModeScoring.h:270
	bool UpdateCrashStunts(float32_t, const ActiveRaceCarOutputInterface *);

	// BrnStuntModeScoring.h:277
	void UpdateStuntRating(BrnGameState::EStuntType, float32_t, float32_t, float32_t);

	// BrnStuntModeScoring.h:283
	void UpdateScore(float32_t, BrnGameState::EStuntType, bool);

	// BrnStuntModeScoring.h:287
	bool RegisterStunt();

	// BrnStuntModeScoring.h:291
	float32_t GetRepetitionScoreFalloff(BrnGameState::EStuntType) const;

	// BrnStuntModeScoring.h:295
	float32_t GetMinimumScoreAward(BrnGameState::EStuntType) const;

	// BrnStuntModeScoring.h:299
	float32_t GetTakeOffMultiplier() const;

	// BrnStuntModeScoring.h:303
	bool IsStuntTypeInProgress(BrnGameState::EStuntType) const;

	// BrnStuntModeScoring.h:307
	bool HasAnyPendingScore() const;

	// BrnStuntModeScoring.h:311
	bool ShouldBankScore() const;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
		struct RCEntityActiveRaceCarOutputInterface;

		struct RCEntityGlobalRaceCarOutputInterface;

		struct BoostOutputInfo;

		struct CarsInTheRaceData;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct WorldStuntAction;

		struct PowerParkResultAction;

		struct CompletedFburnChallengesData;

		struct FlybyData;

		struct CarScoreData;

		struct ScoringOutputInterface;

		struct OnlineScoringOutputInterface;

		struct RaceCarRaceDistanceInterface;

		struct InterestInterface;

		struct ControllerInput;

		struct OutputBuffer;

		struct PreWorldInputBuffer;

		struct OnlineRoadRulesPersonalBestRecvEvent;

		struct OnlineRoadRulesUploadedEvent;

		struct OnlineRoadRulesDownloadedEvent;

		struct OnlineRoadRulesConnectInfoEvent;

		struct RoadRulesScoreRequestEvent;

		struct BuddyRemovedEvent;

		struct RoadRulesBatchQueryAction;

		struct GameEventQueue;

		struct GameAction<E_ACTION_PREPARE_FOR_MODE>;

		struct GameAction<E_ACTION_BROADCAST_MODE_FINISH_LINES>;

		struct BroadcastModeFinishLinesAction;

		struct GameAction<E_ACTION_START_MODE_INTRO>;

		struct StartModeIntroAction;

		struct GameAction<E_ACTION_STOP_MODE_INTRO>;

		struct StopModeIntroAction;

		struct GameAction<E_ACTION_MARKED_MAN_LOADED>;

		struct MarkedManLoadedAction;

		struct GameAction<E_ACTION_QUIT_MODE_OFFLINE>;

		struct QuitModeOfflineAction;

		struct GameAction<E_ACTION_QUIT_MODE_ONLINE>;

		struct QuitModeOnlineAction;

		struct GameAction<E_ACTION_FINISH_MODE_ONLINE>;

		struct FinishModeOnlineAction;

		struct GameAction<E_ACTION_FINISH_MODE_FINAL_ONLINE>;

		struct FinishModeFinalOnlineAction;

		struct GameAction<E_ACTION_STOP_MODE_COUNTDOWN>;

		struct StopModeCountdownAction;

		struct GameAction<E_ACTION_START_PLAYING_MODE>;

		struct StartPlayingModeAction;

		struct GameAction<E_ACTION_FINISHED_MODE>;

		struct FinishedModeAction;

		struct GameAction<E_ACTION_SHOW_MODE_RESULTS>;

		struct ShowModeResultsAction;

		struct GameAction<E_ACTION_STOP_MODE>;

		struct StopModeAction;

		struct GameAction<E_ACTION_SET_BOOST>;

		struct SetBoostAction;

		struct GameAction<E_ACTION_SET_PLAYER_CAR_DRIVER>;

		struct SetPlayerCarDriverAction;

		struct GameAction<E_ACTION_IMPACT_TIME_END>;

		struct ImpactTimeEndAction;

		struct GameAction<E_ACTION_SET_IN_MODE_START_REGION>;

		struct SetInModeStartRegionAction;

		struct GameAction<E_ACTION_SET_COUNTDOWN>;

		struct SetCountdownAction;

		struct GameAction<E_ACTION_PLAYER_REACHED_ROAD_RAGE_TARGET>;

		struct PlayerReachedRoadRageTarget;

		struct GameAction<E_ACTION_RACE_CAR_REACHED_CHECKPOINT>;

		struct RaceCarReachedCheckpointAction;

		struct GameAction<E_ACTION_RACE_CAR_REACHED_FINISH>;

		struct RaceCarReachedFinishAction;

		struct GameAction<E_ACTION_PLAYER_REACHED_PENULTIMATE_CHECKPOINT>;

		struct PlayerReachedPenultimateCheckpointAction;

		struct GameAction<E_ACTION_TROPHY_UNLOCK>;

		struct TrophyUnlockAction;

		struct GameAction<E_ACTION_ROAD_RAGE_PLAYER_DAMAGE>;

		struct RoadRagePlayerDamageAction;

		struct GameAction<E_ACTION_TRAITOROUS_TAKEDOWN>;

		struct TraitorousTakedownAction;

		struct GameAction<E_ACTION_PLAYER_ELIMINATED>;

		struct PlayerEliminatedAction;

		struct GameAction<E_ACTION_SET_WAYPOINT_DISTANCES_TO_FINISH>;

		struct SetWayPointDistancesToFinishAction;

		struct GameAction<E_ACTION_SHOWTIME_MODE_SWITCH>;

		struct ShowtimeModeSwitchAction;

		struct GameAction<E_ACTION_WORLD_STUNT_PERFORMED>;

		struct GameAction<E_ACTION_POWER_PARK_RESULT>;

		struct GameAction<E_ACTION_GAME_TRAINING_REQUEST>;

		struct RequestGameTrainingAction;

		struct GameAction<E_ACTION_UPDATE_ROAD_RAGE_MADNESS>;

		struct UpdateRoadRageMadnessAction;

		struct GameAction<E_ACTION_SHUTDOWN>;

		struct ShutdownAction;

		struct GameAction<E_ACTION_SOUND_TRIGGER>;

		struct GameAction<E_ACTION_ON_STUNT_ELEMENT_COMPLETE>;

		struct OnStuntElementCompleteAction;

		struct GameAction<E_ACTION_CAR_SELECTION_CHANGED>;

		struct CarSelectionChangedAction;

		struct GameAction<E_ACTION_REMOTE_PLAYER_DISCONNECTED>;

		struct RemotePlayerDisconnectedAction;

		struct GameAction<E_ACTION_ROAD_RULES_CHALLENGE_SCORES>;

		struct RoadRulesChallengeScoresAction;

		struct GameAction<E_ACTION_ROAD_RULES_PERSONAL_BEST>;

		struct RoadRulesPersonalBestAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_ROAD_RAGE_TIME_EXTENSION>;

		struct HUDMessageRoadRageTimeExtensionAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_TIME_UP>;

		struct HUDMessageTimeUpAction;

		struct GameAction<E_ACTION_ROAD_RULES_ENTER_ROAD>;

		struct RoadRulesEnterRoadAction;

		struct GameAction<E_ACTION_ROAD_RULES_BATCH_QUERY>;

		struct GameAction<E_ACTION_UPCOMING_ROAD_CHANGE>;

		struct GameAction<E_ACTION_ROAD_RULES_LEAVE_ROAD>;

		struct RoadRulesLeaveRoadAction;

		struct GameAction<E_ACTION_ROAD_RULES_START_RULE>;

		struct RoadRulesStartRuleAction;

		struct GameAction<E_ACTION_ROAD_RULES_END_RULE>;

		struct RoadRulesEndRuleAction;

		struct GameAction<E_ACTION_ROAD_RULES_UPDATE>;

		struct RoadRulesUpdateAction;

		struct GameAction<E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE>;

		struct RoadRulesUpdateTargetScoreAction;

		struct GameAction<E_ACTION_ROAD_RULES_NEW_HIGH_SCORE>;

		struct RoadRulesNewHighScoreAction;

		struct GameAction<E_ACTION_ROAD_RULES_ACTIVE_RULE_CHANGE>;

		struct RoadRulesActiveRuleChangeAction;

		struct GameAction<E_ACTION_ROAD_RULES_TIME_WARNING>;

		struct RoadRulesTimeWarningAction;

		struct GameAction<E_ACTION_ROAD_RULES_ROAD_SCORE>;

		struct RoadRulesRoadScoreAction;

		struct GameAction<E_ACTION_ROAD_RULES_NEW_RULERS>;

		struct RoadRulesNewRulersAction;

		struct GameAction<E_ACTION_ROAD_RULES_MODE_SWITCH>;

		struct RoadRulesModeSwitchAction;

		struct GameAction<E_ACTION_PLAYER_IN_SHORTCUT>;

		struct PlayerInShortcutAction;

		struct GameAction<E_ACTION_ONLINE_GAME_RESULT>;

		struct OnlineGameResults;

		struct GameAction<E_ACTION_ONLINE_ROUND_RESULT>;

		struct OnlineRoundResults;

		struct GameAction<E_ACTION_SWITCH_BURNING_HOME_RUN_RUNNER>;

		struct SwitchBurningHomeRunRunnerAction;

		struct GameAction<E_ACTION_BURNOUT_SKILLZ>;

		struct BurnoutSkillzAction;

		struct GameAction<E_ACTION_ROAD_RULES_SKILLZ>;

		struct GameAction<E_ACTION_MODE_TIME_TIMEOUT>;

		struct ModeTimeOutTimerEvent;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE>;

		struct FreeburnChallengeAction;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_END_NOT_ACTIVE>;

		struct FburnChallengeEndNotActiveAction;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_UPDATE>;

		struct FreeburnChallengeUpdateAction;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_COMPLETION_STATUS>;

		struct FburnChallengeStatusAction;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_EVERY_PLAYER_COMPLETION_STATUS>;

		struct FburnChallengeEveryPlayerStatusAction;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateAction;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_SUCCESS>;

		struct FburnChallengeSuccessAction;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_SHOW_SELECTOR>;

		struct FburnChallengeShowSelectorAction;

		struct GameAction<E_ACTION_ACTIVE_FREEBURN_CHALLENGE>;

		struct ActiveFburnChallengeAction;

		struct GameAction<E_ACTION_REQUEST_AUTOSAVE>;

		struct RequestAutoSaveAction;

		struct GameAction<E_ACTION_ALLOW_CAR_TO_JOIN_ROAD_RAGE>;

		struct AllowCarToJoinRoadRageAction;

		struct GameEvent<E_EVENT_RACE_CAR_NEEDS_HIDING>;

		struct RaceCarNeedsHidingEvent;

		struct GameEvent<E_EVENT_COMPLETED_STUNT>;

		struct CompletedStuntEvent;

		struct GameEvent<E_EVENT_INPROGRESS_STUNT>;

		struct InProgressStuntEvent;

		struct GameEvent<E_EVENT_START_NETWORK_GAME>;

		struct StartNetworkGameEvent;

		struct GameEvent<E_EVENT_START_NETWORK_ROUND>;

		struct StartNetworkRoundEvent;

		struct GameEvent<E_EVENT_BUDDY_REMOVED>;

		struct GameEvent<E_EVENT_TRIGGER_CRASH_BREAKER>;

		struct TriggerCrashBreakerEvent;

		struct GameEvent<E_EVENT_PICKUP>;

		struct PickupEvent;

		struct GameEvent<E_EVENT_VEHICLE_LEAPT>;

		struct VehicleLeaptEvent;

		struct GameEvent<E_EVENT_PLAYER_FINISHED_MODE>;

		struct PlayerFinishedModeEvent;

		struct GameEvent<E_EVENT_NEAR_MISS>;

		struct NearMissEvent;

		struct GameEvent<E_EVENT_NEAR_MISS_CHAIN_COMPLETED>;

		struct NearMissChainCompleteEvent;

		struct GameEvent<E_EVENT_TRAFFIC_CHECKING_CHAIN>;

		struct TrafficCheckingChainEvent;

		struct GameEvent<E_EVENT_CRASH_COMBO_ITEM>;

		struct CrashComboItemEvent;

		struct GameEvent<E_EVENT_DRIFTING>;

		struct DriftingEvent;

		struct GameEvent<E_EVENT_IN_AIR>;

		struct InAirEvent;

		struct GameEvent<E_EVENT_LANDMARK_ROUTE_REQUEST>;

		struct GameEvent<E_EVENT_ONCOMING>;

		struct OncomingEvent;

		struct GameEvent<E_EVENT_ONCOMING_COMPLETED>;

		struct OncomingCompletedEvent;

		struct GameEvent<E_EVENT_ROAD_RULE_ROAD_SCORE_REQUEST>;

		struct GameEvent<E_EVENT_ONLINE_PLAYER_FINALISED>;

		struct OnlinePlayerFinalisedEvent;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_PB_RECV>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_UPLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_DOWNLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_CONNECT_INFO>;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_ACTION_SUCCESS>;

		struct FreeburnChallengeActionSuccessEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_RESET>;

		struct FreeburnChallengeResetEvent;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_RECEIVED>;

		struct OnlineImageReceivedEvent;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_SEND_ABORTED>;

		struct OnlineImageCaptureAbortedEvent;

		struct GameEvent<E_EVENT_BURNING_HOME_RUN_SWITCHED_RUNNER>;

		struct BurningHomeRunSwitchRunnerEvent;

		struct GameEvent<E_EVENT_ONLINE_NEW_BURNOUT_SKILLZ>;

		struct NewRemoteBurnoutSkillzEvent;

		struct GameEvent<E_EVENT_POWER_PARK_RESULT>;

		struct PowerParkResultEvent;

		struct GameEvent<E_EVENT_BOOST_TIME_COMPLETE>;

		struct BoostTimeCompleteEvent;

		struct GameEvent<E_EVENT_ONLINE_NEW_HOST>;

		struct OnlineNewHostEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS>;

		struct FburnChallengeSuccessEvent;

		struct GameEvent<E_EVENT_ACTIVE_FREEBURN_CHALLENGE>;

		struct ActiveFburnChallengeEvent;

		struct GameEvent<E_EVENT_MODE_MANAGER_ROUTE_INFO>;

		struct ModeManagerRouteInfoEvent;

		struct BaseGameActionQueue<13312>;

		struct GameStateToControllerInterface;

		struct ControllerToGameStateInterface;

		struct GameStateToGuiInterface;

		struct PostWorldInputBuffer;

		struct BaseGameActionQueue<256>;

		struct GameAction<E_ACTION_CHECK_FOR_LOADING_SCREEN>;

		struct GameAction<E_ACTION_STOP_MODE_OFFLINE>;

		struct GameAction<E_ACTION_ROAD_RULES_OVERWRITE_SERVER_RECORD>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct WorldStuntAction;

		struct PowerParkResultAction;

		struct CompletedFburnChallengesData;

		struct FlybyData;

		struct CarScoreData;

		struct ScoringOutputInterface;

		struct OnlineScoringOutputInterface;

		struct RaceCarRaceDistanceInterface;

		struct InterestInterface;

		struct ControllerInput;

		struct OutputBuffer;

		struct PreWorldInputBuffer;

		struct OnlineRoadRulesPersonalBestRecvEvent;

		struct OnlineRoadRulesUploadedEvent;

		struct OnlineRoadRulesDownloadedEvent;

		struct OnlineRoadRulesConnectInfoEvent;

		struct RoadRulesScoreRequestEvent;

		struct BuddyRemovedEvent;

		struct RoadRulesBatchQueryAction;

		struct PlayerInfo;

		struct LandmarkVariableInfo;

		struct GameEventQueue;

		struct GameAction<E_ACTION_GUI_UPDATE_PLAYER_CAR_ID>;

		struct GuiUpdatePlayerCarIDAction;

		struct GameAction<E_ACTION_GUI_CAR_UNLOCK>;

		struct CarUnlockAction;

		struct GameAction<E_ACTION_RESET_PLAYER_CAR>;

		struct GameAction<E_ACTION_PROP_SMASH_PROGRESSION>;

		struct PropSmashReportAction;

		struct GameAction<E_ACTION_RESET_PLAYER_CAR_ON_TRACK>;

		struct ResetPlayerCarOnTrackAction;

		struct GameAction<E_ACTION_SET_PLAYER_OPPONENTS>;

		struct SetPlayerOpponentsAction;

		struct GameAction<E_ACTION_SETUP_NETWORK_CAR>;

		struct SetupNetworkCarAction;

		struct GameAction<E_ACTION_COMPLETED_STUNT>;

		struct CompletedStuntAction;

		struct GameAction<E_ACTION_INPROGRESS_STUNT>;

		struct InProgressStuntAction;

		struct GameAction<E_ACTION_PLAYER_CRASH_ENDING_SOON>;

		struct PlayerCrashEndingSoonAction;

		struct GameAction<E_ACTION_PREPARE_FOR_MODE>;

		struct GameAction<E_ACTION_SET_TRAFFIC_SCALE_BASED_ON_RANK>;

		struct SetTrafficScaleBasedOnRankAction;

		struct GameAction<E_ACTION_FINISHED_MODE>;

		struct FinishedModeAction;

		struct GameAction<E_ACTION_SHOW_MODE_RESULTS>;

		struct ShowModeResultsAction;

		struct GameAction<E_ACTION_FINISHED_MODE_RESULTS>;

		struct FinishedModeResultsAction;

		struct GameAction<E_ACTION_UPDATE_CAR_STATS>;

		struct SendCarStatsAction;

		struct GameAction<E_ACTION_UPDATE_PLAYER_MEDALS>;

		struct SendPlayerMedalAction;

		struct GameAction<E_ACTION_EVENT_AT_JUNCTION_AVAILABLE>;

		struct SendJunctionPlayerIsAtAction;

		struct GameAction<E_ACTION_ALL_EVENTS_DISCOVERED>;

		struct AllEventsDiscoveredAction;

		struct GameAction<E_ACTION_ALL_EVENTS_OF_TYPE_DISCOVERED>;

		struct AllEventsDiscoveredOfTypeAction;

		struct GameAction<E_ACTION_ALL_EVENT_TYPE_WON>;

		struct AllEventTypeWonAction;

		struct GameAction<E_ACTION_SET_TAKEDOWN_CAMERA_STATE>;

		struct SetTakedownCameraAction;

		struct GameAction<E_ACTION_SET_PLAYER_CAR_DRIVER>;

		struct SetPlayerCarDriverAction;

		struct GameAction<E_ACTION_IMPACT_TIME_START>;

		struct ImpactTimeStartAction;

		struct GameAction<E_ACTION_SET_IN_MODE_START_REGION>;

		struct SetInModeStartRegionAction;

		struct GameAction<E_ACTION_SET_UP_ALL_DRIVE_THRUS>;

		struct GameAction<E_ACTION_CLOSE_DRIVE_THRU>;

		struct CloseDriveThruAction;

		struct GameAction<E_ACTION_REQUEST_ROUTE_INFO>;

		struct RequestRouteInfoAction;

		struct GameAction<E_ACTION_SET_LANDMARK_RACES>;

		struct SetLandmarkRacesAction;

		struct GameAction<E_ACTION_SHOW_HUD_MESSAGE>;

		struct ShowHudMessageAction;

		struct GameAction<E_ACTION_SHOW_POPUP>;

		struct ShowPopupAction;

		struct GameAction<E_ACTION_PAUSE_SIMULATION>;

		struct PauseSimulationAction;

		struct GameAction<E_ACTION_UNPAUSE_SIMULATION>;

		struct UnpauseSimulationAction;

		struct GameAction<E_ACTION_PAUSE_ONLINE>;

		struct PauseOnlineAction;

		struct GameAction<E_ACTION_PROMPT_DO_INVITE>;

		struct PromptDoInviteAction;

		struct GameAction<E_ACTION_START_PREPARE_FOR_INVITE>;

		struct StartPrepareForInviteAction;

		struct GameAction<E_ACTION_UPDATE_PREPARE_FOR_INVITE>;

		struct UpdatePrepareForInviteAction;

		struct GameAction<E_ACTION_PREPARED_FOR_INVITE>;

		struct PreparedForInviteAction;

		struct GameAction<E_ACTION_PERFORM_INVITE>;

		struct PerformInviteAction;

		struct GameAction<E_ACTION_INVITE_COMPLETE>;

		struct InviteCompleteAction;

		struct GameAction<E_ACTION_DRIVE_THRU_BODY_SHOP>;

		struct BodyShopDriveThruAction;

		struct GameAction<E_ACTION_DRIVE_THRU_PAINT_SHOP>;

		struct PaintShopDriveThruAction;

		struct GameAction<E_ACTION_DRIVE_THRU_GAS_STATION>;

		struct GasStationDriveThruAction;

		struct GameAction<E_ACTION_DRIVE_THRU_JUNK_YARD>;

		struct JunkYardDriveThruAction;

		struct GameAction<E_ACTION_DRIVE_THRU_JUNK_YARD_ON_GAME_START>;

		struct JunkYardDriveThruOnGameStartAction;

		struct GameAction<E_ACTION_ON_TRAFFIC_CHECKING>;

		struct TrafficCheckingAction;

		struct GameAction<E_ACTION_ON_TRAFFIC_CHECKING_CHAIN>;

		struct TrafficCheckingChainAction;

		struct GameAction<E_ACTION_TRIGGER>;

		struct TriggerAction;

		struct GameAction<E_ACTION_KILLZONE>;

		struct KillzoneAction;

		struct GameAction<E_ACTION_PLAYER_INVULNERABLE>;

		struct PlayerInvulnerableAction;

		struct GameAction<E_ACTION_DRIVE_THRU_CLOSED>;

		struct ClosedDriveThruAction;

		struct GameAction<E_ACTION_DRIVE_THRU_STOP_PRESENTATION>;

		struct StopDriveThruPresentationAction;

		struct GameAction<E_ACTION_DRIVE_THRU_DISCOVERED>;

		struct DriveThruDiscoveredAction;

		struct GameAction<E_ACTION_ALL_DRIVE_THRUS_DISCOVERED>;

		struct AllDriveThrusDiscoveredAction;

		struct GameAction<E_ACTION_RESET_CRASHING>;

		struct ResetCrashingAction;

		struct GameAction<E_ACTION_RESET_RACE_CAR_CRASHING>;

		struct ResetRaceCarCrashingAction;

		struct GameAction<E_ACTION_WORLD_REGION_CHANGE>;

		struct WorldRegionChangeAction;

		struct GameAction<E_ACTION_TRAFFIC_TYPE_REQUEST>;

		struct TrafficTypeRequestAction;

		struct GameAction<E_ACTION_NEAR_MISS>;

		struct NearMissAction;

		struct GameAction<E_ACTION_DRIFTING>;

		struct DriftingAction;

		struct GameAction<E_ACTION_SPINNING>;

		struct SpinningAction;

		struct GameAction<E_ACTION_IN_AIR>;

		struct InAirAction;

		struct GameAction<E_ACTION_ONCOMING>;

		struct OncomingAction;

		struct GameAction<E_ACTION_TAILGATING>;

		struct TailgatingAction;

		struct GameAction<E_ACTION_TROPHY_UNLOCK>;

		struct TrophyUnlockAction;

		struct GameAction<E_ACTION_AFTERTOUCH>;

		struct AftertouchAction;

		struct GameAction<E_ACTION_EVENT_STATE_RESPONSE>;

		struct EventStateResponseAction;

		struct GameAction<E_ACTION_GAME_STATS_RESPONSE>;

		struct GameStatsResponseAction;

		struct GameAction<E_ACTION_RANK_INFO_RESPONSE>;

		struct RankInfoResponseAction;

		struct GameAction<E_ACTION_PLAYER_INFO_RESPONSE>;

		struct PlayerInfoResponseAction;

		struct GameAction<E_ACTION_UNLOCKED_LIVERY_RESPONSE>;

		struct UnlockedLiveryResponseAction;

		struct GameAction<E_ACTION_CAR_SELECTION_RESPONSE>;

		struct CarSelectionResponseAction;

		struct GameAction<E_ACTION_CAR_SELECTION_REQUEST_STREAMING>;

		struct CarSelectionRequestStreamingAction;

		struct GameAction<E_ACTION_CAR_SELECT_TRANSITION_IN>;

		struct CarSelectTransitionInAction;

		struct GameAction<E_ACTION_CAR_SELECT_WAITING_FOR_AUDIO>;

		struct CarSelectWaitingForAudioAction;

		struct GameAction<E_ACTION_CAR_SELECT_READY>;

		struct CarSelectReadyAction;

		struct GameAction<E_ACTION_CAR_SELECT_MODIFICATION_SCREEN>;

		struct CarSelectModificationScreen;

		struct GameAction<E_ACTION_CAR_SELECT_ONLINE_TIME_LEFT>;

		struct CarSelectOnlineTimeLeftAction;

		struct GameAction<E_ACTION_CAR_SELECT_ONLINE_END>;

		struct CarSelectOnlineEndAction;

		struct GameAction<E_ACTION_CAR_SELECT_ONLINE_SELECT_CAR>;

		struct CarSelectOnlineSelectCarAction;

		struct GameAction<E_ACTION_CAR_SELECT_EXIT>;

		struct CarSelectExitAction;

		struct GameAction<E_ACTION_CAR_SELECT_ABORT>;

		struct CarSelectAbortAction;

		struct GameAction<E_ACTION_CAR_SELECT_CHANGE_COLOUR>;

		struct CarSelectChangeColourAction;

		struct GameAction<E_ACTION_CAR_SELECT_ONLINE_CAR_IS_SHOWABLE>;

		struct CarSelectOnlineCarIsShowable;

		struct GameAction<E_ACTION_PLAYER_CAR_COLOUR_RESPONSE>;

		struct PlayerCarColourResponseAction;

		struct GameAction<E_ACTION_LANDMARK_VARIABLE_INFO_RESPONSE>;

		struct LandmarkInfoResponseAction;

		struct GameAction<E_ACTION_REGION_FROM_POSITION_RESPONSE>;

		struct RegionFromPositionResponseAction;

		struct GameAction<E_ACTION_UPDATE_GUI_ROUTE>;

		struct UpdateGuiRouteAction;

		struct GameAction<E_ACTION_ALL_RIVALRY_DATA_RESPONSE>;

		struct GameAction<E_ACTION_ONE_RIVALRY_DATA_RESPONSE>;

		struct RivalryOneInDepthAction;

		struct GameAction<E_ACTION_SHOW_SATNAV>;

		struct ShowSatNavAction;

		struct GameAction<E_ACTION_PROGRESSION_PROFILE_DATA>;

		struct ProgressionProfileDataAction;

		struct GameAction<E_ACTION_LOAD_PROFILE>;

		struct LoadProfileAction;

		struct GameAction<E_ACTION_REMOVE_ALL_RIVALS>;

		struct RemoveAllRivalsAction;

		struct GameAction<E_ACTION_ADD_RIVAL>;

		struct AddRivalAction;

		struct GameAction<E_ACTION_ONE_HUNDRED_PERCENT_COMPLETE>;

		struct OneHundredPercentCompleteAction;

		struct GameAction<E_ACTION_ACHIEVEMENTS_EARNED>;

		struct AchievementsEarnedAction;

		struct GameAction<E_ACTION_ALL_RIVALS_SHUTDOWN>;

		struct AllRivalsShutDownAction;

		struct GameAction<E_ACTION_RIVAL_STATE_CHANGED>;

		struct RivalStateChangeAction;

		struct GameAction<E_ACTION_PAYBACK_MUGSHOT>;

		struct PaybackMugshotAction;

		struct GameAction<E_ACTION_ABORT_MUGSHOT_CAPTURE>;

		struct AbortMugshotCaptureAction;

		struct GameAction<E_ACTION_PAYBACK_ACTIVATED>;

		struct PaybackActivatedAction;

		struct GameAction<E_ACTION_PAYBACK_OVER>;

		struct PaybackOverAction;

		struct GameAction<E_ACTION_PAYBACK_SUCCEEDED>;

		struct PaybackSucceededAction;

		struct GameAction<E_ACTION_SET_LOADING_STATE>;

		struct SetLoadingStateAction;

		struct GameAction<E_ACTION_WAIT_FOR_STREAMING>;

		struct WaitForStreamingAction;

		struct GameAction<E_ACTION_BLUE_TEAM_IS_ESCAPING>;

		struct BlueTeamIsEscapingAction;

		struct GameAction<E_ACTION_BLUE_TEAM_IS_BEHIND_YOU>;

		struct BlueTeamIsBehindYouAction;

		struct GameAction<E_ACTION_LEADER_REACHED_BOUNDARY>;

		struct LeaderReachedBoundaryAction;

		struct GameAction<E_ACTION_PLAYER_RESET_ON_TRACK>;

		struct PlayerResetOnTrackAction;

		struct GameAction<E_ACTION_TRIGGER_CRASH_BREAKER>;

		struct TriggerCrashBreakerAction;

		struct GameAction<E_ACTION_CANCEL_CRASH_BREAKER>;

		struct CancelCrashBreakerAction;

		struct GameAction<E_ACTION_TOGGLE_SHOWTIME_BEHAVIOUR>;

		struct ToggleShowtimeBehaviourAction;

		struct GameAction<E_ACTION_VEHICLE_LEAPT>;

		struct VehicleLeaptAction;

		struct GameAction<E_ACTION_VEHICLE_HIT>;

		struct VehicleHitAction;

		struct GameAction<E_ACTION_ENTER_NEW_ROAD>;

		struct EnterNewRoadAction;

		struct GameAction<E_ACTION_SHOWTIME_UPDATE>;

		struct ShowtimeUpdateAction;

		struct GameAction<E_ACTION_SHOWTIME_MODE_SWITCH>;

		struct ShowtimeModeSwitchAction;

		struct GameAction<E_ACTION_JUST_BOUNCED>;

		struct JustBouncedAction;

		struct GameAction<E_ACTION_JUST_APPLIED_EXTRA_SPIN>;

		struct JustAppliedExtraSpinAction;

		struct GameAction<E_ACTION_WORLD_STUNT_PERFORMED>;

		struct GameAction<E_ACTION_OVERHEAD_SIGN_HIT>;

		struct HitOverheadSignAction;

		struct GameAction<E_ACTION_POWER_PARK_RESULT>;

		struct GameAction<E_ACTION_GAME_TRAINING>;

		struct GameTrainingAction;

		struct GameAction<E_ACTION_GAME_TRAINING_REQUEST>;

		struct RequestGameTrainingAction;

		struct GameAction<E_ACTION_GAME_TRAINING_PAUSE>;

		struct GameTrainingPauseAction;

		struct GameAction<E_ACTION_GAME_TRAINING_UNPAUSE>;

		struct GameTrainingUnpauseAction;

		struct GameAction<E_ACTION_SHUTDOWN>;

		struct ShutdownAction;

		struct GameAction<E_ACTION_SHUTDOWN_FINISHED>;

		struct ShutdownFinishedAction;

		struct GameAction<E_ACTION_AWARD_SEQUENCE_START>;

		struct AwardSequenceStartAction;

		struct GameAction<E_ACTION_AWARD_SEQUENCE_END>;

		struct AwardSequenceEndAction;

		struct GameAction<E_ACTION_CRASH_COMBO>;

		struct CrashComboAction;

		struct GameAction<E_ACTION_SET_SIXAXIS_STEERING>;

		struct SetSixaxisSteeringAction;

		struct GameAction<E_ACTION_SOUND_TRIGGER>;

		struct GameAction<E_ACTION_DAMAGE_CRITICAL>;

		struct DamageCriticalMessageAction;

		struct GameAction<E_ACTION_PLAYER_HIT_RIVAL>;

		struct PlayerHitRivalAction;

		struct GameAction<E_ACTION_RIVAL_HIT_PLAYER>;

		struct RivalHitPlayerAction;

		struct GameAction<E_ACTION_NEW_CAR_UNLOCKED>;

		struct GameAction<E_ACTION_CAR_UNLOCK_END>;

		struct CarUnlockEndAction;

		struct GameAction<E_ACTION_ON_JUMP_START>;

		struct OnJumpStartAction;

		struct GameAction<E_ACTION_SHOW_JUMP_NAME>;

		struct ShowJumpNameAction;

		struct GameAction<E_ACTION_ON_STUNT_ELEMENT_COMPLETE>;

		struct OnStuntElementCompleteAction;

		struct GameAction<E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_FOR_COUNTY>;

		struct OnAllStuntElementsCompleteForCountyAction;

		struct GameAction<E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_BY_TYPE>;

		struct OnAllStuntElementsCompleteByTypeAction;

		struct GameAction<E_ACTION_STUNT_ELEMENT_BOOST>;

		struct OnStuntElementBoostAction;

		struct GameAction<E_ACTION_CAR_SELECTION_CHANGED>;

		struct CarSelectionChangedAction;

		struct GameAction<E_ACTION_CAR_SELECTION_CHANGED_DROPIN>;

		struct CarSelectionChangedDropInAction;

		struct GameAction<E_ACTION_CAR_SELECTION_DROPIN_COMPLETE>;

		struct CarSelectionDropInCompleteAction;

		struct GameAction<E_ACTION_CAR_SELECTION_CHANGED_ONLINE>;

		struct CarSelectionChangedOnlineAction;

		struct GameAction<E_ACTION_ALLOW_BOOST_EARNING>;

		struct AllowBoostEarningAction;

		struct GameAction<E_ACTION_STOP_BOOSTING>;

		struct StopBoostingAction;

		struct GameAction<E_ACTION_ON_PLAYER_TAKEDOWN>;

		struct OnPlayerTakedownAction;

		struct GameAction<E_ACTION_REMOTE_PLAYER_DISCONNECTED>;

		struct RemotePlayerDisconnectedAction;

		struct GameAction<E_ACTION_NOTIFY_DIRECTOR_LOCAL_PLAYER_DISCONNECTED>;

		struct NotifyDirectorLocalPlayerDisconnectedAction;

		struct GameAction<E_ACTION_ONLINE_PLAYER_ADDED>;

		struct OnlinePlayerAddedAction;

		struct GameAction<E_ACTION_ONLINE_PLAYER_REMOVED>;

		struct OnlinePlayerRemovedAction;

		struct GameAction<E_ACTION_SEND_TELEMETRY>;

		struct TelemetryAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_TOOK_LEAD>;

		struct HUDMessageTookLeadAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_TOOK_LAST>;

		struct HUDMessageTookLastAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_DIST_TO_FINISH>;

		struct HUDMessageDistanceToFinishAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_LEADING>;

		struct HUDMessageLeadingAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_X_FINISHES>;

		struct HUDMessageXFinishesAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_X_REACHES_CHECKPOINT>;

		struct HUDMessageXReachesCheckpointAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_PLAYER_REACHES_CHECKPOINT>;

		struct HUDMessagePlayerReachesCheckpointAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_X_CRASHES>;

		struct HUDMessageXCrashesAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_STUNT_PERFORMED>;

		struct HUDMessageStuntPerformed;

		struct GameAction<E_ACTION_HUD_MESSAGE_COMBO_PERFORMED>;

		struct HUDMessageComboPerformed;

		struct GameAction<E_ACTION_HUD_MESSAGE_STUNT_TIME_UP>;

		struct HUDMessageStuntTimeUp;

		struct GameAction<E_ACTION_HUD_MESSAGE_BHR_CHECKPOINT>;

		struct HUDMessageBHRCheckpointAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_BHR_RUNNER_CRASHED>;

		struct HUDMessageBHRRunnerCrashed;

		struct GameAction<E_ACTION_HUD_MESSAGE_ONLINE_TEAM_CHANGE>;

		struct HUDMessageOnlineTeamChangeAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_RIVAL_FIRST_HIT>;

		struct HUDMessageFirstHitOnRivalAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_RIVAL_IS_A_RIVAL>;

		struct HUDMessageRivalIsARivalAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_RIVAL_IS_A_TARGET>;

		struct HUDMessageRivalIsATargetAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_RIVAL_IS_WRECKED>;

		struct HUDMessageRivalIsWreckedAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_PLAYER_CAN_SKIP_CRASH>;

		struct HUDMessagePlayerCanSkipCrashAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_CANT_PAINT>;

		struct HUDMessageCantPaintAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_MUST_FIX>;

		struct HUDMessageMustFixCarAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_JUMP_FAILED>;

		struct HUDMessageJumpFailedAction;

		struct GameAction<E_ACTION_SHOWTIME_INTRO_START>;

		struct ShowtimeIntro;

		struct GameAction<E_ACTION_ROAD_RULES_BATCH_QUERY>;

		struct GameAction<E_ACTION_WRONG_CAR_FOR_CHALLENGE>;

		struct WrongCarForChallengeAction;

		struct GameAction<E_ACTION_NETWORK_COLLECTABLE>;

		struct OnlineNetworkPlayerCollectableAction;

		struct GameAction<E_ACTION_IMAGE_GALLERY_RENDER_IMAGE>;

		struct ImageGalleryRenderImageAction;

		struct GameAction<E_ACTION_IMAGE_GALLERY_IMAGE_INFO>;

		struct ImageGalleryImageInfoAction;

		struct GameAction<E_ACTION_IMAGE_GALLERY_COUNT_ACTION>;

		struct ImageGalleryCountAction;

		struct GameAction<E_ACTION_IMAGE_GALLERY_DATA_ACTION>;

		struct ImageGalleryDataAction;

		struct GameAction<E_ACTION_SAVE_IMAGE_AND_AUTOSAVE>;

		struct SaveImageAndAutoSaveAction;

		struct GameAction<E_ACTION_LOAD_IMAGES>;

		struct LoadImageFilesAction;

		struct GameAction<E_ACTION_DXT_DECODE_IMAGE>;

		struct DXTDecodeImageAction;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_UPDATE>;

		struct FreeburnChallengeUpdateAction;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateAction;

		struct GameAction<E_ACTION_REQUEST_AUTOSAVE>;

		struct RequestAutoSaveAction;

		struct GameAction<E_ACTION_NETWORK_CAUGHT_FEVER>;

		struct CaughtFeverAction;

		struct GameEvent<E_EVENT_SETUP_PLAYER_CAR>;

		struct SetupPlayerCarEvent;

		struct GameEvent<E_EVENT_RECORD_PROP_HIT>;

		struct RecordPropHitEvent;

		struct GameEvent<E_EVENT_OVERHEAD_SIGN_HIT>;

		struct HitOverheadSignEvent;

		struct GameEvent<E_EVENT_GAME_TRAINING_REQUEST>;

		struct RequestGameTrainingEvent;

		struct GameEvent<E_EVENT_TELEPORT_PLAYER_CAR>;

		struct TeleportPlayerCarEvent;

		struct GameEvent<E_EVENT_COMPLETED_STUNT>;

		struct CompletedStuntEvent;

		struct GameEvent<E_EVENT_INPROGRESS_STUNT>;

		struct InProgressStuntEvent;

		struct GameEvent<E_EVENT_CHANGE_PLAYER_CAR>;

		struct ChangePlayerCarEvent;

		struct GameEvent<E_EVENT_SELECT_PLAYER_CAR>;

		struct SelectPlayerCarEvent;

		struct GameEvent<E_EVENT_CHANGE_PLAYER_CAR_COLOUR>;

		struct ChangePlayerCarColourEvent;

		struct GameEvent<E_EVENT_PLAYER_CAR_COLOUR_REQUEST>;

		struct PlayerCarColourRequestEvent;

		struct GameEvent<E_EVENT_CHANGE_NETWORK_CAR>;

		struct ChangeNetworkCarEvent;

		struct GameEvent<E_EVENT_REQUEST_SPECIFIC_PRESET_RACES>;

		struct RequestSpecificPreSetRaces;

		struct GameEvent<E_EVENT_STREAMING_COMPLETE>;

		struct GameEvent<E_EVENT_CONTROLLER_DISCONNECTED>;

		struct ControllerDisconnectedEvent;

		struct GameEvent<E_EVENT_CONFIG_CONTROLLER>;

		struct ConfigControllerEvent;

		struct GameEvent<E_EVENT_START_NETWORK_GAME>;

		struct StartNetworkGameEvent;

		struct GameEvent<E_EVENT_START_NETWORK_ROUND>;

		struct StartNetworkRoundEvent;

		struct GameEvent<E_EVENT_BUDDY_REMOVED>;

		struct GameEvent<E_EVENT_INSTANT_FREEBURN>;

		struct InstantFreeburnEvent;

		struct GameEvent<E_EVENT_RACE_CAR_DRIVING_IN_CRASH>;

		struct RaceCarDrivingInCrashEvent;

		struct GameEvent<E_EVENT_TRIGGER_CRASH_BREAKER>;

		struct TriggerCrashBreakerEvent;

		struct GameEvent<E_EVENT_SHOWTIME_BOUNCE_PROMPT>;

		struct ShowtimeBouncePromptEvent;

		struct GameEvent<E_EVENT_CANCEL_CRASH_BREAKER>;

		struct CancelCrashBreakerEvent;

		struct GameEvent<E_EVENT_PICKUP>;

		struct PickupEvent;

		struct GameEvent<E_EVENT_VEHICLE_LEAPT>;

		struct VehicleLeaptEvent;

		struct GameEvent<E_EVENT_ENTER_NEW_ROAD>;

		struct EnterNewRoadEvent;

		struct GameEvent<E_EVENT_AFTERTOUCH>;

		struct AftertouchEvent;

		struct GameEvent<E_EVENT_PLAYER_ACCEPTED_MODE>;

		struct PlayerAcceptedModeEvent;

		struct GameEvent<E_EVENT_VEHICLE_IMPACT>;

		struct VehicleImpactEvent;

		struct GameEvent<E_EVENT_PLAYER_FINISHED_MODE>;

		struct PlayerFinishedModeEvent;

		struct GameEvent<E_EVENT_REQUEST_INVITE>;

		struct RequestInviteEvent;

		struct GameEvent<E_EVENT_UPDATE_PREPARE_FOR_INVITE>;

		struct UpdatePrepareForInviteEvent;

		struct GameEvent<E_EVENT_PREPARED_FOR_INVITE>;

		struct PreparedForInviteEvent;

		struct GameEvent<E_EVENT_PERFORM_INVITE>;

		struct PerformInviteEvent;

		struct GameEvent<E_EVENT_INVITE_COMPLETE>;

		struct InviteCompleteEvent;

		struct GameEvent<E_EVENT_NEAR_MISS>;

		struct NearMissEvent;

		struct GameEvent<E_EVENT_TAILGATING>;

		struct TailgatingEvent;

		struct GameEvent<E_EVENT_TRAFFIC_CHECKING>;

		struct TrafficCheckingEvent;

		struct GameEvent<E_EVENT_TRAFFIC_CHECKING_CHAIN>;

		struct TrafficCheckingChainEvent;

		struct GameEvent<E_EVENT_CRASH_COMBO_ITEM>;

		struct CrashComboItemEvent;

		struct GameEvent<E_EVENT_IN_AIR>;

		struct InAirEvent;

		struct GameEvent<E_EVENT_LANDMARK_ROUTE_REQUEST>;

		struct GameEvent<E_EVENT_REQUEST_CAR_UNLOCK_EVENT>;

		struct RequestCarUnlockEvent;

		struct GameEvent<E_EVENT_UNLOCKED_LIVERY_REQUEST>;

		struct UnlockedLiveryRequest;

		struct GameEvent<E_EVENT_LANDMARK_VARIABLE_INFO_REQUEST>;

		struct LandmarkInfoRequestEvent;

		struct GameEvent<E_CAR_CONTROL_CHANGE_REQUEST>;

		struct CarControlChangeRequestEvent;

		struct GameEvent<E_EVENT_WORLD_REGION_CHANGE>;

		struct WorldRegionChangeEvent;

		struct GameEvent<E_EVENT_CRASHNAV_STATE_CHANGED>;

		struct CrashNavStateChangedEvent;

		struct GameEvent<E_EVENT_CARSELECT_STATE_CHANGED>;

		struct CarSelectStateChangedEvent;

		struct GameEvent<E_EVENT_REGION_FROM_POSITION_REQUEST>;

		struct RegionFromPositionRequestEvent;

		struct GameEvent<E_EVENT_ROAD_RULE_DATA_REQUEST>;

		struct RoadRulesDataRequestEvent;

		struct GameEvent<E_EVENT_ROAD_RULE_ROAD_SCORE_REQUEST>;

		struct GameEvent<E_EVENT_ROAD_RULE_INTERACTION_CHANGE>;

		struct RoadRuleInteractionChangeEvent;

		struct GameEvent<E_EVENT_ROAD_RULE_MODE_SWITCH>;

		struct RoadRuleModeSwitchEvent;

		struct GameEvent<E_EVENT_ONE_RIVALRY_DATA_REQUEST>;

		struct RivalriesOneDataRequestEvent;

		struct GameEvent<E_EVENT_GUI_SWITCHES_ROAD_RULE_STATE>;

		struct GameEvent<E_EVENT_PLAYER_PAUSE_STATE_CHANGED>;

		struct PlayerPauseStateChangedEvent;

		struct GameEvent<E_EVENT_TRAINING_PAUSE_STATE_CHANGED>;

		struct TrainingPauseStateChangedEvent;

		struct GameEvent<E_EVENT_REMOTE_PLAYER_DISCONNECTED>;

		struct RemotePlayerDisconnectedEvent;

		struct GameEvent<E_EVENT_LOCAL_PLAYER_CONNECTED>;

		struct LocalPlayerConnectedEvent;

		struct GameEvent<E_EVENT_ONLINE_GAME_PARAMS_CHANGED>;

		struct OnlineGameParamsChanged;

		struct GameEvent<E_EVENT_ONLINE_GAME_LAUNCHED>;

		struct OnlineGameLaunchedEvent;

		struct GameEvent<E_EVENT_ONLINE_PLAYER_ADDED>;

		struct OnlinePlayerAddedEvent;

		struct GameEvent<E_EVENT_ONLINE_PLAYER_FINALISED>;

		struct OnlinePlayerFinalisedEvent;

		struct GameEvent<E_EVENT_ONLINE_PLAYER_REMOVED>;

		struct OnlinePlayerRemovedEvent;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_PB_RECV>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_UPLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_DOWNLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_CONNECT_INFO>;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SELECTED_REMOTELY>;

		struct FreeburnChallengeSelectedRemotelyEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_TRIGGERED_REMOTELY>;

		struct FreeburnChallengeTriggeredRemotelyEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_ENDED>;

		struct FreeburnChallengeEndedEvent;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_RECEIVED>;

		struct OnlineImageReceivedEvent;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_SEND_ABORTED>;

		struct OnlineImageCaptureAbortedEvent;

		struct GameEvent<E_EVENT_ONLINE_COLLECTABLE>;

		struct OnlineNetworkPlayerCollectableEvent;

		struct GameEvent<E_EVENT_IMAGE_TO_SAVE>;

		struct ImageToSaveEvent;

		struct GameEvent<E_EVENT_IMAGE_FILES_SAVED>;

		struct ImageFilesSavedEvent;

		struct GameEvent<E_EVENT_IMAGE_GALLERY_REQUEST>;

		struct ImageGalleryRequestEvent;

		struct GameEvent<E_EVENT_IMAGE_GALLERY_COUNT_REQUEST>;

		struct ImageGalleryCountRequestEvent;

		struct GameEvent<E_EVENT_IMAGE_GALLERY_DATA_REQUEST>;

		struct ImageGalleryDataRequestEvent;

		struct GameEvent<E_EVENT_IMAGE_FILES_LOADED>;

		struct ImageFilesLoadedEvent;

		struct GameEvent<E_EVENT_BURNING_HOME_RUN_SWITCHED_RUNNER>;

		struct BurningHomeRunSwitchRunnerEvent;

		struct GameEvent<E_EVENT_ONLINE_NEW_BURNOUT_SKILLZ>;

		struct NewRemoteBurnoutSkillzEvent;

		struct GameEvent<E_EVENT_SHOWTIME_UPDATE>;

		struct ShowtimeUpdateEvent;

		struct GameEvent<E_EVENT_SHOWTIME_MODE_SWITCH>;

		struct ShowtimeModeSwitchEvent;

		struct GameEvent<E_EVENT_JUST_BOUNCED>;

		struct JustBouncedEvent;

		struct GameEvent<E_EVENT_POWER_PARK_RESULT>;

		struct PowerParkResultEvent;

		struct GameEvent<E_EVENT_ONLINE_NEW_HOST>;

		struct OnlineNewHostEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SELECTED>;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS>;

		struct FburnChallengeSuccessEvent;

		struct GameEvent<E_EVENT_REMOTE_PLAYER_TRIGGERED_CHECKPOINT>;

		struct RemotePlayerTriggeredCheckpoint;

		struct GameEvent<E_EVENT_MODE_MANAGER_ROUTE_INFO>;

		struct ModeManagerRouteInfoEvent;

		struct BaseGameActionQueue<13312>;

		struct GameStateToControllerInterface;

		struct ControllerToGameStateInterface;

		struct GameStateToGuiInterface;

		struct PostWorldInputBuffer;

		struct BaseGameActionQueue<256>;

		struct GameAction<E_ACTION_STOP_MODE_SPLASH>;

		struct GameAction<E_ACTION_START_GAME_THROUGH_PLAYER_JOIN>;

		struct GameAction<E_ACTION_PAYBACK_LOST>;

		struct GameAction<E_ACTION_PAYBACK_VICTIM_LEFT_GAME>;

		struct GameAction<E_ACTION_IMAGE_GALLERY_LOAD_COMPLETE>;

		struct GameAction<E_ACTION_CAR_SELECT_PAUSED_IN_CAR_SELECT>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
		struct RCEntityActiveRaceCarOutputInterface;

		struct RCEntityGlobalRaceCarOutputInterface;

		struct BoostOutputInfo;

		struct CarsInTheRaceData;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
		struct RCEntityActiveRaceCarOutputInterface;

		struct RCEntityGlobalRaceCarOutputInterface;

		struct BoostOutputInfo;

		struct CarsInTheRaceData;

		struct RCEntityPlayerResetInterface;

		struct InputBuffer_PreScene;

		struct OutputBuffer_PreScene;

		struct OutputBuffer_PrePhysics;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct WorldStuntAction;

		struct PowerParkResultAction;

		struct CompletedFburnChallengesData;

		struct FlybyData;

		struct CarScoreData;

		struct ScoringOutputInterface;

		struct OnlineScoringOutputInterface;

		struct RaceCarRaceDistanceInterface;

		struct InterestInterface;

		struct ControllerInput;

		struct OutputBuffer;

		struct PreWorldInputBuffer;

		struct OnlineRoadRulesPersonalBestRecvEvent;

		struct OnlineRoadRulesUploadedEvent;

		struct OnlineRoadRulesDownloadedEvent;

		struct OnlineRoadRulesConnectInfoEvent;

		struct RoadRulesScoreRequestEvent;

		struct BuddyRemovedEvent;

		struct RoadRulesBatchQueryAction;

		struct PlayerInfo;

		struct GameEventQueue;

		struct GameAction<E_ACTION_GUI_UPDATE_PLAYER_CAR_ID>;

		struct GuiUpdatePlayerCarIDAction;

		struct GameAction<E_ACTION_GUI_CAR_UNLOCK>;

		struct CarUnlockAction;

		struct GameAction<E_ACTION_RESET_PLAYER_CAR>;

		struct GameAction<E_ACTION_COMPLETED_STUNT>;

		struct CompletedStuntAction;

		struct GameAction<E_ACTION_INPROGRESS_STUNT>;

		struct InProgressStuntAction;

		struct GameAction<E_ACTION_PREPARE_FOR_MODE>;

		struct GameAction<E_ACTION_START_MODE_INTRO>;

		struct StartModeIntroAction;

		struct GameAction<E_ACTION_STOP_MODE_INTRO>;

		struct StopModeIntroAction;

		struct GameAction<E_ACTION_MARKED_MAN_LOADED>;

		struct MarkedManLoadedAction;

		struct GameAction<E_ACTION_QUIT_MODE_OFFLINE>;

		struct QuitModeOfflineAction;

		struct GameAction<E_ACTION_QUIT_MODE_ONLINE>;

		struct QuitModeOnlineAction;

		struct GameAction<E_ACTION_FINISH_MODE_ONLINE>;

		struct FinishModeOnlineAction;

		struct GameAction<E_ACTION_START_PLAYING_MODE>;

		struct StartPlayingModeAction;

		struct GameAction<E_ACTION_FINISHED_MODE>;

		struct FinishedModeAction;

		struct GameAction<E_ACTION_SHOW_MODE_RESULTS>;

		struct ShowModeResultsAction;

		struct GameAction<E_ACTION_STOP_MODE>;

		struct StopModeAction;

		struct GameAction<E_ACTION_UPDATE_PLAYER_MEDALS>;

		struct SendPlayerMedalAction;

		struct GameAction<E_ACTION_EVENT_AT_JUNCTION_AVAILABLE>;

		struct SendJunctionPlayerIsAtAction;

		struct GameAction<E_ACTION_ALL_EVENTS_OF_TYPE_DISCOVERED>;

		struct AllEventsDiscoveredOfTypeAction;

		struct GameAction<E_ACTION_ALL_EVENT_TYPE_WON>;

		struct AllEventTypeWonAction;

		struct GameAction<E_ACTION_SET_TAKEDOWN_CAMERA_STATE>;

		struct SetTakedownCameraAction;

		struct GameAction<E_ACTION_SET_IN_MODE_START_REGION>;

		struct SetInModeStartRegionAction;

		struct GameAction<E_ACTION_SET_UP_ALL_DRIVE_THRUS>;

		struct GameAction<E_ACTION_CLOSE_DRIVE_THRU>;

		struct CloseDriveThruAction;

		struct GameAction<E_ACTION_SET_LANDMARK_RACES>;

		struct SetLandmarkRacesAction;

		struct GameAction<E_ACTION_SET_COUNTDOWN>;

		struct SetCountdownAction;

		struct GameAction<E_ACTION_SHOW_POPUP>;

		struct ShowPopupAction;

		struct GameAction<E_ACTION_START_PREPARE_FOR_INVITE>;

		struct StartPrepareForInviteAction;

		struct GameAction<E_ACTION_INVITE_COMPLETE>;

		struct InviteCompleteAction;

		struct GameAction<E_ACTION_DRIVE_THRU_BODY_SHOP>;

		struct BodyShopDriveThruAction;

		struct GameAction<E_ACTION_DRIVE_THRU_JUNK_YARD>;

		struct JunkYardDriveThruAction;

		struct GameAction<E_ACTION_ON_TRAFFIC_CHECKING_CHAIN>;

		struct TrafficCheckingChainAction;

		struct GameAction<E_ACTION_TRIGGER>;

		struct TriggerAction;

		struct GameAction<E_ACTION_DRIVE_THRU_DISCOVERED>;

		struct DriveThruDiscoveredAction;

		struct GameAction<E_ACTION_WORLD_REGION_CHANGE>;

		struct WorldRegionChangeAction;

		struct GameAction<E_ACTION_RACE_CAR_REACHED_CHECKPOINT>;

		struct RaceCarReachedCheckpointAction;

		struct GameAction<E_ACTION_NEAR_MISS>;

		struct NearMissAction;

		struct GameAction<E_ACTION_DRIFTING>;

		struct DriftingAction;

		struct GameAction<E_ACTION_SPINNING>;

		struct SpinningAction;

		struct GameAction<E_ACTION_IN_AIR>;

		struct InAirAction;

		struct GameAction<E_ACTION_ONCOMING>;

		struct OncomingAction;

		struct GameAction<E_ACTION_TAILGATING>;

		struct TailgatingAction;

		struct GameAction<E_ACTION_TROPHY_UNLOCK>;

		struct TrophyUnlockAction;

		struct GameAction<E_ACTION_ROAD_RAGE_PLAYER_DAMAGE>;

		struct RoadRagePlayerDamageAction;

		struct GameAction<E_ACTION_AFTERTOUCH>;

		struct AftertouchAction;

		struct GameAction<E_ACTION_EVENT_STATE_RESPONSE>;

		struct EventStateResponseAction;

		struct GameAction<E_ACTION_GAME_STATS_RESPONSE>;

		struct GameStatsResponseAction;

		struct GameAction<E_ACTION_RANK_INFO_RESPONSE>;

		struct RankInfoResponseAction;

		struct GameAction<E_ACTION_PLAYER_INFO_RESPONSE>;

		struct PlayerInfoResponseAction;

		struct GameAction<E_ACTION_UNLOCKED_LIVERY_RESPONSE>;

		struct UnlockedLiveryResponseAction;

		struct GameAction<E_ACTION_CAR_SELECTION_RESPONSE>;

		struct CarSelectionResponseAction;

		struct GameAction<E_ACTION_CAR_SELECT_TRANSITION_IN>;

		struct CarSelectTransitionInAction;

		struct GameAction<E_ACTION_CAR_SELECT_WAITING_FOR_AUDIO>;

		struct CarSelectWaitingForAudioAction;

		struct GameAction<E_ACTION_CAR_SELECT_READY>;

		struct CarSelectReadyAction;

		struct GameAction<E_ACTION_CAR_SELECT_ONLINE_TIME_LEFT>;

		struct CarSelectOnlineTimeLeftAction;

		struct GameAction<E_ACTION_CAR_SELECT_ABORT>;

		struct CarSelectAbortAction;

		struct GameAction<E_ACTION_PLAYER_CAR_COLOUR_RESPONSE>;

		struct PlayerCarColourResponseAction;

		struct GameAction<E_ACTION_REGION_FROM_POSITION_RESPONSE>;

		struct RegionFromPositionResponseAction;

		struct GameAction<E_ACTION_ALL_RIVALRY_DATA_RESPONSE>;

		struct GameAction<E_ACTION_ONE_RIVALRY_DATA_RESPONSE>;

		struct RivalryOneInDepthAction;

		struct GameAction<E_ACTION_SHOW_SATNAV>;

		struct ShowSatNavAction;

		struct GameAction<E_ACTION_PROGRESSION_PROFILE_DATA>;

		struct ProgressionProfileDataAction;

		struct GameAction<E_ACTION_ONE_HUNDRED_PERCENT_COMPLETE>;

		struct OneHundredPercentCompleteAction;

		struct GameAction<E_ACTION_ACHIEVEMENTS_EARNED>;

		struct AchievementsEarnedAction;

		struct GameAction<E_ACTION_PAYBACK_MUGSHOT>;

		struct PaybackMugshotAction;

		struct GameAction<E_ACTION_ABORT_MUGSHOT_CAPTURE>;

		struct AbortMugshotCaptureAction;

		struct GameAction<E_ACTION_PAYBACK_ACTIVATED>;

		struct PaybackActivatedAction;

		struct GameAction<E_ACTION_PAYBACK_SUCCEEDED>;

		struct PaybackSucceededAction;

		struct GameAction<E_ACTION_SET_LOADING_STATE>;

		struct SetLoadingStateAction;

		struct GameAction<E_ACTION_TRAITOROUS_TAKEDOWN>;

		struct TraitorousTakedownAction;

		struct GameAction<E_ACTION_PLAYER_ELIMINATED>;

		struct PlayerEliminatedAction;

		struct GameAction<E_ACTION_LEADER_REACHED_BOUNDARY>;

		struct LeaderReachedBoundaryAction;

		struct GameAction<E_ACTION_VEHICLE_HIT>;

		struct VehicleHitAction;

		struct GameAction<E_ACTION_SHOWTIME_UPDATE>;

		struct ShowtimeUpdateAction;

		struct GameAction<E_ACTION_SHOWTIME_MODE_SWITCH>;

		struct ShowtimeModeSwitchAction;

		struct GameAction<E_ACTION_JUST_BOUNCED>;

		struct JustBouncedAction;

		struct GameAction<E_ACTION_WORLD_STUNT_PERFORMED>;

		struct GameAction<E_ACTION_OVERHEAD_SIGN_HIT>;

		struct HitOverheadSignAction;

		struct GameAction<E_ACTION_POWER_PARK_RESULT>;

		struct GameAction<E_ACTION_GAME_TRAINING>;

		struct GameTrainingAction;

		struct GameAction<E_ACTION_SHUTDOWN>;

		struct ShutdownAction;

		struct GameAction<E_ACTION_CRASH_COMBO>;

		struct CrashComboAction;

		struct GameAction<E_ACTION_SOUND_TRIGGER>;

		struct GameAction<E_ACTION_NEW_CAR_UNLOCKED>;

		struct GameAction<E_ACTION_SHOW_JUMP_NAME>;

		struct ShowJumpNameAction;

		struct GameAction<E_ACTION_ON_STUNT_ELEMENT_COMPLETE>;

		struct OnStuntElementCompleteAction;

		struct GameAction<E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_FOR_COUNTY>;

		struct OnAllStuntElementsCompleteForCountyAction;

		struct GameAction<E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_BY_TYPE>;

		struct OnAllStuntElementsCompleteByTypeAction;

		struct GameAction<E_ACTION_CAR_SELECTION_CHANGED>;

		struct CarSelectionChangedAction;

		struct GameAction<E_ACTION_CAR_SELECTION_DROPIN_COMPLETE>;

		struct CarSelectionDropInCompleteAction;

		struct GameAction<E_ACTION_CAR_SELECTION_CHANGED_ONLINE>;

		struct CarSelectionChangedOnlineAction;

		struct GameAction<E_ACTION_REMOTE_PLAYER_DISCONNECTED>;

		struct RemotePlayerDisconnectedAction;

		struct GameAction<E_ACTION_ONLINE_PLAYER_ADDED>;

		struct OnlinePlayerAddedAction;

		struct GameAction<E_ACTION_CAR_ADDITION_PRESENTATION_START>;

		struct CarAdditionPresentationStartAction;

		struct GameAction<E_ACTION_ROAD_RULES_CHALLENGE_SCORES>;

		struct RoadRulesChallengeScoresAction;

		struct GameAction<E_ACTION_ROAD_RULES_PERSONAL_BEST>;

		struct RoadRulesPersonalBestAction;

		struct GameAction<E_ACTION_UPDATE_RICH_PRESENCE>;

		struct UpdateRichPresence;

		struct GameAction<E_ACTION_SEND_TELEMETRY>;

		struct TelemetryAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_TOOK_LEAD>;

		struct HUDMessageTookLeadAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_LEADING>;

		struct HUDMessageLeadingAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_X_FINISHES>;

		struct HUDMessageXFinishesAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_X_REACHES_CHECKPOINT>;

		struct HUDMessageXReachesCheckpointAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_X_CRASHES>;

		struct HUDMessageXCrashesAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_STUNT_PERFORMED>;

		struct HUDMessageStuntPerformed;

		struct GameAction<E_ACTION_HUD_MESSAGE_COMBO_PERFORMED>;

		struct HUDMessageComboPerformed;

		struct GameAction<E_ACTION_HUD_MESSAGE_BHR_CHECKPOINT>;

		struct HUDMessageBHRCheckpointAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_BHR_RUNNER_CRASHED>;

		struct HUDMessageBHRRunnerCrashed;

		struct GameAction<E_ACTION_HUD_MESSAGE_ONLINE_TEAM_CHANGE>;

		struct HUDMessageOnlineTeamChangeAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_ROAD_RAGE_TIME_EXTENSION>;

		struct HUDMessageRoadRageTimeExtensionAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_RIVAL_FIRST_HIT>;

		struct HUDMessageFirstHitOnRivalAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_RIVAL_IS_A_RIVAL>;

		struct HUDMessageRivalIsARivalAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_RIVAL_IS_A_TARGET>;

		struct HUDMessageRivalIsATargetAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_RIVAL_IS_FLEEING>;

		struct HUDMessageRivalIsFleeingAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_RIVAL_IS_WRECKED>;

		struct HUDMessageRivalIsWreckedAction;

		struct GameAction<E_ACTION_HUD_MESSAGE_TIME_UP>;

		struct HUDMessageTimeUpAction;

		struct GameAction<E_ACTION_SHOWTIME_INTRO_START>;

		struct ShowtimeIntro;

		struct GameAction<E_ACTION_ROAD_RULES_ENTER_ROAD>;

		struct RoadRulesEnterRoadAction;

		struct GameAction<E_ACTION_ROAD_RULES_BATCH_QUERY>;

		struct GameAction<E_ACTION_UPCOMING_ROAD_CHANGE>;

		struct GameAction<E_ACTION_WRONG_CAR_FOR_CHALLENGE>;

		struct WrongCarForChallengeAction;

		struct GameAction<E_ACTION_ROAD_RULES_LEAVE_ROAD>;

		struct RoadRulesLeaveRoadAction;

		struct GameAction<E_ACTION_ROAD_RULES_START_RULE>;

		struct RoadRulesStartRuleAction;

		struct GameAction<E_ACTION_ROAD_RULES_END_RULE>;

		struct RoadRulesEndRuleAction;

		struct GameAction<E_ACTION_ROAD_RULES_UPDATE>;

		struct RoadRulesUpdateAction;

		struct GameAction<E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE>;

		struct RoadRulesUpdateTargetScoreAction;

		struct GameAction<E_ACTION_ROAD_RULES_NEW_HIGH_SCORE>;

		struct RoadRulesNewHighScoreAction;

		struct GameAction<E_ACTION_ROAD_RULES_ACTIVE_RULE_CHANGE>;

		struct RoadRulesActiveRuleChangeAction;

		struct GameAction<E_ACTION_ROAD_RULES_ROAD_SCORE>;

		struct RoadRulesRoadScoreAction;

		struct GameAction<E_ACTION_ROAD_RULES_NEW_RULERS>;

		struct RoadRulesNewRulersAction;

		struct GameAction<E_ACTION_ROAD_RULES_MODE_SWITCH>;

		struct RoadRulesModeSwitchAction;

		struct GameAction<E_ACTION_PLAYER_IN_SHORTCUT>;

		struct PlayerInShortcutAction;

		struct GameAction<E_ACTION_ONLINE_GAME_RESULT>;

		struct OnlineGameResults;

		struct GameAction<E_ACTION_ONLINE_ROUND_RESULT>;

		struct OnlineRoundResults;

		struct GameAction<E_ACTION_RESTART_TRAFFIC>;

		struct RestartTrafficAction;

		struct GameAction<E_ACTION_IMAGE_GALLERY_RENDER_IMAGE>;

		struct ImageGalleryRenderImageAction;

		struct GameAction<E_ACTION_IMAGE_GALLERY_IMAGE_INFO>;

		struct ImageGalleryImageInfoAction;

		struct GameAction<E_ACTION_IMAGE_GALLERY_COUNT_ACTION>;

		struct ImageGalleryCountAction;

		struct GameAction<E_ACTION_IMAGE_GALLERY_DATA_ACTION>;

		struct ImageGalleryDataAction;

		struct GameAction<E_ACTION_SAVE_IMAGE_AND_AUTOSAVE>;

		struct SaveImageAndAutoSaveAction;

		struct GameAction<E_ACTION_LOAD_IMAGES>;

		struct LoadImageFilesAction;

		struct GameAction<E_ACTION_DXT_DECODE_IMAGE>;

		struct DXTDecodeImageAction;

		struct GameAction<E_ACTION_SWITCH_BURNING_HOME_RUN_RUNNER>;

		struct SwitchBurningHomeRunRunnerAction;

		struct GameAction<E_ACTION_BURNOUT_SKILLZ>;

		struct BurnoutSkillzAction;

		struct GameAction<E_ACTION_ROAD_RULES_SKILLZ>;

		struct GameAction<E_ACTION_MODE_TIME_TIMEOUT>;

		struct ModeTimeOutTimerEvent;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE>;

		struct FreeburnChallengeAction;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_UPDATE>;

		struct FreeburnChallengeUpdateAction;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_COMPLETION_STATUS>;

		struct FburnChallengeStatusAction;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_EVERY_PLAYER_COMPLETION_STATUS>;

		struct FburnChallengeEveryPlayerStatusAction;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateAction;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_SUCCESS>;

		struct FburnChallengeSuccessAction;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_SHOW_SELECTOR>;

		struct FburnChallengeShowSelectorAction;

		struct GameAction<E_ACTION_ACTIVE_FREEBURN_CHALLENGE>;

		struct ActiveFburnChallengeAction;

		struct GameAction<E_ACTION_REQUEST_AUTOSAVE>;

		struct RequestAutoSaveAction;

		struct GameAction<E_ACTION_REQUEST_GAMERCARD>;

		struct RequestGamerCardAction;

		struct GameEvent<E_EVENT_RECORD_PROP_HIT>;

		struct RecordPropHitEvent;

		struct GameEvent<E_EVENT_OVERHEAD_SIGN_HIT>;

		struct HitOverheadSignEvent;

		struct GameEvent<E_EVENT_GAME_TRAINING_REQUEST>;

		struct RequestGameTrainingEvent;

		struct GameEvent<E_EVENT_CHECK_FOR_COMPLETION>;

		struct CheckGameCompleteEvent;

		struct GameEvent<E_EVENT_SELECT_PLAYER_CAR>;

		struct SelectPlayerCarEvent;

		struct GameEvent<E_EVENT_CHANGE_PLAYER_CAR_COLOUR>;

		struct ChangePlayerCarColourEvent;

		struct GameEvent<E_EVENT_PLAYER_CAR_COLOUR_REQUEST>;

		struct PlayerCarColourRequestEvent;

		struct GameEvent<E_EVENT_CHANGE_NETWORK_CAR>;

		struct ChangeNetworkCarEvent;

		struct GameEvent<E_EVENT_GAME_START>;

		struct GameStartEvent;

		struct GameEvent<E_EVENT_PLAYER_ENTERS_RACE_MAP>;

		struct PlayerEntersRaceMap;

		struct GameEvent<E_EVENT_REQUEST_SPECIFIC_PRESET_RACES>;

		struct RequestSpecificPreSetRaces;

		struct GameEvent<E_EVENT_PREPARE_FOR_ONLINE>;

		struct PrepareForOnlineEvent;

		struct GameEvent<E_EVENT_STREAMING_COMPLETE>;

		struct GameEvent<E_EVENT_CONTROLLER_DISCONNECTED>;

		struct ControllerDisconnectedEvent;

		struct GameEvent<E_EVENT_CONFIG_CONTROLLER>;

		struct ConfigControllerEvent;

		struct GameEvent<E_EVENT_START_NETWORK_GAME>;

		struct StartNetworkGameEvent;

		struct GameEvent<E_EVENT_START_NETWORK_ROUND>;

		struct StartNetworkRoundEvent;

		struct GameEvent<E_EVENT_MARKED_MAN_LOADED>;

		struct MarkedManLoadedEvent;

		struct GameEvent<E_EVENT_RIVAL_SHUTDOWN_DISPLAY_FINSHED>;

		struct RivalShutDownDisplayFinshedEvent;

		struct GameEvent<E_EVENT_BUDDY_REMOVED>;

		struct GameEvent<E_EVENT_INSTANT_FREEBURN>;

		struct InstantFreeburnEvent;

		struct GameEvent<E_EVENT_TRIGGER_CRASH_BREAKER>;

		struct TriggerCrashBreakerEvent;

		struct GameEvent<E_EVENT_PICKUP>;

		struct PickupEvent;

		struct GameEvent<E_EVENT_VEHICLE_LEAPT>;

		struct VehicleLeaptEvent;

		struct GameEvent<E_EVENT_PLAYER_ACCEPTED_MODE>;

		struct PlayerAcceptedModeEvent;

		struct GameEvent<E_EVENT_POST_EVENT_LEAVE>;

		struct PostEventLeaveEvent;

		struct GameEvent<E_EVENT_VEHICLE_IMPACT>;

		struct VehicleImpactEvent;

		struct GameEvent<E_EVENT_PLAYER_FINISHED_MODE>;

		struct PlayerFinishedModeEvent;

		struct GameEvent<E_EVENT_PLAYER_EXITED_MODE>;

		struct PlayerExitedModeEvent;

		struct GameEvent<E_EVENT_START_OFFLINE_GAME_MODE>;

		struct StartOfflineGameModeEvent;

		struct GameEvent<E_EVENT_REQUEST_INVITE>;

		struct RequestInviteEvent;

		struct GameEvent<E_EVENT_PREPARE_FOR_INVITE>;

		struct PrepareForInviteEvent;

		struct GameEvent<E_EVENT_CRASH_COMBO_ITEM>;

		struct CrashComboItemEvent;

		struct GameEvent<E_EVENT_EVENT_STATE_REQUEST>;

		struct EventStateRequestEvent;

		struct GameEvent<E_GUI_HAS_STARTED_GAME>;

		struct GuiStartedGameEvent;

		struct GameEvent<E_EVENT_GAME_STATS_REQUEST>;

		struct GameStatsRequestEvent;

		struct GameEvent<E_EVENT_RANK_INFO_REQUEST>;

		struct RankInfoRequestEvent;

		struct GameEvent<E_EVENT_LANDMARK_ROUTE_REQUEST>;

		struct GameEvent<E_EVENT_CAR_PERSISTENT_INFO_REQUEST>;

		struct CarPersistentInfoRequestEvent;

		struct GameEvent<E_EVENT_PLAYER_INFO_REQUEST>;

		struct PlayerInfoRequest;

		struct GameEvent<E_EVENT_CAR_VARIABLE_INFO_REQUEST>;

		struct CarVariableInfoRequestEvent;

		struct GameEvent<E_EVENT_CAR_SELECTION_REQUEST>;

		struct CarSelectionRequestEvent;

		struct GameEvent<E_EVENT_REQUEST_CAR_UNLOCK_EVENT>;

		struct RequestCarUnlockEvent;

		struct GameEvent<E_EVENT_UNLOCKED_LIVERY_REQUEST>;

		struct UnlockedLiveryRequest;

		struct GameEvent<E_EVENT_CAR_UNLOCK_TICKER_CLOSED>;

		struct CarUnlockTickerClosed;

		struct GameEvent<E_EVENT_LANDMARK_VARIABLE_INFO_REQUEST>;

		struct LandmarkInfoRequestEvent;

		struct GameEvent<E_EVENT_ADD_CUSTOM_RACE>;

		struct AddCustomRaceEvent;

		struct GameEvent<E_EVENT_REMOVE_CUSTOM_RACE>;

		struct RemoveCustomRaceEvent;

		struct GameEvent<E_CAR_CONTROL_CHANGE_REQUEST>;

		struct CarControlChangeRequestEvent;

		struct GameEvent<E_EVENT_GUI_AWARD_SEQUENCE_START>;

		struct GuiAwardSequenceStartEvent;

		struct GameEvent<E_EVENT_GUI_AWARD_SEQUENCE_END>;

		struct GuiAwardSequenceEndEvent;

		struct GameEvent<E_EVENT_PROGRESSION_PROFILE_LOADED>;

		struct ProgressionProfileLoadedEvent;

		struct GameEvent<E_EVENT_RESET_PROFILE_REQUEST>;

		struct ResetProfileRequestEvent;

		struct GameEvent<E_EVENT_REQUEST_FREE_ROAM_TRACKER>;

		struct RequestFreeRoamTrackerEvent;

		struct GameEvent<E_EVENT_CRASHNAV_STATE_CHANGED>;

		struct CrashNavStateChangedEvent;

		struct GameEvent<E_EVENT_CARSELECT_STATE_CHANGED>;

		struct CarSelectStateChangedEvent;

		struct GameEvent<E_EVENT_REGION_FROM_POSITION_REQUEST>;

		struct RegionFromPositionRequestEvent;

		struct GameEvent<E_EVENT_ROAD_RULE_DATA_REQUEST>;

		struct RoadRulesDataRequestEvent;

		struct GameEvent<E_EVENT_ROAD_RULE_ROAD_SCORE_REQUEST>;

		struct GameEvent<E_EVENT_ROAD_RULE_BATCH_DATA_REQUEST>;

		struct RoadRulesBatchDataRequestEvent;

		struct GameEvent<E_EVENT_ROAD_RULE_INTERACTION_CHANGE>;

		struct RoadRuleInteractionChangeEvent;

		struct GameEvent<E_EVENT_ROAD_RULE_MODE_SWITCH>;

		struct RoadRuleModeSwitchEvent;

		struct GameEvent<E_EVENT_ALL_RIVALRY_DATA_REQUEST>;

		struct RivalriesAllDataRequestEvent;

		struct GameEvent<E_EVENT_ONE_RIVALRY_DATA_REQUEST>;

		struct RivalriesOneDataRequestEvent;

		struct GameEvent<E_EVENT_GUI_SWITCHES_ROAD_RULE_STATE>;

		struct GameEvent<E_EVENT_PLAYER_PAUSE_STATE_CHANGED>;

		struct PlayerPauseStateChangedEvent;

		struct GameEvent<E_EVENT_TRAINING_PAUSE_STATE_CHANGED>;

		struct TrainingPauseStateChangedEvent;

		struct GameEvent<E_EVENT_REMOTE_PLAYER_DISCONNECTED>;

		struct RemotePlayerDisconnectedEvent;

		struct GameEvent<E_EVENT_LOCAL_PLAYER_CONNECTED>;

		struct LocalPlayerConnectedEvent;

		struct GameEvent<E_EVENT_LOCAL_PLAYER_LEFT_LOBBY>;

		struct LocalPlayerLeftLobby;

		struct GameEvent<E_EVENT_LEFT_ONLINE_POST_EVENT>;

		struct LeftOnlinePostEventEvent;

		struct GameEvent<E_EVENT_ONLINE_GAME_PARAMS_CHANGED>;

		struct OnlineGameParamsChanged;

		struct GameEvent<E_EVENT_ONLINE_GAME_LAUNCHED>;

		struct OnlineGameLaunchedEvent;

		struct GameEvent<E_EVENT_ONLINE_PLAYER_ADDED>;

		struct OnlinePlayerAddedEvent;

		struct GameEvent<E_EVENT_ONLINE_PLAYER_FINALISED>;

		struct OnlinePlayerFinalisedEvent;

		struct GameEvent<E_EVENT_ONLINE_PLAYER_REMOVED>;

		struct OnlinePlayerRemovedEvent;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_PB_RECV>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_UPLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_DOWNLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_CONNECT_INFO>;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SELECTED_REMOTELY>;

		struct FreeburnChallengeSelectedRemotelyEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_TRIGGERED_REMOTELY>;

		struct FreeburnChallengeTriggeredRemotelyEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_ACTION_SUCCESS>;

		struct FreeburnChallengeActionSuccessEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_RESET>;

		struct FreeburnChallengeResetEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_ENDED>;

		struct FreeburnChallengeEndedEvent;

		struct GameEvent<E_EVENT_REQUEST_EVERY_PLAYER_COMPLETION_STATUS>;

		struct FreeburnChallengeRequestEveryPlayerStatusEvent;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_RECEIVED>;

		struct OnlineImageReceivedEvent;

		struct GameEvent<E_EVENT_ONLINE_CAPTURE_WINNER_PHOTO_FINISH>;

		struct OnlineCaptureWinnerPhotoFinishEvent;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_SEND_ABORTED>;

		struct OnlineImageCaptureAbortedEvent;

		struct GameEvent<E_EVENT_ONLINE_COLLECTABLE>;

		struct OnlineNetworkPlayerCollectableEvent;

		struct GameEvent<E_EVENT_IMAGE_TO_SAVE>;

		struct ImageToSaveEvent;

		struct GameEvent<E_EVENT_IMAGE_FILES_SAVED>;

		struct ImageFilesSavedEvent;

		struct GameEvent<E_EVENT_IMAGE_GALLERY_REQUEST>;

		struct ImageGalleryRequestEvent;

		struct GameEvent<E_EVENT_IMAGE_GALLERY_COUNT_REQUEST>;

		struct ImageGalleryCountRequestEvent;

		struct GameEvent<E_EVENT_IMAGE_GALLERY_DATA_REQUEST>;

		struct ImageGalleryDataRequestEvent;

		struct GameEvent<E_EVENT_IMAGE_FILES_LOADED>;

		struct ImageFilesLoadedEvent;

		struct GameEvent<E_EVENT_BURNING_HOME_RUN_SWITCHED_RUNNER>;

		struct BurningHomeRunSwitchRunnerEvent;

		struct GameEvent<E_EVENT_ONLINE_NEW_BURNOUT_SKILLZ>;

		struct NewRemoteBurnoutSkillzEvent;

		struct GameEvent<E_EVENT_SHOWTIME_UPDATE>;

		struct ShowtimeUpdateEvent;

		struct GameEvent<E_EVENT_SHOWTIME_MODE_SWITCH>;

		struct ShowtimeModeSwitchEvent;

		struct GameEvent<E_EVENT_ONLINE_NEW_HOST>;

		struct OnlineNewHostEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SELECTED>;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS>;

		struct FburnChallengeSuccessEvent;

		struct GameEvent<E_EVENT_ACTIVE_FREEBURN_CHALLENGE>;

		struct ActiveFburnChallengeEvent;

		struct GameEvent<E_EVENT_REMOTE_PLAYER_TRIGGERED_CHECKPOINT>;

		struct RemotePlayerTriggeredCheckpoint;

		struct GameEvent<E_EVENT_ONLINE_RIVAL_COUNT>;

		struct OnlineRivalCount;

		struct GameEvent<E_EVENT_ONLINE_CAUGHT_FEVER>;

		struct OnlineCaughtFever;

		struct GameEvent<E_EVENT_ONLINE_MUGSHOT_SENT>;

		struct OnlineMugshotSent;

		struct GameEvent<E_EVENT_ONLINE_CREATED_CUSTOM_ROUTE>;

		struct OnlineCreatedCustomRouteEvent;

		struct GameEvent<E_EVENT_MODE_MANAGER_ROUTE_INFO>;

		struct ModeManagerRouteInfoEvent;

		struct BaseGameActionQueue<13312>;

		struct GameStateToControllerInterface;

		struct ControllerToGameStateInterface;

		struct GameStateToGuiInterface;

		struct PostWorldInputBuffer;

		struct BaseGameActionQueue<256>;

		struct GameEvent<E_EVENT_FINISHED_MAP_PAN>;

		struct GameEvent<E_EVENT_GUI_FINISHED_OFFLINE_PRE_EVENT>;

		struct GameEvent<E_EVENT_FINISHED_SPLASH>;

		struct GameEvent<E_EVENT_PAYBACK_TRIGGERABLE>;

		struct GameEvent<E_EVENT_LOADING_SCREEN_LOADED>;

		struct GameAction<E_ACTION_LOCAL_PLAYER_DISCONNECTED>;

		struct GameAction<E_ACTION_LOCAL_PLAYER_LEFT_GAME>;

		struct GameAction<E_ACTION_SOUND_BIND_PROPS>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct CompletedFburnChallengesData;

		struct GameAction<E_ACTION_RANK_INFO_RESPONSE>;

		struct RankInfoResponseAction;

		struct GameAction<E_ACTION_ROAD_RULES_ENTER_ROAD>;

		struct RoadRulesEnterRoadAction;

		struct GameAction<E_ACTION_UPCOMING_ROAD_CHANGE>;

		struct GameAction<E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE>;

		struct RoadRulesUpdateTargetScoreAction;

		struct BaseGameActionQueue<13312>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct CompletedFburnChallengesData;

		struct BaseGameActionQueue<13312>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct WorldStuntAction;

		struct PowerParkResultAction;

		struct CompletedFburnChallengesData;

		struct CarScoreData;

		struct ScoringOutputInterface;

		struct OnlineScoringOutputInterface;

		struct RaceCarRaceDistanceInterface;

		struct InterestInterface;

		struct ControllerInput;

		struct OutputBuffer;

		struct PreWorldInputBuffer;

		struct OnlineRoadRulesPersonalBestRecvEvent;

		struct OnlineRoadRulesUploadedEvent;

		struct OnlineRoadRulesDownloadedEvent;

		struct OnlineRoadRulesConnectInfoEvent;

		struct RoadRulesScoreRequestEvent;

		struct BuddyRemovedEvent;

		struct RoadRulesBatchQueryAction;

		struct GameEventQueue;

		struct GameEvent<E_EVENT_START_NETWORK_GAME>;

		struct StartNetworkGameEvent;

		struct GameEvent<E_EVENT_START_NETWORK_ROUND>;

		struct StartNetworkRoundEvent;

		struct GameEvent<E_EVENT_BUDDY_REMOVED>;

		struct GameEvent<E_EVENT_TRIGGER_CRASH_BREAKER>;

		struct TriggerCrashBreakerEvent;

		struct GameEvent<E_EVENT_PICKUP>;

		struct PickupEvent;

		struct GameEvent<E_EVENT_VEHICLE_LEAPT>;

		struct VehicleLeaptEvent;

		struct GameEvent<E_EVENT_PLAYER_FINISHED_MODE>;

		struct PlayerFinishedModeEvent;

		struct GameEvent<E_EVENT_CRASH_COMBO_ITEM>;

		struct CrashComboItemEvent;

		struct GameEvent<E_EVENT_ROAD_RULE_ROAD_SCORE_REQUEST>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_PB_RECV>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_UPLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_DOWNLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_CONNECT_INFO>;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_RECEIVED>;

		struct OnlineImageReceivedEvent;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_SEND_ABORTED>;

		struct OnlineImageCaptureAbortedEvent;

		struct GameEvent<E_EVENT_BURNING_HOME_RUN_SWITCHED_RUNNER>;

		struct BurningHomeRunSwitchRunnerEvent;

		struct GameEvent<E_EVENT_ONLINE_NEW_HOST>;

		struct OnlineNewHostEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS>;

		struct FburnChallengeSuccessEvent;

		struct GameEvent<E_EVENT_MODE_MANAGER_ROUTE_INFO>;

		struct ModeManagerRouteInfoEvent;

		struct GameAction<E_ACTION_PREPARE_FOR_MODE>;

		struct GameAction<E_ACTION_STOP_MODE_INTRO>;

		struct StopModeIntroAction;

		struct GameAction<E_ACTION_MARKED_MAN_LOADED>;

		struct MarkedManLoadedAction;

		struct GameAction<E_ACTION_FINISHED_MODE>;

		struct FinishedModeAction;

		struct GameAction<E_ACTION_SHOW_MODE_RESULTS>;

		struct ShowModeResultsAction;

		struct GameAction<E_ACTION_TROPHY_UNLOCK>;

		struct TrophyUnlockAction;

		struct GameAction<E_ACTION_WORLD_STUNT_PERFORMED>;

		struct GameAction<E_ACTION_POWER_PARK_RESULT>;

		struct GameAction<E_ACTION_SOUND_TRIGGER>;

		struct GameAction<E_ACTION_ON_STUNT_ELEMENT_COMPLETE>;

		struct OnStuntElementCompleteAction;

		struct GameAction<E_ACTION_CAR_SELECTION_CHANGED>;

		struct CarSelectionChangedAction;

		struct GameAction<E_ACTION_ROAD_RULES_ENTER_ROAD>;

		struct RoadRulesEnterRoadAction;

		struct GameAction<E_ACTION_ROAD_RULES_BATCH_QUERY>;

		struct GameAction<E_ACTION_UPCOMING_ROAD_CHANGE>;

		struct GameAction<E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE>;

		struct RoadRulesUpdateTargetScoreAction;

		struct GameAction<E_ACTION_ONLINE_GAME_RESULT>;

		struct OnlineGameResults;

		struct GameAction<E_ACTION_ONLINE_ROUND_RESULT>;

		struct OnlineRoundResults;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_UPDATE>;

		struct FreeburnChallengeUpdateAction;

		struct BaseGameActionQueue<13312>;

		struct GameStateToControllerInterface;

		struct ControllerToGameStateInterface;

		struct GameStateToGuiInterface;

		struct PostWorldInputBuffer;

		struct BaseGameActionQueue<256>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
		struct RCEntityActiveRaceCarOutputInterface;

		struct RCEntityGlobalRaceCarOutputInterface;

		struct BoostOutputInfo;

		struct CarsInTheRaceData;

		struct RCEntityPlayerResetInterface;

		struct InputBuffer_PreScene;

		struct OutputBuffer_PreScene;

		struct OutputBuffer_PrePhysics;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct CompletedFburnChallengesData;

		struct CarScoreData;

		struct ScoringOutputInterface;

		struct OnlineScoringOutputInterface;

		struct RaceCarRaceDistanceInterface;

		struct InterestInterface;

		struct ControllerInput;

		struct OutputBuffer;

		struct PreWorldInputBuffer;

		struct OnlineRoadRulesPersonalBestRecvEvent;

		struct OnlineRoadRulesUploadedEvent;

		struct OnlineRoadRulesDownloadedEvent;

		struct OnlineRoadRulesConnectInfoEvent;

		struct RoadRulesScoreRequestEvent;

		struct BuddyRemovedEvent;

		struct RoadRulesBatchQueryAction;

		struct GameEventQueue;

		struct GameEvent<E_EVENT_BUDDY_REMOVED>;

		struct GameEvent<E_EVENT_ROAD_RULE_ROAD_SCORE_REQUEST>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_PB_RECV>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_UPLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_DOWNLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_CONNECT_INFO>;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS>;

		struct FburnChallengeSuccessEvent;

		struct GameAction<E_ACTION_ROAD_RULES_ENTER_ROAD>;

		struct RoadRulesEnterRoadAction;

		struct GameAction<E_ACTION_ROAD_RULES_BATCH_QUERY>;

		struct GameAction<E_ACTION_UPCOMING_ROAD_CHANGE>;

		struct GameAction<E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE>;

		struct RoadRulesUpdateTargetScoreAction;

		struct GameAction<E_ACTION_ONLINE_ROUND_RESULT>;

		struct OnlineRoundResults;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_UPDATE>;

		struct FreeburnChallengeUpdateAction;

		struct BaseGameActionQueue<13312>;

		struct GameStateToControllerInterface;

		struct ControllerToGameStateInterface;

		struct GameStateToGuiInterface;

		struct PostWorldInputBuffer;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct CompletedFburnChallengesData;

		struct GameAction<E_ACTION_ROAD_RULES_ENTER_ROAD>;

		struct RoadRulesEnterRoadAction;

		struct GameAction<E_ACTION_UPCOMING_ROAD_CHANGE>;

		struct GameAction<E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE>;

		struct RoadRulesUpdateTargetScoreAction;

		struct BaseGameActionQueue<13312>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct CompletedFburnChallengesData;

		struct PlayerInfo;

		struct LandmarkVariableInfo;

		struct RoadRulesEnterRoadAction;

		struct RoadRulesUpdateTargetScoreAction;

		struct RankInfoResponseAction;

		struct GameAction<E_ACTION_RANK_INFO_RESPONSE>;

		struct GameAction<E_ACTION_ROAD_RULES_ENTER_ROAD>;

		struct GameAction<E_ACTION_UPCOMING_ROAD_CHANGE>;

		struct GameAction<E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE>;

		struct BaseGameActionQueue<13312>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
		struct RCEntityActiveRaceCarOutputInterface;

		struct RCEntityGlobalRaceCarOutputInterface;

		struct BoostOutputInfo;

		struct CarsInTheRaceData;

		struct RCEntityPlayerResetInterface;

		struct InputBuffer_PreScene;

		struct OutputBuffer_PreScene;

		struct OutputBuffer_PrePhysics;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct WorldStuntAction;

		struct PowerParkResultAction;

		struct CompletedFburnChallengesData;

		struct CarScoreData;

		struct ScoringOutputInterface;

		struct OnlineScoringOutputInterface;

		struct RaceCarRaceDistanceInterface;

		struct InterestInterface;

		struct ControllerInput;

		struct OutputBuffer;

		struct PreWorldInputBuffer;

		struct OnlineRoadRulesPersonalBestRecvEvent;

		struct OnlineRoadRulesUploadedEvent;

		struct OnlineRoadRulesDownloadedEvent;

		struct OnlineRoadRulesConnectInfoEvent;

		struct RoadRulesScoreRequestEvent;

		struct BuddyRemovedEvent;

		struct RoadRulesBatchQueryAction;

		struct GameEventQueue;

		struct GameEvent<E_EVENT_START_NETWORK_GAME>;

		struct StartNetworkGameEvent;

		struct GameEvent<E_EVENT_START_NETWORK_ROUND>;

		struct StartNetworkRoundEvent;

		struct GameEvent<E_EVENT_BUDDY_REMOVED>;

		struct GameEvent<E_EVENT_TRIGGER_CRASH_BREAKER>;

		struct TriggerCrashBreakerEvent;

		struct GameEvent<E_EVENT_PICKUP>;

		struct PickupEvent;

		struct GameEvent<E_EVENT_VEHICLE_LEAPT>;

		struct VehicleLeaptEvent;

		struct GameEvent<E_EVENT_PLAYER_FINISHED_MODE>;

		struct PlayerFinishedModeEvent;

		struct GameEvent<E_EVENT_CRASH_COMBO_ITEM>;

		struct CrashComboItemEvent;

		struct GameEvent<E_EVENT_ROAD_RULE_ROAD_SCORE_REQUEST>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_PB_RECV>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_UPLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_DOWNLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_CONNECT_INFO>;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_RECEIVED>;

		struct OnlineImageReceivedEvent;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_SEND_ABORTED>;

		struct OnlineImageCaptureAbortedEvent;

		struct GameEvent<E_EVENT_BURNING_HOME_RUN_SWITCHED_RUNNER>;

		struct BurningHomeRunSwitchRunnerEvent;

		struct GameEvent<E_EVENT_ONLINE_NEW_HOST>;

		struct OnlineNewHostEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS>;

		struct FburnChallengeSuccessEvent;

		struct GameEvent<E_EVENT_MODE_MANAGER_ROUTE_INFO>;

		struct ModeManagerRouteInfoEvent;

		struct GameAction<E_ACTION_PREPARE_FOR_MODE>;

		struct GameAction<E_ACTION_STOP_MODE_INTRO>;

		struct StopModeIntroAction;

		struct GameAction<E_ACTION_MARKED_MAN_LOADED>;

		struct MarkedManLoadedAction;

		struct GameAction<E_ACTION_FINISHED_MODE>;

		struct FinishedModeAction;

		struct GameAction<E_ACTION_SHOW_MODE_RESULTS>;

		struct ShowModeResultsAction;

		struct GameAction<E_ACTION_TROPHY_UNLOCK>;

		struct TrophyUnlockAction;

		struct GameAction<E_ACTION_RANK_INFO_RESPONSE>;

		struct RankInfoResponseAction;

		struct GameAction<E_ACTION_WORLD_STUNT_PERFORMED>;

		struct GameAction<E_ACTION_POWER_PARK_RESULT>;

		struct GameAction<E_ACTION_SOUND_TRIGGER>;

		struct GameAction<E_ACTION_ON_STUNT_ELEMENT_COMPLETE>;

		struct OnStuntElementCompleteAction;

		struct GameAction<E_ACTION_CAR_SELECTION_CHANGED>;

		struct CarSelectionChangedAction;

		struct GameAction<E_ACTION_EMPTY_TRAFFIC_POOL>;

		struct EmptyTrafficMemoryPool;

		struct GameAction<E_ACTION_ROAD_RULES_ENTER_ROAD>;

		struct RoadRulesEnterRoadAction;

		struct GameAction<E_ACTION_ROAD_RULES_BATCH_QUERY>;

		struct GameAction<E_ACTION_UPCOMING_ROAD_CHANGE>;

		struct GameAction<E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE>;

		struct RoadRulesUpdateTargetScoreAction;

		struct GameAction<E_ACTION_ONLINE_GAME_RESULT>;

		struct OnlineGameResults;

		struct GameAction<E_ACTION_ONLINE_ROUND_RESULT>;

		struct OnlineRoundResults;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_UPDATE>;

		struct FreeburnChallengeUpdateAction;

		struct BaseGameActionQueue<13312>;

		struct GameStateToControllerInterface;

		struct ControllerToGameStateInterface;

		struct GameStateToGuiInterface;

		struct PostWorldInputBuffer;

		struct BaseGameActionQueue<256>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct CarScoreData;

		struct RaceCarRaceDistanceInterface;

		struct BaseGameActionQueue<13312>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
		struct RCEntityActiveRaceCarOutputInterface;

		struct RCEntityGlobalRaceCarOutputInterface;

		struct BoostOutputInfo;

		struct CarsInTheRaceData;

		struct RCEntityPlayerResetInterface;

		struct OutputBuffer_PreScene;

		struct OutputBuffer_PrePhysics;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct WorldStuntAction;

		struct PowerParkResultAction;

		struct CompletedFburnChallengesData;

		struct CarScoreData;

		struct ScoringOutputInterface;

		struct OnlineScoringOutputInterface;

		struct RaceCarRaceDistanceInterface;

		struct InterestInterface;

		struct ControllerInput;

		struct OutputBuffer;

		struct PreWorldInputBuffer;

		struct OnlineRoadRulesPersonalBestRecvEvent;

		struct OnlineRoadRulesUploadedEvent;

		struct OnlineRoadRulesDownloadedEvent;

		struct OnlineRoadRulesConnectInfoEvent;

		struct RoadRulesScoreRequestEvent;

		struct BuddyRemovedEvent;

		struct RoadRulesBatchQueryAction;

		struct GameEventQueue;

		struct GameAction<E_ACTION_PREPARE_FOR_MODE>;

		struct GameAction<E_ACTION_STOP_MODE_INTRO>;

		struct StopModeIntroAction;

		struct GameAction<E_ACTION_MARKED_MAN_LOADED>;

		struct MarkedManLoadedAction;

		struct GameAction<E_ACTION_FINISHED_MODE>;

		struct FinishedModeAction;

		struct GameAction<E_ACTION_SHOW_MODE_RESULTS>;

		struct ShowModeResultsAction;

		struct GameAction<E_ACTION_TROPHY_UNLOCK>;

		struct TrophyUnlockAction;

		struct GameAction<E_ACTION_WORLD_STUNT_PERFORMED>;

		struct GameAction<E_ACTION_POWER_PARK_RESULT>;

		struct GameAction<E_ACTION_SOUND_TRIGGER>;

		struct GameAction<E_ACTION_ON_STUNT_ELEMENT_COMPLETE>;

		struct OnStuntElementCompleteAction;

		struct GameAction<E_ACTION_CAR_SELECTION_CHANGED>;

		struct CarSelectionChangedAction;

		struct GameAction<E_ACTION_ROAD_RULES_ENTER_ROAD>;

		struct RoadRulesEnterRoadAction;

		struct GameAction<E_ACTION_ROAD_RULES_BATCH_QUERY>;

		struct GameAction<E_ACTION_UPCOMING_ROAD_CHANGE>;

		struct GameAction<E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE>;

		struct RoadRulesUpdateTargetScoreAction;

		struct GameAction<E_ACTION_ONLINE_GAME_RESULT>;

		struct OnlineGameResults;

		struct GameAction<E_ACTION_ONLINE_ROUND_RESULT>;

		struct OnlineRoundResults;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_UPDATE>;

		struct FreeburnChallengeUpdateAction;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateAction;

		struct GameEvent<E_EVENT_SETUP_PLAYER_CAR>;

		struct SetupPlayerCarEvent;

		struct GameEvent<E_EVENT_START_NETWORK_GAME>;

		struct StartNetworkGameEvent;

		struct GameEvent<E_EVENT_START_NETWORK_ROUND>;

		struct StartNetworkRoundEvent;

		struct GameEvent<E_EVENT_BUDDY_REMOVED>;

		struct GameEvent<E_EVENT_TRIGGER_CRASH_BREAKER>;

		struct TriggerCrashBreakerEvent;

		struct GameEvent<E_EVENT_PICKUP>;

		struct PickupEvent;

		struct GameEvent<E_EVENT_VEHICLE_LEAPT>;

		struct VehicleLeaptEvent;

		struct GameEvent<E_EVENT_PLAYER_FINISHED_MODE>;

		struct PlayerFinishedModeEvent;

		struct GameEvent<E_EVENT_CRASH_COMBO_ITEM>;

		struct CrashComboItemEvent;

		struct GameEvent<E_EVENT_ROAD_RULE_ROAD_SCORE_REQUEST>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_PB_RECV>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_UPLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_DOWNLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_CONNECT_INFO>;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_RECEIVED>;

		struct OnlineImageReceivedEvent;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_SEND_ABORTED>;

		struct OnlineImageCaptureAbortedEvent;

		struct GameEvent<E_EVENT_BURNING_HOME_RUN_SWITCHED_RUNNER>;

		struct BurningHomeRunSwitchRunnerEvent;

		struct GameEvent<E_EVENT_ONLINE_NEW_HOST>;

		struct OnlineNewHostEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS>;

		struct FburnChallengeSuccessEvent;

		struct GameEvent<E_EVENT_MODE_MANAGER_ROUTE_INFO>;

		struct ModeManagerRouteInfoEvent;

		struct BaseGameActionQueue<13312>;

		struct GameStateToControllerInterface;

		struct ControllerToGameStateInterface;

		struct GameStateToGuiInterface;

		struct PostWorldInputBuffer;

		struct BaseGameActionQueue<256>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct CompletedFburnChallengesData;

		struct RaceCarRaceDistanceInterface;

		struct OutputBuffer;

		struct PreWorldInputBuffer;

		struct OnlineRoadRulesPersonalBestRecvEvent;

		struct OnlineRoadRulesUploadedEvent;

		struct OnlineRoadRulesDownloadedEvent;

		struct OnlineRoadRulesConnectInfoEvent;

		struct RoadRulesScoreRequestEvent;

		struct BuddyRemovedEvent;

		struct RoadRulesBatchQueryAction;

		struct GameEventQueue;

		struct GameAction<E_ACTION_RESET_PLAYER_CAR>;

		struct GameAction<E_ACTION_PREPARE_FOR_MODE>;

		struct GameAction<E_ACTION_STOP_MODE_INTRO>;

		struct StopModeIntroAction;

		struct GameAction<E_ACTION_MARKED_MAN_LOADED>;

		struct MarkedManLoadedAction;

		struct GameAction<E_ACTION_FINISHED_MODE>;

		struct FinishedModeAction;

		struct GameAction<E_ACTION_SHOW_MODE_RESULTS>;

		struct ShowModeResultsAction;

		struct GameAction<E_ACTION_STOP_MODE>;

		struct StopModeAction;

		struct GameAction<E_ACTION_PERFORM_INVITE>;

		struct PerformInviteAction;

		struct GameAction<E_ACTION_CAR_SELECT_ONLINE_SELECT_CAR>;

		struct CarSelectOnlineSelectCarAction;

		struct GameAction<E_ACTION_ACHIEVEMENTS_EARNED>;

		struct AchievementsEarnedAction;

		struct GameAction<E_ACTION_PLAYER_ELIMINATED>;

		struct PlayerEliminatedAction;

		struct GameAction<E_ACTION_ON_STUNT_ELEMENT_COMPLETE>;

		struct OnStuntElementCompleteAction;

		struct GameAction<E_ACTION_ROAD_RULES_BATCH_QUERY>;

		struct GameAction<E_ACTION_ONLINE_GAME_RESULT>;

		struct OnlineGameResults;

		struct GameAction<E_ACTION_ONLINE_ROUND_RESULT>;

		struct OnlineRoundResults;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateAction;

		struct GameEvent<E_EVENT_CHANGE_PLAYER_CAR>;

		struct ChangePlayerCarEvent;

		struct GameEvent<E_EVENT_ONLINE_CAR_SELECT>;

		struct OnlineCarSelectEvent;

		struct GameEvent<E_EVENT_START_NETWORK_GAME>;

		struct StartNetworkGameEvent;

		struct GameEvent<E_EVENT_START_NETWORK_ROUND>;

		struct StartNetworkRoundEvent;

		struct GameEvent<E_EVENT_FINISHED_SYNCING_PLAYERS>;

		struct FinishedSyncingPlayersEvent;

		struct GameEvent<E_EVENT_BUDDY_REMOVED>;

		struct GameEvent<E_EVENT_RESULTS_FINISHED>;

		struct ResultsFinishedEvent;

		struct GameEvent<E_EVENT_PLAYER_FINISHED_MODE>;

		struct PlayerFinishedModeEvent;

		struct GameEvent<E_EVENT_PLAYER_EXITED_MODE>;

		struct PlayerExitedModeEvent;

		struct GameEvent<E_EVENT_PREPARED_FOR_INVITE>;

		struct PreparedForInviteEvent;

		struct GameEvent<E_EVENT_INVITE_COMPLETE>;

		struct InviteCompleteEvent;

		struct GameEvent<E_EVENT_ROAD_RULE_ROAD_SCORE_REQUEST>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_PB_RECV>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_UPLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_DOWNLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_CONNECT_INFO>;

		struct BaseGameActionQueue<13312>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct WorldStuntAction;

		struct PowerParkResultAction;

		struct CompletedFburnChallengesData;

		struct CarScoreData;

		struct ScoringOutputInterface;

		struct OnlineScoringOutputInterface;

		struct RaceCarRaceDistanceInterface;

		struct InterestInterface;

		struct ControllerInput;

		struct OutputBuffer;

		struct PreWorldInputBuffer;

		struct OnlineRoadRulesPersonalBestRecvEvent;

		struct OnlineRoadRulesUploadedEvent;

		struct OnlineRoadRulesDownloadedEvent;

		struct OnlineRoadRulesConnectInfoEvent;

		struct RoadRulesScoreRequestEvent;

		struct BuddyRemovedEvent;

		struct RoadRulesBatchQueryAction;

		struct GameEventQueue;

		struct GameAction<E_ACTION_PREPARE_FOR_MODE>;

		struct GameAction<E_ACTION_STOP_MODE_INTRO>;

		struct StopModeIntroAction;

		struct GameAction<E_ACTION_MARKED_MAN_LOADED>;

		struct MarkedManLoadedAction;

		struct GameAction<E_ACTION_FINISHED_MODE>;

		struct FinishedModeAction;

		struct GameAction<E_ACTION_SHOW_MODE_RESULTS>;

		struct ShowModeResultsAction;

		struct GameAction<E_ACTION_TROPHY_UNLOCK>;

		struct TrophyUnlockAction;

		struct GameAction<E_ACTION_WORLD_STUNT_PERFORMED>;

		struct GameAction<E_ACTION_POWER_PARK_RESULT>;

		struct GameAction<E_ACTION_SOUND_TRIGGER>;

		struct GameAction<E_ACTION_ON_STUNT_ELEMENT_COMPLETE>;

		struct OnStuntElementCompleteAction;

		struct GameAction<E_ACTION_CAR_SELECTION_CHANGED>;

		struct CarSelectionChangedAction;

		struct GameAction<E_ACTION_ROAD_RULES_ENTER_ROAD>;

		struct RoadRulesEnterRoadAction;

		struct GameAction<E_ACTION_ROAD_RULES_BATCH_QUERY>;

		struct GameAction<E_ACTION_UPCOMING_ROAD_CHANGE>;

		struct GameAction<E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE>;

		struct RoadRulesUpdateTargetScoreAction;

		struct GameAction<E_ACTION_ONLINE_GAME_RESULT>;

		struct OnlineGameResults;

		struct GameAction<E_ACTION_ONLINE_ROUND_RESULT>;

		struct OnlineRoundResults;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_UPDATE>;

		struct FreeburnChallengeUpdateAction;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateAction;

		struct GameEvent<E_EVENT_START_NETWORK_GAME>;

		struct StartNetworkGameEvent;

		struct GameEvent<E_EVENT_START_NETWORK_ROUND>;

		struct StartNetworkRoundEvent;

		struct GameEvent<E_EVENT_BUDDY_REMOVED>;

		struct GameEvent<E_EVENT_TRIGGER_CRASH_BREAKER>;

		struct TriggerCrashBreakerEvent;

		struct GameEvent<E_EVENT_PICKUP>;

		struct PickupEvent;

		struct GameEvent<E_EVENT_VEHICLE_LEAPT>;

		struct VehicleLeaptEvent;

		struct GameEvent<E_EVENT_PLAYER_FINISHED_MODE>;

		struct PlayerFinishedModeEvent;

		struct GameEvent<E_EVENT_CRASH_COMBO_ITEM>;

		struct CrashComboItemEvent;

		struct GameEvent<E_EVENT_ROAD_RULE_ROAD_SCORE_REQUEST>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_PB_RECV>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_UPLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_DOWNLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_CONNECT_INFO>;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_RECEIVED>;

		struct OnlineImageReceivedEvent;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_SEND_ABORTED>;

		struct OnlineImageCaptureAbortedEvent;

		struct GameEvent<E_EVENT_BURNING_HOME_RUN_SWITCHED_RUNNER>;

		struct BurningHomeRunSwitchRunnerEvent;

		struct GameEvent<E_EVENT_ONLINE_NEW_HOST>;

		struct OnlineNewHostEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS>;

		struct FburnChallengeSuccessEvent;

		struct GameEvent<E_EVENT_MODE_MANAGER_ROUTE_INFO>;

		struct ModeManagerRouteInfoEvent;

		struct BaseGameActionQueue<13312>;

		struct GameStateToControllerInterface;

		struct ControllerToGameStateInterface;

		struct GameStateToGuiInterface;

		struct PostWorldInputBuffer;

		struct BaseGameActionQueue<256>;

		struct GameEvent<E_EVENT_LOCAL_PLAYER_DISCONNECTED>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
		struct RCEntityActiveRaceCarOutputInterface;

		struct RCEntityGlobalRaceCarOutputInterface;

		struct BoostOutputInfo;

		struct CarsInTheRaceData;

		struct RCEntityPlayerResetInterface;

		struct InputBuffer_PreScene;

		struct OutputBuffer_PreScene;

		struct OutputBuffer_PrePhysics;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct RaceCarRaceDistanceInterface;

		struct GameEventQueue;

		struct GameAction<E_ACTION_PREPARE_FOR_MODE>;

		struct GameAction<E_ACTION_START_PLAYING_MODE>;

		struct StartPlayingModeAction;

		struct GameAction<E_ACTION_STOP_MODE>;

		struct StopModeAction;

		struct GameAction<E_ACTION_UPDATE_CAR_STATS>;

		struct SendCarStatsAction;

		struct GameAction<E_ACTION_SET_PLAYER_CAR_DRIVER>;

		struct SetPlayerCarDriverAction;

		struct GameAction<E_ACTION_IMPACT_TIME_START>;

		struct ImpactTimeStartAction;

		struct GameAction<E_ACTION_DRIVE_THRU_BODY_SHOP>;

		struct BodyShopDriveThruAction;

		struct GameAction<E_ACTION_DRIVE_THRU_JUNK_YARD>;

		struct JunkYardDriveThruAction;

		struct GameAction<E_ACTION_TRAFFIC_TYPE_REQUEST>;

		struct TrafficTypeRequestAction;

		struct GameAction<E_ACTION_TAILGATING>;

		struct TailgatingAction;

		struct GameAction<E_ACTION_TOGGLE_SHOWTIME_BEHAVIOUR>;

		struct ToggleShowtimeBehaviourAction;

		struct GameAction<E_ACTION_REMOTE_PLAYER_DISCONNECTED>;

		struct RemotePlayerDisconnectedAction;

		struct GameAction<E_ACTION_SHOWTIME_INTRO_START>;

		struct ShowtimeIntro;

		struct BaseGameActionQueue<13312>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct WorldStuntAction;

		struct PowerParkResultAction;

		struct CompletedFburnChallengesData;

		struct CarScoreData;

		struct ScoringOutputInterface;

		struct OnlineScoringOutputInterface;

		struct RaceCarRaceDistanceInterface;

		struct InterestInterface;

		struct ControllerInput;

		struct OutputBuffer;

		struct PreWorldInputBuffer;

		struct OnlineRoadRulesPersonalBestRecvEvent;

		struct OnlineRoadRulesUploadedEvent;

		struct OnlineRoadRulesDownloadedEvent;

		struct OnlineRoadRulesConnectInfoEvent;

		struct RoadRulesScoreRequestEvent;

		struct BuddyRemovedEvent;

		struct RoadRulesBatchQueryAction;

		struct GameEventQueue;

		struct GameAction<E_ACTION_PREPARE_FOR_MODE>;

		struct GameAction<E_ACTION_STOP_MODE_INTRO>;

		struct StopModeIntroAction;

		struct GameAction<E_ACTION_MARKED_MAN_LOADED>;

		struct MarkedManLoadedAction;

		struct GameAction<E_ACTION_START_PLAYING_MODE>;

		struct StartPlayingModeAction;

		struct GameAction<E_ACTION_FINISHED_MODE>;

		struct FinishedModeAction;

		struct GameAction<E_ACTION_SHOW_MODE_RESULTS>;

		struct ShowModeResultsAction;

		struct GameAction<E_ACTION_UPDATE_CAR_STATS>;

		struct SendCarStatsAction;

		struct GameAction<E_ACTION_DRIVE_THRU_JUNK_YARD>;

		struct JunkYardDriveThruAction;

		struct GameAction<E_ACTION_TROPHY_UNLOCK>;

		struct TrophyUnlockAction;

		struct GameAction<E_ACTION_WORLD_STUNT_PERFORMED>;

		struct GameAction<E_ACTION_POWER_PARK_RESULT>;

		struct GameAction<E_ACTION_SOUND_TRIGGER>;

		struct GameAction<E_ACTION_ON_STUNT_ELEMENT_COMPLETE>;

		struct OnStuntElementCompleteAction;

		struct GameAction<E_ACTION_CAR_SELECTION_CHANGED>;

		struct CarSelectionChangedAction;

		struct GameAction<E_ACTION_REMOTE_PLAYER_DISCONNECTED>;

		struct RemotePlayerDisconnectedAction;

		struct GameAction<E_ACTION_ROAD_RULES_ENTER_ROAD>;

		struct RoadRulesEnterRoadAction;

		struct GameAction<E_ACTION_ROAD_RULES_BATCH_QUERY>;

		struct GameAction<E_ACTION_UPCOMING_ROAD_CHANGE>;

		struct GameAction<E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE>;

		struct RoadRulesUpdateTargetScoreAction;

		struct GameAction<E_ACTION_ONLINE_GAME_RESULT>;

		struct OnlineGameResults;

		struct GameAction<E_ACTION_ONLINE_ROUND_RESULT>;

		struct OnlineRoundResults;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_UPDATE>;

		struct FreeburnChallengeUpdateAction;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateAction;

		struct GameEvent<E_EVENT_GAME_TRAINING_REQUEST>;

		struct RequestGameTrainingEvent;

		struct GameEvent<E_EVENT_COMPLETED_STUNT>;

		struct CompletedStuntEvent;

		struct GameEvent<E_EVENT_INPROGRESS_STUNT>;

		struct InProgressStuntEvent;

		struct GameEvent<E_EVENT_START_NETWORK_GAME>;

		struct StartNetworkGameEvent;

		struct GameEvent<E_EVENT_START_NETWORK_ROUND>;

		struct StartNetworkRoundEvent;

		struct GameEvent<E_EVENT_BUDDY_REMOVED>;

		struct GameEvent<E_EVENT_TRIGGER_CRASH_BREAKER>;

		struct TriggerCrashBreakerEvent;

		struct GameEvent<E_EVENT_PICKUP>;

		struct PickupEvent;

		struct GameEvent<E_EVENT_VEHICLE_LEAPT>;

		struct VehicleLeaptEvent;

		struct GameEvent<E_EVENT_AFTERTOUCH>;

		struct AftertouchEvent;

		struct GameEvent<E_EVENT_VEHICLE_IMPACT>;

		struct VehicleImpactEvent;

		struct GameEvent<E_EVENT_PLAYER_FINISHED_MODE>;

		struct PlayerFinishedModeEvent;

		struct GameEvent<E_EVENT_VEHICLE_CRASHED>;

		struct VehicleCrashedEvent;

		struct GameEvent<E_EVENT_TRAFFIC_CHECKING>;

		struct TrafficCheckingEvent;

		struct GameEvent<E_EVENT_CRASH_COMBO_ITEM>;

		struct CrashComboItemEvent;

		struct GameEvent<E_EVENT_ROAD_RULE_ROAD_SCORE_REQUEST>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_PB_RECV>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_UPLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_DOWNLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_CONNECT_INFO>;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_RECEIVED>;

		struct OnlineImageReceivedEvent;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_SEND_ABORTED>;

		struct OnlineImageCaptureAbortedEvent;

		struct GameEvent<E_EVENT_BURNING_HOME_RUN_SWITCHED_RUNNER>;

		struct BurningHomeRunSwitchRunnerEvent;

		struct GameEvent<E_EVENT_JUST_BOUNCED>;

		struct JustBouncedEvent;

		struct GameEvent<E_EVENT_JUST_APPLIED_EXTRA_SPIN>;

		struct JustAppliedExtraSpinEvent;

		struct GameEvent<E_EVENT_ONLINE_NEW_HOST>;

		struct OnlineNewHostEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS>;

		struct FburnChallengeSuccessEvent;

		struct GameEvent<E_EVENT_MODE_MANAGER_ROUTE_INFO>;

		struct ModeManagerRouteInfoEvent;

		struct BaseGameActionQueue<13312>;

		struct GameStateToControllerInterface;

		struct ControllerToGameStateInterface;

		struct GameStateToGuiInterface;

		struct PostWorldInputBuffer;

		struct BaseGameActionQueue<256>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct CarScoreData;

		struct GameEventQueue;

		struct GameAction<E_ACTION_COMPLETED_STUNT>;

		struct CompletedStuntAction;

		struct GameEvent<E_EVENT_ENTER_REPLAY>;

		struct EnterReplayEvent;

		struct GameEvent<E_EVENT_LEAVE_REPLAY>;

		struct LeaveReplayEvent;

		struct BaseGameActionQueue<13312>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct CompletedFburnChallengesData;

		struct FlybyData;

		struct CarScoreData;

		struct ScoringOutputInterface;

		struct OnlineScoringOutputInterface;

		struct RaceCarRaceDistanceInterface;

		struct GameEventQueue;

		struct GameEvent<E_EVENT_RECORD_PROP_HIT>;

		struct RecordPropHitEvent;

		struct GameEvent<E_EVENT_OVERHEAD_SIGN_HIT>;

		struct HitOverheadSignEvent;

		struct GameEvent<E_EVENT_VEHICLE_IMPACT>;

		struct VehicleImpactEvent;

		struct GameAction<E_ACTION_RESET_PLAYER_CAR>;

		struct GameAction<E_ACTION_START_MODE_INTRO>;

		struct StartModeIntroAction;

		struct GameAction<E_ACTION_SHOW_MODE_RESULTS>;

		struct ShowModeResultsAction;

		struct GameAction<E_ACTION_DRIVE_THRU_JUNK_YARD>;

		struct JunkYardDriveThruAction;

		struct GameAction<E_ACTION_TROPHY_UNLOCK>;

		struct TrophyUnlockAction;

		struct GameAction<E_ACTION_ROAD_RAGE_PLAYER_DAMAGE>;

		struct RoadRagePlayerDamageAction;

		struct GameAction<E_ACTION_CAR_SELECT_TRANSITION_IN>;

		struct CarSelectTransitionInAction;

		struct GameAction<E_ACTION_GAME_TRAINING>;

		struct GameTrainingAction;

		struct GameAction<E_ACTION_SOUND_TRIGGER>;

		struct GameAction<E_ACTION_NEW_CAR_UNLOCKED>;

		struct GameAction<E_ACTION_ON_JUMP_START>;

		struct OnJumpStartAction;

		struct GameAction<E_ACTION_ON_STUNT_ELEMENT_COMPLETE>;

		struct OnStuntElementCompleteAction;

		struct GameAction<E_ACTION_ROAD_RULES_ENTER_ROAD>;

		struct RoadRulesEnterRoadAction;

		struct GameAction<E_ACTION_UPCOMING_ROAD_CHANGE>;

		struct GameAction<E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE>;

		struct RoadRulesUpdateTargetScoreAction;

		struct GameAction<E_ACTION_PLAYER_IN_SHORTCUT>;

		struct PlayerInShortcutAction;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE>;

		struct FreeburnChallengeAction;

		struct BaseGameActionQueue<13312>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
		struct RCEntityActiveRaceCarOutputInterface;

		struct RCEntityGlobalRaceCarOutputInterface;

		struct BoostOutputInfo;

		struct CarsInTheRaceData;

		struct InputBuffer_PreScene;

	}

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
		struct RCEntityActiveRaceCarOutputInterface;

		struct RCEntityGlobalRaceCarOutputInterface;

		struct BoostOutputInfo;

		struct CarsInTheRaceData;

		struct RCEntityPlayerResetInterface;

		struct CreateRivalInTrafficSystemEvent;

		struct RemoveRivalFromTrafficSystemEvent;

		struct InputBuffer_PreScene;

		struct OutputBuffer_PreScene;

		struct OutputBuffer_PrePhysics;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct WorldStuntAction;

		struct PowerParkResultAction;

		struct CompletedFburnChallengesData;

		struct CarScoreData;

		struct ScoringOutputInterface;

		struct OnlineScoringOutputInterface;

		struct RaceCarRaceDistanceInterface;

		struct InterestInterface;

		struct ControllerInput;

		struct OutputBuffer;

		struct PreWorldInputBuffer;

		struct OnlineRoadRulesPersonalBestRecvEvent;

		struct OnlineRoadRulesUploadedEvent;

		struct OnlineRoadRulesDownloadedEvent;

		struct OnlineRoadRulesConnectInfoEvent;

		struct RoadRulesScoreRequestEvent;

		struct BuddyRemovedEvent;

		struct RoadRulesBatchQueryAction;

		struct GameEventQueue;

		struct GameAction<E_ACTION_PREPARE_FOR_MODE>;

		struct GameAction<E_ACTION_STOP_MODE_INTRO>;

		struct StopModeIntroAction;

		struct GameAction<E_ACTION_MARKED_MAN_LOADED>;

		struct MarkedManLoadedAction;

		struct GameAction<E_ACTION_SET_TRAFFIC_SCALE_BASED_ON_RANK>;

		struct SetTrafficScaleBasedOnRankAction;

		struct GameAction<E_ACTION_FINISHED_MODE>;

		struct FinishedModeAction;

		struct GameAction<E_ACTION_SHOW_MODE_RESULTS>;

		struct ShowModeResultsAction;

		struct GameAction<E_ACTION_STOP_MODE>;

		struct StopModeAction;

		struct GameAction<E_ACTION_SET_COUNTDOWN>;

		struct SetCountdownAction;

		struct GameAction<E_ACTION_KILLZONE>;

		struct KillzoneAction;

		struct GameAction<E_ACTION_TROPHY_UNLOCK>;

		struct TrophyUnlockAction;

		struct GameAction<E_ACTION_CAR_SELECT_TRANSITION_IN>;

		struct CarSelectTransitionInAction;

		struct GameAction<E_ACTION_CAR_SELECT_READY>;

		struct CarSelectReadyAction;

		struct GameAction<E_ACTION_CAR_SELECT_EXIT>;

		struct CarSelectExitAction;

		struct GameAction<E_ACTION_SHOWTIME_MODE_SWITCH>;

		struct ShowtimeModeSwitchAction;

		struct GameAction<E_ACTION_WORLD_STUNT_PERFORMED>;

		struct GameAction<E_ACTION_POWER_PARK_RESULT>;

		struct GameAction<E_ACTION_SOUND_TRIGGER>;

		struct GameAction<E_ACTION_ON_STUNT_ELEMENT_COMPLETE>;

		struct OnStuntElementCompleteAction;

		struct GameAction<E_ACTION_CAR_SELECTION_CHANGED>;

		struct CarSelectionChangedAction;

		struct GameAction<E_ACTION_EMPTY_TRAFFIC_POOL>;

		struct EmptyTrafficMemoryPool;

		struct GameAction<E_ACTION_HUD_MESSAGE_DIST_TO_FINISH>;

		struct HUDMessageDistanceToFinishAction;

		struct GameAction<E_ACTION_ROAD_RULES_ENTER_ROAD>;

		struct RoadRulesEnterRoadAction;

		struct GameAction<E_ACTION_ROAD_RULES_BATCH_QUERY>;

		struct GameAction<E_ACTION_UPCOMING_ROAD_CHANGE>;

		struct GameAction<E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE>;

		struct RoadRulesUpdateTargetScoreAction;

		struct GameAction<E_ACTION_ONLINE_GAME_RESULT>;

		struct OnlineGameResults;

		struct GameAction<E_ACTION_ONLINE_ROUND_RESULT>;

		struct OnlineRoundResults;

		struct GameAction<E_ACTION_RESTART_TRAFFIC>;

		struct RestartTrafficAction;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_UPDATE>;

		struct FreeburnChallengeUpdateAction;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateAction;

		struct GameEvent<E_EVENT_STREAMING_COMPLETE>;

		struct GameEvent<E_EVENT_START_NETWORK_GAME>;

		struct StartNetworkGameEvent;

		struct GameEvent<E_EVENT_START_NETWORK_ROUND>;

		struct StartNetworkRoundEvent;

		struct GameEvent<E_EVENT_BUDDY_REMOVED>;

		struct GameEvent<E_EVENT_TRIGGER_CRASH_BREAKER>;

		struct TriggerCrashBreakerEvent;

		struct GameEvent<E_EVENT_PICKUP>;

		struct PickupEvent;

		struct GameEvent<E_EVENT_VEHICLE_LEAPT>;

		struct VehicleLeaptEvent;

		struct GameEvent<E_EVENT_PLAYER_FINISHED_MODE>;

		struct PlayerFinishedModeEvent;

		struct GameEvent<E_EVENT_CRASH_COMBO_ITEM>;

		struct CrashComboItemEvent;

		struct GameEvent<E_EVENT_ROAD_RULE_ROAD_SCORE_REQUEST>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_PB_RECV>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_UPLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_DOWNLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_CONNECT_INFO>;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_RECEIVED>;

		struct OnlineImageReceivedEvent;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_SEND_ABORTED>;

		struct OnlineImageCaptureAbortedEvent;

		struct GameEvent<E_EVENT_BURNING_HOME_RUN_SWITCHED_RUNNER>;

		struct BurningHomeRunSwitchRunnerEvent;

		struct GameEvent<E_EVENT_ONLINE_NEW_HOST>;

		struct OnlineNewHostEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS>;

		struct FburnChallengeSuccessEvent;

		struct GameEvent<E_EVENT_MODE_MANAGER_ROUTE_INFO>;

		struct ModeManagerRouteInfoEvent;

		struct BaseGameActionQueue<13312>;

		struct GameStateToControllerInterface;

		struct ControllerToGameStateInterface;

		struct GameStateToGuiInterface;

		struct PostWorldInputBuffer;

		struct BaseGameActionQueue<256>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
		struct RCEntityActiveRaceCarOutputInterface;

		struct RCEntityGlobalRaceCarOutputInterface;

		struct BoostOutputInfo;

		struct CarsInTheRaceData;

		struct RCEntityPlayerResetInterface;

		struct CreateRivalInTrafficSystemEvent;

		struct RemoveRivalFromTrafficSystemEvent;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct RaceCarRaceDistanceInterface;

		struct GameEventQueue;

		struct BaseGameActionQueue<13312>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct WorldStuntAction;

		struct PowerParkResultAction;

		struct CompletedFburnChallengesData;

		struct CarScoreData;

		struct ScoringOutputInterface;

		struct OnlineScoringOutputInterface;

		struct RaceCarRaceDistanceInterface;

		struct InterestInterface;

		struct ControllerInput;

		struct OutputBuffer;

		struct PreWorldInputBuffer;

		struct OnlineRoadRulesPersonalBestRecvEvent;

		struct OnlineRoadRulesUploadedEvent;

		struct OnlineRoadRulesDownloadedEvent;

		struct OnlineRoadRulesConnectInfoEvent;

		struct RoadRulesScoreRequestEvent;

		struct BuddyRemovedEvent;

		struct RoadRulesBatchQueryAction;

		struct GameEventQueue;

		struct RoadRulesEnterRoadAction;

		struct RoadRulesUpdateTargetScoreAction;

		struct GameEvent<E_EVENT_GAME_TRAINING_REQUEST>;

		struct RequestGameTrainingEvent;

		struct GameEvent<E_EVENT_START_NETWORK_GAME>;

		struct StartNetworkGameEvent;

		struct GameEvent<E_EVENT_START_NETWORK_ROUND>;

		struct StartNetworkRoundEvent;

		struct GameEvent<E_EVENT_BUDDY_REMOVED>;

		struct GameEvent<E_EVENT_TRIGGER_CRASH_BREAKER>;

		struct TriggerCrashBreakerEvent;

		struct GameEvent<E_EVENT_PICKUP>;

		struct PickupEvent;

		struct GameEvent<E_EVENT_VEHICLE_LEAPT>;

		struct VehicleLeaptEvent;

		struct GameEvent<E_EVENT_PLAYER_FINISHED_MODE>;

		struct PlayerFinishedModeEvent;

		struct GameEvent<E_EVENT_CRASH_COMBO_ITEM>;

		struct CrashComboItemEvent;

		struct GameEvent<E_EVENT_PLAYER_ROUTE_UPDATED>;

		struct PlayerRouteUpdatedEvent;

		struct GameEvent<E_EVENT_ROAD_RULE_ROAD_SCORE_REQUEST>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_PB_RECV>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_UPLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_DOWNLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_CONNECT_INFO>;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_RECEIVED>;

		struct OnlineImageReceivedEvent;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_SEND_ABORTED>;

		struct OnlineImageCaptureAbortedEvent;

		struct GameEvent<E_EVENT_BURNING_HOME_RUN_SWITCHED_RUNNER>;

		struct BurningHomeRunSwitchRunnerEvent;

		struct GameEvent<E_EVENT_ONLINE_NEW_HOST>;

		struct OnlineNewHostEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS>;

		struct FburnChallengeSuccessEvent;

		struct GameEvent<E_EVENT_MODE_MANAGER_ROUTE_INFO>;

		struct ModeManagerRouteInfoEvent;

		struct GameAction<E_ACTION_PREPARE_FOR_MODE>;

		struct GameAction<E_ACTION_STOP_MODE_INTRO>;

		struct StopModeIntroAction;

		struct GameAction<E_ACTION_MARKED_MAN_LOADED>;

		struct MarkedManLoadedAction;

		struct GameAction<E_ACTION_FINISHED_MODE>;

		struct FinishedModeAction;

		struct GameAction<E_ACTION_SHOW_MODE_RESULTS>;

		struct ShowModeResultsAction;

		struct GameAction<E_ACTION_STOP_MODE>;

		struct StopModeAction;

		struct GameAction<E_ACTION_SET_PLAYER_CAR_DRIVER>;

		struct SetPlayerCarDriverAction;

		struct GameAction<E_ACTION_REQUEST_ROUTE_INFO>;

		struct RequestRouteInfoAction;

		struct GameAction<E_ACTION_DRIVE_THRU_JUNK_YARD>;

		struct JunkYardDriveThruAction;

		struct GameAction<E_ACTION_RACE_CAR_REACHED_CHECKPOINT>;

		struct RaceCarReachedCheckpointAction;

		struct GameAction<E_ACTION_RACE_CAR_REACHED_FINISH>;

		struct RaceCarReachedFinishAction;

		struct GameAction<E_ACTION_TROPHY_UNLOCK>;

		struct TrophyUnlockAction;

		struct GameAction<E_ACTION_WORLD_STUNT_PERFORMED>;

		struct GameAction<E_ACTION_POWER_PARK_RESULT>;

		struct GameAction<E_ACTION_UPDATE_ROAD_RAGE_MADNESS>;

		struct UpdateRoadRageMadnessAction;

		struct GameAction<E_ACTION_SOUND_TRIGGER>;

		struct GameAction<E_ACTION_ON_STUNT_ELEMENT_COMPLETE>;

		struct OnStuntElementCompleteAction;

		struct GameAction<E_ACTION_CAR_SELECTION_CHANGED>;

		struct CarSelectionChangedAction;

		struct GameAction<E_ACTION_ON_PLAYER_TAKEDOWN>;

		struct OnPlayerTakedownAction;

		struct GameAction<E_ACTION_ROAD_RULES_ENTER_ROAD>;

		struct GameAction<E_ACTION_ROAD_RULES_BATCH_QUERY>;

		struct GameAction<E_ACTION_UPCOMING_ROAD_CHANGE>;

		struct GameAction<E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE>;

		struct GameAction<E_ACTION_ONLINE_GAME_RESULT>;

		struct OnlineGameResults;

		struct GameAction<E_ACTION_ONLINE_ROUND_RESULT>;

		struct OnlineRoundResults;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_UPDATE>;

		struct FreeburnChallengeUpdateAction;

		struct BaseGameActionQueue<13312>;

		struct GameStateToControllerInterface;

		struct ControllerToGameStateInterface;

		struct GameStateToGuiInterface;

		struct PostWorldInputBuffer;

		struct BaseGameActionQueue<256>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
		struct RCEntityActiveRaceCarOutputInterface;

		struct RCEntityGlobalRaceCarOutputInterface;

		struct BoostOutputInfo;

		struct CarsInTheRaceData;

		struct RCEntityPlayerResetInterface;

		struct CreateRivalInTrafficSystemEvent;

		struct RemoveRivalFromTrafficSystemEvent;

		struct OutputBuffer_Prepare;

		struct InputBuffer_PreScene;

		struct OutputBuffer_PreScene;

		struct InputBuffer_PostScene;

		struct OutputBuffer_PostScene;

		struct InputBuffer_PrePhysics;

		struct OutputBuffer_PrePhysics;

		struct InputBuffer_PostPhysics;

		struct OutputBuffer_PostPhysics;

		struct InputBuffer_GenerateDispatchLists;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct CarScoreData;

		struct ScoringOutputInterface;

		struct OnlineScoringOutputInterface;

		struct RaceCarRaceDistanceInterface;

		struct GameEventQueue;

		struct GameAction<E_ACTION_PROP_SMASH_PROGRESSION>;

		struct PropSmashReportAction;

		struct GameAction<E_ACTION_PREPARE_FOR_MODE>;

		struct GameAction<E_ACTION_STOP_MODE>;

		struct StopModeAction;

		struct GameEvent<E_EVENT_RECORD_PROP_HIT>;

		struct RecordPropHitEvent;

		struct GameEvent<E_EVENT_OVERHEAD_SIGN_HIT>;

		struct HitOverheadSignEvent;

		struct GameEvent<E_EVENT_REQUEST_PROP_PROGRESSION>;

		struct RequestPropProgression;

		struct GameEvent<E_EVENT_RIVAL_UPDATE_REQUESTED>;

		struct RivalUpdateRequestedEvent;

		struct BaseGameActionQueue<13312>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct WorldStuntAction;

		struct PowerParkResultAction;

		struct CompletedFburnChallengesData;

		struct CarScoreData;

		struct ScoringOutputInterface;

		struct OnlineScoringOutputInterface;

		struct RaceCarRaceDistanceInterface;

		struct InterestInterface;

		struct ControllerInput;

		struct OutputBuffer;

		struct PreWorldInputBuffer;

		struct OnlineRoadRulesPersonalBestRecvEvent;

		struct OnlineRoadRulesUploadedEvent;

		struct OnlineRoadRulesDownloadedEvent;

		struct OnlineRoadRulesConnectInfoEvent;

		struct RoadRulesScoreRequestEvent;

		struct BuddyRemovedEvent;

		struct RoadRulesBatchQueryAction;

		struct GameEventQueue;

		struct GameAction<E_ACTION_PREPARE_FOR_MODE>;

		struct GameAction<E_ACTION_STOP_MODE_INTRO>;

		struct StopModeIntroAction;

		struct GameAction<E_ACTION_MARKED_MAN_LOADED>;

		struct MarkedManLoadedAction;

		struct GameAction<E_ACTION_FINISHED_MODE>;

		struct FinishedModeAction;

		struct GameAction<E_ACTION_SHOW_MODE_RESULTS>;

		struct ShowModeResultsAction;

		struct GameAction<E_ACTION_STOP_MODE>;

		struct StopModeAction;

		struct GameAction<E_ACTION_SET_TAKEDOWN_CAMERA_STATE>;

		struct SetTakedownCameraAction;

		struct GameAction<E_ACTION_SET_PLAYER_CAR_DRIVER>;

		struct SetPlayerCarDriverAction;

		struct GameAction<E_ACTION_RESET_RACE_CAR_CRASHING>;

		struct ResetRaceCarCrashingAction;

		struct GameAction<E_ACTION_TROPHY_UNLOCK>;

		struct TrophyUnlockAction;

		struct GameAction<E_ACTION_ROAD_RAGE_PLAYER_DAMAGE>;

		struct RoadRagePlayerDamageAction;

		struct GameAction<E_ACTION_WORLD_STUNT_PERFORMED>;

		struct GameAction<E_ACTION_POWER_PARK_RESULT>;

		struct GameAction<E_ACTION_SOUND_TRIGGER>;

		struct GameAction<E_ACTION_ON_STUNT_ELEMENT_COMPLETE>;

		struct OnStuntElementCompleteAction;

		struct GameAction<E_ACTION_CAR_SELECTION_CHANGED>;

		struct CarSelectionChangedAction;

		struct GameAction<E_ACTION_REMOTE_PLAYER_DISCONNECTED>;

		struct RemotePlayerDisconnectedAction;

		struct GameAction<E_ACTION_ROAD_RULES_ENTER_ROAD>;

		struct RoadRulesEnterRoadAction;

		struct GameAction<E_ACTION_ROAD_RULES_BATCH_QUERY>;

		struct GameAction<E_ACTION_UPCOMING_ROAD_CHANGE>;

		struct GameAction<E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE>;

		struct RoadRulesUpdateTargetScoreAction;

		struct GameAction<E_ACTION_ONLINE_GAME_RESULT>;

		struct OnlineGameResults;

		struct GameAction<E_ACTION_ONLINE_ROUND_RESULT>;

		struct OnlineRoundResults;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_UPDATE>;

		struct FreeburnChallengeUpdateAction;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateAction;

		struct GameEvent<E_EVENT_PLAYER_CRASH_ENDING>;

		struct PlayerCrashEndingEvent;

		struct GameEvent<E_EVENT_RECORD_PROP_HIT>;

		struct RecordPropHitEvent;

		struct GameEvent<E_EVENT_OVERHEAD_SIGN_HIT>;

		struct HitOverheadSignEvent;

		struct GameEvent<E_EVENT_START_NETWORK_GAME>;

		struct StartNetworkGameEvent;

		struct GameEvent<E_EVENT_START_NETWORK_ROUND>;

		struct StartNetworkRoundEvent;

		struct GameEvent<E_EVENT_BUDDY_REMOVED>;

		struct GameEvent<E_EVENT_TRIGGER_CRASH_BREAKER>;

		struct TriggerCrashBreakerEvent;

		struct GameEvent<E_EVENT_PICKUP>;

		struct PickupEvent;

		struct GameEvent<E_EVENT_VEHICLE_LEAPT>;

		struct VehicleLeaptEvent;

		struct GameEvent<E_EVENT_PLAYER_FINISHED_MODE>;

		struct PlayerFinishedModeEvent;

		struct GameEvent<E_EVENT_CRASH_COMBO_ITEM>;

		struct CrashComboItemEvent;

		struct GameEvent<E_EVENT_ROAD_RULE_ROAD_SCORE_REQUEST>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_PB_RECV>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_UPLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_DOWNLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_CONNECT_INFO>;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_RECEIVED>;

		struct OnlineImageReceivedEvent;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_SEND_ABORTED>;

		struct OnlineImageCaptureAbortedEvent;

		struct GameEvent<E_EVENT_BURNING_HOME_RUN_SWITCHED_RUNNER>;

		struct BurningHomeRunSwitchRunnerEvent;

		struct GameEvent<E_EVENT_ONLINE_NEW_HOST>;

		struct OnlineNewHostEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS>;

		struct FburnChallengeSuccessEvent;

		struct GameEvent<E_EVENT_MODE_MANAGER_ROUTE_INFO>;

		struct ModeManagerRouteInfoEvent;

		struct BaseGameActionQueue<13312>;

		struct GameStateToControllerInterface;

		struct ControllerToGameStateInterface;

		struct GameStateToGuiInterface;

		struct PostWorldInputBuffer;

		struct BaseGameActionQueue<256>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnStuntModeScoring.h:45
	namespace RaceCarEntityModuleIO {
		struct RCEntityActiveRaceCarOutputInterface;

		struct RCEntityGlobalRaceCarOutputInterface;

		struct BoostOutputInfo;

		struct CarsInTheRaceData;

		struct RCEntityPlayerResetInterface;

		struct OutputBuffer_Prepare;

		struct InputBuffer_PreScene;

		struct OutputBuffer_PreScene;

		struct OutputBuffer_PrePhysics;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct WorldStuntAction;

		struct PowerParkResultAction;

		struct CompletedFburnChallengesData;

		struct FlybyData;

		struct CarScoreData;

		struct ScoringOutputInterface;

		struct OnlineScoringOutputInterface;

		struct RaceCarRaceDistanceInterface;

		struct InterestInterface;

		struct ControllerInput;

		struct OutputBuffer;

		struct PreWorldInputBuffer;

		struct OnlineRoadRulesPersonalBestRecvEvent;

		struct OnlineRoadRulesUploadedEvent;

		struct OnlineRoadRulesDownloadedEvent;

		struct OnlineRoadRulesConnectInfoEvent;

		struct RoadRulesScoreRequestEvent;

		struct BuddyRemovedEvent;

		struct RoadRulesBatchQueryAction;

		struct GameEventQueue;

		struct GameAction<E_ACTION_COMPLETED_STUNT>;

		struct CompletedStuntAction;

		struct GameAction<E_ACTION_PREPARE_FOR_MODE>;

		struct GameAction<E_ACTION_STOP_MODE_INTRO>;

		struct StopModeIntroAction;

		struct GameAction<E_ACTION_MARKED_MAN_LOADED>;

		struct MarkedManLoadedAction;

		struct GameAction<E_ACTION_START_PLAYING_MODE>;

		struct StartPlayingModeAction;

		struct GameAction<E_ACTION_FINISHED_MODE>;

		struct FinishedModeAction;

		struct GameAction<E_ACTION_SHOW_MODE_RESULTS>;

		struct ShowModeResultsAction;

		struct GameAction<E_ACTION_UPDATE_CAR_STATS>;

		struct SendCarStatsAction;

		struct GameAction<E_ACTION_EVENT_AT_JUNCTION_AVAILABLE>;

		struct SendJunctionPlayerIsAtAction;

		struct GameAction<E_ACTION_DRIVE_THRU_JUNK_YARD>;

		struct JunkYardDriveThruAction;

		struct GameAction<E_ACTION_TROPHY_UNLOCK>;

		struct TrophyUnlockAction;

		struct GameAction<E_ACTION_JUST_BOUNCED>;

		struct JustBouncedAction;

		struct GameAction<E_ACTION_WORLD_STUNT_PERFORMED>;

		struct GameAction<E_ACTION_POWER_PARK_RESULT>;

		struct GameAction<E_ACTION_SOUND_TRIGGER>;

		struct GameAction<E_ACTION_ON_STUNT_ELEMENT_COMPLETE>;

		struct OnStuntElementCompleteAction;

		struct GameAction<E_ACTION_CAR_SELECTION_CHANGED>;

		struct CarSelectionChangedAction;

		struct GameAction<E_ACTION_REMOTE_PLAYER_DISCONNECTED>;

		struct RemotePlayerDisconnectedAction;

		struct GameAction<E_ACTION_ROAD_RULES_ENTER_ROAD>;

		struct RoadRulesEnterRoadAction;

		struct GameAction<E_ACTION_ROAD_RULES_BATCH_QUERY>;

		struct GameAction<E_ACTION_UPCOMING_ROAD_CHANGE>;

		struct GameAction<E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE>;

		struct RoadRulesUpdateTargetScoreAction;

		struct GameAction<E_ACTION_ONLINE_GAME_RESULT>;

		struct OnlineGameResults;

		struct GameAction<E_ACTION_ONLINE_ROUND_RESULT>;

		struct OnlineRoundResults;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_UPDATE>;

		struct FreeburnChallengeUpdateAction;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateAction;

		struct GameEvent<E_EVENT_RECORD_PROP_HIT>;

		struct RecordPropHitEvent;

		struct GameEvent<E_EVENT_OVERHEAD_SIGN_HIT>;

		struct HitOverheadSignEvent;

		struct GameEvent<E_EVENT_START_NETWORK_GAME>;

		struct StartNetworkGameEvent;

		struct GameEvent<E_EVENT_START_NETWORK_ROUND>;

		struct StartNetworkRoundEvent;

		struct GameEvent<E_EVENT_BUDDY_REMOVED>;

		struct GameEvent<E_EVENT_TRIGGER_CRASH_BREAKER>;

		struct TriggerCrashBreakerEvent;

		struct GameEvent<E_EVENT_PICKUP>;

		struct PickupEvent;

		struct GameEvent<E_EVENT_VEHICLE_LEAPT>;

		struct VehicleLeaptEvent;

		struct GameEvent<E_EVENT_PLAYER_FINISHED_MODE>;

		struct PlayerFinishedModeEvent;

		struct GameEvent<E_EVENT_CRASH_COMBO_ITEM>;

		struct CrashComboItemEvent;

		struct GameEvent<E_EVENT_ROAD_RULE_ROAD_SCORE_REQUEST>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_PB_RECV>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_UPLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_DOWNLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_CONNECT_INFO>;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_RECEIVED>;

		struct OnlineImageReceivedEvent;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_SEND_ABORTED>;

		struct OnlineImageCaptureAbortedEvent;

		struct GameEvent<E_EVENT_BURNING_HOME_RUN_SWITCHED_RUNNER>;

		struct BurningHomeRunSwitchRunnerEvent;

		struct GameEvent<E_EVENT_ONLINE_NEW_HOST>;

		struct OnlineNewHostEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS>;

		struct FburnChallengeSuccessEvent;

		struct GameEvent<E_EVENT_MODE_MANAGER_ROUTE_INFO>;

		struct ModeManagerRouteInfoEvent;

		struct BaseGameActionQueue<13312>;

		struct GameStateToControllerInterface;

		struct ControllerToGameStateInterface;

		struct GameStateToGuiInterface;

		struct PostWorldInputBuffer;

		struct BaseGameActionQueue<256>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct BaseGameActionQueue<13312>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		struct WorldStuntAction;

		struct PowerParkResultAction;

		struct CompletedFburnChallengesData;

		struct CarScoreData;

		struct ScoringOutputInterface;

		struct OnlineScoringOutputInterface;

		struct RaceCarRaceDistanceInterface;

		struct InterestInterface;

		struct ControllerInput;

		struct OutputBuffer;

		struct PreWorldInputBuffer;

		struct OnlineRoadRulesPersonalBestRecvEvent;

		struct OnlineRoadRulesUploadedEvent;

		struct OnlineRoadRulesDownloadedEvent;

		struct OnlineRoadRulesConnectInfoEvent;

		struct RoadRulesScoreRequestEvent;

		struct BuddyRemovedEvent;

		struct RoadRulesBatchQueryAction;

		struct GameEventQueue;

		struct GameAction<E_ACTION_PREPARE_FOR_MODE>;

		struct GameAction<E_ACTION_STOP_MODE_INTRO>;

		struct StopModeIntroAction;

		struct GameAction<E_ACTION_MARKED_MAN_LOADED>;

		struct MarkedManLoadedAction;

		struct GameAction<E_ACTION_FINISHED_MODE>;

		struct FinishedModeAction;

		struct GameAction<E_ACTION_SHOW_MODE_RESULTS>;

		struct ShowModeResultsAction;

		struct GameAction<E_ACTION_TROPHY_UNLOCK>;

		struct TrophyUnlockAction;

		struct GameAction<E_ACTION_WORLD_STUNT_PERFORMED>;

		struct GameAction<E_ACTION_POWER_PARK_RESULT>;

		struct GameAction<E_ACTION_SOUND_TRIGGER>;

		struct GameAction<E_ACTION_ON_STUNT_ELEMENT_COMPLETE>;

		struct OnStuntElementCompleteAction;

		struct GameAction<E_ACTION_CAR_SELECTION_CHANGED>;

		struct CarSelectionChangedAction;

		struct GameAction<E_ACTION_ROAD_RULES_ENTER_ROAD>;

		struct RoadRulesEnterRoadAction;

		struct GameAction<E_ACTION_ROAD_RULES_BATCH_QUERY>;

		struct GameAction<E_ACTION_UPCOMING_ROAD_CHANGE>;

		struct GameAction<E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE>;

		struct RoadRulesUpdateTargetScoreAction;

		struct GameAction<E_ACTION_ONLINE_GAME_RESULT>;

		struct OnlineGameResults;

		struct GameAction<E_ACTION_ONLINE_ROUND_RESULT>;

		struct OnlineRoundResults;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_UPDATE>;

		struct FreeburnChallengeUpdateAction;

		struct GameAction<E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateAction;

		struct GameEvent<E_EVENT_START_NETWORK_GAME>;

		struct StartNetworkGameEvent;

		struct GameEvent<E_EVENT_START_NETWORK_ROUND>;

		struct StartNetworkRoundEvent;

		struct GameEvent<E_EVENT_BUDDY_REMOVED>;

		struct GameEvent<E_EVENT_TRIGGER_CRASH_BREAKER>;

		struct TriggerCrashBreakerEvent;

		struct GameEvent<E_EVENT_PICKUP>;

		struct PickupEvent;

		struct GameEvent<E_EVENT_VEHICLE_LEAPT>;

		struct VehicleLeaptEvent;

		struct GameEvent<E_EVENT_PLAYER_FINISHED_MODE>;

		struct PlayerFinishedModeEvent;

		struct GameEvent<E_EVENT_CRASH_COMBO_ITEM>;

		struct CrashComboItemEvent;

		struct GameEvent<E_EVENT_ROAD_RULE_ROAD_SCORE_REQUEST>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_PB_RECV>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_UPLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_DOWNLOADED>;

		struct GameEvent<E_EVENT_ONLINE_ROAD_RULES_CONNECT_INFO>;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_RECEIVED>;

		struct OnlineImageReceivedEvent;

		struct GameEvent<E_EVENT_ONLINE_IMAGE_SEND_ABORTED>;

		struct OnlineImageCaptureAbortedEvent;

		struct GameEvent<E_EVENT_BURNING_HOME_RUN_SWITCHED_RUNNER>;

		struct BurningHomeRunSwitchRunnerEvent;

		struct GameEvent<E_EVENT_ONLINE_NEW_HOST>;

		struct OnlineNewHostEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS_UPDATE>;

		struct FburnChallengeSuccessUpdateEvent;

		struct GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS>;

		struct FburnChallengeSuccessEvent;

		struct GameEvent<E_EVENT_MODE_MANAGER_ROUTE_INFO>;

		struct ModeManagerRouteInfoEvent;

		struct BaseGameActionQueue<13312>;

		struct GameStateToControllerInterface;

		struct ControllerToGameStateInterface;

		struct GameStateToGuiInterface;

		struct PostWorldInputBuffer;

		struct BaseGameActionQueue<256>;

	}

	// BrnStuntModeScoring.h:59
	const int32_t KI_MAX_RECENT_JUMPS = 256;

	// BrnStuntModeScoring.h:60
	const int32_t KI_MAX_RECENT_PROPS = 64;

	// BrnStuntModeScoring.h:61
	const int32_t KI_NUM_STUNTS_TO_DISPLAY = 1;

}

