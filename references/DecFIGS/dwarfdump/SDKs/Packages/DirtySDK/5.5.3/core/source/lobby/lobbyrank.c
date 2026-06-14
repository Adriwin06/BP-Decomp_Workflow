// lobbyrank.c:41
enum LobbyRankStatusE {
	LOBBYRANK_STATUS_IDLE = 0,
	LOBBYRANK_STATUS_HAVE_VIEW = 1,
	LOBBYRANK_STATUS_SELECTED_LIST = 2,
}

// lobbyrank.c:45
typedef LobbyRankStatusE LobbyRankStatusE;

// lobbyrank.c:49
enum LobbyRankDownloadStatusE {
	LOBBYRANK_DOWNLOAD_STATUS_IDLE = 0,
	LOBBYRANK_DOWNLOAD_STATUS_VIEW = 1,
	LOBBYRANK_DOWNLOAD_STATUS_LIST = 2,
}

// lobbyrank.c:53
typedef LobbyRankDownloadStatusE LobbyRankDownloadStatusE;

// lobbyrank.c:57
struct LobbyRankVariationT {
	// lobbyrank.c:58
	const char * pName;

	// lobbyrank.c:59
	uint32_t uListIndex;

	// lobbyrank.c:60
	int32_t[8] uParams;

	// lobbyrank.c:61
	uint32_t uParamCount;

	// lobbyrank.c:62
	int32_t iUserType;

}

// lobbyrank.c:63
typedef LobbyRankVariationT LobbyRankVariationT;

// lobbyrank.c:67
struct LobbyRankIndexT {
	// lobbyrank.c:68
	const char * pName;

	// lobbyrank.c:69
	LobbyRankVariationT * pVariations;

	// lobbyrank.c:70
	uint32_t uVariationCount;

}

// lobbyrank.c:71
typedef LobbyRankIndexT LobbyRankIndexT;

// lobbyrank.c:75
struct LobbyRankCategoryT {
	// lobbyrank.c:76
	const char * pName;

	// lobbyrank.c:77
	LobbyRankIndexT * pIndices;

	// lobbyrank.c:78
	uint32_t uIndexCount;

}

// lobbyrank.c:79
typedef LobbyRankCategoryT LobbyRankCategoryT;

// lobbyrank.c:83
struct LobbyRankColumnT {
	// lobbyrank.c:84
	char[32] strName;

	// lobbyrank.c:85
	char[64] strDesc;

	// lobbyrank.c:86
	char[32] strParam;

	// lobbyrank.c:87
	uint32_t uWidth;

	// lobbyrank.c:88
	int32_t iType;

	// lobbyrank.c:89
	int32_t iStyle;

}

// lobbyrank.c:90
typedef LobbyRankColumnT LobbyRankColumnT;

// lobbyrank.c:94
struct LobbyRankListT {
	// lobbyrank.c:95
	LobbyRankT * pRanker;

	// lobbyrank.c:96
	char[32] strName;

	// lobbyrank.c:97
	LobbyRankColumnT * pColumns;

	// lobbyrank.c:98
	DispListRef * pList;

	// lobbyrank.c:99
	int32_t iId;

	// lobbyrank.c:100
	char[64] strParams;

	// lobbyrank.c:101
	LobbyRankIndexT Index;

	// lobbyrank.c:102
	uint16_t uColumnCount;

	// lobbyrank.c:103
	uint16_t uExpectedRowCount;

	// lobbyrank.c:104
	uint16_t uFixedColumnCount;

	// lobbyrank.c:111
	uint16_t uCategoryIndex;

	// lobbyrank.c:112
	uint32_t uBuddyHash;

	// lobbyrank.c:113
	uint16_t uIndexIndex;

	// lobbyrank.c:114
	uint16_t uVariationIndex;

	// lobbyrank.c:115
	uint16_t uListIndex;

	// lobbyrank.c:116
	int16_t iOffset;

	// lobbyrank.c:117
	int16_t iRows;

	// lobbyrank.c:118
	int16_t iBuddyCount;

}

// lobbyrank.c:119
typedef LobbyRankListT LobbyRankListT;

// lobbyrank.c:151
enum LobbyRankCategoryStateE {
	CATEGORY_NAME = 0,
	INDEX_COUNT = 1,
	INDEX_NAME = 2,
	VARIATION_COUNT = 3,
	VARIATION_NAME = 4,
	LIST_INDEX = 5,
	PARAM_COUNT = 6,
	PARAM = 7,
}

// lobbyrank.c:160
typedef LobbyRankCategoryStateE LobbyRankCategoryStateE;

