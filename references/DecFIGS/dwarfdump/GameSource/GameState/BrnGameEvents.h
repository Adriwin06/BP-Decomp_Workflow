// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameEvents.h:69
		using BrnNetwork::BrnNetworkModuleIO;

		// BrnGameEvents.h:76
		enum EGameEventType {
			E_EVENT_SETUP_PLAYER_CAR = 0,
			E_EVENT_TELEPORT_PLAYER_CAR = 1,
			E_EVENT_CHANGE_PLAYER_CAR = 2,
			E_EVENT_CHANGE_RANK_NUMBER = 3,
			E_EVENT_SELECT_PLAYER_CAR = 4,
			E_EVENT_CHANGE_PLAYER_CAR_COLOUR = 5,
			E_EVENT_PLAYER_CAR_COLOUR_REQUEST = 6,
			E_EVENT_CHANGE_NETWORK_CAR = 7,
			E_EVENT_GAME_START = 8,
			E_EVENT_STREAMING_COMPLETE = 9,
			E_EVENT_CONTROLLER_DISCONNECTED = 10,
			E_EVENT_CONFIG_CONTROLLER = 11,
			E_EVENT_RIVAL_UPDATE_REQUESTED = 12,
			E_EVENT_PLAYER_CAR_PLACED_ON_TRACK = 13,
			E_EVENT_LOADING_SCREEN_LOADED = 14,
			E_EVENT_PLAYER_ENTERS_RACE_MAP = 15,
			E_EVENT_ONLINE_CAR_SELECT = 16,
			E_EVENT_START_NETWORK_GAME = 17,
			E_EVENT_START_NETWORK_ROUND = 18,
			E_EVENT_FINISH_NETWORK_ROUND = 19,
			E_EVENT_PLAYER_ACCEPTED_MODE = 20,
			E_EVENT_MARKED_MAN_LOADED = 21,
			E_EVENT_FINISHED_SYNCING_PLAYERS = 22,
			E_EVENT_FINISHED_SPLASH = 23,
			E_EVENT_FINISHED_MAP_PAN = 24,
			E_EVENT_GUI_FINISHED_OFFLINE_PRE_EVENT = 25,
			E_EVENT_RESULTS_FINISHED = 26,
			E_EVENT_POST_EVENT_LEAVE = 27,
			E_EVENT_PLAYER_EXITED_MODE = 28,
			E_EVENT_REQUEST_SPECIFIC_PRESET_RACES = 29,
			E_EVENT_PREPARE_FOR_ONLINE = 30,
			E_EVENT_LAP_COMPLETE = 31,
			E_EVENT_VEHICLE_IMPACT = 32,
			E_EVENT_PLAYER_FINISHED_MODE = 33,
			E_EVENT_PLAYER_PAUSE_STATE_CHANGED = 34,
			E_EVENT_PAYBACK_TRIGGERABLE = 35,
			E_EVENT_ENTER_REPLAY = 36,
			E_EVENT_LEAVE_REPLAY = 37,
			E_EVENT_PLAYER_RESET_ON_TRACK = 38,
			E_EVENT_RACE_CAR_DRIVING_IN_CRASH = 39,
			E_EVENT_PLAYER_IN_SHORT_CUT = 40,
			E_EVENT_RACE_CAR_NEEDS_HIDING = 41,
			E_EVENT_PLAYER_CAN_SKIP_CRASH = 42,
			E_EVENT_PLAYER_CRASH_ENDING = 43,
			E_EVENT_TRAINING_PAUSE_STATE_CHANGED = 44,
			E_EVENT_TRIGGER_CRASH_BREAKER = 45,
			E_EVENT_CANCEL_CRASH_BREAKER = 46,
			E_EVENT_PICKUP = 47,
			E_EVENT_VEHICLE_LEAPT = 48,
			E_EVENT_ENTER_NEW_ROAD = 49,
			E_EVENT_SHOWTIME_UPDATE = 50,
			E_EVENT_SHOWTIME_MODE_SWITCH = 51,
			E_EVENT_SHOWTIME_BOUNCE_PROMPT = 52,
			E_EVENT_JUST_BOUNCED = 53,
			E_EVENT_JUST_APPLIED_EXTRA_SPIN = 54,
			E_EVENT_POWER_PARK_RESULT = 55,
			E_EVENT_BOOST_TIME_COMPLETE = 56,
			E_EVENT_START_OFFLINE_GAME_MODE = 57,
			E_EVENT_REQUEST_INVITE = 58,
			E_EVENT_PREPARE_FOR_INVITE = 59,
			E_EVENT_UPDATE_PREPARE_FOR_INVITE = 60,
			E_EVENT_PREPARED_FOR_INVITE = 61,
			E_EVENT_PERFORM_INVITE = 62,
			E_EVENT_INVITE_COMPLETE = 63,
			E_EVENT_VEHICLE_CRASHED = 64,
			E_EVENT_NEAR_MISS = 65,
			E_EVENT_NEAR_MISS_CHAIN_IN_PROGRESS = 66,
			E_EVENT_NEAR_MISS_CHAIN_COMPLETED = 67,
			E_EVENT_DRIFTING = 68,
			E_EVENT_SPINNING = 69,
			E_EVENT_IN_AIR = 70,
			E_EVENT_ONCOMING = 71,
			E_EVENT_ONCOMING_COMPLETED = 72,
			E_EVENT_TAILGATING = 73,
			E_EVENT_TRAFFIC_CHECKING = 74,
			E_EVENT_TRAFFIC_CHECKING_CHAIN = 75,
			E_EVENT_CRASH_COMBO_ITEM = 76,
			E_EVENT_AFTERTOUCH = 77,
			E_EVENT_EVENT_STATE_REQUEST = 78,
			E_GUI_HAS_STARTED_GAME = 79,
			E_EVENT_GAME_STATS_REQUEST = 80,
			E_EVENT_RANK_INFO_REQUEST = 81,
			E_EVENT_PLAYER_INFO_REQUEST = 82,
			E_EVENT_UNLOCKED_LIVERY_REQUEST = 83,
			E_EVENT_CAR_UNLOCK_TICKER_CLOSED = 84,
			E_EVENT_LANDMARK_ROUTE_REQUEST = 85,
			E_EVENT_LANDMARK_RACES_REQUEST = 86,
			E_EVENT_CAR_PERSISTENT_INFO_REQUEST = 87,
			E_EVENT_CAR_VARIABLE_INFO_REQUEST = 88,
			E_EVENT_CAR_SELECTION_REQUEST = 89,
			E_EVENT_LANDMARK_VARIABLE_INFO_REQUEST = 90,
			E_EVENT_ADD_CUSTOM_RACE = 91,
			E_EVENT_UPDATE_CUSTOM_RACE = 92,
			E_EVENT_REMOVE_CUSTOM_RACE = 93,
			E_EVENT_CRASHNAV_STATE_CHANGED = 94,
			E_EVENT_CARSELECT_STATE_CHANGED = 95,
			E_EVENT_REGION_FROM_POSITION_REQUEST = 96,
			E_EVENT_ROAD_RULE_DATA_REQUEST = 97,
			E_EVENT_ROAD_RULE_ROAD_SCORE_REQUEST = 98,
			E_EVENT_ROAD_RULE_BATCH_DATA_REQUEST = 99,
			E_EVENT_ROAD_RULE_INTERACTION_CHANGE = 100,
			E_EVENT_ROAD_RULE_MODE_SWITCH = 101,
			E_EVENT_ALL_RIVALRY_DATA_REQUEST = 102,
			E_EVENT_ONE_RIVALRY_DATA_REQUEST = 103,
			E_EVENT_GUI_SWITCHES_ROAD_RULE_STATE = 104,
			E_EVENT_REQUEST_CAR_UNLOCK_EVENT = 105,
			E_CAR_CONTROL_CHANGE_REQUEST = 106,
			E_EVENT_GUI_AWARD_SEQUENCE_START = 107,
			E_EVENT_GUI_AWARD_SEQUENCE_END = 108,
			E_EVENT_PROGRESSION_PROFILE_LOADED = 109,
			E_EVENT_RESET_PROFILE_REQUEST = 110,
			E_EVENT_RECORD_PROP_HIT = 111,
			E_EVENT_REQUEST_PROP_PROGRESSION = 112,
			E_EVENT_GAME_TRAINING_REQUEST = 113,
			E_EVENT_CHECK_FOR_COMPLETION = 114,
			E_EVENT_WORLD_REGION_CHANGE = 115,
			E_EVENT_REQUEST_FREE_ROAM_TRACKER = 116,
			E_EVENT_PLAYER_ROUTE_UPDATED = 117,
			E_EVENT_OVERHEAD_SIGN_HIT = 118,
			E_EVENT_COMPLETED_STUNT = 119,
			E_EVENT_INPROGRESS_STUNT = 120,
			E_EVENT_REMOTE_PLAYER_DISCONNECTED = 121,
			E_EVENT_LOCAL_PLAYER_CONNECTED = 122,
			E_EVENT_LOCAL_PLAYER_DISCONNECTED = 123,
			E_EVENT_LOCAL_PLAYER_LEFT_LOBBY = 124,
			E_EVENT_ONLINE_GAME_PARAMS_CHANGED = 125,
			E_EVENT_ONLINE_GAME_LAUNCHED = 126,
			E_EVENT_ONLINE_PLAYER_ADDED = 127,
			E_EVENT_ONLINE_PLAYER_FINALISED = 128,
			E_EVENT_ONLINE_PLAYER_REMOVED = 129,
			E_EVENT_ONLINE_ROAD_RULES_PB_RECV = 130,
			E_EVENT_ONLINE_ROAD_RULES_UPLOADED = 131,
			E_EVENT_ONLINE_ROAD_RULES_DOWNLOADED = 132,
			E_EVENT_ONLINE_ROAD_RULES_CONNECT_INFO = 133,
			E_EVENT_ONLINE_PLAYER_CHANGED_CAR = 134,
			E_EVENT_ONLINE_COLLECTABLE = 135,
			E_EVENT_ONLINE_IMAGE_RECEIVED = 136,
			E_EVENT_ONLINE_CAPTURE_WINNER_PHOTO_FINISH = 137,
			E_EVENT_ONLINE_IMAGE_SEND_ABORTED = 138,
			E_EVENT_ONLINE_NEW_BURNOUT_SKILLZ = 139,
			E_EVENT_ONLINE_NEW_HOST = 140,
			E_EVENT_REMOTE_PLAYER_TRIGGERED_CHECKPOINT = 141,
			E_EVENT_ONLINE_RIVAL_COUNT = 142,
			E_EVENT_LEFT_ONLINE_POST_EVENT = 143,
			E_EVENT_ONLINE_CAUGHT_FEVER = 144,
			E_EVENT_ONLINE_MUGSHOT_SENT = 145,
			E_EVENT_ONLINE_CREATED_CUSTOM_ROUTE = 146,
			E_EVENT_RIVAL_SHUTDOWN_DISPLAY_FINSHED = 147,
			E_EVENT_BUDDY_REMOVED = 148,
			E_EVENT_INSTANT_FREEBURN = 149,
			E_EVENT_BURNING_HOME_RUN_SWITCHED_RUNNER = 150,
			E_EVENT_IMAGE_TO_SAVE = 151,
			E_EVENT_IMAGE_FILES_SAVED = 152,
			E_EVENT_IMAGE_GALLERY_REQUEST = 153,
			E_EVENT_IMAGE_GALLERY_COUNT_REQUEST = 154,
			E_EVENT_IMAGE_GALLERY_DATA_REQUEST = 155,
			E_EVENT_IMAGE_FILES_LOADED = 156,
			E_EVENT_FREEBURN_CHALLENGE_SELECTED = 157,
			E_EVENT_FREEBURN_CHALLENGE_SELECTED_REMOTELY = 158,
			E_EVENT_FREEBURN_CHALLENGE_TRIGGERED_REMOTELY = 159,
			E_EVENT_FREEBURN_CHALLENGE_ACTION_SUCCESS = 160,
			E_EVENT_FREEBURN_CHALLENGE_RESET = 161,
			E_EVENT_FREEBURN_CHALLENGE_ENDED = 162,
			E_EVENT_TRIGGER_FREEBURN_CHALLENGE = 163,
			E_EVENT_REQUEST_EVERY_PLAYER_COMPLETION_STATUS = 164,
			E_EVENT_FREEBURN_CHALLENGE_SUCCESS_UPDATE = 165,
			E_EVENT_FREEBURN_CHALLENGE_SUCCESS = 166,
			E_EVENT_ACTIVE_FREEBURN_CHALLENGE = 167,
			E_EVENT_MODE_MANAGER_ROUTE_INFO = 168,
			E_EVENT_COUNT = 169,
		}

		// BrnGameEvents.h:286
		const int32_t KI_EVENT_MANAGER_DEFAULT_EVENT_QUEUE_LENGTH = 1536;

	}

}

// BrnGameEvents.h:301
extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

// BrnGameEvents.h:1688
extern const int32_t KI_MAX_POINTS = 2;

// BrnGameEvents.h:314
struct BrnGameState::GameStateModuleIO::GameEventQueue : public VariableEventQueue<1536,16> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_RECORD_PROP_HIT> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:413
struct BrnGameState::GameStateModuleIO::RecordPropHitEvent : public GameEvent<E_EVENT_RECORD_PROP_HIT> {
	// BrnGameEvents.h:415
	Vector3 mPosition;

	// BrnGameEvents.h:416
	uint16_t muZoneId;

	// BrnGameEvents.h:417
	uint16_t muPropId;

	// BrnGameEvents.h:418
	bool mbHitBefore;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_OVERHEAD_SIGN_HIT> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:429
struct BrnGameState::GameStateModuleIO::HitOverheadSignEvent : public GameEvent<E_EVENT_OVERHEAD_SIGN_HIT> {
	// BrnGameEvents.h:431
	uint8_t muRaceCarId;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameEvents.h:69
		using BrnNetwork::BrnNetworkModuleIO;

