// BrnRoute.h:26
namespace BrnAI {
	// BrnAISharedConstants.h:40
	enum EResetType {
		E_RESET_TYPE_INVALID = 0,
		E_RESET_TYPE_STANDARD = 1,
		E_RESET_TYPE_BEHIND_PLAYER = 2,
		E_RESET_TYPE_BEHIND_PLAYER_ROAD_RAGE = 3,
		E_RESET_TYPE_AHEAD_PLAYER_ON_COMING = 4,
		E_RESET_TYPE_FROM_TURNINGS_ROAD_RAGE = 5,
		E_RESET_TYPE_BEHIND_PLAYER_RACE_START = 6,
		E_RESET_TYPE_AWAY_FROM_PLAYER = 7,
		E_RESET_TYPE_COUNT = 8,
	}

	// BrnAISharedConstants.h:71
	enum ERouteFindingStyle {
		E_ROUTE_FINDING_FREE_ROAM = 0,
		E_ROUTE_FINDING_RACE = 1,
		E_ROUTE_FINDING_ROAD_RAGE = 2,
		E_ROUTE_FINDING_PURSUIT = 3,
		E_ROUTE_FINDING_AVOID_PLAYER = 4,
		E_ROUTE_FINDING_ALWAYS_STRAIGHT = 5,
		E_ROUTE_FINDING_MARKED_MAN = 6,
		E_ROUTE_FINDING_COUNT = 7,
	}

	// BrnAISharedConstants.h:102
	enum EAISpeedSelectionMethod {
		E_AI_SPEED_SELECTION_METHOD_FREE_ROAM = 0,
		E_AI_SPEED_SELECTION_METHOD_RACE = 1,
		E_AI_SPEED_SELECTION_METHOD_MATCH_PLAYER = 2,
		E_AI_SPEED_SELECTION_METHOD_PERSONALITY = 3,
		E_AI_SPEED_SELECTION_METHOD_POST_RACE = 4,
		E_AI_SPEED_SELECTION_METHOD_COUNT = 5,
	}

	// BrnAISharedConstants.h:116
	enum EPersonalityType {
		E_PERSONALITY_TYPE_RACING = 0,
		E_PERSONALITY_TYPE_AGGRESSION = 1,
		E_PERSONALITY_TYPE_COUNT = 2,
	}

	// BrnAISharedConstants.h:31
	const float32_t KF_MAX_TURN_ANGLE;

	// BrnAISharedConstants.h:32
	const float32_t KF_AVERAGE_TURN_ANGLE;

	// BrnAISharedConstants.h:33
	const float32_t KF_AI_MAX_SPEED_MULTIPLIER;

	// BrnAISharedConstants.h:34
	const float32_t KF_AI_MAX_BOOST_SPEED_MULTIPLIER;

	// BrnAISharedConstants.h:36
	const float32_t KF_IN_FRONT_OF_PLAYER_DISTANCE;

	// BrnAISharedConstants.h:38
	const float32_t KF_RAM_SLOW_PLAYER_WHEN_AGGRESSIVE;

	// BrnAISharedConstants.h:114
	const int32_t KI_MAX_NEARBY_TRAFFIC = 16;

}

// BrnRoute.h:26
namespace BrnAI {
	// BrnAISharedConstants.h:40
	enum EResetType {
		E_RESET_TYPE_INVALID = 0,
		E_RESET_TYPE_STANDARD = 1,
		E_RESET_TYPE_BEHIND_PLAYER = 2,
		E_RESET_TYPE_BEHIND_PLAYER_ROAD_RAGE = 3,
		E_RESET_TYPE_AHEAD_PLAYER_ON_COMING = 4,
		E_RESET_TYPE_FROM_TURNINGS_ROAD_RAGE = 5,
		E_RESET_TYPE_BEHIND_PLAYER_RACE_START = 6,
		E_RESET_TYPE_AWAY_FROM_PLAYER = 7,
		E_RESET_TYPE_COUNT = 8,
	}

	// BrnAISharedConstants.h:54
	enum ERoundRobinType {
		E_ROUND_ROBIN_FIRST = 0,
		E_ROUND_ROBIN_FAN = 0,
		E_ROUND_ROBIN_HNG = 1,
		E_ROUND_ROBIN_COUNT = 2,
	}

	// BrnAISharedConstants.h:62
	enum EAICarState {
		E_AI_CAR_STATE_IN_RANGE = 0,
		E_AI_CAR_STATE_OUT_OF_RANGE = 1,
		E_AI_CAR_STATE_INACTIVE = 2,
		E_AI_CAR_STATE_COUNT = 3,
	}