// lobbyrank.c:182
const char * _LobbyRankFindSymbol(LobbyRankT *  pRanker, int32_t  iIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:183
	char * pSym;

}

// lobbyrank.c:248
void _LobbyRankCategoryCb(LobbyApiRefT *  pLobby, LobbyApiMsgT *  pMsg, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:249
	LobbyRankT * pRanker;

	// lobbyrank.c:250
	const char * pResult;

	// lobbyrank.c:251
	const char * pUserTypes;

	// lobbyrank.c:252
	void * pMem;

	// lobbyrank.c:253
	uint32_t uCategoryCount;

	// lobbyrank.c:254
	uint32_t uIndexCount;

	// lobbyrank.c:255
	uint32_t uVariationCount;

	// lobbyrank.c:256
	uint32_t uTotalSpace;

	// lobbyrank.c:257
	uint32_t i;

	// lobbyrank.c:258
	uint32_t uParamIndex;

	// lobbyrank.c:259
	LobbyRankCategoryT * pCategory;

	// lobbyrank.c:260
	LobbyRankIndexT * pIndex;

	// lobbyrank.c:261
	LobbyRankVariationT * pVariation;

	// lobbyrank.c:262
	LobbyRankCategoryStateE eState;

	// lobbyrank.c:263
	char[64] strBuf;

	// lobbyrank.c:264
	char * pSymTab;

	// lobbyrank.c:265
	int32_t iLen;

	// lobbyrank.c:266
	char[16] strUserType;

	// lobbyrank.c:267
	int32_t iUserTypeIdx;

	{
		// lobbyrank.c:380
		int32_t bVarEnd;

	}
}

// lobbyrank.c:486
void _LobbyRankDispListCb(LobbyApiRefT *  pLobby, LobbyApiMsgT *  pMsg, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:487
	LobbyRankListT * pList;

	// lobbyrank.c:488
	LobbyRankT * pRanker;

	// lobbyrank.c:489
	uint32_t uUserCount;

	{
		// lobbyrank.c:495
		LobbyApiMsgT Msg;

	}
}

// lobbyrank.c:526
void _LobbyRankSnapCb(LobbyApiRefT *  pLobby, LobbyApiMsgT *  pMsg, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:527
	LobbyRankT * pRanker;

	// lobbyrank.c:528
	LobbyRankListT * pList;

	// lobbyrank.c:529
	LobbyRankColumnT * pColumn;

	// lobbyrank.c:530
	uint32_t i;

	// lobbyrank.c:531
	int32_t iChannel;

	// lobbyrank.c:531
	int32_t iId;

	// lobbyrank.c:532
	char[16] strTag;

	// lobbyrank.c:651
error:
}

