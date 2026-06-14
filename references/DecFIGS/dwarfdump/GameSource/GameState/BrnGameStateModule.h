// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnGameStateModule.h:97
	const CgsDev::PerfMonCpuPage KE_GAMESTATE_PERFMON_PAGE;

	// BrnGameStateModule.h:99
	const int32_t KI_VEHICLE_SELECT_LIST_MAX = 92;

	// BrnGameStateModule.h:100
	const int32_t KI_MAX_SIMULTANEOUS_SHOWTIME_CRASHES = 8;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct GameStateModule {
	public:
		// BrnGameStateModule.h:1397
		StuntModeScoring::AchievementManager * GetAchievementManager();

		// BrnGameStateModule.h:1200
		void SetInActiveGameModeState();

		// BrnGameStateModule.h:1056
		BrnProgression::ProgressionManager * GetProgressionManager();

		// BrnGameStateModule.h:1034
		BrnGameState::FlybyManager * GetFlybyManager();

		// BrnGameStateModule.h:982
		bool IsOnlineGameMode();

		// BrnGameStateModule.h:1331
		const WorldMap2D * GetWorldMap2D() const;

		// BrnGameStateModule.h:1372
		CgsID GetCurrentCarId() const;

		// BrnGameStateModule.h:1265
		const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface * GetLastGlobalRaceCarInterface() const;

		// BrnGameStateModule.h:949
		EActiveRaceCarIndex GetPlayerActiveRaceCarIndex();

		// BrnGameStateModule.h:1287
		RoadRulesRecvData::NetworkPlayerID GetLocalPlayerNetworkID();

		// BrnGameStateModule.h:1403
		bool IsPlayerInJunkyard();

		// BrnGameStateModule.h:1212
		void SetNotInGameState();

		// BrnGameStateModule.h:1385
		CgsID GetCurrentWheelId() const;

		// BrnGameStateModule.h:1274
		const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface * GetLastActiveRaceCarInterface() const;

		// BrnGameStateModule.h:1068
		const ModeManager * GetModeManager() const;

		// BrnGameStateModule.h:1250
		CgsSystem::EFrameRateManagerType GetOfflineFrameRateType();

		// BrnGameStateModule.h:1188
		void SetActiveGameModeState();

		// BrnGameStateModule.h:1391
		const TakedownManager * GetTakedownManager() const;

		// BrnGameStateModule.h:1409
		bool IsInPictureParadise();

	}

	// BrnGameStateModule.h:97
	const CgsDev::PerfMonCpuPage KE_GAMESTATE_PERFMON_PAGE;

	// BrnGameStateModule.h:99
	const int32_t KI_VEHICLE_SELECT_LIST_MAX = 92;

	// BrnGameStateModule.h:100
	const int32_t KI_MAX_SIMULTANEOUS_SHOWTIME_CRASHES = 8;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct GameStateModule {
		// BrnGameStateModule.h:403
		enum EPauseFlags {
			E_PAUSE_NONE = 0,
			E_PAUSE_STREAMING = 1,
			E_PAUSE_PLAYER = 2,
			E_PAUSE_GUI_CRASHNAV = 4,
			E_PAUSE_CONTROLLER_DISCONNECTED = 8,
			E_PAUSE_PLAYING_REPLAY = 16,
			E_PAUSE_GUI_CARSELECT = 32,
			E_PAUSE_GAME_TRAINING = 64,
		}

		// BrnGameStateModule.h:416
		enum EControllerState {
			E_CONTROLLERSTATE_NOT_IN_GAME = 0,
			E_CONTROLLERSTATE_CAR_SELECT = 1,
			E_CONTROLLERSTATE_INACTIVE_GAME_MODE_STATE = 2,
			E_CONTROLLERSTATE_ACTIVE_GAME_MODE_STATE = 3,
		}

		// BrnGameStateModule.h:696
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_MANAGER = 1,
			E_PREPARESTAGE_MODE_DATA_ACQUIRING = 2,
			E_PREPARESTAGE_LOAD_TRIGGER_DATA = 3,
			E_PREPARESTAGE_STUNT_MANAGER = 4,
			E_PREPARESTAGE_REQUEST_CHALLENGE_LIST = 5,
			E_PREPARESTAGE_RECEIVE_CHALLENGE_LIST = 6,
			E_PREPARESTAGE_REQUEST_VEHICLE_LIST = 7,
			E_PREPARESTAGE_RECEIVE_VEHICLE_LIST = 8,
			E_PREPARESTAGE_REQUEST_WHEEL_LIST = 9,
			E_PREPARESTAGE_RECEIVE_WHEEL_LIST = 10,
			E_PREPARESTAGE_REQUEST_PLAYERCARCOLOURS = 11,
			E_PREPARESTAGE_RECEIVE_PLAYERCARCOLOURS = 12,
			E_PREPARESTAGE_MODEMANAGER = 13,
			E_PREPARESTAGE_TAKEDOWNMANAGER = 14,
			E_PREPARESTAGE_MUGSHOTMANAGER = 15,
			E_PREPARESTAGE_PAYBACKMANAGER = 16,
			E_PREPARESTAGE_INVITEMANAGER = 17,
			E_PREPARESTAGE_FLYBYMANAGER = 18,
			E_PREPARESTAGE_NETWORKROUNDMANAGER = 19,
			E_PREPARESTAGE_PROGRESSION = 20,
			E_PREPARESTAGE_RICH_PRESENCE = 21,
			E_PREPARESTAGE_ACHIEVEMENT_MANAGER = 22,
			E_PREPARESTAGE_STREET_MANAGER = 23,
			E_PREPARESTAGE_IMAGE_MANAGER = 24,
			E_PREPARESTAGE_RUMBLE_MANAGER = 25,
			E_PREPARESTAGE_DONE = 26,
		}

		// BrnGameStateModule.h:727
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_IMAGE_MANAGER = 1,
			E_RELEASESTAGE_STREET_MANAGER = 2,
			E_RELEASESTAGE_ACHIEVEMENT_MANAGER = 3,
			E_RELEASESTAGE_RICH_PRESENCE = 4,
			E_RELEASESTAGE_PROGRESSION = 5,
			E_RELEASESTAGE_NETWORKROUNDMANAGER = 6,
			E_RELEASESTAGE_FLYBYMANAGER = 7,
			E_RELEASESTAGE_INVITEMANAGER = 8,
			E_RELEASESTAGE_PAYBACKMANAGER = 9,
			E_RELEASESTAGE_MUGSHOTMANAGER = 10,
			E_RELEASESTAGE_TAKEDOWNMANAGER = 11,
			E_RELEASESTAGE_MODEMANAGER = 12,
			E_RELEASESTAGE_MANAGER = 13,
			E_RELEASESTAGE_DONE = 14,
		}

	}

	// BrnGameStateModule.h:97
	const CgsDev::PerfMonCpuPage KE_GAMESTATE_PERFMON_PAGE;

	// BrnGameStateModule.h:99
	const int32_t KI_VEHICLE_SELECT_LIST_MAX = 92;

	// BrnGameStateModule.h:100
	const int32_t KI_MAX_SIMULTANEOUS_SHOWTIME_CRASHES = 8;

}

