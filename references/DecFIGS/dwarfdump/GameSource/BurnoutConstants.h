// BurnoutConstants.h:26
enum EActiveRaceCarIndex {
	E_ACTIVE_RACE_CAR_INDEX_INVALID = -1,
	E_ACTIVE_RACE_CAR_INDEX_0 = 0,
	E_ACTIVE_RACE_CAR_INDEX_1 = 1,
	E_ACTIVE_RACE_CAR_INDEX_2 = 2,
	E_ACTIVE_RACE_CAR_INDEX_3 = 3,
	E_ACTIVE_RACE_CAR_INDEX_4 = 4,
	E_ACTIVE_RACE_CAR_INDEX_5 = 5,
	E_ACTIVE_RACE_CAR_INDEX_6 = 6,
	E_ACTIVE_RACE_CAR_INDEX_7 = 7,
	E_ACTIVE_RACE_CAR_INDEX_COUNT = 8,
}

// BurnoutConstants.h:43
enum EGlobalRaceCarIndex {
	E_GLOBAL_RACE_CAR_INDEX_INVALID = -1,
	E_GLOBAL_RACE_CAR_INDEX_0 = 0,
	E_GLOBAL_RACE_CAR_INDEX_1 = 1,
	E_GLOBAL_RACE_CAR_INDEX_2 = 2,
	E_GLOBAL_RACE_CAR_INDEX_3 = 3,
	E_GLOBAL_RACE_CAR_INDEX_4 = 4,
	E_GLOBAL_RACE_CAR_INDEX_5 = 5,
	E_GLOBAL_RACE_CAR_INDEX_6 = 6,
	E_GLOBAL_RACE_CAR_INDEX_7 = 7,
	E_GLOBAL_RACE_CAR_INDEX_8 = 8,
	E_GLOBAL_RACE_CAR_INDEX_9 = 9,
	E_GLOBAL_RACE_CAR_INDEX_10 = 10,
	E_GLOBAL_RACE_CAR_INDEX_11 = 11,
	E_GLOBAL_RACE_CAR_INDEX_12 = 12,
	E_GLOBAL_RACE_CAR_INDEX_13 = 13,
	E_GLOBAL_RACE_CAR_INDEX_14 = 14,
	E_GLOBAL_RACE_CAR_INDEX_15 = 15,
	E_GLOBAL_RACE_CAR_INDEX_16 = 16,
	E_GLOBAL_RACE_CAR_INDEX_17 = 17,
	E_GLOBAL_RACE_CAR_INDEX_18 = 18,
	E_GLOBAL_RACE_CAR_INDEX_19 = 19,
	E_GLOBAL_RACE_CAR_INDEX_20 = 20,
	E_GLOBAL_RACE_CAR_INDEX_21 = 21,
	E_GLOBAL_RACE_CAR_INDEX_22 = 22,
	E_GLOBAL_RACE_CAR_INDEX_23 = 23,
	E_GLOBAL_RACE_CAR_INDEX_24 = 24,
	E_GLOBAL_RACE_CAR_INDEX_25 = 25,
	E_GLOBAL_RACE_CAR_INDEX_26 = 26,
	E_GLOBAL_RACE_CAR_INDEX_27 = 27,
	E_GLOBAL_RACE_CAR_INDEX_28 = 28,
	E_GLOBAL_RACE_CAR_INDEX_29 = 29,
	E_GLOBAL_RACE_CAR_INDEX_30 = 30,
	E_GLOBAL_RACE_CAR_INDEX_31 = 31,
	E_GLOBAL_RACE_CAR_INDEX_32 = 32,
	E_GLOBAL_RACE_CAR_INDEX_33 = 33,
	E_GLOBAL_RACE_CAR_INDEX_34 = 34,
	E_GLOBAL_RACE_CAR_INDEX_COUNT = 35,
}

// BurnoutConstants.h:90
namespace BrnGameState {
	struct TakedownEvent;

	struct LandmarkIndex;

	struct StuntInfo;

	struct StartLocation;

	struct CheckpointData;

	struct OpponentData;

	struct StartGameModeParams;

	struct GameModeParams;

}

// BurnoutConstants.h:39
extern EActiveRaceCarIndex operator++(const EActiveRaceCarIndex &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BurnoutConstants.h:39
		EActiveRaceCarIndex leOldEnumIndex;

	}
}

