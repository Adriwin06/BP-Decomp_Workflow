// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:162
	enum EPaybackType {
		E_PAYBACK_TYPE_START = 0,
		E_PAYBACK_TYPE_REVERSE_STEERING = 0,
		E_PAYBACK_TYPE_BOOST_LOCK = 1,
		E_PAYBACK_TYPE_AGGRESSORS_CONTROLS_AFFECTS_VICTIM = 2,
		E_PAYBACK_TYPE_SIX_AXIS_STEERING = 3,
		E_PAYBACK_TYPE_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:286
	enum EBoostType {
		E_BOOST_TYPE_NORMAL = 0,
		E_BOOST_TYPE_DANGER = 1,
		E_BOOST_TYPE_AGGRESSION = 2,
		E_BOOST_TYPE_STUNT = 3,
		E_BOOST_TYPE_INFINITE = 4,
		E_BOOST_TYPE_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// BrnNetworkSharedIO.h:442
		const int32_t KI_MAX_DIRTY_TRICK_UPDATES_PER_PLAYER = 28;

		// BrnNetworkSharedIO.h:443
		const int32_t KI_MAX_INVITE_EVENTS = 1;

		// BrnNetworkSharedIO.h:444
		const int32_t KI_MAX_REMOTE_PLAYER_DISCONNECTS = 7;

	}

	// BrnNetworkSharedIO.h:176
	extern BrnNetwork::EPaybackType operator++(BrnNetwork::EPaybackType &, int);

	// BrnNetworkSharedIO.h:39
	const int32_t KI_MAX_ROAD_RULES_MESSAGE_ENTRIES = 10;

	// BrnNetworkSharedIO.h:40
	const int32_t KI_MAX_ROAD_RULES_RECEIVED_EVENTS = 14;

	// BrnNetworkSharedIO.h:41
	const int32_t KI_MAX_ROAD_RULES_DOWNLOADED_EVENTS = 40;

}

// BrnNetworkSharedIO.h:322
struct BrnNetwork::RoadRulesMessageData {
	// BrnNetworkSharedIO.h:329
	int32_t[2] maScores;

	// BrnNetworkSharedIO.h:330
	uint64_t mu64RoadRulesID;

	// BrnNetworkSharedIO.h:331
	Road::ChallengeIndex mChallengeIndex;

public:
	// BrnNetworkSharedIO.h:327
	void Construct();

}

// BrnNetworkSharedIO.h:343
struct BrnNetwork::RoadRulesRecvData : Event {
	// BrnNetworkSharedIO.h:346
	RoadRulesMessageData[10] maRoadRulesData;

	// BrnNetworkSharedIO.h:347
	PlayerName mPlayerName;

	// CgsNetworkConstants.h:38
	typedef int32_t NetworkPlayerID;

	// BrnNetworkSharedIO.h:348
	RoadRulesRecvData::NetworkPlayerID mPlayerID;

	// BrnNetworkSharedIO.h:349
	int32_t miNumRoadRulesScoresRecv;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:286
	enum EBoostType {
		E_BOOST_TYPE_NORMAL = 0,
		E_BOOST_TYPE_DANGER = 1,
		E_BOOST_TYPE_AGGRESSION = 2,
		E_BOOST_TYPE_STUNT = 3,
		E_BOOST_TYPE_INFINITE = 4,
		E_BOOST_TYPE_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// BrnNetworkSharedIO.h:442
		const int32_t KI_MAX_DIRTY_TRICK_UPDATES_PER_PLAYER = 28;

		// BrnNetworkSharedIO.h:443
		const int32_t KI_MAX_INVITE_EVENTS = 1;

		// BrnNetworkSharedIO.h:444
		const int32_t KI_MAX_REMOTE_PLAYER_DISCONNECTS = 7;

	}

	// BrnNetworkSharedIO.h:39
	const int32_t KI_MAX_ROAD_RULES_MESSAGE_ENTRIES = 10;

	// BrnNetworkSharedIO.h:40
	const int32_t KI_MAX_ROAD_RULES_RECEIVED_EVENTS = 14;

	// BrnNetworkSharedIO.h:41
	const int32_t KI_MAX_ROAD_RULES_DOWNLOADED_EVENTS = 40;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:51
	enum ECameraStatus {
		E_CAMERA_STATUS_NONE = 0,
		E_CAMERA_STATUS_AVAILABLE = 1,
		E_CAMERA_STATUS_IN_USE = 2,
		E_CAMERA_STATUS_DISABLED = 3,
		E_CAMERA_STATUS_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:69
	enum EBrnGameSecurity {
		E_GAMESECURITY_ALLCOMERS = 0,
		E_GAMESECURITY_FRIENDS_ONLY = 1,
		E_GAMESECURITY_INVITE_ONLY = 2,
		E_GAMESECURITY_COUNT = 3,
	}

	// BrnNetworkSharedIO.h:87
	enum ESearchGameModes {
		E_SEARCH_GAME_MODES_ANY = 0,
		E_SEARCH_GAME_MODES_RACE = 1,
		E_SEARCH_GAME_MODES_ROAD_RAGE = 2,
		E_SEARCH_GAME_MODES_BURNING_HOME_RUN = 3,
		E_SEARCH_GAME_MODES_FREE_BURN_LOBBY = 4,
		E_SEARCH_GAME_MODES_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:142
	enum ELeftGameReason {
		E_LEFT_GAME_REASON_LEFT = 0,
		E_LEFT_GAME_REASON_COMMS_FAILED = 1,
		E_LEFT_GAME_REASON_KICKED = 2,
		E_LEFT_GAME_REASON_GAME_DELETED = 3,
		E_LEFT_GAME_REASON_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:162
	enum EPaybackType {
		E_PAYBACK_TYPE_START = 0,
		E_PAYBACK_TYPE_REVERSE_STEERING = 0,
		E_PAYBACK_TYPE_BOOST_LOCK = 1,
		E_PAYBACK_TYPE_AGGRESSORS_CONTROLS_AFFECTS_VICTIM = 2,
		E_PAYBACK_TYPE_SIX_AXIS_STEERING = 3,
		E_PAYBACK_TYPE_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:186
	enum EDirtyTrickStatus {
		E_DIRTY_TRICK_STATUS_MARKED_MAN_TAKEDOWN = 0,
		E_DIRTY_TRICK_STATUS_AVAILABLE = 1,
		E_DIRTY_TRICK_STATUS_INITIALISED = 2,
		E_DIRTY_TRICK_STATUS_SURVIVED = 3,
		E_DIRTY_TRICK_STATUS_CRASHED = 4,
		E_DIRTY_TRICK_STATUS_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:207
	enum ETelemetryHook {
		E_TELEMETRY_UNKNOWN = 0,
		E_TELEMETRY_EVENT_STARTED = 1,
		E_TELEMETRY_EVENT_STARTED_ONLINE = 2,
		E_TELEMETRY_EVENT_FINISHED = 3,
		E_TELEMETRY_EVENT_QUIT = 4,
		E_TELEMETRY_EVENT_DISCONNECT = 5,
		E_TELEMETRY_CRASHED_INTO_WORLD = 6,
		E_TELEMETRY_CRASHED_INTO_TRAFFIC = 7,
		E_TELEMETRY_CRASHED_INTO_RACE_CAR = 8,
		E_TELEMETRY_CRASHED_STARTED_SHOWTIME = 9,
		E_TELEMETRY_TAKEDOWN = 10,
		E_TELEMETRY_TAKEDOWN_VERTICAL = 11,
		E_TELEMETRY_TAKEDOWN_AFTERTOUCH = 12,
		E_TELEMETRY_TAKEDOWN_TBONE = 13,
		E_TELEMETRY_TAKEDOWN_MARKED_MAN = 14,
		E_TELEMETRY_RIVAL_ADDED = 15,
		E_TELEMETRY_RIVAL_REMOVED = 16,
		E_TELEMETRY_MUGSHOT_GAMERPIC = 17,
		E_TELEMETRY_MUGSHOT_PHOTO = 18,
		E_TELEMETRY_ROAD_RULES_NEW_PB_TIME = 19,
		E_TELEMETRY_ROAD_RULES_NEW_PB_CRASH = 20,
		E_TELEMETRY_EVENT_CAR_MODEL = 21,
		E_TELEMETRY_EVENT_EARNED_LICENCE = 22,
		E_TELEMETRY_NETWORK_CONNECT = 23,
		E_TELEMETRY_NETWORK_GAME_CREATED = 24,
		E_TELEMETRY_NETWORK_GAME_JOINED = 25,
		E_TELEMETRY_NETWORK_GAME_STARTED = 26,
		E_TELEMETRY_NETWORK_CHALLENGE_STARTED = 27,
		E_TELEMETRY_NETWORK_CHALLENGE_FINISHED = 28,
		E_TELEMETRY_NETWORK_CHALLENGE_CANCELLED = 29,
		E_TELEMETRY_NETWORK_HOST_PLAYERS_IN_GAME = 30,
		E_TELEMETRY_NETWORK_HOST_TRACKID = 31,
		E_TELEMETRY_NETWORK_HOST_NUMBER_OF_ROUNDS = 32,
		E_TELEMETRY_NETWORK_HOST_IS_RANKED = 33,
		E_TELEMETRY_GAME_FINISH_TIME = 34,
		E_TELEMETRY_GAME_FINISH_TIMEOUT = 35,
		E_TELEMETRY_DRIVE_THRU_PAINT_SHOP = 36,
		E_TELEMETRY_DRIVE_THRU_BODY_SHOP = 37,
		E_TELEMETRY_DRIVE_THRU_JUNK_YARD = 38,
		E_TELEMETRY_DRIVE_THRU_CAR_WASH = 39,
		E_TELEMETRY_DRIVE_THRU_AUTO_PARTS = 40,
		E_TELEMETRY_DRIVE_THRU_GAS_STATION = 41,
		E_TELEMETRY_NEWS_READ = 42,
		E_TELEMETRY_LEADERBOARD_VIEWED = 43,
		E_TELEMETRY_CUSTOM_ROUTE_CREATED = 44,
		E_TELEMETRY_EASY_DRIVE_OPENED = 45,
		E_TELEMETRY_NETWORK_GAME_LEFT = 46,
		E_TELEMETRY_ACHIEVEMENT_EARNT = 47,
		E_TELEMETRY_DIRTYSOCK_UPNP = 48,
		E_TELEMETRY_DIRTYSOCK_CONNECTION = 49,
		E_TELEMETRY_HOOKS_COUNT = 50,
	}

	// BrnNetworkSharedIO.h:286
	enum EBoostType {
		E_BOOST_TYPE_NORMAL = 0,
		E_BOOST_TYPE_DANGER = 1,
		E_BOOST_TYPE_AGGRESSION = 2,
		E_BOOST_TYPE_STUNT = 3,
		E_BOOST_TYPE_INFINITE = 4,
		E_BOOST_TYPE_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:305
	enum EVehicleChoice {
		E_VEHICLE_CHOICE_FREE = 0,
		E_VEHICLE_CHOICE_HOST = 1,
		E_VEHICLE_CHOICE_COUNT = 2,
	}

	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// BrnNetworkSharedIO.h:458
		enum EChallengeEventType {
			E_CHALLENGE_EVENT_SELECTED = 0,
			E_CHALLENGE_EVENT_TRIGGERED = 1,
			E_CHALLENGE_EVENT_ACTION_SUCCESS = 2,
			E_CHALLENGE_EVENT_RESET = 3,
			E_CHALLENGE_EVENT_ENDED = 4,
			E_CHALLENGE_EVENT_RESULTS_FINISHED = 5,
			E_CHALLENGE_EVENT_COUNT = 6,
		}

		struct DirtyTrickEvent;

		struct InviteOrJoinParams;

		// Declaration
		struct BuddyInformation {
			// BrnNetworkSharedIO.h:599
			enum EInviteStatus {
				E_INVITED_NONE = 0,
				E_INVITED_TO_LOCAL_PLAYERS_GAME = 1,
				E_INVITED_LOCAL_PLAYER_TO_GAME = 2,
				E_INVITED_COUNT = 3,
			}

		}

		struct InGamePlayerStatusData;

		struct InGamePlayerStatusInterface;

		struct OnlineLobbyPlayerStatusInterface;

		struct NetworkEventQueue;

		struct NetworkEvent<32>;

		struct NetworkEvent<19>;

		struct NetworkEvent<33>;

		struct NetworkOutRecvRoadRulesPBEvent;

		struct NetworkEvent<31>;

		struct NetworkEvent<46>;

		struct NetworkEvent<47>;

		struct NetworkInRoadRulesPBEvent;

		struct NetworkEvent<29>;

		struct NetworkInPaybackMugshotEvent;

		struct NetworkInOfflineProgression;

		struct NetworkInPaybackIntialised;

		struct NetworkInPaybackSucceeded;

		struct NetworkEvent<38>;

		struct NetworkInFreeburnChallengeEvent;

		struct NetworkInDxtDecodeImageEvent;

		struct OutputBuffer;

		struct PostSimulationInputBuffer;

		struct NetworkPlayerMappingData;

		struct GameStateToNetworkInterface;

		struct NetworkToGameStateInterface;

		struct PlayerResultsData;

		struct PlayerResultsInterface;

		struct StatsInputInterface;

		struct StatsOutputInterface;

		struct NetworkToGuiInterface;

		struct PreSimulationInputBuffer;

		// BrnNetworkSharedIO.h:442
		const int32_t KI_MAX_DIRTY_TRICK_UPDATES_PER_PLAYER = 28;

		// BrnNetworkSharedIO.h:443
		const int32_t KI_MAX_INVITE_EVENTS = 1;

		// BrnNetworkSharedIO.h:444
		const int32_t KI_MAX_REMOTE_PLAYER_DISCONNECTS = 7;

	}

	// BrnNetworkSharedIO.h:39
	const int32_t KI_MAX_ROAD_RULES_MESSAGE_ENTRIES = 10;

	// BrnNetworkSharedIO.h:40
	const int32_t KI_MAX_ROAD_RULES_RECEIVED_EVENTS = 14;

	// BrnNetworkSharedIO.h:41
	const int32_t KI_MAX_ROAD_RULES_DOWNLOADED_EVENTS = 40;

}

// BrnNetworkSharedIO.h:371
struct BrnNetwork::RoadRulesDownloadEvent : Event {
	// BrnNetworkSharedIO.h:378
	PlayerName[2] maPlayerNames;

	// BrnNetworkSharedIO.h:379
	RoadRulesMessageData mRoadRulesData;

public:
	// BrnNetworkSharedIO.h:376
	void Construct();

}

// BrnNetworkSharedIO.h:499
struct BrnNetwork::BrnNetworkModuleIO::DirtyTrickEvent {
	// BrnNetworkSharedIO.h:501
	EActiveRaceCarIndex meAggressorActiveRaceCarIndex;

	// BrnNetworkSharedIO.h:502
	EActiveRaceCarIndex meVictimActiveRaceCarIndex;

	// BrnNetworkSharedIO.h:503
	BrnNetwork::EPaybackType meDirtyTrickType;

	// BrnNetworkSharedIO.h:504
	BrnNetwork::EDirtyTrickStatus meDirtyTrickStatus;

public:
	// BrnNetworkSharedIO.h:507
	void Clear();

}

// BrnNetworkSharedIO.h:520
struct BrnNetwork::BrnNetworkModuleIO::InviteOrJoinParams {
	// BrnNetworkSharedIO.h:523
	PlayerName mPlayerName;

	// BrnNetworkSharedIO.h:524
	int32_t miGameID;

	// BrnNetworkSharedIO.h:525
	int32_t miUserControllerPort;

	// BrnNetworkSharedIO.h:526
	char[128] macSessionID;

	// BrnNetworkSharedIO.h:527
	bool mbIsLocalUserChangeNeeded;

}

// BrnNetworkSharedIO.h:597
struct BrnNetwork::BrnNetworkModuleIO::BuddyInformation {
	// BrnNetworkSharedIO.h:608
	BrnNetwork::BrnNetworkModuleIO::BuddyInformation::EInviteStatus mInviteStatus;

	// BrnNetworkSharedIO.h:609
	int32_t miTotalMessages;

	// BrnNetworkSharedIO.h:610
	int32_t miUnreadMesssages;

	// BrnNetworkSharedIO.h:611
	PlayerName mPlayerName;

	// BrnNetworkSharedIO.h:612
	bool mbIsFullBuddy;

	// BrnNetworkSharedIO.h:613
	bool mbIsOnline;

	// BrnNetworkSharedIO.h:614
	bool mbIsInSameLobby;

	// BrnNetworkSharedIO.h:615
	bool mbIsJoinable;

	// BrnNetworkSharedIO.h:616
	char[100] macPresenceData;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:51
	enum ECameraStatus {
		E_CAMERA_STATUS_NONE = 0,
		E_CAMERA_STATUS_AVAILABLE = 1,
		E_CAMERA_STATUS_IN_USE = 2,
		E_CAMERA_STATUS_DISABLED = 3,
		E_CAMERA_STATUS_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:69
	enum EBrnGameSecurity {
		E_GAMESECURITY_ALLCOMERS = 0,
		E_GAMESECURITY_FRIENDS_ONLY = 1,
		E_GAMESECURITY_INVITE_ONLY = 2,
		E_GAMESECURITY_COUNT = 3,
	}

