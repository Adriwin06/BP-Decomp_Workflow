// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsNetworkConstants.h:29
	namespace DirtySock {
		// lobbygamemanager.h:52
		enum GameManagerCBTypeE {
			GAMEMANAGER_CBTYPE_PRE_ADD = 0,
			GAMEMANAGER_CBTYPE_POST_ADD = 1,
			GAMEMANAGER_CBTYPE_PRE_DEL = 2,
			GAMEMANAGER_CBTYPE_POST_DEL = 3,
			GAMEMANAGER_CBTYPE_PLAYINFO = 4,
		}

	}

}

// lobbygamemanager.h:63
struct CgsNetwork::DirtySock::GameManagerCBDataT {
	// lobbygamemanager.h:59
	typedef CgsNetwork::DirtySock::GameManagerCBTypeE GameManagerCBTypeE;

	// lobbygamemanager.h:64
	GameManagerCBDataT::GameManagerCBTypeE eType;

	// lobbygamemanager.h:65
	int32_t iData;

	// lobbygamemanager.h:66
	const char * pData;

}

// lobbygamemanager.h:49
typedef GameManagerRefT GameManagerRefT;

// lobbygamemanager.h:49
struct GameManagerRefT {
	// lobbygamemanager.c:47
	LobbyApiRefT * pLobbyApi;

	// lobbygamemanager.c:50
	ConnApiRefT * pConnApi;

	// lobbygamemanager.c:53
	int32_t iMemGroup;

	// lobbygamemanager.c:56
	int32_t iLobbyEventCb;

	// lobbygamemanager.c:59
	int32_t iDiscEventCb;

	// lobbygamemanager.c:62
	uint16_t uOldGamePort;

	// lobbygamemanager.c:65
	uint16_t uOldVoipPort;

	// lobbygamemanager.c:68
	LobbyApiPlayT LastPlay;

	// lobbygamemanager.c:71
	LobbyApiPlayT CurrPlay;

	// lobbygamemanager.c:74
	uint32_t uGameServerAddr;

	// lobbygamemanager.c:77
	ConnApiGameServModeE eGameServMode;

	// lobbygamemanager.c:80
	uint32_t uGameServConnMode;

	// lobbygamemanager.c:83
	uint32_t uGameServFallback;

	// lobbygamemanager.c:86
	GameManagerConnApiCallbackT ConnApiCallback;

	// lobbygamemanager.c:89
	char[20] strSelfName;

	// lobbygamemanager.c:101
	enumeration  eState;

	// lobbygamemanager.c:104
	GameManagerCBDataT CBData;

	// lobbygamemanager.c:107
	GameManagerCallbackT * pCBFunction;

	// lobbygamemanager.c:110
	void * pCBUserData;

	// lobbygamemanager.c:113
	uint8_t bAutoUpdate;

	// lobbygamemanager.c:116
	uint8_t bHostMigration;

	// lobbygamemanager.c:119
	uint8_t bGPSGameServ;

	// lobbygamemanager.c:122
	uint8_t bInternalServer;

	// lobbygamemanager.c:125
	int8_t iLocked;

	// lobbygamemanager.c:127
	uint8_t bStarted;

}

// lobbygamemanager.h:53
enum GameManagerCBTypeE {
	GAMEMANAGER_CBTYPE_PRE_ADD = 0,
	GAMEMANAGER_CBTYPE_POST_ADD = 1,
	GAMEMANAGER_CBTYPE_PRE_DEL = 2,
	GAMEMANAGER_CBTYPE_POST_DEL = 3,
	GAMEMANAGER_CBTYPE_PLAYINFO = 4,
}

// lobbygamemanager.h:59
typedef GameManagerCBTypeE GameManagerCBTypeE;

// lobbygamemanager.h:63
struct GameManagerCBDataT {
	// lobbygamemanager.h:64
	GameManagerCBTypeE eType;

	// lobbygamemanager.h:65
	int32_t iData;

	// lobbygamemanager.h:66
	const char * pData;

}

// lobbygamemanager.h:67
typedef GameManagerCBDataT GameManagerCBDataT;

// lobbygamemanager.h:70
typedef void (GameManagerRefT *, GameManagerCBDataT *, void *) GameManagerCallbackT;