// _built-in_
namespace :: {
	// BurnoutConstants.h:106
	const int32_t KI_IMAGE_GALLERY_NUM_PICTURES = 3;

	// BurnoutConstants.h:110
	const int32_t KI_IMAGE_GALLERY_NUM_OF_EACH_TYPE = 30;

	// BurnoutConstants.h:112
	const int32_t KI_MUGSHOTS_NUM_OF_TYPES = 5;

	// BurnoutConstants.h:113
	const int32_t KI_MUGSHOTS_MAX_MUGSHOTS = 150;

	// BurnoutConstants.h:114
	const int32_t KI_MUGSHOTS_FILENAME_TYPE_MULIPLER = 1000;

	// BurnoutConstants.h:117
	const int32_t KI_PHOTO_PIC_WIDTH = 160;

	// BurnoutConstants.h:118
	const int32_t KI_PHOTO_PIC_HEIGHT = 120;

	// BurnoutConstants.h:119
	const int32_t KI_COMPRESSED_PICTURE_BITS_PER_PIXEL = 4;

	// BurnoutConstants.h:120
	const int32_t KI_MUGSHOT_PICTURE_SIZE_BYTES = 9600;

	// BurnoutConstants.h:123
	const int32_t KI_MAX_TRAX_IN_GAME = 128;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	struct TakedownEvent;

	struct LandmarkIndex;

	struct StartLocation;

	struct CheckpointData;

	struct OpponentData;

	struct StartGameModeParams;

	struct GameModeParams;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BurnoutConstants.h:91
	enum EChallengeStatus {
		E_CHALLENGE_STATUS_ONGOING = 0,
		E_CHALLENGE_STATUS_SUCCESS = 1,
		E_CHALLENGE_STATUS_ABORTED = 2,
		E_CHALLENGE_STATUS_ABORTED_DUE_TO_PLAYER_LEAVE = 3,
		E_CHALLENGE_STATUS_ABORTED_BEFORE_STARTING = 4,
		E_CHALLENGE_STATUS_RESET_IF_NEEDED = 5,
		E_CHALLENGE_STATUS_FAILURE = 6,
		E_CHALLENGE_STATUS_COUNT = 7,
	}

	struct TakedownEvent;

	struct LandmarkIndex;

	struct StuntTypeInfo;

	struct StuntToDisplay;

	struct StuntInfo;

	struct StuntModeScoring;

	struct AchievementManagerPS3;

	struct StartLocation;

	struct CheckpointData;

	struct OpponentData;

	struct StartGameModeParams;

	struct GameModeParams;

	struct BufferedNewHighScore;

	struct NewHighScoreBuffer;

	struct GameStateModule;

	struct RoadRulesManager;

	struct StreetManagerDebugComponent;

	struct GameStateToGuiNewDirtyTrick;

	struct GameStateToGuiTriggeredDirtyTrick;

	struct GameStateToGuiEndingDirtyTrick;

	struct GameStateToGuiOvertakeEvent;

	struct GameStateToGuiFinishedRaceEvent;

	struct GameStateToGuiTookLeadEvent;

	struct GameStateToGuiTookLastEvent;

	struct GameStateToGuiOnTailEvent;

	struct ModeManager;

	struct TakedownManagerDebugComponent;

	struct TriggerQueryManagerDebugComponent;

	struct DriveThruManager;

	struct ChallengeManagerDebugComponent;

	struct CrashScoreDebugComponent;

	struct RoadRageModeScoring;

	struct ScoringSystem;

	struct OnlineRaceModeScoring;

	struct OnlineRoadRageModeScoring;

	struct NetworkRoundData;

	struct RaceCarPositioningData;

	struct OnlineBurningHomeRunModeScoring;

	struct CrashMode;

	struct PursuitMode;

	struct OnlineRaceMode;

	struct OnlineRoadRageMode;

	struct OnlineFugitiveMode;

	struct OnlineBurningHomeRunMode;

	struct OnlineFreeBurnMode;

	struct OnlineFreeBurnLobbyMode;

	struct OnlineShowtimeMode;

	struct NetworkRoundManager;

	struct ModeManagerDebugComponent;

	struct CombinedStringID;

