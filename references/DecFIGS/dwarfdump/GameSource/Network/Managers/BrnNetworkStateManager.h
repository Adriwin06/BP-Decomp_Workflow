// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct StateManager {
		// BrnNetworkStateManager.h:77
		enum EState {
			E_STATE_LOGIN = 0,
			E_STATE_LAUNCHING = 1,
			E_STATE_WAIT_GAME_MODE_START = 2,
			E_STATE_SYNC_TIME = 3,
			E_STATE_RACING = 4,
			E_STATE_WAIT_MATCHMAKING = 5,
			E_STATE_WAIT_SUSPENSION_IDLE_TO_SUSPEND = 6,
			E_STATE_WAIT_SUSPENSION_IDLE_LEAVING_GAME = 7,
			E_STATE_WAIT_SUSPENSION = 8,
			E_STATE_WAIT_SUSPENSION_LEAVING_GAME = 9,
			E_STATE_WAIT_POST_ROUND = 10,
			E_STATE_WAIT_CAR_SELECT = 11,
			E_STATE_WAIT_MODIFY_GAME = 12,
			E_STATE_WAIT_DOWNLOAD_NEWS_IDLE = 13,
			E_STATE_WAIT_DOWNLOAD_TOS_IDLE = 14,
			E_STATE_WAIT_DOWNLOAD_NEWS = 15,
			E_STATE_WAIT_DOWNLOAD_TOS = 16,
			E_STATE_WAIT_SERVER_INTERFACE_ACTION = 17,
			E_STATE_PREPARING_FOR_INVITE = 18,
			E_STATE_PREPARED_FOR_INVITE = 19,
			E_STATE_WAIT_FOR_LOADING_SCREEN = 20,
			E_STATE_WAIT_UPDATE_ACCOUNT = 21,
			E_STATE_COUNT = 22,
		}

		// BrnNetworkStateManager.h:221
		struct CachedNewCarData {
			// BrnNetworkStateManager.h:223
			CgsID mCarModelId;

			// BrnNetworkStateManager.h:224
			CgsID mWheelModelId;

			// BrnNetworkStateManager.h:225
			bool mbValid;

		}

		// BrnNetworkStateManager.h:229
		struct CachedFeverData {
			// BrnNetworkStateManager.h:231
			bool mbHasFever;

			// BrnNetworkStateManager.h:232
			bool mbValid;

		}

		// BrnNetworkStateManager.h:236
		struct CachedMarkedManData {
			// BrnNetworkStateManager.h:238
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnNetworkStateManager.h:239
			bool mbValid;

		}

		// BrnNetworkStateManager.h:243
		struct CachedDistrictData {
			// BrnNetworkStateManager.h:245
			extern const float32_t KF_DISTRICT_UPDATE_INTERVAL;

			// BrnNetworkStateManager.h:247
			BrnWorld::EDistrict meDistrict;

			// BrnNetworkStateManager.h:248
			float32_t mfLastSentTime;

			// BrnNetworkStateManager.h:249
			bool mbValid;

		}

		// BrnNetworkStateManager.h:253
		struct CachedCarColourData {
			// BrnNetworkStateManager.h:255
			extern const float32_t KF_CAR_COLOUR_UPDATE_INTERVAL;

			// BrnNetworkStateManager.h:257
			float32_t mfLastSentTime;

			// BrnNetworkStateManager.h:258
			uint16_t mu16CarColourIndex;

			// BrnNetworkStateManager.h:259
			uint16_t mu16PaintFinishIndex;

			// BrnNetworkStateManager.h:260
			bool mbValid;

		}

	}

}

// BrnNetworkStateManager.h:71
struct BrnNetwork::StateManager {
	// BrnNetworkStateManager.h:74
	extern char[] KAC_TOS_DATABASE_ID;

	// BrnNetworkStateManager.h:75
	extern char[] KAC_NEWS_DATABASE_ID;

private:
	// BrnNetworkStateManager.h:294
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkStateManager.h:295
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkStateManager.h:297
	UnicodeBuffer::CgsUtf8 * mpTOS;

	// BrnNetworkStateManager.h:298
	UnicodeBuffer::CgsUtf8 * mpNews;

	// BrnNetworkStateManager.h:300
	BrnNetwork::StateManager::EState meState;

	// BrnNetworkStateManager.h:301
	BrnGui::GuiEventNetworkOutputPlayerTexture::EOutput meOutputPlayerTexture;

	// BrnNetworkStateManager.h:302
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerIDToOutput;

	// BrnNetworkStateManager.h:304
	BrnNetwork::StateManager::CachedNewCarData mNewCarData;

	// BrnNetworkStateManager.h:305
	BrnNetwork::StateManager::CachedMarkedManData mMarkedManData;

	// BrnNetworkStateManager.h:306
	BrnNetwork::StateManager::CachedDistrictData mDistrictData;

	// BrnNetworkStateManager.h:307
	BrnNetwork::StateManager::CachedCarColourData mCarColourData;

	// BrnNetworkStateManager.h:308
	BrnNetwork::StateManager::CachedFeverData mFeverData;

	// BrnNetworkStateManager.h:310
	BrnNetwork::ELeftGameReason meLeftReason;

	// BrnNetworkStateManager.h:311
	CgsNetwork::EKickReason meKickReason;

	// BrnNetworkStateManager.h:313
	bool mbSetNotPlaying;

	// BrnNetworkStateManager.h:314
	bool mbDoInviteAfterCreate;

	// BrnNetworkStateManager.h:315
	bool mbSuspendAfterSignIn;

	// BrnNetworkStateManager.h:316
	bool mbCreatedFromMenus;

	// BrnNetworkStateManager.h:317
	bool mbForceStartFreeburnLobby;

	// BrnNetworkStateManager.h:318
	bool mbInstantFreeburn;

	// BrnNetworkStateManager.h:319
	bool mbReadyToJoinGameSession;

	// BrnNetworkStateManager.h:320
	bool mbLoadingScreenVisible;

	// BrnNetworkStateManager.h:321
	bool mbAreWeAutosaving;

	// BrnNetworkStateManager.h:322
	bool mbCloseLimboGameWhenIdle;

	// BrnNetworkStateManager.h:323
	bool mbStartFreeburnLobbyThisFrame;

	// BrnNetworkStateManager.h:324
	bool mbStartingAfterJoinThisFrame;

	// BrnNetworkStateManager.h:325
	bool mbStartingAfterOnlineEventThisFrame;

	// BrnNetworkStateManager.h:326
	bool mbForceStartFreeburnLobbyThisFrame;

	// BrnNetworkStateManager.h:327
	bool mbRefreshingFreeburnLobbyThisFrame;

public:
	// BrnNetworkStateManager.h:108
	void Construct(BrnNetwork::BrnNetworkModule *);

	// BrnNetworkStateManager.h:112
	bool Prepare();

	// BrnNetworkStateManager.h:116
	bool Release();

	// BrnNetworkStateManager.h:120
	void Destruct();

