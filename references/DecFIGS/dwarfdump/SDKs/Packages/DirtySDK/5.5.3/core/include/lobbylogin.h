// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsNetworkConstants.h:29
	namespace DirtySock {
		// lobbylogin.h:46
		enum LobbyLoginAlertE {
			LOBBYLOGIN_ALERT_ERROR = 0,
			LOBBYLOGIN_ALERT_DB_ERROR = 1,
			LOBBYLOGIN_ALERT_FILTER = 2,
			LOBBYLOGIN_ALERT_INV_MASTER = 3,
			LOBBYLOGIN_ALERT_MISSING_PARAM = 4,
			LOBBYLOGIN_ALERT_ALREADY_LOGGED_IN = 5,
			LOBBYLOGIN_ALERT_LOCKED = 6,
			LOBBYLOGIN_ALERT_BANNED = 7,
			LOBBYLOGIN_ALERT_DISABLED = 8,
			LOBBYLOGIN_ALERT_PENDING = 9,
			LOBBYLOGIN_ALERT_RESERVED = 10,
			LOBBYLOGIN_ALERT_CONNTIMEOUT = 11,
			LOBBYLOGIN_ALERT_SERVERDOWN = 12,
			LOBBYLOGIN_ALERT_DISC = 13,
			LOBBYLOGIN_ALERT_CHEAT_DEVICE = 14,
			LOBBYLOGIN_ALERT_DASHBOARD = 15,
			LOBBYLOGIN_ALERT_PERSONA_SET = 16,
			LOBBYLOGIN_ALERT_INV_PASS = 17,
			LOBBYLOGIN_ALERT_INV_REGKEY = 18,
			LOBBYLOGIN_ALERT_DUPLICATE = 19,
			LOBBYLOGIN_ALERT_INV_MAIL = 20,
			LOBBYLOGIN_ALERT_INV_PMAIL = 21,
			LOBBYLOGIN_ALERT_TOO_YOUNG = 22,
			LOBBYLOGIN_ALERT_SENT_MAIL = 23,
			LOBBYLOGIN_ALERT_TOO_MANY = 24,
			LOBBYLOGIN_ALERT_INC_PASS = 25,
			LOBBYLOGIN_ALERT_DEACTIVATED_EMAIL = 26,
			LOBBYLOGIN_NUMALERTS = 27,
		}

		// lobbylogin.h:83
		enum LobbyLoginContextE {
			LOBBYLOGIN_CONTEXT_INVALID = -1,
			LOBBYLOGIN_CONTEXT_OFFLINE = 0,
			LOBBYLOGIN_CONTEXT_CONNECT = 1,
			LOBBYLOGIN_CONTEXT_CREATE = 2,
			LOBBYLOGIN_CONTEXT_LOGIN = 3,
			LOBBYLOGIN_CONTEXT_DUPACCT = 4,
			LOBBYLOGIN_CONTEXT_TOS = 5,
			LOBBYLOGIN_CONTEXT_SHARE = 6,
			LOBBYLOGIN_CONTEXT_PMAIL = 7,
			LOBBYLOGIN_CONTEXT_INVREGKEY = 8,
			LOBBYLOGIN_CONTEXT_SELPERS = 9,
			LOBBYLOGIN_CONTEXT_DEACTIVATED = 10,
			LOBBYLOGIN_CONTEXT_NUCLEUS_WELCOME = 11,
			LOBBYLOGIN_CONTEXT_DONE = 12,
			LOBBYLOGIN_NUMCONTEXTS = 13,
			LOBBYLOGIN_CONTEXT_PREVIOUS = 4096,
		}

		// lobbylogin.h:106
		enum LobbyLoginStatusE {
			LOBBYLOGIN_STATUS_IDLE = 0,
			LOBBYLOGIN_STATUS_NETWORK = 1,
			LOBBYLOGIN_STATUS_ALERT = 2,
			LOBBYLOGIN_STATUS_GOTO = 3,
			LOBBYLOGIN_STATUS_OFFLINE = 4,
			LOBBYLOGIN_NUMSTATUS = 5,
		}

	}

}

