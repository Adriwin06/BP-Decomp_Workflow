// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.h:51
		enum EGameModeType {
			E_MODE_NONE = -1,
			E_MODE_OFFLINE_RACE = 0,
			E_MODE_FACE_OFF = 1,
			E_MODE_OFFLINE_SHOWTIME = 2,
			E_MODE_ROAD_RAGE = 3,
			E_MODE_PURSUIT = 4,
			E_MODE_BURNING_ROUTE = 5,
			E_MODE_ELIMINATOR = 6,
			E_MODE_STUNT_ATTACK = 7,
			E_MODE_MARKED_MAN = 8,
			E_MODE_TRAFFIC_ATTACK = 9,
			E_MODE_OFFLINE_COUNT = 10,
			E_MODE_ONLINE_MODE_START = 10,
			E_MODE_ONLINE_RACE = 10,
			E_MODE_ONLINE_ROAD_RAGE = 11,
			E_MODE_ONLINE_FUGITIVE = 12,
			E_MODE_ONLINE_BURNING_HOME_RUN = 13,
			E_MODE_ONLINE_FREE_BURN = 14,
			E_MODE_ONLINE_FREE_BURN_LOBBY = 15,
			E_MODE_ONLINE_SHOWTIME = 16,
			E_MODE_ONLINE_MODE_END = 17,
			E_MODE_COUNT = 17,
		}

		// BrnGameStateSharedIO.h:112
		enum EPlayerTeam {
			E_PLAYER_TEAM_START = 0,
			E_PLAYER_TEAM_NONE = 0,
			E_PLAYER_TEAM_RED_TEAM = 1,
			E_PLAYER_TEAM_BLUE_TEAM = 2,
			E_PLAYER_TEAM_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:145
		enum EPlayerScoringIndex {
			E_PLAYER_SCORING_INDEX_0 = 0,
			E_PLAYER_SCORING_INDEX_1 = 1,
			E_PLAYER_SCORING_INDEX_2 = 2,
			E_PLAYER_SCORING_INDEX_3 = 3,
			E_PLAYER_SCORING_INDEX_4 = 4,
			E_PLAYER_SCORING_INDEX_5 = 5,
			E_PLAYER_SCORING_INDEX_6 = 6,
			E_PLAYER_SCORING_INDEX_7 = 7,
			E_PLAYER_SCORING_INDEX_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:177
		enum ECarSelectType {
			E_CAR_SELECT_TYPE_NONE = 0,
			E_CAR_SELECT_TYPE_JUNKYARD = 1,
			E_CAR_SELECT_TYPE_ONLINE_EVENT_START = 2,
			E_CAR_SELECT_TYPE_COUNT = 3,
		}

		// Declaration
		struct FlybyRivalData {
			// BrnGameStateSharedIO.h:383
			enum EMessageStyle {
				E_MESSAGE_STYLE_GOOD = 0,
				E_MESSAGE_STYLE_NEUTRAL = 1,
				E_MESSAGE_STYLE_BAD = 2,
				E_MESSAGE_TYPE_COUNT = 3,
			}

		}

		// BrnGameStateSharedIO.h:1009
		extern bool IsOnlineFreeBurnLobby(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:1001
		extern bool IsShowtimeGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:174
		const uint32_t KU_MAX_ONLINE_ROUNDS_IN_MODE = 10;

	}

}

// BrnGameStateSharedIO.h:371
struct BrnGameState::GameStateModuleIO::FlybyRivalData {
	// BrnGameStateSharedIO.h:377
	extern const int32_t KI_MAX_CARS_IN_FLYBY = 3;

	// BrnGameStateSharedIO.h:378
	extern const int32_t KI_MAX_MESSAGES = 2;

	// BrnGameStateSharedIO.h:379
	extern const int32_t KI_MAX_PARAMTER_LENGTH = 20;

	// BrnGameStateSharedIO.h:380
	extern const int32_t KI_MAX_MESSAGE_ID_BUFFER = 64;

	// BrnGameStateSharedIO.h:381
	extern const int32_t KI_MAX_PARAMETERS = 1;

	// BrnGameStateSharedIO.h:392
	EActiveRaceCarIndex meRaceCarIndex;

	// BrnGameStateSharedIO.h:393
	char[2][64] maacMessageIDs;

	// BrnGameStateSharedIO.h:394
	char[2][20] maacMessageParameter;

	// BrnGameStateSharedIO.h:395
	int32_t[2] maiNumberOfParameters;

	// BrnGameStateSharedIO.h:396
	BrnGameState::GameStateModuleIO::FlybyRivalData::EMessageStyle meMessageStyle;

	// BrnGameStateSharedIO.h:397
	int32_t miNumberOfMessages;

	// BrnGameStateSharedIO.h:398
	PlayerName mPlayerName;

public:
	// BrnGameStateSharedIO.h:375
	void Prepare();

}

// BrnGameStateSharedIO.h:410
struct BrnGameState::GameStateModuleIO::FlybyData {
private:
	// BrnGameStateSharedIO.h:451
	int32_t miNumberOfCars;

	// BrnGameStateSharedIO.h:452
	FlybyRivalData[3] mRivalsToShow;

public:
	// BrnGameStateSharedIO.h:415
	bool Prepare();

	// BrnGameStateSharedIO.h:421
	void AddCar(EActiveRaceCarIndex, const PlayerName *);

	// BrnGameStateSharedIO.h:427
	void AddMessage(const char *, const char *);

	// BrnGameStateSharedIO.h:432
	void SetMessageStyle(BrnGameState::GameStateModuleIO::FlybyRivalData::EMessageStyle);

	// BrnGameStateSharedIO.h:438
	void AddMessage(const char *, int32_t);

	// BrnGameStateSharedIO.h:443
	const FlybyRivalData * GetCarFlybyData(int32_t) const;

	// BrnGameStateSharedIO.h:447
	int32_t GetNumberOfCarsToShow() const;

}

// BrnGameStateSharedIO.h:464
struct BrnGameState::GameStateModuleIO::CarScoreData {
	// BrnGameStateSharedIO.h:467
	Time mTotalTime;

	// BrnGameStateSharedIO.h:470
	uint32_t muRacePosition;

	// BrnGameStateSharedIO.h:471
	uint32_t muHighestPosition;

	// BrnGameStateSharedIO.h:472
	uint32_t muCompletedLaps;

	// BrnGameStateSharedIO.h:473
	uint32_t muFinishPosition;

	// BrnGameStateSharedIO.h:474
	float32_t mfDistanceToFinish;

	// BrnGameStateSharedIO.h:475
	float32_t mfDistanceToPlayer;

	// BrnGameStateSharedIO.h:476
	float32_t mfDistanceToNextCheckpoint;

	// BrnGameStateSharedIO.h:477
	Time[4] maLapTimes;

	// BrnGameStateSharedIO.h:478
	bool mbOvertakenRival;

	// BrnGameStateSharedIO.h:479
	bool mbHasFinished;

	// BrnGameStateSharedIO.h:482
	float32_t mfDistanceToFinishAtRoundEnd;

	// BrnGameStateSharedIO.h:483
	int32_t miNumberOfTakedowns;

	// BrnGameStateSharedIO.h:484
	int32_t miNumTakedownsAgainst;

	// BrnGameStateSharedIO.h:485
	int32_t miNumCrashes;

	// BrnGameStateSharedIO.h:486
	int32_t miPointsThisRound;

	// BrnGameStateSharedIO.h:487
	int32_t miResultsTablePosition;

	// BrnGameStateSharedIO.h:488
	EActiveRaceCarIndex meEliminatorRaceCarIndex;

	// BrnGameStateSharedIO.h:489
	int32_t miEliminations;

	// BrnGameStateSharedIO.h:490
	bool mbTimedOut;

	// BrnGameStateSharedIO.h:491
	bool mbDisconnected;

	// BrnGameStateSharedIO.h:492
	bool mbHasFever;

	// BrnGameStateSharedIO.h:493
	int32_t miTotalCheckpoints;

	// BrnGameStateSharedIO.h:494
	int32_t miOnlineLandmarksVisited;

	// BrnGameStateSharedIO.h:495
	int32_t miOnlineLandmarksNotYetVisited;

	// BrnGameStateSharedIO.h:496
	LandmarkIndex[16] maOnlineLandmarksVisited;

	// BrnGameStateSharedIO.h:497
	LandmarkIndex[16] maOnlineLandmarksNotYetVisited;

	// BrnGameStateSharedIO.h:498
	int32_t miCumulativeLandmarksVisited;

	// BrnGameStateSharedIO.h:499
	Time mTimeInCurrentTeam;

	// BrnGameStateSharedIO.h:500
	Time[3] maTotalTimeInTeam;

	// BrnGameStateSharedIO.h:503
	float32_t mfDistanceDriven;

	// BrnGameStateSharedIO.h:504
	Time mTimeInFirstPlace;

	// BrnGameStateSharedIO.h:505
	Time mTimeInLastPlace;

	// BrnGameStateSharedIO.h:506
	Time mTimeSpentBoosting;

	// BrnGameStateSharedIO.h:507
	float32_t mfLongestDrift;

	// BrnGameStateSharedIO.h:510
	int32_t miMarksFor;

	// BrnGameStateSharedIO.h:511
	int32_t miMarksAgainst;

	// BrnGameStateSharedIO.h:512
	int32_t miMarkedManTakedownsFor;

	// BrnGameStateSharedIO.h:513
	int32_t miMarkedManTakedownsAgainst;

	// BrnGameStateSharedIO.h:514
	int32_t miPaybacksUsedFor;

	// BrnGameStateSharedIO.h:515
	int32_t miPaybacksUsedAgainst;

	// BrnGameStateSharedIO.h:516
	int32_t miPaybacksSuccededFor;

	// BrnGameStateSharedIO.h:517
	int32_t miPaybacksSuccededAgainst;

	// BrnGameStateSharedIO.h:518
	int32_t miTraitorousTakedownsFor;

	// BrnGameStateSharedIO.h:519
	int32_t miTraitorousTakedownsAgainst;

public:
	// BrnGameStateSharedIO.h:523
	void ClearData();

}

// BrnGameStateSharedIO.h:676
struct BrnGameState::GameStateModuleIO::RaceCarRaceDistanceInterface {
private:
	// BrnGameStateSharedIO.h:706
	float32_t[8] mafRaceCarDistanceToFinish;

	// BrnGameStateSharedIO.h:707
	float32_t mfTotalRaceDistance;

	// BrnGameStateSharedIO.h:708
	int32_t miNumActiveRaceCars;

public:
	// BrnGameStateSharedIO.h:680
	void Clear();

	// BrnGameStateSharedIO.h:684
	const float32_t GetRaceCarDistToFinish(int32_t) const;

	// BrnGameStateSharedIO.h:687
	const float32_t GetTotalRaceDistance() const;

	// BrnGameStateSharedIO.h:690
	const int32_t GetNumActiveRaceCars() const;

	// BrnGameStateSharedIO.h:695
	void SetRaceCarDistToFinish(int32_t, float32_t);

	// BrnGameStateSharedIO.h:699
	void SetTotalRaceDistance(float32_t);

	// BrnGameStateSharedIO.h:703
	void SetNumActiveRaceCars(int32_t);

}

// BrnGameStateSharedIO.h:377
extern const int32_t KI_MAX_CARS_IN_FLYBY = 3;

// BrnGameStateSharedIO.h:378
extern const int32_t KI_MAX_MESSAGES = 2;

// BrnGameStateSharedIO.h:379
extern const int32_t KI_MAX_PARAMTER_LENGTH = 20;

// BrnGameStateSharedIO.h:380
extern const int32_t KI_MAX_MESSAGE_ID_BUFFER = 64;

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.h:51
		enum EGameModeType {
			E_MODE_NONE = -1,
			E_MODE_OFFLINE_RACE = 0,
			E_MODE_FACE_OFF = 1,
			E_MODE_OFFLINE_SHOWTIME = 2,
			E_MODE_ROAD_RAGE = 3,
			E_MODE_PURSUIT = 4,
			E_MODE_BURNING_ROUTE = 5,
			E_MODE_ELIMINATOR = 6,
			E_MODE_STUNT_ATTACK = 7,
			E_MODE_MARKED_MAN = 8,
			E_MODE_TRAFFIC_ATTACK = 9,
			E_MODE_OFFLINE_COUNT = 10,
			E_MODE_ONLINE_MODE_START = 10,
			E_MODE_ONLINE_RACE = 10,
			E_MODE_ONLINE_ROAD_RAGE = 11,
			E_MODE_ONLINE_FUGITIVE = 12,
			E_MODE_ONLINE_BURNING_HOME_RUN = 13,
			E_MODE_ONLINE_FREE_BURN = 14,
			E_MODE_ONLINE_FREE_BURN_LOBBY = 15,
			E_MODE_ONLINE_SHOWTIME = 16,
			E_MODE_ONLINE_MODE_END = 17,
			E_MODE_COUNT = 17,
		}

		// BrnGameStateSharedIO.h:112
		enum EPlayerTeam {
			E_PLAYER_TEAM_START = 0,
			E_PLAYER_TEAM_NONE = 0,
			E_PLAYER_TEAM_RED_TEAM = 1,
			E_PLAYER_TEAM_BLUE_TEAM = 2,
			E_PLAYER_TEAM_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:145
		enum EPlayerScoringIndex {
			E_PLAYER_SCORING_INDEX_0 = 0,
			E_PLAYER_SCORING_INDEX_1 = 1,
			E_PLAYER_SCORING_INDEX_2 = 2,
			E_PLAYER_SCORING_INDEX_3 = 3,
			E_PLAYER_SCORING_INDEX_4 = 4,
			E_PLAYER_SCORING_INDEX_5 = 5,
			E_PLAYER_SCORING_INDEX_6 = 6,
			E_PLAYER_SCORING_INDEX_7 = 7,
			E_PLAYER_SCORING_INDEX_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:158
		extern BrnGameState::GameStateModuleIO::EPlayerScoringIndex operator++(BrnGameState::GameStateModuleIO::EPlayerScoringIndex &, int);

		// BrnGameStateSharedIO.h:174
		const uint32_t KU_MAX_ONLINE_ROUNDS_IN_MODE = 10;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.h:51
		enum EGameModeType {
			E_MODE_NONE = -1,
			E_MODE_OFFLINE_RACE = 0,
			E_MODE_FACE_OFF = 1,
			E_MODE_OFFLINE_SHOWTIME = 2,
			E_MODE_ROAD_RAGE = 3,
			E_MODE_PURSUIT = 4,
			E_MODE_BURNING_ROUTE = 5,
			E_MODE_ELIMINATOR = 6,
			E_MODE_STUNT_ATTACK = 7,
			E_MODE_MARKED_MAN = 8,
			E_MODE_TRAFFIC_ATTACK = 9,
			E_MODE_OFFLINE_COUNT = 10,
			E_MODE_ONLINE_MODE_START = 10,
			E_MODE_ONLINE_RACE = 10,
			E_MODE_ONLINE_ROAD_RAGE = 11,
			E_MODE_ONLINE_FUGITIVE = 12,
			E_MODE_ONLINE_BURNING_HOME_RUN = 13,
			E_MODE_ONLINE_FREE_BURN = 14,
			E_MODE_ONLINE_FREE_BURN_LOBBY = 15,
			E_MODE_ONLINE_SHOWTIME = 16,
			E_MODE_ONLINE_MODE_END = 17,
			E_MODE_COUNT = 17,
		}

		// BrnGameStateSharedIO.h:82
		enum ERoadRageCrashType {
			E_ROADRAGE_CRASHTYPE_NONE = -1,
			E_ROADRAGE_CRASHTYPE_TAKENDOWN = 0,
			E_ROADRAGE_CRASHTYPE_WRECKED = 1,
			E_ROADRAGE_CRASHTYPE_COUNT = 2,
		}

		// BrnGameStateSharedIO.h:93
		enum EGameModeState {
			E_GMS_INVALID = -1,
			E_GMS_COUNTDOWN = 0,
			E_GMS_INTRO = 1,
			E_GMS_IN_PROGRESS = 2,
			E_GMS_OUTRO = 3,
			E_GMS_RESULTS = 4,
			E_GMS_QUIT = 5,
			E_GMS_ONLINE_LOADING = 6,
			E_GMS_ONLINE_SPLASH = 7,
			E_GMS_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:112
		enum EPlayerTeam {
			E_PLAYER_TEAM_START = 0,
			E_PLAYER_TEAM_NONE = 0,
			E_PLAYER_TEAM_RED_TEAM = 1,
			E_PLAYER_TEAM_BLUE_TEAM = 2,
			E_PLAYER_TEAM_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:123
		enum EBlueTeamFinishType {
			E_BLUE_TEAM_FINISH_TYPE_ELIMINATED = 0,
			E_BLUE_TEAM_FINISH_TYPE_SURVIVED = 1,
			E_BLUE_TEAM_FINISH_TYPE_ESCAPED = 2,
			E_BLUE_TEAM_FINISH_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:145
		enum EPlayerScoringIndex {
			E_PLAYER_SCORING_INDEX_0 = 0,
			E_PLAYER_SCORING_INDEX_1 = 1,
			E_PLAYER_SCORING_INDEX_2 = 2,
			E_PLAYER_SCORING_INDEX_3 = 3,
			E_PLAYER_SCORING_INDEX_4 = 4,
			E_PLAYER_SCORING_INDEX_5 = 5,
			E_PLAYER_SCORING_INDEX_6 = 6,
			E_PLAYER_SCORING_INDEX_7 = 7,
			E_PLAYER_SCORING_INDEX_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:161
		enum EMugshotResponse {
			E_MUGSHOT_RESPONSE_PREPARE_CAPTURE = 0,
			E_MUGSHOT_RESPONSE_CAPTURE = 1,
			E_MUGSHOT_RESPONSE_TAKE = 2,
			E_MUGSHOT_RESPONSE_SHOW = 3,
			E_MUGSHOT_RESPONSE_STOP_MY_MUGSHOT = 4,
			E_MUGSHOT_RESPONSE_STOP_THEIR_MUGSHOT = 5,
			E_MUGSHOT_RESPONSE_COUNT = 6,
		}

		// BrnGameStateSharedIO.h:177
		enum ECarSelectType {
			E_CAR_SELECT_TYPE_NONE = 0,
			E_CAR_SELECT_TYPE_JUNKYARD = 1,
			E_CAR_SELECT_TYPE_ONLINE_EVENT_START = 2,
			E_CAR_SELECT_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:228
		enum EImageGalleryType {
			E_IMAGE_GALLERY_TYPE_START = 0,
			E_IMAGE_GALLERY_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_GALLERY_TYPE_PAYBACK_MUGSHOT = 1,
			E_IMAGE_GALLERY_TYPE_ROAD_RULE_MUGSHOT = 2,
			E_IMAGE_GALLERY_TYPE_VICTORY_MUGSHOT = 3,
			E_IMAGE_GALLERY_TYPE_MUGSHOT = 4,
			E_IMAGE_GALLERY_TYPE_COUNT = 5,
		}

		// BrnGameStateSharedIO.h:243
		enum EImageType {
			E_IMAGE_TYPE_START = 0,
			E_IMAGE_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_TYPE_MUGSHOT = 1,
			E_IMAGE_TYPE_PAYBACK_MUGSHOT = 2,
			E_IMAGE_TYPE_ROAD_RULE_TIME_MUGSHOT = 3,
			E_IMAGE_TYPE_ROAD_RULE_CRASH_MUGSHOT = 4,
			E_IMAGE_TYPE_VICTORY_MUGSHOT = 5,
			E_IMAGE_TYPE_COUNT = 6,
		}

		// BrnGameStateSharedIO.h:259
		enum EFreeburnChallengeSuccess {
			E_FREEBURN_CHALLENGE_SUCCESS_NONE = 0,
			E_FREEBURN_CHALLENGE_SUCCESS_NOT_IN_CHALLENGE = 1,
			E_FREEBURN_CHALLENGE_SUCCESS_CONTRIBUTING = 2,
			E_FREEBURN_CHALLENGE_SUCCESS_DONE = 3,
			E_FREEBURN_CHALLENGE_SUCCESS_COUNT = 4,
		}

		// Declaration
		struct FlybyRivalData {
			// BrnGameStateSharedIO.h:383
			enum EMessageStyle {
				E_MESSAGE_STYLE_GOOD = 0,
				E_MESSAGE_STYLE_NEUTRAL = 1,
				E_MESSAGE_STYLE_BAD = 2,
				E_MESSAGE_TYPE_COUNT = 3,
			}

		}

		// Declaration
		struct GameModeOutputInterface {
			// BrnGameStateSharedIO.h:599
			struct State {
			private:
				// BrnGameStateSharedIO.h:620
				BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

				// BrnGameStateSharedIO.h:621
				BrnGameState::GameStateModuleIO::EGameModeState meGameModeState;

			public:
				// BrnGameStateSharedIO.h:603
				void Construct();

				// BrnGameStateSharedIO.h:606
				BrnGameState::GameStateModuleIO::EGameModeType GetGameModeType() const;

				// BrnGameStateSharedIO.h:609
				BrnGameState::GameStateModuleIO::EGameModeState GetGameModeState() const;

				// BrnGameStateSharedIO.h:613
				void SetGameModeType(BrnGameState::GameStateModuleIO::EGameModeType);

				// BrnGameStateSharedIO.h:617
				void SetGameModeState(BrnGameState::GameStateModuleIO::EGameModeState);

			}

		}

		// Declaration
		struct SetUpAllEventStartsInterface {
			// BrnGameStateSharedIO.h:794
			struct EventStart {
			private:
				// BrnGameStateSharedIO.h:826
				Vector3 mPosition;

				// BrnGameStateSharedIO.h:827
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:828
				uint32_t muJunctionID;

				// BrnGameStateSharedIO.h:829
				int32_t miEventID;

				// BrnGameStateSharedIO.h:830
				BrnWorld::ECounty meCounty;

				// BrnGameStateSharedIO.h:831
				uint16_t mu16SectionIndex;

			public:
				// BrnGameStateSharedIO.h:804
				void Construct(uint32_t, int32_t, LightTriggerId, Vector3, BrnWorld::ECounty, uint16_t);

				// BrnGameStateSharedIO.h:807
				uint32_t GetJunctionID() const;

				// BrnGameStateSharedIO.h:810
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:813
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:816
				Vector3 GetPosition() const;

				// BrnGameStateSharedIO.h:819
				BrnWorld::ECounty GetCounty() const;

				// BrnGameStateSharedIO.h:822
				uint16_t GetSectionIndex() const;

			}

		}

		// Declaration
		struct SpecificGameModeEventInterface {
			// BrnGameStateSharedIO.h:872
			struct Event {
			private:
				// BrnGameStateSharedIO.h:898
				LandmarkIndex[16] maLandmarkIndices;

				// BrnGameStateSharedIO.h:899
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:900
				int32_t miNumLandmarks;

				// BrnGameStateSharedIO.h:901
				int32_t miEventID;

			public:
				// BrnGameStateSharedIO.h:880
				void Construct(int32_t, LightTriggerId, LandmarkIndex *, int32_t);

				// BrnGameStateSharedIO.h:883
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:886
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:889
				int32_t GetNumLandmarks() const;

				// BrnGameStateSharedIO.h:893
				LandmarkIndex GetLandmark(int32_t) const;

			}

		}

		// Declaration
		struct FburnChallengeEveryPlayerStatusData {
			// BrnGameStateSharedIO.h:961
			struct CompletedChallenges {
				// BrnGameStateSharedIO.h:963
				CompletedFburnChallengesData::CompletedFburnChallenges mCompletedChallenges;

				// BrnGameStateSharedIO.h:964
				RoadRulesRecvData::NetworkPlayerID mPlayerID;

			}

		}

		// BrnGameStateSharedIO.h:158
		extern BrnGameState::GameStateModuleIO::EPlayerScoringIndex operator++(BrnGameState::GameStateModuleIO::EPlayerScoringIndex &, int);

		// BrnGameStateSharedIO.h:1001
		extern bool IsShowtimeGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:1009
		extern bool IsOnlineFreeBurnLobby(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:174
		const uint32_t KU_MAX_ONLINE_ROUNDS_IN_MODE = 10;

	}

}

// BrnGameStateSharedIO.h:288
struct BrnGameState::GameStateModuleIO::CompletedFburnChallengesData {
	// BrnGameStateSharedIO.h:290
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

	// BrnGameStateSharedIO.h:277
	typedef FastBitArray<2000> CompletedFburnChallenges;

	// BrnGameStateSharedIO.h:291
	CompletedFburnChallengesData::CompletedFburnChallenges mCompletedFreeburnChallenges;

}

// BrnGameStateSharedIO.h:535
struct BrnGameState::GameStateModuleIO::ScoringOutputInterface {
	// BrnGameStateSharedIO.h:538
	CarScoreData[8] maCarScoreData;

	// BrnGameStateSharedIO.h:539
	int32_t[8] maiCumulativeScoreData;

	// BrnGameStateSharedIO.h:540
	int32_t[8] maiNumRoadsRuled;

	// BrnGameStateSharedIO.h:541
	CgsID[8] maCarIds;

	// BrnGameStateSharedIO.h:542
	bool[8] mabPlayerEliminated;

	// BrnGameStateSharedIO.h:543
	bool[8] mabValid;

	// BrnGameStateSharedIO.h:544
	EActiveRaceCarIndex mePlayerRaceCarIndex;

	// BrnGameStateSharedIO.h:545
	int32_t miNumPlayersInGame;

	// BrnGameStateSharedIO.h:546
	BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

	// BrnGameStateSharedIO.h:547
	bool mbIsOnlineGameMode;

	// BrnGameStateSharedIO.h:550
	int32_t miPursuitCarDamageLeft;

	// BrnGameStateSharedIO.h:551
	float32_t mfPursuitCarDistanceFromPlayer;

	// BrnGameStateSharedIO.h:552
	int32_t miRoadRageNumTakedowns;

	// BrnGameStateSharedIO.h:553
	int32_t miRoadRageTakedownTarget;

	// BrnGameStateSharedIO.h:554
	int32_t miShowtimeCarsCrashed;

	// BrnGameStateSharedIO.h:555
	int32_t miShowtimeScoreMultiplier;

	// BrnGameStateSharedIO.h:556
	int32_t miShowtimeComboMultiplier;

	// BrnGameStateSharedIO.h:557
	float32_t mfShowtimeDistanceTravelled;

	// BrnGameStateSharedIO.h:559
	int32_t miCurrentScore;

	// BrnGameStateSharedIO.h:560
	int32_t miTargetScore;

	// BrnGameStateSharedIO.h:561
	int32_t miComboScore;

	// BrnGameStateSharedIO.h:562
	int32_t miComboMultiplier;

	// BrnGameStateSharedIO.h:563
	uint32_t muCurrentStunts;

	// BrnGameStateSharedIO.h:564
	uint32_t muAllStunts;

	// BrnGameStateSharedIO.h:565
	StuntToDisplay[1] maStunts;

	// BrnGameStateSharedIO.h:566
	float32_t mfComboWarningTimeActive;

	// BrnGameStateSharedIO.h:567
	bool mbComboWarningActive;

	// BrnGameStateSharedIO.h:568
	bool mbComboInProgress;

	// BrnGameStateSharedIO.h:570
	int32_t miNumberOfRivals;

	// BrnGameStateSharedIO.h:571
	float32_t mfModeTimeElapsed;

	// BrnGameStateSharedIO.h:572
	float32_t mfModeTimeRemaining;

	// BrnGameStateSharedIO.h:573
	float32_t mfCurrentTargetModeTime;

	// BrnGameStateSharedIO.h:574
	BrnGameState::ECurrentMedalTargetTime meCurrentMedalTarget;

	// BrnGameStateSharedIO.h:575
	BrnGameState::ECurrentMedalTargetTime meCurrentMedalAchieved;

	// BrnGameStateSharedIO.h:577
	float32_t mfDistanceDrivenInCurrentCar;

	// BrnGameStateSharedIO.h:579
	bool mbTimerActive;

public:
	// BrnGameStateSharedIO.h:583
	void operator=(const ScoringOutputInterface &);

}

// BrnGameStateSharedIO.h:596
struct BrnGameState::GameStateModuleIO::GameModeOutputInterface {
private:
	// BrnGameStateSharedIO.h:640
	BrnGameState::GameStateModuleIO::GameModeOutputInterface::State mPreviousState;

	// BrnGameStateSharedIO.h:641
	BrnGameState::GameStateModuleIO::GameModeOutputInterface::State mCurrentState;

public:
	// BrnGameStateSharedIO.h:625
	void Construct();

	// BrnGameStateSharedIO.h:628
	const BrnGameState::GameStateModuleIO::GameModeOutputInterface::State * GetPreviousState() const;

	// BrnGameStateSharedIO.h:631
	BrnGameState::GameStateModuleIO::GameModeOutputInterface::State * GetPreviousState();

	// BrnGameStateSharedIO.h:634
	const BrnGameState::GameStateModuleIO::GameModeOutputInterface::State * GetCurrentState() const;

	// BrnGameStateSharedIO.h:637
	BrnGameState::GameStateModuleIO::GameModeOutputInterface::State * GetCurrentState();

}

// BrnGameStateSharedIO.h:653
struct BrnGameState::GameStateModuleIO::OnlineScoringOutputInterface {
	// BrnGameStateSharedIO.h:655
	int32_t[8] maiNumEliminations;

	// BrnGameStateSharedIO.h:656
	BrnGameState::EOnlineAwardID[8] maOnlineAwards;

	// BrnGameStateSharedIO.h:657
	int32_t[8] maiOnlineAwardVariables;

	// BrnGameStateSharedIO.h:658
	BrnGameState::GameStateModuleIO::EPlayerTeam[8] maePlayerTeam;

	// BrnGameStateSharedIO.h:659
	BrnGameState::GameStateModuleIO::EBlueTeamFinishType[8] maeBlueTeamFinishTypes;

	// BrnGameStateSharedIO.h:660
	bool mbRedTeamWon;

public:
	// BrnGameStateSharedIO.h:664
	void Clear();

}

// BrnGameStateSharedIO.h:721
struct BrnGameState::GameStateModuleIO::InterestInterface {
private:
	// BrnGameStateSharedIO.h:738
	Array<BrnProgression::InterestData,8u> maInterestDataArray;

public:
	// BrnGameStateSharedIO.h:724
	void Construct();

	// BrnGameStateSharedIO.h:728
	void AddInterestData(const InterestData *);

	// BrnGameStateSharedIO.h:732
	const InterestData * GetInterestData(int32_t);

	// BrnGameStateSharedIO.h:735
	int32_t GetInteresDataCount() const;

}

// BrnGameStateSharedIO.h:750
struct BrnGameState::GameStateModuleIO::ControllerInput {
	// BrnGameStateSharedIO.h:752
	bool mbAcceptPressed;

	// BrnGameStateSharedIO.h:753
	bool mbStartPressed;

	// BrnGameStateSharedIO.h:754
	bool mbSelectBackPressed;

	// BrnGameStateSharedIO.h:755
	bool mbCancelPressed;

	// BrnGameStateSharedIO.h:756
	bool mbUpPressed;

	// BrnGameStateSharedIO.h:757
	bool mbDownPressed;

	// BrnGameStateSharedIO.h:758
	bool mbLeftPressed;

	// BrnGameStateSharedIO.h:759
	bool mbRightPressed;

	// BrnGameStateSharedIO.h:760
	bool mbLeftShoulderPressed;

	// BrnGameStateSharedIO.h:761
	bool mbLeftShoulderDown;

	// BrnGameStateSharedIO.h:762
	bool mbRightShoulderPressed;

	// BrnGameStateSharedIO.h:763
	bool mbRightShoulderDown;

	// BrnGameStateSharedIO.h:764
	bool mbDirtyTrickPressed;

	// BrnGameStateSharedIO.h:765
	bool mbImpactTimeDown;

	// BrnGameStateSharedIO.h:766
	bool mbCrashModePressed;

	// BrnGameStateSharedIO.h:767
	bool mbCrashbreakerPressed;

	// BrnGameStateSharedIO.h:768
	bool mbStartEventPressed;

	// BrnGameStateSharedIO.h:769
	bool mbRaceModePressed;

	// BrnGameStateSharedIO.h:770
	bool mbAcceleratePressed;

	// BrnGameStateSharedIO.h:771
	bool mbMaxPlayerStatsCheatActivate;

	// BrnGameStateSharedIO.h:772
	bool mbDPadLeftPressed;

public:
	// BrnGameStateSharedIO.h:777
	void Construct();

}

// BrnGameStateSharedIO.h:790
struct BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface {
private:
	// BrnGameStateSharedIO.h:856
	Array<BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart,175u> maEventStarts;

public:
	// BrnGameStateSharedIO.h:835
	void Construct();

	// BrnGameStateSharedIO.h:844
	void AddEventStart(uint32_t, int32_t, LightTriggerId, Vector3, BrnWorld::ECounty, uint16_t);

	// BrnGameStateSharedIO.h:847
	uint32_t GetNumEventStarts() const;

	// BrnGameStateSharedIO.h:851
	const BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart * GetEventStart(uint32_t) const;

}

// BrnGameStateSharedIO.h:868
struct BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface {
private:
	// BrnGameStateSharedIO.h:925
	Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u> maEvents;

public:
	// BrnGameStateSharedIO.h:905
	void Construct();

	// BrnGameStateSharedIO.h:912
	void AddEvent(int32_t, LightTriggerId, LandmarkIndex *, int32_t);

	// BrnGameStateSharedIO.h:915
	uint32_t GetNumEvents() const;

	// BrnGameStateSharedIO.h:919
	const BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event * GetEvent(uint32_t) const;

}

// BrnGameStateSharedIO.h:936
struct BrnGameState::GameStateModuleIO::FburnChallengeEveryPlayerStatusData {
private:
	// BrnGameStateSharedIO.h:967
	BrnGameState::GameStateModuleIO::FburnChallengeEveryPlayerStatusData::CompletedChallenges[7] maCompletedChallenges;

	// BrnGameStateSharedIO.h:968
	CompletedFburnChallengesData::CompletedFburnChallenges mLocalChallengeCompletionData;

public:
	// BrnGameStateSharedIO.h:940
	void Construct();

	// BrnGameStateSharedIO.h:944
	void AddLocalPlayerCompletionStatus(const CompletedFburnChallengesData::CompletedFburnChallenges *);

	// BrnGameStateSharedIO.h:949
	void AddCompletionStatus(const CompletedFburnChallengesData::CompletedFburnChallenges *, RoadRulesRecvData::NetworkPlayerID);

	// BrnGameStateSharedIO.h:952
	const CompletedFburnChallengesData::CompletedFburnChallenges * GetLocalPlayerCompletionStatus() const;

	// BrnGameStateSharedIO.h:956
	const CompletedFburnChallengesData::CompletedFburnChallenges * GetCompletionStatus(RoadRulesRecvData::NetworkPlayerID) const;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.h:51
		enum EGameModeType {
			E_MODE_NONE = -1,
			E_MODE_OFFLINE_RACE = 0,
			E_MODE_FACE_OFF = 1,
			E_MODE_OFFLINE_SHOWTIME = 2,
			E_MODE_ROAD_RAGE = 3,
			E_MODE_PURSUIT = 4,
			E_MODE_BURNING_ROUTE = 5,
			E_MODE_ELIMINATOR = 6,
			E_MODE_STUNT_ATTACK = 7,
			E_MODE_MARKED_MAN = 8,
			E_MODE_TRAFFIC_ATTACK = 9,
			E_MODE_OFFLINE_COUNT = 10,
			E_MODE_ONLINE_MODE_START = 10,
			E_MODE_ONLINE_RACE = 10,
			E_MODE_ONLINE_ROAD_RAGE = 11,
			E_MODE_ONLINE_FUGITIVE = 12,
			E_MODE_ONLINE_BURNING_HOME_RUN = 13,
			E_MODE_ONLINE_FREE_BURN = 14,
			E_MODE_ONLINE_FREE_BURN_LOBBY = 15,
			E_MODE_ONLINE_SHOWTIME = 16,
			E_MODE_ONLINE_MODE_END = 17,
			E_MODE_COUNT = 17,
		}

		// BrnGameStateSharedIO.h:82
		enum ERoadRageCrashType {
			E_ROADRAGE_CRASHTYPE_NONE = -1,
			E_ROADRAGE_CRASHTYPE_TAKENDOWN = 0,
			E_ROADRAGE_CRASHTYPE_WRECKED = 1,
			E_ROADRAGE_CRASHTYPE_COUNT = 2,
		}

		// BrnGameStateSharedIO.h:93
		enum EGameModeState {
			E_GMS_INVALID = -1,
			E_GMS_COUNTDOWN = 0,
			E_GMS_INTRO = 1,
			E_GMS_IN_PROGRESS = 2,
			E_GMS_OUTRO = 3,
			E_GMS_RESULTS = 4,
			E_GMS_QUIT = 5,
			E_GMS_ONLINE_LOADING = 6,
			E_GMS_ONLINE_SPLASH = 7,
			E_GMS_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:112
		enum EPlayerTeam {
			E_PLAYER_TEAM_START = 0,
			E_PLAYER_TEAM_NONE = 0,
			E_PLAYER_TEAM_RED_TEAM = 1,
			E_PLAYER_TEAM_BLUE_TEAM = 2,
			E_PLAYER_TEAM_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:123
		enum EBlueTeamFinishType {
			E_BLUE_TEAM_FINISH_TYPE_ELIMINATED = 0,
			E_BLUE_TEAM_FINISH_TYPE_SURVIVED = 1,
			E_BLUE_TEAM_FINISH_TYPE_ESCAPED = 2,
			E_BLUE_TEAM_FINISH_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:145
		enum EPlayerScoringIndex {
			E_PLAYER_SCORING_INDEX_0 = 0,
			E_PLAYER_SCORING_INDEX_1 = 1,
			E_PLAYER_SCORING_INDEX_2 = 2,
			E_PLAYER_SCORING_INDEX_3 = 3,
			E_PLAYER_SCORING_INDEX_4 = 4,
			E_PLAYER_SCORING_INDEX_5 = 5,
			E_PLAYER_SCORING_INDEX_6 = 6,
			E_PLAYER_SCORING_INDEX_7 = 7,
			E_PLAYER_SCORING_INDEX_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:177
		enum ECarSelectType {
			E_CAR_SELECT_TYPE_NONE = 0,
			E_CAR_SELECT_TYPE_JUNKYARD = 1,
			E_CAR_SELECT_TYPE_ONLINE_EVENT_START = 2,
			E_CAR_SELECT_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:228
		enum EImageGalleryType {
			E_IMAGE_GALLERY_TYPE_START = 0,
			E_IMAGE_GALLERY_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_GALLERY_TYPE_PAYBACK_MUGSHOT = 1,
			E_IMAGE_GALLERY_TYPE_ROAD_RULE_MUGSHOT = 2,
			E_IMAGE_GALLERY_TYPE_VICTORY_MUGSHOT = 3,
			E_IMAGE_GALLERY_TYPE_MUGSHOT = 4,
			E_IMAGE_GALLERY_TYPE_COUNT = 5,
		}

		// BrnGameStateSharedIO.h:243
		enum EImageType {
			E_IMAGE_TYPE_START = 0,
			E_IMAGE_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_TYPE_MUGSHOT = 1,
			E_IMAGE_TYPE_PAYBACK_MUGSHOT = 2,
			E_IMAGE_TYPE_ROAD_RULE_TIME_MUGSHOT = 3,
			E_IMAGE_TYPE_ROAD_RULE_CRASH_MUGSHOT = 4,
			E_IMAGE_TYPE_VICTORY_MUGSHOT = 5,
			E_IMAGE_TYPE_COUNT = 6,
		}

		// BrnGameStateSharedIO.h:259
		enum EFreeburnChallengeSuccess {
			E_FREEBURN_CHALLENGE_SUCCESS_NONE = 0,
			E_FREEBURN_CHALLENGE_SUCCESS_NOT_IN_CHALLENGE = 1,
			E_FREEBURN_CHALLENGE_SUCCESS_CONTRIBUTING = 2,
			E_FREEBURN_CHALLENGE_SUCCESS_DONE = 3,
			E_FREEBURN_CHALLENGE_SUCCESS_COUNT = 4,
		}

		// Declaration
		struct FlybyRivalData {
			// BrnGameStateSharedIO.h:383
			enum EMessageStyle {
				E_MESSAGE_STYLE_GOOD = 0,
				E_MESSAGE_STYLE_NEUTRAL = 1,
				E_MESSAGE_STYLE_BAD = 2,
				E_MESSAGE_TYPE_COUNT = 3,
			}

		}

		// Declaration
		struct GameModeOutputInterface {
			// BrnGameStateSharedIO.h:599
			struct State {
			private:
				// BrnGameStateSharedIO.h:620
				BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

				// BrnGameStateSharedIO.h:621
				BrnGameState::GameStateModuleIO::EGameModeState meGameModeState;

			public:
				// BrnGameStateSharedIO.h:603
				void Construct();

				// BrnGameStateSharedIO.h:606
				BrnGameState::GameStateModuleIO::EGameModeType GetGameModeType() const;

				// BrnGameStateSharedIO.h:609
				BrnGameState::GameStateModuleIO::EGameModeState GetGameModeState() const;

				// BrnGameStateSharedIO.h:613
				void SetGameModeType(BrnGameState::GameStateModuleIO::EGameModeType);

				// BrnGameStateSharedIO.h:617
				void SetGameModeState(BrnGameState::GameStateModuleIO::EGameModeState);

			}

		}

		// Declaration
		struct SetUpAllEventStartsInterface {
			// BrnGameStateSharedIO.h:794
			struct EventStart {
			private:
				// BrnGameStateSharedIO.h:826
				Vector3 mPosition;

				// BrnGameStateSharedIO.h:827
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:828
				uint32_t muJunctionID;

				// BrnGameStateSharedIO.h:829
				int32_t miEventID;

				// BrnGameStateSharedIO.h:830
				BrnWorld::ECounty meCounty;

				// BrnGameStateSharedIO.h:831
				uint16_t mu16SectionIndex;

			public:
				// BrnGameStateSharedIO.h:804
				void Construct(uint32_t, int32_t, LightTriggerId, Vector3, BrnWorld::ECounty, uint16_t);

				// BrnGameStateSharedIO.h:807
				uint32_t GetJunctionID() const;

				// BrnGameStateSharedIO.h:810
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:813
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:816
				Vector3 GetPosition() const;

				// BrnGameStateSharedIO.h:819
				BrnWorld::ECounty GetCounty() const;

				// BrnGameStateSharedIO.h:822
				uint16_t GetSectionIndex() const;

			}

		}

		// Declaration
		struct SpecificGameModeEventInterface {
			// BrnGameStateSharedIO.h:872
			struct Event {
			private:
				// BrnGameStateSharedIO.h:898
				LandmarkIndex[16] maLandmarkIndices;

				// BrnGameStateSharedIO.h:899
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:900
				int32_t miNumLandmarks;

				// BrnGameStateSharedIO.h:901
				int32_t miEventID;

			public:
				// BrnGameStateSharedIO.h:880
				void Construct(int32_t, LightTriggerId, LandmarkIndex *, int32_t);

				// BrnGameStateSharedIO.h:883
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:886
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:889
				int32_t GetNumLandmarks() const;

				// BrnGameStateSharedIO.h:893
				LandmarkIndex GetLandmark(int32_t) const;

			}

		}

		// Declaration
		struct FburnChallengeEveryPlayerStatusData {
			// BrnGameStateSharedIO.h:961
			struct CompletedChallenges {
				// BrnGameStateSharedIO.h:963
				CompletedFburnChallengesData::CompletedFburnChallenges mCompletedChallenges;

				// BrnGameStateSharedIO.h:964
				RoadRulesRecvData::NetworkPlayerID mPlayerID;

			}

		}

		// BrnGameStateSharedIO.h:158
		extern BrnGameState::GameStateModuleIO::EPlayerScoringIndex operator++(BrnGameState::GameStateModuleIO::EPlayerScoringIndex &, int);

		// BrnGameStateSharedIO.h:1009
		extern bool IsOnlineFreeBurnLobby(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:1001
		extern bool IsShowtimeGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:174
		const uint32_t KU_MAX_ONLINE_ROUNDS_IN_MODE = 10;

		// BrnGameStateSharedIO.h:973
		extern CgsID[] KI_SAVE_GAME_CHALLENGE_INDEX_ROAD_ID_MAPPING;

	}

}

// BrnGameStateSharedIO.h:973
extern CgsID[] KI_SAVE_GAME_CHALLENGE_INDEX_ROAD_ID_MAPPING;

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.h:51
		enum EGameModeType {
			E_MODE_NONE = -1,
			E_MODE_OFFLINE_RACE = 0,
			E_MODE_FACE_OFF = 1,
			E_MODE_OFFLINE_SHOWTIME = 2,
			E_MODE_ROAD_RAGE = 3,
			E_MODE_PURSUIT = 4,
			E_MODE_BURNING_ROUTE = 5,
			E_MODE_ELIMINATOR = 6,
			E_MODE_STUNT_ATTACK = 7,
			E_MODE_MARKED_MAN = 8,
			E_MODE_TRAFFIC_ATTACK = 9,
			E_MODE_OFFLINE_COUNT = 10,
			E_MODE_ONLINE_MODE_START = 10,
			E_MODE_ONLINE_RACE = 10,
			E_MODE_ONLINE_ROAD_RAGE = 11,
			E_MODE_ONLINE_FUGITIVE = 12,
			E_MODE_ONLINE_BURNING_HOME_RUN = 13,
			E_MODE_ONLINE_FREE_BURN = 14,
			E_MODE_ONLINE_FREE_BURN_LOBBY = 15,
			E_MODE_ONLINE_SHOWTIME = 16,
			E_MODE_ONLINE_MODE_END = 17,
			E_MODE_COUNT = 17,
		}

		// BrnGameStateSharedIO.h:82
		enum ERoadRageCrashType {
			E_ROADRAGE_CRASHTYPE_NONE = -1,
			E_ROADRAGE_CRASHTYPE_TAKENDOWN = 0,
			E_ROADRAGE_CRASHTYPE_WRECKED = 1,
			E_ROADRAGE_CRASHTYPE_COUNT = 2,
		}

		// BrnGameStateSharedIO.h:93
		enum EGameModeState {
			E_GMS_INVALID = -1,
			E_GMS_COUNTDOWN = 0,
			E_GMS_INTRO = 1,
			E_GMS_IN_PROGRESS = 2,
			E_GMS_OUTRO = 3,
			E_GMS_RESULTS = 4,
			E_GMS_QUIT = 5,
			E_GMS_ONLINE_LOADING = 6,
			E_GMS_ONLINE_SPLASH = 7,
			E_GMS_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:112
		enum EPlayerTeam {
			E_PLAYER_TEAM_START = 0,
			E_PLAYER_TEAM_NONE = 0,
			E_PLAYER_TEAM_RED_TEAM = 1,
			E_PLAYER_TEAM_BLUE_TEAM = 2,
			E_PLAYER_TEAM_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:123
		enum EBlueTeamFinishType {
			E_BLUE_TEAM_FINISH_TYPE_ELIMINATED = 0,
			E_BLUE_TEAM_FINISH_TYPE_SURVIVED = 1,
			E_BLUE_TEAM_FINISH_TYPE_ESCAPED = 2,
			E_BLUE_TEAM_FINISH_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:145
		enum EPlayerScoringIndex {
			E_PLAYER_SCORING_INDEX_0 = 0,
			E_PLAYER_SCORING_INDEX_1 = 1,
			E_PLAYER_SCORING_INDEX_2 = 2,
			E_PLAYER_SCORING_INDEX_3 = 3,
			E_PLAYER_SCORING_INDEX_4 = 4,
			E_PLAYER_SCORING_INDEX_5 = 5,
			E_PLAYER_SCORING_INDEX_6 = 6,
			E_PLAYER_SCORING_INDEX_7 = 7,
			E_PLAYER_SCORING_INDEX_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:161
		enum EMugshotResponse {
			E_MUGSHOT_RESPONSE_PREPARE_CAPTURE = 0,
			E_MUGSHOT_RESPONSE_CAPTURE = 1,
			E_MUGSHOT_RESPONSE_TAKE = 2,
			E_MUGSHOT_RESPONSE_SHOW = 3,
			E_MUGSHOT_RESPONSE_STOP_MY_MUGSHOT = 4,
			E_MUGSHOT_RESPONSE_STOP_THEIR_MUGSHOT = 5,
			E_MUGSHOT_RESPONSE_COUNT = 6,
		}

		// BrnGameStateSharedIO.h:177
		enum ECarSelectType {
			E_CAR_SELECT_TYPE_NONE = 0,
			E_CAR_SELECT_TYPE_JUNKYARD = 1,
			E_CAR_SELECT_TYPE_ONLINE_EVENT_START = 2,
			E_CAR_SELECT_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:188
		enum ECarSelectState {
			E_CAR_SELECT_STATE_MODEL = 0,
			E_CAR_SELECT_STATE_LIVERY = 1,
			E_CAR_SELECT_STATE_WAIT_FOR_HOST = 2,
			E_CAR_SELECT_STATE_ACCEPT_CAR = 3,
			E_CAR_SELECT_STATE_EXIT = 4,
			E_CAR_SELECT_STATE_COUNT = 5,
		}

		// BrnGameStateSharedIO.h:211
		enum EImageGalleryRequest {
			E_IMAGE_GALLERY_REQUEST_NEW_IMAGE_TYPE = 0,
			E_IMAGE_GALLERY_REQUEST_NEW_IMAGES = 1,
			E_IMAGE_GALLERY_REQUEST_SCROLL_RIGHT = 2,
			E_IMAGE_GALLERY_REQUEST_SCROLL_LEFT = 3,
			E_IMAGE_GALLERY_REQUEST_ASK_DELETE = 4,
			E_IMAGE_GALLERY_REQUEST_DELETE = 5,
			E_IMAGE_GALLERY_REQUEST_LOCK = 6,
			E_IMAGE_GALLERY_REQUEST_EXPORT = 7,
			E_IMAGE_GALLERY_REQUEST_SHOW_GAMERCARD = 8,
			E_IMAGE_GALLERY_REQUEST_COUNT = 9,
		}

		// BrnGameStateSharedIO.h:228
		enum EImageGalleryType {
			E_IMAGE_GALLERY_TYPE_START = 0,
			E_IMAGE_GALLERY_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_GALLERY_TYPE_PAYBACK_MUGSHOT = 1,
			E_IMAGE_GALLERY_TYPE_ROAD_RULE_MUGSHOT = 2,
			E_IMAGE_GALLERY_TYPE_VICTORY_MUGSHOT = 3,
			E_IMAGE_GALLERY_TYPE_MUGSHOT = 4,
			E_IMAGE_GALLERY_TYPE_COUNT = 5,
		}

		// BrnGameStateSharedIO.h:243
		enum EImageType {
			E_IMAGE_TYPE_START = 0,
			E_IMAGE_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_TYPE_MUGSHOT = 1,
			E_IMAGE_TYPE_PAYBACK_MUGSHOT = 2,
			E_IMAGE_TYPE_ROAD_RULE_TIME_MUGSHOT = 3,
			E_IMAGE_TYPE_ROAD_RULE_CRASH_MUGSHOT = 4,
			E_IMAGE_TYPE_VICTORY_MUGSHOT = 5,
			E_IMAGE_TYPE_COUNT = 6,
		}

		// BrnGameStateSharedIO.h:259
		enum EFreeburnChallengeSuccess {
			E_FREEBURN_CHALLENGE_SUCCESS_NONE = 0,
			E_FREEBURN_CHALLENGE_SUCCESS_NOT_IN_CHALLENGE = 1,
			E_FREEBURN_CHALLENGE_SUCCESS_CONTRIBUTING = 2,
			E_FREEBURN_CHALLENGE_SUCCESS_DONE = 3,
			E_FREEBURN_CHALLENGE_SUCCESS_COUNT = 4,
		}

		// Declaration
		struct FlybyRivalData {
			// BrnGameStateSharedIO.h:383
			enum EMessageStyle {
				E_MESSAGE_STYLE_GOOD = 0,
				E_MESSAGE_STYLE_NEUTRAL = 1,
				E_MESSAGE_STYLE_BAD = 2,
				E_MESSAGE_TYPE_COUNT = 3,
			}

		}

		// Declaration
		struct GameModeOutputInterface {
			// BrnGameStateSharedIO.h:599
			struct State {
			private:
				// BrnGameStateSharedIO.h:620
				BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

				// BrnGameStateSharedIO.h:621
				BrnGameState::GameStateModuleIO::EGameModeState meGameModeState;

			public:
				// BrnGameStateSharedIO.h:603
				void Construct();

				// BrnGameStateSharedIO.h:606
				BrnGameState::GameStateModuleIO::EGameModeType GetGameModeType() const;

				// BrnGameStateSharedIO.h:609
				BrnGameState::GameStateModuleIO::EGameModeState GetGameModeState() const;

				// BrnGameStateSharedIO.h:613
				void SetGameModeType(BrnGameState::GameStateModuleIO::EGameModeType);

				// BrnGameStateSharedIO.h:617
				void SetGameModeState(BrnGameState::GameStateModuleIO::EGameModeState);

			}

		}

		// Declaration
		struct SetUpAllEventStartsInterface {
			// BrnGameStateSharedIO.h:794
			struct EventStart {
			private:
				// BrnGameStateSharedIO.h:826
				Vector3 mPosition;

				// BrnGameStateSharedIO.h:827
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:828
				uint32_t muJunctionID;

				// BrnGameStateSharedIO.h:829
				int32_t miEventID;

				// BrnGameStateSharedIO.h:830
				BrnWorld::ECounty meCounty;

				// BrnGameStateSharedIO.h:831
				uint16_t mu16SectionIndex;

			public:
				// BrnGameStateSharedIO.h:804
				void Construct(uint32_t, int32_t, LightTriggerId, Vector3, BrnWorld::ECounty, uint16_t);

				// BrnGameStateSharedIO.h:807
				uint32_t GetJunctionID() const;

				// BrnGameStateSharedIO.h:810
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:813
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:816
				Vector3 GetPosition() const;

				// BrnGameStateSharedIO.h:819
				BrnWorld::ECounty GetCounty() const;

				// BrnGameStateSharedIO.h:822
				uint16_t GetSectionIndex() const;

			}

		}

		// Declaration
		struct SpecificGameModeEventInterface {
			// BrnGameStateSharedIO.h:872
			struct Event {
			private:
				// BrnGameStateSharedIO.h:898
				LandmarkIndex[16] maLandmarkIndices;

				// BrnGameStateSharedIO.h:899
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:900
				int32_t miNumLandmarks;

				// BrnGameStateSharedIO.h:901
				int32_t miEventID;

			public:
				// BrnGameStateSharedIO.h:880
				void Construct(int32_t, LightTriggerId, LandmarkIndex *, int32_t);

				// BrnGameStateSharedIO.h:883
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:886
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:889
				int32_t GetNumLandmarks() const;

				// BrnGameStateSharedIO.h:893
				LandmarkIndex GetLandmark(int32_t) const;

			}

		}

		// BrnGameStateSharedIO.h:240
		extern BrnGameState::GameStateModuleIO::EImageGalleryType operator++(BrnGameState::GameStateModuleIO::EImageGalleryType &, int);

		// BrnGameStateSharedIO.h:1001
		extern bool IsShowtimeGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:158
		extern BrnGameState::GameStateModuleIO::EPlayerScoringIndex operator++(BrnGameState::GameStateModuleIO::EPlayerScoringIndex &, int);

		// BrnGameStateSharedIO.h:1009
		extern bool IsOnlineFreeBurnLobby(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:1017
		extern bool IsOnlineEvent(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:174
		const uint32_t KU_MAX_ONLINE_ROUNDS_IN_MODE = 10;

	}

}

// BrnGameStateSharedIO.h:381
extern const int32_t KI_MAX_PARAMETERS = 1;

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.h:51
		enum EGameModeType {
			E_MODE_NONE = -1,
			E_MODE_OFFLINE_RACE = 0,
			E_MODE_FACE_OFF = 1,
			E_MODE_OFFLINE_SHOWTIME = 2,
			E_MODE_ROAD_RAGE = 3,
			E_MODE_PURSUIT = 4,
			E_MODE_BURNING_ROUTE = 5,
			E_MODE_ELIMINATOR = 6,
			E_MODE_STUNT_ATTACK = 7,
			E_MODE_MARKED_MAN = 8,
			E_MODE_TRAFFIC_ATTACK = 9,
			E_MODE_OFFLINE_COUNT = 10,
			E_MODE_ONLINE_MODE_START = 10,
			E_MODE_ONLINE_RACE = 10,
			E_MODE_ONLINE_ROAD_RAGE = 11,
			E_MODE_ONLINE_FUGITIVE = 12,
			E_MODE_ONLINE_BURNING_HOME_RUN = 13,
			E_MODE_ONLINE_FREE_BURN = 14,
			E_MODE_ONLINE_FREE_BURN_LOBBY = 15,
			E_MODE_ONLINE_SHOWTIME = 16,
			E_MODE_ONLINE_MODE_END = 17,
			E_MODE_COUNT = 17,
		}

		// BrnGameStateSharedIO.h:82
		enum ERoadRageCrashType {
			E_ROADRAGE_CRASHTYPE_NONE = -1,
			E_ROADRAGE_CRASHTYPE_TAKENDOWN = 0,
			E_ROADRAGE_CRASHTYPE_WRECKED = 1,
			E_ROADRAGE_CRASHTYPE_COUNT = 2,
		}

		// BrnGameStateSharedIO.h:93
		enum EGameModeState {
			E_GMS_INVALID = -1,
			E_GMS_COUNTDOWN = 0,
			E_GMS_INTRO = 1,
			E_GMS_IN_PROGRESS = 2,
			E_GMS_OUTRO = 3,
			E_GMS_RESULTS = 4,
			E_GMS_QUIT = 5,
			E_GMS_ONLINE_LOADING = 6,
			E_GMS_ONLINE_SPLASH = 7,
			E_GMS_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:112
		enum EPlayerTeam {
			E_PLAYER_TEAM_START = 0,
			E_PLAYER_TEAM_NONE = 0,
			E_PLAYER_TEAM_RED_TEAM = 1,
			E_PLAYER_TEAM_BLUE_TEAM = 2,
			E_PLAYER_TEAM_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:123
		enum EBlueTeamFinishType {
			E_BLUE_TEAM_FINISH_TYPE_ELIMINATED = 0,
			E_BLUE_TEAM_FINISH_TYPE_SURVIVED = 1,
			E_BLUE_TEAM_FINISH_TYPE_ESCAPED = 2,
			E_BLUE_TEAM_FINISH_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:145
		enum EPlayerScoringIndex {
			E_PLAYER_SCORING_INDEX_0 = 0,
			E_PLAYER_SCORING_INDEX_1 = 1,
			E_PLAYER_SCORING_INDEX_2 = 2,
			E_PLAYER_SCORING_INDEX_3 = 3,
			E_PLAYER_SCORING_INDEX_4 = 4,
			E_PLAYER_SCORING_INDEX_5 = 5,
			E_PLAYER_SCORING_INDEX_6 = 6,
			E_PLAYER_SCORING_INDEX_7 = 7,
			E_PLAYER_SCORING_INDEX_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:161
		enum EMugshotResponse {
			E_MUGSHOT_RESPONSE_PREPARE_CAPTURE = 0,
			E_MUGSHOT_RESPONSE_CAPTURE = 1,
			E_MUGSHOT_RESPONSE_TAKE = 2,
			E_MUGSHOT_RESPONSE_SHOW = 3,
			E_MUGSHOT_RESPONSE_STOP_MY_MUGSHOT = 4,
			E_MUGSHOT_RESPONSE_STOP_THEIR_MUGSHOT = 5,
			E_MUGSHOT_RESPONSE_COUNT = 6,
		}

		// BrnGameStateSharedIO.h:177
		enum ECarSelectType {
			E_CAR_SELECT_TYPE_NONE = 0,
			E_CAR_SELECT_TYPE_JUNKYARD = 1,
			E_CAR_SELECT_TYPE_ONLINE_EVENT_START = 2,
			E_CAR_SELECT_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:188
		enum ECarSelectState {
			E_CAR_SELECT_STATE_MODEL = 0,
			E_CAR_SELECT_STATE_LIVERY = 1,
			E_CAR_SELECT_STATE_WAIT_FOR_HOST = 2,
			E_CAR_SELECT_STATE_ACCEPT_CAR = 3,
			E_CAR_SELECT_STATE_EXIT = 4,
			E_CAR_SELECT_STATE_COUNT = 5,
		}

		// BrnGameStateSharedIO.h:211
		enum EImageGalleryRequest {
			E_IMAGE_GALLERY_REQUEST_NEW_IMAGE_TYPE = 0,
			E_IMAGE_GALLERY_REQUEST_NEW_IMAGES = 1,
			E_IMAGE_GALLERY_REQUEST_SCROLL_RIGHT = 2,
			E_IMAGE_GALLERY_REQUEST_SCROLL_LEFT = 3,
			E_IMAGE_GALLERY_REQUEST_ASK_DELETE = 4,
			E_IMAGE_GALLERY_REQUEST_DELETE = 5,
			E_IMAGE_GALLERY_REQUEST_LOCK = 6,
			E_IMAGE_GALLERY_REQUEST_EXPORT = 7,
			E_IMAGE_GALLERY_REQUEST_SHOW_GAMERCARD = 8,
			E_IMAGE_GALLERY_REQUEST_COUNT = 9,
		}

		// BrnGameStateSharedIO.h:228
		enum EImageGalleryType {
			E_IMAGE_GALLERY_TYPE_START = 0,
			E_IMAGE_GALLERY_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_GALLERY_TYPE_PAYBACK_MUGSHOT = 1,
			E_IMAGE_GALLERY_TYPE_ROAD_RULE_MUGSHOT = 2,
			E_IMAGE_GALLERY_TYPE_VICTORY_MUGSHOT = 3,
			E_IMAGE_GALLERY_TYPE_MUGSHOT = 4,
			E_IMAGE_GALLERY_TYPE_COUNT = 5,
		}

		// BrnGameStateSharedIO.h:243
		enum EImageType {
			E_IMAGE_TYPE_START = 0,
			E_IMAGE_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_TYPE_MUGSHOT = 1,
			E_IMAGE_TYPE_PAYBACK_MUGSHOT = 2,
			E_IMAGE_TYPE_ROAD_RULE_TIME_MUGSHOT = 3,
			E_IMAGE_TYPE_ROAD_RULE_CRASH_MUGSHOT = 4,
			E_IMAGE_TYPE_VICTORY_MUGSHOT = 5,
			E_IMAGE_TYPE_COUNT = 6,
		}

		// BrnGameStateSharedIO.h:259
		enum EFreeburnChallengeSuccess {
			E_FREEBURN_CHALLENGE_SUCCESS_NONE = 0,
			E_FREEBURN_CHALLENGE_SUCCESS_NOT_IN_CHALLENGE = 1,
			E_FREEBURN_CHALLENGE_SUCCESS_CONTRIBUTING = 2,
			E_FREEBURN_CHALLENGE_SUCCESS_DONE = 3,
			E_FREEBURN_CHALLENGE_SUCCESS_COUNT = 4,
		}

		// Declaration
		struct FlybyRivalData {
			// BrnGameStateSharedIO.h:383
			enum EMessageStyle {
				E_MESSAGE_STYLE_GOOD = 0,
				E_MESSAGE_STYLE_NEUTRAL = 1,
				E_MESSAGE_STYLE_BAD = 2,
				E_MESSAGE_TYPE_COUNT = 3,
			}

		}

		// Declaration
		struct GameModeOutputInterface {
			// BrnGameStateSharedIO.h:599
			struct State {
			private:
				// BrnGameStateSharedIO.h:620
				BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

				// BrnGameStateSharedIO.h:621
				BrnGameState::GameStateModuleIO::EGameModeState meGameModeState;

			public:
				// BrnGameStateSharedIO.h:603
				void Construct();

				// BrnGameStateSharedIO.h:606
				BrnGameState::GameStateModuleIO::EGameModeType GetGameModeType() const;

				// BrnGameStateSharedIO.h:609
				BrnGameState::GameStateModuleIO::EGameModeState GetGameModeState() const;

				// BrnGameStateSharedIO.h:613
				void SetGameModeType(BrnGameState::GameStateModuleIO::EGameModeType);

				// BrnGameStateSharedIO.h:617
				void SetGameModeState(BrnGameState::GameStateModuleIO::EGameModeState);

			}

		}

		// Declaration
		struct SetUpAllEventStartsInterface {
			// BrnGameStateSharedIO.h:794
			struct EventStart {
			private:
				// BrnGameStateSharedIO.h:826
				Vector3 mPosition;

				// BrnGameStateSharedIO.h:827
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:828
				uint32_t muJunctionID;

				// BrnGameStateSharedIO.h:829
				int32_t miEventID;

				// BrnGameStateSharedIO.h:830
				BrnWorld::ECounty meCounty;

				// BrnGameStateSharedIO.h:831
				uint16_t mu16SectionIndex;

			public:
				// BrnGameStateSharedIO.h:804
				void Construct(uint32_t, int32_t, LightTriggerId, Vector3, BrnWorld::ECounty, uint16_t);

				// BrnGameStateSharedIO.h:807
				uint32_t GetJunctionID() const;

				// BrnGameStateSharedIO.h:810
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:813
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:816
				Vector3 GetPosition() const;

				// BrnGameStateSharedIO.h:819
				BrnWorld::ECounty GetCounty() const;

				// BrnGameStateSharedIO.h:822
				uint16_t GetSectionIndex() const;

			}

		}

		// Declaration
		struct SpecificGameModeEventInterface {
			// BrnGameStateSharedIO.h:872
			struct Event {
			private:
				// BrnGameStateSharedIO.h:898
				LandmarkIndex[16] maLandmarkIndices;

				// BrnGameStateSharedIO.h:899
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:900
				int32_t miNumLandmarks;

				// BrnGameStateSharedIO.h:901
				int32_t miEventID;

			public:
				// BrnGameStateSharedIO.h:880
				void Construct(int32_t, LightTriggerId, LandmarkIndex *, int32_t);

				// BrnGameStateSharedIO.h:883
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:886
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:889
				int32_t GetNumLandmarks() const;

				// BrnGameStateSharedIO.h:893
				LandmarkIndex GetLandmark(int32_t) const;

			}

		}

		// Declaration
		struct FburnChallengeEveryPlayerStatusData {
			// BrnGameStateSharedIO.h:961
			struct CompletedChallenges {
				// BrnGameStateSharedIO.h:963
				CompletedFburnChallengesData::CompletedFburnChallenges mCompletedChallenges;

				// BrnGameStateSharedIO.h:964
				RoadRulesRecvData::NetworkPlayerID mPlayerID;

			}

		}

		// BrnGameStateSharedIO.h:1001
		extern bool IsShowtimeGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:1009
		extern bool IsOnlineFreeBurnLobby(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:174
		const uint32_t KU_MAX_ONLINE_ROUNDS_IN_MODE = 10;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.h:174
		const uint32_t KU_MAX_ONLINE_ROUNDS_IN_MODE = 10;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.h:51
		enum EGameModeType {
			E_MODE_NONE = -1,
			E_MODE_OFFLINE_RACE = 0,
			E_MODE_FACE_OFF = 1,
			E_MODE_OFFLINE_SHOWTIME = 2,
			E_MODE_ROAD_RAGE = 3,
			E_MODE_PURSUIT = 4,
			E_MODE_BURNING_ROUTE = 5,
			E_MODE_ELIMINATOR = 6,
			E_MODE_STUNT_ATTACK = 7,
			E_MODE_MARKED_MAN = 8,
			E_MODE_TRAFFIC_ATTACK = 9,
			E_MODE_OFFLINE_COUNT = 10,
			E_MODE_ONLINE_MODE_START = 10,
			E_MODE_ONLINE_RACE = 10,
			E_MODE_ONLINE_ROAD_RAGE = 11,
			E_MODE_ONLINE_FUGITIVE = 12,
			E_MODE_ONLINE_BURNING_HOME_RUN = 13,
			E_MODE_ONLINE_FREE_BURN = 14,
			E_MODE_ONLINE_FREE_BURN_LOBBY = 15,
			E_MODE_ONLINE_SHOWTIME = 16,
			E_MODE_ONLINE_MODE_END = 17,
			E_MODE_COUNT = 17,
		}

		// BrnGameStateSharedIO.h:112
		enum EPlayerTeam {
			E_PLAYER_TEAM_START = 0,
			E_PLAYER_TEAM_NONE = 0,
			E_PLAYER_TEAM_RED_TEAM = 1,
			E_PLAYER_TEAM_BLUE_TEAM = 2,
			E_PLAYER_TEAM_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:177
		enum ECarSelectType {
			E_CAR_SELECT_TYPE_NONE = 0,
			E_CAR_SELECT_TYPE_JUNKYARD = 1,
			E_CAR_SELECT_TYPE_ONLINE_EVENT_START = 2,
			E_CAR_SELECT_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:228
		enum EImageGalleryType {
			E_IMAGE_GALLERY_TYPE_START = 0,
			E_IMAGE_GALLERY_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_GALLERY_TYPE_PAYBACK_MUGSHOT = 1,
			E_IMAGE_GALLERY_TYPE_ROAD_RULE_MUGSHOT = 2,
			E_IMAGE_GALLERY_TYPE_VICTORY_MUGSHOT = 3,
			E_IMAGE_GALLERY_TYPE_MUGSHOT = 4,
			E_IMAGE_GALLERY_TYPE_COUNT = 5,
		}

		// BrnGameStateSharedIO.h:259
		enum EFreeburnChallengeSuccess {
			E_FREEBURN_CHALLENGE_SUCCESS_NONE = 0,
			E_FREEBURN_CHALLENGE_SUCCESS_NOT_IN_CHALLENGE = 1,
			E_FREEBURN_CHALLENGE_SUCCESS_CONTRIBUTING = 2,
			E_FREEBURN_CHALLENGE_SUCCESS_DONE = 3,
			E_FREEBURN_CHALLENGE_SUCCESS_COUNT = 4,
		}

		// Declaration
		struct SetUpAllEventStartsInterface {
			// BrnGameStateSharedIO.h:794
			struct EventStart {
			private:
				// BrnGameStateSharedIO.h:826
				Vector3 mPosition;

				// BrnGameStateSharedIO.h:827
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:828
				uint32_t muJunctionID;

				// BrnGameStateSharedIO.h:829
				int32_t miEventID;

				// BrnGameStateSharedIO.h:830
				BrnWorld::ECounty meCounty;

				// BrnGameStateSharedIO.h:831
				uint16_t mu16SectionIndex;

			public:
				// BrnGameStateSharedIO.h:804
				void Construct(uint32_t, int32_t, LightTriggerId, Vector3, BrnWorld::ECounty, uint16_t);

				// BrnGameStateSharedIO.h:807
				uint32_t GetJunctionID() const;

				// BrnGameStateSharedIO.h:810
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:813
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:816
				Vector3 GetPosition() const;

				// BrnGameStateSharedIO.h:819
				BrnWorld::ECounty GetCounty() const;

				// BrnGameStateSharedIO.h:822
				uint16_t GetSectionIndex() const;

			}

		}

		// Declaration
		struct SpecificGameModeEventInterface {
			// BrnGameStateSharedIO.h:872
			struct Event {
			private:
				// BrnGameStateSharedIO.h:898
				LandmarkIndex[16] maLandmarkIndices;

				// BrnGameStateSharedIO.h:899
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:900
				int32_t miNumLandmarks;

				// BrnGameStateSharedIO.h:901
				int32_t miEventID;

			public:
				// BrnGameStateSharedIO.h:880
				void Construct(int32_t, LightTriggerId, LandmarkIndex *, int32_t);

				// BrnGameStateSharedIO.h:883
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:886
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:889
				int32_t GetNumLandmarks() const;

				// BrnGameStateSharedIO.h:893
				LandmarkIndex GetLandmark(int32_t) const;

			}

		}

		// Declaration
		struct FburnChallengeEveryPlayerStatusData {
			// BrnGameStateSharedIO.h:961
			struct CompletedChallenges {
				// BrnGameStateSharedIO.h:963
				CompletedFburnChallengesData::CompletedFburnChallenges mCompletedChallenges;

				// BrnGameStateSharedIO.h:964
				GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

			}

		}

		// BrnGameStateSharedIO.h:1009
		extern bool IsOnlineFreeBurnLobby(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:1001
		extern bool IsShowtimeGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:174
		const uint32_t KU_MAX_ONLINE_ROUNDS_IN_MODE = 10;

	}

}

// BrnGameStateSharedIO.h:288
struct BrnGameState::GameStateModuleIO::CompletedFburnChallengesData {
	// BrnGameStateSharedIO.h:290
	GuiEventNetworkLaunching::NetworkPlayerID mNetworkPlayerID;

	// BrnGameStateSharedIO.h:277
	typedef FastBitArray<2000> CompletedFburnChallenges;

	// BrnGameStateSharedIO.h:291
	CompletedFburnChallengesData::CompletedFburnChallenges mCompletedFreeburnChallenges;

}

// BrnGameStateSharedIO.h:936
struct BrnGameState::GameStateModuleIO::FburnChallengeEveryPlayerStatusData {
private:
	// BrnGameStateSharedIO.h:967
	BrnGameState::GameStateModuleIO::FburnChallengeEveryPlayerStatusData::CompletedChallenges[7] maCompletedChallenges;

	// BrnGameStateSharedIO.h:968
	CompletedFburnChallengesData::CompletedFburnChallenges mLocalChallengeCompletionData;

public:
	// BrnGameStateSharedIO.h:940
	void Construct();

	// BrnGameStateSharedIO.h:944
	void AddLocalPlayerCompletionStatus(const CompletedFburnChallengesData::CompletedFburnChallenges *);

	// BrnGameStateSharedIO.h:949
	void AddCompletionStatus(const CompletedFburnChallengesData::CompletedFburnChallenges *, GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnGameStateSharedIO.h:952
	const CompletedFburnChallengesData::CompletedFburnChallenges * GetLocalPlayerCompletionStatus() const;

	// BrnGameStateSharedIO.h:956
	const CompletedFburnChallengesData::CompletedFburnChallenges * GetCompletionStatus(GuiEventNetworkLaunching::NetworkPlayerID) const;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.h:51
		enum EGameModeType {
			E_MODE_NONE = -1,
			E_MODE_OFFLINE_RACE = 0,
			E_MODE_FACE_OFF = 1,
			E_MODE_OFFLINE_SHOWTIME = 2,
			E_MODE_ROAD_RAGE = 3,
			E_MODE_PURSUIT = 4,
			E_MODE_BURNING_ROUTE = 5,
			E_MODE_ELIMINATOR = 6,
			E_MODE_STUNT_ATTACK = 7,
			E_MODE_MARKED_MAN = 8,
			E_MODE_TRAFFIC_ATTACK = 9,
			E_MODE_OFFLINE_COUNT = 10,
			E_MODE_ONLINE_MODE_START = 10,
			E_MODE_ONLINE_RACE = 10,
			E_MODE_ONLINE_ROAD_RAGE = 11,
			E_MODE_ONLINE_FUGITIVE = 12,
			E_MODE_ONLINE_BURNING_HOME_RUN = 13,
			E_MODE_ONLINE_FREE_BURN = 14,
			E_MODE_ONLINE_FREE_BURN_LOBBY = 15,
			E_MODE_ONLINE_SHOWTIME = 16,
			E_MODE_ONLINE_MODE_END = 17,
			E_MODE_COUNT = 17,
		}

		// BrnGameStateSharedIO.h:112
		enum EPlayerTeam {
			E_PLAYER_TEAM_START = 0,
			E_PLAYER_TEAM_NONE = 0,
			E_PLAYER_TEAM_RED_TEAM = 1,
			E_PLAYER_TEAM_BLUE_TEAM = 2,
			E_PLAYER_TEAM_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:177
		enum ECarSelectType {
			E_CAR_SELECT_TYPE_NONE = 0,
			E_CAR_SELECT_TYPE_JUNKYARD = 1,
			E_CAR_SELECT_TYPE_ONLINE_EVENT_START = 2,
			E_CAR_SELECT_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:228
		enum EImageGalleryType {
			E_IMAGE_GALLERY_TYPE_START = 0,
			E_IMAGE_GALLERY_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_GALLERY_TYPE_PAYBACK_MUGSHOT = 1,
			E_IMAGE_GALLERY_TYPE_ROAD_RULE_MUGSHOT = 2,
			E_IMAGE_GALLERY_TYPE_VICTORY_MUGSHOT = 3,
			E_IMAGE_GALLERY_TYPE_MUGSHOT = 4,
			E_IMAGE_GALLERY_TYPE_COUNT = 5,
		}

		// BrnGameStateSharedIO.h:259
		enum EFreeburnChallengeSuccess {
			E_FREEBURN_CHALLENGE_SUCCESS_NONE = 0,
			E_FREEBURN_CHALLENGE_SUCCESS_NOT_IN_CHALLENGE = 1,
			E_FREEBURN_CHALLENGE_SUCCESS_CONTRIBUTING = 2,
			E_FREEBURN_CHALLENGE_SUCCESS_DONE = 3,
			E_FREEBURN_CHALLENGE_SUCCESS_COUNT = 4,
		}

		// Declaration
		struct SetUpAllEventStartsInterface {
			// BrnGameStateSharedIO.h:794
			struct EventStart {
			private:
				// BrnGameStateSharedIO.h:826
				Vector3 mPosition;

				// BrnGameStateSharedIO.h:827
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:828
				uint32_t muJunctionID;

				// BrnGameStateSharedIO.h:829
				int32_t miEventID;

				// BrnGameStateSharedIO.h:830
				BrnWorld::ECounty meCounty;

				// BrnGameStateSharedIO.h:831
				uint16_t mu16SectionIndex;

			public:
				// BrnGameStateSharedIO.h:804
				void Construct(uint32_t, int32_t, LightTriggerId, Vector3, BrnWorld::ECounty, uint16_t);

				// BrnGameStateSharedIO.h:807
				uint32_t GetJunctionID() const;

				// BrnGameStateSharedIO.h:810
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:813
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:816
				Vector3 GetPosition() const;

				// BrnGameStateSharedIO.h:819
				BrnWorld::ECounty GetCounty() const;

				// BrnGameStateSharedIO.h:822
				uint16_t GetSectionIndex() const;

			}

		}

		// Declaration
		struct SpecificGameModeEventInterface {
			// BrnGameStateSharedIO.h:872
			struct Event {
			private:
				// BrnGameStateSharedIO.h:898
				LandmarkIndex[16] maLandmarkIndices;

				// BrnGameStateSharedIO.h:899
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:900
				int32_t miNumLandmarks;

				// BrnGameStateSharedIO.h:901
				int32_t miEventID;

			public:
				// BrnGameStateSharedIO.h:880
				void Construct(int32_t, LightTriggerId, LandmarkIndex *, int32_t);

				// BrnGameStateSharedIO.h:883
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:886
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:889
				int32_t GetNumLandmarks() const;

				// BrnGameStateSharedIO.h:893
				LandmarkIndex GetLandmark(int32_t) const;

			}

		}

		// Declaration
		struct FburnChallengeEveryPlayerStatusData {
			// BrnGameStateSharedIO.h:961
			struct CompletedChallenges {
				// BrnGameStateSharedIO.h:963
				CompletedFburnChallengesData::CompletedFburnChallenges mCompletedChallenges;

				// BrnGameStateSharedIO.h:964
				RoadRulesRecvData::NetworkPlayerID mPlayerID;

			}

		}

		// BrnGameStateSharedIO.h:1009
		extern bool IsOnlineFreeBurnLobby(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:1001
		extern bool IsShowtimeGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:174
		const uint32_t KU_MAX_ONLINE_ROUNDS_IN_MODE = 10;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.h:51
		enum EGameModeType {
			E_MODE_NONE = -1,
			E_MODE_OFFLINE_RACE = 0,
			E_MODE_FACE_OFF = 1,
			E_MODE_OFFLINE_SHOWTIME = 2,
			E_MODE_ROAD_RAGE = 3,
			E_MODE_PURSUIT = 4,
			E_MODE_BURNING_ROUTE = 5,
			E_MODE_ELIMINATOR = 6,
			E_MODE_STUNT_ATTACK = 7,
			E_MODE_MARKED_MAN = 8,
			E_MODE_TRAFFIC_ATTACK = 9,
			E_MODE_OFFLINE_COUNT = 10,
			E_MODE_ONLINE_MODE_START = 10,
			E_MODE_ONLINE_RACE = 10,
			E_MODE_ONLINE_ROAD_RAGE = 11,
			E_MODE_ONLINE_FUGITIVE = 12,
			E_MODE_ONLINE_BURNING_HOME_RUN = 13,
			E_MODE_ONLINE_FREE_BURN = 14,
			E_MODE_ONLINE_FREE_BURN_LOBBY = 15,
			E_MODE_ONLINE_SHOWTIME = 16,
			E_MODE_ONLINE_MODE_END = 17,
			E_MODE_COUNT = 17,
		}

		// BrnGameStateSharedIO.h:82
		enum ERoadRageCrashType {
			E_ROADRAGE_CRASHTYPE_NONE = -1,
			E_ROADRAGE_CRASHTYPE_TAKENDOWN = 0,
			E_ROADRAGE_CRASHTYPE_WRECKED = 1,
			E_ROADRAGE_CRASHTYPE_COUNT = 2,
		}

		// BrnGameStateSharedIO.h:93
		enum EGameModeState {
			E_GMS_INVALID = -1,
			E_GMS_COUNTDOWN = 0,
			E_GMS_INTRO = 1,
			E_GMS_IN_PROGRESS = 2,
			E_GMS_OUTRO = 3,
			E_GMS_RESULTS = 4,
			E_GMS_QUIT = 5,
			E_GMS_ONLINE_LOADING = 6,
			E_GMS_ONLINE_SPLASH = 7,
			E_GMS_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:112
		enum EPlayerTeam {
			E_PLAYER_TEAM_START = 0,
			E_PLAYER_TEAM_NONE = 0,
			E_PLAYER_TEAM_RED_TEAM = 1,
			E_PLAYER_TEAM_BLUE_TEAM = 2,
			E_PLAYER_TEAM_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:123
		enum EBlueTeamFinishType {
			E_BLUE_TEAM_FINISH_TYPE_ELIMINATED = 0,
			E_BLUE_TEAM_FINISH_TYPE_SURVIVED = 1,
			E_BLUE_TEAM_FINISH_TYPE_ESCAPED = 2,
			E_BLUE_TEAM_FINISH_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:145
		enum EPlayerScoringIndex {
			E_PLAYER_SCORING_INDEX_0 = 0,
			E_PLAYER_SCORING_INDEX_1 = 1,
			E_PLAYER_SCORING_INDEX_2 = 2,
			E_PLAYER_SCORING_INDEX_3 = 3,
			E_PLAYER_SCORING_INDEX_4 = 4,
			E_PLAYER_SCORING_INDEX_5 = 5,
			E_PLAYER_SCORING_INDEX_6 = 6,
			E_PLAYER_SCORING_INDEX_7 = 7,
			E_PLAYER_SCORING_INDEX_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:161
		enum EMugshotResponse {
			E_MUGSHOT_RESPONSE_PREPARE_CAPTURE = 0,
			E_MUGSHOT_RESPONSE_CAPTURE = 1,
			E_MUGSHOT_RESPONSE_TAKE = 2,
			E_MUGSHOT_RESPONSE_SHOW = 3,
			E_MUGSHOT_RESPONSE_STOP_MY_MUGSHOT = 4,
			E_MUGSHOT_RESPONSE_STOP_THEIR_MUGSHOT = 5,
			E_MUGSHOT_RESPONSE_COUNT = 6,
		}

		// BrnGameStateSharedIO.h:177
		enum ECarSelectType {
			E_CAR_SELECT_TYPE_NONE = 0,
			E_CAR_SELECT_TYPE_JUNKYARD = 1,
			E_CAR_SELECT_TYPE_ONLINE_EVENT_START = 2,
			E_CAR_SELECT_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:228
		enum EImageGalleryType {
			E_IMAGE_GALLERY_TYPE_START = 0,
			E_IMAGE_GALLERY_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_GALLERY_TYPE_PAYBACK_MUGSHOT = 1,
			E_IMAGE_GALLERY_TYPE_ROAD_RULE_MUGSHOT = 2,
			E_IMAGE_GALLERY_TYPE_VICTORY_MUGSHOT = 3,
			E_IMAGE_GALLERY_TYPE_MUGSHOT = 4,
			E_IMAGE_GALLERY_TYPE_COUNT = 5,
		}

		// BrnGameStateSharedIO.h:243
		enum EImageType {
			E_IMAGE_TYPE_START = 0,
			E_IMAGE_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_TYPE_MUGSHOT = 1,
			E_IMAGE_TYPE_PAYBACK_MUGSHOT = 2,
			E_IMAGE_TYPE_ROAD_RULE_TIME_MUGSHOT = 3,
			E_IMAGE_TYPE_ROAD_RULE_CRASH_MUGSHOT = 4,
			E_IMAGE_TYPE_VICTORY_MUGSHOT = 5,
			E_IMAGE_TYPE_COUNT = 6,
		}

		// BrnGameStateSharedIO.h:259
		enum EFreeburnChallengeSuccess {
			E_FREEBURN_CHALLENGE_SUCCESS_NONE = 0,
			E_FREEBURN_CHALLENGE_SUCCESS_NOT_IN_CHALLENGE = 1,
			E_FREEBURN_CHALLENGE_SUCCESS_CONTRIBUTING = 2,
			E_FREEBURN_CHALLENGE_SUCCESS_DONE = 3,
			E_FREEBURN_CHALLENGE_SUCCESS_COUNT = 4,
		}

		// Declaration
		struct GameModeOutputInterface {
			// BrnGameStateSharedIO.h:599
			struct State {
			private:
				// BrnGameStateSharedIO.h:620
				BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

				// BrnGameStateSharedIO.h:621
				BrnGameState::GameStateModuleIO::EGameModeState meGameModeState;

			public:
				// BrnGameStateSharedIO.h:603
				void Construct();

				// BrnGameStateSharedIO.h:606
				BrnGameState::GameStateModuleIO::EGameModeType GetGameModeType() const;

				// BrnGameStateSharedIO.h:609
				BrnGameState::GameStateModuleIO::EGameModeState GetGameModeState() const;

				// BrnGameStateSharedIO.h:613
				void SetGameModeType(BrnGameState::GameStateModuleIO::EGameModeType);

				// BrnGameStateSharedIO.h:617
				void SetGameModeState(BrnGameState::GameStateModuleIO::EGameModeState);

			}

		}

		// Declaration
		struct SetUpAllEventStartsInterface {
			// BrnGameStateSharedIO.h:794
			struct EventStart {
			private:
				// BrnGameStateSharedIO.h:826
				Vector3 mPosition;

				// BrnGameStateSharedIO.h:827
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:828
				uint32_t muJunctionID;

				// BrnGameStateSharedIO.h:829
				int32_t miEventID;

				// BrnGameStateSharedIO.h:830
				BrnWorld::ECounty meCounty;

				// BrnGameStateSharedIO.h:831
				uint16_t mu16SectionIndex;

			public:
				// BrnGameStateSharedIO.h:804
				void Construct(uint32_t, int32_t, LightTriggerId, Vector3, BrnWorld::ECounty, uint16_t);

				// BrnGameStateSharedIO.h:807
				uint32_t GetJunctionID() const;

				// BrnGameStateSharedIO.h:810
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:813
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:816
				Vector3 GetPosition() const;

				// BrnGameStateSharedIO.h:819
				BrnWorld::ECounty GetCounty() const;

				// BrnGameStateSharedIO.h:822
				uint16_t GetSectionIndex() const;

			}

		}

		// Declaration
		struct SpecificGameModeEventInterface {
			// BrnGameStateSharedIO.h:872
			struct Event {
			private:
				// BrnGameStateSharedIO.h:898
				LandmarkIndex[16] maLandmarkIndices;

				// BrnGameStateSharedIO.h:899
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:900
				int32_t miNumLandmarks;

				// BrnGameStateSharedIO.h:901
				int32_t miEventID;

			public:
				// BrnGameStateSharedIO.h:880
				void Construct(int32_t, LightTriggerId, LandmarkIndex *, int32_t);

				// BrnGameStateSharedIO.h:883
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:886
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:889
				int32_t GetNumLandmarks() const;

				// BrnGameStateSharedIO.h:893
				LandmarkIndex GetLandmark(int32_t) const;

			}

		}

		// Declaration
		struct FburnChallengeEveryPlayerStatusData {
			// BrnGameStateSharedIO.h:961
			struct CompletedChallenges {
				// BrnGameStateSharedIO.h:963
				CompletedFburnChallengesData::CompletedFburnChallenges mCompletedChallenges;

				// BrnGameStateSharedIO.h:964
				GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

			}

		}

		// BrnGameStateSharedIO.h:1009
		extern bool IsOnlineFreeBurnLobby(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:1001
		extern bool IsShowtimeGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:174
		const uint32_t KU_MAX_ONLINE_ROUNDS_IN_MODE = 10;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.h:51
		enum EGameModeType {
			E_MODE_NONE = -1,
			E_MODE_OFFLINE_RACE = 0,
			E_MODE_FACE_OFF = 1,
			E_MODE_OFFLINE_SHOWTIME = 2,
			E_MODE_ROAD_RAGE = 3,
			E_MODE_PURSUIT = 4,
			E_MODE_BURNING_ROUTE = 5,
			E_MODE_ELIMINATOR = 6,
			E_MODE_STUNT_ATTACK = 7,
			E_MODE_MARKED_MAN = 8,
			E_MODE_TRAFFIC_ATTACK = 9,
			E_MODE_OFFLINE_COUNT = 10,
			E_MODE_ONLINE_MODE_START = 10,
			E_MODE_ONLINE_RACE = 10,
			E_MODE_ONLINE_ROAD_RAGE = 11,
			E_MODE_ONLINE_FUGITIVE = 12,
			E_MODE_ONLINE_BURNING_HOME_RUN = 13,
			E_MODE_ONLINE_FREE_BURN = 14,
			E_MODE_ONLINE_FREE_BURN_LOBBY = 15,
			E_MODE_ONLINE_SHOWTIME = 16,
			E_MODE_ONLINE_MODE_END = 17,
			E_MODE_COUNT = 17,
		}

		// BrnGameStateSharedIO.h:93
		enum EGameModeState {
			E_GMS_INVALID = -1,
			E_GMS_COUNTDOWN = 0,
			E_GMS_INTRO = 1,
			E_GMS_IN_PROGRESS = 2,
			E_GMS_OUTRO = 3,
			E_GMS_RESULTS = 4,
			E_GMS_QUIT = 5,
			E_GMS_ONLINE_LOADING = 6,
			E_GMS_ONLINE_SPLASH = 7,
			E_GMS_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:112
		enum EPlayerTeam {
			E_PLAYER_TEAM_START = 0,
			E_PLAYER_TEAM_NONE = 0,
			E_PLAYER_TEAM_RED_TEAM = 1,
			E_PLAYER_TEAM_BLUE_TEAM = 2,
			E_PLAYER_TEAM_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:123
		enum EBlueTeamFinishType {
			E_BLUE_TEAM_FINISH_TYPE_ELIMINATED = 0,
			E_BLUE_TEAM_FINISH_TYPE_SURVIVED = 1,
			E_BLUE_TEAM_FINISH_TYPE_ESCAPED = 2,
			E_BLUE_TEAM_FINISH_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:145
		enum EPlayerScoringIndex {
			E_PLAYER_SCORING_INDEX_0 = 0,
			E_PLAYER_SCORING_INDEX_1 = 1,
			E_PLAYER_SCORING_INDEX_2 = 2,
			E_PLAYER_SCORING_INDEX_3 = 3,
			E_PLAYER_SCORING_INDEX_4 = 4,
			E_PLAYER_SCORING_INDEX_5 = 5,
			E_PLAYER_SCORING_INDEX_6 = 6,
			E_PLAYER_SCORING_INDEX_7 = 7,
			E_PLAYER_SCORING_INDEX_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:177
		enum ECarSelectType {
			E_CAR_SELECT_TYPE_NONE = 0,
			E_CAR_SELECT_TYPE_JUNKYARD = 1,
			E_CAR_SELECT_TYPE_ONLINE_EVENT_START = 2,
			E_CAR_SELECT_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:188
		enum ECarSelectState {
			E_CAR_SELECT_STATE_MODEL = 0,
			E_CAR_SELECT_STATE_LIVERY = 1,
			E_CAR_SELECT_STATE_WAIT_FOR_HOST = 2,
			E_CAR_SELECT_STATE_ACCEPT_CAR = 3,
			E_CAR_SELECT_STATE_EXIT = 4,
			E_CAR_SELECT_STATE_COUNT = 5,
		}

		// BrnGameStateSharedIO.h:211
		enum EImageGalleryRequest {
			E_IMAGE_GALLERY_REQUEST_NEW_IMAGE_TYPE = 0,
			E_IMAGE_GALLERY_REQUEST_NEW_IMAGES = 1,
			E_IMAGE_GALLERY_REQUEST_SCROLL_RIGHT = 2,
			E_IMAGE_GALLERY_REQUEST_SCROLL_LEFT = 3,
			E_IMAGE_GALLERY_REQUEST_ASK_DELETE = 4,
			E_IMAGE_GALLERY_REQUEST_DELETE = 5,
			E_IMAGE_GALLERY_REQUEST_LOCK = 6,
			E_IMAGE_GALLERY_REQUEST_EXPORT = 7,
			E_IMAGE_GALLERY_REQUEST_SHOW_GAMERCARD = 8,
			E_IMAGE_GALLERY_REQUEST_COUNT = 9,
		}

		// BrnGameStateSharedIO.h:228
		enum EImageGalleryType {
			E_IMAGE_GALLERY_TYPE_START = 0,
			E_IMAGE_GALLERY_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_GALLERY_TYPE_PAYBACK_MUGSHOT = 1,
			E_IMAGE_GALLERY_TYPE_ROAD_RULE_MUGSHOT = 2,
			E_IMAGE_GALLERY_TYPE_VICTORY_MUGSHOT = 3,
			E_IMAGE_GALLERY_TYPE_MUGSHOT = 4,
			E_IMAGE_GALLERY_TYPE_COUNT = 5,
		}

		// BrnGameStateSharedIO.h:259
		enum EFreeburnChallengeSuccess {
			E_FREEBURN_CHALLENGE_SUCCESS_NONE = 0,
			E_FREEBURN_CHALLENGE_SUCCESS_NOT_IN_CHALLENGE = 1,
			E_FREEBURN_CHALLENGE_SUCCESS_CONTRIBUTING = 2,
			E_FREEBURN_CHALLENGE_SUCCESS_DONE = 3,
			E_FREEBURN_CHALLENGE_SUCCESS_COUNT = 4,
		}

		// Declaration
		struct GameModeOutputInterface {
			// BrnGameStateSharedIO.h:599
			struct State {
			private:
				// BrnGameStateSharedIO.h:620
				BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

				// BrnGameStateSharedIO.h:621
				BrnGameState::GameStateModuleIO::EGameModeState meGameModeState;

			public:
				// BrnGameStateSharedIO.h:603
				void Construct();

				// BrnGameStateSharedIO.h:606
				BrnGameState::GameStateModuleIO::EGameModeType GetGameModeType() const;

				// BrnGameStateSharedIO.h:609
				BrnGameState::GameStateModuleIO::EGameModeState GetGameModeState() const;

				// BrnGameStateSharedIO.h:613
				void SetGameModeType(BrnGameState::GameStateModuleIO::EGameModeType);

				// BrnGameStateSharedIO.h:617
				void SetGameModeState(BrnGameState::GameStateModuleIO::EGameModeState);

			}

		}

		// Declaration
		struct SetUpAllEventStartsInterface {
			// BrnGameStateSharedIO.h:794
			struct EventStart {
			private:
				// BrnGameStateSharedIO.h:826
				Vector3 mPosition;

				// BrnGameStateSharedIO.h:827
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:828
				uint32_t muJunctionID;

				// BrnGameStateSharedIO.h:829
				int32_t miEventID;

				// BrnGameStateSharedIO.h:830
				BrnWorld::ECounty meCounty;

				// BrnGameStateSharedIO.h:831
				uint16_t mu16SectionIndex;

			public:
				// BrnGameStateSharedIO.h:804
				void Construct(uint32_t, int32_t, LightTriggerId, Vector3, BrnWorld::ECounty, uint16_t);

				// BrnGameStateSharedIO.h:807
				uint32_t GetJunctionID() const;

				// BrnGameStateSharedIO.h:810
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:813
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:816
				Vector3 GetPosition() const;

				// BrnGameStateSharedIO.h:819
				BrnWorld::ECounty GetCounty() const;

				// BrnGameStateSharedIO.h:822
				uint16_t GetSectionIndex() const;

			}

		}

		// Declaration
		struct SpecificGameModeEventInterface {
			// BrnGameStateSharedIO.h:872
			struct Event {
			private:
				// BrnGameStateSharedIO.h:898
				LandmarkIndex[16] maLandmarkIndices;

				// BrnGameStateSharedIO.h:899
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:900
				int32_t miNumLandmarks;

				// BrnGameStateSharedIO.h:901
				int32_t miEventID;

			public:
				// BrnGameStateSharedIO.h:880
				void Construct(int32_t, LightTriggerId, LandmarkIndex *, int32_t);

				// BrnGameStateSharedIO.h:883
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:886
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:889
				int32_t GetNumLandmarks() const;

				// BrnGameStateSharedIO.h:893
				LandmarkIndex GetLandmark(int32_t) const;

			}

		}

		// Declaration
		struct FburnChallengeEveryPlayerStatusData {
			// BrnGameStateSharedIO.h:961
			struct CompletedChallenges {
				// BrnGameStateSharedIO.h:963
				CompletedFburnChallengesData::CompletedFburnChallenges mCompletedChallenges;

				// BrnGameStateSharedIO.h:964
				GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

			}

		}

		// BrnGameStateSharedIO.h:1009
		extern bool IsOnlineFreeBurnLobby(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:1001
		extern bool IsShowtimeGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:174
		const uint32_t KU_MAX_ONLINE_ROUNDS_IN_MODE = 10;

		// BrnGameStateSharedIO.h:973
		extern CgsID[] KI_SAVE_GAME_CHALLENGE_INDEX_ROAD_ID_MAPPING;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.h:51
		enum EGameModeType {
			E_MODE_NONE = -1,
			E_MODE_OFFLINE_RACE = 0,
			E_MODE_FACE_OFF = 1,
			E_MODE_OFFLINE_SHOWTIME = 2,
			E_MODE_ROAD_RAGE = 3,
			E_MODE_PURSUIT = 4,
			E_MODE_BURNING_ROUTE = 5,
			E_MODE_ELIMINATOR = 6,
			E_MODE_STUNT_ATTACK = 7,
			E_MODE_MARKED_MAN = 8,
			E_MODE_TRAFFIC_ATTACK = 9,
			E_MODE_OFFLINE_COUNT = 10,
			E_MODE_ONLINE_MODE_START = 10,
			E_MODE_ONLINE_RACE = 10,
			E_MODE_ONLINE_ROAD_RAGE = 11,
			E_MODE_ONLINE_FUGITIVE = 12,
			E_MODE_ONLINE_BURNING_HOME_RUN = 13,
			E_MODE_ONLINE_FREE_BURN = 14,
			E_MODE_ONLINE_FREE_BURN_LOBBY = 15,
			E_MODE_ONLINE_SHOWTIME = 16,
			E_MODE_ONLINE_MODE_END = 17,
			E_MODE_COUNT = 17,
		}

		// BrnGameStateSharedIO.h:112
		enum EPlayerTeam {
			E_PLAYER_TEAM_START = 0,
			E_PLAYER_TEAM_NONE = 0,
			E_PLAYER_TEAM_RED_TEAM = 1,
			E_PLAYER_TEAM_BLUE_TEAM = 2,
			E_PLAYER_TEAM_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:177
		enum ECarSelectType {
			E_CAR_SELECT_TYPE_NONE = 0,
			E_CAR_SELECT_TYPE_JUNKYARD = 1,
			E_CAR_SELECT_TYPE_ONLINE_EVENT_START = 2,
			E_CAR_SELECT_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:228
		enum EImageGalleryType {
			E_IMAGE_GALLERY_TYPE_START = 0,
			E_IMAGE_GALLERY_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_GALLERY_TYPE_PAYBACK_MUGSHOT = 1,
			E_IMAGE_GALLERY_TYPE_ROAD_RULE_MUGSHOT = 2,
			E_IMAGE_GALLERY_TYPE_VICTORY_MUGSHOT = 3,
			E_IMAGE_GALLERY_TYPE_MUGSHOT = 4,
			E_IMAGE_GALLERY_TYPE_COUNT = 5,
		}

		// BrnGameStateSharedIO.h:259
		enum EFreeburnChallengeSuccess {
			E_FREEBURN_CHALLENGE_SUCCESS_NONE = 0,
			E_FREEBURN_CHALLENGE_SUCCESS_NOT_IN_CHALLENGE = 1,
			E_FREEBURN_CHALLENGE_SUCCESS_CONTRIBUTING = 2,
			E_FREEBURN_CHALLENGE_SUCCESS_DONE = 3,
			E_FREEBURN_CHALLENGE_SUCCESS_COUNT = 4,
		}

		// Declaration
		struct SetUpAllEventStartsInterface {
			// BrnGameStateSharedIO.h:794
			struct EventStart {
			private:
				// BrnGameStateSharedIO.h:826
				Vector3 mPosition;

				// BrnGameStateSharedIO.h:827
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:828
				uint32_t muJunctionID;

				// BrnGameStateSharedIO.h:829
				int32_t miEventID;

				// BrnGameStateSharedIO.h:830
				BrnWorld::ECounty meCounty;

				// BrnGameStateSharedIO.h:831
				uint16_t mu16SectionIndex;

			public:
				// BrnGameStateSharedIO.h:804
				void Construct(uint32_t, int32_t, LightTriggerId, Vector3, BrnWorld::ECounty, uint16_t);

				// BrnGameStateSharedIO.h:807
				uint32_t GetJunctionID() const;

				// BrnGameStateSharedIO.h:810
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:813
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:816
				Vector3 GetPosition() const;

				// BrnGameStateSharedIO.h:819
				BrnWorld::ECounty GetCounty() const;

				// BrnGameStateSharedIO.h:822
				uint16_t GetSectionIndex() const;

			}

		}

		// Declaration
		struct SpecificGameModeEventInterface {
			// BrnGameStateSharedIO.h:872
			struct Event {
			private:
				// BrnGameStateSharedIO.h:898
				LandmarkIndex[16] maLandmarkIndices;

				// BrnGameStateSharedIO.h:899
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:900
				int32_t miNumLandmarks;

				// BrnGameStateSharedIO.h:901
				int32_t miEventID;

			public:
				// BrnGameStateSharedIO.h:880
				void Construct(int32_t, LightTriggerId, LandmarkIndex *, int32_t);

				// BrnGameStateSharedIO.h:883
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:886
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:889
				int32_t GetNumLandmarks() const;

				// BrnGameStateSharedIO.h:893
				LandmarkIndex GetLandmark(int32_t) const;

			}

		}

		// Declaration
		struct FburnChallengeEveryPlayerStatusData {
			// BrnGameStateSharedIO.h:961
			struct CompletedChallenges {
				// BrnGameStateSharedIO.h:963
				CompletedFburnChallengesData::CompletedFburnChallenges mCompletedChallenges;

				// BrnGameStateSharedIO.h:964
				GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

			}

		}

		// BrnGameStateSharedIO.h:174
		const uint32_t KU_MAX_ONLINE_ROUNDS_IN_MODE = 10;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.h:51
		enum EGameModeType {
			E_MODE_NONE = -1,
			E_MODE_OFFLINE_RACE = 0,
			E_MODE_FACE_OFF = 1,
			E_MODE_OFFLINE_SHOWTIME = 2,
			E_MODE_ROAD_RAGE = 3,
			E_MODE_PURSUIT = 4,
			E_MODE_BURNING_ROUTE = 5,
			E_MODE_ELIMINATOR = 6,
			E_MODE_STUNT_ATTACK = 7,
			E_MODE_MARKED_MAN = 8,
			E_MODE_TRAFFIC_ATTACK = 9,
			E_MODE_OFFLINE_COUNT = 10,
			E_MODE_ONLINE_MODE_START = 10,
			E_MODE_ONLINE_RACE = 10,
			E_MODE_ONLINE_ROAD_RAGE = 11,
			E_MODE_ONLINE_FUGITIVE = 12,
			E_MODE_ONLINE_BURNING_HOME_RUN = 13,
			E_MODE_ONLINE_FREE_BURN = 14,
			E_MODE_ONLINE_FREE_BURN_LOBBY = 15,
			E_MODE_ONLINE_SHOWTIME = 16,
			E_MODE_ONLINE_MODE_END = 17,
			E_MODE_COUNT = 17,
		}

		// BrnGameStateSharedIO.h:112
		enum EPlayerTeam {
			E_PLAYER_TEAM_START = 0,
			E_PLAYER_TEAM_NONE = 0,
			E_PLAYER_TEAM_RED_TEAM = 1,
			E_PLAYER_TEAM_BLUE_TEAM = 2,
			E_PLAYER_TEAM_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:177
		enum ECarSelectType {
			E_CAR_SELECT_TYPE_NONE = 0,
			E_CAR_SELECT_TYPE_JUNKYARD = 1,
			E_CAR_SELECT_TYPE_ONLINE_EVENT_START = 2,
			E_CAR_SELECT_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:188
		enum ECarSelectState {
			E_CAR_SELECT_STATE_MODEL = 0,
			E_CAR_SELECT_STATE_LIVERY = 1,
			E_CAR_SELECT_STATE_WAIT_FOR_HOST = 2,
			E_CAR_SELECT_STATE_ACCEPT_CAR = 3,
			E_CAR_SELECT_STATE_EXIT = 4,
			E_CAR_SELECT_STATE_COUNT = 5,
		}

		// BrnGameStateSharedIO.h:228
		enum EImageGalleryType {
			E_IMAGE_GALLERY_TYPE_START = 0,
			E_IMAGE_GALLERY_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_GALLERY_TYPE_PAYBACK_MUGSHOT = 1,
			E_IMAGE_GALLERY_TYPE_ROAD_RULE_MUGSHOT = 2,
			E_IMAGE_GALLERY_TYPE_VICTORY_MUGSHOT = 3,
			E_IMAGE_GALLERY_TYPE_MUGSHOT = 4,
			E_IMAGE_GALLERY_TYPE_COUNT = 5,
		}

		// BrnGameStateSharedIO.h:259
		enum EFreeburnChallengeSuccess {
			E_FREEBURN_CHALLENGE_SUCCESS_NONE = 0,
			E_FREEBURN_CHALLENGE_SUCCESS_NOT_IN_CHALLENGE = 1,
			E_FREEBURN_CHALLENGE_SUCCESS_CONTRIBUTING = 2,
			E_FREEBURN_CHALLENGE_SUCCESS_DONE = 3,
			E_FREEBURN_CHALLENGE_SUCCESS_COUNT = 4,
		}

		// Declaration
		struct SetUpAllEventStartsInterface {
			// BrnGameStateSharedIO.h:794
			struct EventStart {
			private:
				// BrnGameStateSharedIO.h:826
				Vector3 mPosition;

				// BrnGameStateSharedIO.h:827
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:828
				uint32_t muJunctionID;

				// BrnGameStateSharedIO.h:829
				int32_t miEventID;

				// BrnGameStateSharedIO.h:830
				BrnWorld::ECounty meCounty;

				// BrnGameStateSharedIO.h:831
				uint16_t mu16SectionIndex;

			public:
				// BrnGameStateSharedIO.h:804
				void Construct(uint32_t, int32_t, LightTriggerId, Vector3, BrnWorld::ECounty, uint16_t);

				// BrnGameStateSharedIO.h:807
				uint32_t GetJunctionID() const;

				// BrnGameStateSharedIO.h:810
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:813
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:816
				Vector3 GetPosition() const;

				// BrnGameStateSharedIO.h:819
				BrnWorld::ECounty GetCounty() const;

				// BrnGameStateSharedIO.h:822
				uint16_t GetSectionIndex() const;

			}

		}

		// Declaration
		struct SpecificGameModeEventInterface {
			// BrnGameStateSharedIO.h:872
			struct Event {
			private:
				// BrnGameStateSharedIO.h:898
				LandmarkIndex[16] maLandmarkIndices;

				// BrnGameStateSharedIO.h:899
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:900
				int32_t miNumLandmarks;

				// BrnGameStateSharedIO.h:901
				int32_t miEventID;

			public:
				// BrnGameStateSharedIO.h:880
				void Construct(int32_t, LightTriggerId, LandmarkIndex *, int32_t);

				// BrnGameStateSharedIO.h:883
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:886
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:889
				int32_t GetNumLandmarks() const;

				// BrnGameStateSharedIO.h:893
				LandmarkIndex GetLandmark(int32_t) const;

			}

		}

		// Declaration
		struct FburnChallengeEveryPlayerStatusData {
			// BrnGameStateSharedIO.h:961
			struct CompletedChallenges {
				// BrnGameStateSharedIO.h:963
				CompletedFburnChallengesData::CompletedFburnChallenges mCompletedChallenges;

				// BrnGameStateSharedIO.h:964
				RoadRulesRecvData::NetworkPlayerID mPlayerID;

			}

		}

		// BrnGameStateSharedIO.h:1009
		extern bool IsOnlineFreeBurnLobby(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:1001
		extern bool IsShowtimeGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:174
		const uint32_t KU_MAX_ONLINE_ROUNDS_IN_MODE = 10;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.h:51
		enum EGameModeType {
			E_MODE_NONE = -1,
			E_MODE_OFFLINE_RACE = 0,
			E_MODE_FACE_OFF = 1,
			E_MODE_OFFLINE_SHOWTIME = 2,
			E_MODE_ROAD_RAGE = 3,
			E_MODE_PURSUIT = 4,
			E_MODE_BURNING_ROUTE = 5,
			E_MODE_ELIMINATOR = 6,
			E_MODE_STUNT_ATTACK = 7,
			E_MODE_MARKED_MAN = 8,
			E_MODE_TRAFFIC_ATTACK = 9,
			E_MODE_OFFLINE_COUNT = 10,
			E_MODE_ONLINE_MODE_START = 10,
			E_MODE_ONLINE_RACE = 10,
			E_MODE_ONLINE_ROAD_RAGE = 11,
			E_MODE_ONLINE_FUGITIVE = 12,
			E_MODE_ONLINE_BURNING_HOME_RUN = 13,
			E_MODE_ONLINE_FREE_BURN = 14,
			E_MODE_ONLINE_FREE_BURN_LOBBY = 15,
			E_MODE_ONLINE_SHOWTIME = 16,
			E_MODE_ONLINE_MODE_END = 17,
			E_MODE_COUNT = 17,
		}

		// BrnGameStateSharedIO.h:82
		enum ERoadRageCrashType {
			E_ROADRAGE_CRASHTYPE_NONE = -1,
			E_ROADRAGE_CRASHTYPE_TAKENDOWN = 0,
			E_ROADRAGE_CRASHTYPE_WRECKED = 1,
			E_ROADRAGE_CRASHTYPE_COUNT = 2,
		}

		// BrnGameStateSharedIO.h:93
		enum EGameModeState {
			E_GMS_INVALID = -1,
			E_GMS_COUNTDOWN = 0,
			E_GMS_INTRO = 1,
			E_GMS_IN_PROGRESS = 2,
			E_GMS_OUTRO = 3,
			E_GMS_RESULTS = 4,
			E_GMS_QUIT = 5,
			E_GMS_ONLINE_LOADING = 6,
			E_GMS_ONLINE_SPLASH = 7,
			E_GMS_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:112
		enum EPlayerTeam {
			E_PLAYER_TEAM_START = 0,
			E_PLAYER_TEAM_NONE = 0,
			E_PLAYER_TEAM_RED_TEAM = 1,
			E_PLAYER_TEAM_BLUE_TEAM = 2,
			E_PLAYER_TEAM_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:123
		enum EBlueTeamFinishType {
			E_BLUE_TEAM_FINISH_TYPE_ELIMINATED = 0,
			E_BLUE_TEAM_FINISH_TYPE_SURVIVED = 1,
			E_BLUE_TEAM_FINISH_TYPE_ESCAPED = 2,
			E_BLUE_TEAM_FINISH_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:145
		enum EPlayerScoringIndex {
			E_PLAYER_SCORING_INDEX_0 = 0,
			E_PLAYER_SCORING_INDEX_1 = 1,
			E_PLAYER_SCORING_INDEX_2 = 2,
			E_PLAYER_SCORING_INDEX_3 = 3,
			E_PLAYER_SCORING_INDEX_4 = 4,
			E_PLAYER_SCORING_INDEX_5 = 5,
			E_PLAYER_SCORING_INDEX_6 = 6,
			E_PLAYER_SCORING_INDEX_7 = 7,
			E_PLAYER_SCORING_INDEX_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:161
		enum EMugshotResponse {
			E_MUGSHOT_RESPONSE_PREPARE_CAPTURE = 0,
			E_MUGSHOT_RESPONSE_CAPTURE = 1,
			E_MUGSHOT_RESPONSE_TAKE = 2,
			E_MUGSHOT_RESPONSE_SHOW = 3,
			E_MUGSHOT_RESPONSE_STOP_MY_MUGSHOT = 4,
			E_MUGSHOT_RESPONSE_STOP_THEIR_MUGSHOT = 5,
			E_MUGSHOT_RESPONSE_COUNT = 6,
		}

		// BrnGameStateSharedIO.h:177
		enum ECarSelectType {
			E_CAR_SELECT_TYPE_NONE = 0,
			E_CAR_SELECT_TYPE_JUNKYARD = 1,
			E_CAR_SELECT_TYPE_ONLINE_EVENT_START = 2,
			E_CAR_SELECT_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:188
		enum ECarSelectState {
			E_CAR_SELECT_STATE_MODEL = 0,
			E_CAR_SELECT_STATE_LIVERY = 1,
			E_CAR_SELECT_STATE_WAIT_FOR_HOST = 2,
			E_CAR_SELECT_STATE_ACCEPT_CAR = 3,
			E_CAR_SELECT_STATE_EXIT = 4,
			E_CAR_SELECT_STATE_COUNT = 5,
		}

		// BrnGameStateSharedIO.h:228
		enum EImageGalleryType {
			E_IMAGE_GALLERY_TYPE_START = 0,
			E_IMAGE_GALLERY_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_GALLERY_TYPE_PAYBACK_MUGSHOT = 1,
			E_IMAGE_GALLERY_TYPE_ROAD_RULE_MUGSHOT = 2,
			E_IMAGE_GALLERY_TYPE_VICTORY_MUGSHOT = 3,
			E_IMAGE_GALLERY_TYPE_MUGSHOT = 4,
			E_IMAGE_GALLERY_TYPE_COUNT = 5,
		}

		// BrnGameStateSharedIO.h:243
		enum EImageType {
			E_IMAGE_TYPE_START = 0,
			E_IMAGE_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_TYPE_MUGSHOT = 1,
			E_IMAGE_TYPE_PAYBACK_MUGSHOT = 2,
			E_IMAGE_TYPE_ROAD_RULE_TIME_MUGSHOT = 3,
			E_IMAGE_TYPE_ROAD_RULE_CRASH_MUGSHOT = 4,
			E_IMAGE_TYPE_VICTORY_MUGSHOT = 5,
			E_IMAGE_TYPE_COUNT = 6,
		}

		// BrnGameStateSharedIO.h:259
		enum EFreeburnChallengeSuccess {
			E_FREEBURN_CHALLENGE_SUCCESS_NONE = 0,
			E_FREEBURN_CHALLENGE_SUCCESS_NOT_IN_CHALLENGE = 1,
			E_FREEBURN_CHALLENGE_SUCCESS_CONTRIBUTING = 2,
			E_FREEBURN_CHALLENGE_SUCCESS_DONE = 3,
			E_FREEBURN_CHALLENGE_SUCCESS_COUNT = 4,
		}

		// Declaration
		struct GameModeOutputInterface {
			// BrnGameStateSharedIO.h:599
			struct State {
			private:
				// BrnGameStateSharedIO.h:620
				BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

				// BrnGameStateSharedIO.h:621
				BrnGameState::GameStateModuleIO::EGameModeState meGameModeState;

			public:
				// BrnGameStateSharedIO.h:603
				void Construct();

				// BrnGameStateSharedIO.h:606
				BrnGameState::GameStateModuleIO::EGameModeType GetGameModeType() const;

				// BrnGameStateSharedIO.h:609
				BrnGameState::GameStateModuleIO::EGameModeState GetGameModeState() const;

				// BrnGameStateSharedIO.h:613
				void SetGameModeType(BrnGameState::GameStateModuleIO::EGameModeType);

				// BrnGameStateSharedIO.h:617
				void SetGameModeState(BrnGameState::GameStateModuleIO::EGameModeState);

			}

		}

		// Declaration
		struct SetUpAllEventStartsInterface {
			// BrnGameStateSharedIO.h:794
			struct EventStart {
			private:
				// BrnGameStateSharedIO.h:826
				Vector3 mPosition;

				// BrnGameStateSharedIO.h:827
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:828
				uint32_t muJunctionID;

				// BrnGameStateSharedIO.h:829
				int32_t miEventID;

				// BrnGameStateSharedIO.h:830
				BrnWorld::ECounty meCounty;

				// BrnGameStateSharedIO.h:831
				uint16_t mu16SectionIndex;

			public:
				// BrnGameStateSharedIO.h:804
				void Construct(uint32_t, int32_t, LightTriggerId, Vector3, BrnWorld::ECounty, uint16_t);

				// BrnGameStateSharedIO.h:807
				uint32_t GetJunctionID() const;

				// BrnGameStateSharedIO.h:810
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:813
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:816
				Vector3 GetPosition() const;

				// BrnGameStateSharedIO.h:819
				BrnWorld::ECounty GetCounty() const;

				// BrnGameStateSharedIO.h:822
				uint16_t GetSectionIndex() const;

			}

		}

		// Declaration
		struct SpecificGameModeEventInterface {
			// BrnGameStateSharedIO.h:872
			struct Event {
			private:
				// BrnGameStateSharedIO.h:898
				LandmarkIndex[16] maLandmarkIndices;

				// BrnGameStateSharedIO.h:899
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:900
				int32_t miNumLandmarks;

				// BrnGameStateSharedIO.h:901
				int32_t miEventID;

			public:
				// BrnGameStateSharedIO.h:880
				void Construct(int32_t, LightTriggerId, LandmarkIndex *, int32_t);

				// BrnGameStateSharedIO.h:883
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:886
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:889
				int32_t GetNumLandmarks() const;

				// BrnGameStateSharedIO.h:893
				LandmarkIndex GetLandmark(int32_t) const;

			}

		}

		// Declaration
		struct FburnChallengeEveryPlayerStatusData {
			// BrnGameStateSharedIO.h:961
			struct CompletedChallenges {
				// BrnGameStateSharedIO.h:963
				CompletedFburnChallengesData::CompletedFburnChallenges mCompletedChallenges;

				// BrnGameStateSharedIO.h:964
				RoadRulesRecvData::NetworkPlayerID mPlayerID;

			}

		}

		// BrnGameStateSharedIO.h:1001
		extern bool IsShowtimeGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:1009
		extern bool IsOnlineFreeBurnLobby(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:174
		const uint32_t KU_MAX_ONLINE_ROUNDS_IN_MODE = 10;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.h:51
		enum EGameModeType {
			E_MODE_NONE = -1,
			E_MODE_OFFLINE_RACE = 0,
			E_MODE_FACE_OFF = 1,
			E_MODE_OFFLINE_SHOWTIME = 2,
			E_MODE_ROAD_RAGE = 3,
			E_MODE_PURSUIT = 4,
			E_MODE_BURNING_ROUTE = 5,
			E_MODE_ELIMINATOR = 6,
			E_MODE_STUNT_ATTACK = 7,
			E_MODE_MARKED_MAN = 8,
			E_MODE_TRAFFIC_ATTACK = 9,
			E_MODE_OFFLINE_COUNT = 10,
			E_MODE_ONLINE_MODE_START = 10,
			E_MODE_ONLINE_RACE = 10,
			E_MODE_ONLINE_ROAD_RAGE = 11,
			E_MODE_ONLINE_FUGITIVE = 12,
			E_MODE_ONLINE_BURNING_HOME_RUN = 13,
			E_MODE_ONLINE_FREE_BURN = 14,
			E_MODE_ONLINE_FREE_BURN_LOBBY = 15,
			E_MODE_ONLINE_SHOWTIME = 16,
			E_MODE_ONLINE_MODE_END = 17,
			E_MODE_COUNT = 17,
		}

		// BrnGameStateSharedIO.h:174
		const uint32_t KU_MAX_ONLINE_ROUNDS_IN_MODE = 10;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.h:51
		enum EGameModeType {
			E_MODE_NONE = -1,
			E_MODE_OFFLINE_RACE = 0,
			E_MODE_FACE_OFF = 1,
			E_MODE_OFFLINE_SHOWTIME = 2,
			E_MODE_ROAD_RAGE = 3,
			E_MODE_PURSUIT = 4,
			E_MODE_BURNING_ROUTE = 5,
			E_MODE_ELIMINATOR = 6,
			E_MODE_STUNT_ATTACK = 7,
			E_MODE_MARKED_MAN = 8,
			E_MODE_TRAFFIC_ATTACK = 9,
			E_MODE_OFFLINE_COUNT = 10,
			E_MODE_ONLINE_MODE_START = 10,
			E_MODE_ONLINE_RACE = 10,
			E_MODE_ONLINE_ROAD_RAGE = 11,
			E_MODE_ONLINE_FUGITIVE = 12,
			E_MODE_ONLINE_BURNING_HOME_RUN = 13,
			E_MODE_ONLINE_FREE_BURN = 14,
			E_MODE_ONLINE_FREE_BURN_LOBBY = 15,
			E_MODE_ONLINE_SHOWTIME = 16,
			E_MODE_ONLINE_MODE_END = 17,
			E_MODE_COUNT = 17,
		}

		// BrnGameStateSharedIO.h:82
		enum ERoadRageCrashType {
			E_ROADRAGE_CRASHTYPE_NONE = -1,
			E_ROADRAGE_CRASHTYPE_TAKENDOWN = 0,
			E_ROADRAGE_CRASHTYPE_WRECKED = 1,
			E_ROADRAGE_CRASHTYPE_COUNT = 2,
		}

		// BrnGameStateSharedIO.h:93
		enum EGameModeState {
			E_GMS_INVALID = -1,
			E_GMS_COUNTDOWN = 0,
			E_GMS_INTRO = 1,
			E_GMS_IN_PROGRESS = 2,
			E_GMS_OUTRO = 3,
			E_GMS_RESULTS = 4,
			E_GMS_QUIT = 5,
			E_GMS_ONLINE_LOADING = 6,
			E_GMS_ONLINE_SPLASH = 7,
			E_GMS_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:112
		enum EPlayerTeam {
			E_PLAYER_TEAM_START = 0,
			E_PLAYER_TEAM_NONE = 0,
			E_PLAYER_TEAM_RED_TEAM = 1,
			E_PLAYER_TEAM_BLUE_TEAM = 2,
			E_PLAYER_TEAM_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:123
		enum EBlueTeamFinishType {
			E_BLUE_TEAM_FINISH_TYPE_ELIMINATED = 0,
			E_BLUE_TEAM_FINISH_TYPE_SURVIVED = 1,
			E_BLUE_TEAM_FINISH_TYPE_ESCAPED = 2,
			E_BLUE_TEAM_FINISH_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:145
		enum EPlayerScoringIndex {
			E_PLAYER_SCORING_INDEX_0 = 0,
			E_PLAYER_SCORING_INDEX_1 = 1,
			E_PLAYER_SCORING_INDEX_2 = 2,
			E_PLAYER_SCORING_INDEX_3 = 3,
			E_PLAYER_SCORING_INDEX_4 = 4,
			E_PLAYER_SCORING_INDEX_5 = 5,
			E_PLAYER_SCORING_INDEX_6 = 6,
			E_PLAYER_SCORING_INDEX_7 = 7,
			E_PLAYER_SCORING_INDEX_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:161
		enum EMugshotResponse {
			E_MUGSHOT_RESPONSE_PREPARE_CAPTURE = 0,
			E_MUGSHOT_RESPONSE_CAPTURE = 1,
			E_MUGSHOT_RESPONSE_TAKE = 2,
			E_MUGSHOT_RESPONSE_SHOW = 3,
			E_MUGSHOT_RESPONSE_STOP_MY_MUGSHOT = 4,
			E_MUGSHOT_RESPONSE_STOP_THEIR_MUGSHOT = 5,
			E_MUGSHOT_RESPONSE_COUNT = 6,
		}

		// BrnGameStateSharedIO.h:177
		enum ECarSelectType {
			E_CAR_SELECT_TYPE_NONE = 0,
			E_CAR_SELECT_TYPE_JUNKYARD = 1,
			E_CAR_SELECT_TYPE_ONLINE_EVENT_START = 2,
			E_CAR_SELECT_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:228
		enum EImageGalleryType {
			E_IMAGE_GALLERY_TYPE_START = 0,
			E_IMAGE_GALLERY_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_GALLERY_TYPE_PAYBACK_MUGSHOT = 1,
			E_IMAGE_GALLERY_TYPE_ROAD_RULE_MUGSHOT = 2,
			E_IMAGE_GALLERY_TYPE_VICTORY_MUGSHOT = 3,
			E_IMAGE_GALLERY_TYPE_MUGSHOT = 4,
			E_IMAGE_GALLERY_TYPE_COUNT = 5,
		}

		// BrnGameStateSharedIO.h:243
		enum EImageType {
			E_IMAGE_TYPE_START = 0,
			E_IMAGE_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_TYPE_MUGSHOT = 1,
			E_IMAGE_TYPE_PAYBACK_MUGSHOT = 2,
			E_IMAGE_TYPE_ROAD_RULE_TIME_MUGSHOT = 3,
			E_IMAGE_TYPE_ROAD_RULE_CRASH_MUGSHOT = 4,
			E_IMAGE_TYPE_VICTORY_MUGSHOT = 5,
			E_IMAGE_TYPE_COUNT = 6,
		}

		// BrnGameStateSharedIO.h:259
		enum EFreeburnChallengeSuccess {
			E_FREEBURN_CHALLENGE_SUCCESS_NONE = 0,
			E_FREEBURN_CHALLENGE_SUCCESS_NOT_IN_CHALLENGE = 1,
			E_FREEBURN_CHALLENGE_SUCCESS_CONTRIBUTING = 2,
			E_FREEBURN_CHALLENGE_SUCCESS_DONE = 3,
			E_FREEBURN_CHALLENGE_SUCCESS_COUNT = 4,
		}

		// Declaration
		struct GameModeOutputInterface {
			// BrnGameStateSharedIO.h:599
			struct State {
			private:
				// BrnGameStateSharedIO.h:620
				BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

				// BrnGameStateSharedIO.h:621
				BrnGameState::GameStateModuleIO::EGameModeState meGameModeState;

			public:
				// BrnGameStateSharedIO.h:603
				void Construct();

				// BrnGameStateSharedIO.h:606
				BrnGameState::GameStateModuleIO::EGameModeType GetGameModeType() const;

				// BrnGameStateSharedIO.h:609
				BrnGameState::GameStateModuleIO::EGameModeState GetGameModeState() const;

				// BrnGameStateSharedIO.h:613
				void SetGameModeType(BrnGameState::GameStateModuleIO::EGameModeType);

				// BrnGameStateSharedIO.h:617
				void SetGameModeState(BrnGameState::GameStateModuleIO::EGameModeState);

			}

		}

		// Declaration
		struct SetUpAllEventStartsInterface {
			// BrnGameStateSharedIO.h:794
			struct EventStart {
			private:
				// BrnGameStateSharedIO.h:826
				Vector3 mPosition;

				// BrnGameStateSharedIO.h:827
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:828
				uint32_t muJunctionID;

				// BrnGameStateSharedIO.h:829
				int32_t miEventID;

				// BrnGameStateSharedIO.h:830
				BrnWorld::ECounty meCounty;

				// BrnGameStateSharedIO.h:831
				uint16_t mu16SectionIndex;

			public:
				// BrnGameStateSharedIO.h:804
				void Construct(uint32_t, int32_t, LightTriggerId, Vector3, BrnWorld::ECounty, uint16_t);

				// BrnGameStateSharedIO.h:807
				uint32_t GetJunctionID() const;

				// BrnGameStateSharedIO.h:810
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:813
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:816
				Vector3 GetPosition() const;

				// BrnGameStateSharedIO.h:819
				BrnWorld::ECounty GetCounty() const;

				// BrnGameStateSharedIO.h:822
				uint16_t GetSectionIndex() const;

			}

		}

		// Declaration
		struct SpecificGameModeEventInterface {
			// BrnGameStateSharedIO.h:872
			struct Event {
			private:
				// BrnGameStateSharedIO.h:898
				LandmarkIndex[16] maLandmarkIndices;

				// BrnGameStateSharedIO.h:899
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:900
				int32_t miNumLandmarks;

				// BrnGameStateSharedIO.h:901
				int32_t miEventID;

			public:
				// BrnGameStateSharedIO.h:880
				void Construct(int32_t, LightTriggerId, LandmarkIndex *, int32_t);

				// BrnGameStateSharedIO.h:883
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:886
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:889
				int32_t GetNumLandmarks() const;

				// BrnGameStateSharedIO.h:893
				LandmarkIndex GetLandmark(int32_t) const;

			}

		}

		// Declaration
		struct FburnChallengeEveryPlayerStatusData {
			// BrnGameStateSharedIO.h:961
			struct CompletedChallenges {
				// BrnGameStateSharedIO.h:963
				CompletedFburnChallengesData::CompletedFburnChallenges mCompletedChallenges;

				// BrnGameStateSharedIO.h:964
				RoadRulesRecvData::NetworkPlayerID mPlayerID;

			}

		}

		// BrnGameStateSharedIO.h:174
		const uint32_t KU_MAX_ONLINE_ROUNDS_IN_MODE = 10;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.h:51
		enum EGameModeType {
			E_MODE_NONE = -1,
			E_MODE_OFFLINE_RACE = 0,
			E_MODE_FACE_OFF = 1,
			E_MODE_OFFLINE_SHOWTIME = 2,
			E_MODE_ROAD_RAGE = 3,
			E_MODE_PURSUIT = 4,
			E_MODE_BURNING_ROUTE = 5,
			E_MODE_ELIMINATOR = 6,
			E_MODE_STUNT_ATTACK = 7,
			E_MODE_MARKED_MAN = 8,
			E_MODE_TRAFFIC_ATTACK = 9,
			E_MODE_OFFLINE_COUNT = 10,
			E_MODE_ONLINE_MODE_START = 10,
			E_MODE_ONLINE_RACE = 10,
			E_MODE_ONLINE_ROAD_RAGE = 11,
			E_MODE_ONLINE_FUGITIVE = 12,
			E_MODE_ONLINE_BURNING_HOME_RUN = 13,
			E_MODE_ONLINE_FREE_BURN = 14,
			E_MODE_ONLINE_FREE_BURN_LOBBY = 15,
			E_MODE_ONLINE_SHOWTIME = 16,
			E_MODE_ONLINE_MODE_END = 17,
			E_MODE_COUNT = 17,
		}

		// BrnGameStateSharedIO.h:112
		enum EPlayerTeam {
			E_PLAYER_TEAM_START = 0,
			E_PLAYER_TEAM_NONE = 0,
			E_PLAYER_TEAM_RED_TEAM = 1,
			E_PLAYER_TEAM_BLUE_TEAM = 2,
			E_PLAYER_TEAM_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:145
		enum EPlayerScoringIndex {
			E_PLAYER_SCORING_INDEX_0 = 0,
			E_PLAYER_SCORING_INDEX_1 = 1,
			E_PLAYER_SCORING_INDEX_2 = 2,
			E_PLAYER_SCORING_INDEX_3 = 3,
			E_PLAYER_SCORING_INDEX_4 = 4,
			E_PLAYER_SCORING_INDEX_5 = 5,
			E_PLAYER_SCORING_INDEX_6 = 6,
			E_PLAYER_SCORING_INDEX_7 = 7,
			E_PLAYER_SCORING_INDEX_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:161
		enum EMugshotResponse {
			E_MUGSHOT_RESPONSE_PREPARE_CAPTURE = 0,
			E_MUGSHOT_RESPONSE_CAPTURE = 1,
			E_MUGSHOT_RESPONSE_TAKE = 2,
			E_MUGSHOT_RESPONSE_SHOW = 3,
			E_MUGSHOT_RESPONSE_STOP_MY_MUGSHOT = 4,
			E_MUGSHOT_RESPONSE_STOP_THEIR_MUGSHOT = 5,
			E_MUGSHOT_RESPONSE_COUNT = 6,
		}

		// BrnGameStateSharedIO.h:243
		enum EImageType {
			E_IMAGE_TYPE_START = 0,
			E_IMAGE_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_TYPE_MUGSHOT = 1,
			E_IMAGE_TYPE_PAYBACK_MUGSHOT = 2,
			E_IMAGE_TYPE_ROAD_RULE_TIME_MUGSHOT = 3,
			E_IMAGE_TYPE_ROAD_RULE_CRASH_MUGSHOT = 4,
			E_IMAGE_TYPE_VICTORY_MUGSHOT = 5,
			E_IMAGE_TYPE_COUNT = 6,
		}

		// Declaration
		struct SpecificGameModeEventInterface {
			// BrnGameStateSharedIO.h:872
			struct Event {
			private:
				// BrnGameStateSharedIO.h:898
				LandmarkIndex[16] maLandmarkIndices;

				// BrnGameStateSharedIO.h:899
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:900
				int32_t miNumLandmarks;

				// BrnGameStateSharedIO.h:901
				int32_t miEventID;

			public:
				// BrnGameStateSharedIO.h:880
				void Construct(int32_t, LightTriggerId, LandmarkIndex *, int32_t);

				// BrnGameStateSharedIO.h:883
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:886
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:889
				int32_t GetNumLandmarks() const;

				// BrnGameStateSharedIO.h:893
				LandmarkIndex GetLandmark(int32_t) const;

			}

		}

		// BrnGameStateSharedIO.h:1001
		extern bool IsShowtimeGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:1009
		extern bool IsOnlineFreeBurnLobby(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:1017
		extern bool IsOnlineEvent(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:174
		const uint32_t KU_MAX_ONLINE_ROUNDS_IN_MODE = 10;

		// BrnGameStateSharedIO.h:973
		extern CgsID[] KI_SAVE_GAME_CHALLENGE_INDEX_ROAD_ID_MAPPING;

	}

}

// BrnGameStateSharedIO.h:288
struct BrnGameState::GameStateModuleIO::CompletedFburnChallengesData {
	// BrnGameStateSharedIO.h:290
	AggressiveMoveData::NetworkPlayerID mNetworkPlayerID;

	// BrnGameStateSharedIO.h:277
	typedef FastBitArray<2000> CompletedFburnChallenges;

	// BrnGameStateSharedIO.h:291
	CompletedFburnChallengesData::CompletedFburnChallenges mCompletedFreeburnChallenges;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnServerInterfaceCustomCommands.h:30
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.h:51
		enum EGameModeType {
			E_MODE_NONE = -1,
			E_MODE_OFFLINE_RACE = 0,
			E_MODE_FACE_OFF = 1,
			E_MODE_OFFLINE_SHOWTIME = 2,
			E_MODE_ROAD_RAGE = 3,
			E_MODE_PURSUIT = 4,
			E_MODE_BURNING_ROUTE = 5,
			E_MODE_ELIMINATOR = 6,
			E_MODE_STUNT_ATTACK = 7,
			E_MODE_MARKED_MAN = 8,
			E_MODE_TRAFFIC_ATTACK = 9,
			E_MODE_OFFLINE_COUNT = 10,
			E_MODE_ONLINE_MODE_START = 10,
			E_MODE_ONLINE_RACE = 10,
			E_MODE_ONLINE_ROAD_RAGE = 11,
			E_MODE_ONLINE_FUGITIVE = 12,
			E_MODE_ONLINE_BURNING_HOME_RUN = 13,
			E_MODE_ONLINE_FREE_BURN = 14,
			E_MODE_ONLINE_FREE_BURN_LOBBY = 15,
			E_MODE_ONLINE_SHOWTIME = 16,
			E_MODE_ONLINE_MODE_END = 17,
			E_MODE_COUNT = 17,
		}

		// BrnGameStateSharedIO.h:112
		enum EPlayerTeam {
			E_PLAYER_TEAM_START = 0,
			E_PLAYER_TEAM_NONE = 0,
			E_PLAYER_TEAM_RED_TEAM = 1,
			E_PLAYER_TEAM_BLUE_TEAM = 2,
			E_PLAYER_TEAM_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:145
		enum EPlayerScoringIndex {
			E_PLAYER_SCORING_INDEX_0 = 0,
			E_PLAYER_SCORING_INDEX_1 = 1,
			E_PLAYER_SCORING_INDEX_2 = 2,
			E_PLAYER_SCORING_INDEX_3 = 3,
			E_PLAYER_SCORING_INDEX_4 = 4,
			E_PLAYER_SCORING_INDEX_5 = 5,
			E_PLAYER_SCORING_INDEX_6 = 6,
			E_PLAYER_SCORING_INDEX_7 = 7,
			E_PLAYER_SCORING_INDEX_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:161
		enum EMugshotResponse {
			E_MUGSHOT_RESPONSE_PREPARE_CAPTURE = 0,
			E_MUGSHOT_RESPONSE_CAPTURE = 1,
			E_MUGSHOT_RESPONSE_TAKE = 2,
			E_MUGSHOT_RESPONSE_SHOW = 3,
			E_MUGSHOT_RESPONSE_STOP_MY_MUGSHOT = 4,
			E_MUGSHOT_RESPONSE_STOP_THEIR_MUGSHOT = 5,
			E_MUGSHOT_RESPONSE_COUNT = 6,
		}

		// BrnGameStateSharedIO.h:243
		enum EImageType {
			E_IMAGE_TYPE_START = 0,
			E_IMAGE_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_TYPE_MUGSHOT = 1,
			E_IMAGE_TYPE_PAYBACK_MUGSHOT = 2,
			E_IMAGE_TYPE_ROAD_RULE_TIME_MUGSHOT = 3,
			E_IMAGE_TYPE_ROAD_RULE_CRASH_MUGSHOT = 4,
			E_IMAGE_TYPE_VICTORY_MUGSHOT = 5,
			E_IMAGE_TYPE_COUNT = 6,
		}

		// Declaration
		struct SpecificGameModeEventInterface {
			// BrnGameStateSharedIO.h:872
			struct Event {
			private:
				// BrnGameStateSharedIO.h:898
				LandmarkIndex[16] maLandmarkIndices;

				// BrnGameStateSharedIO.h:899
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:900
				int32_t miNumLandmarks;

				// BrnGameStateSharedIO.h:901
				int32_t miEventID;

			public:
				// BrnGameStateSharedIO.h:880
				void Construct(int32_t, LightTriggerId, LandmarkIndex *, int32_t);

				// BrnGameStateSharedIO.h:883
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:886
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:889
				int32_t GetNumLandmarks() const;

				// BrnGameStateSharedIO.h:893
				LandmarkIndex GetLandmark(int32_t) const;

			}

		}

		// BrnGameStateSharedIO.h:174
		const uint32_t KU_MAX_ONLINE_ROUNDS_IN_MODE = 10;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.h:51
		enum EGameModeType {
			E_MODE_NONE = -1,
			E_MODE_OFFLINE_RACE = 0,
			E_MODE_FACE_OFF = 1,
			E_MODE_OFFLINE_SHOWTIME = 2,
			E_MODE_ROAD_RAGE = 3,
			E_MODE_PURSUIT = 4,
			E_MODE_BURNING_ROUTE = 5,
			E_MODE_ELIMINATOR = 6,
			E_MODE_STUNT_ATTACK = 7,
			E_MODE_MARKED_MAN = 8,
			E_MODE_TRAFFIC_ATTACK = 9,
			E_MODE_OFFLINE_COUNT = 10,
			E_MODE_ONLINE_MODE_START = 10,
			E_MODE_ONLINE_RACE = 10,
			E_MODE_ONLINE_ROAD_RAGE = 11,
			E_MODE_ONLINE_FUGITIVE = 12,
			E_MODE_ONLINE_BURNING_HOME_RUN = 13,
			E_MODE_ONLINE_FREE_BURN = 14,
			E_MODE_ONLINE_FREE_BURN_LOBBY = 15,
			E_MODE_ONLINE_SHOWTIME = 16,
			E_MODE_ONLINE_MODE_END = 17,
			E_MODE_COUNT = 17,
		}

		// BrnGameStateSharedIO.h:82
		enum ERoadRageCrashType {
			E_ROADRAGE_CRASHTYPE_NONE = -1,
			E_ROADRAGE_CRASHTYPE_TAKENDOWN = 0,
			E_ROADRAGE_CRASHTYPE_WRECKED = 1,
			E_ROADRAGE_CRASHTYPE_COUNT = 2,
		}

		// BrnGameStateSharedIO.h:93
		enum EGameModeState {
			E_GMS_INVALID = -1,
			E_GMS_COUNTDOWN = 0,
			E_GMS_INTRO = 1,
			E_GMS_IN_PROGRESS = 2,
			E_GMS_OUTRO = 3,
			E_GMS_RESULTS = 4,
			E_GMS_QUIT = 5,
			E_GMS_ONLINE_LOADING = 6,
			E_GMS_ONLINE_SPLASH = 7,
			E_GMS_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:112
		enum EPlayerTeam {
			E_PLAYER_TEAM_START = 0,
			E_PLAYER_TEAM_NONE = 0,
			E_PLAYER_TEAM_RED_TEAM = 1,
			E_PLAYER_TEAM_BLUE_TEAM = 2,
			E_PLAYER_TEAM_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:123
		enum EBlueTeamFinishType {
			E_BLUE_TEAM_FINISH_TYPE_ELIMINATED = 0,
			E_BLUE_TEAM_FINISH_TYPE_SURVIVED = 1,
			E_BLUE_TEAM_FINISH_TYPE_ESCAPED = 2,
			E_BLUE_TEAM_FINISH_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:145
		enum EPlayerScoringIndex {
			E_PLAYER_SCORING_INDEX_0 = 0,
			E_PLAYER_SCORING_INDEX_1 = 1,
			E_PLAYER_SCORING_INDEX_2 = 2,
			E_PLAYER_SCORING_INDEX_3 = 3,
			E_PLAYER_SCORING_INDEX_4 = 4,
			E_PLAYER_SCORING_INDEX_5 = 5,
			E_PLAYER_SCORING_INDEX_6 = 6,
			E_PLAYER_SCORING_INDEX_7 = 7,
			E_PLAYER_SCORING_INDEX_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:161
		enum EMugshotResponse {
			E_MUGSHOT_RESPONSE_PREPARE_CAPTURE = 0,
			E_MUGSHOT_RESPONSE_CAPTURE = 1,
			E_MUGSHOT_RESPONSE_TAKE = 2,
			E_MUGSHOT_RESPONSE_SHOW = 3,
			E_MUGSHOT_RESPONSE_STOP_MY_MUGSHOT = 4,
			E_MUGSHOT_RESPONSE_STOP_THEIR_MUGSHOT = 5,
			E_MUGSHOT_RESPONSE_COUNT = 6,
		}

		// BrnGameStateSharedIO.h:177
		enum ECarSelectType {
			E_CAR_SELECT_TYPE_NONE = 0,
			E_CAR_SELECT_TYPE_JUNKYARD = 1,
			E_CAR_SELECT_TYPE_ONLINE_EVENT_START = 2,
			E_CAR_SELECT_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:228
		enum EImageGalleryType {
			E_IMAGE_GALLERY_TYPE_START = 0,
			E_IMAGE_GALLERY_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_GALLERY_TYPE_PAYBACK_MUGSHOT = 1,
			E_IMAGE_GALLERY_TYPE_ROAD_RULE_MUGSHOT = 2,
			E_IMAGE_GALLERY_TYPE_VICTORY_MUGSHOT = 3,
			E_IMAGE_GALLERY_TYPE_MUGSHOT = 4,
			E_IMAGE_GALLERY_TYPE_COUNT = 5,
		}

		// BrnGameStateSharedIO.h:243
		enum EImageType {
			E_IMAGE_TYPE_START = 0,
			E_IMAGE_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_TYPE_MUGSHOT = 1,
			E_IMAGE_TYPE_PAYBACK_MUGSHOT = 2,
			E_IMAGE_TYPE_ROAD_RULE_TIME_MUGSHOT = 3,
			E_IMAGE_TYPE_ROAD_RULE_CRASH_MUGSHOT = 4,
			E_IMAGE_TYPE_VICTORY_MUGSHOT = 5,
			E_IMAGE_TYPE_COUNT = 6,
		}

		// BrnGameStateSharedIO.h:259
		enum EFreeburnChallengeSuccess {
			E_FREEBURN_CHALLENGE_SUCCESS_NONE = 0,
			E_FREEBURN_CHALLENGE_SUCCESS_NOT_IN_CHALLENGE = 1,
			E_FREEBURN_CHALLENGE_SUCCESS_CONTRIBUTING = 2,
			E_FREEBURN_CHALLENGE_SUCCESS_DONE = 3,
			E_FREEBURN_CHALLENGE_SUCCESS_COUNT = 4,
		}

		// Declaration
		struct GameModeOutputInterface {
			// BrnGameStateSharedIO.h:599
			struct State {
			private:
				// BrnGameStateSharedIO.h:620
				BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

				// BrnGameStateSharedIO.h:621
				BrnGameState::GameStateModuleIO::EGameModeState meGameModeState;

			public:
				// BrnGameStateSharedIO.h:603
				void Construct();

				// BrnGameStateSharedIO.h:606
				BrnGameState::GameStateModuleIO::EGameModeType GetGameModeType() const;

				// BrnGameStateSharedIO.h:609
				BrnGameState::GameStateModuleIO::EGameModeState GetGameModeState() const;

				// BrnGameStateSharedIO.h:613
				void SetGameModeType(BrnGameState::GameStateModuleIO::EGameModeType);

				// BrnGameStateSharedIO.h:617
				void SetGameModeState(BrnGameState::GameStateModuleIO::EGameModeState);

			}

		}

		// Declaration
		struct SetUpAllEventStartsInterface {
			// BrnGameStateSharedIO.h:794
			struct EventStart {
			private:
				// BrnGameStateSharedIO.h:826
				Vector3 mPosition;

				// BrnGameStateSharedIO.h:827
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:828
				uint32_t muJunctionID;

				// BrnGameStateSharedIO.h:829
				int32_t miEventID;

				// BrnGameStateSharedIO.h:830
				BrnWorld::ECounty meCounty;

				// BrnGameStateSharedIO.h:831
				uint16_t mu16SectionIndex;

			public:
				// BrnGameStateSharedIO.h:804
				void Construct(uint32_t, int32_t, LightTriggerId, Vector3, BrnWorld::ECounty, uint16_t);

				// BrnGameStateSharedIO.h:807
				uint32_t GetJunctionID() const;

				// BrnGameStateSharedIO.h:810
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:813
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:816
				Vector3 GetPosition() const;

				// BrnGameStateSharedIO.h:819
				BrnWorld::ECounty GetCounty() const;

				// BrnGameStateSharedIO.h:822
				uint16_t GetSectionIndex() const;

			}

		}

		// Declaration
		struct SpecificGameModeEventInterface {
			// BrnGameStateSharedIO.h:872
			struct Event {
			private:
				// BrnGameStateSharedIO.h:898
				LandmarkIndex[16] maLandmarkIndices;

				// BrnGameStateSharedIO.h:899
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:900
				int32_t miNumLandmarks;

				// BrnGameStateSharedIO.h:901
				int32_t miEventID;

			public:
				// BrnGameStateSharedIO.h:880
				void Construct(int32_t, LightTriggerId, LandmarkIndex *, int32_t);

				// BrnGameStateSharedIO.h:883
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:886
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:889
				int32_t GetNumLandmarks() const;

				// BrnGameStateSharedIO.h:893
				LandmarkIndex GetLandmark(int32_t) const;

			}

		}

		// Declaration
		struct FburnChallengeEveryPlayerStatusData {
			// BrnGameStateSharedIO.h:961
			struct CompletedChallenges {
				// BrnGameStateSharedIO.h:963
				CompletedFburnChallengesData::CompletedFburnChallenges mCompletedChallenges;

				// BrnGameStateSharedIO.h:964
				RoadRulesRecvData::NetworkPlayerID mPlayerID;

			}

		}

		// BrnGameStateSharedIO.h:158
		extern BrnGameState::GameStateModuleIO::EPlayerScoringIndex operator++(BrnGameState::GameStateModuleIO::EPlayerScoringIndex &, int);

		// BrnGameStateSharedIO.h:174
		const uint32_t KU_MAX_ONLINE_ROUNDS_IN_MODE = 10;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.h:51
		enum EGameModeType {
			E_MODE_NONE = -1,
			E_MODE_OFFLINE_RACE = 0,
			E_MODE_FACE_OFF = 1,
			E_MODE_OFFLINE_SHOWTIME = 2,
			E_MODE_ROAD_RAGE = 3,
			E_MODE_PURSUIT = 4,
			E_MODE_BURNING_ROUTE = 5,
			E_MODE_ELIMINATOR = 6,
			E_MODE_STUNT_ATTACK = 7,
			E_MODE_MARKED_MAN = 8,
			E_MODE_TRAFFIC_ATTACK = 9,
			E_MODE_OFFLINE_COUNT = 10,
			E_MODE_ONLINE_MODE_START = 10,
			E_MODE_ONLINE_RACE = 10,
			E_MODE_ONLINE_ROAD_RAGE = 11,
			E_MODE_ONLINE_FUGITIVE = 12,
			E_MODE_ONLINE_BURNING_HOME_RUN = 13,
			E_MODE_ONLINE_FREE_BURN = 14,
			E_MODE_ONLINE_FREE_BURN_LOBBY = 15,
			E_MODE_ONLINE_SHOWTIME = 16,
			E_MODE_ONLINE_MODE_END = 17,
			E_MODE_COUNT = 17,
		}

		// BrnGameStateSharedIO.h:82
		enum ERoadRageCrashType {
			E_ROADRAGE_CRASHTYPE_NONE = -1,
			E_ROADRAGE_CRASHTYPE_TAKENDOWN = 0,
			E_ROADRAGE_CRASHTYPE_WRECKED = 1,
			E_ROADRAGE_CRASHTYPE_COUNT = 2,
		}

		// BrnGameStateSharedIO.h:93
		enum EGameModeState {
			E_GMS_INVALID = -1,
			E_GMS_COUNTDOWN = 0,
			E_GMS_INTRO = 1,
			E_GMS_IN_PROGRESS = 2,
			E_GMS_OUTRO = 3,
			E_GMS_RESULTS = 4,
			E_GMS_QUIT = 5,
			E_GMS_ONLINE_LOADING = 6,
			E_GMS_ONLINE_SPLASH = 7,
			E_GMS_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:112
		enum EPlayerTeam {
			E_PLAYER_TEAM_START = 0,
			E_PLAYER_TEAM_NONE = 0,
			E_PLAYER_TEAM_RED_TEAM = 1,
			E_PLAYER_TEAM_BLUE_TEAM = 2,
			E_PLAYER_TEAM_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:123
		enum EBlueTeamFinishType {
			E_BLUE_TEAM_FINISH_TYPE_ELIMINATED = 0,
			E_BLUE_TEAM_FINISH_TYPE_SURVIVED = 1,
			E_BLUE_TEAM_FINISH_TYPE_ESCAPED = 2,
			E_BLUE_TEAM_FINISH_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:145
		enum EPlayerScoringIndex {
			E_PLAYER_SCORING_INDEX_0 = 0,
			E_PLAYER_SCORING_INDEX_1 = 1,
			E_PLAYER_SCORING_INDEX_2 = 2,
			E_PLAYER_SCORING_INDEX_3 = 3,
			E_PLAYER_SCORING_INDEX_4 = 4,
			E_PLAYER_SCORING_INDEX_5 = 5,
			E_PLAYER_SCORING_INDEX_6 = 6,
			E_PLAYER_SCORING_INDEX_7 = 7,
			E_PLAYER_SCORING_INDEX_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:161
		enum EMugshotResponse {
			E_MUGSHOT_RESPONSE_PREPARE_CAPTURE = 0,
			E_MUGSHOT_RESPONSE_CAPTURE = 1,
			E_MUGSHOT_RESPONSE_TAKE = 2,
			E_MUGSHOT_RESPONSE_SHOW = 3,
			E_MUGSHOT_RESPONSE_STOP_MY_MUGSHOT = 4,
			E_MUGSHOT_RESPONSE_STOP_THEIR_MUGSHOT = 5,
			E_MUGSHOT_RESPONSE_COUNT = 6,
		}

		// BrnGameStateSharedIO.h:177
		enum ECarSelectType {
			E_CAR_SELECT_TYPE_NONE = 0,
			E_CAR_SELECT_TYPE_JUNKYARD = 1,
			E_CAR_SELECT_TYPE_ONLINE_EVENT_START = 2,
			E_CAR_SELECT_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:228
		enum EImageGalleryType {
			E_IMAGE_GALLERY_TYPE_START = 0,
			E_IMAGE_GALLERY_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_GALLERY_TYPE_PAYBACK_MUGSHOT = 1,
			E_IMAGE_GALLERY_TYPE_ROAD_RULE_MUGSHOT = 2,
			E_IMAGE_GALLERY_TYPE_VICTORY_MUGSHOT = 3,
			E_IMAGE_GALLERY_TYPE_MUGSHOT = 4,
			E_IMAGE_GALLERY_TYPE_COUNT = 5,
		}

		// BrnGameStateSharedIO.h:243
		enum EImageType {
			E_IMAGE_TYPE_START = 0,
			E_IMAGE_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_TYPE_MUGSHOT = 1,
			E_IMAGE_TYPE_PAYBACK_MUGSHOT = 2,
			E_IMAGE_TYPE_ROAD_RULE_TIME_MUGSHOT = 3,
			E_IMAGE_TYPE_ROAD_RULE_CRASH_MUGSHOT = 4,
			E_IMAGE_TYPE_VICTORY_MUGSHOT = 5,
			E_IMAGE_TYPE_COUNT = 6,
		}

		// BrnGameStateSharedIO.h:259
		enum EFreeburnChallengeSuccess {
			E_FREEBURN_CHALLENGE_SUCCESS_NONE = 0,
			E_FREEBURN_CHALLENGE_SUCCESS_NOT_IN_CHALLENGE = 1,
			E_FREEBURN_CHALLENGE_SUCCESS_CONTRIBUTING = 2,
			E_FREEBURN_CHALLENGE_SUCCESS_DONE = 3,
			E_FREEBURN_CHALLENGE_SUCCESS_COUNT = 4,
		}

		// Declaration
		struct GameModeOutputInterface {
			// BrnGameStateSharedIO.h:599
			struct State {
			private:
				// BrnGameStateSharedIO.h:620
				BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

				// BrnGameStateSharedIO.h:621
				BrnGameState::GameStateModuleIO::EGameModeState meGameModeState;

			public:
				// BrnGameStateSharedIO.h:603
				void Construct();

				// BrnGameStateSharedIO.h:606
				BrnGameState::GameStateModuleIO::EGameModeType GetGameModeType() const;

				// BrnGameStateSharedIO.h:609
				BrnGameState::GameStateModuleIO::EGameModeState GetGameModeState() const;

				// BrnGameStateSharedIO.h:613
				void SetGameModeType(BrnGameState::GameStateModuleIO::EGameModeType);

				// BrnGameStateSharedIO.h:617
				void SetGameModeState(BrnGameState::GameStateModuleIO::EGameModeState);

			}

		}

		// Declaration
		struct SetUpAllEventStartsInterface {
			// BrnGameStateSharedIO.h:794
			struct EventStart {
			private:
				// BrnGameStateSharedIO.h:826
				Vector3 mPosition;

				// BrnGameStateSharedIO.h:827
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:828
				uint32_t muJunctionID;

				// BrnGameStateSharedIO.h:829
				int32_t miEventID;

				// BrnGameStateSharedIO.h:830
				BrnWorld::ECounty meCounty;

				// BrnGameStateSharedIO.h:831
				uint16_t mu16SectionIndex;

			public:
				// BrnGameStateSharedIO.h:804
				void Construct(uint32_t, int32_t, LightTriggerId, Vector3, BrnWorld::ECounty, uint16_t);

				// BrnGameStateSharedIO.h:807
				uint32_t GetJunctionID() const;

				// BrnGameStateSharedIO.h:810
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:813
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:816
				Vector3 GetPosition() const;

				// BrnGameStateSharedIO.h:819
				BrnWorld::ECounty GetCounty() const;

				// BrnGameStateSharedIO.h:822
				uint16_t GetSectionIndex() const;

			}

		}

		// Declaration
		struct SpecificGameModeEventInterface {
			// BrnGameStateSharedIO.h:872
			struct Event {
			private:
				// BrnGameStateSharedIO.h:898
				LandmarkIndex[16] maLandmarkIndices;

				// BrnGameStateSharedIO.h:899
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:900
				int32_t miNumLandmarks;

				// BrnGameStateSharedIO.h:901
				int32_t miEventID;

			public:
				// BrnGameStateSharedIO.h:880
				void Construct(int32_t, LightTriggerId, LandmarkIndex *, int32_t);

				// BrnGameStateSharedIO.h:883
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:886
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:889
				int32_t GetNumLandmarks() const;

				// BrnGameStateSharedIO.h:893
				LandmarkIndex GetLandmark(int32_t) const;

			}

		}

		// Declaration
		struct FburnChallengeEveryPlayerStatusData {
			// BrnGameStateSharedIO.h:961
			struct CompletedChallenges {
				// BrnGameStateSharedIO.h:963
				CompletedFburnChallengesData::CompletedFburnChallenges mCompletedChallenges;

				// BrnGameStateSharedIO.h:964
				RoadRulesRecvData::NetworkPlayerID mPlayerID;

			}

		}

		// BrnGameStateSharedIO.h:1001
		extern bool IsShowtimeGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:174
		const uint32_t KU_MAX_ONLINE_ROUNDS_IN_MODE = 10;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.h:51
		enum EGameModeType {
			E_MODE_NONE = -1,
			E_MODE_OFFLINE_RACE = 0,
			E_MODE_FACE_OFF = 1,
			E_MODE_OFFLINE_SHOWTIME = 2,
			E_MODE_ROAD_RAGE = 3,
			E_MODE_PURSUIT = 4,
			E_MODE_BURNING_ROUTE = 5,
			E_MODE_ELIMINATOR = 6,
			E_MODE_STUNT_ATTACK = 7,
			E_MODE_MARKED_MAN = 8,
			E_MODE_TRAFFIC_ATTACK = 9,
			E_MODE_OFFLINE_COUNT = 10,
			E_MODE_ONLINE_MODE_START = 10,
			E_MODE_ONLINE_RACE = 10,
			E_MODE_ONLINE_ROAD_RAGE = 11,
			E_MODE_ONLINE_FUGITIVE = 12,
			E_MODE_ONLINE_BURNING_HOME_RUN = 13,
			E_MODE_ONLINE_FREE_BURN = 14,
			E_MODE_ONLINE_FREE_BURN_LOBBY = 15,
			E_MODE_ONLINE_SHOWTIME = 16,
			E_MODE_ONLINE_MODE_END = 17,
			E_MODE_COUNT = 17,
		}

		// BrnGameStateSharedIO.h:145
		enum EPlayerScoringIndex {
			E_PLAYER_SCORING_INDEX_0 = 0,
			E_PLAYER_SCORING_INDEX_1 = 1,
			E_PLAYER_SCORING_INDEX_2 = 2,
			E_PLAYER_SCORING_INDEX_3 = 3,
			E_PLAYER_SCORING_INDEX_4 = 4,
			E_PLAYER_SCORING_INDEX_5 = 5,
			E_PLAYER_SCORING_INDEX_6 = 6,
			E_PLAYER_SCORING_INDEX_7 = 7,
			E_PLAYER_SCORING_INDEX_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:158
		extern BrnGameState::GameStateModuleIO::EPlayerScoringIndex operator++(BrnGameState::GameStateModuleIO::EPlayerScoringIndex &, int);

		// BrnGameStateSharedIO.h:174
		const uint32_t KU_MAX_ONLINE_ROUNDS_IN_MODE = 10;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.h:51
		enum EGameModeType {
			E_MODE_NONE = -1,
			E_MODE_OFFLINE_RACE = 0,
			E_MODE_FACE_OFF = 1,
			E_MODE_OFFLINE_SHOWTIME = 2,
			E_MODE_ROAD_RAGE = 3,
			E_MODE_PURSUIT = 4,
			E_MODE_BURNING_ROUTE = 5,
			E_MODE_ELIMINATOR = 6,
			E_MODE_STUNT_ATTACK = 7,
			E_MODE_MARKED_MAN = 8,
			E_MODE_TRAFFIC_ATTACK = 9,
			E_MODE_OFFLINE_COUNT = 10,
			E_MODE_ONLINE_MODE_START = 10,
			E_MODE_ONLINE_RACE = 10,
			E_MODE_ONLINE_ROAD_RAGE = 11,
			E_MODE_ONLINE_FUGITIVE = 12,
			E_MODE_ONLINE_BURNING_HOME_RUN = 13,
			E_MODE_ONLINE_FREE_BURN = 14,
			E_MODE_ONLINE_FREE_BURN_LOBBY = 15,
			E_MODE_ONLINE_SHOWTIME = 16,
			E_MODE_ONLINE_MODE_END = 17,
			E_MODE_COUNT = 17,
		}

		// BrnGameStateSharedIO.h:93
		enum EGameModeState {
			E_GMS_INVALID = -1,
			E_GMS_COUNTDOWN = 0,
			E_GMS_INTRO = 1,
			E_GMS_IN_PROGRESS = 2,
			E_GMS_OUTRO = 3,
			E_GMS_RESULTS = 4,
			E_GMS_QUIT = 5,
			E_GMS_ONLINE_LOADING = 6,
			E_GMS_ONLINE_SPLASH = 7,
			E_GMS_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:112
		enum EPlayerTeam {
			E_PLAYER_TEAM_START = 0,
			E_PLAYER_TEAM_NONE = 0,
			E_PLAYER_TEAM_RED_TEAM = 1,
			E_PLAYER_TEAM_BLUE_TEAM = 2,
			E_PLAYER_TEAM_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:123
		enum EBlueTeamFinishType {
			E_BLUE_TEAM_FINISH_TYPE_ELIMINATED = 0,
			E_BLUE_TEAM_FINISH_TYPE_SURVIVED = 1,
			E_BLUE_TEAM_FINISH_TYPE_ESCAPED = 2,
			E_BLUE_TEAM_FINISH_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:145
		enum EPlayerScoringIndex {
			E_PLAYER_SCORING_INDEX_0 = 0,
			E_PLAYER_SCORING_INDEX_1 = 1,
			E_PLAYER_SCORING_INDEX_2 = 2,
			E_PLAYER_SCORING_INDEX_3 = 3,
			E_PLAYER_SCORING_INDEX_4 = 4,
			E_PLAYER_SCORING_INDEX_5 = 5,
			E_PLAYER_SCORING_INDEX_6 = 6,
			E_PLAYER_SCORING_INDEX_7 = 7,
			E_PLAYER_SCORING_INDEX_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:177
		enum ECarSelectType {
			E_CAR_SELECT_TYPE_NONE = 0,
			E_CAR_SELECT_TYPE_JUNKYARD = 1,
			E_CAR_SELECT_TYPE_ONLINE_EVENT_START = 2,
			E_CAR_SELECT_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:228
		enum EImageGalleryType {
			E_IMAGE_GALLERY_TYPE_START = 0,
			E_IMAGE_GALLERY_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_GALLERY_TYPE_PAYBACK_MUGSHOT = 1,
			E_IMAGE_GALLERY_TYPE_ROAD_RULE_MUGSHOT = 2,
			E_IMAGE_GALLERY_TYPE_VICTORY_MUGSHOT = 3,
			E_IMAGE_GALLERY_TYPE_MUGSHOT = 4,
			E_IMAGE_GALLERY_TYPE_COUNT = 5,
		}

		// BrnGameStateSharedIO.h:259
		enum EFreeburnChallengeSuccess {
			E_FREEBURN_CHALLENGE_SUCCESS_NONE = 0,
			E_FREEBURN_CHALLENGE_SUCCESS_NOT_IN_CHALLENGE = 1,
			E_FREEBURN_CHALLENGE_SUCCESS_CONTRIBUTING = 2,
			E_FREEBURN_CHALLENGE_SUCCESS_DONE = 3,
			E_FREEBURN_CHALLENGE_SUCCESS_COUNT = 4,
		}

		// Declaration
		struct FlybyRivalData {
			// BrnGameStateSharedIO.h:383
			enum EMessageStyle {
				E_MESSAGE_STYLE_GOOD = 0,
				E_MESSAGE_STYLE_NEUTRAL = 1,
				E_MESSAGE_STYLE_BAD = 2,
				E_MESSAGE_TYPE_COUNT = 3,
			}

		}

		// Declaration
		struct GameModeOutputInterface {
			// BrnGameStateSharedIO.h:599
			struct State {
			private:
				// BrnGameStateSharedIO.h:620
				BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

				// BrnGameStateSharedIO.h:621
				BrnGameState::GameStateModuleIO::EGameModeState meGameModeState;

			public:
				// BrnGameStateSharedIO.h:603
				void Construct();

				// BrnGameStateSharedIO.h:606
				BrnGameState::GameStateModuleIO::EGameModeType GetGameModeType() const;

				// BrnGameStateSharedIO.h:609
				BrnGameState::GameStateModuleIO::EGameModeState GetGameModeState() const;

				// BrnGameStateSharedIO.h:613
				void SetGameModeType(BrnGameState::GameStateModuleIO::EGameModeType);

				// BrnGameStateSharedIO.h:617
				void SetGameModeState(BrnGameState::GameStateModuleIO::EGameModeState);

			}

		}

		// Declaration
		struct SetUpAllEventStartsInterface {
			// BrnGameStateSharedIO.h:794
			struct EventStart {
			private:
				// BrnGameStateSharedIO.h:826
				Vector3 mPosition;

				// BrnGameStateSharedIO.h:827
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:828
				uint32_t muJunctionID;

				// BrnGameStateSharedIO.h:829
				int32_t miEventID;

				// BrnGameStateSharedIO.h:830
				BrnWorld::ECounty meCounty;

				// BrnGameStateSharedIO.h:831
				uint16_t mu16SectionIndex;

			public:
				// BrnGameStateSharedIO.h:804
				void Construct(uint32_t, int32_t, LightTriggerId, Vector3, BrnWorld::ECounty, uint16_t);

				// BrnGameStateSharedIO.h:807
				uint32_t GetJunctionID() const;

				// BrnGameStateSharedIO.h:810
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:813
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:816
				Vector3 GetPosition() const;

				// BrnGameStateSharedIO.h:819
				BrnWorld::ECounty GetCounty() const;

				// BrnGameStateSharedIO.h:822
				uint16_t GetSectionIndex() const;

			}

		}

		// Declaration
		struct SpecificGameModeEventInterface {
			// BrnGameStateSharedIO.h:872
			struct Event {
			private:
				// BrnGameStateSharedIO.h:898
				LandmarkIndex[16] maLandmarkIndices;

				// BrnGameStateSharedIO.h:899
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:900
				int32_t miNumLandmarks;

				// BrnGameStateSharedIO.h:901
				int32_t miEventID;

			public:
				// BrnGameStateSharedIO.h:880
				void Construct(int32_t, LightTriggerId, LandmarkIndex *, int32_t);

				// BrnGameStateSharedIO.h:883
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:886
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:889
				int32_t GetNumLandmarks() const;

				// BrnGameStateSharedIO.h:893
				LandmarkIndex GetLandmark(int32_t) const;

			}

		}

		// Declaration
		struct FburnChallengeEveryPlayerStatusData {
			// BrnGameStateSharedIO.h:961
			struct CompletedChallenges {
				// BrnGameStateSharedIO.h:963
				CompletedFburnChallengesData::CompletedFburnChallenges mCompletedChallenges;

				// BrnGameStateSharedIO.h:964
				RoadRulesRecvData::NetworkPlayerID mPlayerID;

			}

		}

		// BrnGameStateSharedIO.h:158
		extern BrnGameState::GameStateModuleIO::EPlayerScoringIndex operator++(BrnGameState::GameStateModuleIO::EPlayerScoringIndex &, int);

		// BrnGameStateSharedIO.h:174
		const uint32_t KU_MAX_ONLINE_ROUNDS_IN_MODE = 10;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.h:145
		enum EPlayerScoringIndex {
			E_PLAYER_SCORING_INDEX_0 = 0,
			E_PLAYER_SCORING_INDEX_1 = 1,
			E_PLAYER_SCORING_INDEX_2 = 2,
			E_PLAYER_SCORING_INDEX_3 = 3,
			E_PLAYER_SCORING_INDEX_4 = 4,
			E_PLAYER_SCORING_INDEX_5 = 5,
			E_PLAYER_SCORING_INDEX_6 = 6,
			E_PLAYER_SCORING_INDEX_7 = 7,
			E_PLAYER_SCORING_INDEX_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:158
		extern BrnGameState::GameStateModuleIO::EPlayerScoringIndex operator++(BrnGameState::GameStateModuleIO::EPlayerScoringIndex &, int);

		// BrnGameStateSharedIO.h:174
		const uint32_t KU_MAX_ONLINE_ROUNDS_IN_MODE = 10;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.h:51
		enum EGameModeType {
			E_MODE_NONE = -1,
			E_MODE_OFFLINE_RACE = 0,
			E_MODE_FACE_OFF = 1,
			E_MODE_OFFLINE_SHOWTIME = 2,
			E_MODE_ROAD_RAGE = 3,
			E_MODE_PURSUIT = 4,
			E_MODE_BURNING_ROUTE = 5,
			E_MODE_ELIMINATOR = 6,
			E_MODE_STUNT_ATTACK = 7,
			E_MODE_MARKED_MAN = 8,
			E_MODE_TRAFFIC_ATTACK = 9,
			E_MODE_OFFLINE_COUNT = 10,
			E_MODE_ONLINE_MODE_START = 10,
			E_MODE_ONLINE_RACE = 10,
			E_MODE_ONLINE_ROAD_RAGE = 11,
			E_MODE_ONLINE_FUGITIVE = 12,
			E_MODE_ONLINE_BURNING_HOME_RUN = 13,
			E_MODE_ONLINE_FREE_BURN = 14,
			E_MODE_ONLINE_FREE_BURN_LOBBY = 15,
			E_MODE_ONLINE_SHOWTIME = 16,
			E_MODE_ONLINE_MODE_END = 17,
			E_MODE_COUNT = 17,
		}

		// BrnGameStateSharedIO.h:112
		enum EPlayerTeam {
			E_PLAYER_TEAM_START = 0,
			E_PLAYER_TEAM_NONE = 0,
			E_PLAYER_TEAM_RED_TEAM = 1,
			E_PLAYER_TEAM_BLUE_TEAM = 2,
			E_PLAYER_TEAM_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:123
		enum EBlueTeamFinishType {
			E_BLUE_TEAM_FINISH_TYPE_ELIMINATED = 0,
			E_BLUE_TEAM_FINISH_TYPE_SURVIVED = 1,
			E_BLUE_TEAM_FINISH_TYPE_ESCAPED = 2,
			E_BLUE_TEAM_FINISH_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:145
		enum EPlayerScoringIndex {
			E_PLAYER_SCORING_INDEX_0 = 0,
			E_PLAYER_SCORING_INDEX_1 = 1,
			E_PLAYER_SCORING_INDEX_2 = 2,
			E_PLAYER_SCORING_INDEX_3 = 3,
			E_PLAYER_SCORING_INDEX_4 = 4,
			E_PLAYER_SCORING_INDEX_5 = 5,
			E_PLAYER_SCORING_INDEX_6 = 6,
			E_PLAYER_SCORING_INDEX_7 = 7,
			E_PLAYER_SCORING_INDEX_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:228
		enum EImageGalleryType {
			E_IMAGE_GALLERY_TYPE_START = 0,
			E_IMAGE_GALLERY_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_GALLERY_TYPE_PAYBACK_MUGSHOT = 1,
			E_IMAGE_GALLERY_TYPE_ROAD_RULE_MUGSHOT = 2,
			E_IMAGE_GALLERY_TYPE_VICTORY_MUGSHOT = 3,
			E_IMAGE_GALLERY_TYPE_MUGSHOT = 4,
			E_IMAGE_GALLERY_TYPE_COUNT = 5,
		}

		// BrnGameStateSharedIO.h:174
		const uint32_t KU_MAX_ONLINE_ROUNDS_IN_MODE = 10;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.h:51
		enum EGameModeType {
			E_MODE_NONE = -1,
			E_MODE_OFFLINE_RACE = 0,
			E_MODE_FACE_OFF = 1,
			E_MODE_OFFLINE_SHOWTIME = 2,
			E_MODE_ROAD_RAGE = 3,
			E_MODE_PURSUIT = 4,
			E_MODE_BURNING_ROUTE = 5,
			E_MODE_ELIMINATOR = 6,
			E_MODE_STUNT_ATTACK = 7,
			E_MODE_MARKED_MAN = 8,
			E_MODE_TRAFFIC_ATTACK = 9,
			E_MODE_OFFLINE_COUNT = 10,
			E_MODE_ONLINE_MODE_START = 10,
			E_MODE_ONLINE_RACE = 10,
			E_MODE_ONLINE_ROAD_RAGE = 11,
			E_MODE_ONLINE_FUGITIVE = 12,
			E_MODE_ONLINE_BURNING_HOME_RUN = 13,
			E_MODE_ONLINE_FREE_BURN = 14,
			E_MODE_ONLINE_FREE_BURN_LOBBY = 15,
			E_MODE_ONLINE_SHOWTIME = 16,
			E_MODE_ONLINE_MODE_END = 17,
			E_MODE_COUNT = 17,
		}

		// BrnGameStateSharedIO.h:82
		enum ERoadRageCrashType {
			E_ROADRAGE_CRASHTYPE_NONE = -1,
			E_ROADRAGE_CRASHTYPE_TAKENDOWN = 0,
			E_ROADRAGE_CRASHTYPE_WRECKED = 1,
			E_ROADRAGE_CRASHTYPE_COUNT = 2,
		}

		// BrnGameStateSharedIO.h:93
		enum EGameModeState {
			E_GMS_INVALID = -1,
			E_GMS_COUNTDOWN = 0,
			E_GMS_INTRO = 1,
			E_GMS_IN_PROGRESS = 2,
			E_GMS_OUTRO = 3,
			E_GMS_RESULTS = 4,
			E_GMS_QUIT = 5,
			E_GMS_ONLINE_LOADING = 6,
			E_GMS_ONLINE_SPLASH = 7,
			E_GMS_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:112
		enum EPlayerTeam {
			E_PLAYER_TEAM_START = 0,
			E_PLAYER_TEAM_NONE = 0,
			E_PLAYER_TEAM_RED_TEAM = 1,
			E_PLAYER_TEAM_BLUE_TEAM = 2,
			E_PLAYER_TEAM_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:123
		enum EBlueTeamFinishType {
			E_BLUE_TEAM_FINISH_TYPE_ELIMINATED = 0,
			E_BLUE_TEAM_FINISH_TYPE_SURVIVED = 1,
			E_BLUE_TEAM_FINISH_TYPE_ESCAPED = 2,
			E_BLUE_TEAM_FINISH_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:145
		enum EPlayerScoringIndex {
			E_PLAYER_SCORING_INDEX_0 = 0,
			E_PLAYER_SCORING_INDEX_1 = 1,
			E_PLAYER_SCORING_INDEX_2 = 2,
			E_PLAYER_SCORING_INDEX_3 = 3,
			E_PLAYER_SCORING_INDEX_4 = 4,
			E_PLAYER_SCORING_INDEX_5 = 5,
			E_PLAYER_SCORING_INDEX_6 = 6,
			E_PLAYER_SCORING_INDEX_7 = 7,
			E_PLAYER_SCORING_INDEX_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:161
		enum EMugshotResponse {
			E_MUGSHOT_RESPONSE_PREPARE_CAPTURE = 0,
			E_MUGSHOT_RESPONSE_CAPTURE = 1,
			E_MUGSHOT_RESPONSE_TAKE = 2,
			E_MUGSHOT_RESPONSE_SHOW = 3,
			E_MUGSHOT_RESPONSE_STOP_MY_MUGSHOT = 4,
			E_MUGSHOT_RESPONSE_STOP_THEIR_MUGSHOT = 5,
			E_MUGSHOT_RESPONSE_COUNT = 6,
		}

		// BrnGameStateSharedIO.h:177
		enum ECarSelectType {
			E_CAR_SELECT_TYPE_NONE = 0,
			E_CAR_SELECT_TYPE_JUNKYARD = 1,
			E_CAR_SELECT_TYPE_ONLINE_EVENT_START = 2,
			E_CAR_SELECT_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:228
		enum EImageGalleryType {
			E_IMAGE_GALLERY_TYPE_START = 0,
			E_IMAGE_GALLERY_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_GALLERY_TYPE_PAYBACK_MUGSHOT = 1,
			E_IMAGE_GALLERY_TYPE_ROAD_RULE_MUGSHOT = 2,
			E_IMAGE_GALLERY_TYPE_VICTORY_MUGSHOT = 3,
			E_IMAGE_GALLERY_TYPE_MUGSHOT = 4,
			E_IMAGE_GALLERY_TYPE_COUNT = 5,
		}

		// BrnGameStateSharedIO.h:243
		enum EImageType {
			E_IMAGE_TYPE_START = 0,
			E_IMAGE_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_TYPE_MUGSHOT = 1,
			E_IMAGE_TYPE_PAYBACK_MUGSHOT = 2,
			E_IMAGE_TYPE_ROAD_RULE_TIME_MUGSHOT = 3,
			E_IMAGE_TYPE_ROAD_RULE_CRASH_MUGSHOT = 4,
			E_IMAGE_TYPE_VICTORY_MUGSHOT = 5,
			E_IMAGE_TYPE_COUNT = 6,
		}

		// BrnGameStateSharedIO.h:259
		enum EFreeburnChallengeSuccess {
			E_FREEBURN_CHALLENGE_SUCCESS_NONE = 0,
			E_FREEBURN_CHALLENGE_SUCCESS_NOT_IN_CHALLENGE = 1,
			E_FREEBURN_CHALLENGE_SUCCESS_CONTRIBUTING = 2,
			E_FREEBURN_CHALLENGE_SUCCESS_DONE = 3,
			E_FREEBURN_CHALLENGE_SUCCESS_COUNT = 4,
		}

		// Declaration
		struct GameModeOutputInterface {
			// BrnGameStateSharedIO.h:599
			struct State {
			private:
				// BrnGameStateSharedIO.h:620
				BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

				// BrnGameStateSharedIO.h:621
				BrnGameState::GameStateModuleIO::EGameModeState meGameModeState;

			public:
				// BrnGameStateSharedIO.h:603
				void Construct();

				// BrnGameStateSharedIO.h:606
				BrnGameState::GameStateModuleIO::EGameModeType GetGameModeType() const;

				// BrnGameStateSharedIO.h:609
				BrnGameState::GameStateModuleIO::EGameModeState GetGameModeState() const;

				// BrnGameStateSharedIO.h:613
				void SetGameModeType(BrnGameState::GameStateModuleIO::EGameModeType);

				// BrnGameStateSharedIO.h:617
				void SetGameModeState(BrnGameState::GameStateModuleIO::EGameModeState);

			}

		}

		// Declaration
		struct SetUpAllEventStartsInterface {
			// BrnGameStateSharedIO.h:794
			struct EventStart {
			private:
				// BrnGameStateSharedIO.h:826
				Vector3 mPosition;

				// BrnGameStateSharedIO.h:827
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:828
				uint32_t muJunctionID;

				// BrnGameStateSharedIO.h:829
				int32_t miEventID;

				// BrnGameStateSharedIO.h:830
				BrnWorld::ECounty meCounty;

				// BrnGameStateSharedIO.h:831
				uint16_t mu16SectionIndex;

			public:
				// BrnGameStateSharedIO.h:804
				void Construct(uint32_t, int32_t, LightTriggerId, Vector3, BrnWorld::ECounty, uint16_t);

				// BrnGameStateSharedIO.h:807
				uint32_t GetJunctionID() const;

				// BrnGameStateSharedIO.h:810
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:813
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:816
				Vector3 GetPosition() const;

				// BrnGameStateSharedIO.h:819
				BrnWorld::ECounty GetCounty() const;

				// BrnGameStateSharedIO.h:822
				uint16_t GetSectionIndex() const;

			}

		}

		// Declaration
		struct SpecificGameModeEventInterface {
			// BrnGameStateSharedIO.h:872
			struct Event {
			private:
				// BrnGameStateSharedIO.h:898
				LandmarkIndex[16] maLandmarkIndices;

				// BrnGameStateSharedIO.h:899
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:900
				int32_t miNumLandmarks;

				// BrnGameStateSharedIO.h:901
				int32_t miEventID;

			public:
				// BrnGameStateSharedIO.h:880
				void Construct(int32_t, LightTriggerId, LandmarkIndex *, int32_t);

				// BrnGameStateSharedIO.h:883
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:886
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:889
				int32_t GetNumLandmarks() const;

				// BrnGameStateSharedIO.h:893
				LandmarkIndex GetLandmark(int32_t) const;

			}

		}

		// Declaration
		struct FburnChallengeEveryPlayerStatusData {
			// BrnGameStateSharedIO.h:961
			struct CompletedChallenges {
				// BrnGameStateSharedIO.h:963
				CompletedFburnChallengesData::CompletedFburnChallenges mCompletedChallenges;

				// BrnGameStateSharedIO.h:964
				RoadRulesRecvData::NetworkPlayerID mPlayerID;

			}

		}

		// BrnGameStateSharedIO.h:1001
		extern bool IsShowtimeGameMode(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:1009
		extern bool IsOnlineFreeBurnLobby(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.h:158
		extern BrnGameState::GameStateModuleIO::EPlayerScoringIndex operator++(BrnGameState::GameStateModuleIO::EPlayerScoringIndex &, int);

		// BrnGameStateSharedIO.h:174
		const uint32_t KU_MAX_ONLINE_ROUNDS_IN_MODE = 10;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.h:51
		enum EGameModeType {
			E_MODE_NONE = -1,
			E_MODE_OFFLINE_RACE = 0,
			E_MODE_FACE_OFF = 1,
			E_MODE_OFFLINE_SHOWTIME = 2,
			E_MODE_ROAD_RAGE = 3,
			E_MODE_PURSUIT = 4,
			E_MODE_BURNING_ROUTE = 5,
			E_MODE_ELIMINATOR = 6,
			E_MODE_STUNT_ATTACK = 7,
			E_MODE_MARKED_MAN = 8,
			E_MODE_TRAFFIC_ATTACK = 9,
			E_MODE_OFFLINE_COUNT = 10,
			E_MODE_ONLINE_MODE_START = 10,
			E_MODE_ONLINE_RACE = 10,
			E_MODE_ONLINE_ROAD_RAGE = 11,
			E_MODE_ONLINE_FUGITIVE = 12,
			E_MODE_ONLINE_BURNING_HOME_RUN = 13,
			E_MODE_ONLINE_FREE_BURN = 14,
			E_MODE_ONLINE_FREE_BURN_LOBBY = 15,
			E_MODE_ONLINE_SHOWTIME = 16,
			E_MODE_ONLINE_MODE_END = 17,
			E_MODE_COUNT = 17,
		}

		// BrnGameStateSharedIO.h:82
		enum ERoadRageCrashType {
			E_ROADRAGE_CRASHTYPE_NONE = -1,
			E_ROADRAGE_CRASHTYPE_TAKENDOWN = 0,
			E_ROADRAGE_CRASHTYPE_WRECKED = 1,
			E_ROADRAGE_CRASHTYPE_COUNT = 2,
		}

		// BrnGameStateSharedIO.h:93
		enum EGameModeState {
			E_GMS_INVALID = -1,
			E_GMS_COUNTDOWN = 0,
			E_GMS_INTRO = 1,
			E_GMS_IN_PROGRESS = 2,
			E_GMS_OUTRO = 3,
			E_GMS_RESULTS = 4,
			E_GMS_QUIT = 5,
			E_GMS_ONLINE_LOADING = 6,
			E_GMS_ONLINE_SPLASH = 7,
			E_GMS_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:112
		enum EPlayerTeam {
			E_PLAYER_TEAM_START = 0,
			E_PLAYER_TEAM_NONE = 0,
			E_PLAYER_TEAM_RED_TEAM = 1,
			E_PLAYER_TEAM_BLUE_TEAM = 2,
			E_PLAYER_TEAM_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:123
		enum EBlueTeamFinishType {
			E_BLUE_TEAM_FINISH_TYPE_ELIMINATED = 0,
			E_BLUE_TEAM_FINISH_TYPE_SURVIVED = 1,
			E_BLUE_TEAM_FINISH_TYPE_ESCAPED = 2,
			E_BLUE_TEAM_FINISH_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:145
		enum EPlayerScoringIndex {
			E_PLAYER_SCORING_INDEX_0 = 0,
			E_PLAYER_SCORING_INDEX_1 = 1,
			E_PLAYER_SCORING_INDEX_2 = 2,
			E_PLAYER_SCORING_INDEX_3 = 3,
			E_PLAYER_SCORING_INDEX_4 = 4,
			E_PLAYER_SCORING_INDEX_5 = 5,
			E_PLAYER_SCORING_INDEX_6 = 6,
			E_PLAYER_SCORING_INDEX_7 = 7,
			E_PLAYER_SCORING_INDEX_COUNT = 8,
		}

		// BrnGameStateSharedIO.h:161
		enum EMugshotResponse {
			E_MUGSHOT_RESPONSE_PREPARE_CAPTURE = 0,
			E_MUGSHOT_RESPONSE_CAPTURE = 1,
			E_MUGSHOT_RESPONSE_TAKE = 2,
			E_MUGSHOT_RESPONSE_SHOW = 3,
			E_MUGSHOT_RESPONSE_STOP_MY_MUGSHOT = 4,
			E_MUGSHOT_RESPONSE_STOP_THEIR_MUGSHOT = 5,
			E_MUGSHOT_RESPONSE_COUNT = 6,
		}

		// BrnGameStateSharedIO.h:177
		enum ECarSelectType {
			E_CAR_SELECT_TYPE_NONE = 0,
			E_CAR_SELECT_TYPE_JUNKYARD = 1,
			E_CAR_SELECT_TYPE_ONLINE_EVENT_START = 2,
			E_CAR_SELECT_TYPE_COUNT = 3,
		}

		// BrnGameStateSharedIO.h:228
		enum EImageGalleryType {
			E_IMAGE_GALLERY_TYPE_START = 0,
			E_IMAGE_GALLERY_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_GALLERY_TYPE_PAYBACK_MUGSHOT = 1,
			E_IMAGE_GALLERY_TYPE_ROAD_RULE_MUGSHOT = 2,
			E_IMAGE_GALLERY_TYPE_VICTORY_MUGSHOT = 3,
			E_IMAGE_GALLERY_TYPE_MUGSHOT = 4,
			E_IMAGE_GALLERY_TYPE_COUNT = 5,
		}

		// BrnGameStateSharedIO.h:243
		enum EImageType {
			E_IMAGE_TYPE_START = 0,
			E_IMAGE_TYPE_FREEBURN_MUGSHOT = 0,
			E_IMAGE_TYPE_MUGSHOT = 1,
			E_IMAGE_TYPE_PAYBACK_MUGSHOT = 2,
			E_IMAGE_TYPE_ROAD_RULE_TIME_MUGSHOT = 3,
			E_IMAGE_TYPE_ROAD_RULE_CRASH_MUGSHOT = 4,
			E_IMAGE_TYPE_VICTORY_MUGSHOT = 5,
			E_IMAGE_TYPE_COUNT = 6,
		}

		// BrnGameStateSharedIO.h:259
		enum EFreeburnChallengeSuccess {
			E_FREEBURN_CHALLENGE_SUCCESS_NONE = 0,
			E_FREEBURN_CHALLENGE_SUCCESS_NOT_IN_CHALLENGE = 1,
			E_FREEBURN_CHALLENGE_SUCCESS_CONTRIBUTING = 2,
			E_FREEBURN_CHALLENGE_SUCCESS_DONE = 3,
			E_FREEBURN_CHALLENGE_SUCCESS_COUNT = 4,
		}

		// Declaration
		struct FlybyRivalData {
			// BrnGameStateSharedIO.h:383
			enum EMessageStyle {
				E_MESSAGE_STYLE_GOOD = 0,
				E_MESSAGE_STYLE_NEUTRAL = 1,
				E_MESSAGE_STYLE_BAD = 2,
				E_MESSAGE_TYPE_COUNT = 3,
			}

		}

		// Declaration
		struct GameModeOutputInterface {
			// BrnGameStateSharedIO.h:599
			struct State {
			private:
				// BrnGameStateSharedIO.h:620
				BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

				// BrnGameStateSharedIO.h:621
				BrnGameState::GameStateModuleIO::EGameModeState meGameModeState;

			public:
				// BrnGameStateSharedIO.h:603
				void Construct();

				// BrnGameStateSharedIO.h:606
				BrnGameState::GameStateModuleIO::EGameModeType GetGameModeType() const;

				// BrnGameStateSharedIO.h:609
				BrnGameState::GameStateModuleIO::EGameModeState GetGameModeState() const;

				// BrnGameStateSharedIO.h:613
				void SetGameModeType(BrnGameState::GameStateModuleIO::EGameModeType);

				// BrnGameStateSharedIO.h:617
				void SetGameModeState(BrnGameState::GameStateModuleIO::EGameModeState);

			}

		}

		// Declaration
		struct SetUpAllEventStartsInterface {
			// BrnGameStateSharedIO.h:794
			struct EventStart {
			private:
				// BrnGameStateSharedIO.h:826
				Vector3 mPosition;

				// BrnGameStateSharedIO.h:827
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:828
				uint32_t muJunctionID;

				// BrnGameStateSharedIO.h:829
				int32_t miEventID;

				// BrnGameStateSharedIO.h:830
				BrnWorld::ECounty meCounty;

				// BrnGameStateSharedIO.h:831
				uint16_t mu16SectionIndex;

			public:
				// BrnGameStateSharedIO.h:804
				void Construct(uint32_t, int32_t, LightTriggerId, Vector3, BrnWorld::ECounty, uint16_t);

				// BrnGameStateSharedIO.h:807
				uint32_t GetJunctionID() const;

				// BrnGameStateSharedIO.h:810
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:813
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:816
				Vector3 GetPosition() const;

				// BrnGameStateSharedIO.h:819
				BrnWorld::ECounty GetCounty() const;

				// BrnGameStateSharedIO.h:822
				uint16_t GetSectionIndex() const;

			}

		}

		// Declaration
		struct SpecificGameModeEventInterface {
			// BrnGameStateSharedIO.h:872
			struct Event {
			private:
				// BrnGameStateSharedIO.h:898
				LandmarkIndex[16] maLandmarkIndices;

				// BrnGameStateSharedIO.h:899
				LightTriggerId mTrafficLightTriggerId;

				// BrnGameStateSharedIO.h:900
				int32_t miNumLandmarks;

				// BrnGameStateSharedIO.h:901
				int32_t miEventID;

			public:
				// BrnGameStateSharedIO.h:880
				void Construct(int32_t, LightTriggerId, LandmarkIndex *, int32_t);

				// BrnGameStateSharedIO.h:883
				int32_t GetEventID() const;

				// BrnGameStateSharedIO.h:886
				LightTriggerId GetLightTriggerID() const;

				// BrnGameStateSharedIO.h:889
				int32_t GetNumLandmarks() const;

				// BrnGameStateSharedIO.h:893
				LandmarkIndex GetLandmark(int32_t) const;

			}

		}

		// Declaration
		struct FburnChallengeEveryPlayerStatusData {
			// BrnGameStateSharedIO.h:961
			struct CompletedChallenges {
				// BrnGameStateSharedIO.h:963
				CompletedFburnChallengesData::CompletedFburnChallenges mCompletedChallenges;

				// BrnGameStateSharedIO.h:964
				RoadRulesRecvData::NetworkPlayerID mPlayerID;

			}

		}

		// BrnGameStateSharedIO.h:174
		const uint32_t KU_MAX_ONLINE_ROUNDS_IN_MODE = 10;

	}

}