		// BrnGameEvents.h:76
		enum EGameEventType {
			E_EVENT_SETUP_PLAYER_CAR = 0,
			E_EVENT_TELEPORT_PLAYER_CAR = 1,
			E_EVENT_CHANGE_PLAYER_CAR = 2,
			E_EVENT_CHANGE_RANK_NUMBER = 3,
			E_EVENT_SELECT_PLAYER_CAR = 4,
			E_EVENT_CHANGE_PLAYER_CAR_COLOUR = 5,
			E_EVENT_PLAYER_CAR_COLOUR_REQUEST = 6,
			E_EVENT_CHANGE_NETWORK_CAR = 7,
			E_EVENT_GAME_START = 8,
			E_EVENT_STREAMING_COMPLETE = 9,
			E_EVENT_CONTROLLER_DISCONNECTED = 10,
			E_EVENT_CONFIG_CONTROLLER = 11,
			E_EVENT_RIVAL_UPDATE_REQUESTED = 12,
			E_EVENT_PLAYER_CAR_PLACED_ON_TRACK = 13,
			E_EVENT_LOADING_SCREEN_LOADED = 14,
			E_EVENT_PLAYER_ENTERS_RACE_MAP = 15,
			E_EVENT_ONLINE_CAR_SELECT = 16,
			E_EVENT_START_NETWORK_GAME = 17,
			E_EVENT_START_NETWORK_ROUND = 18,
			E_EVENT_FINISH_NETWORK_ROUND = 19,
			E_EVENT_PLAYER_ACCEPTED_MODE = 20,
			E_EVENT_MARKED_MAN_LOADED = 21,
			E_EVENT_FINISHED_SYNCING_PLAYERS = 22,
			E_EVENT_FINISHED_SPLASH = 23,
			E_EVENT_FINISHED_MAP_PAN = 24,
			E_EVENT_GUI_FINISHED_OFFLINE_PRE_EVENT = 25,
			E_EVENT_RESULTS_FINISHED = 26,
			E_EVENT_POST_EVENT_LEAVE = 27,
			E_EVENT_PLAYER_EXITED_MODE = 28,
			E_EVENT_REQUEST_SPECIFIC_PRESET_RACES = 29,
			E_EVENT_PREPARE_FOR_ONLINE = 30,
			E_EVENT_LAP_COMPLETE = 31,
			E_EVENT_VEHICLE_IMPACT = 32,
			E_EVENT_PLAYER_FINISHED_MODE = 33,
			E_EVENT_PLAYER_PAUSE_STATE_CHANGED = 34,
			E_EVENT_PAYBACK_TRIGGERABLE = 35,
			E_EVENT_ENTER_REPLAY = 36,
			E_EVENT_LEAVE_REPLAY = 37,
			E_EVENT_PLAYER_RESET_ON_TRACK = 38,
			E_EVENT_RACE_CAR_DRIVING_IN_CRASH = 39,
			E_EVENT_PLAYER_IN_SHORT_CUT = 40,
			E_EVENT_RACE_CAR_NEEDS_HIDING = 41,
			E_EVENT_PLAYER_CAN_SKIP_CRASH = 42,
			E_EVENT_PLAYER_CRASH_ENDING = 43,
			E_EVENT_TRAINING_PAUSE_STATE_CHANGED = 44,
			E_EVENT_TRIGGER_CRASH_BREAKER = 45,
			E_EVENT_CANCEL_CRASH_BREAKER = 46,
			E_EVENT_PICKUP = 47,
			E_EVENT_VEHICLE_LEAPT = 48,
			E_EVENT_ENTER_NEW_ROAD = 49,
			E_EVENT_SHOWTIME_UPDATE = 50,
			E_EVENT_SHOWTIME_MODE_SWITCH = 51,
			E_EVENT_SHOWTIME_BOUNCE_PROMPT = 52,
			E_EVENT_JUST_BOUNCED = 53,
			E_EVENT_JUST_APPLIED_EXTRA_SPIN = 54,
			E_EVENT_POWER_PARK_RESULT = 55,
			E_EVENT_BOOST_TIME_COMPLETE = 56,
			E_EVENT_START_OFFLINE_GAME_MODE = 57,
			E_EVENT_REQUEST_INVITE = 58,
			E_EVENT_PREPARE_FOR_INVITE = 59,
			E_EVENT_UPDATE_PREPARE_FOR_INVITE = 60,
			E_EVENT_PREPARED_FOR_INVITE = 61,
			E_EVENT_PERFORM_INVITE = 62,
			E_EVENT_INVITE_COMPLETE = 63,
			E_EVENT_VEHICLE_CRASHED = 64,
			E_EVENT_NEAR_MISS = 65,
			E_EVENT_NEAR_MISS_CHAIN_IN_PROGRESS = 66,
			E_EVENT_NEAR_MISS_CHAIN_COMPLETED = 67,
			E_EVENT_DRIFTING = 68,
			E_EVENT_SPINNING = 69,
			E_EVENT_IN_AIR = 70,
			E_EVENT_ONCOMING = 71,
			E_EVENT_ONCOMING_COMPLETED = 72,
			E_EVENT_TAILGATING = 73,
			E_EVENT_TRAFFIC_CHECKING = 74,
			E_EVENT_TRAFFIC_CHECKING_CHAIN = 75,
			E_EVENT_CRASH_COMBO_ITEM = 76,
			E_EVENT_AFTERTOUCH = 77,
			E_EVENT_EVENT_STATE_REQUEST = 78,
			E_GUI_HAS_STARTED_GAME = 79,
			E_EVENT_GAME_STATS_REQUEST = 80,
			E_EVENT_RANK_INFO_REQUEST = 81,
			E_EVENT_PLAYER_INFO_REQUEST = 82,
			E_EVENT_UNLOCKED_LIVERY_REQUEST = 83,
			E_EVENT_CAR_UNLOCK_TICKER_CLOSED = 84,
			E_EVENT_LANDMARK_ROUTE_REQUEST = 85,
			E_EVENT_LANDMARK_RACES_REQUEST = 86,
			E_EVENT_CAR_PERSISTENT_INFO_REQUEST = 87,
			E_EVENT_CAR_VARIABLE_INFO_REQUEST = 88,
			E_EVENT_CAR_SELECTION_REQUEST = 89,
			E_EVENT_LANDMARK_VARIABLE_INFO_REQUEST = 90,
			E_EVENT_ADD_CUSTOM_RACE = 91,
			E_EVENT_UPDATE_CUSTOM_RACE = 92,
			E_EVENT_REMOVE_CUSTOM_RACE = 93,
			E_EVENT_CRASHNAV_STATE_CHANGED = 94,
			E_EVENT_CARSELECT_STATE_CHANGED = 95,
			E_EVENT_REGION_FROM_POSITION_REQUEST = 96,
			E_EVENT_ROAD_RULE_DATA_REQUEST = 97,
			E_EVENT_ROAD_RULE_ROAD_SCORE_REQUEST = 98,
			E_EVENT_ROAD_RULE_BATCH_DATA_REQUEST = 99,
			E_EVENT_ROAD_RULE_INTERACTION_CHANGE = 100,
			E_EVENT_ROAD_RULE_MODE_SWITCH = 101,
			E_EVENT_ALL_RIVALRY_DATA_REQUEST = 102,
			E_EVENT_ONE_RIVALRY_DATA_REQUEST = 103,
			E_EVENT_GUI_SWITCHES_ROAD_RULE_STATE = 104,
			E_EVENT_REQUEST_CAR_UNLOCK_EVENT = 105,
			E_CAR_CONTROL_CHANGE_REQUEST = 106,
			E_EVENT_GUI_AWARD_SEQUENCE_START = 107,
			E_EVENT_GUI_AWARD_SEQUENCE_END = 108,
			E_EVENT_PROGRESSION_PROFILE_LOADED = 109,
			E_EVENT_RESET_PROFILE_REQUEST = 110,
			E_EVENT_RECORD_PROP_HIT = 111,
			E_EVENT_REQUEST_PROP_PROGRESSION = 112,
			E_EVENT_GAME_TRAINING_REQUEST = 113,
			E_EVENT_CHECK_FOR_COMPLETION = 114,
			E_EVENT_WORLD_REGION_CHANGE = 115,
			E_EVENT_REQUEST_FREE_ROAM_TRACKER = 116,
			E_EVENT_PLAYER_ROUTE_UPDATED = 117,
			E_EVENT_OVERHEAD_SIGN_HIT = 118,
			E_EVENT_COMPLETED_STUNT = 119,
			E_EVENT_INPROGRESS_STUNT = 120,
			E_EVENT_REMOTE_PLAYER_DISCONNECTED = 121,
			E_EVENT_LOCAL_PLAYER_CONNECTED = 122,
			E_EVENT_LOCAL_PLAYER_DISCONNECTED = 123,
			E_EVENT_LOCAL_PLAYER_LEFT_LOBBY = 124,
			E_EVENT_ONLINE_GAME_PARAMS_CHANGED = 125,
			E_EVENT_ONLINE_GAME_LAUNCHED = 126,
			E_EVENT_ONLINE_PLAYER_ADDED = 127,
			E_EVENT_ONLINE_PLAYER_FINALISED = 128,
			E_EVENT_ONLINE_PLAYER_REMOVED = 129,
			E_EVENT_ONLINE_ROAD_RULES_PB_RECV = 130,
			E_EVENT_ONLINE_ROAD_RULES_UPLOADED = 131,
			E_EVENT_ONLINE_ROAD_RULES_DOWNLOADED = 132,
			E_EVENT_ONLINE_ROAD_RULES_CONNECT_INFO = 133,
			E_EVENT_ONLINE_PLAYER_CHANGED_CAR = 134,
			E_EVENT_ONLINE_COLLECTABLE = 135,
			E_EVENT_ONLINE_IMAGE_RECEIVED = 136,
			E_EVENT_ONLINE_CAPTURE_WINNER_PHOTO_FINISH = 137,
			E_EVENT_ONLINE_IMAGE_SEND_ABORTED = 138,
			E_EVENT_ONLINE_NEW_BURNOUT_SKILLZ = 139,
			E_EVENT_ONLINE_NEW_HOST = 140,
			E_EVENT_REMOTE_PLAYER_TRIGGERED_CHECKPOINT = 141,
			E_EVENT_ONLINE_RIVAL_COUNT = 142,
			E_EVENT_LEFT_ONLINE_POST_EVENT = 143,
			E_EVENT_ONLINE_CAUGHT_FEVER = 144,
			E_EVENT_ONLINE_MUGSHOT_SENT = 145,
			E_EVENT_ONLINE_CREATED_CUSTOM_ROUTE = 146,
			E_EVENT_RIVAL_SHUTDOWN_DISPLAY_FINSHED = 147,
			E_EVENT_BUDDY_REMOVED = 148,
			E_EVENT_INSTANT_FREEBURN = 149,
			E_EVENT_BURNING_HOME_RUN_SWITCHED_RUNNER = 150,
			E_EVENT_IMAGE_TO_SAVE = 151,
			E_EVENT_IMAGE_FILES_SAVED = 152,
			E_EVENT_IMAGE_GALLERY_REQUEST = 153,
			E_EVENT_IMAGE_GALLERY_COUNT_REQUEST = 154,
			E_EVENT_IMAGE_GALLERY_DATA_REQUEST = 155,
			E_EVENT_IMAGE_FILES_LOADED = 156,
			E_EVENT_FREEBURN_CHALLENGE_SELECTED = 157,
			E_EVENT_FREEBURN_CHALLENGE_SELECTED_REMOTELY = 158,
			E_EVENT_FREEBURN_CHALLENGE_TRIGGERED_REMOTELY = 159,
			E_EVENT_FREEBURN_CHALLENGE_ACTION_SUCCESS = 160,
			E_EVENT_FREEBURN_CHALLENGE_RESET = 161,
			E_EVENT_FREEBURN_CHALLENGE_ENDED = 162,
			E_EVENT_TRIGGER_FREEBURN_CHALLENGE = 163,
			E_EVENT_REQUEST_EVERY_PLAYER_COMPLETION_STATUS = 164,
			E_EVENT_FREEBURN_CHALLENGE_SUCCESS_UPDATE = 165,
			E_EVENT_FREEBURN_CHALLENGE_SUCCESS = 166,
			E_EVENT_ACTIVE_FREEBURN_CHALLENGE = 167,
			E_EVENT_MODE_MANAGER_ROUTE_INFO = 168,
			E_EVENT_COUNT = 169,
		}

		// Declaration
		struct StreamingCompleteEvent {
			// BrnGameEvents.h:746
			enum EModule {
				E_MODULE_TRAFFIC_ENTITY = 0,
				E_MODULE_RACE_CAR_ENTITY = 1,
				E_MODULE_WORLD_ENTITY = 2,
				E_MODULE_GUI_SCREEN = 3,
				E_MODULE_COUNT = 4,
			}

		}

		// BrnGameEvents.h:286
		const int32_t KI_EVENT_MANAGER_DEFAULT_EVENT_QUEUE_LENGTH = 1536;

	}

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_RACE_CAR_NEEDS_HIDING> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:371
struct BrnGameState::GameStateModuleIO::RaceCarNeedsHidingEvent : public GameEvent<E_EVENT_RACE_CAR_NEEDS_HIDING> {
	// BrnGameEvents.h:373
	int32_t miActiveRaceCarIndex;

	// BrnGameEvents.h:374
	float32_t mfHiddenTime;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_GAME_TRAINING_REQUEST> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:455
struct BrnGameState::GameStateModuleIO::RequestGameTrainingEvent : public GameEvent<E_EVENT_GAME_TRAINING_REQUEST> {
	// BrnGameEvents.h:457
	BrnProgression::ETrainingType meTrainingType;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_STREAMING_COMPLETE> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:744
struct BrnGameState::GameStateModuleIO::StreamingCompleteEvent : public GameEvent<E_EVENT_STREAMING_COMPLETE> {
	// BrnGameEvents.h:757
	BrnGameState::GameStateModuleIO::StreamingCompleteEvent::EModule meModule;

	// BrnGameEvents.h:758
	CgsID mUserId;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_PLAYER_CAR_PLACED_ON_TRACK> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:812
struct BrnGameState::GameStateModuleIO::PlayerCarPlacedOnTrackEvent : public GameEvent<E_EVENT_PLAYER_CAR_PLACED_ON_TRACK> {
	// BrnGameEvents.h:814
	bool mbIsInCarSelect;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_START_NETWORK_GAME> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:826
struct BrnGameState::GameStateModuleIO::StartNetworkGameEvent : public GameEvent<E_EVENT_START_NETWORK_GAME> {
	// BrnGameEvents.h:828
	int32_t miNumRaceCars;

	// BrnGameEvents.h:829
	BrnGameState::GameStateModuleIO::EGameModeType meGameMode;

	// BrnGameEvents.h:830
	int32_t miNumRounds;

	// BrnGameEvents.h:831
	uint32_t muRandomSeedForGame;

	// BrnGameEvents.h:832
	bool mbRefreshOnly;

private:
	// BrnGameEvents.h:940
	CgsID[8] maCarIds;

	// BrnGameEvents.h:941
	uint16_t[8] mau16CarColourIndex;

	// BrnGameEvents.h:942
	uint16_t[8] mau16CarPaintFinishIndex;

	// BrnGameEvents.h:943
	BrnGameState::GameStateModuleIO::EPlayerTeam[8] maePlayerTeam;

	// BrnGameEvents.h:944
	RoadRulesRecvData::NetworkPlayerID[8] maNetworkPlayerID;

	// BrnGameEvents.h:945
	bool[8] mabPlayerHasFever;

	// BrnGameEvents.h:946
	RoadRulesRecvData::NetworkPlayerID mLocalNetworkPlayerID;

	// BrnGameEvents.h:947
	int32_t miHostGridPosition;

	// BrnGameEvents.h:948
	int32_t miNumRunnerCrashes;

	// BrnGameEvents.h:949
	BrnNetwork::EBoostType meBoostType;

	// BrnGameEvents.h:950
	float32_t mfTimeLimit;

	// BrnGameEvents.h:951
	bool mbRedTeamHaveInfiniteBoost;

	// BrnGameEvents.h:952
	bool mbIsTrafficOn;

	// BrnGameEvents.h:953
	bool mbIsTrafficCheckingOn;

	// BrnGameEvents.h:954
	bool mbIsRanked;

	// BrnGameEvents.h:955
	bool mbIsStartingGameAfterPlayerJoin;

	// BrnGameEvents.h:956
	bool mbIsStartingFreeburnLobbyAfterOnlineEvent;

	// BrnGameEvents.h:957
	bool mbForceStartFreeburnLobby;

public:
	// BrnGameEvents.h:835
	void Clear();

	// BrnGameEvents.h:847
	void SetPlayerData(int32_t, RoadRulesRecvData::NetworkPlayerID, CgsID, CgsID, uint16_t, uint16_t, BrnGameState::GameStateModuleIO::EPlayerTeam, bool, bool);

	// BrnGameEvents.h:857
	void SetGameData(bool, bool, bool, bool, BrnNetwork::EBoostType, int32_t, float32_t);

	// BrnGameEvents.h:861
	BrnGameState::GameStateModuleIO::EPlayerTeam GetPlayerTeam(int32_t) const;

	// BrnGameEvents.h:865
	CgsID GetPlayerCarID(int32_t) const;

	// BrnGameEvents.h:869
	uint16_t GetCarColourIndex(int32_t) const;

	// BrnGameEvents.h:873
	uint16_t GetCarPaintFinishIndex(int32_t) const;

	// BrnGameEvents.h:877
	RoadRulesRecvData::NetworkPlayerID GetNetworkPlayerID(int32_t) const;

	// BrnGameEvents.h:881
	bool GetPlayerHasFever(int32_t) const;

	// BrnGameEvents.h:884
	int32_t GetHostGridPosition() const;

	// BrnGameEvents.h:888
	void SetLocalNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID);

	// BrnGameEvents.h:891
	RoadRulesRecvData::NetworkPlayerID GetLocalNetworkPlayerID() const;

	// BrnGameEvents.h:894
	bool GetRanked() const;

	// BrnGameEvents.h:897
	bool GetTrafficOn() const;

	// BrnGameEvents.h:900
	bool GetRedTeamInfiniteBoost() const;

	// BrnGameEvents.h:904
	void SetStartingGameAfterPlayerJoin(bool);

	// BrnGameEvents.h:907
	bool GetStartingGameAfterPlayerJoin() const;

	// BrnGameEvents.h:911
	void SetStartingFreeburnLobbyAfterOnlineEvent(bool);

	// BrnGameEvents.h:914
	bool GetStartingFreeburnLobbyAfterOnlineEvent() const;

	// BrnGameEvents.h:918
	void SetForceStartFreeburnLobby(bool);

	// BrnGameEvents.h:921
	bool GetForceStartFreeburnLobby() const;

	// BrnGameEvents.h:924
	bool IsTrafficCheckingOn() const;

	// BrnGameEvents.h:927
	BrnNetwork::EBoostType GetBoostType() const;

	// BrnGameEvents.h:930
	int32_t GetNumRunnerCrashes() const;

	// BrnGameEvents.h:933
	float32_t GetTimeLimit() const;

	// BrnGameEvents.h:937
	void SetTimeLimit(float32_t);

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_START_NETWORK_ROUND> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:969
struct BrnGameState::GameStateModuleIO::StartNetworkRoundEvent : public GameEvent<E_EVENT_START_NETWORK_ROUND> {
	// BrnGameEvents.h:971
	LandmarkIndex[16] maLandmarks;

	// BrnGameEvents.h:972
	LightTriggerId mLightTriggerID;

	// BrnGameEvents.h:973
	int32_t miNumLandmarksInRound;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_BUDDY_REMOVED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1052
struct BrnGameState::GameStateModuleIO::BuddyRemovedEvent : public GameEvent<E_EVENT_BUDDY_REMOVED> {
	// BrnGameEvents.h:1054
	PlayerName mRemovedBuddyName;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_PLAYER_RESET_ON_TRACK> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1155
struct BrnGameState::GameStateModuleIO::PlayerResetOnTrackEvent : public GameEvent<E_EVENT_PLAYER_RESET_ON_TRACK> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_RACE_CAR_DRIVING_IN_CRASH> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1166
struct BrnGameState::GameStateModuleIO::RaceCarDrivingInCrashEvent : public GameEvent<E_EVENT_RACE_CAR_DRIVING_IN_CRASH> {
	// BrnGameEvents.h:1168
	EActiveRaceCarIndex meActiveRaceCarIndex;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_TRIGGER_CRASH_BREAKER> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1179
struct BrnGameState::GameStateModuleIO::TriggerCrashBreakerEvent : public GameEvent<E_EVENT_TRIGGER_CRASH_BREAKER> {
	// BrnGameEvents.h:1181
	Vector3 mPosition;

	// BrnGameEvents.h:1182
	EActiveRaceCarIndex meRaceCarIndex;

	// BrnGameEvents.h:1183
	float32_t mfNormMagnitude;

	// BrnGameEvents.h:1184
	float32_t mfTimeUntilStart;

	// BrnGameEvents.h:1185
	float32_t mfDurationTime;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_SHOWTIME_BOUNCE_PROMPT> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1194
struct BrnGameState::GameStateModuleIO::ShowtimeBouncePromptEvent : public GameEvent<E_EVENT_SHOWTIME_BOUNCE_PROMPT> {
	// BrnGameEvents.h:1196
	bool mbPromptNeeded;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_PICKUP> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1221
struct BrnGameState::GameStateModuleIO::PickupEvent : public GameEvent<E_EVENT_PICKUP> {
	// BrnGameEvents.h:1223
	EActiveRaceCarIndex meRaceCarIndex;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_VEHICLE_LEAPT> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1234
struct BrnGameState::GameStateModuleIO::VehicleLeaptEvent : public GameEvent<E_EVENT_VEHICLE_LEAPT> {
	// BrnGameEvents.h:1236
	int32_t miVehicleLeaptCount;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ENTER_NEW_ROAD> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1247
struct BrnGameState::GameStateModuleIO::EnterNewRoadEvent : public GameEvent<E_EVENT_ENTER_NEW_ROAD> {
	// BrnGameEvents.h:1249
	bool mbIsJunction;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_PLAYER_FINISHED_MODE> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1342
struct BrnGameState::GameStateModuleIO::PlayerFinishedModeEvent : public GameEvent<E_EVENT_PLAYER_FINISHED_MODE> {
	// BrnGameEvents.h:1344
	bool mbTimedOut;

	// BrnGameEvents.h:1345
	bool mbCarDestroyed;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_NEAR_MISS> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1488
struct BrnGameState::GameStateModuleIO::NearMissEvent : public GameEvent<E_EVENT_NEAR_MISS> {
	// BrnGameEvents.h:1490
	int32_t miCount;

	// BrnGameEvents.h:1491
	BrnWorld::ENearMissType meNearMissType;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_NEAR_MISS_CHAIN_IN_PROGRESS> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1502
struct BrnGameState::GameStateModuleIO::NearMissChainInProgressEvent : public GameEvent<E_EVENT_NEAR_MISS_CHAIN_IN_PROGRESS> {
	// BrnGameEvents.h:1504
	int32_t miCount;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_NEAR_MISS_CHAIN_COMPLETED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1515
struct BrnGameState::GameStateModuleIO::NearMissChainCompleteEvent : public GameEvent<E_EVENT_NEAR_MISS_CHAIN_COMPLETED> {
	// BrnGameEvents.h:1517
	int32_t miCount;

	// BrnGameEvents.h:1518
	bool mbCompletedSuccessfully;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_TAILGATING> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1530
struct BrnGameState::GameStateModuleIO::TailgatingEvent : public GameEvent<E_EVENT_TAILGATING> {
	// BrnGameEvents.h:1532
	float32_t mfDistance;

	// BrnGameEvents.h:1533
	EActiveRaceCarIndex meTailgatedCarIndex;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_TRAFFIC_CHECKING_CHAIN> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1557
struct BrnGameState::GameStateModuleIO::TrafficCheckingChainEvent : public GameEvent<E_EVENT_TRAFFIC_CHECKING_CHAIN> {
	// BrnGameEvents.h:1559
	int32_t miChainSize;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_CRASH_COMBO_ITEM> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1570
struct BrnGameState::GameStateModuleIO::CrashComboItemEvent : public GameEvent<E_EVENT_CRASH_COMBO_ITEM> {
	// BrnGameEvents.h:1572
	BrnWorld::EComboEntryType meEntryType;

