// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnServerInterfaceCustomCommands.cpp:46
	const char *[10] KPC_ACTION_NAMES;

	// BrnServerInterfaceCustomCommands.cpp:67
	const int32_t[10] KI_ACTIONS_TO_MESSAGE_CODES;

	// BrnServerInterfaceCustomCommands.cpp:86
	const int32_t KI_CAR_ID_LENGTH = 13;

	// BrnServerInterfaceCustomCommands.cpp:87
	const int32_t KI_MAX_CHAR_PER_SCORE = 11;

	// BrnServerInterfaceCustomCommands.cpp:88
	const int32_t KI_MAX_CHAR_PER_RECORD_INDEX = 4;

	// BrnServerInterfaceCustomCommands.cpp:89
	const int32_t KI_ROAD_RULES_SCORE_ARRAY_SIZE = 165;

	// BrnServerInterfaceCustomCommands.cpp:90
	const int32_t KI_ROAD_RULES_RECORD_INDEX_ARRAY_SIZE = 60;

	// BrnServerInterfaceCustomCommands.cpp:91
	const int32_t KI_ROAD_RULES_CAR_ID_ARRAY_SIZE = 195;

	// BrnServerInterfaceCustomCommands.cpp:92
	const int32_t KI_ROAD_RULES_DOWNLOAD_ROADS_ARRAY_SIZE = 120;

	// BrnServerInterfaceCustomCommands.cpp:93
	const int32_t KI_APPEND_NAME_MAX_LENGTH = 23;

	// BrnServerInterfaceCustomCommands.cpp:94
	const int32_t KI_FRIENDS_LIST_MAX_LENGTH = 2300;

	// BrnServerInterfaceCustomCommands.cpp:113
	const CustomCommandErrorMapping[14] KA_CUSTOM_COMMAND_ERROR_MAPPING;

	// BrnServerInterfaceCustomCommands.cpp:134
	const int32_t KI_NUMBER_OF_ERROR_MAPPINGS = 14;

}

// BrnServerInterfaceCustomCommands.cpp:105
struct BrnNetwork::CustomCommandErrorMapping {
	// BrnServerInterfaceCustomCommands.cpp:107
	int32_t liMessageKind;

	// BrnServerInterfaceCustomCommands.cpp:108
	int32_t liMessageCode;

	// BrnServerInterfaceCustomCommands.cpp:109
	int32_t liServerInterfaceErrorCode;

}