	// BrnNetworkSharedIO.h:162
	enum EPaybackType {
		E_PAYBACK_TYPE_START = 0,
		E_PAYBACK_TYPE_REVERSE_STEERING = 0,
		E_PAYBACK_TYPE_BOOST_LOCK = 1,
		E_PAYBACK_TYPE_AGGRESSORS_CONTROLS_AFFECTS_VICTIM = 2,
		E_PAYBACK_TYPE_SIX_AXIS_STEERING = 3,
		E_PAYBACK_TYPE_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:186
	enum EDirtyTrickStatus {
		E_DIRTY_TRICK_STATUS_MARKED_MAN_TAKEDOWN = 0,
		E_DIRTY_TRICK_STATUS_AVAILABLE = 1,
		E_DIRTY_TRICK_STATUS_INITIALISED = 2,
		E_DIRTY_TRICK_STATUS_SURVIVED = 3,
		E_DIRTY_TRICK_STATUS_CRASHED = 4,
		E_DIRTY_TRICK_STATUS_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:286
	enum EBoostType {
		E_BOOST_TYPE_NORMAL = 0,
		E_BOOST_TYPE_DANGER = 1,
		E_BOOST_TYPE_AGGRESSION = 2,
		E_BOOST_TYPE_STUNT = 3,
		E_BOOST_TYPE_INFINITE = 4,
		E_BOOST_TYPE_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:305
	enum EVehicleChoice {
		E_VEHICLE_CHOICE_FREE = 0,
		E_VEHICLE_CHOICE_HOST = 1,
		E_VEHICLE_CHOICE_COUNT = 2,
	}

	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// BrnNetworkSharedIO.h:458
		enum EChallengeEventType {
			E_CHALLENGE_EVENT_SELECTED = 0,
			E_CHALLENGE_EVENT_TRIGGERED = 1,
			E_CHALLENGE_EVENT_ACTION_SUCCESS = 2,
			E_CHALLENGE_EVENT_RESET = 3,
			E_CHALLENGE_EVENT_ENDED = 4,
			E_CHALLENGE_EVENT_RESULTS_FINISHED = 5,
			E_CHALLENGE_EVENT_COUNT = 6,
		}

		struct DirtyTrickEvent;

		struct InGamePlayerStatusData;

		struct InGamePlayerStatusInterface;

		struct NetworkPlayerMappingData;

		struct GameStateToNetworkInterface;

		struct NetworkToGameStateInterface;

		struct PlayerResultsData;

		struct PlayerResultsInterface;

		// BrnNetworkSharedIO.h:442
		const int32_t KI_MAX_DIRTY_TRICK_UPDATES_PER_PLAYER = 28;

		// BrnNetworkSharedIO.h:443
		const int32_t KI_MAX_INVITE_EVENTS = 1;

		// BrnNetworkSharedIO.h:444
		const int32_t KI_MAX_REMOTE_PLAYER_DISCONNECTS = 7;

	}

	// BrnNetworkSharedIO.h:39
	const int32_t KI_MAX_ROAD_RULES_MESSAGE_ENTRIES = 10;

	// BrnNetworkSharedIO.h:40
	const int32_t KI_MAX_ROAD_RULES_RECEIVED_EVENTS = 14;

	// BrnNetworkSharedIO.h:41
	const int32_t KI_MAX_ROAD_RULES_DOWNLOADED_EVENTS = 40;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:51
	enum ECameraStatus {
		E_CAMERA_STATUS_NONE = 0,
		E_CAMERA_STATUS_AVAILABLE = 1,
		E_CAMERA_STATUS_IN_USE = 2,
		E_CAMERA_STATUS_DISABLED = 3,
		E_CAMERA_STATUS_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:162
	enum EPaybackType {
		E_PAYBACK_TYPE_START = 0,
		E_PAYBACK_TYPE_REVERSE_STEERING = 0,
		E_PAYBACK_TYPE_BOOST_LOCK = 1,
		E_PAYBACK_TYPE_AGGRESSORS_CONTROLS_AFFECTS_VICTIM = 2,
		E_PAYBACK_TYPE_SIX_AXIS_STEERING = 3,
		E_PAYBACK_TYPE_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:186
	enum EDirtyTrickStatus {
		E_DIRTY_TRICK_STATUS_MARKED_MAN_TAKEDOWN = 0,
		E_DIRTY_TRICK_STATUS_AVAILABLE = 1,
		E_DIRTY_TRICK_STATUS_INITIALISED = 2,
		E_DIRTY_TRICK_STATUS_SURVIVED = 3,
		E_DIRTY_TRICK_STATUS_CRASHED = 4,
		E_DIRTY_TRICK_STATUS_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:207
	enum ETelemetryHook {
		E_TELEMETRY_UNKNOWN = 0,
		E_TELEMETRY_EVENT_STARTED = 1,
		E_TELEMETRY_EVENT_STARTED_ONLINE = 2,
		E_TELEMETRY_EVENT_FINISHED = 3,
		E_TELEMETRY_EVENT_QUIT = 4,
		E_TELEMETRY_EVENT_DISCONNECT = 5,
		E_TELEMETRY_CRASHED_INTO_WORLD = 6,
		E_TELEMETRY_CRASHED_INTO_TRAFFIC = 7,
		E_TELEMETRY_CRASHED_INTO_RACE_CAR = 8,
		E_TELEMETRY_CRASHED_STARTED_SHOWTIME = 9,
		E_TELEMETRY_TAKEDOWN = 10,
		E_TELEMETRY_TAKEDOWN_VERTICAL = 11,
		E_TELEMETRY_TAKEDOWN_AFTERTOUCH = 12,
		E_TELEMETRY_TAKEDOWN_TBONE = 13,
		E_TELEMETRY_TAKEDOWN_MARKED_MAN = 14,
		E_TELEMETRY_RIVAL_ADDED = 15,
		E_TELEMETRY_RIVAL_REMOVED = 16,
		E_TELEMETRY_MUGSHOT_GAMERPIC = 17,
		E_TELEMETRY_MUGSHOT_PHOTO = 18,
		E_TELEMETRY_ROAD_RULES_NEW_PB_TIME = 19,
		E_TELEMETRY_ROAD_RULES_NEW_PB_CRASH = 20,
		E_TELEMETRY_EVENT_CAR_MODEL = 21,
		E_TELEMETRY_EVENT_EARNED_LICENCE = 22,
		E_TELEMETRY_NETWORK_CONNECT = 23,
		E_TELEMETRY_NETWORK_GAME_CREATED = 24,
		E_TELEMETRY_NETWORK_GAME_JOINED = 25,
		E_TELEMETRY_NETWORK_GAME_STARTED = 26,
		E_TELEMETRY_NETWORK_CHALLENGE_STARTED = 27,
		E_TELEMETRY_NETWORK_CHALLENGE_FINISHED = 28,
		E_TELEMETRY_NETWORK_CHALLENGE_CANCELLED = 29,
		E_TELEMETRY_NETWORK_HOST_PLAYERS_IN_GAME = 30,
		E_TELEMETRY_NETWORK_HOST_TRACKID = 31,
		E_TELEMETRY_NETWORK_HOST_NUMBER_OF_ROUNDS = 32,
		E_TELEMETRY_NETWORK_HOST_IS_RANKED = 33,
		E_TELEMETRY_GAME_FINISH_TIME = 34,
		E_TELEMETRY_GAME_FINISH_TIMEOUT = 35,
		E_TELEMETRY_DRIVE_THRU_PAINT_SHOP = 36,
		E_TELEMETRY_DRIVE_THRU_BODY_SHOP = 37,
		E_TELEMETRY_DRIVE_THRU_JUNK_YARD = 38,
		E_TELEMETRY_DRIVE_THRU_CAR_WASH = 39,
		E_TELEMETRY_DRIVE_THRU_AUTO_PARTS = 40,
		E_TELEMETRY_DRIVE_THRU_GAS_STATION = 41,
		E_TELEMETRY_NEWS_READ = 42,
		E_TELEMETRY_LEADERBOARD_VIEWED = 43,
		E_TELEMETRY_CUSTOM_ROUTE_CREATED = 44,
		E_TELEMETRY_EASY_DRIVE_OPENED = 45,
		E_TELEMETRY_NETWORK_GAME_LEFT = 46,
		E_TELEMETRY_ACHIEVEMENT_EARNT = 47,
		E_TELEMETRY_DIRTYSOCK_UPNP = 48,
		E_TELEMETRY_DIRTYSOCK_CONNECTION = 49,
		E_TELEMETRY_HOOKS_COUNT = 50,
	}

	// BrnNetworkSharedIO.h:286
	enum EBoostType {
		E_BOOST_TYPE_NORMAL = 0,
		E_BOOST_TYPE_DANGER = 1,
		E_BOOST_TYPE_AGGRESSION = 2,
		E_BOOST_TYPE_STUNT = 3,
		E_BOOST_TYPE_INFINITE = 4,
		E_BOOST_TYPE_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		struct DirtyTrickEvent;

		struct InviteOrJoinParams;

		struct TelemetryData;

		struct InGamePlayerStatusData;

		struct InGamePlayerStatusInterface;

		struct NetworkPlayerMappingData;

		struct GameStateToNetworkInterface;

		struct NetworkToGameStateInterface;

		struct PlayerResultsData;

		struct PlayerResultsInterface;

		// BrnNetworkSharedIO.h:442
		const int32_t KI_MAX_DIRTY_TRICK_UPDATES_PER_PLAYER = 28;

		// BrnNetworkSharedIO.h:443
		const int32_t KI_MAX_INVITE_EVENTS = 1;

		// BrnNetworkSharedIO.h:444
		const int32_t KI_MAX_REMOTE_PLAYER_DISCONNECTS = 7;

	}

	// BrnNetworkSharedIO.h:39
	const int32_t KI_MAX_ROAD_RULES_MESSAGE_ENTRIES = 10;

	// BrnNetworkSharedIO.h:40
	const int32_t KI_MAX_ROAD_RULES_RECEIVED_EVENTS = 14;

	// BrnNetworkSharedIO.h:41
	const int32_t KI_MAX_ROAD_RULES_DOWNLOADED_EVENTS = 40;

}

// BrnNetworkSharedIO.h:540
struct BrnNetwork::BrnNetworkModuleIO::TelemetryData {
	// BrnNetworkSharedIO.h:542
	BrnNetwork::ETelemetryHook meHook;

	// BrnNetworkSharedIO.h:543
	char[16] macBuffer;

public:
	// BrnNetworkSharedIO.h:548
	void Construct(BrnNetwork::ETelemetryHook);

	// BrnNetworkSharedIO.h:553
	void AddParameter(const char *);

	// BrnNetworkSharedIO.h:558
	void AddParameter(int32_t);

	// BrnNetworkSharedIO.h:562
	void AddParameter(uint32_t);

	// BrnNetworkSharedIO.h:566
	void AddParameter(float32_t);

	// BrnNetworkSharedIO.h:570
	void ClearParameter();

	// BrnNetworkSharedIO.h:575
	void AddParameter(Vector3);

	// BrnNetworkSharedIO.h:580
	void AddParameter(CgsID);

	// BrnNetworkSharedIO.h:585
	void AddParameter(Time);

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:51
	enum ECameraStatus {
		E_CAMERA_STATUS_NONE = 0,
		E_CAMERA_STATUS_AVAILABLE = 1,
		E_CAMERA_STATUS_IN_USE = 2,
		E_CAMERA_STATUS_DISABLED = 3,
		E_CAMERA_STATUS_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:69
	enum EBrnGameSecurity {
		E_GAMESECURITY_ALLCOMERS = 0,
		E_GAMESECURITY_FRIENDS_ONLY = 1,
		E_GAMESECURITY_INVITE_ONLY = 2,
		E_GAMESECURITY_COUNT = 3,
	}

	// BrnNetworkSharedIO.h:87
	enum ESearchGameModes {
		E_SEARCH_GAME_MODES_ANY = 0,
		E_SEARCH_GAME_MODES_RACE = 1,
		E_SEARCH_GAME_MODES_ROAD_RAGE = 2,
		E_SEARCH_GAME_MODES_BURNING_HOME_RUN = 3,
		E_SEARCH_GAME_MODES_FREE_BURN_LOBBY = 4,
		E_SEARCH_GAME_MODES_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:125
	enum EBuddyNotification {
		E_BUDDY_NOTIFICATION_INVITE = 0,
		E_BUDDY_NOTIFICATION_BUDDY_ONLINE = 1,
		E_BUDDY_NOTIFICATION_NUM_ONLINE_BUDDIES = 2,
		E_BUDDY_NOTIFICATION_COUNT = 3,
	}

	// BrnNetworkSharedIO.h:142
	enum ELeftGameReason {
		E_LEFT_GAME_REASON_LEFT = 0,
		E_LEFT_GAME_REASON_COMMS_FAILED = 1,
		E_LEFT_GAME_REASON_KICKED = 2,
		E_LEFT_GAME_REASON_GAME_DELETED = 3,
		E_LEFT_GAME_REASON_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:162
	enum EPaybackType {
		E_PAYBACK_TYPE_START = 0,
		E_PAYBACK_TYPE_REVERSE_STEERING = 0,
		E_PAYBACK_TYPE_BOOST_LOCK = 1,
		E_PAYBACK_TYPE_AGGRESSORS_CONTROLS_AFFECTS_VICTIM = 2,
		E_PAYBACK_TYPE_SIX_AXIS_STEERING = 3,
		E_PAYBACK_TYPE_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:186
	enum EDirtyTrickStatus {
		E_DIRTY_TRICK_STATUS_MARKED_MAN_TAKEDOWN = 0,
		E_DIRTY_TRICK_STATUS_AVAILABLE = 1,
		E_DIRTY_TRICK_STATUS_INITIALISED = 2,
		E_DIRTY_TRICK_STATUS_SURVIVED = 3,
		E_DIRTY_TRICK_STATUS_CRASHED = 4,
		E_DIRTY_TRICK_STATUS_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:207
	enum ETelemetryHook {
		E_TELEMETRY_UNKNOWN = 0,
		E_TELEMETRY_EVENT_STARTED = 1,
		E_TELEMETRY_EVENT_STARTED_ONLINE = 2,
		E_TELEMETRY_EVENT_FINISHED = 3,
		E_TELEMETRY_EVENT_QUIT = 4,
		E_TELEMETRY_EVENT_DISCONNECT = 5,
		E_TELEMETRY_CRASHED_INTO_WORLD = 6,
		E_TELEMETRY_CRASHED_INTO_TRAFFIC = 7,
		E_TELEMETRY_CRASHED_INTO_RACE_CAR = 8,
		E_TELEMETRY_CRASHED_STARTED_SHOWTIME = 9,
		E_TELEMETRY_TAKEDOWN = 10,
		E_TELEMETRY_TAKEDOWN_VERTICAL = 11,
		E_TELEMETRY_TAKEDOWN_AFTERTOUCH = 12,
		E_TELEMETRY_TAKEDOWN_TBONE = 13,
		E_TELEMETRY_TAKEDOWN_MARKED_MAN = 14,
		E_TELEMETRY_RIVAL_ADDED = 15,
		E_TELEMETRY_RIVAL_REMOVED = 16,
		E_TELEMETRY_MUGSHOT_GAMERPIC = 17,
		E_TELEMETRY_MUGSHOT_PHOTO = 18,
		E_TELEMETRY_ROAD_RULES_NEW_PB_TIME = 19,
		E_TELEMETRY_ROAD_RULES_NEW_PB_CRASH = 20,
		E_TELEMETRY_EVENT_CAR_MODEL = 21,
		E_TELEMETRY_EVENT_EARNED_LICENCE = 22,
		E_TELEMETRY_NETWORK_CONNECT = 23,
		E_TELEMETRY_NETWORK_GAME_CREATED = 24,
		E_TELEMETRY_NETWORK_GAME_JOINED = 25,
		E_TELEMETRY_NETWORK_GAME_STARTED = 26,
		E_TELEMETRY_NETWORK_CHALLENGE_STARTED = 27,
		E_TELEMETRY_NETWORK_CHALLENGE_FINISHED = 28,
		E_TELEMETRY_NETWORK_CHALLENGE_CANCELLED = 29,
		E_TELEMETRY_NETWORK_HOST_PLAYERS_IN_GAME = 30,
		E_TELEMETRY_NETWORK_HOST_TRACKID = 31,
		E_TELEMETRY_NETWORK_HOST_NUMBER_OF_ROUNDS = 32,
		E_TELEMETRY_NETWORK_HOST_IS_RANKED = 33,
		E_TELEMETRY_GAME_FINISH_TIME = 34,
		E_TELEMETRY_GAME_FINISH_TIMEOUT = 35,
		E_TELEMETRY_DRIVE_THRU_PAINT_SHOP = 36,
		E_TELEMETRY_DRIVE_THRU_BODY_SHOP = 37,
		E_TELEMETRY_DRIVE_THRU_JUNK_YARD = 38,
		E_TELEMETRY_DRIVE_THRU_CAR_WASH = 39,
		E_TELEMETRY_DRIVE_THRU_AUTO_PARTS = 40,
		E_TELEMETRY_DRIVE_THRU_GAS_STATION = 41,
		E_TELEMETRY_NEWS_READ = 42,
		E_TELEMETRY_LEADERBOARD_VIEWED = 43,
		E_TELEMETRY_CUSTOM_ROUTE_CREATED = 44,
		E_TELEMETRY_EASY_DRIVE_OPENED = 45,
		E_TELEMETRY_NETWORK_GAME_LEFT = 46,
		E_TELEMETRY_ACHIEVEMENT_EARNT = 47,
		E_TELEMETRY_DIRTYSOCK_UPNP = 48,
		E_TELEMETRY_DIRTYSOCK_CONNECTION = 49,
		E_TELEMETRY_HOOKS_COUNT = 50,
	}