	// BrnGameEvents.h:1573
	float32_t mfValue;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_DRIFTING> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1585
struct BrnGameState::GameStateModuleIO::DriftingEvent : public GameEvent<E_EVENT_DRIFTING> {
	// BrnGameEvents.h:1587
	float32_t mfDistance;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_SPINNING> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1599
struct BrnGameState::GameStateModuleIO::SpinningEvent : public GameEvent<E_EVENT_SPINNING> {
	// BrnGameEvents.h:1601
	float32_t mfSpinAngle;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_IN_AIR> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1613
struct BrnGameState::GameStateModuleIO::InAirEvent : public GameEvent<E_EVENT_IN_AIR> {
	// BrnGameEvents.h:1615
	float32_t mfCumulativeAirTime;

	// BrnGameEvents.h:1616
	float32_t mfCurrentJumpAirTime;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_WORLD_REGION_CHANGE> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1934
struct BrnGameState::GameStateModuleIO::WorldRegionChangeEvent : public GameEvent<E_EVENT_WORLD_REGION_CHANGE> {
	// BrnGameEvents.h:1936
	WorldRegion mNewWorldRegion;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ONCOMING> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1974
struct BrnGameState::GameStateModuleIO::OncomingEvent : public GameEvent<E_EVENT_ONCOMING> {
	// BrnGameEvents.h:1976
	float32_t mfDistance;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ONCOMING_COMPLETED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1987
struct BrnGameState::GameStateModuleIO::OncomingCompletedEvent : public GameEvent<E_EVENT_ONCOMING_COMPLETED> {
	// BrnGameEvents.h:1989
	float32_t mfDistance;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ROAD_RULE_ROAD_SCORE_REQUEST> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2061
struct BrnGameState::GameStateModuleIO::RoadRulesScoreRequestEvent : public GameEvent<E_EVENT_ROAD_RULE_ROAD_SCORE_REQUEST> {
	// BrnGameEvents.h:2063
	Road::ChallengeIndex mRoadChallengeIndex;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ONLINE_ROAD_RULES_PB_RECV> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2422
struct BrnGameState::GameStateModuleIO::OnlineRoadRulesPersonalBestRecvEvent : public GameEvent<E_EVENT_ONLINE_ROAD_RULES_PB_RECV> {
	// BrnGameEvents.h:2424
	ChallengeHighScoreEntry mPersonalBestScore;

	// BrnGameEvents.h:2425
	RoadRulesRecvData::NetworkPlayerID mPersonalBestPlayerID;

	// BrnGameEvents.h:2426
	Road::ChallengeIndex mPersonalBestChallengeIndex;

	// BrnGameEvents.h:2427
	bool mbWasPBByFriend;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ONLINE_ROAD_RULES_UPLOADED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2438
struct BrnGameState::GameStateModuleIO::OnlineRoadRulesUploadedEvent : public GameEvent<E_EVENT_ONLINE_ROAD_RULES_UPLOADED> {
	// BrnGameEvents.h:2440
	Road::ChallengeIndex mStartUploadIndex;

	// BrnGameEvents.h:2441
	Road::ChallengeIndex mEndUploadIndex;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ONLINE_ROAD_RULES_DOWNLOADED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2452
struct BrnGameState::GameStateModuleIO::OnlineRoadRulesDownloadedEvent : public GameEvent<E_EVENT_ONLINE_ROAD_RULES_DOWNLOADED> {
	// BrnGameEvents.h:2454
	uint32_t muTimestampOfDownload;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ONLINE_ROAD_RULES_CONNECT_INFO> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2465
struct BrnGameState::GameStateModuleIO::OnlineRoadRulesConnectInfoEvent : public GameEvent<E_EVENT_ONLINE_ROAD_RULES_CONNECT_INFO> {
	// BrnGameEvents.h:2467
	uint32_t muLastRoadRulesResetTime;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ONLINE_IMAGE_RECEIVED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2565
struct BrnGameState::GameStateModuleIO::OnlineImageReceivedEvent : public GameEvent<E_EVENT_ONLINE_IMAGE_RECEIVED> {
	// BrnGameEvents.h:2567
	EActiveRaceCarIndex meImageSenderRaceCarIndex;

	// BrnGameEvents.h:2568
	BrnGameState::GameStateModuleIO::EImageType meReceivedImageType;

	// BrnGameEvents.h:2569
	CgsID mRoadID;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ONLINE_IMAGE_SEND_ABORTED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2594
struct BrnGameState::GameStateModuleIO::OnlineImageCaptureAbortedEvent : public GameEvent<E_EVENT_ONLINE_IMAGE_SEND_ABORTED> {
	// BrnGameEvents.h:2596
	bool mbCapture;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_BURNING_HOME_RUN_SWITCHED_RUNNER> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2722
struct BrnGameState::GameStateModuleIO::BurningHomeRunSwitchRunnerEvent : public GameEvent<E_EVENT_BURNING_HOME_RUN_SWITCHED_RUNNER> {
	// BrnGameEvents.h:2724
	RoadRulesRecvData::NetworkPlayerID mNewRunnerPlayerID;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_POWER_PARK_RESULT> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2812
struct BrnGameState::GameStateModuleIO::PowerParkResultEvent : public GameEvent<E_EVENT_POWER_PARK_RESULT> {
	// BrnGameEvents.h:2814
	BrnWorld::EPowerParkOutcome meOutcome;

	// BrnGameEvents.h:2815
	int32_t miOverallRating;

	// BrnGameEvents.h:2816
	int32_t miOtherPlayersInvolved;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_BOOST_TIME_COMPLETE> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2826
struct BrnGameState::GameStateModuleIO::BoostTimeCompleteEvent : public GameEvent<E_EVENT_BOOST_TIME_COMPLETE> {
	// BrnGameEvents.h:2828
	float32_t mfTimeSpentBoosting;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ONLINE_NEW_HOST> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2840
struct BrnGameState::GameStateModuleIO::OnlineNewHostEvent : public GameEvent<E_EVENT_ONLINE_NEW_HOST> {
	// BrnGameEvents.h:2842
	bool mbIsLocalPlayerNowHost;

	// BrnGameEvents.h:2843
	bool mbIsFirstHost;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS_UPDATE> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2893
struct BrnGameState::GameStateModuleIO::FburnChallengeSuccessUpdateEvent : public GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS_UPDATE> {
	// BrnGameEvents.h:2895
	FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess mChallengeSuccessUpdate;

	// BrnGameEvents.h:2896
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGameEvents.h:2897
	int32_t miChallengeUpdateFrame;

	// BrnGameEvents.h:2898
	int32_t miActionIndex;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2910
struct BrnGameState::GameStateModuleIO::FburnChallengeSuccessEvent : public GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS> {
	// BrnGameEvents.h:2912
	float32_t[2] mafActionScores;

	// BrnGameEvents.h:2913
	bool[2] mabSuccessfulActions;

	// BrnGameEvents.h:2914
	bool[2] mabAccumulationThisFrame;

	// BrnGameEvents.h:2915
	EActiveRaceCarIndex meActiveRaceCarIndex;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_MODE_MANAGER_ROUTE_INFO> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:3005
struct BrnGameState::GameStateModuleIO::ModeManagerRouteInfoEvent : public GameEvent<E_EVENT_MODE_MANAGER_ROUTE_INFO> {
	// BrnGameEvents.h:3008
	int32_t miEventId;