// lobbylogin.h:143
struct CgsNetwork::DirtySock::LobbyLoginAlertT {
	// lobbylogin.h:144
	int32_t uFlags;

	// lobbylogin.h:145
	const char * pTitle;

	// lobbylogin.h:146
	const char * pBody;

	// lobbylogin.h:147
	const char * pFooter;

}

// lobbylogin.h:41
enum LobbyLoginNameListTypeE {
	LOBBYLOGIN_LISTTYPE_PERSONA = 0,
}

// lobbylogin.h:43
typedef LobbyLoginNameListTypeE LobbyLoginNameListTypeE;

// lobbylogin.h:47
enum LobbyLoginAlertE {
	LOBBYLOGIN_ALERT_ERROR = 0,
	LOBBYLOGIN_ALERT_DB_ERROR = 1,
	LOBBYLOGIN_ALERT_FILTER = 2,
	LOBBYLOGIN_ALERT_INV_MASTER = 3,
	LOBBYLOGIN_ALERT_MISSING_PARAM = 4,
	LOBBYLOGIN_ALERT_ALREADY_LOGGED_IN = 5,
	LOBBYLOGIN_ALERT_LOCKED = 6,
	LOBBYLOGIN_ALERT_BANNED = 7,
	LOBBYLOGIN_ALERT_DISABLED = 8,
	LOBBYLOGIN_ALERT_PENDING = 9,
	LOBBYLOGIN_ALERT_RESERVED = 10,
	LOBBYLOGIN_ALERT_CONNTIMEOUT = 11,
	LOBBYLOGIN_ALERT_SERVERDOWN = 12,
	LOBBYLOGIN_ALERT_DISC = 13,
	LOBBYLOGIN_ALERT_CHEAT_DEVICE = 14,
	LOBBYLOGIN_ALERT_DASHBOARD = 15,
	LOBBYLOGIN_ALERT_PERSONA_SET = 16,
	LOBBYLOGIN_ALERT_INV_PASS = 17,
	LOBBYLOGIN_ALERT_INV_REGKEY = 18,
	LOBBYLOGIN_ALERT_DUPLICATE = 19,
	LOBBYLOGIN_ALERT_INV_MAIL = 20,
	LOBBYLOGIN_ALERT_INV_PMAIL = 21,
	LOBBYLOGIN_ALERT_TOO_YOUNG = 22,
	LOBBYLOGIN_ALERT_SENT_MAIL = 23,
	LOBBYLOGIN_ALERT_TOO_MANY = 24,
	LOBBYLOGIN_ALERT_INC_PASS = 25,
	LOBBYLOGIN_ALERT_DEACTIVATED_EMAIL = 26,
	LOBBYLOGIN_NUMALERTS = 27,
}

// lobbylogin.h:80
typedef LobbyLoginAlertE LobbyLoginAlertE;

// lobbylogin.h:84
enum LobbyLoginContextE {
	LOBBYLOGIN_CONTEXT_INVALID = -1,
	LOBBYLOGIN_CONTEXT_OFFLINE = 0,
	LOBBYLOGIN_CONTEXT_CONNECT = 1,
	LOBBYLOGIN_CONTEXT_CREATE = 2,
	LOBBYLOGIN_CONTEXT_LOGIN = 3,
	LOBBYLOGIN_CONTEXT_DUPACCT = 4,
	LOBBYLOGIN_CONTEXT_TOS = 5,
	LOBBYLOGIN_CONTEXT_SHARE = 6,
	LOBBYLOGIN_CONTEXT_PMAIL = 7,
	LOBBYLOGIN_CONTEXT_INVREGKEY = 8,
	LOBBYLOGIN_CONTEXT_SELPERS = 9,
	LOBBYLOGIN_CONTEXT_DEACTIVATED = 10,
	LOBBYLOGIN_CONTEXT_NUCLEUS_WELCOME = 11,
	LOBBYLOGIN_CONTEXT_DONE = 12,
	LOBBYLOGIN_NUMCONTEXTS = 13,
	LOBBYLOGIN_CONTEXT_PREVIOUS = 4096,
}

// lobbylogin.h:103
typedef LobbyLoginContextE LobbyLoginContextE;

