// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct BrnNetworkManager {
		// BrnNetworkManager.h:100
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_BASE_NETWORK_MANAGER = 1,
			E_PREPARESTAGE_SERVER_INTERFACE = 2,
			E_PREPARESTAGE_LOGIN_MANAGER = 3,
			E_PREPARESTAGE_LAUNCH_MANAGER = 4,
			E_PREPARESTAGE_CONNECTION_MANAGER = 5,
			E_PREPARESTAGE_MATCHMAKING_MANAGER = 6,
			E_PREPARESTAGE_SUSPENSION_MANAGER = 7,
			E_PREPARESTAGE_POSTROUND_MANAGER = 8,
			E_PREPARESTAGE_CAMERA = 9,
			E_PREPARESTAGE_TEXTURE_COMPRESSOR = 10,
			E_PREPARESTAGE_BUDDY_MANAGER = 11,
			E_PREPARESTAGE_STANDINGS_MANAGER = 12,
			E_PREPARESTAGE_TRAFFIC_SYNC_MANAGER = 13,
			E_PREPARESTAGE_STATS_MANAGER = 14,
			E_PREPARESTAGE_SCOREBOARD_MANAGER = 15,
			E_PREPARESTAGE_AGGRESSIVE_DRIVING_MANAGER = 16,
			E_PREPARESTAGE_LIVE_REVENGE_MANAGER = 17,
			E_PREPARESTAGE_DIRTY_TRICK_MANAGER = 18,
			E_PREPARESTAGE_IMAGE_MANAGER = 19,
			E_PREPARESTAGE_GAMER_PICTURE_MANAGER = 20,
			E_PREPARESTAGE_NOTIFICATION_MANAGER = 21,
			E_PREPARESTAGE_INVITE_MANAGER = 22,
			E_PREPARESTAGE_SELECTED_ROUTES_MANAGER = 23,
			E_PREPARESTAGE_MARKED_MAN_MANAGER = 24,
			E_PREPARESTAGE_STATE_MANAGER = 25,
			E_PREPARESTAGE_ROAD_RULES_MANAGER = 26,
			E_PREPARESTAGE_CHALLEGE_SUCCESS_MANAGER = 27,
			E_PREPARESTAGE_GAMERCARD_MANAGER = 28,
			E_PREPARESTAGE_DONE = 29,
		}

		// BrnNetworkManager.h:134
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_GAMERCARD_MANAGER = 1,
			E_RELEASESTAGE_CHALLEGE_SUCCESS_MANAGER = 2,
			E_RELEASESTAGE_ROAD_RULES_MANAGER = 3,
			E_RELEASESTAGE_STATE_MANAGER = 4,
			E_RELEASESTAGE_MARKED_MAN_MANAGER = 5,
			E_RELEASESTAGE_SELECTED_ROUTES_MANAGER = 6,
			E_RELEASESTAGE_INVITE_MANAGER = 7,
			E_RELEASESTAGE_NOTIFICATION_MANAGER = 8,
			E_RELEASESTAGE_GAMER_PICTURE_MANAGER = 9,
			E_RELEASESTAGE_IMAGE_MANAGER = 10,
			E_RELEASESTAGE_DIRTY_TRICK_MANAGER = 11,
			E_RELEASESTAGE_LIVE_REVENGE_MANAGER = 12,
			E_RELEASESTAGE_AGGRESSIVE_DRIVING_MANAGER = 13,
			E_RELEASESTAGE_SCOREBOARD_MANAGER = 14,
			E_RELEASESTAGE_STATS_MANAGER = 15,
			E_RELEASESTAGE_TRAFFIC_SYNC_MANAGER = 16,
			E_RELEASESTAGE_STANDINGS_MANAGER = 17,
			E_RELEASESTAGE_BUDDY_MANAGER = 18,
			E_RELEASESTAGE_TEXTURE_COMPRESSOR = 19,
			E_RELEASESTAGE_CAMERA = 20,
			E_RELEASESTAGE_POSTROUND_MANAGER = 21,
			E_RELEASESTAGE_SUSPENSION_MANAGER = 22,
			E_RELEASESTAGE_MATCHMAKING_MANAGER = 23,
			E_RELEASESTAGE_CONNECTION_MANAGER = 24,
			E_RELEASESTAGE_LAUNCH_MANAGER = 25,
			E_RELEASESTAGE_LOGIN_MANAGER = 26,
			E_RELEASESTAGE_SERVERINTERFACE = 27,
			E_RELEASESTAGE_BASE_NETWORK_MANAGER = 28,
			E_RELEASESTAGE_DONE = 29,
		}

		// BrnNetworkManager.h:168
		enum ELoginEvent {
			E_LOGIN_EVENT_SHOW_TOS = 0,
			E_LOGIN_EVENT_SHOW_CREATE_ACCOUNT = 1,
			E_LOGIN_EVENT_SHOW_SHARE = 2,
			E_LOGIN_EVENT_SHOW_OPEN_US_ACCOUNT = 3,
			E_LOGIN_EVENT_SHOW_NO_AGREEMENT = 4,
			E_LOGIN_EVENT_SHOW_SIGN_IN = 5,
			E_LOGIN_EVENT_SHOW_CHAT_RESTRICTED = 6,
			E_LOGIN_EVENT_PROCEED = 7,
			E_LOGIN_EVENT_COUNT = 8,
		}

	}

}

// BrnNetworkManager.h:97
struct BrnNetwork::BrnNetworkManager : public NetworkManager {
private:
	// BrnNetworkManager.h:448
	BrnNetwork::BrnServerInterface mServerInterface;

	// Unknown accessibility
	// BrnNetworkLoginManager.h:44
	typedef BrnNetwork::LoginManagerPS3 LoginManager;

	// BrnNetworkManager.h:450
	BrnNetworkManager::LoginManager mLoginManager;

	// BrnNetworkManager.h:451
	LaunchManager mLaunchManager;

	// BrnNetworkManager.h:452
	ConnectionManager mConnectionManager;

	// BrnNetworkManager.h:453
	MatchMakingManager mMatchMakingManager;

	// BrnNetworkManager.h:454
	SuspensionManager mSuspensionManager;

	// BrnNetworkManager.h:455
	PostRoundManager mPostRoundManager;

	// BrnNetworkManager.h:456
	StandingsManager mStandingsManager;

	// BrnNetworkManager.h:457
	TrafficManager mTrafficManager;

	// Unknown accessibility
	// BrnNetworkBuddyManager.h:48
	typedef BrnNetwork::BuddyManagerPS3 BuddyManager;

	// BrnNetworkManager.h:458
	BrnNetworkManager::BuddyManager mBuddyManager;

	// BrnNetworkManager.h:459
	NetworkPlayerStatsManager mStatsManager;

	// BrnNetworkManager.h:460
	ScoreboardManager mScoreboardManager;

	// BrnNetworkManager.h:461
	NetworkAggressiveDrivingManager mAggressiveDrivingManager;

	// BrnNetworkManager.h:462
	LiveRevengeManager mLiveRevengeManager;

	// BrnNetworkManager.h:463
	NetworkDirtyTrickManager mDirtyTrickManager;

	// BrnNetworkManager.h:464
	NetworkImageManager mImageManager;

	// Unknown accessibility
	// BrnNetworkGamerPictureManager.h:43
	typedef GamerPictureManagerPS3 GamerPictureManager;

	// BrnNetworkManager.h:465
	BrnNetworkManager::GamerPictureManager mGamerPictureManager;

	// Unknown accessibility
	// BrnNetworkNotificationManager.h:44
	typedef BrnNetwork::NetworkNotificationManagerPS3 NetworkNotificationManager;

	// BrnNetworkManager.h:466
	BrnNetworkManager::NetworkNotificationManager mNetworkNotificationManager;

	// BrnNetworkManager.h:467
	NetworkInviteManager mNetworkInviteManager;

	// BrnNetworkManager.h:468
	SelectedRoutesManager mSelectedRoutesManager;

	// BrnNetworkManager.h:469
	MarkedManManager mMarkedManManager;

	// BrnNetworkManager.h:470
	StateManager mStateManager;

	// BrnNetworkManager.h:471
	NetworkRoadRulesManager mRoadRulesManager;

	// BrnNetworkManager.h:472
	ChallengeSuccessManager mChallengeSuccessManager;

	// Unknown accessibility
	// BrnNetworkGamerCardManager.h:45
	typedef NetworkGamerCardManagerPS3 GamerCardManager;

	// BrnNetworkManager.h:473
	BrnNetworkManager::GamerCardManager mGamerCardManager;

	// Unknown accessibility
	// BrnNetworkCamera.h:43
	typedef CameraPS3 Camera;

	// BrnNetworkManager.h:475
	BrnNetworkManager::Camera mCamera;

	// BrnNetworkManager.h:476
	NetworkTextureDXTCompress mTextureCompressor;

	// BrnNetworkManager.h:478
	CgsID mFreeBurnCarID;

	// BrnNetworkManager.h:479
	CgsID mFreeBurnWheelID;

	// BrnNetworkManager.h:481
	BrnWorld::EDistrict meCurrentDistrict;

	// BrnNetworkManager.h:483
	uint16_t mu16CarColourIndex;

	// BrnNetworkManager.h:484
	uint16_t mu16PaintFinishIndex;

	// BrnNetworkManager.h:486
	BrnNetwork::BrnNetworkManager::EPrepareStage mePrepareStage;

	// BrnNetworkManager.h:487
	BrnNetwork::BrnNetworkManager::EReleaseStage meReleaseStage;

	// BrnNetworkManager.h:489
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkManager.h:491
	TimerStatus * mpGameTimerStatus;

	// BrnNetworkManager.h:492
	Time mTime;

	// BrnNetworkManager.h:493
	float32_t mfTimeStep;

	// BrnNetworkManager.h:494
	int32_t miFrameNum;

	// BrnNetworkManager.h:495
	CgsSystem::EFrameRate meLocalConsoleFrameRate;

	// BrnNetworkManager.h:497
	int32_t miRoundNumber;

	// BrnNetworkManager.h:499
	bool mbHasFever;

	// BrnNetworkManager.h:500
	bool mbIsDeveloper;

	// BrnNetworkManager.h:501
	bool mbDiskReadErrorThisFrame;

	// BrnNetworkManager.h:502
	bool mbNotifyGameOfDisconnectAfterDiskError;

	// BrnNetworkManager.h:505
	BrnNetwork::BrnNetworkPlayer[7] maNetworkPlayer;

	// BrnNetworkManager.h:506
	BrnNetwork::PlayerMenuData[7] maNetworkPlayerMenuData;

	// BrnNetworkManager.h:507
	BrnNetwork::PlayerMenuData mLocalPlayerMenuSelections;

	// BrnNetworkManager.h:509
	RoadRulesRecvData::NetworkPlayerID mPlayerIDStatsGet;

	// BrnNetworkManager.h:510
	Time mLastStatsSentToOnlinePlayStamp;

	// BrnNetworkManager.h:512
	PlayerName mExportPlayerName;

	// BrnNetworkManager.h:515
	int32_t miPackTextureToSendToGuiPM;

	// BrnNetworkManager.h:516
	int32_t miCameraUpdatePM;

	// BrnNetworkManager.h:517
	int32_t miGamerPicUpdatPM;

	// BrnNetworkManager.h:518
	int32_t miCGSNetworkAfterSimPM;

	// BrnNetworkManager.h:519
	int32_t miNetworkManagerSelectedRoutesPM;

	// BrnNetworkManager.h:520
	int32_t miNetworkManagerOutputPlayerStatsPM;

	// BrnNetworkManager.h:521
	int32_t miNetworkManagerPostUpdatePM;

	// BrnNetworkManager.h:522
	int32_t miNetworkManagerMiscPM;

	// BrnNetworkManager.h:523
	int32_t miNetworkServerInterfacePM;

	// BrnNetworkManager.h:524
	int32_t miNetworkBuddyPM;

