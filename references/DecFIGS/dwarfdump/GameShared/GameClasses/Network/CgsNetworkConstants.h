// CgsNetworkConstants.h:26
namespace CgsNetwork {
	struct PlayerName;

	struct DSErrorToServerInterfaceError;

	struct DSErrorToServerInterfaceErrorTable;

	// CgsNetworkConstants.h:42
	const int32_t KI_USERNAME_LENGTH = 20;

	// CgsNetworkConstants.h:43
	const int32_t KI_PASSWORD_LENGTH = 20;

	// CgsNetworkConstants.h:44
	const int32_t KI_GAME_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:45
	const int32_t KI_USERSET_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:46
	const int32_t KI_USERSET_DESC_LENGTH = 68;

	// CgsNetworkConstants.h:47
	const int32_t KI_SESSION_NAME_LENGTH = 128;

	// CgsNetworkConstants.h:49
	const int32_t KI_BUDDIES_USERNAME_MAX_LENGTH = 20;

	// CgsNetworkConstants.h:50
	const int32_t KI_MAX_BUDDIES = 100;

	// CgsNetworkConstants.h:51
	const int32_t KI_MAX_PRESENCE_LENGTH = 100;

	// CgsNetworkConstants.h:52
	const int32_t KI_MAX_CHAT_MESSAGE_LENGTH = 200;

	// CgsNetworkConstants.h:54
	const int32_t KI_MAX_CATEGORIES = 10;

	// CgsNetworkConstants.h:55
	const int32_t KI_MAX_INDEXES = 10;

	// CgsNetworkConstants.h:56
	const int32_t KI_MAX_VARIATIONS = 66;

	// CgsNetworkConstants.h:57
	const int32_t KI_MAX_CAT_VAR_INDEX_COUNT = 66;

	// CgsNetworkConstants.h:61
	const int32_t KI_MAX_CATEGORY_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:62
	const int32_t KI_MAX_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:63
	const int32_t KI_MAX_VARIATION_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:64
	const int32_t KI_MAX_CAT_VAR_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:65
	const int32_t KI_MAX_TITLE_SIZE = 31;

	// CgsNetworkConstants.h:67
	const int32_t KI_MAX_COLUMN_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:68
	const int32_t KI_MAX_COLUMN_DATA_LENGTH = 31;

	// CgsNetworkConstants.h:70
	const int32_t KI_MAX_SCOREBOARD_PARAMS = 8;

	// CgsNetworkConstants.h:72
	const int32_t KI_MAX_TELEMETRY_DATA_SIZE = 16;

	// CgsNetworkConstants.h:74
	const int32_t KI_IPADDRESS_STRING_LENGTH = 17;

	// CgsNetworkConstants.h:75
	const RoadRulesRecvData::NetworkPlayerID K_INVALID_PLAYER_ID = 4294967295;

	// CgsNetworkConstants.h:77
	const int32_t KI_MAX_PACKET_DATA_SIZE = 1000;

	// CgsNetworkConstants.h:81
	const int32_t KI_UDP_HEADER_SIZE = 28;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsNetworkConstants.h:29
	namespace DirtySock {
	}

	struct PlayerName;

	struct DSErrorToServerInterfaceError;

	struct DSErrorToServerInterfaceErrorTable;

	// CgsNetworkConstants.h:42
	const int32_t KI_USERNAME_LENGTH = 20;

	// CgsNetworkConstants.h:43
	const int32_t KI_PASSWORD_LENGTH = 20;

	// CgsNetworkConstants.h:44
	const int32_t KI_GAME_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:45
	const int32_t KI_USERSET_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:46
	const int32_t KI_USERSET_DESC_LENGTH = 68;

	// CgsNetworkConstants.h:47
	const int32_t KI_SESSION_NAME_LENGTH = 128;

	// CgsNetworkConstants.h:49
	const int32_t KI_BUDDIES_USERNAME_MAX_LENGTH = 20;

	// CgsNetworkConstants.h:50
	const int32_t KI_MAX_BUDDIES = 100;

	// CgsNetworkConstants.h:51
	const int32_t KI_MAX_PRESENCE_LENGTH = 100;

	// CgsNetworkConstants.h:52
	const int32_t KI_MAX_CHAT_MESSAGE_LENGTH = 200;

	// CgsNetworkConstants.h:54
	const int32_t KI_MAX_CATEGORIES = 10;

	// CgsNetworkConstants.h:55
	const int32_t KI_MAX_INDEXES = 10;

	// CgsNetworkConstants.h:56
	const int32_t KI_MAX_VARIATIONS = 66;

	// CgsNetworkConstants.h:57
	const int32_t KI_MAX_CAT_VAR_INDEX_COUNT = 66;

	// CgsNetworkConstants.h:61
	const int32_t KI_MAX_CATEGORY_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:62
	const int32_t KI_MAX_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:63
	const int32_t KI_MAX_VARIATION_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:64
	const int32_t KI_MAX_CAT_VAR_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:65
	const int32_t KI_MAX_TITLE_SIZE = 31;

	// CgsNetworkConstants.h:67
	const int32_t KI_MAX_COLUMN_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:68
	const int32_t KI_MAX_COLUMN_DATA_LENGTH = 31;

	// CgsNetworkConstants.h:70
	const int32_t KI_MAX_SCOREBOARD_PARAMS = 8;

	// CgsNetworkConstants.h:72
	const int32_t KI_MAX_TELEMETRY_DATA_SIZE = 16;

	// CgsNetworkConstants.h:74
	const int32_t KI_IPADDRESS_STRING_LENGTH = 17;

	// CgsNetworkConstants.h:75
	const RoadRulesRecvData::NetworkPlayerID K_INVALID_PLAYER_ID = 4294967295;

	// CgsNetworkConstants.h:77
	const int32_t KI_MAX_PACKET_DATA_SIZE = 1000;

	// CgsNetworkConstants.h:81
	const int32_t KI_UDP_HEADER_SIZE = 28;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsNetworkConstants.h:29
	namespace DirtySock {
		struct SceNpCommunicationId;

		struct SceNpOnlineId;

		struct SceNpId;

		struct SceNpOnlineName;

		struct SceNpAvatarUrl;

		struct SceNpUserInfo;

		struct SceNpMatchingRoomMember;

		struct DirtyAddrT;

		struct LobbyApiColorT;

		struct LobbyApiUserT;

		struct ConnApiCbInfoT;

		struct VoipRefT;

		struct NetGameLinkRefT;

		struct ConnApiClientListT;

		struct ConnApiRefT;

	}

	// CgsNetworkConstants.h:99
	enum EServerType {
		E_SERVER_TYPE_LOCAL = 0,
		E_SERVER_TYPE_DEV = 1,
		E_SERVER_TYPE_TEST = 2,
		E_SERVER_TYPE_JUICE = 3,
		E_SERVER_TYPE_ARTIST = 4,
		E_SERVER_TYPE_DEMO_1 = 5,
		E_SERVER_TYPE_DEMO_2 = 6,
		E_SERVER_TYPE_COUNT = 7,
	}

	struct PlayerName;

	struct NetworkTexture;

	struct DSErrorToServerInterfaceError;

	struct DSErrorToServerInterfaceErrorTable;

	struct UniquePlayerIDPS3;

	struct ServerInterfacePlayerParams;

	struct VoIPClient;

	struct HeadsetStatusMessage;

	struct VoIPManager;

	struct ServerInterface;

	struct BuddyManagerBase;

	struct ReliableMessage;

	struct SignalMessage;

	struct PlayerConnectionData;

	struct TestConnectionMessage;

	struct ConnectionStatusMessage;

	struct PlayerData;

	struct PlayerMenuData;

	struct NetworkPlayer;

	struct CgsNetworkPlayerConstructParams;

	struct PlayerManagerDebugComponent;

	struct PlayerManagerConstructParams;

	struct PlayerManagerPrepareParams;

	struct HostMigrationNetworkPlayerData;

	struct HostKeepAliveMessage;

	struct NewHostMessage;

	struct HostMigrationManager;

	struct HostMigrationDebugComponent;

	struct SyncTimeMessage;

	struct SyncTimeClient;

	struct SyncTimeHost;

	struct StartTime;

	struct StartTimeMessage;

	struct ReadyMessage;

	struct NetworkManagerConstructParams;

	struct VersionDisplay;

	struct ServerInterfaceGameParams;

	struct NetworkTextureDXTCompress;

	// CgsNetworkConstants.h:42
	const int32_t KI_USERNAME_LENGTH = 20;

	// CgsNetworkConstants.h:43
	const int32_t KI_PASSWORD_LENGTH = 20;

	// CgsNetworkConstants.h:44
	const int32_t KI_GAME_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:45
	const int32_t KI_USERSET_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:46
	const int32_t KI_USERSET_DESC_LENGTH = 68;

	// CgsNetworkConstants.h:47
	const int32_t KI_SESSION_NAME_LENGTH = 128;

	// CgsNetworkConstants.h:49
	const int32_t KI_BUDDIES_USERNAME_MAX_LENGTH = 20;

	// CgsNetworkConstants.h:50
	const int32_t KI_MAX_BUDDIES = 100;

	// CgsNetworkConstants.h:51
	const int32_t KI_MAX_PRESENCE_LENGTH = 100;

	// CgsNetworkConstants.h:52
	const int32_t KI_MAX_CHAT_MESSAGE_LENGTH = 200;