// BrnGameStateModule.h:114
struct BrnGameState::GameStateModule : public CgsModule::ModuleSingleBuffered {
private:
	// BrnGameStateModule.h:763
	BrnGameState::GameStateModule::EPrepareStage mePrepareStage;

	// BrnGameStateModule.h:764
	BrnGameState::GameStateModule::EReleaseStage meReleaseStage;

	// BrnGameStateModule.h:767
	TakedownManager mTakedownManager;

	// BrnGameStateModule.h:768
	MugshotManager mMugshotManager;

	// BrnGameStateModule.h:769
	PaybackManager mPaybackManager;

	// BrnGameStateModule.h:770
	GameStateInviteManager mGameStateInviteManager;

	// BrnGameStateModule.h:771
	ModeManager mModeManager;

	// BrnGameStateModule.h:772
	TriggerQueryManager mTriggerQueryManager;

	// BrnGameStateModule.h:773
	DriveThruManager mDriveThruManager;

	// BrnGameStateModule.h:774
	TrainingManager mTrainingManager;

	// BrnGameStateModule.h:775
	RumbleManager mRumbleManager;

	// BrnGameStateModule.h:776
	NetworkRoundManager mNetworkRoundManager;

	// BrnGameStateModule.h:777
	ProgressionManager mProgressionManager;