	// BrnAISharedConstants.h:71
	enum ERouteFindingStyle {
		E_ROUTE_FINDING_FREE_ROAM = 0,
		E_ROUTE_FINDING_RACE = 1,
		E_ROUTE_FINDING_ROAD_RAGE = 2,
		E_ROUTE_FINDING_PURSUIT = 3,
		E_ROUTE_FINDING_AVOID_PLAYER = 4,
		E_ROUTE_FINDING_ALWAYS_STRAIGHT = 5,
		E_ROUTE_FINDING_MARKED_MAN = 6,
		E_ROUTE_FINDING_COUNT = 7,
	}

	// BrnAISharedConstants.h:84
	enum EAIBehaviour {
		E_AI_BEHAVIOUR_STOP = 0,
		E_AI_BEHAVIOUR_ROLLING_START = 1,
		E_AI_BEHAVIOUR_DRIVE_THRU = 2,
		E_AI_BEHAVIOUR_CRUISING = 3,
		E_AI_BEHAVIOUR_FIGHTING = 4,
		E_AI_BEHAVIOUR_QUICK_TURN = 5,
		E_AI_BEHAVIOUR_SLOW_TURN = 6,
		E_AI_BEHAVIOUR_CRASHING = 7,
		E_AI_BEHAVIOUR_DONUT = 8,
		E_AI_BEHAVIOUR_POST_RACE_WIN = 9,
		E_AI_BEHAVIOUR_POST_RACE_LOSE = 10,
		E_AI_BEHAVIOUR_COUNT = 11,
	}

	// BrnAISharedConstants.h:102
	enum EAISpeedSelectionMethod {
		E_AI_SPEED_SELECTION_METHOD_FREE_ROAM = 0,
		E_AI_SPEED_SELECTION_METHOD_RACE = 1,
		E_AI_SPEED_SELECTION_METHOD_MATCH_PLAYER = 2,
		E_AI_SPEED_SELECTION_METHOD_PERSONALITY = 3,
		E_AI_SPEED_SELECTION_METHOD_POST_RACE = 4,
		E_AI_SPEED_SELECTION_METHOD_COUNT = 5,
	}

	// BrnAISharedConstants.h:116
	enum EPersonalityType {
		E_PERSONALITY_TYPE_RACING = 0,
		E_PERSONALITY_TYPE_AGGRESSION = 1,
		E_PERSONALITY_TYPE_COUNT = 2,
	}

	// BrnAISharedConstants.h:124
	enum ENearbyType {
		E_NEARBY_TRAFFIC = 0,
		E_NEARBY_AI = 1,
		E_NEARBY_PLAYER = 2,
	}

	// BrnAISharedConstants.h:131
	enum GraphType {
		E_GRAPH_TYPE_AHEAD = 0,
		E_GRAPH_TYPE_BEHIND = 1,
		E_GRAPH_TYPE_COUNT = 2,
	}

	// BrnAISharedConstants.h:31
	const float32_t KF_MAX_TURN_ANGLE;

	// BrnAISharedConstants.h:32
	const float32_t KF_AVERAGE_TURN_ANGLE;

	// BrnAISharedConstants.h:33
	const float32_t KF_AI_MAX_SPEED_MULTIPLIER;

	// BrnAISharedConstants.h:34
	const float32_t KF_AI_MAX_BOOST_SPEED_MULTIPLIER;

	// BrnAISharedConstants.h:36
	const float32_t KF_IN_FRONT_OF_PLAYER_DISTANCE;

	// BrnAISharedConstants.h:38
	const float32_t KF_RAM_SLOW_PLAYER_WHEN_AGGRESSIVE;

	// BrnAISharedConstants.h:114
	const int32_t KI_MAX_NEARBY_TRAFFIC = 16;

}

// BrnRoute.h:26
namespace BrnAI {
	// BrnAISharedConstants.h:31
	const float32_t KF_MAX_TURN_ANGLE;

	// BrnAISharedConstants.h:32
	const float32_t KF_AVERAGE_TURN_ANGLE;

	// BrnAISharedConstants.h:33
	const float32_t KF_AI_MAX_SPEED_MULTIPLIER;

	// BrnAISharedConstants.h:34
	const float32_t KF_AI_MAX_BOOST_SPEED_MULTIPLIER;

	// BrnAISharedConstants.h:36
	const float32_t KF_IN_FRONT_OF_PLAYER_DISTANCE;

	// BrnAISharedConstants.h:38
	const float32_t KF_RAM_SLOW_PLAYER_WHEN_AGGRESSIVE;

