// BrnReplayShared.h:96
namespace BrnReplays {
	// BrnReplayShared.h:135
	const int32_t KI_MAX_SERIALISERS = 5;

	// BrnReplayShared.h:136
	const int32_t KI_REPLAY_STREAM_BUFFER_SIZE = 1048576;

	// BrnReplayShared.h:137
	const int32_t KI_REPLAY_HEADER_STREAM_BUFFER_SIZE = 16384;

	// BrnReplayShared.h:138
	const int32_t KI_MAX_FRUNKS = 1800;

	// BrnReplayShared.h:139
	const int32_t KI_MAX_SECONDARY_REPLAY_FRUNKS = 15;

	// BrnReplayShared.h:140
	const int32_t KI_MAX_STREAMS = 9;

	// BrnReplayShared.h:141
	const int32_t KI_MAX_STREAM_SLOTS = 32;

	// BrnReplayShared.h:142
	const float32_t KF_REPLAY_START_TIME;

	// BrnReplayShared.h:143
	const float32_t KF_REPLAY_LENGTH;

	// BrnReplayShared.h:144
	const int32_t KI_MAX_REELS = 5;

	// BrnReplayShared.h:148
	const char[8] KAC_STREAM_MAGIC_NUMBER;

	// BrnReplayShared.h:149
	const int32_t KI_STREAM_CURRENT_VERSION;

	// BrnReplayShared.h:150
	const int32_t KI_STREAM_MAX_HEADER_SIZE = 131072;

}

// BrnReplayShared.h:96
namespace BrnReplays {
	// BrnReplayShared.h:97
	enum ESerialiserId {
		E_ID_RACECAR_ENTITY = 0,
		E_ID_RACECAR_DEBUG = 1,
		E_ID_DEBUG_DRAW = 2,
		E_ID_DIRECTOR_BRIDGE = 3,
		E_ID_GAME_MODULE = 4,
		E_ID_COUNT = 5,
	}

	// BrnReplayShared.h:107
	enum ESerialiserContext {
		E_CONTEXT_NORMAL = 0,
		E_CONTEXT_DEBUG = 1,
		E_CONTEXT_COUNT = 2,
	}

	struct Reel;

	// BrnReplayShared.h:135
	const int32_t KI_MAX_SERIALISERS = 5;

	// BrnReplayShared.h:136
	const int32_t KI_REPLAY_STREAM_BUFFER_SIZE = 1048576;

	// BrnReplayShared.h:137
	const int32_t KI_REPLAY_HEADER_STREAM_BUFFER_SIZE = 16384;

	// BrnReplayShared.h:138
	const int32_t KI_MAX_FRUNKS = 1800;

	// BrnReplayShared.h:139
	const int32_t KI_MAX_SECONDARY_REPLAY_FRUNKS = 15;

	// BrnReplayShared.h:140
	const int32_t KI_MAX_STREAMS = 9;

	// BrnReplayShared.h:141
	const int32_t KI_MAX_STREAM_SLOTS = 32;

	// BrnReplayShared.h:142
	const float32_t KF_REPLAY_START_TIME;

	// BrnReplayShared.h:143
	const float32_t KF_REPLAY_LENGTH;

	// BrnReplayShared.h:144
	const int32_t KI_MAX_REELS = 5;

	// BrnReplayShared.h:148
	const char[8] KAC_STREAM_MAGIC_NUMBER;

	// BrnReplayShared.h:149
	const int32_t KI_STREAM_CURRENT_VERSION;

	// BrnReplayShared.h:150
	const int32_t KI_STREAM_MAX_HEADER_SIZE = 131072;

}

// BrnReplayShared.h:96
namespace BrnReplays {
	// BrnReplayShared.h:97
	enum ESerialiserId {
		E_ID_RACECAR_ENTITY = 0,
		E_ID_RACECAR_DEBUG = 1,
		E_ID_DEBUG_DRAW = 2,
		E_ID_DIRECTOR_BRIDGE = 3,
		E_ID_GAME_MODULE = 4,
		E_ID_COUNT = 5,
	}

	// BrnReplayShared.h:107
	enum ESerialiserContext {
		E_CONTEXT_NORMAL = 0,
		E_CONTEXT_DEBUG = 1,
		E_CONTEXT_COUNT = 2,
	}