	// Unknown accessibility
	// BrnGameStateRichPresenceManager.h:48
	typedef RichPresenceManagerPS3 RichPresenceManager;

	// BrnGameStateModule.h:778
	GameStateModule::RichPresenceManager mRichPresenceManager;

	// BrnGameStateModule.h:779
	StuntModeScoring::AchievementManager mAchievementManager;

	// BrnGameStateModule.h:780
	RoadRulesManager mRoadRulesManager;

	// BrnGameStateModule.h:781
	CarSelectManager mCarSelectManager;

	// BrnGameStateModule.h:782
	OnlineCarSelectManager mOnlineCarSelectManager;

	// BrnGameStateModule.h:783
	StuntManager mStuntManager;

	// Unknown accessibility
	// BrnGameStateImageManager.h:36
	typedef GameStateImageManagerBase GameStateImageManager;

	// BrnGameStateModule.h:784
	GameStateModule::GameStateImageManager mImageManager;

	// BrnGameStateModule.h:787
	OfflineFlybyManager mOfflineFlybyManager;

	// BrnGameStateModule.h:788
	OnlineFlybyManager mOnlineFlybyManager;

	// BrnGameStateModule.h:791
	InputBuffer::GuiEventQueue mOutputGuiEventQueue;

	// BrnGameStateModule.h:792
	float32_t[7] mafRivalTailingTimes;

	// BrnGameStateModule.h:793
	uint32_t muNetworkGameRandomSeed;

	// BrnGameStateModule.h:794
	EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

	// BrnGameStateModule.h:795
	EGlobalRaceCarIndex mePlayerGlobalRaceCarIndex;

	// BrnGameStateModule.h:796
	bool[8] mabRaceCarCrashing;

	// BrnGameStateModule.h:797
	bool mbIsFirstUpdate;

	// BrnGameStateModule.h:798
	bool mbFreeburnChallengeSelectorVisible;

	// BrnGameStateModule.h:799
	BrnResource::ChallengeListEntry::EFreeburnChallengeStyle meFreeburnChallengeStyle;

	// BrnGameStateModule.h:800
	TimerStatusInterface mTimerStatusInterface;

	// BrnGameStateModule.h:802
	GameStateDebugComponent mDebugComponent;

	// BrnGameStateModule.h:803
	ResetPlayerDebugComponent mResetPlayerDebugComponent;

	// BrnGameStateModule.h:805
	BrnGameState::GameStateModule::EPauseFlags mePauseFlags;

	// BrnGameStateModule.h:806
	BrnGameState::GameStateModule::EControllerState meControllerState;

	// BrnGameStateModule.h:807
	RoadRulesRecvData::NetworkPlayerID mLocalPlayerNetworkID;

	// BrnGameStateModule.h:809
	bool mbEnableWaitForStreaming;

	// BrnGameStateModule.h:810
	bool mbWaitingForStreaming;

	// BrnGameStateModule.h:811
	bool mbWaitingToPutPlayerInJunkyard;

	// BrnGameStateModule.h:812
	int32_t miSendStreamingActionInFrames;

	// BrnGameStateModule.h:813
	bool[4] mabModuleStreamingComplete;

	// BrnGameStateModule.h:816
	CarSelectionChangedAction mCachedCarSelectChangedAction;

	// BrnGameStateModule.h:820
	EventReceiverQueue<3072,16> mReceiverQueue;

	// BrnGameStateModule.h:823
	PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface mLastActiveRaceCarInterface;

	// BrnGameStateModule.h:824
	PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface mLastGlobalRaceCarInterface;

	// BrnGameStateModule.h:825
	GameEventQueue mLastGameEventQueue;

	// BrnGameStateModule.h:826
	InputBuffer::TakedownEventQueue mTakedownEventQueueCache;

	// BrnGameStateModule.h:827
	VehicleManagerOutputInterface::RaceCarCrashEventQueue mRaceCarCrashEventQueue;