	// BrnNetworkSharedIO.h:286
	enum EBoostType {
		E_BOOST_TYPE_NORMAL = 0,
		E_BOOST_TYPE_DANGER = 1,
		E_BOOST_TYPE_AGGRESSION = 2,
		E_BOOST_TYPE_STUNT = 3,
		E_BOOST_TYPE_INFINITE = 4,
		E_BOOST_TYPE_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:305
	enum EVehicleChoice {
		E_VEHICLE_CHOICE_FREE = 0,
		E_VEHICLE_CHOICE_HOST = 1,
		E_VEHICLE_CHOICE_COUNT = 2,
	}

	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// BrnNetworkSharedIO.h:458
		enum EChallengeEventType {
			E_CHALLENGE_EVENT_SELECTED = 0,
			E_CHALLENGE_EVENT_TRIGGERED = 1,
			E_CHALLENGE_EVENT_ACTION_SUCCESS = 2,
			E_CHALLENGE_EVENT_RESET = 3,
			E_CHALLENGE_EVENT_ENDED = 4,
			E_CHALLENGE_EVENT_RESULTS_FINISHED = 5,
			E_CHALLENGE_EVENT_COUNT = 6,
		}

		// BrnNetworkSharedIO.h:478
		enum EInviteFailReason {
			E_INVITE_FAIL_REASON_SAME_CONSOLE = 0,
			E_INVITE_FAIL_REASON_SAME_GAME = 1,
			E_INVITE_FAIL_REASON_USER_CHANGE_WHEN_PLAYER_IS_HOST = 2,
			E_INVITE_FAIL_REASON_UNKNOWN_GAME = 3,
			E_INVITE_FAIL_REASON_NO_HDD = 4,
			E_INVITE_FAIL_REASON_COUNT = 5,
		}

		struct DirtyTrickEvent;

		struct InviteOrJoinParams;

		struct TelemetryData;

		// Declaration
		struct BuddyInformation {
			// BrnNetworkSharedIO.h:599
			enum EInviteStatus {
				E_INVITED_NONE = 0,
				E_INVITED_TO_LOCAL_PLAYERS_GAME = 1,
				E_INVITED_LOCAL_PLAYER_TO_GAME = 2,
				E_INVITED_COUNT = 3,
			}

		}

		struct InGamePlayerStatusData;

		struct InGamePlayerStatusInterface;

		struct OnlineLobbyPlayerStatusInterface;

		struct NetworkEventQueue;

		struct NetworkOutAccountSettings;

		struct NetworkEvent<1>;

		struct NetworkOutBuddyCount;

		struct NetworkEvent<2>;

		struct NetworkOutBuddyInformation;

		struct NetworkEvent<22>;

		struct NetworkEvent<8>;

		struct NetworkOutInviteFailed;

		struct NetworkEvent<6>;

		struct NetworkOutInviteRequest;

		struct NetworkEvent<21>;

		struct NetworkEvent<15>;

		struct NetworkOutGameParamsChanged;

		struct NetworkEvent<23>;

		struct NetworkOutPlayerLeftGame;

		struct NetworkEvent<24>;

		struct NetworkOutPostGameProcessingFinished;

		struct NetworkEvent<32>;

		struct NetworkEvent<16>;

		struct NetworkOutPlayerAddedEvent;

		struct NetworkEvent<20>;

		struct NetworkOutPlayerFinalisedEvent;

		struct NetworkEvent<17>;

		struct NetworkOutPlayerRemovedEvent;

		struct NetworkEvent<18>;

		struct NetworkOutPlayerChangedCarEvent;

		struct NetworkEvent<19>;

		struct NetworkOutPlayerChangedCarColourEvent;

		struct NetworkEvent<25>;

		struct NetworkOutLaunchEvent;

		struct NetworkEvent<26>;

		struct NetworkOutLaunchedEvent;

		struct NetworkEvent<33>;

		struct NetworkOutRecvRoadRulesPBEvent;

		struct NetworkEvent<34>;

		struct NetworkOutRecvRoadRulesUploadedEvent;

		struct NetworkEvent<35>;

		struct NetworkOutRoadRulesDownloadedEvent;

		struct NetworkEvent<36>;

		struct NetworkOutRoadRulesConnectedOnlineEvent;

		struct NetworkEvent<10>;

		struct NetworkEvent<9>;

		struct NetworkOutBuddyNotification;

		struct NetworkEvent<37>;

		struct NetworkOutLocalPlayerConnected;

		struct NetworkEvent<41>;

		struct NetworkOutRestartTrafficEvent;

		struct NetworkEvent<42>;

		struct NetworkOutNetworkPlayerCollectableEvent;

		struct NetworkEvent<50>;

		struct NetworkEvent<51>;

		struct NetworkOutCapturingTheirImageEvent;

		struct NetworkEvent<52>;

		struct NetworkOutImageReceivedEvent;

		struct NetworkEvent<53>;

		struct NetworkOutMugshotToSaveEvent;

		struct NetworkEvent<54>;

		struct NetworkOutAbortImageCaptureEvent;

		struct NetworkEvent<28>;

		struct NetworkOutLiveRevengeProfileData;

		struct NetworkEvent<56>;

		struct NetworkOutSwitchBurningHomeRunRunner;

		struct NetworkEvent<57>;

		struct NetworkOutBurnoutSkillzChanged;

		struct NetworkEvent<58>;

		struct NetworkOutShowtimeUpdate;

		struct NetworkEvent<59>;

		struct NetworkOutShowtimeSwitch;

		struct NetworkEvent<60>;

		struct NetworkOutFreeburnChallenge;

		struct NetworkEvent<61>;

		struct NetworkOutActiveFburnChallengeEvent;

		struct NetworkEvent<62>;

		struct NetworkOutFburnChallengeSuccessUpdateEvent;

		struct NetworkEvent<63>;

		struct NetworkOutFburnChallengeSuccessEvent;

		struct NetworkEvent<43>;

		struct NetworkOutHostChangedEvent;

		struct NetworkEvent<30>;

		struct NetworkOutEventTimeRemaining;

		struct NetworkEvent<31>;

		struct NetworkEvent<11>;

		struct NetworkEvent<12>;

		struct NetworkOutInstantFreeburnEvent;

		struct NetworkEvent<13>;

		struct NetworkOutInstantFreeburnComplete;

		struct NetworkEvent<14>;

		struct NetworkOutBuddyRemovedEvent;

		struct NetworkEvent<67>;

		struct NetworkOutCamPicCompressedEvent;

		struct NetworkEvent<49>;

		struct NetworkEvent<48>;

		struct NetworkOutScoreboardEvent;

		struct NetworkEvent<44>;

		struct NetworkOutRemotePlayerHitCheckpoint;

		struct NetworkEvent<45>;

		struct NetworkOutPlayerCarSelectStatus;

		struct NetworkEvent<46>;

		struct NetworkOutRivalCount;

		struct NetworkEvent<47>;

		struct NetworkInGetBuddies;

		struct NetworkInSendInvite;

		struct NetworkInRevokeInvite;

		struct NetworkInAcceptInvite;

		struct NetworkInDeclineInvite;

		struct NetworkInShowProfile;

		struct NetworkInFriendsUtilShut;

		struct NetworkInLeavingJunkyard;

		struct NetworkInUpdateRichPresence;

		struct NetworkInJoinBuddy;

		struct NetworkInTelemetryEvent;

		struct NetworkInVoipEvent;

		struct NetworkInRoadRulesDataEvent;

		struct NetworkInRoadRulesPBEvent;

		struct NetworkEvent<29>;

		struct NetworkInPaybackMugshotEvent;

		struct NetworkInSettingsUpdateEvent;

		struct NetworkInOfflineProgression;

		struct NetworkInPaybackIntialised;

		struct NetworkInPaybackSucceeded;

		struct NetworkInLiveRevengeProfileLoaded;

		struct NetworkInSwitchBurningHomeRunRunner;

		struct NetworkInShowtimeUpdateEvent;

		struct NetworkInShowtimeSwitchEvent;

		struct NetworkEvent<38>;

		struct NetworkInFreeburnChallengeEvent;

		struct NetworkEvent<39>;

		struct NetworkInFburnChallengeStatusEvent;

		struct NetworkEvent<40>;

		struct NetworkInFburnSuccessUpdateEvent;

		struct NetworkInFburnChallengeSuccessEvent;

		struct NetworkInActiveFburnChallengeEvent;

		struct NetworkInChangeDistrictEvent;

		struct NetworkInDxtDecodeImageEvent;

		struct NetworkInAccountUpdate;

		struct NetworkInReqCamPicEvent;

		struct NetworkInLocalPlayerCrashesEvent;

		struct NetworkInLocalPlayerReachesCheckpoint;

		struct NetworkInShowGamerCard;

		struct OutputBuffer;

		struct PostSimulationInputBuffer;

		struct NetworkPlayerMappingData;

		struct GameStateToNetworkInterface;

		struct NetworkToGameStateInterface;

		struct PlayerResultsData;

		struct PlayerResultsInterface;

		struct StatsInputInterface;

		struct StatsOutputInterface;

		struct NetworkToGuiInterface;

		struct PreSimulationInputBuffer;

		struct NetworkEvent<27>;

		// BrnNetworkSharedIO.h:442
		const int32_t KI_MAX_DIRTY_TRICK_UPDATES_PER_PLAYER = 28;

		// BrnNetworkSharedIO.h:443
		const int32_t KI_MAX_INVITE_EVENTS = 1;

		// BrnNetworkSharedIO.h:444
		const int32_t KI_MAX_REMOTE_PLAYER_DISCONNECTS = 7;

	}

	// BrnNetworkSharedIO.h:39
	const int32_t KI_MAX_ROAD_RULES_MESSAGE_ENTRIES = 10;

	// BrnNetworkSharedIO.h:40
	const int32_t KI_MAX_ROAD_RULES_RECEIVED_EVENTS = 14;

	// BrnNetworkSharedIO.h:41
	const int32_t KI_MAX_ROAD_RULES_DOWNLOADED_EVENTS = 40;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// BrnNetworkSharedIO.h:442
		const int32_t KI_MAX_DIRTY_TRICK_UPDATES_PER_PLAYER = 28;

		// BrnNetworkSharedIO.h:443
		const int32_t KI_MAX_INVITE_EVENTS = 1;

		// BrnNetworkSharedIO.h:444
		const int32_t KI_MAX_REMOTE_PLAYER_DISCONNECTS = 7;

	}

	// BrnNetworkSharedIO.h:39
	const int32_t KI_MAX_ROAD_RULES_MESSAGE_ENTRIES = 10;

	// BrnNetworkSharedIO.h:40
	const int32_t KI_MAX_ROAD_RULES_RECEIVED_EVENTS = 14;

	// BrnNetworkSharedIO.h:41
	const int32_t KI_MAX_ROAD_RULES_DOWNLOADED_EVENTS = 40;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:51
	enum ECameraStatus {
		E_CAMERA_STATUS_NONE = 0,
		E_CAMERA_STATUS_AVAILABLE = 1,
		E_CAMERA_STATUS_IN_USE = 2,
		E_CAMERA_STATUS_DISABLED = 3,
		E_CAMERA_STATUS_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:69
	enum EBrnGameSecurity {
		E_GAMESECURITY_ALLCOMERS = 0,
		E_GAMESECURITY_FRIENDS_ONLY = 1,
		E_GAMESECURITY_INVITE_ONLY = 2,
		E_GAMESECURITY_COUNT = 3,
	}

	// BrnNetworkSharedIO.h:87
	enum ESearchGameModes {
		E_SEARCH_GAME_MODES_ANY = 0,
		E_SEARCH_GAME_MODES_RACE = 1,
		E_SEARCH_GAME_MODES_ROAD_RAGE = 2,
		E_SEARCH_GAME_MODES_BURNING_HOME_RUN = 3,
		E_SEARCH_GAME_MODES_FREE_BURN_LOBBY = 4,
		E_SEARCH_GAME_MODES_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:162
	enum EPaybackType {
		E_PAYBACK_TYPE_START = 0,
		E_PAYBACK_TYPE_REVERSE_STEERING = 0,
		E_PAYBACK_TYPE_BOOST_LOCK = 1,
		E_PAYBACK_TYPE_AGGRESSORS_CONTROLS_AFFECTS_VICTIM = 2,
		E_PAYBACK_TYPE_SIX_AXIS_STEERING = 3,
		E_PAYBACK_TYPE_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:286
	enum EBoostType {
		E_BOOST_TYPE_NORMAL = 0,
		E_BOOST_TYPE_DANGER = 1,
		E_BOOST_TYPE_AGGRESSION = 2,
		E_BOOST_TYPE_STUNT = 3,
		E_BOOST_TYPE_INFINITE = 4,
		E_BOOST_TYPE_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:305
	enum EVehicleChoice {
		E_VEHICLE_CHOICE_FREE = 0,
		E_VEHICLE_CHOICE_HOST = 1,
		E_VEHICLE_CHOICE_COUNT = 2,
	}

	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// Declaration
		struct BuddyInformation {
			// BrnNetworkSharedIO.h:599
			enum EInviteStatus {
				E_INVITED_NONE = 0,
				E_INVITED_TO_LOCAL_PLAYERS_GAME = 1,
				E_INVITED_LOCAL_PLAYER_TO_GAME = 2,
				E_INVITED_COUNT = 3,
			}

		}

		struct InGamePlayerStatusData;

		// BrnNetworkSharedIO.h:442
		const int32_t KI_MAX_DIRTY_TRICK_UPDATES_PER_PLAYER = 28;

		// BrnNetworkSharedIO.h:443
		const int32_t KI_MAX_INVITE_EVENTS = 1;

		// BrnNetworkSharedIO.h:444
		const int32_t KI_MAX_REMOTE_PLAYER_DISCONNECTS = 7;

	}

	// BrnNetworkSharedIO.h:39
	const int32_t KI_MAX_ROAD_RULES_MESSAGE_ENTRIES = 10;

	// BrnNetworkSharedIO.h:40
	const int32_t KI_MAX_ROAD_RULES_RECEIVED_EVENTS = 14;

	// BrnNetworkSharedIO.h:41
	const int32_t KI_MAX_ROAD_RULES_DOWNLOADED_EVENTS = 40;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:51
	enum ECameraStatus {
		E_CAMERA_STATUS_NONE = 0,
		E_CAMERA_STATUS_AVAILABLE = 1,
		E_CAMERA_STATUS_IN_USE = 2,
		E_CAMERA_STATUS_DISABLED = 3,
		E_CAMERA_STATUS_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:69
	enum EBrnGameSecurity {
		E_GAMESECURITY_ALLCOMERS = 0,
		E_GAMESECURITY_FRIENDS_ONLY = 1,
		E_GAMESECURITY_INVITE_ONLY = 2,
		E_GAMESECURITY_COUNT = 3,
	}

	// BrnNetworkSharedIO.h:162
	enum EPaybackType {
		E_PAYBACK_TYPE_START = 0,
		E_PAYBACK_TYPE_REVERSE_STEERING = 0,
		E_PAYBACK_TYPE_BOOST_LOCK = 1,
		E_PAYBACK_TYPE_AGGRESSORS_CONTROLS_AFFECTS_VICTIM = 2,
		E_PAYBACK_TYPE_SIX_AXIS_STEERING = 3,
		E_PAYBACK_TYPE_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:286
	enum EBoostType {
		E_BOOST_TYPE_NORMAL = 0,
		E_BOOST_TYPE_DANGER = 1,
		E_BOOST_TYPE_AGGRESSION = 2,
		E_BOOST_TYPE_STUNT = 3,
		E_BOOST_TYPE_INFINITE = 4,
		E_BOOST_TYPE_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:305
	enum EVehicleChoice {
		E_VEHICLE_CHOICE_FREE = 0,
		E_VEHICLE_CHOICE_HOST = 1,
		E_VEHICLE_CHOICE_COUNT = 2,
	}

	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		struct InGamePlayerStatusData;

		// BrnNetworkSharedIO.h:442
		const int32_t KI_MAX_DIRTY_TRICK_UPDATES_PER_PLAYER = 28;

		// BrnNetworkSharedIO.h:443
		const int32_t KI_MAX_INVITE_EVENTS = 1;

		// BrnNetworkSharedIO.h:444
		const int32_t KI_MAX_REMOTE_PLAYER_DISCONNECTS = 7;

	}

