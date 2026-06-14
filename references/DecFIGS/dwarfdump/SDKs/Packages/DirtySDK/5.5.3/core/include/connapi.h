// connapi.h:85
struct CgsNetwork::DirtySock::ConnApiCbInfoT {
	// connapi.h:86
	int32_t iClientId;

	// connapi.h:87
	uint32_t eType;

	// connapi.h:88
	uint32_t eOldStatus;

	// connapi.h:89
	uint32_t eNewStatus;

}

// connapi.h:94
struct CgsNetwork::DirtySock::ConnApiUserInfoT {
	// connapi.h:95
	uint32_t uAddr;

	// connapi.h:96
	uint32_t uLocalAddr;

	// connapi.h:97
	uint32_t uClientId;

	// connapi.h:98
	uint16_t uLocalGamePort;

	// connapi.h:99
	uint16_t uLocalVoipPort;

	// connapi.h:100
	LobbyApiUserT::DirtyAddrT DirtyAddr;

	// connapi.h:101
	char[32] strName;

	// connapi.h:102
	char[32] strUniqueId;

}

// connapi.h:107
struct CgsNetwork::DirtySock::ConnApiConnInfoT {
	// connapi.h:108
	uint16_t uLocalPort;

	// connapi.h:109
	uint16_t uMnglPort;

	// connapi.h:110
	uint8_t bDemangling;

	// connapi.h:111
	uint8_t uConnFlags;

	// connapi.h:112
	uint8_t eStatus;

	// connapi.h:113
	uint8_t uPeerConnFailed;

}

// connapi.h:118
struct CgsNetwork::DirtySock::ConnApiClientT {
	// connapi.h:103
	typedef ConnApiUserInfoT ConnApiUserInfoT;

	// connapi.h:119
	ConnApiClientT::ConnApiUserInfoT UserInfo;

	// connapi.h:114
	typedef ConnApiConnInfoT ConnApiConnInfoT;

	// connapi.h:120
	ConnApiClientT::ConnApiConnInfoT GameInfo;

	// connapi.h:121
	ConnApiClientT::ConnApiConnInfoT VoipInfo;

	// netgameutil.h:61
	typedef CgsNetwork::DirtySock::NetGameUtilRefT NetGameUtilRefT;

	// connapi.h:122
	ConnApiClientT::NetGameUtilRefT * pGameUtilRef;

	// connapi.h:123
	ConnectionDataPS3::NetGameLinkRefT * pGameLinkRef;

	// connapi.h:124
	NetGameDistStreamT::NetGameDistRefT * pGameDistRef;

	// connapi.h:125
	int32_t iConnStart;

	// connapi.h:126
	int32_t iTunnelId;

	// connapi.h:127
	int16_t iVoipConnId;

	// connapi.h:128
	uint16_t uConnFlags;

	// connapi.h:129
	uint16_t uFlags;

	// connapi.h:130
	uint16_t _pad;

}

// connapi.h:135
struct CgsNetwork::DirtySock::ConnApiClientListT {
	// connapi.h:136
	int32_t iNumClients;

	// connapi.h:137
	int32_t iMaxClients;

	// connapi.h:131
	typedef ConnApiClientT ConnApiClientT;

	// connapi.h:138
	ConnApiClientListT::ConnApiClientT[1] Clients;

}

// connapi.h:50
enum ConnApiGameServModeE {
	CONNAPI_GAMESERV_BROADCAST = 0,
	CONNAPI_GAMESERV_PEERCONN = 1,
}

// connapi.h:53
typedef ConnApiGameServModeE ConnApiGameServModeE;

// connapi.h:57
enum ConnApiCbTypeE {
	CONNAPI_CBTYPE_GAMEEVENT = 0,
	CONNAPI_CBTYPE_VOIPEVENT = 1,
	CONNAPI_CBTYPE_SESSEVENT = 2,
	CONNAPI_NUMCBTYPES = 3,
}

// connapi.h:63
typedef ConnApiCbTypeE ConnApiCbTypeE;

// connapi.h:67
enum ConnApiConnStatusE {
	CONNAPI_STATUS_INIT = 0,
	CONNAPI_STATUS_CONN = 1,
	CONNAPI_STATUS_MNGL = 2,
	CONNAPI_STATUS_ACTV = 3,
	CONNAPI_STATUS_CLSE = 4,
	CONNAPI_STATUS_DISC = 5,
	CONNAPI_STATUS_DEST = 6,
	CONNAPI_NUMSTATUSTYPES = 7,
}

// connapi.h:77
typedef ConnApiConnStatusE ConnApiConnStatusE;

// connapi.h:85
struct ConnApiCbInfoT {
	// connapi.h:86
	int32_t iClientId;

	// connapi.h:87
	uint32_t eType;

	// connapi.h:88
	uint32_t eOldStatus;

	// connapi.h:89
	uint32_t eNewStatus;

}

// connapi.h:90
typedef ConnApiCbInfoT ConnApiCbInfoT;

// connapi.h:94
struct ConnApiUserInfoT {
	// connapi.h:95
	uint32_t uAddr;

	// connapi.h:96
	uint32_t uLocalAddr;

	// connapi.h:97
	uint32_t uClientId;

	// connapi.h:98
	uint16_t uLocalGamePort;

	// connapi.h:99
	uint16_t uLocalVoipPort;

	// connapi.h:100
	DirtyAddrT DirtyAddr;

