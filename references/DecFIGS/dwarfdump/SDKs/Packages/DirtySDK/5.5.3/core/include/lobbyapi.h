// lobbyapi.h:109
struct CgsNetwork::DirtySock::LobbyApiColorT {
	// lobbyapi.h:110
	unsigned char uRed;

	// lobbyapi.h:111
	unsigned char uGreen;

	// lobbyapi.h:112
	unsigned char uBlue;

	// lobbyapi.h:113
	unsigned char uAlpha;

}

// lobbyapi.h:118
struct CgsNetwork::DirtySock::LobbyApiUserT {
	// lobbyapi.h:119
	int32_t ident;

	// lobbyapi.h:120
	int32_t flags;

	// lobbyapi.h:121
	char[20] name;

	// lobbyapi.h:122
	char[8] ping;

	// lobbyapi.h:123
	uint32_t addr;

	// lobbyapi.h:124
	int32_t rank;

	// lobbyapi.h:125
	char[260] stat;

	// lobbyapi.h:126
	char[132] aux;

	// lobbyapi.h:127
	int32_t game;

	// lobbyapi.h:128
	uint32_t attr;

	// lobbyapi.h:114
	typedef LobbyApiColorT LobbyApiColorT;

	// lobbyapi.h:129
	LobbyApiUserT::LobbyApiColorT Color;

	// lobbyapi.h:130
	uint32_t uLevel;

	// lobbyapi.h:131
	uint32_t uMedals;

	// lobbyapi.h:132
	int32_t iUserSetIdent;

	// lobbyapi.h:133
	uint32_t uHwFlags;

	// lobbyapi.h:134
	int32_t iReputation;

	// dirtyaddr.h:42
	typedef DirtyAddrT DirtyAddrT;

	// lobbyapi.h:135
	LobbyApiUserT::DirtyAddrT MachineAddr;

	// lobbyapi.h:136
	uint32_t uLocalAddr;

	// lobbyapi.h:137
	uint32_t uLocality;

	// lobbyapi.h:138
	char[20] strClubID;

	// lobbyapi.h:139
	char[8] strClubTag;

}

// lobbyapi.h:154
struct CgsNetwork::DirtySock::LobbyApiMsgT {
	// lobbyapi.h:155
	int32_t id;

	// lobbyapi.h:156
	int32_t type;

	// lobbyapi.h:157
	int32_t kind;

	// lobbyapi.h:158
	int32_t code;

	// lobbyapi.h:159
	const char * pData;

	// lobbyapi.h:160
	void * pMisc;

}

// lobbyapi.h:165
struct CgsNetwork::DirtySock::LobbyApiPlayerT {
	// lobbyapi.h:166
	int32_t iIdent;

	// lobbyapi.h:167
	char[20] strPers;

	// lobbyapi.h:168
	uint32_t uAddr;

	// lobbyapi.h:169
	uint32_t uLocalAddr;

	// lobbyapi.h:170
	char[64] strMachineAddr;

	// lobbyapi.h:171
	int32_t iPartition;

	// lobbyapi.h:172
	uint32_t uFlags;

	// lobbyapi.h:173
	int32_t iPresence;

	// lobbyapi.h:174
	char[60] strParams;

}

// lobbyapi.h:179
struct CgsNetwork::DirtySock::LobbyApiPartitionT {
	// lobbyapi.h:180
	int32_t iSize;

	// lobbyapi.h:181
	char[36] strParams;

}

// lobbyapi.h:186
struct CgsNetwork::DirtySock::LobbyApiPlayT {
	// lobbyapi.h:187
	int32_t iIdent;

	// lobbyapi.h:188
	char[36] strName;

	// lobbyapi.h:189
	char[20] strHost;

	// lobbyapi.h:190
	char[20] strGPSHost;

	// lobbyapi.h:191
	int32_t iRoom;

	// lobbyapi.h:192
	char[128] strSess;

	// lobbyapi.h:193
	char[260] strParams;

	// lobbyapi.h:194
	char[16] strPlatParams;

	// lobbyapi.h:195
	uint32_t uCustflags;

	// lobbyapi.h:196
	uint32_t uSysflags;