	// BrnNetworkSharedIO.h:39
	const int32_t KI_MAX_ROAD_RULES_MESSAGE_ENTRIES = 10;

	// BrnNetworkSharedIO.h:40
	const int32_t KI_MAX_ROAD_RULES_RECEIVED_EVENTS = 14;

	// BrnNetworkSharedIO.h:41
	const int32_t KI_MAX_ROAD_RULES_DOWNLOADED_EVENTS = 40;

}

// BrnNetworkSharedIO.h:343
struct BrnNetwork::RoadRulesRecvData : Event {
	// BrnNetworkSharedIO.h:346
	RoadRulesMessageData[10] maRoadRulesData;

	// BrnNetworkSharedIO.h:347
	PlayerName mPlayerName;

	// BrnNetworkSharedIO.h:348
	GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

	// BrnNetworkSharedIO.h:349
	int32_t miNumRoadRulesScoresRecv;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:51
	enum ECameraStatus {
		E_CAMERA_STATUS_NONE = 0,
		E_CAMERA_STATUS_AVAILABLE = 1,
		E_CAMERA_STATUS_IN_USE = 2,
		E_CAMERA_STATUS_DISABLED = 3,
		E_CAMERA_STATUS_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:69
	enum EBrnGameSecurity {
		E_GAMESECURITY_ALLCOMERS = 0,
		E_GAMESECURITY_FRIENDS_ONLY = 1,
		E_GAMESECURITY_INVITE_ONLY = 2,
		E_GAMESECURITY_COUNT = 3,
	}

	// BrnNetworkSharedIO.h:87
	enum ESearchGameModes {
		E_SEARCH_GAME_MODES_ANY = 0,
		E_SEARCH_GAME_MODES_RACE = 1,
		E_SEARCH_GAME_MODES_ROAD_RAGE = 2,
		E_SEARCH_GAME_MODES_BURNING_HOME_RUN = 3,
		E_SEARCH_GAME_MODES_FREE_BURN_LOBBY = 4,
		E_SEARCH_GAME_MODES_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:106
	enum ESearchOpponentTypes {
		E_SEARCH_OPPONENT_TYPES_ANY = 0,
		E_SEARCH_OPPONENT_TYPES_FRIENDS_AND_RIVALS = 1,
		E_SEARCH_OPPONENT_TYPES_FRIENDS = 2,
		E_SEARCH_OPPONENT_TYPES_RIVALS = 3,
		E_SEARCH_OPPONENT_TYPES_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:142
	enum ELeftGameReason {
		E_LEFT_GAME_REASON_LEFT = 0,
		E_LEFT_GAME_REASON_COMMS_FAILED = 1,
		E_LEFT_GAME_REASON_KICKED = 2,
		E_LEFT_GAME_REASON_GAME_DELETED = 3,
		E_LEFT_GAME_REASON_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:162
	enum EPaybackType {
		E_PAYBACK_TYPE_START = 0,
		E_PAYBACK_TYPE_REVERSE_STEERING = 0,
		E_PAYBACK_TYPE_BOOST_LOCK = 1,
		E_PAYBACK_TYPE_AGGRESSORS_CONTROLS_AFFECTS_VICTIM = 2,
		E_PAYBACK_TYPE_SIX_AXIS_STEERING = 3,
		E_PAYBACK_TYPE_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:186
	enum EDirtyTrickStatus {
		E_DIRTY_TRICK_STATUS_MARKED_MAN_TAKEDOWN = 0,
		E_DIRTY_TRICK_STATUS_AVAILABLE = 1,
		E_DIRTY_TRICK_STATUS_INITIALISED = 2,
		E_DIRTY_TRICK_STATUS_SURVIVED = 3,
		E_DIRTY_TRICK_STATUS_CRASHED = 4,
		E_DIRTY_TRICK_STATUS_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:207
	enum ETelemetryHook {
		E_TELEMETRY_UNKNOWN = 0,
		E_TELEMETRY_EVENT_STARTED = 1,
		E_TELEMETRY_EVENT_STARTED_ONLINE = 2,
		E_TELEMETRY_EVENT_FINISHED = 3,
		E_TELEMETRY_EVENT_QUIT = 4,
		E_TELEMETRY_EVENT_DISCONNECT = 5,
		E_TELEMETRY_CRASHED_INTO_WORLD = 6,
		E_TELEMETRY_CRASHED_INTO_TRAFFIC = 7,
		E_TELEMETRY_CRASHED_INTO_RACE_CAR = 8,
		E_TELEMETRY_CRASHED_STARTED_SHOWTIME = 9,
		E_TELEMETRY_TAKEDOWN = 10,
		E_TELEMETRY_TAKEDOWN_VERTICAL = 11,
		E_TELEMETRY_TAKEDOWN_AFTERTOUCH = 12,
		E_TELEMETRY_TAKEDOWN_TBONE = 13,
		E_TELEMETRY_TAKEDOWN_MARKED_MAN = 14,
		E_TELEMETRY_RIVAL_ADDED = 15,
		E_TELEMETRY_RIVAL_REMOVED = 16,
		E_TELEMETRY_MUGSHOT_GAMERPIC = 17,
		E_TELEMETRY_MUGSHOT_PHOTO = 18,
		E_TELEMETRY_ROAD_RULES_NEW_PB_TIME = 19,
		E_TELEMETRY_ROAD_RULES_NEW_PB_CRASH = 20,
		E_TELEMETRY_EVENT_CAR_MODEL = 21,
		E_TELEMETRY_EVENT_EARNED_LICENCE = 22,
		E_TELEMETRY_NETWORK_CONNECT = 23,
		E_TELEMETRY_NETWORK_GAME_CREATED = 24,
		E_TELEMETRY_NETWORK_GAME_JOINED = 25,
		E_TELEMETRY_NETWORK_GAME_STARTED = 26,
		E_TELEMETRY_NETWORK_CHALLENGE_STARTED = 27,
		E_TELEMETRY_NETWORK_CHALLENGE_FINISHED = 28,
		E_TELEMETRY_NETWORK_CHALLENGE_CANCELLED = 29,
		E_TELEMETRY_NETWORK_HOST_PLAYERS_IN_GAME = 30,
		E_TELEMETRY_NETWORK_HOST_TRACKID = 31,
		E_TELEMETRY_NETWORK_HOST_NUMBER_OF_ROUNDS = 32,
		E_TELEMETRY_NETWORK_HOST_IS_RANKED = 33,
		E_TELEMETRY_GAME_FINISH_TIME = 34,
		E_TELEMETRY_GAME_FINISH_TIMEOUT = 35,
		E_TELEMETRY_DRIVE_THRU_PAINT_SHOP = 36,
		E_TELEMETRY_DRIVE_THRU_BODY_SHOP = 37,
		E_TELEMETRY_DRIVE_THRU_JUNK_YARD = 38,
		E_TELEMETRY_DRIVE_THRU_CAR_WASH = 39,
		E_TELEMETRY_DRIVE_THRU_AUTO_PARTS = 40,
		E_TELEMETRY_DRIVE_THRU_GAS_STATION = 41,
		E_TELEMETRY_NEWS_READ = 42,
		E_TELEMETRY_LEADERBOARD_VIEWED = 43,
		E_TELEMETRY_CUSTOM_ROUTE_CREATED = 44,
		E_TELEMETRY_EASY_DRIVE_OPENED = 45,
		E_TELEMETRY_NETWORK_GAME_LEFT = 46,
		E_TELEMETRY_ACHIEVEMENT_EARNT = 47,
		E_TELEMETRY_DIRTYSOCK_UPNP = 48,
		E_TELEMETRY_DIRTYSOCK_CONNECTION = 49,
		E_TELEMETRY_HOOKS_COUNT = 50,
	}

	// BrnNetworkSharedIO.h:286
	enum EBoostType {
		E_BOOST_TYPE_NORMAL = 0,
		E_BOOST_TYPE_DANGER = 1,
		E_BOOST_TYPE_AGGRESSION = 2,
		E_BOOST_TYPE_STUNT = 3,
		E_BOOST_TYPE_INFINITE = 4,
		E_BOOST_TYPE_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:305
	enum EVehicleChoice {
		E_VEHICLE_CHOICE_FREE = 0,
		E_VEHICLE_CHOICE_HOST = 1,
		E_VEHICLE_CHOICE_COUNT = 2,
	}

	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// BrnNetworkSharedIO.h:478
		enum EInviteFailReason {
			E_INVITE_FAIL_REASON_SAME_CONSOLE = 0,
			E_INVITE_FAIL_REASON_SAME_GAME = 1,
			E_INVITE_FAIL_REASON_USER_CHANGE_WHEN_PLAYER_IS_HOST = 2,
			E_INVITE_FAIL_REASON_UNKNOWN_GAME = 3,
			E_INVITE_FAIL_REASON_NO_HDD = 4,
			E_INVITE_FAIL_REASON_COUNT = 5,
		}

		struct DirtyTrickEvent;

		struct TelemetryData;

		// Declaration
		struct BuddyInformation {
			// BrnNetworkSharedIO.h:599
			enum EInviteStatus {
				E_INVITED_NONE = 0,
				E_INVITED_TO_LOCAL_PLAYERS_GAME = 1,
				E_INVITED_LOCAL_PLAYER_TO_GAME = 2,
				E_INVITED_COUNT = 3,
			}

		}

		struct InGamePlayerStatusData;

		struct InGamePlayerStatusInterface;

		struct NetworkEvent<32>;

		struct NetworkEvent<31>;

		struct NetworkInPaybackIntialised;

		struct NetworkInPaybackSucceeded;

		struct OutputBuffer;

		struct PostSimulationInputBuffer;

		struct NetworkPlayerMappingData;

		struct GameStateToNetworkInterface;

		struct NetworkToGameStateInterface;

		struct PlayerResultsData;

		struct PlayerResultsInterface;

		// BrnNetworkSharedIO.h:442
		const int32_t KI_MAX_DIRTY_TRICK_UPDATES_PER_PLAYER = 28;

		// BrnNetworkSharedIO.h:443
		const int32_t KI_MAX_INVITE_EVENTS = 1;

		// BrnNetworkSharedIO.h:444
		const int32_t KI_MAX_REMOTE_PLAYER_DISCONNECTS = 7;

	}

	// BrnNetworkSharedIO.h:39
	const int32_t KI_MAX_ROAD_RULES_MESSAGE_ENTRIES = 10;

	// BrnNetworkSharedIO.h:40
	const int32_t KI_MAX_ROAD_RULES_RECEIVED_EVENTS = 14;

	// BrnNetworkSharedIO.h:41
	const int32_t KI_MAX_ROAD_RULES_DOWNLOADED_EVENTS = 40;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:51
	enum ECameraStatus {
		E_CAMERA_STATUS_NONE = 0,
		E_CAMERA_STATUS_AVAILABLE = 1,
		E_CAMERA_STATUS_IN_USE = 2,
		E_CAMERA_STATUS_DISABLED = 3,
		E_CAMERA_STATUS_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:69
	enum EBrnGameSecurity {
		E_GAMESECURITY_ALLCOMERS = 0,
		E_GAMESECURITY_FRIENDS_ONLY = 1,
		E_GAMESECURITY_INVITE_ONLY = 2,
		E_GAMESECURITY_COUNT = 3,
	}

	// BrnNetworkSharedIO.h:87
	enum ESearchGameModes {
		E_SEARCH_GAME_MODES_ANY = 0,
		E_SEARCH_GAME_MODES_RACE = 1,
		E_SEARCH_GAME_MODES_ROAD_RAGE = 2,
		E_SEARCH_GAME_MODES_BURNING_HOME_RUN = 3,
		E_SEARCH_GAME_MODES_FREE_BURN_LOBBY = 4,
		E_SEARCH_GAME_MODES_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:142
	enum ELeftGameReason {
		E_LEFT_GAME_REASON_LEFT = 0,
		E_LEFT_GAME_REASON_COMMS_FAILED = 1,
		E_LEFT_GAME_REASON_KICKED = 2,
		E_LEFT_GAME_REASON_GAME_DELETED = 3,
		E_LEFT_GAME_REASON_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:162
	enum EPaybackType {
		E_PAYBACK_TYPE_START = 0,
		E_PAYBACK_TYPE_REVERSE_STEERING = 0,
		E_PAYBACK_TYPE_BOOST_LOCK = 1,
		E_PAYBACK_TYPE_AGGRESSORS_CONTROLS_AFFECTS_VICTIM = 2,
		E_PAYBACK_TYPE_SIX_AXIS_STEERING = 3,
		E_PAYBACK_TYPE_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:286
	enum EBoostType {
		E_BOOST_TYPE_NORMAL = 0,
		E_BOOST_TYPE_DANGER = 1,
		E_BOOST_TYPE_AGGRESSION = 2,
		E_BOOST_TYPE_STUNT = 3,
		E_BOOST_TYPE_INFINITE = 4,
		E_BOOST_TYPE_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:305
	enum EVehicleChoice {
		E_VEHICLE_CHOICE_FREE = 0,
		E_VEHICLE_CHOICE_HOST = 1,
		E_VEHICLE_CHOICE_COUNT = 2,
	}

	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// BrnNetworkSharedIO.h:478
		enum EInviteFailReason {
			E_INVITE_FAIL_REASON_SAME_CONSOLE = 0,
			E_INVITE_FAIL_REASON_SAME_GAME = 1,
			E_INVITE_FAIL_REASON_USER_CHANGE_WHEN_PLAYER_IS_HOST = 2,
			E_INVITE_FAIL_REASON_UNKNOWN_GAME = 3,
			E_INVITE_FAIL_REASON_NO_HDD = 4,
			E_INVITE_FAIL_REASON_COUNT = 5,
		}

		// Declaration
		struct BuddyInformation {
			// BrnNetworkSharedIO.h:599
			enum EInviteStatus {
				E_INVITED_NONE = 0,
				E_INVITED_TO_LOCAL_PLAYERS_GAME = 1,
				E_INVITED_LOCAL_PLAYER_TO_GAME = 2,
				E_INVITED_COUNT = 3,
			}

		}

		struct InGamePlayerStatusData;

		// BrnNetworkSharedIO.h:442
		const int32_t KI_MAX_DIRTY_TRICK_UPDATES_PER_PLAYER = 28;

		// BrnNetworkSharedIO.h:443
		const int32_t KI_MAX_INVITE_EVENTS = 1;

		// BrnNetworkSharedIO.h:444
		const int32_t KI_MAX_REMOTE_PLAYER_DISCONNECTS = 7;

	}

	// BrnNetworkSharedIO.h:39
	const int32_t KI_MAX_ROAD_RULES_MESSAGE_ENTRIES = 10;

	// BrnNetworkSharedIO.h:40
	const int32_t KI_MAX_ROAD_RULES_RECEIVED_EVENTS = 14;

	// BrnNetworkSharedIO.h:41
	const int32_t KI_MAX_ROAD_RULES_DOWNLOADED_EVENTS = 40;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:51
	enum ECameraStatus {
		E_CAMERA_STATUS_NONE = 0,
		E_CAMERA_STATUS_AVAILABLE = 1,
		E_CAMERA_STATUS_IN_USE = 2,
		E_CAMERA_STATUS_DISABLED = 3,
		E_CAMERA_STATUS_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:69
	enum EBrnGameSecurity {
		E_GAMESECURITY_ALLCOMERS = 0,
		E_GAMESECURITY_FRIENDS_ONLY = 1,
		E_GAMESECURITY_INVITE_ONLY = 2,
		E_GAMESECURITY_COUNT = 3,
	}

	// BrnNetworkSharedIO.h:87
	enum ESearchGameModes {
		E_SEARCH_GAME_MODES_ANY = 0,
		E_SEARCH_GAME_MODES_RACE = 1,
		E_SEARCH_GAME_MODES_ROAD_RAGE = 2,
		E_SEARCH_GAME_MODES_BURNING_HOME_RUN = 3,
		E_SEARCH_GAME_MODES_FREE_BURN_LOBBY = 4,
		E_SEARCH_GAME_MODES_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:125
	enum EBuddyNotification {
		E_BUDDY_NOTIFICATION_INVITE = 0,
		E_BUDDY_NOTIFICATION_BUDDY_ONLINE = 1,
		E_BUDDY_NOTIFICATION_NUM_ONLINE_BUDDIES = 2,
		E_BUDDY_NOTIFICATION_COUNT = 3,
	}