	// connapi.h:101
	char[32] strName;

	// connapi.h:102
	char[32] strUniqueId;

}

// connapi.h:103
typedef ConnApiUserInfoT ConnApiUserInfoT;

// connapi.h:107
struct ConnApiConnInfoT {
	// connapi.h:108
	uint16_t uLocalPort;

	// connapi.h:109
	uint16_t uMnglPort;

	// connapi.h:110
	uint8_t bDemangling;

	// connapi.h:111
	uint8_t uConnFlags;

	// connapi.h:112
	uint8_t eStatus;

	// connapi.h:113
	uint8_t uPeerConnFailed;

}

// connapi.h:114
typedef ConnApiConnInfoT ConnApiConnInfoT;

// connapi.h:118
struct ConnApiClientT {
	// connapi.h:119
	ConnApiUserInfoT UserInfo;

	// connapi.h:120
	ConnApiConnInfoT GameInfo;

	// connapi.h:121
	ConnApiConnInfoT VoipInfo;

	// connapi.h:122
	NetGameUtilRefT * pGameUtilRef;

	// connapi.h:123
	NetGameLinkRefT * pGameLinkRef;

	// connapi.h:124
	NetGameDistRefT * pGameDistRef;

	// connapi.h:125
	int32_t iConnStart;

	// connapi.h:126
	int32_t iTunnelId;

	// connapi.h:127
	int16_t iVoipConnId;

	// connapi.h:128
	uint16_t uConnFlags;

	// connapi.h:129
	uint16_t uFlags;

	// connapi.h:130
	uint16_t _pad;

}

// connapi.h:131
typedef ConnApiClientT ConnApiClientT;

// connapi.h:135
struct ConnApiClientListT {
	// connapi.h:136
	int32_t iNumClients;

	// connapi.h:137
	int32_t iMaxClients;

	// connapi.h:138
	ConnApiClientT[1] Clients;

}

// connapi.h:139
typedef ConnApiClientListT ConnApiClientListT;

// connapi.h:142
typedef ConnApiRefT ConnApiRefT;

// connapi.h:142
struct ConnApiRefT {
	// connapi.c:63
	ConnApiCallbackT * pCallback;

	// connapi.c:64
	void * pUserData;

	// connapi.c:67
	int32_t iMemGroup;

	// connapi.c:70
	uint16_t uClientId;

	// connapi.c:73
	uint16_t uGamePort;

	// connapi.c:76
	uint16_t uServGamePort;

	// connapi.c:79
	uint16_t uVoipPort;

	// connapi.c:82
	uint16_t uServVoipPort;

	// connapi.c:85
	uint16_t uConnFlags;

	// connapi.c:88
	uint16_t uGameServConnMode;

	// connapi.c:91
	uint16_t uGameServFallback;

	// connapi.c:94
	char[32] strGameName;

	// connapi.c:97
	uint32_t uGameServAddr;

	// connapi.c:100
	ConnApiGameServModeE eGameServMode;

	// connapi.c:103
	int32_t iLinkBufSize;

	// connapi.c:106
	NetGameUtilRefT * pGameUtilRef;

	// connapi.c:109
	ProtoMangleRefT * pProtoMangle;

	// connapi.c:112
	ProtoTunnelRefT * pProtoTunnel;

	// connapi.c:115
	char[32] strTunnelKey;

	// connapi.c:118
	int32_t iTunnelPort;

	// connapi.c:121
	ProtoUpnpRefT * pProtoUpnp;

	// connapi.c:124
	char[48] strDemanglerServer;

	// connapi.c:127
	VoipRefT * pVoipRef;

	// connapi.c:130
	uint32_t bVoipOwner;

	// connapi.c:133
	char[32] strSelfName;

	// connapi.c:136
	DirtyAddrT SelfAddr;

	// connapi.c:139
	int32_t iSelf;

	// connapi.c:142
	int32_t iSessId;

	// connapi.c:145
	int32_t iConnTimeout;

	// connapi.c:148
	int32_t iTimeout;

	// connapi.c:151
	int32_t iMnglTimeout;

	// connapi.c:154
	int32_t iGameMinp;

	// connapi.c:157
	int32_t iGameMout;

	// connapi.c:160
	int32_t iGameMwid;

	// connapi.c:163
	char[128] strSession;

	// connapi.c:166
	uint8_t bReporting;

	// connapi.c:169
	uint8_t bDemanglerEnabled;

	// connapi.c:172
	uint8_t bTunnelEnabled;

	// connapi.c:175
	uint8_t bUpnpEnabled;

	// connapi.c:178
	uint8_t bVoipEnabled;

	// connapi.c:181
	uint8_t bPeerWeb;

	// connapi.c:184
	uint8_t bInCallback;

	// connapi.c:187
	uint8_t bRemoveCallback;

	// connapi.c:190
	uint8_t bAutoUpdate;

	// connapi.c:193
	uint8_t[3] uPad1;

	// connapi.c:196
	uintptr_t uGameSockRef;

	// connapi.c:199
	uintptr_t uVoipSockRef;

	// connapi.c:201
	int32_t iHostIndex;

	// connapi.c:209
	enumeration  eState;

	// connapi.c:212
	ConnApiClientT GameServer;

	// connapi.c:215
	ConnApiClientListT ClientList;

}

// connapi.h:145
typedef void (ConnApiRefT *, ConnApiCbInfoT *, void *) ConnApiCallbackT;