	// lobbyapi.h:197
	int8_t iMinsize;

	// lobbyapi.h:198
	int8_t iMaxsize;

	// lobbyapi.h:199
	int8_t iGameMode;

	// lobbyapi.h:200
	uint8_t uPad;

	// lobbyapi.h:201
	uint32_t uSeed;

	// lobbyapi.h:202
	uint32_t uWhen;

	// lobbyapi.h:203
	uint16_t uGamePort;

	// lobbyapi.h:204
	uint16_t uVoipPort;

	// lobbyapi.h:205
	char[64] strAuth;

	// lobbyapi.h:207
	int32_t iNumPartitions;

	// lobbyapi.h:182
	typedef LobbyApiPartitionT LobbyApiPartitionT;

	// lobbyapi.h:208
	LobbyApiPlayT::LobbyApiPartitionT[2] aPartitions;

	// lobbyapi.h:210
	int32_t iCount;

	// lobbyapi.h:211
	int32_t iPrivSlots;

	// lobbyapi.h:175
	typedef LobbyApiPlayerT LobbyApiPlayerT;

	// lobbyapi.h:212
	LobbyApiPlayT::LobbyApiPlayerT[9] aOpponents;

}

// lobbyapi.h:217
struct CgsNetwork::DirtySock::LobbyApiUserSetMemberT {
	// lobbyapi.h:218
	int32_t iIdent;

	// lobbyapi.h:219
	char[20] strPers;

	// lobbyapi.h:220
	uint32_t uFlags;

	// lobbyapi.h:221
	int32_t iGame;

	// lobbyapi.h:222
	char[132] strAux;

	// lobbyapi.h:223
	uint32_t uAddr;

	// lobbyapi.h:224
	uint32_t uLocalAddr;

	// lobbyapi.h:225
	char[64] strMachineAddr;

}

// lobbyapi.h:230
struct CgsNetwork::DirtySock::LobbyApiUserSetT {
	// lobbyapi.h:231
	int32_t iIdent;

	// lobbyapi.h:232
	int32_t iType;

	// lobbyapi.h:233
	uint32_t uSysFlags;

	// lobbyapi.h:234
	uint32_t uCustFlags;

	// lobbyapi.h:235
	char[20] strOwner;

	// lobbyapi.h:236
	int32_t iSize;

	// lobbyapi.h:237
	int32_t iCount;

	// lobbyapi.h:238
	char[36] strName;

	// lobbyapi.h:239
	char[68] strDesc;

	// lobbyapi.h:240
	char[68] strParams;

}

// lobbyapi.h:70
typedef LobbyApiRefT LobbyApiRefT;

// lobbyapi.h:70
struct LobbyApiRefT {
	// lobbyapicore.h:97
	ProtoAriesRefT * net;

	// lobbyapicore.h:98
	PingManagerRefT * pPingManager;

	// lobbyapicore.h:100
	int32_t iMemGroup;

	// lobbyapicore.h:101
	int32_t iRefMemGroup;

	// lobbyapicore.h:109
	int32_t state;

	// lobbyapicore.h:110
	uint32_t bSuspended;

	// lobbyapicore.h:111
	uint32_t bEnableDispElemCb;

	// lobbyapicore.h:112
	uint32_t uTimeout;

	// lobbyapicore.h:113
	uint32_t uUpdated;

	// lobbyapicore.h:114
	uint32_t nextServerPingTime;

	// lobbyapicore.h:115
	uint32_t serverPingLatency;

	// lobbyapicore.h:116
	int32_t nFailedServerPings;

	// lobbyapicore.h:118
	uint32_t uNextUserPing;

	// lobbyapicore.h:120
	uint32_t uConnTimeout;

	// lobbyapicore.h:121
	uint32_t uIdleTimeout;

	// lobbyapicore.h:122
	uint32_t uTrnsTimeout;

	// lobbyapicore.h:124
	char[16] skey;

	// lobbyapicore.h:125
	char[256] strVersion;

	// lobbyapicore.h:126
	char[512] strAuthResult;

	// lobbyapicore.h:127
	char[1024] strPersResult;

	// lobbyapicore.h:128
	char[64] strPartition;

	// lobbyapicore.h:129
	char[64] strLKey;

