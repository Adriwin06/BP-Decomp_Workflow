// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnGameMode.h:46
	enum EGameModeEvent {
		E_GME_RESTART = 0,
		E_GME_NEXT = 1,
		E_GME_ABORT = 2,
		E_GME_USER_ACCEPT = 3,
		E_GME_COUNT = 4,
	}

	// Declaration
	struct GameMode {
	public:
		// BrnGameMode.h:131
		virtual void OnPlayerInShortCut();

		// BrnGameMode.h:238
		virtual void FillInGameModeSpecificResults(const ScoringSystem *, FinishedModeAction *);

		// BrnGameMode.h:270
		virtual void HandleGameEvents(const CgsModule::Event *, int32_t);

		// BrnGameMode.h:344
		virtual bool HasTimedIntro() const;

		// BrnGameMode.h:418
		virtual bool ShouldCountdownEnd() const;

		// BrnGameMode.h:506
		virtual float32_t GetOutroTimeout() const;

		// BrnGameMode.h:512
		virtual EGlobalRaceCarIndex GetGlobalRivalToShow() const;

		// BrnGameMode.h:518
		virtual EActiveRaceCarIndex GetActiveRivalToShow() const;

		// BrnGameMode.h:530
		virtual bool HasLoadingScreen() const;

		// BrnGameMode.h:536
		virtual void OnPlayerUsesPaintShop();

	protected:
		// BrnGameMode.h:291
		extern const float32_t KF_INTRO_TIME_SECONDS;

		// BrnGameMode.h:292
		extern const float32_t KF_STUNT_INTRO_TIME_SECONDS;

		// BrnGameMode.h:293
		extern const float32_t KF_ONLINE_FREEBURN_INTRO_TIME_SECONDS;

		// BrnGameMode.h:294
		extern const float32_t KF_ONLINE_INTRO_TIME_SECONDS_FOR_PLAYER;

		// BrnGameMode.h:295
		extern const float32_t KF_ONLINE_INTRO_TIME_SECONDS_PER_CAR;

		// BrnGameMode.h:296
		extern const float32_t KF_OUTRO_TIME_SECONDS;

		// BrnGameMode.h:298
		extern const float32_t KF_VISIBLE_DISTANCE_AHEAD;

		// BrnGameMode.h:299
		extern const float32_t KF_VISIBLE_DISTANCE_BEHIND;

	}

	// BrnGameMode.h:44
	const float32_t KF_DONT_SHOW_RIVAL;

	// BrnGameMode.h:57
	const float32_t KF_NO_INPUT_TIME_FOR_MODE_EXIT;

	// BrnGameMode.h:58
	const float32_t KF_STATIONARY_TIME_FOR_MODE_EXIT;

	// BrnGameMode.h:59
	const float32_t KF_MAX_STATIONARY_TIME_FOR_MODE_EXIT;

}

// BrnGameMode.h:291
extern const float32_t KF_INTRO_TIME_SECONDS;

// BrnGameMode.h:292
extern const float32_t KF_STUNT_INTRO_TIME_SECONDS;

// BrnGameMode.h:293
extern const float32_t KF_ONLINE_FREEBURN_INTRO_TIME_SECONDS;

// BrnGameMode.h:294
extern const float32_t KF_ONLINE_INTRO_TIME_SECONDS_FOR_PLAYER;

// BrnGameMode.h:295
extern const float32_t KF_ONLINE_INTRO_TIME_SECONDS_PER_CAR;

// BrnGameMode.h:296
extern const float32_t KF_OUTRO_TIME_SECONDS;

// BrnGameMode.h:298
extern const float32_t KF_VISIBLE_DISTANCE_AHEAD;

// BrnGameMode.h:299
extern const float32_t KF_VISIBLE_DISTANCE_BEHIND;

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnGameMode.h:46
	enum EGameModeEvent {
		E_GME_RESTART = 0,
		E_GME_NEXT = 1,
		E_GME_ABORT = 2,
		E_GME_USER_ACCEPT = 3,
		E_GME_COUNT = 4,
	}

	// BrnGameMode.h:44
	const float32_t KF_DONT_SHOW_RIVAL;

	// BrnGameMode.h:57
	const float32_t KF_NO_INPUT_TIME_FOR_MODE_EXIT;

	// BrnGameMode.h:58
	const float32_t KF_STATIONARY_TIME_FOR_MODE_EXIT;

	// BrnGameMode.h:59
	const float32_t KF_MAX_STATIONARY_TIME_FOR_MODE_EXIT;

}

