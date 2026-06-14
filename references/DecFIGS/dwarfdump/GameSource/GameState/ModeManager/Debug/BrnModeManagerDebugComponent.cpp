// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnModeManagerDebugComponent.cpp:114
	int32_t DebugComparePlayers(const void *, const void *);

	// BrnModeManagerDebugComponent.cpp:34
	const RGBA KU_TEMP_BACKGROUND_COLOUR;

	// BrnModeManagerDebugComponent.cpp:35
	const float_t KF_TEMP_PLAYER_LIST_SIZE;

	// BrnModeManagerDebugComponent.cpp:36
	const float_t KF_TEMP_PLAYER_LIST_ROW_GAP;

	// BrnModeManagerDebugComponent.cpp:37
	const float_t KF_TEMP_PLAYER_LIST_COLUMN_GAP;

	// BrnModeManagerDebugComponent.cpp:38
	const RGBA KU_TEMP_PLAYER_LIST_COLOUR;

	// BrnModeManagerDebugComponent.cpp:39
	const RGBA KU_TEMP_PLAYER_LIST_RED_TEAM_COLOUR;

	// BrnModeManagerDebugComponent.cpp:40
	const RGBA KU_TEMP_PLAYER_LIST_BLUE_TEAM_COLOUR;

	// BrnModeManagerDebugComponent.cpp:41
	const float_t KF_TEMP_PLAYER_LIST_POS_X;

	// BrnModeManagerDebugComponent.cpp:42
	const float_t KF_TEMP_PLAYER_LIST_POS_Y;

	// BrnModeManagerDebugComponent.cpp:44
	const float_t KF_TEMP_PLAYER_TEAM_STATUS_SIZE;

	// BrnModeManagerDebugComponent.cpp:45
	const float_t KF_TEMP_PLAYER_TEAM_STATUS_POS_X;

	// BrnModeManagerDebugComponent.cpp:46
	const float_t KF_TEMP_PLAYER_TEAM_STATUS_POS_Y;

	// BrnModeManagerDebugComponent.cpp:47
	const RGBA KU_TEMP_PLAYER_TEAM_STATUS_ELIMINATED_COLOUR;

	// BrnModeManagerDebugComponent.cpp:48
	const RGBA KU_TEMP_PLAYER_TEAM_STATUS_RED_TEAM_COLOUR;

	// BrnModeManagerDebugComponent.cpp:49
	const RGBA KU_TEMP_PLAYER_TEAM_STATUS_BLUE_TEAM_COLOUR;

	// BrnModeManagerDebugComponent.cpp:50
	const float_t KF_TEMP_METRES_TO_FEET;

	// BrnModeManagerDebugComponent.cpp:51
	const float_t KF_TEMP_METRES_TO_MILES;

	// BrnModeManagerDebugComponent.cpp:53
	const float_t KF_TEMP_LEADER_POS_X;

	// BrnModeManagerDebugComponent.cpp:54
	const float_t KF_TEMP_LEADER_POS_Y;

	// BrnModeManagerDebugComponent.cpp:55
	const float_t KF_TEMP_LEADER_SIZE;

	// BrnModeManagerDebugComponent.cpp:56
	const RGBA KU_TEMP_PLAYER_LEADER_COLOUR;

	// BrnModeManagerDebugComponent.cpp:58
	const float_t KF_TEMP_TIMER_SIZE;

	// BrnModeManagerDebugComponent.cpp:59
	const float_t KF_TEMP_LEADER_GAP;

	// BrnModeManagerDebugComponent.cpp:60
	const RGBA KU_TEMP_TIMER_COLOUR;

	// BrnModeManagerDebugComponent.cpp:61
	const float_t KF_TEMP_TIMER_POS_X;

	// BrnModeManagerDebugComponent.cpp:62
	const float_t KF_TEMP_TIMER_POS_Y;

	// BrnModeManagerDebugComponent.cpp:63
	const rw::math::vpu::Vector2 K_TEMP_TIMER_POS;

	// BrnModeManagerDebugComponent.cpp:64
	const rw::math::vpu::Vector2 K_TEMP_TIMER_POS_TARGET;

	// BrnModeManagerDebugComponent.cpp:65
	const int32_t KI_TEMP_DEBUG_TEXT_LENGTH = 200;

}

// BrnModeManagerDebugComponent.cpp:91
struct BrnGameState::PlayerInfoStruct {
	// BrnModeManagerDebugComponent.cpp:92
	int32_t miPlayerStatusDataIndex;

	// BrnModeManagerDebugComponent.cpp:93
	BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

	// BrnModeManagerDebugComponent.cpp:96
	float32_t mfDistanceToFinish;

	// BrnModeManagerDebugComponent.cpp:100
	BrnGameState::GameStateModuleIO::EPlayerTeam mePlayerTeam;

	// BrnModeManagerDebugComponent.cpp:101
	int32_t miCheckpointsVisited;

	// BrnModeManagerDebugComponent.cpp:102
	float32_t mfDistanceToPlayer;

}

