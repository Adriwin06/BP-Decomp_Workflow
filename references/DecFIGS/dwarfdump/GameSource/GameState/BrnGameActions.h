// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameActions.h:92
		using BrnNetwork::BrnNetworkModuleIO;

		// BrnGameActions.h:95
		enum EGameActionType {
			E_ACTION_RESET_PLAYER_CAR = 0,
			E_ACTION_GUI_UPDATE_PLAYER_CAR_ID = 1,
			E_ACTION_GUI_CAR_UNLOCK = 2,
			E_ACTION_RESET_PLAYER_CAR_ON_TRACK = 3,
			E_ACTION_SET_PLAYER_OPPONENTS = 4,
			E_ACTION_SETUP_NETWORK_CAR = 5,
			E_ACTION_SET_TAKEDOWN_CAMERA_STATE = 6,
			E_ACTION_SET_PLAYER_CAR_DRIVER = 7,
			E_ACTION_FORCE_PLAYER_CAR_DRIVER = 8,
			E_ACTION_RESET_CRASHING = 9,
			E_ACTION_RESET_RACE_CAR_CRASHING = 10,
			E_ACTION_REMOTE_PLAYER_DISCONNECTED = 11,
			E_ACTION_NOTIFY_DIRECTOR_LOCAL_PLAYER_DISCONNECTED = 12,
			E_ACTION_EMPTY_TRAFFIC_POOL = 13,
			E_ACTION_ON_PLAYER_TAKEDOWN = 14,
			E_ACTION_COMPLETED_STUNT = 15,
			E_ACTION_INPROGRESS_STUNT = 16,
			E_ACTION_PLAYER_CRASH_ENDING_SOON = 17,
			E_ACTION_CHECK_FOR_LOADING_SCREEN = 18,
			E_ACTION_PREPARE_FOR_MODE = 19,
			E_ACTION_BROADCAST_MODE_FINISH_LINES = 20,
			E_ACTION_STOP_MODE_OFFLINE = 21,
			E_ACTION_FINISH_MODE_ONLINE = 22,
			E_ACTION_FINISH_MODE_FINAL_ONLINE = 23,
			E_ACTION_SET_TRAFFIC_SCALE_BASED_ON_RANK = 24,
			E_ACTION_START_MODE_INTRO = 25,
			E_ACTION_STOP_MODE_INTRO = 26,
			E_ACTION_MARKED_MAN_LOADED = 27,
			E_ACTION_STOP_MODE_SPLASH = 28,
			E_ACTION_STOP_MODE_COUNTDOWN = 29,
			E_ACTION_START_PLAYING_MODE = 30,
			E_ACTION_FINISHED_MODE = 31,
			E_ACTION_SHOW_MODE_RESULTS = 32,
			E_ACTION_FINISHED_MODE_RESULTS = 33,
			E_ACTION_STOP_MODE = 34,
			E_ACTION_QUIT_MODE_OFFLINE = 35,
			E_ACTION_QUIT_MODE_ONLINE = 36,
			E_ACTION_IMPACT_TIME_START = 37,
			E_ACTION_IMPACT_TIME_END = 38,
			E_ACTION_SET_IN_MODE_START_REGION = 39,
			E_ACTION_SET_UP_ALL_DRIVE_THRUS = 40,
			E_ACTION_CLOSE_DRIVE_THRU = 41,
			E_ACTION_SET_COUNTDOWN = 42,
			E_ACTION_SHOW_HUD_MESSAGE = 43,
			E_ACTION_SHOW_POPUP = 44,
			E_ACTION_REQUEST_ROUTE_INFO = 45,
			E_ACTION_SET_LANDMARK_RACES = 46,
			E_ACTION_DAMAGE_CRITICAL = 47,
			E_ACTION_PLAYER_HIT_RIVAL = 48,
			E_ACTION_RIVAL_HIT_PLAYER = 49,
			E_ACTION_REQUEST_AUTOSAVE = 50,
			E_ACTION_ON_JUMP_START = 51,
			E_ACTION_SHOW_JUMP_NAME = 52,
			E_ACTION_ON_STUNT_ELEMENT_COMPLETE = 53,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_FOR_COUNTY = 54,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_BY_TYPE = 55,
			E_ACTION_STUNT_ELEMENT_BOOST = 56,
			E_ACTION_NEW_CAR_UNLOCKED = 57,
			E_ACTION_CAR_UNLOCK_END = 58,
			E_ACTION_CAR_SELECTION_CHANGED = 59,
			E_ACTION_CAR_SELECTION_CHANGED_DROPIN = 60,
			E_ACTION_CAR_SELECTION_DROPIN_COMPLETE = 61,
			E_ACTION_CAR_SELECTION_CHANGED_ONLINE = 62,
			E_ACTION_SWITCH_CAR_CORONAS_ON_OFF = 63,
			E_ACTION_CAR_SELECTION_REQUEST_STREAMING = 64,
			E_ACTION_ALLOW_BOOST_EARNING = 65,
			E_ACTION_STOP_BOOSTING = 66,
			E_ACTION_CAR_SELECT_START_GUI_ON_GAME_START = 67,
			E_ACTION_CAR_SELECT_TRANSITION_IN = 68,
			E_ACTION_CAR_SELECT_WAITING_FOR_AUDIO = 69,
			E_ACTION_CAR_SELECT_READY = 70,
			E_ACTION_CAR_SELECT_MODIFICATION_SCREEN = 71,
			E_ACTION_CAR_SELECT_EXIT = 72,
			E_ACTION_CAR_SELECT_ABORT = 73,
			E_ACTION_CAR_SELECT_CHANGE_COLOUR = 74,
			E_ACTION_CAR_SELECT_PAUSED_IN_CAR_SELECT = 75,
			E_ACTION_PLAYER_CAR_COLOUR_RESPONSE = 76,
			E_ACTION_CAR_SELECT_ONLINE_TIME_LEFT = 77,
			E_ACTION_CAR_SELECT_ONLINE_END = 78,
			E_ACTION_CAR_SELECT_ONLINE_SELECT_CAR = 79,
			E_ACTION_CAR_SELECT_ONLINE_CAR_IS_SHOWABLE = 80,
			E_ACTION_PAUSE_SIMULATION = 81,
			E_ACTION_UNPAUSE_SIMULATION = 82,
			E_ACTION_PAUSE_ONLINE = 83,
			E_ACTION_UNPAUSE_ONLINE = 84,
			E_ACTION_PROMPT_START_OFFLINE_GAME_MODE = 85,
			E_ACTION_PROMPT_DO_INVITE = 86,
			E_ACTION_START_PREPARE_FOR_INVITE = 87,
			E_ACTION_UPDATE_PREPARE_FOR_INVITE = 88,
			E_ACTION_PREPARED_FOR_INVITE = 89,
			E_ACTION_PERFORM_INVITE = 90,
			E_ACTION_INVITE_COMPLETE = 91,
			E_ACTION_DRIVE_THRU_BODY_SHOP = 92,
			E_ACTION_DRIVE_THRU_PAINT_SHOP = 93,
			E_ACTION_DRIVE_THRU_JUNK_YARD = 94,
			E_ACTION_DRIVE_THRU_GAS_STATION = 95,
			E_ACTION_DRIVE_THRU_CLOSED = 96,
			E_ACTION_DRIVE_THRU_STOP_PRESENTATION = 97,
			E_ACTION_PLAYER_REACHED_ROAD_RAGE_TARGET = 98,
			E_ACTION_DRIVE_THRU_DISCOVERED = 99,
			E_ACTION_ALL_DRIVE_THRUS_DISCOVERED = 100,
			E_ACTION_DRIVE_THRU_JUNK_YARD_ON_GAME_START = 101,
			E_ACTION_ON_TRAFFIC_CHECKING = 102,
			E_ACTION_ON_TRAFFIC_CHECKING_CHAIN = 103,
			E_ACTION_TRIGGER = 104,
			E_ACTION_KILLZONE = 105,
			E_ACTION_PLAYER_INVULNERABLE = 106,
			E_ACTION_WORLD_REGION_CHANGE = 107,
			E_ACTION_RACE_CAR_REACHED_CHECKPOINT = 108,
			E_ACTION_RACE_CAR_REACHED_FINISH = 109,
			E_ACTION_PLAYER_REACHED_PENULTIMATE_CHECKPOINT = 110,
			E_ACTION_TRAFFIC_TYPE_REQUEST = 111,
			E_ACTION_TRACK_PLAYER_TO_LOCATION = 112,
			E_ACTION_SET_WAYPOINT_DISTANCES_TO_FINISH = 113,
			E_ACTION_PLAYER_RESET_ON_TRACK = 114,
			E_ACTION_SHUTDOWN = 115,
			E_ACTION_SHUTDOWN_FINISHED = 116,
			E_ACTION_AWARD_SEQUENCE_START = 117,
			E_ACTION_AWARD_SEQUENCE_END = 118,
			E_ACTION_CRASH_COMBO = 119,
			E_ACTION_SET_SIXAXIS_STEERING = 120,
			E_ACTION_SWITCH_CAR_COLOUR = 121,
			E_ACTION_WORLD_STUNT_PERFORMED = 122,
			E_ACTION_OVERHEAD_SIGN_HIT = 123,
			E_ACTION_ALLOW_CAR_TO_JOIN_ROAD_RAGE = 124,
			E_ACTION_HIDE_CAR_IN_ROAD_RAGE = 125,
			E_ACTION_UPDATE_ROAD_RAGE_MADNESS = 126,
			E_ACTION_TRIGGER_CRASH_BREAKER = 127,
			E_ACTION_CANCEL_CRASH_BREAKER = 128,
			E_ACTION_ENTER_SHOWTIME_BONUS_REGION = 129,
			E_ACTION_TOGGLE_SHOWTIME_BEHAVIOUR = 130,
			E_ACTION_VEHICLE_LEAPT = 131,
			E_ACTION_VEHICLE_HIT = 132,
			E_ACTION_ENTER_NEW_ROAD = 133,
			E_ACTION_SHOWTIME_UPDATE = 134,
			E_ACTION_SHOWTIME_MODE_SWITCH = 135,
			E_ACTION_JUST_BOUNCED = 136,
			E_ACTION_JUST_APPLIED_EXTRA_SPIN = 137,
			E_ACTION_SHOWTIME_INTRO_START = 138,
			E_ACTION_POWER_PARK_RESULT = 139,
			E_ACTION_GAME_TRAINING = 140,
			E_ACTION_GAME_TRAINING_REQUEST = 141,
			E_ACTION_GAME_TRAINING_PAUSE = 142,
			E_ACTION_GAME_TRAINING_UNPAUSE = 143,
			E_ACTION_MODE_TIME_TIMEOUT = 144,
			E_ACTION_FREEBURN_CHALLENGE = 145,
			E_ACTION_FREEBURN_CHALLENGE_END_NOT_ACTIVE = 146,
			E_ACTION_FREEBURN_CHALLENGE_UPDATE = 147,
			E_ACTION_FREEBURN_CHALLENGE_COMPLETION_STATUS = 148,
			E_ACTION_FREEBURN_CHALLENGE_EVERY_PLAYER_COMPLETION_STATUS = 149,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE = 150,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS = 151,
			E_ACTION_FREEBURN_CHALLENGE_SHOW_SELECTOR = 152,
			E_ACTION_ACTIVE_FREEBURN_CHALLENGE = 153,
			E_ACTION_BLUE_TEAM_IS_ESCAPING = 154,
			E_ACTION_BLUE_TEAM_IS_BEHIND_YOU = 155,
			E_ACTION_LEADER_REACHED_BOUNDARY = 156,
			E_ACTION_PLAYER_ELIMINATED = 157,
			E_ACTION_TRAITOROUS_TAKEDOWN = 158,
			E_ACTION_SWITCH_BURNING_HOME_RUN_RUNNER = 159,
			E_ACTION_BURNOUT_SKILLZ = 160,
			E_ACTION_ROAD_RULES_SKILLZ = 161,
			E_ACTION_SET_BOOST = 162,
			E_ACTION_NEAR_MISS = 163,
			E_ACTION_DRIFTING = 164,
			E_ACTION_SPINNING = 165,
			E_ACTION_IN_AIR = 166,
			E_ACTION_ONCOMING = 167,
			E_ACTION_TAILGATING = 168,
			E_ACTION_DISTANCE_DRIVEN = 169,
			E_ACTION_AFTERTOUCH = 170,
			E_ACTION_EVENT_STATE_RESPONSE = 171,
			E_ACTION_GAME_STATS_RESPONSE = 172,
			E_ACTION_RANK_INFO_RESPONSE = 173,
			E_ACTION_PLAYER_INFO_RESPONSE = 174,
			E_ACTION_UNLOCKED_LIVERY_RESPONSE = 175,
			E_ACTION_CAR_SELECTION_RESPONSE = 176,
			E_ACTION_LANDMARK_VARIABLE_INFO_RESPONSE = 177,
			E_ACTION_REGION_FROM_POSITION_RESPONSE = 178,
			E_ACTION_UPDATE_GUI_ROUTE = 179,
			E_ACTION_ALL_RIVALRY_DATA_RESPONSE = 180,
			E_ACTION_ONE_RIVALRY_DATA_RESPONSE = 181,
			E_ACTION_SHOW_SATNAV = 182,
			E_ACTION_SET_LOADING_STATE = 183,
			E_ACTION_WAIT_FOR_STREAMING = 184,
			E_ACTION_PROGRESSION_PROFILE_DATA = 185,
			E_ACTION_LOAD_PROFILE = 186,
			E_ACTION_REMOVE_ALL_RIVALS = 187,
			E_ACTION_ADD_RIVAL = 188,
			E_ACTION_RIVAL_STATE_CHANGED = 189,
			E_ACTION_UPDATE_CAR_STATS = 190,
			E_ACTION_PROP_SMASH_PROGRESSION = 191,
			E_ACTION_UPDATE_PLAYER_MEDALS = 192,
			E_ACTION_EVENT_AT_JUNCTION_AVAILABLE = 193,
			E_ACTION_ALL_EVENTS_DISCOVERED = 194,
			E_ACTION_ALL_EVENTS_OF_TYPE_DISCOVERED = 195,
			E_ACTION_TROPHY_UNLOCK = 196,
			E_ACTION_ROAD_RAGE_PLAYER_DAMAGE = 197,
			E_ACTION_ALL_EVENT_TYPE_WON = 198,
			E_ACTION_RIVAL_UNLOCKED_INTO_THE_WORLD_ACTION = 199,
			E_ACTION_ONE_HUNDRED_PERCENT_COMPLETE = 200,
			E_ACTION_ACHIEVEMENTS_EARNED = 201,
			E_ACTION_ALL_RIVALS_SHUTDOWN = 202,
			E_ACTION_PAYBACK_LOST = 203,
			E_ACTION_PAYBACK_VICTIM_LEFT_GAME = 204,
			E_ACTION_PAYBACK_MUGSHOT = 205,
			E_ACTION_ABORT_MUGSHOT_CAPTURE = 206,
			E_ACTION_PAYBACK_ACTIVATED = 207,
			E_ACTION_PAYBACK_OVER = 208,
			E_ACTION_PAYBACK_SUCCEEDED = 209,
			E_ACTION_SOUND_TRIGGER = 210,
			E_ACTION_ONLINE_PLAYER_ADDED = 211,
			E_ACTION_ONLINE_PLAYER_REMOVED = 212,
			E_ACTION_OFFLINE_ADD_CAR_TO_MODE = 213,
			E_ACTION_OFFLINE_REMOVE_CAR_FROM_MODE = 214,
			E_ACTION_CAR_ADDITION_PRESENTATION_START = 215,
			E_ACTION_CAR_ADDITION_PRESENTATION_END = 216,
			E_ACTION_LOCAL_PLAYER_DISCONNECTED = 217,
			E_ACTION_LOCAL_PLAYER_LEFT_GAME = 218,
			E_ACTION_UPDATE_RICH_PRESENCE = 219,
			E_ACTION_SEND_TELEMETRY = 220,
			E_ACTION_ONLINE_GAME_RESULT = 221,
			E_ACTION_ONLINE_ROUND_RESULT = 222,
			E_ACTION_ONLINE_LAUNCH_FREE_BURN_LOBBY = 223,
			E_ACTION_ROAD_RULES_CHALLENGE_SCORES = 224,
			E_ACTION_ROAD_RULES_PERSONAL_BEST = 225,
			E_ACTION_ROAD_RULES_OVERWRITE_SERVER_RECORD = 226,
			E_ACTION_START_GAME_THROUGH_PLAYER_JOIN = 227,
			E_ACTION_RESTART_TRAFFIC = 228,
			E_ACTION_NETWORK_COLLECTABLE = 229,
			E_ACTION_NETWORK_CAUGHT_FEVER = 230,
			E_ACTION_REQUEST_GAMERCARD = 231,
			E_ACTION_HUD_MESSAGE_TOOK_LEAD = 232,
			E_ACTION_HUD_MESSAGE_TOOK_LAST = 233,
			E_ACTION_HUD_MESSAGE_DIST_TO_FINISH = 234,
			E_ACTION_HUD_MESSAGE_LEADING = 235,
			E_ACTION_HUD_MESSAGE_NECK_AND_NECK = 236,
			E_ACTION_HUD_MESSAGE_X_FINISHES = 237,
			E_ACTION_HUD_MESSAGE_X_REACHES_CHECKPOINT = 238,
			E_ACTION_HUD_MESSAGE_PLAYER_REACHES_CHECKPOINT = 239,
			E_ACTION_HUD_MESSAGE_X_CRASHES = 240,
			E_ACTION_HUD_MESSAGE_WRONG_WAY = 241,
			E_ACTION_HUD_MESSAGE_STUNT_PERFORMED = 242,
			E_ACTION_HUD_MESSAGE_COMBO_PERFORMED = 243,
			E_ACTION_HUD_MESSAGE_STUNT_TIME_UP = 244,
			E_ACTION_HUD_MESSAGE_BHR_CHECKPOINT = 245,
			E_ACTION_HUD_MESSAGE_BHR_RUNNER_CRASHED = 246,
			E_ACTION_HUD_MESSAGE_ONLINE_TEAM_CHANGE = 247,
			E_ACTION_HUD_MESSAGE_ROAD_RAGE_TIME_EXTENSION = 248,
			E_ACTION_HUD_MESSAGE_RIVAL_FIRST_HIT = 249,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_RIVAL = 250,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_TARGET = 251,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_FLEEING = 252,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_WRECKED = 253,
			E_ACTION_HUD_MESSAGE_PLAYER_CAN_SKIP_CRASH = 254,
			E_ACTION_HUD_MESSAGE_TIME_UP = 255,
			E_ACTION_HUD_MESSAGE_CANT_PAINT = 256,
			E_ACTION_HUD_MESSAGE_MUST_FIX = 257,
			E_ACTION_HUD_MESSAGE_JUMP_FAILED = 258,
			E_ACTION_WRONG_CAR_FOR_CHALLENGE = 259,
			E_ACTION_ROAD_RULES_ENTER_ROAD = 260,
			E_ACTION_ROAD_RULES_LEAVE_ROAD = 261,
			E_ACTION_ROAD_RULES_BATCH_QUERY = 262,
			E_ACTION_UPCOMING_ROAD_CHANGE = 263,
			E_ACTION_ROAD_RULES_START_RULE = 264,
			E_ACTION_ROAD_RULES_END_RULE = 265,
			E_ACTION_ROAD_RULES_UPDATE = 266,
			E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE = 267,
			E_ACTION_ROAD_RULES_NEW_HIGH_SCORE = 268,
			E_ACTION_ROAD_RULES_ACTIVE_RULE_CHANGE = 269,
			E_ACTION_ROAD_RULES_TIME_WARNING = 270,
			E_ACTION_ROAD_RULES_ROAD_SCORE = 271,
			E_ACTION_ROAD_RULES_NEW_RULERS = 272,
			E_ACTION_ROAD_RULES_MODE_SWITCH = 273,
			E_ACTION_PLAYER_IN_SHORTCUT = 274,
			E_ACTION_IMAGE_GALLERY_RENDER_IMAGE = 275,
			E_ACTION_IMAGE_GALLERY_IMAGE_INFO = 276,
			E_ACTION_IMAGE_GALLERY_COUNT_ACTION = 277,
			E_ACTION_IMAGE_GALLERY_DATA_ACTION = 278,
			E_ACTION_IMAGE_GALLERY_LOAD_COMPLETE = 279,
			E_ACTION_SAVE_IMAGE_AND_AUTOSAVE = 280,
			E_ACTION_LOAD_IMAGES = 281,
			E_ACTION_DXT_DECODE_IMAGE = 282,
			E_ACTION_SOUND_BIND_PROPS = 283,
			E_ACTION_COUNT = 284,
		}

		// Declaration
		struct ResetPlayerCarAction {
			// BrnGameActions.h:558
			enum CarSelectType {
				E_CAR_SELECT_DONT_DROP = 0,
				E_CAR_SELECT_DROP_NORMAL = 1,
				E_CAR_SELECT_DROP_SHUTDOWN = 2,
			}

		}

		// Declaration
		struct PrepareForModeAction {
			// BrnGameActions.h:856
			enum EPrepareForModeStage {
				E_PFM_STAGE_ALL_IN_ONE = 0,
				E_PFM_STAGE_FIRST_OF_TWO = 1,
				E_PFM_STAGE_SECOND_OF_TWO = 2,
				E_PFM_STAGE_COUNT = 3,
			}

		}

		// Declaration
		struct SoundTriggerAction {
			// BrnGameActions.h:3663
			enum eType {
				E_TYPE_INVALID = 0,
				E_TYPE_AT_ENTITY = 1,
				E_TYPE_AHEAD_OF_ENTITY = 2,
				E_TYPE_COUNT = 3,
			}

		}

		// Declaration
		struct NewCarUnlockedAction {
			// BrnGameActions.h:3770
			enum Type {
				E_TYPE_UNLOCK = 0,
				E_TYPE_GIFT = 1,
				E_TYPE_TROPHY = 2,
				E_TYPE_SHUTDOWN_RIVAL = 3,
			}

		}

		// BrnGameActions.h:462
		const int32_t KI_EVENT_MANAGER_DEFAULT_ACTION_QUEUE_LENGTH = 13312;

		// BrnGameActions.h:463
		const int32_t KI_EVENT_MANAGER_SMALL_ACTION_QUEUE_LENGTH = 256;

	}

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_RESET_PLAYER_CAR> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:554
struct BrnGameState::GameStateModuleIO::ResetPlayerCarAction : public GameAction<E_ACTION_RESET_PLAYER_CAR> {
private:
	// BrnGameActions.h:659
	Vector3 mPosition;

	// BrnGameActions.h:660
	Vector3 mDirection;

	// BrnGameActions.h:661
	CgsID mCarModelId;

	// BrnGameActions.h:662
	CgsID mWheelModelId;

	// BrnGameActions.h:663
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex mePlayerScoringIndex;

	// BrnGameActions.h:664
	bool mbInCarSelect;

	// BrnGameActions.h:665
	float32_t mfDeformAmount;

	// BrnGameActions.h:666
	BrnPhysics::Deformation::DeformationResetType meDeformationType;

	// BrnGameActions.h:667
	BrnGameState::GameStateModuleIO::ResetPlayerCarAction::CarSelectType meCarSelectType;

	// BrnGameActions.h:668
	bool mbCarSelectDontStreamAudio;

	// BrnGameActions.h:669
	bool mbResetPlayerCamera;

	// BrnGameActions.h:670
	bool mbKeepResetSection;

public:
	// BrnGameActions.h:566
	void Construct();

	// BrnGameActions.h:569
	bool HasToChangeLocation() const;

	// BrnGameActions.h:572
	bool HasToChangeCar() const;

	// BrnGameActions.h:575
	bool HasToChangePlayerScoringIndex() const;

	// BrnGameActions.h:578
	bool HasToDeform() const;

	// BrnGameActions.h:581
	Vector3 GetPosition() const;

	// BrnGameActions.h:584
	Vector3 GetDirection() const;

	// BrnGameActions.h:587
	CgsID GetCarModelId() const;

	// BrnGameActions.h:590
	CgsID GetWheelModelId() const;

	// BrnGameActions.h:593
	bool InCarSelect() const;

	// BrnGameActions.h:596
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex GetPlayerScoringIndex() const;

	// BrnGameActions.h:599
	float32_t GetDeformAmount() const;

	// BrnGameActions.h:602
	const bool GetShouldResetPlayerCamera() const;

	// BrnGameActions.h:607
	void SetLocation(Vector3, Vector3);

	// BrnGameActions.h:612
	void SetCarData(CgsID, CgsID);

	// BrnGameActions.h:616
	void SetPlayerScoringIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex);

	// BrnGameActions.h:620
	void SetInCarSelect(bool);

	// BrnGameActions.h:624
	void SetDeformAmount(float32_t);

	// BrnGameActions.h:628
	void SetDeformationResetType(BrnPhysics::Deformation::DeformationResetType);

	// BrnGameActions.h:631
	BrnPhysics::Deformation::DeformationResetType GetDeformationResetType() const;

	// BrnGameActions.h:634
	BrnGameState::GameStateModuleIO::ResetPlayerCarAction::CarSelectType GetCarSelectType() const;

	// BrnGameActions.h:638
	void SetCarSelectType(BrnGameState::GameStateModuleIO::ResetPlayerCarAction::CarSelectType);

	// BrnGameActions.h:641
	bool GetCarSelectDontStreamAudio() const;

	// BrnGameActions.h:645
	void SetCarSelectDontStreamAudio(bool);

	// BrnGameActions.h:649
	void SetShouldResetPlayerCamera(bool);

	// BrnGameActions.h:652
	bool GetKeepResetSectionFlag() const;

	// BrnGameActions.h:656
	void SetKeepResetSection(bool);

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_PREPARE_FOR_MODE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:853
struct BrnGameState::GameStateModuleIO::PrepareForModeAction : public GameAction<E_ACTION_PREPARE_FOR_MODE> {
private:
	// BrnGameActions.h:936
	BrnGameState::GameStateModuleIO::PrepareForModeAction::EPrepareForModeStage mePrepareForModeStage;

	// BrnGameActions.h:938
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex[8] maePlayerScoringIndex;

	// BrnGameActions.h:939
	GameModeParams mGameModeParams;

	// BrnGameActions.h:940
	int32_t miCurrentRound;

	// BrnGameActions.h:941
	bool mbComingFromOnlineLobbyMode;

	// BrnGameActions.h:942
	bool mbFinishedOnlineEvent;

	// BrnGameActions.h:943
	bool mbStartingFreeburnDueToPlayerJoin;

	// BrnGameActions.h:946
	RoadRulesRecvData::NetworkPlayerID[8] maDisconnectedNetworkPlayerID;

	// BrnGameActions.h:947
	int32_t miNumPlayersDisconnected;

	// BrnGameActions.h:948
	float32_t mfPlayerBoostEarning;

	// BrnGameActions.h:949
	int32_t miShotGroup;

public:
	// BrnGameActions.h:870
	void Construct(const GameModeParams *, int32_t, bool);

	// BrnGameActions.h:874
	const GameModeParams * GetGameModeParams() const;

	// BrnGameActions.h:877
	int32_t GetCurrentRound() const;

	// BrnGameActions.h:880
	bool IsMovingBetweenOnlineLobbyModes() const;

	// BrnGameActions.h:885
	void SetPlayerScoringIndex(int32_t, BrnGameState::GameStateModuleIO::EPlayerScoringIndex);

	// BrnGameActions.h:889
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex GetPlayerScoringIndex(int32_t) const;

	// BrnGameActions.h:893
	bool GetPlayerDisconnected(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnGameActions.h:897
	void SetPlayerDisconnected(RoadRulesRecvData::NetworkPlayerID);

	// BrnGameActions.h:900
	float32_t GetPlayerBoostEarning() const;

	// BrnGameActions.h:904
	void SetPlayerBoostEarning(float32_t);

	// BrnGameActions.h:907
	int32_t GetShotGroup() const;

	// BrnGameActions.h:911
	void SetShotGroup(int32_t);

	// BrnGameActions.h:914
	bool GetFinishedOnlineEvent() const;

	// BrnGameActions.h:918
	void SetFinishedOnlineEvent(bool);

	// BrnGameActions.h:921
	bool IsFirstPrepareForMode() const;

	// BrnGameActions.h:925
	void SetPrepareStage(BrnGameState::GameStateModuleIO::PrepareForModeAction::EPrepareForModeStage);

	// BrnGameActions.h:929
	void SetStartingFreeburnLobbyDueToPlayerJoin(bool);

	// BrnGameActions.h:932
	bool GetStartingFreeburnLobbyDueToPlayerJoin() const;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_BROADCAST_MODE_FINISH_LINES> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:961
struct BrnGameState::GameStateModuleIO::BroadcastModeFinishLinesAction : public GameAction<E_ACTION_BROADCAST_MODE_FINISH_LINES> {
	// BrnGameActions.h:963
	BoxRegion mBoxRegion;

	// BrnGameActions.h:964
	CgsID mFinishLineID;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_START_MODE_INTRO> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1170
struct BrnGameState::GameStateModuleIO::StartModeIntroAction : public GameAction<E_ACTION_START_MODE_INTRO> {
	// BrnGameActions.h:1173
	float32_t mfDurationSeconds;

	// BrnGameActions.h:1175
	FlybyData mFlybyData;

	// BrnGameActions.h:1176
	BrnGameState::GameStateModuleIO::EGameModeType meGameMode;

	// BrnGameActions.h:1177
	bool mbFinishedOnlineEvent;

	// BrnGameActions.h:1178
	bool mbFinishedOnlineLobbyMode;

	// BrnGameActions.h:1179
	bool mbDoIntro;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SHOW_MODE_RESULTS> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1374
struct BrnGameState::GameStateModuleIO::ShowModeResultsAction : public GameAction<E_ACTION_SHOW_MODE_RESULTS> {
	// BrnGameActions.h:1377
	BrnGameState::GameStateModuleIO::EGameModeType meFinishedGameModeType;

	// BrnGameActions.h:1378
	bool mbIsOnlineGameMode;

	// BrnGameActions.h:1379
	int32_t miPlayerFinishPosition;

	// BrnGameActions.h:1380
	int32_t miModeScore;

	// BrnGameActions.h:1381
	float32_t mfModeTime;

	// BrnGameActions.h:1384
	int32_t miBaseScore;

	// BrnGameActions.h:1385
	int32_t miScoreMultiplier;

	// BrnGameActions.h:1386
	float32_t mfDistanceTravelled;

	// BrnGameActions.h:1388
	bool mbTimedOut;

	// BrnGameActions.h:1389
	bool mbHasCrashedOut;

	// BrnGameActions.h:1390
	bool mbHasBeenEliminated;

	// BrnGameActions.h:1392
	bool mbDoOutroCameras;

	// BrnGameActions.h:1394
	int32_t miPercentOfGameComplete;

	// BrnGameActions.h:1399
	int32_t[5] maiSignatureTakedownsAwarded;

	// BrnGameActions.h:1400
	int32_t miNumSignatureTakedownsAwarded;

	// BrnGameActions.h:1401
	bool mbFinalSignatureTakedownAwarded;

	// BrnGameActions.h:1402
	bool mbFinalEventCompleted;

	// BrnGameActions.h:1404
	bool mbEventCountsToProgression;

	// BrnGameActions.h:1407
	CgsID mNewlyUnlockedCarID;

	// BrnGameActions.h:1408
	CgsID mNewlyUnlockedFreeCarID;

	// BrnGameActions.h:1410
	bool mbHasCompletedLastRank;

	// BrnGameActions.h:1411
	int32_t miRankBeforeEvent;

	// BrnGameActions.h:1412
	int32_t miNewRank;

	// BrnGameActions.h:1413
	bool mbHasJustRankedUp;

	// BrnGameActions.h:1414
	bool mbHasRankUpUnlockedACar;

	// BrnGameActions.h:1415
	bool mbHasRankUpUnlockedAFreeCar;

	// BrnGameActions.h:1417
	bool mbJustWonSpecialEventForFirstTime;

	// BrnGameActions.h:1418
	CgsID mOriginalCarID;

	// BrnGameActions.h:1419
	DerivedCarArray laCarsToUnlockFromSpecialEvent;

	// BrnGameActions.h:1422
	CgsID mNewlyUnlockedRivalID;

	// BrnGameActions.h:1425
	float32_t mfCurrentGameCompletePercentage;

	// BrnGameActions.h:1427
	int32_t miNumLossesForGameMode;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_STOP_MODE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1454
struct BrnGameState::GameStateModuleIO::StopModeAction : public GameAction<E_ACTION_STOP_MODE> {
	// BrnGameActions.h:1456
	BrnGameState::GameStateModuleIO::EGameModeType meStoppedGameModeType;

	// BrnGameActions.h:1457
	BrnGameState::GameStateModuleIO::EGameModeType meNewGameModeType;

	// BrnGameActions.h:1458
	int32_t miRoundIndex;

	// BrnGameActions.h:1459
	int32_t miNumConsectiveLosses;

	// BrnGameActions.h:1460
	bool mbIsOnlineGameMode;

	// BrnGameActions.h:1461
	bool mbHasAborted;

	// BrnGameActions.h:1462
	bool mbIsLastRound;

	// BrnGameActions.h:1463
	bool mbAbortDueToDisconnects;

	// BrnGameActions.h:1464
	bool mbIsTransitioningToShowtime;

	// BrnGameActions.h:1465
	bool mbStoppedDueToStartingFreeburnLobbyOnPlayerJoin;

public:
	// BrnGameActions.h:1468
	bool IsNextRoundAvailable() const;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SET_TAKEDOWN_CAMERA_STATE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1627
struct BrnGameState::GameStateModuleIO::SetTakedownCameraAction : public GameAction<E_ACTION_SET_TAKEDOWN_CAMERA_STATE> {
	// BrnGameActions.h:1630
	bool mbActive;

	// BrnGameActions.h:1631
	bool mbIsSignature;

	// BrnGameActions.h:1632
	bool mbIsRevengeTakedown;

	// BrnGameActions.h:1633
	EActiveRaceCarIndex meFocusOnRaceCarIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_IMPACT_TIME_START> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1662
struct BrnGameState::GameStateModuleIO::ImpactTimeStartAction : public GameAction<E_ACTION_IMPACT_TIME_START> {
	// BrnGameActions.h:1665
	float32_t mfTimestepMultiplier;

	// BrnGameActions.h:1666
	bool mbDoForceAdditiveAftertouch;

	// BrnGameActions.h:1667
	bool mbEnteringShowtime;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_DRIVE_THRU_BODY_SHOP> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1992
struct BrnGameState::GameStateModuleIO::BodyShopDriveThruAction : public GameAction<E_ACTION_DRIVE_THRU_BODY_SHOP> {
	// BrnGameActions.h:1994
	Matrix44Affine mTransform;

	// BrnGameActions.h:1995
	Matrix44Affine mBaseTransform;

	// BrnGameActions.h:1997
	EntityId mCarEntityID;

	// BrnGameActions.h:1999
	bool mbDoPresentation;

	// BrnGameActions.h:2000
	bool mbEffective;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_DRIVE_THRU_PAINT_SHOP> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2012
struct BrnGameState::GameStateModuleIO::PaintShopDriveThruAction : public GameAction<E_ACTION_DRIVE_THRU_PAINT_SHOP> {
	// BrnGameActions.h:2014
	Matrix44Affine mTransform;

	// BrnGameActions.h:2015
	Matrix44Affine mBaseTransform;

	// BrnGameActions.h:2016
	bool mbDoPresentation;

	// BrnGameActions.h:2017
	uint32_t muColourIndex;

	// BrnGameActions.h:2018
	uint32_t muPaletteIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_DRIVE_THRU_GAS_STATION> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2031
struct BrnGameState::GameStateModuleIO::GasStationDriveThruAction : public GameAction<E_ACTION_DRIVE_THRU_GAS_STATION> {
	// BrnGameActions.h:2033
	Matrix44Affine mTransform;

	// BrnGameActions.h:2034
	Matrix44Affine mBaseTransform;

	// BrnGameActions.h:2035
	bool mbDoPresentation;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_RACE_CAR_REACHED_CHECKPOINT> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2275
struct BrnGameState::GameStateModuleIO::RaceCarReachedCheckpointAction : public GameAction<E_ACTION_RACE_CAR_REACHED_CHECKPOINT> {
	// BrnGameActions.h:2277
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGameActions.h:2278
	EGlobalRaceCarIndex meGlobalRaceCarIndex;

	// BrnGameActions.h:2279
	int32_t miCheckPointIndex;

	// BrnGameActions.h:2280
	uint16_t muNextCheckpointAISectionIndex;

	// BrnGameActions.h:2281
	bool mbIsLocalPlayer;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ROAD_RAGE_PLAYER_DAMAGE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2453
struct BrnGameState::GameStateModuleIO::RoadRagePlayerDamageAction : public GameAction<E_ACTION_ROAD_RAGE_PLAYER_DAMAGE> {
	// BrnGameActions.h:2455
	float32_t mfHowCloseToTotalled;

	// BrnGameActions.h:2456
	bool mbOneMoreCrashToTotalled;

	// BrnGameActions.h:2457
	bool mbPlayerTotalled;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_CAR_SELECT_TRANSITION_IN> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2682
struct BrnGameState::GameStateModuleIO::CarSelectTransitionInAction : public GameAction<E_ACTION_CAR_SELECT_TRANSITION_IN> {
	// BrnGameActions.h:2684
	bool mbStart;

	// BrnGameActions.h:2685
	bool mbUnlockingCars;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_CAR_SELECT_READY> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2707
struct BrnGameState::GameStateModuleIO::CarSelectReadyAction : public GameAction<E_ACTION_CAR_SELECT_READY> {
	// BrnGameActions.h:2710
	BrnGameState::GameStateModuleIO::ECarSelectType meCarSelectType;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_CAR_SELECT_MODIFICATION_SCREEN> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2729
struct BrnGameState::GameStateModuleIO::CarSelectModificationScreen : public GameAction<E_ACTION_CAR_SELECT_MODIFICATION_SCREEN> {
	// BrnGameActions.h:2731
	BrnGameState::GameStateModuleIO::ECarSelectType meCarSelectType;

	// BrnGameActions.h:2732
	bool mbEntering;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_CAR_SELECT_EXIT> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2784
struct BrnGameState::GameStateModuleIO::CarSelectExitAction : public GameAction<E_ACTION_CAR_SELECT_EXIT> {
	// BrnGameActions.h:2786
	bool mbOnlineCarSelect;

	// BrnGameActions.h:2787
	Vector3 mExitSpawnLocation;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_CAR_SELECT_ONLINE_CAR_IS_SHOWABLE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2824
struct BrnGameState::GameStateModuleIO::CarSelectOnlineCarIsShowable : public GameAction<E_ACTION_CAR_SELECT_ONLINE_CAR_IS_SHOWABLE> {
	// BrnGameActions.h:2827
	bool mbCarIsShowable;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_PAYBACK_ACTIVATED> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3132
struct BrnGameState::GameStateModuleIO::PaybackActivatedAction : public GameAction<E_ACTION_PAYBACK_ACTIVATED> {
	// BrnGameActions.h:3134
	BrnNetwork::EPaybackType mePaybackType;

	// BrnGameActions.h:3135
	EActiveRaceCarIndex mePaybackAggressorIndex;

	// BrnGameActions.h:3136
	EActiveRaceCarIndex mePaybackVictimIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_VEHICLE_HIT> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3371
struct BrnGameState::GameStateModuleIO::VehicleHitAction : public GameAction<E_ACTION_VEHICLE_HIT> {
	// BrnGameActions.h:3373
	BrnTraffic::VehicleClass meVehicleClass;

	// BrnGameActions.h:3374
	int32_t miVehicleClassTotalHit;

	// BrnGameActions.h:3375
	int32_t miAllVehiclesTotalHit;

	// BrnGameActions.h:3376
	int32_t miVehicleBaseScore;

	// BrnGameActions.h:3377
	BrnTraffic::VehicleScoreCategory meVehicleScoreCategory;

	// BrnGameActions.h:3378
	int32_t miScoreMultiplierEarned;

	// BrnGameActions.h:3379
	int32_t miMultiplierTotal;

	// BrnGameActions.h:3380
	int32_t miChainBonusEarned;

	// BrnGameActions.h:3381
	uint16_t muVehicleIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_JUST_BOUNCED> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3436
struct BrnGameState::GameStateModuleIO::JustBouncedAction : public GameAction<E_ACTION_JUST_BOUNCED> {
	// BrnGameActions.h:3438
	int32_t miBounceChain;

	// BrnGameActions.h:3439
	bool mbFromStationary;

	// BrnGameActions.h:3440
	bool mbOnCar;

	// BrnGameActions.h:3441
	bool mbBoostedBounce;

	// BrnGameActions.h:3442
	bool mbGoodImpact;

	// BrnGameActions.h:3443
	int32_t miCurrentComboCount;

	// BrnGameActions.h:3444
	int32_t miTotalVehiclesHit;

	// BrnGameActions.h:3445
	EntityId midImpactEntityId;

	// BrnGameActions.h:3446
	Vector3 mContactPoint;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SOUND_TRIGGER> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3658
struct BrnGameState::GameStateModuleIO::SoundTriggerAction : public GameAction<E_ACTION_SOUND_TRIGGER> {
	// BrnGameActions.h:3699
	Vector3 mQueryPos;

	// BrnGameActions.h:3700
	EntityId mEntityId;

	// BrnGameActions.h:3701
	BrnGameState::GameStateModuleIO::SoundTriggerAction::eType meResultType;

	// BrnGameActions.h:3702
	uint32_t muActiveTriggers;

public:
	// BrnGameActions.h:3676
	void Construct(Vector3, EntityId, BrnGameState::GameStateModuleIO::SoundTriggerAction::eType);

	// BrnGameActions.h:3681
	// Declaration
	void SetTriggerActive(BrnTrigger::GenericRegion::Type) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameActions.h:6039
		using namespace BrnTrigger;

	}

	// BrnGameActions.h:3686
	// Declaration
	bool IsTriggerActive(BrnTrigger::GenericRegion::Type) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameActions.h:6066
		using namespace BrnTrigger;

	}

	// BrnGameActions.h:3690
	bool IsEmpty();

	// BrnGameActions.h:3694
	void ClearAction();

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_NEW_CAR_UNLOCKED> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3764
struct BrnGameState::GameStateModuleIO::NewCarUnlockedAction : public GameAction<E_ACTION_NEW_CAR_UNLOCKED> {
	// BrnGameActions.h:3778
	CgsID mCarModelId;

	// BrnGameActions.h:3779
	BrnGameState::GameStateModuleIO::NewCarUnlockedAction::Type meType;

	// BrnGameActions.h:3780
	float32_t mfMinPresentationDuration;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ON_JUMP_START> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3806
struct BrnGameState::GameStateModuleIO::OnJumpStartAction : public GameAction<E_ACTION_ON_JUMP_START> {
	// BrnGameActions.h:3808
	CgsID mID;

	// BrnGameActions.h:3809
	BrnTrigger::GenericRegion::StuntCameraType meStuntCameraType;

	// BrnGameActions.h:3810
	int32_t miCameraShot;

	// BrnGameActions.h:3811
	bool mbFirstTimeJumped;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ON_STUNT_ELEMENT_COMPLETE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3837
struct BrnGameState::GameStateModuleIO::OnStuntElementCompleteAction : public GameAction<E_ACTION_ON_STUNT_ELEMENT_COMPLETE> {
	// BrnGameActions.h:3839
	CgsID mID;

	// BrnGameActions.h:3840
	BrnGameState::StuntElementType meStuntElementType;

	// BrnGameActions.h:3841
	int32_t miCurrentCount;

	// BrnGameActions.h:3842
	int32_t miTotalCount;

	// BrnGameActions.h:3843
	BrnGameState::GameStateModuleIO::EGameModeType meCurrentGameMode;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_CAR_SELECTION_CHANGED> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3898
struct BrnGameState::GameStateModuleIO::CarSelectionChangedAction : public GameAction<E_ACTION_CAR_SELECTION_CHANGED> {
	// BrnGameActions.h:3900
	CgsID mJunkyardId;

	// BrnGameActions.h:3901
	Vector3 mPosition;

	// BrnGameActions.h:3902
	Vector3 mDirection;

	// BrnGameActions.h:3903
	bool mbIsLeft;

	// BrnGameActions.h:3904
	bool mbPlayCraneDropAudio;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_CAR_SELECTION_CHANGED_DROPIN> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3916
struct BrnGameState::GameStateModuleIO::CarSelectionChangedDropInAction : public GameAction<E_ACTION_CAR_SELECTION_CHANGED_DROPIN> {
	// BrnGameActions.h:3918
	bool mbIsLeft;

	// BrnGameActions.h:3919
	CgsID mCarId;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_CAR_ADDITION_PRESENTATION_START> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4208
struct BrnGameState::GameStateModuleIO::CarAdditionPresentationStartAction : public GameAction<E_ACTION_CAR_ADDITION_PRESENTATION_START> {
	// BrnGameActions.h:4212
	CgsID mRivalID;

	// BrnGameActions.h:4213
	CgsID mCarID;

	// BrnGameActions.h:4214
	EGlobalRaceCarIndex meAddedCarGlobalIndex;

	// BrnGameActions.h:4217
	float32_t mfPresentationDuration;

	// BrnGameActions.h:4220
	bool mbDoCamera;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_HUD_MESSAGE_STUNT_PERFORMED> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4528
struct BrnGameState::GameStateModuleIO::HUDMessageStuntPerformed : public GameAction<E_ACTION_HUD_MESSAGE_STUNT_PERFORMED> {
	// BrnGameActions.h:4530
	StuntInfo mStuntInfo;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SHOWTIME_INTRO_START> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4771
struct BrnGameState::GameStateModuleIO::ShowtimeIntro : public GameAction<E_ACTION_SHOWTIME_INTRO_START> {
	// BrnGameActions.h:4773
	bool mbStart;

	// BrnGameActions.h:4774
	Vector3 mAimDirection;

}

// BrnGameActions.h:492
struct BrnGameState::GameStateModuleIO::BaseGameActionQueue<13312> : public VariableEventQueue<13312,16> {
}

// BrnGameActions.h:478
extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

// BrnGameActions.h:1752
extern const int32_t KI_MAX_POINTS = 2;

// BrnGameActions.h:2572
extern const int32_t KI_PLAYER_HAS_FINISHED_LAST_RANK = [255, 255, 255, 255, 255, 255, 255, 255];

// BrnGameActions.h:2629
extern const uint32_t KU_MAX_CARS_IN_RESPONSE_ACTION = 92;

// BrnGameActions.h:5230
extern const int32_t KI_POSITION_DISCONNECTED = 4294967295;

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameActions.h:92
		using BrnNetwork::BrnNetworkModuleIO;

		// BrnGameActions.h:95
		enum EGameActionType {
			E_ACTION_RESET_PLAYER_CAR = 0,
			E_ACTION_GUI_UPDATE_PLAYER_CAR_ID = 1,
			E_ACTION_GUI_CAR_UNLOCK = 2,
			E_ACTION_RESET_PLAYER_CAR_ON_TRACK = 3,
			E_ACTION_SET_PLAYER_OPPONENTS = 4,
			E_ACTION_SETUP_NETWORK_CAR = 5,
			E_ACTION_SET_TAKEDOWN_CAMERA_STATE = 6,
			E_ACTION_SET_PLAYER_CAR_DRIVER = 7,
			E_ACTION_FORCE_PLAYER_CAR_DRIVER = 8,
			E_ACTION_RESET_CRASHING = 9,
			E_ACTION_RESET_RACE_CAR_CRASHING = 10,
			E_ACTION_REMOTE_PLAYER_DISCONNECTED = 11,
			E_ACTION_NOTIFY_DIRECTOR_LOCAL_PLAYER_DISCONNECTED = 12,
			E_ACTION_EMPTY_TRAFFIC_POOL = 13,
			E_ACTION_ON_PLAYER_TAKEDOWN = 14,
			E_ACTION_COMPLETED_STUNT = 15,
			E_ACTION_INPROGRESS_STUNT = 16,
			E_ACTION_PLAYER_CRASH_ENDING_SOON = 17,
			E_ACTION_CHECK_FOR_LOADING_SCREEN = 18,
			E_ACTION_PREPARE_FOR_MODE = 19,
			E_ACTION_BROADCAST_MODE_FINISH_LINES = 20,
			E_ACTION_STOP_MODE_OFFLINE = 21,
			E_ACTION_FINISH_MODE_ONLINE = 22,
			E_ACTION_FINISH_MODE_FINAL_ONLINE = 23,
			E_ACTION_SET_TRAFFIC_SCALE_BASED_ON_RANK = 24,
			E_ACTION_START_MODE_INTRO = 25,
			E_ACTION_STOP_MODE_INTRO = 26,
			E_ACTION_MARKED_MAN_LOADED = 27,
			E_ACTION_STOP_MODE_SPLASH = 28,
			E_ACTION_STOP_MODE_COUNTDOWN = 29,
			E_ACTION_START_PLAYING_MODE = 30,
			E_ACTION_FINISHED_MODE = 31,
			E_ACTION_SHOW_MODE_RESULTS = 32,
			E_ACTION_FINISHED_MODE_RESULTS = 33,
			E_ACTION_STOP_MODE = 34,
			E_ACTION_QUIT_MODE_OFFLINE = 35,
			E_ACTION_QUIT_MODE_ONLINE = 36,
			E_ACTION_IMPACT_TIME_START = 37,
			E_ACTION_IMPACT_TIME_END = 38,
			E_ACTION_SET_IN_MODE_START_REGION = 39,
			E_ACTION_SET_UP_ALL_DRIVE_THRUS = 40,
			E_ACTION_CLOSE_DRIVE_THRU = 41,
			E_ACTION_SET_COUNTDOWN = 42,
			E_ACTION_SHOW_HUD_MESSAGE = 43,
			E_ACTION_SHOW_POPUP = 44,
			E_ACTION_REQUEST_ROUTE_INFO = 45,
			E_ACTION_SET_LANDMARK_RACES = 46,
			E_ACTION_DAMAGE_CRITICAL = 47,
			E_ACTION_PLAYER_HIT_RIVAL = 48,
			E_ACTION_RIVAL_HIT_PLAYER = 49,
			E_ACTION_REQUEST_AUTOSAVE = 50,
			E_ACTION_ON_JUMP_START = 51,
			E_ACTION_SHOW_JUMP_NAME = 52,
			E_ACTION_ON_STUNT_ELEMENT_COMPLETE = 53,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_FOR_COUNTY = 54,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_BY_TYPE = 55,
			E_ACTION_STUNT_ELEMENT_BOOST = 56,
			E_ACTION_NEW_CAR_UNLOCKED = 57,
			E_ACTION_CAR_UNLOCK_END = 58,
			E_ACTION_CAR_SELECTION_CHANGED = 59,
			E_ACTION_CAR_SELECTION_CHANGED_DROPIN = 60,
			E_ACTION_CAR_SELECTION_DROPIN_COMPLETE = 61,
			E_ACTION_CAR_SELECTION_CHANGED_ONLINE = 62,
			E_ACTION_SWITCH_CAR_CORONAS_ON_OFF = 63,
			E_ACTION_CAR_SELECTION_REQUEST_STREAMING = 64,
			E_ACTION_ALLOW_BOOST_EARNING = 65,
			E_ACTION_STOP_BOOSTING = 66,
			E_ACTION_CAR_SELECT_START_GUI_ON_GAME_START = 67,
			E_ACTION_CAR_SELECT_TRANSITION_IN = 68,
			E_ACTION_CAR_SELECT_WAITING_FOR_AUDIO = 69,
			E_ACTION_CAR_SELECT_READY = 70,
			E_ACTION_CAR_SELECT_MODIFICATION_SCREEN = 71,
			E_ACTION_CAR_SELECT_EXIT = 72,
			E_ACTION_CAR_SELECT_ABORT = 73,
			E_ACTION_CAR_SELECT_CHANGE_COLOUR = 74,
			E_ACTION_CAR_SELECT_PAUSED_IN_CAR_SELECT = 75,
			E_ACTION_PLAYER_CAR_COLOUR_RESPONSE = 76,
			E_ACTION_CAR_SELECT_ONLINE_TIME_LEFT = 77,
			E_ACTION_CAR_SELECT_ONLINE_END = 78,
			E_ACTION_CAR_SELECT_ONLINE_SELECT_CAR = 79,
			E_ACTION_CAR_SELECT_ONLINE_CAR_IS_SHOWABLE = 80,
			E_ACTION_PAUSE_SIMULATION = 81,
			E_ACTION_UNPAUSE_SIMULATION = 82,
			E_ACTION_PAUSE_ONLINE = 83,
			E_ACTION_UNPAUSE_ONLINE = 84,
			E_ACTION_PROMPT_START_OFFLINE_GAME_MODE = 85,
			E_ACTION_PROMPT_DO_INVITE = 86,
			E_ACTION_START_PREPARE_FOR_INVITE = 87,
			E_ACTION_UPDATE_PREPARE_FOR_INVITE = 88,
			E_ACTION_PREPARED_FOR_INVITE = 89,
			E_ACTION_PERFORM_INVITE = 90,
			E_ACTION_INVITE_COMPLETE = 91,
			E_ACTION_DRIVE_THRU_BODY_SHOP = 92,
			E_ACTION_DRIVE_THRU_PAINT_SHOP = 93,
			E_ACTION_DRIVE_THRU_JUNK_YARD = 94,
			E_ACTION_DRIVE_THRU_GAS_STATION = 95,
			E_ACTION_DRIVE_THRU_CLOSED = 96,
			E_ACTION_DRIVE_THRU_STOP_PRESENTATION = 97,
			E_ACTION_PLAYER_REACHED_ROAD_RAGE_TARGET = 98,
			E_ACTION_DRIVE_THRU_DISCOVERED = 99,
			E_ACTION_ALL_DRIVE_THRUS_DISCOVERED = 100,
			E_ACTION_DRIVE_THRU_JUNK_YARD_ON_GAME_START = 101,
			E_ACTION_ON_TRAFFIC_CHECKING = 102,
			E_ACTION_ON_TRAFFIC_CHECKING_CHAIN = 103,
			E_ACTION_TRIGGER = 104,
			E_ACTION_KILLZONE = 105,
			E_ACTION_PLAYER_INVULNERABLE = 106,
			E_ACTION_WORLD_REGION_CHANGE = 107,
			E_ACTION_RACE_CAR_REACHED_CHECKPOINT = 108,
			E_ACTION_RACE_CAR_REACHED_FINISH = 109,
			E_ACTION_PLAYER_REACHED_PENULTIMATE_CHECKPOINT = 110,
			E_ACTION_TRAFFIC_TYPE_REQUEST = 111,
			E_ACTION_TRACK_PLAYER_TO_LOCATION = 112,
			E_ACTION_SET_WAYPOINT_DISTANCES_TO_FINISH = 113,
			E_ACTION_PLAYER_RESET_ON_TRACK = 114,
			E_ACTION_SHUTDOWN = 115,
			E_ACTION_SHUTDOWN_FINISHED = 116,
			E_ACTION_AWARD_SEQUENCE_START = 117,
			E_ACTION_AWARD_SEQUENCE_END = 118,
			E_ACTION_CRASH_COMBO = 119,
			E_ACTION_SET_SIXAXIS_STEERING = 120,
			E_ACTION_SWITCH_CAR_COLOUR = 121,
			E_ACTION_WORLD_STUNT_PERFORMED = 122,
			E_ACTION_OVERHEAD_SIGN_HIT = 123,
			E_ACTION_ALLOW_CAR_TO_JOIN_ROAD_RAGE = 124,
			E_ACTION_HIDE_CAR_IN_ROAD_RAGE = 125,
			E_ACTION_UPDATE_ROAD_RAGE_MADNESS = 126,
			E_ACTION_TRIGGER_CRASH_BREAKER = 127,
			E_ACTION_CANCEL_CRASH_BREAKER = 128,
			E_ACTION_ENTER_SHOWTIME_BONUS_REGION = 129,
			E_ACTION_TOGGLE_SHOWTIME_BEHAVIOUR = 130,
			E_ACTION_VEHICLE_LEAPT = 131,
			E_ACTION_VEHICLE_HIT = 132,
			E_ACTION_ENTER_NEW_ROAD = 133,
			E_ACTION_SHOWTIME_UPDATE = 134,
			E_ACTION_SHOWTIME_MODE_SWITCH = 135,
			E_ACTION_JUST_BOUNCED = 136,
			E_ACTION_JUST_APPLIED_EXTRA_SPIN = 137,
			E_ACTION_SHOWTIME_INTRO_START = 138,
			E_ACTION_POWER_PARK_RESULT = 139,
			E_ACTION_GAME_TRAINING = 140,
			E_ACTION_GAME_TRAINING_REQUEST = 141,
			E_ACTION_GAME_TRAINING_PAUSE = 142,
			E_ACTION_GAME_TRAINING_UNPAUSE = 143,
			E_ACTION_MODE_TIME_TIMEOUT = 144,
			E_ACTION_FREEBURN_CHALLENGE = 145,
			E_ACTION_FREEBURN_CHALLENGE_END_NOT_ACTIVE = 146,
			E_ACTION_FREEBURN_CHALLENGE_UPDATE = 147,
			E_ACTION_FREEBURN_CHALLENGE_COMPLETION_STATUS = 148,
			E_ACTION_FREEBURN_CHALLENGE_EVERY_PLAYER_COMPLETION_STATUS = 149,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE = 150,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS = 151,
			E_ACTION_FREEBURN_CHALLENGE_SHOW_SELECTOR = 152,
			E_ACTION_ACTIVE_FREEBURN_CHALLENGE = 153,
			E_ACTION_BLUE_TEAM_IS_ESCAPING = 154,
			E_ACTION_BLUE_TEAM_IS_BEHIND_YOU = 155,
			E_ACTION_LEADER_REACHED_BOUNDARY = 156,
			E_ACTION_PLAYER_ELIMINATED = 157,
			E_ACTION_TRAITOROUS_TAKEDOWN = 158,
			E_ACTION_SWITCH_BURNING_HOME_RUN_RUNNER = 159,
			E_ACTION_BURNOUT_SKILLZ = 160,
			E_ACTION_ROAD_RULES_SKILLZ = 161,
			E_ACTION_SET_BOOST = 162,
			E_ACTION_NEAR_MISS = 163,
			E_ACTION_DRIFTING = 164,
			E_ACTION_SPINNING = 165,
			E_ACTION_IN_AIR = 166,
			E_ACTION_ONCOMING = 167,
			E_ACTION_TAILGATING = 168,
			E_ACTION_DISTANCE_DRIVEN = 169,
			E_ACTION_AFTERTOUCH = 170,
			E_ACTION_EVENT_STATE_RESPONSE = 171,
			E_ACTION_GAME_STATS_RESPONSE = 172,
			E_ACTION_RANK_INFO_RESPONSE = 173,
			E_ACTION_PLAYER_INFO_RESPONSE = 174,
			E_ACTION_UNLOCKED_LIVERY_RESPONSE = 175,
			E_ACTION_CAR_SELECTION_RESPONSE = 176,
			E_ACTION_LANDMARK_VARIABLE_INFO_RESPONSE = 177,
			E_ACTION_REGION_FROM_POSITION_RESPONSE = 178,
			E_ACTION_UPDATE_GUI_ROUTE = 179,
			E_ACTION_ALL_RIVALRY_DATA_RESPONSE = 180,
			E_ACTION_ONE_RIVALRY_DATA_RESPONSE = 181,
			E_ACTION_SHOW_SATNAV = 182,
			E_ACTION_SET_LOADING_STATE = 183,
			E_ACTION_WAIT_FOR_STREAMING = 184,
			E_ACTION_PROGRESSION_PROFILE_DATA = 185,
			E_ACTION_LOAD_PROFILE = 186,
			E_ACTION_REMOVE_ALL_RIVALS = 187,
			E_ACTION_ADD_RIVAL = 188,
			E_ACTION_RIVAL_STATE_CHANGED = 189,
			E_ACTION_UPDATE_CAR_STATS = 190,
			E_ACTION_PROP_SMASH_PROGRESSION = 191,
			E_ACTION_UPDATE_PLAYER_MEDALS = 192,
			E_ACTION_EVENT_AT_JUNCTION_AVAILABLE = 193,
			E_ACTION_ALL_EVENTS_DISCOVERED = 194,
			E_ACTION_ALL_EVENTS_OF_TYPE_DISCOVERED = 195,
			E_ACTION_TROPHY_UNLOCK = 196,
			E_ACTION_ROAD_RAGE_PLAYER_DAMAGE = 197,
			E_ACTION_ALL_EVENT_TYPE_WON = 198,
			E_ACTION_RIVAL_UNLOCKED_INTO_THE_WORLD_ACTION = 199,
			E_ACTION_ONE_HUNDRED_PERCENT_COMPLETE = 200,
			E_ACTION_ACHIEVEMENTS_EARNED = 201,
			E_ACTION_ALL_RIVALS_SHUTDOWN = 202,
			E_ACTION_PAYBACK_LOST = 203,
			E_ACTION_PAYBACK_VICTIM_LEFT_GAME = 204,
			E_ACTION_PAYBACK_MUGSHOT = 205,
			E_ACTION_ABORT_MUGSHOT_CAPTURE = 206,
			E_ACTION_PAYBACK_ACTIVATED = 207,
			E_ACTION_PAYBACK_OVER = 208,
			E_ACTION_PAYBACK_SUCCEEDED = 209,
			E_ACTION_SOUND_TRIGGER = 210,
			E_ACTION_ONLINE_PLAYER_ADDED = 211,
			E_ACTION_ONLINE_PLAYER_REMOVED = 212,
			E_ACTION_OFFLINE_ADD_CAR_TO_MODE = 213,
			E_ACTION_OFFLINE_REMOVE_CAR_FROM_MODE = 214,
			E_ACTION_CAR_ADDITION_PRESENTATION_START = 215,
			E_ACTION_CAR_ADDITION_PRESENTATION_END = 216,
			E_ACTION_LOCAL_PLAYER_DISCONNECTED = 217,
			E_ACTION_LOCAL_PLAYER_LEFT_GAME = 218,
			E_ACTION_UPDATE_RICH_PRESENCE = 219,
			E_ACTION_SEND_TELEMETRY = 220,
			E_ACTION_ONLINE_GAME_RESULT = 221,
			E_ACTION_ONLINE_ROUND_RESULT = 222,
			E_ACTION_ONLINE_LAUNCH_FREE_BURN_LOBBY = 223,
			E_ACTION_ROAD_RULES_CHALLENGE_SCORES = 224,
			E_ACTION_ROAD_RULES_PERSONAL_BEST = 225,
			E_ACTION_ROAD_RULES_OVERWRITE_SERVER_RECORD = 226,
			E_ACTION_START_GAME_THROUGH_PLAYER_JOIN = 227,
			E_ACTION_RESTART_TRAFFIC = 228,
			E_ACTION_NETWORK_COLLECTABLE = 229,
			E_ACTION_NETWORK_CAUGHT_FEVER = 230,
			E_ACTION_REQUEST_GAMERCARD = 231,
			E_ACTION_HUD_MESSAGE_TOOK_LEAD = 232,
			E_ACTION_HUD_MESSAGE_TOOK_LAST = 233,
			E_ACTION_HUD_MESSAGE_DIST_TO_FINISH = 234,
			E_ACTION_HUD_MESSAGE_LEADING = 235,
			E_ACTION_HUD_MESSAGE_NECK_AND_NECK = 236,
			E_ACTION_HUD_MESSAGE_X_FINISHES = 237,
			E_ACTION_HUD_MESSAGE_X_REACHES_CHECKPOINT = 238,
			E_ACTION_HUD_MESSAGE_PLAYER_REACHES_CHECKPOINT = 239,
			E_ACTION_HUD_MESSAGE_X_CRASHES = 240,
			E_ACTION_HUD_MESSAGE_WRONG_WAY = 241,
			E_ACTION_HUD_MESSAGE_STUNT_PERFORMED = 242,
			E_ACTION_HUD_MESSAGE_COMBO_PERFORMED = 243,
			E_ACTION_HUD_MESSAGE_STUNT_TIME_UP = 244,
			E_ACTION_HUD_MESSAGE_BHR_CHECKPOINT = 245,
			E_ACTION_HUD_MESSAGE_BHR_RUNNER_CRASHED = 246,
			E_ACTION_HUD_MESSAGE_ONLINE_TEAM_CHANGE = 247,
			E_ACTION_HUD_MESSAGE_ROAD_RAGE_TIME_EXTENSION = 248,
			E_ACTION_HUD_MESSAGE_RIVAL_FIRST_HIT = 249,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_RIVAL = 250,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_TARGET = 251,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_FLEEING = 252,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_WRECKED = 253,
			E_ACTION_HUD_MESSAGE_PLAYER_CAN_SKIP_CRASH = 254,
			E_ACTION_HUD_MESSAGE_TIME_UP = 255,
			E_ACTION_HUD_MESSAGE_CANT_PAINT = 256,
			E_ACTION_HUD_MESSAGE_MUST_FIX = 257,
			E_ACTION_HUD_MESSAGE_JUMP_FAILED = 258,
			E_ACTION_WRONG_CAR_FOR_CHALLENGE = 259,
			E_ACTION_ROAD_RULES_ENTER_ROAD = 260,
			E_ACTION_ROAD_RULES_LEAVE_ROAD = 261,
			E_ACTION_ROAD_RULES_BATCH_QUERY = 262,
			E_ACTION_UPCOMING_ROAD_CHANGE = 263,
			E_ACTION_ROAD_RULES_START_RULE = 264,
			E_ACTION_ROAD_RULES_END_RULE = 265,
			E_ACTION_ROAD_RULES_UPDATE = 266,
			E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE = 267,
			E_ACTION_ROAD_RULES_NEW_HIGH_SCORE = 268,
			E_ACTION_ROAD_RULES_ACTIVE_RULE_CHANGE = 269,
			E_ACTION_ROAD_RULES_TIME_WARNING = 270,
			E_ACTION_ROAD_RULES_ROAD_SCORE = 271,
			E_ACTION_ROAD_RULES_NEW_RULERS = 272,
			E_ACTION_ROAD_RULES_MODE_SWITCH = 273,
			E_ACTION_PLAYER_IN_SHORTCUT = 274,
			E_ACTION_IMAGE_GALLERY_RENDER_IMAGE = 275,
			E_ACTION_IMAGE_GALLERY_IMAGE_INFO = 276,
			E_ACTION_IMAGE_GALLERY_COUNT_ACTION = 277,
			E_ACTION_IMAGE_GALLERY_DATA_ACTION = 278,
			E_ACTION_IMAGE_GALLERY_LOAD_COMPLETE = 279,
			E_ACTION_SAVE_IMAGE_AND_AUTOSAVE = 280,
			E_ACTION_LOAD_IMAGES = 281,
			E_ACTION_DXT_DECODE_IMAGE = 282,
			E_ACTION_SOUND_BIND_PROPS = 283,
			E_ACTION_COUNT = 284,
		}

		// Declaration
		struct PrepareForModeAction {
			// BrnGameActions.h:856
			enum EPrepareForModeStage {
				E_PFM_STAGE_ALL_IN_ONE = 0,
				E_PFM_STAGE_FIRST_OF_TWO = 1,
				E_PFM_STAGE_SECOND_OF_TWO = 2,
				E_PFM_STAGE_COUNT = 3,
			}

		}

		// BrnGameActions.h:462
		const int32_t KI_EVENT_MANAGER_DEFAULT_ACTION_QUEUE_LENGTH = 13312;

		// BrnGameActions.h:463
		const int32_t KI_EVENT_MANAGER_SMALL_ACTION_QUEUE_LENGTH = 256;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameActions.h:92
		using BrnNetwork::BrnNetworkModuleIO;

		// BrnGameActions.h:95
		enum EGameActionType {
			E_ACTION_RESET_PLAYER_CAR = 0,
			E_ACTION_GUI_UPDATE_PLAYER_CAR_ID = 1,
			E_ACTION_GUI_CAR_UNLOCK = 2,
			E_ACTION_RESET_PLAYER_CAR_ON_TRACK = 3,
			E_ACTION_SET_PLAYER_OPPONENTS = 4,
			E_ACTION_SETUP_NETWORK_CAR = 5,
			E_ACTION_SET_TAKEDOWN_CAMERA_STATE = 6,
			E_ACTION_SET_PLAYER_CAR_DRIVER = 7,
			E_ACTION_FORCE_PLAYER_CAR_DRIVER = 8,
			E_ACTION_RESET_CRASHING = 9,
			E_ACTION_RESET_RACE_CAR_CRASHING = 10,
			E_ACTION_REMOTE_PLAYER_DISCONNECTED = 11,
			E_ACTION_NOTIFY_DIRECTOR_LOCAL_PLAYER_DISCONNECTED = 12,
			E_ACTION_EMPTY_TRAFFIC_POOL = 13,
			E_ACTION_ON_PLAYER_TAKEDOWN = 14,
			E_ACTION_COMPLETED_STUNT = 15,
			E_ACTION_INPROGRESS_STUNT = 16,
			E_ACTION_PLAYER_CRASH_ENDING_SOON = 17,
			E_ACTION_CHECK_FOR_LOADING_SCREEN = 18,
			E_ACTION_PREPARE_FOR_MODE = 19,
			E_ACTION_BROADCAST_MODE_FINISH_LINES = 20,
			E_ACTION_STOP_MODE_OFFLINE = 21,
			E_ACTION_FINISH_MODE_ONLINE = 22,
			E_ACTION_FINISH_MODE_FINAL_ONLINE = 23,
			E_ACTION_SET_TRAFFIC_SCALE_BASED_ON_RANK = 24,
			E_ACTION_START_MODE_INTRO = 25,
			E_ACTION_STOP_MODE_INTRO = 26,
			E_ACTION_MARKED_MAN_LOADED = 27,
			E_ACTION_STOP_MODE_SPLASH = 28,
			E_ACTION_STOP_MODE_COUNTDOWN = 29,
			E_ACTION_START_PLAYING_MODE = 30,
			E_ACTION_FINISHED_MODE = 31,
			E_ACTION_SHOW_MODE_RESULTS = 32,
			E_ACTION_FINISHED_MODE_RESULTS = 33,
			E_ACTION_STOP_MODE = 34,
			E_ACTION_QUIT_MODE_OFFLINE = 35,
			E_ACTION_QUIT_MODE_ONLINE = 36,
			E_ACTION_IMPACT_TIME_START = 37,
			E_ACTION_IMPACT_TIME_END = 38,
			E_ACTION_SET_IN_MODE_START_REGION = 39,
			E_ACTION_SET_UP_ALL_DRIVE_THRUS = 40,
			E_ACTION_CLOSE_DRIVE_THRU = 41,
			E_ACTION_SET_COUNTDOWN = 42,
			E_ACTION_SHOW_HUD_MESSAGE = 43,
			E_ACTION_SHOW_POPUP = 44,
			E_ACTION_REQUEST_ROUTE_INFO = 45,
			E_ACTION_SET_LANDMARK_RACES = 46,
			E_ACTION_DAMAGE_CRITICAL = 47,
			E_ACTION_PLAYER_HIT_RIVAL = 48,
			E_ACTION_RIVAL_HIT_PLAYER = 49,
			E_ACTION_REQUEST_AUTOSAVE = 50,
			E_ACTION_ON_JUMP_START = 51,
			E_ACTION_SHOW_JUMP_NAME = 52,
			E_ACTION_ON_STUNT_ELEMENT_COMPLETE = 53,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_FOR_COUNTY = 54,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_BY_TYPE = 55,
			E_ACTION_STUNT_ELEMENT_BOOST = 56,
			E_ACTION_NEW_CAR_UNLOCKED = 57,
			E_ACTION_CAR_UNLOCK_END = 58,
			E_ACTION_CAR_SELECTION_CHANGED = 59,
			E_ACTION_CAR_SELECTION_CHANGED_DROPIN = 60,
			E_ACTION_CAR_SELECTION_DROPIN_COMPLETE = 61,
			E_ACTION_CAR_SELECTION_CHANGED_ONLINE = 62,
			E_ACTION_SWITCH_CAR_CORONAS_ON_OFF = 63,
			E_ACTION_CAR_SELECTION_REQUEST_STREAMING = 64,
			E_ACTION_ALLOW_BOOST_EARNING = 65,
			E_ACTION_STOP_BOOSTING = 66,
			E_ACTION_CAR_SELECT_START_GUI_ON_GAME_START = 67,
			E_ACTION_CAR_SELECT_TRANSITION_IN = 68,
			E_ACTION_CAR_SELECT_WAITING_FOR_AUDIO = 69,
			E_ACTION_CAR_SELECT_READY = 70,
			E_ACTION_CAR_SELECT_MODIFICATION_SCREEN = 71,
			E_ACTION_CAR_SELECT_EXIT = 72,
			E_ACTION_CAR_SELECT_ABORT = 73,
			E_ACTION_CAR_SELECT_CHANGE_COLOUR = 74,
			E_ACTION_CAR_SELECT_PAUSED_IN_CAR_SELECT = 75,
			E_ACTION_PLAYER_CAR_COLOUR_RESPONSE = 76,
			E_ACTION_CAR_SELECT_ONLINE_TIME_LEFT = 77,
			E_ACTION_CAR_SELECT_ONLINE_END = 78,
			E_ACTION_CAR_SELECT_ONLINE_SELECT_CAR = 79,
			E_ACTION_CAR_SELECT_ONLINE_CAR_IS_SHOWABLE = 80,
			E_ACTION_PAUSE_SIMULATION = 81,
			E_ACTION_UNPAUSE_SIMULATION = 82,
			E_ACTION_PAUSE_ONLINE = 83,
			E_ACTION_UNPAUSE_ONLINE = 84,
			E_ACTION_PROMPT_START_OFFLINE_GAME_MODE = 85,
			E_ACTION_PROMPT_DO_INVITE = 86,
			E_ACTION_START_PREPARE_FOR_INVITE = 87,
			E_ACTION_UPDATE_PREPARE_FOR_INVITE = 88,
			E_ACTION_PREPARED_FOR_INVITE = 89,
			E_ACTION_PERFORM_INVITE = 90,
			E_ACTION_INVITE_COMPLETE = 91,
			E_ACTION_DRIVE_THRU_BODY_SHOP = 92,
			E_ACTION_DRIVE_THRU_PAINT_SHOP = 93,
			E_ACTION_DRIVE_THRU_JUNK_YARD = 94,
			E_ACTION_DRIVE_THRU_GAS_STATION = 95,
			E_ACTION_DRIVE_THRU_CLOSED = 96,
			E_ACTION_DRIVE_THRU_STOP_PRESENTATION = 97,
			E_ACTION_PLAYER_REACHED_ROAD_RAGE_TARGET = 98,
			E_ACTION_DRIVE_THRU_DISCOVERED = 99,
			E_ACTION_ALL_DRIVE_THRUS_DISCOVERED = 100,
			E_ACTION_DRIVE_THRU_JUNK_YARD_ON_GAME_START = 101,
			E_ACTION_ON_TRAFFIC_CHECKING = 102,
			E_ACTION_ON_TRAFFIC_CHECKING_CHAIN = 103,
			E_ACTION_TRIGGER = 104,
			E_ACTION_KILLZONE = 105,
			E_ACTION_PLAYER_INVULNERABLE = 106,
			E_ACTION_WORLD_REGION_CHANGE = 107,
			E_ACTION_RACE_CAR_REACHED_CHECKPOINT = 108,
			E_ACTION_RACE_CAR_REACHED_FINISH = 109,
			E_ACTION_PLAYER_REACHED_PENULTIMATE_CHECKPOINT = 110,
			E_ACTION_TRAFFIC_TYPE_REQUEST = 111,
			E_ACTION_TRACK_PLAYER_TO_LOCATION = 112,
			E_ACTION_SET_WAYPOINT_DISTANCES_TO_FINISH = 113,
			E_ACTION_PLAYER_RESET_ON_TRACK = 114,
			E_ACTION_SHUTDOWN = 115,
			E_ACTION_SHUTDOWN_FINISHED = 116,
			E_ACTION_AWARD_SEQUENCE_START = 117,
			E_ACTION_AWARD_SEQUENCE_END = 118,
			E_ACTION_CRASH_COMBO = 119,
			E_ACTION_SET_SIXAXIS_STEERING = 120,
			E_ACTION_SWITCH_CAR_COLOUR = 121,
			E_ACTION_WORLD_STUNT_PERFORMED = 122,
			E_ACTION_OVERHEAD_SIGN_HIT = 123,
			E_ACTION_ALLOW_CAR_TO_JOIN_ROAD_RAGE = 124,
			E_ACTION_HIDE_CAR_IN_ROAD_RAGE = 125,
			E_ACTION_UPDATE_ROAD_RAGE_MADNESS = 126,
			E_ACTION_TRIGGER_CRASH_BREAKER = 127,
			E_ACTION_CANCEL_CRASH_BREAKER = 128,
			E_ACTION_ENTER_SHOWTIME_BONUS_REGION = 129,
			E_ACTION_TOGGLE_SHOWTIME_BEHAVIOUR = 130,
			E_ACTION_VEHICLE_LEAPT = 131,
			E_ACTION_VEHICLE_HIT = 132,
			E_ACTION_ENTER_NEW_ROAD = 133,
			E_ACTION_SHOWTIME_UPDATE = 134,
			E_ACTION_SHOWTIME_MODE_SWITCH = 135,
			E_ACTION_JUST_BOUNCED = 136,
			E_ACTION_JUST_APPLIED_EXTRA_SPIN = 137,
			E_ACTION_SHOWTIME_INTRO_START = 138,
			E_ACTION_POWER_PARK_RESULT = 139,
			E_ACTION_GAME_TRAINING = 140,
			E_ACTION_GAME_TRAINING_REQUEST = 141,
			E_ACTION_GAME_TRAINING_PAUSE = 142,
			E_ACTION_GAME_TRAINING_UNPAUSE = 143,
			E_ACTION_MODE_TIME_TIMEOUT = 144,
			E_ACTION_FREEBURN_CHALLENGE = 145,
			E_ACTION_FREEBURN_CHALLENGE_END_NOT_ACTIVE = 146,
			E_ACTION_FREEBURN_CHALLENGE_UPDATE = 147,
			E_ACTION_FREEBURN_CHALLENGE_COMPLETION_STATUS = 148,
			E_ACTION_FREEBURN_CHALLENGE_EVERY_PLAYER_COMPLETION_STATUS = 149,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE = 150,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS = 151,
			E_ACTION_FREEBURN_CHALLENGE_SHOW_SELECTOR = 152,
			E_ACTION_ACTIVE_FREEBURN_CHALLENGE = 153,
			E_ACTION_BLUE_TEAM_IS_ESCAPING = 154,
			E_ACTION_BLUE_TEAM_IS_BEHIND_YOU = 155,
			E_ACTION_LEADER_REACHED_BOUNDARY = 156,
			E_ACTION_PLAYER_ELIMINATED = 157,
			E_ACTION_TRAITOROUS_TAKEDOWN = 158,
			E_ACTION_SWITCH_BURNING_HOME_RUN_RUNNER = 159,
			E_ACTION_BURNOUT_SKILLZ = 160,
			E_ACTION_ROAD_RULES_SKILLZ = 161,
			E_ACTION_SET_BOOST = 162,
			E_ACTION_NEAR_MISS = 163,
			E_ACTION_DRIFTING = 164,
			E_ACTION_SPINNING = 165,
			E_ACTION_IN_AIR = 166,
			E_ACTION_ONCOMING = 167,
			E_ACTION_TAILGATING = 168,
			E_ACTION_DISTANCE_DRIVEN = 169,
			E_ACTION_AFTERTOUCH = 170,
			E_ACTION_EVENT_STATE_RESPONSE = 171,
			E_ACTION_GAME_STATS_RESPONSE = 172,
			E_ACTION_RANK_INFO_RESPONSE = 173,
			E_ACTION_PLAYER_INFO_RESPONSE = 174,
			E_ACTION_UNLOCKED_LIVERY_RESPONSE = 175,
			E_ACTION_CAR_SELECTION_RESPONSE = 176,
			E_ACTION_LANDMARK_VARIABLE_INFO_RESPONSE = 177,
			E_ACTION_REGION_FROM_POSITION_RESPONSE = 178,
			E_ACTION_UPDATE_GUI_ROUTE = 179,
			E_ACTION_ALL_RIVALRY_DATA_RESPONSE = 180,
			E_ACTION_ONE_RIVALRY_DATA_RESPONSE = 181,
			E_ACTION_SHOW_SATNAV = 182,
			E_ACTION_SET_LOADING_STATE = 183,
			E_ACTION_WAIT_FOR_STREAMING = 184,
			E_ACTION_PROGRESSION_PROFILE_DATA = 185,
			E_ACTION_LOAD_PROFILE = 186,
			E_ACTION_REMOVE_ALL_RIVALS = 187,
			E_ACTION_ADD_RIVAL = 188,
			E_ACTION_RIVAL_STATE_CHANGED = 189,
			E_ACTION_UPDATE_CAR_STATS = 190,
			E_ACTION_PROP_SMASH_PROGRESSION = 191,
			E_ACTION_UPDATE_PLAYER_MEDALS = 192,
			E_ACTION_EVENT_AT_JUNCTION_AVAILABLE = 193,
			E_ACTION_ALL_EVENTS_DISCOVERED = 194,
			E_ACTION_ALL_EVENTS_OF_TYPE_DISCOVERED = 195,
			E_ACTION_TROPHY_UNLOCK = 196,
			E_ACTION_ROAD_RAGE_PLAYER_DAMAGE = 197,
			E_ACTION_ALL_EVENT_TYPE_WON = 198,
			E_ACTION_RIVAL_UNLOCKED_INTO_THE_WORLD_ACTION = 199,
			E_ACTION_ONE_HUNDRED_PERCENT_COMPLETE = 200,
			E_ACTION_ACHIEVEMENTS_EARNED = 201,
			E_ACTION_ALL_RIVALS_SHUTDOWN = 202,
			E_ACTION_PAYBACK_LOST = 203,
			E_ACTION_PAYBACK_VICTIM_LEFT_GAME = 204,
			E_ACTION_PAYBACK_MUGSHOT = 205,
			E_ACTION_ABORT_MUGSHOT_CAPTURE = 206,
			E_ACTION_PAYBACK_ACTIVATED = 207,
			E_ACTION_PAYBACK_OVER = 208,
			E_ACTION_PAYBACK_SUCCEEDED = 209,
			E_ACTION_SOUND_TRIGGER = 210,
			E_ACTION_ONLINE_PLAYER_ADDED = 211,
			E_ACTION_ONLINE_PLAYER_REMOVED = 212,
			E_ACTION_OFFLINE_ADD_CAR_TO_MODE = 213,
			E_ACTION_OFFLINE_REMOVE_CAR_FROM_MODE = 214,
			E_ACTION_CAR_ADDITION_PRESENTATION_START = 215,
			E_ACTION_CAR_ADDITION_PRESENTATION_END = 216,
			E_ACTION_LOCAL_PLAYER_DISCONNECTED = 217,
			E_ACTION_LOCAL_PLAYER_LEFT_GAME = 218,
			E_ACTION_UPDATE_RICH_PRESENCE = 219,
			E_ACTION_SEND_TELEMETRY = 220,
			E_ACTION_ONLINE_GAME_RESULT = 221,
			E_ACTION_ONLINE_ROUND_RESULT = 222,
			E_ACTION_ONLINE_LAUNCH_FREE_BURN_LOBBY = 223,
			E_ACTION_ROAD_RULES_CHALLENGE_SCORES = 224,
			E_ACTION_ROAD_RULES_PERSONAL_BEST = 225,
			E_ACTION_ROAD_RULES_OVERWRITE_SERVER_RECORD = 226,
			E_ACTION_START_GAME_THROUGH_PLAYER_JOIN = 227,
			E_ACTION_RESTART_TRAFFIC = 228,
			E_ACTION_NETWORK_COLLECTABLE = 229,
			E_ACTION_NETWORK_CAUGHT_FEVER = 230,
			E_ACTION_REQUEST_GAMERCARD = 231,
			E_ACTION_HUD_MESSAGE_TOOK_LEAD = 232,
			E_ACTION_HUD_MESSAGE_TOOK_LAST = 233,
			E_ACTION_HUD_MESSAGE_DIST_TO_FINISH = 234,
			E_ACTION_HUD_MESSAGE_LEADING = 235,
			E_ACTION_HUD_MESSAGE_NECK_AND_NECK = 236,
			E_ACTION_HUD_MESSAGE_X_FINISHES = 237,
			E_ACTION_HUD_MESSAGE_X_REACHES_CHECKPOINT = 238,
			E_ACTION_HUD_MESSAGE_PLAYER_REACHES_CHECKPOINT = 239,
			E_ACTION_HUD_MESSAGE_X_CRASHES = 240,
			E_ACTION_HUD_MESSAGE_WRONG_WAY = 241,
			E_ACTION_HUD_MESSAGE_STUNT_PERFORMED = 242,
			E_ACTION_HUD_MESSAGE_COMBO_PERFORMED = 243,
			E_ACTION_HUD_MESSAGE_STUNT_TIME_UP = 244,
			E_ACTION_HUD_MESSAGE_BHR_CHECKPOINT = 245,
			E_ACTION_HUD_MESSAGE_BHR_RUNNER_CRASHED = 246,
			E_ACTION_HUD_MESSAGE_ONLINE_TEAM_CHANGE = 247,
			E_ACTION_HUD_MESSAGE_ROAD_RAGE_TIME_EXTENSION = 248,
			E_ACTION_HUD_MESSAGE_RIVAL_FIRST_HIT = 249,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_RIVAL = 250,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_TARGET = 251,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_FLEEING = 252,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_WRECKED = 253,
			E_ACTION_HUD_MESSAGE_PLAYER_CAN_SKIP_CRASH = 254,
			E_ACTION_HUD_MESSAGE_TIME_UP = 255,
			E_ACTION_HUD_MESSAGE_CANT_PAINT = 256,
			E_ACTION_HUD_MESSAGE_MUST_FIX = 257,
			E_ACTION_HUD_MESSAGE_JUMP_FAILED = 258,
			E_ACTION_WRONG_CAR_FOR_CHALLENGE = 259,
			E_ACTION_ROAD_RULES_ENTER_ROAD = 260,
			E_ACTION_ROAD_RULES_LEAVE_ROAD = 261,
			E_ACTION_ROAD_RULES_BATCH_QUERY = 262,
			E_ACTION_UPCOMING_ROAD_CHANGE = 263,
			E_ACTION_ROAD_RULES_START_RULE = 264,
			E_ACTION_ROAD_RULES_END_RULE = 265,
			E_ACTION_ROAD_RULES_UPDATE = 266,
			E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE = 267,
			E_ACTION_ROAD_RULES_NEW_HIGH_SCORE = 268,
			E_ACTION_ROAD_RULES_ACTIVE_RULE_CHANGE = 269,
			E_ACTION_ROAD_RULES_TIME_WARNING = 270,
			E_ACTION_ROAD_RULES_ROAD_SCORE = 271,
			E_ACTION_ROAD_RULES_NEW_RULERS = 272,
			E_ACTION_ROAD_RULES_MODE_SWITCH = 273,
			E_ACTION_PLAYER_IN_SHORTCUT = 274,
			E_ACTION_IMAGE_GALLERY_RENDER_IMAGE = 275,
			E_ACTION_IMAGE_GALLERY_IMAGE_INFO = 276,
			E_ACTION_IMAGE_GALLERY_COUNT_ACTION = 277,
			E_ACTION_IMAGE_GALLERY_DATA_ACTION = 278,
			E_ACTION_IMAGE_GALLERY_LOAD_COMPLETE = 279,
			E_ACTION_SAVE_IMAGE_AND_AUTOSAVE = 280,
			E_ACTION_LOAD_IMAGES = 281,
			E_ACTION_DXT_DECODE_IMAGE = 282,
			E_ACTION_SOUND_BIND_PROPS = 283,
			E_ACTION_COUNT = 284,
		}

		// Declaration
		struct ResetPlayerCarAction {
			// BrnGameActions.h:558
			enum CarSelectType {
				E_CAR_SELECT_DONT_DROP = 0,
				E_CAR_SELECT_DROP_NORMAL = 1,
				E_CAR_SELECT_DROP_SHUTDOWN = 2,
			}

		}

		// Declaration
		struct PrepareForModeAction {
			// BrnGameActions.h:856
			enum EPrepareForModeStage {
				E_PFM_STAGE_ALL_IN_ONE = 0,
				E_PFM_STAGE_FIRST_OF_TWO = 1,
				E_PFM_STAGE_SECOND_OF_TWO = 2,
				E_PFM_STAGE_COUNT = 3,
			}

		}

		// Declaration
		struct SoundTriggerAction {
			// BrnGameActions.h:3663
			enum eType {
				E_TYPE_INVALID = 0,
				E_TYPE_AT_ENTITY = 1,
				E_TYPE_AHEAD_OF_ENTITY = 2,
				E_TYPE_COUNT = 3,
			}

		}

		// Declaration
		struct UpcomingRoadChangeAction {
			// BrnGameActions.h:4829
			enum ESignState {
				E_SIGN_STATE_INVALID = -1,
				E_SIGN_STATE_GREEN = 0,
				E_SIGN_STATE_RED = 1,
				E_SIGN_STATE_FLASHING = 2,
				E_SIGN_STATE_COUNT = 3,
			}

		}

		// BrnGameActions.h:462
		const int32_t KI_EVENT_MANAGER_DEFAULT_ACTION_QUEUE_LENGTH = 13312;

		// BrnGameActions.h:463
		const int32_t KI_EVENT_MANAGER_SMALL_ACTION_QUEUE_LENGTH = 256;

	}

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SET_PLAYER_OPPONENTS> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:722
struct BrnGameState::GameStateModuleIO::SetPlayerOpponentsAction : public GameAction<E_ACTION_SET_PLAYER_OPPONENTS> {
	// BrnGameActions.h:726
	Array<CgsID,7u> maOpponents;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SETUP_NETWORK_CAR> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:738
struct BrnGameState::GameStateModuleIO::SetupNetworkCarAction : public GameAction<E_ACTION_SETUP_NETWORK_CAR> {
	// BrnGameActions.h:741
	Vector3 mWorldSpacePosition;

	// BrnGameActions.h:742
	Vector3 mAt;

	// BrnGameActions.h:743
	CgsID mModelId;

	// BrnGameActions.h:744
	CgsID mWheelModelId;

	// BrnGameActions.h:745
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGameActions.h:746
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex mePlayerScoringIndex;

public:
	// BrnGameActions.h:756
	void Construct(BrnGameState::GameStateModuleIO::EPlayerScoringIndex, EActiveRaceCarIndex, Vector3, Vector3, CgsID, CgsID);

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_COMPLETED_STUNT> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:782
struct BrnGameState::GameStateModuleIO::CompletedStuntAction : public GameAction<E_ACTION_COMPLETED_STUNT> {
	// BrnGameActions.h:784
	uint32_t muStuntActionComplete;

	// BrnGameActions.h:786
	float32_t mfCompletedBarrelRollAngle;

	// BrnGameActions.h:787
	float32_t mfCompletedAirSpinAngle;

	// BrnGameActions.h:788
	float32_t mfCompletedHandbreakTurnAngle;

	// BrnGameActions.h:789
	float32_t mfCompletedDriftTime;

	// BrnGameActions.h:790
	float32_t mfCompletedDriftDistance;

	// BrnGameActions.h:791
	bool mbSuccessfulLanding;

	// BrnGameActions.h:793
	int32_t miCompletedBarrelRolls;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_STOP_MODE_INTRO> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1191
struct BrnGameState::GameStateModuleIO::StopModeIntroAction : public GameAction<E_ACTION_STOP_MODE_INTRO> {
	// BrnGameActions.h:1193
	BrnGameState::GameStateModuleIO::EGameModeType meGameMode;

	// BrnGameActions.h:1194
	bool mbMovingBetweenLobbyModes;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_MARKED_MAN_LOADED> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1206
struct BrnGameState::GameStateModuleIO::MarkedManLoadedAction : public GameAction<E_ACTION_MARKED_MAN_LOADED> {
	// BrnGameActions.h:1208
	BrnGameState::GameStateModuleIO::EGameModeType meGameMode;

	// BrnGameActions.h:1209
	bool mbMovingBetweenLobbyModes;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_FINISHED_MODE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1345
struct BrnGameState::GameStateModuleIO::FinishedModeAction : public GameAction<E_ACTION_FINISHED_MODE> {
	// BrnGameActions.h:1348
	Time mFinishTime;

	// BrnGameActions.h:1349
	Time mFastestLapTime;

	// BrnGameActions.h:1351
	BrnGameState::GameStateModuleIO::EGameModeType meFinishedGameModeType;

	// BrnGameActions.h:1352
	EActiveRaceCarIndex meEliminatorIndex;

	// BrnGameActions.h:1353
	EGlobalRaceCarIndex meBeatenRivalIndex;

	// BrnGameActions.h:1355
	int32_t miNumberOfTakedowns;

	// BrnGameActions.h:1356
	float_t mfDistanceFromFinish;

	// BrnGameActions.h:1357
	int32_t miFinishPosition;

	// BrnGameActions.h:1358
	int32_t miEliminations;

	// BrnGameActions.h:1360
	bool mbIsOnlineGameMode;

	// BrnGameActions.h:1361
	bool mbTimedOut;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SET_BOOST> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1490
struct BrnGameState::GameStateModuleIO::SetBoostAction : public GameAction<E_ACTION_SET_BOOST> {
	// BrnGameActions.h:1492
	extern const int32_t KX_SET_INFINITE_BOOST_FLAG = 1;

	// BrnGameActions.h:1493
	extern const int32_t KX_SET_BOOST_AMOUNT = 2;

	// BrnGameActions.h:1494
	extern const int32_t KX_SET_BOOST_SEGMENTS = 4;

	// BrnGameActions.h:1496
	EActiveRaceCarIndex meRaceCarIndex;

	// BrnGameActions.h:1498
	int32_t mxFlags;

	// BrnGameActions.h:1499
	bool mbInfiniteBoost;

	// BrnGameActions.h:1500
	float32_t mfBoostAmount;

	// BrnGameActions.h:1501
	int32_t miBoostSegments;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_UPDATE_CAR_STATS> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1514
struct BrnGameState::GameStateModuleIO::SendCarStatsAction : public GameAction<E_ACTION_UPDATE_CAR_STATS> {
	// BrnGameActions.h:1516
	int32_t miCarSpeed;

	// BrnGameActions.h:1517
	int32_t miCarStrength;

	// BrnGameActions.h:1518
	int32_t miCarControl;

	// BrnGameActions.h:1519
	int32_t miCarBoost;

	// BrnGameActions.h:1521
	float32_t mfDamageLimit;

	// BrnGameActions.h:1523
	BrnResource::ECarType meCarType;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_EVENT_AT_JUNCTION_AVAILABLE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1554
struct BrnGameState::GameStateModuleIO::SendJunctionPlayerIsAtAction : public GameAction<E_ACTION_EVENT_AT_JUNCTION_AVAILABLE> {
	// BrnGameActions.h:1556
	bool mbOnEntry;

	// BrnGameActions.h:1557
	uint32_t muJunctionID;

	// BrnGameActions.h:1558
	int32_t miEventID;

	// BrnGameActions.h:1559
	LightTriggerId mTrafficLightTriggerId;

	// BrnGameActions.h:1562
	CgsID mSpecialEventCarId;

	// BrnGameActions.h:1563
	BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

	// BrnGameActions.h:1564
	int8_t miEventDifficulty;

	// BrnGameActions.h:1565
	int8_t miMedalAchieved;

	// BrnGameActions.h:1566
	bool mbIsPlayerBelowEventStartSpeed;

	// BrnGameActions.h:1567
	bool mbEventUnlocked;

	// BrnGameActions.h:1568
	bool mbSpecificCarEventValid;

	// BrnGameActions.h:1569
	bool mbIsNewlyDiscovered;

	// BrnGameActions.h:1570
	bool mbIsAutoUnlockedChallenge;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SET_PLAYER_CAR_DRIVER> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1645
struct BrnGameState::GameStateModuleIO::SetPlayerCarDriverAction : public GameAction<E_ACTION_SET_PLAYER_CAR_DRIVER> {
	// BrnGameActions.h:1647
	BrnWorld::CarControl meCarControl;

	// BrnGameActions.h:1648
	BoxRegion mDriveThruBoxRegion;

	// BrnGameActions.h:1649
	bool mbIsDriveThru;

	// BrnGameActions.h:1650
	float32_t mfMaxResetSpeed;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ON_TRAFFIC_CHECKING> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2075
struct BrnGameState::GameStateModuleIO::TrafficCheckingAction : public GameAction<E_ACTION_ON_TRAFFIC_CHECKING> {
	// BrnGameActions.h:2077
	uint16_t muVehicleIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_PLAYER_INVULNERABLE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2136
struct BrnGameState::GameStateModuleIO::PlayerInvulnerableAction : public GameAction<E_ACTION_PLAYER_INVULNERABLE> {
	// BrnGameActions.h:2138
	float32_t mfInvulnerableTime;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_TROPHY_UNLOCK> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2438
struct BrnGameState::GameStateModuleIO::TrophyUnlockAction : public GameAction<E_ACTION_TROPHY_UNLOCK> {
	// BrnGameActions.h:2440
	BrnProgression::TrophyUnlockData::UnlockType meUnlockType;

	// BrnGameActions.h:2441
	CgsID mCarToUnlock;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_CAR_SELECTION_REQUEST_STREAMING> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2646
struct BrnGameState::GameStateModuleIO::CarSelectionRequestStreamingAction : public GameAction<E_ACTION_CAR_SELECTION_REQUEST_STREAMING> {
	// BrnGameActions.h:2657
	CgsID[8] maCars;

	// BrnGameActions.h:2658
	int32_t miCount;

	// BrnGameActions.h:2659
	uint8_t[8] mauExtraInfoFlags;

	// BrnGameActions.h:2660
	int8_t[8] maiPriorities;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_CAR_SELECT_WAITING_FOR_AUDIO> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2695
struct BrnGameState::GameStateModuleIO::CarSelectWaitingForAudioAction : public GameAction<E_ACTION_CAR_SELECT_WAITING_FOR_AUDIO> {
	// BrnGameActions.h:2697
	bool mbWaiting;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_CAR_SELECT_CHANGE_COLOUR> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2811
struct BrnGameState::GameStateModuleIO::CarSelectChangeColourAction : public GameAction<E_ACTION_CAR_SELECT_CHANGE_COLOUR> {
	// BrnGameActions.h:2813
	uint32_t muPaletteIndex;

	// BrnGameActions.h:2814
	uint32_t muColourIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ADD_RIVAL> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2983
struct BrnGameState::GameStateModuleIO::AddRivalAction : public GameAction<E_ACTION_ADD_RIVAL> {
	// BrnGameActions.h:2985
	Rival mRival;

	// BrnGameActions.h:2986
	EventRacerPersonality mPersonality;

	// BrnGameActions.h:2987
	RivalData mRivalSavedData;

	// BrnGameActions.h:2988
	int8_t miRivalIndex;

	// BrnGameActions.h:2989
	Vector3 mStartingPosition;

	// BrnGameActions.h:2990
	Vector3 mStartingAt;

	// BrnGameActions.h:2991
	uint16_t muStartingAiSection;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SHOWTIME_MODE_SWITCH> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3420
struct BrnGameState::GameStateModuleIO::ShowtimeModeSwitchAction : public GameAction<E_ACTION_SHOWTIME_MODE_SWITCH> {
	// BrnGameActions.h:3422
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

	// BrnGameActions.h:3423
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGameActions.h:3424
	bool mbEnteringShowtime;

	// BrnGameActions.h:3425
	int32_t miFinalScore;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_WORLD_STUNT_PERFORMED> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3469
struct BrnGameState::GameStateModuleIO::WorldStuntAction : public GameAction<E_ACTION_WORLD_STUNT_PERFORMED> {
	// BrnGameActions.h:3471
	BrnGameState::StuntElementType meStuntElementType;

	// BrnGameActions.h:3472
	CgsID mId;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_POWER_PARK_RESULT> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3495
struct BrnGameState::GameStateModuleIO::PowerParkResultAction : public GameAction<E_ACTION_POWER_PARK_RESULT> {
	// BrnGameActions.h:3497
	BrnWorld::EPowerParkOutcome meOutcome;

	// BrnGameActions.h:3498
	int32_t miOverallRating;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_GAME_TRAINING_REQUEST> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3523
struct BrnGameState::GameStateModuleIO::RequestGameTrainingAction : public GameAction<E_ACTION_GAME_TRAINING_REQUEST> {
	// BrnGameActions.h:3525
	BrnProgression::ETrainingType meTrainingType;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SHUTDOWN> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3565
struct BrnGameState::GameStateModuleIO::ShutdownAction : public GameAction<E_ACTION_SHUTDOWN> {
	// BrnGameActions.h:3568
	CgsID mVictimCarID;

	// BrnGameActions.h:3571
	CgsID mRivalID;

	// BrnGameActions.h:3574
	EActiveRaceCarIndex meVictimIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SHUTDOWN_FINISHED> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3586
struct BrnGameState::GameStateModuleIO::ShutdownFinishedAction : public GameAction<E_ACTION_SHUTDOWN_FINISHED> {
	// BrnGameActions.h:3589
	EActiveRaceCarIndex meActiveRaceCarIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SET_SIXAXIS_STEERING> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3644
struct BrnGameState::GameStateModuleIO::SetSixaxisSteeringAction : public GameAction<E_ACTION_SET_SIXAXIS_STEERING> {
	// BrnGameActions.h:3646
	bool mbState;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_PLAYER_HIT_RIVAL> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3730
struct BrnGameState::GameStateModuleIO::PlayerHitRivalAction : public GameAction<E_ACTION_PLAYER_HIT_RIVAL> {
	// BrnGameActions.h:3733
	BrnPhysics::Vehicle::EImpactType meImpactType;

	// BrnGameActions.h:3734
	EActiveRaceCarIndex meAggressorActiveRaceCarIndex;

	// BrnGameActions.h:3735
	EActiveRaceCarIndex meVictimActiveRaceCarIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_STUNT_ELEMENT_BOOST> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3883
struct BrnGameState::GameStateModuleIO::OnStuntElementBoostAction : public GameAction<E_ACTION_STUNT_ELEMENT_BOOST> {
	// BrnGameActions.h:3886
	BrnGameState::StuntElementType meStuntElementType;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SWITCH_CAR_CORONAS_ON_OFF> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3963
struct BrnGameState::GameStateModuleIO::SwitchCarCoronasOnOffAction : public GameAction<E_ACTION_SWITCH_CAR_CORONAS_ON_OFF> {
	// BrnGameActions.h:3965
	bool mbIsOn;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ALLOW_BOOST_EARNING> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3977
struct BrnGameState::GameStateModuleIO::AllowBoostEarningAction : public GameAction<E_ACTION_ALLOW_BOOST_EARNING> {
	// BrnGameActions.h:3979
	bool mbAllowBoostEarning;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_REMOTE_PLAYER_DISCONNECTED> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4032
struct BrnGameState::GameStateModuleIO::RemotePlayerDisconnectedAction : public GameAction<E_ACTION_REMOTE_PLAYER_DISCONNECTED> {
private:
	// BrnGameActions.h:4049
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGameActions.h:4050
	RoadRulesRecvData::NetworkPlayerID mPlayerID;

public:
	// BrnGameActions.h:4036
	void SetActiveRaceCarIndex(EActiveRaceCarIndex);

	// BrnGameActions.h:4039
	EActiveRaceCarIndex GetActiveRaceCarIndex() const;

	// BrnGameActions.h:4043
	void SetNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID);

	// BrnGameActions.h:4046
	RoadRulesRecvData::NetworkPlayerID GetNetworkPlayerID() const;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ONLINE_PLAYER_ADDED> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4073
struct BrnGameState::GameStateModuleIO::OnlinePlayerAddedAction : public GameAction<E_ACTION_ONLINE_PLAYER_ADDED> {
private:
	// BrnGameActions.h:4126
	CgsID mModelID;

	// BrnGameActions.h:4127
	CgsID mWheelID;

	// BrnGameActions.h:4128
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex mePlayerScoringIndex;

	// BrnGameActions.h:4129
	BrnGameState::GameStateModuleIO::EPlayerTeam meTeam;

	// BrnGameActions.h:4130
	RoadRulesRecvData::NetworkPlayerID mAddedPlayerNetworkID;

	// BrnGameActions.h:4131
	uint16_t mu16CarColourIndex;

	// BrnGameActions.h:4132
	uint16_t mu16CarPaintFinishIndex;

public:
	// BrnGameActions.h:4078
	void SetPlayerScoringIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex);

	// BrnGameActions.h:4081
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex GetPlayerScoringIndex() const;

	// BrnGameActions.h:4085
	void SetModelID(CgsID);

	// BrnGameActions.h:4088
	CgsID GetModelID() const;

	// BrnGameActions.h:4092
	void SetWheelID(CgsID);

	// BrnGameActions.h:4095
	CgsID GetWheelID() const;

	// BrnGameActions.h:4099
	void SetTeam(BrnGameState::GameStateModuleIO::EPlayerTeam);

	// BrnGameActions.h:4102
	BrnGameState::GameStateModuleIO::EPlayerTeam GetTeam() const;

	// BrnGameActions.h:4106
	void SetNetworkID(RoadRulesRecvData::NetworkPlayerID);

	// BrnGameActions.h:4109
	RoadRulesRecvData::NetworkPlayerID GetNetworkID() const;

	// BrnGameActions.h:4113
	void SetCarColourIndex(uint16_t);

	// BrnGameActions.h:4116
	uint16_t GetCarColourIndex() const;

	// BrnGameActions.h:4120
	void SetCarPaintFinishIndex(uint16_t);

	// BrnGameActions.h:4123
	uint16_t GetCarPaintFinishIndex() const;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ONLINE_PLAYER_REMOVED> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4143
struct BrnGameState::GameStateModuleIO::OnlinePlayerRemovedAction : public GameAction<E_ACTION_ONLINE_PLAYER_REMOVED> {
private:
	// BrnGameActions.h:4160
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGameActions.h:4161
	bool mbIsLocalPlayerInGame;

public:
	// BrnGameActions.h:4147
	void SetActiveRaceCarIndex(EActiveRaceCarIndex);

	// BrnGameActions.h:4150
	EActiveRaceCarIndex GetActiveRaceCarIndex() const;

	// BrnGameActions.h:4154
	void SetIsLocalPlayerInGame(bool);

	// BrnGameActions.h:4157
	bool IsLocalPlayerInGame() const;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_OFFLINE_REMOVE_CAR_FROM_MODE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4192
struct BrnGameState::GameStateModuleIO::OfflineRemoveCarFromModeAction : public GameAction<E_ACTION_OFFLINE_REMOVE_CAR_FROM_MODE> {
	// BrnGameActions.h:4196
	EGlobalRaceCarIndex meRemovedCarGlobalIndex;

	// BrnGameActions.h:4197
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex meCarScoringIndex;

	// BrnGameActions.h:4198
	int32_t miOpponentIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ROAD_RULES_ENTER_ROAD> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4787
struct BrnGameState::GameStateModuleIO::RoadRulesEnterRoadAction : public GameAction<E_ACTION_ROAD_RULES_ENTER_ROAD> {
	// BrnGameActions.h:4789
	ChallengeParScoresEntry mParScores;

	// BrnGameActions.h:4790
	ChallengeHighScoreEntry mFriendScores;

	// BrnGameActions.h:4791
	ChallengePlayerScoreEntry mUserScores;

	// BrnGameActions.h:4792
	CgsID[2] mParRivalIds;

	// BrnGameActions.h:4793
	CgsID mRoadId;

	// BrnGameActions.h:4794
	SpanBase::RoadIndex miRoadIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ROAD_RULES_BATCH_QUERY> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4806
struct BrnGameState::GameStateModuleIO::RoadRulesBatchQueryAction : public GameAction<E_ACTION_ROAD_RULES_BATCH_QUERY> {
	// BrnGameActions.h:4808
	CgsID[64] maRoadIds;

	// BrnGameActions.h:4809
	bool[64] mabPlayerBeatenParTime;

	// BrnGameActions.h:4810
	bool[64] mabPlayerBeatenParCrash;

	// BrnGameActions.h:4811
	bool[64] mabPlayerBestOnlineTime;

	// BrnGameActions.h:4812
	bool[64] mabPlayerBestOnlineCrash;

	// BrnGameActions.h:4813
	int32_t miNumRoads;

	// BrnGameActions.h:4814
	bool mbPlayerOwnsAllRoadsOffline;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_UPCOMING_ROAD_CHANGE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4826
struct BrnGameState::GameStateModuleIO::UpcomingRoadChangeAction : public GameAction<E_ACTION_UPCOMING_ROAD_CHANGE> {
	// BrnGameActions.h:4844
	CgsID mLeftRoadId;

	// BrnGameActions.h:4845
	CgsID mRightRoadId;

	// BrnGameActions.h:4847
	bool mbLeftIsInterStateExit;

	// BrnGameActions.h:4848
	bool mbRightIsInterStateExit;

	// BrnGameActions.h:4850
	Vector3 mLeftRoadPosition;

	// BrnGameActions.h:4851
	Vector3 mRightRoadPosition;

	// BrnGameActions.h:4852
	float32_t mfAngleForTurning;

	// BrnGameActions.h:4853
	float32_t mfDistanceToTurning;

	// BrnGameActions.h:4855
	ChallengeParScoresEntry mLeftParScores;

	// BrnGameActions.h:4856
	ChallengeHighScoreEntry mLeftFriendScores;

	// BrnGameActions.h:4857
	ChallengePlayerScoreEntry mLeftUserScores;

	// BrnGameActions.h:4859
	ChallengeParScoresEntry mRightParScores;

	// BrnGameActions.h:4860
	ChallengeHighScoreEntry mRightFriendScores;

	// BrnGameActions.h:4861
	ChallengePlayerScoreEntry mRightUserScores;

	// BrnGameActions.h:4863
	BrnGameState::GameStateModuleIO::UpcomingRoadChangeAction::ESignState meStraightRoadState;

	// BrnGameActions.h:4864
	BrnGameState::GameStateModuleIO::UpcomingRoadChangeAction::ESignState meLeftRoadState;

	// BrnGameActions.h:4865
	BrnGameState::GameStateModuleIO::UpcomingRoadChangeAction::ESignState meRightRoadState;

	// BrnGameActions.h:4867
	SpanBase::RoadIndex miCurrentRoadIndex;

	// BrnGameActions.h:4868
	SpanBase::RoadIndex miLeftRoadIndices;

	// BrnGameActions.h:4869
	SpanBase::RoadIndex miRightRoadIndices;

public:
	// BrnGameActions.h:4842
	void Construct();

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5019
struct BrnGameState::GameStateModuleIO::RoadRulesUpdateTargetScoreAction : public GameAction<E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE> {
	// BrnGameActions.h:5021
	ChallengeHighScoreEntry mFriendScores;

	// BrnGameActions.h:5022
	ChallengePlayerScoreEntry mUserScores;

	// BrnGameActions.h:5023
	CgsID mRoadId;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ONLINE_GAME_RESULT> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5153
struct BrnGameState::GameStateModuleIO::OnlineGameResults : public GameAction<E_ACTION_ONLINE_GAME_RESULT> {
	// BrnGameActions.h:5157
	CgsID mCarUsed;

	// BrnGameActions.h:5159
	Time mSecondsInEvent;

	// BrnGameActions.h:5160
	float32_t mfMetersDriven;

	// BrnGameActions.h:5162
	int32_t miTakedownsFor;

	// BrnGameActions.h:5163
	int32_t miTakedownsAgainst;

	// BrnGameActions.h:5164
	int32_t miTraitorousTakedownsFor;

	// BrnGameActions.h:5165
	int32_t miTraitorousTakedownsAgainst;

	// BrnGameActions.h:5167
	int32_t miMarkedManTakedownsFor;

	// BrnGameActions.h:5168
	int32_t miMarkedManTakedownsAgainst;

	// BrnGameActions.h:5169
	int32_t miMarksFor;

	// BrnGameActions.h:5170
	int32_t miMarksAgainst;

	// BrnGameActions.h:5171
	int32_t miPaybacksUsedFor;

	// BrnGameActions.h:5172
	int32_t miPaybacksUsedAgainst;

	// BrnGameActions.h:5173
	int32_t miPaybacksSuccededFor;

	// BrnGameActions.h:5174
	int32_t miPaybacksSuccededAgainst;

	// BrnGameActions.h:5175
	int32_t miNumberOfCrashes;

	// BrnGameActions.h:5177
	int32_t miNumberOfRounds;

	// BrnGameActions.h:5178
	int32_t miNumberOfRoundsPlayed;

	// BrnGameActions.h:5179
	int32_t miNumberOfPlayers;

	// BrnGameActions.h:5180
	int32_t miEventType;

	// BrnGameActions.h:5181
	bool mbIsRanked;

private:
	// BrnGameActions.h:5213
	int32_t[10] maiPositions;

	// BrnGameActions.h:5214
	RoadRulesRecvData::NetworkPlayerID[10][8] maaConnectedPlayerIDs;

public:
	// BrnGameActions.h:5185
	void Clear();

	// BrnGameActions.h:5189
	int32_t GetWins() const;

	// BrnGameActions.h:5194
	void SetPosition(int32_t, int32_t);

	// BrnGameActions.h:5198
	int32_t GetPosition(int32_t) const;

	// BrnGameActions.h:5204
	void SetConnectedPlayerID(RoadRulesRecvData::NetworkPlayerID, EActiveRaceCarIndex, int32_t);

	// BrnGameActions.h:5209
	RoadRulesRecvData::NetworkPlayerID GetConnectedPlayerID(EActiveRaceCarIndex, int32_t) const;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ONLINE_ROUND_RESULT> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5227
struct BrnGameState::GameStateModuleIO::OnlineRoundResults : public GameAction<E_ACTION_ONLINE_ROUND_RESULT> {
	// BrnGameActions.h:5230
	extern const int32_t KI_POSITION_DISCONNECTED = 4294967295;

private:
	// BrnGameActions.h:5248
	RoadRulesRecvData::NetworkPlayerID[8] maPlayerPosition;

	// BrnGameActions.h:5249
	Array<CgsNetwork::NetworkPlayerID,8u> maDisconnectedPlayers;

public:
	// BrnGameActions.h:5233
	void Construct();

	// BrnGameActions.h:5238
	void SetPosition(RoadRulesRecvData::NetworkPlayerID, int32_t);

	// BrnGameActions.h:5242
	int32_t GetPosition(RoadRulesRecvData::NetworkPlayerID) const;

	// BrnGameActions.h:5245
	RoadRulesRecvData::NetworkPlayerID GetWinner() const;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SWITCH_CAR_COLOUR> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5486
struct BrnGameState::GameStateModuleIO::SwitchCarColourAction : public GameAction<E_ACTION_SWITCH_CAR_COLOUR> {
	// BrnGameActions.h:5488
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGameActions.h:5489
	uint32_t muColourIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_FREEBURN_CHALLENGE_UPDATE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5543
struct BrnGameState::GameStateModuleIO::FreeburnChallengeUpdateAction : public GameAction<E_ACTION_FREEBURN_CHALLENGE_UPDATE> {
	// BrnGameActions.h:5546
	float32_t mfTimeLeftInChallenge;

	// BrnGameActions.h:5547
	int32_t miCurrentActionIndex;

	// BrnGameActions.h:5549
	int32_t miNumTargetsUsed;

	// BrnGameActions.h:5550
	float32_t[2][8] maafIndividualTargetContributions;

	// BrnGameActions.h:5551
	int32_t[2] maiOverallTargetRemaining;

	// BrnGameActions.h:5552
	BrnGameState::GameStateModuleIO::EFreeburnChallengeSuccess[2][8] maaeCompleted;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5590
struct BrnGameState::GameStateModuleIO::FburnChallengeSuccessUpdateAction : public GameAction<E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE> {
	// BrnGameStateSharedIO.h:313
	typedef FastBitArray<60> LastSecondChallengeSuccess;

	// BrnGameActions.h:5592
	FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess mChallengeSuccessUpdate;

	// BrnGameActions.h:5593
	int32_t miActionIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ALLOW_CAR_TO_JOIN_ROAD_RAGE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5670
struct BrnGameState::GameStateModuleIO::AllowCarToJoinRoadRageAction : public GameAction<E_ACTION_ALLOW_CAR_TO_JOIN_ROAD_RAGE> {
	// BrnGameActions.h:5673
	EActiveRaceCarIndex mActiveRaceCarIndex;

	// BrnGameActions.h:5674
	bool mbAllowedInRoadRage;

}

// BrnGameActions.h:492
struct BrnGameState::GameStateModuleIO::BaseGameActionQueue<256> : public VariableEventQueue<256,16> {
}

// BrnGameActions.h:1492
extern const int32_t KX_SET_INFINITE_BOOST_FLAG = 1;

// BrnGameActions.h:1493
extern const int32_t KX_SET_BOOST_AMOUNT = 2;

// BrnGameActions.h:1494
extern const int32_t KX_SET_BOOST_SEGMENTS = 4;

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameActions.h:92
		using BrnNetwork::BrnNetworkModuleIO;

		// BrnGameActions.h:95
		enum EGameActionType {
			E_ACTION_RESET_PLAYER_CAR = 0,
			E_ACTION_GUI_UPDATE_PLAYER_CAR_ID = 1,
			E_ACTION_GUI_CAR_UNLOCK = 2,
			E_ACTION_RESET_PLAYER_CAR_ON_TRACK = 3,
			E_ACTION_SET_PLAYER_OPPONENTS = 4,
			E_ACTION_SETUP_NETWORK_CAR = 5,
			E_ACTION_SET_TAKEDOWN_CAMERA_STATE = 6,
			E_ACTION_SET_PLAYER_CAR_DRIVER = 7,
			E_ACTION_FORCE_PLAYER_CAR_DRIVER = 8,
			E_ACTION_RESET_CRASHING = 9,
			E_ACTION_RESET_RACE_CAR_CRASHING = 10,
			E_ACTION_REMOTE_PLAYER_DISCONNECTED = 11,
			E_ACTION_NOTIFY_DIRECTOR_LOCAL_PLAYER_DISCONNECTED = 12,
			E_ACTION_EMPTY_TRAFFIC_POOL = 13,
			E_ACTION_ON_PLAYER_TAKEDOWN = 14,
			E_ACTION_COMPLETED_STUNT = 15,
			E_ACTION_INPROGRESS_STUNT = 16,
			E_ACTION_PLAYER_CRASH_ENDING_SOON = 17,
			E_ACTION_CHECK_FOR_LOADING_SCREEN = 18,
			E_ACTION_PREPARE_FOR_MODE = 19,
			E_ACTION_BROADCAST_MODE_FINISH_LINES = 20,
			E_ACTION_STOP_MODE_OFFLINE = 21,
			E_ACTION_FINISH_MODE_ONLINE = 22,
			E_ACTION_FINISH_MODE_FINAL_ONLINE = 23,
			E_ACTION_SET_TRAFFIC_SCALE_BASED_ON_RANK = 24,
			E_ACTION_START_MODE_INTRO = 25,
			E_ACTION_STOP_MODE_INTRO = 26,
			E_ACTION_MARKED_MAN_LOADED = 27,
			E_ACTION_STOP_MODE_SPLASH = 28,
			E_ACTION_STOP_MODE_COUNTDOWN = 29,
			E_ACTION_START_PLAYING_MODE = 30,
			E_ACTION_FINISHED_MODE = 31,
			E_ACTION_SHOW_MODE_RESULTS = 32,
			E_ACTION_FINISHED_MODE_RESULTS = 33,
			E_ACTION_STOP_MODE = 34,
			E_ACTION_QUIT_MODE_OFFLINE = 35,
			E_ACTION_QUIT_MODE_ONLINE = 36,
			E_ACTION_IMPACT_TIME_START = 37,
			E_ACTION_IMPACT_TIME_END = 38,
			E_ACTION_SET_IN_MODE_START_REGION = 39,
			E_ACTION_SET_UP_ALL_DRIVE_THRUS = 40,
			E_ACTION_CLOSE_DRIVE_THRU = 41,
			E_ACTION_SET_COUNTDOWN = 42,
			E_ACTION_SHOW_HUD_MESSAGE = 43,
			E_ACTION_SHOW_POPUP = 44,
			E_ACTION_REQUEST_ROUTE_INFO = 45,
			E_ACTION_SET_LANDMARK_RACES = 46,
			E_ACTION_DAMAGE_CRITICAL = 47,
			E_ACTION_PLAYER_HIT_RIVAL = 48,
			E_ACTION_RIVAL_HIT_PLAYER = 49,
			E_ACTION_REQUEST_AUTOSAVE = 50,
			E_ACTION_ON_JUMP_START = 51,
			E_ACTION_SHOW_JUMP_NAME = 52,
			E_ACTION_ON_STUNT_ELEMENT_COMPLETE = 53,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_FOR_COUNTY = 54,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_BY_TYPE = 55,
			E_ACTION_STUNT_ELEMENT_BOOST = 56,
			E_ACTION_NEW_CAR_UNLOCKED = 57,
			E_ACTION_CAR_UNLOCK_END = 58,
			E_ACTION_CAR_SELECTION_CHANGED = 59,
			E_ACTION_CAR_SELECTION_CHANGED_DROPIN = 60,
			E_ACTION_CAR_SELECTION_DROPIN_COMPLETE = 61,
			E_ACTION_CAR_SELECTION_CHANGED_ONLINE = 62,
			E_ACTION_SWITCH_CAR_CORONAS_ON_OFF = 63,
			E_ACTION_CAR_SELECTION_REQUEST_STREAMING = 64,
			E_ACTION_ALLOW_BOOST_EARNING = 65,
			E_ACTION_STOP_BOOSTING = 66,
			E_ACTION_CAR_SELECT_START_GUI_ON_GAME_START = 67,
			E_ACTION_CAR_SELECT_TRANSITION_IN = 68,
			E_ACTION_CAR_SELECT_WAITING_FOR_AUDIO = 69,
			E_ACTION_CAR_SELECT_READY = 70,
			E_ACTION_CAR_SELECT_MODIFICATION_SCREEN = 71,
			E_ACTION_CAR_SELECT_EXIT = 72,
			E_ACTION_CAR_SELECT_ABORT = 73,
			E_ACTION_CAR_SELECT_CHANGE_COLOUR = 74,
			E_ACTION_CAR_SELECT_PAUSED_IN_CAR_SELECT = 75,
			E_ACTION_PLAYER_CAR_COLOUR_RESPONSE = 76,
			E_ACTION_CAR_SELECT_ONLINE_TIME_LEFT = 77,
			E_ACTION_CAR_SELECT_ONLINE_END = 78,
			E_ACTION_CAR_SELECT_ONLINE_SELECT_CAR = 79,
			E_ACTION_CAR_SELECT_ONLINE_CAR_IS_SHOWABLE = 80,
			E_ACTION_PAUSE_SIMULATION = 81,
			E_ACTION_UNPAUSE_SIMULATION = 82,
			E_ACTION_PAUSE_ONLINE = 83,
			E_ACTION_UNPAUSE_ONLINE = 84,
			E_ACTION_PROMPT_START_OFFLINE_GAME_MODE = 85,
			E_ACTION_PROMPT_DO_INVITE = 86,
			E_ACTION_START_PREPARE_FOR_INVITE = 87,
			E_ACTION_UPDATE_PREPARE_FOR_INVITE = 88,
			E_ACTION_PREPARED_FOR_INVITE = 89,
			E_ACTION_PERFORM_INVITE = 90,
			E_ACTION_INVITE_COMPLETE = 91,
			E_ACTION_DRIVE_THRU_BODY_SHOP = 92,
			E_ACTION_DRIVE_THRU_PAINT_SHOP = 93,
			E_ACTION_DRIVE_THRU_JUNK_YARD = 94,
			E_ACTION_DRIVE_THRU_GAS_STATION = 95,
			E_ACTION_DRIVE_THRU_CLOSED = 96,
			E_ACTION_DRIVE_THRU_STOP_PRESENTATION = 97,
			E_ACTION_PLAYER_REACHED_ROAD_RAGE_TARGET = 98,
			E_ACTION_DRIVE_THRU_DISCOVERED = 99,
			E_ACTION_ALL_DRIVE_THRUS_DISCOVERED = 100,
			E_ACTION_DRIVE_THRU_JUNK_YARD_ON_GAME_START = 101,
			E_ACTION_ON_TRAFFIC_CHECKING = 102,
			E_ACTION_ON_TRAFFIC_CHECKING_CHAIN = 103,
			E_ACTION_TRIGGER = 104,
			E_ACTION_KILLZONE = 105,
			E_ACTION_PLAYER_INVULNERABLE = 106,
			E_ACTION_WORLD_REGION_CHANGE = 107,
			E_ACTION_RACE_CAR_REACHED_CHECKPOINT = 108,
			E_ACTION_RACE_CAR_REACHED_FINISH = 109,
			E_ACTION_PLAYER_REACHED_PENULTIMATE_CHECKPOINT = 110,
			E_ACTION_TRAFFIC_TYPE_REQUEST = 111,
			E_ACTION_TRACK_PLAYER_TO_LOCATION = 112,
			E_ACTION_SET_WAYPOINT_DISTANCES_TO_FINISH = 113,
			E_ACTION_PLAYER_RESET_ON_TRACK = 114,
			E_ACTION_SHUTDOWN = 115,
			E_ACTION_SHUTDOWN_FINISHED = 116,
			E_ACTION_AWARD_SEQUENCE_START = 117,
			E_ACTION_AWARD_SEQUENCE_END = 118,
			E_ACTION_CRASH_COMBO = 119,
			E_ACTION_SET_SIXAXIS_STEERING = 120,
			E_ACTION_SWITCH_CAR_COLOUR = 121,
			E_ACTION_WORLD_STUNT_PERFORMED = 122,
			E_ACTION_OVERHEAD_SIGN_HIT = 123,
			E_ACTION_ALLOW_CAR_TO_JOIN_ROAD_RAGE = 124,
			E_ACTION_HIDE_CAR_IN_ROAD_RAGE = 125,
			E_ACTION_UPDATE_ROAD_RAGE_MADNESS = 126,
			E_ACTION_TRIGGER_CRASH_BREAKER = 127,
			E_ACTION_CANCEL_CRASH_BREAKER = 128,
			E_ACTION_ENTER_SHOWTIME_BONUS_REGION = 129,
			E_ACTION_TOGGLE_SHOWTIME_BEHAVIOUR = 130,
			E_ACTION_VEHICLE_LEAPT = 131,
			E_ACTION_VEHICLE_HIT = 132,
			E_ACTION_ENTER_NEW_ROAD = 133,
			E_ACTION_SHOWTIME_UPDATE = 134,
			E_ACTION_SHOWTIME_MODE_SWITCH = 135,
			E_ACTION_JUST_BOUNCED = 136,
			E_ACTION_JUST_APPLIED_EXTRA_SPIN = 137,
			E_ACTION_SHOWTIME_INTRO_START = 138,
			E_ACTION_POWER_PARK_RESULT = 139,
			E_ACTION_GAME_TRAINING = 140,
			E_ACTION_GAME_TRAINING_REQUEST = 141,
			E_ACTION_GAME_TRAINING_PAUSE = 142,
			E_ACTION_GAME_TRAINING_UNPAUSE = 143,
			E_ACTION_MODE_TIME_TIMEOUT = 144,
			E_ACTION_FREEBURN_CHALLENGE = 145,
			E_ACTION_FREEBURN_CHALLENGE_END_NOT_ACTIVE = 146,
			E_ACTION_FREEBURN_CHALLENGE_UPDATE = 147,
			E_ACTION_FREEBURN_CHALLENGE_COMPLETION_STATUS = 148,
			E_ACTION_FREEBURN_CHALLENGE_EVERY_PLAYER_COMPLETION_STATUS = 149,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE = 150,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS = 151,
			E_ACTION_FREEBURN_CHALLENGE_SHOW_SELECTOR = 152,
			E_ACTION_ACTIVE_FREEBURN_CHALLENGE = 153,
			E_ACTION_BLUE_TEAM_IS_ESCAPING = 154,
			E_ACTION_BLUE_TEAM_IS_BEHIND_YOU = 155,
			E_ACTION_LEADER_REACHED_BOUNDARY = 156,
			E_ACTION_PLAYER_ELIMINATED = 157,
			E_ACTION_TRAITOROUS_TAKEDOWN = 158,
			E_ACTION_SWITCH_BURNING_HOME_RUN_RUNNER = 159,
			E_ACTION_BURNOUT_SKILLZ = 160,
			E_ACTION_ROAD_RULES_SKILLZ = 161,
			E_ACTION_SET_BOOST = 162,
			E_ACTION_NEAR_MISS = 163,
			E_ACTION_DRIFTING = 164,
			E_ACTION_SPINNING = 165,
			E_ACTION_IN_AIR = 166,
			E_ACTION_ONCOMING = 167,
			E_ACTION_TAILGATING = 168,
			E_ACTION_DISTANCE_DRIVEN = 169,
			E_ACTION_AFTERTOUCH = 170,
			E_ACTION_EVENT_STATE_RESPONSE = 171,
			E_ACTION_GAME_STATS_RESPONSE = 172,
			E_ACTION_RANK_INFO_RESPONSE = 173,
			E_ACTION_PLAYER_INFO_RESPONSE = 174,
			E_ACTION_UNLOCKED_LIVERY_RESPONSE = 175,
			E_ACTION_CAR_SELECTION_RESPONSE = 176,
			E_ACTION_LANDMARK_VARIABLE_INFO_RESPONSE = 177,
			E_ACTION_REGION_FROM_POSITION_RESPONSE = 178,
			E_ACTION_UPDATE_GUI_ROUTE = 179,
			E_ACTION_ALL_RIVALRY_DATA_RESPONSE = 180,
			E_ACTION_ONE_RIVALRY_DATA_RESPONSE = 181,
			E_ACTION_SHOW_SATNAV = 182,
			E_ACTION_SET_LOADING_STATE = 183,
			E_ACTION_WAIT_FOR_STREAMING = 184,
			E_ACTION_PROGRESSION_PROFILE_DATA = 185,
			E_ACTION_LOAD_PROFILE = 186,
			E_ACTION_REMOVE_ALL_RIVALS = 187,
			E_ACTION_ADD_RIVAL = 188,
			E_ACTION_RIVAL_STATE_CHANGED = 189,
			E_ACTION_UPDATE_CAR_STATS = 190,
			E_ACTION_PROP_SMASH_PROGRESSION = 191,
			E_ACTION_UPDATE_PLAYER_MEDALS = 192,
			E_ACTION_EVENT_AT_JUNCTION_AVAILABLE = 193,
			E_ACTION_ALL_EVENTS_DISCOVERED = 194,
			E_ACTION_ALL_EVENTS_OF_TYPE_DISCOVERED = 195,
			E_ACTION_TROPHY_UNLOCK = 196,
			E_ACTION_ROAD_RAGE_PLAYER_DAMAGE = 197,
			E_ACTION_ALL_EVENT_TYPE_WON = 198,
			E_ACTION_RIVAL_UNLOCKED_INTO_THE_WORLD_ACTION = 199,
			E_ACTION_ONE_HUNDRED_PERCENT_COMPLETE = 200,
			E_ACTION_ACHIEVEMENTS_EARNED = 201,
			E_ACTION_ALL_RIVALS_SHUTDOWN = 202,
			E_ACTION_PAYBACK_LOST = 203,
			E_ACTION_PAYBACK_VICTIM_LEFT_GAME = 204,
			E_ACTION_PAYBACK_MUGSHOT = 205,
			E_ACTION_ABORT_MUGSHOT_CAPTURE = 206,
			E_ACTION_PAYBACK_ACTIVATED = 207,
			E_ACTION_PAYBACK_OVER = 208,
			E_ACTION_PAYBACK_SUCCEEDED = 209,
			E_ACTION_SOUND_TRIGGER = 210,
			E_ACTION_ONLINE_PLAYER_ADDED = 211,
			E_ACTION_ONLINE_PLAYER_REMOVED = 212,
			E_ACTION_OFFLINE_ADD_CAR_TO_MODE = 213,
			E_ACTION_OFFLINE_REMOVE_CAR_FROM_MODE = 214,
			E_ACTION_CAR_ADDITION_PRESENTATION_START = 215,
			E_ACTION_CAR_ADDITION_PRESENTATION_END = 216,
			E_ACTION_LOCAL_PLAYER_DISCONNECTED = 217,
			E_ACTION_LOCAL_PLAYER_LEFT_GAME = 218,
			E_ACTION_UPDATE_RICH_PRESENCE = 219,
			E_ACTION_SEND_TELEMETRY = 220,
			E_ACTION_ONLINE_GAME_RESULT = 221,
			E_ACTION_ONLINE_ROUND_RESULT = 222,
			E_ACTION_ONLINE_LAUNCH_FREE_BURN_LOBBY = 223,
			E_ACTION_ROAD_RULES_CHALLENGE_SCORES = 224,
			E_ACTION_ROAD_RULES_PERSONAL_BEST = 225,
			E_ACTION_ROAD_RULES_OVERWRITE_SERVER_RECORD = 226,
			E_ACTION_START_GAME_THROUGH_PLAYER_JOIN = 227,
			E_ACTION_RESTART_TRAFFIC = 228,
			E_ACTION_NETWORK_COLLECTABLE = 229,
			E_ACTION_NETWORK_CAUGHT_FEVER = 230,
			E_ACTION_REQUEST_GAMERCARD = 231,
			E_ACTION_HUD_MESSAGE_TOOK_LEAD = 232,
			E_ACTION_HUD_MESSAGE_TOOK_LAST = 233,
			E_ACTION_HUD_MESSAGE_DIST_TO_FINISH = 234,
			E_ACTION_HUD_MESSAGE_LEADING = 235,
			E_ACTION_HUD_MESSAGE_NECK_AND_NECK = 236,
			E_ACTION_HUD_MESSAGE_X_FINISHES = 237,
			E_ACTION_HUD_MESSAGE_X_REACHES_CHECKPOINT = 238,
			E_ACTION_HUD_MESSAGE_PLAYER_REACHES_CHECKPOINT = 239,
			E_ACTION_HUD_MESSAGE_X_CRASHES = 240,
			E_ACTION_HUD_MESSAGE_WRONG_WAY = 241,
			E_ACTION_HUD_MESSAGE_STUNT_PERFORMED = 242,
			E_ACTION_HUD_MESSAGE_COMBO_PERFORMED = 243,
			E_ACTION_HUD_MESSAGE_STUNT_TIME_UP = 244,
			E_ACTION_HUD_MESSAGE_BHR_CHECKPOINT = 245,
			E_ACTION_HUD_MESSAGE_BHR_RUNNER_CRASHED = 246,
			E_ACTION_HUD_MESSAGE_ONLINE_TEAM_CHANGE = 247,
			E_ACTION_HUD_MESSAGE_ROAD_RAGE_TIME_EXTENSION = 248,
			E_ACTION_HUD_MESSAGE_RIVAL_FIRST_HIT = 249,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_RIVAL = 250,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_TARGET = 251,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_FLEEING = 252,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_WRECKED = 253,
			E_ACTION_HUD_MESSAGE_PLAYER_CAN_SKIP_CRASH = 254,
			E_ACTION_HUD_MESSAGE_TIME_UP = 255,
			E_ACTION_HUD_MESSAGE_CANT_PAINT = 256,
			E_ACTION_HUD_MESSAGE_MUST_FIX = 257,
			E_ACTION_HUD_MESSAGE_JUMP_FAILED = 258,
			E_ACTION_WRONG_CAR_FOR_CHALLENGE = 259,
			E_ACTION_ROAD_RULES_ENTER_ROAD = 260,
			E_ACTION_ROAD_RULES_LEAVE_ROAD = 261,
			E_ACTION_ROAD_RULES_BATCH_QUERY = 262,
			E_ACTION_UPCOMING_ROAD_CHANGE = 263,
			E_ACTION_ROAD_RULES_START_RULE = 264,
			E_ACTION_ROAD_RULES_END_RULE = 265,
			E_ACTION_ROAD_RULES_UPDATE = 266,
			E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE = 267,
			E_ACTION_ROAD_RULES_NEW_HIGH_SCORE = 268,
			E_ACTION_ROAD_RULES_ACTIVE_RULE_CHANGE = 269,
			E_ACTION_ROAD_RULES_TIME_WARNING = 270,
			E_ACTION_ROAD_RULES_ROAD_SCORE = 271,
			E_ACTION_ROAD_RULES_NEW_RULERS = 272,
			E_ACTION_ROAD_RULES_MODE_SWITCH = 273,
			E_ACTION_PLAYER_IN_SHORTCUT = 274,
			E_ACTION_IMAGE_GALLERY_RENDER_IMAGE = 275,
			E_ACTION_IMAGE_GALLERY_IMAGE_INFO = 276,
			E_ACTION_IMAGE_GALLERY_COUNT_ACTION = 277,
			E_ACTION_IMAGE_GALLERY_DATA_ACTION = 278,
			E_ACTION_IMAGE_GALLERY_LOAD_COMPLETE = 279,
			E_ACTION_SAVE_IMAGE_AND_AUTOSAVE = 280,
			E_ACTION_LOAD_IMAGES = 281,
			E_ACTION_DXT_DECODE_IMAGE = 282,
			E_ACTION_SOUND_BIND_PROPS = 283,
			E_ACTION_COUNT = 284,
		}

		// Declaration
		struct PrepareForModeAction {
			// BrnGameActions.h:856
			enum EPrepareForModeStage {
				E_PFM_STAGE_ALL_IN_ONE = 0,
				E_PFM_STAGE_FIRST_OF_TWO = 1,
				E_PFM_STAGE_SECOND_OF_TWO = 2,
				E_PFM_STAGE_COUNT = 3,
			}

		}

		// Declaration
		struct SoundTriggerAction {
			// BrnGameActions.h:3663
			enum eType {
				E_TYPE_INVALID = 0,
				E_TYPE_AT_ENTITY = 1,
				E_TYPE_AHEAD_OF_ENTITY = 2,
				E_TYPE_COUNT = 3,
			}

		}

		// Declaration
		struct UpcomingRoadChangeAction {
			// BrnGameActions.h:4829
			enum ESignState {
				E_SIGN_STATE_INVALID = -1,
				E_SIGN_STATE_GREEN = 0,
				E_SIGN_STATE_RED = 1,
				E_SIGN_STATE_FLASHING = 2,
				E_SIGN_STATE_COUNT = 3,
			}

		}

		// Declaration
		struct BurnoutRoadRulesSkillzAction {
			// BrnGameActions.h:5463
			enum EBurnoutSkillzUpdateType {
				E_BURNOUT_SKILLZ_UPDATE_TYPE_X_BEAT_YOUR = 0,
				E_BURNOUT_SKILLZ_UPDATE_TYPE_X_GOT = 1,
				E_BURNOUT_SKILLZ_UPDATE_TYPE_YOU_GOT = 2,
				E_BURNOUT_SKILLZ_UPDATE_TYPE_COUNT = 3,
			}

		}

		// BrnGameActions.h:462
		const int32_t KI_EVENT_MANAGER_DEFAULT_ACTION_QUEUE_LENGTH = 13312;

		// BrnGameActions.h:463
		const int32_t KI_EVENT_MANAGER_SMALL_ACTION_QUEUE_LENGTH = 256;

	}

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_QUIT_MODE_OFFLINE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1243
struct BrnGameState::GameStateModuleIO::QuitModeOfflineAction : public GameAction<E_ACTION_QUIT_MODE_OFFLINE> {
	// BrnGameActions.h:1245
	bool mbStartingFreeburnLobbyDueToPlayerJoin;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_QUIT_MODE_ONLINE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1257
struct BrnGameState::GameStateModuleIO::QuitModeOnlineAction : public GameAction<E_ACTION_QUIT_MODE_ONLINE> {
	// BrnGameActions.h:1259
	bool mbShowHUD;

	// BrnGameActions.h:1260
	bool mbInAJunkyard;

	// BrnGameActions.h:1261
	BrnGameState::GameStateModuleIO::EGameModeType meGameMode;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_FINISH_MODE_ONLINE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1273
struct BrnGameState::GameStateModuleIO::FinishModeOnlineAction : public GameAction<E_ACTION_FINISH_MODE_ONLINE> {
	// BrnGameActions.h:1275
	BrnGameState::GameStateModuleIO::EGameModeType meGameMode;

	// BrnGameActions.h:1276
	BrnGameState::GameStateModuleIO::EGameModeType meNewGameMode;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_FINISH_MODE_FINAL_ONLINE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1302
struct BrnGameState::GameStateModuleIO::FinishModeFinalOnlineAction : public GameAction<E_ACTION_FINISH_MODE_FINAL_ONLINE> {
	// BrnGameActions.h:1305
	BrnGameState::GameStateModuleIO::EGameModeType meGameMode;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_STOP_MODE_COUNTDOWN> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1317
struct BrnGameState::GameStateModuleIO::StopModeCountdownAction : public GameAction<E_ACTION_STOP_MODE_COUNTDOWN> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_START_PLAYING_MODE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1330
struct BrnGameState::GameStateModuleIO::StartPlayingModeAction : public GameAction<E_ACTION_START_PLAYING_MODE> {
	// BrnGameActions.h:1332
	BrnGameState::GameStateModuleIO::EGameModeType meGameMode;

	// BrnGameActions.h:1333
	CgsID mDestinationLandmarkID;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_IMPACT_TIME_END> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1679
struct BrnGameState::GameStateModuleIO::ImpactTimeEndAction : public GameAction<E_ACTION_IMPACT_TIME_END> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SET_IN_MODE_START_REGION> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1692
struct BrnGameState::GameStateModuleIO::SetInModeStartRegionAction : public GameAction<E_ACTION_SET_IN_MODE_START_REGION> {
	// BrnGameActions.h:1695
	LandmarkIndex mCurrentLandmarkIndex;

	// BrnGameActions.h:1696
	bool mbInModeStartRegion;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SET_COUNTDOWN> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1788
struct BrnGameState::GameStateModuleIO::SetCountdownAction : public GameAction<E_ACTION_SET_COUNTDOWN> {
	// BrnGameActions.h:1791
	int32_t miCountdownDisplay;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_PLAYER_REACHED_ROAD_RAGE_TARGET> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2163
struct BrnGameState::GameStateModuleIO::PlayerReachedRoadRageTarget : public GameAction<E_ACTION_PLAYER_REACHED_ROAD_RAGE_TARGET> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_RACE_CAR_REACHED_FINISH> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2293
struct BrnGameState::GameStateModuleIO::RaceCarReachedFinishAction : public GameAction<E_ACTION_RACE_CAR_REACHED_FINISH> {
	// BrnGameActions.h:2295
	EGlobalRaceCarIndex meGlobalRaceCarIndex;

	// BrnGameActions.h:2296
	int32_t miFinishPosition;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_PLAYER_REACHED_PENULTIMATE_CHECKPOINT> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2308
struct BrnGameState::GameStateModuleIO::PlayerReachedPenultimateCheckpointAction : public GameAction<E_ACTION_PLAYER_REACHED_PENULTIMATE_CHECKPOINT> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_TRAITOROUS_TAKEDOWN> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3242
struct BrnGameState::GameStateModuleIO::TraitorousTakedownAction : public GameAction<E_ACTION_TRAITOROUS_TAKEDOWN> {
	// BrnGameActions.h:3244
	EActiveRaceCarIndex meAggrActiveRaceCarIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_PLAYER_ELIMINATED> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3256
struct BrnGameState::GameStateModuleIO::PlayerEliminatedAction : public GameAction<E_ACTION_PLAYER_ELIMINATED> {
	// BrnGameActions.h:3258
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGameActions.h:3259
	bool mbLastBlueTeamMember;

	// BrnGameActions.h:3260
	bool mbLocalPlayerEliminated;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SET_WAYPOINT_DISTANCES_TO_FINISH> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3288
struct BrnGameState::GameStateModuleIO::SetWayPointDistancesToFinishAction : public GameAction<E_ACTION_SET_WAYPOINT_DISTANCES_TO_FINISH> {
	// BrnGameActions.h:3291
	Array<float32_t,16u> maDistances;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_UPDATE_ROAD_RAGE_MADNESS> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3550
struct BrnGameState::GameStateModuleIO::UpdateRoadRageMadnessAction : public GameAction<E_ACTION_UPDATE_ROAD_RAGE_MADNESS> {
	// BrnGameActions.h:3552
	EActiveRaceCarIndex mActiveRaceCarID;

	// BrnGameActions.h:3553
	float32_t mRoadRageMadnesss;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ROAD_RULES_CHALLENGE_SCORES> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4246
struct BrnGameState::GameStateModuleIO::RoadRulesChallengeScoresAction : public GameAction<E_ACTION_ROAD_RULES_CHALLENGE_SCORES> {
private:
	// BrnGameActions.h:4272
	uint64_t mu64RoadRulesID;

	// BrnGameActions.h:4273
	uint32_t muTimeStampOfLastRoadRulesDownload;

	// BrnGameActions.h:4276
	StreetManager * mpStreetManager;

public:
	// BrnGameActions.h:4254
	void Construct(uint64_t, uint32_t, StreetManager *);

	// BrnGameActions.h:4260
	StreetManager * GetStreetManager() const;

	// BrnGameActions.h:4264
	uint32_t GetTimeStampOfLastRoadRulesDownload() const;

	// BrnGameActions.h:4268
	uint64_t GetRoadRulesID() const;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ROAD_RULES_PERSONAL_BEST> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4288
struct BrnGameState::GameStateModuleIO::RoadRulesPersonalBestAction : public GameAction<E_ACTION_ROAD_RULES_PERSONAL_BEST> {
	// BrnGameActions.h:4290
	ChallengePlayerScoreEntry mPersonalBestScore;

	// BrnGameActions.h:4291
	Road::ChallengeIndex mChallengeIndex;

	// BrnGameActions.h:4292
	bool mbLobbyPersonalBest;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_HUD_MESSAGE_ROAD_RAGE_TIME_EXTENSION> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4614
struct BrnGameState::GameStateModuleIO::HUDMessageRoadRageTimeExtensionAction : public GameAction<E_ACTION_HUD_MESSAGE_ROAD_RAGE_TIME_EXTENSION> {
	// BrnGameActions.h:4616
	uint32_t muExtensionTime;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_HUD_MESSAGE_TIME_UP> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4716
struct BrnGameState::GameStateModuleIO::HUDMessageTimeUpAction : public GameAction<E_ACTION_HUD_MESSAGE_TIME_UP> {
	// BrnGameActions.h:4718
	bool mbIsPositive;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ROAD_RULES_LEAVE_ROAD> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4938
struct BrnGameState::GameStateModuleIO::RoadRulesLeaveRoadAction : public GameAction<E_ACTION_ROAD_RULES_LEAVE_ROAD> {
	// BrnGameActions.h:4940
	CgsID mRoadId;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ROAD_RULES_START_RULE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4953
struct BrnGameState::GameStateModuleIO::RoadRulesStartRuleAction : public GameAction<E_ACTION_ROAD_RULES_START_RULE> {
	// BrnGameActions.h:4955
	CgsID mRoadId;

	// BrnGameActions.h:4956
	BrnStreetData::ScoreType meScoreType;

	// BrnGameActions.h:4957
	bool mbIdUsingDefaultOnlineScore;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ROAD_RULES_END_RULE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4970
struct BrnGameState::GameStateModuleIO::RoadRulesEndRuleAction : public GameAction<E_ACTION_ROAD_RULES_END_RULE> {
	// BrnGameActions.h:4972
	CgsID mRoadId;

	// BrnGameActions.h:4973
	BrnStreetData::ScoreType meScoreType;

	// BrnGameActions.h:4974
	float32_t mfScore;

	// BrnGameActions.h:4975
	bool mbValidAttempt;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ROAD_RULES_UPDATE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4987
struct BrnGameState::GameStateModuleIO::RoadRulesUpdateAction : public GameAction<E_ACTION_ROAD_RULES_UPDATE> {
private:
	// BrnGameActions.h:5006
	float32_t[2] mafScores;

	// BrnGameActions.h:5007
	bool[2] mabScoreIsActive;

public:
	// BrnGameActions.h:4990
	void Construct();

	// BrnGameActions.h:4995
	void SetScore(BrnStreetData::ScoreType, float32_t);

	// BrnGameActions.h:4999
	bool IsScoreActive(BrnStreetData::ScoreType) const;

	// BrnGameActions.h:5003
	float32_t GetScore(BrnStreetData::ScoreType) const;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ROAD_RULES_NEW_HIGH_SCORE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5035
struct BrnGameState::GameStateModuleIO::RoadRulesNewHighScoreAction : public GameAction<E_ACTION_ROAD_RULES_NEW_HIGH_SCORE> {
	// BrnGameActions.h:5037
	PlayerName mPlayerName;

	// BrnGameActions.h:5038
	CgsID mRoadId;

	// BrnGameActions.h:5039
	BrnStreetData::ScoreType meScoreType;

	// BrnGameActions.h:5040
	int32_t miNumScoresLost;

	// BrnGameActions.h:5041
	int32_t miNumRoadsNowRuled;

	// BrnGameActions.h:5042
	bool mbIsLocalPlayer;

	// BrnGameActions.h:5043
	bool mbIsWholeRoadOwned;

	// BrnGameActions.h:5044
	bool mbWasRulePlayersBefore;

	// BrnGameActions.h:5045
	bool mbMultipleScores;

	// BrnGameActions.h:5046
	bool mbOnlineLossButOfflineWin;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ROAD_RULES_ACTIVE_RULE_CHANGE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5058
struct BrnGameState::GameStateModuleIO::RoadRulesActiveRuleChangeAction : public GameAction<E_ACTION_ROAD_RULES_ACTIVE_RULE_CHANGE> {
	// BrnGameActions.h:5061
	BrnGameState::EActiveRoadRule meActiveRoadRule;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ROAD_RULES_TIME_WARNING> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5074
struct BrnGameState::GameStateModuleIO::RoadRulesTimeWarningAction : public GameAction<E_ACTION_ROAD_RULES_TIME_WARNING> {
	// BrnGameActions.h:5076
	float32_t mfTimeRemaining;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ROAD_RULES_ROAD_SCORE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5088
struct BrnGameState::GameStateModuleIO::RoadRulesRoadScoreAction : public GameAction<E_ACTION_ROAD_RULES_ROAD_SCORE> {
	// BrnGameActions.h:5090
	CgsID mRoadID;

	// BrnGameActions.h:5091
	Road::ChallengeIndex mChallengeIndex;

	// BrnGameActions.h:5092
	PlayerName mPlayerName;

	// BrnGameActions.h:5093
	BrnGameState::EActiveRoadRule meActiveRoadRule;

	// BrnGameActions.h:5094
	int32_t miOfflineScore;

	// BrnGameActions.h:5095
	int32_t miOnlineScore;

	// BrnGameActions.h:5096
	bool mbLocalPlayerRulesRoad;

	// BrnGameActions.h:5097
	bool mbAIRulesRoadOffline;

	// BrnGameActions.h:5098
	bool mbAIRulesRoadOnline;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ROAD_RULES_NEW_RULERS> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5110
struct BrnGameState::GameStateModuleIO::RoadRulesNewRulersAction : public GameAction<E_ACTION_ROAD_RULES_NEW_RULERS> {
	// BrnGameActions.h:5112
	BitArray<64u> mRoadRulesChangedBitArray;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ROAD_RULES_MODE_SWITCH> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5125
struct BrnGameState::GameStateModuleIO::RoadRulesModeSwitchAction : public GameAction<E_ACTION_ROAD_RULES_MODE_SWITCH> {
	// BrnGameActions.h:5127
	bool mbIsOnline;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_PLAYER_IN_SHORTCUT> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5139
struct BrnGameState::GameStateModuleIO::PlayerInShortcutAction : public GameAction<E_ACTION_PLAYER_IN_SHORTCUT> {
	// BrnGameActions.h:5141
	bool mbIsEnteringShortcut;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SWITCH_BURNING_HOME_RUN_RUNNER> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5417
struct BrnGameState::GameStateModuleIO::SwitchBurningHomeRunRunnerAction : public GameAction<E_ACTION_SWITCH_BURNING_HOME_RUN_RUNNER> {
	// BrnGameActions.h:5419
	RoadRulesRecvData::NetworkPlayerID mNewRunnerPlayerID;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_BURNOUT_SKILLZ> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5430
struct BrnGameState::GameStateModuleIO::BurnoutSkillzAction : public GameAction<E_ACTION_BURNOUT_SKILLZ> {
	// BrnGameActions.h:5433
	extern const int32_t KI_ACTION_TYPE_SEND_TO_SINGLE_PLAYER = 1;

	// BrnGameActions.h:5434
	extern const int32_t KI_ACTION_TYPE_SEND_TO_ALL_PLAYERS = 2;

	// BrnGameActions.h:5435
	extern const int32_t KI_ACTION_TYPE_UPDATED_VALUE = 4;

	// BrnGameActions.h:5436
	extern const int32_t KI_ACTION_TYPE_SHOW_HUD_MESSAGE = 8;

	// BrnGameActions.h:5438
	BurnoutSkillzData mBurnoutSkillzData;

	// BrnGameActions.h:5439
	int32_t miActionFlags;

	// BrnGameActions.h:5448
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

	// BrnGameActions.h:5449
	EActiveRaceCarIndex meActiveRaceCarIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ROAD_RULES_SKILLZ> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5460
struct BrnGameState::GameStateModuleIO::BurnoutRoadRulesSkillzAction : public GameAction<E_ACTION_ROAD_RULES_SKILLZ> {
	// BrnGameActions.h:5472
	CgsID mRoadID;

	// BrnGameActions.h:5473
	BrnGameState::GameStateModuleIO::BurnoutRoadRulesSkillzAction::EBurnoutSkillzUpdateType meUpdateType;

	// BrnGameActions.h:5474
	BrnGameState::BurnoutSkillzData::EBurnoutSkillType meSkill;

	// BrnGameActions.h:5475
	EActiveRaceCarIndex meNewOwner;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_MODE_TIME_TIMEOUT> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5501
struct BrnGameState::GameStateModuleIO::ModeTimeOutTimerEvent : public GameAction<E_ACTION_MODE_TIME_TIMEOUT> {
	// BrnGameActions.h:5503
	Time mTimeRemaining;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_FREEBURN_CHALLENGE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5514
struct BrnGameState::GameStateModuleIO::FreeburnChallengeAction : public GameAction<E_ACTION_FREEBURN_CHALLENGE> {
	// BrnGameActions.h:5516
	CgsID mChallengeID;

	// BrnGameActions.h:5517
	BrnNetwork::BrnNetworkModuleIO::EChallengeEventType meEventType;

	// BrnGameActions.h:5518
	BrnGameState::EChallengeStatus meChallengeStatus;

	// BrnGameActions.h:5519
	int32_t miActionIndex;

	// BrnGameActions.h:5520
	int32_t miNumChallengesComplete;

	// BrnGameActions.h:5521
	int32_t miTotalNumChallenges;

	// BrnGameActions.h:5522
	bool mbIsHost;

	// BrnGameActions.h:5523
	bool mbAbortingToStartNewChallenge;

public:
	// BrnGameActions.h:5527
	void Construct();

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_FREEBURN_CHALLENGE_END_NOT_ACTIVE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5531
struct BrnGameState::GameStateModuleIO::FburnChallengeEndNotActiveAction : public GameAction<E_ACTION_FREEBURN_CHALLENGE_END_NOT_ACTIVE> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_FREEBURN_CHALLENGE_COMPLETION_STATUS> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5563
struct BrnGameState::GameStateModuleIO::FburnChallengeStatusAction : public GameAction<E_ACTION_FREEBURN_CHALLENGE_COMPLETION_STATUS> {
	// BrnGameActions.h:5565
	CompletedFburnChallengesData::CompletedFburnChallenges mCompletedChallenges;

	// BrnGameActions.h:5566
	RoadRulesRecvData::NetworkPlayerID mPlayerID;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_FREEBURN_CHALLENGE_EVERY_PLAYER_COMPLETION_STATUS> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5577
struct BrnGameState::GameStateModuleIO::FburnChallengeEveryPlayerStatusAction : public GameAction<E_ACTION_FREEBURN_CHALLENGE_EVERY_PLAYER_COMPLETION_STATUS> {
	// BrnGameActions.h:5579
	FburnChallengeEveryPlayerStatusData mStatus;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_FREEBURN_CHALLENGE_SUCCESS> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5604
struct BrnGameState::GameStateModuleIO::FburnChallengeSuccessAction : public GameAction<E_ACTION_FREEBURN_CHALLENGE_SUCCESS> {
	// BrnGameActions.h:5606
	float32_t[2] mafActionScores;

	// BrnGameActions.h:5607
	bool[2] mabSuccessfulActions;

	// BrnGameActions.h:5608
	bool[2] mabAccumulationThisFrame;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_FREEBURN_CHALLENGE_SHOW_SELECTOR> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5619
struct BrnGameState::GameStateModuleIO::FburnChallengeShowSelectorAction : public GameAction<E_ACTION_FREEBURN_CHALLENGE_SHOW_SELECTOR> {
	// BrnGameActions.h:5621
	CgsID mChallengeID;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ACTIVE_FREEBURN_CHALLENGE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5632
struct BrnGameState::GameStateModuleIO::ActiveFburnChallengeAction : public GameAction<E_ACTION_ACTIVE_FREEBURN_CHALLENGE> {
	// BrnGameActions.h:5634
	EActiveRaceCarIndex[7] maePlayersInChallengeARCI;

	// BrnGameActions.h:5635
	CgsID mChallengeID;

	// BrnGameActions.h:5636
	RoadRulesRecvData::NetworkPlayerID mPlayerToSendToID;

	// BrnGameActions.h:5637
	int32_t miNumPlayersInChallenge;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_REQUEST_AUTOSAVE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5649
struct BrnGameState::GameStateModuleIO::RequestAutoSaveAction : public GameAction<E_ACTION_REQUEST_AUTOSAVE> {
	// BrnGameActions.h:5657
	bool mbForceAutosave;

public:
	// BrnGameActions.h:5652
	void RequestAutoSaveAction();

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_CHECK_FOR_LOADING_SCREEN> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_STOP_MODE_OFFLINE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ROAD_RULES_OVERWRITE_SERVER_RECORD> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesChallengeScoresAction>(const const RoadRulesChallengeScoresAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesUpdateAction>(const const RoadRulesUpdateAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesLeaveRoadAction>(const const RoadRulesLeaveRoadAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesModeSwitchAction>(const const RoadRulesModeSwitchAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesActiveRuleChangeAction>(const const RoadRulesActiveRuleChangeAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::FburnChallengeEveryPlayerStatusAction>(const const FburnChallengeEveryPlayerStatusAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::FburnChallengeEndNotActiveAction>(const const FburnChallengeEndNotActiveAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::AllowCarToJoinRoadRageAction>(const const AllowCarToJoinRoadRageAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::ShutdownAction>(const const ShutdownAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::MarkedManLoadedAction>(const const MarkedManLoadedAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::StopModeIntroAction>(const const StopModeIntroAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::StartPlayingModeAction>(const const StartPlayingModeAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::SetCountdownAction>(const const SetCountdownAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RaceCarReachedCheckpointAction>(const const RaceCarReachedCheckpointAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::PlayerReachedPenultimateCheckpointAction>(const const PlayerReachedPenultimateCheckpointAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::SetWayPointDistancesToFinishAction>(const const SetWayPointDistancesToFinishAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::UpdateRoadRageMadnessAction>(const const UpdateRoadRageMadnessAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::PlayerReachedRoadRageTarget>(const const PlayerReachedRoadRageTarget &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageRoadRageTimeExtensionAction>(const const HUDMessageRoadRageTimeExtensionAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::SetBoostAction>(const const SetBoostAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::FreeburnChallengeAction>(const const FreeburnChallengeAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RequestGameTrainingAction>(const const RequestGameTrainingAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RoadRagePlayerDamageAction>(const const RoadRagePlayerDamageAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::OverwriteServerRoadRulesRecordAction>(const const OverwriteServerRoadRulesRecordAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGameActions.h:4303
	typedef GameAction<E_ACTION_ROAD_RULES_OVERWRITE_SERVER_RECORD> OverwriteServerRoadRulesRecordAction;

}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RequestAutoSaveAction>(const const RequestAutoSaveAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::FburnChallengeShowSelectorAction>(const const FburnChallengeShowSelectorAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::FburnChallengeStatusAction>(const const FburnChallengeStatusAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::ActiveFburnChallengeAction>(const const ActiveFburnChallengeAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::OnlineGameResults>(const const OnlineGameResults &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::ShowtimeModeSwitchAction>(const const ShowtimeModeSwitchAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::StopModeAction>(const const StopModeAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::OnlineRoundResults>(const const OnlineRoundResults &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::QuitModeOnlineAction>(const const QuitModeOnlineAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::FinishModeFinalOnlineAction>(const const FinishModeFinalOnlineAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::FinishModeOnlineAction>(const const FinishModeOnlineAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::QuitModeOfflineAction>(const const QuitModeOfflineAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::StopModeOfflineAction>(const const StopModeOfflineAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGameActions.h:1232
	typedef GameAction<E_ACTION_STOP_MODE_OFFLINE> StopModeOfflineAction;

}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::SetPlayerCarDriverAction>(const const SetPlayerCarDriverAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::ImpactTimeEndAction>(const const ImpactTimeEndAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::SetInModeStartRegionAction>(const const SetInModeStartRegionAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RemotePlayerDisconnectedAction>(const const RemotePlayerDisconnectedAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::StartModeIntroAction>(const const StartModeIntroAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RaceCarReachedFinishAction>(const const RaceCarReachedFinishAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::ShowModeResultsAction>(const const ShowModeResultsAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::FinishedModeAction>(const const FinishedModeAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::TraitorousTakedownAction>(const const TraitorousTakedownAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::PlayerEliminatedAction>(const const PlayerEliminatedAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::SwitchBurningHomeRunRunnerAction>(const const SwitchBurningHomeRunRunnerAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::FburnChallengeSuccessUpdateAction>(const const FburnChallengeSuccessUpdateAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::FreeburnChallengeUpdateAction>(const const FreeburnChallengeUpdateAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::FburnChallengeSuccessAction>(const const FburnChallengeSuccessAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesUpdateTargetScoreAction>(const const RoadRulesUpdateTargetScoreAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesRoadScoreAction>(const const RoadRulesRoadScoreAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesNewHighScoreAction>(const const RoadRulesNewHighScoreAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesNewRulersAction>(const const RoadRulesNewRulersAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::UpcomingRoadChangeAction>(const const UpcomingRoadChangeAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::PlayerInShortcutAction>(const const PlayerInShortcutAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesStartRuleAction>(const const RoadRulesStartRuleAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesEnterRoadAction>(const const RoadRulesEnterRoadAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesPersonalBestAction>(const const RoadRulesPersonalBestAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::BurnoutRoadRulesSkillzAction>(const const BurnoutRoadRulesSkillzAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::BurnoutSkillzAction>(const const BurnoutSkillzAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::PrepareForModeAction>(const const PrepareForModeAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::BroadcastModeFinishLinesAction>(const const BroadcastModeFinishLinesAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::CheckForLoadingScreenAction>(const const CheckForLoadingScreenAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGameActions.h:840
	typedef GameAction<E_ACTION_CHECK_FOR_LOADING_SCREEN> CheckForLoadingScreenAction;

}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::StopModeCountdownAction>(const const StopModeCountdownAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageTimeUpAction>(const const HUDMessageTimeUpAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::ModeTimeOutTimerEvent>(const const ModeTimeOutTimerEvent &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesEndRuleAction>(const const RoadRulesEndRuleAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesTimeWarningAction>(const const RoadRulesTimeWarningAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:5433
extern const int32_t KI_ACTION_TYPE_SEND_TO_SINGLE_PLAYER = 1;

// BrnGameActions.h:5434
extern const int32_t KI_ACTION_TYPE_SEND_TO_ALL_PLAYERS = 2;

// BrnGameActions.h:5435
extern const int32_t KI_ACTION_TYPE_UPDATED_VALUE = 4;

// BrnGameActions.h:5436
extern const int32_t KI_ACTION_TYPE_SHOW_HUD_MESSAGE = 8;

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameActions.h:92
		using BrnNetwork::BrnNetworkModuleIO;

		// BrnGameActions.h:95
		enum EGameActionType {
			E_ACTION_RESET_PLAYER_CAR = 0,
			E_ACTION_GUI_UPDATE_PLAYER_CAR_ID = 1,
			E_ACTION_GUI_CAR_UNLOCK = 2,
			E_ACTION_RESET_PLAYER_CAR_ON_TRACK = 3,
			E_ACTION_SET_PLAYER_OPPONENTS = 4,
			E_ACTION_SETUP_NETWORK_CAR = 5,
			E_ACTION_SET_TAKEDOWN_CAMERA_STATE = 6,
			E_ACTION_SET_PLAYER_CAR_DRIVER = 7,
			E_ACTION_FORCE_PLAYER_CAR_DRIVER = 8,
			E_ACTION_RESET_CRASHING = 9,
			E_ACTION_RESET_RACE_CAR_CRASHING = 10,
			E_ACTION_REMOTE_PLAYER_DISCONNECTED = 11,
			E_ACTION_NOTIFY_DIRECTOR_LOCAL_PLAYER_DISCONNECTED = 12,
			E_ACTION_EMPTY_TRAFFIC_POOL = 13,
			E_ACTION_ON_PLAYER_TAKEDOWN = 14,
			E_ACTION_COMPLETED_STUNT = 15,
			E_ACTION_INPROGRESS_STUNT = 16,
			E_ACTION_PLAYER_CRASH_ENDING_SOON = 17,
			E_ACTION_CHECK_FOR_LOADING_SCREEN = 18,
			E_ACTION_PREPARE_FOR_MODE = 19,
			E_ACTION_BROADCAST_MODE_FINISH_LINES = 20,
			E_ACTION_STOP_MODE_OFFLINE = 21,
			E_ACTION_FINISH_MODE_ONLINE = 22,
			E_ACTION_FINISH_MODE_FINAL_ONLINE = 23,
			E_ACTION_SET_TRAFFIC_SCALE_BASED_ON_RANK = 24,
			E_ACTION_START_MODE_INTRO = 25,
			E_ACTION_STOP_MODE_INTRO = 26,
			E_ACTION_MARKED_MAN_LOADED = 27,
			E_ACTION_STOP_MODE_SPLASH = 28,
			E_ACTION_STOP_MODE_COUNTDOWN = 29,
			E_ACTION_START_PLAYING_MODE = 30,
			E_ACTION_FINISHED_MODE = 31,
			E_ACTION_SHOW_MODE_RESULTS = 32,
			E_ACTION_FINISHED_MODE_RESULTS = 33,
			E_ACTION_STOP_MODE = 34,
			E_ACTION_QUIT_MODE_OFFLINE = 35,
			E_ACTION_QUIT_MODE_ONLINE = 36,
			E_ACTION_IMPACT_TIME_START = 37,
			E_ACTION_IMPACT_TIME_END = 38,
			E_ACTION_SET_IN_MODE_START_REGION = 39,
			E_ACTION_SET_UP_ALL_DRIVE_THRUS = 40,
			E_ACTION_CLOSE_DRIVE_THRU = 41,
			E_ACTION_SET_COUNTDOWN = 42,
			E_ACTION_SHOW_HUD_MESSAGE = 43,
			E_ACTION_SHOW_POPUP = 44,
			E_ACTION_REQUEST_ROUTE_INFO = 45,
			E_ACTION_SET_LANDMARK_RACES = 46,
			E_ACTION_DAMAGE_CRITICAL = 47,
			E_ACTION_PLAYER_HIT_RIVAL = 48,
			E_ACTION_RIVAL_HIT_PLAYER = 49,
			E_ACTION_REQUEST_AUTOSAVE = 50,
			E_ACTION_ON_JUMP_START = 51,
			E_ACTION_SHOW_JUMP_NAME = 52,
			E_ACTION_ON_STUNT_ELEMENT_COMPLETE = 53,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_FOR_COUNTY = 54,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_BY_TYPE = 55,
			E_ACTION_STUNT_ELEMENT_BOOST = 56,
			E_ACTION_NEW_CAR_UNLOCKED = 57,
			E_ACTION_CAR_UNLOCK_END = 58,
			E_ACTION_CAR_SELECTION_CHANGED = 59,
			E_ACTION_CAR_SELECTION_CHANGED_DROPIN = 60,
			E_ACTION_CAR_SELECTION_DROPIN_COMPLETE = 61,
			E_ACTION_CAR_SELECTION_CHANGED_ONLINE = 62,
			E_ACTION_SWITCH_CAR_CORONAS_ON_OFF = 63,
			E_ACTION_CAR_SELECTION_REQUEST_STREAMING = 64,
			E_ACTION_ALLOW_BOOST_EARNING = 65,
			E_ACTION_STOP_BOOSTING = 66,
			E_ACTION_CAR_SELECT_START_GUI_ON_GAME_START = 67,
			E_ACTION_CAR_SELECT_TRANSITION_IN = 68,
			E_ACTION_CAR_SELECT_WAITING_FOR_AUDIO = 69,
			E_ACTION_CAR_SELECT_READY = 70,
			E_ACTION_CAR_SELECT_MODIFICATION_SCREEN = 71,
			E_ACTION_CAR_SELECT_EXIT = 72,
			E_ACTION_CAR_SELECT_ABORT = 73,
			E_ACTION_CAR_SELECT_CHANGE_COLOUR = 74,
			E_ACTION_CAR_SELECT_PAUSED_IN_CAR_SELECT = 75,
			E_ACTION_PLAYER_CAR_COLOUR_RESPONSE = 76,
			E_ACTION_CAR_SELECT_ONLINE_TIME_LEFT = 77,
			E_ACTION_CAR_SELECT_ONLINE_END = 78,
			E_ACTION_CAR_SELECT_ONLINE_SELECT_CAR = 79,
			E_ACTION_CAR_SELECT_ONLINE_CAR_IS_SHOWABLE = 80,
			E_ACTION_PAUSE_SIMULATION = 81,
			E_ACTION_UNPAUSE_SIMULATION = 82,
			E_ACTION_PAUSE_ONLINE = 83,
			E_ACTION_UNPAUSE_ONLINE = 84,
			E_ACTION_PROMPT_START_OFFLINE_GAME_MODE = 85,
			E_ACTION_PROMPT_DO_INVITE = 86,
			E_ACTION_START_PREPARE_FOR_INVITE = 87,
			E_ACTION_UPDATE_PREPARE_FOR_INVITE = 88,
			E_ACTION_PREPARED_FOR_INVITE = 89,
			E_ACTION_PERFORM_INVITE = 90,
			E_ACTION_INVITE_COMPLETE = 91,
			E_ACTION_DRIVE_THRU_BODY_SHOP = 92,
			E_ACTION_DRIVE_THRU_PAINT_SHOP = 93,
			E_ACTION_DRIVE_THRU_JUNK_YARD = 94,
			E_ACTION_DRIVE_THRU_GAS_STATION = 95,
			E_ACTION_DRIVE_THRU_CLOSED = 96,
			E_ACTION_DRIVE_THRU_STOP_PRESENTATION = 97,
			E_ACTION_PLAYER_REACHED_ROAD_RAGE_TARGET = 98,
			E_ACTION_DRIVE_THRU_DISCOVERED = 99,
			E_ACTION_ALL_DRIVE_THRUS_DISCOVERED = 100,
			E_ACTION_DRIVE_THRU_JUNK_YARD_ON_GAME_START = 101,
			E_ACTION_ON_TRAFFIC_CHECKING = 102,
			E_ACTION_ON_TRAFFIC_CHECKING_CHAIN = 103,
			E_ACTION_TRIGGER = 104,
			E_ACTION_KILLZONE = 105,
			E_ACTION_PLAYER_INVULNERABLE = 106,
			E_ACTION_WORLD_REGION_CHANGE = 107,
			E_ACTION_RACE_CAR_REACHED_CHECKPOINT = 108,
			E_ACTION_RACE_CAR_REACHED_FINISH = 109,
			E_ACTION_PLAYER_REACHED_PENULTIMATE_CHECKPOINT = 110,
			E_ACTION_TRAFFIC_TYPE_REQUEST = 111,
			E_ACTION_TRACK_PLAYER_TO_LOCATION = 112,
			E_ACTION_SET_WAYPOINT_DISTANCES_TO_FINISH = 113,
			E_ACTION_PLAYER_RESET_ON_TRACK = 114,
			E_ACTION_SHUTDOWN = 115,
			E_ACTION_SHUTDOWN_FINISHED = 116,
			E_ACTION_AWARD_SEQUENCE_START = 117,
			E_ACTION_AWARD_SEQUENCE_END = 118,
			E_ACTION_CRASH_COMBO = 119,
			E_ACTION_SET_SIXAXIS_STEERING = 120,
			E_ACTION_SWITCH_CAR_COLOUR = 121,
			E_ACTION_WORLD_STUNT_PERFORMED = 122,
			E_ACTION_OVERHEAD_SIGN_HIT = 123,
			E_ACTION_ALLOW_CAR_TO_JOIN_ROAD_RAGE = 124,
			E_ACTION_HIDE_CAR_IN_ROAD_RAGE = 125,
			E_ACTION_UPDATE_ROAD_RAGE_MADNESS = 126,
			E_ACTION_TRIGGER_CRASH_BREAKER = 127,
			E_ACTION_CANCEL_CRASH_BREAKER = 128,
			E_ACTION_ENTER_SHOWTIME_BONUS_REGION = 129,
			E_ACTION_TOGGLE_SHOWTIME_BEHAVIOUR = 130,
			E_ACTION_VEHICLE_LEAPT = 131,
			E_ACTION_VEHICLE_HIT = 132,
			E_ACTION_ENTER_NEW_ROAD = 133,
			E_ACTION_SHOWTIME_UPDATE = 134,
			E_ACTION_SHOWTIME_MODE_SWITCH = 135,
			E_ACTION_JUST_BOUNCED = 136,
			E_ACTION_JUST_APPLIED_EXTRA_SPIN = 137,
			E_ACTION_SHOWTIME_INTRO_START = 138,
			E_ACTION_POWER_PARK_RESULT = 139,
			E_ACTION_GAME_TRAINING = 140,
			E_ACTION_GAME_TRAINING_REQUEST = 141,
			E_ACTION_GAME_TRAINING_PAUSE = 142,
			E_ACTION_GAME_TRAINING_UNPAUSE = 143,
			E_ACTION_MODE_TIME_TIMEOUT = 144,
			E_ACTION_FREEBURN_CHALLENGE = 145,
			E_ACTION_FREEBURN_CHALLENGE_END_NOT_ACTIVE = 146,
			E_ACTION_FREEBURN_CHALLENGE_UPDATE = 147,
			E_ACTION_FREEBURN_CHALLENGE_COMPLETION_STATUS = 148,
			E_ACTION_FREEBURN_CHALLENGE_EVERY_PLAYER_COMPLETION_STATUS = 149,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE = 150,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS = 151,
			E_ACTION_FREEBURN_CHALLENGE_SHOW_SELECTOR = 152,
			E_ACTION_ACTIVE_FREEBURN_CHALLENGE = 153,
			E_ACTION_BLUE_TEAM_IS_ESCAPING = 154,
			E_ACTION_BLUE_TEAM_IS_BEHIND_YOU = 155,
			E_ACTION_LEADER_REACHED_BOUNDARY = 156,
			E_ACTION_PLAYER_ELIMINATED = 157,
			E_ACTION_TRAITOROUS_TAKEDOWN = 158,
			E_ACTION_SWITCH_BURNING_HOME_RUN_RUNNER = 159,
			E_ACTION_BURNOUT_SKILLZ = 160,
			E_ACTION_ROAD_RULES_SKILLZ = 161,
			E_ACTION_SET_BOOST = 162,
			E_ACTION_NEAR_MISS = 163,
			E_ACTION_DRIFTING = 164,
			E_ACTION_SPINNING = 165,
			E_ACTION_IN_AIR = 166,
			E_ACTION_ONCOMING = 167,
			E_ACTION_TAILGATING = 168,
			E_ACTION_DISTANCE_DRIVEN = 169,
			E_ACTION_AFTERTOUCH = 170,
			E_ACTION_EVENT_STATE_RESPONSE = 171,
			E_ACTION_GAME_STATS_RESPONSE = 172,
			E_ACTION_RANK_INFO_RESPONSE = 173,
			E_ACTION_PLAYER_INFO_RESPONSE = 174,
			E_ACTION_UNLOCKED_LIVERY_RESPONSE = 175,
			E_ACTION_CAR_SELECTION_RESPONSE = 176,
			E_ACTION_LANDMARK_VARIABLE_INFO_RESPONSE = 177,
			E_ACTION_REGION_FROM_POSITION_RESPONSE = 178,
			E_ACTION_UPDATE_GUI_ROUTE = 179,
			E_ACTION_ALL_RIVALRY_DATA_RESPONSE = 180,
			E_ACTION_ONE_RIVALRY_DATA_RESPONSE = 181,
			E_ACTION_SHOW_SATNAV = 182,
			E_ACTION_SET_LOADING_STATE = 183,
			E_ACTION_WAIT_FOR_STREAMING = 184,
			E_ACTION_PROGRESSION_PROFILE_DATA = 185,
			E_ACTION_LOAD_PROFILE = 186,
			E_ACTION_REMOVE_ALL_RIVALS = 187,
			E_ACTION_ADD_RIVAL = 188,
			E_ACTION_RIVAL_STATE_CHANGED = 189,
			E_ACTION_UPDATE_CAR_STATS = 190,
			E_ACTION_PROP_SMASH_PROGRESSION = 191,
			E_ACTION_UPDATE_PLAYER_MEDALS = 192,
			E_ACTION_EVENT_AT_JUNCTION_AVAILABLE = 193,
			E_ACTION_ALL_EVENTS_DISCOVERED = 194,
			E_ACTION_ALL_EVENTS_OF_TYPE_DISCOVERED = 195,
			E_ACTION_TROPHY_UNLOCK = 196,
			E_ACTION_ROAD_RAGE_PLAYER_DAMAGE = 197,
			E_ACTION_ALL_EVENT_TYPE_WON = 198,
			E_ACTION_RIVAL_UNLOCKED_INTO_THE_WORLD_ACTION = 199,
			E_ACTION_ONE_HUNDRED_PERCENT_COMPLETE = 200,
			E_ACTION_ACHIEVEMENTS_EARNED = 201,
			E_ACTION_ALL_RIVALS_SHUTDOWN = 202,
			E_ACTION_PAYBACK_LOST = 203,
			E_ACTION_PAYBACK_VICTIM_LEFT_GAME = 204,
			E_ACTION_PAYBACK_MUGSHOT = 205,
			E_ACTION_ABORT_MUGSHOT_CAPTURE = 206,
			E_ACTION_PAYBACK_ACTIVATED = 207,
			E_ACTION_PAYBACK_OVER = 208,
			E_ACTION_PAYBACK_SUCCEEDED = 209,
			E_ACTION_SOUND_TRIGGER = 210,
			E_ACTION_ONLINE_PLAYER_ADDED = 211,
			E_ACTION_ONLINE_PLAYER_REMOVED = 212,
			E_ACTION_OFFLINE_ADD_CAR_TO_MODE = 213,
			E_ACTION_OFFLINE_REMOVE_CAR_FROM_MODE = 214,
			E_ACTION_CAR_ADDITION_PRESENTATION_START = 215,
			E_ACTION_CAR_ADDITION_PRESENTATION_END = 216,
			E_ACTION_LOCAL_PLAYER_DISCONNECTED = 217,
			E_ACTION_LOCAL_PLAYER_LEFT_GAME = 218,
			E_ACTION_UPDATE_RICH_PRESENCE = 219,
			E_ACTION_SEND_TELEMETRY = 220,
			E_ACTION_ONLINE_GAME_RESULT = 221,
			E_ACTION_ONLINE_ROUND_RESULT = 222,
			E_ACTION_ONLINE_LAUNCH_FREE_BURN_LOBBY = 223,
			E_ACTION_ROAD_RULES_CHALLENGE_SCORES = 224,
			E_ACTION_ROAD_RULES_PERSONAL_BEST = 225,
			E_ACTION_ROAD_RULES_OVERWRITE_SERVER_RECORD = 226,
			E_ACTION_START_GAME_THROUGH_PLAYER_JOIN = 227,
			E_ACTION_RESTART_TRAFFIC = 228,
			E_ACTION_NETWORK_COLLECTABLE = 229,
			E_ACTION_NETWORK_CAUGHT_FEVER = 230,
			E_ACTION_REQUEST_GAMERCARD = 231,
			E_ACTION_HUD_MESSAGE_TOOK_LEAD = 232,
			E_ACTION_HUD_MESSAGE_TOOK_LAST = 233,
			E_ACTION_HUD_MESSAGE_DIST_TO_FINISH = 234,
			E_ACTION_HUD_MESSAGE_LEADING = 235,
			E_ACTION_HUD_MESSAGE_NECK_AND_NECK = 236,
			E_ACTION_HUD_MESSAGE_X_FINISHES = 237,
			E_ACTION_HUD_MESSAGE_X_REACHES_CHECKPOINT = 238,
			E_ACTION_HUD_MESSAGE_PLAYER_REACHES_CHECKPOINT = 239,
			E_ACTION_HUD_MESSAGE_X_CRASHES = 240,
			E_ACTION_HUD_MESSAGE_WRONG_WAY = 241,
			E_ACTION_HUD_MESSAGE_STUNT_PERFORMED = 242,
			E_ACTION_HUD_MESSAGE_COMBO_PERFORMED = 243,
			E_ACTION_HUD_MESSAGE_STUNT_TIME_UP = 244,
			E_ACTION_HUD_MESSAGE_BHR_CHECKPOINT = 245,
			E_ACTION_HUD_MESSAGE_BHR_RUNNER_CRASHED = 246,
			E_ACTION_HUD_MESSAGE_ONLINE_TEAM_CHANGE = 247,
			E_ACTION_HUD_MESSAGE_ROAD_RAGE_TIME_EXTENSION = 248,
			E_ACTION_HUD_MESSAGE_RIVAL_FIRST_HIT = 249,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_RIVAL = 250,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_TARGET = 251,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_FLEEING = 252,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_WRECKED = 253,
			E_ACTION_HUD_MESSAGE_PLAYER_CAN_SKIP_CRASH = 254,
			E_ACTION_HUD_MESSAGE_TIME_UP = 255,
			E_ACTION_HUD_MESSAGE_CANT_PAINT = 256,
			E_ACTION_HUD_MESSAGE_MUST_FIX = 257,
			E_ACTION_HUD_MESSAGE_JUMP_FAILED = 258,
			E_ACTION_WRONG_CAR_FOR_CHALLENGE = 259,
			E_ACTION_ROAD_RULES_ENTER_ROAD = 260,
			E_ACTION_ROAD_RULES_LEAVE_ROAD = 261,
			E_ACTION_ROAD_RULES_BATCH_QUERY = 262,
			E_ACTION_UPCOMING_ROAD_CHANGE = 263,
			E_ACTION_ROAD_RULES_START_RULE = 264,
			E_ACTION_ROAD_RULES_END_RULE = 265,
			E_ACTION_ROAD_RULES_UPDATE = 266,
			E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE = 267,
			E_ACTION_ROAD_RULES_NEW_HIGH_SCORE = 268,
			E_ACTION_ROAD_RULES_ACTIVE_RULE_CHANGE = 269,
			E_ACTION_ROAD_RULES_TIME_WARNING = 270,
			E_ACTION_ROAD_RULES_ROAD_SCORE = 271,
			E_ACTION_ROAD_RULES_NEW_RULERS = 272,
			E_ACTION_ROAD_RULES_MODE_SWITCH = 273,
			E_ACTION_PLAYER_IN_SHORTCUT = 274,
			E_ACTION_IMAGE_GALLERY_RENDER_IMAGE = 275,
			E_ACTION_IMAGE_GALLERY_IMAGE_INFO = 276,
			E_ACTION_IMAGE_GALLERY_COUNT_ACTION = 277,
			E_ACTION_IMAGE_GALLERY_DATA_ACTION = 278,
			E_ACTION_IMAGE_GALLERY_LOAD_COMPLETE = 279,
			E_ACTION_SAVE_IMAGE_AND_AUTOSAVE = 280,
			E_ACTION_LOAD_IMAGES = 281,
			E_ACTION_DXT_DECODE_IMAGE = 282,
			E_ACTION_SOUND_BIND_PROPS = 283,
			E_ACTION_COUNT = 284,
		}

		// Declaration
		struct ResetPlayerCarAction {
			// BrnGameActions.h:558
			enum CarSelectType {
				E_CAR_SELECT_DONT_DROP = 0,
				E_CAR_SELECT_DROP_NORMAL = 1,
				E_CAR_SELECT_DROP_SHUTDOWN = 2,
			}

		}

		// Declaration
		struct PrepareForModeAction {
			// BrnGameActions.h:856
			enum EPrepareForModeStage {
				E_PFM_STAGE_ALL_IN_ONE = 0,
				E_PFM_STAGE_FIRST_OF_TWO = 1,
				E_PFM_STAGE_SECOND_OF_TWO = 2,
				E_PFM_STAGE_COUNT = 3,
			}

		}

		// Declaration
		struct SetUpAllDriveThrusAction {
			// BrnGameActions.h:1714
			struct DriveThruInfo {
				// BrnGameActions.h:1715
				float32_t mfXCoord;

				// BrnGameActions.h:1716
				float32_t mfZCoord;

				// BrnGameActions.h:1717
				CgsID mDriveThruId;

				// BrnGameActions.h:1718
				BrnTrigger::GenericRegion::Type meType;

			}

		}

		// Declaration
		struct RivalryOverviewAction {
			// BrnGameActions.h:2894
			enum ERivalryStage {
				E_RIVALRY_STAGE_UNKNOWN = 0,
				E_RIVALRY_STAGE_DRIVER = 1,
				E_RIVALRY_STAGE_RIVAL = 2,
				E_RIVALRY_STAGE_TARGET = 3,
				E_RIVALRY_STAGE_WRECKED = 4,
				E_RIVALRY_STAGE_INVALID = 5,
				E_RIVALRY_STAGE_COUNT = 6,
			}

		}

		// Declaration
		struct SoundTriggerAction {
			// BrnGameActions.h:3663
			enum eType {
				E_TYPE_INVALID = 0,
				E_TYPE_AT_ENTITY = 1,
				E_TYPE_AHEAD_OF_ENTITY = 2,
				E_TYPE_COUNT = 3,
			}

		}

		// Declaration
		struct NewCarUnlockedAction {
			// BrnGameActions.h:3770
			enum Type {
				E_TYPE_UNLOCK = 0,
				E_TYPE_GIFT = 1,
				E_TYPE_TROPHY = 2,
				E_TYPE_SHUTDOWN_RIVAL = 3,
			}

		}

		// BrnGameActions.h:462
		const int32_t KI_EVENT_MANAGER_DEFAULT_ACTION_QUEUE_LENGTH = 13312;

		// BrnGameActions.h:463
		const int32_t KI_EVENT_MANAGER_SMALL_ACTION_QUEUE_LENGTH = 256;

	}

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_GUI_UPDATE_PLAYER_CAR_ID> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:524
struct BrnGameState::GameStateModuleIO::GuiUpdatePlayerCarIDAction : public GameAction<E_ACTION_GUI_UPDATE_PLAYER_CAR_ID> {
	// BrnGameActions.h:526
	CgsID mPlayerCarID;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_GUI_CAR_UNLOCK> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:539
struct BrnGameState::GameStateModuleIO::CarUnlockAction : public GameAction<E_ACTION_GUI_CAR_UNLOCK> {
	// BrnGameActions.h:541
	CgsID mCurrentCarToUnlock;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_PROP_SMASH_PROGRESSION> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:683
struct BrnGameState::GameStateModuleIO::PropSmashReportAction : public GameAction<E_ACTION_PROP_SMASH_PROGRESSION> {
private:
	// BrnGameActions.h:694
	const Profile::HitPropsBitArray * mpabHitPropBitArray;

public:
	// BrnGameActions.h:687
	const Profile::HitPropsBitArray & GetHitProps() const;

	// BrnGameActions.h:691
	void SetHitProps(const Profile::HitPropsBitArray &);

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_RESET_PLAYER_CAR_ON_TRACK> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:707
struct BrnGameState::GameStateModuleIO::ResetPlayerCarOnTrackAction : public GameAction<E_ACTION_RESET_PLAYER_CAR_ON_TRACK> {
	// BrnGameActions.h:709
	float32_t mfSpeed;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_INPROGRESS_STUNT> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:806
struct BrnGameState::GameStateModuleIO::InProgressStuntAction : public GameAction<E_ACTION_INPROGRESS_STUNT> {
	// BrnGameActions.h:808
	uint32_t muStuntActionInProgress;

	// BrnGameActions.h:810
	float32_t mfInProgressBarrelRollAngle;

	// BrnGameActions.h:811
	float32_t mfInProgressAirSpinAngle;

	// BrnGameActions.h:812
	float32_t mfInProgressHandbreakTurnAngle;

	// BrnGameActions.h:813
	float32_t mfInProgressDriftTime;

	// BrnGameActions.h:814
	float32_t mfInProgressDriftDistance;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_PLAYER_CRASH_ENDING_SOON> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:827
struct BrnGameState::GameStateModuleIO::PlayerCrashEndingSoonAction : public GameAction<E_ACTION_PLAYER_CRASH_ENDING_SOON> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SET_TRAFFIC_SCALE_BASED_ON_RANK> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1288
struct BrnGameState::GameStateModuleIO::SetTrafficScaleBasedOnRankAction : public GameAction<E_ACTION_SET_TRAFFIC_SCALE_BASED_ON_RANK> {
	// BrnGameActions.h:1290
	float32_t mfTrafficScale;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_FINISHED_MODE_RESULTS> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1440
struct BrnGameState::GameStateModuleIO::FinishedModeResultsAction : public GameAction<E_ACTION_FINISHED_MODE_RESULTS> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_UPDATE_PLAYER_MEDALS> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1536
struct BrnGameState::GameStateModuleIO::SendPlayerMedalAction : public GameAction<E_ACTION_UPDATE_PLAYER_MEDALS> {
	// BrnGameActions.h:1538
	uint16_t muGoldMedals;

	// BrnGameActions.h:1539
	uint16_t muSilverMedals;

	// BrnGameActions.h:1540
	uint16_t muBronzeMedals;

	// BrnGameActions.h:1542
	uint16_t muNumMedalsToNextRank;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ALL_EVENTS_DISCOVERED> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1582
struct BrnGameState::GameStateModuleIO::AllEventsDiscoveredAction : public GameAction<E_ACTION_ALL_EVENTS_DISCOVERED> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ALL_EVENTS_OF_TYPE_DISCOVERED> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1596
struct BrnGameState::GameStateModuleIO::AllEventsDiscoveredOfTypeAction : public GameAction<E_ACTION_ALL_EVENTS_OF_TYPE_DISCOVERED> {
	// BrnGameActions.h:1598
	BrnGameState::GameStateModuleIO::EGameModeType leGameEventType;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ALL_EVENT_TYPE_WON> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1612
struct BrnGameState::GameStateModuleIO::AllEventTypeWonAction : public GameAction<E_ACTION_ALL_EVENT_TYPE_WON> {
	// BrnGameActions.h:1614
	BrnGameState::GameStateModuleIO::EGameModeType leGameEventType;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SET_UP_ALL_DRIVE_THRUS> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1710
struct BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction : public GameAction<E_ACTION_SET_UP_ALL_DRIVE_THRUS> {
	// BrnGameActions.h:1723
	Array<BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction::DriveThruInfo,46u> maDriveThrus;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_CLOSE_DRIVE_THRU> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1735
struct BrnGameState::GameStateModuleIO::CloseDriveThruAction : public GameAction<E_ACTION_CLOSE_DRIVE_THRU> {
	// BrnGameActions.h:1737
	CgsID mDriveThruId;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_REQUEST_ROUTE_INFO> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1749
struct BrnGameState::GameStateModuleIO::RequestRouteInfoAction : public GameAction<E_ACTION_REQUEST_ROUTE_INFO> {
	// BrnGameActions.h:1752
	extern const int32_t KI_MAX_POINTS = 2;

	// BrnGameActions.h:1754
	Vector3[2] maPositions;

	// BrnGameActions.h:1755
	uint16_t[2] maSectionIndices;

	// BrnGameActions.h:1757
	uint16_t mu16EventID;

	// BrnGameActions.h:1759
	BrnAI::RouteMapModuleIO::RequestOwner meRequestOwner;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SET_LANDMARK_RACES> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1771
struct BrnGameState::GameStateModuleIO::SetLandmarkRacesAction : public GameAction<E_ACTION_SET_LANDMARK_RACES> {
	// BrnGameActions.h:1773
	Race[6] maRaces;

	// BrnGameActions.h:1774
	uint32_t muNumRaces;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SHOW_HUD_MESSAGE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1804
struct BrnGameState::GameStateModuleIO::ShowHudMessageAction : public GameAction<E_ACTION_SHOW_HUD_MESSAGE> {
	// BrnGameActions.h:1807
	CgsID mMessageId;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SHOW_POPUP> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1820
struct BrnGameState::GameStateModuleIO::ShowPopupAction : public GameAction<E_ACTION_SHOW_POPUP> {
	// BrnGameActions.h:1822
	CgsID mPopupId;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_PAUSE_SIMULATION> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1834
struct BrnGameState::GameStateModuleIO::PauseSimulationAction : public GameAction<E_ACTION_PAUSE_SIMULATION> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_UNPAUSE_SIMULATION> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1849
struct BrnGameState::GameStateModuleIO::UnpauseSimulationAction : public GameAction<E_ACTION_UNPAUSE_SIMULATION> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_PAUSE_ONLINE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1865
struct BrnGameState::GameStateModuleIO::PauseOnlineAction : public GameAction<E_ACTION_PAUSE_ONLINE> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_PROMPT_DO_INVITE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1909
struct BrnGameState::GameStateModuleIO::PromptDoInviteAction : public GameAction<E_ACTION_PROMPT_DO_INVITE> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_START_PREPARE_FOR_INVITE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1922
struct BrnGameState::GameStateModuleIO::StartPrepareForInviteAction : public GameAction<E_ACTION_START_PREPARE_FOR_INVITE> {
	// BrnGameActions.h:1924
	InviteOrJoinParams mInviteParams;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_UPDATE_PREPARE_FOR_INVITE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1936
struct BrnGameState::GameStateModuleIO::UpdatePrepareForInviteAction : public GameAction<E_ACTION_UPDATE_PREPARE_FOR_INVITE> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_PREPARED_FOR_INVITE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1949
struct BrnGameState::GameStateModuleIO::PreparedForInviteAction : public GameAction<E_ACTION_PREPARED_FOR_INVITE> {
	// BrnGameActions.h:1952
	BrnGameState::EModulePreparedForInvite meModulePreparedForInvite;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_PERFORM_INVITE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1964
struct BrnGameState::GameStateModuleIO::PerformInviteAction : public GameAction<E_ACTION_PERFORM_INVITE> {
	// BrnGameActions.h:1966
	InviteOrJoinParams mInviteParams;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_INVITE_COMPLETE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:1978
struct BrnGameState::GameStateModuleIO::InviteCompleteAction : public GameAction<E_ACTION_INVITE_COMPLETE> {
	// BrnGameActions.h:1980
	bool mbSuccess;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_DRIVE_THRU_JUNK_YARD> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2047
struct BrnGameState::GameStateModuleIO::JunkYardDriveThruAction : public GameAction<E_ACTION_DRIVE_THRU_JUNK_YARD> {
	// BrnGameActions.h:2049
	bool mbOnEntry;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_DRIVE_THRU_JUNK_YARD_ON_GAME_START> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2061
struct BrnGameState::GameStateModuleIO::JunkYardDriveThruOnGameStartAction : public GameAction<E_ACTION_DRIVE_THRU_JUNK_YARD_ON_GAME_START> {
	// BrnGameActions.h:2063
	bool mbNewProfile;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ON_TRAFFIC_CHECKING_CHAIN> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2088
struct BrnGameState::GameStateModuleIO::TrafficCheckingChainAction : public GameAction<E_ACTION_ON_TRAFFIC_CHECKING_CHAIN> {
	// BrnGameActions.h:2090
	int32_t miChainSize;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_TRIGGER> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2102
struct BrnGameState::GameStateModuleIO::TriggerAction : public GameAction<E_ACTION_TRIGGER> {
	// BrnGameActions.h:2104
	BrnTrigger::TriggerRegion::Type meTriggerType;

	// BrnGameActions.h:2105
	BrnTrigger::GenericRegion::Type meGenericRegionType;

	// BrnGameActions.h:2106
	CgsID mTriggerId;

	// BrnGameActions.h:2107
	int32_t miTriggerIndex;

	// BrnGameActions.h:2108
	bool mbFirstFrame;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_KILLZONE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2120
struct BrnGameState::GameStateModuleIO::KillzoneAction : public GameAction<E_ACTION_KILLZONE> {
	// BrnGameActions.h:2124
	Array<CgsID,32u> maRegionIds;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_DRIVE_THRU_CLOSED> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2150
struct BrnGameState::GameStateModuleIO::ClosedDriveThruAction : public GameAction<E_ACTION_DRIVE_THRU_CLOSED> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_DRIVE_THRU_STOP_PRESENTATION> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2176
struct BrnGameState::GameStateModuleIO::StopDriveThruPresentationAction : public GameAction<E_ACTION_DRIVE_THRU_STOP_PRESENTATION> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_DRIVE_THRU_DISCOVERED> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2189
struct BrnGameState::GameStateModuleIO::DriveThruDiscoveredAction : public GameAction<E_ACTION_DRIVE_THRU_DISCOVERED> {
	// BrnGameActions.h:2192
	BrnTrigger::GenericRegion::Type meDriveThruType;

	// BrnGameActions.h:2193
	int32_t miTotalDriveThrusOfType;

	// BrnGameActions.h:2194
	int32_t miNumDiscoveredDriveThrusOfType;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ALL_DRIVE_THRUS_DISCOVERED> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2206
struct BrnGameState::GameStateModuleIO::AllDriveThrusDiscoveredAction : public GameAction<E_ACTION_ALL_DRIVE_THRUS_DISCOVERED> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_RESET_CRASHING> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2233
struct BrnGameState::GameStateModuleIO::ResetCrashingAction : public GameAction<E_ACTION_RESET_CRASHING> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_RESET_RACE_CAR_CRASHING> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2246
struct BrnGameState::GameStateModuleIO::ResetRaceCarCrashingAction : public GameAction<E_ACTION_RESET_RACE_CAR_CRASHING> {
	// BrnGameActions.h:2248
	EActiveRaceCarIndex meActiveRaceCarIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_WORLD_REGION_CHANGE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2260
struct BrnGameState::GameStateModuleIO::WorldRegionChangeAction : public GameAction<E_ACTION_WORLD_REGION_CHANGE> {
	// BrnGameActions.h:2262
	WorldRegion mNewWorldRegion;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_TRAFFIC_TYPE_REQUEST> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2322
struct BrnGameState::GameStateModuleIO::TrafficTypeRequestAction : public GameAction<E_ACTION_TRAFFIC_TYPE_REQUEST> {
	// BrnGameActions.h:2324
	uint16_t muTrafficVehicleIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_NEAR_MISS> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2336
struct BrnGameState::GameStateModuleIO::NearMissAction : public GameAction<E_ACTION_NEAR_MISS> {
	// BrnGameActions.h:2338
	int32_t miCount;

	// BrnGameActions.h:2339
	BrnWorld::ENearMissType meNearMissType;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_DRIFTING> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2351
struct BrnGameState::GameStateModuleIO::DriftingAction : public GameAction<E_ACTION_DRIFTING> {
	// BrnGameActions.h:2353
	float32_t mfDistance;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SPINNING> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2365
struct BrnGameState::GameStateModuleIO::SpinningAction : public GameAction<E_ACTION_SPINNING> {
	// BrnGameActions.h:2367
	float32_t mfSpinAngle;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_IN_AIR> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2379
struct BrnGameState::GameStateModuleIO::InAirAction : public GameAction<E_ACTION_IN_AIR> {
	// BrnGameActions.h:2381
	float32_t mfCumulativeAirTime;

	// BrnGameActions.h:2382
	float32_t mfCurrentJumpAirTime;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ONCOMING> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2394
struct BrnGameState::GameStateModuleIO::OncomingAction : public GameAction<E_ACTION_ONCOMING> {
	// BrnGameActions.h:2396
	float32_t mfDistance;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_TAILGATING> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2408
struct BrnGameState::GameStateModuleIO::TailgatingAction : public GameAction<E_ACTION_TAILGATING> {
	// BrnGameActions.h:2410
	float32_t mfDistance;

	// BrnGameActions.h:2411
	EActiveRaceCarIndex meTailgatedCarIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_AFTERTOUCH> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2469
struct BrnGameState::GameStateModuleIO::AftertouchAction : public GameAction<E_ACTION_AFTERTOUCH> {
	// BrnGameActions.h:2471
	EActiveRaceCarIndex meRaceCarIndex;

	// BrnGameActions.h:2472
	float32_t mfForwardAftertouch;

	// BrnGameActions.h:2473
	float32_t mfSidewaysAftertouch;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_EVENT_STATE_RESPONSE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2486
struct BrnGameState::GameStateModuleIO::EventStateResponseAction : public GameAction<E_ACTION_EVENT_STATE_RESPONSE> {
	// BrnGameActions.h:2490
	Array<BrnProgression::ProfileEvent,175u> maEvents;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_GAME_STATS_RESPONSE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2502
struct BrnGameState::GameStateModuleIO::GameStatsResponseAction : public GameAction<E_ACTION_GAME_STATS_RESPONSE> {
	// BrnGameActions.h:2504
	GameStats mGameStats;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_RANK_INFO_RESPONSE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2516
struct BrnGameState::GameStateModuleIO::RankInfoResponseAction : public GameAction<E_ACTION_RANK_INFO_RESPONSE> {
private:
	// BrnGameActions.h:2572
	extern const int32_t KI_PLAYER_HAS_FINISHED_LAST_RANK = [255, 255, 255, 255, 255, 255, 255, 255];

	// BrnGameActions.h:2574
	int32_t miPlayerRank;

	// BrnGameActions.h:2575
	int32_t miOfflineRace;

	// BrnGameActions.h:2576
	int32_t miRoadRage;

	// BrnGameActions.h:2577
	int32_t miStuntAttack;

	// BrnGameActions.h:2578
	int32_t miMarkedMan;

	// BrnGameActions.h:2580
	int32_t miOfflineRaceRankWins;

	// BrnGameActions.h:2581
	int32_t miRoadRageRankWins;

	// BrnGameActions.h:2582
	int32_t miStuntAttackRankWins;

	// BrnGameActions.h:2583
	int32_t miMarkedManRankWins;

public:
	// BrnGameActions.h:2519
	bool PlayerHasFinishedLastRank() const;

	// BrnGameActions.h:2522
	void SetPlayerHasFinishedLastRank();

	// BrnGameActions.h:2525
	int32_t GetPlayerRank() const;

	// BrnGameActions.h:2528
	int32_t GetOfflineRaceRank() const;

	// BrnGameActions.h:2531
	int32_t GetRoadRageRank() const;

	// BrnGameActions.h:2534
	int32_t GetStuntAttackRank() const;

	// BrnGameActions.h:2537
	int32_t GetMarkedManRank() const;

	// BrnGameActions.h:2540
	int32_t GetOfflineRaceRankWins() const;

	// BrnGameActions.h:2543
	int32_t GetRoadRageRankWins() const;

	// BrnGameActions.h:2546
	int32_t GetStuntAttackRankWins() const;

	// BrnGameActions.h:2549
	int32_t GetMarkedManRankWins() const;

	// BrnGameActions.h:2552
	void SetEventThresholds();

	// BrnGameActions.h:2559
	// Declaration
	void SetProgressionRankEventWins(int32_t, int32_t, int32_t, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGameActions.h:6735
		using namespace CgsDev::Message;

		// BrnGameActions.h:6736
		using namespace CgsDev::Message;

		// BrnGameActions.h:6737
		using namespace CgsDev::Message;

		// BrnGameActions.h:6738
		using namespace CgsDev::Message;

	}

	// BrnGameActions.h:2568
	void SetProgressionRanks(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_PLAYER_INFO_RESPONSE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2595
struct BrnGameState::GameStateModuleIO::PlayerInfoResponseAction : public GameAction<E_ACTION_PLAYER_INFO_RESPONSE> {
	// BrnGameActions.h:2597
	PlayerInfo mPlayerInfo;

	// BrnGameActions.h:2598
	bool mbIsCarDamaged;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_UNLOCKED_LIVERY_RESPONSE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2611
struct BrnGameState::GameStateModuleIO::UnlockedLiveryResponseAction : public GameAction<E_ACTION_UNLOCKED_LIVERY_RESPONSE> {
	// BrnGameActions.h:2613
	Array<CgsID,8u> maCars;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_CAR_SELECTION_RESPONSE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2626
struct BrnGameState::GameStateModuleIO::CarSelectionResponseAction : public GameAction<E_ACTION_CAR_SELECTION_RESPONSE> {
	// BrnGameActions.h:2629
	extern const uint32_t KU_MAX_CARS_IN_RESPONSE_ACTION = 92;

	// BrnGameActions.h:2631
	Array<CgsID,92u> maCars;

	// BrnGameActions.h:2632
	BitArray<92u> mHasBeenDrivenBitArray;

	// BrnGameActions.h:2633
	BitArray<92u> mWreckedArray;

	// BrnGameActions.h:2634
	int32_t miMaxAvailableCars;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_CAR_SELECT_ONLINE_TIME_LEFT> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2743
struct BrnGameState::GameStateModuleIO::CarSelectOnlineTimeLeftAction : public GameAction<E_ACTION_CAR_SELECT_ONLINE_TIME_LEFT> {
	// BrnGameActions.h:2746
	float32_t mfTimeLeft;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_CAR_SELECT_ONLINE_END> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2758
struct BrnGameState::GameStateModuleIO::CarSelectOnlineEndAction : public GameAction<E_ACTION_CAR_SELECT_ONLINE_END> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_CAR_SELECT_ONLINE_SELECT_CAR> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2769
struct BrnGameState::GameStateModuleIO::CarSelectOnlineSelectCarAction : public GameAction<E_ACTION_CAR_SELECT_ONLINE_SELECT_CAR> {
	// BrnGameActions.h:2771
	CgsID mCarID;

	// BrnGameActions.h:2772
	uint16_t mu16ColourIndex;

	// BrnGameActions.h:2773
	uint16_t mu16PaintFinishIndex;

	// BrnGameActions.h:2774
	bool mbFinalSelection;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_CAR_SELECT_ABORT> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2797
struct BrnGameState::GameStateModuleIO::CarSelectAbortAction : public GameAction<E_ACTION_CAR_SELECT_ABORT> {
	// BrnGameActions.h:2800
	bool mbToOnlineEvent;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_PLAYER_CAR_COLOUR_RESPONSE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2838
struct BrnGameState::GameStateModuleIO::PlayerCarColourResponseAction : public GameAction<E_ACTION_PLAYER_CAR_COLOUR_RESPONSE> {
	// BrnGameActions.h:2840
	uint32_t muPaletteIndex;

	// BrnGameActions.h:2841
	uint32_t muColourIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_LANDMARK_VARIABLE_INFO_RESPONSE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2853
struct BrnGameState::GameStateModuleIO::LandmarkInfoResponseAction : public GameAction<E_ACTION_LANDMARK_VARIABLE_INFO_RESPONSE> {
	// BrnGameActions.h:2855
	LandmarkVariableInfo mLandmarkVariableInfo;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_REGION_FROM_POSITION_RESPONSE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2867
struct BrnGameState::GameStateModuleIO::RegionFromPositionResponseAction : public GameAction<E_ACTION_REGION_FROM_POSITION_RESPONSE> {
	// BrnGameActions.h:2869
	WorldRegion mWorldRegion;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_UPDATE_GUI_ROUTE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2881
struct BrnGameState::GameStateModuleIO::UpdateGuiRouteAction : public GameAction<E_ACTION_UPDATE_GUI_ROUTE> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ALL_RIVALRY_DATA_RESPONSE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2892
struct BrnGameState::GameStateModuleIO::RivalryOverviewAction : public GameAction<E_ACTION_ALL_RIVALRY_DATA_RESPONSE> {
	// BrnGameActions.h:2906
	int32_t miRivalsReturned;

	// BrnGameActions.h:2908
	CgsID[64] mRivalIDs;

	// BrnGameActions.h:2909
	CgsID[64] mRivalCarIDs;

	// BrnGameActions.h:2910
	BrnGameState::GameStateModuleIO::RivalryOverviewAction::ERivalryStage[64] mRivalryStatus;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ONE_RIVALRY_DATA_RESPONSE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2921
struct BrnGameState::GameStateModuleIO::RivalryOneInDepthAction : public GameAction<E_ACTION_ONE_RIVALRY_DATA_RESPONSE> {
	// BrnGameActions.h:2923
	CgsID mId;

	// BrnGameActions.h:2924
	CgsID mCarId;

	// BrnGameActions.h:2925
	BrnWorld::ECounty meCountyIndex;

	// BrnGameActions.h:2926
	int32_t miRaceWins;

	// BrnGameActions.h:2927
	int8_t miProgressStatus;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SHOW_SATNAV> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2931
struct BrnGameState::GameStateModuleIO::ShowSatNavAction : public GameAction<E_ACTION_SHOW_SATNAV> {
	// BrnGameActions.h:2933
	bool mbShow;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_PROGRESSION_PROFILE_DATA> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2944
struct BrnGameState::GameStateModuleIO::ProgressionProfileDataAction : public GameAction<E_ACTION_PROGRESSION_PROFILE_DATA> {
	// BrnGameActions.h:2946
	Profile * mpProgressionProfile;

	// BrnGameActions.h:2947
	const BrnProgression::ProgressionData * mpProgressionData;

	// BrnGameActions.h:2948
	bool mbAreRoadRulesAvailable;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_LOAD_PROFILE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2959
struct BrnGameState::GameStateModuleIO::LoadProfileAction : public GameAction<E_ACTION_LOAD_PROFILE> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_REMOVE_ALL_RIVALS> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:2971
struct BrnGameState::GameStateModuleIO::RemoveAllRivalsAction : public GameAction<E_ACTION_REMOVE_ALL_RIVALS> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ONE_HUNDRED_PERCENT_COMPLETE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3019
struct BrnGameState::GameStateModuleIO::OneHundredPercentCompleteAction : public GameAction<E_ACTION_ONE_HUNDRED_PERCENT_COMPLETE> {
	// BrnGameActions.h:3021
	bool mbOneHundredPercentComplete;

	// BrnGameActions.h:3022
	bool mbCompletionSequenceShown;

	// BrnGameActions.h:3023
	BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ACHIEVEMENTS_EARNED> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3033
struct BrnGameState::GameStateModuleIO::AchievementsEarnedAction : public GameAction<E_ACTION_ACHIEVEMENTS_EARNED> {
	// BrnGameActions.h:3036
	BitArray<60u> mAchievementsEarned;

	// BrnGameActions.h:3038
	int32_t miAchivementCount;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ALL_RIVALS_SHUTDOWN> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3047
struct BrnGameState::GameStateModuleIO::AllRivalsShutDownAction : public GameAction<E_ACTION_ALL_RIVALS_SHUTDOWN> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_RIVAL_STATE_CHANGED> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3061
struct BrnGameState::GameStateModuleIO::RivalStateChangeAction : public GameAction<E_ACTION_RIVAL_STATE_CHANGED> {
	// BrnGameActions.h:3063
	Rival mRival;

	// BrnGameActions.h:3064
	RivalData mRivalSavedData;

	// BrnGameActions.h:3065
	int8_t miRivalIndex;

	// BrnGameActions.h:3066
	BrnProgression::RivalData::EState mePreviousState;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_PAYBACK_MUGSHOT> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3095
struct BrnGameState::GameStateModuleIO::PaybackMugshotAction : public GameAction<E_ACTION_PAYBACK_MUGSHOT> {
	// BrnGameActions.h:3098
	EActiveRaceCarIndex meTakedownAggressorIndex;

	// BrnGameActions.h:3099
	EActiveRaceCarIndex meTakedownVictimIndex;

	// BrnGameActions.h:3100
	BrnGameState::GameStateModuleIO::EMugshotResponse meMugshotResponse;

	// BrnGameActions.h:3101
	BrnGameState::GameStateModuleIO::EImageType meImageType;

	// BrnGameActions.h:3102
	CgsID mRoadRuleBeatenRoadID;

	// BrnGameActions.h:3103
	bool mbIsTakedownAggressorLocalPlayer;

	// BrnGameActions.h:3104
	bool mbMugshotRequiresBroadcast;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ABORT_MUGSHOT_CAPTURE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3115
struct BrnGameState::GameStateModuleIO::AbortMugshotCaptureAction : public GameAction<E_ACTION_ABORT_MUGSHOT_CAPTURE> {
	// BrnGameActions.h:3118
	EActiveRaceCarIndex meTakedownAggressorIndex;

	// BrnGameActions.h:3119
	EActiveRaceCarIndex meTakedownVictimIndex;

	// BrnGameActions.h:3120
	BrnGameState::GameStateModuleIO::EImageType meImageType;

	// BrnGameActions.h:3121
	bool mbIsTakedownAggressorLocalPlayer;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_PAYBACK_OVER> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3147
struct BrnGameState::GameStateModuleIO::PaybackOverAction : public GameAction<E_ACTION_PAYBACK_OVER> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_PAYBACK_SUCCEEDED> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3159
struct BrnGameState::GameStateModuleIO::PaybackSucceededAction : public GameAction<E_ACTION_PAYBACK_SUCCEEDED> {
	// BrnGameActions.h:3161
	EActiveRaceCarIndex mePaybackAggressorIndex;

	// BrnGameActions.h:3162
	EActiveRaceCarIndex mePaybackVictimIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SET_LOADING_STATE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3174
struct BrnGameState::GameStateModuleIO::SetLoadingStateAction : public GameAction<E_ACTION_SET_LOADING_STATE> {
	// BrnGameActions.h:3176
	bool mbStartLoading;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_WAIT_FOR_STREAMING> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3189
struct BrnGameState::GameStateModuleIO::WaitForStreamingAction : public GameAction<E_ACTION_WAIT_FOR_STREAMING> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_BLUE_TEAM_IS_ESCAPING> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3216
struct BrnGameState::GameStateModuleIO::BlueTeamIsEscapingAction : public GameAction<E_ACTION_BLUE_TEAM_IS_ESCAPING> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_BLUE_TEAM_IS_BEHIND_YOU> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3229
struct BrnGameState::GameStateModuleIO::BlueTeamIsBehindYouAction : public GameAction<E_ACTION_BLUE_TEAM_IS_BEHIND_YOU> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_LEADER_REACHED_BOUNDARY> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3272
struct BrnGameState::GameStateModuleIO::LeaderReachedBoundaryAction : public GameAction<E_ACTION_LEADER_REACHED_BOUNDARY> {
	// BrnGameActions.h:3274
	bool mbIsBoundaryInMiles;

	// BrnGameActions.h:3275
	float_t mfDistanceInMetres;

	// BrnGameActions.h:3276
	EActiveRaceCarIndex meRaceCarIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_PLAYER_RESET_ON_TRACK> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3305
struct BrnGameState::GameStateModuleIO::PlayerResetOnTrackAction : public GameAction<E_ACTION_PLAYER_RESET_ON_TRACK> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_TRIGGER_CRASH_BREAKER> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3316
struct BrnGameState::GameStateModuleIO::TriggerCrashBreakerAction : public GameAction<E_ACTION_TRIGGER_CRASH_BREAKER> {
	// BrnGameActions.h:3318
	Vector3 mPosition;

	// BrnGameActions.h:3319
	EActiveRaceCarIndex meRaceCarIndex;

	// BrnGameActions.h:3320
	float32_t mfNormMagnitude;

	// BrnGameActions.h:3321
	float32_t mfTimeUntilStart;

	// BrnGameActions.h:3322
	float32_t mfDurationTime;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_CANCEL_CRASH_BREAKER> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3333
struct BrnGameState::GameStateModuleIO::CancelCrashBreakerAction : public GameAction<E_ACTION_CANCEL_CRASH_BREAKER> {
	// BrnGameActions.h:3335
	EActiveRaceCarIndex meRaceCarIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_TOGGLE_SHOWTIME_BEHAVIOUR> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3346
struct BrnGameState::GameStateModuleIO::ToggleShowtimeBehaviourAction : public GameAction<E_ACTION_TOGGLE_SHOWTIME_BEHAVIOUR> {
	// BrnGameActions.h:3348
	BrnGameState::EShowtimeBehaviour meShowtimeBehaviour;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_VEHICLE_LEAPT> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3359
struct BrnGameState::GameStateModuleIO::VehicleLeaptAction : public GameAction<E_ACTION_VEHICLE_LEAPT> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ENTER_NEW_ROAD> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3392
struct BrnGameState::GameStateModuleIO::EnterNewRoadAction : public GameAction<E_ACTION_ENTER_NEW_ROAD> {
	// BrnGameActions.h:3394
	bool mbIsJunction;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SHOWTIME_UPDATE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3405
struct BrnGameState::GameStateModuleIO::ShowtimeUpdateAction : public GameAction<E_ACTION_SHOWTIME_UPDATE> {
	// BrnGameActions.h:3407
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

	// BrnGameActions.h:3408
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGameActions.h:3409
	int32_t miShowtimeScore;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_JUST_APPLIED_EXTRA_SPIN> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3457
struct BrnGameState::GameStateModuleIO::JustAppliedExtraSpinAction : public GameAction<E_ACTION_JUST_APPLIED_EXTRA_SPIN> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_OVERHEAD_SIGN_HIT> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3482
struct BrnGameState::GameStateModuleIO::HitOverheadSignAction : public GameAction<E_ACTION_OVERHEAD_SIGN_HIT> {
	// BrnGameActions.h:3484
	uint8_t muRaceCarId;

	// BrnGameActions.h:3485
	int32_t miPointsAwarded;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_GAME_TRAINING> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3509
struct BrnGameState::GameStateModuleIO::GameTrainingAction : public GameAction<E_ACTION_GAME_TRAINING> {
	// BrnGameActions.h:3511
	BrnProgression::ETrainingType meTrainingType;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_GAME_TRAINING_PAUSE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3534
struct BrnGameState::GameStateModuleIO::GameTrainingPauseAction : public GameAction<E_ACTION_GAME_TRAINING_PAUSE> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_GAME_TRAINING_UNPAUSE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3543
struct BrnGameState::GameStateModuleIO::GameTrainingUnpauseAction : public GameAction<E_ACTION_GAME_TRAINING_UNPAUSE> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_AWARD_SEQUENCE_START> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3601
struct BrnGameState::GameStateModuleIO::AwardSequenceStartAction : public GameAction<E_ACTION_AWARD_SEQUENCE_START> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_AWARD_SEQUENCE_END> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3615
struct BrnGameState::GameStateModuleIO::AwardSequenceEndAction : public GameAction<E_ACTION_AWARD_SEQUENCE_END> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_CRASH_COMBO> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3629
struct BrnGameState::GameStateModuleIO::CrashComboAction : public GameAction<E_ACTION_CRASH_COMBO> {
	// BrnGameActions.h:3631
	BrnWorld::EComboEntryType meEntryType;

	// BrnGameActions.h:3632
	float32_t mfValue;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_DAMAGE_CRITICAL> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3714
struct BrnGameState::GameStateModuleIO::DamageCriticalMessageAction : public GameAction<E_ACTION_DAMAGE_CRITICAL> {
	// BrnGameActions.h:3717
	bool mbPlayerCarIsDamageCritical;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_RIVAL_HIT_PLAYER> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3747
struct BrnGameState::GameStateModuleIO::RivalHitPlayerAction : public GameAction<E_ACTION_RIVAL_HIT_PLAYER> {
	// BrnGameActions.h:3750
	BrnPhysics::Vehicle::EImpactType meImpactType;

	// BrnGameActions.h:3751
	EActiveRaceCarIndex meAggressorActiveRaceCarIndex;

	// BrnGameActions.h:3752
	EActiveRaceCarIndex meVictimActiveRaceCarIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_CAR_UNLOCK_END> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3793
struct BrnGameState::GameStateModuleIO::CarUnlockEndAction : public GameAction<E_ACTION_CAR_UNLOCK_END> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SHOW_JUMP_NAME> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3823
struct BrnGameState::GameStateModuleIO::ShowJumpNameAction : public GameAction<E_ACTION_SHOW_JUMP_NAME> {
	// BrnGameActions.h:3826
	CgsID mJumpID;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_FOR_COUNTY> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3855
struct BrnGameState::GameStateModuleIO::OnAllStuntElementsCompleteForCountyAction : public GameAction<E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_FOR_COUNTY> {
	// BrnGameActions.h:3857
	BrnGameState::StuntElementType meStuntElementType;

	// BrnGameActions.h:3858
	BrnWorld::ECounty meCounty;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_BY_TYPE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3870
struct BrnGameState::GameStateModuleIO::OnAllStuntElementsCompleteByTypeAction : public GameAction<E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_BY_TYPE> {
	// BrnGameActions.h:3872
	BrnGameState::StuntElementType meStuntElementType;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_CAR_SELECTION_DROPIN_COMPLETE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3932
struct BrnGameState::GameStateModuleIO::CarSelectionDropInCompleteAction : public GameAction<E_ACTION_CAR_SELECTION_DROPIN_COMPLETE> {
	// BrnGameActions.h:3934
	bool mbIsLeft;

	// BrnGameActions.h:3935
	CgsID mCarId;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_CAR_SELECTION_CHANGED_ONLINE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3948
struct BrnGameState::GameStateModuleIO::CarSelectionChangedOnlineAction : public GameAction<E_ACTION_CAR_SELECTION_CHANGED_ONLINE> {
	// BrnGameActions.h:3950
	CgsID mCarId;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_STOP_BOOSTING> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:3991
struct BrnGameState::GameStateModuleIO::StopBoostingAction : public GameAction<E_ACTION_STOP_BOOSTING> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_ON_PLAYER_TAKEDOWN> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4018
struct BrnGameState::GameStateModuleIO::OnPlayerTakedownAction : public GameAction<E_ACTION_ON_PLAYER_TAKEDOWN> {
	// BrnGameActions.h:4020
	EGlobalRaceCarIndex meVictimGlobalRaceCarIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_NOTIFY_DIRECTOR_LOCAL_PLAYER_DISCONNECTED> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4062
struct BrnGameState::GameStateModuleIO::NotifyDirectorLocalPlayerDisconnectedAction : public GameAction<E_ACTION_NOTIFY_DIRECTOR_LOCAL_PLAYER_DISCONNECTED> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SEND_TELEMETRY> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4358
struct BrnGameState::GameStateModuleIO::TelemetryAction : public GameAction<E_ACTION_SEND_TELEMETRY> {
	// BrnGameActions.h:4360
	TelemetryData mEventData;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_HUD_MESSAGE_TOOK_LEAD> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4373
struct BrnGameState::GameStateModuleIO::HUDMessageTookLeadAction : public GameAction<E_ACTION_HUD_MESSAGE_TOOK_LEAD> {
	// BrnGameActions.h:4375
	CgsID mCarId;

	// BrnGameActions.h:4376
	EActiveRaceCarIndex meActiveRaceCarIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_HUD_MESSAGE_TOOK_LAST> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4389
struct BrnGameState::GameStateModuleIO::HUDMessageTookLastAction : public GameAction<E_ACTION_HUD_MESSAGE_TOOK_LAST> {
	// BrnGameActions.h:4391
	CgsID mCarId;

	// BrnGameActions.h:4392
	EActiveRaceCarIndex meActiveRaceCarIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_HUD_MESSAGE_DIST_TO_FINISH> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4406
struct BrnGameState::GameStateModuleIO::HUDMessageDistanceToFinishAction : public GameAction<E_ACTION_HUD_MESSAGE_DIST_TO_FINISH> {
	// BrnGameActions.h:4408
	float32_t mfDistanceToFinish;

	// BrnGameActions.h:4409
	int32_t miPlayerPosition;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_HUD_MESSAGE_LEADING> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4421
struct BrnGameState::GameStateModuleIO::HUDMessageLeadingAction : public GameAction<E_ACTION_HUD_MESSAGE_LEADING> {
	// BrnGameActions.h:4423
	CgsID mLeadingCarID;

	// BrnGameActions.h:4424
	float32_t mfLeadTime;

	// BrnGameActions.h:4425
	bool mbLocalPlayerIsLeading;

	// BrnGameActions.h:4426
	EActiveRaceCarIndex meLeadingCarIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_HUD_MESSAGE_X_FINISHES> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4451
struct BrnGameState::GameStateModuleIO::HUDMessageXFinishesAction : public GameAction<E_ACTION_HUD_MESSAGE_X_FINISHES> {
	// BrnGameActions.h:4453
	EActiveRaceCarIndex meRivalRaceCarIndex;

	// BrnGameActions.h:4454
	int32_t miFinishPosition;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_HUD_MESSAGE_X_REACHES_CHECKPOINT> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4466
struct BrnGameState::GameStateModuleIO::HUDMessageXReachesCheckpointAction : public GameAction<E_ACTION_HUD_MESSAGE_X_REACHES_CHECKPOINT> {
	// BrnGameActions.h:4468
	CgsID mRivalID;

	// BrnGameActions.h:4469
	CgsID mLandmarkID;

	// BrnGameActions.h:4470
	EActiveRaceCarIndex meRivalRaceCarIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_HUD_MESSAGE_PLAYER_REACHES_CHECKPOINT> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4482
struct BrnGameState::GameStateModuleIO::HUDMessagePlayerReachesCheckpointAction : public GameAction<E_ACTION_HUD_MESSAGE_PLAYER_REACHES_CHECKPOINT> {
	// BrnGameActions.h:4485
	CgsID mThisLandmarkID;

	// BrnGameActions.h:4486
	CgsID mNextLandmarkID;

	// BrnGameActions.h:4487
	bool mbIsPenultimatedLandmark;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_HUD_MESSAGE_X_CRASHES> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4499
struct BrnGameState::GameStateModuleIO::HUDMessageXCrashesAction : public GameAction<E_ACTION_HUD_MESSAGE_X_CRASHES> {
	// BrnGameActions.h:4502
	CgsID mRivalID;

	// BrnGameActions.h:4503
	EActiveRaceCarIndex meRivalRaceCarIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_HUD_MESSAGE_COMBO_PERFORMED> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4542
struct BrnGameState::GameStateModuleIO::HUDMessageComboPerformed : public GameAction<E_ACTION_HUD_MESSAGE_COMBO_PERFORMED> {
	// BrnGameActions.h:4544
	int32_t miScore;

	// BrnGameActions.h:4545
	bool mbBestScore;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_HUD_MESSAGE_STUNT_TIME_UP> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4557
struct BrnGameState::GameStateModuleIO::HUDMessageStuntTimeUp : public GameAction<E_ACTION_HUD_MESSAGE_STUNT_TIME_UP> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_HUD_MESSAGE_BHR_CHECKPOINT> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4570
struct BrnGameState::GameStateModuleIO::HUDMessageBHRCheckpointAction : public GameAction<E_ACTION_HUD_MESSAGE_BHR_CHECKPOINT> {
	// BrnGameActions.h:4572
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGameActions.h:4573
	int32_t miNumCheckpointsToGo;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_HUD_MESSAGE_BHR_RUNNER_CRASHED> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4585
struct BrnGameState::GameStateModuleIO::HUDMessageBHRRunnerCrashed : public GameAction<E_ACTION_HUD_MESSAGE_BHR_RUNNER_CRASHED> {
	// BrnGameActions.h:4587
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnGameActions.h:4588
	int32_t miNumCrashesToGo;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_HUD_MESSAGE_ONLINE_TEAM_CHANGE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4600
struct BrnGameState::GameStateModuleIO::HUDMessageOnlineTeamChangeAction : public GameAction<E_ACTION_HUD_MESSAGE_ONLINE_TEAM_CHANGE> {
	// BrnGameActions.h:4602
	EActiveRaceCarIndex meActiveRaceCarIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_HUD_MESSAGE_RIVAL_FIRST_HIT> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4628
struct BrnGameState::GameStateModuleIO::HUDMessageFirstHitOnRivalAction : public GameAction<E_ACTION_HUD_MESSAGE_RIVAL_FIRST_HIT> {
	// BrnGameActions.h:4630
	CgsID mRivalID;

	// BrnGameActions.h:4631
	CgsID mCarID;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_HUD_MESSAGE_RIVAL_IS_A_RIVAL> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4643
struct BrnGameState::GameStateModuleIO::HUDMessageRivalIsARivalAction : public GameAction<E_ACTION_HUD_MESSAGE_RIVAL_IS_A_RIVAL> {
	// BrnGameActions.h:4645
	CgsID mRivalID;

	// BrnGameActions.h:4646
	CgsID mCarID;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_HUD_MESSAGE_RIVAL_IS_A_TARGET> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4658
struct BrnGameState::GameStateModuleIO::HUDMessageRivalIsATargetAction : public GameAction<E_ACTION_HUD_MESSAGE_RIVAL_IS_A_TARGET> {
	// BrnGameActions.h:4660
	CgsID mRivalID;

	// BrnGameActions.h:4661
	CgsID mCarID;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_HUD_MESSAGE_RIVAL_IS_WRECKED> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4688
struct BrnGameState::GameStateModuleIO::HUDMessageRivalIsWreckedAction : public GameAction<E_ACTION_HUD_MESSAGE_RIVAL_IS_WRECKED> {
	// BrnGameActions.h:4690
	CgsID mRivalID;

	// BrnGameActions.h:4691
	CgsID mCarID;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_HUD_MESSAGE_PLAYER_CAN_SKIP_CRASH> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4703
struct BrnGameState::GameStateModuleIO::HUDMessagePlayerCanSkipCrashAction : public GameAction<E_ACTION_HUD_MESSAGE_PLAYER_CAN_SKIP_CRASH> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_HUD_MESSAGE_CANT_PAINT> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4730
struct BrnGameState::GameStateModuleIO::HUDMessageCantPaintAction : public GameAction<E_ACTION_HUD_MESSAGE_CANT_PAINT> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_HUD_MESSAGE_MUST_FIX> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4744
struct BrnGameState::GameStateModuleIO::HUDMessageMustFixCarAction : public GameAction<E_ACTION_HUD_MESSAGE_MUST_FIX> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_HUD_MESSAGE_JUMP_FAILED> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4758
struct BrnGameState::GameStateModuleIO::HUDMessageJumpFailedAction : public GameAction<E_ACTION_HUD_MESSAGE_JUMP_FAILED> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_WRONG_CAR_FOR_CHALLENGE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4909
struct BrnGameState::GameStateModuleIO::WrongCarForChallengeAction : public GameAction<E_ACTION_WRONG_CAR_FOR_CHALLENGE> {
	// BrnGameActions.h:4915
	CgsID mRequiredCarID;

public:
	// BrnGameActions.h:4913
	void Construct();

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_NETWORK_COLLECTABLE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5279
struct BrnGameState::GameStateModuleIO::OnlineNetworkPlayerCollectableAction : public GameAction<E_ACTION_NETWORK_COLLECTABLE> {
	// BrnGameActions.h:5281
	CgsID mID;

	// BrnGameActions.h:5282
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

	// BrnGameActions.h:5283
	BrnGameState::StuntElementType meType;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_IMAGE_GALLERY_RENDER_IMAGE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5295
struct BrnGameState::GameStateModuleIO::ImageGalleryRenderImageAction : public GameAction<E_ACTION_IMAGE_GALLERY_RENDER_IMAGE> {
	// BrnGameActions.h:5297
	const NetworkTexture * mpTexture;

	// BrnGameActions.h:5298
	int32_t miTextureIndex;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_IMAGE_GALLERY_IMAGE_INFO> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5310
struct BrnGameState::GameStateModuleIO::ImageGalleryImageInfoAction : public GameAction<E_ACTION_IMAGE_GALLERY_IMAGE_INFO> {
	// BrnGameActions.h:5312
	DateAndTime mCaptureDate;

	// BrnGameActions.h:5313
	WorldRegion mWorldRegion;

	// BrnGameActions.h:5314
	int32_t miNumCaptures;

	// BrnGameActions.h:5315
	int32_t miSlotIndex;

	// BrnGameActions.h:5316
	PlayerName mPlayerName;

	// BrnGameActions.h:5317
	bool mbLocked;

	// BrnGameActions.h:5318
	bool mbHasDeleted;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_IMAGE_GALLERY_COUNT_ACTION> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5330
struct BrnGameState::GameStateModuleIO::ImageGalleryCountAction : public GameAction<E_ACTION_IMAGE_GALLERY_COUNT_ACTION> {
	// BrnGameActions.h:5332
	BrnGameState::GameStateModuleIO::EImageGalleryType meImageType;

	// BrnGameActions.h:5333
	int32_t miUsedCount;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_IMAGE_GALLERY_DATA_ACTION> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5345
struct BrnGameState::GameStateModuleIO::ImageGalleryDataAction : public GameAction<E_ACTION_IMAGE_GALLERY_DATA_ACTION> {
	// BrnGameActions.h:5347
	BrnGameState::GameStateModuleIO::EImageGalleryType meImageType;

	// BrnGameActions.h:5348
	FastBitArray<30> mActiveBitArray;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SAVE_IMAGE_AND_AUTOSAVE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5370
struct BrnGameState::GameStateModuleIO::SaveImageAndAutoSaveAction : public GameAction<E_ACTION_SAVE_IMAGE_AND_AUTOSAVE> {
	// BrnGameActions.h:5372
	ImageFileInfo mImageFileInfo;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_LOAD_IMAGES> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5384
struct BrnGameState::GameStateModuleIO::LoadImageFilesAction : public GameAction<E_ACTION_LOAD_IMAGES> {
	// BrnGameActions.h:5386
	ImageFileInfo[3] maImageFileInfo;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_DXT_DECODE_IMAGE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5398
struct BrnGameState::GameStateModuleIO::DXTDecodeImageAction : public GameAction<E_ACTION_DXT_DECODE_IMAGE> {
	// BrnGameActions.h:5400
	NetworkTexture * mpTextureToDecode;

	// BrnGameActions.h:5401
	PlayerName mPlayerName;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_NETWORK_CAUGHT_FEVER> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5704
struct BrnGameState::GameStateModuleIO::CaughtFeverAction : public GameAction<E_ACTION_NETWORK_CAUGHT_FEVER> {
}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_STOP_MODE_SPLASH> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_START_GAME_THROUGH_PLAYER_JOIN> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_PAYBACK_LOST> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_PAYBACK_VICTIM_LEFT_GAME> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_IMAGE_GALLERY_LOAD_COMPLETE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_CAR_SELECT_PAUSED_IN_CAR_SELECT> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::DamageCriticalMessageAction>(const const DamageCriticalMessageAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageDistanceToFinishAction>(const const HUDMessageDistanceToFinishAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageTookLeadAction>(const const HUDMessageTookLeadAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageTookLastAction>(const const HUDMessageTookLastAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::BlueTeamIsBehindYouAction>(const const BlueTeamIsBehindYouAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::BlueTeamIsEscapingAction>(const const BlueTeamIsEscapingAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageOnlineTeamChangeAction>(const const HUDMessageOnlineTeamChangeAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageBHRRunnerCrashed>(const const HUDMessageBHRRunnerCrashed &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageComboPerformed>(const const HUDMessageComboPerformed &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageStuntPerformed>(const const HUDMessageStuntPerformed &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageStuntTimeUp>(const const HUDMessageStuntTimeUp &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageBHRCheckpointAction>(const const HUDMessageBHRCheckpointAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageXCrashesAction>(const const HUDMessageXCrashesAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageXReachesCheckpointAction>(const const HUDMessageXReachesCheckpointAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::HUDMessagePlayerReachesCheckpointAction>(const const HUDMessagePlayerReachesCheckpointAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageXFinishesAction>(const const HUDMessageXFinishesAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageLeadingAction>(const const HUDMessageLeadingAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::LeaderReachedBoundaryAction>(const const LeaderReachedBoundaryAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::AddRivalAction>(const const AddRivalAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageFirstHitOnRivalAction>(const const HUDMessageFirstHitOnRivalAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageRivalIsARivalAction>(const const HUDMessageRivalIsARivalAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageRivalIsATargetAction>(const const HUDMessageRivalIsATargetAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageRivalIsWreckedAction>(const const HUDMessageRivalIsWreckedAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RemoveAllRivalsAction>(const const RemoveAllRivalsAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RivalStateChangeAction>(const const RivalStateChangeAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::AllEventTypeWonAction>(const const AllEventTypeWonAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::OneHundredPercentCompleteAction>(const const OneHundredPercentCompleteAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::AchievementsEarnedAction>(const const AchievementsEarnedAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::TrophyUnlockAction>(const const TrophyUnlockAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::SetTakedownCameraAction>(const const SetTakedownCameraAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::ResetPlayerCarOnTrackAction>(const const ResetPlayerCarOnTrackAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::GameTrainingAction>(const const GameTrainingAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::GameTrainingUnpauseAction>(const const GameTrainingUnpauseAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::WorldStuntAction>(const const BrnGameState::GameStateModuleIO::WorldStuntAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::OnStuntElementBoostAction>(const const OnStuntElementBoostAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::OnStuntElementCompleteAction>(const const OnStuntElementCompleteAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::OnAllStuntElementsCompleteForCountyAction>(const const OnAllStuntElementsCompleteForCountyAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::OnAllStuntElementsCompleteByTypeAction>(const const OnAllStuntElementsCompleteByTypeAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::OnJumpStartAction>(const const OnJumpStartAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::ShowJumpNameAction>(const const ShowJumpNameAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::CarSelectChangeColourAction>(const const CarSelectChangeColourAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::CarSelectOnlineSelectCarAction>(const const CarSelectOnlineSelectCarAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::ResetPlayerCarAction>(const const ResetPlayerCarAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::CarSelectionChangedOnlineAction>(const const CarSelectionChangedOnlineAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::CarSelectOnlineEndAction>(const const CarSelectOnlineEndAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::CarSelectWaitingForAudioAction>(const const CarSelectWaitingForAudioAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::StartPrepareForInviteAction>(const const StartPrepareForInviteAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::ImageGalleryDataAction>(const const ImageGalleryDataAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::ImageGalleryCountAction>(const const ImageGalleryCountAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::DXTDecodeImageAction>(const const DXTDecodeImageAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::ShowPopupAction>(const const ShowPopupAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::ImageGalleryLoadCompleteAction>(const const ImageGalleryLoadCompleteAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGameActions.h:5359
	typedef GameAction<E_ACTION_IMAGE_GALLERY_LOAD_COMPLETE> ImageGalleryLoadCompleteAction;

}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::SaveImageAndAutoSaveAction>(const const SaveImageAndAutoSaveAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::ImageGalleryRenderImageAction>(const const ImageGalleryRenderImageAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::PaybackSucceededAction>(const const PaybackSucceededAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::PaybackOverAction>(const const PaybackOverAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::PaybackActivatedAction>(const const PaybackActivatedAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::PaybackVictimLeftGameAction>(const const PaybackVictimLeftGameAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGameActions.h:3085
	typedef GameAction<E_ACTION_PAYBACK_VICTIM_LEFT_GAME> PaybackVictimLeftGameAction;

}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::PaybackLostAction>(const const PaybackLostAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGameActions.h:3076
	typedef GameAction<E_ACTION_PAYBACK_LOST> PaybackLostAction;

}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::AllEventsDiscoveredAction>(const const AllEventsDiscoveredAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::AllEventsDiscoveredOfTypeAction>(const const AllEventsDiscoveredOfTypeAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::WaitForStreamingAction>(const const WaitForStreamingAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::UnpauseSimulationAction>(const const UnpauseSimulationAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::SetLoadingStateAction>(const const SetLoadingStateAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::PauseSimulationAction>(const const PauseSimulationAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::PauseOnlineAction>(const const PauseOnlineAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::ShowSatNavAction>(const const ShowSatNavAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::GameTrainingPauseAction>(const const GameTrainingPauseAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::PreparedForInviteAction>(const const PreparedForInviteAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RequestRouteInfoAction>(const const RequestRouteInfoAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::SetLandmarkRacesAction>(const const SetLandmarkRacesAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::SetUpAllDriveThrusAction>(const const SetUpAllDriveThrusAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::FinishedModeResultsAction>(const const FinishedModeResultsAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::PlayerHitRivalAction>(const const PlayerHitRivalAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RivalHitPlayerAction>(const const RivalHitPlayerAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::ShowHudMessageAction>(const const ShowHudMessageAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RivalryOverviewAction>(const const RivalryOverviewAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::ShowtimeUpdateAction>(const const ShowtimeUpdateAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::ImpactTimeStartAction>(const const ImpactTimeStartAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::SendCarStatsAction>(const const SendCarStatsAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::GuiUpdatePlayerCarIDAction>(const const GuiUpdatePlayerCarIDAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::SetPlayerOpponentsAction>(const const SetPlayerOpponentsAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::ToggleShowtimeBehaviourAction>(const const ToggleShowtimeBehaviourAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::VehicleHitAction>(const const VehicleHitAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::TrafficTypeRequestAction>(const const TrafficTypeRequestAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageJumpFailedAction>(const const HUDMessageJumpFailedAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::CaughtFeverAction>(const const CaughtFeverAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::TelemetryAction>(const const TelemetryAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::CarSelectionRequestStreamingAction>(const const CarSelectionRequestStreamingAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::CarSelectionChangedAction>(const const CarSelectionChangedAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::CarSelectReadyAction>(const const CarSelectReadyAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::CarSelectModificationScreen>(const const CarSelectModificationScreen &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::CarSelectTransitionInAction>(const const CarSelectTransitionInAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::AbortMugshotCaptureAction>(const const AbortMugshotCaptureAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::PaybackMugshotAction>(const const PaybackMugshotAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::ImageGalleryImageInfoAction>(const const ImageGalleryImageInfoAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::LoadImageFilesAction>(const const LoadImageFilesAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::SendJunctionPlayerIsAtAction>(const const SendJunctionPlayerIsAtAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::SendPlayerMedalAction>(const const SendPlayerMedalAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::AllRivalsShutDownAction>(const const AllRivalsShutDownAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::KillzoneAction>(const const KillzoneAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::TriggerAction>(const const TriggerAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::SoundTriggerAction>(const const SoundTriggerAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::SetTrafficScaleBasedOnRankAction>(const const SetTrafficScaleBasedOnRankAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::CarSelectionChangedDropInAction>(const const CarSelectionChangedDropInAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::CarUnlockEndAction>(const const CarUnlockEndAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::NewCarUnlockedAction>(const const NewCarUnlockedAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::CarUnlockAction>(const const CarUnlockAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::CarSelectionDropInCompleteAction>(const const CarSelectionDropInCompleteAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::LoadProfileAction>(const const LoadProfileAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::CarSelectOnlineTimeLeftAction>(const const CarSelectOnlineTimeLeftAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::CarSelectOnlineCarIsShowable>(const const CarSelectOnlineCarIsShowable &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::JunkYardDriveThruAction>(const const JunkYardDriveThruAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::AllowBoostEarningAction>(const const AllowBoostEarningAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::StopBoostingAction>(const const StopBoostingAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::ClosedDriveThruAction>(const const ClosedDriveThruAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::GasStationDriveThruAction>(const const GasStationDriveThruAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::BodyShopDriveThruAction>(const const BodyShopDriveThruAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::PaintShopDriveThruAction>(const const PaintShopDriveThruAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::StopDriveThruPresentationAction>(const const StopDriveThruPresentationAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::DriveThruDiscoveredAction>(const const DriveThruDiscoveredAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::AllDriveThrusDiscoveredAction>(const const AllDriveThrusDiscoveredAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageCantPaintAction>(const const HUDMessageCantPaintAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::HUDMessageMustFixCarAction>(const const HUDMessageMustFixCarAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::CloseDriveThruAction>(const const CloseDriveThruAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::CarSelectExitAction>(const const CarSelectExitAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::CarSelectAbortAction>(const const CarSelectAbortAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::ResetCrashingAction>(const const ResetCrashingAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::PausedInCarSelectAction>(const const PausedInCarSelectAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGameActions.h:2720
	typedef GameAction<E_ACTION_CAR_SELECT_PAUSED_IN_CAR_SELECT> PausedInCarSelectAction;

}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::JunkYardDriveThruOnGameStartAction>(const const JunkYardDriveThruOnGameStartAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::PlayerResetOnTrackAction>(const const PlayerResetOnTrackAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::PlayerCarColourResponseAction>(const const PlayerCarColourResponseAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::HitOverheadSignAction>(const const HitOverheadSignAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::SetupNetworkCarAction>(const const SetupNetworkCarAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::StopModeSplashAction>(const const StopModeSplashAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGameActions.h:1220
	typedef GameAction<E_ACTION_STOP_MODE_SPLASH> StopModeSplashAction;

}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::CompletedStuntAction>(const const CompletedStuntAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::InProgressStuntAction>(const const InProgressStuntAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::StartGameThroughPlayerJoinAction>(const const StartGameThroughPlayerJoinAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGameActions.h:4313
	typedef GameAction<E_ACTION_START_GAME_THROUGH_PLAYER_JOIN> StartGameThroughPlayerJoinAction;

}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::OnlinePlayerAddedAction>(const const OnlinePlayerAddedAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::OnlinePlayerRemovedAction>(const const OnlinePlayerRemovedAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::PromptDoInviteAction>(const const PromptDoInviteAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::UpdatePrepareForInviteAction>(const const UpdatePrepareForInviteAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::PerformInviteAction>(const const PerformInviteAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::InviteCompleteAction>(const const InviteCompleteAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::TrafficCheckingAction>(const const TrafficCheckingAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::CrashComboAction>(const const CrashComboAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::NearMissAction>(const const NearMissAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::DriftingAction>(const const DriftingAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::SpinningAction>(const const SpinningAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::InAirAction>(const const InAirAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::OncomingAction>(const const OncomingAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::TailgatingAction>(const const TailgatingAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::EventStateResponseAction>(const const EventStateResponseAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::GameStatsResponseAction>(const const GameStatsResponseAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RankInfoResponseAction>(const const RankInfoResponseAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::PlayerInfoResponseAction>(const const PlayerInfoResponseAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::UnlockedLiveryResponseAction>(const const UnlockedLiveryResponseAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::CarSelectionResponseAction>(const const CarSelectionResponseAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::LandmarkInfoResponseAction>(const const LandmarkInfoResponseAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::WorldRegionChangeAction>(const const WorldRegionChangeAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::UpdateGuiRouteAction>(const const UpdateGuiRouteAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RegionFromPositionResponseAction>(const const RegionFromPositionResponseAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::SetSixaxisSteeringAction>(const const SetSixaxisSteeringAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::NotifyDirectorLocalPlayerDisconnectedAction>(const const NotifyDirectorLocalPlayerDisconnectedAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::AwardSequenceStartAction>(const const AwardSequenceStartAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::AwardSequenceEndAction>(const const AwardSequenceEndAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::TriggerCrashBreakerAction>(const const TriggerCrashBreakerAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::CancelCrashBreakerAction>(const const CancelCrashBreakerAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::VehicleLeaptAction>(const const VehicleLeaptAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::EnterNewRoadAction>(const const EnterNewRoadAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::JustBouncedAction>(const const JustBouncedAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::JustAppliedExtraSpinAction>(const const JustAppliedExtraSpinAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::PowerParkResultAction>(const const BrnGameState::GameStateModuleIO::PowerParkResultAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::AftertouchAction>(const const AftertouchAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RivalryOneInDepthAction>(const const RivalryOneInDepthAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::OnlineNetworkPlayerCollectableAction>(const const OnlineNetworkPlayerCollectableAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::ResetRaceCarCrashingAction>(const const ResetRaceCarCrashingAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::TrafficCheckingChainAction>(const const TrafficCheckingChainAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RoadRulesBatchQueryAction>(const const RoadRulesBatchQueryAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::HUDMessagePlayerCanSkipCrashAction>(const const HUDMessagePlayerCanSkipCrashAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::PlayerCrashEndingSoonAction>(const const PlayerCrashEndingSoonAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::PropSmashReportAction>(const const PropSmashReportAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::PlayerInvulnerableAction>(const const PlayerInvulnerableAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::OnPlayerTakedownAction>(const const OnPlayerTakedownAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::ShutdownFinishedAction>(const const ShutdownFinishedAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::WrongCarForChallengeAction>(const const WrongCarForChallengeAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::ShowtimeIntro>(const const ShowtimeIntro &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::ProgressionProfileDataAction>(const const ProgressionProfileDataAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameActions.h:92
		using BrnNetwork::BrnNetworkModuleIO;

		// BrnGameActions.h:95
		enum EGameActionType {
			E_ACTION_RESET_PLAYER_CAR = 0,
			E_ACTION_GUI_UPDATE_PLAYER_CAR_ID = 1,
			E_ACTION_GUI_CAR_UNLOCK = 2,
			E_ACTION_RESET_PLAYER_CAR_ON_TRACK = 3,
			E_ACTION_SET_PLAYER_OPPONENTS = 4,
			E_ACTION_SETUP_NETWORK_CAR = 5,
			E_ACTION_SET_TAKEDOWN_CAMERA_STATE = 6,
			E_ACTION_SET_PLAYER_CAR_DRIVER = 7,
			E_ACTION_FORCE_PLAYER_CAR_DRIVER = 8,
			E_ACTION_RESET_CRASHING = 9,
			E_ACTION_RESET_RACE_CAR_CRASHING = 10,
			E_ACTION_REMOTE_PLAYER_DISCONNECTED = 11,
			E_ACTION_NOTIFY_DIRECTOR_LOCAL_PLAYER_DISCONNECTED = 12,
			E_ACTION_EMPTY_TRAFFIC_POOL = 13,
			E_ACTION_ON_PLAYER_TAKEDOWN = 14,
			E_ACTION_COMPLETED_STUNT = 15,
			E_ACTION_INPROGRESS_STUNT = 16,
			E_ACTION_PLAYER_CRASH_ENDING_SOON = 17,
			E_ACTION_CHECK_FOR_LOADING_SCREEN = 18,
			E_ACTION_PREPARE_FOR_MODE = 19,
			E_ACTION_BROADCAST_MODE_FINISH_LINES = 20,
			E_ACTION_STOP_MODE_OFFLINE = 21,
			E_ACTION_FINISH_MODE_ONLINE = 22,
			E_ACTION_FINISH_MODE_FINAL_ONLINE = 23,
			E_ACTION_SET_TRAFFIC_SCALE_BASED_ON_RANK = 24,
			E_ACTION_START_MODE_INTRO = 25,
			E_ACTION_STOP_MODE_INTRO = 26,
			E_ACTION_MARKED_MAN_LOADED = 27,
			E_ACTION_STOP_MODE_SPLASH = 28,
			E_ACTION_STOP_MODE_COUNTDOWN = 29,
			E_ACTION_START_PLAYING_MODE = 30,
			E_ACTION_FINISHED_MODE = 31,
			E_ACTION_SHOW_MODE_RESULTS = 32,
			E_ACTION_FINISHED_MODE_RESULTS = 33,
			E_ACTION_STOP_MODE = 34,
			E_ACTION_QUIT_MODE_OFFLINE = 35,
			E_ACTION_QUIT_MODE_ONLINE = 36,
			E_ACTION_IMPACT_TIME_START = 37,
			E_ACTION_IMPACT_TIME_END = 38,
			E_ACTION_SET_IN_MODE_START_REGION = 39,
			E_ACTION_SET_UP_ALL_DRIVE_THRUS = 40,
			E_ACTION_CLOSE_DRIVE_THRU = 41,
			E_ACTION_SET_COUNTDOWN = 42,
			E_ACTION_SHOW_HUD_MESSAGE = 43,
			E_ACTION_SHOW_POPUP = 44,
			E_ACTION_REQUEST_ROUTE_INFO = 45,
			E_ACTION_SET_LANDMARK_RACES = 46,
			E_ACTION_DAMAGE_CRITICAL = 47,
			E_ACTION_PLAYER_HIT_RIVAL = 48,
			E_ACTION_RIVAL_HIT_PLAYER = 49,
			E_ACTION_REQUEST_AUTOSAVE = 50,
			E_ACTION_ON_JUMP_START = 51,
			E_ACTION_SHOW_JUMP_NAME = 52,
			E_ACTION_ON_STUNT_ELEMENT_COMPLETE = 53,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_FOR_COUNTY = 54,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_BY_TYPE = 55,
			E_ACTION_STUNT_ELEMENT_BOOST = 56,
			E_ACTION_NEW_CAR_UNLOCKED = 57,
			E_ACTION_CAR_UNLOCK_END = 58,
			E_ACTION_CAR_SELECTION_CHANGED = 59,
			E_ACTION_CAR_SELECTION_CHANGED_DROPIN = 60,
			E_ACTION_CAR_SELECTION_DROPIN_COMPLETE = 61,
			E_ACTION_CAR_SELECTION_CHANGED_ONLINE = 62,
			E_ACTION_SWITCH_CAR_CORONAS_ON_OFF = 63,
			E_ACTION_CAR_SELECTION_REQUEST_STREAMING = 64,
			E_ACTION_ALLOW_BOOST_EARNING = 65,
			E_ACTION_STOP_BOOSTING = 66,
			E_ACTION_CAR_SELECT_START_GUI_ON_GAME_START = 67,
			E_ACTION_CAR_SELECT_TRANSITION_IN = 68,
			E_ACTION_CAR_SELECT_WAITING_FOR_AUDIO = 69,
			E_ACTION_CAR_SELECT_READY = 70,
			E_ACTION_CAR_SELECT_MODIFICATION_SCREEN = 71,
			E_ACTION_CAR_SELECT_EXIT = 72,
			E_ACTION_CAR_SELECT_ABORT = 73,
			E_ACTION_CAR_SELECT_CHANGE_COLOUR = 74,
			E_ACTION_CAR_SELECT_PAUSED_IN_CAR_SELECT = 75,
			E_ACTION_PLAYER_CAR_COLOUR_RESPONSE = 76,
			E_ACTION_CAR_SELECT_ONLINE_TIME_LEFT = 77,
			E_ACTION_CAR_SELECT_ONLINE_END = 78,
			E_ACTION_CAR_SELECT_ONLINE_SELECT_CAR = 79,
			E_ACTION_CAR_SELECT_ONLINE_CAR_IS_SHOWABLE = 80,
			E_ACTION_PAUSE_SIMULATION = 81,
			E_ACTION_UNPAUSE_SIMULATION = 82,
			E_ACTION_PAUSE_ONLINE = 83,
			E_ACTION_UNPAUSE_ONLINE = 84,
			E_ACTION_PROMPT_START_OFFLINE_GAME_MODE = 85,
			E_ACTION_PROMPT_DO_INVITE = 86,
			E_ACTION_START_PREPARE_FOR_INVITE = 87,
			E_ACTION_UPDATE_PREPARE_FOR_INVITE = 88,
			E_ACTION_PREPARED_FOR_INVITE = 89,
			E_ACTION_PERFORM_INVITE = 90,
			E_ACTION_INVITE_COMPLETE = 91,
			E_ACTION_DRIVE_THRU_BODY_SHOP = 92,
			E_ACTION_DRIVE_THRU_PAINT_SHOP = 93,
			E_ACTION_DRIVE_THRU_JUNK_YARD = 94,
			E_ACTION_DRIVE_THRU_GAS_STATION = 95,
			E_ACTION_DRIVE_THRU_CLOSED = 96,
			E_ACTION_DRIVE_THRU_STOP_PRESENTATION = 97,
			E_ACTION_PLAYER_REACHED_ROAD_RAGE_TARGET = 98,
			E_ACTION_DRIVE_THRU_DISCOVERED = 99,
			E_ACTION_ALL_DRIVE_THRUS_DISCOVERED = 100,
			E_ACTION_DRIVE_THRU_JUNK_YARD_ON_GAME_START = 101,
			E_ACTION_ON_TRAFFIC_CHECKING = 102,
			E_ACTION_ON_TRAFFIC_CHECKING_CHAIN = 103,
			E_ACTION_TRIGGER = 104,
			E_ACTION_KILLZONE = 105,
			E_ACTION_PLAYER_INVULNERABLE = 106,
			E_ACTION_WORLD_REGION_CHANGE = 107,
			E_ACTION_RACE_CAR_REACHED_CHECKPOINT = 108,
			E_ACTION_RACE_CAR_REACHED_FINISH = 109,
			E_ACTION_PLAYER_REACHED_PENULTIMATE_CHECKPOINT = 110,
			E_ACTION_TRAFFIC_TYPE_REQUEST = 111,
			E_ACTION_TRACK_PLAYER_TO_LOCATION = 112,
			E_ACTION_SET_WAYPOINT_DISTANCES_TO_FINISH = 113,
			E_ACTION_PLAYER_RESET_ON_TRACK = 114,
			E_ACTION_SHUTDOWN = 115,
			E_ACTION_SHUTDOWN_FINISHED = 116,
			E_ACTION_AWARD_SEQUENCE_START = 117,
			E_ACTION_AWARD_SEQUENCE_END = 118,
			E_ACTION_CRASH_COMBO = 119,
			E_ACTION_SET_SIXAXIS_STEERING = 120,
			E_ACTION_SWITCH_CAR_COLOUR = 121,
			E_ACTION_WORLD_STUNT_PERFORMED = 122,
			E_ACTION_OVERHEAD_SIGN_HIT = 123,
			E_ACTION_ALLOW_CAR_TO_JOIN_ROAD_RAGE = 124,
			E_ACTION_HIDE_CAR_IN_ROAD_RAGE = 125,
			E_ACTION_UPDATE_ROAD_RAGE_MADNESS = 126,
			E_ACTION_TRIGGER_CRASH_BREAKER = 127,
			E_ACTION_CANCEL_CRASH_BREAKER = 128,
			E_ACTION_ENTER_SHOWTIME_BONUS_REGION = 129,
			E_ACTION_TOGGLE_SHOWTIME_BEHAVIOUR = 130,
			E_ACTION_VEHICLE_LEAPT = 131,
			E_ACTION_VEHICLE_HIT = 132,
			E_ACTION_ENTER_NEW_ROAD = 133,
			E_ACTION_SHOWTIME_UPDATE = 134,
			E_ACTION_SHOWTIME_MODE_SWITCH = 135,
			E_ACTION_JUST_BOUNCED = 136,
			E_ACTION_JUST_APPLIED_EXTRA_SPIN = 137,
			E_ACTION_SHOWTIME_INTRO_START = 138,
			E_ACTION_POWER_PARK_RESULT = 139,
			E_ACTION_GAME_TRAINING = 140,
			E_ACTION_GAME_TRAINING_REQUEST = 141,
			E_ACTION_GAME_TRAINING_PAUSE = 142,
			E_ACTION_GAME_TRAINING_UNPAUSE = 143,
			E_ACTION_MODE_TIME_TIMEOUT = 144,
			E_ACTION_FREEBURN_CHALLENGE = 145,
			E_ACTION_FREEBURN_CHALLENGE_END_NOT_ACTIVE = 146,
			E_ACTION_FREEBURN_CHALLENGE_UPDATE = 147,
			E_ACTION_FREEBURN_CHALLENGE_COMPLETION_STATUS = 148,
			E_ACTION_FREEBURN_CHALLENGE_EVERY_PLAYER_COMPLETION_STATUS = 149,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE = 150,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS = 151,
			E_ACTION_FREEBURN_CHALLENGE_SHOW_SELECTOR = 152,
			E_ACTION_ACTIVE_FREEBURN_CHALLENGE = 153,
			E_ACTION_BLUE_TEAM_IS_ESCAPING = 154,
			E_ACTION_BLUE_TEAM_IS_BEHIND_YOU = 155,
			E_ACTION_LEADER_REACHED_BOUNDARY = 156,
			E_ACTION_PLAYER_ELIMINATED = 157,
			E_ACTION_TRAITOROUS_TAKEDOWN = 158,
			E_ACTION_SWITCH_BURNING_HOME_RUN_RUNNER = 159,
			E_ACTION_BURNOUT_SKILLZ = 160,
			E_ACTION_ROAD_RULES_SKILLZ = 161,
			E_ACTION_SET_BOOST = 162,
			E_ACTION_NEAR_MISS = 163,
			E_ACTION_DRIFTING = 164,
			E_ACTION_SPINNING = 165,
			E_ACTION_IN_AIR = 166,
			E_ACTION_ONCOMING = 167,
			E_ACTION_TAILGATING = 168,
			E_ACTION_DISTANCE_DRIVEN = 169,
			E_ACTION_AFTERTOUCH = 170,
			E_ACTION_EVENT_STATE_RESPONSE = 171,
			E_ACTION_GAME_STATS_RESPONSE = 172,
			E_ACTION_RANK_INFO_RESPONSE = 173,
			E_ACTION_PLAYER_INFO_RESPONSE = 174,
			E_ACTION_UNLOCKED_LIVERY_RESPONSE = 175,
			E_ACTION_CAR_SELECTION_RESPONSE = 176,
			E_ACTION_LANDMARK_VARIABLE_INFO_RESPONSE = 177,
			E_ACTION_REGION_FROM_POSITION_RESPONSE = 178,
			E_ACTION_UPDATE_GUI_ROUTE = 179,
			E_ACTION_ALL_RIVALRY_DATA_RESPONSE = 180,
			E_ACTION_ONE_RIVALRY_DATA_RESPONSE = 181,
			E_ACTION_SHOW_SATNAV = 182,
			E_ACTION_SET_LOADING_STATE = 183,
			E_ACTION_WAIT_FOR_STREAMING = 184,
			E_ACTION_PROGRESSION_PROFILE_DATA = 185,
			E_ACTION_LOAD_PROFILE = 186,
			E_ACTION_REMOVE_ALL_RIVALS = 187,
			E_ACTION_ADD_RIVAL = 188,
			E_ACTION_RIVAL_STATE_CHANGED = 189,
			E_ACTION_UPDATE_CAR_STATS = 190,
			E_ACTION_PROP_SMASH_PROGRESSION = 191,
			E_ACTION_UPDATE_PLAYER_MEDALS = 192,
			E_ACTION_EVENT_AT_JUNCTION_AVAILABLE = 193,
			E_ACTION_ALL_EVENTS_DISCOVERED = 194,
			E_ACTION_ALL_EVENTS_OF_TYPE_DISCOVERED = 195,
			E_ACTION_TROPHY_UNLOCK = 196,
			E_ACTION_ROAD_RAGE_PLAYER_DAMAGE = 197,
			E_ACTION_ALL_EVENT_TYPE_WON = 198,
			E_ACTION_RIVAL_UNLOCKED_INTO_THE_WORLD_ACTION = 199,
			E_ACTION_ONE_HUNDRED_PERCENT_COMPLETE = 200,
			E_ACTION_ACHIEVEMENTS_EARNED = 201,
			E_ACTION_ALL_RIVALS_SHUTDOWN = 202,
			E_ACTION_PAYBACK_LOST = 203,
			E_ACTION_PAYBACK_VICTIM_LEFT_GAME = 204,
			E_ACTION_PAYBACK_MUGSHOT = 205,
			E_ACTION_ABORT_MUGSHOT_CAPTURE = 206,
			E_ACTION_PAYBACK_ACTIVATED = 207,
			E_ACTION_PAYBACK_OVER = 208,
			E_ACTION_PAYBACK_SUCCEEDED = 209,
			E_ACTION_SOUND_TRIGGER = 210,
			E_ACTION_ONLINE_PLAYER_ADDED = 211,
			E_ACTION_ONLINE_PLAYER_REMOVED = 212,
			E_ACTION_OFFLINE_ADD_CAR_TO_MODE = 213,
			E_ACTION_OFFLINE_REMOVE_CAR_FROM_MODE = 214,
			E_ACTION_CAR_ADDITION_PRESENTATION_START = 215,
			E_ACTION_CAR_ADDITION_PRESENTATION_END = 216,
			E_ACTION_LOCAL_PLAYER_DISCONNECTED = 217,
			E_ACTION_LOCAL_PLAYER_LEFT_GAME = 218,
			E_ACTION_UPDATE_RICH_PRESENCE = 219,
			E_ACTION_SEND_TELEMETRY = 220,
			E_ACTION_ONLINE_GAME_RESULT = 221,
			E_ACTION_ONLINE_ROUND_RESULT = 222,
			E_ACTION_ONLINE_LAUNCH_FREE_BURN_LOBBY = 223,
			E_ACTION_ROAD_RULES_CHALLENGE_SCORES = 224,
			E_ACTION_ROAD_RULES_PERSONAL_BEST = 225,
			E_ACTION_ROAD_RULES_OVERWRITE_SERVER_RECORD = 226,
			E_ACTION_START_GAME_THROUGH_PLAYER_JOIN = 227,
			E_ACTION_RESTART_TRAFFIC = 228,
			E_ACTION_NETWORK_COLLECTABLE = 229,
			E_ACTION_NETWORK_CAUGHT_FEVER = 230,
			E_ACTION_REQUEST_GAMERCARD = 231,
			E_ACTION_HUD_MESSAGE_TOOK_LEAD = 232,
			E_ACTION_HUD_MESSAGE_TOOK_LAST = 233,
			E_ACTION_HUD_MESSAGE_DIST_TO_FINISH = 234,
			E_ACTION_HUD_MESSAGE_LEADING = 235,
			E_ACTION_HUD_MESSAGE_NECK_AND_NECK = 236,
			E_ACTION_HUD_MESSAGE_X_FINISHES = 237,
			E_ACTION_HUD_MESSAGE_X_REACHES_CHECKPOINT = 238,
			E_ACTION_HUD_MESSAGE_PLAYER_REACHES_CHECKPOINT = 239,
			E_ACTION_HUD_MESSAGE_X_CRASHES = 240,
			E_ACTION_HUD_MESSAGE_WRONG_WAY = 241,
			E_ACTION_HUD_MESSAGE_STUNT_PERFORMED = 242,
			E_ACTION_HUD_MESSAGE_COMBO_PERFORMED = 243,
			E_ACTION_HUD_MESSAGE_STUNT_TIME_UP = 244,
			E_ACTION_HUD_MESSAGE_BHR_CHECKPOINT = 245,
			E_ACTION_HUD_MESSAGE_BHR_RUNNER_CRASHED = 246,
			E_ACTION_HUD_MESSAGE_ONLINE_TEAM_CHANGE = 247,
			E_ACTION_HUD_MESSAGE_ROAD_RAGE_TIME_EXTENSION = 248,
			E_ACTION_HUD_MESSAGE_RIVAL_FIRST_HIT = 249,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_RIVAL = 250,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_TARGET = 251,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_FLEEING = 252,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_WRECKED = 253,
			E_ACTION_HUD_MESSAGE_PLAYER_CAN_SKIP_CRASH = 254,
			E_ACTION_HUD_MESSAGE_TIME_UP = 255,
			E_ACTION_HUD_MESSAGE_CANT_PAINT = 256,
			E_ACTION_HUD_MESSAGE_MUST_FIX = 257,
			E_ACTION_HUD_MESSAGE_JUMP_FAILED = 258,
			E_ACTION_WRONG_CAR_FOR_CHALLENGE = 259,
			E_ACTION_ROAD_RULES_ENTER_ROAD = 260,
			E_ACTION_ROAD_RULES_LEAVE_ROAD = 261,
			E_ACTION_ROAD_RULES_BATCH_QUERY = 262,
			E_ACTION_UPCOMING_ROAD_CHANGE = 263,
			E_ACTION_ROAD_RULES_START_RULE = 264,
			E_ACTION_ROAD_RULES_END_RULE = 265,
			E_ACTION_ROAD_RULES_UPDATE = 266,
			E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE = 267,
			E_ACTION_ROAD_RULES_NEW_HIGH_SCORE = 268,
			E_ACTION_ROAD_RULES_ACTIVE_RULE_CHANGE = 269,
			E_ACTION_ROAD_RULES_TIME_WARNING = 270,
			E_ACTION_ROAD_RULES_ROAD_SCORE = 271,
			E_ACTION_ROAD_RULES_NEW_RULERS = 272,
			E_ACTION_ROAD_RULES_MODE_SWITCH = 273,
			E_ACTION_PLAYER_IN_SHORTCUT = 274,
			E_ACTION_IMAGE_GALLERY_RENDER_IMAGE = 275,
			E_ACTION_IMAGE_GALLERY_IMAGE_INFO = 276,
			E_ACTION_IMAGE_GALLERY_COUNT_ACTION = 277,
			E_ACTION_IMAGE_GALLERY_DATA_ACTION = 278,
			E_ACTION_IMAGE_GALLERY_LOAD_COMPLETE = 279,
			E_ACTION_SAVE_IMAGE_AND_AUTOSAVE = 280,
			E_ACTION_LOAD_IMAGES = 281,
			E_ACTION_DXT_DECODE_IMAGE = 282,
			E_ACTION_SOUND_BIND_PROPS = 283,
			E_ACTION_COUNT = 284,
		}

		// Declaration
		struct ResetPlayerCarAction {
			// BrnGameActions.h:558
			enum CarSelectType {
				E_CAR_SELECT_DONT_DROP = 0,
				E_CAR_SELECT_DROP_NORMAL = 1,
				E_CAR_SELECT_DROP_SHUTDOWN = 2,
			}

		}

		// Declaration
		struct PrepareForModeAction {
			// BrnGameActions.h:856
			enum EPrepareForModeStage {
				E_PFM_STAGE_ALL_IN_ONE = 0,
				E_PFM_STAGE_FIRST_OF_TWO = 1,
				E_PFM_STAGE_SECOND_OF_TWO = 2,
				E_PFM_STAGE_COUNT = 3,
			}

		}

		// Declaration
		struct SetUpAllDriveThrusAction {
			// BrnGameActions.h:1714
			struct DriveThruInfo {
				// BrnGameActions.h:1715
				float32_t mfXCoord;

				// BrnGameActions.h:1716
				float32_t mfZCoord;

				// BrnGameActions.h:1717
				CgsID mDriveThruId;

				// BrnGameActions.h:1718
				BrnTrigger::GenericRegion::Type meType;

			}

		}

		// Declaration
		struct RivalryOverviewAction {
			// BrnGameActions.h:2894
			enum ERivalryStage {
				E_RIVALRY_STAGE_UNKNOWN = 0,
				E_RIVALRY_STAGE_DRIVER = 1,
				E_RIVALRY_STAGE_RIVAL = 2,
				E_RIVALRY_STAGE_TARGET = 3,
				E_RIVALRY_STAGE_WRECKED = 4,
				E_RIVALRY_STAGE_INVALID = 5,
				E_RIVALRY_STAGE_COUNT = 6,
			}

		}

		// Declaration
		struct SoundTriggerAction {
			// BrnGameActions.h:3663
			enum eType {
				E_TYPE_INVALID = 0,
				E_TYPE_AT_ENTITY = 1,
				E_TYPE_AHEAD_OF_ENTITY = 2,
				E_TYPE_COUNT = 3,
			}

		}

		// Declaration
		struct NewCarUnlockedAction {
			// BrnGameActions.h:3770
			enum Type {
				E_TYPE_UNLOCK = 0,
				E_TYPE_GIFT = 1,
				E_TYPE_TROPHY = 2,
				E_TYPE_SHUTDOWN_RIVAL = 3,
			}

		}

		// Declaration
		struct UpcomingRoadChangeAction {
			// BrnGameActions.h:4829
			enum ESignState {
				E_SIGN_STATE_INVALID = -1,
				E_SIGN_STATE_GREEN = 0,
				E_SIGN_STATE_RED = 1,
				E_SIGN_STATE_FLASHING = 2,
				E_SIGN_STATE_COUNT = 3,
			}

		}

		// Declaration
		struct BurnoutRoadRulesSkillzAction {
			// BrnGameActions.h:5463
			enum EBurnoutSkillzUpdateType {
				E_BURNOUT_SKILLZ_UPDATE_TYPE_X_BEAT_YOUR = 0,
				E_BURNOUT_SKILLZ_UPDATE_TYPE_X_GOT = 1,
				E_BURNOUT_SKILLZ_UPDATE_TYPE_YOU_GOT = 2,
				E_BURNOUT_SKILLZ_UPDATE_TYPE_COUNT = 3,
			}

		}

		// BrnGameActions.h:462
		const int32_t KI_EVENT_MANAGER_DEFAULT_ACTION_QUEUE_LENGTH = 13312;

		// BrnGameActions.h:463
		const int32_t KI_EVENT_MANAGER_SMALL_ACTION_QUEUE_LENGTH = 256;

	}

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_UPDATE_RICH_PRESENCE> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4324
struct BrnGameState::GameStateModuleIO::UpdateRichPresence : public GameAction<E_ACTION_UPDATE_RICH_PRESENCE> {
	// BrnGameActions.h:4326
	char[100] macNewPresenceData;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_HUD_MESSAGE_RIVAL_IS_FLEEING> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4673
struct BrnGameState::GameStateModuleIO::HUDMessageRivalIsFleeingAction : public GameAction<E_ACTION_HUD_MESSAGE_RIVAL_IS_FLEEING> {
	// BrnGameActions.h:4675
	CgsID mRivalID;

	// BrnGameActions.h:4676
	CgsID mCarID;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_RESTART_TRAFFIC> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5264
struct BrnGameState::GameStateModuleIO::RestartTrafficAction : public GameAction<E_ACTION_RESTART_TRAFFIC> {
	// BrnGameActions.h:5266
	uint16_t[8] mau16ActveHulls;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_REQUEST_GAMERCARD> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:5717
struct BrnGameState::GameStateModuleIO::RequestGamerCardAction : public GameAction<E_ACTION_REQUEST_GAMERCARD> {
	// BrnGameActions.h:5719
	PlayerName mPlayerName;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_LOCAL_PLAYER_DISCONNECTED> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_LOCAL_PLAYER_LEFT_GAME> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_SOUND_BIND_PROPS> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::RestartTrafficAction>(const const RestartTrafficAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::LocalPlayerDisconnectedAction>(const const LocalPlayerDisconnectedAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGameActions.h:4337
	typedef GameAction<E_ACTION_LOCAL_PLAYER_DISCONNECTED> LocalPlayerDisconnectedAction;

}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::LocalPlayerLeftGameAction>(const const LocalPlayerLeftGameAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGameActions.h:4347
	typedef GameAction<E_ACTION_LOCAL_PLAYER_LEFT_GAME> LocalPlayerLeftGameAction;

}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::SoundBindPropsAction>(const const SoundBindPropsAction &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGameActions.h:5405
	typedef GameAction<E_ACTION_SOUND_BIND_PROPS> SoundBindPropsAction;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameActions.h:92
		using BrnNetwork::BrnNetworkModuleIO;

		// BrnGameActions.h:95
		enum EGameActionType {
			E_ACTION_RESET_PLAYER_CAR = 0,
			E_ACTION_GUI_UPDATE_PLAYER_CAR_ID = 1,
			E_ACTION_GUI_CAR_UNLOCK = 2,
			E_ACTION_RESET_PLAYER_CAR_ON_TRACK = 3,
			E_ACTION_SET_PLAYER_OPPONENTS = 4,
			E_ACTION_SETUP_NETWORK_CAR = 5,
			E_ACTION_SET_TAKEDOWN_CAMERA_STATE = 6,
			E_ACTION_SET_PLAYER_CAR_DRIVER = 7,
			E_ACTION_FORCE_PLAYER_CAR_DRIVER = 8,
			E_ACTION_RESET_CRASHING = 9,
			E_ACTION_RESET_RACE_CAR_CRASHING = 10,
			E_ACTION_REMOTE_PLAYER_DISCONNECTED = 11,
			E_ACTION_NOTIFY_DIRECTOR_LOCAL_PLAYER_DISCONNECTED = 12,
			E_ACTION_EMPTY_TRAFFIC_POOL = 13,
			E_ACTION_ON_PLAYER_TAKEDOWN = 14,
			E_ACTION_COMPLETED_STUNT = 15,
			E_ACTION_INPROGRESS_STUNT = 16,
			E_ACTION_PLAYER_CRASH_ENDING_SOON = 17,
			E_ACTION_CHECK_FOR_LOADING_SCREEN = 18,
			E_ACTION_PREPARE_FOR_MODE = 19,
			E_ACTION_BROADCAST_MODE_FINISH_LINES = 20,
			E_ACTION_STOP_MODE_OFFLINE = 21,
			E_ACTION_FINISH_MODE_ONLINE = 22,
			E_ACTION_FINISH_MODE_FINAL_ONLINE = 23,
			E_ACTION_SET_TRAFFIC_SCALE_BASED_ON_RANK = 24,
			E_ACTION_START_MODE_INTRO = 25,
			E_ACTION_STOP_MODE_INTRO = 26,
			E_ACTION_MARKED_MAN_LOADED = 27,
			E_ACTION_STOP_MODE_SPLASH = 28,
			E_ACTION_STOP_MODE_COUNTDOWN = 29,
			E_ACTION_START_PLAYING_MODE = 30,
			E_ACTION_FINISHED_MODE = 31,
			E_ACTION_SHOW_MODE_RESULTS = 32,
			E_ACTION_FINISHED_MODE_RESULTS = 33,
			E_ACTION_STOP_MODE = 34,
			E_ACTION_QUIT_MODE_OFFLINE = 35,
			E_ACTION_QUIT_MODE_ONLINE = 36,
			E_ACTION_IMPACT_TIME_START = 37,
			E_ACTION_IMPACT_TIME_END = 38,
			E_ACTION_SET_IN_MODE_START_REGION = 39,
			E_ACTION_SET_UP_ALL_DRIVE_THRUS = 40,
			E_ACTION_CLOSE_DRIVE_THRU = 41,
			E_ACTION_SET_COUNTDOWN = 42,
			E_ACTION_SHOW_HUD_MESSAGE = 43,
			E_ACTION_SHOW_POPUP = 44,
			E_ACTION_REQUEST_ROUTE_INFO = 45,
			E_ACTION_SET_LANDMARK_RACES = 46,
			E_ACTION_DAMAGE_CRITICAL = 47,
			E_ACTION_PLAYER_HIT_RIVAL = 48,
			E_ACTION_RIVAL_HIT_PLAYER = 49,
			E_ACTION_REQUEST_AUTOSAVE = 50,
			E_ACTION_ON_JUMP_START = 51,
			E_ACTION_SHOW_JUMP_NAME = 52,
			E_ACTION_ON_STUNT_ELEMENT_COMPLETE = 53,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_FOR_COUNTY = 54,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_BY_TYPE = 55,
			E_ACTION_STUNT_ELEMENT_BOOST = 56,
			E_ACTION_NEW_CAR_UNLOCKED = 57,
			E_ACTION_CAR_UNLOCK_END = 58,
			E_ACTION_CAR_SELECTION_CHANGED = 59,
			E_ACTION_CAR_SELECTION_CHANGED_DROPIN = 60,
			E_ACTION_CAR_SELECTION_DROPIN_COMPLETE = 61,
			E_ACTION_CAR_SELECTION_CHANGED_ONLINE = 62,
			E_ACTION_SWITCH_CAR_CORONAS_ON_OFF = 63,
			E_ACTION_CAR_SELECTION_REQUEST_STREAMING = 64,
			E_ACTION_ALLOW_BOOST_EARNING = 65,
			E_ACTION_STOP_BOOSTING = 66,
			E_ACTION_CAR_SELECT_START_GUI_ON_GAME_START = 67,
			E_ACTION_CAR_SELECT_TRANSITION_IN = 68,
			E_ACTION_CAR_SELECT_WAITING_FOR_AUDIO = 69,
			E_ACTION_CAR_SELECT_READY = 70,
			E_ACTION_CAR_SELECT_MODIFICATION_SCREEN = 71,
			E_ACTION_CAR_SELECT_EXIT = 72,
			E_ACTION_CAR_SELECT_ABORT = 73,
			E_ACTION_CAR_SELECT_CHANGE_COLOUR = 74,
			E_ACTION_CAR_SELECT_PAUSED_IN_CAR_SELECT = 75,
			E_ACTION_PLAYER_CAR_COLOUR_RESPONSE = 76,
			E_ACTION_CAR_SELECT_ONLINE_TIME_LEFT = 77,
			E_ACTION_CAR_SELECT_ONLINE_END = 78,
			E_ACTION_CAR_SELECT_ONLINE_SELECT_CAR = 79,
			E_ACTION_CAR_SELECT_ONLINE_CAR_IS_SHOWABLE = 80,
			E_ACTION_PAUSE_SIMULATION = 81,
			E_ACTION_UNPAUSE_SIMULATION = 82,
			E_ACTION_PAUSE_ONLINE = 83,
			E_ACTION_UNPAUSE_ONLINE = 84,
			E_ACTION_PROMPT_START_OFFLINE_GAME_MODE = 85,
			E_ACTION_PROMPT_DO_INVITE = 86,
			E_ACTION_START_PREPARE_FOR_INVITE = 87,
			E_ACTION_UPDATE_PREPARE_FOR_INVITE = 88,
			E_ACTION_PREPARED_FOR_INVITE = 89,
			E_ACTION_PERFORM_INVITE = 90,
			E_ACTION_INVITE_COMPLETE = 91,
			E_ACTION_DRIVE_THRU_BODY_SHOP = 92,
			E_ACTION_DRIVE_THRU_PAINT_SHOP = 93,
			E_ACTION_DRIVE_THRU_JUNK_YARD = 94,
			E_ACTION_DRIVE_THRU_GAS_STATION = 95,
			E_ACTION_DRIVE_THRU_CLOSED = 96,
			E_ACTION_DRIVE_THRU_STOP_PRESENTATION = 97,
			E_ACTION_PLAYER_REACHED_ROAD_RAGE_TARGET = 98,
			E_ACTION_DRIVE_THRU_DISCOVERED = 99,
			E_ACTION_ALL_DRIVE_THRUS_DISCOVERED = 100,
			E_ACTION_DRIVE_THRU_JUNK_YARD_ON_GAME_START = 101,
			E_ACTION_ON_TRAFFIC_CHECKING = 102,
			E_ACTION_ON_TRAFFIC_CHECKING_CHAIN = 103,
			E_ACTION_TRIGGER = 104,
			E_ACTION_KILLZONE = 105,
			E_ACTION_PLAYER_INVULNERABLE = 106,
			E_ACTION_WORLD_REGION_CHANGE = 107,
			E_ACTION_RACE_CAR_REACHED_CHECKPOINT = 108,
			E_ACTION_RACE_CAR_REACHED_FINISH = 109,
			E_ACTION_PLAYER_REACHED_PENULTIMATE_CHECKPOINT = 110,
			E_ACTION_TRAFFIC_TYPE_REQUEST = 111,
			E_ACTION_TRACK_PLAYER_TO_LOCATION = 112,
			E_ACTION_SET_WAYPOINT_DISTANCES_TO_FINISH = 113,
			E_ACTION_PLAYER_RESET_ON_TRACK = 114,
			E_ACTION_SHUTDOWN = 115,
			E_ACTION_SHUTDOWN_FINISHED = 116,
			E_ACTION_AWARD_SEQUENCE_START = 117,
			E_ACTION_AWARD_SEQUENCE_END = 118,
			E_ACTION_CRASH_COMBO = 119,
			E_ACTION_SET_SIXAXIS_STEERING = 120,
			E_ACTION_SWITCH_CAR_COLOUR = 121,
			E_ACTION_WORLD_STUNT_PERFORMED = 122,
			E_ACTION_OVERHEAD_SIGN_HIT = 123,
			E_ACTION_ALLOW_CAR_TO_JOIN_ROAD_RAGE = 124,
			E_ACTION_HIDE_CAR_IN_ROAD_RAGE = 125,
			E_ACTION_UPDATE_ROAD_RAGE_MADNESS = 126,
			E_ACTION_TRIGGER_CRASH_BREAKER = 127,
			E_ACTION_CANCEL_CRASH_BREAKER = 128,
			E_ACTION_ENTER_SHOWTIME_BONUS_REGION = 129,
			E_ACTION_TOGGLE_SHOWTIME_BEHAVIOUR = 130,
			E_ACTION_VEHICLE_LEAPT = 131,
			E_ACTION_VEHICLE_HIT = 132,
			E_ACTION_ENTER_NEW_ROAD = 133,
			E_ACTION_SHOWTIME_UPDATE = 134,
			E_ACTION_SHOWTIME_MODE_SWITCH = 135,
			E_ACTION_JUST_BOUNCED = 136,
			E_ACTION_JUST_APPLIED_EXTRA_SPIN = 137,
			E_ACTION_SHOWTIME_INTRO_START = 138,
			E_ACTION_POWER_PARK_RESULT = 139,
			E_ACTION_GAME_TRAINING = 140,
			E_ACTION_GAME_TRAINING_REQUEST = 141,
			E_ACTION_GAME_TRAINING_PAUSE = 142,
			E_ACTION_GAME_TRAINING_UNPAUSE = 143,
			E_ACTION_MODE_TIME_TIMEOUT = 144,
			E_ACTION_FREEBURN_CHALLENGE = 145,
			E_ACTION_FREEBURN_CHALLENGE_END_NOT_ACTIVE = 146,
			E_ACTION_FREEBURN_CHALLENGE_UPDATE = 147,
			E_ACTION_FREEBURN_CHALLENGE_COMPLETION_STATUS = 148,
			E_ACTION_FREEBURN_CHALLENGE_EVERY_PLAYER_COMPLETION_STATUS = 149,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE = 150,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS = 151,
			E_ACTION_FREEBURN_CHALLENGE_SHOW_SELECTOR = 152,
			E_ACTION_ACTIVE_FREEBURN_CHALLENGE = 153,
			E_ACTION_BLUE_TEAM_IS_ESCAPING = 154,
			E_ACTION_BLUE_TEAM_IS_BEHIND_YOU = 155,
			E_ACTION_LEADER_REACHED_BOUNDARY = 156,
			E_ACTION_PLAYER_ELIMINATED = 157,
			E_ACTION_TRAITOROUS_TAKEDOWN = 158,
			E_ACTION_SWITCH_BURNING_HOME_RUN_RUNNER = 159,
			E_ACTION_BURNOUT_SKILLZ = 160,
			E_ACTION_ROAD_RULES_SKILLZ = 161,
			E_ACTION_SET_BOOST = 162,
			E_ACTION_NEAR_MISS = 163,
			E_ACTION_DRIFTING = 164,
			E_ACTION_SPINNING = 165,
			E_ACTION_IN_AIR = 166,
			E_ACTION_ONCOMING = 167,
			E_ACTION_TAILGATING = 168,
			E_ACTION_DISTANCE_DRIVEN = 169,
			E_ACTION_AFTERTOUCH = 170,
			E_ACTION_EVENT_STATE_RESPONSE = 171,
			E_ACTION_GAME_STATS_RESPONSE = 172,
			E_ACTION_RANK_INFO_RESPONSE = 173,
			E_ACTION_PLAYER_INFO_RESPONSE = 174,
			E_ACTION_UNLOCKED_LIVERY_RESPONSE = 175,
			E_ACTION_CAR_SELECTION_RESPONSE = 176,
			E_ACTION_LANDMARK_VARIABLE_INFO_RESPONSE = 177,
			E_ACTION_REGION_FROM_POSITION_RESPONSE = 178,
			E_ACTION_UPDATE_GUI_ROUTE = 179,
			E_ACTION_ALL_RIVALRY_DATA_RESPONSE = 180,
			E_ACTION_ONE_RIVALRY_DATA_RESPONSE = 181,
			E_ACTION_SHOW_SATNAV = 182,
			E_ACTION_SET_LOADING_STATE = 183,
			E_ACTION_WAIT_FOR_STREAMING = 184,
			E_ACTION_PROGRESSION_PROFILE_DATA = 185,
			E_ACTION_LOAD_PROFILE = 186,
			E_ACTION_REMOVE_ALL_RIVALS = 187,
			E_ACTION_ADD_RIVAL = 188,
			E_ACTION_RIVAL_STATE_CHANGED = 189,
			E_ACTION_UPDATE_CAR_STATS = 190,
			E_ACTION_PROP_SMASH_PROGRESSION = 191,
			E_ACTION_UPDATE_PLAYER_MEDALS = 192,
			E_ACTION_EVENT_AT_JUNCTION_AVAILABLE = 193,
			E_ACTION_ALL_EVENTS_DISCOVERED = 194,
			E_ACTION_ALL_EVENTS_OF_TYPE_DISCOVERED = 195,
			E_ACTION_TROPHY_UNLOCK = 196,
			E_ACTION_ROAD_RAGE_PLAYER_DAMAGE = 197,
			E_ACTION_ALL_EVENT_TYPE_WON = 198,
			E_ACTION_RIVAL_UNLOCKED_INTO_THE_WORLD_ACTION = 199,
			E_ACTION_ONE_HUNDRED_PERCENT_COMPLETE = 200,
			E_ACTION_ACHIEVEMENTS_EARNED = 201,
			E_ACTION_ALL_RIVALS_SHUTDOWN = 202,
			E_ACTION_PAYBACK_LOST = 203,
			E_ACTION_PAYBACK_VICTIM_LEFT_GAME = 204,
			E_ACTION_PAYBACK_MUGSHOT = 205,
			E_ACTION_ABORT_MUGSHOT_CAPTURE = 206,
			E_ACTION_PAYBACK_ACTIVATED = 207,
			E_ACTION_PAYBACK_OVER = 208,
			E_ACTION_PAYBACK_SUCCEEDED = 209,
			E_ACTION_SOUND_TRIGGER = 210,
			E_ACTION_ONLINE_PLAYER_ADDED = 211,
			E_ACTION_ONLINE_PLAYER_REMOVED = 212,
			E_ACTION_OFFLINE_ADD_CAR_TO_MODE = 213,
			E_ACTION_OFFLINE_REMOVE_CAR_FROM_MODE = 214,
			E_ACTION_CAR_ADDITION_PRESENTATION_START = 215,
			E_ACTION_CAR_ADDITION_PRESENTATION_END = 216,
			E_ACTION_LOCAL_PLAYER_DISCONNECTED = 217,
			E_ACTION_LOCAL_PLAYER_LEFT_GAME = 218,
			E_ACTION_UPDATE_RICH_PRESENCE = 219,
			E_ACTION_SEND_TELEMETRY = 220,
			E_ACTION_ONLINE_GAME_RESULT = 221,
			E_ACTION_ONLINE_ROUND_RESULT = 222,
			E_ACTION_ONLINE_LAUNCH_FREE_BURN_LOBBY = 223,
			E_ACTION_ROAD_RULES_CHALLENGE_SCORES = 224,
			E_ACTION_ROAD_RULES_PERSONAL_BEST = 225,
			E_ACTION_ROAD_RULES_OVERWRITE_SERVER_RECORD = 226,
			E_ACTION_START_GAME_THROUGH_PLAYER_JOIN = 227,
			E_ACTION_RESTART_TRAFFIC = 228,
			E_ACTION_NETWORK_COLLECTABLE = 229,
			E_ACTION_NETWORK_CAUGHT_FEVER = 230,
			E_ACTION_REQUEST_GAMERCARD = 231,
			E_ACTION_HUD_MESSAGE_TOOK_LEAD = 232,
			E_ACTION_HUD_MESSAGE_TOOK_LAST = 233,
			E_ACTION_HUD_MESSAGE_DIST_TO_FINISH = 234,
			E_ACTION_HUD_MESSAGE_LEADING = 235,
			E_ACTION_HUD_MESSAGE_NECK_AND_NECK = 236,
			E_ACTION_HUD_MESSAGE_X_FINISHES = 237,
			E_ACTION_HUD_MESSAGE_X_REACHES_CHECKPOINT = 238,
			E_ACTION_HUD_MESSAGE_PLAYER_REACHES_CHECKPOINT = 239,
			E_ACTION_HUD_MESSAGE_X_CRASHES = 240,
			E_ACTION_HUD_MESSAGE_WRONG_WAY = 241,
			E_ACTION_HUD_MESSAGE_STUNT_PERFORMED = 242,
			E_ACTION_HUD_MESSAGE_COMBO_PERFORMED = 243,
			E_ACTION_HUD_MESSAGE_STUNT_TIME_UP = 244,
			E_ACTION_HUD_MESSAGE_BHR_CHECKPOINT = 245,
			E_ACTION_HUD_MESSAGE_BHR_RUNNER_CRASHED = 246,
			E_ACTION_HUD_MESSAGE_ONLINE_TEAM_CHANGE = 247,
			E_ACTION_HUD_MESSAGE_ROAD_RAGE_TIME_EXTENSION = 248,
			E_ACTION_HUD_MESSAGE_RIVAL_FIRST_HIT = 249,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_RIVAL = 250,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_TARGET = 251,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_FLEEING = 252,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_WRECKED = 253,
			E_ACTION_HUD_MESSAGE_PLAYER_CAN_SKIP_CRASH = 254,
			E_ACTION_HUD_MESSAGE_TIME_UP = 255,
			E_ACTION_HUD_MESSAGE_CANT_PAINT = 256,
			E_ACTION_HUD_MESSAGE_MUST_FIX = 257,
			E_ACTION_HUD_MESSAGE_JUMP_FAILED = 258,
			E_ACTION_WRONG_CAR_FOR_CHALLENGE = 259,
			E_ACTION_ROAD_RULES_ENTER_ROAD = 260,
			E_ACTION_ROAD_RULES_LEAVE_ROAD = 261,
			E_ACTION_ROAD_RULES_BATCH_QUERY = 262,
			E_ACTION_UPCOMING_ROAD_CHANGE = 263,
			E_ACTION_ROAD_RULES_START_RULE = 264,
			E_ACTION_ROAD_RULES_END_RULE = 265,
			E_ACTION_ROAD_RULES_UPDATE = 266,
			E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE = 267,
			E_ACTION_ROAD_RULES_NEW_HIGH_SCORE = 268,
			E_ACTION_ROAD_RULES_ACTIVE_RULE_CHANGE = 269,
			E_ACTION_ROAD_RULES_TIME_WARNING = 270,
			E_ACTION_ROAD_RULES_ROAD_SCORE = 271,
			E_ACTION_ROAD_RULES_NEW_RULERS = 272,
			E_ACTION_ROAD_RULES_MODE_SWITCH = 273,
			E_ACTION_PLAYER_IN_SHORTCUT = 274,
			E_ACTION_IMAGE_GALLERY_RENDER_IMAGE = 275,
			E_ACTION_IMAGE_GALLERY_IMAGE_INFO = 276,
			E_ACTION_IMAGE_GALLERY_COUNT_ACTION = 277,
			E_ACTION_IMAGE_GALLERY_DATA_ACTION = 278,
			E_ACTION_IMAGE_GALLERY_LOAD_COMPLETE = 279,
			E_ACTION_SAVE_IMAGE_AND_AUTOSAVE = 280,
			E_ACTION_LOAD_IMAGES = 281,
			E_ACTION_DXT_DECODE_IMAGE = 282,
			E_ACTION_SOUND_BIND_PROPS = 283,
			E_ACTION_COUNT = 284,
		}

		// BrnGameActions.h:462
		const int32_t KI_EVENT_MANAGER_DEFAULT_ACTION_QUEUE_LENGTH = 13312;

		// BrnGameActions.h:463
		const int32_t KI_EVENT_MANAGER_SMALL_ACTION_QUEUE_LENGTH = 256;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameActions.h:92
		using BrnNetwork::BrnNetworkModuleIO;

		// BrnGameActions.h:95
		enum EGameActionType {
			E_ACTION_RESET_PLAYER_CAR = 0,
			E_ACTION_GUI_UPDATE_PLAYER_CAR_ID = 1,
			E_ACTION_GUI_CAR_UNLOCK = 2,
			E_ACTION_RESET_PLAYER_CAR_ON_TRACK = 3,
			E_ACTION_SET_PLAYER_OPPONENTS = 4,
			E_ACTION_SETUP_NETWORK_CAR = 5,
			E_ACTION_SET_TAKEDOWN_CAMERA_STATE = 6,
			E_ACTION_SET_PLAYER_CAR_DRIVER = 7,
			E_ACTION_FORCE_PLAYER_CAR_DRIVER = 8,
			E_ACTION_RESET_CRASHING = 9,
			E_ACTION_RESET_RACE_CAR_CRASHING = 10,
			E_ACTION_REMOTE_PLAYER_DISCONNECTED = 11,
			E_ACTION_NOTIFY_DIRECTOR_LOCAL_PLAYER_DISCONNECTED = 12,
			E_ACTION_EMPTY_TRAFFIC_POOL = 13,
			E_ACTION_ON_PLAYER_TAKEDOWN = 14,
			E_ACTION_COMPLETED_STUNT = 15,
			E_ACTION_INPROGRESS_STUNT = 16,
			E_ACTION_PLAYER_CRASH_ENDING_SOON = 17,
			E_ACTION_CHECK_FOR_LOADING_SCREEN = 18,
			E_ACTION_PREPARE_FOR_MODE = 19,
			E_ACTION_BROADCAST_MODE_FINISH_LINES = 20,
			E_ACTION_STOP_MODE_OFFLINE = 21,
			E_ACTION_FINISH_MODE_ONLINE = 22,
			E_ACTION_FINISH_MODE_FINAL_ONLINE = 23,
			E_ACTION_SET_TRAFFIC_SCALE_BASED_ON_RANK = 24,
			E_ACTION_START_MODE_INTRO = 25,
			E_ACTION_STOP_MODE_INTRO = 26,
			E_ACTION_MARKED_MAN_LOADED = 27,
			E_ACTION_STOP_MODE_SPLASH = 28,
			E_ACTION_STOP_MODE_COUNTDOWN = 29,
			E_ACTION_START_PLAYING_MODE = 30,
			E_ACTION_FINISHED_MODE = 31,
			E_ACTION_SHOW_MODE_RESULTS = 32,
			E_ACTION_FINISHED_MODE_RESULTS = 33,
			E_ACTION_STOP_MODE = 34,
			E_ACTION_QUIT_MODE_OFFLINE = 35,
			E_ACTION_QUIT_MODE_ONLINE = 36,
			E_ACTION_IMPACT_TIME_START = 37,
			E_ACTION_IMPACT_TIME_END = 38,
			E_ACTION_SET_IN_MODE_START_REGION = 39,
			E_ACTION_SET_UP_ALL_DRIVE_THRUS = 40,
			E_ACTION_CLOSE_DRIVE_THRU = 41,
			E_ACTION_SET_COUNTDOWN = 42,
			E_ACTION_SHOW_HUD_MESSAGE = 43,
			E_ACTION_SHOW_POPUP = 44,
			E_ACTION_REQUEST_ROUTE_INFO = 45,
			E_ACTION_SET_LANDMARK_RACES = 46,
			E_ACTION_DAMAGE_CRITICAL = 47,
			E_ACTION_PLAYER_HIT_RIVAL = 48,
			E_ACTION_RIVAL_HIT_PLAYER = 49,
			E_ACTION_REQUEST_AUTOSAVE = 50,
			E_ACTION_ON_JUMP_START = 51,
			E_ACTION_SHOW_JUMP_NAME = 52,
			E_ACTION_ON_STUNT_ELEMENT_COMPLETE = 53,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_FOR_COUNTY = 54,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_BY_TYPE = 55,
			E_ACTION_STUNT_ELEMENT_BOOST = 56,
			E_ACTION_NEW_CAR_UNLOCKED = 57,
			E_ACTION_CAR_UNLOCK_END = 58,
			E_ACTION_CAR_SELECTION_CHANGED = 59,
			E_ACTION_CAR_SELECTION_CHANGED_DROPIN = 60,
			E_ACTION_CAR_SELECTION_DROPIN_COMPLETE = 61,
			E_ACTION_CAR_SELECTION_CHANGED_ONLINE = 62,
			E_ACTION_SWITCH_CAR_CORONAS_ON_OFF = 63,
			E_ACTION_CAR_SELECTION_REQUEST_STREAMING = 64,
			E_ACTION_ALLOW_BOOST_EARNING = 65,
			E_ACTION_STOP_BOOSTING = 66,
			E_ACTION_CAR_SELECT_START_GUI_ON_GAME_START = 67,
			E_ACTION_CAR_SELECT_TRANSITION_IN = 68,
			E_ACTION_CAR_SELECT_WAITING_FOR_AUDIO = 69,
			E_ACTION_CAR_SELECT_READY = 70,
			E_ACTION_CAR_SELECT_MODIFICATION_SCREEN = 71,
			E_ACTION_CAR_SELECT_EXIT = 72,
			E_ACTION_CAR_SELECT_ABORT = 73,
			E_ACTION_CAR_SELECT_CHANGE_COLOUR = 74,
			E_ACTION_CAR_SELECT_PAUSED_IN_CAR_SELECT = 75,
			E_ACTION_PLAYER_CAR_COLOUR_RESPONSE = 76,
			E_ACTION_CAR_SELECT_ONLINE_TIME_LEFT = 77,
			E_ACTION_CAR_SELECT_ONLINE_END = 78,
			E_ACTION_CAR_SELECT_ONLINE_SELECT_CAR = 79,
			E_ACTION_CAR_SELECT_ONLINE_CAR_IS_SHOWABLE = 80,
			E_ACTION_PAUSE_SIMULATION = 81,
			E_ACTION_UNPAUSE_SIMULATION = 82,
			E_ACTION_PAUSE_ONLINE = 83,
			E_ACTION_UNPAUSE_ONLINE = 84,
			E_ACTION_PROMPT_START_OFFLINE_GAME_MODE = 85,
			E_ACTION_PROMPT_DO_INVITE = 86,
			E_ACTION_START_PREPARE_FOR_INVITE = 87,
			E_ACTION_UPDATE_PREPARE_FOR_INVITE = 88,
			E_ACTION_PREPARED_FOR_INVITE = 89,
			E_ACTION_PERFORM_INVITE = 90,
			E_ACTION_INVITE_COMPLETE = 91,
			E_ACTION_DRIVE_THRU_BODY_SHOP = 92,
			E_ACTION_DRIVE_THRU_PAINT_SHOP = 93,
			E_ACTION_DRIVE_THRU_JUNK_YARD = 94,
			E_ACTION_DRIVE_THRU_GAS_STATION = 95,
			E_ACTION_DRIVE_THRU_CLOSED = 96,
			E_ACTION_DRIVE_THRU_STOP_PRESENTATION = 97,
			E_ACTION_PLAYER_REACHED_ROAD_RAGE_TARGET = 98,
			E_ACTION_DRIVE_THRU_DISCOVERED = 99,
			E_ACTION_ALL_DRIVE_THRUS_DISCOVERED = 100,
			E_ACTION_DRIVE_THRU_JUNK_YARD_ON_GAME_START = 101,
			E_ACTION_ON_TRAFFIC_CHECKING = 102,
			E_ACTION_ON_TRAFFIC_CHECKING_CHAIN = 103,
			E_ACTION_TRIGGER = 104,
			E_ACTION_KILLZONE = 105,
			E_ACTION_PLAYER_INVULNERABLE = 106,
			E_ACTION_WORLD_REGION_CHANGE = 107,
			E_ACTION_RACE_CAR_REACHED_CHECKPOINT = 108,
			E_ACTION_RACE_CAR_REACHED_FINISH = 109,
			E_ACTION_PLAYER_REACHED_PENULTIMATE_CHECKPOINT = 110,
			E_ACTION_TRAFFIC_TYPE_REQUEST = 111,
			E_ACTION_TRACK_PLAYER_TO_LOCATION = 112,
			E_ACTION_SET_WAYPOINT_DISTANCES_TO_FINISH = 113,
			E_ACTION_PLAYER_RESET_ON_TRACK = 114,
			E_ACTION_SHUTDOWN = 115,
			E_ACTION_SHUTDOWN_FINISHED = 116,
			E_ACTION_AWARD_SEQUENCE_START = 117,
			E_ACTION_AWARD_SEQUENCE_END = 118,
			E_ACTION_CRASH_COMBO = 119,
			E_ACTION_SET_SIXAXIS_STEERING = 120,
			E_ACTION_SWITCH_CAR_COLOUR = 121,
			E_ACTION_WORLD_STUNT_PERFORMED = 122,
			E_ACTION_OVERHEAD_SIGN_HIT = 123,
			E_ACTION_ALLOW_CAR_TO_JOIN_ROAD_RAGE = 124,
			E_ACTION_HIDE_CAR_IN_ROAD_RAGE = 125,
			E_ACTION_UPDATE_ROAD_RAGE_MADNESS = 126,
			E_ACTION_TRIGGER_CRASH_BREAKER = 127,
			E_ACTION_CANCEL_CRASH_BREAKER = 128,
			E_ACTION_ENTER_SHOWTIME_BONUS_REGION = 129,
			E_ACTION_TOGGLE_SHOWTIME_BEHAVIOUR = 130,
			E_ACTION_VEHICLE_LEAPT = 131,
			E_ACTION_VEHICLE_HIT = 132,
			E_ACTION_ENTER_NEW_ROAD = 133,
			E_ACTION_SHOWTIME_UPDATE = 134,
			E_ACTION_SHOWTIME_MODE_SWITCH = 135,
			E_ACTION_JUST_BOUNCED = 136,
			E_ACTION_JUST_APPLIED_EXTRA_SPIN = 137,
			E_ACTION_SHOWTIME_INTRO_START = 138,
			E_ACTION_POWER_PARK_RESULT = 139,
			E_ACTION_GAME_TRAINING = 140,
			E_ACTION_GAME_TRAINING_REQUEST = 141,
			E_ACTION_GAME_TRAINING_PAUSE = 142,
			E_ACTION_GAME_TRAINING_UNPAUSE = 143,
			E_ACTION_MODE_TIME_TIMEOUT = 144,
			E_ACTION_FREEBURN_CHALLENGE = 145,
			E_ACTION_FREEBURN_CHALLENGE_END_NOT_ACTIVE = 146,
			E_ACTION_FREEBURN_CHALLENGE_UPDATE = 147,
			E_ACTION_FREEBURN_CHALLENGE_COMPLETION_STATUS = 148,
			E_ACTION_FREEBURN_CHALLENGE_EVERY_PLAYER_COMPLETION_STATUS = 149,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE = 150,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS = 151,
			E_ACTION_FREEBURN_CHALLENGE_SHOW_SELECTOR = 152,
			E_ACTION_ACTIVE_FREEBURN_CHALLENGE = 153,
			E_ACTION_BLUE_TEAM_IS_ESCAPING = 154,
			E_ACTION_BLUE_TEAM_IS_BEHIND_YOU = 155,
			E_ACTION_LEADER_REACHED_BOUNDARY = 156,
			E_ACTION_PLAYER_ELIMINATED = 157,
			E_ACTION_TRAITOROUS_TAKEDOWN = 158,
			E_ACTION_SWITCH_BURNING_HOME_RUN_RUNNER = 159,
			E_ACTION_BURNOUT_SKILLZ = 160,
			E_ACTION_ROAD_RULES_SKILLZ = 161,
			E_ACTION_SET_BOOST = 162,
			E_ACTION_NEAR_MISS = 163,
			E_ACTION_DRIFTING = 164,
			E_ACTION_SPINNING = 165,
			E_ACTION_IN_AIR = 166,
			E_ACTION_ONCOMING = 167,
			E_ACTION_TAILGATING = 168,
			E_ACTION_DISTANCE_DRIVEN = 169,
			E_ACTION_AFTERTOUCH = 170,
			E_ACTION_EVENT_STATE_RESPONSE = 171,
			E_ACTION_GAME_STATS_RESPONSE = 172,
			E_ACTION_RANK_INFO_RESPONSE = 173,
			E_ACTION_PLAYER_INFO_RESPONSE = 174,
			E_ACTION_UNLOCKED_LIVERY_RESPONSE = 175,
			E_ACTION_CAR_SELECTION_RESPONSE = 176,
			E_ACTION_LANDMARK_VARIABLE_INFO_RESPONSE = 177,
			E_ACTION_REGION_FROM_POSITION_RESPONSE = 178,
			E_ACTION_UPDATE_GUI_ROUTE = 179,
			E_ACTION_ALL_RIVALRY_DATA_RESPONSE = 180,
			E_ACTION_ONE_RIVALRY_DATA_RESPONSE = 181,
			E_ACTION_SHOW_SATNAV = 182,
			E_ACTION_SET_LOADING_STATE = 183,
			E_ACTION_WAIT_FOR_STREAMING = 184,
			E_ACTION_PROGRESSION_PROFILE_DATA = 185,
			E_ACTION_LOAD_PROFILE = 186,
			E_ACTION_REMOVE_ALL_RIVALS = 187,
			E_ACTION_ADD_RIVAL = 188,
			E_ACTION_RIVAL_STATE_CHANGED = 189,
			E_ACTION_UPDATE_CAR_STATS = 190,
			E_ACTION_PROP_SMASH_PROGRESSION = 191,
			E_ACTION_UPDATE_PLAYER_MEDALS = 192,
			E_ACTION_EVENT_AT_JUNCTION_AVAILABLE = 193,
			E_ACTION_ALL_EVENTS_DISCOVERED = 194,
			E_ACTION_ALL_EVENTS_OF_TYPE_DISCOVERED = 195,
			E_ACTION_TROPHY_UNLOCK = 196,
			E_ACTION_ROAD_RAGE_PLAYER_DAMAGE = 197,
			E_ACTION_ALL_EVENT_TYPE_WON = 198,
			E_ACTION_RIVAL_UNLOCKED_INTO_THE_WORLD_ACTION = 199,
			E_ACTION_ONE_HUNDRED_PERCENT_COMPLETE = 200,
			E_ACTION_ACHIEVEMENTS_EARNED = 201,
			E_ACTION_ALL_RIVALS_SHUTDOWN = 202,
			E_ACTION_PAYBACK_LOST = 203,
			E_ACTION_PAYBACK_VICTIM_LEFT_GAME = 204,
			E_ACTION_PAYBACK_MUGSHOT = 205,
			E_ACTION_ABORT_MUGSHOT_CAPTURE = 206,
			E_ACTION_PAYBACK_ACTIVATED = 207,
			E_ACTION_PAYBACK_OVER = 208,
			E_ACTION_PAYBACK_SUCCEEDED = 209,
			E_ACTION_SOUND_TRIGGER = 210,
			E_ACTION_ONLINE_PLAYER_ADDED = 211,
			E_ACTION_ONLINE_PLAYER_REMOVED = 212,
			E_ACTION_OFFLINE_ADD_CAR_TO_MODE = 213,
			E_ACTION_OFFLINE_REMOVE_CAR_FROM_MODE = 214,
			E_ACTION_CAR_ADDITION_PRESENTATION_START = 215,
			E_ACTION_CAR_ADDITION_PRESENTATION_END = 216,
			E_ACTION_LOCAL_PLAYER_DISCONNECTED = 217,
			E_ACTION_LOCAL_PLAYER_LEFT_GAME = 218,
			E_ACTION_UPDATE_RICH_PRESENCE = 219,
			E_ACTION_SEND_TELEMETRY = 220,
			E_ACTION_ONLINE_GAME_RESULT = 221,
			E_ACTION_ONLINE_ROUND_RESULT = 222,
			E_ACTION_ONLINE_LAUNCH_FREE_BURN_LOBBY = 223,
			E_ACTION_ROAD_RULES_CHALLENGE_SCORES = 224,
			E_ACTION_ROAD_RULES_PERSONAL_BEST = 225,
			E_ACTION_ROAD_RULES_OVERWRITE_SERVER_RECORD = 226,
			E_ACTION_START_GAME_THROUGH_PLAYER_JOIN = 227,
			E_ACTION_RESTART_TRAFFIC = 228,
			E_ACTION_NETWORK_COLLECTABLE = 229,
			E_ACTION_NETWORK_CAUGHT_FEVER = 230,
			E_ACTION_REQUEST_GAMERCARD = 231,
			E_ACTION_HUD_MESSAGE_TOOK_LEAD = 232,
			E_ACTION_HUD_MESSAGE_TOOK_LAST = 233,
			E_ACTION_HUD_MESSAGE_DIST_TO_FINISH = 234,
			E_ACTION_HUD_MESSAGE_LEADING = 235,
			E_ACTION_HUD_MESSAGE_NECK_AND_NECK = 236,
			E_ACTION_HUD_MESSAGE_X_FINISHES = 237,
			E_ACTION_HUD_MESSAGE_X_REACHES_CHECKPOINT = 238,
			E_ACTION_HUD_MESSAGE_PLAYER_REACHES_CHECKPOINT = 239,
			E_ACTION_HUD_MESSAGE_X_CRASHES = 240,
			E_ACTION_HUD_MESSAGE_WRONG_WAY = 241,
			E_ACTION_HUD_MESSAGE_STUNT_PERFORMED = 242,
			E_ACTION_HUD_MESSAGE_COMBO_PERFORMED = 243,
			E_ACTION_HUD_MESSAGE_STUNT_TIME_UP = 244,
			E_ACTION_HUD_MESSAGE_BHR_CHECKPOINT = 245,
			E_ACTION_HUD_MESSAGE_BHR_RUNNER_CRASHED = 246,
			E_ACTION_HUD_MESSAGE_ONLINE_TEAM_CHANGE = 247,
			E_ACTION_HUD_MESSAGE_ROAD_RAGE_TIME_EXTENSION = 248,
			E_ACTION_HUD_MESSAGE_RIVAL_FIRST_HIT = 249,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_RIVAL = 250,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_TARGET = 251,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_FLEEING = 252,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_WRECKED = 253,
			E_ACTION_HUD_MESSAGE_PLAYER_CAN_SKIP_CRASH = 254,
			E_ACTION_HUD_MESSAGE_TIME_UP = 255,
			E_ACTION_HUD_MESSAGE_CANT_PAINT = 256,
			E_ACTION_HUD_MESSAGE_MUST_FIX = 257,
			E_ACTION_HUD_MESSAGE_JUMP_FAILED = 258,
			E_ACTION_WRONG_CAR_FOR_CHALLENGE = 259,
			E_ACTION_ROAD_RULES_ENTER_ROAD = 260,
			E_ACTION_ROAD_RULES_LEAVE_ROAD = 261,
			E_ACTION_ROAD_RULES_BATCH_QUERY = 262,
			E_ACTION_UPCOMING_ROAD_CHANGE = 263,
			E_ACTION_ROAD_RULES_START_RULE = 264,
			E_ACTION_ROAD_RULES_END_RULE = 265,
			E_ACTION_ROAD_RULES_UPDATE = 266,
			E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE = 267,
			E_ACTION_ROAD_RULES_NEW_HIGH_SCORE = 268,
			E_ACTION_ROAD_RULES_ACTIVE_RULE_CHANGE = 269,
			E_ACTION_ROAD_RULES_TIME_WARNING = 270,
			E_ACTION_ROAD_RULES_ROAD_SCORE = 271,
			E_ACTION_ROAD_RULES_NEW_RULERS = 272,
			E_ACTION_ROAD_RULES_MODE_SWITCH = 273,
			E_ACTION_PLAYER_IN_SHORTCUT = 274,
			E_ACTION_IMAGE_GALLERY_RENDER_IMAGE = 275,
			E_ACTION_IMAGE_GALLERY_IMAGE_INFO = 276,
			E_ACTION_IMAGE_GALLERY_COUNT_ACTION = 277,
			E_ACTION_IMAGE_GALLERY_DATA_ACTION = 278,
			E_ACTION_IMAGE_GALLERY_LOAD_COMPLETE = 279,
			E_ACTION_SAVE_IMAGE_AND_AUTOSAVE = 280,
			E_ACTION_LOAD_IMAGES = 281,
			E_ACTION_DXT_DECODE_IMAGE = 282,
			E_ACTION_SOUND_BIND_PROPS = 283,
			E_ACTION_COUNT = 284,
		}

		// Declaration
		struct UpcomingRoadChangeAction {
			// BrnGameActions.h:4829
			enum ESignState {
				E_SIGN_STATE_INVALID = -1,
				E_SIGN_STATE_GREEN = 0,
				E_SIGN_STATE_RED = 1,
				E_SIGN_STATE_FLASHING = 2,
				E_SIGN_STATE_COUNT = 3,
			}

		}

		// BrnGameActions.h:462
		const int32_t KI_EVENT_MANAGER_DEFAULT_ACTION_QUEUE_LENGTH = 13312;

		// BrnGameActions.h:463
		const int32_t KI_EVENT_MANAGER_SMALL_ACTION_QUEUE_LENGTH = 256;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameActions.h:92
		using BrnNetwork::BrnNetworkModuleIO;

		// BrnGameActions.h:95
		enum EGameActionType {
			E_ACTION_RESET_PLAYER_CAR = 0,
			E_ACTION_GUI_UPDATE_PLAYER_CAR_ID = 1,
			E_ACTION_GUI_CAR_UNLOCK = 2,
			E_ACTION_RESET_PLAYER_CAR_ON_TRACK = 3,
			E_ACTION_SET_PLAYER_OPPONENTS = 4,
			E_ACTION_SETUP_NETWORK_CAR = 5,
			E_ACTION_SET_TAKEDOWN_CAMERA_STATE = 6,
			E_ACTION_SET_PLAYER_CAR_DRIVER = 7,
			E_ACTION_FORCE_PLAYER_CAR_DRIVER = 8,
			E_ACTION_RESET_CRASHING = 9,
			E_ACTION_RESET_RACE_CAR_CRASHING = 10,
			E_ACTION_REMOTE_PLAYER_DISCONNECTED = 11,
			E_ACTION_NOTIFY_DIRECTOR_LOCAL_PLAYER_DISCONNECTED = 12,
			E_ACTION_EMPTY_TRAFFIC_POOL = 13,
			E_ACTION_ON_PLAYER_TAKEDOWN = 14,
			E_ACTION_COMPLETED_STUNT = 15,
			E_ACTION_INPROGRESS_STUNT = 16,
			E_ACTION_PLAYER_CRASH_ENDING_SOON = 17,
			E_ACTION_CHECK_FOR_LOADING_SCREEN = 18,
			E_ACTION_PREPARE_FOR_MODE = 19,
			E_ACTION_BROADCAST_MODE_FINISH_LINES = 20,
			E_ACTION_STOP_MODE_OFFLINE = 21,
			E_ACTION_FINISH_MODE_ONLINE = 22,
			E_ACTION_FINISH_MODE_FINAL_ONLINE = 23,
			E_ACTION_SET_TRAFFIC_SCALE_BASED_ON_RANK = 24,
			E_ACTION_START_MODE_INTRO = 25,
			E_ACTION_STOP_MODE_INTRO = 26,
			E_ACTION_MARKED_MAN_LOADED = 27,
			E_ACTION_STOP_MODE_SPLASH = 28,
			E_ACTION_STOP_MODE_COUNTDOWN = 29,
			E_ACTION_START_PLAYING_MODE = 30,
			E_ACTION_FINISHED_MODE = 31,
			E_ACTION_SHOW_MODE_RESULTS = 32,
			E_ACTION_FINISHED_MODE_RESULTS = 33,
			E_ACTION_STOP_MODE = 34,
			E_ACTION_QUIT_MODE_OFFLINE = 35,
			E_ACTION_QUIT_MODE_ONLINE = 36,
			E_ACTION_IMPACT_TIME_START = 37,
			E_ACTION_IMPACT_TIME_END = 38,
			E_ACTION_SET_IN_MODE_START_REGION = 39,
			E_ACTION_SET_UP_ALL_DRIVE_THRUS = 40,
			E_ACTION_CLOSE_DRIVE_THRU = 41,
			E_ACTION_SET_COUNTDOWN = 42,
			E_ACTION_SHOW_HUD_MESSAGE = 43,
			E_ACTION_SHOW_POPUP = 44,
			E_ACTION_REQUEST_ROUTE_INFO = 45,
			E_ACTION_SET_LANDMARK_RACES = 46,
			E_ACTION_DAMAGE_CRITICAL = 47,
			E_ACTION_PLAYER_HIT_RIVAL = 48,
			E_ACTION_RIVAL_HIT_PLAYER = 49,
			E_ACTION_REQUEST_AUTOSAVE = 50,
			E_ACTION_ON_JUMP_START = 51,
			E_ACTION_SHOW_JUMP_NAME = 52,
			E_ACTION_ON_STUNT_ELEMENT_COMPLETE = 53,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_FOR_COUNTY = 54,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_BY_TYPE = 55,
			E_ACTION_STUNT_ELEMENT_BOOST = 56,
			E_ACTION_NEW_CAR_UNLOCKED = 57,
			E_ACTION_CAR_UNLOCK_END = 58,
			E_ACTION_CAR_SELECTION_CHANGED = 59,
			E_ACTION_CAR_SELECTION_CHANGED_DROPIN = 60,
			E_ACTION_CAR_SELECTION_DROPIN_COMPLETE = 61,
			E_ACTION_CAR_SELECTION_CHANGED_ONLINE = 62,
			E_ACTION_SWITCH_CAR_CORONAS_ON_OFF = 63,
			E_ACTION_CAR_SELECTION_REQUEST_STREAMING = 64,
			E_ACTION_ALLOW_BOOST_EARNING = 65,
			E_ACTION_STOP_BOOSTING = 66,
			E_ACTION_CAR_SELECT_START_GUI_ON_GAME_START = 67,
			E_ACTION_CAR_SELECT_TRANSITION_IN = 68,
			E_ACTION_CAR_SELECT_WAITING_FOR_AUDIO = 69,
			E_ACTION_CAR_SELECT_READY = 70,
			E_ACTION_CAR_SELECT_MODIFICATION_SCREEN = 71,
			E_ACTION_CAR_SELECT_EXIT = 72,
			E_ACTION_CAR_SELECT_ABORT = 73,
			E_ACTION_CAR_SELECT_CHANGE_COLOUR = 74,
			E_ACTION_CAR_SELECT_PAUSED_IN_CAR_SELECT = 75,
			E_ACTION_PLAYER_CAR_COLOUR_RESPONSE = 76,
			E_ACTION_CAR_SELECT_ONLINE_TIME_LEFT = 77,
			E_ACTION_CAR_SELECT_ONLINE_END = 78,
			E_ACTION_CAR_SELECT_ONLINE_SELECT_CAR = 79,
			E_ACTION_CAR_SELECT_ONLINE_CAR_IS_SHOWABLE = 80,
			E_ACTION_PAUSE_SIMULATION = 81,
			E_ACTION_UNPAUSE_SIMULATION = 82,
			E_ACTION_PAUSE_ONLINE = 83,
			E_ACTION_UNPAUSE_ONLINE = 84,
			E_ACTION_PROMPT_START_OFFLINE_GAME_MODE = 85,
			E_ACTION_PROMPT_DO_INVITE = 86,
			E_ACTION_START_PREPARE_FOR_INVITE = 87,
			E_ACTION_UPDATE_PREPARE_FOR_INVITE = 88,
			E_ACTION_PREPARED_FOR_INVITE = 89,
			E_ACTION_PERFORM_INVITE = 90,
			E_ACTION_INVITE_COMPLETE = 91,
			E_ACTION_DRIVE_THRU_BODY_SHOP = 92,
			E_ACTION_DRIVE_THRU_PAINT_SHOP = 93,
			E_ACTION_DRIVE_THRU_JUNK_YARD = 94,
			E_ACTION_DRIVE_THRU_GAS_STATION = 95,
			E_ACTION_DRIVE_THRU_CLOSED = 96,
			E_ACTION_DRIVE_THRU_STOP_PRESENTATION = 97,
			E_ACTION_PLAYER_REACHED_ROAD_RAGE_TARGET = 98,
			E_ACTION_DRIVE_THRU_DISCOVERED = 99,
			E_ACTION_ALL_DRIVE_THRUS_DISCOVERED = 100,
			E_ACTION_DRIVE_THRU_JUNK_YARD_ON_GAME_START = 101,
			E_ACTION_ON_TRAFFIC_CHECKING = 102,
			E_ACTION_ON_TRAFFIC_CHECKING_CHAIN = 103,
			E_ACTION_TRIGGER = 104,
			E_ACTION_KILLZONE = 105,
			E_ACTION_PLAYER_INVULNERABLE = 106,
			E_ACTION_WORLD_REGION_CHANGE = 107,
			E_ACTION_RACE_CAR_REACHED_CHECKPOINT = 108,
			E_ACTION_RACE_CAR_REACHED_FINISH = 109,
			E_ACTION_PLAYER_REACHED_PENULTIMATE_CHECKPOINT = 110,
			E_ACTION_TRAFFIC_TYPE_REQUEST = 111,
			E_ACTION_TRACK_PLAYER_TO_LOCATION = 112,
			E_ACTION_SET_WAYPOINT_DISTANCES_TO_FINISH = 113,
			E_ACTION_PLAYER_RESET_ON_TRACK = 114,
			E_ACTION_SHUTDOWN = 115,
			E_ACTION_SHUTDOWN_FINISHED = 116,
			E_ACTION_AWARD_SEQUENCE_START = 117,
			E_ACTION_AWARD_SEQUENCE_END = 118,
			E_ACTION_CRASH_COMBO = 119,
			E_ACTION_SET_SIXAXIS_STEERING = 120,
			E_ACTION_SWITCH_CAR_COLOUR = 121,
			E_ACTION_WORLD_STUNT_PERFORMED = 122,
			E_ACTION_OVERHEAD_SIGN_HIT = 123,
			E_ACTION_ALLOW_CAR_TO_JOIN_ROAD_RAGE = 124,
			E_ACTION_HIDE_CAR_IN_ROAD_RAGE = 125,
			E_ACTION_UPDATE_ROAD_RAGE_MADNESS = 126,
			E_ACTION_TRIGGER_CRASH_BREAKER = 127,
			E_ACTION_CANCEL_CRASH_BREAKER = 128,
			E_ACTION_ENTER_SHOWTIME_BONUS_REGION = 129,
			E_ACTION_TOGGLE_SHOWTIME_BEHAVIOUR = 130,
			E_ACTION_VEHICLE_LEAPT = 131,
			E_ACTION_VEHICLE_HIT = 132,
			E_ACTION_ENTER_NEW_ROAD = 133,
			E_ACTION_SHOWTIME_UPDATE = 134,
			E_ACTION_SHOWTIME_MODE_SWITCH = 135,
			E_ACTION_JUST_BOUNCED = 136,
			E_ACTION_JUST_APPLIED_EXTRA_SPIN = 137,
			E_ACTION_SHOWTIME_INTRO_START = 138,
			E_ACTION_POWER_PARK_RESULT = 139,
			E_ACTION_GAME_TRAINING = 140,
			E_ACTION_GAME_TRAINING_REQUEST = 141,
			E_ACTION_GAME_TRAINING_PAUSE = 142,
			E_ACTION_GAME_TRAINING_UNPAUSE = 143,
			E_ACTION_MODE_TIME_TIMEOUT = 144,
			E_ACTION_FREEBURN_CHALLENGE = 145,
			E_ACTION_FREEBURN_CHALLENGE_END_NOT_ACTIVE = 146,
			E_ACTION_FREEBURN_CHALLENGE_UPDATE = 147,
			E_ACTION_FREEBURN_CHALLENGE_COMPLETION_STATUS = 148,
			E_ACTION_FREEBURN_CHALLENGE_EVERY_PLAYER_COMPLETION_STATUS = 149,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE = 150,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS = 151,
			E_ACTION_FREEBURN_CHALLENGE_SHOW_SELECTOR = 152,
			E_ACTION_ACTIVE_FREEBURN_CHALLENGE = 153,
			E_ACTION_BLUE_TEAM_IS_ESCAPING = 154,
			E_ACTION_BLUE_TEAM_IS_BEHIND_YOU = 155,
			E_ACTION_LEADER_REACHED_BOUNDARY = 156,
			E_ACTION_PLAYER_ELIMINATED = 157,
			E_ACTION_TRAITOROUS_TAKEDOWN = 158,
			E_ACTION_SWITCH_BURNING_HOME_RUN_RUNNER = 159,
			E_ACTION_BURNOUT_SKILLZ = 160,
			E_ACTION_ROAD_RULES_SKILLZ = 161,
			E_ACTION_SET_BOOST = 162,
			E_ACTION_NEAR_MISS = 163,
			E_ACTION_DRIFTING = 164,
			E_ACTION_SPINNING = 165,
			E_ACTION_IN_AIR = 166,
			E_ACTION_ONCOMING = 167,
			E_ACTION_TAILGATING = 168,
			E_ACTION_DISTANCE_DRIVEN = 169,
			E_ACTION_AFTERTOUCH = 170,
			E_ACTION_EVENT_STATE_RESPONSE = 171,
			E_ACTION_GAME_STATS_RESPONSE = 172,
			E_ACTION_RANK_INFO_RESPONSE = 173,
			E_ACTION_PLAYER_INFO_RESPONSE = 174,
			E_ACTION_UNLOCKED_LIVERY_RESPONSE = 175,
			E_ACTION_CAR_SELECTION_RESPONSE = 176,
			E_ACTION_LANDMARK_VARIABLE_INFO_RESPONSE = 177,
			E_ACTION_REGION_FROM_POSITION_RESPONSE = 178,
			E_ACTION_UPDATE_GUI_ROUTE = 179,
			E_ACTION_ALL_RIVALRY_DATA_RESPONSE = 180,
			E_ACTION_ONE_RIVALRY_DATA_RESPONSE = 181,
			E_ACTION_SHOW_SATNAV = 182,
			E_ACTION_SET_LOADING_STATE = 183,
			E_ACTION_WAIT_FOR_STREAMING = 184,
			E_ACTION_PROGRESSION_PROFILE_DATA = 185,
			E_ACTION_LOAD_PROFILE = 186,
			E_ACTION_REMOVE_ALL_RIVALS = 187,
			E_ACTION_ADD_RIVAL = 188,
			E_ACTION_RIVAL_STATE_CHANGED = 189,
			E_ACTION_UPDATE_CAR_STATS = 190,
			E_ACTION_PROP_SMASH_PROGRESSION = 191,
			E_ACTION_UPDATE_PLAYER_MEDALS = 192,
			E_ACTION_EVENT_AT_JUNCTION_AVAILABLE = 193,
			E_ACTION_ALL_EVENTS_DISCOVERED = 194,
			E_ACTION_ALL_EVENTS_OF_TYPE_DISCOVERED = 195,
			E_ACTION_TROPHY_UNLOCK = 196,
			E_ACTION_ROAD_RAGE_PLAYER_DAMAGE = 197,
			E_ACTION_ALL_EVENT_TYPE_WON = 198,
			E_ACTION_RIVAL_UNLOCKED_INTO_THE_WORLD_ACTION = 199,
			E_ACTION_ONE_HUNDRED_PERCENT_COMPLETE = 200,
			E_ACTION_ACHIEVEMENTS_EARNED = 201,
			E_ACTION_ALL_RIVALS_SHUTDOWN = 202,
			E_ACTION_PAYBACK_LOST = 203,
			E_ACTION_PAYBACK_VICTIM_LEFT_GAME = 204,
			E_ACTION_PAYBACK_MUGSHOT = 205,
			E_ACTION_ABORT_MUGSHOT_CAPTURE = 206,
			E_ACTION_PAYBACK_ACTIVATED = 207,
			E_ACTION_PAYBACK_OVER = 208,
			E_ACTION_PAYBACK_SUCCEEDED = 209,
			E_ACTION_SOUND_TRIGGER = 210,
			E_ACTION_ONLINE_PLAYER_ADDED = 211,
			E_ACTION_ONLINE_PLAYER_REMOVED = 212,
			E_ACTION_OFFLINE_ADD_CAR_TO_MODE = 213,
			E_ACTION_OFFLINE_REMOVE_CAR_FROM_MODE = 214,
			E_ACTION_CAR_ADDITION_PRESENTATION_START = 215,
			E_ACTION_CAR_ADDITION_PRESENTATION_END = 216,
			E_ACTION_LOCAL_PLAYER_DISCONNECTED = 217,
			E_ACTION_LOCAL_PLAYER_LEFT_GAME = 218,
			E_ACTION_UPDATE_RICH_PRESENCE = 219,
			E_ACTION_SEND_TELEMETRY = 220,
			E_ACTION_ONLINE_GAME_RESULT = 221,
			E_ACTION_ONLINE_ROUND_RESULT = 222,
			E_ACTION_ONLINE_LAUNCH_FREE_BURN_LOBBY = 223,
			E_ACTION_ROAD_RULES_CHALLENGE_SCORES = 224,
			E_ACTION_ROAD_RULES_PERSONAL_BEST = 225,
			E_ACTION_ROAD_RULES_OVERWRITE_SERVER_RECORD = 226,
			E_ACTION_START_GAME_THROUGH_PLAYER_JOIN = 227,
			E_ACTION_RESTART_TRAFFIC = 228,
			E_ACTION_NETWORK_COLLECTABLE = 229,
			E_ACTION_NETWORK_CAUGHT_FEVER = 230,
			E_ACTION_REQUEST_GAMERCARD = 231,
			E_ACTION_HUD_MESSAGE_TOOK_LEAD = 232,
			E_ACTION_HUD_MESSAGE_TOOK_LAST = 233,
			E_ACTION_HUD_MESSAGE_DIST_TO_FINISH = 234,
			E_ACTION_HUD_MESSAGE_LEADING = 235,
			E_ACTION_HUD_MESSAGE_NECK_AND_NECK = 236,
			E_ACTION_HUD_MESSAGE_X_FINISHES = 237,
			E_ACTION_HUD_MESSAGE_X_REACHES_CHECKPOINT = 238,
			E_ACTION_HUD_MESSAGE_PLAYER_REACHES_CHECKPOINT = 239,
			E_ACTION_HUD_MESSAGE_X_CRASHES = 240,
			E_ACTION_HUD_MESSAGE_WRONG_WAY = 241,
			E_ACTION_HUD_MESSAGE_STUNT_PERFORMED = 242,
			E_ACTION_HUD_MESSAGE_COMBO_PERFORMED = 243,
			E_ACTION_HUD_MESSAGE_STUNT_TIME_UP = 244,
			E_ACTION_HUD_MESSAGE_BHR_CHECKPOINT = 245,
			E_ACTION_HUD_MESSAGE_BHR_RUNNER_CRASHED = 246,
			E_ACTION_HUD_MESSAGE_ONLINE_TEAM_CHANGE = 247,
			E_ACTION_HUD_MESSAGE_ROAD_RAGE_TIME_EXTENSION = 248,
			E_ACTION_HUD_MESSAGE_RIVAL_FIRST_HIT = 249,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_RIVAL = 250,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_TARGET = 251,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_FLEEING = 252,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_WRECKED = 253,
			E_ACTION_HUD_MESSAGE_PLAYER_CAN_SKIP_CRASH = 254,
			E_ACTION_HUD_MESSAGE_TIME_UP = 255,
			E_ACTION_HUD_MESSAGE_CANT_PAINT = 256,
			E_ACTION_HUD_MESSAGE_MUST_FIX = 257,
			E_ACTION_HUD_MESSAGE_JUMP_FAILED = 258,
			E_ACTION_WRONG_CAR_FOR_CHALLENGE = 259,
			E_ACTION_ROAD_RULES_ENTER_ROAD = 260,
			E_ACTION_ROAD_RULES_LEAVE_ROAD = 261,
			E_ACTION_ROAD_RULES_BATCH_QUERY = 262,
			E_ACTION_UPCOMING_ROAD_CHANGE = 263,
			E_ACTION_ROAD_RULES_START_RULE = 264,
			E_ACTION_ROAD_RULES_END_RULE = 265,
			E_ACTION_ROAD_RULES_UPDATE = 266,
			E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE = 267,
			E_ACTION_ROAD_RULES_NEW_HIGH_SCORE = 268,
			E_ACTION_ROAD_RULES_ACTIVE_RULE_CHANGE = 269,
			E_ACTION_ROAD_RULES_TIME_WARNING = 270,
			E_ACTION_ROAD_RULES_ROAD_SCORE = 271,
			E_ACTION_ROAD_RULES_NEW_RULERS = 272,
			E_ACTION_ROAD_RULES_MODE_SWITCH = 273,
			E_ACTION_PLAYER_IN_SHORTCUT = 274,
			E_ACTION_IMAGE_GALLERY_RENDER_IMAGE = 275,
			E_ACTION_IMAGE_GALLERY_IMAGE_INFO = 276,
			E_ACTION_IMAGE_GALLERY_COUNT_ACTION = 277,
			E_ACTION_IMAGE_GALLERY_DATA_ACTION = 278,
			E_ACTION_IMAGE_GALLERY_LOAD_COMPLETE = 279,
			E_ACTION_SAVE_IMAGE_AND_AUTOSAVE = 280,
			E_ACTION_LOAD_IMAGES = 281,
			E_ACTION_DXT_DECODE_IMAGE = 282,
			E_ACTION_SOUND_BIND_PROPS = 283,
			E_ACTION_COUNT = 284,
		}

		// Declaration
		struct PrepareForModeAction {
			// BrnGameActions.h:856
			enum EPrepareForModeStage {
				E_PFM_STAGE_ALL_IN_ONE = 0,
				E_PFM_STAGE_FIRST_OF_TWO = 1,
				E_PFM_STAGE_SECOND_OF_TWO = 2,
				E_PFM_STAGE_COUNT = 3,
			}

		}

		// Declaration
		struct SoundTriggerAction {
			// BrnGameActions.h:3663
			enum eType {
				E_TYPE_INVALID = 0,
				E_TYPE_AT_ENTITY = 1,
				E_TYPE_AHEAD_OF_ENTITY = 2,
				E_TYPE_COUNT = 3,
			}

		}

		// Declaration
		struct UpcomingRoadChangeAction {
			// BrnGameActions.h:4829
			enum ESignState {
				E_SIGN_STATE_INVALID = -1,
				E_SIGN_STATE_GREEN = 0,
				E_SIGN_STATE_RED = 1,
				E_SIGN_STATE_FLASHING = 2,
				E_SIGN_STATE_COUNT = 3,
			}

		}

		// BrnGameActions.h:462
		const int32_t KI_EVENT_MANAGER_DEFAULT_ACTION_QUEUE_LENGTH = 13312;

		// BrnGameActions.h:463
		const int32_t KI_EVENT_MANAGER_SMALL_ACTION_QUEUE_LENGTH = 256;

	}

}

// BrnGameActions.h:853
struct BrnGameState::GameStateModuleIO::PrepareForModeAction : public GameAction<E_ACTION_PREPARE_FOR_MODE> {
private:
	// BrnGameActions.h:936
	BrnGameState::GameStateModuleIO::PrepareForModeAction::EPrepareForModeStage mePrepareForModeStage;

	// BrnGameActions.h:938
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex[8] maePlayerScoringIndex;

	// BrnGameActions.h:939
	GameModeParams mGameModeParams;

	// BrnGameActions.h:940
	int32_t miCurrentRound;

	// BrnGameActions.h:941
	bool mbComingFromOnlineLobbyMode;

	// BrnGameActions.h:942
	bool mbFinishedOnlineEvent;

	// BrnGameActions.h:943
	bool mbStartingFreeburnDueToPlayerJoin;

	// BrnGameActions.h:946
	GuiEventNetworkLaunching::NetworkPlayerID[8] maDisconnectedNetworkPlayerID;

	// BrnGameActions.h:947
	int32_t miNumPlayersDisconnected;

	// BrnGameActions.h:948
	float32_t mfPlayerBoostEarning;

	// BrnGameActions.h:949
	int32_t miShotGroup;

public:
	// BrnGameActions.h:870
	void Construct(const GameModeParams *, int32_t, bool);

	// BrnGameActions.h:874
	const GameModeParams * GetGameModeParams() const;

	// BrnGameActions.h:877
	int32_t GetCurrentRound() const;

	// BrnGameActions.h:880
	bool IsMovingBetweenOnlineLobbyModes() const;

	// BrnGameActions.h:885
	void SetPlayerScoringIndex(int32_t, BrnGameState::GameStateModuleIO::EPlayerScoringIndex);

	// BrnGameActions.h:889
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex GetPlayerScoringIndex(int32_t) const;

	// BrnGameActions.h:893
	bool GetPlayerDisconnected(GuiEventNetworkLaunching::NetworkPlayerID) const;

	// BrnGameActions.h:897
	void SetPlayerDisconnected(GuiEventNetworkLaunching::NetworkPlayerID);

	// BrnGameActions.h:900
	float32_t GetPlayerBoostEarning() const;

	// BrnGameActions.h:904
	void SetPlayerBoostEarning(float32_t);

	// BrnGameActions.h:907
	int32_t GetShotGroup() const;

	// BrnGameActions.h:911
	void SetShotGroup(int32_t);

	// BrnGameActions.h:914
	bool GetFinishedOnlineEvent() const;

	// BrnGameActions.h:918
	void SetFinishedOnlineEvent(bool);

	// BrnGameActions.h:921
	bool IsFirstPrepareForMode() const;

	// BrnGameActions.h:925
	void SetPrepareStage(BrnGameState::GameStateModuleIO::PrepareForModeAction::EPrepareForModeStage);

	// BrnGameActions.h:929
	void SetStartingFreeburnLobbyDueToPlayerJoin(bool);

	// BrnGameActions.h:932
	bool GetStartingFreeburnLobbyDueToPlayerJoin() const;

}

// BrnGameActions.h:5153
struct BrnGameState::GameStateModuleIO::OnlineGameResults : public GameAction<E_ACTION_ONLINE_GAME_RESULT> {
	// BrnGameActions.h:5157
	CgsID mCarUsed;

	// BrnGameActions.h:5159
	Time mSecondsInEvent;

	// BrnGameActions.h:5160
	float32_t mfMetersDriven;

	// BrnGameActions.h:5162
	int32_t miTakedownsFor;

	// BrnGameActions.h:5163
	int32_t miTakedownsAgainst;

	// BrnGameActions.h:5164
	int32_t miTraitorousTakedownsFor;

	// BrnGameActions.h:5165
	int32_t miTraitorousTakedownsAgainst;

	// BrnGameActions.h:5167
	int32_t miMarkedManTakedownsFor;

	// BrnGameActions.h:5168
	int32_t miMarkedManTakedownsAgainst;

	// BrnGameActions.h:5169
	int32_t miMarksFor;

	// BrnGameActions.h:5170
	int32_t miMarksAgainst;

	// BrnGameActions.h:5171
	int32_t miPaybacksUsedFor;

	// BrnGameActions.h:5172
	int32_t miPaybacksUsedAgainst;

	// BrnGameActions.h:5173
	int32_t miPaybacksSuccededFor;

	// BrnGameActions.h:5174
	int32_t miPaybacksSuccededAgainst;

	// BrnGameActions.h:5175
	int32_t miNumberOfCrashes;

	// BrnGameActions.h:5177
	int32_t miNumberOfRounds;

	// BrnGameActions.h:5178
	int32_t miNumberOfRoundsPlayed;

	// BrnGameActions.h:5179
	int32_t miNumberOfPlayers;

	// BrnGameActions.h:5180
	int32_t miEventType;

	// BrnGameActions.h:5181
	bool mbIsRanked;

private:
	// BrnGameActions.h:5213
	int32_t[10] maiPositions;

	// BrnGameActions.h:5214
	GuiEventNetworkLaunching::NetworkPlayerID[10][8] maaConnectedPlayerIDs;

public:
	// BrnGameActions.h:5185
	void Clear();

	// BrnGameActions.h:5189
	int32_t GetWins() const;

	// BrnGameActions.h:5194
	void SetPosition(int32_t, int32_t);

	// BrnGameActions.h:5198
	int32_t GetPosition(int32_t) const;

	// BrnGameActions.h:5204
	void SetConnectedPlayerID(GuiEventNetworkLaunching::NetworkPlayerID, EActiveRaceCarIndex, int32_t);

	// BrnGameActions.h:5209
	GuiEventNetworkLaunching::NetworkPlayerID GetConnectedPlayerID(EActiveRaceCarIndex, int32_t) const;

}

// BrnGameActions.h:5227
struct BrnGameState::GameStateModuleIO::OnlineRoundResults : public GameAction<E_ACTION_ONLINE_ROUND_RESULT> {
	// BrnGameActions.h:5230
	extern const int32_t KI_POSITION_DISCONNECTED = 4294967295;

private:
	// BrnGameActions.h:5248
	GuiEventNetworkLaunching::NetworkPlayerID[8] maPlayerPosition;

	// BrnGameActions.h:5249
	Array<CgsNetwork::NetworkPlayerID,8u> maDisconnectedPlayers;

public:
	// BrnGameActions.h:5233
	void Construct();

	// BrnGameActions.h:5238
	void SetPosition(GuiEventNetworkLaunching::NetworkPlayerID, int32_t);

	// BrnGameActions.h:5242
	int32_t GetPosition(GuiEventNetworkLaunching::NetworkPlayerID) const;

	// BrnGameActions.h:5245
	GuiEventNetworkLaunching::NetworkPlayerID GetWinner() const;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// Declaration
		struct UpcomingRoadChangeAction {
			// BrnGameActions.h:4829
			enum ESignState {
				E_SIGN_STATE_INVALID = -1,
				E_SIGN_STATE_GREEN = 0,
				E_SIGN_STATE_RED = 1,
				E_SIGN_STATE_FLASHING = 2,
				E_SIGN_STATE_COUNT = 3,
			}

		}

		// BrnGameActions.h:92
		using BrnNetwork::BrnNetworkModuleIO;

		// BrnGameActions.h:95
		enum EGameActionType {
			E_ACTION_RESET_PLAYER_CAR = 0,
			E_ACTION_GUI_UPDATE_PLAYER_CAR_ID = 1,
			E_ACTION_GUI_CAR_UNLOCK = 2,
			E_ACTION_RESET_PLAYER_CAR_ON_TRACK = 3,
			E_ACTION_SET_PLAYER_OPPONENTS = 4,
			E_ACTION_SETUP_NETWORK_CAR = 5,
			E_ACTION_SET_TAKEDOWN_CAMERA_STATE = 6,
			E_ACTION_SET_PLAYER_CAR_DRIVER = 7,
			E_ACTION_FORCE_PLAYER_CAR_DRIVER = 8,
			E_ACTION_RESET_CRASHING = 9,
			E_ACTION_RESET_RACE_CAR_CRASHING = 10,
			E_ACTION_REMOTE_PLAYER_DISCONNECTED = 11,
			E_ACTION_NOTIFY_DIRECTOR_LOCAL_PLAYER_DISCONNECTED = 12,
			E_ACTION_EMPTY_TRAFFIC_POOL = 13,
			E_ACTION_ON_PLAYER_TAKEDOWN = 14,
			E_ACTION_COMPLETED_STUNT = 15,
			E_ACTION_INPROGRESS_STUNT = 16,
			E_ACTION_PLAYER_CRASH_ENDING_SOON = 17,
			E_ACTION_CHECK_FOR_LOADING_SCREEN = 18,
			E_ACTION_PREPARE_FOR_MODE = 19,
			E_ACTION_BROADCAST_MODE_FINISH_LINES = 20,
			E_ACTION_STOP_MODE_OFFLINE = 21,
			E_ACTION_FINISH_MODE_ONLINE = 22,
			E_ACTION_FINISH_MODE_FINAL_ONLINE = 23,
			E_ACTION_SET_TRAFFIC_SCALE_BASED_ON_RANK = 24,
			E_ACTION_START_MODE_INTRO = 25,
			E_ACTION_STOP_MODE_INTRO = 26,
			E_ACTION_MARKED_MAN_LOADED = 27,
			E_ACTION_STOP_MODE_SPLASH = 28,
			E_ACTION_STOP_MODE_COUNTDOWN = 29,
			E_ACTION_START_PLAYING_MODE = 30,
			E_ACTION_FINISHED_MODE = 31,
			E_ACTION_SHOW_MODE_RESULTS = 32,
			E_ACTION_FINISHED_MODE_RESULTS = 33,
			E_ACTION_STOP_MODE = 34,
			E_ACTION_QUIT_MODE_OFFLINE = 35,
			E_ACTION_QUIT_MODE_ONLINE = 36,
			E_ACTION_IMPACT_TIME_START = 37,
			E_ACTION_IMPACT_TIME_END = 38,
			E_ACTION_SET_IN_MODE_START_REGION = 39,
			E_ACTION_SET_UP_ALL_DRIVE_THRUS = 40,
			E_ACTION_CLOSE_DRIVE_THRU = 41,
			E_ACTION_SET_COUNTDOWN = 42,
			E_ACTION_SHOW_HUD_MESSAGE = 43,
			E_ACTION_SHOW_POPUP = 44,
			E_ACTION_REQUEST_ROUTE_INFO = 45,
			E_ACTION_SET_LANDMARK_RACES = 46,
			E_ACTION_DAMAGE_CRITICAL = 47,
			E_ACTION_PLAYER_HIT_RIVAL = 48,
			E_ACTION_RIVAL_HIT_PLAYER = 49,
			E_ACTION_REQUEST_AUTOSAVE = 50,
			E_ACTION_ON_JUMP_START = 51,
			E_ACTION_SHOW_JUMP_NAME = 52,
			E_ACTION_ON_STUNT_ELEMENT_COMPLETE = 53,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_FOR_COUNTY = 54,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_BY_TYPE = 55,
			E_ACTION_STUNT_ELEMENT_BOOST = 56,
			E_ACTION_NEW_CAR_UNLOCKED = 57,
			E_ACTION_CAR_UNLOCK_END = 58,
			E_ACTION_CAR_SELECTION_CHANGED = 59,
			E_ACTION_CAR_SELECTION_CHANGED_DROPIN = 60,
			E_ACTION_CAR_SELECTION_DROPIN_COMPLETE = 61,
			E_ACTION_CAR_SELECTION_CHANGED_ONLINE = 62,
			E_ACTION_SWITCH_CAR_CORONAS_ON_OFF = 63,
			E_ACTION_CAR_SELECTION_REQUEST_STREAMING = 64,
			E_ACTION_ALLOW_BOOST_EARNING = 65,
			E_ACTION_STOP_BOOSTING = 66,
			E_ACTION_CAR_SELECT_START_GUI_ON_GAME_START = 67,
			E_ACTION_CAR_SELECT_TRANSITION_IN = 68,
			E_ACTION_CAR_SELECT_WAITING_FOR_AUDIO = 69,
			E_ACTION_CAR_SELECT_READY = 70,
			E_ACTION_CAR_SELECT_MODIFICATION_SCREEN = 71,
			E_ACTION_CAR_SELECT_EXIT = 72,
			E_ACTION_CAR_SELECT_ABORT = 73,
			E_ACTION_CAR_SELECT_CHANGE_COLOUR = 74,
			E_ACTION_CAR_SELECT_PAUSED_IN_CAR_SELECT = 75,
			E_ACTION_PLAYER_CAR_COLOUR_RESPONSE = 76,
			E_ACTION_CAR_SELECT_ONLINE_TIME_LEFT = 77,
			E_ACTION_CAR_SELECT_ONLINE_END = 78,
			E_ACTION_CAR_SELECT_ONLINE_SELECT_CAR = 79,
			E_ACTION_CAR_SELECT_ONLINE_CAR_IS_SHOWABLE = 80,
			E_ACTION_PAUSE_SIMULATION = 81,
			E_ACTION_UNPAUSE_SIMULATION = 82,
			E_ACTION_PAUSE_ONLINE = 83,
			E_ACTION_UNPAUSE_ONLINE = 84,
			E_ACTION_PROMPT_START_OFFLINE_GAME_MODE = 85,
			E_ACTION_PROMPT_DO_INVITE = 86,
			E_ACTION_START_PREPARE_FOR_INVITE = 87,
			E_ACTION_UPDATE_PREPARE_FOR_INVITE = 88,
			E_ACTION_PREPARED_FOR_INVITE = 89,
			E_ACTION_PERFORM_INVITE = 90,
			E_ACTION_INVITE_COMPLETE = 91,
			E_ACTION_DRIVE_THRU_BODY_SHOP = 92,
			E_ACTION_DRIVE_THRU_PAINT_SHOP = 93,
			E_ACTION_DRIVE_THRU_JUNK_YARD = 94,
			E_ACTION_DRIVE_THRU_GAS_STATION = 95,
			E_ACTION_DRIVE_THRU_CLOSED = 96,
			E_ACTION_DRIVE_THRU_STOP_PRESENTATION = 97,
			E_ACTION_PLAYER_REACHED_ROAD_RAGE_TARGET = 98,
			E_ACTION_DRIVE_THRU_DISCOVERED = 99,
			E_ACTION_ALL_DRIVE_THRUS_DISCOVERED = 100,
			E_ACTION_DRIVE_THRU_JUNK_YARD_ON_GAME_START = 101,
			E_ACTION_ON_TRAFFIC_CHECKING = 102,
			E_ACTION_ON_TRAFFIC_CHECKING_CHAIN = 103,
			E_ACTION_TRIGGER = 104,
			E_ACTION_KILLZONE = 105,
			E_ACTION_PLAYER_INVULNERABLE = 106,
			E_ACTION_WORLD_REGION_CHANGE = 107,
			E_ACTION_RACE_CAR_REACHED_CHECKPOINT = 108,
			E_ACTION_RACE_CAR_REACHED_FINISH = 109,
			E_ACTION_PLAYER_REACHED_PENULTIMATE_CHECKPOINT = 110,
			E_ACTION_TRAFFIC_TYPE_REQUEST = 111,
			E_ACTION_TRACK_PLAYER_TO_LOCATION = 112,
			E_ACTION_SET_WAYPOINT_DISTANCES_TO_FINISH = 113,
			E_ACTION_PLAYER_RESET_ON_TRACK = 114,
			E_ACTION_SHUTDOWN = 115,
			E_ACTION_SHUTDOWN_FINISHED = 116,
			E_ACTION_AWARD_SEQUENCE_START = 117,
			E_ACTION_AWARD_SEQUENCE_END = 118,
			E_ACTION_CRASH_COMBO = 119,
			E_ACTION_SET_SIXAXIS_STEERING = 120,
			E_ACTION_SWITCH_CAR_COLOUR = 121,
			E_ACTION_WORLD_STUNT_PERFORMED = 122,
			E_ACTION_OVERHEAD_SIGN_HIT = 123,
			E_ACTION_ALLOW_CAR_TO_JOIN_ROAD_RAGE = 124,
			E_ACTION_HIDE_CAR_IN_ROAD_RAGE = 125,
			E_ACTION_UPDATE_ROAD_RAGE_MADNESS = 126,
			E_ACTION_TRIGGER_CRASH_BREAKER = 127,
			E_ACTION_CANCEL_CRASH_BREAKER = 128,
			E_ACTION_ENTER_SHOWTIME_BONUS_REGION = 129,
			E_ACTION_TOGGLE_SHOWTIME_BEHAVIOUR = 130,
			E_ACTION_VEHICLE_LEAPT = 131,
			E_ACTION_VEHICLE_HIT = 132,
			E_ACTION_ENTER_NEW_ROAD = 133,
			E_ACTION_SHOWTIME_UPDATE = 134,
			E_ACTION_SHOWTIME_MODE_SWITCH = 135,
			E_ACTION_JUST_BOUNCED = 136,
			E_ACTION_JUST_APPLIED_EXTRA_SPIN = 137,
			E_ACTION_SHOWTIME_INTRO_START = 138,
			E_ACTION_POWER_PARK_RESULT = 139,
			E_ACTION_GAME_TRAINING = 140,
			E_ACTION_GAME_TRAINING_REQUEST = 141,
			E_ACTION_GAME_TRAINING_PAUSE = 142,
			E_ACTION_GAME_TRAINING_UNPAUSE = 143,
			E_ACTION_MODE_TIME_TIMEOUT = 144,
			E_ACTION_FREEBURN_CHALLENGE = 145,
			E_ACTION_FREEBURN_CHALLENGE_END_NOT_ACTIVE = 146,
			E_ACTION_FREEBURN_CHALLENGE_UPDATE = 147,
			E_ACTION_FREEBURN_CHALLENGE_COMPLETION_STATUS = 148,
			E_ACTION_FREEBURN_CHALLENGE_EVERY_PLAYER_COMPLETION_STATUS = 149,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE = 150,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS = 151,
			E_ACTION_FREEBURN_CHALLENGE_SHOW_SELECTOR = 152,
			E_ACTION_ACTIVE_FREEBURN_CHALLENGE = 153,
			E_ACTION_BLUE_TEAM_IS_ESCAPING = 154,
			E_ACTION_BLUE_TEAM_IS_BEHIND_YOU = 155,
			E_ACTION_LEADER_REACHED_BOUNDARY = 156,
			E_ACTION_PLAYER_ELIMINATED = 157,
			E_ACTION_TRAITOROUS_TAKEDOWN = 158,
			E_ACTION_SWITCH_BURNING_HOME_RUN_RUNNER = 159,
			E_ACTION_BURNOUT_SKILLZ = 160,
			E_ACTION_ROAD_RULES_SKILLZ = 161,
			E_ACTION_SET_BOOST = 162,
			E_ACTION_NEAR_MISS = 163,
			E_ACTION_DRIFTING = 164,
			E_ACTION_SPINNING = 165,
			E_ACTION_IN_AIR = 166,
			E_ACTION_ONCOMING = 167,
			E_ACTION_TAILGATING = 168,
			E_ACTION_DISTANCE_DRIVEN = 169,
			E_ACTION_AFTERTOUCH = 170,
			E_ACTION_EVENT_STATE_RESPONSE = 171,
			E_ACTION_GAME_STATS_RESPONSE = 172,
			E_ACTION_RANK_INFO_RESPONSE = 173,
			E_ACTION_PLAYER_INFO_RESPONSE = 174,
			E_ACTION_UNLOCKED_LIVERY_RESPONSE = 175,
			E_ACTION_CAR_SELECTION_RESPONSE = 176,
			E_ACTION_LANDMARK_VARIABLE_INFO_RESPONSE = 177,
			E_ACTION_REGION_FROM_POSITION_RESPONSE = 178,
			E_ACTION_UPDATE_GUI_ROUTE = 179,
			E_ACTION_ALL_RIVALRY_DATA_RESPONSE = 180,
			E_ACTION_ONE_RIVALRY_DATA_RESPONSE = 181,
			E_ACTION_SHOW_SATNAV = 182,
			E_ACTION_SET_LOADING_STATE = 183,
			E_ACTION_WAIT_FOR_STREAMING = 184,
			E_ACTION_PROGRESSION_PROFILE_DATA = 185,
			E_ACTION_LOAD_PROFILE = 186,
			E_ACTION_REMOVE_ALL_RIVALS = 187,
			E_ACTION_ADD_RIVAL = 188,
			E_ACTION_RIVAL_STATE_CHANGED = 189,
			E_ACTION_UPDATE_CAR_STATS = 190,
			E_ACTION_PROP_SMASH_PROGRESSION = 191,
			E_ACTION_UPDATE_PLAYER_MEDALS = 192,
			E_ACTION_EVENT_AT_JUNCTION_AVAILABLE = 193,
			E_ACTION_ALL_EVENTS_DISCOVERED = 194,
			E_ACTION_ALL_EVENTS_OF_TYPE_DISCOVERED = 195,
			E_ACTION_TROPHY_UNLOCK = 196,
			E_ACTION_ROAD_RAGE_PLAYER_DAMAGE = 197,
			E_ACTION_ALL_EVENT_TYPE_WON = 198,
			E_ACTION_RIVAL_UNLOCKED_INTO_THE_WORLD_ACTION = 199,
			E_ACTION_ONE_HUNDRED_PERCENT_COMPLETE = 200,
			E_ACTION_ACHIEVEMENTS_EARNED = 201,
			E_ACTION_ALL_RIVALS_SHUTDOWN = 202,
			E_ACTION_PAYBACK_LOST = 203,
			E_ACTION_PAYBACK_VICTIM_LEFT_GAME = 204,
			E_ACTION_PAYBACK_MUGSHOT = 205,
			E_ACTION_ABORT_MUGSHOT_CAPTURE = 206,
			E_ACTION_PAYBACK_ACTIVATED = 207,
			E_ACTION_PAYBACK_OVER = 208,
			E_ACTION_PAYBACK_SUCCEEDED = 209,
			E_ACTION_SOUND_TRIGGER = 210,
			E_ACTION_ONLINE_PLAYER_ADDED = 211,
			E_ACTION_ONLINE_PLAYER_REMOVED = 212,
			E_ACTION_OFFLINE_ADD_CAR_TO_MODE = 213,
			E_ACTION_OFFLINE_REMOVE_CAR_FROM_MODE = 214,
			E_ACTION_CAR_ADDITION_PRESENTATION_START = 215,
			E_ACTION_CAR_ADDITION_PRESENTATION_END = 216,
			E_ACTION_LOCAL_PLAYER_DISCONNECTED = 217,
			E_ACTION_LOCAL_PLAYER_LEFT_GAME = 218,
			E_ACTION_UPDATE_RICH_PRESENCE = 219,
			E_ACTION_SEND_TELEMETRY = 220,
			E_ACTION_ONLINE_GAME_RESULT = 221,
			E_ACTION_ONLINE_ROUND_RESULT = 222,
			E_ACTION_ONLINE_LAUNCH_FREE_BURN_LOBBY = 223,
			E_ACTION_ROAD_RULES_CHALLENGE_SCORES = 224,
			E_ACTION_ROAD_RULES_PERSONAL_BEST = 225,
			E_ACTION_ROAD_RULES_OVERWRITE_SERVER_RECORD = 226,
			E_ACTION_START_GAME_THROUGH_PLAYER_JOIN = 227,
			E_ACTION_RESTART_TRAFFIC = 228,
			E_ACTION_NETWORK_COLLECTABLE = 229,
			E_ACTION_NETWORK_CAUGHT_FEVER = 230,
			E_ACTION_REQUEST_GAMERCARD = 231,
			E_ACTION_HUD_MESSAGE_TOOK_LEAD = 232,
			E_ACTION_HUD_MESSAGE_TOOK_LAST = 233,
			E_ACTION_HUD_MESSAGE_DIST_TO_FINISH = 234,
			E_ACTION_HUD_MESSAGE_LEADING = 235,
			E_ACTION_HUD_MESSAGE_NECK_AND_NECK = 236,
			E_ACTION_HUD_MESSAGE_X_FINISHES = 237,
			E_ACTION_HUD_MESSAGE_X_REACHES_CHECKPOINT = 238,
			E_ACTION_HUD_MESSAGE_PLAYER_REACHES_CHECKPOINT = 239,
			E_ACTION_HUD_MESSAGE_X_CRASHES = 240,
			E_ACTION_HUD_MESSAGE_WRONG_WAY = 241,
			E_ACTION_HUD_MESSAGE_STUNT_PERFORMED = 242,
			E_ACTION_HUD_MESSAGE_COMBO_PERFORMED = 243,
			E_ACTION_HUD_MESSAGE_STUNT_TIME_UP = 244,
			E_ACTION_HUD_MESSAGE_BHR_CHECKPOINT = 245,
			E_ACTION_HUD_MESSAGE_BHR_RUNNER_CRASHED = 246,
			E_ACTION_HUD_MESSAGE_ONLINE_TEAM_CHANGE = 247,
			E_ACTION_HUD_MESSAGE_ROAD_RAGE_TIME_EXTENSION = 248,
			E_ACTION_HUD_MESSAGE_RIVAL_FIRST_HIT = 249,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_RIVAL = 250,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_TARGET = 251,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_FLEEING = 252,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_WRECKED = 253,
			E_ACTION_HUD_MESSAGE_PLAYER_CAN_SKIP_CRASH = 254,
			E_ACTION_HUD_MESSAGE_TIME_UP = 255,
			E_ACTION_HUD_MESSAGE_CANT_PAINT = 256,
			E_ACTION_HUD_MESSAGE_MUST_FIX = 257,
			E_ACTION_HUD_MESSAGE_JUMP_FAILED = 258,
			E_ACTION_WRONG_CAR_FOR_CHALLENGE = 259,
			E_ACTION_ROAD_RULES_ENTER_ROAD = 260,
			E_ACTION_ROAD_RULES_LEAVE_ROAD = 261,
			E_ACTION_ROAD_RULES_BATCH_QUERY = 262,
			E_ACTION_UPCOMING_ROAD_CHANGE = 263,
			E_ACTION_ROAD_RULES_START_RULE = 264,
			E_ACTION_ROAD_RULES_END_RULE = 265,
			E_ACTION_ROAD_RULES_UPDATE = 266,
			E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE = 267,
			E_ACTION_ROAD_RULES_NEW_HIGH_SCORE = 268,
			E_ACTION_ROAD_RULES_ACTIVE_RULE_CHANGE = 269,
			E_ACTION_ROAD_RULES_TIME_WARNING = 270,
			E_ACTION_ROAD_RULES_ROAD_SCORE = 271,
			E_ACTION_ROAD_RULES_NEW_RULERS = 272,
			E_ACTION_ROAD_RULES_MODE_SWITCH = 273,
			E_ACTION_PLAYER_IN_SHORTCUT = 274,
			E_ACTION_IMAGE_GALLERY_RENDER_IMAGE = 275,
			E_ACTION_IMAGE_GALLERY_IMAGE_INFO = 276,
			E_ACTION_IMAGE_GALLERY_COUNT_ACTION = 277,
			E_ACTION_IMAGE_GALLERY_DATA_ACTION = 278,
			E_ACTION_IMAGE_GALLERY_LOAD_COMPLETE = 279,
			E_ACTION_SAVE_IMAGE_AND_AUTOSAVE = 280,
			E_ACTION_LOAD_IMAGES = 281,
			E_ACTION_DXT_DECODE_IMAGE = 282,
			E_ACTION_SOUND_BIND_PROPS = 283,
			E_ACTION_COUNT = 284,
		}

		// BrnGameActions.h:462
		const int32_t KI_EVENT_MANAGER_DEFAULT_ACTION_QUEUE_LENGTH = 13312;

		// BrnGameActions.h:463
		const int32_t KI_EVENT_MANAGER_SMALL_ACTION_QUEUE_LENGTH = 256;

	}

}

// BrnGameActions.h:475
struct BrnGameState::GameStateModuleIO::GameAction<E_ACTION_EMPTY_TRAFFIC_POOL> : public Event {
	// BrnGameActions.h:478
	extern const BrnGameState::GameStateModuleIO::EGameActionType mseType;

}

// BrnGameActions.h:4004
struct BrnGameState::GameStateModuleIO::EmptyTrafficMemoryPool : public GameAction<E_ACTION_EMPTY_TRAFFIC_POOL> {
	// BrnGameActions.h:4006
	bool mbEmptyPool;

}

// BrnGameActions.h:501
extern bool AddGameAction<BrnGameState::GameStateModuleIO::EmptyTrafficMemoryPool>(const const EmptyTrafficMemoryPool &  lAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameActions.h:92
		using BrnNetwork::BrnNetworkModuleIO;

		// BrnGameActions.h:95
		enum EGameActionType {
			E_ACTION_RESET_PLAYER_CAR = 0,
			E_ACTION_GUI_UPDATE_PLAYER_CAR_ID = 1,
			E_ACTION_GUI_CAR_UNLOCK = 2,
			E_ACTION_RESET_PLAYER_CAR_ON_TRACK = 3,
			E_ACTION_SET_PLAYER_OPPONENTS = 4,
			E_ACTION_SETUP_NETWORK_CAR = 5,
			E_ACTION_SET_TAKEDOWN_CAMERA_STATE = 6,
			E_ACTION_SET_PLAYER_CAR_DRIVER = 7,
			E_ACTION_FORCE_PLAYER_CAR_DRIVER = 8,
			E_ACTION_RESET_CRASHING = 9,
			E_ACTION_RESET_RACE_CAR_CRASHING = 10,
			E_ACTION_REMOTE_PLAYER_DISCONNECTED = 11,
			E_ACTION_NOTIFY_DIRECTOR_LOCAL_PLAYER_DISCONNECTED = 12,
			E_ACTION_EMPTY_TRAFFIC_POOL = 13,
			E_ACTION_ON_PLAYER_TAKEDOWN = 14,
			E_ACTION_COMPLETED_STUNT = 15,
			E_ACTION_INPROGRESS_STUNT = 16,
			E_ACTION_PLAYER_CRASH_ENDING_SOON = 17,
			E_ACTION_CHECK_FOR_LOADING_SCREEN = 18,
			E_ACTION_PREPARE_FOR_MODE = 19,
			E_ACTION_BROADCAST_MODE_FINISH_LINES = 20,
			E_ACTION_STOP_MODE_OFFLINE = 21,
			E_ACTION_FINISH_MODE_ONLINE = 22,
			E_ACTION_FINISH_MODE_FINAL_ONLINE = 23,
			E_ACTION_SET_TRAFFIC_SCALE_BASED_ON_RANK = 24,
			E_ACTION_START_MODE_INTRO = 25,
			E_ACTION_STOP_MODE_INTRO = 26,
			E_ACTION_MARKED_MAN_LOADED = 27,
			E_ACTION_STOP_MODE_SPLASH = 28,
			E_ACTION_STOP_MODE_COUNTDOWN = 29,
			E_ACTION_START_PLAYING_MODE = 30,
			E_ACTION_FINISHED_MODE = 31,
			E_ACTION_SHOW_MODE_RESULTS = 32,
			E_ACTION_FINISHED_MODE_RESULTS = 33,
			E_ACTION_STOP_MODE = 34,
			E_ACTION_QUIT_MODE_OFFLINE = 35,
			E_ACTION_QUIT_MODE_ONLINE = 36,
			E_ACTION_IMPACT_TIME_START = 37,
			E_ACTION_IMPACT_TIME_END = 38,
			E_ACTION_SET_IN_MODE_START_REGION = 39,
			E_ACTION_SET_UP_ALL_DRIVE_THRUS = 40,
			E_ACTION_CLOSE_DRIVE_THRU = 41,
			E_ACTION_SET_COUNTDOWN = 42,
			E_ACTION_SHOW_HUD_MESSAGE = 43,
			E_ACTION_SHOW_POPUP = 44,
			E_ACTION_REQUEST_ROUTE_INFO = 45,
			E_ACTION_SET_LANDMARK_RACES = 46,
			E_ACTION_DAMAGE_CRITICAL = 47,
			E_ACTION_PLAYER_HIT_RIVAL = 48,
			E_ACTION_RIVAL_HIT_PLAYER = 49,
			E_ACTION_REQUEST_AUTOSAVE = 50,
			E_ACTION_ON_JUMP_START = 51,
			E_ACTION_SHOW_JUMP_NAME = 52,
			E_ACTION_ON_STUNT_ELEMENT_COMPLETE = 53,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_FOR_COUNTY = 54,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_BY_TYPE = 55,
			E_ACTION_STUNT_ELEMENT_BOOST = 56,
			E_ACTION_NEW_CAR_UNLOCKED = 57,
			E_ACTION_CAR_UNLOCK_END = 58,
			E_ACTION_CAR_SELECTION_CHANGED = 59,
			E_ACTION_CAR_SELECTION_CHANGED_DROPIN = 60,
			E_ACTION_CAR_SELECTION_DROPIN_COMPLETE = 61,
			E_ACTION_CAR_SELECTION_CHANGED_ONLINE = 62,
			E_ACTION_SWITCH_CAR_CORONAS_ON_OFF = 63,
			E_ACTION_CAR_SELECTION_REQUEST_STREAMING = 64,
			E_ACTION_ALLOW_BOOST_EARNING = 65,
			E_ACTION_STOP_BOOSTING = 66,
			E_ACTION_CAR_SELECT_START_GUI_ON_GAME_START = 67,
			E_ACTION_CAR_SELECT_TRANSITION_IN = 68,
			E_ACTION_CAR_SELECT_WAITING_FOR_AUDIO = 69,
			E_ACTION_CAR_SELECT_READY = 70,
			E_ACTION_CAR_SELECT_MODIFICATION_SCREEN = 71,
			E_ACTION_CAR_SELECT_EXIT = 72,
			E_ACTION_CAR_SELECT_ABORT = 73,
			E_ACTION_CAR_SELECT_CHANGE_COLOUR = 74,
			E_ACTION_CAR_SELECT_PAUSED_IN_CAR_SELECT = 75,
			E_ACTION_PLAYER_CAR_COLOUR_RESPONSE = 76,
			E_ACTION_CAR_SELECT_ONLINE_TIME_LEFT = 77,
			E_ACTION_CAR_SELECT_ONLINE_END = 78,
			E_ACTION_CAR_SELECT_ONLINE_SELECT_CAR = 79,
			E_ACTION_CAR_SELECT_ONLINE_CAR_IS_SHOWABLE = 80,
			E_ACTION_PAUSE_SIMULATION = 81,
			E_ACTION_UNPAUSE_SIMULATION = 82,
			E_ACTION_PAUSE_ONLINE = 83,
			E_ACTION_UNPAUSE_ONLINE = 84,
			E_ACTION_PROMPT_START_OFFLINE_GAME_MODE = 85,
			E_ACTION_PROMPT_DO_INVITE = 86,
			E_ACTION_START_PREPARE_FOR_INVITE = 87,
			E_ACTION_UPDATE_PREPARE_FOR_INVITE = 88,
			E_ACTION_PREPARED_FOR_INVITE = 89,
			E_ACTION_PERFORM_INVITE = 90,
			E_ACTION_INVITE_COMPLETE = 91,
			E_ACTION_DRIVE_THRU_BODY_SHOP = 92,
			E_ACTION_DRIVE_THRU_PAINT_SHOP = 93,
			E_ACTION_DRIVE_THRU_JUNK_YARD = 94,
			E_ACTION_DRIVE_THRU_GAS_STATION = 95,
			E_ACTION_DRIVE_THRU_CLOSED = 96,
			E_ACTION_DRIVE_THRU_STOP_PRESENTATION = 97,
			E_ACTION_PLAYER_REACHED_ROAD_RAGE_TARGET = 98,
			E_ACTION_DRIVE_THRU_DISCOVERED = 99,
			E_ACTION_ALL_DRIVE_THRUS_DISCOVERED = 100,
			E_ACTION_DRIVE_THRU_JUNK_YARD_ON_GAME_START = 101,
			E_ACTION_ON_TRAFFIC_CHECKING = 102,
			E_ACTION_ON_TRAFFIC_CHECKING_CHAIN = 103,
			E_ACTION_TRIGGER = 104,
			E_ACTION_KILLZONE = 105,
			E_ACTION_PLAYER_INVULNERABLE = 106,
			E_ACTION_WORLD_REGION_CHANGE = 107,
			E_ACTION_RACE_CAR_REACHED_CHECKPOINT = 108,
			E_ACTION_RACE_CAR_REACHED_FINISH = 109,
			E_ACTION_PLAYER_REACHED_PENULTIMATE_CHECKPOINT = 110,
			E_ACTION_TRAFFIC_TYPE_REQUEST = 111,
			E_ACTION_TRACK_PLAYER_TO_LOCATION = 112,
			E_ACTION_SET_WAYPOINT_DISTANCES_TO_FINISH = 113,
			E_ACTION_PLAYER_RESET_ON_TRACK = 114,
			E_ACTION_SHUTDOWN = 115,
			E_ACTION_SHUTDOWN_FINISHED = 116,
			E_ACTION_AWARD_SEQUENCE_START = 117,
			E_ACTION_AWARD_SEQUENCE_END = 118,
			E_ACTION_CRASH_COMBO = 119,
			E_ACTION_SET_SIXAXIS_STEERING = 120,
			E_ACTION_SWITCH_CAR_COLOUR = 121,
			E_ACTION_WORLD_STUNT_PERFORMED = 122,
			E_ACTION_OVERHEAD_SIGN_HIT = 123,
			E_ACTION_ALLOW_CAR_TO_JOIN_ROAD_RAGE = 124,
			E_ACTION_HIDE_CAR_IN_ROAD_RAGE = 125,
			E_ACTION_UPDATE_ROAD_RAGE_MADNESS = 126,
			E_ACTION_TRIGGER_CRASH_BREAKER = 127,
			E_ACTION_CANCEL_CRASH_BREAKER = 128,
			E_ACTION_ENTER_SHOWTIME_BONUS_REGION = 129,
			E_ACTION_TOGGLE_SHOWTIME_BEHAVIOUR = 130,
			E_ACTION_VEHICLE_LEAPT = 131,
			E_ACTION_VEHICLE_HIT = 132,
			E_ACTION_ENTER_NEW_ROAD = 133,
			E_ACTION_SHOWTIME_UPDATE = 134,
			E_ACTION_SHOWTIME_MODE_SWITCH = 135,
			E_ACTION_JUST_BOUNCED = 136,
			E_ACTION_JUST_APPLIED_EXTRA_SPIN = 137,
			E_ACTION_SHOWTIME_INTRO_START = 138,
			E_ACTION_POWER_PARK_RESULT = 139,
			E_ACTION_GAME_TRAINING = 140,
			E_ACTION_GAME_TRAINING_REQUEST = 141,
			E_ACTION_GAME_TRAINING_PAUSE = 142,
			E_ACTION_GAME_TRAINING_UNPAUSE = 143,
			E_ACTION_MODE_TIME_TIMEOUT = 144,
			E_ACTION_FREEBURN_CHALLENGE = 145,
			E_ACTION_FREEBURN_CHALLENGE_END_NOT_ACTIVE = 146,
			E_ACTION_FREEBURN_CHALLENGE_UPDATE = 147,
			E_ACTION_FREEBURN_CHALLENGE_COMPLETION_STATUS = 148,
			E_ACTION_FREEBURN_CHALLENGE_EVERY_PLAYER_COMPLETION_STATUS = 149,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE = 150,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS = 151,
			E_ACTION_FREEBURN_CHALLENGE_SHOW_SELECTOR = 152,
			E_ACTION_ACTIVE_FREEBURN_CHALLENGE = 153,
			E_ACTION_BLUE_TEAM_IS_ESCAPING = 154,
			E_ACTION_BLUE_TEAM_IS_BEHIND_YOU = 155,
			E_ACTION_LEADER_REACHED_BOUNDARY = 156,
			E_ACTION_PLAYER_ELIMINATED = 157,
			E_ACTION_TRAITOROUS_TAKEDOWN = 158,
			E_ACTION_SWITCH_BURNING_HOME_RUN_RUNNER = 159,
			E_ACTION_BURNOUT_SKILLZ = 160,
			E_ACTION_ROAD_RULES_SKILLZ = 161,
			E_ACTION_SET_BOOST = 162,
			E_ACTION_NEAR_MISS = 163,
			E_ACTION_DRIFTING = 164,
			E_ACTION_SPINNING = 165,
			E_ACTION_IN_AIR = 166,
			E_ACTION_ONCOMING = 167,
			E_ACTION_TAILGATING = 168,
			E_ACTION_DISTANCE_DRIVEN = 169,
			E_ACTION_AFTERTOUCH = 170,
			E_ACTION_EVENT_STATE_RESPONSE = 171,
			E_ACTION_GAME_STATS_RESPONSE = 172,
			E_ACTION_RANK_INFO_RESPONSE = 173,
			E_ACTION_PLAYER_INFO_RESPONSE = 174,
			E_ACTION_UNLOCKED_LIVERY_RESPONSE = 175,
			E_ACTION_CAR_SELECTION_RESPONSE = 176,
			E_ACTION_LANDMARK_VARIABLE_INFO_RESPONSE = 177,
			E_ACTION_REGION_FROM_POSITION_RESPONSE = 178,
			E_ACTION_UPDATE_GUI_ROUTE = 179,
			E_ACTION_ALL_RIVALRY_DATA_RESPONSE = 180,
			E_ACTION_ONE_RIVALRY_DATA_RESPONSE = 181,
			E_ACTION_SHOW_SATNAV = 182,
			E_ACTION_SET_LOADING_STATE = 183,
			E_ACTION_WAIT_FOR_STREAMING = 184,
			E_ACTION_PROGRESSION_PROFILE_DATA = 185,
			E_ACTION_LOAD_PROFILE = 186,
			E_ACTION_REMOVE_ALL_RIVALS = 187,
			E_ACTION_ADD_RIVAL = 188,
			E_ACTION_RIVAL_STATE_CHANGED = 189,
			E_ACTION_UPDATE_CAR_STATS = 190,
			E_ACTION_PROP_SMASH_PROGRESSION = 191,
			E_ACTION_UPDATE_PLAYER_MEDALS = 192,
			E_ACTION_EVENT_AT_JUNCTION_AVAILABLE = 193,
			E_ACTION_ALL_EVENTS_DISCOVERED = 194,
			E_ACTION_ALL_EVENTS_OF_TYPE_DISCOVERED = 195,
			E_ACTION_TROPHY_UNLOCK = 196,
			E_ACTION_ROAD_RAGE_PLAYER_DAMAGE = 197,
			E_ACTION_ALL_EVENT_TYPE_WON = 198,
			E_ACTION_RIVAL_UNLOCKED_INTO_THE_WORLD_ACTION = 199,
			E_ACTION_ONE_HUNDRED_PERCENT_COMPLETE = 200,
			E_ACTION_ACHIEVEMENTS_EARNED = 201,
			E_ACTION_ALL_RIVALS_SHUTDOWN = 202,
			E_ACTION_PAYBACK_LOST = 203,
			E_ACTION_PAYBACK_VICTIM_LEFT_GAME = 204,
			E_ACTION_PAYBACK_MUGSHOT = 205,
			E_ACTION_ABORT_MUGSHOT_CAPTURE = 206,
			E_ACTION_PAYBACK_ACTIVATED = 207,
			E_ACTION_PAYBACK_OVER = 208,
			E_ACTION_PAYBACK_SUCCEEDED = 209,
			E_ACTION_SOUND_TRIGGER = 210,
			E_ACTION_ONLINE_PLAYER_ADDED = 211,
			E_ACTION_ONLINE_PLAYER_REMOVED = 212,
			E_ACTION_OFFLINE_ADD_CAR_TO_MODE = 213,
			E_ACTION_OFFLINE_REMOVE_CAR_FROM_MODE = 214,
			E_ACTION_CAR_ADDITION_PRESENTATION_START = 215,
			E_ACTION_CAR_ADDITION_PRESENTATION_END = 216,
			E_ACTION_LOCAL_PLAYER_DISCONNECTED = 217,
			E_ACTION_LOCAL_PLAYER_LEFT_GAME = 218,
			E_ACTION_UPDATE_RICH_PRESENCE = 219,
			E_ACTION_SEND_TELEMETRY = 220,
			E_ACTION_ONLINE_GAME_RESULT = 221,
			E_ACTION_ONLINE_ROUND_RESULT = 222,
			E_ACTION_ONLINE_LAUNCH_FREE_BURN_LOBBY = 223,
			E_ACTION_ROAD_RULES_CHALLENGE_SCORES = 224,
			E_ACTION_ROAD_RULES_PERSONAL_BEST = 225,
			E_ACTION_ROAD_RULES_OVERWRITE_SERVER_RECORD = 226,
			E_ACTION_START_GAME_THROUGH_PLAYER_JOIN = 227,
			E_ACTION_RESTART_TRAFFIC = 228,
			E_ACTION_NETWORK_COLLECTABLE = 229,
			E_ACTION_NETWORK_CAUGHT_FEVER = 230,
			E_ACTION_REQUEST_GAMERCARD = 231,
			E_ACTION_HUD_MESSAGE_TOOK_LEAD = 232,
			E_ACTION_HUD_MESSAGE_TOOK_LAST = 233,
			E_ACTION_HUD_MESSAGE_DIST_TO_FINISH = 234,
			E_ACTION_HUD_MESSAGE_LEADING = 235,
			E_ACTION_HUD_MESSAGE_NECK_AND_NECK = 236,
			E_ACTION_HUD_MESSAGE_X_FINISHES = 237,
			E_ACTION_HUD_MESSAGE_X_REACHES_CHECKPOINT = 238,
			E_ACTION_HUD_MESSAGE_PLAYER_REACHES_CHECKPOINT = 239,
			E_ACTION_HUD_MESSAGE_X_CRASHES = 240,
			E_ACTION_HUD_MESSAGE_WRONG_WAY = 241,
			E_ACTION_HUD_MESSAGE_STUNT_PERFORMED = 242,
			E_ACTION_HUD_MESSAGE_COMBO_PERFORMED = 243,
			E_ACTION_HUD_MESSAGE_STUNT_TIME_UP = 244,
			E_ACTION_HUD_MESSAGE_BHR_CHECKPOINT = 245,
			E_ACTION_HUD_MESSAGE_BHR_RUNNER_CRASHED = 246,
			E_ACTION_HUD_MESSAGE_ONLINE_TEAM_CHANGE = 247,
			E_ACTION_HUD_MESSAGE_ROAD_RAGE_TIME_EXTENSION = 248,
			E_ACTION_HUD_MESSAGE_RIVAL_FIRST_HIT = 249,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_RIVAL = 250,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_TARGET = 251,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_FLEEING = 252,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_WRECKED = 253,
			E_ACTION_HUD_MESSAGE_PLAYER_CAN_SKIP_CRASH = 254,
			E_ACTION_HUD_MESSAGE_TIME_UP = 255,
			E_ACTION_HUD_MESSAGE_CANT_PAINT = 256,
			E_ACTION_HUD_MESSAGE_MUST_FIX = 257,
			E_ACTION_HUD_MESSAGE_JUMP_FAILED = 258,
			E_ACTION_WRONG_CAR_FOR_CHALLENGE = 259,
			E_ACTION_ROAD_RULES_ENTER_ROAD = 260,
			E_ACTION_ROAD_RULES_LEAVE_ROAD = 261,
			E_ACTION_ROAD_RULES_BATCH_QUERY = 262,
			E_ACTION_UPCOMING_ROAD_CHANGE = 263,
			E_ACTION_ROAD_RULES_START_RULE = 264,
			E_ACTION_ROAD_RULES_END_RULE = 265,
			E_ACTION_ROAD_RULES_UPDATE = 266,
			E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE = 267,
			E_ACTION_ROAD_RULES_NEW_HIGH_SCORE = 268,
			E_ACTION_ROAD_RULES_ACTIVE_RULE_CHANGE = 269,
			E_ACTION_ROAD_RULES_TIME_WARNING = 270,
			E_ACTION_ROAD_RULES_ROAD_SCORE = 271,
			E_ACTION_ROAD_RULES_NEW_RULERS = 272,
			E_ACTION_ROAD_RULES_MODE_SWITCH = 273,
			E_ACTION_PLAYER_IN_SHORTCUT = 274,
			E_ACTION_IMAGE_GALLERY_RENDER_IMAGE = 275,
			E_ACTION_IMAGE_GALLERY_IMAGE_INFO = 276,
			E_ACTION_IMAGE_GALLERY_COUNT_ACTION = 277,
			E_ACTION_IMAGE_GALLERY_DATA_ACTION = 278,
			E_ACTION_IMAGE_GALLERY_LOAD_COMPLETE = 279,
			E_ACTION_SAVE_IMAGE_AND_AUTOSAVE = 280,
			E_ACTION_LOAD_IMAGES = 281,
			E_ACTION_DXT_DECODE_IMAGE = 282,
			E_ACTION_SOUND_BIND_PROPS = 283,
			E_ACTION_COUNT = 284,
		}

		// Declaration
		struct ResetPlayerCarAction {
			// BrnGameActions.h:558
			enum CarSelectType {
				E_CAR_SELECT_DONT_DROP = 0,
				E_CAR_SELECT_DROP_NORMAL = 1,
				E_CAR_SELECT_DROP_SHUTDOWN = 2,
			}

		}

		// Declaration
		struct PrepareForModeAction {
			// BrnGameActions.h:856
			enum EPrepareForModeStage {
				E_PFM_STAGE_ALL_IN_ONE = 0,
				E_PFM_STAGE_FIRST_OF_TWO = 1,
				E_PFM_STAGE_SECOND_OF_TWO = 2,
				E_PFM_STAGE_COUNT = 3,
			}

		}

		// BrnGameActions.h:462
		const int32_t KI_EVENT_MANAGER_DEFAULT_ACTION_QUEUE_LENGTH = 13312;

		// BrnGameActions.h:463
		const int32_t KI_EVENT_MANAGER_SMALL_ACTION_QUEUE_LENGTH = 256;

	}

}

// BrnGameActions.h:853
struct BrnGameState::GameStateModuleIO::PrepareForModeAction : public GameAction<E_ACTION_PREPARE_FOR_MODE> {
private:
	// BrnGameActions.h:936
	BrnGameState::GameStateModuleIO::PrepareForModeAction::EPrepareForModeStage mePrepareForModeStage;

	// BrnGameActions.h:938
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex[8] maePlayerScoringIndex;

	// BrnGameActions.h:939
	GameModeParams mGameModeParams;

	// BrnGameActions.h:940
	int32_t miCurrentRound;

	// BrnGameActions.h:941
	bool mbComingFromOnlineLobbyMode;

	// BrnGameActions.h:942
	bool mbFinishedOnlineEvent;

	// BrnGameActions.h:943
	bool mbStartingFreeburnDueToPlayerJoin;

	// BrnGameActions.h:946
	AggressiveMoveData::NetworkPlayerID[8] maDisconnectedNetworkPlayerID;

	// BrnGameActions.h:947
	int32_t miNumPlayersDisconnected;

	// BrnGameActions.h:948
	float32_t mfPlayerBoostEarning;

	// BrnGameActions.h:949
	int32_t miShotGroup;

public:
	// BrnGameActions.h:870
	void Construct(const GameModeParams *, int32_t, bool);

	// BrnGameActions.h:874
	const GameModeParams * GetGameModeParams() const;

	// BrnGameActions.h:877
	int32_t GetCurrentRound() const;

	// BrnGameActions.h:880
	bool IsMovingBetweenOnlineLobbyModes() const;

	// BrnGameActions.h:885
	void SetPlayerScoringIndex(int32_t, BrnGameState::GameStateModuleIO::EPlayerScoringIndex);

	// BrnGameActions.h:889
	BrnGameState::GameStateModuleIO::EPlayerScoringIndex GetPlayerScoringIndex(int32_t) const;

	// BrnGameActions.h:893
	bool GetPlayerDisconnected(AggressiveMoveData::NetworkPlayerID) const;

	// BrnGameActions.h:897
	void SetPlayerDisconnected(AggressiveMoveData::NetworkPlayerID);

	// BrnGameActions.h:900
	float32_t GetPlayerBoostEarning() const;

	// BrnGameActions.h:904
	void SetPlayerBoostEarning(float32_t);

	// BrnGameActions.h:907
	int32_t GetShotGroup() const;

	// BrnGameActions.h:911
	void SetShotGroup(int32_t);

	// BrnGameActions.h:914
	bool GetFinishedOnlineEvent() const;

	// BrnGameActions.h:918
	void SetFinishedOnlineEvent(bool);

	// BrnGameActions.h:921
	bool IsFirstPrepareForMode() const;

	// BrnGameActions.h:925
	void SetPrepareStage(BrnGameState::GameStateModuleIO::PrepareForModeAction::EPrepareForModeStage);

	// BrnGameActions.h:929
	void SetStartingFreeburnLobbyDueToPlayerJoin(bool);

	// BrnGameActions.h:932
	bool GetStartingFreeburnLobbyDueToPlayerJoin() const;

}

// BrnGameActions.h:5153
struct BrnGameState::GameStateModuleIO::OnlineGameResults : public GameAction<E_ACTION_ONLINE_GAME_RESULT> {
	// BrnGameActions.h:5157
	CgsID mCarUsed;

	// BrnGameActions.h:5159
	Time mSecondsInEvent;

	// BrnGameActions.h:5160
	float32_t mfMetersDriven;

	// BrnGameActions.h:5162
	int32_t miTakedownsFor;

	// BrnGameActions.h:5163
	int32_t miTakedownsAgainst;

	// BrnGameActions.h:5164
	int32_t miTraitorousTakedownsFor;

	// BrnGameActions.h:5165
	int32_t miTraitorousTakedownsAgainst;

	// BrnGameActions.h:5167
	int32_t miMarkedManTakedownsFor;

	// BrnGameActions.h:5168
	int32_t miMarkedManTakedownsAgainst;

	// BrnGameActions.h:5169
	int32_t miMarksFor;

	// BrnGameActions.h:5170
	int32_t miMarksAgainst;

	// BrnGameActions.h:5171
	int32_t miPaybacksUsedFor;

	// BrnGameActions.h:5172
	int32_t miPaybacksUsedAgainst;

	// BrnGameActions.h:5173
	int32_t miPaybacksSuccededFor;

	// BrnGameActions.h:5174
	int32_t miPaybacksSuccededAgainst;

	// BrnGameActions.h:5175
	int32_t miNumberOfCrashes;

	// BrnGameActions.h:5177
	int32_t miNumberOfRounds;

	// BrnGameActions.h:5178
	int32_t miNumberOfRoundsPlayed;

	// BrnGameActions.h:5179
	int32_t miNumberOfPlayers;

	// BrnGameActions.h:5180
	int32_t miEventType;

	// BrnGameActions.h:5181
	bool mbIsRanked;

private:
	// BrnGameActions.h:5213
	int32_t[10] maiPositions;

	// BrnGameActions.h:5214
	AggressiveMoveData::NetworkPlayerID[10][8] maaConnectedPlayerIDs;

public:
	// BrnGameActions.h:5185
	void Clear();

	// BrnGameActions.h:5189
	int32_t GetWins() const;

	// BrnGameActions.h:5194
	void SetPosition(int32_t, int32_t);

	// BrnGameActions.h:5198
	int32_t GetPosition(int32_t) const;

	// BrnGameActions.h:5204
	void SetConnectedPlayerID(AggressiveMoveData::NetworkPlayerID, EActiveRaceCarIndex, int32_t);

	// BrnGameActions.h:5209
	AggressiveMoveData::NetworkPlayerID GetConnectedPlayerID(EActiveRaceCarIndex, int32_t) const;

}

// BrnGameActions.h:5227
struct BrnGameState::GameStateModuleIO::OnlineRoundResults : public GameAction<E_ACTION_ONLINE_ROUND_RESULT> {
	// BrnGameActions.h:5230
	extern const int32_t KI_POSITION_DISCONNECTED = 4294967295;

private:
	// BrnGameActions.h:5248
	AggressiveMoveData::NetworkPlayerID[8] maPlayerPosition;

	// BrnGameActions.h:5249
	Array<CgsNetwork::NetworkPlayerID,8u> maDisconnectedPlayers;

public:
	// BrnGameActions.h:5233
	void Construct();

	// BrnGameActions.h:5238
	void SetPosition(AggressiveMoveData::NetworkPlayerID, int32_t);

	// BrnGameActions.h:5242
	int32_t GetPosition(AggressiveMoveData::NetworkPlayerID) const;

	// BrnGameActions.h:5245
	AggressiveMoveData::NetworkPlayerID GetWinner() const;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnServerInterfaceCustomCommands.h:30
	namespace GameStateModuleIO {
		// BrnGameActions.h:92
		using BrnNetwork::BrnNetworkModuleIO;

		// BrnGameActions.h:95
		enum EGameActionType {
			E_ACTION_RESET_PLAYER_CAR = 0,
			E_ACTION_GUI_UPDATE_PLAYER_CAR_ID = 1,
			E_ACTION_GUI_CAR_UNLOCK = 2,
			E_ACTION_RESET_PLAYER_CAR_ON_TRACK = 3,
			E_ACTION_SET_PLAYER_OPPONENTS = 4,
			E_ACTION_SETUP_NETWORK_CAR = 5,
			E_ACTION_SET_TAKEDOWN_CAMERA_STATE = 6,
			E_ACTION_SET_PLAYER_CAR_DRIVER = 7,
			E_ACTION_FORCE_PLAYER_CAR_DRIVER = 8,
			E_ACTION_RESET_CRASHING = 9,
			E_ACTION_RESET_RACE_CAR_CRASHING = 10,
			E_ACTION_REMOTE_PLAYER_DISCONNECTED = 11,
			E_ACTION_NOTIFY_DIRECTOR_LOCAL_PLAYER_DISCONNECTED = 12,
			E_ACTION_EMPTY_TRAFFIC_POOL = 13,
			E_ACTION_ON_PLAYER_TAKEDOWN = 14,
			E_ACTION_COMPLETED_STUNT = 15,
			E_ACTION_INPROGRESS_STUNT = 16,
			E_ACTION_PLAYER_CRASH_ENDING_SOON = 17,
			E_ACTION_CHECK_FOR_LOADING_SCREEN = 18,
			E_ACTION_PREPARE_FOR_MODE = 19,
			E_ACTION_BROADCAST_MODE_FINISH_LINES = 20,
			E_ACTION_STOP_MODE_OFFLINE = 21,
			E_ACTION_FINISH_MODE_ONLINE = 22,
			E_ACTION_FINISH_MODE_FINAL_ONLINE = 23,
			E_ACTION_SET_TRAFFIC_SCALE_BASED_ON_RANK = 24,
			E_ACTION_START_MODE_INTRO = 25,
			E_ACTION_STOP_MODE_INTRO = 26,
			E_ACTION_MARKED_MAN_LOADED = 27,
			E_ACTION_STOP_MODE_SPLASH = 28,
			E_ACTION_STOP_MODE_COUNTDOWN = 29,
			E_ACTION_START_PLAYING_MODE = 30,
			E_ACTION_FINISHED_MODE = 31,
			E_ACTION_SHOW_MODE_RESULTS = 32,
			E_ACTION_FINISHED_MODE_RESULTS = 33,
			E_ACTION_STOP_MODE = 34,
			E_ACTION_QUIT_MODE_OFFLINE = 35,
			E_ACTION_QUIT_MODE_ONLINE = 36,
			E_ACTION_IMPACT_TIME_START = 37,
			E_ACTION_IMPACT_TIME_END = 38,
			E_ACTION_SET_IN_MODE_START_REGION = 39,
			E_ACTION_SET_UP_ALL_DRIVE_THRUS = 40,
			E_ACTION_CLOSE_DRIVE_THRU = 41,
			E_ACTION_SET_COUNTDOWN = 42,
			E_ACTION_SHOW_HUD_MESSAGE = 43,
			E_ACTION_SHOW_POPUP = 44,
			E_ACTION_REQUEST_ROUTE_INFO = 45,
			E_ACTION_SET_LANDMARK_RACES = 46,
			E_ACTION_DAMAGE_CRITICAL = 47,
			E_ACTION_PLAYER_HIT_RIVAL = 48,
			E_ACTION_RIVAL_HIT_PLAYER = 49,
			E_ACTION_REQUEST_AUTOSAVE = 50,
			E_ACTION_ON_JUMP_START = 51,
			E_ACTION_SHOW_JUMP_NAME = 52,
			E_ACTION_ON_STUNT_ELEMENT_COMPLETE = 53,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_FOR_COUNTY = 54,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_BY_TYPE = 55,
			E_ACTION_STUNT_ELEMENT_BOOST = 56,
			E_ACTION_NEW_CAR_UNLOCKED = 57,
			E_ACTION_CAR_UNLOCK_END = 58,
			E_ACTION_CAR_SELECTION_CHANGED = 59,
			E_ACTION_CAR_SELECTION_CHANGED_DROPIN = 60,
			E_ACTION_CAR_SELECTION_DROPIN_COMPLETE = 61,
			E_ACTION_CAR_SELECTION_CHANGED_ONLINE = 62,
			E_ACTION_SWITCH_CAR_CORONAS_ON_OFF = 63,
			E_ACTION_CAR_SELECTION_REQUEST_STREAMING = 64,
			E_ACTION_ALLOW_BOOST_EARNING = 65,
			E_ACTION_STOP_BOOSTING = 66,
			E_ACTION_CAR_SELECT_START_GUI_ON_GAME_START = 67,
			E_ACTION_CAR_SELECT_TRANSITION_IN = 68,
			E_ACTION_CAR_SELECT_WAITING_FOR_AUDIO = 69,
			E_ACTION_CAR_SELECT_READY = 70,
			E_ACTION_CAR_SELECT_MODIFICATION_SCREEN = 71,
			E_ACTION_CAR_SELECT_EXIT = 72,
			E_ACTION_CAR_SELECT_ABORT = 73,
			E_ACTION_CAR_SELECT_CHANGE_COLOUR = 74,
			E_ACTION_CAR_SELECT_PAUSED_IN_CAR_SELECT = 75,
			E_ACTION_PLAYER_CAR_COLOUR_RESPONSE = 76,
			E_ACTION_CAR_SELECT_ONLINE_TIME_LEFT = 77,
			E_ACTION_CAR_SELECT_ONLINE_END = 78,
			E_ACTION_CAR_SELECT_ONLINE_SELECT_CAR = 79,
			E_ACTION_CAR_SELECT_ONLINE_CAR_IS_SHOWABLE = 80,
			E_ACTION_PAUSE_SIMULATION = 81,
			E_ACTION_UNPAUSE_SIMULATION = 82,
			E_ACTION_PAUSE_ONLINE = 83,
			E_ACTION_UNPAUSE_ONLINE = 84,
			E_ACTION_PROMPT_START_OFFLINE_GAME_MODE = 85,
			E_ACTION_PROMPT_DO_INVITE = 86,
			E_ACTION_START_PREPARE_FOR_INVITE = 87,
			E_ACTION_UPDATE_PREPARE_FOR_INVITE = 88,
			E_ACTION_PREPARED_FOR_INVITE = 89,
			E_ACTION_PERFORM_INVITE = 90,
			E_ACTION_INVITE_COMPLETE = 91,
			E_ACTION_DRIVE_THRU_BODY_SHOP = 92,
			E_ACTION_DRIVE_THRU_PAINT_SHOP = 93,
			E_ACTION_DRIVE_THRU_JUNK_YARD = 94,
			E_ACTION_DRIVE_THRU_GAS_STATION = 95,
			E_ACTION_DRIVE_THRU_CLOSED = 96,
			E_ACTION_DRIVE_THRU_STOP_PRESENTATION = 97,
			E_ACTION_PLAYER_REACHED_ROAD_RAGE_TARGET = 98,
			E_ACTION_DRIVE_THRU_DISCOVERED = 99,
			E_ACTION_ALL_DRIVE_THRUS_DISCOVERED = 100,
			E_ACTION_DRIVE_THRU_JUNK_YARD_ON_GAME_START = 101,
			E_ACTION_ON_TRAFFIC_CHECKING = 102,
			E_ACTION_ON_TRAFFIC_CHECKING_CHAIN = 103,
			E_ACTION_TRIGGER = 104,
			E_ACTION_KILLZONE = 105,
			E_ACTION_PLAYER_INVULNERABLE = 106,
			E_ACTION_WORLD_REGION_CHANGE = 107,
			E_ACTION_RACE_CAR_REACHED_CHECKPOINT = 108,
			E_ACTION_RACE_CAR_REACHED_FINISH = 109,
			E_ACTION_PLAYER_REACHED_PENULTIMATE_CHECKPOINT = 110,
			E_ACTION_TRAFFIC_TYPE_REQUEST = 111,
			E_ACTION_TRACK_PLAYER_TO_LOCATION = 112,
			E_ACTION_SET_WAYPOINT_DISTANCES_TO_FINISH = 113,
			E_ACTION_PLAYER_RESET_ON_TRACK = 114,
			E_ACTION_SHUTDOWN = 115,
			E_ACTION_SHUTDOWN_FINISHED = 116,
			E_ACTION_AWARD_SEQUENCE_START = 117,
			E_ACTION_AWARD_SEQUENCE_END = 118,
			E_ACTION_CRASH_COMBO = 119,
			E_ACTION_SET_SIXAXIS_STEERING = 120,
			E_ACTION_SWITCH_CAR_COLOUR = 121,
			E_ACTION_WORLD_STUNT_PERFORMED = 122,
			E_ACTION_OVERHEAD_SIGN_HIT = 123,
			E_ACTION_ALLOW_CAR_TO_JOIN_ROAD_RAGE = 124,
			E_ACTION_HIDE_CAR_IN_ROAD_RAGE = 125,
			E_ACTION_UPDATE_ROAD_RAGE_MADNESS = 126,
			E_ACTION_TRIGGER_CRASH_BREAKER = 127,
			E_ACTION_CANCEL_CRASH_BREAKER = 128,
			E_ACTION_ENTER_SHOWTIME_BONUS_REGION = 129,
			E_ACTION_TOGGLE_SHOWTIME_BEHAVIOUR = 130,
			E_ACTION_VEHICLE_LEAPT = 131,
			E_ACTION_VEHICLE_HIT = 132,
			E_ACTION_ENTER_NEW_ROAD = 133,
			E_ACTION_SHOWTIME_UPDATE = 134,
			E_ACTION_SHOWTIME_MODE_SWITCH = 135,
			E_ACTION_JUST_BOUNCED = 136,
			E_ACTION_JUST_APPLIED_EXTRA_SPIN = 137,
			E_ACTION_SHOWTIME_INTRO_START = 138,
			E_ACTION_POWER_PARK_RESULT = 139,
			E_ACTION_GAME_TRAINING = 140,
			E_ACTION_GAME_TRAINING_REQUEST = 141,
			E_ACTION_GAME_TRAINING_PAUSE = 142,
			E_ACTION_GAME_TRAINING_UNPAUSE = 143,
			E_ACTION_MODE_TIME_TIMEOUT = 144,
			E_ACTION_FREEBURN_CHALLENGE = 145,
			E_ACTION_FREEBURN_CHALLENGE_END_NOT_ACTIVE = 146,
			E_ACTION_FREEBURN_CHALLENGE_UPDATE = 147,
			E_ACTION_FREEBURN_CHALLENGE_COMPLETION_STATUS = 148,
			E_ACTION_FREEBURN_CHALLENGE_EVERY_PLAYER_COMPLETION_STATUS = 149,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE = 150,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS = 151,
			E_ACTION_FREEBURN_CHALLENGE_SHOW_SELECTOR = 152,
			E_ACTION_ACTIVE_FREEBURN_CHALLENGE = 153,
			E_ACTION_BLUE_TEAM_IS_ESCAPING = 154,
			E_ACTION_BLUE_TEAM_IS_BEHIND_YOU = 155,
			E_ACTION_LEADER_REACHED_BOUNDARY = 156,
			E_ACTION_PLAYER_ELIMINATED = 157,
			E_ACTION_TRAITOROUS_TAKEDOWN = 158,
			E_ACTION_SWITCH_BURNING_HOME_RUN_RUNNER = 159,
			E_ACTION_BURNOUT_SKILLZ = 160,
			E_ACTION_ROAD_RULES_SKILLZ = 161,
			E_ACTION_SET_BOOST = 162,
			E_ACTION_NEAR_MISS = 163,
			E_ACTION_DRIFTING = 164,
			E_ACTION_SPINNING = 165,
			E_ACTION_IN_AIR = 166,
			E_ACTION_ONCOMING = 167,
			E_ACTION_TAILGATING = 168,
			E_ACTION_DISTANCE_DRIVEN = 169,
			E_ACTION_AFTERTOUCH = 170,
			E_ACTION_EVENT_STATE_RESPONSE = 171,
			E_ACTION_GAME_STATS_RESPONSE = 172,
			E_ACTION_RANK_INFO_RESPONSE = 173,
			E_ACTION_PLAYER_INFO_RESPONSE = 174,
			E_ACTION_UNLOCKED_LIVERY_RESPONSE = 175,
			E_ACTION_CAR_SELECTION_RESPONSE = 176,
			E_ACTION_LANDMARK_VARIABLE_INFO_RESPONSE = 177,
			E_ACTION_REGION_FROM_POSITION_RESPONSE = 178,
			E_ACTION_UPDATE_GUI_ROUTE = 179,
			E_ACTION_ALL_RIVALRY_DATA_RESPONSE = 180,
			E_ACTION_ONE_RIVALRY_DATA_RESPONSE = 181,
			E_ACTION_SHOW_SATNAV = 182,
			E_ACTION_SET_LOADING_STATE = 183,
			E_ACTION_WAIT_FOR_STREAMING = 184,
			E_ACTION_PROGRESSION_PROFILE_DATA = 185,
			E_ACTION_LOAD_PROFILE = 186,
			E_ACTION_REMOVE_ALL_RIVALS = 187,
			E_ACTION_ADD_RIVAL = 188,
			E_ACTION_RIVAL_STATE_CHANGED = 189,
			E_ACTION_UPDATE_CAR_STATS = 190,
			E_ACTION_PROP_SMASH_PROGRESSION = 191,
			E_ACTION_UPDATE_PLAYER_MEDALS = 192,
			E_ACTION_EVENT_AT_JUNCTION_AVAILABLE = 193,
			E_ACTION_ALL_EVENTS_DISCOVERED = 194,
			E_ACTION_ALL_EVENTS_OF_TYPE_DISCOVERED = 195,
			E_ACTION_TROPHY_UNLOCK = 196,
			E_ACTION_ROAD_RAGE_PLAYER_DAMAGE = 197,
			E_ACTION_ALL_EVENT_TYPE_WON = 198,
			E_ACTION_RIVAL_UNLOCKED_INTO_THE_WORLD_ACTION = 199,
			E_ACTION_ONE_HUNDRED_PERCENT_COMPLETE = 200,
			E_ACTION_ACHIEVEMENTS_EARNED = 201,
			E_ACTION_ALL_RIVALS_SHUTDOWN = 202,
			E_ACTION_PAYBACK_LOST = 203,
			E_ACTION_PAYBACK_VICTIM_LEFT_GAME = 204,
			E_ACTION_PAYBACK_MUGSHOT = 205,
			E_ACTION_ABORT_MUGSHOT_CAPTURE = 206,
			E_ACTION_PAYBACK_ACTIVATED = 207,
			E_ACTION_PAYBACK_OVER = 208,
			E_ACTION_PAYBACK_SUCCEEDED = 209,
			E_ACTION_SOUND_TRIGGER = 210,
			E_ACTION_ONLINE_PLAYER_ADDED = 211,
			E_ACTION_ONLINE_PLAYER_REMOVED = 212,
			E_ACTION_OFFLINE_ADD_CAR_TO_MODE = 213,
			E_ACTION_OFFLINE_REMOVE_CAR_FROM_MODE = 214,
			E_ACTION_CAR_ADDITION_PRESENTATION_START = 215,
			E_ACTION_CAR_ADDITION_PRESENTATION_END = 216,
			E_ACTION_LOCAL_PLAYER_DISCONNECTED = 217,
			E_ACTION_LOCAL_PLAYER_LEFT_GAME = 218,
			E_ACTION_UPDATE_RICH_PRESENCE = 219,
			E_ACTION_SEND_TELEMETRY = 220,
			E_ACTION_ONLINE_GAME_RESULT = 221,
			E_ACTION_ONLINE_ROUND_RESULT = 222,
			E_ACTION_ONLINE_LAUNCH_FREE_BURN_LOBBY = 223,
			E_ACTION_ROAD_RULES_CHALLENGE_SCORES = 224,
			E_ACTION_ROAD_RULES_PERSONAL_BEST = 225,
			E_ACTION_ROAD_RULES_OVERWRITE_SERVER_RECORD = 226,
			E_ACTION_START_GAME_THROUGH_PLAYER_JOIN = 227,
			E_ACTION_RESTART_TRAFFIC = 228,
			E_ACTION_NETWORK_COLLECTABLE = 229,
			E_ACTION_NETWORK_CAUGHT_FEVER = 230,
			E_ACTION_REQUEST_GAMERCARD = 231,
			E_ACTION_HUD_MESSAGE_TOOK_LEAD = 232,
			E_ACTION_HUD_MESSAGE_TOOK_LAST = 233,
			E_ACTION_HUD_MESSAGE_DIST_TO_FINISH = 234,
			E_ACTION_HUD_MESSAGE_LEADING = 235,
			E_ACTION_HUD_MESSAGE_NECK_AND_NECK = 236,
			E_ACTION_HUD_MESSAGE_X_FINISHES = 237,
			E_ACTION_HUD_MESSAGE_X_REACHES_CHECKPOINT = 238,
			E_ACTION_HUD_MESSAGE_PLAYER_REACHES_CHECKPOINT = 239,
			E_ACTION_HUD_MESSAGE_X_CRASHES = 240,
			E_ACTION_HUD_MESSAGE_WRONG_WAY = 241,
			E_ACTION_HUD_MESSAGE_STUNT_PERFORMED = 242,
			E_ACTION_HUD_MESSAGE_COMBO_PERFORMED = 243,
			E_ACTION_HUD_MESSAGE_STUNT_TIME_UP = 244,
			E_ACTION_HUD_MESSAGE_BHR_CHECKPOINT = 245,
			E_ACTION_HUD_MESSAGE_BHR_RUNNER_CRASHED = 246,
			E_ACTION_HUD_MESSAGE_ONLINE_TEAM_CHANGE = 247,
			E_ACTION_HUD_MESSAGE_ROAD_RAGE_TIME_EXTENSION = 248,
			E_ACTION_HUD_MESSAGE_RIVAL_FIRST_HIT = 249,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_RIVAL = 250,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_TARGET = 251,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_FLEEING = 252,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_WRECKED = 253,
			E_ACTION_HUD_MESSAGE_PLAYER_CAN_SKIP_CRASH = 254,
			E_ACTION_HUD_MESSAGE_TIME_UP = 255,
			E_ACTION_HUD_MESSAGE_CANT_PAINT = 256,
			E_ACTION_HUD_MESSAGE_MUST_FIX = 257,
			E_ACTION_HUD_MESSAGE_JUMP_FAILED = 258,
			E_ACTION_WRONG_CAR_FOR_CHALLENGE = 259,
			E_ACTION_ROAD_RULES_ENTER_ROAD = 260,
			E_ACTION_ROAD_RULES_LEAVE_ROAD = 261,
			E_ACTION_ROAD_RULES_BATCH_QUERY = 262,
			E_ACTION_UPCOMING_ROAD_CHANGE = 263,
			E_ACTION_ROAD_RULES_START_RULE = 264,
			E_ACTION_ROAD_RULES_END_RULE = 265,
			E_ACTION_ROAD_RULES_UPDATE = 266,
			E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE = 267,
			E_ACTION_ROAD_RULES_NEW_HIGH_SCORE = 268,
			E_ACTION_ROAD_RULES_ACTIVE_RULE_CHANGE = 269,
			E_ACTION_ROAD_RULES_TIME_WARNING = 270,
			E_ACTION_ROAD_RULES_ROAD_SCORE = 271,
			E_ACTION_ROAD_RULES_NEW_RULERS = 272,
			E_ACTION_ROAD_RULES_MODE_SWITCH = 273,
			E_ACTION_PLAYER_IN_SHORTCUT = 274,
			E_ACTION_IMAGE_GALLERY_RENDER_IMAGE = 275,
			E_ACTION_IMAGE_GALLERY_IMAGE_INFO = 276,
			E_ACTION_IMAGE_GALLERY_COUNT_ACTION = 277,
			E_ACTION_IMAGE_GALLERY_DATA_ACTION = 278,
			E_ACTION_IMAGE_GALLERY_LOAD_COMPLETE = 279,
			E_ACTION_SAVE_IMAGE_AND_AUTOSAVE = 280,
			E_ACTION_LOAD_IMAGES = 281,
			E_ACTION_DXT_DECODE_IMAGE = 282,
			E_ACTION_SOUND_BIND_PROPS = 283,
			E_ACTION_COUNT = 284,
		}

		// BrnGameActions.h:462
		const int32_t KI_EVENT_MANAGER_DEFAULT_ACTION_QUEUE_LENGTH = 13312;

		// BrnGameActions.h:463
		const int32_t KI_EVENT_MANAGER_SMALL_ACTION_QUEUE_LENGTH = 256;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameActions.h:92
		using BrnNetwork::BrnNetworkModuleIO;

		// BrnGameActions.h:95
		enum EGameActionType {
			E_ACTION_RESET_PLAYER_CAR = 0,
			E_ACTION_GUI_UPDATE_PLAYER_CAR_ID = 1,
			E_ACTION_GUI_CAR_UNLOCK = 2,
			E_ACTION_RESET_PLAYER_CAR_ON_TRACK = 3,
			E_ACTION_SET_PLAYER_OPPONENTS = 4,
			E_ACTION_SETUP_NETWORK_CAR = 5,
			E_ACTION_SET_TAKEDOWN_CAMERA_STATE = 6,
			E_ACTION_SET_PLAYER_CAR_DRIVER = 7,
			E_ACTION_FORCE_PLAYER_CAR_DRIVER = 8,
			E_ACTION_RESET_CRASHING = 9,
			E_ACTION_RESET_RACE_CAR_CRASHING = 10,
			E_ACTION_REMOTE_PLAYER_DISCONNECTED = 11,
			E_ACTION_NOTIFY_DIRECTOR_LOCAL_PLAYER_DISCONNECTED = 12,
			E_ACTION_EMPTY_TRAFFIC_POOL = 13,
			E_ACTION_ON_PLAYER_TAKEDOWN = 14,
			E_ACTION_COMPLETED_STUNT = 15,
			E_ACTION_INPROGRESS_STUNT = 16,
			E_ACTION_PLAYER_CRASH_ENDING_SOON = 17,
			E_ACTION_CHECK_FOR_LOADING_SCREEN = 18,
			E_ACTION_PREPARE_FOR_MODE = 19,
			E_ACTION_BROADCAST_MODE_FINISH_LINES = 20,
			E_ACTION_STOP_MODE_OFFLINE = 21,
			E_ACTION_FINISH_MODE_ONLINE = 22,
			E_ACTION_FINISH_MODE_FINAL_ONLINE = 23,
			E_ACTION_SET_TRAFFIC_SCALE_BASED_ON_RANK = 24,
			E_ACTION_START_MODE_INTRO = 25,
			E_ACTION_STOP_MODE_INTRO = 26,
			E_ACTION_MARKED_MAN_LOADED = 27,
			E_ACTION_STOP_MODE_SPLASH = 28,
			E_ACTION_STOP_MODE_COUNTDOWN = 29,
			E_ACTION_START_PLAYING_MODE = 30,
			E_ACTION_FINISHED_MODE = 31,
			E_ACTION_SHOW_MODE_RESULTS = 32,
			E_ACTION_FINISHED_MODE_RESULTS = 33,
			E_ACTION_STOP_MODE = 34,
			E_ACTION_QUIT_MODE_OFFLINE = 35,
			E_ACTION_QUIT_MODE_ONLINE = 36,
			E_ACTION_IMPACT_TIME_START = 37,
			E_ACTION_IMPACT_TIME_END = 38,
			E_ACTION_SET_IN_MODE_START_REGION = 39,
			E_ACTION_SET_UP_ALL_DRIVE_THRUS = 40,
			E_ACTION_CLOSE_DRIVE_THRU = 41,
			E_ACTION_SET_COUNTDOWN = 42,
			E_ACTION_SHOW_HUD_MESSAGE = 43,
			E_ACTION_SHOW_POPUP = 44,
			E_ACTION_REQUEST_ROUTE_INFO = 45,
			E_ACTION_SET_LANDMARK_RACES = 46,
			E_ACTION_DAMAGE_CRITICAL = 47,
			E_ACTION_PLAYER_HIT_RIVAL = 48,
			E_ACTION_RIVAL_HIT_PLAYER = 49,
			E_ACTION_REQUEST_AUTOSAVE = 50,
			E_ACTION_ON_JUMP_START = 51,
			E_ACTION_SHOW_JUMP_NAME = 52,
			E_ACTION_ON_STUNT_ELEMENT_COMPLETE = 53,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_FOR_COUNTY = 54,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_BY_TYPE = 55,
			E_ACTION_STUNT_ELEMENT_BOOST = 56,
			E_ACTION_NEW_CAR_UNLOCKED = 57,
			E_ACTION_CAR_UNLOCK_END = 58,
			E_ACTION_CAR_SELECTION_CHANGED = 59,
			E_ACTION_CAR_SELECTION_CHANGED_DROPIN = 60,
			E_ACTION_CAR_SELECTION_DROPIN_COMPLETE = 61,
			E_ACTION_CAR_SELECTION_CHANGED_ONLINE = 62,
			E_ACTION_SWITCH_CAR_CORONAS_ON_OFF = 63,
			E_ACTION_CAR_SELECTION_REQUEST_STREAMING = 64,
			E_ACTION_ALLOW_BOOST_EARNING = 65,
			E_ACTION_STOP_BOOSTING = 66,
			E_ACTION_CAR_SELECT_START_GUI_ON_GAME_START = 67,
			E_ACTION_CAR_SELECT_TRANSITION_IN = 68,
			E_ACTION_CAR_SELECT_WAITING_FOR_AUDIO = 69,
			E_ACTION_CAR_SELECT_READY = 70,
			E_ACTION_CAR_SELECT_MODIFICATION_SCREEN = 71,
			E_ACTION_CAR_SELECT_EXIT = 72,
			E_ACTION_CAR_SELECT_ABORT = 73,
			E_ACTION_CAR_SELECT_CHANGE_COLOUR = 74,
			E_ACTION_CAR_SELECT_PAUSED_IN_CAR_SELECT = 75,
			E_ACTION_PLAYER_CAR_COLOUR_RESPONSE = 76,
			E_ACTION_CAR_SELECT_ONLINE_TIME_LEFT = 77,
			E_ACTION_CAR_SELECT_ONLINE_END = 78,
			E_ACTION_CAR_SELECT_ONLINE_SELECT_CAR = 79,
			E_ACTION_CAR_SELECT_ONLINE_CAR_IS_SHOWABLE = 80,
			E_ACTION_PAUSE_SIMULATION = 81,
			E_ACTION_UNPAUSE_SIMULATION = 82,
			E_ACTION_PAUSE_ONLINE = 83,
			E_ACTION_UNPAUSE_ONLINE = 84,
			E_ACTION_PROMPT_START_OFFLINE_GAME_MODE = 85,
			E_ACTION_PROMPT_DO_INVITE = 86,
			E_ACTION_START_PREPARE_FOR_INVITE = 87,
			E_ACTION_UPDATE_PREPARE_FOR_INVITE = 88,
			E_ACTION_PREPARED_FOR_INVITE = 89,
			E_ACTION_PERFORM_INVITE = 90,
			E_ACTION_INVITE_COMPLETE = 91,
			E_ACTION_DRIVE_THRU_BODY_SHOP = 92,
			E_ACTION_DRIVE_THRU_PAINT_SHOP = 93,
			E_ACTION_DRIVE_THRU_JUNK_YARD = 94,
			E_ACTION_DRIVE_THRU_GAS_STATION = 95,
			E_ACTION_DRIVE_THRU_CLOSED = 96,
			E_ACTION_DRIVE_THRU_STOP_PRESENTATION = 97,
			E_ACTION_PLAYER_REACHED_ROAD_RAGE_TARGET = 98,
			E_ACTION_DRIVE_THRU_DISCOVERED = 99,
			E_ACTION_ALL_DRIVE_THRUS_DISCOVERED = 100,
			E_ACTION_DRIVE_THRU_JUNK_YARD_ON_GAME_START = 101,
			E_ACTION_ON_TRAFFIC_CHECKING = 102,
			E_ACTION_ON_TRAFFIC_CHECKING_CHAIN = 103,
			E_ACTION_TRIGGER = 104,
			E_ACTION_KILLZONE = 105,
			E_ACTION_PLAYER_INVULNERABLE = 106,
			E_ACTION_WORLD_REGION_CHANGE = 107,
			E_ACTION_RACE_CAR_REACHED_CHECKPOINT = 108,
			E_ACTION_RACE_CAR_REACHED_FINISH = 109,
			E_ACTION_PLAYER_REACHED_PENULTIMATE_CHECKPOINT = 110,
			E_ACTION_TRAFFIC_TYPE_REQUEST = 111,
			E_ACTION_TRACK_PLAYER_TO_LOCATION = 112,
			E_ACTION_SET_WAYPOINT_DISTANCES_TO_FINISH = 113,
			E_ACTION_PLAYER_RESET_ON_TRACK = 114,
			E_ACTION_SHUTDOWN = 115,
			E_ACTION_SHUTDOWN_FINISHED = 116,
			E_ACTION_AWARD_SEQUENCE_START = 117,
			E_ACTION_AWARD_SEQUENCE_END = 118,
			E_ACTION_CRASH_COMBO = 119,
			E_ACTION_SET_SIXAXIS_STEERING = 120,
			E_ACTION_SWITCH_CAR_COLOUR = 121,
			E_ACTION_WORLD_STUNT_PERFORMED = 122,
			E_ACTION_OVERHEAD_SIGN_HIT = 123,
			E_ACTION_ALLOW_CAR_TO_JOIN_ROAD_RAGE = 124,
			E_ACTION_HIDE_CAR_IN_ROAD_RAGE = 125,
			E_ACTION_UPDATE_ROAD_RAGE_MADNESS = 126,
			E_ACTION_TRIGGER_CRASH_BREAKER = 127,
			E_ACTION_CANCEL_CRASH_BREAKER = 128,
			E_ACTION_ENTER_SHOWTIME_BONUS_REGION = 129,
			E_ACTION_TOGGLE_SHOWTIME_BEHAVIOUR = 130,
			E_ACTION_VEHICLE_LEAPT = 131,
			E_ACTION_VEHICLE_HIT = 132,
			E_ACTION_ENTER_NEW_ROAD = 133,
			E_ACTION_SHOWTIME_UPDATE = 134,
			E_ACTION_SHOWTIME_MODE_SWITCH = 135,
			E_ACTION_JUST_BOUNCED = 136,
			E_ACTION_JUST_APPLIED_EXTRA_SPIN = 137,
			E_ACTION_SHOWTIME_INTRO_START = 138,
			E_ACTION_POWER_PARK_RESULT = 139,
			E_ACTION_GAME_TRAINING = 140,
			E_ACTION_GAME_TRAINING_REQUEST = 141,
			E_ACTION_GAME_TRAINING_PAUSE = 142,
			E_ACTION_GAME_TRAINING_UNPAUSE = 143,
			E_ACTION_MODE_TIME_TIMEOUT = 144,
			E_ACTION_FREEBURN_CHALLENGE = 145,
			E_ACTION_FREEBURN_CHALLENGE_END_NOT_ACTIVE = 146,
			E_ACTION_FREEBURN_CHALLENGE_UPDATE = 147,
			E_ACTION_FREEBURN_CHALLENGE_COMPLETION_STATUS = 148,
			E_ACTION_FREEBURN_CHALLENGE_EVERY_PLAYER_COMPLETION_STATUS = 149,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE = 150,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS = 151,
			E_ACTION_FREEBURN_CHALLENGE_SHOW_SELECTOR = 152,
			E_ACTION_ACTIVE_FREEBURN_CHALLENGE = 153,
			E_ACTION_BLUE_TEAM_IS_ESCAPING = 154,
			E_ACTION_BLUE_TEAM_IS_BEHIND_YOU = 155,
			E_ACTION_LEADER_REACHED_BOUNDARY = 156,
			E_ACTION_PLAYER_ELIMINATED = 157,
			E_ACTION_TRAITOROUS_TAKEDOWN = 158,
			E_ACTION_SWITCH_BURNING_HOME_RUN_RUNNER = 159,
			E_ACTION_BURNOUT_SKILLZ = 160,
			E_ACTION_ROAD_RULES_SKILLZ = 161,
			E_ACTION_SET_BOOST = 162,
			E_ACTION_NEAR_MISS = 163,
			E_ACTION_DRIFTING = 164,
			E_ACTION_SPINNING = 165,
			E_ACTION_IN_AIR = 166,
			E_ACTION_ONCOMING = 167,
			E_ACTION_TAILGATING = 168,
			E_ACTION_DISTANCE_DRIVEN = 169,
			E_ACTION_AFTERTOUCH = 170,
			E_ACTION_EVENT_STATE_RESPONSE = 171,
			E_ACTION_GAME_STATS_RESPONSE = 172,
			E_ACTION_RANK_INFO_RESPONSE = 173,
			E_ACTION_PLAYER_INFO_RESPONSE = 174,
			E_ACTION_UNLOCKED_LIVERY_RESPONSE = 175,
			E_ACTION_CAR_SELECTION_RESPONSE = 176,
			E_ACTION_LANDMARK_VARIABLE_INFO_RESPONSE = 177,
			E_ACTION_REGION_FROM_POSITION_RESPONSE = 178,
			E_ACTION_UPDATE_GUI_ROUTE = 179,
			E_ACTION_ALL_RIVALRY_DATA_RESPONSE = 180,
			E_ACTION_ONE_RIVALRY_DATA_RESPONSE = 181,
			E_ACTION_SHOW_SATNAV = 182,
			E_ACTION_SET_LOADING_STATE = 183,
			E_ACTION_WAIT_FOR_STREAMING = 184,
			E_ACTION_PROGRESSION_PROFILE_DATA = 185,
			E_ACTION_LOAD_PROFILE = 186,
			E_ACTION_REMOVE_ALL_RIVALS = 187,
			E_ACTION_ADD_RIVAL = 188,
			E_ACTION_RIVAL_STATE_CHANGED = 189,
			E_ACTION_UPDATE_CAR_STATS = 190,
			E_ACTION_PROP_SMASH_PROGRESSION = 191,
			E_ACTION_UPDATE_PLAYER_MEDALS = 192,
			E_ACTION_EVENT_AT_JUNCTION_AVAILABLE = 193,
			E_ACTION_ALL_EVENTS_DISCOVERED = 194,
			E_ACTION_ALL_EVENTS_OF_TYPE_DISCOVERED = 195,
			E_ACTION_TROPHY_UNLOCK = 196,
			E_ACTION_ROAD_RAGE_PLAYER_DAMAGE = 197,
			E_ACTION_ALL_EVENT_TYPE_WON = 198,
			E_ACTION_RIVAL_UNLOCKED_INTO_THE_WORLD_ACTION = 199,
			E_ACTION_ONE_HUNDRED_PERCENT_COMPLETE = 200,
			E_ACTION_ACHIEVEMENTS_EARNED = 201,
			E_ACTION_ALL_RIVALS_SHUTDOWN = 202,
			E_ACTION_PAYBACK_LOST = 203,
			E_ACTION_PAYBACK_VICTIM_LEFT_GAME = 204,
			E_ACTION_PAYBACK_MUGSHOT = 205,
			E_ACTION_ABORT_MUGSHOT_CAPTURE = 206,
			E_ACTION_PAYBACK_ACTIVATED = 207,
			E_ACTION_PAYBACK_OVER = 208,
			E_ACTION_PAYBACK_SUCCEEDED = 209,
			E_ACTION_SOUND_TRIGGER = 210,
			E_ACTION_ONLINE_PLAYER_ADDED = 211,
			E_ACTION_ONLINE_PLAYER_REMOVED = 212,
			E_ACTION_OFFLINE_ADD_CAR_TO_MODE = 213,
			E_ACTION_OFFLINE_REMOVE_CAR_FROM_MODE = 214,
			E_ACTION_CAR_ADDITION_PRESENTATION_START = 215,
			E_ACTION_CAR_ADDITION_PRESENTATION_END = 216,
			E_ACTION_LOCAL_PLAYER_DISCONNECTED = 217,
			E_ACTION_LOCAL_PLAYER_LEFT_GAME = 218,
			E_ACTION_UPDATE_RICH_PRESENCE = 219,
			E_ACTION_SEND_TELEMETRY = 220,
			E_ACTION_ONLINE_GAME_RESULT = 221,
			E_ACTION_ONLINE_ROUND_RESULT = 222,
			E_ACTION_ONLINE_LAUNCH_FREE_BURN_LOBBY = 223,
			E_ACTION_ROAD_RULES_CHALLENGE_SCORES = 224,
			E_ACTION_ROAD_RULES_PERSONAL_BEST = 225,
			E_ACTION_ROAD_RULES_OVERWRITE_SERVER_RECORD = 226,
			E_ACTION_START_GAME_THROUGH_PLAYER_JOIN = 227,
			E_ACTION_RESTART_TRAFFIC = 228,
			E_ACTION_NETWORK_COLLECTABLE = 229,
			E_ACTION_NETWORK_CAUGHT_FEVER = 230,
			E_ACTION_REQUEST_GAMERCARD = 231,
			E_ACTION_HUD_MESSAGE_TOOK_LEAD = 232,
			E_ACTION_HUD_MESSAGE_TOOK_LAST = 233,
			E_ACTION_HUD_MESSAGE_DIST_TO_FINISH = 234,
			E_ACTION_HUD_MESSAGE_LEADING = 235,
			E_ACTION_HUD_MESSAGE_NECK_AND_NECK = 236,
			E_ACTION_HUD_MESSAGE_X_FINISHES = 237,
			E_ACTION_HUD_MESSAGE_X_REACHES_CHECKPOINT = 238,
			E_ACTION_HUD_MESSAGE_PLAYER_REACHES_CHECKPOINT = 239,
			E_ACTION_HUD_MESSAGE_X_CRASHES = 240,
			E_ACTION_HUD_MESSAGE_WRONG_WAY = 241,
			E_ACTION_HUD_MESSAGE_STUNT_PERFORMED = 242,
			E_ACTION_HUD_MESSAGE_COMBO_PERFORMED = 243,
			E_ACTION_HUD_MESSAGE_STUNT_TIME_UP = 244,
			E_ACTION_HUD_MESSAGE_BHR_CHECKPOINT = 245,
			E_ACTION_HUD_MESSAGE_BHR_RUNNER_CRASHED = 246,
			E_ACTION_HUD_MESSAGE_ONLINE_TEAM_CHANGE = 247,
			E_ACTION_HUD_MESSAGE_ROAD_RAGE_TIME_EXTENSION = 248,
			E_ACTION_HUD_MESSAGE_RIVAL_FIRST_HIT = 249,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_RIVAL = 250,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_TARGET = 251,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_FLEEING = 252,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_WRECKED = 253,
			E_ACTION_HUD_MESSAGE_PLAYER_CAN_SKIP_CRASH = 254,
			E_ACTION_HUD_MESSAGE_TIME_UP = 255,
			E_ACTION_HUD_MESSAGE_CANT_PAINT = 256,
			E_ACTION_HUD_MESSAGE_MUST_FIX = 257,
			E_ACTION_HUD_MESSAGE_JUMP_FAILED = 258,
			E_ACTION_WRONG_CAR_FOR_CHALLENGE = 259,
			E_ACTION_ROAD_RULES_ENTER_ROAD = 260,
			E_ACTION_ROAD_RULES_LEAVE_ROAD = 261,
			E_ACTION_ROAD_RULES_BATCH_QUERY = 262,
			E_ACTION_UPCOMING_ROAD_CHANGE = 263,
			E_ACTION_ROAD_RULES_START_RULE = 264,
			E_ACTION_ROAD_RULES_END_RULE = 265,
			E_ACTION_ROAD_RULES_UPDATE = 266,
			E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE = 267,
			E_ACTION_ROAD_RULES_NEW_HIGH_SCORE = 268,
			E_ACTION_ROAD_RULES_ACTIVE_RULE_CHANGE = 269,
			E_ACTION_ROAD_RULES_TIME_WARNING = 270,
			E_ACTION_ROAD_RULES_ROAD_SCORE = 271,
			E_ACTION_ROAD_RULES_NEW_RULERS = 272,
			E_ACTION_ROAD_RULES_MODE_SWITCH = 273,
			E_ACTION_PLAYER_IN_SHORTCUT = 274,
			E_ACTION_IMAGE_GALLERY_RENDER_IMAGE = 275,
			E_ACTION_IMAGE_GALLERY_IMAGE_INFO = 276,
			E_ACTION_IMAGE_GALLERY_COUNT_ACTION = 277,
			E_ACTION_IMAGE_GALLERY_DATA_ACTION = 278,
			E_ACTION_IMAGE_GALLERY_LOAD_COMPLETE = 279,
			E_ACTION_SAVE_IMAGE_AND_AUTOSAVE = 280,
			E_ACTION_LOAD_IMAGES = 281,
			E_ACTION_DXT_DECODE_IMAGE = 282,
			E_ACTION_SOUND_BIND_PROPS = 283,
			E_ACTION_COUNT = 284,
		}

		// Declaration
		struct ResetPlayerCarAction {
			// BrnGameActions.h:558
			enum CarSelectType {
				E_CAR_SELECT_DONT_DROP = 0,
				E_CAR_SELECT_DROP_NORMAL = 1,
				E_CAR_SELECT_DROP_SHUTDOWN = 2,
			}

		}

		// Declaration
		struct SoundTriggerAction {
			// BrnGameActions.h:3663
			enum eType {
				E_TYPE_INVALID = 0,
				E_TYPE_AT_ENTITY = 1,
				E_TYPE_AHEAD_OF_ENTITY = 2,
				E_TYPE_COUNT = 3,
			}

		}

		// Declaration
		struct NewCarUnlockedAction {
			// BrnGameActions.h:3770
			enum Type {
				E_TYPE_UNLOCK = 0,
				E_TYPE_GIFT = 1,
				E_TYPE_TROPHY = 2,
				E_TYPE_SHUTDOWN_RIVAL = 3,
			}

		}

		// Declaration
		struct UpcomingRoadChangeAction {
			// BrnGameActions.h:4829
			enum ESignState {
				E_SIGN_STATE_INVALID = -1,
				E_SIGN_STATE_GREEN = 0,
				E_SIGN_STATE_RED = 1,
				E_SIGN_STATE_FLASHING = 2,
				E_SIGN_STATE_COUNT = 3,
			}

		}

		// BrnGameActions.h:462
		const int32_t KI_EVENT_MANAGER_DEFAULT_ACTION_QUEUE_LENGTH = 13312;

		// BrnGameActions.h:463
		const int32_t KI_EVENT_MANAGER_SMALL_ACTION_QUEUE_LENGTH = 256;

	}

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// Declaration
		struct UpcomingRoadChangeAction {
			// BrnGameActions.h:4829
			enum ESignState {
				E_SIGN_STATE_INVALID = -1,
				E_SIGN_STATE_GREEN = 0,
				E_SIGN_STATE_RED = 1,
				E_SIGN_STATE_FLASHING = 2,
				E_SIGN_STATE_COUNT = 3,
			}

		}

		// BrnGameActions.h:92
		using BrnNetwork::BrnNetworkModuleIO;

		// BrnGameActions.h:95
		enum EGameActionType {
			E_ACTION_RESET_PLAYER_CAR = 0,
			E_ACTION_GUI_UPDATE_PLAYER_CAR_ID = 1,
			E_ACTION_GUI_CAR_UNLOCK = 2,
			E_ACTION_RESET_PLAYER_CAR_ON_TRACK = 3,
			E_ACTION_SET_PLAYER_OPPONENTS = 4,
			E_ACTION_SETUP_NETWORK_CAR = 5,
			E_ACTION_SET_TAKEDOWN_CAMERA_STATE = 6,
			E_ACTION_SET_PLAYER_CAR_DRIVER = 7,
			E_ACTION_FORCE_PLAYER_CAR_DRIVER = 8,
			E_ACTION_RESET_CRASHING = 9,
			E_ACTION_RESET_RACE_CAR_CRASHING = 10,
			E_ACTION_REMOTE_PLAYER_DISCONNECTED = 11,
			E_ACTION_NOTIFY_DIRECTOR_LOCAL_PLAYER_DISCONNECTED = 12,
			E_ACTION_EMPTY_TRAFFIC_POOL = 13,
			E_ACTION_ON_PLAYER_TAKEDOWN = 14,
			E_ACTION_COMPLETED_STUNT = 15,
			E_ACTION_INPROGRESS_STUNT = 16,
			E_ACTION_PLAYER_CRASH_ENDING_SOON = 17,
			E_ACTION_CHECK_FOR_LOADING_SCREEN = 18,
			E_ACTION_PREPARE_FOR_MODE = 19,
			E_ACTION_BROADCAST_MODE_FINISH_LINES = 20,
			E_ACTION_STOP_MODE_OFFLINE = 21,
			E_ACTION_FINISH_MODE_ONLINE = 22,
			E_ACTION_FINISH_MODE_FINAL_ONLINE = 23,
			E_ACTION_SET_TRAFFIC_SCALE_BASED_ON_RANK = 24,
			E_ACTION_START_MODE_INTRO = 25,
			E_ACTION_STOP_MODE_INTRO = 26,
			E_ACTION_MARKED_MAN_LOADED = 27,
			E_ACTION_STOP_MODE_SPLASH = 28,
			E_ACTION_STOP_MODE_COUNTDOWN = 29,
			E_ACTION_START_PLAYING_MODE = 30,
			E_ACTION_FINISHED_MODE = 31,
			E_ACTION_SHOW_MODE_RESULTS = 32,
			E_ACTION_FINISHED_MODE_RESULTS = 33,
			E_ACTION_STOP_MODE = 34,
			E_ACTION_QUIT_MODE_OFFLINE = 35,
			E_ACTION_QUIT_MODE_ONLINE = 36,
			E_ACTION_IMPACT_TIME_START = 37,
			E_ACTION_IMPACT_TIME_END = 38,
			E_ACTION_SET_IN_MODE_START_REGION = 39,
			E_ACTION_SET_UP_ALL_DRIVE_THRUS = 40,
			E_ACTION_CLOSE_DRIVE_THRU = 41,
			E_ACTION_SET_COUNTDOWN = 42,
			E_ACTION_SHOW_HUD_MESSAGE = 43,
			E_ACTION_SHOW_POPUP = 44,
			E_ACTION_REQUEST_ROUTE_INFO = 45,
			E_ACTION_SET_LANDMARK_RACES = 46,
			E_ACTION_DAMAGE_CRITICAL = 47,
			E_ACTION_PLAYER_HIT_RIVAL = 48,
			E_ACTION_RIVAL_HIT_PLAYER = 49,
			E_ACTION_REQUEST_AUTOSAVE = 50,
			E_ACTION_ON_JUMP_START = 51,
			E_ACTION_SHOW_JUMP_NAME = 52,
			E_ACTION_ON_STUNT_ELEMENT_COMPLETE = 53,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_FOR_COUNTY = 54,
			E_ACTION_ON_ALL_STUNT_ELEMENTS_COMPLETE_BY_TYPE = 55,
			E_ACTION_STUNT_ELEMENT_BOOST = 56,
			E_ACTION_NEW_CAR_UNLOCKED = 57,
			E_ACTION_CAR_UNLOCK_END = 58,
			E_ACTION_CAR_SELECTION_CHANGED = 59,
			E_ACTION_CAR_SELECTION_CHANGED_DROPIN = 60,
			E_ACTION_CAR_SELECTION_DROPIN_COMPLETE = 61,
			E_ACTION_CAR_SELECTION_CHANGED_ONLINE = 62,
			E_ACTION_SWITCH_CAR_CORONAS_ON_OFF = 63,
			E_ACTION_CAR_SELECTION_REQUEST_STREAMING = 64,
			E_ACTION_ALLOW_BOOST_EARNING = 65,
			E_ACTION_STOP_BOOSTING = 66,
			E_ACTION_CAR_SELECT_START_GUI_ON_GAME_START = 67,
			E_ACTION_CAR_SELECT_TRANSITION_IN = 68,
			E_ACTION_CAR_SELECT_WAITING_FOR_AUDIO = 69,
			E_ACTION_CAR_SELECT_READY = 70,
			E_ACTION_CAR_SELECT_MODIFICATION_SCREEN = 71,
			E_ACTION_CAR_SELECT_EXIT = 72,
			E_ACTION_CAR_SELECT_ABORT = 73,
			E_ACTION_CAR_SELECT_CHANGE_COLOUR = 74,
			E_ACTION_CAR_SELECT_PAUSED_IN_CAR_SELECT = 75,
			E_ACTION_PLAYER_CAR_COLOUR_RESPONSE = 76,
			E_ACTION_CAR_SELECT_ONLINE_TIME_LEFT = 77,
			E_ACTION_CAR_SELECT_ONLINE_END = 78,
			E_ACTION_CAR_SELECT_ONLINE_SELECT_CAR = 79,
			E_ACTION_CAR_SELECT_ONLINE_CAR_IS_SHOWABLE = 80,
			E_ACTION_PAUSE_SIMULATION = 81,
			E_ACTION_UNPAUSE_SIMULATION = 82,
			E_ACTION_PAUSE_ONLINE = 83,
			E_ACTION_UNPAUSE_ONLINE = 84,
			E_ACTION_PROMPT_START_OFFLINE_GAME_MODE = 85,
			E_ACTION_PROMPT_DO_INVITE = 86,
			E_ACTION_START_PREPARE_FOR_INVITE = 87,
			E_ACTION_UPDATE_PREPARE_FOR_INVITE = 88,
			E_ACTION_PREPARED_FOR_INVITE = 89,
			E_ACTION_PERFORM_INVITE = 90,
			E_ACTION_INVITE_COMPLETE = 91,
			E_ACTION_DRIVE_THRU_BODY_SHOP = 92,
			E_ACTION_DRIVE_THRU_PAINT_SHOP = 93,
			E_ACTION_DRIVE_THRU_JUNK_YARD = 94,
			E_ACTION_DRIVE_THRU_GAS_STATION = 95,
			E_ACTION_DRIVE_THRU_CLOSED = 96,
			E_ACTION_DRIVE_THRU_STOP_PRESENTATION = 97,
			E_ACTION_PLAYER_REACHED_ROAD_RAGE_TARGET = 98,
			E_ACTION_DRIVE_THRU_DISCOVERED = 99,
			E_ACTION_ALL_DRIVE_THRUS_DISCOVERED = 100,
			E_ACTION_DRIVE_THRU_JUNK_YARD_ON_GAME_START = 101,
			E_ACTION_ON_TRAFFIC_CHECKING = 102,
			E_ACTION_ON_TRAFFIC_CHECKING_CHAIN = 103,
			E_ACTION_TRIGGER = 104,
			E_ACTION_KILLZONE = 105,
			E_ACTION_PLAYER_INVULNERABLE = 106,
			E_ACTION_WORLD_REGION_CHANGE = 107,
			E_ACTION_RACE_CAR_REACHED_CHECKPOINT = 108,
			E_ACTION_RACE_CAR_REACHED_FINISH = 109,
			E_ACTION_PLAYER_REACHED_PENULTIMATE_CHECKPOINT = 110,
			E_ACTION_TRAFFIC_TYPE_REQUEST = 111,
			E_ACTION_TRACK_PLAYER_TO_LOCATION = 112,
			E_ACTION_SET_WAYPOINT_DISTANCES_TO_FINISH = 113,
			E_ACTION_PLAYER_RESET_ON_TRACK = 114,
			E_ACTION_SHUTDOWN = 115,
			E_ACTION_SHUTDOWN_FINISHED = 116,
			E_ACTION_AWARD_SEQUENCE_START = 117,
			E_ACTION_AWARD_SEQUENCE_END = 118,
			E_ACTION_CRASH_COMBO = 119,
			E_ACTION_SET_SIXAXIS_STEERING = 120,
			E_ACTION_SWITCH_CAR_COLOUR = 121,
			E_ACTION_WORLD_STUNT_PERFORMED = 122,
			E_ACTION_OVERHEAD_SIGN_HIT = 123,
			E_ACTION_ALLOW_CAR_TO_JOIN_ROAD_RAGE = 124,
			E_ACTION_HIDE_CAR_IN_ROAD_RAGE = 125,
			E_ACTION_UPDATE_ROAD_RAGE_MADNESS = 126,
			E_ACTION_TRIGGER_CRASH_BREAKER = 127,
			E_ACTION_CANCEL_CRASH_BREAKER = 128,
			E_ACTION_ENTER_SHOWTIME_BONUS_REGION = 129,
			E_ACTION_TOGGLE_SHOWTIME_BEHAVIOUR = 130,
			E_ACTION_VEHICLE_LEAPT = 131,
			E_ACTION_VEHICLE_HIT = 132,
			E_ACTION_ENTER_NEW_ROAD = 133,
			E_ACTION_SHOWTIME_UPDATE = 134,
			E_ACTION_SHOWTIME_MODE_SWITCH = 135,
			E_ACTION_JUST_BOUNCED = 136,
			E_ACTION_JUST_APPLIED_EXTRA_SPIN = 137,
			E_ACTION_SHOWTIME_INTRO_START = 138,
			E_ACTION_POWER_PARK_RESULT = 139,
			E_ACTION_GAME_TRAINING = 140,
			E_ACTION_GAME_TRAINING_REQUEST = 141,
			E_ACTION_GAME_TRAINING_PAUSE = 142,
			E_ACTION_GAME_TRAINING_UNPAUSE = 143,
			E_ACTION_MODE_TIME_TIMEOUT = 144,
			E_ACTION_FREEBURN_CHALLENGE = 145,
			E_ACTION_FREEBURN_CHALLENGE_END_NOT_ACTIVE = 146,
			E_ACTION_FREEBURN_CHALLENGE_UPDATE = 147,
			E_ACTION_FREEBURN_CHALLENGE_COMPLETION_STATUS = 148,
			E_ACTION_FREEBURN_CHALLENGE_EVERY_PLAYER_COMPLETION_STATUS = 149,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS_UPDATE = 150,
			E_ACTION_FREEBURN_CHALLENGE_SUCCESS = 151,
			E_ACTION_FREEBURN_CHALLENGE_SHOW_SELECTOR = 152,
			E_ACTION_ACTIVE_FREEBURN_CHALLENGE = 153,
			E_ACTION_BLUE_TEAM_IS_ESCAPING = 154,
			E_ACTION_BLUE_TEAM_IS_BEHIND_YOU = 155,
			E_ACTION_LEADER_REACHED_BOUNDARY = 156,
			E_ACTION_PLAYER_ELIMINATED = 157,
			E_ACTION_TRAITOROUS_TAKEDOWN = 158,
			E_ACTION_SWITCH_BURNING_HOME_RUN_RUNNER = 159,
			E_ACTION_BURNOUT_SKILLZ = 160,
			E_ACTION_ROAD_RULES_SKILLZ = 161,
			E_ACTION_SET_BOOST = 162,
			E_ACTION_NEAR_MISS = 163,
			E_ACTION_DRIFTING = 164,
			E_ACTION_SPINNING = 165,
			E_ACTION_IN_AIR = 166,
			E_ACTION_ONCOMING = 167,
			E_ACTION_TAILGATING = 168,
			E_ACTION_DISTANCE_DRIVEN = 169,
			E_ACTION_AFTERTOUCH = 170,
			E_ACTION_EVENT_STATE_RESPONSE = 171,
			E_ACTION_GAME_STATS_RESPONSE = 172,
			E_ACTION_RANK_INFO_RESPONSE = 173,
			E_ACTION_PLAYER_INFO_RESPONSE = 174,
			E_ACTION_UNLOCKED_LIVERY_RESPONSE = 175,
			E_ACTION_CAR_SELECTION_RESPONSE = 176,
			E_ACTION_LANDMARK_VARIABLE_INFO_RESPONSE = 177,
			E_ACTION_REGION_FROM_POSITION_RESPONSE = 178,
			E_ACTION_UPDATE_GUI_ROUTE = 179,
			E_ACTION_ALL_RIVALRY_DATA_RESPONSE = 180,
			E_ACTION_ONE_RIVALRY_DATA_RESPONSE = 181,
			E_ACTION_SHOW_SATNAV = 182,
			E_ACTION_SET_LOADING_STATE = 183,
			E_ACTION_WAIT_FOR_STREAMING = 184,
			E_ACTION_PROGRESSION_PROFILE_DATA = 185,
			E_ACTION_LOAD_PROFILE = 186,
			E_ACTION_REMOVE_ALL_RIVALS = 187,
			E_ACTION_ADD_RIVAL = 188,
			E_ACTION_RIVAL_STATE_CHANGED = 189,
			E_ACTION_UPDATE_CAR_STATS = 190,
			E_ACTION_PROP_SMASH_PROGRESSION = 191,
			E_ACTION_UPDATE_PLAYER_MEDALS = 192,
			E_ACTION_EVENT_AT_JUNCTION_AVAILABLE = 193,
			E_ACTION_ALL_EVENTS_DISCOVERED = 194,
			E_ACTION_ALL_EVENTS_OF_TYPE_DISCOVERED = 195,
			E_ACTION_TROPHY_UNLOCK = 196,
			E_ACTION_ROAD_RAGE_PLAYER_DAMAGE = 197,
			E_ACTION_ALL_EVENT_TYPE_WON = 198,
			E_ACTION_RIVAL_UNLOCKED_INTO_THE_WORLD_ACTION = 199,
			E_ACTION_ONE_HUNDRED_PERCENT_COMPLETE = 200,
			E_ACTION_ACHIEVEMENTS_EARNED = 201,
			E_ACTION_ALL_RIVALS_SHUTDOWN = 202,
			E_ACTION_PAYBACK_LOST = 203,
			E_ACTION_PAYBACK_VICTIM_LEFT_GAME = 204,
			E_ACTION_PAYBACK_MUGSHOT = 205,
			E_ACTION_ABORT_MUGSHOT_CAPTURE = 206,
			E_ACTION_PAYBACK_ACTIVATED = 207,
			E_ACTION_PAYBACK_OVER = 208,
			E_ACTION_PAYBACK_SUCCEEDED = 209,
			E_ACTION_SOUND_TRIGGER = 210,
			E_ACTION_ONLINE_PLAYER_ADDED = 211,
			E_ACTION_ONLINE_PLAYER_REMOVED = 212,
			E_ACTION_OFFLINE_ADD_CAR_TO_MODE = 213,
			E_ACTION_OFFLINE_REMOVE_CAR_FROM_MODE = 214,
			E_ACTION_CAR_ADDITION_PRESENTATION_START = 215,
			E_ACTION_CAR_ADDITION_PRESENTATION_END = 216,
			E_ACTION_LOCAL_PLAYER_DISCONNECTED = 217,
			E_ACTION_LOCAL_PLAYER_LEFT_GAME = 218,
			E_ACTION_UPDATE_RICH_PRESENCE = 219,
			E_ACTION_SEND_TELEMETRY = 220,
			E_ACTION_ONLINE_GAME_RESULT = 221,
			E_ACTION_ONLINE_ROUND_RESULT = 222,
			E_ACTION_ONLINE_LAUNCH_FREE_BURN_LOBBY = 223,
			E_ACTION_ROAD_RULES_CHALLENGE_SCORES = 224,
			E_ACTION_ROAD_RULES_PERSONAL_BEST = 225,
			E_ACTION_ROAD_RULES_OVERWRITE_SERVER_RECORD = 226,
			E_ACTION_START_GAME_THROUGH_PLAYER_JOIN = 227,
			E_ACTION_RESTART_TRAFFIC = 228,
			E_ACTION_NETWORK_COLLECTABLE = 229,
			E_ACTION_NETWORK_CAUGHT_FEVER = 230,
			E_ACTION_REQUEST_GAMERCARD = 231,
			E_ACTION_HUD_MESSAGE_TOOK_LEAD = 232,
			E_ACTION_HUD_MESSAGE_TOOK_LAST = 233,
			E_ACTION_HUD_MESSAGE_DIST_TO_FINISH = 234,
			E_ACTION_HUD_MESSAGE_LEADING = 235,
			E_ACTION_HUD_MESSAGE_NECK_AND_NECK = 236,
			E_ACTION_HUD_MESSAGE_X_FINISHES = 237,
			E_ACTION_HUD_MESSAGE_X_REACHES_CHECKPOINT = 238,
			E_ACTION_HUD_MESSAGE_PLAYER_REACHES_CHECKPOINT = 239,
			E_ACTION_HUD_MESSAGE_X_CRASHES = 240,
			E_ACTION_HUD_MESSAGE_WRONG_WAY = 241,
			E_ACTION_HUD_MESSAGE_STUNT_PERFORMED = 242,
			E_ACTION_HUD_MESSAGE_COMBO_PERFORMED = 243,
			E_ACTION_HUD_MESSAGE_STUNT_TIME_UP = 244,
			E_ACTION_HUD_MESSAGE_BHR_CHECKPOINT = 245,
			E_ACTION_HUD_MESSAGE_BHR_RUNNER_CRASHED = 246,
			E_ACTION_HUD_MESSAGE_ONLINE_TEAM_CHANGE = 247,
			E_ACTION_HUD_MESSAGE_ROAD_RAGE_TIME_EXTENSION = 248,
			E_ACTION_HUD_MESSAGE_RIVAL_FIRST_HIT = 249,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_RIVAL = 250,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_A_TARGET = 251,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_FLEEING = 252,
			E_ACTION_HUD_MESSAGE_RIVAL_IS_WRECKED = 253,
			E_ACTION_HUD_MESSAGE_PLAYER_CAN_SKIP_CRASH = 254,
			E_ACTION_HUD_MESSAGE_TIME_UP = 255,
			E_ACTION_HUD_MESSAGE_CANT_PAINT = 256,
			E_ACTION_HUD_MESSAGE_MUST_FIX = 257,
			E_ACTION_HUD_MESSAGE_JUMP_FAILED = 258,
			E_ACTION_WRONG_CAR_FOR_CHALLENGE = 259,
			E_ACTION_ROAD_RULES_ENTER_ROAD = 260,
			E_ACTION_ROAD_RULES_LEAVE_ROAD = 261,
			E_ACTION_ROAD_RULES_BATCH_QUERY = 262,
			E_ACTION_UPCOMING_ROAD_CHANGE = 263,
			E_ACTION_ROAD_RULES_START_RULE = 264,
			E_ACTION_ROAD_RULES_END_RULE = 265,
			E_ACTION_ROAD_RULES_UPDATE = 266,
			E_ACTION_ROAD_RULES_UPDATE_TARGET_ROAD_SCORE = 267,
			E_ACTION_ROAD_RULES_NEW_HIGH_SCORE = 268,
			E_ACTION_ROAD_RULES_ACTIVE_RULE_CHANGE = 269,
			E_ACTION_ROAD_RULES_TIME_WARNING = 270,
			E_ACTION_ROAD_RULES_ROAD_SCORE = 271,
			E_ACTION_ROAD_RULES_NEW_RULERS = 272,
			E_ACTION_ROAD_RULES_MODE_SWITCH = 273,
			E_ACTION_PLAYER_IN_SHORTCUT = 274,
			E_ACTION_IMAGE_GALLERY_RENDER_IMAGE = 275,
			E_ACTION_IMAGE_GALLERY_IMAGE_INFO = 276,
			E_ACTION_IMAGE_GALLERY_COUNT_ACTION = 277,
			E_ACTION_IMAGE_GALLERY_DATA_ACTION = 278,
			E_ACTION_IMAGE_GALLERY_LOAD_COMPLETE = 279,
			E_ACTION_SAVE_IMAGE_AND_AUTOSAVE = 280,
			E_ACTION_LOAD_IMAGES = 281,
			E_ACTION_DXT_DECODE_IMAGE = 282,
			E_ACTION_SOUND_BIND_PROPS = 283,
			E_ACTION_COUNT = 284,
		}

		// Declaration
		struct PrepareForModeAction {
			// BrnGameActions.h:856
			enum EPrepareForModeStage {
				E_PFM_STAGE_ALL_IN_ONE = 0,
				E_PFM_STAGE_FIRST_OF_TWO = 1,
				E_PFM_STAGE_SECOND_OF_TWO = 2,
				E_PFM_STAGE_COUNT = 3,
			}

		}

		// Declaration
		struct SoundTriggerAction {
			// BrnGameActions.h:3663
			enum eType {
				E_TYPE_INVALID = 0,
				E_TYPE_AT_ENTITY = 1,
				E_TYPE_AHEAD_OF_ENTITY = 2,
				E_TYPE_COUNT = 3,
			}

		}

		// BrnGameActions.h:462
		const int32_t KI_EVENT_MANAGER_DEFAULT_ACTION_QUEUE_LENGTH = 13312;

		// BrnGameActions.h:463
		const int32_t KI_EVENT_MANAGER_SMALL_ACTION_QUEUE_LENGTH = 256;

	}

}