	// BrnGameStateModule.h:828
	ContactSpyInterface mContactSpyInterface;

	// BrnGameStateModule.h:829
	VehicleOutputInterface mVehicleOutputInterface;

	// BrnGameStateModule.h:830
	PostWorldInputBuffer::TrafficTypeResponseQueue mLastTrafficTypeResponseQueue;

	// BrnGameStateModule.h:831
	PostWorldInputBuffer::AICarOutputInterface mLastAICarOutputInterface;

	// BrnGameStateModule.h:833
	LightTriggerId mLightTriggerPlayerIsAt;

	// BrnGameStateModule.h:834
	uint32_t muJunctionIDPlayerIsAt;

	// BrnGameStateModule.h:835
	bool mbCurrentJunctionIsNewlyDiscovered;

	// BrnGameStateModule.h:836
	bool mbPlayerCanStartEvent;

	// BrnGameStateModule.h:837
	bool mbPopupShownForCurrentJunction;

	// BrnGameStateModule.h:840
	CgsID mCurrentCarId;

	// BrnGameStateModule.h:841
	CgsID mCurrentWheelId;

	// BrnGameStateModule.h:842
	const VehicleList * mpVehicleList;

	// BrnGameStateModule.h:843
	const BrnResource::WheelList * mpWheelList;

	// BrnGameStateModule.h:845
	ResourcePtr<BrnWorld::GlobalColourPalette> mpPlayerCarColours;

	// BrnGameStateModule.h:847
	const ChallengeList * mpFreeburnChallengeList;

	// BrnGameStateModule.h:850
	bool mbAllowSnapRaceMode;

	// BrnGameStateModule.h:851
	float32_t mfTimeSpentDoingStartRaceAction;

	// BrnGameStateModule.h:852
	float32_t mfTimeSpentDoingCrashStartAction;

	// BrnGameStateModule.h:853
	float32_t mfTimeSinceLastCrashMode;

	// BrnGameStateModule.h:854
	float32_t mfShowtimeIntroTimeLeft;

	// BrnGameStateModule.h:855
	float32_t mfShowtimeIntroSteering;

	// BrnGameStateModule.h:856
	Vector3 mShowtimeIntroOriginalDirection;

	// BrnGameStateModule.h:857
	bool mbShowtimeIntroHasTouchedGround;

	// BrnGameStateModule.h:858
	bool mbDebugLimitSnapRaceStartConditions;

	// BrnGameStateModule.h:859
	BrnGameState::EShowtimeBehaviour meShowtimeBehaviour;

	// BrnGameStateModule.h:860
	bool mbToggleShowtimeBehaviour;

	// BrnGameStateModule.h:861
	bool mbWasCrashModeLastFrame;

	// BrnGameStateModule.h:862
	Stack<uint16_t,8> mShowtimePendingTrafficIndexStack;

	// BrnGameStateModule.h:863
	int32_t miShowtimePendingFrameDelay;

	// BrnGameStateModule.h:864
	uint16_t muShowtimeRequestedTrafficIndex;

	// BrnGameStateModule.h:867
	StreetManager mStreetManager;

	// BrnGameStateModule.h:870
	Matrix44Affine mPlayerCarTransform;

	// BrnGameStateModule.h:871
	bool mbDrawCrashDebugText;

	// BrnGameStateModule.h:872
	bool mbDrawSignatureTakedownRegionText;

	// BrnGameStateModule.h:873
	bool mbDebugMakeAllTakedownsSignature;

	// BrnGameStateModule.h:874
	uint32_t muDebugSigTDRegionIndex;

	// BrnGameStateModule.h:876
	uint32_t miPlayerMaxStatsDPadDownCount;

	// BrnGameStateModule.h:877
	float32_t mfSimTimeStep;

	// BrnGameStateModule.h:879
	bool mbPropSystemNeedsProgression;

	// BrnGameStateModule.h:882
	bool mbIsUpdating;

	// BrnGameStateModule.h:887
	int32_t miTriggersPostPM;

	// BrnGameStateModule.h:888
	int32_t miTriggersPrePM;

	// BrnGameStateModule.h:889
	int32_t miShowTimeUpdate;