// BrnGameMode.h:74
struct BrnGameState::GameMode {
	int (*)(...) * _vptr.GameMode;

protected:
	// BrnGameMode.cpp:28
	extern const float32_t KF_INTRO_TIME_SECONDS;

	// BrnGameMode.h:292
	extern const float32_t KF_STUNT_INTRO_TIME_SECONDS;

	// BrnGameMode.cpp:29
	extern const float32_t KF_ONLINE_FREEBURN_INTRO_TIME_SECONDS;

	// BrnGameMode.cpp:30
	extern const float32_t KF_ONLINE_INTRO_TIME_SECONDS_FOR_PLAYER;

	// BrnGameMode.cpp:31
	extern const float32_t KF_ONLINE_INTRO_TIME_SECONDS_PER_CAR;

	// BrnGameMode.cpp:32
	extern const float32_t KF_OUTRO_TIME_SECONDS;

	// BrnGameMode.cpp:34
	extern const float32_t KF_VISIBLE_DISTANCE_AHEAD;

	// BrnGameMode.cpp:35
	extern const float32_t KF_VISIBLE_DISTANCE_BEHIND;

	// BrnGameMode.h:302
	Array<BrnGameState::GameModeState*,8u> maGameModeStates;

	// BrnGameMode.h:303
	BrnGameState::GameStateModuleIO::EGameModeState meCurrentState;

	// BrnGameMode.h:305
	CountdownState mCountdownState;

	// BrnGameMode.h:306
	IntroState mIntroState;

	// BrnGameMode.h:307
	InProgressState mInProgressState;

	// BrnGameMode.h:308
	OutroState mOutroState;

	// BrnGameMode.h:309
	ResultsState mResultsState;

	// BrnGameMode.h:310
	QuitState mQuitState;

	// BrnGameMode.h:311
	OnlineLoadingState mOnlineLoadingState;

	// BrnGameMode.h:312
	OnlineSplashState mOnlineSplashState;

	// BrnGameMode.h:314
	BrnGameState::ModeManager * mpModeManager;

	// BrnGameMode.h:316
	float32_t mfTimeStepSeconds;

	// BrnGameMode.h:317
	bool mbIsOnline;

	// BrnGameMode.h:318
	bool mbFinished;

	// BrnGameMode.h:319
	bool mbTimerStartRequested;

	// BrnGameMode.h:320
	bool mbShowResultsRequested;

	// BrnGameMode.h:321
	bool mbIntroJustFinished;

	// BrnGameMode.h:322
	bool mbCountdownJustFinished;

	// BrnGameMode.h:323
	bool mbCountdownDisplayChanged;

	// BrnGameMode.h:324
	int32_t miCountdownDisplay;

	// BrnGameMode.h:325
	bool mbVisibleCars;

public:
	// BrnGameMode.cpp:64
	virtual void Construct(BrnGameState::ModeManager *);

	// BrnGameMode.cpp:105
	virtual void Destruct();