	// BrnNetworkSharedIO.h:142
	enum ELeftGameReason {
		E_LEFT_GAME_REASON_LEFT = 0,
		E_LEFT_GAME_REASON_COMMS_FAILED = 1,
		E_LEFT_GAME_REASON_KICKED = 2,
		E_LEFT_GAME_REASON_GAME_DELETED = 3,
		E_LEFT_GAME_REASON_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:162
	enum EPaybackType {
		E_PAYBACK_TYPE_START = 0,
		E_PAYBACK_TYPE_REVERSE_STEERING = 0,
		E_PAYBACK_TYPE_BOOST_LOCK = 1,
		E_PAYBACK_TYPE_AGGRESSORS_CONTROLS_AFFECTS_VICTIM = 2,
		E_PAYBACK_TYPE_SIX_AXIS_STEERING = 3,
		E_PAYBACK_TYPE_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:186
	enum EDirtyTrickStatus {
		E_DIRTY_TRICK_STATUS_MARKED_MAN_TAKEDOWN = 0,
		E_DIRTY_TRICK_STATUS_AVAILABLE = 1,
		E_DIRTY_TRICK_STATUS_INITIALISED = 2,
		E_DIRTY_TRICK_STATUS_SURVIVED = 3,
		E_DIRTY_TRICK_STATUS_CRASHED = 4,
		E_DIRTY_TRICK_STATUS_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:207
	enum ETelemetryHook {
		E_TELEMETRY_UNKNOWN = 0,
		E_TELEMETRY_EVENT_STARTED = 1,
		E_TELEMETRY_EVENT_STARTED_ONLINE = 2,
		E_TELEMETRY_EVENT_FINISHED = 3,
		E_TELEMETRY_EVENT_QUIT = 4,
		E_TELEMETRY_EVENT_DISCONNECT = 5,
		E_TELEMETRY_CRASHED_INTO_WORLD = 6,
		E_TELEMETRY_CRASHED_INTO_TRAFFIC = 7,
		E_TELEMETRY_CRASHED_INTO_RACE_CAR = 8,
		E_TELEMETRY_CRASHED_STARTED_SHOWTIME = 9,
		E_TELEMETRY_TAKEDOWN = 10,
		E_TELEMETRY_TAKEDOWN_VERTICAL = 11,
		E_TELEMETRY_TAKEDOWN_AFTERTOUCH = 12,
		E_TELEMETRY_TAKEDOWN_TBONE = 13,
		E_TELEMETRY_TAKEDOWN_MARKED_MAN = 14,
		E_TELEMETRY_RIVAL_ADDED = 15,
		E_TELEMETRY_RIVAL_REMOVED = 16,
		E_TELEMETRY_MUGSHOT_GAMERPIC = 17,
		E_TELEMETRY_MUGSHOT_PHOTO = 18,
		E_TELEMETRY_ROAD_RULES_NEW_PB_TIME = 19,
		E_TELEMETRY_ROAD_RULES_NEW_PB_CRASH = 20,
		E_TELEMETRY_EVENT_CAR_MODEL = 21,
		E_TELEMETRY_EVENT_EARNED_LICENCE = 22,
		E_TELEMETRY_NETWORK_CONNECT = 23,
		E_TELEMETRY_NETWORK_GAME_CREATED = 24,
		E_TELEMETRY_NETWORK_GAME_JOINED = 25,
		E_TELEMETRY_NETWORK_GAME_STARTED = 26,
		E_TELEMETRY_NETWORK_CHALLENGE_STARTED = 27,
		E_TELEMETRY_NETWORK_CHALLENGE_FINISHED = 28,
		E_TELEMETRY_NETWORK_CHALLENGE_CANCELLED = 29,
		E_TELEMETRY_NETWORK_HOST_PLAYERS_IN_GAME = 30,
		E_TELEMETRY_NETWORK_HOST_TRACKID = 31,
		E_TELEMETRY_NETWORK_HOST_NUMBER_OF_ROUNDS = 32,
		E_TELEMETRY_NETWORK_HOST_IS_RANKED = 33,
		E_TELEMETRY_GAME_FINISH_TIME = 34,
		E_TELEMETRY_GAME_FINISH_TIMEOUT = 35,
		E_TELEMETRY_DRIVE_THRU_PAINT_SHOP = 36,
		E_TELEMETRY_DRIVE_THRU_BODY_SHOP = 37,
		E_TELEMETRY_DRIVE_THRU_JUNK_YARD = 38,
		E_TELEMETRY_DRIVE_THRU_CAR_WASH = 39,
		E_TELEMETRY_DRIVE_THRU_AUTO_PARTS = 40,
		E_TELEMETRY_DRIVE_THRU_GAS_STATION = 41,
		E_TELEMETRY_NEWS_READ = 42,
		E_TELEMETRY_LEADERBOARD_VIEWED = 43,
		E_TELEMETRY_CUSTOM_ROUTE_CREATED = 44,
		E_TELEMETRY_EASY_DRIVE_OPENED = 45,
		E_TELEMETRY_NETWORK_GAME_LEFT = 46,
		E_TELEMETRY_ACHIEVEMENT_EARNT = 47,
		E_TELEMETRY_DIRTYSOCK_UPNP = 48,
		E_TELEMETRY_DIRTYSOCK_CONNECTION = 49,
		E_TELEMETRY_HOOKS_COUNT = 50,
	}

	// BrnNetworkSharedIO.h:286
	enum EBoostType {
		E_BOOST_TYPE_NORMAL = 0,
		E_BOOST_TYPE_DANGER = 1,
		E_BOOST_TYPE_AGGRESSION = 2,
		E_BOOST_TYPE_STUNT = 3,
		E_BOOST_TYPE_INFINITE = 4,
		E_BOOST_TYPE_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:305
	enum EVehicleChoice {
		E_VEHICLE_CHOICE_FREE = 0,
		E_VEHICLE_CHOICE_HOST = 1,
		E_VEHICLE_CHOICE_COUNT = 2,
	}

	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// BrnNetworkSharedIO.h:458
		enum EChallengeEventType {
			E_CHALLENGE_EVENT_SELECTED = 0,
			E_CHALLENGE_EVENT_TRIGGERED = 1,
			E_CHALLENGE_EVENT_ACTION_SUCCESS = 2,
			E_CHALLENGE_EVENT_RESET = 3,
			E_CHALLENGE_EVENT_ENDED = 4,
			E_CHALLENGE_EVENT_RESULTS_FINISHED = 5,
			E_CHALLENGE_EVENT_COUNT = 6,
		}

		// BrnNetworkSharedIO.h:478
		enum EInviteFailReason {
			E_INVITE_FAIL_REASON_SAME_CONSOLE = 0,
			E_INVITE_FAIL_REASON_SAME_GAME = 1,
			E_INVITE_FAIL_REASON_USER_CHANGE_WHEN_PLAYER_IS_HOST = 2,
			E_INVITE_FAIL_REASON_UNKNOWN_GAME = 3,
			E_INVITE_FAIL_REASON_NO_HDD = 4,
			E_INVITE_FAIL_REASON_COUNT = 5,
		}

		struct DirtyTrickEvent;

		struct InviteOrJoinParams;

		// Declaration
		struct BuddyInformation {
			// BrnNetworkSharedIO.h:599
			enum EInviteStatus {
				E_INVITED_NONE = 0,
				E_INVITED_TO_LOCAL_PLAYERS_GAME = 1,
				E_INVITED_LOCAL_PLAYER_TO_GAME = 2,
				E_INVITED_COUNT = 3,
			}

		}

		struct InGamePlayerStatusData;

		struct InGamePlayerStatusInterface;

		struct OnlineLobbyPlayerStatusInterface;

		struct NetworkEventQueue;

		struct NetworkEvent<32>;

		struct NetworkEvent<19>;

		struct NetworkEvent<33>;

		struct NetworkOutRecvRoadRulesPBEvent;

		struct NetworkEvent<31>;

		struct NetworkEvent<46>;

		struct NetworkEvent<47>;

		struct NetworkInRoadRulesPBEvent;

		struct NetworkEvent<29>;

		struct NetworkInPaybackMugshotEvent;

		struct NetworkInOfflineProgression;

		struct NetworkInPaybackIntialised;

		struct NetworkInPaybackSucceeded;

		struct NetworkEvent<38>;

		struct NetworkInFreeburnChallengeEvent;

		struct NetworkInDxtDecodeImageEvent;

		struct OutputBuffer;

		struct PostSimulationInputBuffer;

		struct NetworkPlayerMappingData;

		struct GameStateToNetworkInterface;

		struct NetworkToGameStateInterface;

		struct PlayerResultsData;

		struct PlayerResultsInterface;

		struct StatsInputInterface;

		struct StatsOutputInterface;

		struct NetworkToGuiInterface;

		struct PreSimulationInputBuffer;

		// BrnNetworkSharedIO.h:442
		const int32_t KI_MAX_DIRTY_TRICK_UPDATES_PER_PLAYER = 28;

		// BrnNetworkSharedIO.h:443
		const int32_t KI_MAX_INVITE_EVENTS = 1;

		// BrnNetworkSharedIO.h:444
		const int32_t KI_MAX_REMOTE_PLAYER_DISCONNECTS = 7;

	}

	// BrnNetworkSharedIO.h:39
	const int32_t KI_MAX_ROAD_RULES_MESSAGE_ENTRIES = 10;

	// BrnNetworkSharedIO.h:40
	const int32_t KI_MAX_ROAD_RULES_RECEIVED_EVENTS = 14;

	// BrnNetworkSharedIO.h:41
	const int32_t KI_MAX_ROAD_RULES_DOWNLOADED_EVENTS = 40;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:162
	enum EPaybackType {
		E_PAYBACK_TYPE_START = 0,
		E_PAYBACK_TYPE_REVERSE_STEERING = 0,
		E_PAYBACK_TYPE_BOOST_LOCK = 1,
		E_PAYBACK_TYPE_AGGRESSORS_CONTROLS_AFFECTS_VICTIM = 2,
		E_PAYBACK_TYPE_SIX_AXIS_STEERING = 3,
		E_PAYBACK_TYPE_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// BrnNetworkSharedIO.h:442
		const int32_t KI_MAX_DIRTY_TRICK_UPDATES_PER_PLAYER = 28;

		// BrnNetworkSharedIO.h:443
		const int32_t KI_MAX_INVITE_EVENTS = 1;

		// BrnNetworkSharedIO.h:444
		const int32_t KI_MAX_REMOTE_PLAYER_DISCONNECTS = 7;

	}

	// BrnNetworkSharedIO.h:39
	const int32_t KI_MAX_ROAD_RULES_MESSAGE_ENTRIES = 10;

	// BrnNetworkSharedIO.h:40
	const int32_t KI_MAX_ROAD_RULES_RECEIVED_EVENTS = 14;

	// BrnNetworkSharedIO.h:41
	const int32_t KI_MAX_ROAD_RULES_DOWNLOADED_EVENTS = 40;

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:51
	enum ECameraStatus {
		E_CAMERA_STATUS_NONE = 0,
		E_CAMERA_STATUS_AVAILABLE = 1,
		E_CAMERA_STATUS_IN_USE = 2,
		E_CAMERA_STATUS_DISABLED = 3,
		E_CAMERA_STATUS_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:69
	enum EBrnGameSecurity {
		E_GAMESECURITY_ALLCOMERS = 0,
		E_GAMESECURITY_FRIENDS_ONLY = 1,
		E_GAMESECURITY_INVITE_ONLY = 2,
		E_GAMESECURITY_COUNT = 3,
	}

	// BrnNetworkSharedIO.h:87
	enum ESearchGameModes {
		E_SEARCH_GAME_MODES_ANY = 0,
		E_SEARCH_GAME_MODES_RACE = 1,
		E_SEARCH_GAME_MODES_ROAD_RAGE = 2,
		E_SEARCH_GAME_MODES_BURNING_HOME_RUN = 3,
		E_SEARCH_GAME_MODES_FREE_BURN_LOBBY = 4,
		E_SEARCH_GAME_MODES_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:142
	enum ELeftGameReason {
		E_LEFT_GAME_REASON_LEFT = 0,
		E_LEFT_GAME_REASON_COMMS_FAILED = 1,
		E_LEFT_GAME_REASON_KICKED = 2,
		E_LEFT_GAME_REASON_GAME_DELETED = 3,
		E_LEFT_GAME_REASON_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:162
	enum EPaybackType {
		E_PAYBACK_TYPE_START = 0,
		E_PAYBACK_TYPE_REVERSE_STEERING = 0,
		E_PAYBACK_TYPE_BOOST_LOCK = 1,
		E_PAYBACK_TYPE_AGGRESSORS_CONTROLS_AFFECTS_VICTIM = 2,
		E_PAYBACK_TYPE_SIX_AXIS_STEERING = 3,
		E_PAYBACK_TYPE_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:186
	enum EDirtyTrickStatus {
		E_DIRTY_TRICK_STATUS_MARKED_MAN_TAKEDOWN = 0,
		E_DIRTY_TRICK_STATUS_AVAILABLE = 1,
		E_DIRTY_TRICK_STATUS_INITIALISED = 2,
		E_DIRTY_TRICK_STATUS_SURVIVED = 3,
		E_DIRTY_TRICK_STATUS_CRASHED = 4,
		E_DIRTY_TRICK_STATUS_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:207
	enum ETelemetryHook {
		E_TELEMETRY_UNKNOWN = 0,
		E_TELEMETRY_EVENT_STARTED = 1,
		E_TELEMETRY_EVENT_STARTED_ONLINE = 2,
		E_TELEMETRY_EVENT_FINISHED = 3,
		E_TELEMETRY_EVENT_QUIT = 4,
		E_TELEMETRY_EVENT_DISCONNECT = 5,
		E_TELEMETRY_CRASHED_INTO_WORLD = 6,
		E_TELEMETRY_CRASHED_INTO_TRAFFIC = 7,
		E_TELEMETRY_CRASHED_INTO_RACE_CAR = 8,
		E_TELEMETRY_CRASHED_STARTED_SHOWTIME = 9,
		E_TELEMETRY_TAKEDOWN = 10,
		E_TELEMETRY_TAKEDOWN_VERTICAL = 11,
		E_TELEMETRY_TAKEDOWN_AFTERTOUCH = 12,
		E_TELEMETRY_TAKEDOWN_TBONE = 13,
		E_TELEMETRY_TAKEDOWN_MARKED_MAN = 14,
		E_TELEMETRY_RIVAL_ADDED = 15,
		E_TELEMETRY_RIVAL_REMOVED = 16,
		E_TELEMETRY_MUGSHOT_GAMERPIC = 17,
		E_TELEMETRY_MUGSHOT_PHOTO = 18,
		E_TELEMETRY_ROAD_RULES_NEW_PB_TIME = 19,
		E_TELEMETRY_ROAD_RULES_NEW_PB_CRASH = 20,
		E_TELEMETRY_EVENT_CAR_MODEL = 21,
		E_TELEMETRY_EVENT_EARNED_LICENCE = 22,
		E_TELEMETRY_NETWORK_CONNECT = 23,
		E_TELEMETRY_NETWORK_GAME_CREATED = 24,
		E_TELEMETRY_NETWORK_GAME_JOINED = 25,
		E_TELEMETRY_NETWORK_GAME_STARTED = 26,
		E_TELEMETRY_NETWORK_CHALLENGE_STARTED = 27,
		E_TELEMETRY_NETWORK_CHALLENGE_FINISHED = 28,
		E_TELEMETRY_NETWORK_CHALLENGE_CANCELLED = 29,
		E_TELEMETRY_NETWORK_HOST_PLAYERS_IN_GAME = 30,
		E_TELEMETRY_NETWORK_HOST_TRACKID = 31,
		E_TELEMETRY_NETWORK_HOST_NUMBER_OF_ROUNDS = 32,
		E_TELEMETRY_NETWORK_HOST_IS_RANKED = 33,
		E_TELEMETRY_GAME_FINISH_TIME = 34,
		E_TELEMETRY_GAME_FINISH_TIMEOUT = 35,
		E_TELEMETRY_DRIVE_THRU_PAINT_SHOP = 36,
		E_TELEMETRY_DRIVE_THRU_BODY_SHOP = 37,
		E_TELEMETRY_DRIVE_THRU_JUNK_YARD = 38,
		E_TELEMETRY_DRIVE_THRU_CAR_WASH = 39,
		E_TELEMETRY_DRIVE_THRU_AUTO_PARTS = 40,
		E_TELEMETRY_DRIVE_THRU_GAS_STATION = 41,
		E_TELEMETRY_NEWS_READ = 42,
		E_TELEMETRY_LEADERBOARD_VIEWED = 43,
		E_TELEMETRY_CUSTOM_ROUTE_CREATED = 44,
		E_TELEMETRY_EASY_DRIVE_OPENED = 45,
		E_TELEMETRY_NETWORK_GAME_LEFT = 46,
		E_TELEMETRY_ACHIEVEMENT_EARNT = 47,
		E_TELEMETRY_DIRTYSOCK_UPNP = 48,
		E_TELEMETRY_DIRTYSOCK_CONNECTION = 49,
		E_TELEMETRY_HOOKS_COUNT = 50,
	}

	// BrnNetworkSharedIO.h:286
	enum EBoostType {
		E_BOOST_TYPE_NORMAL = 0,
		E_BOOST_TYPE_DANGER = 1,
		E_BOOST_TYPE_AGGRESSION = 2,
		E_BOOST_TYPE_STUNT = 3,
		E_BOOST_TYPE_INFINITE = 4,
		E_BOOST_TYPE_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:305
	enum EVehicleChoice {
		E_VEHICLE_CHOICE_FREE = 0,
		E_VEHICLE_CHOICE_HOST = 1,
		E_VEHICLE_CHOICE_COUNT = 2,
	}

	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// BrnNetworkSharedIO.h:458
		enum EChallengeEventType {
			E_CHALLENGE_EVENT_SELECTED = 0,
			E_CHALLENGE_EVENT_TRIGGERED = 1,
			E_CHALLENGE_EVENT_ACTION_SUCCESS = 2,
			E_CHALLENGE_EVENT_RESET = 3,
			E_CHALLENGE_EVENT_ENDED = 4,
			E_CHALLENGE_EVENT_RESULTS_FINISHED = 5,
			E_CHALLENGE_EVENT_COUNT = 6,
		}