	struct Reel;

	struct OrthonormalMatrix;

	struct Vector3Plus;

	struct RaceCarKeyData;

	struct RaceCarStaticLayout;

	struct RaceCarEntitySerialiser;

	// BrnReplayShared.h:135
	const int32_t KI_MAX_SERIALISERS = 5;

	// BrnReplayShared.h:136
	const int32_t KI_REPLAY_STREAM_BUFFER_SIZE = 1048576;

	// BrnReplayShared.h:137
	const int32_t KI_REPLAY_HEADER_STREAM_BUFFER_SIZE = 16384;

	// BrnReplayShared.h:138
	const int32_t KI_MAX_FRUNKS = 1800;

	// BrnReplayShared.h:139
	const int32_t KI_MAX_SECONDARY_REPLAY_FRUNKS = 15;

	// BrnReplayShared.h:140
	const int32_t KI_MAX_STREAMS = 9;

	// BrnReplayShared.h:141
	const int32_t KI_MAX_STREAM_SLOTS = 32;

	// BrnReplayShared.h:142
	const float32_t KF_REPLAY_START_TIME;

	// BrnReplayShared.h:143
	const float32_t KF_REPLAY_LENGTH;

	// BrnReplayShared.h:144
	const int32_t KI_MAX_REELS = 5;

	// BrnReplayShared.h:148
	const char[8] KAC_STREAM_MAGIC_NUMBER;

	// BrnReplayShared.h:149
	const int32_t KI_STREAM_CURRENT_VERSION;

	// BrnReplayShared.h:150
	const int32_t KI_STREAM_MAX_HEADER_SIZE = 131072;

}

// BrnReplayShared.h:96
namespace BrnReplays {
	// BrnReplayShared.h:97
	enum ESerialiserId {
		E_ID_RACECAR_ENTITY = 0,
		E_ID_RACECAR_DEBUG = 1,
		E_ID_DEBUG_DRAW = 2,
		E_ID_DIRECTOR_BRIDGE = 3,
		E_ID_GAME_MODULE = 4,
		E_ID_COUNT = 5,
	}

	// BrnReplayShared.h:107
	enum ESerialiserContext {
		E_CONTEXT_NORMAL = 0,
		E_CONTEXT_DEBUG = 1,
		E_CONTEXT_COUNT = 2,
	}

	struct Reel;

	struct ReplayModule;

	struct DirectorBridgeStaticLayout;

	struct DirectorBridgeSerialiser;

	struct GameModuleStaticLayout;

	struct GameModuleSerialiser;

	// BrnReplayShared.h:135
	const int32_t KI_MAX_SERIALISERS = 5;

	// BrnReplayShared.h:136
	const int32_t KI_REPLAY_STREAM_BUFFER_SIZE = 1048576;

	// BrnReplayShared.h:137
	const int32_t KI_REPLAY_HEADER_STREAM_BUFFER_SIZE = 16384;

	// BrnReplayShared.h:138
	const int32_t KI_MAX_FRUNKS = 1800;

	// BrnReplayShared.h:139
	const int32_t KI_MAX_SECONDARY_REPLAY_FRUNKS = 15;

	// BrnReplayShared.h:140
	const int32_t KI_MAX_STREAMS = 9;

	// BrnReplayShared.h:141
	const int32_t KI_MAX_STREAM_SLOTS = 32;

	// BrnReplayShared.h:142
	const float32_t KF_REPLAY_START_TIME;

	// BrnReplayShared.h:143
	const float32_t KF_REPLAY_LENGTH;

	// BrnReplayShared.h:144
	const int32_t KI_MAX_REELS = 5;

	// BrnReplayShared.h:148
	const char[8] KAC_STREAM_MAGIC_NUMBER;

	// BrnReplayShared.h:149
	const int32_t KI_STREAM_CURRENT_VERSION;

	// BrnReplayShared.h:150
	const int32_t KI_STREAM_MAX_HEADER_SIZE = 131072;

}

// BrnReplayShared.h:96
namespace BrnReplays {
	// BrnReplayShared.h:97
	enum ESerialiserId {
		E_ID_RACECAR_ENTITY = 0,
		E_ID_RACECAR_DEBUG = 1,
		E_ID_DEBUG_DRAW = 2,
		E_ID_DIRECTOR_BRIDGE = 3,
		E_ID_GAME_MODULE = 4,
		E_ID_COUNT = 5,
	}