	// BrnGameMode.cpp:122
	virtual void PreWorldUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, const ScoringSystem *);

	// BrnGameMode.cpp:174
	virtual void PostWorldUpdate(const PostWorldInputBuffer *);

	// BrnGameMode.cpp:185
	virtual void Initialise();

	// BrnGameMode.h:112
	virtual void Start(const StartGameModeParams *, GameModeParams *, BrnGameState::ScoringSystem *);

	// BrnGameMode.h:116
	virtual const char * GetName() const;

	// BrnGameMode.h:119
	virtual CgsSystem::EFrameRateManagerType GetFrameRateType() const;

	// BrnGameMode.cpp:210
	virtual float32_t GetIntroDurationSeconds() const;

	// BrnGameMode.h:344
	virtual bool HasTimedIntro() const;

	// BrnGameMode.h:131
	virtual void OnPlayerInShortCut();

	// BrnGameMode.h:351
	bool IntroJustFinished() const;

	// BrnGameMode.h:359
	void SetIntroJustFinished(bool);

	// BrnGameMode.cpp:238
	float32_t GetCountdownTime() const;

	// BrnGameMode.h:366
	bool CountdownJustFinished() const;

	// BrnGameMode.h:374
	void SetCountdownJustFinished(bool);

	// BrnGameMode.h:157
	const char * GetDebugText();

	// BrnGameMode.h:382
	void SetUpdateTimeStep(float32_t);

	// BrnGameMode.h:389
	float32_t GetUpdateTimeStep() const;

	// BrnGameMode.h:396
	bool HasFinished() const;

	// BrnGameMode.h:404
	void SetFinished(bool);

	// BrnGameMode.h:411
	bool IsRequestingTimerStart() const;

	// BrnGameMode.h:418
	virtual bool ShouldCountdownEnd() const;

	// BrnGameMode.h:426
	void SetTimerStartRequest(bool);

	// BrnGameMode.h:435
	void SetCountdownDisplay(int32_t);

	// BrnGameMode.h:444
	bool HasCountdownDisplayChanged(int32_t *);

	// BrnGameMode.h:460
	bool IsRequestingShowResults() const;

	// BrnGameMode.h:468
	void SetShowResultsRequest(bool);

	// BrnGameMode.cpp:255
	virtual void SendEvent(BrnGameState::EGameModeEvent);

	// BrnGameMode.h:500
	bool IsOnline() const;

	// BrnGameMode.h:474
	BrnGameState::GameStateModuleIO::EGameModeState GetCurrentState() const;

	// BrnGameMode.h:481
	void SetCurrentState(BrnGameState::GameStateModuleIO::EGameModeState);

	// BrnGameMode.cpp:330
	virtual bool ShouldExit(const ScoringSystem *) const;

	// BrnGameMode.cpp:352
	virtual bool ShouldFinish(BrnGameState::ScoringSystem *);

	// BrnGameMode.h:238
	virtual void FillInGameModeSpecificResults(const ScoringSystem *, FinishedModeAction *);

	// BrnGameMode.h:506
	virtual float32_t GetOutroTimeout() const;

	// BrnGameMode.h:512
	virtual EGlobalRaceCarIndex GetGlobalRivalToShow() const;

	// BrnGameMode.h:518
	virtual EActiveRaceCarIndex GetActiveRivalToShow() const;

	// BrnGameMode.cpp:365
	virtual void PlayerHasSpawned(EActiveRaceCarIndex);

	// BrnGameMode.cpp:381
	virtual void ProcessNewRoadScore(BrnGameState::GameStateModuleIO::OutputBuffer *, ChallengePlayerScoreEntry, BrnStreetData::ScoreType, Road::ChallengeIndex, EActiveRaceCarIndex);

	// BrnGameMode.cpp:394
	virtual void OnEnterRoad(SpanBase::RoadIndex);

	// BrnGameMode.h:270
	virtual void HandleGameEvents(const CgsModule::Event *, int32_t);

	// BrnGameMode.h:524
	virtual bool RequiresStreaming() const;

	// BrnGameMode.h:530
	virtual bool HasLoadingScreen() const;

	// BrnGameMode.h:536
	virtual void OnPlayerUsesPaintShop();

	// BrnGameMode.cpp:407
	int32_t CalculateMaxPlayerWrecks(const StartGameModeParams *);

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnGameMode.h:46
	enum EGameModeEvent {
		E_GME_RESTART = 0,
		E_GME_NEXT = 1,
		E_GME_ABORT = 2,
		E_GME_USER_ACCEPT = 3,
		E_GME_COUNT = 4,
	}

	// Declaration
	struct GameMode {
	public:
		// BrnGameMode.h:131
		virtual void OnPlayerInShortCut();

		// BrnGameMode.h:238
		virtual void FillInGameModeSpecificResults(const ScoringSystem *, FinishedModeAction *);

		// BrnGameMode.h:270
		virtual void HandleGameEvents(const CgsModule::Event *, int32_t);

		// BrnGameMode.h:344
		virtual bool HasTimedIntro() const;

		// BrnGameMode.h:418
		virtual bool ShouldCountdownEnd() const;

		// BrnGameMode.h:506
		virtual float32_t GetOutroTimeout() const;

		// BrnGameMode.h:512
		virtual EGlobalRaceCarIndex GetGlobalRivalToShow() const;

		// BrnGameMode.h:518
		virtual EActiveRaceCarIndex GetActiveRivalToShow() const;

		// BrnGameMode.h:530
		virtual bool HasLoadingScreen() const;

		// BrnGameMode.h:536
		virtual void OnPlayerUsesPaintShop();

		// BrnGameMode.h:474
		BrnGameState::GameStateModuleIO::EGameModeState GetCurrentState() const;

		// BrnGameMode.h:500
		bool IsOnline() const;

	protected:
		// BrnGameMode.h:291
		extern const float32_t KF_INTRO_TIME_SECONDS;

		// BrnGameMode.h:292
		extern const float32_t KF_STUNT_INTRO_TIME_SECONDS;

		// BrnGameMode.h:293
		extern const float32_t KF_ONLINE_FREEBURN_INTRO_TIME_SECONDS;

		// BrnGameMode.h:294
		extern const float32_t KF_ONLINE_INTRO_TIME_SECONDS_FOR_PLAYER;

		// BrnGameMode.h:295
		extern const float32_t KF_ONLINE_INTRO_TIME_SECONDS_PER_CAR;

		// BrnGameMode.h:296
		extern const float32_t KF_OUTRO_TIME_SECONDS;

		// BrnGameMode.h:298
		extern const float32_t KF_VISIBLE_DISTANCE_AHEAD;

		// BrnGameMode.h:299
		extern const float32_t KF_VISIBLE_DISTANCE_BEHIND;

	}

	// BrnGameMode.h:44
	const float32_t KF_DONT_SHOW_RIVAL;

	// BrnGameMode.h:57
	const float32_t KF_NO_INPUT_TIME_FOR_MODE_EXIT;

	// BrnGameMode.h:58
	const float32_t KF_STATIONARY_TIME_FOR_MODE_EXIT;

	// BrnGameMode.h:59
	const float32_t KF_MAX_STATIONARY_TIME_FOR_MODE_EXIT;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnGameMode.h:46
	enum EGameModeEvent {
		E_GME_RESTART = 0,
		E_GME_NEXT = 1,
		E_GME_ABORT = 2,
		E_GME_USER_ACCEPT = 3,
		E_GME_COUNT = 4,
	}

	// Declaration
	struct GameMode {
	public:
		// BrnGameMode.h:131
		virtual void OnPlayerInShortCut();

		// BrnGameMode.h:238
		virtual void FillInGameModeSpecificResults(const ScoringSystem *, FinishedModeAction *);

		// BrnGameMode.h:270
		virtual void HandleGameEvents(const CgsModule::Event *, int32_t);

		// BrnGameMode.h:344
		virtual bool HasTimedIntro() const;

		// BrnGameMode.h:418
		virtual bool ShouldCountdownEnd() const;

		// BrnGameMode.h:506
		virtual float32_t GetOutroTimeout() const;

		// BrnGameMode.h:512
		virtual EGlobalRaceCarIndex GetGlobalRivalToShow() const;

		// BrnGameMode.h:518
		virtual EActiveRaceCarIndex GetActiveRivalToShow() const;

		// BrnGameMode.h:530
		virtual bool HasLoadingScreen() const;

		// BrnGameMode.h:536
		virtual void OnPlayerUsesPaintShop();

		// BrnGameMode.h:474
		BrnGameState::GameStateModuleIO::EGameModeState GetCurrentState() const;

	protected:
		// BrnGameMode.h:291
		extern const float32_t KF_INTRO_TIME_SECONDS;

		// BrnGameMode.h:292
		extern const float32_t KF_STUNT_INTRO_TIME_SECONDS;

		// BrnGameMode.h:293
		extern const float32_t KF_ONLINE_FREEBURN_INTRO_TIME_SECONDS;

		// BrnGameMode.h:294
		extern const float32_t KF_ONLINE_INTRO_TIME_SECONDS_FOR_PLAYER;

		// BrnGameMode.h:295
		extern const float32_t KF_ONLINE_INTRO_TIME_SECONDS_PER_CAR;

		// BrnGameMode.h:296
		extern const float32_t KF_OUTRO_TIME_SECONDS;

		// BrnGameMode.h:298
		extern const float32_t KF_VISIBLE_DISTANCE_AHEAD;

		// BrnGameMode.h:299
		extern const float32_t KF_VISIBLE_DISTANCE_BEHIND;

	}

	// BrnGameMode.h:44
	const float32_t KF_DONT_SHOW_RIVAL;

	// BrnGameMode.h:57
	const float32_t KF_NO_INPUT_TIME_FOR_MODE_EXIT;

	// BrnGameMode.h:58
	const float32_t KF_STATIONARY_TIME_FOR_MODE_EXIT;

	// BrnGameMode.h:59
	const float32_t KF_MAX_STATIONARY_TIME_FOR_MODE_EXIT;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnGameMode.h:44
	const float32_t KF_DONT_SHOW_RIVAL;

	// BrnGameMode.h:57
	const float32_t KF_NO_INPUT_TIME_FOR_MODE_EXIT;

	// BrnGameMode.h:58
	const float32_t KF_STATIONARY_TIME_FOR_MODE_EXIT;

	// BrnGameMode.h:59
	const float32_t KF_MAX_STATIONARY_TIME_FOR_MODE_EXIT;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnGameMode.h:46
	enum EGameModeEvent {
		E_GME_RESTART = 0,
		E_GME_NEXT = 1,
		E_GME_ABORT = 2,
		E_GME_USER_ACCEPT = 3,
		E_GME_COUNT = 4,
	}

	// Declaration
	struct GameMode {
	public:
		// BrnGameMode.h:131
		virtual void OnPlayerInShortCut();

		// BrnGameMode.h:238
		virtual void FillInGameModeSpecificResults(const ScoringSystem *, FinishedModeAction *);

		// BrnGameMode.h:270
		virtual void HandleGameEvents(const CgsModule::Event *, int32_t);

		// BrnGameMode.h:344
		virtual bool HasTimedIntro() const;

		// BrnGameMode.h:418
		virtual bool ShouldCountdownEnd() const;

		// BrnGameMode.h:506
		virtual float32_t GetOutroTimeout() const;

		// BrnGameMode.h:512
		virtual EGlobalRaceCarIndex GetGlobalRivalToShow() const;

		// BrnGameMode.h:518
		virtual EActiveRaceCarIndex GetActiveRivalToShow() const;

		// BrnGameMode.h:530
		virtual bool HasLoadingScreen() const;

		// BrnGameMode.h:536
		virtual void OnPlayerUsesPaintShop();

		GameMode();

	protected:
		// BrnGameMode.h:291
		extern const float32_t KF_INTRO_TIME_SECONDS;

		// BrnGameMode.h:292
		extern const float32_t KF_STUNT_INTRO_TIME_SECONDS;

		// BrnGameMode.h:293
		extern const float32_t KF_ONLINE_FREEBURN_INTRO_TIME_SECONDS;

		// BrnGameMode.h:294
		extern const float32_t KF_ONLINE_INTRO_TIME_SECONDS_FOR_PLAYER;

		// BrnGameMode.h:295
		extern const float32_t KF_ONLINE_INTRO_TIME_SECONDS_PER_CAR;

		// BrnGameMode.h:296
		extern const float32_t KF_OUTRO_TIME_SECONDS;

		// BrnGameMode.h:298
		extern const float32_t KF_VISIBLE_DISTANCE_AHEAD;

		// BrnGameMode.h:299
		extern const float32_t KF_VISIBLE_DISTANCE_BEHIND;

	}

	// BrnGameMode.h:44
	const float32_t KF_DONT_SHOW_RIVAL;

	// BrnGameMode.h:57
	const float32_t KF_NO_INPUT_TIME_FOR_MODE_EXIT;

	// BrnGameMode.h:58
	const float32_t KF_STATIONARY_TIME_FOR_MODE_EXIT;

	// BrnGameMode.h:59
	const float32_t KF_MAX_STATIONARY_TIME_FOR_MODE_EXIT;

}

// BrnGameMode.h:74
void BrnGameState::GameMode::GameMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