// lobbyrank.c:679
uint32_t _LobbyRankHash(uint32_t  uHash, const char *  pStr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyrank.c:709
int32_t _LobbyRankSelectIndex(LobbyRankT *  pRanker, uint32_t  uOld, int32_t  iNew, uint32_t  uMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyrank.c:753
void _LobbyRankFlushList(LobbyRankT *  pRanker, uint32_t  uListIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:754
	uint32_t uChannel;

	// lobbyrank.c:755
	LobbyRankListT * pList;

}

// lobbyrank.c:800
int32_t _LobbyRankIsIndexMatch(LobbyRankT *  pRanker, LobbyRankListT *  pList, int32_t  iOffset, int32_t  iRows, const char **  pBuddyList, int32_t  iBuddyCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:801
	uint32_t uHash;

	// lobbyrank.c:802
	int32_t i;

}

// lobbyrank.c:839
int32_t _LobbyRankColumnType(LobbyRankT *  pRanker, int32_t  iColumn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:840
	LobbyRankListT * pList;

	// lobbyrank.c:841
	LobbyRankColumnT * pColumn;

	// lobbyrank.c:842
	int32_t iNoType;

}

// lobbyrank.c:874
void _LobbyRankIndexUpdate(LobbyRankT *  pRanker, LobbyRankListT *  pList, int32_t  iOffset, int32_t  iRows, const char **  pBuddyList, int32_t  iBuddyCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:875
	uint32_t uHash;

	// lobbyrank.c:876
	int32_t i;

}

// lobbyrank.c:911
extern LobbyRankT * LobbyRankCreate(LobbyApiRefT *  pLobby, int32_t  iCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:912
	LobbyRankListT * pLists;

	// lobbyrank.c:913
	LobbyRankT * pRanker;

	// lobbyrank.c:914
	uint32_t i;

	// lobbyrank.c:915
	int32_t iMemGroup;

	// lobbyrank.c:921
	uint32_t uSnapCount;

	// lobbyrank.c:922
	uint32_t uTotalSize;

}

// lobbyrank.c:979
extern void LobbyRankDestroy(LobbyRankT *  pRanker) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyrank.c:1027
extern int32_t LobbyRankCategoryFetch(LobbyRankT *  pRanker, const char *  pView, LobbyRankCallbackT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:1028
	char[32] strMsg;

	// lobbyrank.c:1029
	uint32_t uViewLen;

}

// lobbyrank.c:1091
extern int32_t LobbyRankStatus(LobbyRankT *  pRanker, int32_t  iSelector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// lobbyrank.c:1103
		uint32_t uChannel;

		// lobbyrank.c:1104
		LobbyRankListT * pList;

	}
}

// lobbyrank.c:1143
extern int32_t LobbyRankCategoryCount(LobbyRankT *  pRanker) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyrank.c:1169
extern const char * LobbyRankCategoryName(LobbyRankT *  pRanker, int32_t  iCategory, char *  pBuffer, int32_t  iBuflen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:1170
	LobbyRankCategoryT * pCategory;

}

// lobbyrank.c:1209
extern int32_t LobbyRankIndexCount(LobbyRankT *  pRanker, int32_t  iCategory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:1210
	LobbyRankCategoryT * pCategory;

}

// lobbyrank.c:1244
extern const char * LobbyRankIndexName(LobbyRankT *  pRanker, int32_t  iCategory, int32_t  iIndex, char *  pBuffer, int32_t  iBuflen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:1245
	LobbyRankCategoryT * pCategory;

	// lobbyrank.c:1246
	LobbyRankIndexT * pIndex;

}

// lobbyrank.c:1298
extern int32_t LobbyRankVariationCount(LobbyRankT *  pRanker, int32_t  iCategory, int32_t  iIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:1299
	LobbyRankCategoryT * pCategory;

	// lobbyrank.c:1300
	LobbyRankIndexT * pIndex;

}

// lobbyrank.c:1342
extern const char * LobbyRankVariationName(LobbyRankT *  pRanker, int32_t  iCategory, int32_t  iIndex, int32_t  iVariation, char *  pBuffer, int32_t  iBuflen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:1343
	LobbyRankCategoryT * pCategory;

	// lobbyrank.c:1344
	LobbyRankIndexT * pIndex;

	// lobbyrank.c:1345
	LobbyRankVariationT * pVariation;

}

// lobbyrank.c:1405
extern int32_t LobbyRankVariationUserType(LobbyRankT *  pRanker, int32_t  iCategory, int32_t  iIndex, int32_t  iVariation) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:1406
	LobbyRankCategoryT * pCategory;

	// lobbyrank.c:1407
	LobbyRankIndexT * pIndex;

	// lobbyrank.c:1408
	LobbyRankVariationT * pVariation;

}

// lobbyrank.c:1466
extern int32_t LobbyRankSelect(LobbyRankT *  pRanker, int32_t  iCategory, int32_t  iIndex, int32_t  iVariation) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:1467
	LobbyRankCategoryT * pCategory;

	// lobbyrank.c:1468
	LobbyRankIndexT * pIndex;

	// lobbyrank.c:1469
	LobbyRankVariationT * pVariation;

}

// lobbyrank.c:1535
extern void LobbyRankFlush(LobbyRankT *  pRanker, int32_t  bAll) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// lobbyrank.c:1542
		uint32_t i;

	}
}

// lobbyrank.c:1578
extern int32_t LobbyRankParm(LobbyRankT *  pRanker, int32_t  iIndex, int32_t *  pData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:1579
	LobbyRankCategoryT * pCategory;

	// lobbyrank.c:1580
	LobbyRankIndexT * pIndex;

	// lobbyrank.c:1581
	LobbyRankVariationT * pVariation;

}

// lobbyrank.c:1653
extern int32_t LobbyRankFetch(LobbyRankT *  pRanker, int32_t  iTimeout, int32_t  iOffset, int32_t  iRows, const char **  pBuddyList, int32_t  iBuddyCount, LobbyRankCallbackT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:1654
	LobbyRankListT * pList;

	// lobbyrank.c:1655
	uint32_t uChannel;

	// lobbyrank.c:1665
	char[2264] strMsg;

	// lobbyrank.c:1666
	int32_t i;

	{
		// lobbyrank.c:1675
		uint32_t uLocality;

		// lobbyrank.c:1676
		LobbyApiUserT * pUser;

	}
	{
		// lobbyrank.c:1694
		LobbyApiMsgT Msg;

	}
	{
		// lobbyrank.c:1716
		const char * pName;

	}
	{
		// lobbyrank.c:1736
		const char * pBuddy;

	}
}