	// BrnNetworkManager.h:525
	int32_t miNetworkTrafficPM;

	// BrnNetworkManager.h:526
	int32_t miNetworkAggressiveDrivingPM;

	// BrnNetworkManager.h:527
	int32_t miNetworkDirtyTrickPM;

	// BrnNetworkManager.h:528
	int32_t miNetworkHostStatusPM;

	// BrnNetworkManager.h:529
	int32_t miNetworkNotificationPM;

	// BrnNetworkManager.h:530
	int32_t miNetworkInvitePM;

	// BrnNetworkManager.h:531
	int32_t miNetworkStatsPM;

	// BrnNetworkManager.h:532
	int32_t miNetworkLiveRevengePM;

	// BrnNetworkManager.h:533
	int32_t miNetworkScoreboardPM;

	// BrnNetworkManager.h:534
	int32_t miNetworkRoutesManagerPM;

	// BrnNetworkManager.h:535
	int32_t miNetworkStateManagerPM;

	// BrnNetworkManager.h:536
	int32_t miNetworkRoadRulesManagerPM;

	// BrnNetworkManager.h:537
	int32_t miNetworkChallengeManagerPM;

public:
	// BrnNetworkManager.h:186
	void Construct(BrnNetwork::BrnNetworkModule *, bool);

	// BrnNetworkManager.h:193
	bool Prepare(CgsSystem::EFrameRate, const LaunchData *, HeapMalloc *);

	// BrnNetworkManager.h:197
	bool Release();

	// BrnNetworkManager.h:201
	void Destruct();

	// BrnNetworkManager.h:209
	void ProcessBeforeSimulation(const PreSimulationInputBuffer *, BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, TimerStatus *, BrnUpdateSet);