	// lobbyapicore.h:131
	char[4100] strConfig;

	// lobbyapicore.h:133
	char[20] acctname;

	// lobbyapicore.h:134
	LobbyApiUserT user;

	// lobbyapicore.h:135
	int32_t roomidx;

	// lobbyapicore.h:136
	int32_t roomflags;

	// lobbyapicore.h:137
	char[36] roomname;

	// lobbyapicore.h:138
	LobbyApiRoomCriteriaT roomcrit;

	// lobbyapicore.h:141
	LobbyListRefT * pListRef;

	// lobbyapicore.h:143
	int32_t lobbyport;

	// lobbyapicore.h:144
	uint32_t lobbyaddr;

	// lobbyapicore.h:145
	int32_t rdirport;

	// lobbyapicore.h:147
	uint32_t sess;

	// lobbyapicore.h:148
	char[64] mask;

	// lobbyapicore.h:150
	uint32_t extaddr;

	// lobbyapicore.h:151
	uint32_t ouraddr;

	// lobbyapicore.h:153
	int32_t rankmore;

	// lobbyapicore.h:154
	int32_t snapchan;

	// lobbyapicore.h:155
	int32_t snapopen;

	// lobbyapicore.h:156
	int32_t ranknumb;

	// lobbyapicore.h:158
	LobbyGlobalCBRefT[32] callbacks;

	// lobbyapicore.h:160
	LobbyCBQueueRefT[32] CallbackQueue;

	// lobbyapicore.h:161
	int32_t iQueueTail;

	// lobbyapicore.h:162
	int32_t numpingreq;

	// lobbyapicore.h:164
	void * debugref;

	// lobbyapicore.h:165
	void (*)(void *, const char *) debugptr;

	// lobbyapicore.h:166
	uint32_t (*)(void *, int32_t, int32_t, const char *) debugflt;

	// lobbyapicore.h:168
	int32_t iCallbackID;

	// lobbyapicore.h:169
	int32_t iCallbackSeqn;

	// lobbyapicore.h:170
	int32_t iAutoRoomID;

	// lobbyapicore.h:172
	uint32_t uServTime;

	// lobbyapicore.h:173
	uint32_t uServLastTick;

	// lobbyapicore.h:174
	uint32_t uServTickSum;

	// lobbyapicore.h:176
	LobbyApiUserSetT UserSet;

	// lobbyapicore.h:178
	LobbyApiServerStatT serverStats;

	// lobbyapicore.h:179
	char[64] strServerName;

}

// lobbyapi.h:74
enum LobbyApiCBTypeE {
	LOBBYAPI_CBTYPE_INVALID = -1,
	LOBBYAPI_CBTYPE_RESP = 0,
	LOBBYAPI_CBTYPE_CHAT = 1,
	LOBBYAPI_CBTYPE_DISP = 2,
	LOBBYAPI_CBTYPE_CONN = 3,
	LOBBYAPI_CBTYPE_EVNT = 4,
	LOBBYAPI_CBTYPE_IDLE = 5,
	LOBBYAPI_CBTYPE_TOTAL = 6,
}

// lobbyapi.h:85
typedef LobbyApiCBTypeE LobbyApiCBTypeE;

// lobbyapi.h:89
struct LobbyApiRoomT {
	// lobbyapi.h:90
	int32_t ident;

	// lobbyapi.h:91
	int32_t check;

	// lobbyapi.h:92
	int32_t flags;

	// lobbyapi.h:93
	int32_t limit;

	// lobbyapi.h:94
	int32_t popul;

	// lobbyapi.h:95
	int32_t gamepopul;

	// lobbyapi.h:96
	int32_t gamecount;

	// lobbyapi.h:97
	char[4] pop;

	// lobbyapi.h:98
	char[4] pub;

	// lobbyapi.h:99
	char[36] name;

	// lobbyapi.h:100
	char[36] displayname;

	// lobbyapi.h:101
	char[20] host;

	// lobbyapi.h:102
	char[132] strDesc;

	// lobbyapi.h:103
	uint32_t locality;

	// lobbyapi.h:104
	LobbyApiRoomCriteriaT crit;

}