// lobbyrank.c:1787
extern const char * LobbyRankDescript(LobbyRankT *  pRanker) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:1788
	LobbyRankListT * pList;

}

// lobbyrank.c:1814
extern int32_t LobbyRankColumnCount(LobbyRankT *  pRanker) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:1815
	LobbyRankListT * pList;

}

// lobbyrank.c:1847
extern int32_t LobbyRankColumnWidth(LobbyRankT *  pRanker, int32_t  iColumn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:1848
	LobbyRankListT * pList;

	// lobbyrank.c:1849
	LobbyRankColumnT * pColumn;

}

// lobbyrank.c:1884
extern int32_t LobbyRankColumnType(LobbyRankT *  pRanker, int32_t  iColumn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:1885
	LobbyRankListT * pList;

	// lobbyrank.c:1886
	LobbyRankColumnT * pColumn;

}

// lobbyrank.c:1921
extern int32_t LobbyRankColumnStyle(LobbyRankT *  pRanker, int32_t  iColumn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:1922
	LobbyRankListT * pList;

	// lobbyrank.c:1923
	LobbyRankColumnT * pColumn;

}

// lobbyrank.c:1960
extern const char * LobbyRankColumnName(LobbyRankT *  pRanker, int32_t  iColumn, char *  pBuffer, int32_t  iBuflen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:1961
	LobbyRankListT * pList;

	// lobbyrank.c:1962
	LobbyRankColumnT * pColumn;

}

// lobbyrank.c:1999
extern const char * LobbyRankColumnDescript(LobbyRankT *  pRanker, int32_t  iColumn, char *  pBuffer, int32_t  iBuflen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:2000
	LobbyRankListT * pList;

	// lobbyrank.c:2001
	LobbyRankColumnT * pColumn;

}

// lobbyrank.c:2038
extern const char * LobbyRankColumnParm(LobbyRankT *  pRanker, int32_t  iColumn, char *  pBuffer, int32_t  iBuflen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:2039
	LobbyRankListT * pList;

	// lobbyrank.c:2040
	LobbyRankColumnT * pColumn;

}

// lobbyrank.c:2079
extern int32_t LobbyRankRowAttrib(LobbyRankT *  pRanker, int32_t  iRow, int32_t *  pAttrib) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:2080
	LobbyRankListT * pList;

	// lobbyrank.c:2081
	LobbyApiRankT * pRow;

	// lobbyrank.c:2082
	int32_t iAttrib;

}

// lobbyrank.c:2126
extern int32_t LobbyRankRowCount(LobbyRankT *  pRanker) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:2127
	LobbyRankListT * pList;

}

// lobbyrank.c:2165
extern const char * LobbyRankData(LobbyRankT *  pRanker, int32_t  iColumn, int32_t  iRow, char *  pBuffer, int32_t  iBuflen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:2166
	LobbyRankListT * pList;

	// lobbyrank.c:2167
	LobbyApiRankT * pRow;

	{
		// lobbyrank.c:2194
		int32_t iType;

		// lobbyrank.c:2195
		char[1025] strTemp;

	}
}

// lobbyrank.c:2261
extern int32_t LobbyRankScroll(LobbyRankT *  pRanker, int32_t  iHoriz, int32_t  iVert) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:2262
	LobbyRankListT * pList;

	// lobbyrank.c:2263
	int32_t iColumnIndex;

	// lobbyrank.c:2264
	int32_t iRowIndex;

}

// lobbyrank.c:2308
extern int32_t LobbyRankScrollColumn(LobbyRankT *  pRanker, int32_t  iScreenCol) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:2309
	LobbyRankListT * pList;

}

// lobbyrank.c:2349
extern int32_t LobbyRankScrollRow(LobbyRankT *  pRanker, int32_t  iScreenRow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:2350
	LobbyRankListT * pList;

}

// lobbyrank.c:2396
extern int32_t LobbyRankScrollInfo(LobbyRankT *  pRanker, int32_t  bVertical, int32_t  iInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:2397
	LobbyRankListT * pList;

}

// lobbyrank.c:2436
extern DispListRef * LobbyRanklistGetDisp(LobbyRankT *  pRank) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbyrank.c:2454
extern int32_t LobbyRankCancelCB(LobbyRankT *  pRanker) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbyrank.c:2455
	int32_t iCancelCB;

	// lobbyrank.c:2456
	uint32_t i;

}