	struct DriveThruTriggerData;

	struct TrainingManager;

	struct StuntManagerDebugComponent;

	struct OfflineGameMode;

}

// BurnoutConstants.h:39
extern EActiveRaceCarIndex & operator++(const EActiveRaceCarIndex &  leEnumIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BurnoutConstants.h:84
extern EGlobalRaceCarIndex operator++(const EGlobalRaceCarIndex &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BurnoutConstants.h:84
		EGlobalRaceCarIndex leOldEnumIndex;

	}
}

// BurnoutConstants.h:84
extern EGlobalRaceCarIndex & operator++(const EGlobalRaceCarIndex &  leEnumIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BurnoutConstants.h:91
	enum EChallengeStatus {
		E_CHALLENGE_STATUS_ONGOING = 0,
		E_CHALLENGE_STATUS_SUCCESS = 1,
		E_CHALLENGE_STATUS_ABORTED = 2,
		E_CHALLENGE_STATUS_ABORTED_DUE_TO_PLAYER_LEAVE = 3,
		E_CHALLENGE_STATUS_ABORTED_BEFORE_STARTING = 4,
		E_CHALLENGE_STATUS_RESET_IF_NEEDED = 5,
		E_CHALLENGE_STATUS_FAILURE = 6,
		E_CHALLENGE_STATUS_COUNT = 7,
	}

	struct LandmarkIndex;

	struct StuntTypeInfo;

	struct StuntToDisplay;

	struct StuntInfo;

	struct StuntModeScoring;

	struct AchievementManagerPS3;

	struct StartLocation;

	struct CheckpointData;

	struct OpponentData;

	struct StartGameModeParams;

	struct GameModeParams;

	struct SectionWalkData;

	struct BufferedNewHighScore;

	struct NewHighScoreBuffer;

	struct RoadRulesManager;

	struct StreetManagerDebugComponent;

	struct TakedownEvent;

	struct GameStateToGuiNewDirtyTrick;

	struct GameStateToGuiTriggeredDirtyTrick;

	struct GameStateToGuiEndingDirtyTrick;

	struct GameStateToGuiOvertakeEvent;

	struct GameStateToGuiFinishedRaceEvent;

	struct GameStateToGuiTookLeadEvent;

	struct GameStateToGuiTookLastEvent;

	struct GameStateToGuiOnTailEvent;

	struct ModeManager;

	struct TakedownManagerDebugComponent;

	struct TriggerQueryManagerDebugComponent;

	struct DriveThruManager;

	struct ChallengeManagerDebugComponent;

	struct CrashScoreDebugComponent;

	struct RoadRageModeScoring;

	struct ScoringSystem;

	struct PursuitModeScoring;

	struct NetworkRoundData;

	struct RaceCarPositioningData;

	struct OnlineBurningHomeRunModeScoring;

	struct GameModeState;

	struct BurnoutSkillzManager;

	struct GameMode;

	struct RaceMode;

	struct FaceOffMode;

	struct CrashMode;

	struct RoadRageMode;

	struct PursuitMode;

	struct BurningRouteMode;

	struct StuntAttackMode;

	struct SurvivorMode;

	struct OnlineRaceMode;

	struct OnlineRoadRageMode;

	struct OnlineFugitiveMode;

	struct OnlineBurningHomeRunMode;

	struct OnlineFreeBurnMode;

	struct OnlineFreeBurnLobbyMode;

	struct OnlineShowtimeMode;

	struct NetworkRoundManager;

	struct ModeManagerDebugComponent;

	struct CombinedStringID;

	struct FlybyManager;

	struct DriveThruTriggerData;

	struct TrainingManager;

	struct RoadRulesDebugComponent;

	struct StuntManagerDebugComponent;

	struct GridPositionAndScoreData;

	struct PlayerInfoStruct;

	struct VehicleScoreLookup;

	struct ComparisonData;

	struct OnlineLoadingState;

	struct OnlineSplashState;

	struct QuitState;

	struct ResultsState;

	struct OutroState;

	struct InProgressState;

	struct CountdownState;

	struct IntroState;

	struct OfflineGameMode;

	struct OnlineGameMode;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BurnoutConstants.h:91
	enum EChallengeStatus {
		E_CHALLENGE_STATUS_ONGOING = 0,
		E_CHALLENGE_STATUS_SUCCESS = 1,
		E_CHALLENGE_STATUS_ABORTED = 2,
		E_CHALLENGE_STATUS_ABORTED_DUE_TO_PLAYER_LEAVE = 3,
		E_CHALLENGE_STATUS_ABORTED_BEFORE_STARTING = 4,
		E_CHALLENGE_STATUS_RESET_IF_NEEDED = 5,
		E_CHALLENGE_STATUS_FAILURE = 6,
		E_CHALLENGE_STATUS_COUNT = 7,
	}

	struct LandmarkIndex;

	struct StuntTypeInfo;

	struct StuntToDisplay;

	struct StuntInfo;

	struct StuntModeScoring;

	struct AchievementManagerPS3;

	struct StartLocation;

	struct CheckpointData;

	struct OpponentData;

	struct StartGameModeParams;

	struct GameModeParams;

	struct BufferedNewHighScore;

	struct NewHighScoreBuffer;

	struct RoadRulesManager;

	struct StreetManagerDebugComponent;

	struct TakedownEvent;

	struct GameStateToGuiNewDirtyTrick;

	struct GameStateToGuiTriggeredDirtyTrick;

	struct GameStateToGuiEndingDirtyTrick;

	struct GameStateToGuiOvertakeEvent;

	struct GameStateToGuiFinishedRaceEvent;

	struct GameStateToGuiTookLeadEvent;

	struct GameStateToGuiTookLastEvent;

	struct GameStateToGuiOnTailEvent;

	struct ModeManager;

	struct TakedownManagerDebugComponent;

	struct TriggerQueryManagerDebugComponent;

	struct DriveThruManager;

	struct ChallengeManagerDebugComponent;

	struct CrashScoreDebugComponent;

	struct RoadRageModeScoring;

	struct ScoringSystem;

	struct OnlineRaceModeScoring;

	struct OnlineRoadRageModeScoring;

	struct NetworkRoundData;

	struct RaceCarPositioningData;

	struct OnlineBurningHomeRunModeScoring;

	struct CrashMode;

	struct PursuitMode;

	struct OnlineRaceMode;

	struct OnlineRoadRageMode;

	struct OnlineFugitiveMode;

	struct OnlineBurningHomeRunMode;

	struct OnlineFreeBurnMode;

	struct OnlineFreeBurnLobbyMode;

	struct OnlineShowtimeMode;

	struct NetworkRoundManager;

	struct ModeManagerDebugComponent;

	struct CombinedStringID;

	struct OfflineFlybyManager;

	struct DriveThruTriggerData;

	struct TrainingManager;

	struct RumbleManager;

	struct StuntManagerDebugComponent;

	struct ResetPlayerDebugComponent;

	struct AchievementManagerBase;

	struct RichPresenceManagerPS3;

	struct GameStateDebugComponent;

	struct OfflineGameMode;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BurnoutConstants.h:91
	enum EChallengeStatus {
		E_CHALLENGE_STATUS_ONGOING = 0,
		E_CHALLENGE_STATUS_SUCCESS = 1,
		E_CHALLENGE_STATUS_ABORTED = 2,
		E_CHALLENGE_STATUS_ABORTED_DUE_TO_PLAYER_LEAVE = 3,
		E_CHALLENGE_STATUS_ABORTED_BEFORE_STARTING = 4,
		E_CHALLENGE_STATUS_RESET_IF_NEEDED = 5,
		E_CHALLENGE_STATUS_FAILURE = 6,
		E_CHALLENGE_STATUS_COUNT = 7,
	}

	struct TakedownEvent;

	struct LandmarkIndex;

	struct StuntTypeInfo;

	struct StuntToDisplay;

	struct StuntInfo;

	struct StuntModeScoring;

	struct AchievementManagerPS3;

	struct StartLocation;

	struct CheckpointData;

	struct OpponentData;

	struct StartGameModeParams;

	struct GameModeParams;

	struct BufferedNewHighScore;

	struct NewHighScoreBuffer;

	struct RoadRulesManager;

	struct StreetManagerDebugComponent;

	struct GameStateToGuiNewDirtyTrick;

	struct GameStateToGuiTriggeredDirtyTrick;

	struct GameStateToGuiEndingDirtyTrick;

	struct GameStateToGuiOvertakeEvent;

	struct GameStateToGuiFinishedRaceEvent;

	struct GameStateToGuiTookLeadEvent;

	struct GameStateToGuiTookLastEvent;

	struct GameStateToGuiOnTailEvent;

	struct ModeManager;

	struct TakedownManagerDebugComponent;

	struct TriggerQueryManagerDebugComponent;

	struct DriveThruManager;

	struct ChallengeManagerDebugComponent;

	struct CrashScoreDebugComponent;

	struct RoadRageModeScoring;

	struct ScoringSystem;

	struct OnlineRaceModeScoring;

	struct OnlineRoadRageModeScoring;

	struct NetworkRoundData;

	struct RaceCarPositioningData;

	struct OnlineBurningHomeRunModeScoring;

	struct CrashMode;

	struct PursuitMode;

	struct OnlineRaceMode;

	struct OnlineRoadRageMode;

	struct OnlineFugitiveMode;

	struct OnlineBurningHomeRunMode;

	struct OnlineFreeBurnMode;

	struct OnlineFreeBurnLobbyMode;

	struct OnlineShowtimeMode;

	struct NetworkRoundManager;

	struct ModeManagerDebugComponent;

	struct CombinedStringID;

	struct DriveThruTriggerData;

	struct TrainingManager;

	struct StuntManagerDebugComponent;

	struct OfflineGameMode;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	struct LandmarkIndex;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	struct LandmarkIndex;

	struct StuntToDisplay;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BurnoutConstants.h:91
	enum EChallengeStatus {
		E_CHALLENGE_STATUS_ONGOING = 0,
		E_CHALLENGE_STATUS_SUCCESS = 1,
		E_CHALLENGE_STATUS_ABORTED = 2,
		E_CHALLENGE_STATUS_ABORTED_DUE_TO_PLAYER_LEAVE = 3,
		E_CHALLENGE_STATUS_ABORTED_BEFORE_STARTING = 4,
		E_CHALLENGE_STATUS_RESET_IF_NEEDED = 5,
		E_CHALLENGE_STATUS_FAILURE = 6,
		E_CHALLENGE_STATUS_COUNT = 7,
	}

	struct LandmarkIndex;

	struct StuntTypeInfo;

	struct StuntToDisplay;

	struct StuntInfo;

	struct StuntModeScoring;

	struct AchievementManagerPS3;

	struct BufferedNewHighScore;

	struct NewHighScoreBuffer;

	struct GameStateModule;

	struct RoadRulesManager;

	struct StreetManagerDebugComponent;

	struct TakedownEvent;

	struct StartLocation;

	struct CheckpointData;

	struct OpponentData;

	struct StartGameModeParams;

	struct GameModeParams;

	struct GameStateToGuiNewDirtyTrick;

	struct GameStateToGuiTriggeredDirtyTrick;

	struct GameStateToGuiEndingDirtyTrick;

	struct GameStateToGuiOvertakeEvent;

	struct GameStateToGuiFinishedRaceEvent;

	struct GameStateToGuiTookLeadEvent;

	struct GameStateToGuiTookLastEvent;

	struct GameStateToGuiOnTailEvent;

	struct ModeManager;

	struct TakedownManagerDebugComponent;

	struct TriggerQueryManagerDebugComponent;

	struct DriveThruManager;

	struct ChallengeManagerDebugComponent;

	struct CrashScoreDebugComponent;

	struct RoadRageModeScoring;

	struct ScoringSystem;

	struct OnlineRaceModeScoring;

	struct OnlineRoadRageModeScoring;

	struct NetworkRoundData;

	struct RaceCarPositioningData;

	struct OnlineBurningHomeRunModeScoring;

	struct CrashMode;

	struct PursuitMode;

	struct OnlineRaceMode;

	struct OnlineRoadRageMode;

	struct OnlineFugitiveMode;

	struct OnlineBurningHomeRunMode;

	struct OnlineFreeBurnMode;

	struct OnlineFreeBurnLobbyMode;

	struct OnlineShowtimeMode;

	struct NetworkRoundManager;

	struct ModeManagerDebugComponent;

	struct CombinedStringID;

	struct DriveThruTriggerData;

	struct TrainingManager;

	struct StuntManagerDebugComponent;

	struct OfflineGameMode;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BurnoutConstants.h:91
	enum EChallengeStatus {
		E_CHALLENGE_STATUS_ONGOING = 0,
		E_CHALLENGE_STATUS_SUCCESS = 1,
		E_CHALLENGE_STATUS_ABORTED = 2,
		E_CHALLENGE_STATUS_ABORTED_DUE_TO_PLAYER_LEAVE = 3,
		E_CHALLENGE_STATUS_ABORTED_BEFORE_STARTING = 4,
		E_CHALLENGE_STATUS_RESET_IF_NEEDED = 5,
		E_CHALLENGE_STATUS_FAILURE = 6,
		E_CHALLENGE_STATUS_COUNT = 7,
	}

	struct LandmarkIndex;

	struct StuntToDisplay;

	struct BufferedNewHighScore;

	struct NewHighScoreBuffer;

	struct GameStateModule;

	struct RoadRulesManager;

	struct StreetManagerDebugComponent;

	struct TriggerQueryManager;

	struct TakedownEvent;

	struct GameStateToGuiNewDirtyTrick;

	struct GameStateToGuiTriggeredDirtyTrick;

	struct GameStateToGuiEndingDirtyTrick;

	struct GameStateToGuiOvertakeEvent;

	struct GameStateToGuiFinishedRaceEvent;

	struct GameStateToGuiTookLeadEvent;

	struct GameStateToGuiTookLastEvent;

	struct GameStateToGuiOnTailEvent;

	struct ChallengeManagerDebugComponent;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	struct TakedownEvent;

	struct LandmarkIndex;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BurnoutConstants.h:91
	enum EChallengeStatus {
		E_CHALLENGE_STATUS_ONGOING = 0,
		E_CHALLENGE_STATUS_SUCCESS = 1,
		E_CHALLENGE_STATUS_ABORTED = 2,
		E_CHALLENGE_STATUS_ABORTED_DUE_TO_PLAYER_LEAVE = 3,
		E_CHALLENGE_STATUS_ABORTED_BEFORE_STARTING = 4,
		E_CHALLENGE_STATUS_RESET_IF_NEEDED = 5,
		E_CHALLENGE_STATUS_FAILURE = 6,
		E_CHALLENGE_STATUS_COUNT = 7,
	}

	struct TakedownEvent;

	struct LandmarkIndex;

	struct StartLocation;

	struct CheckpointData;

	struct OpponentData;

	struct StartGameModeParams;

	struct GameModeParams;

	struct BufferedNewHighScore;

	struct NewHighScoreBuffer;

	struct GameStateModule;

	struct RoadRulesManager;

	struct StreetManagerDebugComponent;

	struct TriggerQueryManager;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BurnoutConstants.h:91
	enum EChallengeStatus {
		E_CHALLENGE_STATUS_ONGOING = 0,
		E_CHALLENGE_STATUS_SUCCESS = 1,
		E_CHALLENGE_STATUS_ABORTED = 2,
		E_CHALLENGE_STATUS_ABORTED_DUE_TO_PLAYER_LEAVE = 3,
		E_CHALLENGE_STATUS_ABORTED_BEFORE_STARTING = 4,
		E_CHALLENGE_STATUS_RESET_IF_NEEDED = 5,
		E_CHALLENGE_STATUS_FAILURE = 6,
		E_CHALLENGE_STATUS_COUNT = 7,
	}

	struct LandmarkIndex;

	struct BufferedNewHighScore;

	struct NewHighScoreBuffer;

	struct GameStateModule;

	struct RoadRulesManager;

	struct StreetManagerDebugComponent;

	struct TriggerQueryManager;

	struct TakedownEvent;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BurnoutConstants.h:91
	enum EChallengeStatus {
		E_CHALLENGE_STATUS_ONGOING = 0,
		E_CHALLENGE_STATUS_SUCCESS = 1,
		E_CHALLENGE_STATUS_ABORTED = 2,
		E_CHALLENGE_STATUS_ABORTED_DUE_TO_PLAYER_LEAVE = 3,
		E_CHALLENGE_STATUS_ABORTED_BEFORE_STARTING = 4,
		E_CHALLENGE_STATUS_RESET_IF_NEEDED = 5,
		E_CHALLENGE_STATUS_FAILURE = 6,
		E_CHALLENGE_STATUS_COUNT = 7,
	}

	struct LandmarkIndex;

	struct StuntToDisplay;

	struct TakedownEvent;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BurnoutConstants.h:91
	enum EChallengeStatus {
		E_CHALLENGE_STATUS_ONGOING = 0,
		E_CHALLENGE_STATUS_SUCCESS = 1,
		E_CHALLENGE_STATUS_ABORTED = 2,
		E_CHALLENGE_STATUS_ABORTED_DUE_TO_PLAYER_LEAVE = 3,
		E_CHALLENGE_STATUS_ABORTED_BEFORE_STARTING = 4,
		E_CHALLENGE_STATUS_RESET_IF_NEEDED = 5,
		E_CHALLENGE_STATUS_FAILURE = 6,
		E_CHALLENGE_STATUS_COUNT = 7,
	}

	struct LandmarkIndex;

	struct StuntTypeInfo;

	struct StuntToDisplay;

	struct StuntInfo;

	struct StuntModeScoring;

	struct AchievementManagerPS3;

	struct StartLocation;

	struct CheckpointData;

	struct OpponentData;

	struct StartGameModeParams;

	struct GameModeParams;

	struct BufferedNewHighScore;

	struct NewHighScoreBuffer;

	struct GameStateModule;

	struct RoadRulesManager;

	struct StreetManagerDebugComponent;

	struct TakedownEvent;

	struct GameStateToGuiNewDirtyTrick;

	struct GameStateToGuiTriggeredDirtyTrick;

	struct GameStateToGuiEndingDirtyTrick;

	struct GameStateToGuiOvertakeEvent;

	struct GameStateToGuiFinishedRaceEvent;

	struct GameStateToGuiTookLeadEvent;

	struct GameStateToGuiTookLastEvent;

	struct GameStateToGuiOnTailEvent;

	struct ModeManager;

	struct TakedownManagerDebugComponent;

	struct TriggerQueryManagerDebugComponent;

	struct DriveThruManager;

	struct ChallengeManagerDebugComponent;

	struct CrashScoreDebugComponent;

	struct RoadRageModeScoring;

	struct ScoringSystem;

	struct OnlineRaceModeScoring;

	struct OnlineRoadRageModeScoring;

	struct NetworkRoundData;

	struct RaceCarPositioningData;

	struct OnlineBurningHomeRunModeScoring;

	struct CrashMode;

	struct PursuitMode;

	struct OnlineRaceMode;

	struct OnlineRoadRageMode;

	struct OnlineFugitiveMode;

	struct OnlineBurningHomeRunMode;

	struct OnlineFreeBurnMode;

	struct OnlineFreeBurnLobbyMode;

	struct OnlineShowtimeMode;

	struct NetworkRoundManager;

	struct ModeManagerDebugComponent;

	struct CombinedStringID;

	struct DriveThruTriggerData;

	struct TrainingManager;

	struct StuntManagerDebugComponent;

	struct OfflineGameMode;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	struct LandmarkIndex;

	struct TakedownEvent;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	struct TakedownEvent;

	struct LandmarkIndex;

	struct StuntToDisplay;

	struct StartLocation;

	struct CheckpointData;

	struct OpponentData;

	struct StartGameModeParams;

	struct GameModeParams;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BurnoutConstants.h:91
	enum EChallengeStatus {
		E_CHALLENGE_STATUS_ONGOING = 0,
		E_CHALLENGE_STATUS_SUCCESS = 1,
		E_CHALLENGE_STATUS_ABORTED = 2,
		E_CHALLENGE_STATUS_ABORTED_DUE_TO_PLAYER_LEAVE = 3,
		E_CHALLENGE_STATUS_ABORTED_BEFORE_STARTING = 4,
		E_CHALLENGE_STATUS_RESET_IF_NEEDED = 5,
		E_CHALLENGE_STATUS_FAILURE = 6,
		E_CHALLENGE_STATUS_COUNT = 7,
	}

	struct TakedownEvent;

	struct LandmarkIndex;

	struct StuntTypeInfo;

	struct StuntToDisplay;

	struct StuntInfo;

	struct StuntModeScoring;

	// Declaration
	struct AchievementManagerPS3 {
	public:
		AchievementManagerPS3();

	}

	struct StartLocation;

	struct CheckpointData;

	struct OpponentData;

	struct StartGameModeParams;

	struct GameModeParams;

	struct BufferedNewHighScore;

	struct NewHighScoreBuffer;

	// Declaration
	struct GameStateModule {
	public:
		GameStateModule();

		~GameStateModule();

	}

	struct RoadRulesManager;

	// Declaration
	struct StreetManagerDebugComponent {
	public:
		StreetManagerDebugComponent();

	}

	struct GameStateToGuiNewDirtyTrick;

	struct GameStateToGuiTriggeredDirtyTrick;

	struct GameStateToGuiEndingDirtyTrick;

	struct GameStateToGuiOvertakeEvent;

	struct GameStateToGuiFinishedRaceEvent;

	struct GameStateToGuiTookLeadEvent;

	struct GameStateToGuiTookLastEvent;

	struct GameStateToGuiOnTailEvent;

	struct ModeManager;

	// Declaration
	struct TakedownManagerDebugComponent {
	public:
		TakedownManagerDebugComponent();

	}

	// Declaration
	struct TriggerQueryManagerDebugComponent {
	public:
		TriggerQueryManagerDebugComponent();

	}

	struct DriveThruManager;

	// Declaration
	struct ChallengeManagerDebugComponent {
	public:
		ChallengeManagerDebugComponent();

	}

	// Declaration
	struct CrashScoreDebugComponent {
	public:
		CrashScoreDebugComponent();

	}

	struct RoadRageModeScoring;

	struct ScoringSystem;

	// Declaration
	struct OnlineRaceModeScoring {
	public:
		OnlineRaceModeScoring();

	}

	// Declaration
	struct OnlineRoadRageModeScoring {
	public:
		OnlineRoadRageModeScoring();

	}

	struct NetworkRoundData;

	struct RaceCarPositioningData;

	// Declaration
	struct OnlineBurningHomeRunModeScoring {
	public:
		OnlineBurningHomeRunModeScoring();

	}

	struct GameModeState;

	struct CrashMode;

	// Declaration
	struct PursuitMode {
	public:
		PursuitMode();

	}

	// Declaration
	struct OnlineRaceMode {
	public:
		OnlineRaceMode();

	}

	// Declaration
	struct OnlineRoadRageMode {
	public:
		OnlineRoadRageMode();

	}

	// Declaration
	struct OnlineFugitiveMode {
	public:
		OnlineFugitiveMode();

	}

	// Declaration
	struct OnlineBurningHomeRunMode {
	public:
		OnlineBurningHomeRunMode();

	}

	// Declaration
	struct OnlineFreeBurnMode {
	public:
		OnlineFreeBurnMode();

	}

	// Declaration
	struct OnlineFreeBurnLobbyMode {
	public:
		OnlineFreeBurnLobbyMode();

	}

	struct OnlineShowtimeMode;

	struct NetworkRoundManager;

	// Declaration
	struct ModeManagerDebugComponent {
	public:
		ModeManagerDebugComponent();

	}

	struct CombinedStringID;

	struct FlybyManager;

	// Declaration
	struct OfflineFlybyManager {
	public:
		OfflineFlybyManager();

	}

	struct DriveThruTriggerData;

	struct TrainingManager;

	struct RumbleManager;

	// Declaration
	struct StuntManagerDebugComponent {
	public:
		StuntManagerDebugComponent();

	}

	struct AchievementManagerBase;

	// Declaration
	struct OfflineGameMode {
	public:
		OfflineGameMode();

	}

	// Declaration
	struct CountdownState {
	public:
		CountdownState();

	}

	// Declaration
	struct IntroState {
	public:
		IntroState();

	}

	// Declaration
	struct InProgressState {
	public:
		InProgressState();

	}

	// Declaration
	struct ResultsState {
	public:
		ResultsState();

	}

	// Declaration
	struct QuitState {
	public:
		QuitState();

	}

	// Declaration
	struct OnlineLoadingState {
	public:
		OnlineLoadingState();

	}

	// Declaration
	struct OnlineSplashState {
	public:
		OnlineSplashState();

	}

	// Declaration
	struct RichPresenceManagerPS3 {
	public:
		RichPresenceManagerPS3();

	}

}