// lobbyapi.h:105
typedef LobbyApiRoomT LobbyApiRoomT;

// lobbyapi.h:109
struct LobbyApiColorT {
	// lobbyapi.h:110
	unsigned char uRed;

	// lobbyapi.h:111
	unsigned char uGreen;

	// lobbyapi.h:112
	unsigned char uBlue;

	// lobbyapi.h:113
	unsigned char uAlpha;

}

// lobbyapi.h:114
typedef LobbyApiColorT LobbyApiColorT;

// lobbyapi.h:118
struct LobbyApiUserT {
	// lobbyapi.h:119
	int32_t ident;

	// lobbyapi.h:120
	int32_t flags;

	// lobbyapi.h:121
	char[20] name;

	// lobbyapi.h:122
	char[8] ping;

	// lobbyapi.h:123
	uint32_t addr;

	// lobbyapi.h:124
	int32_t rank;

	// lobbyapi.h:125
	char[260] stat;

	// lobbyapi.h:126
	char[132] aux;

	// lobbyapi.h:127
	int32_t game;

	// lobbyapi.h:128
	uint32_t attr;

	// lobbyapi.h:129
	LobbyApiColorT Color;

	// lobbyapi.h:130
	uint32_t uLevel;

	// lobbyapi.h:131
	uint32_t uMedals;

	// lobbyapi.h:132
	int32_t iUserSetIdent;

	// lobbyapi.h:133
	uint32_t uHwFlags;

	// lobbyapi.h:134
	int32_t iReputation;

	// lobbyapi.h:135
	DirtyAddrT MachineAddr;

	// lobbyapi.h:136
	uint32_t uLocalAddr;

	// lobbyapi.h:137
	uint32_t uLocality;

	// lobbyapi.h:138
	char[20] strClubID;

	// lobbyapi.h:139
	char[8] strClubTag;

}

// lobbyapi.h:140
typedef LobbyApiUserT LobbyApiUserT;

// lobbyapi.h:154
struct LobbyApiMsgT {
	// lobbyapi.h:155
	int32_t id;

	// lobbyapi.h:156
	int32_t type;

	// lobbyapi.h:157
	int32_t kind;

	// lobbyapi.h:158
	int32_t code;

	// lobbyapi.h:159
	const char * pData;

	// lobbyapi.h:160
	void * pMisc;

}

// lobbyapi.h:161
typedef LobbyApiMsgT LobbyApiMsgT;

// lobbyapi.h:230
struct LobbyApiUserSetT {
	// lobbyapi.h:231
	int32_t iIdent;

	// lobbyapi.h:232
	int32_t iType;

	// lobbyapi.h:233
	uint32_t uSysFlags;

	// lobbyapi.h:234
	uint32_t uCustFlags;

	// lobbyapi.h:235
	char[20] strOwner;

	// lobbyapi.h:236
	int32_t iSize;

	// lobbyapi.h:237
	int32_t iCount;

	// lobbyapi.h:238
	char[36] strName;

	// lobbyapi.h:239
	char[68] strDesc;

	// lobbyapi.h:240
	char[68] strParams;

}

// lobbyapi.h:241
typedef LobbyApiUserSetT LobbyApiUserSetT;

// lobbyapi.h:245
struct LobbyApiServerStatT {
	// lobbyapi.h:246
	int32_t iEnabled;

	// lobbyapi.h:247
	int32_t iUpdate;

	// lobbyapi.h:248
	uint32_t uUsersInLobby;

	// lobbyapi.h:249
	uint32_t uUsersInRooms;

	// lobbyapi.h:250
	uint32_t uUsersInGames;

	// lobbyapi.h:251
	uint32_t uGamesInProgress;

	// lobbyapi.h:252
	uint32_t uGamesCreated;

	// lobbyapi.h:253
	uint32_t uGamesCompleted;

}

// lobbyapi.h:254
typedef LobbyApiServerStatT LobbyApiServerStatT;

// lobbyapi.h:266
typedef void (LobbyApiRefT *, LobbyApiMsgT *, void *) LobbyApiCallbackT;

// lobbyapi.h:144
struct LobbyApiRankT {
	// lobbyapi.h:145
	int32_t pts;