// lobbylogin.h:107
enum LobbyLoginStatusE {
	LOBBYLOGIN_STATUS_IDLE = 0,
	LOBBYLOGIN_STATUS_NETWORK = 1,
	LOBBYLOGIN_STATUS_ALERT = 2,
	LOBBYLOGIN_STATUS_GOTO = 3,
	LOBBYLOGIN_STATUS_OFFLINE = 4,
	LOBBYLOGIN_NUMSTATUS = 5,
}

// lobbylogin.h:115
typedef LobbyLoginStatusE LobbyLoginStatusE;

// lobbylogin.h:136
struct LobbyLoginNameListT {
	// lobbylogin.h:137
	char[4][32] strNames;

	// lobbylogin.h:138
	int32_t iNumNames;

}

// lobbylogin.h:139
typedef LobbyLoginNameListT LobbyLoginNameListT;

// lobbylogin.h:143
struct LobbyLoginAlertT {
	// lobbylogin.h:144
	int32_t uFlags;

	// lobbylogin.h:145
	const char * pTitle;

	// lobbylogin.h:146
	const char * pBody;

	// lobbylogin.h:147
	const char * pFooter;

}

// lobbylogin.h:148
typedef LobbyLoginAlertT LobbyLoginAlertT;

// lobbylogin.h:151
typedef LobbyLoginRefT LobbyLoginRefT;

// lobbylogin.h:151
struct LobbyLoginRefT {
	// lobbylogin.c:86
	LobbyApiRefT * pLobbyApi;

	// lobbylogin.c:87
	int32_t iMemGroup;

	// lobbylogin.c:88
	const LobbyLoginAlertT * pAlertList;

	// lobbylogin.c:90
	int32_t iConnCbID;

	// lobbylogin.c:91
	int32_t iIdleCbID;

	// lobbylogin.c:95
	LobbyLoginAlertT DynamicAlert;

	// lobbylogin.c:97
	LobbyLoginContextE[16] eContextStack;

	// lobbylogin.c:98
	int32_t iContextDepth;

	// lobbylogin.c:100
	LobbyLoginStatusE eCurStatus;

	// lobbylogin.c:101
	LobbyLoginContextE eAlertContext;

	// lobbylogin.c:103
	int32_t iRequestID;

	// lobbylogin.c:105
	LobbyLoginContextE eCallbackContext;

	// lobbylogin.c:106
	LobbyLoginCallbackT * pCallbackProc;

	// lobbylogin.c:107
	void * pCallbackData;

	// lobbylogin.c:109
	LobbyLoginNameListT Personas;

	// lobbylogin.c:110
	LobbyLoginNameListT AutoInfo;

	// lobbylogin.c:112
	int32_t iDelPersona;

	// lobbylogin.c:114
	uint32_t uLastKind;

	// lobbylogin.c:115
	uint32_t uLastCode;

	// lobbylogin.c:116
	char[1024] strRespBuf;

	// lobbylogin.c:118
	char[20] strUser;

	// lobbylogin.c:119
	char[20] strPers;

	// lobbylogin.c:121
	char[128] strRetnBuf;

	// lobbylogin.c:122
	char[1024] strTagfBuf;

	// lobbylogin.c:123
	uint8_t[33] strCheatResp;

	// lobbylogin.c:124
	char[20] strAutoPassword;

	// lobbylogin.c:125
	char[64] strDeacEmail;

	// lobbylogin.c:126
	char[16] strSpam;

	// lobbylogin.c:127
	uint8_t bAutoLogin;

	// lobbylogin.c:128
	uint8_t bMultiPers;

	// lobbylogin.c:129
	uint8_t bNucleusMessage;

	// lobbylogin.c:130
	uint8_t bAddNucleusMessage;

	// lobbylogin.c:131
	uint8_t bIncopleteAccount;

	// lobbylogin.c:132
	uint8_t bFailBillingServers;

	// lobbylogin.c:134
	uint8_t bAutoCreate;

}

// lobbylogin.h:154
typedef void (LobbyLoginRefT *, LobbyLoginContextE, LobbyLoginStatusE, void *) LobbyLoginCallbackT;

