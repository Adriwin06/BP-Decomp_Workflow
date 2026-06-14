// hlbudapips3.c:64
struct HLBPresenceT {
	// hlbudapips3.c:65
	int32_t iTitleId;

	// hlbudapips3.c:69
	int32_t iStateBits;

	// hlbudapips3.c:71
	char[56] strEAData;

	// hlbudapips3.c:72
	char[64] strTitleData;

}

// hlbudapips3.c:73
typedef HLBPresenceT HLBPresenceT;

// hlbudapips3.c:77
struct HLBMessageT {
	// hlbudapips3.c:78
	int32_t iLength;

	// hlbudapips3.c:79
	BuddyApiMsgT BuddyMsg;

	// hlbudapips3.c:80
	int8_t * pData;

}

// hlbudapips3.c:81
typedef HLBMessageT HLBMessageT;

// hlbudapips3.c:93
enum {
	ST_OFFLINE = 0,
	ST_ONLINE = 1,
	ST_BLOCKED = 2,
}

// hlbudapips3.c:149
struct HLBudAddPlyrHistDataT {
	// hlbudapips3.c:150
	HLBApiRefT * pRef;

	// hlbudapips3.c:151
	int32_t iNumIds;

	// hlbudapips3.c:152
	SceNpId[1] NpIds;

}

// hlbudapips3.c:153
typedef HLBudAddPlyrHistDataT HLBudAddPlyrHistDataT;

// hlbudapips3.c:181
void _HLBPrintfCode(HLBApiRefT *  pHLBApi, const char *  pFormat, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:182
	va_list args;

	// hlbudapips3.c:183
	char[4000] strText;

	// hlbudapips3.c:184
	char[4108] finalText;

}

// hlbudapips3.c:214
void _HLBPlayerHistoryThread(uint64_t  pArg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:215
	HLBudAddPlyrHistDataT * pData;

	// hlbudapips3.c:216
	int32_t iId;

	// hlbudapips3.c:216
	int32_t iResult;

	{
		// hlbudapips3.c:224
		uint32_t uStart;

	}
}