	// CgsNetworkConstants.h:54
	const int32_t KI_MAX_CATEGORIES = 10;

	// CgsNetworkConstants.h:55
	const int32_t KI_MAX_INDEXES = 10;

	// CgsNetworkConstants.h:56
	const int32_t KI_MAX_VARIATIONS = 66;

	// CgsNetworkConstants.h:57
	const int32_t KI_MAX_CAT_VAR_INDEX_COUNT = 66;

	// CgsNetworkConstants.h:61
	const int32_t KI_MAX_CATEGORY_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:62
	const int32_t KI_MAX_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:63
	const int32_t KI_MAX_VARIATION_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:64
	const int32_t KI_MAX_CAT_VAR_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:65
	const int32_t KI_MAX_TITLE_SIZE = 31;

	// CgsNetworkConstants.h:67
	const int32_t KI_MAX_COLUMN_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:68
	const int32_t KI_MAX_COLUMN_DATA_LENGTH = 31;

	// CgsNetworkConstants.h:70
	const int32_t KI_MAX_SCOREBOARD_PARAMS = 8;

	// CgsNetworkConstants.h:72
	const int32_t KI_MAX_TELEMETRY_DATA_SIZE = 16;

	// CgsNetworkConstants.h:74
	const int32_t KI_IPADDRESS_STRING_LENGTH = 17;

	// CgsNetworkConstants.h:75
	const RoadRulesRecvData::NetworkPlayerID K_INVALID_PLAYER_ID = 4294967295;

	// CgsNetworkConstants.h:77
	const int32_t KI_MAX_PACKET_DATA_SIZE = 1000;

	// CgsNetworkConstants.h:81
	const int32_t KI_UDP_HEADER_SIZE = 28;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsNetworkConstants.h:29
	namespace DirtySock {
		struct DirtyAddrT;

		struct LobbyApiColorT;

		struct LobbyApiUserT;

		struct NetGameLinkRefT;

	}

	struct PlayerName;

	struct NetworkTexture;

	struct DSErrorToServerInterfaceError;

	struct DSErrorToServerInterfaceErrorTable;

	struct UniquePlayerIDPS3;

	struct ServerInterfacePlayerParams;

	// CgsNetworkConstants.h:42
	const int32_t KI_USERNAME_LENGTH = 20;

	// CgsNetworkConstants.h:43
	const int32_t KI_PASSWORD_LENGTH = 20;

	// CgsNetworkConstants.h:44
	const int32_t KI_GAME_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:45
	const int32_t KI_USERSET_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:46
	const int32_t KI_USERSET_DESC_LENGTH = 68;

	// CgsNetworkConstants.h:47
	const int32_t KI_SESSION_NAME_LENGTH = 128;

	// CgsNetworkConstants.h:49
	const int32_t KI_BUDDIES_USERNAME_MAX_LENGTH = 20;

	// CgsNetworkConstants.h:50
	const int32_t KI_MAX_BUDDIES = 100;

	// CgsNetworkConstants.h:51
	const int32_t KI_MAX_PRESENCE_LENGTH = 100;

	// CgsNetworkConstants.h:52
	const int32_t KI_MAX_CHAT_MESSAGE_LENGTH = 200;

	// CgsNetworkConstants.h:54
	const int32_t KI_MAX_CATEGORIES = 10;

	// CgsNetworkConstants.h:55
	const int32_t KI_MAX_INDEXES = 10;

	// CgsNetworkConstants.h:56
	const int32_t KI_MAX_VARIATIONS = 66;

	// CgsNetworkConstants.h:57
	const int32_t KI_MAX_CAT_VAR_INDEX_COUNT = 66;

	// CgsNetworkConstants.h:61
	const int32_t KI_MAX_CATEGORY_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:62
	const int32_t KI_MAX_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:63
	const int32_t KI_MAX_VARIATION_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:64
	const int32_t KI_MAX_CAT_VAR_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:65
	const int32_t KI_MAX_TITLE_SIZE = 31;

	// CgsNetworkConstants.h:67
	const int32_t KI_MAX_COLUMN_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:68
	const int32_t KI_MAX_COLUMN_DATA_LENGTH = 31;

	// CgsNetworkConstants.h:70
	const int32_t KI_MAX_SCOREBOARD_PARAMS = 8;

	// CgsNetworkConstants.h:72
	const int32_t KI_MAX_TELEMETRY_DATA_SIZE = 16;

	// CgsNetworkConstants.h:74
	const int32_t KI_IPADDRESS_STRING_LENGTH = 17;

	// CgsNetworkConstants.h:75
	const RoadRulesRecvData::NetworkPlayerID K_INVALID_PLAYER_ID = 4294967295;

	// CgsNetworkConstants.h:77
	const int32_t KI_MAX_PACKET_DATA_SIZE = 1000;

	// CgsNetworkConstants.h:81
	const int32_t KI_UDP_HEADER_SIZE = 28;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsNetworkConstants.h:29
	namespace DirtySock {
	}

	struct PlayerName;

	struct NetworkTexture;

	struct DSErrorToServerInterfaceError;

	struct DSErrorToServerInterfaceErrorTable;

	struct UniquePlayerIDPS3;

	struct ServerInterfacePlayerParams;

	// CgsNetworkConstants.h:42
	const int32_t KI_USERNAME_LENGTH = 20;

	// CgsNetworkConstants.h:43
	const int32_t KI_PASSWORD_LENGTH = 20;

	// CgsNetworkConstants.h:44
	const int32_t KI_GAME_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:45
	const int32_t KI_USERSET_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:46
	const int32_t KI_USERSET_DESC_LENGTH = 68;

	// CgsNetworkConstants.h:47
	const int32_t KI_SESSION_NAME_LENGTH = 128;

	// CgsNetworkConstants.h:49
	const int32_t KI_BUDDIES_USERNAME_MAX_LENGTH = 20;

	// CgsNetworkConstants.h:50
	const int32_t KI_MAX_BUDDIES = 100;

	// CgsNetworkConstants.h:51
	const int32_t KI_MAX_PRESENCE_LENGTH = 100;

	// CgsNetworkConstants.h:52
	const int32_t KI_MAX_CHAT_MESSAGE_LENGTH = 200;

	// CgsNetworkConstants.h:54
	const int32_t KI_MAX_CATEGORIES = 10;

	// CgsNetworkConstants.h:55
	const int32_t KI_MAX_INDEXES = 10;

	// CgsNetworkConstants.h:56
	const int32_t KI_MAX_VARIATIONS = 66;

	// CgsNetworkConstants.h:57
	const int32_t KI_MAX_CAT_VAR_INDEX_COUNT = 66;

	// CgsNetworkConstants.h:61
	const int32_t KI_MAX_CATEGORY_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:62
	const int32_t KI_MAX_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:63
	const int32_t KI_MAX_VARIATION_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:64
	const int32_t KI_MAX_CAT_VAR_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:65
	const int32_t KI_MAX_TITLE_SIZE = 31;

	// CgsNetworkConstants.h:67
	const int32_t KI_MAX_COLUMN_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:68
	const int32_t KI_MAX_COLUMN_DATA_LENGTH = 31;

	// CgsNetworkConstants.h:70
	const int32_t KI_MAX_SCOREBOARD_PARAMS = 8;

	// CgsNetworkConstants.h:72
	const int32_t KI_MAX_TELEMETRY_DATA_SIZE = 16;

	// CgsNetworkConstants.h:74
	const int32_t KI_IPADDRESS_STRING_LENGTH = 17;

	// CgsNetworkConstants.h:75
	const RoadRulesRecvData::NetworkPlayerID K_INVALID_PLAYER_ID = 4294967295;

	// CgsNetworkConstants.h:77
	const int32_t KI_MAX_PACKET_DATA_SIZE = 1000;

	// CgsNetworkConstants.h:81
	const int32_t KI_UDP_HEADER_SIZE = 28;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsNetworkConstants.h:29
	namespace DirtySock {
		struct DirtyAddrT;

		struct LobbyApiColorT;

		struct LobbyApiUserT;

		struct NetGameLinkRefT;

	}

	struct PlayerName;

	struct NetworkTexture;

	struct DSErrorToServerInterfaceError;

	struct DSErrorToServerInterfaceErrorTable;

	struct UniquePlayerIDPS3;

	struct ServerInterfacePlayerParams;

	// CgsNetworkConstants.h:42
	const int32_t KI_USERNAME_LENGTH = 20;

	// CgsNetworkConstants.h:43
	const int32_t KI_PASSWORD_LENGTH = 20;

	// CgsNetworkConstants.h:44
	const int32_t KI_GAME_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:45
	const int32_t KI_USERSET_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:46
	const int32_t KI_USERSET_DESC_LENGTH = 68;

	// CgsNetworkConstants.h:47
	const int32_t KI_SESSION_NAME_LENGTH = 128;

	// CgsNetworkConstants.h:49
	const int32_t KI_BUDDIES_USERNAME_MAX_LENGTH = 20;

	// CgsNetworkConstants.h:50
	const int32_t KI_MAX_BUDDIES = 100;

	// CgsNetworkConstants.h:51
	const int32_t KI_MAX_PRESENCE_LENGTH = 100;

	// CgsNetworkConstants.h:52
	const int32_t KI_MAX_CHAT_MESSAGE_LENGTH = 200;

	// CgsNetworkConstants.h:54
	const int32_t KI_MAX_CATEGORIES = 10;