	// BrnGameStateModule.h:890
	int32_t miCarSelectManagerUpdate;

	// BrnGameStateModule.h:892
	int32_t miGameStatePrePM;

	// BrnGameStateModule.h:893
	int32_t miGameStatePostPM;

	// BrnGameStateModule.h:894
	int32_t miTakedownPM;

	// BrnGameStateModule.h:895
	int32_t miDetectModeStartsPM;

	// BrnGameStateModule.h:896
	int32_t miRoadRulesPM;

	// BrnGameStateModule.h:897
	int32_t miDriveThrusPM;

	// BrnGameStateModule.h:898
	int32_t miProcessEventsPM;

	// BrnGameStateModule.h:899
	int32_t miEmmUpdatePM;

	// BrnGameStateModule.h:900
	int32_t miModeManagerPrePM;

	// BrnGameStateModule.h:901
	int32_t miModeManagerPostPM;

	// BrnGameStateModule.h:902
	int32_t miCopyingAndResettingPM;

	// BrnGameStateModule.h:903
	int32_t miProcessContactsPM;

	// BrnGameStateModule.h:904
	int32_t miStreetManagerPM;

public:
	// BrnGameStateModule.cpp:172
	virtual void Construct();

	// BrnGameStateModule.cpp:419
	virtual bool Prepare(BrnGameState::GameStateModuleIO::OutputBuffer *, IOBufferStack *, const AllocatorList *);

