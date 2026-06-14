// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsNetworkConstants.h:29
	namespace DirtySock {
		// hlbudapi.h:53
		enum HLBStatE {
			HLB_STAT_UNDEFINED = -1,
			HLB_STAT_DISC = 0,
			HLB_STAT_CHAT = 1,
			HLB_STAT_AWAY = 2,
			HLB_STAT_XA = 3,
			HLB_STAT_DND = 4,
			HLB_STAT_PASSIVE = 5,
		}

	}

}

// hlbudapi.h:53
enum HLBStatE {
	HLB_STAT_UNDEFINED = -1,
	HLB_STAT_DISC = 0,
	HLB_STAT_CHAT = 1,
	HLB_STAT_AWAY = 2,
	HLB_STAT_XA = 3,
	HLB_STAT_DND = 4,
	HLB_STAT_PASSIVE = 5,
}

// hlbudapi.h:61
typedef HLBStatE HLBStatE;

// hlbudapi.h:143
enum HLBConnectStateE {
	HLB_CS_Disconnected = 0,
	HLB_CS_Connecting = 1,
	HLB_CS_Connected = 2,
	HLB_CS_ErrorAuth = 3,
	HLB_CS_ErrorUser = 4,
	HLB_CS_ErrorNetwork = 5,
	HLB_CS_ErrorServer = 6,
	HLB_CS_ErrorTimeout = 7,
}

// hlbudapi.h:152
typedef HLBConnectStateE HLBConnectStateE;

// hlbudapi.h:209
typedef HLBApiRefT HLBApiRefT;

// hlbudapi.h:209
struct HLBApiRefT {
	// hlbudapips3.c:103
	BuddyMemAllocT * pBuddyAlloc;

	// hlbudapips3.c:104
	BuddyMemFreeT * pBuddyFree;

	// hlbudapips3.c:106
	int32_t iMemGroup;

	// hlbudapips3.c:107
	int32_t iStat;

	// hlbudapips3.c:108
	HLBConnectStateE eConnectState;

	// hlbudapips3.c:110
	HLBOpCallbackT * pChangeCallback;

	// hlbudapips3.c:111
	void * pChangeUserData;

	// hlbudapips3.c:113
	HLBMsgCallbackT * pMsgCallback;

	// hlbudapips3.c:114
	void * pMsgUserData;

	// hlbudapips3.c:116
	HLBBudActionCallbackT * pMsgAttachmentCallback;

	// hlbudapips3.c:117
	void * pMsgAttachmentUserData;

	// hlbudapips3.c:119
	HLBBudActionCallbackT * pGameInviteCallback;

	// hlbudapips3.c:120
	void * pGameInviteUserData;

	// hlbudapips3.c:122
	int32_t bRosterDirty;

	// hlbudapips3.c:123
	int32_t bBuddyListDirty;

	// hlbudapips3.c:126
	int32_t (*)(void *, int32_t, void *, void *) pBuddySortFunc;

	// hlbudapips3.c:127
	void (*)(void *, const char *) pDebugProc;

	// hlbudapips3.c:129
	HLBPresenceCallbackT * pBuddyPresProc;

	// hlbudapips3.c:130
	void * pBuddyPresData;

	// hlbudapips3.c:132
	HasherRef * pHash;

	// hlbudapips3.c:133
	DispListRef * pDisp;

	// hlbudapips3.c:135
	HLBBudT BuddyData;

	// hlbudapips3.c:136
	int32_t iMaxMessagesPerBuddy;

	// hlbudapips3.c:137
	int32_t iMaxMessages;

	// hlbudapips3.c:138
	int32_t iTotalMessages;

	// hlbudapips3.c:140
	int8_t[512] strMessageBuff;

	// hlbudapips3.c:142
	int32_t iEventsInQueue;

	// hlbudapips3.c:143
	int32_t bGetBlockedList;

	// hlbudapips3.c:145
	Utf8TransTblT * pTransTbl;

}

// hlbudapi.h:211
typedef HLBBudT HLBBudT;

// hlbudapi.h:211
struct HLBBudT {
	// hlbudapips3.c:86
	HLBPresenceT Presence;

	// hlbudapips3.c:87
	SceNpId UserId;

	// hlbudapips3.c:88
	DispListRef * pMessageList;

	// hlbudapips3.c:89
	HLBApiRefT * pHLBApi;

	// hlbudapips3.c:90
	uint32_t uInviteFlags;

	// hlbudapips3.c:97
	enumeration  eState;

}

// hlbudapi.h:215
typedef void (HLBApiRefT *, int32_t, int32_t, void *) HLBOpCallbackT;

// hlbudapi.h:218
typedef void (HLBApiRefT *, BuddyApiMsgT *, void *) HLBMsgCallbackT;

// hlbudapi.h:221
typedef void (HLBApiRefT *, HLBBudT *, int32_t, void *) HLBBudActionCallbackT;

// hlbudapi.h:225
typedef void (HLBApiRefT *, HLBBudT *, HLBStatE, void *) HLBPresenceCallbackT;

// hlbudapi.h:228
typedef int32_t (void *, int32_t, void *, void *) HLBRosterSortFunctionT;