	// CgsNetworkConstants.h:55
	const int32_t KI_MAX_INDEXES = 10;

	// CgsNetworkConstants.h:56
	const int32_t KI_MAX_VARIATIONS = 66;

	// CgsNetworkConstants.h:57
	const int32_t KI_MAX_CAT_VAR_INDEX_COUNT = 66;

	// CgsNetworkConstants.h:61
	const int32_t KI_MAX_CATEGORY_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:62
	const int32_t KI_MAX_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:63
	const int32_t KI_MAX_VARIATION_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:64
	const int32_t KI_MAX_CAT_VAR_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:65
	const int32_t KI_MAX_TITLE_SIZE = 31;

	// CgsNetworkConstants.h:67
	const int32_t KI_MAX_COLUMN_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:68
	const int32_t KI_MAX_COLUMN_DATA_LENGTH = 31;

	// CgsNetworkConstants.h:70
	const int32_t KI_MAX_SCOREBOARD_PARAMS = 8;

	// CgsNetworkConstants.h:72
	const int32_t KI_MAX_TELEMETRY_DATA_SIZE = 16;

	// CgsNetworkConstants.h:74
	const int32_t KI_IPADDRESS_STRING_LENGTH = 17;

	// CgsNetworkConstants.h:75
	const GuiEventNetworkLaunching::NetworkPlayerID K_INVALID_PLAYER_ID = 4294967295;

	// CgsNetworkConstants.h:77
	const int32_t KI_MAX_PACKET_DATA_SIZE = 1000;

	// CgsNetworkConstants.h:81
	const int32_t KI_UDP_HEADER_SIZE = 28;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsNetworkConstants.h:29
	namespace DirtySock {
	}

	// CgsNetworkConstants.h:42
	const int32_t KI_USERNAME_LENGTH = 20;

	// CgsNetworkConstants.h:43
	const int32_t KI_PASSWORD_LENGTH = 20;

	// CgsNetworkConstants.h:44
	const int32_t KI_GAME_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:45
	const int32_t KI_USERSET_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:46
	const int32_t KI_USERSET_DESC_LENGTH = 68;

	// CgsNetworkConstants.h:47
	const int32_t KI_SESSION_NAME_LENGTH = 128;

	// CgsNetworkConstants.h:49
	const int32_t KI_BUDDIES_USERNAME_MAX_LENGTH = 20;

	// CgsNetworkConstants.h:50
	const int32_t KI_MAX_BUDDIES = 100;

	// CgsNetworkConstants.h:51
	const int32_t KI_MAX_PRESENCE_LENGTH = 100;

	// CgsNetworkConstants.h:52
	const int32_t KI_MAX_CHAT_MESSAGE_LENGTH = 200;

	// CgsNetworkConstants.h:54
	const int32_t KI_MAX_CATEGORIES = 10;

	// CgsNetworkConstants.h:55
	const int32_t KI_MAX_INDEXES = 10;

	// CgsNetworkConstants.h:56
	const int32_t KI_MAX_VARIATIONS = 66;

	// CgsNetworkConstants.h:57
	const int32_t KI_MAX_CAT_VAR_INDEX_COUNT = 66;

	// CgsNetworkConstants.h:61
	const int32_t KI_MAX_CATEGORY_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:62
	const int32_t KI_MAX_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:63
	const int32_t KI_MAX_VARIATION_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:64
	const int32_t KI_MAX_CAT_VAR_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:65
	const int32_t KI_MAX_TITLE_SIZE = 31;

	// CgsNetworkConstants.h:67
	const int32_t KI_MAX_COLUMN_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:68
	const int32_t KI_MAX_COLUMN_DATA_LENGTH = 31;

	// CgsNetworkConstants.h:70
	const int32_t KI_MAX_SCOREBOARD_PARAMS = 8;

	// CgsNetworkConstants.h:72
	const int32_t KI_MAX_TELEMETRY_DATA_SIZE = 16;

	// CgsNetworkConstants.h:74
	const int32_t KI_IPADDRESS_STRING_LENGTH = 17;

	// CgsNetworkConstants.h:75
	const GuiEventNetworkLaunching::NetworkPlayerID K_INVALID_PLAYER_ID = 4294967295;

	// CgsNetworkConstants.h:77
	const int32_t KI_MAX_PACKET_DATA_SIZE = 1000;

	// CgsNetworkConstants.h:81
	const int32_t KI_UDP_HEADER_SIZE = 28;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsNetworkConstants.h:29
	namespace DirtySock {
		struct SceNpCommunicationId;

		struct SceNpOnlineId;

		struct SceNpId;

		struct SceNpOnlineName;

		struct SceNpAvatarUrl;

		struct SceNpUserInfo;

		struct SceNpMatchingRoomMember;

		struct DirtyAddrT;

		struct LobbyApiColorT;

		struct LobbyApiUserT;

		struct ConnApiCbInfoT;

		struct VoipRefT;

		struct NetGameLinkRefT;

		struct ConnApiClientListT;

		struct ConnApiRefT;

	}

	// CgsNetworkConstants.h:99
	enum EServerType {
		E_SERVER_TYPE_LOCAL = 0,
		E_SERVER_TYPE_DEV = 1,
		E_SERVER_TYPE_TEST = 2,
		E_SERVER_TYPE_JUICE = 3,
		E_SERVER_TYPE_ARTIST = 4,
		E_SERVER_TYPE_DEMO_1 = 5,
		E_SERVER_TYPE_DEMO_2 = 6,
		E_SERVER_TYPE_COUNT = 7,
	}

	struct PlayerName;

	struct NetworkTexture;

	struct DSErrorToServerInterfaceError;

	struct DSErrorToServerInterfaceErrorTable;

	struct UniquePlayerIDPS3;

	struct ServerInterfacePlayerParams;

	struct VoIPClient;

	struct HeadsetStatusMessage;

	struct VoIPManager;

	struct ServerInterface;

	struct BuddyManagerBase;

	struct ReliableMessage;

	struct SignalMessage;

	struct PlayerConnectionData;

	struct TestConnectionMessage;

	struct ConnectionStatusMessage;

	struct PlayerData;

	struct PlayerMenuData;

	struct NetworkPlayer;

	struct CgsNetworkPlayerConstructParams;

	struct PlayerManagerDebugComponent;

	struct PlayerManagerConstructParams;

	struct PlayerManagerPrepareParams;

	struct HostMigrationNetworkPlayerData;

	struct HostKeepAliveMessage;

	struct NewHostMessage;

	struct HostMigrationManager;

	struct HostMigrationDebugComponent;

	struct SyncTimeMessage;

	struct SyncTimeClient;

	struct SyncTimeHost;

	struct StartTime;

	struct StartTimeMessage;

	struct ReadyMessage;

	struct NetworkManagerConstructParams;

	struct VersionDisplay;

	struct ServerInterfaceGameParams;

	struct NetworkTextureDXTCompress;

	// CgsNetworkConstants.h:42
	const int32_t KI_USERNAME_LENGTH = 20;

	// CgsNetworkConstants.h:43
	const int32_t KI_PASSWORD_LENGTH = 20;

	// CgsNetworkConstants.h:44
	const int32_t KI_GAME_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:45
	const int32_t KI_USERSET_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:46
	const int32_t KI_USERSET_DESC_LENGTH = 68;

	// CgsNetworkConstants.h:47
	const int32_t KI_SESSION_NAME_LENGTH = 128;

	// CgsNetworkConstants.h:49
	const int32_t KI_BUDDIES_USERNAME_MAX_LENGTH = 20;

	// CgsNetworkConstants.h:50
	const int32_t KI_MAX_BUDDIES = 100;

	// CgsNetworkConstants.h:51
	const int32_t KI_MAX_PRESENCE_LENGTH = 100;

	// CgsNetworkConstants.h:52
	const int32_t KI_MAX_CHAT_MESSAGE_LENGTH = 200;

	// CgsNetworkConstants.h:54
	const int32_t KI_MAX_CATEGORIES = 10;

	// CgsNetworkConstants.h:55
	const int32_t KI_MAX_INDEXES = 10;

	// CgsNetworkConstants.h:56
	const int32_t KI_MAX_VARIATIONS = 66;

	// CgsNetworkConstants.h:57
	const int32_t KI_MAX_CAT_VAR_INDEX_COUNT = 66;

	// CgsNetworkConstants.h:61
	const int32_t KI_MAX_CATEGORY_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:62
	const int32_t KI_MAX_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:63
	const int32_t KI_MAX_VARIATION_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:64
	const int32_t KI_MAX_CAT_VAR_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:65
	const int32_t KI_MAX_TITLE_SIZE = 31;

	// CgsNetworkConstants.h:67
	const int32_t KI_MAX_COLUMN_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:68
	const int32_t KI_MAX_COLUMN_DATA_LENGTH = 31;

	// CgsNetworkConstants.h:70
	const int32_t KI_MAX_SCOREBOARD_PARAMS = 8;

	// CgsNetworkConstants.h:72
	const int32_t KI_MAX_TELEMETRY_DATA_SIZE = 16;

	// CgsNetworkConstants.h:74
	const int32_t KI_IPADDRESS_STRING_LENGTH = 17;

	// CgsNetworkConstants.h:75
	const GuiEventNetworkLaunching::NetworkPlayerID K_INVALID_PLAYER_ID = 4294967295;