		struct DirtyTrickEvent;

		struct InviteOrJoinParams;

		// Declaration
		struct BuddyInformation {
			// BrnNetworkSharedIO.h:599
			enum EInviteStatus {
				E_INVITED_NONE = 0,
				E_INVITED_TO_LOCAL_PLAYERS_GAME = 1,
				E_INVITED_LOCAL_PLAYER_TO_GAME = 2,
				E_INVITED_COUNT = 3,
			}

		}

		struct InGamePlayerStatusData;

		struct InGamePlayerStatusInterface;

		struct OnlineLobbyPlayerStatusInterface;

		struct NetworkEventQueue;

		struct NetworkEvent<32>;

		struct NetworkEvent<19>;

		struct NetworkEvent<33>;

		struct NetworkOutRecvRoadRulesPBEvent;

		struct NetworkEvent<31>;

		struct NetworkEvent<46>;

		struct NetworkEvent<47>;

		struct NetworkInRoadRulesPBEvent;

		struct NetworkEvent<29>;

		struct NetworkInPaybackMugshotEvent;

		struct NetworkInOfflineProgression;

		struct NetworkInPaybackIntialised;

		struct NetworkInPaybackSucceeded;

		struct NetworkEvent<38>;

		struct NetworkInFreeburnChallengeEvent;

		struct NetworkInDxtDecodeImageEvent;

		struct OutputBuffer;

		struct PostSimulationInputBuffer;

		struct NetworkPlayerMappingData;

		struct GameStateToNetworkInterface;

		struct NetworkToGameStateInterface;

		struct PlayerResultsData;

		struct PlayerResultsInterface;

		struct StatsInputInterface;

		struct StatsOutputInterface;

		struct NetworkToGuiInterface;

		struct PreSimulationInputBuffer;

		// BrnNetworkSharedIO.h:442
		const int32_t KI_MAX_DIRTY_TRICK_UPDATES_PER_PLAYER = 28;

		// BrnNetworkSharedIO.h:443
		const int32_t KI_MAX_INVITE_EVENTS = 1;

		// BrnNetworkSharedIO.h:444
		const int32_t KI_MAX_REMOTE_PLAYER_DISCONNECTS = 7;

	}

	// BrnNetworkSharedIO.h:39
	const int32_t KI_MAX_ROAD_RULES_MESSAGE_ENTRIES = 10;

	// BrnNetworkSharedIO.h:40
	const int32_t KI_MAX_ROAD_RULES_RECEIVED_EVENTS = 14;

	// BrnNetworkSharedIO.h:41
	const int32_t KI_MAX_ROAD_RULES_DOWNLOADED_EVENTS = 40;

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// BrnNetworkAggressiveDrivingManager.h:40
	namespace BrnNetworkModuleIO {
		// BrnNetworkSharedIO.h:458
		enum EChallengeEventType {
			E_CHALLENGE_EVENT_SELECTED = 0,
			E_CHALLENGE_EVENT_TRIGGERED = 1,
			E_CHALLENGE_EVENT_ACTION_SUCCESS = 2,
			E_CHALLENGE_EVENT_RESET = 3,
			E_CHALLENGE_EVENT_ENDED = 4,
			E_CHALLENGE_EVENT_RESULTS_FINISHED = 5,
			E_CHALLENGE_EVENT_COUNT = 6,
		}

		// BrnNetworkSharedIO.h:478
		enum EInviteFailReason {
			E_INVITE_FAIL_REASON_SAME_CONSOLE = 0,
			E_INVITE_FAIL_REASON_SAME_GAME = 1,
			E_INVITE_FAIL_REASON_USER_CHANGE_WHEN_PLAYER_IS_HOST = 2,
			E_INVITE_FAIL_REASON_UNKNOWN_GAME = 3,
			E_INVITE_FAIL_REASON_NO_HDD = 4,
			E_INVITE_FAIL_REASON_COUNT = 5,
		}

		// Declaration
		struct BuddyInformation {
			// BrnNetworkSharedIO.h:599
			enum EInviteStatus {
				E_INVITED_NONE = 0,
				E_INVITED_TO_LOCAL_PLAYERS_GAME = 1,
				E_INVITED_LOCAL_PLAYER_TO_GAME = 2,
				E_INVITED_COUNT = 3,
			}

		}

		// BrnNetworkSharedIO.h:442
		const int32_t KI_MAX_DIRTY_TRICK_UPDATES_PER_PLAYER = 28;

		// BrnNetworkSharedIO.h:443
		const int32_t KI_MAX_INVITE_EVENTS = 1;

		// BrnNetworkSharedIO.h:444
		const int32_t KI_MAX_REMOTE_PLAYER_DISCONNECTS = 7;

	}

	// BrnNetworkSharedIO.h:51
	enum ECameraStatus {
		E_CAMERA_STATUS_NONE = 0,
		E_CAMERA_STATUS_AVAILABLE = 1,
		E_CAMERA_STATUS_IN_USE = 2,
		E_CAMERA_STATUS_DISABLED = 3,
		E_CAMERA_STATUS_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:69
	enum EBrnGameSecurity {
		E_GAMESECURITY_ALLCOMERS = 0,
		E_GAMESECURITY_FRIENDS_ONLY = 1,
		E_GAMESECURITY_INVITE_ONLY = 2,
		E_GAMESECURITY_COUNT = 3,
	}

	// BrnNetworkSharedIO.h:87
	enum ESearchGameModes {
		E_SEARCH_GAME_MODES_ANY = 0,
		E_SEARCH_GAME_MODES_RACE = 1,
		E_SEARCH_GAME_MODES_ROAD_RAGE = 2,
		E_SEARCH_GAME_MODES_BURNING_HOME_RUN = 3,
		E_SEARCH_GAME_MODES_FREE_BURN_LOBBY = 4,
		E_SEARCH_GAME_MODES_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:106
	enum ESearchOpponentTypes {
		E_SEARCH_OPPONENT_TYPES_ANY = 0,
		E_SEARCH_OPPONENT_TYPES_FRIENDS_AND_RIVALS = 1,
		E_SEARCH_OPPONENT_TYPES_FRIENDS = 2,
		E_SEARCH_OPPONENT_TYPES_RIVALS = 3,
		E_SEARCH_OPPONENT_TYPES_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:125
	enum EBuddyNotification {
		E_BUDDY_NOTIFICATION_INVITE = 0,
		E_BUDDY_NOTIFICATION_BUDDY_ONLINE = 1,
		E_BUDDY_NOTIFICATION_NUM_ONLINE_BUDDIES = 2,
		E_BUDDY_NOTIFICATION_COUNT = 3,
	}

	// BrnNetworkSharedIO.h:142
	enum ELeftGameReason {
		E_LEFT_GAME_REASON_LEFT = 0,
		E_LEFT_GAME_REASON_COMMS_FAILED = 1,
		E_LEFT_GAME_REASON_KICKED = 2,
		E_LEFT_GAME_REASON_GAME_DELETED = 3,
		E_LEFT_GAME_REASON_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:162
	enum EPaybackType {
		E_PAYBACK_TYPE_START = 0,
		E_PAYBACK_TYPE_REVERSE_STEERING = 0,
		E_PAYBACK_TYPE_BOOST_LOCK = 1,
		E_PAYBACK_TYPE_AGGRESSORS_CONTROLS_AFFECTS_VICTIM = 2,
		E_PAYBACK_TYPE_SIX_AXIS_STEERING = 3,
		E_PAYBACK_TYPE_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:186
	enum EDirtyTrickStatus {
		E_DIRTY_TRICK_STATUS_MARKED_MAN_TAKEDOWN = 0,
		E_DIRTY_TRICK_STATUS_AVAILABLE = 1,
		E_DIRTY_TRICK_STATUS_INITIALISED = 2,
		E_DIRTY_TRICK_STATUS_SURVIVED = 3,
		E_DIRTY_TRICK_STATUS_CRASHED = 4,
		E_DIRTY_TRICK_STATUS_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:207
	enum ETelemetryHook {
		E_TELEMETRY_UNKNOWN = 0,
		E_TELEMETRY_EVENT_STARTED = 1,
		E_TELEMETRY_EVENT_STARTED_ONLINE = 2,
		E_TELEMETRY_EVENT_FINISHED = 3,
		E_TELEMETRY_EVENT_QUIT = 4,
		E_TELEMETRY_EVENT_DISCONNECT = 5,
		E_TELEMETRY_CRASHED_INTO_WORLD = 6,
		E_TELEMETRY_CRASHED_INTO_TRAFFIC = 7,
		E_TELEMETRY_CRASHED_INTO_RACE_CAR = 8,
		E_TELEMETRY_CRASHED_STARTED_SHOWTIME = 9,
		E_TELEMETRY_TAKEDOWN = 10,
		E_TELEMETRY_TAKEDOWN_VERTICAL = 11,
		E_TELEMETRY_TAKEDOWN_AFTERTOUCH = 12,
		E_TELEMETRY_TAKEDOWN_TBONE = 13,
		E_TELEMETRY_TAKEDOWN_MARKED_MAN = 14,
		E_TELEMETRY_RIVAL_ADDED = 15,
		E_TELEMETRY_RIVAL_REMOVED = 16,
		E_TELEMETRY_MUGSHOT_GAMERPIC = 17,
		E_TELEMETRY_MUGSHOT_PHOTO = 18,
		E_TELEMETRY_ROAD_RULES_NEW_PB_TIME = 19,
		E_TELEMETRY_ROAD_RULES_NEW_PB_CRASH = 20,
		E_TELEMETRY_EVENT_CAR_MODEL = 21,
		E_TELEMETRY_EVENT_EARNED_LICENCE = 22,
		E_TELEMETRY_NETWORK_CONNECT = 23,
		E_TELEMETRY_NETWORK_GAME_CREATED = 24,
		E_TELEMETRY_NETWORK_GAME_JOINED = 25,
		E_TELEMETRY_NETWORK_GAME_STARTED = 26,
		E_TELEMETRY_NETWORK_CHALLENGE_STARTED = 27,
		E_TELEMETRY_NETWORK_CHALLENGE_FINISHED = 28,
		E_TELEMETRY_NETWORK_CHALLENGE_CANCELLED = 29,
		E_TELEMETRY_NETWORK_HOST_PLAYERS_IN_GAME = 30,
		E_TELEMETRY_NETWORK_HOST_TRACKID = 31,
		E_TELEMETRY_NETWORK_HOST_NUMBER_OF_ROUNDS = 32,
		E_TELEMETRY_NETWORK_HOST_IS_RANKED = 33,
		E_TELEMETRY_GAME_FINISH_TIME = 34,
		E_TELEMETRY_GAME_FINISH_TIMEOUT = 35,
		E_TELEMETRY_DRIVE_THRU_PAINT_SHOP = 36,
		E_TELEMETRY_DRIVE_THRU_BODY_SHOP = 37,
		E_TELEMETRY_DRIVE_THRU_JUNK_YARD = 38,
		E_TELEMETRY_DRIVE_THRU_CAR_WASH = 39,
		E_TELEMETRY_DRIVE_THRU_AUTO_PARTS = 40,
		E_TELEMETRY_DRIVE_THRU_GAS_STATION = 41,
		E_TELEMETRY_NEWS_READ = 42,
		E_TELEMETRY_LEADERBOARD_VIEWED = 43,
		E_TELEMETRY_CUSTOM_ROUTE_CREATED = 44,
		E_TELEMETRY_EASY_DRIVE_OPENED = 45,
		E_TELEMETRY_NETWORK_GAME_LEFT = 46,
		E_TELEMETRY_ACHIEVEMENT_EARNT = 47,
		E_TELEMETRY_DIRTYSOCK_UPNP = 48,
		E_TELEMETRY_DIRTYSOCK_CONNECTION = 49,
		E_TELEMETRY_HOOKS_COUNT = 50,
	}

	// BrnNetworkSharedIO.h:286
	enum EBoostType {
		E_BOOST_TYPE_NORMAL = 0,
		E_BOOST_TYPE_DANGER = 1,
		E_BOOST_TYPE_AGGRESSION = 2,
		E_BOOST_TYPE_STUNT = 3,
		E_BOOST_TYPE_INFINITE = 4,
		E_BOOST_TYPE_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:305
	enum EVehicleChoice {
		E_VEHICLE_CHOICE_FREE = 0,
		E_VEHICLE_CHOICE_HOST = 1,
		E_VEHICLE_CHOICE_COUNT = 2,
	}

	// BrnNetworkSharedIO.h:39
	const int32_t KI_MAX_ROAD_RULES_MESSAGE_ENTRIES = 10;

	// BrnNetworkSharedIO.h:40
	const int32_t KI_MAX_ROAD_RULES_RECEIVED_EVENTS = 14;

	// BrnNetworkSharedIO.h:41
	const int32_t KI_MAX_ROAD_RULES_DOWNLOADED_EVENTS = 40;

}

// BrnNetworkSharedIO.h:343
struct BrnNetwork::RoadRulesRecvData : Event {
	// BrnNetworkSharedIO.h:346
	RoadRulesMessageData[10] maRoadRulesData;

	// BrnNetworkSharedIO.h:347
	PlayerName mPlayerName;

	// BrnNetworkSharedIO.h:348
	AggressiveMoveData::NetworkPlayerID mPlayerID;

	// BrnNetworkSharedIO.h:349
	int32_t miNumRoadRulesScoresRecv;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:51
	enum ECameraStatus {
		E_CAMERA_STATUS_NONE = 0,
		E_CAMERA_STATUS_AVAILABLE = 1,
		E_CAMERA_STATUS_IN_USE = 2,
		E_CAMERA_STATUS_DISABLED = 3,
		E_CAMERA_STATUS_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:69
	enum EBrnGameSecurity {
		E_GAMESECURITY_ALLCOMERS = 0,
		E_GAMESECURITY_FRIENDS_ONLY = 1,
		E_GAMESECURITY_INVITE_ONLY = 2,
		E_GAMESECURITY_COUNT = 3,
	}

	// BrnNetworkSharedIO.h:142
	enum ELeftGameReason {
		E_LEFT_GAME_REASON_LEFT = 0,
		E_LEFT_GAME_REASON_COMMS_FAILED = 1,
		E_LEFT_GAME_REASON_KICKED = 2,
		E_LEFT_GAME_REASON_GAME_DELETED = 3,
		E_LEFT_GAME_REASON_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:162
	enum EPaybackType {
		E_PAYBACK_TYPE_START = 0,
		E_PAYBACK_TYPE_REVERSE_STEERING = 0,
		E_PAYBACK_TYPE_BOOST_LOCK = 1,
		E_PAYBACK_TYPE_AGGRESSORS_CONTROLS_AFFECTS_VICTIM = 2,
		E_PAYBACK_TYPE_SIX_AXIS_STEERING = 3,
		E_PAYBACK_TYPE_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:186
	enum EDirtyTrickStatus {
		E_DIRTY_TRICK_STATUS_MARKED_MAN_TAKEDOWN = 0,
		E_DIRTY_TRICK_STATUS_AVAILABLE = 1,
		E_DIRTY_TRICK_STATUS_INITIALISED = 2,
		E_DIRTY_TRICK_STATUS_SURVIVED = 3,
		E_DIRTY_TRICK_STATUS_CRASHED = 4,
		E_DIRTY_TRICK_STATUS_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:207
	enum ETelemetryHook {
		E_TELEMETRY_UNKNOWN = 0,
		E_TELEMETRY_EVENT_STARTED = 1,
		E_TELEMETRY_EVENT_STARTED_ONLINE = 2,
		E_TELEMETRY_EVENT_FINISHED = 3,
		E_TELEMETRY_EVENT_QUIT = 4,
		E_TELEMETRY_EVENT_DISCONNECT = 5,
		E_TELEMETRY_CRASHED_INTO_WORLD = 6,
		E_TELEMETRY_CRASHED_INTO_TRAFFIC = 7,
		E_TELEMETRY_CRASHED_INTO_RACE_CAR = 8,
		E_TELEMETRY_CRASHED_STARTED_SHOWTIME = 9,
		E_TELEMETRY_TAKEDOWN = 10,
		E_TELEMETRY_TAKEDOWN_VERTICAL = 11,
		E_TELEMETRY_TAKEDOWN_AFTERTOUCH = 12,
		E_TELEMETRY_TAKEDOWN_TBONE = 13,
		E_TELEMETRY_TAKEDOWN_MARKED_MAN = 14,
		E_TELEMETRY_RIVAL_ADDED = 15,
		E_TELEMETRY_RIVAL_REMOVED = 16,
		E_TELEMETRY_MUGSHOT_GAMERPIC = 17,
		E_TELEMETRY_MUGSHOT_PHOTO = 18,
		E_TELEMETRY_ROAD_RULES_NEW_PB_TIME = 19,
		E_TELEMETRY_ROAD_RULES_NEW_PB_CRASH = 20,
		E_TELEMETRY_EVENT_CAR_MODEL = 21,
		E_TELEMETRY_EVENT_EARNED_LICENCE = 22,
		E_TELEMETRY_NETWORK_CONNECT = 23,
		E_TELEMETRY_NETWORK_GAME_CREATED = 24,
		E_TELEMETRY_NETWORK_GAME_JOINED = 25,
		E_TELEMETRY_NETWORK_GAME_STARTED = 26,
		E_TELEMETRY_NETWORK_CHALLENGE_STARTED = 27,
		E_TELEMETRY_NETWORK_CHALLENGE_FINISHED = 28,
		E_TELEMETRY_NETWORK_CHALLENGE_CANCELLED = 29,
		E_TELEMETRY_NETWORK_HOST_PLAYERS_IN_GAME = 30,
		E_TELEMETRY_NETWORK_HOST_TRACKID = 31,
		E_TELEMETRY_NETWORK_HOST_NUMBER_OF_ROUNDS = 32,
		E_TELEMETRY_NETWORK_HOST_IS_RANKED = 33,
		E_TELEMETRY_GAME_FINISH_TIME = 34,
		E_TELEMETRY_GAME_FINISH_TIMEOUT = 35,
		E_TELEMETRY_DRIVE_THRU_PAINT_SHOP = 36,
		E_TELEMETRY_DRIVE_THRU_BODY_SHOP = 37,
		E_TELEMETRY_DRIVE_THRU_JUNK_YARD = 38,
		E_TELEMETRY_DRIVE_THRU_CAR_WASH = 39,
		E_TELEMETRY_DRIVE_THRU_AUTO_PARTS = 40,
		E_TELEMETRY_DRIVE_THRU_GAS_STATION = 41,
		E_TELEMETRY_NEWS_READ = 42,
		E_TELEMETRY_LEADERBOARD_VIEWED = 43,
		E_TELEMETRY_CUSTOM_ROUTE_CREATED = 44,
		E_TELEMETRY_EASY_DRIVE_OPENED = 45,
		E_TELEMETRY_NETWORK_GAME_LEFT = 46,
		E_TELEMETRY_ACHIEVEMENT_EARNT = 47,
		E_TELEMETRY_DIRTYSOCK_UPNP = 48,
		E_TELEMETRY_DIRTYSOCK_CONNECTION = 49,
		E_TELEMETRY_HOOKS_COUNT = 50,
	}