	// BrnGameEvents.h:3009
	float32_t mfRouteDistance;

}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::StreamingCompleteEvent>(const const StreamingCompleteEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::CrashComboItemEvent>(const const CrashComboItemEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::ShowtimeBouncePromptEvent>(const const ShowtimeBouncePromptEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::EnterNewRoadEvent>(const const EnterNewRoadEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::VehicleLeaptEvent>(const const VehicleLeaptEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::TriggerCrashBreakerEvent>(const const TriggerCrashBreakerEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::TrafficCheckingChainEvent>(const const TrafficCheckingChainEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::InAirEvent>(const const InAirEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::NearMissChainInProgressEvent>(const const NearMissChainInProgressEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::NearMissChainCompleteEvent>(const const NearMissChainCompleteEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::NearMissEvent>(const const NearMissEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::PowerParkResultEvent>(const const PowerParkResultEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::BoostTimeCompleteEvent>(const const BoostTimeCompleteEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::RequestGameTrainingEvent>(const const RequestGameTrainingEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::DriftingEvent>(const const DriftingEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::SpinningEvent>(const const SpinningEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::OncomingEvent>(const const OncomingEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::OncomingCompletedEvent>(const const OncomingCompletedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::TailgatingEvent>(const const TailgatingEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::RaceCarDrivingInCrashEvent>(const const RaceCarDrivingInCrashEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::PlayerCarPlacedOnTrackEvent>(const const PlayerCarPlacedOnTrackEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::RaceCarNeedsHidingEvent>(const const RaceCarNeedsHidingEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::WorldRegionChangeEvent>(const const WorldRegionChangeEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::PlayerResetOnTrackEvent>(const const PlayerResetOnTrackEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameEvents.h:69
		using BrnNetwork::BrnNetworkModuleIO;

		// BrnGameEvents.h:76
		enum EGameEventType {
			E_EVENT_SETUP_PLAYER_CAR = 0,
			E_EVENT_TELEPORT_PLAYER_CAR = 1,
			E_EVENT_CHANGE_PLAYER_CAR = 2,
			E_EVENT_CHANGE_RANK_NUMBER = 3,
			E_EVENT_SELECT_PLAYER_CAR = 4,
			E_EVENT_CHANGE_PLAYER_CAR_COLOUR = 5,
			E_EVENT_PLAYER_CAR_COLOUR_REQUEST = 6,
			E_EVENT_CHANGE_NETWORK_CAR = 7,
			E_EVENT_GAME_START = 8,
			E_EVENT_STREAMING_COMPLETE = 9,
			E_EVENT_CONTROLLER_DISCONNECTED = 10,
			E_EVENT_CONFIG_CONTROLLER = 11,
			E_EVENT_RIVAL_UPDATE_REQUESTED = 12,
			E_EVENT_PLAYER_CAR_PLACED_ON_TRACK = 13,
			E_EVENT_LOADING_SCREEN_LOADED = 14,
			E_EVENT_PLAYER_ENTERS_RACE_MAP = 15,
			E_EVENT_ONLINE_CAR_SELECT = 16,
			E_EVENT_START_NETWORK_GAME = 17,
			E_EVENT_START_NETWORK_ROUND = 18,
			E_EVENT_FINISH_NETWORK_ROUND = 19,
			E_EVENT_PLAYER_ACCEPTED_MODE = 20,
			E_EVENT_MARKED_MAN_LOADED = 21,
			E_EVENT_FINISHED_SYNCING_PLAYERS = 22,
			E_EVENT_FINISHED_SPLASH = 23,
			E_EVENT_FINISHED_MAP_PAN = 24,
			E_EVENT_GUI_FINISHED_OFFLINE_PRE_EVENT = 25,
			E_EVENT_RESULTS_FINISHED = 26,
			E_EVENT_POST_EVENT_LEAVE = 27,
			E_EVENT_PLAYER_EXITED_MODE = 28,
			E_EVENT_REQUEST_SPECIFIC_PRESET_RACES = 29,
			E_EVENT_PREPARE_FOR_ONLINE = 30,
			E_EVENT_LAP_COMPLETE = 31,
			E_EVENT_VEHICLE_IMPACT = 32,
			E_EVENT_PLAYER_FINISHED_MODE = 33,
			E_EVENT_PLAYER_PAUSE_STATE_CHANGED = 34,
			E_EVENT_PAYBACK_TRIGGERABLE = 35,
			E_EVENT_ENTER_REPLAY = 36,
			E_EVENT_LEAVE_REPLAY = 37,
			E_EVENT_PLAYER_RESET_ON_TRACK = 38,
			E_EVENT_RACE_CAR_DRIVING_IN_CRASH = 39,
			E_EVENT_PLAYER_IN_SHORT_CUT = 40,
			E_EVENT_RACE_CAR_NEEDS_HIDING = 41,
			E_EVENT_PLAYER_CAN_SKIP_CRASH = 42,
			E_EVENT_PLAYER_CRASH_ENDING = 43,
			E_EVENT_TRAINING_PAUSE_STATE_CHANGED = 44,
			E_EVENT_TRIGGER_CRASH_BREAKER = 45,
			E_EVENT_CANCEL_CRASH_BREAKER = 46,
			E_EVENT_PICKUP = 47,
			E_EVENT_VEHICLE_LEAPT = 48,
			E_EVENT_ENTER_NEW_ROAD = 49,
			E_EVENT_SHOWTIME_UPDATE = 50,
			E_EVENT_SHOWTIME_MODE_SWITCH = 51,
			E_EVENT_SHOWTIME_BOUNCE_PROMPT = 52,
			E_EVENT_JUST_BOUNCED = 53,
			E_EVENT_JUST_APPLIED_EXTRA_SPIN = 54,
			E_EVENT_POWER_PARK_RESULT = 55,
			E_EVENT_BOOST_TIME_COMPLETE = 56,
			E_EVENT_START_OFFLINE_GAME_MODE = 57,
			E_EVENT_REQUEST_INVITE = 58,
			E_EVENT_PREPARE_FOR_INVITE = 59,
			E_EVENT_UPDATE_PREPARE_FOR_INVITE = 60,
			E_EVENT_PREPARED_FOR_INVITE = 61,
			E_EVENT_PERFORM_INVITE = 62,
			E_EVENT_INVITE_COMPLETE = 63,
			E_EVENT_VEHICLE_CRASHED = 64,
			E_EVENT_NEAR_MISS = 65,
			E_EVENT_NEAR_MISS_CHAIN_IN_PROGRESS = 66,
			E_EVENT_NEAR_MISS_CHAIN_COMPLETED = 67,
			E_EVENT_DRIFTING = 68,
			E_EVENT_SPINNING = 69,
			E_EVENT_IN_AIR = 70,
			E_EVENT_ONCOMING = 71,
			E_EVENT_ONCOMING_COMPLETED = 72,
			E_EVENT_TAILGATING = 73,
			E_EVENT_TRAFFIC_CHECKING = 74,
			E_EVENT_TRAFFIC_CHECKING_CHAIN = 75,
			E_EVENT_CRASH_COMBO_ITEM = 76,
			E_EVENT_AFTERTOUCH = 77,
			E_EVENT_EVENT_STATE_REQUEST = 78,
			E_GUI_HAS_STARTED_GAME = 79,
			E_EVENT_GAME_STATS_REQUEST = 80,
			E_EVENT_RANK_INFO_REQUEST = 81,
			E_EVENT_PLAYER_INFO_REQUEST = 82,
			E_EVENT_UNLOCKED_LIVERY_REQUEST = 83,
			E_EVENT_CAR_UNLOCK_TICKER_CLOSED = 84,
			E_EVENT_LANDMARK_ROUTE_REQUEST = 85,
			E_EVENT_LANDMARK_RACES_REQUEST = 86,
			E_EVENT_CAR_PERSISTENT_INFO_REQUEST = 87,
			E_EVENT_CAR_VARIABLE_INFO_REQUEST = 88,
			E_EVENT_CAR_SELECTION_REQUEST = 89,
			E_EVENT_LANDMARK_VARIABLE_INFO_REQUEST = 90,
			E_EVENT_ADD_CUSTOM_RACE = 91,
			E_EVENT_UPDATE_CUSTOM_RACE = 92,
			E_EVENT_REMOVE_CUSTOM_RACE = 93,
			E_EVENT_CRASHNAV_STATE_CHANGED = 94,
			E_EVENT_CARSELECT_STATE_CHANGED = 95,
			E_EVENT_REGION_FROM_POSITION_REQUEST = 96,
			E_EVENT_ROAD_RULE_DATA_REQUEST = 97,
			E_EVENT_ROAD_RULE_ROAD_SCORE_REQUEST = 98,
			E_EVENT_ROAD_RULE_BATCH_DATA_REQUEST = 99,
			E_EVENT_ROAD_RULE_INTERACTION_CHANGE = 100,
			E_EVENT_ROAD_RULE_MODE_SWITCH = 101,
			E_EVENT_ALL_RIVALRY_DATA_REQUEST = 102,
			E_EVENT_ONE_RIVALRY_DATA_REQUEST = 103,
			E_EVENT_GUI_SWITCHES_ROAD_RULE_STATE = 104,
			E_EVENT_REQUEST_CAR_UNLOCK_EVENT = 105,
			E_CAR_CONTROL_CHANGE_REQUEST = 106,
			E_EVENT_GUI_AWARD_SEQUENCE_START = 107,
			E_EVENT_GUI_AWARD_SEQUENCE_END = 108,
			E_EVENT_PROGRESSION_PROFILE_LOADED = 109,
			E_EVENT_RESET_PROFILE_REQUEST = 110,
			E_EVENT_RECORD_PROP_HIT = 111,
			E_EVENT_REQUEST_PROP_PROGRESSION = 112,
			E_EVENT_GAME_TRAINING_REQUEST = 113,
			E_EVENT_CHECK_FOR_COMPLETION = 114,
			E_EVENT_WORLD_REGION_CHANGE = 115,
			E_EVENT_REQUEST_FREE_ROAM_TRACKER = 116,
			E_EVENT_PLAYER_ROUTE_UPDATED = 117,
			E_EVENT_OVERHEAD_SIGN_HIT = 118,
			E_EVENT_COMPLETED_STUNT = 119,
			E_EVENT_INPROGRESS_STUNT = 120,
			E_EVENT_REMOTE_PLAYER_DISCONNECTED = 121,
			E_EVENT_LOCAL_PLAYER_CONNECTED = 122,
			E_EVENT_LOCAL_PLAYER_DISCONNECTED = 123,
			E_EVENT_LOCAL_PLAYER_LEFT_LOBBY = 124,
			E_EVENT_ONLINE_GAME_PARAMS_CHANGED = 125,
			E_EVENT_ONLINE_GAME_LAUNCHED = 126,
			E_EVENT_ONLINE_PLAYER_ADDED = 127,
			E_EVENT_ONLINE_PLAYER_FINALISED = 128,
			E_EVENT_ONLINE_PLAYER_REMOVED = 129,
			E_EVENT_ONLINE_ROAD_RULES_PB_RECV = 130,
			E_EVENT_ONLINE_ROAD_RULES_UPLOADED = 131,
			E_EVENT_ONLINE_ROAD_RULES_DOWNLOADED = 132,
			E_EVENT_ONLINE_ROAD_RULES_CONNECT_INFO = 133,
			E_EVENT_ONLINE_PLAYER_CHANGED_CAR = 134,
			E_EVENT_ONLINE_COLLECTABLE = 135,
			E_EVENT_ONLINE_IMAGE_RECEIVED = 136,
			E_EVENT_ONLINE_CAPTURE_WINNER_PHOTO_FINISH = 137,
			E_EVENT_ONLINE_IMAGE_SEND_ABORTED = 138,
			E_EVENT_ONLINE_NEW_BURNOUT_SKILLZ = 139,
			E_EVENT_ONLINE_NEW_HOST = 140,
			E_EVENT_REMOTE_PLAYER_TRIGGERED_CHECKPOINT = 141,
			E_EVENT_ONLINE_RIVAL_COUNT = 142,
			E_EVENT_LEFT_ONLINE_POST_EVENT = 143,
			E_EVENT_ONLINE_CAUGHT_FEVER = 144,
			E_EVENT_ONLINE_MUGSHOT_SENT = 145,
			E_EVENT_ONLINE_CREATED_CUSTOM_ROUTE = 146,
			E_EVENT_RIVAL_SHUTDOWN_DISPLAY_FINSHED = 147,
			E_EVENT_BUDDY_REMOVED = 148,
			E_EVENT_INSTANT_FREEBURN = 149,
			E_EVENT_BURNING_HOME_RUN_SWITCHED_RUNNER = 150,
			E_EVENT_IMAGE_TO_SAVE = 151,
			E_EVENT_IMAGE_FILES_SAVED = 152,
			E_EVENT_IMAGE_GALLERY_REQUEST = 153,
			E_EVENT_IMAGE_GALLERY_COUNT_REQUEST = 154,
			E_EVENT_IMAGE_GALLERY_DATA_REQUEST = 155,
			E_EVENT_IMAGE_FILES_LOADED = 156,
			E_EVENT_FREEBURN_CHALLENGE_SELECTED = 157,
			E_EVENT_FREEBURN_CHALLENGE_SELECTED_REMOTELY = 158,
			E_EVENT_FREEBURN_CHALLENGE_TRIGGERED_REMOTELY = 159,
			E_EVENT_FREEBURN_CHALLENGE_ACTION_SUCCESS = 160,
			E_EVENT_FREEBURN_CHALLENGE_RESET = 161,
			E_EVENT_FREEBURN_CHALLENGE_ENDED = 162,
			E_EVENT_TRIGGER_FREEBURN_CHALLENGE = 163,
			E_EVENT_REQUEST_EVERY_PLAYER_COMPLETION_STATUS = 164,
			E_EVENT_FREEBURN_CHALLENGE_SUCCESS_UPDATE = 165,
			E_EVENT_FREEBURN_CHALLENGE_SUCCESS = 166,
			E_EVENT_ACTIVE_FREEBURN_CHALLENGE = 167,
			E_EVENT_MODE_MANAGER_ROUTE_INFO = 168,
			E_EVENT_COUNT = 169,
		}

		// Declaration
		struct LandmarkRouteRequestEvent {
			// BrnGameEvents.h:1679
			enum ERouteEndPointType {
				E_ROUTE_END_POINT_TYPE_LANDMARK = 0,
				E_ROUTE_END_POINT_TYPE_JUNCTION = 1,
				E_ROUTE_END_POINT_TYPE_PLAYERPOS = 2,
				E_ROUTE_END_POINT_TYPE_COUNT = 3,
			}

		}

		// BrnGameEvents.h:286
		const int32_t KI_EVENT_MANAGER_DEFAULT_EVENT_QUEUE_LENGTH = 1536;

	}

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_COMPLETED_STUNT> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:497
struct BrnGameState::GameStateModuleIO::CompletedStuntEvent : public GameEvent<E_EVENT_COMPLETED_STUNT> {
	// BrnGameEvents.h:499
	uint32_t muStuntActionComplete;

	// BrnGameEvents.h:501
	float32_t mfCompletedBarrelRollAngle;

	// BrnGameEvents.h:502
	float32_t mfCompletedAirSpinAngle;

	// BrnGameEvents.h:503
	float32_t mfCompletedHandbreakTurnAngle;

	// BrnGameEvents.h:504
	float32_t mfCompletedDriftTime;

	// BrnGameEvents.h:505
	float32_t mfCompletedDriftDistance;

	// BrnGameEvents.h:506
	float32_t mfCompletedAirTime;

	// BrnGameEvents.h:507
	bool mbSuccessfulLanding;

	// BrnGameEvents.h:508
	float32_t mfCompletedAirDistance;

	// BrnGameEvents.h:509
	bool mbInReverse;

	// BrnGameEvents.h:511
	int32_t miCompletedBarrelRolls;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_INPROGRESS_STUNT> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:524
struct BrnGameState::GameStateModuleIO::InProgressStuntEvent : public GameEvent<E_EVENT_INPROGRESS_STUNT> {
	// BrnGameEvents.h:526
	uint32_t muStuntActionInProgress;

	// BrnGameEvents.h:528
	float32_t mfInProgressBarrelRollAngle;

	// BrnGameEvents.h:529
	float32_t mfInProgressAirSpinAngle;

	// BrnGameEvents.h:530
	float32_t mfInProgressHandbreakTurnAngle;

	// BrnGameEvents.h:531
	float32_t mfInProgressDriftTime;

	// BrnGameEvents.h:532
	float32_t mfInProgressDriftDistance;

	// BrnGameEvents.h:533
	float32_t mfTimeInAir;

	// BrnGameEvents.h:534
	float32_t mfDistanceInAir;

	// BrnGameEvents.h:535
	bool mbInReverse;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_LANDMARK_ROUTE_REQUEST> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1676
struct BrnGameState::GameStateModuleIO::LandmarkRouteRequestEvent : public GameEvent<E_EVENT_LANDMARK_ROUTE_REQUEST> {
	// BrnGameEvents.h:1688
	extern const int32_t KI_MAX_POINTS = 2;

	// BrnGameEvents.h:1690
	Vector3[2] maPositions;

	// BrnGameEvents.h:1691
	BrnGameState::GameStateModuleIO::LandmarkRouteRequestEvent::ERouteEndPointType[2] mePointTypes;

	// BrnGameEvents.h:1692
	uint32_t[2] muJunctionIDs;

	// BrnGameEvents.h:1693
	CgsID[2] maLandmarkIDs;

	// BrnGameEvents.h:1694
	uint16_t[2] maSectionIndices;

	// BrnGameEvents.h:1695
	uint16_t mu16EventID;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ONLINE_PLAYER_FINALISED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2369
struct BrnGameState::GameStateModuleIO::OnlinePlayerFinalisedEvent : public GameEvent<E_EVENT_ONLINE_PLAYER_FINALISED> {
private:
	// BrnGameEvents.h:2381
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

public:
	// BrnGameEvents.h:2374
	void SetNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID);

	// BrnGameEvents.h:2377
	RoadRulesRecvData::NetworkPlayerID GetNetworkPlayerID() const;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_FREEBURN_CHALLENGE_ACTION_SUCCESS> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2507
struct BrnGameState::GameStateModuleIO::FreeburnChallengeActionSuccessEvent : public GameEvent<E_EVENT_FREEBURN_CHALLENGE_ACTION_SUCCESS> {
	// BrnGameEvents.h:2509
	CgsID mChallengeID;

	// BrnGameEvents.h:2510
	int32_t miActionIndex;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_FREEBURN_CHALLENGE_RESET> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2522
struct BrnGameState::GameStateModuleIO::FreeburnChallengeResetEvent : public GameEvent<E_EVENT_FREEBURN_CHALLENGE_RESET> {
	// BrnGameEvents.h:2524
	CgsID mChallengeID;

	// BrnGameEvents.h:2525
	int32_t miActionIndex;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ONLINE_NEW_BURNOUT_SKILLZ> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2736
struct BrnGameState::GameStateModuleIO::NewRemoteBurnoutSkillzEvent : public GameEvent<E_EVENT_ONLINE_NEW_BURNOUT_SKILLZ> {
	// BrnGameEvents.h:2738
	RoadRulesRecvData::NetworkPlayerID mPlayerID;

	// BrnGameEvents.h:2739
	BurnoutSkillzData mNewSkillzData;

	// BrnGameEvents.h:2740
	bool mbInitialData;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ACTIVE_FREEBURN_CHALLENGE> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2927
struct BrnGameState::GameStateModuleIO::ActiveFburnChallengeEvent : public GameEvent<E_EVENT_ACTIVE_FREEBURN_CHALLENGE> {
	// BrnGameEvents.h:2929
	EActiveRaceCarIndex[7] maePlayersInChallengeARCI;

	// BrnGameEvents.h:2930
	CgsID mChallengeID;

	// BrnGameEvents.h:2931
	int32_t miNumPlayersInChallenge;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameEvents.h:69
		using BrnNetwork::BrnNetworkModuleIO;

		// BrnGameEvents.h:76
		enum EGameEventType {
			E_EVENT_SETUP_PLAYER_CAR = 0,
			E_EVENT_TELEPORT_PLAYER_CAR = 1,
			E_EVENT_CHANGE_PLAYER_CAR = 2,
			E_EVENT_CHANGE_RANK_NUMBER = 3,
			E_EVENT_SELECT_PLAYER_CAR = 4,
			E_EVENT_CHANGE_PLAYER_CAR_COLOUR = 5,
			E_EVENT_PLAYER_CAR_COLOUR_REQUEST = 6,
			E_EVENT_CHANGE_NETWORK_CAR = 7,
			E_EVENT_GAME_START = 8,
			E_EVENT_STREAMING_COMPLETE = 9,
			E_EVENT_CONTROLLER_DISCONNECTED = 10,
			E_EVENT_CONFIG_CONTROLLER = 11,
			E_EVENT_RIVAL_UPDATE_REQUESTED = 12,
			E_EVENT_PLAYER_CAR_PLACED_ON_TRACK = 13,
			E_EVENT_LOADING_SCREEN_LOADED = 14,
			E_EVENT_PLAYER_ENTERS_RACE_MAP = 15,
			E_EVENT_ONLINE_CAR_SELECT = 16,
			E_EVENT_START_NETWORK_GAME = 17,
			E_EVENT_START_NETWORK_ROUND = 18,
			E_EVENT_FINISH_NETWORK_ROUND = 19,
			E_EVENT_PLAYER_ACCEPTED_MODE = 20,
			E_EVENT_MARKED_MAN_LOADED = 21,
			E_EVENT_FINISHED_SYNCING_PLAYERS = 22,
			E_EVENT_FINISHED_SPLASH = 23,
			E_EVENT_FINISHED_MAP_PAN = 24,
			E_EVENT_GUI_FINISHED_OFFLINE_PRE_EVENT = 25,
			E_EVENT_RESULTS_FINISHED = 26,
			E_EVENT_POST_EVENT_LEAVE = 27,
			E_EVENT_PLAYER_EXITED_MODE = 28,
			E_EVENT_REQUEST_SPECIFIC_PRESET_RACES = 29,
			E_EVENT_PREPARE_FOR_ONLINE = 30,
			E_EVENT_LAP_COMPLETE = 31,
			E_EVENT_VEHICLE_IMPACT = 32,
			E_EVENT_PLAYER_FINISHED_MODE = 33,
			E_EVENT_PLAYER_PAUSE_STATE_CHANGED = 34,
			E_EVENT_PAYBACK_TRIGGERABLE = 35,
			E_EVENT_ENTER_REPLAY = 36,
			E_EVENT_LEAVE_REPLAY = 37,
			E_EVENT_PLAYER_RESET_ON_TRACK = 38,
			E_EVENT_RACE_CAR_DRIVING_IN_CRASH = 39,
			E_EVENT_PLAYER_IN_SHORT_CUT = 40,
			E_EVENT_RACE_CAR_NEEDS_HIDING = 41,
			E_EVENT_PLAYER_CAN_SKIP_CRASH = 42,
			E_EVENT_PLAYER_CRASH_ENDING = 43,
			E_EVENT_TRAINING_PAUSE_STATE_CHANGED = 44,
			E_EVENT_TRIGGER_CRASH_BREAKER = 45,
			E_EVENT_CANCEL_CRASH_BREAKER = 46,
			E_EVENT_PICKUP = 47,
			E_EVENT_VEHICLE_LEAPT = 48,
			E_EVENT_ENTER_NEW_ROAD = 49,
			E_EVENT_SHOWTIME_UPDATE = 50,
			E_EVENT_SHOWTIME_MODE_SWITCH = 51,
			E_EVENT_SHOWTIME_BOUNCE_PROMPT = 52,
			E_EVENT_JUST_BOUNCED = 53,
			E_EVENT_JUST_APPLIED_EXTRA_SPIN = 54,
			E_EVENT_POWER_PARK_RESULT = 55,
			E_EVENT_BOOST_TIME_COMPLETE = 56,
			E_EVENT_START_OFFLINE_GAME_MODE = 57,
			E_EVENT_REQUEST_INVITE = 58,
			E_EVENT_PREPARE_FOR_INVITE = 59,
			E_EVENT_UPDATE_PREPARE_FOR_INVITE = 60,
			E_EVENT_PREPARED_FOR_INVITE = 61,
			E_EVENT_PERFORM_INVITE = 62,
			E_EVENT_INVITE_COMPLETE = 63,
			E_EVENT_VEHICLE_CRASHED = 64,
			E_EVENT_NEAR_MISS = 65,
			E_EVENT_NEAR_MISS_CHAIN_IN_PROGRESS = 66,
			E_EVENT_NEAR_MISS_CHAIN_COMPLETED = 67,
			E_EVENT_DRIFTING = 68,
			E_EVENT_SPINNING = 69,
			E_EVENT_IN_AIR = 70,
			E_EVENT_ONCOMING = 71,
			E_EVENT_ONCOMING_COMPLETED = 72,
			E_EVENT_TAILGATING = 73,
			E_EVENT_TRAFFIC_CHECKING = 74,
			E_EVENT_TRAFFIC_CHECKING_CHAIN = 75,
			E_EVENT_CRASH_COMBO_ITEM = 76,
			E_EVENT_AFTERTOUCH = 77,
			E_EVENT_EVENT_STATE_REQUEST = 78,
			E_GUI_HAS_STARTED_GAME = 79,
			E_EVENT_GAME_STATS_REQUEST = 80,
			E_EVENT_RANK_INFO_REQUEST = 81,
			E_EVENT_PLAYER_INFO_REQUEST = 82,
			E_EVENT_UNLOCKED_LIVERY_REQUEST = 83,
			E_EVENT_CAR_UNLOCK_TICKER_CLOSED = 84,
			E_EVENT_LANDMARK_ROUTE_REQUEST = 85,
			E_EVENT_LANDMARK_RACES_REQUEST = 86,
			E_EVENT_CAR_PERSISTENT_INFO_REQUEST = 87,
			E_EVENT_CAR_VARIABLE_INFO_REQUEST = 88,
			E_EVENT_CAR_SELECTION_REQUEST = 89,
			E_EVENT_LANDMARK_VARIABLE_INFO_REQUEST = 90,
			E_EVENT_ADD_CUSTOM_RACE = 91,
			E_EVENT_UPDATE_CUSTOM_RACE = 92,
			E_EVENT_REMOVE_CUSTOM_RACE = 93,
			E_EVENT_CRASHNAV_STATE_CHANGED = 94,
			E_EVENT_CARSELECT_STATE_CHANGED = 95,
			E_EVENT_REGION_FROM_POSITION_REQUEST = 96,
			E_EVENT_ROAD_RULE_DATA_REQUEST = 97,
			E_EVENT_ROAD_RULE_ROAD_SCORE_REQUEST = 98,
			E_EVENT_ROAD_RULE_BATCH_DATA_REQUEST = 99,
			E_EVENT_ROAD_RULE_INTERACTION_CHANGE = 100,
			E_EVENT_ROAD_RULE_MODE_SWITCH = 101,
			E_EVENT_ALL_RIVALRY_DATA_REQUEST = 102,
			E_EVENT_ONE_RIVALRY_DATA_REQUEST = 103,
			E_EVENT_GUI_SWITCHES_ROAD_RULE_STATE = 104,
			E_EVENT_REQUEST_CAR_UNLOCK_EVENT = 105,
			E_CAR_CONTROL_CHANGE_REQUEST = 106,
			E_EVENT_GUI_AWARD_SEQUENCE_START = 107,
			E_EVENT_GUI_AWARD_SEQUENCE_END = 108,
			E_EVENT_PROGRESSION_PROFILE_LOADED = 109,
			E_EVENT_RESET_PROFILE_REQUEST = 110,
			E_EVENT_RECORD_PROP_HIT = 111,
			E_EVENT_REQUEST_PROP_PROGRESSION = 112,
			E_EVENT_GAME_TRAINING_REQUEST = 113,
			E_EVENT_CHECK_FOR_COMPLETION = 114,
			E_EVENT_WORLD_REGION_CHANGE = 115,
			E_EVENT_REQUEST_FREE_ROAM_TRACKER = 116,
			E_EVENT_PLAYER_ROUTE_UPDATED = 117,
			E_EVENT_OVERHEAD_SIGN_HIT = 118,
			E_EVENT_COMPLETED_STUNT = 119,
			E_EVENT_INPROGRESS_STUNT = 120,
			E_EVENT_REMOTE_PLAYER_DISCONNECTED = 121,
			E_EVENT_LOCAL_PLAYER_CONNECTED = 122,
			E_EVENT_LOCAL_PLAYER_DISCONNECTED = 123,
			E_EVENT_LOCAL_PLAYER_LEFT_LOBBY = 124,
			E_EVENT_ONLINE_GAME_PARAMS_CHANGED = 125,
			E_EVENT_ONLINE_GAME_LAUNCHED = 126,
			E_EVENT_ONLINE_PLAYER_ADDED = 127,
			E_EVENT_ONLINE_PLAYER_FINALISED = 128,
			E_EVENT_ONLINE_PLAYER_REMOVED = 129,
			E_EVENT_ONLINE_ROAD_RULES_PB_RECV = 130,
			E_EVENT_ONLINE_ROAD_RULES_UPLOADED = 131,
			E_EVENT_ONLINE_ROAD_RULES_DOWNLOADED = 132,
			E_EVENT_ONLINE_ROAD_RULES_CONNECT_INFO = 133,
			E_EVENT_ONLINE_PLAYER_CHANGED_CAR = 134,
			E_EVENT_ONLINE_COLLECTABLE = 135,
			E_EVENT_ONLINE_IMAGE_RECEIVED = 136,
			E_EVENT_ONLINE_CAPTURE_WINNER_PHOTO_FINISH = 137,
			E_EVENT_ONLINE_IMAGE_SEND_ABORTED = 138,
			E_EVENT_ONLINE_NEW_BURNOUT_SKILLZ = 139,
			E_EVENT_ONLINE_NEW_HOST = 140,
			E_EVENT_REMOTE_PLAYER_TRIGGERED_CHECKPOINT = 141,
			E_EVENT_ONLINE_RIVAL_COUNT = 142,
			E_EVENT_LEFT_ONLINE_POST_EVENT = 143,
			E_EVENT_ONLINE_CAUGHT_FEVER = 144,
			E_EVENT_ONLINE_MUGSHOT_SENT = 145,
			E_EVENT_ONLINE_CREATED_CUSTOM_ROUTE = 146,
			E_EVENT_RIVAL_SHUTDOWN_DISPLAY_FINSHED = 147,
			E_EVENT_BUDDY_REMOVED = 148,
			E_EVENT_INSTANT_FREEBURN = 149,
			E_EVENT_BURNING_HOME_RUN_SWITCHED_RUNNER = 150,
			E_EVENT_IMAGE_TO_SAVE = 151,
			E_EVENT_IMAGE_FILES_SAVED = 152,
			E_EVENT_IMAGE_GALLERY_REQUEST = 153,
			E_EVENT_IMAGE_GALLERY_COUNT_REQUEST = 154,
			E_EVENT_IMAGE_GALLERY_DATA_REQUEST = 155,
			E_EVENT_IMAGE_FILES_LOADED = 156,
			E_EVENT_FREEBURN_CHALLENGE_SELECTED = 157,
			E_EVENT_FREEBURN_CHALLENGE_SELECTED_REMOTELY = 158,
			E_EVENT_FREEBURN_CHALLENGE_TRIGGERED_REMOTELY = 159,
			E_EVENT_FREEBURN_CHALLENGE_ACTION_SUCCESS = 160,
			E_EVENT_FREEBURN_CHALLENGE_RESET = 161,
			E_EVENT_FREEBURN_CHALLENGE_ENDED = 162,
			E_EVENT_TRIGGER_FREEBURN_CHALLENGE = 163,
			E_EVENT_REQUEST_EVERY_PLAYER_COMPLETION_STATUS = 164,
			E_EVENT_FREEBURN_CHALLENGE_SUCCESS_UPDATE = 165,
			E_EVENT_FREEBURN_CHALLENGE_SUCCESS = 166,
			E_EVENT_ACTIVE_FREEBURN_CHALLENGE = 167,
			E_EVENT_MODE_MANAGER_ROUTE_INFO = 168,
			E_EVENT_COUNT = 169,
		}

		// Declaration
		struct StreamingCompleteEvent {
			// BrnGameEvents.h:746
			enum EModule {
				E_MODULE_TRAFFIC_ENTITY = 0,
				E_MODULE_RACE_CAR_ENTITY = 1,
				E_MODULE_WORLD_ENTITY = 2,
				E_MODULE_GUI_SCREEN = 3,
				E_MODULE_COUNT = 4,
			}

		}

		// Declaration
		struct LandmarkRouteRequestEvent {
			// BrnGameEvents.h:1679
			enum ERouteEndPointType {
				E_ROUTE_END_POINT_TYPE_LANDMARK = 0,
				E_ROUTE_END_POINT_TYPE_JUNCTION = 1,
				E_ROUTE_END_POINT_TYPE_PLAYERPOS = 2,
				E_ROUTE_END_POINT_TYPE_COUNT = 3,
			}

		}

		// Declaration
		struct GUISwitchRoadRuleStateEvent {
			// BrnGameEvents.h:2147
			enum ERoadRuleState {
				E_ROAD_RULE_STATE_OFF = 0,
				E_ROAD_RULE_STATE_TIME = 1,
				E_ROAD_RULE_STATE_CRASH = 2,
				E_ROAD_RULE_STATE_COUNT = 3,
			}

		}

		// Declaration
		struct FreeburnChallengeSelectedEvent {
			// BrnGameEvents.h:2857
			enum EFreeburnChallengeAction {
				E_ACTION_CHOSEN = 0,
				E_ACTION_CANCELED = 1,
				E_ACTION_SHOWN = 2,
				E_ACTION_HIDDEN = 3,
			}

		}

		// BrnGameEvents.h:286
		const int32_t KI_EVENT_MANAGER_DEFAULT_EVENT_QUEUE_LENGTH = 1536;

	}

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_SETUP_PLAYER_CAR> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:341
struct BrnGameState::GameStateModuleIO::SetupPlayerCarEvent : public GameEvent<E_EVENT_SETUP_PLAYER_CAR> {
	// BrnGameEvents.h:343
	Vector3 mPosition;

	// BrnGameEvents.h:344
	Vector3 mDirection;

	// BrnGameEvents.h:345
	CgsID mCarModelId;

	// BrnGameEvents.h:346
	CgsID mWheelModelId;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_TELEPORT_PLAYER_CAR> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:481
struct BrnGameState::GameStateModuleIO::TeleportPlayerCarEvent : public GameEvent<E_EVENT_TELEPORT_PLAYER_CAR> {
	// BrnGameEvents.h:483
	Vector3 mPosition;

	// BrnGameEvents.h:484
	Vector3 mDirection;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_CHANGE_PLAYER_CAR> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:548
struct BrnGameState::GameStateModuleIO::ChangePlayerCarEvent : public GameEvent<E_EVENT_CHANGE_PLAYER_CAR> {
	// BrnGameEvents.h:550
	CgsID mCarModelId;

	// BrnGameEvents.h:551
	CgsID mWheelModelId;

	// BrnGameEvents.h:552
	bool mbResetPlayerCamera;

	// BrnGameEvents.h:553
	bool mbKeepResetSection;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_SELECT_PLAYER_CAR> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:581
struct BrnGameState::GameStateModuleIO::SelectPlayerCarEvent : public GameEvent<E_EVENT_SELECT_PLAYER_CAR> {
	// BrnGameEvents.h:583
	CgsID mCarModelId;

	// BrnGameEvents.h:584
	CgsID mWheelModelId;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_CHANGE_PLAYER_CAR_COLOUR> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:597
struct BrnGameState::GameStateModuleIO::ChangePlayerCarColourEvent : public GameEvent<E_EVENT_CHANGE_PLAYER_CAR_COLOUR> {
	// BrnGameEvents.h:599
	uint32_t muPaletteIndex;

	// BrnGameEvents.h:600
	uint32_t muColourIndex;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_PLAYER_CAR_COLOUR_REQUEST> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:612
struct BrnGameState::GameStateModuleIO::PlayerCarColourRequestEvent : public GameEvent<E_EVENT_PLAYER_CAR_COLOUR_REQUEST> {
	// BrnGameEvents.h:614
	CgsID mCarId;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_CHANGE_NETWORK_CAR> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:627
struct BrnGameState::GameStateModuleIO::ChangeNetworkCarEvent : public GameEvent<E_EVENT_CHANGE_NETWORK_CAR> {
private:
	// BrnGameEvents.h:651
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

	// BrnGameEvents.h:652
	CgsID mCarModelId;

	// BrnGameEvents.h:653
	CgsID mWheelModelId;

public:
	// BrnGameEvents.h:631
	void SetNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID);

	// BrnGameEvents.h:634
	RoadRulesRecvData::NetworkPlayerID GetNetworkPlayerID() const;

	// BrnGameEvents.h:638
	void SetModelID(CgsID);

	// BrnGameEvents.h:641
	CgsID GetModelID() const;

	// BrnGameEvents.h:645
	void SetWheelID(CgsID);

	// BrnGameEvents.h:648
	CgsID GetWheelID() const;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_REQUEST_SPECIFIC_PRESET_RACES> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:717
struct BrnGameState::GameStateModuleIO::RequestSpecificPreSetRaces : public GameEvent<E_EVENT_REQUEST_SPECIFIC_PRESET_RACES> {
	// BrnGameEvents.h:719
	BrnGameState::GameStateModuleIO::EGameModeType meRequiredGameMode;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_CONTROLLER_DISCONNECTED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:770
struct BrnGameState::GameStateModuleIO::ControllerDisconnectedEvent : public GameEvent<E_EVENT_CONTROLLER_DISCONNECTED> {
	// BrnGameEvents.h:772
	bool mbDisconnected;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_CONFIG_CONTROLLER> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:784
struct BrnGameState::GameStateModuleIO::ConfigControllerEvent : public GameEvent<E_EVENT_CONFIG_CONTROLLER> {
	// BrnGameEvents.h:786
	bool mbSixAxisShowtime;

	// BrnGameEvents.h:787
	bool mbSixAxisSteering;

	// BrnGameEvents.h:788
	bool mbForceFeedback;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_INSTANT_FREEBURN> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1065
struct BrnGameState::GameStateModuleIO::InstantFreeburnEvent : public GameEvent<E_EVENT_INSTANT_FREEBURN> {
	// BrnGameEvents.h:1067
	bool mbIsDoingInstantFreeburn;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_CANCEL_CRASH_BREAKER> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1207
struct BrnGameState::GameStateModuleIO::CancelCrashBreakerEvent : public GameEvent<E_EVENT_CANCEL_CRASH_BREAKER> {
	// BrnGameEvents.h:1209
	EActiveRaceCarIndex meRaceCarIndex;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_AFTERTOUCH> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1260
struct BrnGameState::GameStateModuleIO::AftertouchEvent : public GameEvent<E_EVENT_AFTERTOUCH> {
	// BrnGameEvents.h:1262
	EActiveRaceCarIndex meRaceCarIndex;

	// BrnGameEvents.h:1263
	float32_t mfForwardAftertouch;

	// BrnGameEvents.h:1264
	float32_t mfSidewaysAftertouch;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_PLAYER_ACCEPTED_MODE> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1277
struct BrnGameState::GameStateModuleIO::PlayerAcceptedModeEvent : public GameEvent<E_EVENT_PLAYER_ACCEPTED_MODE> {
	// BrnGameEvents.h:1279
	CgsID mRaceId;

	// BrnGameEvents.h:1280
	uint16_t[16] mauLandmarkSectionIds;

	// BrnGameEvents.h:1281
	LandmarkIndex[16] maLandmarkIndices;

	// BrnGameEvents.h:1284
	BrnGameState::GameStateModuleIO::EGameModeType meModeType;

	// BrnGameEvents.h:1286
	uint8_t muNumLandmarks;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_VEHICLE_IMPACT> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1324
struct BrnGameState::GameStateModuleIO::VehicleImpactEvent : public GameEvent<E_EVENT_VEHICLE_IMPACT> {
	// BrnGameEvents.h:1327
	BrnPhysics::Vehicle::EImpactType meImpactType;

	// BrnGameEvents.h:1328
	EActiveRaceCarIndex meAggressorActiveRaceCarIndex;

	// BrnGameEvents.h:1329
	EActiveRaceCarIndex meVictimActiveRaceCarIndex;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_REQUEST_INVITE> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1385
struct BrnGameState::GameStateModuleIO::RequestInviteEvent : public GameEvent<E_EVENT_REQUEST_INVITE> {
	// BrnGameEvents.h:1387
	InviteOrJoinParams mInviteParams;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_UPDATE_PREPARE_FOR_INVITE> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1412
struct BrnGameState::GameStateModuleIO::UpdatePrepareForInviteEvent : public GameEvent<E_EVENT_UPDATE_PREPARE_FOR_INVITE> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_PREPARED_FOR_INVITE> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1425
struct BrnGameState::GameStateModuleIO::PreparedForInviteEvent : public GameEvent<E_EVENT_PREPARED_FOR_INVITE> {
	// BrnGameEvents.h:1428
	BrnGameState::EModulePreparedForInvite meModulePreparedForInvite;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_PERFORM_INVITE> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1440
struct BrnGameState::GameStateModuleIO::PerformInviteEvent : public GameEvent<E_EVENT_PERFORM_INVITE> {
	// BrnGameEvents.h:1442
	InviteOrJoinParams mInviteParams;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_INVITE_COMPLETE> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1454
struct BrnGameState::GameStateModuleIO::InviteCompleteEvent : public GameEvent<E_EVENT_INVITE_COMPLETE> {
	// BrnGameEvents.h:1456
	bool mbSuccess;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_TRAFFIC_CHECKING> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1544
struct BrnGameState::GameStateModuleIO::TrafficCheckingEvent : public GameEvent<E_EVENT_TRAFFIC_CHECKING> {
	// BrnGameEvents.h:1546
	uint16_t muVehicleIndex;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_REQUEST_CAR_UNLOCK_EVENT> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1769
struct BrnGameState::GameStateModuleIO::RequestCarUnlockEvent : public GameEvent<E_EVENT_REQUEST_CAR_UNLOCK_EVENT> {
	// BrnGameEvents.h:1771
	CgsID mCarModelId;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_UNLOCKED_LIVERY_REQUEST> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1783
struct BrnGameState::GameStateModuleIO::UnlockedLiveryRequest : public GameEvent<E_EVENT_UNLOCKED_LIVERY_REQUEST> {
	// BrnGameEvents.h:1785
	CgsID mCgsID;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_LANDMARK_VARIABLE_INFO_REQUEST> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1810
struct BrnGameState::GameStateModuleIO::LandmarkInfoRequestEvent : public GameEvent<E_EVENT_LANDMARK_VARIABLE_INFO_REQUEST> {
	// BrnGameEvents.h:1812
	LandmarkIndex mLandmarkIndex;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_CAR_CONTROL_CHANGE_REQUEST> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1867
struct BrnGameState::GameStateModuleIO::CarControlChangeRequestEvent : public GameEvent<E_CAR_CONTROL_CHANGE_REQUEST> {
	// BrnGameEvents.h:1869
	bool mbPlayerShouldHaveControl;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_CRASHNAV_STATE_CHANGED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2002
struct BrnGameState::GameStateModuleIO::CrashNavStateChangedEvent : public GameEvent<E_EVENT_CRASHNAV_STATE_CHANGED> {
	// BrnGameEvents.h:2004
	bool mbActivated;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_CARSELECT_STATE_CHANGED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2016
struct BrnGameState::GameStateModuleIO::CarSelectStateChangedEvent : public GameEvent<E_EVENT_CARSELECT_STATE_CHANGED> {
	// BrnGameEvents.h:2019
	BrnGameState::GameStateModuleIO::ECarSelectState meState;

	// BrnGameEvents.h:2020
	BrnGameState::GameStateModuleIO::ECarSelectType meCarSelectType;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_REGION_FROM_POSITION_REQUEST> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2032
struct BrnGameState::GameStateModuleIO::RegionFromPositionRequestEvent : public GameEvent<E_EVENT_REGION_FROM_POSITION_REQUEST> {
	// BrnGameEvents.h:2034
	Vector3 mPosition;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ROAD_RULE_DATA_REQUEST> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2047
struct BrnGameState::GameStateModuleIO::RoadRulesDataRequestEvent : public GameEvent<E_EVENT_ROAD_RULE_DATA_REQUEST> {
	// BrnGameEvents.h:2049
	CgsID mRoadId;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ROAD_RULE_INTERACTION_CHANGE> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2089
struct BrnGameState::GameStateModuleIO::RoadRuleInteractionChangeEvent : public GameEvent<E_EVENT_ROAD_RULE_INTERACTION_CHANGE> {
	// BrnGameEvents.h:2091
	bool mbSwitchRoadRulesEnabled;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ROAD_RULE_MODE_SWITCH> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2104
struct BrnGameState::GameStateModuleIO::RoadRuleModeSwitchEvent : public GameEvent<E_EVENT_ROAD_RULE_MODE_SWITCH> {
	// BrnGameEvents.h:2106
	bool mbIsOnline;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ONE_RIVALRY_DATA_REQUEST> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2130
struct BrnGameState::GameStateModuleIO::RivalriesOneDataRequestEvent : public GameEvent<E_EVENT_ONE_RIVALRY_DATA_REQUEST> {
	// BrnGameEvents.h:2132
	CgsID mRivalID;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_GUI_SWITCHES_ROAD_RULE_STATE> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2144
struct BrnGameState::GameStateModuleIO::GUISwitchRoadRuleStateEvent : public GameEvent<E_EVENT_GUI_SWITCHES_ROAD_RULE_STATE> {
	// BrnGameEvents.h:2156
	BrnGameState::GameStateModuleIO::GUISwitchRoadRuleStateEvent::ERoadRuleState meRoadRuleState;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_PLAYER_PAUSE_STATE_CHANGED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2168
struct BrnGameState::GameStateModuleIO::PlayerPauseStateChangedEvent : public GameEvent<E_EVENT_PLAYER_PAUSE_STATE_CHANGED> {
	// BrnGameEvents.h:2170
	bool mbActivated;

	// BrnGameEvents.h:2171
	bool mbStalled;

	// BrnGameEvents.h:2172
	bool mbWasStalled;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_TRAINING_PAUSE_STATE_CHANGED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2184
struct BrnGameState::GameStateModuleIO::TrainingPauseStateChangedEvent : public GameEvent<E_EVENT_TRAINING_PAUSE_STATE_CHANGED> {
	// BrnGameEvents.h:2186
	bool mbActivated;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_REMOTE_PLAYER_DISCONNECTED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2198
struct BrnGameState::GameStateModuleIO::RemotePlayerDisconnectedEvent : public GameEvent<E_EVENT_REMOTE_PLAYER_DISCONNECTED> {
private:
	// BrnGameEvents.h:2208
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

public:
	// BrnGameEvents.h:2202
	void SetNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID);

	// BrnGameEvents.h:2205
	RoadRulesRecvData::NetworkPlayerID GetNetworkPlayerID() const;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_LOCAL_PLAYER_CONNECTED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2230
struct BrnGameState::GameStateModuleIO::LocalPlayerConnectedEvent : public GameEvent<E_EVENT_LOCAL_PLAYER_CONNECTED> {
	// BrnGameEvents.h:2232
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ONLINE_GAME_PARAMS_CHANGED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2268
struct BrnGameState::GameStateModuleIO::OnlineGameParamsChanged : public GameEvent<E_EVENT_ONLINE_GAME_PARAMS_CHANGED> {
	// BrnGameEvents.h:2270
	BrnGameState::GameStateModuleIO::EGameModeType meGameMode;

	// BrnGameEvents.h:2271
	bool mbIsRanked;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ONLINE_GAME_LAUNCHED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2282
struct BrnGameState::GameStateModuleIO::OnlineGameLaunchedEvent : public GameEvent<E_EVENT_ONLINE_GAME_LAUNCHED> {
	// BrnGameEvents.h:2284
	int32_t miVehicleClassLimit;

	// BrnGameEvents.h:2285
	bool mbHostChoiceCarAndNotHost;

	// BrnGameEvents.h:2286
	bool mbSuccessfulLaunch;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ONLINE_PLAYER_ADDED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2298
struct BrnGameState::GameStateModuleIO::OnlinePlayerAddedEvent : public GameEvent<E_EVENT_ONLINE_PLAYER_ADDED> {
private:
	// BrnGameEvents.h:2352
	CgsID mModelID;

	// BrnGameEvents.h:2353
	CgsID mWheelID;

	// BrnGameEvents.h:2354
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

	// BrnGameEvents.h:2355
	BrnGameState::GameStateModuleIO::EPlayerTeam meTeam;

	// BrnGameEvents.h:2356
	uint16_t mu16CarColourIndex;

	// BrnGameEvents.h:2357
	uint16_t mu16CarPaintFinishIndex;

	// BrnGameEvents.h:2358
	bool mbIsLocalPlayer;

public:
	// BrnGameEvents.h:2303
	void SetNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID);

	// BrnGameEvents.h:2306
	RoadRulesRecvData::NetworkPlayerID GetNetworkPlayerID() const;

	// BrnGameEvents.h:2310
	void SetModelID(CgsID);

	// BrnGameEvents.h:2313
	CgsID GetModelID() const;

	// BrnGameEvents.h:2317
	void SetWheelID(CgsID);

	// BrnGameEvents.h:2320
	CgsID GetWheelID() const;

	// BrnGameEvents.h:2324
	void SetTeam(BrnGameState::GameStateModuleIO::EPlayerTeam);

	// BrnGameEvents.h:2327
	BrnGameState::GameStateModuleIO::EPlayerTeam GetTeam() const;

	// BrnGameEvents.h:2331
	void SetLocalPlayer(bool);

	// BrnGameEvents.h:2334
	bool IsLocalPlayer() const;

	// BrnGameEvents.h:2338
	void SetCarColourIndex(uint16_t);

	// BrnGameEvents.h:2341
	uint16_t GetCarColourIndex() const;

	// BrnGameEvents.h:2345
	void SetCarPaintFinishIndex(uint16_t);

	// BrnGameEvents.h:2348
	uint16_t GetCarPaintFinishIndex() const;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ONLINE_PLAYER_REMOVED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2392
struct BrnGameState::GameStateModuleIO::OnlinePlayerRemovedEvent : public GameEvent<E_EVENT_ONLINE_PLAYER_REMOVED> {
private:
	// BrnGameEvents.h:2410
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

	// BrnGameEvents.h:2411
	bool mbIsLocalPlayerInGame;

public:
	// BrnGameEvents.h:2397
	void SetNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID);

	// BrnGameEvents.h:2400
	RoadRulesRecvData::NetworkPlayerID GetNetworkPlayerID() const;

	// BrnGameEvents.h:2404
	void SetIsLocalPlayerInGame(bool);

	// BrnGameEvents.h:2407
	bool IsLocalPlayerInGame() const;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_FREEBURN_CHALLENGE_SELECTED_REMOTELY> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2479
struct BrnGameState::GameStateModuleIO::FreeburnChallengeSelectedRemotelyEvent : public GameEvent<E_EVENT_FREEBURN_CHALLENGE_SELECTED_REMOTELY> {
	// BrnGameEvents.h:2481
	CgsID mChallengeID;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_FREEBURN_CHALLENGE_TRIGGERED_REMOTELY> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2493
struct BrnGameState::GameStateModuleIO::FreeburnChallengeTriggeredRemotelyEvent : public GameEvent<E_EVENT_FREEBURN_CHALLENGE_TRIGGERED_REMOTELY> {
	// BrnGameEvents.h:2495
	CgsID mChallengeID;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_FREEBURN_CHALLENGE_ENDED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2537
struct BrnGameState::GameStateModuleIO::FreeburnChallengeEndedEvent : public GameEvent<E_EVENT_FREEBURN_CHALLENGE_ENDED> {
	// BrnGameEvents.h:2539
	CgsID mChallengeID;

	// BrnGameEvents.h:2540
	BrnGameState::EChallengeStatus meChallengeStatus;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ONLINE_COLLECTABLE> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2608
struct BrnGameState::GameStateModuleIO::OnlineNetworkPlayerCollectableEvent : public GameEvent<E_EVENT_ONLINE_COLLECTABLE> {
	// BrnGameEvents.h:2610
	CgsID mID;

	// BrnGameEvents.h:2611
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

	// BrnGameEvents.h:2612
	BrnGameState::StuntElementType meType;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_IMAGE_TO_SAVE> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2624
struct BrnGameState::GameStateModuleIO::ImageToSaveEvent : public GameEvent<E_EVENT_IMAGE_TO_SAVE> {
	// BrnGameEvents.h:2627
	MugshotInfo::UniquePlayerID mUniquePlayerID;

	// BrnGameEvents.h:2628
	BrnGameState::GameStateModuleIO::EImageType meImageTypeToSave;

	// BrnGameEvents.h:2629
	NetworkTexture * mpTexture;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_IMAGE_FILES_SAVED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2641
struct BrnGameState::GameStateModuleIO::ImageFilesSavedEvent : public GameEvent<E_EVENT_IMAGE_FILES_SAVED> {
	// BrnGameEvents.h:2643
	int32_t miNumberOfImageFiles;

	// BrnGameEvents.h:2644
	ImageFileInfo[3] mImageFileInfo;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_IMAGE_GALLERY_REQUEST> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2657
struct BrnGameState::GameStateModuleIO::ImageGalleryRequestEvent : public GameEvent<E_EVENT_IMAGE_GALLERY_REQUEST> {
	// BrnGameEvents.h:2660
	int32_t miImageIndex;

	// BrnGameEvents.h:2661
	int32_t miSlotIndex;

	// BrnGameEvents.h:2662
	BrnGameState::GameStateModuleIO::EImageGalleryRequest meImageGalleryRequest;

	// BrnGameEvents.h:2663
	BrnGameState::GameStateModuleIO::EImageGalleryType meImageGalleryImageType;

	// BrnGameEvents.h:2665
	const char * mpacUserGameDataPath;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_IMAGE_GALLERY_COUNT_REQUEST> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2678
struct BrnGameState::GameStateModuleIO::ImageGalleryCountRequestEvent : public GameEvent<E_EVENT_IMAGE_GALLERY_COUNT_REQUEST> {
	// BrnGameEvents.h:2681
	BrnGameState::GameStateModuleIO::EImageGalleryType meImageGalleryImageType;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_IMAGE_GALLERY_DATA_REQUEST> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2693
struct BrnGameState::GameStateModuleIO::ImageGalleryDataRequestEvent : public GameEvent<E_EVENT_IMAGE_GALLERY_DATA_REQUEST> {
	// BrnGameEvents.h:2696
	BrnGameState::GameStateModuleIO::EImageGalleryType meImageGalleryImageType;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_IMAGE_FILES_LOADED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2708
struct BrnGameState::GameStateModuleIO::ImageFilesLoadedEvent : public GameEvent<E_EVENT_IMAGE_FILES_LOADED> {
	// BrnGameEvents.h:2710
	ImageFileInfo[3] maImageFileInfo;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_SHOWTIME_UPDATE> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2752
struct BrnGameState::GameStateModuleIO::ShowtimeUpdateEvent : public GameEvent<E_EVENT_SHOWTIME_UPDATE> {
	// BrnGameEvents.h:2754
	RoadRulesRecvData::NetworkPlayerID mPlayerID;

	// BrnGameEvents.h:2755
	int32_t miShowtimeScore;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_SHOWTIME_MODE_SWITCH> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2767
struct BrnGameState::GameStateModuleIO::ShowtimeModeSwitchEvent : public GameEvent<E_EVENT_SHOWTIME_MODE_SWITCH> {
	// BrnGameEvents.h:2769
	RoadRulesRecvData::NetworkPlayerID mPlayerID;

	// BrnGameEvents.h:2770
	int32_t miFinalScore;

	// BrnGameEvents.h:2771
	bool mbEnteringShowtime;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_JUST_BOUNCED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2782
struct BrnGameState::GameStateModuleIO::JustBouncedEvent : public GameEvent<E_EVENT_JUST_BOUNCED> {
	// BrnGameEvents.h:2784
	int32_t miBounceChain;

	// BrnGameEvents.h:2785
	bool mbFromStationary;

	// BrnGameEvents.h:2786
	bool mbOnCar;

	// BrnGameEvents.h:2787
	bool mbBoostedBounce;

	// BrnGameEvents.h:2788
	bool mbGoodImpact;

	// BrnGameEvents.h:2789
	EntityId midImpactEntityId;

	// BrnGameEvents.h:2790
	Vector3 mContactPoint;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_FREEBURN_CHALLENGE_SELECTED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2855
struct BrnGameState::GameStateModuleIO::FreeburnChallengeSelectedEvent : public GameEvent<E_EVENT_FREEBURN_CHALLENGE_SELECTED> {
	// BrnGameEvents.h:2865
	CgsID mChallengeID;

	// BrnGameEvents.h:2866
	BrnGameState::GameStateModuleIO::FreeburnChallengeSelectedEvent::EFreeburnChallengeAction meAction;

	// BrnGameEvents.h:2867
	BrnResource::ChallengeListEntry::EFreeburnChallengeStyle meFreeburnChallengeStyle;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_REMOTE_PLAYER_TRIGGERED_CHECKPOINT> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2942
struct BrnGameState::GameStateModuleIO::RemotePlayerTriggeredCheckpoint : public GameEvent<E_EVENT_REMOTE_PLAYER_TRIGGERED_CHECKPOINT> {
	// BrnGameEvents.h:2944
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

	// BrnGameEvents.h:2945
	int32_t miCheckpointIndex;

}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::InviteCompleteEvent>(const const InviteCompleteEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::UpdatePrepareForInviteEvent>(const const UpdatePrepareForInviteEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::PerformInviteEvent>(const const PerformInviteEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::ChangePlayerCarEvent>(const const ChangePlayerCarEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::TeleportPlayerCarEvent>(const const TeleportPlayerCarEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_CHECK_FOR_COMPLETION> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:468
struct BrnGameState::GameStateModuleIO::CheckGameCompleteEvent : public GameEvent<E_EVENT_CHECK_FOR_COMPLETION> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_GAME_START> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:665
struct BrnGameState::GameStateModuleIO::GameStartEvent : public GameEvent<E_EVENT_GAME_START> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_PLAYER_ENTERS_RACE_MAP> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:701
struct BrnGameState::GameStateModuleIO::PlayerEntersRaceMap : public GameEvent<E_EVENT_PLAYER_ENTERS_RACE_MAP> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_PREPARE_FOR_ONLINE> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:731
struct BrnGameState::GameStateModuleIO::PrepareForOnlineEvent : public GameEvent<E_EVENT_PREPARE_FOR_ONLINE> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_MARKED_MAN_LOADED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:998
struct BrnGameState::GameStateModuleIO::MarkedManLoadedEvent : public GameEvent<E_EVENT_MARKED_MAN_LOADED> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_RIVAL_SHUTDOWN_DISPLAY_FINSHED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1040
struct BrnGameState::GameStateModuleIO::RivalShutDownDisplayFinshedEvent : public GameEvent<E_EVENT_RIVAL_SHUTDOWN_DISPLAY_FINSHED> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_POST_EVENT_LEAVE> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1311
struct BrnGameState::GameStateModuleIO::PostEventLeaveEvent : public GameEvent<E_EVENT_POST_EVENT_LEAVE> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_PLAYER_EXITED_MODE> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1357
struct BrnGameState::GameStateModuleIO::PlayerExitedModeEvent : public GameEvent<E_EVENT_PLAYER_EXITED_MODE> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_START_OFFLINE_GAME_MODE> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1371
struct BrnGameState::GameStateModuleIO::StartOfflineGameModeEvent : public GameEvent<E_EVENT_START_OFFLINE_GAME_MODE> {
	// BrnGameEvents.h:1373
	bool mbConfirm;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_PREPARE_FOR_INVITE> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1399
struct BrnGameState::GameStateModuleIO::PrepareForInviteEvent : public GameEvent<E_EVENT_PREPARE_FOR_INVITE> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_EVENT_STATE_REQUEST> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1628
struct BrnGameState::GameStateModuleIO::EventStateRequestEvent : public GameEvent<E_EVENT_EVENT_STATE_REQUEST> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_GUI_HAS_STARTED_GAME> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1639
struct BrnGameState::GameStateModuleIO::GuiStartedGameEvent : public GameEvent<E_GUI_HAS_STARTED_GAME> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_GAME_STATS_REQUEST> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1651
struct BrnGameState::GameStateModuleIO::GameStatsRequestEvent : public GameEvent<E_EVENT_GAME_STATS_REQUEST> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_RANK_INFO_REQUEST> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1663
struct BrnGameState::GameStateModuleIO::RankInfoRequestEvent : public GameEvent<E_EVENT_RANK_INFO_REQUEST> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_CAR_PERSISTENT_INFO_REQUEST> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1719
struct BrnGameState::GameStateModuleIO::CarPersistentInfoRequestEvent : public GameEvent<E_EVENT_CAR_PERSISTENT_INFO_REQUEST> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_PLAYER_INFO_REQUEST> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1731
struct BrnGameState::GameStateModuleIO::PlayerInfoRequest : public GameEvent<E_EVENT_PLAYER_INFO_REQUEST> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_CAR_VARIABLE_INFO_REQUEST> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1743
struct BrnGameState::GameStateModuleIO::CarVariableInfoRequestEvent : public GameEvent<E_EVENT_CAR_VARIABLE_INFO_REQUEST> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_CAR_SELECTION_REQUEST> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1755
struct BrnGameState::GameStateModuleIO::CarSelectionRequestEvent : public GameEvent<E_EVENT_CAR_SELECTION_REQUEST> {
	// BrnGameEvents.h:1757
	bool mbUnlocked;

	// BrnGameEvents.h:1758
	bool mbDummy;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_CAR_UNLOCK_TICKER_CLOSED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1798
struct BrnGameState::GameStateModuleIO::CarUnlockTickerClosed : public GameEvent<E_EVENT_CAR_UNLOCK_TICKER_CLOSED> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ADD_CUSTOM_RACE> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1824
struct BrnGameState::GameStateModuleIO::AddCustomRaceEvent : public GameEvent<E_EVENT_ADD_CUSTOM_RACE> {
	// BrnGameEvents.h:1826
	Race mRace;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_REMOVE_CUSTOM_RACE> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1853
struct BrnGameState::GameStateModuleIO::RemoveCustomRaceEvent : public GameEvent<E_EVENT_REMOVE_CUSTOM_RACE> {
	// BrnGameEvents.h:1855
	CgsID mRaceId;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_GUI_AWARD_SEQUENCE_START> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1881
struct BrnGameState::GameStateModuleIO::GuiAwardSequenceStartEvent : public GameEvent<E_EVENT_GUI_AWARD_SEQUENCE_START> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_GUI_AWARD_SEQUENCE_END> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1894
struct BrnGameState::GameStateModuleIO::GuiAwardSequenceEndEvent : public GameEvent<E_EVENT_GUI_AWARD_SEQUENCE_END> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_PROGRESSION_PROFILE_LOADED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1908
struct BrnGameState::GameStateModuleIO::ProgressionProfileLoadedEvent : public GameEvent<E_EVENT_PROGRESSION_PROFILE_LOADED> {
	// BrnGameEvents.h:1910
	Profile * mpProgressionProfile;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_RESET_PROFILE_REQUEST> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1922
struct BrnGameState::GameStateModuleIO::ResetProfileRequestEvent : public GameEvent<E_EVENT_RESET_PROFILE_REQUEST> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_REQUEST_FREE_ROAM_TRACKER> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1947
struct BrnGameState::GameStateModuleIO::RequestFreeRoamTrackerEvent : public GameEvent<E_EVENT_REQUEST_FREE_ROAM_TRACKER> {
	// BrnGameEvents.h:1950
	Vector3 mTargetPosition;

	// BrnGameEvents.h:1951
	uint16_t muTargetSectionId;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ROAD_RULE_BATCH_DATA_REQUEST> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2075
struct BrnGameState::GameStateModuleIO::RoadRulesBatchDataRequestEvent : public GameEvent<E_EVENT_ROAD_RULE_BATCH_DATA_REQUEST> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ALL_RIVALRY_DATA_REQUEST> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2118
struct BrnGameState::GameStateModuleIO::RivalriesAllDataRequestEvent : public GameEvent<E_EVENT_ALL_RIVALRY_DATA_REQUEST> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_LOCAL_PLAYER_LEFT_LOBBY> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2244
struct BrnGameState::GameStateModuleIO::LocalPlayerLeftLobby : public GameEvent<E_EVENT_LOCAL_PLAYER_LEFT_LOBBY> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_LEFT_ONLINE_POST_EVENT> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2256
struct BrnGameState::GameStateModuleIO::LeftOnlinePostEventEvent : public GameEvent<E_EVENT_LEFT_ONLINE_POST_EVENT> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_REQUEST_EVERY_PLAYER_COMPLETION_STATUS> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2552
struct BrnGameState::GameStateModuleIO::FreeburnChallengeRequestEveryPlayerStatusEvent : public GameEvent<E_EVENT_REQUEST_EVERY_PLAYER_COMPLETION_STATUS> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ONLINE_CAPTURE_WINNER_PHOTO_FINISH> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2581
struct BrnGameState::GameStateModuleIO::OnlineCaptureWinnerPhotoFinishEvent : public GameEvent<E_EVENT_ONLINE_CAPTURE_WINNER_PHOTO_FINISH> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ONLINE_RIVAL_COUNT> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2956
struct BrnGameState::GameStateModuleIO::OnlineRivalCount : public GameEvent<E_EVENT_ONLINE_RIVAL_COUNT> {
	// BrnGameEvents.h:2958
	int32_t miRivalCount;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ONLINE_CAUGHT_FEVER> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2969
struct BrnGameState::GameStateModuleIO::OnlineCaughtFever : public GameEvent<E_EVENT_ONLINE_CAUGHT_FEVER> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ONLINE_MUGSHOT_SENT> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2980
struct BrnGameState::GameStateModuleIO::OnlineMugshotSent : public GameEvent<E_EVENT_ONLINE_MUGSHOT_SENT> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ONLINE_CREATED_CUSTOM_ROUTE> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2992
struct BrnGameState::GameStateModuleIO::OnlineCreatedCustomRouteEvent : public GameEvent<E_EVENT_ONLINE_CREATED_CUSTOM_ROUTE> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_FINISHED_MAP_PAN> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_GUI_FINISHED_OFFLINE_PRE_EVENT> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_FINISHED_SPLASH> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_PAYBACK_TRIGGERABLE> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_LOADING_SCREEN_LOADED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::ModeManagerRouteInfoEvent>(const const ModeManagerRouteInfoEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::RemotePlayerDisconnectedEvent>(const const RemotePlayerDisconnectedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::RequestInviteEvent>(const const RequestInviteEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::OnlineGameParamsChanged>(const const OnlineGameParamsChanged &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::LocalPlayerLeftLobby>(const const LocalPlayerLeftLobby &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::OnlineGameLaunchedEvent>(const const OnlineGameLaunchedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::OnlinePlayerAddedEvent>(const const OnlinePlayerAddedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::OnlinePlayerFinalisedEvent>(const const OnlinePlayerFinalisedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::OnlinePlayerRemovedEvent>(const const OnlinePlayerRemovedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::OnlineRoadRulesPersonalBestRecvEvent>(const const BrnGameState::GameStateModuleIO::OnlineRoadRulesPersonalBestRecvEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::OnlineRoadRulesUploadedEvent>(const const BrnGameState::GameStateModuleIO::OnlineRoadRulesUploadedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::OnlineRoadRulesDownloadedEvent>(const const BrnGameState::GameStateModuleIO::OnlineRoadRulesDownloadedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::ChangeNetworkCarEvent>(const const ChangeNetworkCarEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::LocalPlayerConnectedEvent>(const const LocalPlayerConnectedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::OnlineNetworkPlayerCollectableEvent>(const const OnlineNetworkPlayerCollectableEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::GameStatsRequestEvent>(const const GameStatsRequestEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::OnlineImageReceivedEvent>(const const OnlineImageReceivedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::ImageToSaveEvent>(const const ImageToSaveEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::BurningHomeRunSwitchRunnerEvent>(const const BurningHomeRunSwitchRunnerEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::OnlineRoadRulesConnectInfoEvent>(const const BrnGameState::GameStateModuleIO::OnlineRoadRulesConnectInfoEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::NewRemoteBurnoutSkillzEvent>(const const NewRemoteBurnoutSkillzEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::ShowtimeUpdateEvent>(const const ShowtimeUpdateEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::ShowtimeModeSwitchEvent>(const const ShowtimeModeSwitchEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::FreeburnChallengeSelectedRemotelyEvent>(const const FreeburnChallengeSelectedRemotelyEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::FreeburnChallengeTriggeredRemotelyEvent>(const const FreeburnChallengeTriggeredRemotelyEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::FreeburnChallengeResetEvent>(const const FreeburnChallengeResetEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::FreeburnChallengeActionSuccessEvent>(const const FreeburnChallengeActionSuccessEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::FreeburnChallengeEndedEvent>(const const FreeburnChallengeEndedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::OnlineNewHostEvent>(const const OnlineNewHostEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::OnlineImageCaptureAbortedEvent>(const const OnlineImageCaptureAbortedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::FburnChallengeSuccessUpdateEvent>(const const FburnChallengeSuccessUpdateEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::FburnChallengeSuccessEvent>(const const FburnChallengeSuccessEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::ActiveFburnChallengeEvent>(const const ActiveFburnChallengeEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::RemotePlayerTriggeredCheckpoint>(const const RemotePlayerTriggeredCheckpoint &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::OnlineRivalCount>(const const OnlineRivalCount &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::OnlineCaughtFever>(const const OnlineCaughtFever &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::OnlineMugshotSent>(const const OnlineMugshotSent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::BuddyRemovedEvent>(const const BrnGameState::GameStateModuleIO::BuddyRemovedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::InstantFreeburnEvent>(const const InstantFreeburnEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::GuiAwardSequenceStartEvent>(const const GuiAwardSequenceStartEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::GuiAwardSequenceEndEvent>(const const GuiAwardSequenceEndEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::PlayerAcceptedModeEvent>(const const PlayerAcceptedModeEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::FinishedMapPanEvent>(const const FinishedMapPanEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGameEvents.h:1020
	typedef GameEvent<E_EVENT_FINISHED_MAP_PAN> FinishedMapPanEvent;

}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::GuiFinishedOfflinePreEventEvent>(const const GuiFinishedOfflinePreEventEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGameEvents.h:1030
	typedef GameEvent<E_EVENT_GUI_FINISHED_OFFLINE_PRE_EVENT> GuiFinishedOfflinePreEventEvent;

}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::RivalShutDownDisplayFinshedEvent>(const const RivalShutDownDisplayFinshedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::PostEventLeaveEvent>(const const PostEventLeaveEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::PlayerExitedModeEvent>(const const PlayerExitedModeEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::OnlineCaptureWinnerPhotoFinishEvent>(const const OnlineCaptureWinnerPhotoFinishEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::CarControlChangeRequestEvent>(const const CarControlChangeRequestEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::ProgressionProfileLoadedEvent>(const const ProgressionProfileLoadedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::ResetProfileRequestEvent>(const const ResetProfileRequestEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::PlayerEntersRaceMap>(const const PlayerEntersRaceMap &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::CrashNavStateChangedEvent>(const const CrashNavStateChangedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::RoadRuleInteractionChangeEvent>(const const RoadRuleInteractionChangeEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::CarSelectStateChangedEvent>(const const CarSelectStateChangedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::LandmarkRouteRequestEvent>(const const LandmarkRouteRequestEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::RequestSpecificPreSetRaces>(const const RequestSpecificPreSetRaces &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::PlayerInfoRequest>(const const PlayerInfoRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::UnlockedLiveryRequest>(const const UnlockedLiveryRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::CarUnlockTickerClosed>(const const CarUnlockTickerClosed &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::CarPersistentInfoRequestEvent>(const const CarPersistentInfoRequestEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::CarVariableInfoRequestEvent>(const const CarVariableInfoRequestEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::CarSelectionRequestEvent>(const const CarSelectionRequestEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::CheckGameCompleteEvent>(const const CheckGameCompleteEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::RequestCarUnlockEvent>(const const RequestCarUnlockEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::SelectPlayerCarEvent>(const const SelectPlayerCarEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::ChangePlayerCarColourEvent>(const const ChangePlayerCarColourEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::PlayerCarColourRequestEvent>(const const PlayerCarColourRequestEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::RequestFreeRoamTrackerEvent>(const const RequestFreeRoamTrackerEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::AddCustomRaceEvent>(const const AddCustomRaceEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::RemoveCustomRaceEvent>(const const RemoveCustomRaceEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::LandmarkInfoRequestEvent>(const const LandmarkInfoRequestEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::RegionFromPositionRequestEvent>(const const RegionFromPositionRequestEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::PrepareForOnlineEvent>(const const PrepareForOnlineEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::FinishedSplashEvent>(const const FinishedSplashEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGameEvents.h:1010
	typedef GameEvent<E_EVENT_FINISHED_SPLASH> FinishedSplashEvent;

}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::MarkedManLoadedEvent>(const const MarkedManLoadedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::PrepareForInviteEvent>(const const PrepareForInviteEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::StartOfflineGameModeEvent>(const const StartOfflineGameModeEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::GUISwitchRoadRuleStateEvent>(const const GUISwitchRoadRuleStateEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::RoadRuleModeSwitchEvent>(const const RoadRuleModeSwitchEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::RoadRulesDataRequestEvent>(const const RoadRulesDataRequestEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::RankInfoRequestEvent>(const const RankInfoRequestEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::RivalriesAllDataRequestEvent>(const const RivalriesAllDataRequestEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::RivalriesOneDataRequestEvent>(const const RivalriesOneDataRequestEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::ImageGalleryRequestEvent>(const const ImageGalleryRequestEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::ImageGalleryCountRequestEvent>(const const ImageGalleryCountRequestEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::ImageGalleryDataRequestEvent>(const const ImageGalleryDataRequestEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::PaybackTriggerableEvent>(const const PaybackTriggerableEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGameEvents.h:1117
	typedef GameEvent<E_EVENT_PAYBACK_TRIGGERABLE> PaybackTriggerableEvent;

}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::RoadRulesScoreRequestEvent>(const const BrnGameState::GameStateModuleIO::RoadRulesScoreRequestEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::ImageFilesSavedEvent>(const const ImageFilesSavedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::ImageFilesLoadedEvent>(const const ImageFilesLoadedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::EventStateRequestEvent>(const const EventStateRequestEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::GuiStartedGameEvent>(const const GuiStartedGameEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::FreeburnChallengeSelectedEvent>(const const FreeburnChallengeSelectedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::FreeburnChallengeRequestEveryPlayerStatusEvent>(const const FreeburnChallengeRequestEveryPlayerStatusEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::LoadingScreenLoadedEvent>(const const LoadingScreenLoadedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGameEvents.h:690
	typedef GameEvent<E_EVENT_LOADING_SCREEN_LOADED> LoadingScreenLoadedEvent;

}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::ConfigControllerEvent>(const const ConfigControllerEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::RoadRulesBatchDataRequestEvent>(const const RoadRulesBatchDataRequestEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::LeftOnlinePostEventEvent>(const const LeftOnlinePostEventEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::OnlineCreatedCustomRouteEvent>(const const OnlineCreatedCustomRouteEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::TrainingPauseStateChangedEvent>(const const TrainingPauseStateChangedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::ControllerDisconnectedEvent>(const const ControllerDisconnectedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::PlayerPauseStateChangedEvent>(const const PlayerPauseStateChangedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::GameStartEvent>(const const GameStartEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:826
struct BrnGameState::GameStateModuleIO::StartNetworkGameEvent : public GameEvent<E_EVENT_START_NETWORK_GAME> {
	// BrnGameEvents.h:828
	int32_t miNumRaceCars;

	// BrnGameEvents.h:829
	BrnGameState::GameStateModuleIO::EGameModeType meGameMode;

	// BrnGameEvents.h:830
	int32_t miNumRounds;

	// BrnGameEvents.h:831
	uint32_t muRandomSeedForGame;

	// BrnGameEvents.h:832
	bool mbRefreshOnly;

private:
	// BrnGameEvents.h:940
	CgsID[8] maCarIds;

	// BrnGameEvents.h:941
	uint16_t[8] mau16CarColourIndex;

	// BrnGameEvents.h:942
	uint16_t[8] mau16CarPaintFinishIndex;

	// BrnGameEvents.h:943
	BrnGameState::GameStateModuleIO::EPlayerTeam[8] maePlayerTeam;

	// BrnGameEvents.h:944
	GuiEventNetworkLaunching::NetworkPlayerID[8] maNetworkPlayerID;

	// BrnGameEvents.h:945
	bool[8] mabPlayerHasFever;

	// BrnGameEvents.h:946
	GuiEventNetworkLaunching::NetworkPlayerID mLocalNetworkPlayerID;

	// BrnGameEvents.h:947
	int32_t miHostGridPosition;

	// BrnGameEvents.h:948
	int32_t miNumRunnerCrashes;

	// BrnGameEvents.h:949
	BrnNetwork::EBoostType meBoostType;

	// BrnGameEvents.h:950
	float32_t mfTimeLimit;

	// BrnGameEvents.h:951
	bool mbRedTeamHaveInfiniteBoost;

	// BrnGameEvents.h:952
	bool mbIsTrafficOn;

	// BrnGameEvents.h:953
	bool mbIsTrafficCheckingOn;

	// BrnGameEvents.h:954
	bool mbIsRanked;

	// BrnGameEvents.h:955
	bool mbIsStartingGameAfterPlayerJoin;

	// BrnGameEvents.h:956
	bool mbIsStartingFreeburnLobbyAfterOnlineEvent;

	// BrnGameEvents.h:957
	bool mbForceStartFreeburnLobby;

public:
	// BrnGameEvents.h:835
	void Clear();

	// BrnGameEvents.h:847
	void SetPlayerData(int32_t, GuiEventNetworkLaunching::NetworkPlayerID, CgsID, CgsID, uint16_t, uint16_t, BrnGameState::GameStateModuleIO::EPlayerTeam, bool, bool);

	// BrnGameEvents.h:857
	void SetGameData(bool, bool, bool, bool, BrnNetwork::EBoostType, int32_t, float32_t);

	// BrnGameEvents.h:861
	BrnGameState::GameStateModuleIO::EPlayerTeam GetPlayerTeam(int32_t) const;

	// BrnGameEvents.h:865
	CgsID GetPlayerCarID(int32_t) const;

	// BrnGameEvents.h:869
	uint16_t GetCarColourIndex(int32_t) const;

	// BrnGameEvents.h:873
	uint16_t GetCarPaintFinishIndex(int32_t) const;

	// BrnGameEvents.h:877
	GuiEventNetworkLaunching::NetworkPlayerID GetNetworkPlayerID(int32_t) const;

	// BrnGameEvents.h:881
	bool GetPlayerHasFever(int32_t) const;

	// BrnGameEvents.h:884
	int32_t GetHostGridPosition() const;

	// BrnGameEvents.h:888
	void SetLocalNetworkPlayerID(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnGameEvents.h:891
	GuiEventNetworkLaunching::NetworkPlayerID GetLocalNetworkPlayerID() const;

	// BrnGameEvents.h:894
	bool GetRanked() const;

	// BrnGameEvents.h:897
	bool GetTrafficOn() const;

	// BrnGameEvents.h:900
	bool GetRedTeamInfiniteBoost() const;

	// BrnGameEvents.h:904
	void SetStartingGameAfterPlayerJoin(bool);

	// BrnGameEvents.h:907
	bool GetStartingGameAfterPlayerJoin() const;

	// BrnGameEvents.h:911
	void SetStartingFreeburnLobbyAfterOnlineEvent(bool);

	// BrnGameEvents.h:914
	bool GetStartingFreeburnLobbyAfterOnlineEvent() const;

	// BrnGameEvents.h:918
	void SetForceStartFreeburnLobby(bool);

	// BrnGameEvents.h:921
	bool GetForceStartFreeburnLobby() const;

	// BrnGameEvents.h:924
	bool IsTrafficCheckingOn() const;

	// BrnGameEvents.h:927
	BrnNetwork::EBoostType GetBoostType() const;

	// BrnGameEvents.h:930
	int32_t GetNumRunnerCrashes() const;

	// BrnGameEvents.h:933
	float32_t GetTimeLimit() const;

	// BrnGameEvents.h:937
	void SetTimeLimit(float32_t);

}

// BrnGameEvents.h:2422
struct BrnGameState::GameStateModuleIO::OnlineRoadRulesPersonalBestRecvEvent : public GameEvent<E_EVENT_ONLINE_ROAD_RULES_PB_RECV> {
	// BrnGameEvents.h:2424
	ChallengeHighScoreEntry mPersonalBestScore;

	// BrnGameEvents.h:2425
	GuiEventNetworkLaunching::NetworkPlayerID mPersonalBestPlayerID;

	// BrnGameEvents.h:2426
	Road::ChallengeIndex mPersonalBestChallengeIndex;

	// BrnGameEvents.h:2427
	bool mbWasPBByFriend;

}

// BrnGameEvents.h:2722
struct BrnGameState::GameStateModuleIO::BurningHomeRunSwitchRunnerEvent : public GameEvent<E_EVENT_BURNING_HOME_RUN_SWITCHED_RUNNER> {
	// BrnGameEvents.h:2724
	GuiEventNetworkLaunching::NetworkPlayerID mNewRunnerPlayerID;

}

// BrnGameEvents.h:2893
struct BrnGameState::GameStateModuleIO::FburnChallengeSuccessUpdateEvent : public GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS_UPDATE> {
	// BrnGameStateSharedIO.h:313
	typedef FastBitArray<60> LastSecondChallengeSuccess;

	// BrnGameEvents.h:2895
	FburnChallengeSuccessUpdateEvent::LastSecondChallengeSuccess mChallengeSuccessUpdate;

	// BrnGameEvents.h:2896
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGameEvents.h:2897
	int32_t miChallengeUpdateFrame;

	// BrnGameEvents.h:2898
	int32_t miActionIndex;

}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::SetupPlayerCarEvent>(const const SetupPlayerCarEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ONLINE_CAR_SELECT> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:678
struct BrnGameState::GameStateModuleIO::OnlineCarSelectEvent : public GameEvent<E_EVENT_ONLINE_CAR_SELECT> {
}

// BrnGameEvents.h:826
struct BrnGameState::GameStateModuleIO::StartNetworkGameEvent : public GameEvent<E_EVENT_START_NETWORK_GAME> {
	// BrnGameEvents.h:828
	int32_t miNumRaceCars;

	// BrnGameEvents.h:829
	BrnGameState::GameStateModuleIO::EGameModeType meGameMode;

	// BrnGameEvents.h:830
	int32_t miNumRounds;

	// BrnGameEvents.h:831
	uint32_t muRandomSeedForGame;

	// BrnGameEvents.h:832
	bool mbRefreshOnly;

private:
	// BrnGameEvents.h:940
	CgsID[8] maCarIds;

	// BrnGameEvents.h:941
	uint16_t[8] mau16CarColourIndex;

	// BrnGameEvents.h:942
	uint16_t[8] mau16CarPaintFinishIndex;

	// BrnGameEvents.h:943
	BrnGameState::GameStateModuleIO::EPlayerTeam[8] maePlayerTeam;

	// BrnGameEvents.h:944
	AggressiveMoveData::NetworkPlayerID[8] maNetworkPlayerID;

	// BrnGameEvents.h:945
	bool[8] mabPlayerHasFever;

	// BrnGameEvents.h:946
	AggressiveMoveData::NetworkPlayerID mLocalNetworkPlayerID;

	// BrnGameEvents.h:947
	int32_t miHostGridPosition;

	// BrnGameEvents.h:948
	int32_t miNumRunnerCrashes;

	// BrnGameEvents.h:949
	BrnNetwork::EBoostType meBoostType;

	// BrnGameEvents.h:950
	float32_t mfTimeLimit;

	// BrnGameEvents.h:951
	bool mbRedTeamHaveInfiniteBoost;

	// BrnGameEvents.h:952
	bool mbIsTrafficOn;

	// BrnGameEvents.h:953
	bool mbIsTrafficCheckingOn;

	// BrnGameEvents.h:954
	bool mbIsRanked;

	// BrnGameEvents.h:955
	bool mbIsStartingGameAfterPlayerJoin;

	// BrnGameEvents.h:956
	bool mbIsStartingFreeburnLobbyAfterOnlineEvent;

	// BrnGameEvents.h:957
	bool mbForceStartFreeburnLobby;

public:
	// BrnGameEvents.h:835
	void Clear();

	// BrnGameEvents.h:847
	void SetPlayerData(int32_t, AggressiveMoveData::NetworkPlayerID, CgsID, CgsID, uint16_t, uint16_t, BrnGameState::GameStateModuleIO::EPlayerTeam, bool, bool);

	// BrnGameEvents.h:857
	void SetGameData(bool, bool, bool, bool, BrnNetwork::EBoostType, int32_t, float32_t);

	// BrnGameEvents.h:861
	BrnGameState::GameStateModuleIO::EPlayerTeam GetPlayerTeam(int32_t) const;

	// BrnGameEvents.h:865
	CgsID GetPlayerCarID(int32_t) const;

	// BrnGameEvents.h:869
	uint16_t GetCarColourIndex(int32_t) const;

	// BrnGameEvents.h:873
	uint16_t GetCarPaintFinishIndex(int32_t) const;

	// BrnGameEvents.h:877
	AggressiveMoveData::NetworkPlayerID GetNetworkPlayerID(int32_t) const;

	// BrnGameEvents.h:881
	bool GetPlayerHasFever(int32_t) const;

	// BrnGameEvents.h:884
	int32_t GetHostGridPosition() const;

	// BrnGameEvents.h:888
	void SetLocalNetworkPlayerID(AggressiveMoveData::NetworkPlayerID);

	// BrnGameEvents.h:891
	AggressiveMoveData::NetworkPlayerID GetLocalNetworkPlayerID() const;

	// BrnGameEvents.h:894
	bool GetRanked() const;

	// BrnGameEvents.h:897
	bool GetTrafficOn() const;

	// BrnGameEvents.h:900
	bool GetRedTeamInfiniteBoost() const;

	// BrnGameEvents.h:904
	void SetStartingGameAfterPlayerJoin(bool);

	// BrnGameEvents.h:907
	bool GetStartingGameAfterPlayerJoin() const;

	// BrnGameEvents.h:911
	void SetStartingFreeburnLobbyAfterOnlineEvent(bool);

	// BrnGameEvents.h:914
	bool GetStartingFreeburnLobbyAfterOnlineEvent() const;

	// BrnGameEvents.h:918
	void SetForceStartFreeburnLobby(bool);

	// BrnGameEvents.h:921
	bool GetForceStartFreeburnLobby() const;

	// BrnGameEvents.h:924
	bool IsTrafficCheckingOn() const;

	// BrnGameEvents.h:927
	BrnNetwork::EBoostType GetBoostType() const;

	// BrnGameEvents.h:930
	int32_t GetNumRunnerCrashes() const;

	// BrnGameEvents.h:933
	float32_t GetTimeLimit() const;

	// BrnGameEvents.h:937
	void SetTimeLimit(float32_t);

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_FINISHED_SYNCING_PLAYERS> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:985
struct BrnGameState::GameStateModuleIO::FinishedSyncingPlayersEvent : public GameEvent<E_EVENT_FINISHED_SYNCING_PLAYERS> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_RESULTS_FINISHED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1298
struct BrnGameState::GameStateModuleIO::ResultsFinishedEvent : public GameEvent<E_EVENT_RESULTS_FINISHED> {
}

// BrnGameEvents.h:2422
struct BrnGameState::GameStateModuleIO::OnlineRoadRulesPersonalBestRecvEvent : public GameEvent<E_EVENT_ONLINE_ROAD_RULES_PB_RECV> {
	// BrnGameEvents.h:2424
	ChallengeHighScoreEntry mPersonalBestScore;

	// BrnGameEvents.h:2425
	AggressiveMoveData::NetworkPlayerID mPersonalBestPlayerID;

	// BrnGameEvents.h:2426
	Road::ChallengeIndex mPersonalBestChallengeIndex;

	// BrnGameEvents.h:2427
	bool mbWasPBByFriend;

}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::OnlineCarSelectEvent>(const const OnlineCarSelectEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::StartNetworkGameEvent>(const const StartNetworkGameEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::StartNetworkRoundEvent>(const const StartNetworkRoundEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::PreparedForInviteEvent>(const const PreparedForInviteEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::PlayerFinishedModeEvent>(const const PlayerFinishedModeEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::ResultsFinishedEvent>(const const ResultsFinishedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnServerInterfaceCustomCommands.h:30
	namespace GameStateModuleIO {
		// BrnGameEvents.h:69
		using BrnNetwork::BrnNetworkModuleIO;

		// BrnGameEvents.h:76
		enum EGameEventType {
			E_EVENT_SETUP_PLAYER_CAR = 0,
			E_EVENT_TELEPORT_PLAYER_CAR = 1,
			E_EVENT_CHANGE_PLAYER_CAR = 2,
			E_EVENT_CHANGE_RANK_NUMBER = 3,
			E_EVENT_SELECT_PLAYER_CAR = 4,
			E_EVENT_CHANGE_PLAYER_CAR_COLOUR = 5,
			E_EVENT_PLAYER_CAR_COLOUR_REQUEST = 6,
			E_EVENT_CHANGE_NETWORK_CAR = 7,
			E_EVENT_GAME_START = 8,
			E_EVENT_STREAMING_COMPLETE = 9,
			E_EVENT_CONTROLLER_DISCONNECTED = 10,
			E_EVENT_CONFIG_CONTROLLER = 11,
			E_EVENT_RIVAL_UPDATE_REQUESTED = 12,
			E_EVENT_PLAYER_CAR_PLACED_ON_TRACK = 13,
			E_EVENT_LOADING_SCREEN_LOADED = 14,
			E_EVENT_PLAYER_ENTERS_RACE_MAP = 15,
			E_EVENT_ONLINE_CAR_SELECT = 16,
			E_EVENT_START_NETWORK_GAME = 17,
			E_EVENT_START_NETWORK_ROUND = 18,
			E_EVENT_FINISH_NETWORK_ROUND = 19,
			E_EVENT_PLAYER_ACCEPTED_MODE = 20,
			E_EVENT_MARKED_MAN_LOADED = 21,
			E_EVENT_FINISHED_SYNCING_PLAYERS = 22,
			E_EVENT_FINISHED_SPLASH = 23,
			E_EVENT_FINISHED_MAP_PAN = 24,
			E_EVENT_GUI_FINISHED_OFFLINE_PRE_EVENT = 25,
			E_EVENT_RESULTS_FINISHED = 26,
			E_EVENT_POST_EVENT_LEAVE = 27,
			E_EVENT_PLAYER_EXITED_MODE = 28,
			E_EVENT_REQUEST_SPECIFIC_PRESET_RACES = 29,
			E_EVENT_PREPARE_FOR_ONLINE = 30,
			E_EVENT_LAP_COMPLETE = 31,
			E_EVENT_VEHICLE_IMPACT = 32,
			E_EVENT_PLAYER_FINISHED_MODE = 33,
			E_EVENT_PLAYER_PAUSE_STATE_CHANGED = 34,
			E_EVENT_PAYBACK_TRIGGERABLE = 35,
			E_EVENT_ENTER_REPLAY = 36,
			E_EVENT_LEAVE_REPLAY = 37,
			E_EVENT_PLAYER_RESET_ON_TRACK = 38,
			E_EVENT_RACE_CAR_DRIVING_IN_CRASH = 39,
			E_EVENT_PLAYER_IN_SHORT_CUT = 40,
			E_EVENT_RACE_CAR_NEEDS_HIDING = 41,
			E_EVENT_PLAYER_CAN_SKIP_CRASH = 42,
			E_EVENT_PLAYER_CRASH_ENDING = 43,
			E_EVENT_TRAINING_PAUSE_STATE_CHANGED = 44,
			E_EVENT_TRIGGER_CRASH_BREAKER = 45,
			E_EVENT_CANCEL_CRASH_BREAKER = 46,
			E_EVENT_PICKUP = 47,
			E_EVENT_VEHICLE_LEAPT = 48,
			E_EVENT_ENTER_NEW_ROAD = 49,
			E_EVENT_SHOWTIME_UPDATE = 50,
			E_EVENT_SHOWTIME_MODE_SWITCH = 51,
			E_EVENT_SHOWTIME_BOUNCE_PROMPT = 52,
			E_EVENT_JUST_BOUNCED = 53,
			E_EVENT_JUST_APPLIED_EXTRA_SPIN = 54,
			E_EVENT_POWER_PARK_RESULT = 55,
			E_EVENT_BOOST_TIME_COMPLETE = 56,
			E_EVENT_START_OFFLINE_GAME_MODE = 57,
			E_EVENT_REQUEST_INVITE = 58,
			E_EVENT_PREPARE_FOR_INVITE = 59,
			E_EVENT_UPDATE_PREPARE_FOR_INVITE = 60,
			E_EVENT_PREPARED_FOR_INVITE = 61,
			E_EVENT_PERFORM_INVITE = 62,
			E_EVENT_INVITE_COMPLETE = 63,
			E_EVENT_VEHICLE_CRASHED = 64,
			E_EVENT_NEAR_MISS = 65,
			E_EVENT_NEAR_MISS_CHAIN_IN_PROGRESS = 66,
			E_EVENT_NEAR_MISS_CHAIN_COMPLETED = 67,
			E_EVENT_DRIFTING = 68,
			E_EVENT_SPINNING = 69,
			E_EVENT_IN_AIR = 70,
			E_EVENT_ONCOMING = 71,
			E_EVENT_ONCOMING_COMPLETED = 72,
			E_EVENT_TAILGATING = 73,
			E_EVENT_TRAFFIC_CHECKING = 74,
			E_EVENT_TRAFFIC_CHECKING_CHAIN = 75,
			E_EVENT_CRASH_COMBO_ITEM = 76,
			E_EVENT_AFTERTOUCH = 77,
			E_EVENT_EVENT_STATE_REQUEST = 78,
			E_GUI_HAS_STARTED_GAME = 79,
			E_EVENT_GAME_STATS_REQUEST = 80,
			E_EVENT_RANK_INFO_REQUEST = 81,
			E_EVENT_PLAYER_INFO_REQUEST = 82,
			E_EVENT_UNLOCKED_LIVERY_REQUEST = 83,
			E_EVENT_CAR_UNLOCK_TICKER_CLOSED = 84,
			E_EVENT_LANDMARK_ROUTE_REQUEST = 85,
			E_EVENT_LANDMARK_RACES_REQUEST = 86,
			E_EVENT_CAR_PERSISTENT_INFO_REQUEST = 87,
			E_EVENT_CAR_VARIABLE_INFO_REQUEST = 88,
			E_EVENT_CAR_SELECTION_REQUEST = 89,
			E_EVENT_LANDMARK_VARIABLE_INFO_REQUEST = 90,
			E_EVENT_ADD_CUSTOM_RACE = 91,
			E_EVENT_UPDATE_CUSTOM_RACE = 92,
			E_EVENT_REMOVE_CUSTOM_RACE = 93,
			E_EVENT_CRASHNAV_STATE_CHANGED = 94,
			E_EVENT_CARSELECT_STATE_CHANGED = 95,
			E_EVENT_REGION_FROM_POSITION_REQUEST = 96,
			E_EVENT_ROAD_RULE_DATA_REQUEST = 97,
			E_EVENT_ROAD_RULE_ROAD_SCORE_REQUEST = 98,
			E_EVENT_ROAD_RULE_BATCH_DATA_REQUEST = 99,
			E_EVENT_ROAD_RULE_INTERACTION_CHANGE = 100,
			E_EVENT_ROAD_RULE_MODE_SWITCH = 101,
			E_EVENT_ALL_RIVALRY_DATA_REQUEST = 102,
			E_EVENT_ONE_RIVALRY_DATA_REQUEST = 103,
			E_EVENT_GUI_SWITCHES_ROAD_RULE_STATE = 104,
			E_EVENT_REQUEST_CAR_UNLOCK_EVENT = 105,
			E_CAR_CONTROL_CHANGE_REQUEST = 106,
			E_EVENT_GUI_AWARD_SEQUENCE_START = 107,
			E_EVENT_GUI_AWARD_SEQUENCE_END = 108,
			E_EVENT_PROGRESSION_PROFILE_LOADED = 109,
			E_EVENT_RESET_PROFILE_REQUEST = 110,
			E_EVENT_RECORD_PROP_HIT = 111,
			E_EVENT_REQUEST_PROP_PROGRESSION = 112,
			E_EVENT_GAME_TRAINING_REQUEST = 113,
			E_EVENT_CHECK_FOR_COMPLETION = 114,
			E_EVENT_WORLD_REGION_CHANGE = 115,
			E_EVENT_REQUEST_FREE_ROAM_TRACKER = 116,
			E_EVENT_PLAYER_ROUTE_UPDATED = 117,
			E_EVENT_OVERHEAD_SIGN_HIT = 118,
			E_EVENT_COMPLETED_STUNT = 119,
			E_EVENT_INPROGRESS_STUNT = 120,
			E_EVENT_REMOTE_PLAYER_DISCONNECTED = 121,
			E_EVENT_LOCAL_PLAYER_CONNECTED = 122,
			E_EVENT_LOCAL_PLAYER_DISCONNECTED = 123,
			E_EVENT_LOCAL_PLAYER_LEFT_LOBBY = 124,
			E_EVENT_ONLINE_GAME_PARAMS_CHANGED = 125,
			E_EVENT_ONLINE_GAME_LAUNCHED = 126,
			E_EVENT_ONLINE_PLAYER_ADDED = 127,
			E_EVENT_ONLINE_PLAYER_FINALISED = 128,
			E_EVENT_ONLINE_PLAYER_REMOVED = 129,
			E_EVENT_ONLINE_ROAD_RULES_PB_RECV = 130,
			E_EVENT_ONLINE_ROAD_RULES_UPLOADED = 131,
			E_EVENT_ONLINE_ROAD_RULES_DOWNLOADED = 132,
			E_EVENT_ONLINE_ROAD_RULES_CONNECT_INFO = 133,
			E_EVENT_ONLINE_PLAYER_CHANGED_CAR = 134,
			E_EVENT_ONLINE_COLLECTABLE = 135,
			E_EVENT_ONLINE_IMAGE_RECEIVED = 136,
			E_EVENT_ONLINE_CAPTURE_WINNER_PHOTO_FINISH = 137,
			E_EVENT_ONLINE_IMAGE_SEND_ABORTED = 138,
			E_EVENT_ONLINE_NEW_BURNOUT_SKILLZ = 139,
			E_EVENT_ONLINE_NEW_HOST = 140,
			E_EVENT_REMOTE_PLAYER_TRIGGERED_CHECKPOINT = 141,
			E_EVENT_ONLINE_RIVAL_COUNT = 142,
			E_EVENT_LEFT_ONLINE_POST_EVENT = 143,
			E_EVENT_ONLINE_CAUGHT_FEVER = 144,
			E_EVENT_ONLINE_MUGSHOT_SENT = 145,
			E_EVENT_ONLINE_CREATED_CUSTOM_ROUTE = 146,
			E_EVENT_RIVAL_SHUTDOWN_DISPLAY_FINSHED = 147,
			E_EVENT_BUDDY_REMOVED = 148,
			E_EVENT_INSTANT_FREEBURN = 149,
			E_EVENT_BURNING_HOME_RUN_SWITCHED_RUNNER = 150,
			E_EVENT_IMAGE_TO_SAVE = 151,
			E_EVENT_IMAGE_FILES_SAVED = 152,
			E_EVENT_IMAGE_GALLERY_REQUEST = 153,
			E_EVENT_IMAGE_GALLERY_COUNT_REQUEST = 154,
			E_EVENT_IMAGE_GALLERY_DATA_REQUEST = 155,
			E_EVENT_IMAGE_FILES_LOADED = 156,
			E_EVENT_FREEBURN_CHALLENGE_SELECTED = 157,
			E_EVENT_FREEBURN_CHALLENGE_SELECTED_REMOTELY = 158,
			E_EVENT_FREEBURN_CHALLENGE_TRIGGERED_REMOTELY = 159,
			E_EVENT_FREEBURN_CHALLENGE_ACTION_SUCCESS = 160,
			E_EVENT_FREEBURN_CHALLENGE_RESET = 161,
			E_EVENT_FREEBURN_CHALLENGE_ENDED = 162,
			E_EVENT_TRIGGER_FREEBURN_CHALLENGE = 163,
			E_EVENT_REQUEST_EVERY_PLAYER_COMPLETION_STATUS = 164,
			E_EVENT_FREEBURN_CHALLENGE_SUCCESS_UPDATE = 165,
			E_EVENT_FREEBURN_CHALLENGE_SUCCESS = 166,
			E_EVENT_ACTIVE_FREEBURN_CHALLENGE = 167,
			E_EVENT_MODE_MANAGER_ROUTE_INFO = 168,
			E_EVENT_COUNT = 169,
		}

		// BrnGameEvents.h:286
		const int32_t KI_EVENT_MANAGER_DEFAULT_EVENT_QUEUE_LENGTH = 1536;

	}

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_LOCAL_PLAYER_DISCONNECTED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::LocalPlayerDisconnectedEvent>(const const LocalPlayerDisconnectedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGameEvents.h:2218
	typedef GameEvent<E_EVENT_LOCAL_PLAYER_DISCONNECTED> LocalPlayerDisconnectedEvent;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_VEHICLE_CRASHED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1468
struct BrnGameState::GameStateModuleIO::VehicleCrashedEvent : public GameEvent<E_EVENT_VEHICLE_CRASHED> {
	// BrnGameEvents.h:1471
	EntityId mCrashedEntityID;

	// BrnGameEvents.h:1472
	EntityId mCrashedIntoEntityID;

	// BrnGameEvents.h:1473
	CgsID mCrashedEntityCgsId;

	// BrnGameEvents.h:1474
	bool mbIsTraffic;

	// BrnGameEvents.h:1475
	float32_t mfTrafficVehicleMass;

	// BrnGameEvents.h:1476
	EActiveRaceCarIndex meActiveRaceCarIndex;

}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_JUST_APPLIED_EXTRA_SPIN> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:2801
struct BrnGameState::GameStateModuleIO::JustAppliedExtraSpinEvent : public GameEvent<E_EVENT_JUST_APPLIED_EXTRA_SPIN> {
}

// BrnGameEvents.h:3483
extern bool AddGameEventSafe<BrnGameState::GameStateModuleIO::VehicleImpactEvent>(const const VehicleImpactEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<1536,16>::AddEventSafe(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::GetEventPaddingSize(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::CompletedStuntEvent>(const const CompletedStuntEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::InProgressStuntEvent>(const const InProgressStuntEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::VehicleCrashedEvent>(const const VehicleCrashedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::VehicleImpactEvent>(const const VehicleImpactEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::TrafficCheckingEvent>(const const TrafficCheckingEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::AftertouchEvent>(const const AftertouchEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::JustBouncedEvent>(const const JustBouncedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::JustAppliedExtraSpinEvent>(const const JustAppliedExtraSpinEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_ENTER_REPLAY> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1128
struct BrnGameState::GameStateModuleIO::EnterReplayEvent : public GameEvent<E_EVENT_ENTER_REPLAY> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_LEAVE_REPLAY> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1142
struct BrnGameState::GameStateModuleIO::LeaveReplayEvent : public GameEvent<E_EVENT_LEAVE_REPLAY> {
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::LeaveReplayEvent>(const const LeaveReplayEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::EnterReplayEvent>(const const EnterReplayEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_PLAYER_ROUTE_UPDATED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:1962
struct BrnGameState::GameStateModuleIO::PlayerRouteUpdatedEvent : public GameEvent<E_EVENT_PLAYER_ROUTE_UPDATED> {
}

// BrnGameEvents.h:2893
struct BrnGameState::GameStateModuleIO::FburnChallengeSuccessUpdateEvent : public GameEvent<E_EVENT_FREEBURN_CHALLENGE_SUCCESS_UPDATE> {
	// BrnGameEvents.h:2895
	NetworkOutFburnChallengeSuccessUpdateEvent::LastSecondChallengeSuccess mChallengeSuccessUpdate;

	// BrnGameEvents.h:2896
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGameEvents.h:2897
	int32_t miChallengeUpdateFrame;

	// BrnGameEvents.h:2898
	int32_t miActionIndex;

}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::PlayerRouteUpdatedEvent>(const const PlayerRouteUpdatedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_REQUEST_PROP_PROGRESSION> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:442
struct BrnGameState::GameStateModuleIO::RequestPropProgression : public GameEvent<E_EVENT_REQUEST_PROP_PROGRESSION> {
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_RIVAL_UPDATE_REQUESTED> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:800
struct BrnGameState::GameStateModuleIO::RivalUpdateRequestedEvent : public GameEvent<E_EVENT_RIVAL_UPDATE_REQUESTED> {
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::RivalUpdateRequestedEvent>(const const RivalUpdateRequestedEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::RequestPropProgression>(const const RequestPropProgression &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameEvents.h:298
struct BrnGameState::GameStateModuleIO::GameEvent<E_EVENT_PLAYER_CRASH_ENDING> : public Event {
	// BrnGameEvents.h:301
	extern const BrnGameState::GameStateModuleIO::EGameEventType mseType;

}

// BrnGameEvents.h:400
struct BrnGameState::GameStateModuleIO::PlayerCrashEndingEvent : public GameEvent<E_EVENT_PLAYER_CRASH_ENDING> {
}

// BrnGameEvents.h:3463
extern bool AddGameEvent<BrnGameState::GameStateModuleIO::PlayerCrashEndingEvent>(const const PlayerCrashEndingEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