	// CgsNetworkConstants.h:77
	const int32_t KI_MAX_PACKET_DATA_SIZE = 1000;

	// CgsNetworkConstants.h:81
	const int32_t KI_UDP_HEADER_SIZE = 28;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsNetworkConstants.h:29
	namespace DirtySock {
		struct DirtyAddrT;

		struct LobbyApiColorT;

		struct LobbyApiUserT;

		struct NetGameLinkRefT;

	}

	struct PlayerName;

	struct NetworkTexture;

	struct DSErrorToServerInterfaceError;

	struct DSErrorToServerInterfaceErrorTable;

	struct UniquePlayerIDPS3;

	struct ServerInterfacePlayerParams;

	struct ReliableMessage;

	struct SignalMessage;

	// CgsNetworkConstants.h:42
	const int32_t KI_USERNAME_LENGTH = 20;

	// CgsNetworkConstants.h:43
	const int32_t KI_PASSWORD_LENGTH = 20;

	// CgsNetworkConstants.h:44
	const int32_t KI_GAME_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:45
	const int32_t KI_USERSET_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:46
	const int32_t KI_USERSET_DESC_LENGTH = 68;

	// CgsNetworkConstants.h:47
	const int32_t KI_SESSION_NAME_LENGTH = 128;

	// CgsNetworkConstants.h:49
	const int32_t KI_BUDDIES_USERNAME_MAX_LENGTH = 20;

	// CgsNetworkConstants.h:50
	const int32_t KI_MAX_BUDDIES = 100;

	// CgsNetworkConstants.h:51
	const int32_t KI_MAX_PRESENCE_LENGTH = 100;

	// CgsNetworkConstants.h:52
	const int32_t KI_MAX_CHAT_MESSAGE_LENGTH = 200;

	// CgsNetworkConstants.h:54
	const int32_t KI_MAX_CATEGORIES = 10;

	// CgsNetworkConstants.h:55
	const int32_t KI_MAX_INDEXES = 10;

	// CgsNetworkConstants.h:56
	const int32_t KI_MAX_VARIATIONS = 66;

	// CgsNetworkConstants.h:57
	const int32_t KI_MAX_CAT_VAR_INDEX_COUNT = 66;

	// CgsNetworkConstants.h:61
	const int32_t KI_MAX_CATEGORY_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:62
	const int32_t KI_MAX_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:63
	const int32_t KI_MAX_VARIATION_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:64
	const int32_t KI_MAX_CAT_VAR_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:65
	const int32_t KI_MAX_TITLE_SIZE = 31;

	// CgsNetworkConstants.h:67
	const int32_t KI_MAX_COLUMN_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:68
	const int32_t KI_MAX_COLUMN_DATA_LENGTH = 31;

	// CgsNetworkConstants.h:70
	const int32_t KI_MAX_SCOREBOARD_PARAMS = 8;

	// CgsNetworkConstants.h:72
	const int32_t KI_MAX_TELEMETRY_DATA_SIZE = 16;

	// CgsNetworkConstants.h:74
	const int32_t KI_IPADDRESS_STRING_LENGTH = 17;

	// CgsNetworkConstants.h:75
	const GuiEventNetworkLaunching::NetworkPlayerID K_INVALID_PLAYER_ID = 4294967295;

	// CgsNetworkConstants.h:77
	const int32_t KI_MAX_PACKET_DATA_SIZE = 1000;

	// CgsNetworkConstants.h:81
	const int32_t KI_UDP_HEADER_SIZE = 28;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsNetworkConstants.h:29
	namespace DirtySock {
		struct DirtyAddrT;

		struct LobbyApiColorT;

		struct LobbyApiUserT;

		struct NetGameLinkRefT;

	}

	struct PlayerName;

	struct DSErrorToServerInterfaceError;

	struct DSErrorToServerInterfaceErrorTable;

	struct UniquePlayerIDPS3;

	struct ServerInterfacePlayerParams;

	struct NetworkTexture;

	// CgsNetworkConstants.h:42
	const int32_t KI_USERNAME_LENGTH = 20;

	// CgsNetworkConstants.h:43
	const int32_t KI_PASSWORD_LENGTH = 20;

	// CgsNetworkConstants.h:44
	const int32_t KI_GAME_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:45
	const int32_t KI_USERSET_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:46
	const int32_t KI_USERSET_DESC_LENGTH = 68;

	// CgsNetworkConstants.h:47
	const int32_t KI_SESSION_NAME_LENGTH = 128;

	// CgsNetworkConstants.h:49
	const int32_t KI_BUDDIES_USERNAME_MAX_LENGTH = 20;

	// CgsNetworkConstants.h:50
	const int32_t KI_MAX_BUDDIES = 100;

	// CgsNetworkConstants.h:51
	const int32_t KI_MAX_PRESENCE_LENGTH = 100;

	// CgsNetworkConstants.h:52
	const int32_t KI_MAX_CHAT_MESSAGE_LENGTH = 200;

	// CgsNetworkConstants.h:54
	const int32_t KI_MAX_CATEGORIES = 10;

	// CgsNetworkConstants.h:55
	const int32_t KI_MAX_INDEXES = 10;

	// CgsNetworkConstants.h:56
	const int32_t KI_MAX_VARIATIONS = 66;

	// CgsNetworkConstants.h:57
	const int32_t KI_MAX_CAT_VAR_INDEX_COUNT = 66;

	// CgsNetworkConstants.h:61
	const int32_t KI_MAX_CATEGORY_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:62
	const int32_t KI_MAX_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:63
	const int32_t KI_MAX_VARIATION_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:64
	const int32_t KI_MAX_CAT_VAR_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:65
	const int32_t KI_MAX_TITLE_SIZE = 31;

	// CgsNetworkConstants.h:67
	const int32_t KI_MAX_COLUMN_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:68
	const int32_t KI_MAX_COLUMN_DATA_LENGTH = 31;

	// CgsNetworkConstants.h:70
	const int32_t KI_MAX_SCOREBOARD_PARAMS = 8;

	// CgsNetworkConstants.h:72
	const int32_t KI_MAX_TELEMETRY_DATA_SIZE = 16;

	// CgsNetworkConstants.h:74
	const int32_t KI_IPADDRESS_STRING_LENGTH = 17;

	// CgsNetworkConstants.h:75
	const RoadRulesRecvData::NetworkPlayerID K_INVALID_PLAYER_ID = 4294967295;

	// CgsNetworkConstants.h:77
	const int32_t KI_MAX_PACKET_DATA_SIZE = 1000;

	// CgsNetworkConstants.h:81
	const int32_t KI_UDP_HEADER_SIZE = 28;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsNetworkConstants.h:29
	namespace DirtySock {
		struct SceNpCommunicationId;

		struct SceNpOnlineId;

		struct SceNpId;

		struct SceNpOnlineName;

		struct SceNpAvatarUrl;

		struct SceNpUserInfo;

		struct SceNpMatchingRoomMember;

		struct DirtyAddrT;

		struct LobbyApiColorT;

		struct LobbyApiUserT;

		struct NetGameLinkRefT;

		struct ConnApiCbInfoT;

		struct ConnApiClientListT;

		struct ConnApiRefT;

		struct VoipRefT;

		struct ProtoUpnpRefT;

	}

	// CgsNetworkConstants.h:99
	enum EServerType {
		E_SERVER_TYPE_LOCAL = 0,
		E_SERVER_TYPE_DEV = 1,
		E_SERVER_TYPE_TEST = 2,
		E_SERVER_TYPE_JUICE = 3,
		E_SERVER_TYPE_ARTIST = 4,
		E_SERVER_TYPE_DEMO_1 = 5,
		E_SERVER_TYPE_DEMO_2 = 6,
		E_SERVER_TYPE_COUNT = 7,
	}

	struct StartTime;

	struct SyncTimeMessage;

	struct SyncTimeClient;

	struct SyncTimeHost;

	struct StartTimeMessage;

	struct ReadyMessage;

	struct HostMigrationManager;

	struct ReliableMessage;

	struct SignalMessage;

	struct PlayerConnectionData;

	struct DSErrorToServerInterfaceError;

	struct DSErrorToServerInterfaceErrorTable;

	struct TestConnectionMessage;

	struct ConnectionStatusMessage;

	struct ServerInterface;

	struct PlayerData;

	struct PlayerMenuData;

	struct FakeNetworkConditions;

	struct CgsNetworkPlayerConstructParams;

	struct PlayerName;

	struct PlayerManagerDebugComponent;

	struct PlayerManagerConstructParams;

	struct PlayerManagerPrepareParams;

	struct VoIPClient;

	struct HeadsetStatusMessage;

	struct VoIPManager;

	struct UniquePlayerIDPS3;

	struct ServerInterfacePlayerParams;

	struct NetworkTexture;

	struct HostMigrationNetworkPlayerData;

	struct HostKeepAliveMessage;

	struct NewHostMessage;

	struct HostMigrationDebugComponent;

	struct NetworkManagerConstructParams;

	struct ServerInterfaceGameParams;

	struct NetworkTextureDXTCompress;

	struct ServerInterfaceUsersetParams;

	struct ServerInterfacePlayerInfoData;

	struct ServerInterfaceEndGameData;

	struct ServerInterfaceGameSearchParams;

	struct ServerInterfaceQuickJoinParams;

	struct ServerInterfaceCustomCommands;

	// CgsNetworkConstants.h:42
	const int32_t KI_USERNAME_LENGTH = 20;