	// lobbyapi.h:146
	int32_t rank;

	// lobbyapi.h:147
	uint32_t uFlags;

	// lobbyapi.h:148
	char[20] name;

	// lobbyapi.h:149
	char[260] stat;

}

// lobbyapi.h:150
typedef LobbyApiRankT LobbyApiRankT;

// lobbyapi.h:165
struct LobbyApiPlayerT {
	// lobbyapi.h:166
	int32_t iIdent;

	// lobbyapi.h:167
	char[20] strPers;

	// lobbyapi.h:168
	uint32_t uAddr;

	// lobbyapi.h:169
	uint32_t uLocalAddr;

	// lobbyapi.h:170
	char[64] strMachineAddr;

	// lobbyapi.h:171
	int32_t iPartition;

	// lobbyapi.h:172
	uint32_t uFlags;

	// lobbyapi.h:173
	int32_t iPresence;

	// lobbyapi.h:174
	char[60] strParams;

}

// lobbyapi.h:175
typedef LobbyApiPlayerT LobbyApiPlayerT;

// lobbyapi.h:179
struct LobbyApiPartitionT {
	// lobbyapi.h:180
	int32_t iSize;

	// lobbyapi.h:181
	char[36] strParams;

}

// lobbyapi.h:182
typedef LobbyApiPartitionT LobbyApiPartitionT;

// lobbyapi.h:186
struct LobbyApiPlayT {
	// lobbyapi.h:187
	int32_t iIdent;

	// lobbyapi.h:188
	char[36] strName;

	// lobbyapi.h:189
	char[20] strHost;

	// lobbyapi.h:190
	char[20] strGPSHost;

	// lobbyapi.h:191
	int32_t iRoom;

	// lobbyapi.h:192
	char[128] strSess;

	// lobbyapi.h:193
	char[260] strParams;

	// lobbyapi.h:194
	char[16] strPlatParams;

	// lobbyapi.h:195
	uint32_t uCustflags;

	// lobbyapi.h:196
	uint32_t uSysflags;

	// lobbyapi.h:197
	int8_t iMinsize;

	// lobbyapi.h:198
	int8_t iMaxsize;

	// lobbyapi.h:199
	int8_t iGameMode;

	// lobbyapi.h:200
	uint8_t uPad;

	// lobbyapi.h:201
	uint32_t uSeed;

	// lobbyapi.h:202
	uint32_t uWhen;

	// lobbyapi.h:203
	uint16_t uGamePort;

	// lobbyapi.h:204
	uint16_t uVoipPort;

	// lobbyapi.h:205
	char[64] strAuth;

	// lobbyapi.h:207
	int32_t iNumPartitions;

	// lobbyapi.h:208
	LobbyApiPartitionT[2] aPartitions;

	// lobbyapi.h:210
	int32_t iCount;

	// lobbyapi.h:211
	int32_t iPrivSlots;

	// lobbyapi.h:212
	LobbyApiPlayerT[9] aOpponents;

}

// lobbyapi.h:213
typedef LobbyApiPlayT LobbyApiPlayT;

// lobbyapi.h:217
struct LobbyApiUserSetMemberT {
	// lobbyapi.h:218
	int32_t iIdent;

	// lobbyapi.h:219
	char[20] strPers;

	// lobbyapi.h:220
	uint32_t uFlags;

	// lobbyapi.h:221
	int32_t iGame;

	// lobbyapi.h:222
	char[132] strAux;

	// lobbyapi.h:223
	uint32_t uAddr;

	// lobbyapi.h:224
	uint32_t uLocalAddr;

	// lobbyapi.h:225
	char[64] strMachineAddr;

}

// lobbyapi.h:226
typedef LobbyApiUserSetMemberT LobbyApiUserSetMemberT;

// lobbyapi.h:258
struct LobbyApiCtrlMsgT {
	// lobbyapi.h:259
	int32_t iIdent;

	// lobbyapi.h:260
	int32_t iCategory;

	// lobbyapi.h:261
	int32_t iMsg;

	// lobbyapi.h:262
	char[64] strData;

}

// lobbyapi.h:263
typedef LobbyApiCtrlMsgT LobbyApiCtrlMsgT;