	// BrnNetworkManager.h:215
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *, BrnUpdateSet);

	// BrnNetworkManager.h:218
	BrnNetwork::BrnServerInterface * GetServerInterface();

	// BrnNetworkManager.h:223
	void TriggerEventFromLogin(BrnNetwork::BrnNetworkManager::ELoginEvent, void *);

	// BrnNetworkManager.h:228
	void TriggerEventFromServerInterface(CgsNetwork::EServerInterfaceEvent, void *);

	// BrnNetworkManager.h:235
	void JoinGameSession(char *);

	// BrnNetworkManager.h:240
	void JoinGameSessionByID(int32_t);

	// BrnNetworkManager.h:243
	Time GetTime() const;

	// BrnNetworkManager.h:246
	float32_t GetTimeStep() const;

	// BrnNetworkManager.h:249
	SuspensionManager * GetSuspensionManager();

	// BrnNetworkManager.h:252
	BrnNetworkManager::BuddyManager * GetBuddyManager();

	// BrnNetworkManager.h:255
	StandingsManager * GetStandingsManager();

	// BrnNetworkManager.h:258
	NetworkPlayerStatsManager * GetStatsManager();

	// BrnNetworkManager.h:261
	ScoreboardManager * GetScoreboardManager();

	// BrnNetworkManager.h:264
	BrnNetworkManager::GamerCardManager * GetGamerCardManager();

	// BrnNetworkManager.h:267
	LiveRevengeManager * GetLiveRevengeManager();

	// BrnNetworkManager.h:270
	BrnNetworkManager::Camera * GetCamera();

	// BrnNetworkManager.h:273
	BrnNetworkManager::GamerPictureManager * GetGamerPictureManager();

	// BrnNetworkManager.h:276
	NetworkImageManager * GetNetworkImageManager();

	// BrnNetworkManager.h:279
	TrafficManager * GetTrafficManager();

	// BrnNetworkManager.h:282
	NetworkAggressiveDrivingManager * GetAggressiveDrivingManager();

	// BrnNetworkManager.h:285
	SelectedRoutesManager * GetSelectedRoutesManager();

	// BrnNetworkManager.h:288
	BrnNetworkManager::LoginManager * GetLoginManager();

	// BrnNetworkManager.h:291
	LaunchManager * GetLaunchManager();

	// BrnNetworkManager.h:294
	ConnectionManager * GetConnectionManager();

	// BrnNetworkManager.h:297
	MatchMakingManager * GetMatchMakingManager();

	// BrnNetworkManager.h:300
	MarkedManManager * GetMarkedManManager();

	// BrnNetworkManager.h:303
	PostRoundManager * GetPostRoundManager();

	// BrnNetworkManager.h:306
	NetworkInviteManager * GetNetworkInviteManager();

	// BrnNetworkManager.h:309
	TimerStatus * GetTimerStatus();

	// BrnNetworkManager.h:312
	StateManager * GetStateManager();

	// BrnNetworkManager.h:315
	BrnNetworkManager::NetworkNotificationManager * GetNotificationManager();

	// BrnNetworkManager.h:318
	NetworkRoadRulesManager * GetRoadRulesManager();

	// BrnNetworkManager.h:321
	CgsSystem::EFrameRate GetLocalConsoleFrameRate();

	// BrnNetworkManager.h:324
	void SetRound(int32_t);

	// BrnNetworkManager.h:327
	int32_t GetRound() const;

	// BrnNetworkManager.h:332
	void PackTextureAndSendDisplayEventToGui(const NetworkTexture *, int32_t);

	// BrnNetworkManager.h:336
	bool IsLocalPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkManager.h:341
	void OutputPlayerStatsToGui(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkManager.h:344
	void OutputGameParameters();

	// BrnNetworkManager.h:347
	void OnGameLaunching();

	// BrnNetworkManager.h:350
	void OnGameStart();

	// BrnNetworkManager.h:353
	void OnRoundStart();

	// BrnNetworkManager.h:356
	void OnRoundFinish();

	// BrnNetworkManager.h:359
	void OnGameFinish();

	// BrnNetworkManager.h:362
	void OnEnterGame();

	// BrnNetworkManager.h:365
	void OnLeaveGame();

	// BrnNetworkManager.h:368
	bool IsDoingFreeBurnLobby();

	// Unknown accessibility
	// CgsMessage.h:85
	typedef uint8_t PackOrUnpackResult;

	// BrnNetworkManager.h:373
	BrnNetworkManager::PackOrUnpackResult PackOrUnpack(CgsNetwork::Message *, RoadRulesRecvData::NetworkPlayerID *);

	// BrnNetworkManager.h:378
	void CaptureTelemetryEvent(BrnNetwork::ETelemetryHook, const char *);

	// BrnNetworkManager.h:383
	void CaptureTelemetryEvent(BrnNetwork::ETelemetryHook, int32_t);

	// BrnNetworkManager.h:388
	void CaptureTelemetryEvent(BrnNetwork::ETelemetryHook, CgsID);

	// BrnNetworkManager.h:393
	void CaptureTelemetryEvent(BrnNetwork::ETelemetryHook, Time);

	// BrnNetworkManager.h:398
	void SetFreeBurnCar(CgsID, CgsID);

	// BrnNetworkManager.h:401
	CgsID GetFreeBurnCarID() const;

	// BrnNetworkManager.h:404
	CgsID GetFreeBurnWheelID() const;

	// BrnNetworkManager.h:408
	void SetCurrentDistrict(BrnWorld::EDistrict);

	// BrnNetworkManager.h:411
	BrnWorld::EDistrict GetCurrentDistrict() const;

	// BrnNetworkManager.h:415
	void SetCurrentCarColourIndex(uint16_t);

	// BrnNetworkManager.h:418
	uint16_t GetCurrentCarColourIndex() const;

	// BrnNetworkManager.h:422
	void SetCurrentPaintFinishIndex(uint16_t);

	// BrnNetworkManager.h:425
	uint16_t GetCurrentPaintFinishIndex() const;

	// BrnNetworkManager.h:430
	void ProcessNetworkTextureDecodeEvent(const NetworkInDxtDecodeImageEvent *);

	// BrnNetworkManager.h:433
	bool HasFever();

	// BrnNetworkManager.h:437
	void SetHasFever(bool);

	// BrnNetworkManager.h:440
	bool IsDeveloper();

	// BrnNetworkManager.h:444
	void SetIsDeveloper(bool);

private:
	// BrnNetworkManager.h:543
	int32_t GetMaxMessageSize(bool);

	// BrnNetworkManager.h:548
	void OutputPlayerStatusInfo(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkManager.h:553
	void OutputPlayerResultsInfo(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkManager.h:558
	void UpdateMenuDataFromPlayerParams(int32_t);

	// BrnNetworkManager.h:562
	void UnitTestFrameCountFunctions() const;

	// BrnNetworkManager.h:567
	bool GameHasFriendsIn(BrnNetwork::GameParams *);

	// BrnNetworkManager.h:572
	bool GameHasRivalsIn(BrnNetwork::GameParams *);

	// BrnNetworkManager.h:577
	void ProcessHLUpdateFlags(BrnUpdateSet);

	// BrnNetworkManager.h:584
	void PlayerManagerEventCallback(CgsNetwork::PlayerManager::EEvent, void *, void *);

	// BrnNetworkManager.h:590
	void SyncTimeClientReadyCallback(RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkManager.h:596
	void DxtDecodeCallback(void *, void *);

}

// BrnNetworkManager.h:97
struct BrnNetwork::BrnNetworkManager : public NetworkManager {
private:
	// BrnNetworkManager.h:448
	BrnNetwork::BrnServerInterface mServerInterface;

	// Unknown accessibility
	// BrnNetworkLoginManager.h:44
	typedef BrnNetwork::LoginManagerPS3 LoginManager;

	// BrnNetworkManager.h:450
	BrnNetworkManager::LoginManager mLoginManager;

	// BrnNetworkManager.h:451
	LaunchManager mLaunchManager;

	// BrnNetworkManager.h:452
	ConnectionManager mConnectionManager;

	// BrnNetworkManager.h:453
	MatchMakingManager mMatchMakingManager;

	// BrnNetworkManager.h:454
	SuspensionManager mSuspensionManager;

	// BrnNetworkManager.h:455
	PostRoundManager mPostRoundManager;

	// BrnNetworkManager.h:456
	StandingsManager mStandingsManager;

	// BrnNetworkManager.h:457
	TrafficManager mTrafficManager;

	// Unknown accessibility
	// BrnNetworkBuddyManager.h:48
	typedef BrnNetwork::BuddyManagerPS3 BuddyManager;

	// BrnNetworkManager.h:458
	BrnNetworkManager::BuddyManager mBuddyManager;

	// BrnNetworkManager.h:459
	NetworkPlayerStatsManager mStatsManager;

	// BrnNetworkManager.h:460
	ScoreboardManager mScoreboardManager;

	// BrnNetworkManager.h:461
	NetworkAggressiveDrivingManager mAggressiveDrivingManager;

	// BrnNetworkManager.h:462
	LiveRevengeManager mLiveRevengeManager;

	// BrnNetworkManager.h:463
	NetworkDirtyTrickManager mDirtyTrickManager;

	// BrnNetworkManager.h:464
	NetworkImageManager mImageManager;

	// Unknown accessibility
	// BrnNetworkGamerPictureManager.h:43
	typedef GamerPictureManagerPS3 GamerPictureManager;

	// BrnNetworkManager.h:465
	BrnNetworkManager::GamerPictureManager mGamerPictureManager;

	// Unknown accessibility
	// BrnNetworkNotificationManager.h:44
	typedef BrnNetwork::NetworkNotificationManagerPS3 NetworkNotificationManager;

	// BrnNetworkManager.h:466
	BrnNetworkManager::NetworkNotificationManager mNetworkNotificationManager;

	// BrnNetworkManager.h:467
	NetworkInviteManager mNetworkInviteManager;

	// BrnNetworkManager.h:468
	SelectedRoutesManager mSelectedRoutesManager;

	// BrnNetworkManager.h:469
	MarkedManManager mMarkedManManager;

	// BrnNetworkManager.h:470
	StateManager mStateManager;

	// BrnNetworkManager.h:471
	NetworkRoadRulesManager mRoadRulesManager;

	// BrnNetworkManager.h:472
	ChallengeSuccessManager mChallengeSuccessManager;

	// Unknown accessibility
	// BrnNetworkGamerCardManager.h:45
	typedef NetworkGamerCardManagerPS3 GamerCardManager;

	// BrnNetworkManager.h:473
	BrnNetworkManager::GamerCardManager mGamerCardManager;

	// Unknown accessibility
	// BrnNetworkCamera.h:43
	typedef CameraPS3 Camera;

	// BrnNetworkManager.h:475
	BrnNetworkManager::Camera mCamera;

	// BrnNetworkManager.h:476
	NetworkTextureDXTCompress mTextureCompressor;

	// BrnNetworkManager.h:478
	CgsID mFreeBurnCarID;

	// BrnNetworkManager.h:479
	CgsID mFreeBurnWheelID;

	// BrnNetworkManager.h:481
	BrnWorld::EDistrict meCurrentDistrict;

	// BrnNetworkManager.h:483
	uint16_t mu16CarColourIndex;

	// BrnNetworkManager.h:484
	uint16_t mu16PaintFinishIndex;

	// BrnNetworkManager.h:486
	BrnNetwork::BrnNetworkManager::EPrepareStage mePrepareStage;

	// BrnNetworkManager.h:487
	BrnNetwork::BrnNetworkManager::EReleaseStage meReleaseStage;

	// BrnNetworkManager.h:489
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkManager.h:491
	TimerStatus * mpGameTimerStatus;

	// BrnNetworkManager.h:492
	Time mTime;

	// BrnNetworkManager.h:493
	float32_t mfTimeStep;

	// BrnNetworkManager.h:494
	int32_t miFrameNum;

	// BrnNetworkManager.h:495
	CgsSystem::EFrameRate meLocalConsoleFrameRate;

	// BrnNetworkManager.h:497
	int32_t miRoundNumber;

	// BrnNetworkManager.h:499
	bool mbHasFever;

	// BrnNetworkManager.h:500
	bool mbIsDeveloper;

	// BrnNetworkManager.h:501
	bool mbDiskReadErrorThisFrame;

	// BrnNetworkManager.h:502
	bool mbNotifyGameOfDisconnectAfterDiskError;

	// BrnNetworkManager.h:505
	BrnNetwork::BrnNetworkPlayer[7] maNetworkPlayer;

	// BrnNetworkManager.h:506
	BrnNetwork::PlayerMenuData[7] maNetworkPlayerMenuData;

	// BrnNetworkManager.h:507
	BrnNetwork::PlayerMenuData mLocalPlayerMenuSelections;

	// BrnNetworkManager.h:509
	GuiEventNetworkLaunching::NetworkPlayerID mPlayerIDStatsGet;

	// BrnNetworkManager.h:510
	Time mLastStatsSentToOnlinePlayStamp;

	// BrnNetworkManager.h:512
	PlayerName mExportPlayerName;

	// BrnNetworkManager.h:515
	int32_t miPackTextureToSendToGuiPM;

	// BrnNetworkManager.h:516
	int32_t miCameraUpdatePM;

	// BrnNetworkManager.h:517
	int32_t miGamerPicUpdatPM;

	// BrnNetworkManager.h:518
	int32_t miCGSNetworkAfterSimPM;

	// BrnNetworkManager.h:519
	int32_t miNetworkManagerSelectedRoutesPM;

	// BrnNetworkManager.h:520
	int32_t miNetworkManagerOutputPlayerStatsPM;

	// BrnNetworkManager.h:521
	int32_t miNetworkManagerPostUpdatePM;

	// BrnNetworkManager.h:522
	int32_t miNetworkManagerMiscPM;

	// BrnNetworkManager.h:523
	int32_t miNetworkServerInterfacePM;

	// BrnNetworkManager.h:524
	int32_t miNetworkBuddyPM;

	// BrnNetworkManager.h:525
	int32_t miNetworkTrafficPM;

	// BrnNetworkManager.h:526
	int32_t miNetworkAggressiveDrivingPM;

	// BrnNetworkManager.h:527
	int32_t miNetworkDirtyTrickPM;

	// BrnNetworkManager.h:528
	int32_t miNetworkHostStatusPM;

	// BrnNetworkManager.h:529
	int32_t miNetworkNotificationPM;

	// BrnNetworkManager.h:530
	int32_t miNetworkInvitePM;

	// BrnNetworkManager.h:531
	int32_t miNetworkStatsPM;

	// BrnNetworkManager.h:532
	int32_t miNetworkLiveRevengePM;

	// BrnNetworkManager.h:533
	int32_t miNetworkScoreboardPM;

	// BrnNetworkManager.h:534
	int32_t miNetworkRoutesManagerPM;

	// BrnNetworkManager.h:535
	int32_t miNetworkStateManagerPM;

	// BrnNetworkManager.h:536
	int32_t miNetworkRoadRulesManagerPM;

	// BrnNetworkManager.h:537
	int32_t miNetworkChallengeManagerPM;

public:
	// BrnNetworkManager.h:186
	void Construct(BrnNetwork::BrnNetworkModule *, bool);

	// BrnNetworkManager.h:193
	bool Prepare(CgsSystem::EFrameRate, const LaunchData *, CgsMemory::HeapMalloc *);

	// BrnNetworkManager.h:197
	bool Release();

	// BrnNetworkManager.h:201
	void Destruct();

	// BrnNetworkManager.h:209
	void ProcessBeforeSimulation(const PreSimulationInputBuffer *, BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, TimerStatus *, BrnUpdateSet);

	// BrnNetworkManager.h:215
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *, BrnUpdateSet);

	// BrnNetworkManager.h:218
	BrnNetwork::BrnServerInterface * GetServerInterface();

	// BrnNetworkManager.h:223
	void TriggerEventFromLogin(BrnNetwork::BrnNetworkManager::ELoginEvent, void *);

	// BrnNetworkManager.h:228
	void TriggerEventFromServerInterface(CgsNetwork::EServerInterfaceEvent, void *);

	// BrnNetworkManager.h:235
	void JoinGameSession(char *);

	// BrnNetworkManager.h:240
	void JoinGameSessionByID(int32_t);

	// BrnNetworkManager.h:243
	Time GetTime() const;

	// BrnNetworkManager.h:246
	float32_t GetTimeStep() const;

	// BrnNetworkManager.h:249
	SuspensionManager * GetSuspensionManager();

	// BrnNetworkManager.h:252
	BrnNetworkManager::BuddyManager * GetBuddyManager();

	// BrnNetworkManager.h:255
	StandingsManager * GetStandingsManager();

	// BrnNetworkManager.h:258
	NetworkPlayerStatsManager * GetStatsManager();

	// BrnNetworkManager.h:261
	ScoreboardManager * GetScoreboardManager();

	// BrnNetworkManager.h:264
	BrnNetworkManager::GamerCardManager * GetGamerCardManager();

	// BrnNetworkManager.h:267
	LiveRevengeManager * GetLiveRevengeManager();

	// BrnNetworkManager.h:270
	BrnNetworkManager::Camera * GetCamera();

	// BrnNetworkManager.h:273
	BrnNetworkManager::GamerPictureManager * GetGamerPictureManager();

	// BrnNetworkManager.h:276
	NetworkImageManager * GetNetworkImageManager();

	// BrnNetworkManager.h:279
	TrafficManager * GetTrafficManager();

	// BrnNetworkManager.h:282
	NetworkAggressiveDrivingManager * GetAggressiveDrivingManager();

	// BrnNetworkManager.h:285
	SelectedRoutesManager * GetSelectedRoutesManager();

	// BrnNetworkManager.h:288
	BrnNetworkManager::LoginManager * GetLoginManager();

	// BrnNetworkManager.h:291
	LaunchManager * GetLaunchManager();

	// BrnNetworkManager.h:294
	ConnectionManager * GetConnectionManager();

	// BrnNetworkManager.h:297
	MatchMakingManager * GetMatchMakingManager();

	// BrnNetworkManager.h:300
	MarkedManManager * GetMarkedManManager();

	// BrnNetworkManager.h:303
	PostRoundManager * GetPostRoundManager();

	// BrnNetworkManager.h:306
	NetworkInviteManager * GetNetworkInviteManager();

	// BrnNetworkManager.h:309
	TimerStatus * GetTimerStatus();

	// BrnNetworkManager.h:312
	StateManager * GetStateManager();

	// BrnNetworkManager.h:315
	BrnNetworkManager::NetworkNotificationManager * GetNotificationManager();

	// BrnNetworkManager.h:318
	NetworkRoadRulesManager * GetRoadRulesManager();

	// BrnNetworkManager.h:321
	CgsSystem::EFrameRate GetLocalConsoleFrameRate();

	// BrnNetworkManager.h:324
	void SetRound(int32_t);

	// BrnNetworkManager.h:327
	int32_t GetRound() const;

	// BrnNetworkManager.h:332
	void PackTextureAndSendDisplayEventToGui(const NetworkTexture *, int32_t);

	// BrnNetworkManager.h:336
	bool IsLocalPlayer(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkManager.h:341
	void OutputPlayerStatsToGui(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkManager.h:344
	void OutputGameParameters();

	// BrnNetworkManager.h:347
	void OnGameLaunching();

	// BrnNetworkManager.h:350
	void OnGameStart();

	// BrnNetworkManager.h:353
	void OnRoundStart();

	// BrnNetworkManager.h:356
	void OnRoundFinish();

	// BrnNetworkManager.h:359
	void OnGameFinish();

	// BrnNetworkManager.h:362
	void OnEnterGame();

	// BrnNetworkManager.h:365
	void OnLeaveGame();

	// BrnNetworkManager.h:368
	bool IsDoingFreeBurnLobby();

	// Unknown accessibility
	// CgsMessage.h:85
	typedef uint8_t PackOrUnpackResult;

	// BrnNetworkManager.h:373
	BrnNetworkManager::PackOrUnpackResult PackOrUnpack(CgsNetwork::Message *, GuiEventNetworkLaunching::NetworkPlayerID *);

	// BrnNetworkManager.h:378
	void CaptureTelemetryEvent(BrnNetwork::ETelemetryHook, const char *);

	// BrnNetworkManager.h:383
	void CaptureTelemetryEvent(BrnNetwork::ETelemetryHook, int32_t);

	// BrnNetworkManager.h:388
	void CaptureTelemetryEvent(BrnNetwork::ETelemetryHook, CgsID);

	// BrnNetworkManager.h:393
	void CaptureTelemetryEvent(BrnNetwork::ETelemetryHook, Time);

	// BrnNetworkManager.h:398
	void SetFreeBurnCar(CgsID, CgsID);

	// BrnNetworkManager.h:401
	CgsID GetFreeBurnCarID() const;

	// BrnNetworkManager.h:404
	CgsID GetFreeBurnWheelID() const;

	// BrnNetworkManager.h:408
	void SetCurrentDistrict(BrnWorld::EDistrict);

	// BrnNetworkManager.h:411
	BrnWorld::EDistrict GetCurrentDistrict() const;

	// BrnNetworkManager.h:415
	void SetCurrentCarColourIndex(uint16_t);

	// BrnNetworkManager.h:418
	uint16_t GetCurrentCarColourIndex() const;

	// BrnNetworkManager.h:422
	void SetCurrentPaintFinishIndex(uint16_t);

	// BrnNetworkManager.h:425
	uint16_t GetCurrentPaintFinishIndex() const;

	// BrnNetworkManager.h:430
	void ProcessNetworkTextureDecodeEvent(const NetworkInDxtDecodeImageEvent *);

	// BrnNetworkManager.h:433
	bool HasFever();

	// BrnNetworkManager.h:437
	void SetHasFever(bool);

	// BrnNetworkManager.h:440
	bool IsDeveloper();

	// BrnNetworkManager.h:444
	void SetIsDeveloper(bool);

private:
	// BrnNetworkManager.h:543
	int32_t GetMaxMessageSize(bool);

	// BrnNetworkManager.h:548
	void OutputPlayerStatusInfo(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkManager.h:553
	void OutputPlayerResultsInfo(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkManager.h:558
	void UpdateMenuDataFromPlayerParams(int32_t);

	// BrnNetworkManager.h:562
	void UnitTestFrameCountFunctions() const;

	// BrnNetworkManager.h:567
	bool GameHasFriendsIn(BrnNetwork::GameParams *);

	// BrnNetworkManager.h:572
	bool GameHasRivalsIn(BrnNetwork::GameParams *);

	// BrnNetworkManager.h:577
	void ProcessHLUpdateFlags(BrnUpdateSet);

	// BrnNetworkManager.h:584
	void PlayerManagerEventCallback(CgsNetwork::PlayerManager::EEvent, void *, void *);

	// BrnNetworkManager.h:590
	void SyncTimeClientReadyCallback(GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// BrnNetworkManager.h:596
	void DxtDecodeCallback(void *, void *);

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct BrnNetworkManager {
		// BrnNetworkManager.h:100
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_BASE_NETWORK_MANAGER = 1,
			E_PREPARESTAGE_SERVER_INTERFACE = 2,
			E_PREPARESTAGE_LOGIN_MANAGER = 3,
			E_PREPARESTAGE_LAUNCH_MANAGER = 4,
			E_PREPARESTAGE_CONNECTION_MANAGER = 5,
			E_PREPARESTAGE_MATCHMAKING_MANAGER = 6,
			E_PREPARESTAGE_SUSPENSION_MANAGER = 7,
			E_PREPARESTAGE_POSTROUND_MANAGER = 8,
			E_PREPARESTAGE_CAMERA = 9,
			E_PREPARESTAGE_TEXTURE_COMPRESSOR = 10,
			E_PREPARESTAGE_BUDDY_MANAGER = 11,
			E_PREPARESTAGE_STANDINGS_MANAGER = 12,
			E_PREPARESTAGE_TRAFFIC_SYNC_MANAGER = 13,
			E_PREPARESTAGE_STATS_MANAGER = 14,
			E_PREPARESTAGE_SCOREBOARD_MANAGER = 15,
			E_PREPARESTAGE_AGGRESSIVE_DRIVING_MANAGER = 16,
			E_PREPARESTAGE_LIVE_REVENGE_MANAGER = 17,
			E_PREPARESTAGE_DIRTY_TRICK_MANAGER = 18,
			E_PREPARESTAGE_IMAGE_MANAGER = 19,
			E_PREPARESTAGE_GAMER_PICTURE_MANAGER = 20,
			E_PREPARESTAGE_NOTIFICATION_MANAGER = 21,
			E_PREPARESTAGE_INVITE_MANAGER = 22,
			E_PREPARESTAGE_SELECTED_ROUTES_MANAGER = 23,
			E_PREPARESTAGE_MARKED_MAN_MANAGER = 24,
			E_PREPARESTAGE_STATE_MANAGER = 25,
			E_PREPARESTAGE_ROAD_RULES_MANAGER = 26,
			E_PREPARESTAGE_CHALLEGE_SUCCESS_MANAGER = 27,
			E_PREPARESTAGE_GAMERCARD_MANAGER = 28,
			E_PREPARESTAGE_DONE = 29,
		}

		// BrnNetworkManager.h:134
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_GAMERCARD_MANAGER = 1,
			E_RELEASESTAGE_CHALLEGE_SUCCESS_MANAGER = 2,
			E_RELEASESTAGE_ROAD_RULES_MANAGER = 3,
			E_RELEASESTAGE_STATE_MANAGER = 4,
			E_RELEASESTAGE_MARKED_MAN_MANAGER = 5,
			E_RELEASESTAGE_SELECTED_ROUTES_MANAGER = 6,
			E_RELEASESTAGE_INVITE_MANAGER = 7,
			E_RELEASESTAGE_NOTIFICATION_MANAGER = 8,
			E_RELEASESTAGE_GAMER_PICTURE_MANAGER = 9,
			E_RELEASESTAGE_IMAGE_MANAGER = 10,
			E_RELEASESTAGE_DIRTY_TRICK_MANAGER = 11,
			E_RELEASESTAGE_LIVE_REVENGE_MANAGER = 12,
			E_RELEASESTAGE_AGGRESSIVE_DRIVING_MANAGER = 13,
			E_RELEASESTAGE_SCOREBOARD_MANAGER = 14,
			E_RELEASESTAGE_STATS_MANAGER = 15,
			E_RELEASESTAGE_TRAFFIC_SYNC_MANAGER = 16,
			E_RELEASESTAGE_STANDINGS_MANAGER = 17,
			E_RELEASESTAGE_BUDDY_MANAGER = 18,
			E_RELEASESTAGE_TEXTURE_COMPRESSOR = 19,
			E_RELEASESTAGE_CAMERA = 20,
			E_RELEASESTAGE_POSTROUND_MANAGER = 21,
			E_RELEASESTAGE_SUSPENSION_MANAGER = 22,
			E_RELEASESTAGE_MATCHMAKING_MANAGER = 23,
			E_RELEASESTAGE_CONNECTION_MANAGER = 24,
			E_RELEASESTAGE_LAUNCH_MANAGER = 25,
			E_RELEASESTAGE_LOGIN_MANAGER = 26,
			E_RELEASESTAGE_SERVERINTERFACE = 27,
			E_RELEASESTAGE_BASE_NETWORK_MANAGER = 28,
			E_RELEASESTAGE_DONE = 29,
		}

		// BrnNetworkManager.h:168
		enum ELoginEvent {
			E_LOGIN_EVENT_SHOW_TOS = 0,
			E_LOGIN_EVENT_SHOW_CREATE_ACCOUNT = 1,
			E_LOGIN_EVENT_SHOW_SHARE = 2,
			E_LOGIN_EVENT_SHOW_OPEN_US_ACCOUNT = 3,
			E_LOGIN_EVENT_SHOW_NO_AGREEMENT = 4,
			E_LOGIN_EVENT_SHOW_SIGN_IN = 5,
			E_LOGIN_EVENT_SHOW_CHAT_RESTRICTED = 6,
			E_LOGIN_EVENT_PROCEED = 7,
			E_LOGIN_EVENT_COUNT = 8,
		}

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct BrnNetworkManager {
		// BrnNetworkManager.h:100
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_BASE_NETWORK_MANAGER = 1,
			E_PREPARESTAGE_SERVER_INTERFACE = 2,
			E_PREPARESTAGE_LOGIN_MANAGER = 3,
			E_PREPARESTAGE_LAUNCH_MANAGER = 4,
			E_PREPARESTAGE_CONNECTION_MANAGER = 5,
			E_PREPARESTAGE_MATCHMAKING_MANAGER = 6,
			E_PREPARESTAGE_SUSPENSION_MANAGER = 7,
			E_PREPARESTAGE_POSTROUND_MANAGER = 8,
			E_PREPARESTAGE_CAMERA = 9,
			E_PREPARESTAGE_TEXTURE_COMPRESSOR = 10,
			E_PREPARESTAGE_BUDDY_MANAGER = 11,
			E_PREPARESTAGE_STANDINGS_MANAGER = 12,
			E_PREPARESTAGE_TRAFFIC_SYNC_MANAGER = 13,
			E_PREPARESTAGE_STATS_MANAGER = 14,
			E_PREPARESTAGE_SCOREBOARD_MANAGER = 15,
			E_PREPARESTAGE_AGGRESSIVE_DRIVING_MANAGER = 16,
			E_PREPARESTAGE_LIVE_REVENGE_MANAGER = 17,
			E_PREPARESTAGE_DIRTY_TRICK_MANAGER = 18,
			E_PREPARESTAGE_IMAGE_MANAGER = 19,
			E_PREPARESTAGE_GAMER_PICTURE_MANAGER = 20,
			E_PREPARESTAGE_NOTIFICATION_MANAGER = 21,
			E_PREPARESTAGE_INVITE_MANAGER = 22,
			E_PREPARESTAGE_SELECTED_ROUTES_MANAGER = 23,
			E_PREPARESTAGE_MARKED_MAN_MANAGER = 24,
			E_PREPARESTAGE_STATE_MANAGER = 25,
			E_PREPARESTAGE_ROAD_RULES_MANAGER = 26,
			E_PREPARESTAGE_CHALLEGE_SUCCESS_MANAGER = 27,
			E_PREPARESTAGE_GAMERCARD_MANAGER = 28,
			E_PREPARESTAGE_DONE = 29,
		}

		// BrnNetworkManager.h:134
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_GAMERCARD_MANAGER = 1,
			E_RELEASESTAGE_CHALLEGE_SUCCESS_MANAGER = 2,
			E_RELEASESTAGE_ROAD_RULES_MANAGER = 3,
			E_RELEASESTAGE_STATE_MANAGER = 4,
			E_RELEASESTAGE_MARKED_MAN_MANAGER = 5,
			E_RELEASESTAGE_SELECTED_ROUTES_MANAGER = 6,
			E_RELEASESTAGE_INVITE_MANAGER = 7,
			E_RELEASESTAGE_NOTIFICATION_MANAGER = 8,
			E_RELEASESTAGE_GAMER_PICTURE_MANAGER = 9,
			E_RELEASESTAGE_IMAGE_MANAGER = 10,
			E_RELEASESTAGE_DIRTY_TRICK_MANAGER = 11,
			E_RELEASESTAGE_LIVE_REVENGE_MANAGER = 12,
			E_RELEASESTAGE_AGGRESSIVE_DRIVING_MANAGER = 13,
			E_RELEASESTAGE_SCOREBOARD_MANAGER = 14,
			E_RELEASESTAGE_STATS_MANAGER = 15,
			E_RELEASESTAGE_TRAFFIC_SYNC_MANAGER = 16,
			E_RELEASESTAGE_STANDINGS_MANAGER = 17,
			E_RELEASESTAGE_BUDDY_MANAGER = 18,
			E_RELEASESTAGE_TEXTURE_COMPRESSOR = 19,
			E_RELEASESTAGE_CAMERA = 20,
			E_RELEASESTAGE_POSTROUND_MANAGER = 21,
			E_RELEASESTAGE_SUSPENSION_MANAGER = 22,
			E_RELEASESTAGE_MATCHMAKING_MANAGER = 23,
			E_RELEASESTAGE_CONNECTION_MANAGER = 24,
			E_RELEASESTAGE_LAUNCH_MANAGER = 25,
			E_RELEASESTAGE_LOGIN_MANAGER = 26,
			E_RELEASESTAGE_SERVERINTERFACE = 27,
			E_RELEASESTAGE_BASE_NETWORK_MANAGER = 28,
			E_RELEASESTAGE_DONE = 29,
		}

		// BrnNetworkManager.h:168
		enum ELoginEvent {
			E_LOGIN_EVENT_SHOW_TOS = 0,
			E_LOGIN_EVENT_SHOW_CREATE_ACCOUNT = 1,
			E_LOGIN_EVENT_SHOW_SHARE = 2,
			E_LOGIN_EVENT_SHOW_OPEN_US_ACCOUNT = 3,
			E_LOGIN_EVENT_SHOW_NO_AGREEMENT = 4,
			E_LOGIN_EVENT_SHOW_SIGN_IN = 5,
			E_LOGIN_EVENT_SHOW_CHAT_RESTRICTED = 6,
			E_LOGIN_EVENT_PROCEED = 7,
			E_LOGIN_EVENT_COUNT = 8,
		}

	}

}

// BrnNetworkManager.h:97
struct BrnNetwork::BrnNetworkManager : public NetworkManager {
private:
	// BrnNetworkManager.h:448
	BrnNetwork::BrnServerInterface mServerInterface;

	// Unknown accessibility
	// BrnNetworkLoginManager.h:44
	typedef BrnNetwork::LoginManagerPS3 LoginManager;

	// BrnNetworkManager.h:450
	BrnNetworkManager::LoginManager mLoginManager;

	// BrnNetworkManager.h:451
	LaunchManager mLaunchManager;

	// BrnNetworkManager.h:452
	ConnectionManager mConnectionManager;

	// BrnNetworkManager.h:453
	MatchMakingManager mMatchMakingManager;

	// BrnNetworkManager.h:454
	SuspensionManager mSuspensionManager;

	// BrnNetworkManager.h:455
	PostRoundManager mPostRoundManager;

	// BrnNetworkManager.h:456
	StandingsManager mStandingsManager;

	// BrnNetworkManager.h:457
	TrafficManager mTrafficManager;

	// Unknown accessibility
	// BrnNetworkBuddyManager.h:48
	typedef BrnNetwork::BuddyManagerPS3 BuddyManager;

	// BrnNetworkManager.h:458
	BrnNetworkManager::BuddyManager mBuddyManager;

	// BrnNetworkManager.h:459
	NetworkPlayerStatsManager mStatsManager;

	// BrnNetworkManager.h:460
	ScoreboardManager mScoreboardManager;

	// BrnNetworkManager.h:461
	NetworkAggressiveDrivingManager mAggressiveDrivingManager;

	// BrnNetworkManager.h:462
	LiveRevengeManager mLiveRevengeManager;

	// BrnNetworkManager.h:463
	NetworkDirtyTrickManager mDirtyTrickManager;

	// BrnNetworkManager.h:464
	NetworkImageManager mImageManager;

	// Unknown accessibility
	// BrnNetworkGamerPictureManager.h:43
	typedef GamerPictureManagerPS3 GamerPictureManager;

	// BrnNetworkManager.h:465
	BrnNetworkManager::GamerPictureManager mGamerPictureManager;

	// Unknown accessibility
	// BrnNetworkNotificationManager.h:44
	typedef BrnNetwork::NetworkNotificationManagerPS3 NetworkNotificationManager;

	// BrnNetworkManager.h:466
	BrnNetworkManager::NetworkNotificationManager mNetworkNotificationManager;

	// BrnNetworkManager.h:467
	NetworkInviteManager mNetworkInviteManager;

	// BrnNetworkManager.h:468
	SelectedRoutesManager mSelectedRoutesManager;

	// BrnNetworkManager.h:469
	MarkedManManager mMarkedManManager;

	// BrnNetworkManager.h:470
	StateManager mStateManager;

	// BrnNetworkManager.h:471
	NetworkRoadRulesManager mRoadRulesManager;

	// BrnNetworkManager.h:472
	ChallengeSuccessManager mChallengeSuccessManager;

	// Unknown accessibility
	// BrnNetworkGamerCardManager.h:45
	typedef NetworkGamerCardManagerPS3 GamerCardManager;

	// BrnNetworkManager.h:473
	BrnNetworkManager::GamerCardManager mGamerCardManager;

	// Unknown accessibility
	// BrnNetworkCamera.h:43
	typedef CameraPS3 Camera;

	// BrnNetworkManager.h:475
	BrnNetworkManager::Camera mCamera;

	// BrnNetworkManager.h:476
	NetworkTextureDXTCompress mTextureCompressor;

	// BrnNetworkManager.h:478
	CgsID mFreeBurnCarID;

	// BrnNetworkManager.h:479
	CgsID mFreeBurnWheelID;

	// BrnNetworkManager.h:481
	BrnWorld::EDistrict meCurrentDistrict;

	// BrnNetworkManager.h:483
	uint16_t mu16CarColourIndex;

	// BrnNetworkManager.h:484
	uint16_t mu16PaintFinishIndex;

	// BrnNetworkManager.h:486
	BrnNetwork::BrnNetworkManager::EPrepareStage mePrepareStage;

	// BrnNetworkManager.h:487
	BrnNetwork::BrnNetworkManager::EReleaseStage meReleaseStage;

	// BrnNetworkManager.h:489
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkManager.h:491
	TimerStatus * mpGameTimerStatus;

	// BrnNetworkManager.h:492
	Time mTime;

	// BrnNetworkManager.h:493
	float32_t mfTimeStep;

	// BrnNetworkManager.h:494
	int32_t miFrameNum;

	// BrnNetworkManager.h:495
	CgsSystem::EFrameRate meLocalConsoleFrameRate;

	// BrnNetworkManager.h:497
	int32_t miRoundNumber;

	// BrnNetworkManager.h:499
	bool mbHasFever;

	// BrnNetworkManager.h:500
	bool mbIsDeveloper;

	// BrnNetworkManager.h:501
	bool mbDiskReadErrorThisFrame;

	// BrnNetworkManager.h:502
	bool mbNotifyGameOfDisconnectAfterDiskError;

	// BrnNetworkManager.h:505
	BrnNetwork::BrnNetworkPlayer[7] maNetworkPlayer;

	// BrnNetworkManager.h:506
	BrnNetwork::PlayerMenuData[7] maNetworkPlayerMenuData;

	// BrnNetworkManager.h:507
	BrnNetwork::PlayerMenuData mLocalPlayerMenuSelections;

	// BrnNetworkManager.h:509
	AggressiveMoveData::NetworkPlayerID mPlayerIDStatsGet;

	// BrnNetworkManager.h:510
	Time mLastStatsSentToOnlinePlayStamp;

	// BrnNetworkManager.h:512
	PlayerName mExportPlayerName;

	// BrnNetworkManager.h:515
	int32_t miPackTextureToSendToGuiPM;

	// BrnNetworkManager.h:516
	int32_t miCameraUpdatePM;

	// BrnNetworkManager.h:517
	int32_t miGamerPicUpdatPM;

	// BrnNetworkManager.h:518
	int32_t miCGSNetworkAfterSimPM;

	// BrnNetworkManager.h:519
	int32_t miNetworkManagerSelectedRoutesPM;

	// BrnNetworkManager.h:520
	int32_t miNetworkManagerOutputPlayerStatsPM;

	// BrnNetworkManager.h:521
	int32_t miNetworkManagerPostUpdatePM;

	// BrnNetworkManager.h:522
	int32_t miNetworkManagerMiscPM;

	// BrnNetworkManager.h:523
	int32_t miNetworkServerInterfacePM;

	// BrnNetworkManager.h:524
	int32_t miNetworkBuddyPM;

	// BrnNetworkManager.h:525
	int32_t miNetworkTrafficPM;

	// BrnNetworkManager.h:526
	int32_t miNetworkAggressiveDrivingPM;

	// BrnNetworkManager.h:527
	int32_t miNetworkDirtyTrickPM;

	// BrnNetworkManager.h:528
	int32_t miNetworkHostStatusPM;

	// BrnNetworkManager.h:529
	int32_t miNetworkNotificationPM;

	// BrnNetworkManager.h:530
	int32_t miNetworkInvitePM;

	// BrnNetworkManager.h:531
	int32_t miNetworkStatsPM;

	// BrnNetworkManager.h:532
	int32_t miNetworkLiveRevengePM;

	// BrnNetworkManager.h:533
	int32_t miNetworkScoreboardPM;

	// BrnNetworkManager.h:534
	int32_t miNetworkRoutesManagerPM;

	// BrnNetworkManager.h:535
	int32_t miNetworkStateManagerPM;

	// BrnNetworkManager.h:536
	int32_t miNetworkRoadRulesManagerPM;

	// BrnNetworkManager.h:537
	int32_t miNetworkChallengeManagerPM;

public:
	// BrnNetworkManager.h:186
	void Construct(BrnNetwork::BrnNetworkModule *, bool);

	// BrnNetworkManager.h:193
	bool Prepare(CgsSystem::EFrameRate, const BrnHW::LaunchData *, HeapMalloc *);

	// BrnNetworkManager.h:197
	bool Release();

	// BrnNetworkManager.h:201
	void Destruct();

	// BrnNetworkManager.h:209
	void ProcessBeforeSimulation(const PreSimulationInputBuffer *, BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, TimerStatus *, BrnUpdateSet);

	// BrnNetworkManager.h:215
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *, BrnUpdateSet);

	// BrnNetworkManager.h:218
	BrnNetwork::BrnServerInterface * GetServerInterface();

	// BrnNetworkManager.h:223
	void TriggerEventFromLogin(BrnNetwork::BrnNetworkManager::ELoginEvent, void *);

	// BrnNetworkManager.h:228
	void TriggerEventFromServerInterface(CgsNetwork::EServerInterfaceEvent, void *);

	// BrnNetworkManager.h:235
	void JoinGameSession(char *);

	// BrnNetworkManager.h:240
	void JoinGameSessionByID(int32_t);

	// BrnNetworkManager.h:243
	Time GetTime() const;

	// BrnNetworkManager.h:246
	float32_t GetTimeStep() const;

	// BrnNetworkManager.h:249
	SuspensionManager * GetSuspensionManager();

	// BrnNetworkManager.h:252
	BrnNetworkManager::BuddyManager * GetBuddyManager();

	// BrnNetworkManager.h:255
	StandingsManager * GetStandingsManager();

	// BrnNetworkManager.h:258
	NetworkPlayerStatsManager * GetStatsManager();

	// BrnNetworkManager.h:261
	ScoreboardManager * GetScoreboardManager();

	// BrnNetworkManager.h:264
	BrnNetworkManager::GamerCardManager * GetGamerCardManager();

	// BrnNetworkManager.h:267
	LiveRevengeManager * GetLiveRevengeManager();

	// BrnNetworkManager.h:270
	BrnNetworkManager::Camera * GetCamera();

	// BrnNetworkManager.h:273
	BrnNetworkManager::GamerPictureManager * GetGamerPictureManager();

	// BrnNetworkManager.h:276
	NetworkImageManager * GetNetworkImageManager();

	// BrnNetworkManager.h:279
	TrafficManager * GetTrafficManager();

	// BrnNetworkManager.h:282
	NetworkAggressiveDrivingManager * GetAggressiveDrivingManager();

	// BrnNetworkManager.h:285
	SelectedRoutesManager * GetSelectedRoutesManager();

	// BrnNetworkManager.h:288
	BrnNetworkManager::LoginManager * GetLoginManager();

	// BrnNetworkManager.h:291
	LaunchManager * GetLaunchManager();

	// BrnNetworkManager.h:294
	ConnectionManager * GetConnectionManager();

	// BrnNetworkManager.h:297
	MatchMakingManager * GetMatchMakingManager();

	// BrnNetworkManager.h:300
	MarkedManManager * GetMarkedManManager();

	// BrnNetworkManager.h:303
	PostRoundManager * GetPostRoundManager();

	// BrnNetworkManager.h:306
	NetworkInviteManager * GetNetworkInviteManager();

	// BrnNetworkManager.h:309
	TimerStatus * GetTimerStatus();

	// BrnNetworkManager.h:312
	StateManager * GetStateManager();

	// BrnNetworkManager.h:315
	BrnNetworkManager::NetworkNotificationManager * GetNotificationManager();

	// BrnNetworkManager.h:318
	NetworkRoadRulesManager * GetRoadRulesManager();

	// BrnNetworkManager.h:321
	CgsSystem::EFrameRate GetLocalConsoleFrameRate();

	// BrnNetworkManager.h:324
	void SetRound(int32_t);

	// BrnNetworkManager.h:327
	int32_t GetRound() const;

	// BrnNetworkManager.h:332
	void PackTextureAndSendDisplayEventToGui(const NetworkTexture *, int32_t);

	// BrnNetworkManager.h:336
	bool IsLocalPlayer(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkManager.h:341
	void OutputPlayerStatsToGui(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkManager.h:344
	void OutputGameParameters();

	// BrnNetworkManager.h:347
	void OnGameLaunching();

	// BrnNetworkManager.h:350
	void OnGameStart();

	// BrnNetworkManager.h:353
	void OnRoundStart();

	// BrnNetworkManager.h:356
	void OnRoundFinish();

	// BrnNetworkManager.h:359
	void OnGameFinish();

	// BrnNetworkManager.h:362
	void OnEnterGame();

	// BrnNetworkManager.h:365
	void OnLeaveGame();

	// BrnNetworkManager.h:368
	bool IsDoingFreeBurnLobby();

	// Unknown accessibility
	// CgsMessage.h:85
	typedef uint8_t PackOrUnpackResult;

	// BrnNetworkManager.h:373
	BrnNetworkManager::PackOrUnpackResult PackOrUnpack(CgsNetwork::Message *, AggressiveMoveData::NetworkPlayerID *);

	// BrnNetworkManager.h:378
	void CaptureTelemetryEvent(BrnNetwork::ETelemetryHook, const char *);

	// BrnNetworkManager.h:383
	void CaptureTelemetryEvent(BrnNetwork::ETelemetryHook, int32_t);

	// BrnNetworkManager.h:388
	void CaptureTelemetryEvent(BrnNetwork::ETelemetryHook, CgsID);

	// BrnNetworkManager.h:393
	void CaptureTelemetryEvent(BrnNetwork::ETelemetryHook, Time);

	// BrnNetworkManager.h:398
	void SetFreeBurnCar(CgsID, CgsID);

	// BrnNetworkManager.h:401
	CgsID GetFreeBurnCarID() const;

	// BrnNetworkManager.h:404
	CgsID GetFreeBurnWheelID() const;

	// BrnNetworkManager.h:408
	void SetCurrentDistrict(BrnWorld::EDistrict);

	// BrnNetworkManager.h:411
	BrnWorld::EDistrict GetCurrentDistrict() const;

	// BrnNetworkManager.h:415
	void SetCurrentCarColourIndex(uint16_t);

	// BrnNetworkManager.h:418
	uint16_t GetCurrentCarColourIndex() const;

	// BrnNetworkManager.h:422
	void SetCurrentPaintFinishIndex(uint16_t);

	// BrnNetworkManager.h:425
	uint16_t GetCurrentPaintFinishIndex() const;

	// BrnNetworkManager.h:430
	void ProcessNetworkTextureDecodeEvent(const NetworkInDxtDecodeImageEvent *);

	// BrnNetworkManager.h:433
	bool HasFever();

	// BrnNetworkManager.h:437
	void SetHasFever(bool);

	// BrnNetworkManager.h:440
	bool IsDeveloper();

	// BrnNetworkManager.h:444
	void SetIsDeveloper(bool);

private:
	// BrnNetworkManager.h:543
	int32_t GetMaxMessageSize(bool);

	// BrnNetworkManager.h:548
	void OutputPlayerStatusInfo(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkManager.h:553
	void OutputPlayerResultsInfo(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkManager.h:558
	void UpdateMenuDataFromPlayerParams(int32_t);

	// BrnNetworkManager.h:562
	void UnitTestFrameCountFunctions() const;

	// BrnNetworkManager.h:567
	bool GameHasFriendsIn(BrnNetwork::GameParams *);

	// BrnNetworkManager.h:572
	bool GameHasRivalsIn(BrnNetwork::GameParams *);

	// BrnNetworkManager.h:577
	void ProcessHLUpdateFlags(BrnUpdateSet);

	// BrnNetworkManager.h:584
	void PlayerManagerEventCallback(CgsNetwork::PlayerManager::EEvent, void *, void *);

	// BrnNetworkManager.h:590
	void SyncTimeClientReadyCallback(AggressiveMoveData::NetworkPlayerID, void *);

	// BrnNetworkManager.h:596
	void DxtDecodeCallback(void *, void *);

}

// BrnNetworkManager.h:97
struct BrnNetwork::BrnNetworkManager : public NetworkManager {
private:
	// BrnNetworkManager.h:448
	BrnNetwork::BrnServerInterface mServerInterface;

	// Unknown accessibility
	// BrnNetworkLoginManager.h:44
	typedef BrnNetwork::LoginManagerPS3 LoginManager;

	// BrnNetworkManager.h:450
	BrnNetworkManager::LoginManager mLoginManager;

	// BrnNetworkManager.h:451
	LaunchManager mLaunchManager;

	// BrnNetworkManager.h:452
	ConnectionManager mConnectionManager;

	// BrnNetworkManager.h:453
	MatchMakingManager mMatchMakingManager;

	// BrnNetworkManager.h:454
	SuspensionManager mSuspensionManager;

	// BrnNetworkManager.h:455
	PostRoundManager mPostRoundManager;

	// BrnNetworkManager.h:456
	StandingsManager mStandingsManager;

	// BrnNetworkManager.h:457
	TrafficManager mTrafficManager;

	// Unknown accessibility
	// BrnNetworkBuddyManager.h:48
	typedef BrnNetwork::BuddyManagerPS3 BuddyManager;

	// BrnNetworkManager.h:458
	BrnNetworkManager::BuddyManager mBuddyManager;

	// BrnNetworkManager.h:459
	NetworkPlayerStatsManager mStatsManager;

	// BrnNetworkManager.h:460
	ScoreboardManager mScoreboardManager;

	// BrnNetworkManager.h:461
	NetworkAggressiveDrivingManager mAggressiveDrivingManager;

	// BrnNetworkManager.h:462
	LiveRevengeManager mLiveRevengeManager;

	// BrnNetworkManager.h:463
	NetworkDirtyTrickManager mDirtyTrickManager;

	// BrnNetworkManager.h:464
	NetworkImageManager mImageManager;

	// Unknown accessibility
	// BrnNetworkGamerPictureManager.h:43
	typedef GamerPictureManagerPS3 GamerPictureManager;

	// BrnNetworkManager.h:465
	BrnNetworkManager::GamerPictureManager mGamerPictureManager;

	// Unknown accessibility
	// BrnNetworkNotificationManager.h:44
	typedef BrnNetwork::NetworkNotificationManagerPS3 NetworkNotificationManager;

	// BrnNetworkManager.h:466
	BrnNetworkManager::NetworkNotificationManager mNetworkNotificationManager;

	// BrnNetworkManager.h:467
	NetworkInviteManager mNetworkInviteManager;

	// BrnNetworkManager.h:468
	SelectedRoutesManager mSelectedRoutesManager;

	// BrnNetworkManager.h:469
	MarkedManManager mMarkedManManager;

	// BrnNetworkManager.h:470
	StateManager mStateManager;

	// BrnNetworkManager.h:471
	NetworkRoadRulesManager mRoadRulesManager;

	// BrnNetworkManager.h:472
	ChallengeSuccessManager mChallengeSuccessManager;

	// Unknown accessibility
	// BrnNetworkGamerCardManager.h:45
	typedef NetworkGamerCardManagerPS3 GamerCardManager;

	// BrnNetworkManager.h:473
	BrnNetworkManager::GamerCardManager mGamerCardManager;

	// Unknown accessibility
	// BrnNetworkCamera.h:43
	typedef CameraPS3 Camera;

	// BrnNetworkManager.h:475
	BrnNetworkManager::Camera mCamera;

	// BrnNetworkManager.h:476
	NetworkTextureDXTCompress mTextureCompressor;

	// BrnNetworkManager.h:478
	CgsID mFreeBurnCarID;

	// BrnNetworkManager.h:479
	CgsID mFreeBurnWheelID;

	// BrnNetworkManager.h:481
	BrnWorld::EDistrict meCurrentDistrict;

	// BrnNetworkManager.h:483
	uint16_t mu16CarColourIndex;

	// BrnNetworkManager.h:484
	uint16_t mu16PaintFinishIndex;

	// BrnNetworkManager.h:486
	BrnNetwork::BrnNetworkManager::EPrepareStage mePrepareStage;

	// BrnNetworkManager.h:487
	BrnNetwork::BrnNetworkManager::EReleaseStage meReleaseStage;

	// BrnNetworkManager.h:489
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkManager.h:491
	TimerStatus * mpGameTimerStatus;

	// BrnNetworkManager.h:492
	Time mTime;

	// BrnNetworkManager.h:493
	float32_t mfTimeStep;

	// BrnNetworkManager.h:494
	int32_t miFrameNum;

	// BrnNetworkManager.h:495
	CgsSystem::EFrameRate meLocalConsoleFrameRate;

	// BrnNetworkManager.h:497
	int32_t miRoundNumber;

	// BrnNetworkManager.h:499
	bool mbHasFever;

	// BrnNetworkManager.h:500
	bool mbIsDeveloper;

	// BrnNetworkManager.h:501
	bool mbDiskReadErrorThisFrame;

	// BrnNetworkManager.h:502
	bool mbNotifyGameOfDisconnectAfterDiskError;

	// BrnNetworkManager.h:505
	BrnNetwork::BrnNetworkPlayer[7] maNetworkPlayer;

	// BrnNetworkManager.h:506
	BrnNetwork::PlayerMenuData[7] maNetworkPlayerMenuData;

	// BrnNetworkManager.h:507
	BrnNetwork::PlayerMenuData mLocalPlayerMenuSelections;

	// BrnNetworkManager.h:509
	RoadRulesRecvData::NetworkPlayerID mPlayerIDStatsGet;

	// BrnNetworkManager.h:510
	Time mLastStatsSentToOnlinePlayStamp;

	// BrnNetworkManager.h:512
	PlayerName mExportPlayerName;

	// BrnNetworkManager.h:515
	int32_t miPackTextureToSendToGuiPM;

	// BrnNetworkManager.h:516
	int32_t miCameraUpdatePM;

	// BrnNetworkManager.h:517
	int32_t miGamerPicUpdatPM;

	// BrnNetworkManager.h:518
	int32_t miCGSNetworkAfterSimPM;

	// BrnNetworkManager.h:519
	int32_t miNetworkManagerSelectedRoutesPM;

	// BrnNetworkManager.h:520
	int32_t miNetworkManagerOutputPlayerStatsPM;

	// BrnNetworkManager.h:521
	int32_t miNetworkManagerPostUpdatePM;

	// BrnNetworkManager.h:522
	int32_t miNetworkManagerMiscPM;

	// BrnNetworkManager.h:523
	int32_t miNetworkServerInterfacePM;

	// BrnNetworkManager.h:524
	int32_t miNetworkBuddyPM;

	// BrnNetworkManager.h:525
	int32_t miNetworkTrafficPM;

	// BrnNetworkManager.h:526
	int32_t miNetworkAggressiveDrivingPM;

	// BrnNetworkManager.h:527
	int32_t miNetworkDirtyTrickPM;

	// BrnNetworkManager.h:528
	int32_t miNetworkHostStatusPM;

	// BrnNetworkManager.h:529
	int32_t miNetworkNotificationPM;

	// BrnNetworkManager.h:530
	int32_t miNetworkInvitePM;

	// BrnNetworkManager.h:531
	int32_t miNetworkStatsPM;

	// BrnNetworkManager.h:532
	int32_t miNetworkLiveRevengePM;

	// BrnNetworkManager.h:533
	int32_t miNetworkScoreboardPM;

	// BrnNetworkManager.h:534
	int32_t miNetworkRoutesManagerPM;

	// BrnNetworkManager.h:535
	int32_t miNetworkStateManagerPM;

	// BrnNetworkManager.h:536
	int32_t miNetworkRoadRulesManagerPM;

	// BrnNetworkManager.h:537
	int32_t miNetworkChallengeManagerPM;

public:
	// BrnNetworkManager.h:186
	void Construct(BrnNetwork::BrnNetworkModule *, bool);

	// BrnNetworkManager.h:193
	bool Prepare(CgsSystem::EFrameRate, const BrnHW::LaunchData *, HeapMalloc *);

	// BrnNetworkManager.h:197
	bool Release();

	// BrnNetworkManager.h:201
	void Destruct();

	// BrnNetworkManager.h:209
	void ProcessBeforeSimulation(const PreSimulationInputBuffer *, BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, TimerStatus *, BrnUpdateSet);

	// BrnNetworkManager.h:215
	void ProcessAfterSimulation(const PostSimulationInputBuffer *, BrnUpdateSet);

	// BrnNetworkManager.h:218
	BrnNetwork::BrnServerInterface * GetServerInterface();

	// BrnNetworkManager.h:223
	void TriggerEventFromLogin(BrnNetwork::BrnNetworkManager::ELoginEvent, void *);

	// BrnNetworkManager.h:228
	void TriggerEventFromServerInterface(CgsNetwork::EServerInterfaceEvent, void *);

	// BrnNetworkManager.h:235
	void JoinGameSession(char *);

	// BrnNetworkManager.h:240
	void JoinGameSessionByID(int32_t);

	// BrnNetworkManager.h:243
	Time GetTime() const;

	// BrnNetworkManager.h:246
	float32_t GetTimeStep() const;

	// BrnNetworkManager.h:249
	SuspensionManager * GetSuspensionManager();

	// BrnNetworkManager.h:252
	BrnNetworkManager::BuddyManager * GetBuddyManager();

	// BrnNetworkManager.h:255
	StandingsManager * GetStandingsManager();

	// BrnNetworkManager.h:258
	NetworkPlayerStatsManager * GetStatsManager();

	// BrnNetworkManager.h:261
	ScoreboardManager * GetScoreboardManager();

	// BrnNetworkManager.h:264
	BrnNetworkManager::GamerCardManager * GetGamerCardManager();

	// BrnNetworkManager.h:267
	LiveRevengeManager * GetLiveRevengeManager();

	// BrnNetworkManager.h:270
	BrnNetworkManager::Camera * GetCamera();

	// BrnNetworkManager.h:273
	BrnNetworkManager::GamerPictureManager * GetGamerPictureManager();

	// BrnNetworkManager.h:276
	NetworkImageManager * GetNetworkImageManager();

	// BrnNetworkManager.h:279
	TrafficManager * GetTrafficManager();

	// BrnNetworkManager.h:282
	NetworkAggressiveDrivingManager * GetAggressiveDrivingManager();

	// BrnNetworkManager.h:285
	SelectedRoutesManager * GetSelectedRoutesManager();

	// BrnNetworkManager.h:288
	BrnNetworkManager::LoginManager * GetLoginManager();

	// BrnNetworkManager.h:291
	LaunchManager * GetLaunchManager();

	// BrnNetworkManager.h:294
	ConnectionManager * GetConnectionManager();

	// BrnNetworkManager.h:297
	MatchMakingManager * GetMatchMakingManager();

	// BrnNetworkManager.h:300
	MarkedManManager * GetMarkedManManager();

	// BrnNetworkManager.h:303
	PostRoundManager * GetPostRoundManager();

	// BrnNetworkManager.h:306
	NetworkInviteManager * GetNetworkInviteManager();

	// BrnNetworkManager.h:309
	TimerStatus * GetTimerStatus();

	// BrnNetworkManager.h:312
	StateManager * GetStateManager();

	// BrnNetworkManager.h:315
	BrnNetworkManager::NetworkNotificationManager * GetNotificationManager();

	// BrnNetworkManager.h:318
	NetworkRoadRulesManager * GetRoadRulesManager();

	// BrnNetworkManager.h:321
	CgsSystem::EFrameRate GetLocalConsoleFrameRate();

	// BrnNetworkManager.h:324
	void SetRound(int32_t);

	// BrnNetworkManager.h:327
	int32_t GetRound() const;

	// BrnNetworkManager.h:332
	void PackTextureAndSendDisplayEventToGui(const NetworkTexture *, int32_t);

	// BrnNetworkManager.h:336
	bool IsLocalPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkManager.h:341
	void OutputPlayerStatsToGui(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkManager.h:344
	void OutputGameParameters();

	// BrnNetworkManager.h:347
	void OnGameLaunching();

	// BrnNetworkManager.h:350
	void OnGameStart();

	// BrnNetworkManager.h:353
	void OnRoundStart();

	// BrnNetworkManager.h:356
	void OnRoundFinish();

	// BrnNetworkManager.h:359
	void OnGameFinish();

	// BrnNetworkManager.h:362
	void OnEnterGame();

	// BrnNetworkManager.h:365
	void OnLeaveGame();

	// BrnNetworkManager.h:368
	bool IsDoingFreeBurnLobby();

	// Unknown accessibility
	// CgsMessage.h:85
	typedef uint8_t PackOrUnpackResult;

	// BrnNetworkManager.h:373
	BrnNetworkManager::PackOrUnpackResult PackOrUnpack(CgsNetwork::Message *, RoadRulesRecvData::NetworkPlayerID *);

	// BrnNetworkManager.h:378
	void CaptureTelemetryEvent(BrnNetwork::ETelemetryHook, const char *);

	// BrnNetworkManager.h:383
	void CaptureTelemetryEvent(BrnNetwork::ETelemetryHook, int32_t);

	// BrnNetworkManager.h:388
	void CaptureTelemetryEvent(BrnNetwork::ETelemetryHook, CgsID);

	// BrnNetworkManager.h:393
	void CaptureTelemetryEvent(BrnNetwork::ETelemetryHook, Time);

	// BrnNetworkManager.h:398
	void SetFreeBurnCar(CgsID, CgsID);

	// BrnNetworkManager.h:401
	CgsID GetFreeBurnCarID() const;

	// BrnNetworkManager.h:404
	CgsID GetFreeBurnWheelID() const;

	// BrnNetworkManager.h:408
	void SetCurrentDistrict(BrnWorld::EDistrict);

	// BrnNetworkManager.h:411
	BrnWorld::EDistrict GetCurrentDistrict() const;

	// BrnNetworkManager.h:415
	void SetCurrentCarColourIndex(uint16_t);

	// BrnNetworkManager.h:418
	uint16_t GetCurrentCarColourIndex() const;

	// BrnNetworkManager.h:422
	void SetCurrentPaintFinishIndex(uint16_t);

	// BrnNetworkManager.h:425
	uint16_t GetCurrentPaintFinishIndex() const;

	// BrnNetworkManager.h:430
	void ProcessNetworkTextureDecodeEvent(const NetworkInDxtDecodeImageEvent *);

	// BrnNetworkManager.h:433
	bool HasFever();

	// BrnNetworkManager.h:437
	void SetHasFever(bool);

	// BrnNetworkManager.h:440
	bool IsDeveloper();

	// BrnNetworkManager.h:444
	void SetIsDeveloper(bool);

private:
	// BrnNetworkManager.h:543
	int32_t GetMaxMessageSize(bool);

	// BrnNetworkManager.h:548
	void OutputPlayerStatusInfo(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkManager.h:553
	void OutputPlayerResultsInfo(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkManager.h:558
	void UpdateMenuDataFromPlayerParams(int32_t);

	// BrnNetworkManager.h:562
	void UnitTestFrameCountFunctions() const;

	// BrnNetworkManager.h:567
	bool GameHasFriendsIn(BrnNetwork::GameParams *);

	// BrnNetworkManager.h:572
	bool GameHasRivalsIn(BrnNetwork::GameParams *);

	// BrnNetworkManager.h:577
	void ProcessHLUpdateFlags(BrnUpdateSet);

	// BrnNetworkManager.h:584
	void PlayerManagerEventCallback(CgsNetwork::PlayerManager::EEvent, void *, void *);

	// BrnNetworkManager.h:590
	void SyncTimeClientReadyCallback(RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkManager.h:596
	void DxtDecodeCallback(void *, void *);

}

// BrnNetworkManager.h:97
struct BrnNetwork::BrnNetworkManager : public NetworkManager {
private:
	// BrnNetworkManager.h:448
	BrnNetwork::BrnServerInterface mServerInterface;

	// Unknown accessibility
	// BrnNetworkLoginManager.h:44
	typedef BrnNetwork::LoginManagerPS3 LoginManager;

	// BrnNetworkManager.h:450
	BrnNetworkManager::LoginManager mLoginManager;

	// BrnNetworkManager.h:451
	LaunchManager mLaunchManager;

	// BrnNetworkManager.h:452
	ConnectionManager mConnectionManager;

	// BrnNetworkManager.h:453
	MatchMakingManager mMatchMakingManager;

	// BrnNetworkManager.h:454
	SuspensionManager mSuspensionManager;

	// BrnNetworkManager.h:455
	PostRoundManager mPostRoundManager;

	// BrnNetworkManager.h:456
	StandingsManager mStandingsManager;

	// BrnNetworkManager.h:457
	TrafficManager mTrafficManager;

	// Unknown accessibility
	// BrnNetworkBuddyManager.h:48
	typedef BrnNetwork::BuddyManagerPS3 BuddyManager;

	// BrnNetworkManager.h:458
	BrnNetworkManager::BuddyManager mBuddyManager;

	// BrnNetworkManager.h:459
	NetworkPlayerStatsManager mStatsManager;

	// BrnNetworkManager.h:460
	ScoreboardManager mScoreboardManager;

	// BrnNetworkManager.h:461
	NetworkAggressiveDrivingManager mAggressiveDrivingManager;

	// BrnNetworkManager.h:462
	LiveRevengeManager mLiveRevengeManager;

	// BrnNetworkManager.h:463
	NetworkDirtyTrickManager mDirtyTrickManager;

	// BrnNetworkManager.h:464
	NetworkImageManager mImageManager;

	// Unknown accessibility
	// BrnNetworkGamerPictureManager.h:43
	typedef GamerPictureManagerPS3 GamerPictureManager;

	// BrnNetworkManager.h:465
	BrnNetworkManager::GamerPictureManager mGamerPictureManager;

	// Unknown accessibility
	// BrnNetworkNotificationManager.h:44
	typedef BrnNetwork::NetworkNotificationManagerPS3 NetworkNotificationManager;

	// BrnNetworkManager.h:466
	BrnNetworkManager::NetworkNotificationManager mNetworkNotificationManager;

	// BrnNetworkManager.h:467
	NetworkInviteManager mNetworkInviteManager;

	// BrnNetworkManager.h:468
	SelectedRoutesManager mSelectedRoutesManager;

	// BrnNetworkManager.h:469
	MarkedManManager mMarkedManManager;

	// BrnNetworkManager.h:470
	StateManager mStateManager;

	// BrnNetworkManager.h:471
	NetworkRoadRulesManager mRoadRulesManager;

	// BrnNetworkManager.h:472
	ChallengeSuccessManager mChallengeSuccessManager;

	// Unknown accessibility
	// BrnNetworkGamerCardManager.h:45
	typedef NetworkGamerCardManagerPS3 GamerCardManager;

	// BrnNetworkManager.h:473
	BrnNetworkManager::GamerCardManager mGamerCardManager;

	// Unknown accessibility
	// BrnNetworkCamera.h:43
	typedef CameraPS3 Camera;

	// BrnNetworkManager.h:475
	BrnNetworkManager::Camera mCamera;

	// BrnNetworkManager.h:476
	NetworkTextureDXTCompress mTextureCompressor;

	// BrnNetworkManager.h:478
	CgsID mFreeBurnCarID;

	// BrnNetworkManager.h:479
	CgsID mFreeBurnWheelID;

	// BrnNetworkManager.h:481
	BrnWorld::EDistrict meCurrentDistrict;

	// BrnNetworkManager.h:483
	uint16_t mu16CarColourIndex;

	// BrnNetworkManager.h:484
	uint16_t mu16PaintFinishIndex;

	// BrnNetworkManager.h:486
	BrnNetwork::BrnNetworkManager::EPrepareStage mePrepareStage;

	// BrnNetworkManager.h:487
	BrnNetwork::BrnNetworkManager::EReleaseStage meReleaseStage;

	// BrnNetworkManager.h:489
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkManager.h:491
	TimerStatus * mpGameTimerStatus;

	// BrnNetworkManager.h:492
	Time mTime;

	// BrnNetworkManager.h:493
	float32_t mfTimeStep;

	// BrnNetworkManager.h:494
	int32_t miFrameNum;

	// BrnNetworkManager.h:495
	CgsSystem::EFrameRate meLocalConsoleFrameRate;

	// BrnNetworkManager.h:497
	int32_t miRoundNumber;

	// BrnNetworkManager.h:499
	bool mbHasFever;

	// BrnNetworkManager.h:500
	bool mbIsDeveloper;

	// BrnNetworkManager.h:501
	bool mbDiskReadErrorThisFrame;

	// BrnNetworkManager.h:502
	bool mbNotifyGameOfDisconnectAfterDiskError;

	// BrnNetworkManager.h:505
	BrnNetwork::BrnNetworkPlayer[7] maNetworkPlayer;

	// BrnNetworkManager.h:506
	BrnNetwork::PlayerMenuData[7] maNetworkPlayerMenuData;

	// BrnNetworkManager.h:507
	BrnNetwork::PlayerMenuData mLocalPlayerMenuSelections;

	// BrnNetworkManager.h:509
	RoadRulesRecvData::NetworkPlayerID mPlayerIDStatsGet;

	// BrnNetworkManager.h:510
	Time mLastStatsSentToOnlinePlayStamp;

	// BrnNetworkManager.h:512
	PlayerName mExportPlayerName;

	// BrnNetworkManager.h:515
	int32_t miPackTextureToSendToGuiPM;

	// BrnNetworkManager.h:516
	int32_t miCameraUpdatePM;

	// BrnNetworkManager.h:517
	int32_t miGamerPicUpdatPM;

	// BrnNetworkManager.h:518
	int32_t miCGSNetworkAfterSimPM;

	// BrnNetworkManager.h:519
	int32_t miNetworkManagerSelectedRoutesPM;

	// BrnNetworkManager.h:520
	int32_t miNetworkManagerOutputPlayerStatsPM;

	// BrnNetworkManager.h:521
	int32_t miNetworkManagerPostUpdatePM;

	// BrnNetworkManager.h:522
	int32_t miNetworkManagerMiscPM;

	// BrnNetworkManager.h:523
	int32_t miNetworkServerInterfacePM;

	// BrnNetworkManager.h:524
	int32_t miNetworkBuddyPM;

	// BrnNetworkManager.h:525
	int32_t miNetworkTrafficPM;

	// BrnNetworkManager.h:526
	int32_t miNetworkAggressiveDrivingPM;

	// BrnNetworkManager.h:527
	int32_t miNetworkDirtyTrickPM;

	// BrnNetworkManager.h:528
	int32_t miNetworkHostStatusPM;

	// BrnNetworkManager.h:529
	int32_t miNetworkNotificationPM;

	// BrnNetworkManager.h:530
	int32_t miNetworkInvitePM;

	// BrnNetworkManager.h:531
	int32_t miNetworkStatsPM;

	// BrnNetworkManager.h:532
	int32_t miNetworkLiveRevengePM;

	// BrnNetworkManager.h:533
	int32_t miNetworkScoreboardPM;

	// BrnNetworkManager.h:534
	int32_t miNetworkRoutesManagerPM;

	// BrnNetworkManager.h:535
	int32_t miNetworkStateManagerPM;

	// BrnNetworkManager.h:536
	int32_t miNetworkRoadRulesManagerPM;

	// BrnNetworkManager.h:537
	int32_t miNetworkChallengeManagerPM;

public:
	// BrnNetworkManager.h:186
	// Declaration
	void Construct(BrnNetwork::BrnNetworkModule *, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkManager.cpp:182
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:183
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:184
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:185
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:186
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:187
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:188
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:189
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:190
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:191
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:192
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:193
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:194
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:195
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:196
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:197
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:198
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:199
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:200
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:201
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:202
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:203
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:204
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:205
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:206
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:207
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:208
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:209
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:210
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:211
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:212
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:213
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:214
		using namespace CgsDev::Message;

	}

	// BrnNetworkManager.h:193
	bool Prepare(CgsSystem::EFrameRate, const LaunchData *, HeapMalloc *);

	// BrnNetworkManager.h:197
	bool Release();

	// BrnNetworkManager.h:201
	void Destruct();

	// BrnNetworkManager.h:209
	void ProcessBeforeSimulation(const PreSimulationInputBuffer *, BrnNetwork::BrnNetworkModuleIO::OutputBuffer *, TimerStatus *, BrnUpdateSet);

	// BrnNetworkManager.h:215
	// Declaration
	void ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *, BrnUpdateSet) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkManager.cpp:1248
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:1271
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:1288
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:1292
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:1296
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:1300
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:1304
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:1308
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:1313
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:1317
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:1321
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:1325
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:1329
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:1333
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:1338
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:1343
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:1349
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:1355
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:1365
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:1372
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:1377
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:1382
		using namespace CgsDev::Message;

		// BrnNetworkManager.cpp:1391
		using namespace CgsDev::Message;

	}

	// BrnNetworkManager.h:218
	BrnNetwork::BrnServerInterface * GetServerInterface();

	// BrnNetworkManager.h:223
	void TriggerEventFromLogin(BrnNetwork::BrnNetworkManager::ELoginEvent, void *);

	// BrnNetworkManager.h:228
	void TriggerEventFromServerInterface(CgsNetwork::EServerInterfaceEvent, void *);

	// BrnNetworkManager.h:235
	void JoinGameSession(char *);

	// BrnNetworkManager.h:240
	void JoinGameSessionByID(int32_t);

	// BrnNetworkManager.h:243
	Time GetTime() const;

	// BrnNetworkManager.h:246
	float32_t GetTimeStep() const;

	// BrnNetworkManager.h:249
	SuspensionManager * GetSuspensionManager();

	// BrnNetworkManager.h:252
	BrnNetworkManager::BuddyManager * GetBuddyManager();

	// BrnNetworkManager.h:255
	StandingsManager * GetStandingsManager();

	// BrnNetworkManager.h:258
	NetworkPlayerStatsManager * GetStatsManager();

	// BrnNetworkManager.h:261
	ScoreboardManager * GetScoreboardManager();

	// BrnNetworkManager.h:264
	BrnNetworkManager::GamerCardManager * GetGamerCardManager();

	// BrnNetworkManager.h:267
	LiveRevengeManager * GetLiveRevengeManager();

	// BrnNetworkManager.h:270
	BrnNetworkManager::Camera * GetCamera();

	// BrnNetworkManager.h:273
	BrnNetworkManager::GamerPictureManager * GetGamerPictureManager();

	// BrnNetworkManager.h:276
	NetworkImageManager * GetNetworkImageManager();

	// BrnNetworkManager.h:279
	TrafficManager * GetTrafficManager();

	// BrnNetworkManager.h:282
	NetworkAggressiveDrivingManager * GetAggressiveDrivingManager();

	// BrnNetworkManager.h:285
	SelectedRoutesManager * GetSelectedRoutesManager();

	// BrnNetworkManager.h:288
	BrnNetworkManager::LoginManager * GetLoginManager();

	// BrnNetworkManager.h:291
	LaunchManager * GetLaunchManager();

	// BrnNetworkManager.h:294
	ConnectionManager * GetConnectionManager();

	// BrnNetworkManager.h:297
	MatchMakingManager * GetMatchMakingManager();

	// BrnNetworkManager.h:300
	MarkedManManager * GetMarkedManManager();

	// BrnNetworkManager.h:303
	PostRoundManager * GetPostRoundManager();

	// BrnNetworkManager.h:306
	NetworkInviteManager * GetNetworkInviteManager();

	// BrnNetworkManager.h:309
	TimerStatus * GetTimerStatus();

	// BrnNetworkManager.h:312
	StateManager * GetStateManager();

	// BrnNetworkManager.h:315
	BrnNetworkManager::NetworkNotificationManager * GetNotificationManager();

	// BrnNetworkManager.h:318
	NetworkRoadRulesManager * GetRoadRulesManager();

	// BrnNetworkManager.h:321
	CgsSystem::EFrameRate GetLocalConsoleFrameRate();

	// BrnNetworkManager.h:324
	void SetRound(int32_t);

	// BrnNetworkManager.h:327
	int32_t GetRound() const;

	// BrnNetworkManager.h:332
	void PackTextureAndSendDisplayEventToGui(const NetworkTexture *, int32_t);

	// BrnNetworkManager.h:336
	bool IsLocalPlayer(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkManager.h:341
	void OutputPlayerStatsToGui(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkManager.h:344
	void OutputGameParameters();

	// BrnNetworkManager.h:347
	void OnGameLaunching();

	// BrnNetworkManager.h:350
	void OnGameStart();

	// BrnNetworkManager.h:353
	void OnRoundStart();

	// BrnNetworkManager.h:356
	void OnRoundFinish();

	// BrnNetworkManager.h:359
	void OnGameFinish();

	// BrnNetworkManager.h:362
	void OnEnterGame();

	// BrnNetworkManager.h:365
	void OnLeaveGame();

	// BrnNetworkManager.h:368
	bool IsDoingFreeBurnLobby();

	// Unknown accessibility
	// CgsMessage.h:85
	typedef uint8_t PackOrUnpackResult;

	// BrnNetworkManager.h:373
	BrnNetworkManager::PackOrUnpackResult PackOrUnpack(CgsNetwork::Message *, RoadRulesRecvData::NetworkPlayerID *);

	// BrnNetworkManager.h:378
	void CaptureTelemetryEvent(BrnNetwork::ETelemetryHook, const char *);

	// BrnNetworkManager.h:383
	void CaptureTelemetryEvent(BrnNetwork::ETelemetryHook, int32_t);

	// BrnNetworkManager.h:388
	void CaptureTelemetryEvent(BrnNetwork::ETelemetryHook, CgsID);

	// BrnNetworkManager.h:393
	void CaptureTelemetryEvent(BrnNetwork::ETelemetryHook, Time);

	// BrnNetworkManager.h:398
	void SetFreeBurnCar(CgsID, CgsID);

	// BrnNetworkManager.h:401
	CgsID GetFreeBurnCarID() const;

	// BrnNetworkManager.h:404
	CgsID GetFreeBurnWheelID() const;

	// BrnNetworkManager.h:408
	void SetCurrentDistrict(BrnWorld::EDistrict);

	// BrnNetworkManager.h:411
	BrnWorld::EDistrict GetCurrentDistrict() const;

	// BrnNetworkManager.h:415
	void SetCurrentCarColourIndex(uint16_t);

	// BrnNetworkManager.h:418
	uint16_t GetCurrentCarColourIndex() const;

	// BrnNetworkManager.h:422
	void SetCurrentPaintFinishIndex(uint16_t);

	// BrnNetworkManager.h:425
	uint16_t GetCurrentPaintFinishIndex() const;

	// BrnNetworkManager.h:430
	void ProcessNetworkTextureDecodeEvent(const NetworkInDxtDecodeImageEvent *);

	// BrnNetworkManager.h:433
	bool HasFever();

	// BrnNetworkManager.h:437
	void SetHasFever(bool);

	// BrnNetworkManager.h:440
	bool IsDeveloper();

	// BrnNetworkManager.h:444
	void SetIsDeveloper(bool);

private:
	// BrnNetworkManager.h:543
	int32_t GetMaxMessageSize(bool);

	// BrnNetworkManager.h:548
	void OutputPlayerStatusInfo(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkManager.h:553
	void OutputPlayerResultsInfo(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkManager.h:558
	void UpdateMenuDataFromPlayerParams(int32_t);

	// BrnNetworkManager.h:562
	void UnitTestFrameCountFunctions() const;

	// BrnNetworkManager.h:567
	bool GameHasFriendsIn(BrnNetwork::GameParams *);

	// BrnNetworkManager.h:572
	bool GameHasRivalsIn(BrnNetwork::GameParams *);

	// BrnNetworkManager.h:577
	void ProcessHLUpdateFlags(BrnUpdateSet);

	// BrnNetworkManager.h:584
	void PlayerManagerEventCallback(CgsNetwork::PlayerManager::EEvent, void *, void *);

	// BrnNetworkManager.h:590
	void SyncTimeClientReadyCallback(RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkManager.h:596
	void DxtDecodeCallback(void *, void *);

}