	// CgsNetworkConstants.h:43
	const int32_t KI_PASSWORD_LENGTH = 20;

	// CgsNetworkConstants.h:44
	const int32_t KI_GAME_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:45
	const int32_t KI_USERSET_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:46
	const int32_t KI_USERSET_DESC_LENGTH = 68;

	// CgsNetworkConstants.h:47
	const int32_t KI_SESSION_NAME_LENGTH = 128;

	// CgsNetworkConstants.h:49
	const int32_t KI_BUDDIES_USERNAME_MAX_LENGTH = 20;

	// CgsNetworkConstants.h:50
	const int32_t KI_MAX_BUDDIES = 100;

	// CgsNetworkConstants.h:51
	const int32_t KI_MAX_PRESENCE_LENGTH = 100;

	// CgsNetworkConstants.h:52
	const int32_t KI_MAX_CHAT_MESSAGE_LENGTH = 200;

	// CgsNetworkConstants.h:54
	const int32_t KI_MAX_CATEGORIES = 10;

	// CgsNetworkConstants.h:55
	const int32_t KI_MAX_INDEXES = 10;

	// CgsNetworkConstants.h:56
	const int32_t KI_MAX_VARIATIONS = 66;

	// CgsNetworkConstants.h:57
	const int32_t KI_MAX_CAT_VAR_INDEX_COUNT = 66;

	// CgsNetworkConstants.h:61
	const int32_t KI_MAX_CATEGORY_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:62
	const int32_t KI_MAX_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:63
	const int32_t KI_MAX_VARIATION_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:64
	const int32_t KI_MAX_CAT_VAR_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:65
	const int32_t KI_MAX_TITLE_SIZE = 31;

	// CgsNetworkConstants.h:67
	const int32_t KI_MAX_COLUMN_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:68
	const int32_t KI_MAX_COLUMN_DATA_LENGTH = 31;

	// CgsNetworkConstants.h:70
	const int32_t KI_MAX_SCOREBOARD_PARAMS = 8;

	// CgsNetworkConstants.h:72
	const int32_t KI_MAX_TELEMETRY_DATA_SIZE = 16;

	// CgsNetworkConstants.h:74
	const int32_t KI_IPADDRESS_STRING_LENGTH = 17;

	// CgsNetworkConstants.h:75
	const AggressiveMoveData::NetworkPlayerID K_INVALID_PLAYER_ID = 4294967295;

	// CgsNetworkConstants.h:77
	const int32_t KI_MAX_PACKET_DATA_SIZE = 1000;

	// CgsNetworkConstants.h:81
	const int32_t KI_UDP_HEADER_SIZE = 28;

}

// CgsBitStream.h:26
namespace CgsNetwork {
	// CgsNetworkConstants.h:29
	namespace DirtySock {
		struct SceNpCommunicationId;

		struct SceNpOnlineId;

		struct SceNpId;

		struct SceNpOnlineName;

		struct SceNpAvatarUrl;

		struct SceNpUserInfo;

		struct SceNpMatchingRoomMember;

		struct DirtyAddrT;

		struct LobbyApiColorT;

		struct LobbyApiUserT;

		struct ConnApiCbInfoT;

		struct VoipRefT;

		struct NetGameLinkRefT;

		struct ConnApiClientListT;

		struct ConnApiRefT;

	}

	// CgsNetworkConstants.h:99
	enum EServerType {
		E_SERVER_TYPE_LOCAL = 0,
		E_SERVER_TYPE_DEV = 1,
		E_SERVER_TYPE_TEST = 2,
		E_SERVER_TYPE_JUICE = 3,
		E_SERVER_TYPE_ARTIST = 4,
		E_SERVER_TYPE_DEMO_1 = 5,
		E_SERVER_TYPE_DEMO_2 = 6,
		E_SERVER_TYPE_COUNT = 7,
	}

	// CgsNetworkConstants.h:42
	const int32_t KI_USERNAME_LENGTH = 20;

	// CgsNetworkConstants.h:43
	const int32_t KI_PASSWORD_LENGTH = 20;

	// CgsNetworkConstants.h:44
	const int32_t KI_GAME_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:45
	const int32_t KI_USERSET_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:46
	const int32_t KI_USERSET_DESC_LENGTH = 68;

	// CgsNetworkConstants.h:47
	const int32_t KI_SESSION_NAME_LENGTH = 128;

	// CgsNetworkConstants.h:49
	const int32_t KI_BUDDIES_USERNAME_MAX_LENGTH = 20;

	// CgsNetworkConstants.h:50
	const int32_t KI_MAX_BUDDIES = 100;

	// CgsNetworkConstants.h:51
	const int32_t KI_MAX_PRESENCE_LENGTH = 100;

	// CgsNetworkConstants.h:52
	const int32_t KI_MAX_CHAT_MESSAGE_LENGTH = 200;

	// CgsNetworkConstants.h:54
	const int32_t KI_MAX_CATEGORIES = 10;

	// CgsNetworkConstants.h:55
	const int32_t KI_MAX_INDEXES = 10;

	// CgsNetworkConstants.h:56
	const int32_t KI_MAX_VARIATIONS = 66;

	// CgsNetworkConstants.h:57
	const int32_t KI_MAX_CAT_VAR_INDEX_COUNT = 66;

	// CgsNetworkConstants.h:61
	const int32_t KI_MAX_CATEGORY_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:62
	const int32_t KI_MAX_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:63
	const int32_t KI_MAX_VARIATION_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:64
	const int32_t KI_MAX_CAT_VAR_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:65
	const int32_t KI_MAX_TITLE_SIZE = 31;

	// CgsNetworkConstants.h:67
	const int32_t KI_MAX_COLUMN_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:68
	const int32_t KI_MAX_COLUMN_DATA_LENGTH = 31;

	// CgsNetworkConstants.h:70
	const int32_t KI_MAX_SCOREBOARD_PARAMS = 8;

	// CgsNetworkConstants.h:72
	const int32_t KI_MAX_TELEMETRY_DATA_SIZE = 16;

	// CgsNetworkConstants.h:74
	const int32_t KI_IPADDRESS_STRING_LENGTH = 17;

	// CgsNetworkConstants.h:75
	const RoadRulesRecvData::NetworkPlayerID K_INVALID_PLAYER_ID = 4294967295;

	// CgsNetworkConstants.h:77
	const int32_t KI_MAX_PACKET_DATA_SIZE = 1000;

	// CgsNetworkConstants.h:81
	const int32_t KI_UDP_HEADER_SIZE = 28;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsNetworkConstants.h:29
	namespace DirtySock {
		struct SceNpCommunicationId;

		struct SceNpOnlineId;

		struct SceNpId;

		struct SceNpOnlineName;

		struct SceNpAvatarUrl;

		struct SceNpUserInfo;

		struct SceNpMatchingRoomMember;

		struct DirtyAddrT;

		struct LobbyApiColorT;

		struct LobbyApiUserT;

		struct LobbyApiMsgT;

		struct LobbyApiPlayerT;

		struct LobbyApiPartitionT;

		struct LobbyApiPlayT;

		struct ConnApiCbInfoT;

		struct VoipRefT;

		struct NetGameLinkRefT;

		struct ConnApiClientListT;

		struct ConnApiRefT;

		struct LobbyApiRefT;

	}

	// CgsNetworkConstants.h:99
	enum EServerType {
		E_SERVER_TYPE_LOCAL = 0,
		E_SERVER_TYPE_DEV = 1,
		E_SERVER_TYPE_TEST = 2,
		E_SERVER_TYPE_JUICE = 3,
		E_SERVER_TYPE_ARTIST = 4,
		E_SERVER_TYPE_DEMO_1 = 5,
		E_SERVER_TYPE_DEMO_2 = 6,
		E_SERVER_TYPE_COUNT = 7,
	}

	struct PlayerName;

	struct NetworkTexture;

	struct LobbyPrepareParams;

	struct ConnAPIPrepareParams;

	struct ServerInterfacePrepareParams;

	struct DSErrorToServerInterfaceError;

	struct DSErrorToServerInterfaceErrorTable;

	struct UniquePlayerIDPS3;

	struct ServerInterfacePlayerParams;

	struct VoIPClient;

	struct HeadsetStatusMessage;

	struct VoIPManager;

	struct ServerInterface;

	struct BuddyManagerBase;

	struct ReliableMessage;

	struct SignalMessage;

	struct EventDataKeys;

	struct PlayerConnectionData;

	struct TestConnectionMessage;

	struct ConnectionStatusMessage;

	struct PlayerData;

	struct PlayerMenuData;

	struct CgsNetworkPlayerConstructParams;

	struct PlayerManagerDebugComponent;

	struct PlayerManagerConstructParams;

	struct PlayerManagerPrepareParams;

	struct HostMigrationNetworkPlayerData;

	struct HostKeepAliveMessage;

	struct NewHostMessage;

	struct HostMigrationManager;

	struct HostMigrationDebugComponent;

	struct SyncTimeMessage;

	struct SyncTimeClient;

	struct SyncTimeHost;

	struct StartTime;

	struct StartTimeMessage;

	struct ReadyMessage;

	struct NetworkManagerConstructParams;

	struct VersionDisplay;

	struct DataIDToMemoryAddr;

	struct ServerInterfaceGameParams;

	struct NetworkTextureDXTCompress;

	// Declaration
	struct ServerInterfaceGamesPS3 {
	public:
		virtual ~ServerInterfaceGamesPS3();

	}