	// BrnNetworkSharedIO.h:286
	enum EBoostType {
		E_BOOST_TYPE_NORMAL = 0,
		E_BOOST_TYPE_DANGER = 1,
		E_BOOST_TYPE_AGGRESSION = 2,
		E_BOOST_TYPE_STUNT = 3,
		E_BOOST_TYPE_INFINITE = 4,
		E_BOOST_TYPE_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:305
	enum EVehicleChoice {
		E_VEHICLE_CHOICE_FREE = 0,
		E_VEHICLE_CHOICE_HOST = 1,
		E_VEHICLE_CHOICE_COUNT = 2,
	}

	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// BrnNetworkSharedIO.h:458
		enum EChallengeEventType {
			E_CHALLENGE_EVENT_SELECTED = 0,
			E_CHALLENGE_EVENT_TRIGGERED = 1,
			E_CHALLENGE_EVENT_ACTION_SUCCESS = 2,
			E_CHALLENGE_EVENT_RESET = 3,
			E_CHALLENGE_EVENT_ENDED = 4,
			E_CHALLENGE_EVENT_RESULTS_FINISHED = 5,
			E_CHALLENGE_EVENT_COUNT = 6,
		}

		struct DirtyTrickEvent;

		struct InviteOrJoinParams;

		struct InGamePlayerStatusData;

		struct InGamePlayerStatusInterface;

		struct OnlineLobbyPlayerStatusInterface;

		struct NetworkEventQueue;

		struct NetworkEvent<32>;

		struct NetworkEvent<19>;

		struct NetworkEvent<33>;

		struct NetworkOutRecvRoadRulesPBEvent;

		struct NetworkEvent<31>;

		struct NetworkEvent<46>;

		struct NetworkEvent<47>;

		struct NetworkInRoadRulesPBEvent;

		struct NetworkEvent<29>;

		struct NetworkInPaybackMugshotEvent;

		struct NetworkInOfflineProgression;

		struct NetworkInPaybackIntialised;

		struct NetworkInPaybackSucceeded;

		struct NetworkEvent<38>;

		struct NetworkInFreeburnChallengeEvent;

		struct NetworkInDxtDecodeImageEvent;

		struct NetworkPlayerMappingData;

		struct GameStateToNetworkInterface;

		struct NetworkToGameStateInterface;

		struct StatsInputInterface;

		struct StatsOutputInterface;

		struct NetworkToGuiInterface;

		struct PlayerResultsData;

		struct PlayerResultsInterface;

		struct OutputBuffer;

		struct PreSimulationInputBuffer;

		struct PostSimulationInputBuffer;

		// BrnNetworkSharedIO.h:442
		const int32_t KI_MAX_DIRTY_TRICK_UPDATES_PER_PLAYER = 28;

		// BrnNetworkSharedIO.h:443
		const int32_t KI_MAX_INVITE_EVENTS = 1;

		// BrnNetworkSharedIO.h:444
		const int32_t KI_MAX_REMOTE_PLAYER_DISCONNECTS = 7;

	}

	// BrnNetworkSharedIO.h:39
	const int32_t KI_MAX_ROAD_RULES_MESSAGE_ENTRIES = 10;

	// BrnNetworkSharedIO.h:40
	const int32_t KI_MAX_ROAD_RULES_RECEIVED_EVENTS = 14;

	// BrnNetworkSharedIO.h:41
	const int32_t KI_MAX_ROAD_RULES_DOWNLOADED_EVENTS = 40;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:51
	enum ECameraStatus {
		E_CAMERA_STATUS_NONE = 0,
		E_CAMERA_STATUS_AVAILABLE = 1,
		E_CAMERA_STATUS_IN_USE = 2,
		E_CAMERA_STATUS_DISABLED = 3,
		E_CAMERA_STATUS_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:69
	enum EBrnGameSecurity {
		E_GAMESECURITY_ALLCOMERS = 0,
		E_GAMESECURITY_FRIENDS_ONLY = 1,
		E_GAMESECURITY_INVITE_ONLY = 2,
		E_GAMESECURITY_COUNT = 3,
	}

	// BrnNetworkSharedIO.h:87
	enum ESearchGameModes {
		E_SEARCH_GAME_MODES_ANY = 0,
		E_SEARCH_GAME_MODES_RACE = 1,
		E_SEARCH_GAME_MODES_ROAD_RAGE = 2,
		E_SEARCH_GAME_MODES_BURNING_HOME_RUN = 3,
		E_SEARCH_GAME_MODES_FREE_BURN_LOBBY = 4,
		E_SEARCH_GAME_MODES_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:106
	enum ESearchOpponentTypes {
		E_SEARCH_OPPONENT_TYPES_ANY = 0,
		E_SEARCH_OPPONENT_TYPES_FRIENDS_AND_RIVALS = 1,
		E_SEARCH_OPPONENT_TYPES_FRIENDS = 2,
		E_SEARCH_OPPONENT_TYPES_RIVALS = 3,
		E_SEARCH_OPPONENT_TYPES_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:142
	enum ELeftGameReason {
		E_LEFT_GAME_REASON_LEFT = 0,
		E_LEFT_GAME_REASON_COMMS_FAILED = 1,
		E_LEFT_GAME_REASON_KICKED = 2,
		E_LEFT_GAME_REASON_GAME_DELETED = 3,
		E_LEFT_GAME_REASON_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:162
	enum EPaybackType {
		E_PAYBACK_TYPE_START = 0,
		E_PAYBACK_TYPE_REVERSE_STEERING = 0,
		E_PAYBACK_TYPE_BOOST_LOCK = 1,
		E_PAYBACK_TYPE_AGGRESSORS_CONTROLS_AFFECTS_VICTIM = 2,
		E_PAYBACK_TYPE_SIX_AXIS_STEERING = 3,
		E_PAYBACK_TYPE_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:186
	enum EDirtyTrickStatus {
		E_DIRTY_TRICK_STATUS_MARKED_MAN_TAKEDOWN = 0,
		E_DIRTY_TRICK_STATUS_AVAILABLE = 1,
		E_DIRTY_TRICK_STATUS_INITIALISED = 2,
		E_DIRTY_TRICK_STATUS_SURVIVED = 3,
		E_DIRTY_TRICK_STATUS_CRASHED = 4,
		E_DIRTY_TRICK_STATUS_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:207
	enum ETelemetryHook {
		E_TELEMETRY_UNKNOWN = 0,
		E_TELEMETRY_EVENT_STARTED = 1,
		E_TELEMETRY_EVENT_STARTED_ONLINE = 2,
		E_TELEMETRY_EVENT_FINISHED = 3,
		E_TELEMETRY_EVENT_QUIT = 4,
		E_TELEMETRY_EVENT_DISCONNECT = 5,
		E_TELEMETRY_CRASHED_INTO_WORLD = 6,
		E_TELEMETRY_CRASHED_INTO_TRAFFIC = 7,
		E_TELEMETRY_CRASHED_INTO_RACE_CAR = 8,
		E_TELEMETRY_CRASHED_STARTED_SHOWTIME = 9,
		E_TELEMETRY_TAKEDOWN = 10,
		E_TELEMETRY_TAKEDOWN_VERTICAL = 11,
		E_TELEMETRY_TAKEDOWN_AFTERTOUCH = 12,
		E_TELEMETRY_TAKEDOWN_TBONE = 13,
		E_TELEMETRY_TAKEDOWN_MARKED_MAN = 14,
		E_TELEMETRY_RIVAL_ADDED = 15,
		E_TELEMETRY_RIVAL_REMOVED = 16,
		E_TELEMETRY_MUGSHOT_GAMERPIC = 17,
		E_TELEMETRY_MUGSHOT_PHOTO = 18,
		E_TELEMETRY_ROAD_RULES_NEW_PB_TIME = 19,
		E_TELEMETRY_ROAD_RULES_NEW_PB_CRASH = 20,
		E_TELEMETRY_EVENT_CAR_MODEL = 21,
		E_TELEMETRY_EVENT_EARNED_LICENCE = 22,
		E_TELEMETRY_NETWORK_CONNECT = 23,
		E_TELEMETRY_NETWORK_GAME_CREATED = 24,
		E_TELEMETRY_NETWORK_GAME_JOINED = 25,
		E_TELEMETRY_NETWORK_GAME_STARTED = 26,
		E_TELEMETRY_NETWORK_CHALLENGE_STARTED = 27,
		E_TELEMETRY_NETWORK_CHALLENGE_FINISHED = 28,
		E_TELEMETRY_NETWORK_CHALLENGE_CANCELLED = 29,
		E_TELEMETRY_NETWORK_HOST_PLAYERS_IN_GAME = 30,
		E_TELEMETRY_NETWORK_HOST_TRACKID = 31,
		E_TELEMETRY_NETWORK_HOST_NUMBER_OF_ROUNDS = 32,
		E_TELEMETRY_NETWORK_HOST_IS_RANKED = 33,
		E_TELEMETRY_GAME_FINISH_TIME = 34,
		E_TELEMETRY_GAME_FINISH_TIMEOUT = 35,
		E_TELEMETRY_DRIVE_THRU_PAINT_SHOP = 36,
		E_TELEMETRY_DRIVE_THRU_BODY_SHOP = 37,
		E_TELEMETRY_DRIVE_THRU_JUNK_YARD = 38,
		E_TELEMETRY_DRIVE_THRU_CAR_WASH = 39,
		E_TELEMETRY_DRIVE_THRU_AUTO_PARTS = 40,
		E_TELEMETRY_DRIVE_THRU_GAS_STATION = 41,
		E_TELEMETRY_NEWS_READ = 42,
		E_TELEMETRY_LEADERBOARD_VIEWED = 43,
		E_TELEMETRY_CUSTOM_ROUTE_CREATED = 44,
		E_TELEMETRY_EASY_DRIVE_OPENED = 45,
		E_TELEMETRY_NETWORK_GAME_LEFT = 46,
		E_TELEMETRY_ACHIEVEMENT_EARNT = 47,
		E_TELEMETRY_DIRTYSOCK_UPNP = 48,
		E_TELEMETRY_DIRTYSOCK_CONNECTION = 49,
		E_TELEMETRY_HOOKS_COUNT = 50,
	}

	// BrnNetworkSharedIO.h:286
	enum EBoostType {
		E_BOOST_TYPE_NORMAL = 0,
		E_BOOST_TYPE_DANGER = 1,
		E_BOOST_TYPE_AGGRESSION = 2,
		E_BOOST_TYPE_STUNT = 3,
		E_BOOST_TYPE_INFINITE = 4,
		E_BOOST_TYPE_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:305
	enum EVehicleChoice {
		E_VEHICLE_CHOICE_FREE = 0,
		E_VEHICLE_CHOICE_HOST = 1,
		E_VEHICLE_CHOICE_COUNT = 2,
	}

	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// BrnNetworkSharedIO.h:458
		enum EChallengeEventType {
			E_CHALLENGE_EVENT_SELECTED = 0,
			E_CHALLENGE_EVENT_TRIGGERED = 1,
			E_CHALLENGE_EVENT_ACTION_SUCCESS = 2,
			E_CHALLENGE_EVENT_RESET = 3,
			E_CHALLENGE_EVENT_ENDED = 4,
			E_CHALLENGE_EVENT_RESULTS_FINISHED = 5,
			E_CHALLENGE_EVENT_COUNT = 6,
		}

		struct DirtyTrickEvent;

		struct InviteOrJoinParams;

		struct TelemetryData;

		// Declaration
		struct BuddyInformation {
			// BrnNetworkSharedIO.h:599
			enum EInviteStatus {
				E_INVITED_NONE = 0,
				E_INVITED_TO_LOCAL_PLAYERS_GAME = 1,
				E_INVITED_LOCAL_PLAYER_TO_GAME = 2,
				E_INVITED_COUNT = 3,
			}

		}

		struct InGamePlayerStatusData;

		struct InGamePlayerStatusInterface;

		struct OnlineLobbyPlayerStatusInterface;

		struct NetworkEventQueue;

		struct NetworkEvent<1>;

		struct NetworkOutBuddyCount;

		struct NetworkEvent<2>;

		struct NetworkOutBuddyInformation;

		struct NetworkEvent<22>;

		struct NetworkEvent<3>;

		struct NetworkOutChatMessage;

		struct NetworkEvent<5>;

		struct NetworkOutUnreadChatMessage;

		struct NetworkEvent<8>;

		struct NetworkEvent<15>;

		struct NetworkOutGameParamsChanged;

		struct NetworkEvent<32>;

		struct NetworkEvent<16>;

		struct NetworkOutPlayerAddedEvent;

		struct NetworkEvent<20>;

		struct NetworkOutPlayerFinalisedEvent;

		struct NetworkEvent<17>;

		struct NetworkOutPlayerRemovedEvent;

		struct NetworkEvent<18>;

		struct NetworkOutPlayerChangedCarEvent;

		struct NetworkEvent<19>;

		struct NetworkOutPlayerChangedCarColourEvent;

		struct NetworkEvent<33>;

		struct NetworkOutRecvRoadRulesPBEvent;

		struct NetworkEvent<10>;

		struct NetworkEvent<42>;

		struct NetworkOutNetworkPlayerCollectableEvent;

		struct NetworkEvent<56>;

		struct NetworkOutSwitchBurningHomeRunRunner;

		struct NetworkEvent<57>;

		struct NetworkOutBurnoutSkillzChanged;

		struct NetworkEvent<58>;

		struct NetworkOutShowtimeUpdate;

		struct NetworkEvent<59>;

		struct NetworkOutShowtimeSwitch;

		struct NetworkEvent<60>;

		struct NetworkOutFreeburnChallenge;

		struct NetworkEvent<61>;

		struct NetworkOutActiveFburnChallengeEvent;

		struct NetworkEvent<64>;

		struct NetworkOutImageDxtDecodedEvent;

		struct NetworkEvent<31>;

		struct NetworkEvent<12>;

		struct NetworkEvent<49>;

		struct NetworkEvent<48>;

		struct NetworkOutScoreboardEvent;

		struct NetworkEvent<44>;

		struct NetworkOutRemotePlayerHitCheckpoint;

		struct NetworkEvent<45>;

		struct NetworkOutPlayerCarSelectStatus;

		struct NetworkEvent<46>;

		struct NetworkEvent<47>;

		struct NetworkInGetBuddies;

		struct NetworkInGetChatMessage;

		struct NetworkEvent<4>;

		struct NetworkInSendChatMessage;

		struct NetworkInGetNextUnreadMessage;

		struct NetworkInSendInvite;

		struct NetworkInAcceptInvite;

		struct NetworkInJoinBuddy;

		struct NetworkInTelemetryEvent;

		struct NetworkInRoadRulesPBEvent;

		struct NetworkEvent<7>;

		struct NetworkInSendFeedback;