	// BrnReplayShared.h:107
	enum ESerialiserContext {
		E_CONTEXT_NORMAL = 0,
		E_CONTEXT_DEBUG = 1,
		E_CONTEXT_COUNT = 2,
	}

	// BrnReplayShared.h:135
	const int32_t KI_MAX_SERIALISERS = 5;

	// BrnReplayShared.h:136
	const int32_t KI_REPLAY_STREAM_BUFFER_SIZE = 1048576;

	// BrnReplayShared.h:137
	const int32_t KI_REPLAY_HEADER_STREAM_BUFFER_SIZE = 16384;

	// BrnReplayShared.h:138
	const int32_t KI_MAX_FRUNKS = 1800;

	// BrnReplayShared.h:139
	const int32_t KI_MAX_SECONDARY_REPLAY_FRUNKS = 15;

	// BrnReplayShared.h:140
	const int32_t KI_MAX_STREAMS = 9;

	// BrnReplayShared.h:141
	const int32_t KI_MAX_STREAM_SLOTS = 32;

	// BrnReplayShared.h:142
	const float32_t KF_REPLAY_START_TIME;

	// BrnReplayShared.h:143
	const float32_t KF_REPLAY_LENGTH;

	// BrnReplayShared.h:144
	const int32_t KI_MAX_REELS = 5;

	// BrnReplayShared.h:148
	const char[8] KAC_STREAM_MAGIC_NUMBER;

	// BrnReplayShared.h:149
	const int32_t KI_STREAM_CURRENT_VERSION;

	// BrnReplayShared.h:150
	const int32_t KI_STREAM_MAX_HEADER_SIZE = 131072;

}

// BrnReplayShared.h:96
namespace BrnReplays {
	struct Reel;

	// BrnReplayShared.h:135
	const int32_t KI_MAX_SERIALISERS = 5;

	// BrnReplayShared.h:136
	const int32_t KI_REPLAY_STREAM_BUFFER_SIZE = 1048576;

	// BrnReplayShared.h:137
	const int32_t KI_REPLAY_HEADER_STREAM_BUFFER_SIZE = 16384;

	// BrnReplayShared.h:138
	const int32_t KI_MAX_FRUNKS = 1800;

	// BrnReplayShared.h:139
	const int32_t KI_MAX_SECONDARY_REPLAY_FRUNKS = 15;

	// BrnReplayShared.h:140
	const int32_t KI_MAX_STREAMS = 9;

	// BrnReplayShared.h:141
	const int32_t KI_MAX_STREAM_SLOTS = 32;

	// BrnReplayShared.h:142
	const float32_t KF_REPLAY_START_TIME;

	// BrnReplayShared.h:143
	const float32_t KF_REPLAY_LENGTH;

	// BrnReplayShared.h:144
	const int32_t KI_MAX_REELS = 5;

	// BrnReplayShared.h:148
	const char[8] KAC_STREAM_MAGIC_NUMBER;

	// BrnReplayShared.h:149
	const int32_t KI_STREAM_CURRENT_VERSION;

	// BrnReplayShared.h:150
	const int32_t KI_STREAM_MAX_HEADER_SIZE = 131072;

}

// BrnReplayShared.h:96
namespace BrnReplays {
	// BrnReplayShared.h:97
	enum ESerialiserId {
		E_ID_RACECAR_ENTITY = 0,
		E_ID_RACECAR_DEBUG = 1,
		E_ID_DEBUG_DRAW = 2,
		E_ID_DIRECTOR_BRIDGE = 3,
		E_ID_GAME_MODULE = 4,
		E_ID_COUNT = 5,
	}

	// BrnReplayShared.h:107
	enum ESerialiserContext {
		E_CONTEXT_NORMAL = 0,
		E_CONTEXT_DEBUG = 1,
		E_CONTEXT_COUNT = 2,
	}

	struct Reel;

	struct DebugSerialiserInfo;

	struct DebugGraph;

	struct StreamOffset;

	struct StreamHeader;

	struct FrunkSerialiserEntry;

	struct FrunkHeader;

	struct MemBuffer;

	struct WriteStreamBlock;

	struct WriteStream;