	struct ServerInterfaceUsersetParams;

	// Declaration
	struct ServerInterfaceGameResultsBase {
	public:
		virtual ~ServerInterfaceGameResultsBase();

	}

	struct ServerInterfaceQuickJoinParams;

	struct ServerInterfacePlayerInfoData;

	struct ServerInterfaceGameSearchParams;

	// Declaration
	struct ServerInterfaceCustomCommands {
	public:
		virtual ~ServerInterfaceCustomCommands();

	}

	// Declaration
	struct ServerInterfaceUsersetParamsBase {
	public:
		virtual ~ServerInterfaceUsersetParamsBase();

	}

	// Declaration
	struct ServerInterfaceGameSearchParamsBase {
	public:
		virtual ~ServerInterfaceGameSearchParamsBase();

	}

	// Declaration
	struct ServerInterfaceDirtySockPS3 {
	public:
		virtual ~ServerInterfaceDirtySockPS3();

	}

	// CgsNetworkConstants.h:42
	const int32_t KI_USERNAME_LENGTH = 20;

	// CgsNetworkConstants.h:43
	const int32_t KI_PASSWORD_LENGTH = 20;

	// CgsNetworkConstants.h:44
	const int32_t KI_GAME_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:45
	const int32_t KI_USERSET_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:46
	const int32_t KI_USERSET_DESC_LENGTH = 68;

	// CgsNetworkConstants.h:47
	const int32_t KI_SESSION_NAME_LENGTH = 128;

	// CgsNetworkConstants.h:49
	const int32_t KI_BUDDIES_USERNAME_MAX_LENGTH = 20;

	// CgsNetworkConstants.h:50
	const int32_t KI_MAX_BUDDIES = 100;

	// CgsNetworkConstants.h:51
	const int32_t KI_MAX_PRESENCE_LENGTH = 100;

	// CgsNetworkConstants.h:52
	const int32_t KI_MAX_CHAT_MESSAGE_LENGTH = 200;

	// CgsNetworkConstants.h:54
	const int32_t KI_MAX_CATEGORIES = 10;

	// CgsNetworkConstants.h:55
	const int32_t KI_MAX_INDEXES = 10;

	// CgsNetworkConstants.h:56
	const int32_t KI_MAX_VARIATIONS = 66;

	// CgsNetworkConstants.h:57
	const int32_t KI_MAX_CAT_VAR_INDEX_COUNT = 66;

	// CgsNetworkConstants.h:61
	const int32_t KI_MAX_CATEGORY_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:62
	const int32_t KI_MAX_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:63
	const int32_t KI_MAX_VARIATION_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:64
	const int32_t KI_MAX_CAT_VAR_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:65
	const int32_t KI_MAX_TITLE_SIZE = 31;

	// CgsNetworkConstants.h:67
	const int32_t KI_MAX_COLUMN_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:68
	const int32_t KI_MAX_COLUMN_DATA_LENGTH = 31;

	// CgsNetworkConstants.h:70
	const int32_t KI_MAX_SCOREBOARD_PARAMS = 8;

	// CgsNetworkConstants.h:72
	const int32_t KI_MAX_TELEMETRY_DATA_SIZE = 16;

	// CgsNetworkConstants.h:74
	const int32_t KI_IPADDRESS_STRING_LENGTH = 17;

	// CgsNetworkConstants.h:75
	const RoadRulesRecvData::NetworkPlayerID K_INVALID_PLAYER_ID = 4294967295;

	// CgsNetworkConstants.h:77
	const int32_t KI_MAX_PACKET_DATA_SIZE = 1000;

	// CgsNetworkConstants.h:81
	const int32_t KI_UDP_HEADER_SIZE = 28;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsNetworkConstants.h:29
	namespace DirtySock {
	}

	struct DSErrorToServerInterfaceError;

	struct DSErrorToServerInterfaceErrorTable;

	// CgsNetworkConstants.h:42
	const int32_t KI_USERNAME_LENGTH = 20;

	// CgsNetworkConstants.h:43
	const int32_t KI_PASSWORD_LENGTH = 20;

	// CgsNetworkConstants.h:44
	const int32_t KI_GAME_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:45
	const int32_t KI_USERSET_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:46
	const int32_t KI_USERSET_DESC_LENGTH = 68;

	// CgsNetworkConstants.h:47
	const int32_t KI_SESSION_NAME_LENGTH = 128;

	// CgsNetworkConstants.h:49
	const int32_t KI_BUDDIES_USERNAME_MAX_LENGTH = 20;

	// CgsNetworkConstants.h:50
	const int32_t KI_MAX_BUDDIES = 100;

	// CgsNetworkConstants.h:51
	const int32_t KI_MAX_PRESENCE_LENGTH = 100;

	// CgsNetworkConstants.h:52
	const int32_t KI_MAX_CHAT_MESSAGE_LENGTH = 200;

	// CgsNetworkConstants.h:54
	const int32_t KI_MAX_CATEGORIES = 10;

	// CgsNetworkConstants.h:55
	const int32_t KI_MAX_INDEXES = 10;

	// CgsNetworkConstants.h:56
	const int32_t KI_MAX_VARIATIONS = 66;

	// CgsNetworkConstants.h:57
	const int32_t KI_MAX_CAT_VAR_INDEX_COUNT = 66;

	// CgsNetworkConstants.h:61
	const int32_t KI_MAX_CATEGORY_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:62
	const int32_t KI_MAX_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:63
	const int32_t KI_MAX_VARIATION_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:64
	const int32_t KI_MAX_CAT_VAR_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:65
	const int32_t KI_MAX_TITLE_SIZE = 31;

	// CgsNetworkConstants.h:67
	const int32_t KI_MAX_COLUMN_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:68
	const int32_t KI_MAX_COLUMN_DATA_LENGTH = 31;

	// CgsNetworkConstants.h:70
	const int32_t KI_MAX_SCOREBOARD_PARAMS = 8;

	// CgsNetworkConstants.h:72
	const int32_t KI_MAX_TELEMETRY_DATA_SIZE = 16;

	// CgsNetworkConstants.h:74
	const int32_t KI_IPADDRESS_STRING_LENGTH = 17;

	// CgsNetworkConstants.h:75
	const GuiEventNetworkLaunching::NetworkPlayerID K_INVALID_PLAYER_ID = 4294967295;

	// CgsNetworkConstants.h:77
	const int32_t KI_MAX_PACKET_DATA_SIZE = 1000;

	// CgsNetworkConstants.h:81
	const int32_t KI_UDP_HEADER_SIZE = 28;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsNetworkConstants.h:29
	namespace DirtySock {
		struct SceNpOnlineId;

		struct SceNpId;

	}

	struct PlayerName;

	struct DSErrorToServerInterfaceError;

	struct DSErrorToServerInterfaceErrorTable;

	// CgsNetworkConstants.h:42
	const int32_t KI_USERNAME_LENGTH = 20;

	// CgsNetworkConstants.h:43
	const int32_t KI_PASSWORD_LENGTH = 20;

	// CgsNetworkConstants.h:44
	const int32_t KI_GAME_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:45
	const int32_t KI_USERSET_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:46
	const int32_t KI_USERSET_DESC_LENGTH = 68;

	// CgsNetworkConstants.h:47
	const int32_t KI_SESSION_NAME_LENGTH = 128;

	// CgsNetworkConstants.h:49
	const int32_t KI_BUDDIES_USERNAME_MAX_LENGTH = 20;

	// CgsNetworkConstants.h:50
	const int32_t KI_MAX_BUDDIES = 100;

	// CgsNetworkConstants.h:51
	const int32_t KI_MAX_PRESENCE_LENGTH = 100;

	// CgsNetworkConstants.h:52
	const int32_t KI_MAX_CHAT_MESSAGE_LENGTH = 200;

	// CgsNetworkConstants.h:54
	const int32_t KI_MAX_CATEGORIES = 10;

	// CgsNetworkConstants.h:55
	const int32_t KI_MAX_INDEXES = 10;

	// CgsNetworkConstants.h:56
	const int32_t KI_MAX_VARIATIONS = 66;

	// CgsNetworkConstants.h:57
	const int32_t KI_MAX_CAT_VAR_INDEX_COUNT = 66;

	// CgsNetworkConstants.h:61
	const int32_t KI_MAX_CATEGORY_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:62
	const int32_t KI_MAX_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:63
	const int32_t KI_MAX_VARIATION_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:64
	const int32_t KI_MAX_CAT_VAR_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:65
	const int32_t KI_MAX_TITLE_SIZE = 31;

	// CgsNetworkConstants.h:67
	const int32_t KI_MAX_COLUMN_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:68
	const int32_t KI_MAX_COLUMN_DATA_LENGTH = 31;

	// CgsNetworkConstants.h:70
	const int32_t KI_MAX_SCOREBOARD_PARAMS = 8;

	// CgsNetworkConstants.h:72
	const int32_t KI_MAX_TELEMETRY_DATA_SIZE = 16;

	// CgsNetworkConstants.h:74
	const int32_t KI_IPADDRESS_STRING_LENGTH = 17;

	// CgsNetworkConstants.h:75
	const RoadRulesRecvData::NetworkPlayerID K_INVALID_PLAYER_ID = 4294967295;

	// CgsNetworkConstants.h:77
	const int32_t KI_MAX_PACKET_DATA_SIZE = 1000;