		struct NetworkEvent<29>;

		struct NetworkInPaybackMugshotEvent;

		struct NetworkInOfflineProgression;

		struct NetworkInPaybackIntialised;

		struct NetworkInPaybackSucceeded;

		struct NetworkEvent<38>;

		struct NetworkInFreeburnChallengeEvent;

		struct NetworkInActiveFburnChallengeEvent;

		struct NetworkInDxtDecodeImageEvent;

		struct OutputBuffer;

		struct PostSimulationInputBuffer;

		struct NetworkPlayerMappingData;

		struct GameStateToNetworkInterface;

		struct NetworkToGameStateInterface;

		struct PlayerResultsData;

		struct PlayerResultsInterface;

		struct StatsInputInterface;

		struct StatsOutputInterface;

		struct NetworkToGuiInterface;

		struct PreSimulationInputBuffer;

		// BrnNetworkSharedIO.h:442
		const int32_t KI_MAX_DIRTY_TRICK_UPDATES_PER_PLAYER = 28;

		// BrnNetworkSharedIO.h:443
		const int32_t KI_MAX_INVITE_EVENTS = 1;

		// BrnNetworkSharedIO.h:444
		const int32_t KI_MAX_REMOTE_PLAYER_DISCONNECTS = 7;

	}

	// BrnNetworkSharedIO.h:39
	const int32_t KI_MAX_ROAD_RULES_MESSAGE_ENTRIES = 10;

	// BrnNetworkSharedIO.h:40
	const int32_t KI_MAX_ROAD_RULES_RECEIVED_EVENTS = 14;

	// BrnNetworkSharedIO.h:41
	const int32_t KI_MAX_ROAD_RULES_DOWNLOADED_EVENTS = 40;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:162
	enum EPaybackType {
		E_PAYBACK_TYPE_START = 0,
		E_PAYBACK_TYPE_REVERSE_STEERING = 0,
		E_PAYBACK_TYPE_BOOST_LOCK = 1,
		E_PAYBACK_TYPE_AGGRESSORS_CONTROLS_AFFECTS_VICTIM = 2,
		E_PAYBACK_TYPE_SIX_AXIS_STEERING = 3,
		E_PAYBACK_TYPE_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:286
	enum EBoostType {
		E_BOOST_TYPE_NORMAL = 0,
		E_BOOST_TYPE_DANGER = 1,
		E_BOOST_TYPE_AGGRESSION = 2,
		E_BOOST_TYPE_STUNT = 3,
		E_BOOST_TYPE_INFINITE = 4,
		E_BOOST_TYPE_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// BrnNetworkSharedIO.h:442
		const int32_t KI_MAX_DIRTY_TRICK_UPDATES_PER_PLAYER = 28;

		// BrnNetworkSharedIO.h:443
		const int32_t KI_MAX_INVITE_EVENTS = 1;

		// BrnNetworkSharedIO.h:444
		const int32_t KI_MAX_REMOTE_PLAYER_DISCONNECTS = 7;

	}

	// BrnNetworkSharedIO.h:39
	const int32_t KI_MAX_ROAD_RULES_MESSAGE_ENTRIES = 10;

	// BrnNetworkSharedIO.h:40
	const int32_t KI_MAX_ROAD_RULES_RECEIVED_EVENTS = 14;

	// BrnNetworkSharedIO.h:41
	const int32_t KI_MAX_ROAD_RULES_DOWNLOADED_EVENTS = 40;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:51
	enum ECameraStatus {
		E_CAMERA_STATUS_NONE = 0,
		E_CAMERA_STATUS_AVAILABLE = 1,
		E_CAMERA_STATUS_IN_USE = 2,
		E_CAMERA_STATUS_DISABLED = 3,
		E_CAMERA_STATUS_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:69
	enum EBrnGameSecurity {
		E_GAMESECURITY_ALLCOMERS = 0,
		E_GAMESECURITY_FRIENDS_ONLY = 1,
		E_GAMESECURITY_INVITE_ONLY = 2,
		E_GAMESECURITY_COUNT = 3,
	}

	// BrnNetworkSharedIO.h:162
	enum EPaybackType {
		E_PAYBACK_TYPE_START = 0,
		E_PAYBACK_TYPE_REVERSE_STEERING = 0,
		E_PAYBACK_TYPE_BOOST_LOCK = 1,
		E_PAYBACK_TYPE_AGGRESSORS_CONTROLS_AFFECTS_VICTIM = 2,
		E_PAYBACK_TYPE_SIX_AXIS_STEERING = 3,
		E_PAYBACK_TYPE_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:286
	enum EBoostType {
		E_BOOST_TYPE_NORMAL = 0,
		E_BOOST_TYPE_DANGER = 1,
		E_BOOST_TYPE_AGGRESSION = 2,
		E_BOOST_TYPE_STUNT = 3,
		E_BOOST_TYPE_INFINITE = 4,
		E_BOOST_TYPE_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:305
	enum EVehicleChoice {
		E_VEHICLE_CHOICE_FREE = 0,
		E_VEHICLE_CHOICE_HOST = 1,
		E_VEHICLE_CHOICE_COUNT = 2,
	}

	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// BrnNetworkSharedIO.h:458
		enum EChallengeEventType {
			E_CHALLENGE_EVENT_SELECTED = 0,
			E_CHALLENGE_EVENT_TRIGGERED = 1,
			E_CHALLENGE_EVENT_ACTION_SUCCESS = 2,
			E_CHALLENGE_EVENT_RESET = 3,
			E_CHALLENGE_EVENT_ENDED = 4,
			E_CHALLENGE_EVENT_RESULTS_FINISHED = 5,
			E_CHALLENGE_EVENT_COUNT = 6,
		}

		// Declaration
		struct BuddyInformation {
			// BrnNetworkSharedIO.h:599
			enum EInviteStatus {
				E_INVITED_NONE = 0,
				E_INVITED_TO_LOCAL_PLAYERS_GAME = 1,
				E_INVITED_LOCAL_PLAYER_TO_GAME = 2,
				E_INVITED_COUNT = 3,
			}

		}

		struct InGamePlayerStatusData;

		// BrnNetworkSharedIO.h:442
		const int32_t KI_MAX_DIRTY_TRICK_UPDATES_PER_PLAYER = 28;

		// BrnNetworkSharedIO.h:443
		const int32_t KI_MAX_INVITE_EVENTS = 1;

		// BrnNetworkSharedIO.h:444
		const int32_t KI_MAX_REMOTE_PLAYER_DISCONNECTS = 7;

	}

	// BrnNetworkSharedIO.h:39
	const int32_t KI_MAX_ROAD_RULES_MESSAGE_ENTRIES = 10;

	// BrnNetworkSharedIO.h:40
	const int32_t KI_MAX_ROAD_RULES_RECEIVED_EVENTS = 14;

	// BrnNetworkSharedIO.h:41
	const int32_t KI_MAX_ROAD_RULES_DOWNLOADED_EVENTS = 40;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:51
	enum ECameraStatus {
		E_CAMERA_STATUS_NONE = 0,
		E_CAMERA_STATUS_AVAILABLE = 1,
		E_CAMERA_STATUS_IN_USE = 2,
		E_CAMERA_STATUS_DISABLED = 3,
		E_CAMERA_STATUS_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:69
	enum EBrnGameSecurity {
		E_GAMESECURITY_ALLCOMERS = 0,
		E_GAMESECURITY_FRIENDS_ONLY = 1,
		E_GAMESECURITY_INVITE_ONLY = 2,
		E_GAMESECURITY_COUNT = 3,
	}

	// BrnNetworkSharedIO.h:87
	enum ESearchGameModes {
		E_SEARCH_GAME_MODES_ANY = 0,
		E_SEARCH_GAME_MODES_RACE = 1,
		E_SEARCH_GAME_MODES_ROAD_RAGE = 2,
		E_SEARCH_GAME_MODES_BURNING_HOME_RUN = 3,
		E_SEARCH_GAME_MODES_FREE_BURN_LOBBY = 4,
		E_SEARCH_GAME_MODES_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:142
	enum ELeftGameReason {
		E_LEFT_GAME_REASON_LEFT = 0,
		E_LEFT_GAME_REASON_COMMS_FAILED = 1,
		E_LEFT_GAME_REASON_KICKED = 2,
		E_LEFT_GAME_REASON_GAME_DELETED = 3,
		E_LEFT_GAME_REASON_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:162
	enum EPaybackType {
		E_PAYBACK_TYPE_START = 0,
		E_PAYBACK_TYPE_REVERSE_STEERING = 0,
		E_PAYBACK_TYPE_BOOST_LOCK = 1,
		E_PAYBACK_TYPE_AGGRESSORS_CONTROLS_AFFECTS_VICTIM = 2,
		E_PAYBACK_TYPE_SIX_AXIS_STEERING = 3,
		E_PAYBACK_TYPE_COUNT = 4,
	}

	// BrnNetworkSharedIO.h:186
	enum EDirtyTrickStatus {
		E_DIRTY_TRICK_STATUS_MARKED_MAN_TAKEDOWN = 0,
		E_DIRTY_TRICK_STATUS_AVAILABLE = 1,
		E_DIRTY_TRICK_STATUS_INITIALISED = 2,
		E_DIRTY_TRICK_STATUS_SURVIVED = 3,
		E_DIRTY_TRICK_STATUS_CRASHED = 4,
		E_DIRTY_TRICK_STATUS_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:207
	enum ETelemetryHook {
		E_TELEMETRY_UNKNOWN = 0,
		E_TELEMETRY_EVENT_STARTED = 1,
		E_TELEMETRY_EVENT_STARTED_ONLINE = 2,
		E_TELEMETRY_EVENT_FINISHED = 3,
		E_TELEMETRY_EVENT_QUIT = 4,
		E_TELEMETRY_EVENT_DISCONNECT = 5,
		E_TELEMETRY_CRASHED_INTO_WORLD = 6,
		E_TELEMETRY_CRASHED_INTO_TRAFFIC = 7,
		E_TELEMETRY_CRASHED_INTO_RACE_CAR = 8,
		E_TELEMETRY_CRASHED_STARTED_SHOWTIME = 9,
		E_TELEMETRY_TAKEDOWN = 10,
		E_TELEMETRY_TAKEDOWN_VERTICAL = 11,
		E_TELEMETRY_TAKEDOWN_AFTERTOUCH = 12,
		E_TELEMETRY_TAKEDOWN_TBONE = 13,
		E_TELEMETRY_TAKEDOWN_MARKED_MAN = 14,
		E_TELEMETRY_RIVAL_ADDED = 15,
		E_TELEMETRY_RIVAL_REMOVED = 16,
		E_TELEMETRY_MUGSHOT_GAMERPIC = 17,
		E_TELEMETRY_MUGSHOT_PHOTO = 18,
		E_TELEMETRY_ROAD_RULES_NEW_PB_TIME = 19,
		E_TELEMETRY_ROAD_RULES_NEW_PB_CRASH = 20,
		E_TELEMETRY_EVENT_CAR_MODEL = 21,
		E_TELEMETRY_EVENT_EARNED_LICENCE = 22,
		E_TELEMETRY_NETWORK_CONNECT = 23,
		E_TELEMETRY_NETWORK_GAME_CREATED = 24,
		E_TELEMETRY_NETWORK_GAME_JOINED = 25,
		E_TELEMETRY_NETWORK_GAME_STARTED = 26,
		E_TELEMETRY_NETWORK_CHALLENGE_STARTED = 27,
		E_TELEMETRY_NETWORK_CHALLENGE_FINISHED = 28,
		E_TELEMETRY_NETWORK_CHALLENGE_CANCELLED = 29,
		E_TELEMETRY_NETWORK_HOST_PLAYERS_IN_GAME = 30,
		E_TELEMETRY_NETWORK_HOST_TRACKID = 31,
		E_TELEMETRY_NETWORK_HOST_NUMBER_OF_ROUNDS = 32,
		E_TELEMETRY_NETWORK_HOST_IS_RANKED = 33,
		E_TELEMETRY_GAME_FINISH_TIME = 34,
		E_TELEMETRY_GAME_FINISH_TIMEOUT = 35,
		E_TELEMETRY_DRIVE_THRU_PAINT_SHOP = 36,
		E_TELEMETRY_DRIVE_THRU_BODY_SHOP = 37,
		E_TELEMETRY_DRIVE_THRU_JUNK_YARD = 38,
		E_TELEMETRY_DRIVE_THRU_CAR_WASH = 39,
		E_TELEMETRY_DRIVE_THRU_AUTO_PARTS = 40,
		E_TELEMETRY_DRIVE_THRU_GAS_STATION = 41,
		E_TELEMETRY_NEWS_READ = 42,
		E_TELEMETRY_LEADERBOARD_VIEWED = 43,
		E_TELEMETRY_CUSTOM_ROUTE_CREATED = 44,
		E_TELEMETRY_EASY_DRIVE_OPENED = 45,
		E_TELEMETRY_NETWORK_GAME_LEFT = 46,
		E_TELEMETRY_ACHIEVEMENT_EARNT = 47,
		E_TELEMETRY_DIRTYSOCK_UPNP = 48,
		E_TELEMETRY_DIRTYSOCK_CONNECTION = 49,
		E_TELEMETRY_HOOKS_COUNT = 50,
	}

	// BrnNetworkSharedIO.h:286
	enum EBoostType {
		E_BOOST_TYPE_NORMAL = 0,
		E_BOOST_TYPE_DANGER = 1,
		E_BOOST_TYPE_AGGRESSION = 2,
		E_BOOST_TYPE_STUNT = 3,
		E_BOOST_TYPE_INFINITE = 4,
		E_BOOST_TYPE_COUNT = 5,
	}

	// BrnNetworkSharedIO.h:305
	enum EVehicleChoice {
		E_VEHICLE_CHOICE_FREE = 0,
		E_VEHICLE_CHOICE_HOST = 1,
		E_VEHICLE_CHOICE_COUNT = 2,
	}

	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// BrnNetworkSharedIO.h:458
		enum EChallengeEventType {
			E_CHALLENGE_EVENT_SELECTED = 0,
			E_CHALLENGE_EVENT_TRIGGERED = 1,
			E_CHALLENGE_EVENT_ACTION_SUCCESS = 2,
			E_CHALLENGE_EVENT_RESET = 3,
			E_CHALLENGE_EVENT_ENDED = 4,
			E_CHALLENGE_EVENT_RESULTS_FINISHED = 5,
			E_CHALLENGE_EVENT_COUNT = 6,
		}

		struct DirtyTrickEvent;

		struct InviteOrJoinParams;

		// Declaration
		struct BuddyInformation {
			// BrnNetworkSharedIO.h:599
			enum EInviteStatus {
				E_INVITED_NONE = 0,
				E_INVITED_TO_LOCAL_PLAYERS_GAME = 1,
				E_INVITED_LOCAL_PLAYER_TO_GAME = 2,
				E_INVITED_COUNT = 3,
			}

		}

		struct InGamePlayerStatusData;

		struct InGamePlayerStatusInterface;

		struct OnlineLobbyPlayerStatusInterface;

		struct NetworkEventQueue;

		struct NetworkEvent<32>;

		struct NetworkEvent<19>;

		struct NetworkEvent<33>;

		struct NetworkOutRecvRoadRulesPBEvent;

		struct NetworkEvent<62>;

		struct NetworkOutFburnChallengeSuccessUpdateEvent;

		struct NetworkEvent<31>;

		struct NetworkEvent<46>;

		struct NetworkEvent<47>;

		struct NetworkInRoadRulesPBEvent;

		struct NetworkEvent<29>;

		struct NetworkInPaybackMugshotEvent;

		struct NetworkInOfflineProgression;

		struct NetworkInPaybackIntialised;

		struct NetworkInPaybackSucceeded;

		struct NetworkEvent<38>;

		struct NetworkInFreeburnChallengeEvent;

		struct NetworkInDxtDecodeImageEvent;

		struct OutputBuffer;

		struct PostSimulationInputBuffer;

		struct NetworkPlayerMappingData;

		struct GameStateToNetworkInterface;

		struct NetworkToGameStateInterface;

		struct PlayerResultsData;

		struct PlayerResultsInterface;

		struct StatsInputInterface;

		struct StatsOutputInterface;

		struct NetworkToGuiInterface;

		struct PreSimulationInputBuffer;

		// BrnNetworkSharedIO.h:442
		const int32_t KI_MAX_DIRTY_TRICK_UPDATES_PER_PLAYER = 28;

		// BrnNetworkSharedIO.h:443
		const int32_t KI_MAX_INVITE_EVENTS = 1;

		// BrnNetworkSharedIO.h:444
		const int32_t KI_MAX_REMOTE_PLAYER_DISCONNECTS = 7;

	}

	// BrnNetworkSharedIO.h:39
	const int32_t KI_MAX_ROAD_RULES_MESSAGE_ENTRIES = 10;

	// BrnNetworkSharedIO.h:40
	const int32_t KI_MAX_ROAD_RULES_RECEIVED_EVENTS = 14;

	// BrnNetworkSharedIO.h:41
	const int32_t KI_MAX_ROAD_RULES_DOWNLOADED_EVENTS = 40;

}