	// BrnNetworkStateManager.h:125
	void UpdateEvents(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkStateManager.h:130
	void Update(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkStateManager.h:134
	void Disconnected();

	// BrnNetworkStateManager.h:138
	void StartEndOfRound();

	// BrnNetworkStateManager.h:144
	void StartEndOfGame(bool, bool);

	// BrnNetworkStateManager.h:148
	void PrepareForInvite();

	// BrnNetworkStateManager.h:153
	void IntroStopped(const StopModeIntroAction *);

	// BrnNetworkStateManager.h:158
	void MarkedManLoaded(const MarkedManLoadedAction *);

	// BrnNetworkStateManager.h:163
	void JoinGameSession(char *);

	// BrnNetworkStateManager.h:168
	void JoinGameSessionByID(int32_t);

	// BrnNetworkStateManager.h:173
	void UpdateMarkedMan(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkStateManager.h:176
	bool IsGameLaunched();

	// BrnNetworkStateManager.h:179
	bool IsIdle();

	// BrnNetworkStateManager.h:182
	bool IsReadyToJoinGameSession();

	// BrnNetworkStateManager.h:185
	bool IsMatchMaking();

	// BrnNetworkStateManager.h:188
	void PlayerAdded();

	// BrnNetworkStateManager.h:191
	void PlayerRemoved();

	// BrnNetworkStateManager.h:194
	void OnGameIDChanged();

	// BrnNetworkStateManager.h:199
	void SuspendToLeaveGame(BrnNetwork::ELeftGameReason, CgsNetwork::EKickReason);

	// BrnNetworkStateManager.h:203
	bool GameModeHasEnoughTeams();

	// BrnNetworkStateManager.h:206
	bool AreWeAutosaving();

	// BrnNetworkStateManager.h:209
	bool IsInLimbo();

	// BrnNetworkStateManager.h:212
	void CloseLimboGame();

	// BrnNetworkStateManager.h:216
	void HandleConnectEvent(const GuiEventNetworkConnect *);

private:
	// BrnNetworkStateManager.h:333
	void ProcessGuiEvents(const InputBuffer::GuiEventQueue *);

	// BrnNetworkStateManager.h:338
	void ProcessGameStateActions(const InputBuffer::GameActionQueue *);

	// BrnNetworkStateManager.h:343
	void ProcessNetworkEvents(const NetworkEventQueue *);

	// BrnNetworkStateManager.h:349
	void CreateGame(const GuiEventNetworkCreateGame *, bool);

	// BrnNetworkStateManager.h:354
	void ModifyGame(const BrnGui::GuiEventNetworkGameParams *);

	// BrnNetworkStateManager.h:358
	void PostRoundProcessingFinished();

	// BrnNetworkStateManager.h:361
	void PostGameProcessingFinished();

	// BrnNetworkStateManager.h:365
	void OutputPlayerTexture();

	// BrnNetworkStateManager.h:369
	void StartGameMode();

	// BrnNetworkStateManager.h:377
	void StartFreeBurnLobbyGameMode(bool, bool, bool, bool);

	// BrnNetworkStateManager.h:382
	void RefreshFreeBurnLobbyGameMode();

	// BrnNetworkStateManager.h:386
	bool HaveAllSelectedACar();

	// BrnNetworkStateManager.h:391
	void StartLogIn(BrnNetwork::LoginManagerBase::ESignInType);

	// BrnNetworkStateManager.h:395
	void UpdateLogin(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkStateManager.h:398
	void UpdateLaunching();

	// BrnNetworkStateManager.h:401
	void UpdateSyncTime();

	// BrnNetworkStateManager.h:405
	void UpdateNewsAndTOSDownload();

	// BrnNetworkStateManager.h:409
	bool GameModeHasTeams();

	// BrnNetworkStateManager.h:413
	void OnFullConnection();

	// BrnNetworkStateManager.h:417
	void StartNewsDownload();

	// BrnNetworkStateManager.h:421
	void StartTOSDownload();

	// BrnNetworkStateManager.h:425
	void ReleaseNewsAndTOSDownload();

	// BrnNetworkStateManager.h:429
	char * StripWebOfferControlCodes(char *);

	// BrnNetworkStateManager.h:434
	void SendStartNextRoundMessage(int32_t);

	// BrnNetworkStateManager.h:439
	void SendFreeburnLobbyRoundMessage(int32_t);

	// BrnNetworkStateManager.h:443
	void CreateInviteGame();

	// BrnNetworkStateManager.h:447
	void DoInstantFreeburn();

	// BrnNetworkStateManager.h:453
	void CreateGameFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:459
	void JoinGameFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:465
	void LeaveGameForOfflineGameFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:471
	void QuickJoinFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:477
	void SearchFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:483
	void SuspensionFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:489
	void ResumeFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:495
	void PostRoundFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:501
	void PostGameFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:509
	void HostChangedCallback(const TimerStatus *, RoadRulesRecvData::NetworkPlayerID, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkStateManager.h:515
	void GetCompressedCameraPicCallback(void *, void *);

}

// BrnNetworkStateManager.h:74
extern char[] KAC_TOS_DATABASE_ID;

// BrnNetworkStateManager.h:75
extern char[] KAC_NEWS_DATABASE_ID;

// BrnNetworkStateManager.h:245
extern const float32_t KF_DISTRICT_UPDATE_INTERVAL;

// BrnNetworkStateManager.h:255
extern const float32_t KF_CAR_COLOUR_UPDATE_INTERVAL;

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct StateManager {
		// BrnNetworkStateManager.h:77
		enum EState {
			E_STATE_LOGIN = 0,
			E_STATE_LAUNCHING = 1,
			E_STATE_WAIT_GAME_MODE_START = 2,
			E_STATE_SYNC_TIME = 3,
			E_STATE_RACING = 4,
			E_STATE_WAIT_MATCHMAKING = 5,
			E_STATE_WAIT_SUSPENSION_IDLE_TO_SUSPEND = 6,
			E_STATE_WAIT_SUSPENSION_IDLE_LEAVING_GAME = 7,
			E_STATE_WAIT_SUSPENSION = 8,
			E_STATE_WAIT_SUSPENSION_LEAVING_GAME = 9,
			E_STATE_WAIT_POST_ROUND = 10,
			E_STATE_WAIT_CAR_SELECT = 11,
			E_STATE_WAIT_MODIFY_GAME = 12,
			E_STATE_WAIT_DOWNLOAD_NEWS_IDLE = 13,
			E_STATE_WAIT_DOWNLOAD_TOS_IDLE = 14,
			E_STATE_WAIT_DOWNLOAD_NEWS = 15,
			E_STATE_WAIT_DOWNLOAD_TOS = 16,
			E_STATE_WAIT_SERVER_INTERFACE_ACTION = 17,
			E_STATE_PREPARING_FOR_INVITE = 18,
			E_STATE_PREPARED_FOR_INVITE = 19,
			E_STATE_WAIT_FOR_LOADING_SCREEN = 20,
			E_STATE_WAIT_UPDATE_ACCOUNT = 21,
			E_STATE_COUNT = 22,
		}

		// BrnNetworkStateManager.h:221
		struct CachedNewCarData {
			// BrnNetworkStateManager.h:223
			CgsID mCarModelId;

			// BrnNetworkStateManager.h:224
			CgsID mWheelModelId;

			// BrnNetworkStateManager.h:225
			bool mbValid;

		}

		// BrnNetworkStateManager.h:229
		struct CachedFeverData {
			// BrnNetworkStateManager.h:231
			bool mbHasFever;

			// BrnNetworkStateManager.h:232
			bool mbValid;

		}

		// BrnNetworkStateManager.h:236
		struct CachedMarkedManData {
			// BrnNetworkStateManager.h:238
			GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

			// BrnNetworkStateManager.h:239
			bool mbValid;

		}

		// BrnNetworkStateManager.h:243
		struct CachedDistrictData {
			// BrnNetworkStateManager.h:245
			extern const float32_t KF_DISTRICT_UPDATE_INTERVAL;

			// BrnNetworkStateManager.h:247
			BrnWorld::EDistrict meDistrict;

			// BrnNetworkStateManager.h:248
			float32_t mfLastSentTime;

			// BrnNetworkStateManager.h:249
			bool mbValid;

		}

		// BrnNetworkStateManager.h:253
		struct CachedCarColourData {
			// BrnNetworkStateManager.h:255
			extern const float32_t KF_CAR_COLOUR_UPDATE_INTERVAL;

			// BrnNetworkStateManager.h:257
			float32_t mfLastSentTime;

			// BrnNetworkStateManager.h:258
			uint16_t mu16CarColourIndex;

			// BrnNetworkStateManager.h:259
			uint16_t mu16PaintFinishIndex;

			// BrnNetworkStateManager.h:260
			bool mbValid;

		}

	}

}

// BrnNetworkStateManager.h:71
struct BrnNetwork::StateManager {
	// BrnNetworkStateManager.h:74
	extern char[] KAC_TOS_DATABASE_ID;

	// BrnNetworkStateManager.h:75
	extern char[] KAC_NEWS_DATABASE_ID;

private:
	// BrnNetworkStateManager.h:294
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkStateManager.h:295
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkStateManager.h:297
	UnicodeBuffer::CgsUtf8 * mpTOS;

	// BrnNetworkStateManager.h:298
	UnicodeBuffer::CgsUtf8 * mpNews;

	// BrnNetworkStateManager.h:300
	BrnNetwork::StateManager::EState meState;

	// BrnNetworkStateManager.h:301
	BrnGui::GuiEventNetworkOutputPlayerTexture::EOutput meOutputPlayerTexture;

	// BrnNetworkStateManager.h:302
	GuiEventNetworkLaunching::NetworkPlayerID mNetworkPlayerIDToOutput;

	// BrnNetworkStateManager.h:304
	BrnNetwork::StateManager::CachedNewCarData mNewCarData;

	// BrnNetworkStateManager.h:305
	BrnNetwork::StateManager::CachedMarkedManData mMarkedManData;

	// BrnNetworkStateManager.h:306
	BrnNetwork::StateManager::CachedDistrictData mDistrictData;

	// BrnNetworkStateManager.h:307
	BrnNetwork::StateManager::CachedCarColourData mCarColourData;

	// BrnNetworkStateManager.h:308
	BrnNetwork::StateManager::CachedFeverData mFeverData;

	// BrnNetworkStateManager.h:310
	BrnNetwork::ELeftGameReason meLeftReason;

	// BrnNetworkStateManager.h:311
	CgsNetwork::EKickReason meKickReason;

	// BrnNetworkStateManager.h:313
	bool mbSetNotPlaying;

	// BrnNetworkStateManager.h:314
	bool mbDoInviteAfterCreate;

	// BrnNetworkStateManager.h:315
	bool mbSuspendAfterSignIn;

	// BrnNetworkStateManager.h:316
	bool mbCreatedFromMenus;

	// BrnNetworkStateManager.h:317
	bool mbForceStartFreeburnLobby;

	// BrnNetworkStateManager.h:318
	bool mbInstantFreeburn;

	// BrnNetworkStateManager.h:319
	bool mbReadyToJoinGameSession;

	// BrnNetworkStateManager.h:320
	bool mbLoadingScreenVisible;

	// BrnNetworkStateManager.h:321
	bool mbAreWeAutosaving;

	// BrnNetworkStateManager.h:322
	bool mbCloseLimboGameWhenIdle;

	// BrnNetworkStateManager.h:323
	bool mbStartFreeburnLobbyThisFrame;

	// BrnNetworkStateManager.h:324
	bool mbStartingAfterJoinThisFrame;

	// BrnNetworkStateManager.h:325
	bool mbStartingAfterOnlineEventThisFrame;

	// BrnNetworkStateManager.h:326
	bool mbForceStartFreeburnLobbyThisFrame;

	// BrnNetworkStateManager.h:327
	bool mbRefreshingFreeburnLobbyThisFrame;

public:
	// BrnNetworkStateManager.h:108
	void Construct(BrnNetwork::BrnNetworkModule *);

	// BrnNetworkStateManager.h:112
	bool Prepare();

	// BrnNetworkStateManager.h:116
	bool Release();

	// BrnNetworkStateManager.h:120
	void Destruct();

	// BrnNetworkStateManager.h:125
	void UpdateEvents(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkStateManager.h:130
	void Update(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkStateManager.h:134
	void Disconnected();

	// BrnNetworkStateManager.h:138
	void StartEndOfRound();

	// BrnNetworkStateManager.h:144
	void StartEndOfGame(bool, bool);

	// BrnNetworkStateManager.h:148
	void PrepareForInvite();

	// BrnNetworkStateManager.h:153
	void IntroStopped(const StopModeIntroAction *);

	// BrnNetworkStateManager.h:158
	void MarkedManLoaded(const MarkedManLoadedAction *);

	// BrnNetworkStateManager.h:163
	void JoinGameSession(char *);

	// BrnNetworkStateManager.h:168
	void JoinGameSessionByID(int32_t);

	// BrnNetworkStateManager.h:173
	void UpdateMarkedMan(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnNetworkStateManager.h:176
	bool IsGameLaunched();

	// BrnNetworkStateManager.h:179
	bool IsIdle();

	// BrnNetworkStateManager.h:182
	bool IsReadyToJoinGameSession();

	// BrnNetworkStateManager.h:185
	bool IsMatchMaking();

	// BrnNetworkStateManager.h:188
	void PlayerAdded();

	// BrnNetworkStateManager.h:191
	void PlayerRemoved();

	// BrnNetworkStateManager.h:194
	void OnGameIDChanged();

	// BrnNetworkStateManager.h:199
	void SuspendToLeaveGame(BrnNetwork::ELeftGameReason, CgsNetwork::EKickReason);

	// BrnNetworkStateManager.h:203
	bool GameModeHasEnoughTeams();

	// BrnNetworkStateManager.h:206
	bool AreWeAutosaving();

	// BrnNetworkStateManager.h:209
	bool IsInLimbo();

	// BrnNetworkStateManager.h:212
	void CloseLimboGame();

	// BrnNetworkStateManager.h:216
	void HandleConnectEvent(const GuiEventNetworkConnect *);

private:
	// BrnNetworkStateManager.h:333
	void ProcessGuiEvents(const InputBuffer::GuiEventQueue *);

	// BrnNetworkStateManager.h:338
	void ProcessGameStateActions(const OutputBuffer::GameActionQueue *);

	// BrnNetworkStateManager.h:343
	void ProcessNetworkEvents(const NetworkEventQueue *);

	// BrnNetworkStateManager.h:349
	void CreateGame(const GuiEventNetworkCreateGame *, bool);

	// BrnNetworkStateManager.h:354
	void ModifyGame(const BrnGui::GuiEventNetworkGameParams *);

	// BrnNetworkStateManager.h:358
	void PostRoundProcessingFinished();

	// BrnNetworkStateManager.h:361
	void PostGameProcessingFinished();

	// BrnNetworkStateManager.h:365
	void OutputPlayerTexture();

	// BrnNetworkStateManager.h:369
	void StartGameMode();

	// BrnNetworkStateManager.h:377
	void StartFreeBurnLobbyGameMode(bool, bool, bool, bool);

	// BrnNetworkStateManager.h:382
	void RefreshFreeBurnLobbyGameMode();

	// BrnNetworkStateManager.h:386
	bool HaveAllSelectedACar();

	// BrnNetworkStateManager.h:391
	void StartLogIn(BrnNetwork::LoginManagerBase::ESignInType);

	// BrnNetworkStateManager.h:395
	void UpdateLogin(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkStateManager.h:398
	void UpdateLaunching();

	// BrnNetworkStateManager.h:401
	void UpdateSyncTime();

	// BrnNetworkStateManager.h:405
	void UpdateNewsAndTOSDownload();

	// BrnNetworkStateManager.h:409
	bool GameModeHasTeams();

	// BrnNetworkStateManager.h:413
	void OnFullConnection();

	// BrnNetworkStateManager.h:417
	void StartNewsDownload();

	// BrnNetworkStateManager.h:421
	void StartTOSDownload();

	// BrnNetworkStateManager.h:425
	void ReleaseNewsAndTOSDownload();

	// BrnNetworkStateManager.h:429
	char * StripWebOfferControlCodes(char *);

	// BrnNetworkStateManager.h:434
	void SendStartNextRoundMessage(int32_t);

	// BrnNetworkStateManager.h:439
	void SendFreeburnLobbyRoundMessage(int32_t);

	// BrnNetworkStateManager.h:443
	void CreateInviteGame();

	// BrnNetworkStateManager.h:447
	void DoInstantFreeburn();

	// BrnNetworkStateManager.h:453
	void CreateGameFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:459
	void JoinGameFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:465
	void LeaveGameForOfflineGameFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:471
	void QuickJoinFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:477
	void SearchFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:483
	void SuspensionFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:489
	void ResumeFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:495
	void PostRoundFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:501
	void PostGameFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:509
	void HostChangedCallback(const TimerStatus *, GuiEventNetworkLaunching::NetworkPlayerID, GuiEventNetworkLaunching::NetworkPlayerID, void *);

	// BrnNetworkStateManager.h:515
	void GetCompressedCameraPicCallback(void *, void *);

}

// BrnNetworkStateManager.h:71
struct BrnNetwork::StateManager {
	// BrnNetworkStateManager.h:74
	extern char[] KAC_TOS_DATABASE_ID;

	// BrnNetworkStateManager.h:75
	extern char[] KAC_NEWS_DATABASE_ID;

private:
	// BrnNetworkStateManager.h:294
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkStateManager.h:295
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkStateManager.h:297
	UnicodeBuffer::CgsUtf8 * mpTOS;

	// BrnNetworkStateManager.h:298
	UnicodeBuffer::CgsUtf8 * mpNews;

	// BrnNetworkStateManager.h:300
	BrnNetwork::StateManager::EState meState;

	// BrnNetworkStateManager.h:301
	BrnGui::GuiEventNetworkOutputPlayerTexture::EOutput meOutputPlayerTexture;

	// BrnNetworkStateManager.h:302
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerIDToOutput;

	// BrnNetworkStateManager.h:304
	BrnNetwork::StateManager::CachedNewCarData mNewCarData;

	// BrnNetworkStateManager.h:305
	BrnNetwork::StateManager::CachedMarkedManData mMarkedManData;

	// BrnNetworkStateManager.h:306
	BrnNetwork::StateManager::CachedDistrictData mDistrictData;

	// BrnNetworkStateManager.h:307
	BrnNetwork::StateManager::CachedCarColourData mCarColourData;

	// BrnNetworkStateManager.h:308
	BrnNetwork::StateManager::CachedFeverData mFeverData;

	// BrnNetworkStateManager.h:310
	BrnNetwork::ELeftGameReason meLeftReason;

	// BrnNetworkStateManager.h:311
	CgsNetwork::EKickReason meKickReason;

	// BrnNetworkStateManager.h:313
	bool mbSetNotPlaying;

	// BrnNetworkStateManager.h:314
	bool mbDoInviteAfterCreate;

	// BrnNetworkStateManager.h:315
	bool mbSuspendAfterSignIn;

	// BrnNetworkStateManager.h:316
	bool mbCreatedFromMenus;

	// BrnNetworkStateManager.h:317
	bool mbForceStartFreeburnLobby;

	// BrnNetworkStateManager.h:318
	bool mbInstantFreeburn;

	// BrnNetworkStateManager.h:319
	bool mbReadyToJoinGameSession;

	// BrnNetworkStateManager.h:320
	bool mbLoadingScreenVisible;

	// BrnNetworkStateManager.h:321
	bool mbAreWeAutosaving;

	// BrnNetworkStateManager.h:322
	bool mbCloseLimboGameWhenIdle;

	// BrnNetworkStateManager.h:323
	bool mbStartFreeburnLobbyThisFrame;

	// BrnNetworkStateManager.h:324
	bool mbStartingAfterJoinThisFrame;

	// BrnNetworkStateManager.h:325
	bool mbStartingAfterOnlineEventThisFrame;

	// BrnNetworkStateManager.h:326
	bool mbForceStartFreeburnLobbyThisFrame;

	// BrnNetworkStateManager.h:327
	bool mbRefreshingFreeburnLobbyThisFrame;

public:
	// BrnNetworkStateManager.h:108
	void Construct(BrnNetwork::BrnNetworkModule *);

	// BrnNetworkStateManager.h:112
	bool Prepare();

	// BrnNetworkStateManager.h:116
	bool Release();

	// BrnNetworkStateManager.h:120
	void Destruct();

	// BrnNetworkStateManager.h:125
	void UpdateEvents(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkStateManager.h:130
	void Update(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkStateManager.h:134
	void Disconnected();

	// BrnNetworkStateManager.h:138
	void StartEndOfRound();

	// BrnNetworkStateManager.h:144
	void StartEndOfGame(bool, bool);

	// BrnNetworkStateManager.h:148
	void PrepareForInvite();

	// BrnNetworkStateManager.h:153
	void IntroStopped(const StopModeIntroAction *);

	// BrnNetworkStateManager.h:158
	void MarkedManLoaded(const MarkedManLoadedAction *);

	// BrnNetworkStateManager.h:163
	void JoinGameSession(char *);

	// BrnNetworkStateManager.h:168
	void JoinGameSessionByID(int32_t);

	// BrnNetworkStateManager.h:173
	void UpdateMarkedMan(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkStateManager.h:176
	bool IsGameLaunched();

	// BrnNetworkStateManager.h:179
	bool IsIdle();

	// BrnNetworkStateManager.h:182
	bool IsReadyToJoinGameSession();

	// BrnNetworkStateManager.h:185
	bool IsMatchMaking();

	// BrnNetworkStateManager.h:188
	void PlayerAdded();

	// BrnNetworkStateManager.h:191
	void PlayerRemoved();

	// BrnNetworkStateManager.h:194
	void OnGameIDChanged();

	// BrnNetworkStateManager.h:199
	void SuspendToLeaveGame(BrnNetwork::ELeftGameReason, CgsNetwork::EKickReason);

	// BrnNetworkStateManager.h:203
	bool GameModeHasEnoughTeams();

	// BrnNetworkStateManager.h:206
	bool AreWeAutosaving();

	// BrnNetworkStateManager.h:209
	bool IsInLimbo();

	// BrnNetworkStateManager.h:212
	void CloseLimboGame();

	// BrnNetworkStateManager.h:216
	void HandleConnectEvent(const GuiEventNetworkConnect *);

private:
	// BrnNetworkStateManager.h:333
	void ProcessGuiEvents(const InputBuffer::GuiEventQueue *);

	// BrnNetworkStateManager.h:338
	void ProcessGameStateActions(const OutputBuffer::GameActionQueue *);

	// BrnNetworkStateManager.h:343
	void ProcessNetworkEvents(const NetworkEventQueue *);

	// BrnNetworkStateManager.h:349
	void CreateGame(const GuiEventNetworkCreateGame *, bool);

	// BrnNetworkStateManager.h:354
	void ModifyGame(const BrnGui::GuiEventNetworkGameParams *);

	// BrnNetworkStateManager.h:358
	void PostRoundProcessingFinished();

	// BrnNetworkStateManager.h:361
	void PostGameProcessingFinished();

	// BrnNetworkStateManager.h:365
	void OutputPlayerTexture();

	// BrnNetworkStateManager.h:369
	void StartGameMode();

	// BrnNetworkStateManager.h:377
	void StartFreeBurnLobbyGameMode(bool, bool, bool, bool);

	// BrnNetworkStateManager.h:382
	void RefreshFreeBurnLobbyGameMode();

	// BrnNetworkStateManager.h:386
	bool HaveAllSelectedACar();

	// BrnNetworkStateManager.h:391
	void StartLogIn(BrnNetwork::LoginManagerBase::ESignInType);

	// BrnNetworkStateManager.h:395
	void UpdateLogin(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *);

	// BrnNetworkStateManager.h:398
	void UpdateLaunching();

	// BrnNetworkStateManager.h:401
	void UpdateSyncTime();

	// BrnNetworkStateManager.h:405
	void UpdateNewsAndTOSDownload();

	// BrnNetworkStateManager.h:409
	bool GameModeHasTeams();

	// BrnNetworkStateManager.h:413
	void OnFullConnection();

	// BrnNetworkStateManager.h:417
	void StartNewsDownload();

	// BrnNetworkStateManager.h:421
	void StartTOSDownload();

	// BrnNetworkStateManager.h:425
	void ReleaseNewsAndTOSDownload();

	// BrnNetworkStateManager.h:429
	char * StripWebOfferControlCodes(char *);

	// BrnNetworkStateManager.h:434
	void SendStartNextRoundMessage(int32_t);

	// BrnNetworkStateManager.h:439
	void SendFreeburnLobbyRoundMessage(int32_t);

	// BrnNetworkStateManager.h:443
	void CreateInviteGame();

	// BrnNetworkStateManager.h:447
	void DoInstantFreeburn();

	// BrnNetworkStateManager.h:453
	void CreateGameFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:459
	void JoinGameFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:465
	void LeaveGameForOfflineGameFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:471
	void QuickJoinFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:477
	void SearchFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:483
	void SuspensionFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:489
	void ResumeFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:495
	void PostRoundFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:501
	void PostGameFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:509
	void HostChangedCallback(const TimerStatus *, RoadRulesRecvData::NetworkPlayerID, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkStateManager.h:515
	void GetCompressedCameraPicCallback(void *, void *);

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct StateManager {
		// BrnNetworkStateManager.h:77
		enum EState {
			E_STATE_LOGIN = 0,
			E_STATE_LAUNCHING = 1,
			E_STATE_WAIT_GAME_MODE_START = 2,
			E_STATE_SYNC_TIME = 3,
			E_STATE_RACING = 4,
			E_STATE_WAIT_MATCHMAKING = 5,
			E_STATE_WAIT_SUSPENSION_IDLE_TO_SUSPEND = 6,
			E_STATE_WAIT_SUSPENSION_IDLE_LEAVING_GAME = 7,
			E_STATE_WAIT_SUSPENSION = 8,
			E_STATE_WAIT_SUSPENSION_LEAVING_GAME = 9,
			E_STATE_WAIT_POST_ROUND = 10,
			E_STATE_WAIT_CAR_SELECT = 11,
			E_STATE_WAIT_MODIFY_GAME = 12,
			E_STATE_WAIT_DOWNLOAD_NEWS_IDLE = 13,
			E_STATE_WAIT_DOWNLOAD_TOS_IDLE = 14,
			E_STATE_WAIT_DOWNLOAD_NEWS = 15,
			E_STATE_WAIT_DOWNLOAD_TOS = 16,
			E_STATE_WAIT_SERVER_INTERFACE_ACTION = 17,
			E_STATE_PREPARING_FOR_INVITE = 18,
			E_STATE_PREPARED_FOR_INVITE = 19,
			E_STATE_WAIT_FOR_LOADING_SCREEN = 20,
			E_STATE_WAIT_UPDATE_ACCOUNT = 21,
			E_STATE_COUNT = 22,
		}

		// BrnNetworkStateManager.h:221
		struct CachedNewCarData {
			// BrnNetworkStateManager.h:223
			CgsID mCarModelId;

			// BrnNetworkStateManager.h:224
			CgsID mWheelModelId;

			// BrnNetworkStateManager.h:225
			bool mbValid;

		}

		// BrnNetworkStateManager.h:229
		struct CachedFeverData {
			// BrnNetworkStateManager.h:231
			bool mbHasFever;

			// BrnNetworkStateManager.h:232
			bool mbValid;

		}

		// BrnNetworkStateManager.h:236
		struct CachedMarkedManData {
			// BrnNetworkStateManager.h:238
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnNetworkStateManager.h:239
			bool mbValid;

		}

		// BrnNetworkStateManager.h:243
		struct CachedDistrictData {
			// BrnNetworkStateManager.h:245
			extern const float32_t KF_DISTRICT_UPDATE_INTERVAL;

			// BrnNetworkStateManager.h:247
			BrnWorld::EDistrict meDistrict;

			// BrnNetworkStateManager.h:248
			float32_t mfLastSentTime;

			// BrnNetworkStateManager.h:249
			bool mbValid;

		}

		// BrnNetworkStateManager.h:253
		struct CachedCarColourData {
			// BrnNetworkStateManager.h:255
			extern const float32_t KF_CAR_COLOUR_UPDATE_INTERVAL;

			// BrnNetworkStateManager.h:257
			float32_t mfLastSentTime;

			// BrnNetworkStateManager.h:258
			uint16_t mu16CarColourIndex;

			// BrnNetworkStateManager.h:259
			uint16_t mu16PaintFinishIndex;

			// BrnNetworkStateManager.h:260
			bool mbValid;

		}

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct StateManager {
		// BrnNetworkStateManager.h:77
		enum EState {
			E_STATE_LOGIN = 0,
			E_STATE_LAUNCHING = 1,
			E_STATE_WAIT_GAME_MODE_START = 2,
			E_STATE_SYNC_TIME = 3,
			E_STATE_RACING = 4,
			E_STATE_WAIT_MATCHMAKING = 5,
			E_STATE_WAIT_SUSPENSION_IDLE_TO_SUSPEND = 6,
			E_STATE_WAIT_SUSPENSION_IDLE_LEAVING_GAME = 7,
			E_STATE_WAIT_SUSPENSION = 8,
			E_STATE_WAIT_SUSPENSION_LEAVING_GAME = 9,
			E_STATE_WAIT_POST_ROUND = 10,
			E_STATE_WAIT_CAR_SELECT = 11,
			E_STATE_WAIT_MODIFY_GAME = 12,
			E_STATE_WAIT_DOWNLOAD_NEWS_IDLE = 13,
			E_STATE_WAIT_DOWNLOAD_TOS_IDLE = 14,
			E_STATE_WAIT_DOWNLOAD_NEWS = 15,
			E_STATE_WAIT_DOWNLOAD_TOS = 16,
			E_STATE_WAIT_SERVER_INTERFACE_ACTION = 17,
			E_STATE_PREPARING_FOR_INVITE = 18,
			E_STATE_PREPARED_FOR_INVITE = 19,
			E_STATE_WAIT_FOR_LOADING_SCREEN = 20,
			E_STATE_WAIT_UPDATE_ACCOUNT = 21,
			E_STATE_COUNT = 22,
		}

		// BrnNetworkStateManager.h:221
		struct CachedNewCarData {
			// BrnNetworkStateManager.h:223
			CgsID mCarModelId;

			// BrnNetworkStateManager.h:224
			CgsID mWheelModelId;

			// BrnNetworkStateManager.h:225
			bool mbValid;

		}

		// BrnNetworkStateManager.h:229
		struct CachedFeverData {
			// BrnNetworkStateManager.h:231
			bool mbHasFever;

			// BrnNetworkStateManager.h:232
			bool mbValid;

		}

		// BrnNetworkStateManager.h:236
		struct CachedMarkedManData {
			// BrnNetworkStateManager.h:238
			AggressiveMoveData::NetworkPlayerID mPlayerID;

			// BrnNetworkStateManager.h:239
			bool mbValid;

		}

		// BrnNetworkStateManager.h:243
		struct CachedDistrictData {
			// BrnNetworkStateManager.h:245
			extern const float32_t KF_DISTRICT_UPDATE_INTERVAL;

			// BrnNetworkStateManager.h:247
			BrnWorld::EDistrict meDistrict;

			// BrnNetworkStateManager.h:248
			float32_t mfLastSentTime;

			// BrnNetworkStateManager.h:249
			bool mbValid;

		}

		// BrnNetworkStateManager.h:253
		struct CachedCarColourData {
			// BrnNetworkStateManager.h:255
			extern const float32_t KF_CAR_COLOUR_UPDATE_INTERVAL;

			// BrnNetworkStateManager.h:257
			float32_t mfLastSentTime;

			// BrnNetworkStateManager.h:258
			uint16_t mu16CarColourIndex;

			// BrnNetworkStateManager.h:259
			uint16_t mu16PaintFinishIndex;

			// BrnNetworkStateManager.h:260
			bool mbValid;

		}

	}

}

// BrnNetworkStateManager.h:71
struct BrnNetwork::StateManager {
	// BrnNetworkStateManager.h:74
	extern char[] KAC_TOS_DATABASE_ID;

	// BrnNetworkStateManager.h:75
	extern char[] KAC_NEWS_DATABASE_ID;

private:
	// BrnNetworkStateManager.h:294
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkStateManager.h:295
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkStateManager.h:297
	UnicodeBuffer::CgsUtf8 * mpTOS;

	// BrnNetworkStateManager.h:298
	UnicodeBuffer::CgsUtf8 * mpNews;

	// BrnNetworkStateManager.h:300
	BrnNetwork::StateManager::EState meState;

	// BrnNetworkStateManager.h:301
	BrnGui::GuiEventNetworkOutputPlayerTexture::EOutput meOutputPlayerTexture;

	// BrnNetworkStateManager.h:302
	AggressiveMoveData::NetworkPlayerID mNetworkPlayerIDToOutput;

	// BrnNetworkStateManager.h:304
	BrnNetwork::StateManager::CachedNewCarData mNewCarData;

	// BrnNetworkStateManager.h:305
	BrnNetwork::StateManager::CachedMarkedManData mMarkedManData;

	// BrnNetworkStateManager.h:306
	BrnNetwork::StateManager::CachedDistrictData mDistrictData;

	// BrnNetworkStateManager.h:307
	BrnNetwork::StateManager::CachedCarColourData mCarColourData;

	// BrnNetworkStateManager.h:308
	BrnNetwork::StateManager::CachedFeverData mFeverData;

	// BrnNetworkStateManager.h:310
	BrnNetwork::ELeftGameReason meLeftReason;

	// BrnNetworkStateManager.h:311
	CgsNetwork::EKickReason meKickReason;

	// BrnNetworkStateManager.h:313
	bool mbSetNotPlaying;

	// BrnNetworkStateManager.h:314
	bool mbDoInviteAfterCreate;

	// BrnNetworkStateManager.h:315
	bool mbSuspendAfterSignIn;

	// BrnNetworkStateManager.h:316
	bool mbCreatedFromMenus;

	// BrnNetworkStateManager.h:317
	bool mbForceStartFreeburnLobby;

	// BrnNetworkStateManager.h:318
	bool mbInstantFreeburn;

	// BrnNetworkStateManager.h:319
	bool mbReadyToJoinGameSession;

	// BrnNetworkStateManager.h:320
	bool mbLoadingScreenVisible;

	// BrnNetworkStateManager.h:321
	bool mbAreWeAutosaving;

	// BrnNetworkStateManager.h:322
	bool mbCloseLimboGameWhenIdle;

	// BrnNetworkStateManager.h:323
	bool mbStartFreeburnLobbyThisFrame;

	// BrnNetworkStateManager.h:324
	bool mbStartingAfterJoinThisFrame;

	// BrnNetworkStateManager.h:325
	bool mbStartingAfterOnlineEventThisFrame;

	// BrnNetworkStateManager.h:326
	bool mbForceStartFreeburnLobbyThisFrame;

	// BrnNetworkStateManager.h:327
	bool mbRefreshingFreeburnLobbyThisFrame;

public:
	// BrnNetworkStateManager.h:108
	void Construct(BrnNetwork::BrnNetworkModule *);

	// BrnNetworkStateManager.h:112
	bool Prepare();

	// BrnNetworkStateManager.h:116
	bool Release();

	// BrnNetworkStateManager.h:120
	void Destruct();

	// BrnNetworkStateManager.h:125
	// Declaration
	void UpdateEvents(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkStateManager.cpp:375
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:379
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:381
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:383
		using namespace CgsDev::Message;

	}

	// BrnNetworkStateManager.h:130
	// Declaration
	void Update(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkStateManager.cpp:398
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:401
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:404
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:467
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:495
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:502
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:524
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:531
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:538
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:546
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:566
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:586
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:593
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:615
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:632
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:657
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:829
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:839
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:879
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:881
		using namespace CgsDev::Message;

	}

	// BrnNetworkStateManager.h:134
	void Disconnected();

	// BrnNetworkStateManager.h:138
	void StartEndOfRound();

	// BrnNetworkStateManager.h:144
	void StartEndOfGame(bool, bool);

	// BrnNetworkStateManager.h:148
	void PrepareForInvite();

	// BrnNetworkStateManager.h:153
	void IntroStopped(const StopModeIntroAction *);

	// BrnNetworkStateManager.h:158
	void MarkedManLoaded(const MarkedManLoadedAction *);

	// BrnNetworkStateManager.h:163
	void JoinGameSession(char *);

	// BrnNetworkStateManager.h:168
	void JoinGameSessionByID(int32_t);

	// BrnNetworkStateManager.h:173
	void UpdateMarkedMan(AggressiveMoveData::NetworkPlayerID);

	// BrnNetworkStateManager.h:176
	bool IsGameLaunched();

	// BrnNetworkStateManager.h:179
	bool IsIdle();

	// BrnNetworkStateManager.h:182
	bool IsReadyToJoinGameSession();

	// BrnNetworkStateManager.h:185
	bool IsMatchMaking();

	// BrnNetworkStateManager.h:188
	void PlayerAdded();

	// BrnNetworkStateManager.h:191
	void PlayerRemoved();

	// BrnNetworkStateManager.h:194
	void OnGameIDChanged();

	// BrnNetworkStateManager.h:199
	void SuspendToLeaveGame(BrnNetwork::ELeftGameReason, CgsNetwork::EKickReason);

	// BrnNetworkStateManager.h:203
	bool GameModeHasEnoughTeams();

	// BrnNetworkStateManager.h:206
	bool AreWeAutosaving();

	// BrnNetworkStateManager.h:209
	bool IsInLimbo();

	// BrnNetworkStateManager.h:212
	void CloseLimboGame();

	// BrnNetworkStateManager.h:216
	// Declaration
	void HandleConnectEvent(const GuiEventNetworkConnect *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkStateManager.cpp:5557
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:5584
		using namespace CgsDev::Message;

	}

private:
	// BrnNetworkStateManager.h:333
	// Declaration
	void ProcessGuiEvents(const InputBuffer::GuiEventQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkStateManager.cpp:950
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:1368
		using namespace CgsDev::Message;

	}

	// BrnNetworkStateManager.h:338
	// Declaration
	void ProcessGameStateActions(const InputBuffer::GameActionQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkStateManager.cpp:1825
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:1830
		using namespace CgsDev::Message;

	}

	// BrnNetworkStateManager.h:343
	void ProcessNetworkEvents(const NetworkEventQueue *);

	// BrnNetworkStateManager.h:349
	void CreateGame(const GuiEventNetworkCreateGame *, bool);

	// BrnNetworkStateManager.h:354
	void ModifyGame(const BrnGui::GuiEventNetworkGameParams *);

	// BrnNetworkStateManager.h:358
	void PostRoundProcessingFinished();

	// BrnNetworkStateManager.h:361
	void PostGameProcessingFinished();

	// BrnNetworkStateManager.h:365
	void OutputPlayerTexture();

	// BrnNetworkStateManager.h:369
	void StartGameMode();

	// BrnNetworkStateManager.h:377
	// Declaration
	void StartFreeBurnLobbyGameMode(bool, bool, bool, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkStateManager.cpp:4403
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:4404
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:4406
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:4408
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:4420
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:4424
		using namespace CgsDev::Message;

	}

	// BrnNetworkStateManager.h:382
	void RefreshFreeBurnLobbyGameMode();

	// BrnNetworkStateManager.h:386
	bool HaveAllSelectedACar();

	// BrnNetworkStateManager.h:391
	void StartLogIn(BrnNetwork::LoginManagerBase::ESignInType);

	// BrnNetworkStateManager.h:395
	// Declaration
	void UpdateLogin(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkStateManager.cpp:4549
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:4560
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:4571
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:4573
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:4578
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:4584
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:4591
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:4595
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:4600
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:4648
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:4687
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:4691
		using namespace CgsDev::Message;

		// BrnNetworkStateManager.cpp:4703
		using namespace CgsDev::Message;

	}

	// BrnNetworkStateManager.h:398
	void UpdateLaunching();

	// BrnNetworkStateManager.h:401
	void UpdateSyncTime();

	// BrnNetworkStateManager.h:405
	void UpdateNewsAndTOSDownload();

	// BrnNetworkStateManager.h:409
	bool GameModeHasTeams();

	// BrnNetworkStateManager.h:413
	void OnFullConnection();

	// BrnNetworkStateManager.h:417
	void StartNewsDownload();

	// BrnNetworkStateManager.h:421
	void StartTOSDownload();

	// BrnNetworkStateManager.h:425
	void ReleaseNewsAndTOSDownload();

	// BrnNetworkStateManager.h:429
	char * StripWebOfferControlCodes(char *);

	// BrnNetworkStateManager.h:434
	void SendStartNextRoundMessage(int32_t);

	// BrnNetworkStateManager.h:439
	void SendFreeburnLobbyRoundMessage(int32_t);

	// BrnNetworkStateManager.h:443
	void CreateInviteGame();

	// BrnNetworkStateManager.h:447
	void DoInstantFreeburn();

	// BrnNetworkStateManager.h:453
	// Declaration
	void CreateGameFinishedCallback(bool, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkStateManager.cpp:3129
		using namespace CgsDev::Message;

	}

	// BrnNetworkStateManager.h:459
	void JoinGameFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:465
	void LeaveGameForOfflineGameFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:471
	void QuickJoinFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:477
	void SearchFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:483
	void SuspensionFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:489
	void ResumeFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:495
	void PostRoundFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:501
	void PostGameFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:509
	void HostChangedCallback(const TimerStatus *, AggressiveMoveData::NetworkPlayerID, AggressiveMoveData::NetworkPlayerID, void *);

	// BrnNetworkStateManager.h:515
	void GetCompressedCameraPicCallback(void *, void *);

}

// BrnNetworkStateManager.h:71
struct BrnNetwork::StateManager {
	// BrnNetworkStateManager.h:74
	extern char[] KAC_TOS_DATABASE_ID;

	// BrnNetworkStateManager.h:75
	extern char[] KAC_NEWS_DATABASE_ID;

private:
	// BrnNetworkStateManager.h:294
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkStateManager.h:295
	BrnNetwork::BrnNetworkManager * mpNetworkManager;

	// BrnNetworkStateManager.h:297
	UnicodeBuffer::CgsUtf8 * mpTOS;

	// BrnNetworkStateManager.h:298
	UnicodeBuffer::CgsUtf8 * mpNews;

	// BrnNetworkStateManager.h:300
	BrnNetwork::StateManager::EState meState;

	// BrnNetworkStateManager.h:301
	BrnGui::GuiEventNetworkOutputPlayerTexture::EOutput meOutputPlayerTexture;

	// BrnNetworkStateManager.h:302
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerIDToOutput;

	// BrnNetworkStateManager.h:304
	BrnNetwork::StateManager::CachedNewCarData mNewCarData;

	// BrnNetworkStateManager.h:305
	BrnNetwork::StateManager::CachedMarkedManData mMarkedManData;

	// BrnNetworkStateManager.h:306
	BrnNetwork::StateManager::CachedDistrictData mDistrictData;

	// BrnNetworkStateManager.h:307
	BrnNetwork::StateManager::CachedCarColourData mCarColourData;

	// BrnNetworkStateManager.h:308
	BrnNetwork::StateManager::CachedFeverData mFeverData;

	// BrnNetworkStateManager.h:310
	BrnNetwork::ELeftGameReason meLeftReason;

	// BrnNetworkStateManager.h:311
	CgsNetwork::EKickReason meKickReason;

	// BrnNetworkStateManager.h:313
	bool mbSetNotPlaying;

	// BrnNetworkStateManager.h:314
	bool mbDoInviteAfterCreate;

	// BrnNetworkStateManager.h:315
	bool mbSuspendAfterSignIn;

	// BrnNetworkStateManager.h:316
	bool mbCreatedFromMenus;

	// BrnNetworkStateManager.h:317
	bool mbForceStartFreeburnLobby;

	// BrnNetworkStateManager.h:318
	bool mbInstantFreeburn;

	// BrnNetworkStateManager.h:319
	bool mbReadyToJoinGameSession;

	// BrnNetworkStateManager.h:320
	bool mbLoadingScreenVisible;

	// BrnNetworkStateManager.h:321
	bool mbAreWeAutosaving;

	// BrnNetworkStateManager.h:322
	bool mbCloseLimboGameWhenIdle;

	// BrnNetworkStateManager.h:323
	bool mbStartFreeburnLobbyThisFrame;

	// BrnNetworkStateManager.h:324
	bool mbStartingAfterJoinThisFrame;

	// BrnNetworkStateManager.h:325
	bool mbStartingAfterOnlineEventThisFrame;

	// BrnNetworkStateManager.h:326
	bool mbForceStartFreeburnLobbyThisFrame;

	// BrnNetworkStateManager.h:327
	bool mbRefreshingFreeburnLobbyThisFrame;

public:
	// BrnNetworkStateManager.h:108
	void Construct(BrnNetwork::BrnNetworkModule *);

	// BrnNetworkStateManager.h:112
	bool Prepare();

	// BrnNetworkStateManager.h:116
	bool Release();

	// BrnNetworkStateManager.h:120
	void Destruct();

	// BrnNetworkStateManager.h:125
	void UpdateEvents(const PostSimulationInputBuffer *);

	// BrnNetworkStateManager.h:130
	void Update(const PostSimulationInputBuffer *);

	// BrnNetworkStateManager.h:134
	void Disconnected();

	// BrnNetworkStateManager.h:138
	void StartEndOfRound();

	// BrnNetworkStateManager.h:144
	void StartEndOfGame(bool, bool);

	// BrnNetworkStateManager.h:148
	void PrepareForInvite();

	// BrnNetworkStateManager.h:153
	void IntroStopped(const StopModeIntroAction *);

	// BrnNetworkStateManager.h:158
	void MarkedManLoaded(const MarkedManLoadedAction *);

	// BrnNetworkStateManager.h:163
	void JoinGameSession(char *);

	// BrnNetworkStateManager.h:168
	void JoinGameSessionByID(int32_t);

	// BrnNetworkStateManager.h:173
	void UpdateMarkedMan(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkStateManager.h:176
	bool IsGameLaunched();

	// BrnNetworkStateManager.h:179
	bool IsIdle();

	// BrnNetworkStateManager.h:182
	bool IsReadyToJoinGameSession();

	// BrnNetworkStateManager.h:185
	bool IsMatchMaking();

	// BrnNetworkStateManager.h:188
	void PlayerAdded();

	// BrnNetworkStateManager.h:191
	void PlayerRemoved();

	// BrnNetworkStateManager.h:194
	void OnGameIDChanged();

	// BrnNetworkStateManager.h:199
	void SuspendToLeaveGame(BrnNetwork::ELeftGameReason, CgsNetwork::EKickReason);

	// BrnNetworkStateManager.h:203
	bool GameModeHasEnoughTeams();

	// BrnNetworkStateManager.h:206
	bool AreWeAutosaving();

	// BrnNetworkStateManager.h:209
	bool IsInLimbo();

	// BrnNetworkStateManager.h:212
	void CloseLimboGame();

	// BrnNetworkStateManager.h:216
	void HandleConnectEvent(const GuiEventNetworkConnect *);

private:
	// BrnNetworkStateManager.h:333
	void ProcessGuiEvents(const InputBuffer::GuiEventQueue *);

	// BrnNetworkStateManager.h:338
	void ProcessGameStateActions(const InputBuffer::GameActionQueue *);

	// BrnNetworkStateManager.h:343
	void ProcessNetworkEvents(const NetworkEventQueue *);

	// BrnNetworkStateManager.h:349
	void CreateGame(const GuiEventNetworkCreateGame *, bool);

	// BrnNetworkStateManager.h:354
	void ModifyGame(const BrnGui::GuiEventNetworkGameParams *);

	// BrnNetworkStateManager.h:358
	void PostRoundProcessingFinished();

	// BrnNetworkStateManager.h:361
	void PostGameProcessingFinished();

	// BrnNetworkStateManager.h:365
	void OutputPlayerTexture();

	// BrnNetworkStateManager.h:369
	void StartGameMode();

	// BrnNetworkStateManager.h:377
	void StartFreeBurnLobbyGameMode(bool, bool, bool, bool);

	// BrnNetworkStateManager.h:382
	void RefreshFreeBurnLobbyGameMode();

	// BrnNetworkStateManager.h:386
	bool HaveAllSelectedACar();

	// BrnNetworkStateManager.h:391
	void StartLogIn(BrnNetwork::LoginManagerBase::ESignInType);

	// BrnNetworkStateManager.h:395
	void UpdateLogin(const PostSimulationInputBuffer *);

	// BrnNetworkStateManager.h:398
	void UpdateLaunching();

	// BrnNetworkStateManager.h:401
	void UpdateSyncTime();

	// BrnNetworkStateManager.h:405
	void UpdateNewsAndTOSDownload();

	// BrnNetworkStateManager.h:409
	bool GameModeHasTeams();

	// BrnNetworkStateManager.h:413
	void OnFullConnection();

	// BrnNetworkStateManager.h:417
	void StartNewsDownload();

	// BrnNetworkStateManager.h:421
	void StartTOSDownload();

	// BrnNetworkStateManager.h:425
	void ReleaseNewsAndTOSDownload();

	// BrnNetworkStateManager.h:429
	char * StripWebOfferControlCodes(char *);

	// BrnNetworkStateManager.h:434
	void SendStartNextRoundMessage(int32_t);

	// BrnNetworkStateManager.h:439
	void SendFreeburnLobbyRoundMessage(int32_t);

	// BrnNetworkStateManager.h:443
	void CreateInviteGame();

	// BrnNetworkStateManager.h:447
	void DoInstantFreeburn();

	// BrnNetworkStateManager.h:453
	void CreateGameFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:459
	void JoinGameFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:465
	void LeaveGameForOfflineGameFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:471
	void QuickJoinFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:477
	void SearchFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:483
	void SuspensionFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:489
	void ResumeFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:495
	void PostRoundFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:501
	void PostGameFinishedCallback(bool, void *);

	// BrnNetworkStateManager.h:509
	void HostChangedCallback(const TimerStatus *, RoadRulesRecvData::NetworkPlayerID, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkStateManager.h:515
	void GetCompressedCameraPicCallback(void *, void *);

}