	// CgsNetworkConstants.h:81
	const int32_t KI_UDP_HEADER_SIZE = 28;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsNetworkConstants.h:29
	namespace DirtySock {
		struct SceNpCommunicationId;

		struct SceNpOnlineId;

		struct SceNpId;

		struct SceNpOnlineName;

		struct SceNpAvatarUrl;

		struct SceNpUserInfo;

		struct SceNpMatchingRoomMember;

		struct DirtyAddrT;

		struct LobbyApiColorT;

		struct LobbyApiUserT;

		struct ConnApiCbInfoT;

		struct VoipRefT;

		struct NetGameLinkRefT;

		struct ConnApiClientListT;

		struct ConnApiRefT;

	}

	// CgsNetworkConstants.h:99
	enum EServerType {
		E_SERVER_TYPE_LOCAL = 0,
		E_SERVER_TYPE_DEV = 1,
		E_SERVER_TYPE_TEST = 2,
		E_SERVER_TYPE_JUICE = 3,
		E_SERVER_TYPE_ARTIST = 4,
		E_SERVER_TYPE_DEMO_1 = 5,
		E_SERVER_TYPE_DEMO_2 = 6,
		E_SERVER_TYPE_COUNT = 7,
	}

	struct PlayerName;

	struct DSErrorToServerInterfaceError;

	struct DSErrorToServerInterfaceErrorTable;

	struct UniquePlayerIDPS3;

	struct ServerInterfacePlayerParams;

	struct VoIPClient;

	struct HeadsetStatusMessage;

	struct VoIPManager;

	struct ServerInterface;

	struct BuddyManagerBase;

	struct NetworkTexture;

	struct ReliableMessage;

	struct SignalMessage;

	struct PlayerConnectionData;

	struct TestConnectionMessage;

	struct ConnectionStatusMessage;

	struct PlayerData;

	struct PlayerMenuData;

	struct NetworkPlayer;

	struct CgsNetworkPlayerConstructParams;

	struct PlayerManagerDebugComponent;

	struct PlayerManagerConstructParams;

	struct PlayerManagerPrepareParams;

	struct HostMigrationNetworkPlayerData;

	struct HostKeepAliveMessage;

	struct NewHostMessage;

	struct HostMigrationManager;

	struct HostMigrationDebugComponent;

	struct SyncTimeMessage;

	struct SyncTimeClient;

	struct SyncTimeHost;

	struct StartTime;

	struct StartTimeMessage;

	struct ReadyMessage;

	struct NetworkManagerConstructParams;

	struct VersionDisplay;

	struct ServerInterfaceGameParams;

	struct NetworkTextureDXTCompress;

	// CgsNetworkConstants.h:42
	const int32_t KI_USERNAME_LENGTH = 20;

	// CgsNetworkConstants.h:43
	const int32_t KI_PASSWORD_LENGTH = 20;

	// CgsNetworkConstants.h:44
	const int32_t KI_GAME_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:45
	const int32_t KI_USERSET_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:46
	const int32_t KI_USERSET_DESC_LENGTH = 68;

	// CgsNetworkConstants.h:47
	const int32_t KI_SESSION_NAME_LENGTH = 128;

	// CgsNetworkConstants.h:49
	const int32_t KI_BUDDIES_USERNAME_MAX_LENGTH = 20;

	// CgsNetworkConstants.h:50
	const int32_t KI_MAX_BUDDIES = 100;

	// CgsNetworkConstants.h:51
	const int32_t KI_MAX_PRESENCE_LENGTH = 100;

	// CgsNetworkConstants.h:52
	const int32_t KI_MAX_CHAT_MESSAGE_LENGTH = 200;

	// CgsNetworkConstants.h:54
	const int32_t KI_MAX_CATEGORIES = 10;

	// CgsNetworkConstants.h:55
	const int32_t KI_MAX_INDEXES = 10;

	// CgsNetworkConstants.h:56
	const int32_t KI_MAX_VARIATIONS = 66;

	// CgsNetworkConstants.h:57
	const int32_t KI_MAX_CAT_VAR_INDEX_COUNT = 66;

	// CgsNetworkConstants.h:61
	const int32_t KI_MAX_CATEGORY_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:62
	const int32_t KI_MAX_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:63
	const int32_t KI_MAX_VARIATION_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:64
	const int32_t KI_MAX_CAT_VAR_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:65
	const int32_t KI_MAX_TITLE_SIZE = 31;

	// CgsNetworkConstants.h:67
	const int32_t KI_MAX_COLUMN_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:68
	const int32_t KI_MAX_COLUMN_DATA_LENGTH = 31;

	// CgsNetworkConstants.h:70
	const int32_t KI_MAX_SCOREBOARD_PARAMS = 8;

	// CgsNetworkConstants.h:72
	const int32_t KI_MAX_TELEMETRY_DATA_SIZE = 16;

	// CgsNetworkConstants.h:74
	const int32_t KI_IPADDRESS_STRING_LENGTH = 17;

	// CgsNetworkConstants.h:75
	const RoadRulesRecvData::NetworkPlayerID K_INVALID_PLAYER_ID = 4294967295;

	// CgsNetworkConstants.h:77
	const int32_t KI_MAX_PACKET_DATA_SIZE = 1000;

	// CgsNetworkConstants.h:81
	const int32_t KI_UDP_HEADER_SIZE = 28;

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// CgsNetworkConstants.h:29
	namespace DirtySock {
		struct SceNpCommunicationId;

		struct SceNpOnlineId;

		struct SceNpId;

		struct SceNpOnlineName;

		struct SceNpAvatarUrl;

		struct SceNpUserInfo;

		struct SceNpMatchingRoomMember;

		struct DirtyAddrT;

		struct LobbyApiColorT;

		struct LobbyApiUserT;

		struct ConnApiCbInfoT;

		struct VoipRefT;

		struct NetGameLinkRefT;

		struct ConnApiClientListT;

		struct ConnApiRefT;

	}

	// CgsNetworkConstants.h:99
	enum EServerType {
		E_SERVER_TYPE_LOCAL = 0,
		E_SERVER_TYPE_DEV = 1,
		E_SERVER_TYPE_TEST = 2,
		E_SERVER_TYPE_JUICE = 3,
		E_SERVER_TYPE_ARTIST = 4,
		E_SERVER_TYPE_DEMO_1 = 5,
		E_SERVER_TYPE_DEMO_2 = 6,
		E_SERVER_TYPE_COUNT = 7,
	}

	struct PlayerName;

	struct NetworkTexture;

	// Declaration
	struct ServerInterfacePlayerInfoDataBase {
	public:
		virtual ~ServerInterfacePlayerInfoDataBase();

		ServerInterfacePlayerInfoDataBase();

	}

	struct DSErrorToServerInterfaceError;

	struct DSErrorToServerInterfaceErrorTable;

	struct UniquePlayerIDPS3;

	struct ServerInterfacePlayerParams;

	struct VoIPClient;

	// Declaration
	struct HeadsetStatusMessage {
	public:
		HeadsetStatusMessage();

	}

	struct VoIPManager;

	struct ServerInterface;

	// Declaration
	struct BuddyManagerBase {
	public:
		BuddyManagerBase();

	}

	// Declaration
	struct ReliableMessage {
	public:
		ReliableMessage();

	}

	// Declaration
	struct SignalMessage {
	public:
		SignalMessage();

	}

	struct PlayerConnectionData;

	// Declaration
	struct TestConnectionMessage {
	public:
		TestConnectionMessage();

	}

	// Declaration
	struct ConnectionStatusMessage {
	public:
		ConnectionStatusMessage();

	}

	struct PlayerData;

	// Declaration
	struct PlayerMenuData {
	public:
		PlayerMenuData();

	}

	// Declaration
	struct NetworkPlayer {
	public:
		NetworkPlayer();

	}

	struct CgsNetworkPlayerConstructParams;

	// Declaration
	struct PlayerManagerDebugComponent {
	public:
		PlayerManagerDebugComponent();

	}

	struct PlayerManagerConstructParams;

	struct PlayerManagerPrepareParams;

	struct HostMigrationNetworkPlayerData;

	// Declaration
	struct HostKeepAliveMessage {
	public:
		HostKeepAliveMessage();

	}

	// Declaration
	struct NewHostMessage {
	public:
		NewHostMessage();

	}

	struct HostMigrationManager;

	// Declaration
	struct HostMigrationDebugComponent {
	public:
		HostMigrationDebugComponent();

	}

	// Declaration
	struct SyncTimeMessage {
	public:
		SyncTimeMessage();

	}

	struct SyncTimeClient;

	struct SyncTimeHost;

	struct StartTime;

	// Declaration
	struct StartTimeMessage {
	public:
		StartTimeMessage();

	}

	struct ReadyMessage;

	struct NetworkManagerConstructParams;

	// Declaration
	struct VersionDisplay {
	public:
		VersionDisplay();

	}

	struct DataIDToMemoryAddr;

	struct ServerInterfaceGameParams;

	struct NetworkTextureDXTCompress;

	struct ServerInterfacePlayerInfoData;

	// Declaration
	struct ServerInterfacePlayerParamsBase {
	public:
		virtual ~ServerInterfacePlayerParamsBase();

		ServerInterfacePlayerParamsBase();

	}

	struct ServerInterfaceGameSearchParams;