	// BrnGameStateModule.cpp:834
	virtual bool Release(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateModule.cpp:318
	virtual void Destruct();

	// BrnGameStateModule.cpp:1032
	void PreWorldUpdate(IOBufferStack *, IOBufferStack *, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, BrnUpdateSet);

	// BrnGameStateModule.cpp:1373
	void EmmPreWorldUpdate(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, const GameEventQueue *, bool);

	// BrnGameStateModule.cpp:1580
	void PostWorldUpdate(IOBufferStack *, IOBufferStack *, const PostWorldInputBuffer *, BrnUpdateSet);

	// BrnGameStateModule.cpp:4328
	void OnPlayerCarChange(CgsID, CgsID, InputBuffer::GameActionQueue *, bool);

	// BrnGameStateModule.cpp:4389
	void OnSpecialEventPlayerCarChange(CgsID, CgsID, InputBuffer::GameActionQueue *, bool);

	// BrnGameStateModule.cpp:5243
	CgsID GetOriginalCarId(CgsID);

	// BrnGameStateModule.cpp:4422
	void ApplyCarStats(CgsID, InputBuffer::GameActionQueue *);

	// BrnGameStateModule.h:921
	void SetDefaultGameState();

	// BrnGameStateModule.h:933
	InputBuffer::GuiEventQueue * GetOutputGuiEventQueue();

	// BrnGameStateModule.h:949
	EActiveRaceCarIndex GetPlayerActiveRaceCarIndex();

	// BrnGameStateModule.h:965
	EGlobalRaceCarIndex GetPlayerGlobalRaceCarIndex();

	// BrnGameStateModule.h:982
	bool IsOnlineGameMode();

	// BrnGameStateModule.h:997
	bool IsShowtimeGameMode();

	// BrnGameStateModule.h:1015
	bool IsRaceCarCrashing(EActiveRaceCarIndex);

	// BrnGameStateModule.h:1034
	BrnGameState::FlybyManager * GetFlybyManager();

	// BrnGameStateModule.cpp:5920
	void DebugMemoryInit(BrnGameState::GameStateModule *);

	// BrnGameStateModule.h:1050
	const BrnProgression::ProgressionManager * GetProgressionManager() const;

	// BrnGameStateModule.h:1056
	BrnProgression::ProgressionManager * GetProgressionManager();

	// BrnGameStateModule.h:1068
	const ModeManager * GetModeManager() const;

	// BrnGameStateModule.h:1079
	const BrnGameState::RoadRulesManager * GetRoadRulesManager() const;

	// BrnGameStateModule.h:1397
	StuntModeScoring::AchievementManager * GetAchievementManager();

	// BrnGameStateModule.h:1391
	const TakedownManager * GetTakedownManager() const;

	// BrnGameStateModule.h:1094
	TriggerQueryManager * GetTriggerQueryManager();

	// BrnGameStateModule.cpp:6001
	void WaitForStreaming(InputBuffer::GameActionQueue *);

	// BrnGameStateModule.h:1118
	bool IsWaitingForStreaming() const;

	// BrnGameStateModule.h:1106
	uint32_t GetNetworkRandomSeed();

	// BrnGameStateModule.h:1188
	void SetActiveGameModeState();

	// BrnGameStateModule.h:1200
	void SetInActiveGameModeState();

	// BrnGameStateModule.h:1212
	void SetNotInGameState();

	// BrnGameStateModule.cpp:7314
	void OnModeFinish(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateModule.cpp:7291
	void OnModeEnd(bool);

	// BrnGameStateModule.h:1228
	CgsSystem::EFrameRateManagerType GetOnlineFrameRateType();

	// BrnGameStateModule.h:1250
	CgsSystem::EFrameRateManagerType GetOfflineFrameRateType();

	// BrnGameStateModule.cpp:6546
	EActiveRaceCarIndex GetActiveRaceCarIndex(RoadRulesRecvData::NetworkPlayerID);

	// BrnGameStateModule.cpp:6567
	RoadRulesRecvData::NetworkPlayerID GetNetworkPlayerID(EActiveRaceCarIndex);

	// BrnGameStateModule.h:1265
	const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface * GetLastGlobalRaceCarInterface() const;

	// BrnGameStateModule.h:1274
	const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface * GetLastActiveRaceCarInterface() const;

	// BrnGameStateModule.h:1287
	RoadRulesRecvData::NetworkPlayerID GetLocalPlayerNetworkID();

	// BrnGameStateModule.cpp:1564
	void BridgeRumbleToInput(PreWorldInputBuffer *, const TimerStatusInterface *);

	// BrnGameStateModule.cpp:6623
	void CheckIfPlayerIsAtJunctionWithAnEvent(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateModule.cpp:6925
	void CheckForAllEventsBeingFound(const BrnProgression::Profile *, InputBuffer::GameActionQueue *);

	// BrnGameStateModule.cpp:6881
	void CheckForAllEventsOfATypeFound(const BrnProgression::Profile *, InputBuffer::GameActionQueue *, BrnProgression::RaceEventData::EModeType);

	// BrnGameStateModule.cpp:7129
	void RequestStreamingForVehicleSelection(InputBuffer::GameActionQueue *, CgsID);

	// BrnGameStateModule.cpp:5617
	void SendRouteRequestAction(const LandmarkRouteRequestEvent *, InputBuffer::GameActionQueue *, BrnAI::RouteMapModuleIO::RequestOwner);

	// BrnGameStateModule.h:1300
	void ToggleShowtimeBehaviour();

	// BrnGameStateModule.h:1316
	void SetCarUnlockAlreadyShown(CgsID);

	// BrnGameStateModule.h:1331
	const WorldMap2D * GetWorldMap2D() const;

	// BrnGameStateModule.cpp:6592
	BrnGameState::GameStateModuleIO::EGameModeType TranslateRaceEventModeToGameMode(BrnProgression::RaceEventData::EModeType);

	// BrnGameStateModule.cpp:6609
	BrnGameState::GameStateModuleIO::EGameModeType TranslateOnlineRaceEventModeToGameMode(BrnProgression::RaceEventData::EOnlineModeType);

	// BrnGameStateModule.h:1345
	void SetCurrentCarId(CgsID);

	// BrnGameStateModule.h:1359
	void SetCurrentWheelId(CgsID);

	// BrnGameStateModule.h:1372
	CgsID GetCurrentCarId() const;

	// BrnGameStateModule.h:1385
	CgsID GetCurrentWheelId() const;

	// BrnGameStateModule.h:1403
	bool IsPlayerInJunkyard();

	// BrnGameStateModule.h:1409
	bool IsInPictureParadise();

	// BrnGameStateModule.h:1415
	const VehicleList * GetVehicleList() const;

private:
	// BrnGameStateModule.cpp:365
	void ClearData();

	// BrnGameStateModule.cpp:1478
	void UpdateShowtimeMode(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, const ContactSpyInterface *, const PostWorldInputBuffer::TrafficTypeResponseQueue *);

	// BrnGameStateModule.cpp:1716
	// Declaration
	void ProcessGameEvents(const GameEventQueue *, InputBuffer::GameActionQueue *, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameStateModule.cpp:1968
		using namespace CgsDev::Message;

		// BrnGameStateModule.cpp:2343
		using namespace CgsDev::Message;

		// BrnGameStateModule.cpp:2484
		using namespace CgsDev::Message;

	}

	// BrnGameStateModule.cpp:4618
	void ProcessTakedownEvents(InputBuffer::GameActionQueue *, const InputBuffer::TakedownEventQueue *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateModule.cpp:7084
	void HandleChangePlayerCarEvent(const ChangePlayerCarEvent *, InputBuffer::GameActionQueue *);

	// BrnGameStateModule.h:460
	void SubmitTriggerQueries(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateModule.cpp:4936
	void DetectModeStarts(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateModule.cpp:5063
	// Declaration
	void StartModeAtLights(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, BrnGameState::EGameModeStartMechanism) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameStateModule.cpp:5203
		using namespace CgsDev::Message;

	}

	// BrnGameStateModule.cpp:5275
	void StartCrashMode(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateModule.cpp:4455
	void UpdateRoadRulesManager(BrnGameState::GameStateModuleIO::OutputBuffer *, const ControllerInput *);

	// BrnGameStateModule.cpp:4524
	void SendAllRivalryData(InputBuffer::GameActionQueue *);

	// BrnGameStateModule.cpp:5306
	void SendVehicleImpactMessages(const VehicleImpactEvent *, InputBuffer::GameActionQueue *);

	// BrnGameStateModule.cpp:5343
	void SendResultsFinishedAction(InputBuffer::GameActionQueue *);

	// BrnGameStateModule.cpp:5935
	bool IsStreamingCompleteForAllModules();

	// BrnGameStateModule.cpp:5958
	void SetModuleStreamingComplete(bool);

	// BrnGameStateModule.cpp:5359
	void SendSetupPlayerCarEvent(InputBuffer::GameActionQueue *);

	// BrnGameStateModule.cpp:5425
	// Declaration
	void SendSetUpAllEventStartsMessage(BrnGameState::GameStateModuleIO::OutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameStateModule.cpp:5477
		using namespace CgsDev::Message;

	}

	// BrnGameStateModule.cpp:5513
	void SendSetUpAllDriveThrusMessage(InputBuffer::GameActionQueue *);

	// BrnGameStateModule.cpp:5577
	void SendSetLandmarkRacesAction(InputBuffer::GameActionQueue *);

	// BrnGameStateModule.cpp:5683
	void SendSpecificPreSetRacesModesAction(BrnGameState::GameStateModuleIO::EGameModeType, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateModule.cpp:5789
	void PreparedForInvite(InputBuffer::GameActionQueue *);

	// BrnGameStateModule.cpp:5833
	void RequestPause(BrnGameState::GameStateModule::EPauseFlags, InputBuffer::GameActionQueue *, bool, bool);

	// BrnGameStateModule.cpp:5877
	void RequestUnpause(BrnGameState::GameStateModule::EPauseFlags, InputBuffer::GameActionQueue *);

	// BrnGameStateModule.cpp:4764
	bool ShouldStartShowtimeMode(float32_t, bool, TimerRequests *);

	// BrnGameStateModule.cpp:4736
	bool IsInShowtimeIntro() const;

	// BrnGameStateModule.cpp:6368
	CgsID GetSpawnCar(const BrnProgression::Profile *);

	// BrnGameStateModule.cpp:4748
	float32_t GetShowtimeIntroSteering() const;

	// BrnGameStateModule.cpp:4859
	bool ShouldStartSnapRaceMode(bool, float32_t, BrnGameState::EGameModeStartMechanism *);

	// BrnGameStateModule.cpp:4840
	bool ShouldAllowTimedTutorialTips() const;

	// BrnGameStateModule.cpp:6042
	void SendDelayedActions(InputBuffer::GameActionQueue *);

	// BrnGameStateModule.cpp:6064
	void ProcessStreamingCompleteEvent(const StreamingCompleteEvent *, InputBuffer::GameActionQueue *);

	// BrnGameStateModule.cpp:6136
	void FinishStreaming(InputBuffer::GameActionQueue *);

	// BrnGameStateModule.cpp:6170
	void CheckForTailingRivals(BrnGameState::GameStateModuleIO::OutputBuffer *, const VehicleOutputInterface *, float32_t);

	// BrnGameStateModule.h:1132
	bool IsSimPaused(bool, bool) const;

	// BrnGameStateModule.h:1161
	bool IsAnythingPaused() const;

	// BrnGameStateModule.h:1173
	bool IsControllerActive() const;

	// BrnGameStateModule.cpp:5806
	bool IsEventUnlockedAtCurrentRank(const BrnProgression::RaceEventData *) const;

	// BrnGameStateModule.cpp:6246
	void OnEnterOnline(BrnGameState::GameStateModuleIO::OutputBuffer *, InputBuffer::GameActionQueue *);

	// BrnGameStateModule.cpp:6280
	void OnLeaveOnline(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateModule.cpp:6297
	void OnProfileLoaded(BrnGameState::GameStateModuleIO::OutputBuffer *, InputBuffer::GameActionQueue *);

	// BrnGameStateModule.cpp:6401
	CgsID FindNearestJunkyardID(Vector3);

	// GameStateBridges.cpp:39
	void CopyInputDataToPaybackManager(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *);

	// GameStateBridges.cpp:69
	void CopyInputDataToInviteManager(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *);

	// GameStateBridges.cpp:56
	void CopyInputDataToFlybyManager(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *);

	// BrnGameStateModule.cpp:5976
	void CacheTakedownManagerPostWorldInputData(const PostWorldInputBuffer *);

	// GameStateBridges.cpp:83
	void CopyScoringDataToOutput(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateModule.h:682
	void HandlePlayerAttackingRivals(InputBuffer::GameActionQueue *, const VehicleImpactEvent *);

	// BrnGameStateModule.cpp:6449
	void ProcessContacts(const PostWorldInputBuffer *);

	// BrnGameStateModule.cpp:6958
	// Declaration
	void GetListOfPlayerSelectableVehicles(Array<CgsID,92u> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameStateModule.cpp:7045
		using namespace CgsDev::Message;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct GameStateModule {
	public:
		// BrnGameStateModule.h:1056
		BrnProgression::ProgressionManager * GetProgressionManager();

		// BrnGameStateModule.h:1068
		const ModeManager * GetModeManager() const;

	}

	// BrnGameStateModule.h:97
	const CgsDev::PerfMonCpuPage KE_GAMESTATE_PERFMON_PAGE;

	// BrnGameStateModule.h:99
	const int32_t KI_VEHICLE_SELECT_LIST_MAX = 92;

	// BrnGameStateModule.h:100
	const int32_t KI_MAX_SIMULTANEOUS_SHOWTIME_CRASHES = 8;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct GameStateModule {
	public:
		// BrnGameStateModule.h:1372
		CgsID GetCurrentCarId() const;

		// BrnGameStateModule.h:1385
		CgsID GetCurrentWheelId() const;

		// BrnGameStateModule.h:949
		EActiveRaceCarIndex GetPlayerActiveRaceCarIndex();

		// BrnGameStateModule.h:1015
		bool IsRaceCarCrashing(EActiveRaceCarIndex);

	}

	// BrnGameStateModule.h:97
	const CgsDev::PerfMonCpuPage KE_GAMESTATE_PERFMON_PAGE;

	// BrnGameStateModule.h:99
	const int32_t KI_VEHICLE_SELECT_LIST_MAX = 92;

	// BrnGameStateModule.h:100
	const int32_t KI_MAX_SIMULTANEOUS_SHOWTIME_CRASHES = 8;

}

// BrnGameStateModule.h:114
void BrnGameState::GameStateModule::GameStateModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameStateModule.h:114
void BrnGameState::GameStateModule::~GameStateModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