// hlbudapips3.c:261
void _HLBSignalBuddyListChanged(HLBApiRefT *  pHLBApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:286
void _HLBSignalMessageReceived(HLBApiRefT *  pHLBApi, HLBMessageT *  pMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:310
int32_t _HLBRosterCount(HLBApiRefT *  pHLBApi, uint32_t  iFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:335
void _HLBRosterDestroy(HLBApiRefT *  pHLBApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:336
	DispListT * pRec;

	// hlbudapips3.c:337
	HLBBudT * pBuddy;

}

// hlbudapips3.c:386
int32_t _HLBRosterSort(void *  pSortref, int32_t  iSortcon, void *  pRecptr1, void *  pRecptr2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:387
	int32_t iResult;

	// hlbudapips3.c:390
	HLBBudT * pBuddy1;

	// hlbudapips3.c:391
	HLBBudT * pBuddy2;

	// hlbudapips3.c:394
	int32_t on1;

	// hlbudapips3.c:395
	int32_t on2;

}

// hlbudapips3.c:434
int32_t _HLBApiInit(HLBApiRefT *  pHLBApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:466
int32_t _HLBSendPresenceData(HLBApiRefT *  pHLBApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:494
int _HLBBasicEventHandler(int  iEvent, int  iRetCode, uint32_t  uRequestId, void *  pArg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:495
	HLBApiRefT * pHLBApi;

	// hlbudapips3.c:497
	char *[13] _strEventNames;

}

// hlbudapips3.c:560
HLBBudT * _HLBGetBuddyRec(HLBApiRefT *  pHLBApi, const SceNpId *  pNpId, int32_t  bAdd) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:561
	HLBBudT * pBuddy;

	// hlbudapips3.c:562
	DispListT * pRec;

}

// hlbudapips3.c:623
HLBBudT * _HLBUpdateBuddy(HLBApiRefT *  pHLBApi, const SceNpId *  pBuddyData, int32_t  bOnline, int32_t  bBlocked, int8_t *  pPresenceData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:624
	HLBBudT * pBuddy;

	{
		// hlbudapips3.c:631
		HLBStatE eOldState;

	}
}

// hlbudapips3.c:674
int32_t _HLBGetOldestBuddyMessage(HLBBudT *  pBuddy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:675
	int32_t iMsgIndex;

	// hlbudapips3.c:675
	int32_t iMaxMsgs;

	// hlbudapips3.c:676
	HLBMessageT * pMessage;

	// hlbudapips3.c:677
	uint32_t uOldestTime;

	// hlbudapips3.c:678
	int32_t iOldestMessage;

}

// hlbudapips3.c:719
int32_t _HLBDeleteOldestBuddyMessage(HLBBudT *  pBuddy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:720
	int32_t iIndex;

}

// hlbudapips3.c:750
int32_t _HLBDeleteOldestMessage(HLBApiRefT *  pHLBApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:751
	int32_t iBuddyIndex;

	// hlbudapips3.c:751
	int32_t iMaxBuddies;

	// hlbudapips3.c:752
	int32_t iMsgIndex;

	// hlbudapips3.c:753
	HLBBudT * pBuddy;

	// hlbudapips3.c:754
	HLBMessageT * pMessage;

	// hlbudapips3.c:756
	HLBBudT * pBuddyWithOldestMessage;

	// hlbudapips3.c:757
	int32_t iOldestIndex;

	// hlbudapips3.c:758
	uint32_t uOldestTime;

}

// hlbudapips3.c:815
void _HLBReceiveMessage(HLBApiRefT *  pHLBApi, SceNpUserInfo *  pBuddyData, int8_t *  pMessageBuf, int32_t  iDataSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:816
	HLBBudT * pBuddy;

	{
		// hlbudapips3.c:824
		HLBMessageT * pNewMessage;

	}
}

// hlbudapips3.c:889
void _HLBSignalMsgAttachmentReceived(HLBApiRefT *  pHLBApi, SceNpUserInfo *  pBuddyData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:890
	HLBBudT * pBuddy;

}

// hlbudapips3.c:924
int32_t _HLBRecvMsgAttachmentResult(HLBApiRefT *  pHLBApi, SceNpUserInfo *  pBuddyData, SceNpBasicAttachmentData *  ad) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:925
	int32_t iNpStatus;

	// hlbudapips3.c:926
	int32_t iStatus;

	// hlbudapips3.c:927
	HLBBudT * pBuddy;

	{
		// hlbudapips3.c:934
		uint8_t * data;

		// hlbudapips3.c:935
		size_t dataSize;

	}
}

// hlbudapips3.c:973
void _HLBHandleEvent(HLBApiRefT *  pHLBApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:974
	int32_t iNpStatus;

	// hlbudapips3.c:975
	int32_t iEvent;

	// hlbudapips3.c:976
	SceNpUserInfo userInfo;

	// hlbudapips3.c:977
	int32_t iDataSize;

	// hlbudapips3.c:978
	HLBBudT * pBuddy;

}

// hlbudapips3.c:1059
void _HLBDeleteMessageAndFree(HLBBudT *  pBuddy, int32_t  iMsgIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:1060
	HLBMessageT * pMessage;

}

// hlbudapips3.c:1101
extern int32_t HLBListCancelAllInvites(HLBApiRefT *  pHLBApi, const char *  pName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:1121
extern void HLBListDisableSorting(HLBApiRefT *  pHLBApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:1160
extern HLBApiRefT * HLBApiCreate3(BuddyMemAllocT *  pAlloc, BuddyMemFreeT *  pFree, const char *  pProduct, const char *  pRelease, int32_t  iRefMemGroup, const char *  strTitleId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:1161
	HLBApiRefT * pHLBApi;

	// hlbudapips3.c:1162
	int32_t iMemGroup;

}

// hlbudapips3.c:1216
extern HLBApiRefT * HLBApiCreate2(BuddyMemAllocT *  pAlloc, BuddyMemFreeT *  pFree, const char *  pProduct, const char *  pRelease, int32_t  iRefMemGroup) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:1238
extern HLBApiRefT * HLBApiCreate(const char *  pProduct, const char *  pRelease, int32_t  iRefMemGroup) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:1264
extern void HLBApiSetDebugFunction(HLBApiRefT *  pHLBApi, void *  pDebugData, void (*)(void *, const char *)  pDebugProc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:1289
extern void HLBApiOverrideXblIsSameProductCheck(HLBApiRefT *  pHLBApi, int32_t  bDontUseXBLSameTitleIdCheck) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:1311
extern void HLBApiOverrideMaxMessagesPerBuddy(HLBApiRefT *  pHLBApi, int32_t  iMaxMessages) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:1359
extern void HLBApiOverrideConstants(HLBApiRefT *  pHLBApi, int32_t  bNoTextSupport, int32_t  connect_timeout, int32_t  op_timeout, int32_t  max_perm_buddies, int32_t  max_temp_buddies, int32_t  max_msgs_allowed, int32_t  bTalk_to_xbox, int32_t  max_msg_len, int32_t  bTrackSendMsgInOpState, int32_t  iGameInviteAccept_timeout) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:1381
extern void HLBApiSetUtf8TransTbl(HLBApiRefT *  pHLBApi, Utf8TransTblT *  pTransTbl) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:1406
extern int32_t HLBApiInitialize(HLBApiRefT *  pHLBApi, const char *  prodPresence, uint32_t  uLocality) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:1430
extern int32_t HLBApiConnect(HLBApiRefT *  pHLBApi, const char *  strServer, int32_t  iPort, const char *  strKey, const char *  strRsrc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:1431
	SceNpBasicEventHandler pFunc;

	// hlbudapips3.c:1432
	SceNpTitleId CommId;

	// hlbudapips3.c:1433
	int32_t iNpStatus;

}

// hlbudapips3.c:1481
extern int32_t HLBApiRegisterConnectCallback(HLBApiRefT *  pHLBApi, HLBOpCallbackT *  cb, void *  pContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:1502
extern int32_t HLBApiGetConnectState(HLBApiRefT *  pHLBApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:1526
extern void HLBApiDisconnect(HLBApiRefT *  pHLBApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:1551
extern void HLBApiDestroy(HLBApiRefT *  pHLBApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:1591
extern void HLBApiRefreshFriends(HLBApiRefT *  pHLBApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:1612
extern void HLBApiUpdate(HLBApiRefT *  pHLBApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// hlbudapips3.c:1633
		int32_t iNpStatus;

		// hlbudapips3.c:1634
		int32_t iCount;

		// hlbudapips3.c:1634
		int32_t iIndex;

		// hlbudapips3.c:1635
		SceNpId npId;

		// hlbudapips3.c:1636
		int32_t iBuddyIndex;

		// hlbudapips3.c:1636
		int32_t iMaxBuddies;

		// hlbudapips3.c:1637
		HLBBudT * pBuddy;

	}
}

// hlbudapips3.c:1693
extern int32_t HLBApiSuspend(HLBApiRefT *  pHLBApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:1724
extern void * HLBApiResume(HLBApiRefT *  pHLBApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:1754
extern int32_t HLBApiGetLastOpStatus(HLBApiRefT *  pHLBApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:1774
extern void HLBApiCancelOp(HLBApiRefT *  pHLBApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:1797
extern int32_t HLBApiFindUsers(HLBApiRefT *  pHLBApi, const char *  pName, HLBOpCallbackT *  pOpCallback, void *  context) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:1818
extern BuddyApiUserT * HLBApiUserFound(HLBApiRefT *  pHLBApi, int32_t  iItem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:1838
extern int32_t HLBReceiveMsgAttachment(HLBApiRefT *  pHLBApi, void *  pContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:1839
	int32_t iNpStatus;

	// hlbudapips3.c:1840
	int32_t iStatus;

	// hlbudapips3.c:1841
	sys_memory_container_t * pContainer;

}

// hlbudapips3.c:1871
extern int32_t HLBApiRegisterNewMsgCallback(HLBApiRefT *  pHLBApi, HLBMsgCallbackT *  pMsgCallback, void *  pAppData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:1905
extern int32_t HLBApiRegisterBuddyChangeCallback(HLBApiRefT *  pHLBApi, HLBOpCallbackT *  pChangeCallback, void *  pAppData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:1942
extern int32_t HLBApiRegisterMsgAttachmentCallback(HLBApiRefT *  pHLBApi, HLBBudActionCallbackT *  pActionCallback, void *  pAppData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:1980
extern int32_t HLBApiRegisterGameInviteCallback(HLBApiRefT *  pHLBApi, HLBBudActionCallbackT *  pActionCallback, void *  pAppData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2014
extern int32_t HLBApiRegisterBuddyPresenceCallback(HLBApiRefT *  pHLBApi, HLBPresenceCallbackT *  pPresCallback, void *  pAppData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2042
extern char * HLBBudGetName(HLBBudT *  pBuddy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2062
extern uint64_t HLBBudGetXenonXUID(HLBBudT *  pBuddy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2082
extern int32_t HLBBudIsTemporary(HLBBudT *  pBuddy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2102
extern int32_t HLBBudIsBlocked(HLBBudT *  pBuddy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2125
extern int32_t HLBBudIsWannaBeMyBuddy(HLBBudT *  pBuddy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2148
extern int32_t HLBBudIsIWannaBeHisBuddy(HLBBudT *  pBuddy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2172
extern char * HLBBudGetTitle(HLBBudT *  pBuddy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2197
extern int32_t HLBBudTempBuddyIs(HLBBudT *  pBuddy, int32_t  iBuddyType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2222
extern int32_t HLBBudIsRealBuddy(HLBBudT *  pBuddy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2246
extern int32_t HLBBudIsInGroup(HLBBudT *  pBuddy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2267
extern int32_t HLBBudGetState(HLBBudT *  pBuddy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2291
extern int32_t HLBBudIsPassive(HLBBudT *  pBuddy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2311
extern int32_t HLBBudIsAvailableForChat(HLBBudT *  pBuddy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2335
extern int32_t HLBBudIsSameProduct(HLBBudT *  pBuddy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2356
extern void HLBBudGetPresence(HLBBudT *  pBuddy, char *  strPresence) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2381
extern void HLBBudGetPresenceExtra(HLBBudT *  pBuddy, char *  strExtraPres, int32_t  iStrSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2402
extern int32_t HLBBudIsNoReplyBud(HLBBudT *  pBuddy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2423
extern int32_t HLBBudIsJoinable(HLBBudT *  pBuddy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2445
extern int32_t HLBBudGetVOIPState(HLBBudT *  pBuddy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2470
extern int32_t HLBBudCanVoiceChat(HLBBudT *  pBuddy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2492
extern int32_t HLBBudJoinGame(HLBBudT *  pBuddy, HLBOpCallbackT *  cb, void *  pContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2514
extern BuddyApiMsgT * HLBMsgListGetMsgByIndex(HLBBudT *  pBuddy, int32_t  iIndex, int32_t  bRead) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:2515
	HLBMessageT * pMessage;

}

// hlbudapips3.c:2554
extern BuddyApiMsgT * HLBMsgListGetFirstUnreadMsg(HLBBudT *  pBuddy, int32_t  iStartPos, int32_t  bRead) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:2555
	int32_t iListCount;

	// hlbudapips3.c:2555
	int32_t iIndex;

	// hlbudapips3.c:2556
	HLBMessageT * pMessage;

}

// hlbudapips3.c:2601
extern void HLBMsgListGetMsgText(HLBApiRefT *  pHLBApi, BuddyApiMsgT *  pMsg, char *  strText, int32_t  iLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2633
extern int32_t HLBMsgListGetUnreadCount(HLBBudT *  pBuddy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:2634
	int32_t iListCount;

	// hlbudapips3.c:2634
	int32_t iIndex;

	// hlbudapips3.c:2634
	int32_t iUnreadCount;

	// hlbudapips3.c:2635
	HLBMessageT * pMessage;

}

// hlbudapips3.c:2678
extern int32_t HLBMsgListGetTotalCount(HLBBudT *  pBuddy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2709
extern void HLBMsgListDelete(HLBBudT *  pBuddy, int32_t  iIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2735
extern void HLBMsgListDeleteAll(HLBBudT *  pBuddy, int32_t  bZapReadOnly) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:2736
	int32_t iListCount;

	// hlbudapips3.c:2736
	int32_t iIndex;

	// hlbudapips3.c:2737
	HLBMessageT * pMessage;

}

// hlbudapips3.c:2781
extern HLBBudT * HLBListGetBuddyByName(HLBApiRefT *  pHLBApi, const char *  pName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:2782
	HLBBudT * pBuddy;

	// hlbudapips3.c:2783
	DispListT * pRec;

}

// hlbudapips3.c:2811
extern HLBBudT * HLBListGetBuddyByIndex(HLBApiRefT *  pHLBApi, int32_t  iIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:2812
	HLBBudT * pBuddy;

}

// hlbudapips3.c:2838
extern int32_t HLBListGetBuddyCount(HLBApiRefT *  pHLBApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2863
extern int32_t HLBListGetBuddyCountByFlags(HLBApiRefT *  pHLBApi, uint32_t  uTypeFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2886
extern int32_t HLBListBlockBuddy(HLBApiRefT *  pHLBApi, const char *  strName, HLBOpCallbackT *  cb, void *  pContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2909
extern int32_t HLBListUnBlockBuddy(HLBApiRefT *  pHLBApi, const char *  strName, HLBOpCallbackT *  cb, void *  pContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2932
extern int32_t HLBListUnMakeBuddy(HLBApiRefT *  pHLBApi, const char *  strName, HLBOpCallbackT *  cb, void *  pContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2956
extern int32_t HLBListInviteBuddy(HLBApiRefT *  pHLBApi, const char *  strName, HLBOpCallbackT *  cb, void *  pContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:2982
extern int32_t HLBListAnswerInvite(HLBApiRefT *  pHLBApi, const char *  strName, int32_t  eInviteAction, HLBOpCallbackT *  cb, void *  pContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3009
extern int32_t HLBListAnswerGameInvite(HLBApiRefT *  pHLBApi, const char *  strName, int32_t  eInviteAction, HLBOpCallbackT *  cb, void *  pContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:3010
	HLBBudT * pBuddy;

	{
		// hlbudapips3.c:3016
		_Bool bDirty;

	}
}

// hlbudapips3.c:3078
extern int32_t HLBListCancelGameInvite(HLBApiRefT *  pHLBApi, HLBOpCallbackT *  cb, void *  pContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:3079
	int32_t liBuddyIndex;

	// hlbudapips3.c:3080
	_Bool bDirty;

	// hlbudapips3.c:3081
	const int32_t liBuddyCount;

	{
		// hlbudapips3.c:3085
		HLBBudT * pBuddy;

	}
}

// hlbudapips3.c:3131
extern int32_t HLBListGameInviteBuddy(HLBApiRefT *  pHLBApi, const char *  strName, const char *  pGameInviteState, HLBOpCallbackT *  cb, void *  pContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:3132
	HLBBudT * pBuddy;

}

// hlbudapips3.c:3168
extern int32_t HLBListMarkBuddyInvitedMe(HLBApiRefT *  pHLBApi, const char *  strName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:3169
	HLBBudT * pBuddy;

}

// hlbudapips3.c:3204
extern int32_t HLBListFlagTempBuddy(HLBApiRefT *  pHLBApi, const char *  strName, int32_t  iBuddyType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3226
extern int32_t HLBListUnFlagTempBuddy(HLBApiRefT *  pHLBApi, const char *  strName, int32_t  iBuddyType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3247
extern int32_t HLBListDeleteTempBuddy(HLBApiRefT *  pHLBApi, const char *  strName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3269
extern void HLBListSetSortFunction(HLBApiRefT *  pHLBApi, HLBRosterSortFunctionT *  pSortFunction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3289
extern int32_t HLBListSort(HLBApiRefT *  pHLBApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3318
extern int32_t HLBListChanged(HLBApiRefT *  pHLBApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:3319
	int32_t rc;

}

// hlbudapips3.c:3345
extern int32_t HLBListBuddyWithMsg(HLBApiRefT *  pHLBApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3365
extern int32_t HLBListDeleteNoMsgTempBuddies(HLBApiRefT *  pHLBApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3386
extern int32_t HLBListAddToGroup(HLBApiRefT *  pHLBApi, const char *  strBuddyName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3407
extern int32_t HLBListRemoveFromGroup(HLBApiRefT *  pHLBApi, const char *  strBuddyName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3427
extern int32_t HLBListClearGroup(HLBApiRefT *  pHLBApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3453
extern int32_t HLBListSendMsgToGroup(HLBApiRefT *  pHLBApi, int32_t  eMsgType, const char *  strMessage, int32_t  bClearGroup, HLBOpCallbackT *  cb, void *  pContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3474
extern void HLBApiPresenceDiff(HLBApiRefT *  pHLBApi, const char *  pGlobalPres) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3496
extern void HLBApiPresenceSame(HLBApiRefT *  pHLBApi, int32_t  iPresState, const char *  strPresence) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3520
extern int32_t HLBApiPresenceJoinable(HLBApiRefT *  pHLBApi, int32_t  bOn, int32_t  bSendImmediate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:3521
	int32_t bDirty;

}

// hlbudapips3.c:3563
extern void HLBApiPresenceExtra(HLBApiRefT *  pHLBApi, const char *  strExtraPres) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3584
extern int32_t HLBApiPresenceOffline(HLBApiRefT *  pHLBApi, int32_t  bOnOff) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3609
extern int32_t HLBApiPresenceSend(HLBApiRefT *  pHLBApi, int32_t  iBuddyState, int32_t  iVOIPState, const char *  strTitleData, int32_t  iWaitMsecs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3642
extern int32_t HLBApiPresenceVOIPSend(HLBApiRefT *  pHLBApi, int32_t  iVOIPState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3662
extern int32_t HLBApiPresenceSendSetPresence(HLBApiRefT *  pHLBApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3690
extern int32_t HLBListSendChatMsg(HLBApiRefT *  pHLBApi, const char *  strName, const char *  strMessage, HLBOpCallbackT *  cb, void *  pContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:3691
	int32_t iStatus;

	// hlbudapips3.c:3692
	int32_t iNpStatus;

	// hlbudapips3.c:3694
	HLBBudT * pBuddy;

}

// hlbudapips3.c:3737
extern int32_t HLBApiSetEmailForwarding(HLBApiRefT *  pHLBApi, int32_t  bEnable, const char *  strEmail, HLBOpCallbackT *  pOpCallback, void *  pCalldata) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3759
extern int32_t HLBApiGetEmailForwarding(HLBApiRefT *  pHLBApi, int32_t *  bEnable, char *  strEmail) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3779
extern uint32_t HLBBudGetGameInviteFlags(HLBBudT *  pBuddy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3800
extern int32_t HLBApiSetUserIndex(HLBApiRefT *  pHLBApi, int32_t  iIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3820
extern int32_t HLBApiGetUserIndex(HLBApiRefT *  pHLBApi) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3843
extern int32_t HLBApiGetTitleName(HLBApiRefT *  pHLBApi, const uint32_t  uTitleId, const int32_t  iBufSize, char *  pTitleName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3866
extern int32_t HLBApiGetMyTitleName(HLBApiRefT *  pHLBApi, const char *  pLang, const int32_t  iBufSize, char *  pTitleName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3887
extern int32_t HLBListSetGameInviteSessionID(HLBApiRefT *  pHLBApi, const char *  sSessionID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3911
extern int32_t HLBListGetGameSessionID(HLBApiRefT *  pHLBApi, const char *  strName, char *  sSessionID, const int32_t  iBufSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// hlbudapips3.c:3933
extern void HLBAddPlayersToHistory(HLBApiRefT *  pHLBApi, DirtyAddrT **  pPlyrAddrs, int32_t  iNumAddrs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// hlbudapips3.c:3934
	sys_ppu_thread_t iThreadId;

	// hlbudapips3.c:3935
	HLBudAddPlyrHistDataT * pData;

	// hlbudapips3.c:3936
	int32_t iAddr;

	// hlbudapips3.c:3936
	int32_t iDataSize;

}