	// Declaration
	struct ServerInterfaceGameSearchParamsBase {
	public:
		virtual ~ServerInterfaceGameSearchParamsBase();

		ServerInterfaceGameSearchParamsBase();

	}

	// Declaration
	struct ServerInterfaceDirtySockPS3 {
	public:
		virtual ~ServerInterfaceDirtySockPS3();

		ServerInterfaceDirtySockPS3();

	}

	// Declaration
	struct ServerInterfaceCustomCommands {
	public:
		virtual ~ServerInterfaceCustomCommands();

		ServerInterfaceCustomCommands();

	}

	// Declaration
	struct ServerInterfaceGamesPS3 {
	public:
		virtual ~ServerInterfaceGamesPS3();

		ServerInterfaceGamesPS3();

	}

	// Declaration
	struct ServerInterfaceGameResultsBase {
	public:
		ServerInterfaceGameResultsBase();

		virtual ~ServerInterfaceGameResultsBase();

	}

	// Declaration
	struct PingMessage {
	public:
		PingMessage();

	}

	// Declaration
	struct PingReplyMessage {
	public:
		PingReplyMessage();

	}

	// CgsNetworkConstants.h:42
	const int32_t KI_USERNAME_LENGTH = 20;

	// CgsNetworkConstants.h:43
	const int32_t KI_PASSWORD_LENGTH = 20;

	// CgsNetworkConstants.h:44
	const int32_t KI_GAME_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:45
	const int32_t KI_USERSET_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:46
	const int32_t KI_USERSET_DESC_LENGTH = 68;

	// CgsNetworkConstants.h:47
	const int32_t KI_SESSION_NAME_LENGTH = 128;

	// CgsNetworkConstants.h:49
	const int32_t KI_BUDDIES_USERNAME_MAX_LENGTH = 20;

	// CgsNetworkConstants.h:50
	const int32_t KI_MAX_BUDDIES = 100;

	// CgsNetworkConstants.h:51
	const int32_t KI_MAX_PRESENCE_LENGTH = 100;

	// CgsNetworkConstants.h:52
	const int32_t KI_MAX_CHAT_MESSAGE_LENGTH = 200;

	// CgsNetworkConstants.h:54
	const int32_t KI_MAX_CATEGORIES = 10;

	// CgsNetworkConstants.h:55
	const int32_t KI_MAX_INDEXES = 10;

	// CgsNetworkConstants.h:56
	const int32_t KI_MAX_VARIATIONS = 66;

	// CgsNetworkConstants.h:57
	const int32_t KI_MAX_CAT_VAR_INDEX_COUNT = 66;

	// CgsNetworkConstants.h:61
	const int32_t KI_MAX_CATEGORY_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:62
	const int32_t KI_MAX_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:63
	const int32_t KI_MAX_VARIATION_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:64
	const int32_t KI_MAX_CAT_VAR_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:65
	const int32_t KI_MAX_TITLE_SIZE = 31;

	// CgsNetworkConstants.h:67
	const int32_t KI_MAX_COLUMN_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:68
	const int32_t KI_MAX_COLUMN_DATA_LENGTH = 31;

	// CgsNetworkConstants.h:70
	const int32_t KI_MAX_SCOREBOARD_PARAMS = 8;

	// CgsNetworkConstants.h:72
	const int32_t KI_MAX_TELEMETRY_DATA_SIZE = 16;

	// CgsNetworkConstants.h:74
	const int32_t KI_IPADDRESS_STRING_LENGTH = 17;

	// CgsNetworkConstants.h:75
	const RoadRulesRecvData::NetworkPlayerID K_INVALID_PLAYER_ID = 4294967295;

	// CgsNetworkConstants.h:77
	const int32_t KI_MAX_PACKET_DATA_SIZE = 1000;

	// CgsNetworkConstants.h:81
	const int32_t KI_UDP_HEADER_SIZE = 28;

}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsNetworkConstants.h:29
	namespace DirtySock {
		struct BuddyApiMsgT;

		struct SceNpCommunicationId;

		struct SceNpOnlineId;

		struct SceNpId;

		struct SceNpOnlineName;

		struct SceNpAvatarUrl;

		struct SceNpUserInfo;

		struct DirtyAddrT;

		struct TelemetryApiEventT;

		struct NetGamePacketHeadT;

		struct NetGamePacketT;

		struct NetGameMaxPacketT;

		struct LobbyApiColorT;

		struct LobbyApiUserT;

		struct LobbyApiMsgT;

		struct LobbyApiPlayerT;

		struct LobbyApiPartitionT;

		struct LobbyApiPlayT;

		struct LobbyApiUserSetMemberT;

		struct LobbyApiUserSetT;

		struct ConnApiCbInfoT;

		struct NetGameLinkHistT;

		struct NetGameLinkStatT;

		struct NetGameLinkRefT;

		struct HostentT;

		struct ConnApiClientListT;

		struct ConnApiRefT;

		struct VoipRefT;

		struct LobbyLoginAlertT;

		struct NetGameDistStreamInpT;

		struct NetGameDistStreamT;

		struct NetGameDistRefT;

		struct ConnApiUserInfoT;

		struct ConnApiConnInfoT;

		struct ConnApiClientT;

		struct NetGameUtilRefT;

		struct GameManagerCBDataT;

		struct GameManagerRefT;

		struct LobbyStatbookRowInfoT;

		struct ProtoUpnpRefT;

		struct HLBApiRefT;

		struct HLBBudT;

		struct PingManagerRefT;

		struct LobbyApiRefT;

		struct DispListRef;

		struct LobbyRankT;

		struct TelemetryApiRefT;

		struct ProtoHttpRefT;

		struct LobbyFindUserT;

		struct LobbyStatbookT;

		struct LobbySettingRefT;

		struct LobbyLoginRefT;

	}

	// CgsNetworkConstants.h:90
	enum EConversionFlags {
		E_FLAGS_GAMESHARED = 0,
		E_FLAGS_DIRTYSOCK = 1,
		E_FLAGS_COUNT = 2,
	}

	// CgsNetworkConstants.h:99
	enum EServerType {
		E_SERVER_TYPE_LOCAL = 0,
		E_SERVER_TYPE_DEV = 1,
		E_SERVER_TYPE_TEST = 2,
		E_SERVER_TYPE_JUICE = 3,
		E_SERVER_TYPE_ARTIST = 4,
		E_SERVER_TYPE_DEMO_1 = 5,
		E_SERVER_TYPE_DEMO_2 = 6,
		E_SERVER_TYPE_COUNT = 7,
	}

	// Declaration
	struct MessageWithPlayerIDs {
		// CgsNetworkConstants.h:38
		typedef int32_t NetworkPlayerID;

	}

	// CgsNetworkConstants.h:42
	const int32_t KI_USERNAME_LENGTH = 20;

	// CgsNetworkConstants.h:43
	const int32_t KI_PASSWORD_LENGTH = 20;

	// CgsNetworkConstants.h:44
	const int32_t KI_GAME_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:45
	const int32_t KI_USERSET_NAME_LENGTH = 36;

	// CgsNetworkConstants.h:46
	const int32_t KI_USERSET_DESC_LENGTH = 68;

	// CgsNetworkConstants.h:47
	const int32_t KI_SESSION_NAME_LENGTH = 128;

	// CgsNetworkConstants.h:49
	const int32_t KI_BUDDIES_USERNAME_MAX_LENGTH = 20;

	// CgsNetworkConstants.h:50
	const int32_t KI_MAX_BUDDIES = 100;

	// CgsNetworkConstants.h:51
	const int32_t KI_MAX_PRESENCE_LENGTH = 100;

	// CgsNetworkConstants.h:52
	const int32_t KI_MAX_CHAT_MESSAGE_LENGTH = 200;

	// CgsNetworkConstants.h:54
	const int32_t KI_MAX_CATEGORIES = 10;

	// CgsNetworkConstants.h:55
	const int32_t KI_MAX_INDEXES = 10;

	// CgsNetworkConstants.h:56
	const int32_t KI_MAX_VARIATIONS = 66;

	// CgsNetworkConstants.h:57
	const int32_t KI_MAX_CAT_VAR_INDEX_COUNT = 66;

	// CgsNetworkConstants.h:61
	const int32_t KI_MAX_CATEGORY_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:62
	const int32_t KI_MAX_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:63
	const int32_t KI_MAX_VARIATION_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:64
	const int32_t KI_MAX_CAT_VAR_INDEX_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:65
	const int32_t KI_MAX_TITLE_SIZE = 31;

	// CgsNetworkConstants.h:67
	const int32_t KI_MAX_COLUMN_NAME_LENGTH = 31;

	// CgsNetworkConstants.h:68
	const int32_t KI_MAX_COLUMN_DATA_LENGTH = 31;

	// CgsNetworkConstants.h:70
	const int32_t KI_MAX_SCOREBOARD_PARAMS = 8;

	// CgsNetworkConstants.h:72
	const int32_t KI_MAX_TELEMETRY_DATA_SIZE = 16;

	// CgsNetworkConstants.h:74
	const int32_t KI_IPADDRESS_STRING_LENGTH = 17;

	// CgsNetworkConstants.h:75
	const CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID K_INVALID_PLAYER_ID = 4294967295;

	// CgsNetworkConstants.h:77
	const int32_t KI_MAX_PACKET_DATA_SIZE = 1000;

	// CgsNetworkConstants.h:81
	const int32_t KI_UDP_HEADER_SIZE = 28;

}