	struct ReadStreamBlock;

	struct FrunkReadResult;

	struct ReadStream;

	struct DirectorBridgeStaticLayout;

	struct DirectorBridgeSerialiser;

	struct OrthonormalMatrix;

	struct Vector3Plus;

	struct RaceCarKeyData;

	struct RaceCarStaticLayout;

	struct RaceCarEntitySerialiser;

	struct GameModuleStaticLayout;

	struct GameModuleSerialiser;

	struct DebugComponent;

	// BrnReplayShared.h:135
	const int32_t KI_MAX_SERIALISERS = 5;

	// BrnReplayShared.h:136
	const int32_t KI_REPLAY_STREAM_BUFFER_SIZE = 1048576;

	// BrnReplayShared.h:137
	const int32_t KI_REPLAY_HEADER_STREAM_BUFFER_SIZE = 16384;

	// BrnReplayShared.h:138
	const int32_t KI_MAX_FRUNKS = 1800;

	// BrnReplayShared.h:139
	const int32_t KI_MAX_SECONDARY_REPLAY_FRUNKS = 15;

	// BrnReplayShared.h:140
	const int32_t KI_MAX_STREAMS = 9;

	// BrnReplayShared.h:141
	const int32_t KI_MAX_STREAM_SLOTS = 32;

	// BrnReplayShared.h:142
	const float32_t KF_REPLAY_START_TIME;

	// BrnReplayShared.h:143
	const float32_t KF_REPLAY_LENGTH;

	// BrnReplayShared.h:144
	const int32_t KI_MAX_REELS = 5;

	// BrnReplayShared.h:148
	const char[8] KAC_STREAM_MAGIC_NUMBER;

	// BrnReplayShared.h:149
	const int32_t KI_STREAM_CURRENT_VERSION;

	// BrnReplayShared.h:150
	const int32_t KI_STREAM_MAX_HEADER_SIZE = 131072;

}

// BrnReplayShared.h:96
namespace BrnReplays {
	// BrnReplayShared.h:97
	enum ESerialiserId {
		E_ID_RACECAR_ENTITY = 0,
		E_ID_RACECAR_DEBUG = 1,
		E_ID_DEBUG_DRAW = 2,
		E_ID_DIRECTOR_BRIDGE = 3,
		E_ID_GAME_MODULE = 4,
		E_ID_COUNT = 5,
	}

	// BrnReplayShared.h:107
	enum ESerialiserContext {
		E_CONTEXT_NORMAL = 0,
		E_CONTEXT_DEBUG = 1,
		E_CONTEXT_COUNT = 2,
	}

	struct Reel;

	struct WriteStreamBlock;

	struct ReadStreamBlock;

	// Declaration
	struct ReplayModule {
	public:
		ReplayModule();

		~ReplayModule();

	}

	// Declaration
	struct DebugComponent {
	public:
		DebugComponent();

	}

	// BrnReplayShared.h:135
	const int32_t KI_MAX_SERIALISERS = 5;

	// BrnReplayShared.h:136
	const int32_t KI_REPLAY_STREAM_BUFFER_SIZE = 1048576;

	// BrnReplayShared.h:137
	const int32_t KI_REPLAY_HEADER_STREAM_BUFFER_SIZE = 16384;

	// BrnReplayShared.h:138
	const int32_t KI_MAX_FRUNKS = 1800;

	// BrnReplayShared.h:139
	const int32_t KI_MAX_SECONDARY_REPLAY_FRUNKS = 15;

	// BrnReplayShared.h:140
	const int32_t KI_MAX_STREAMS = 9;

	// BrnReplayShared.h:141
	const int32_t KI_MAX_STREAM_SLOTS = 32;

	// BrnReplayShared.h:142
	const float32_t KF_REPLAY_START_TIME;

	// BrnReplayShared.h:143
	const float32_t KF_REPLAY_LENGTH;

	// BrnReplayShared.h:144
	const int32_t KI_MAX_REELS = 5;

	// BrnReplayShared.h:148
	const char[8] KAC_STREAM_MAGIC_NUMBER;

	// BrnReplayShared.h:149
	const int32_t KI_STREAM_CURRENT_VERSION;

	// BrnReplayShared.h:150
	const int32_t KI_STREAM_MAX_HEADER_SIZE = 131072;

}