	// BrnAISharedConstants.h:114
	const int32_t KI_MAX_NEARBY_TRAFFIC = 16;

}

// BrnRoute.h:26
namespace BrnAI {
	// BrnAISharedConstants.h:40
	enum EResetType {
		E_RESET_TYPE_INVALID = 0,
		E_RESET_TYPE_STANDARD = 1,
		E_RESET_TYPE_BEHIND_PLAYER = 2,
		E_RESET_TYPE_BEHIND_PLAYER_ROAD_RAGE = 3,
		E_RESET_TYPE_AHEAD_PLAYER_ON_COMING = 4,
		E_RESET_TYPE_FROM_TURNINGS_ROAD_RAGE = 5,
		E_RESET_TYPE_BEHIND_PLAYER_RACE_START = 6,
		E_RESET_TYPE_AWAY_FROM_PLAYER = 7,
		E_RESET_TYPE_COUNT = 8,
	}

	// BrnAISharedConstants.h:31
	const float32_t KF_MAX_TURN_ANGLE;

	// BrnAISharedConstants.h:32
	const float32_t KF_AVERAGE_TURN_ANGLE;

	// BrnAISharedConstants.h:33
	const float32_t KF_AI_MAX_SPEED_MULTIPLIER;

	// BrnAISharedConstants.h:34
	const float32_t KF_AI_MAX_BOOST_SPEED_MULTIPLIER;

	// BrnAISharedConstants.h:36
	const float32_t KF_IN_FRONT_OF_PLAYER_DISTANCE;

	// BrnAISharedConstants.h:38
	const float32_t KF_RAM_SLOW_PLAYER_WHEN_AGGRESSIVE;

	// BrnAISharedConstants.h:114
	const int32_t KI_MAX_NEARBY_TRAFFIC = 16;

}

// BrnRoute.h:26
namespace BrnAI {
	// BrnAISharedConstants.h:40
	enum EResetType {
		E_RESET_TYPE_INVALID = 0,
		E_RESET_TYPE_STANDARD = 1,
		E_RESET_TYPE_BEHIND_PLAYER = 2,
		E_RESET_TYPE_BEHIND_PLAYER_ROAD_RAGE = 3,
		E_RESET_TYPE_AHEAD_PLAYER_ON_COMING = 4,
		E_RESET_TYPE_FROM_TURNINGS_ROAD_RAGE = 5,
		E_RESET_TYPE_BEHIND_PLAYER_RACE_START = 6,
		E_RESET_TYPE_AWAY_FROM_PLAYER = 7,
		E_RESET_TYPE_COUNT = 8,
	}

	// BrnAISharedConstants.h:116
	enum EPersonalityType {
		E_PERSONALITY_TYPE_RACING = 0,
		E_PERSONALITY_TYPE_AGGRESSION = 1,
		E_PERSONALITY_TYPE_COUNT = 2,
	}

	// BrnAISharedConstants.h:31
	const float32_t KF_MAX_TURN_ANGLE;

	// BrnAISharedConstants.h:32
	const float32_t KF_AVERAGE_TURN_ANGLE;

	// BrnAISharedConstants.h:33
	const float32_t KF_AI_MAX_SPEED_MULTIPLIER;

	// BrnAISharedConstants.h:34
	const float32_t KF_AI_MAX_BOOST_SPEED_MULTIPLIER;

	// BrnAISharedConstants.h:36
	const float32_t KF_IN_FRONT_OF_PLAYER_DISTANCE;

	// BrnAISharedConstants.h:38
	const float32_t KF_RAM_SLOW_PLAYER_WHEN_AGGRESSIVE;

	// BrnAISharedConstants.h:114
	const int32_t KI_MAX_NEARBY_TRAFFIC = 16;

}

// AISectionsData.h:47
namespace BrnAI {
	// BrnAISharedConstants.h:31
	const float32_t KF_MAX_TURN_ANGLE;

	// BrnAISharedConstants.h:32
	const float32_t KF_AVERAGE_TURN_ANGLE;

	// BrnAISharedConstants.h:33
	const float32_t KF_AI_MAX_SPEED_MULTIPLIER;

	// BrnAISharedConstants.h:34
	const float32_t KF_AI_MAX_BOOST_SPEED_MULTIPLIER;

	// BrnAISharedConstants.h:36
	const float32_t KF_IN_FRONT_OF_PLAYER_DISTANCE;

	// BrnAISharedConstants.h:38
	const float32_t KF_RAM_SLOW_PLAYER_WHEN_AGGRESSIVE;

	// BrnAISharedConstants.h:114
	const int32_t KI_MAX_NEARBY_TRAFFIC = 16;

}

