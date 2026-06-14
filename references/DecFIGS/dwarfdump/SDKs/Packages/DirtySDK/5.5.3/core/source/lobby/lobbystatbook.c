// lobbystatbook.c:43
enum LobbyStatbookStatusE {
	LOBBYSTATBOOK_STATUS_IDLE = 0,
	LOBBYSTATBOOK_STATUS_HAVE_VIEW = 2,
	LOBBYSTATBOOK_STATUS_HAVE_VIEW_INFO = 4,
}

// lobbystatbook.c:47
typedef LobbyStatbookStatusE LobbyStatbookStatusE;

// lobbystatbook.c:51
enum LobbyStatbookDownloadStatusE {
	LOBBYSTATBOOK_DOWNLOAD_STATUS_IDLE = 0,
	LOBBYSTATBOOK_DOWNLOAD_STATUS_VIEW = 1,
	LOBBYSTATBOOK_DOWNLOAD_STATUS_ROW = 2,
	LOBBYSTATBOOK_DOWNLOAD_STATUS_VIEW_INFO = 4,
}

// lobbystatbook.c:56
typedef LobbyStatbookDownloadStatusE LobbyStatbookDownloadStatusE;

// lobbystatbook.c:70
struct LobbyStatbookRowT {
	// lobbystatbook.c:71
	char[32] strValue;

}

// lobbystatbook.c:72
typedef LobbyStatbookRowT LobbyStatbookRowT;

// lobbystatbook.c:80
struct LobbyStatbookSlotT {
	// lobbystatbook.c:81
	LobbyStatbookRowT * pRows;

	// lobbystatbook.c:82
	uint32_t bAvailable;

}

// lobbystatbook.c:83
typedef LobbyStatbookSlotT LobbyStatbookSlotT;

// lobbystatbook.c:129
void _LobbyStatbookInitSlotRows(LobbyStatbookT *  pStatbook, LobbyStatbookRowT *  pRow, uint32_t  uRowCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbystatbook.c:130
	uint32_t uSlotCount;

	// lobbystatbook.c:131
	uint32_t uSlotIndex;

	{
		// lobbystatbook.c:134
		LobbyStatbookSlotT * pSlot;

	}
}

// lobbystatbook.c:157
void _LobbyStatbookViewCb(LobbyApiRefT *  pLobby, LobbyApiMsgT *  pMsg, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbystatbook.c:158
	LobbyStatbookT * pStatbook;

	// lobbystatbook.c:159
	uint32_t uRowCount;

	// lobbystatbook.c:159
	uint32_t i;

	// lobbystatbook.c:159
	uint32_t uTotalSpace;

	// lobbystatbook.c:160
	const char * pRows;

	// lobbystatbook.c:160
	const char * pParams;

	// lobbystatbook.c:160
	const char * pDescs;

	// lobbystatbook.c:160
	const char * pTypes;

	// lobbystatbook.c:161
	const char * pSyms;

	// lobbystatbook.c:162
	void * pMem;

	// lobbystatbook.c:163
	char[20] strType;

	// lobbystatbook.c:164
	char[20] strIndex;

	// lobbystatbook.c:165
	int32_t iIndex;

	{
		// lobbystatbook.c:219
		LobbyStatbookRowInfoT * pRowDesc;

	}
}

// lobbystatbook.c:273
void _LobbyStatbookViewInfoCb(LobbyApiRefT *  pLobby, LobbyApiMsgT *  pMsg, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbystatbook.c:274
	LobbyStatbookT * pStatbook;

	// lobbystatbook.c:275
	uint32_t uViewCount;

	// lobbystatbook.c:275
	uint32_t iIdx;

	// lobbystatbook.c:275
	uint32_t uTotalSpace;

	// lobbystatbook.c:276
	void * pMem;

	// lobbystatbook.c:277
	const char * pView;

}

// lobbystatbook.c:343
void _LobbyStatbookRowCb(LobbyApiRefT *  pLobby, LobbyApiMsgT *  pMsg, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbystatbook.c:344
	LobbyStatbookT * pStatbook;

	// lobbystatbook.c:345
	uint32_t uSlot;

	// lobbystatbook.c:345
	uint32_t i;

	// lobbystatbook.c:346
	const char * pStats;

	// lobbystatbook.c:347
	LobbyStatbookSlotT * pSlot;

	// lobbystatbook.c:348
	char[32] strRowValueBuf;

	{
		// lobbystatbook.c:389
		LobbyStatbookRowT * pRow;

	}
}

// lobbystatbook.c:431
extern LobbyStatbookT * LobbyStatbookCreate(LobbyApiRefT *  pLobby, uint32_t  uSlots) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbystatbook.c:432
	LobbyStatbookT * pStatbook;

	// lobbystatbook.c:433
	int32_t iMemGroup;

}

// lobbystatbook.c:481
extern void LobbyStatbookCancel(LobbyStatbookT *  pStatbook) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbystatbook.c:500
extern void LobbyStatbookDestroy(LobbyStatbookT *  pStatbook) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbystatbook.c:537
extern int32_t LobbyStatbookFetchView(LobbyStatbookT *  pStatbook, const char *  pView) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbystatbook.c:538
	char[32] strMsg;

}

// lobbystatbook.c:591
extern int32_t LobbyStatbookFetch(LobbyStatbookT *  pStatbook, uint32_t  uSlot, const char *  pPersona) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbystatbook.c:592
	char[64] strMsg;

	// lobbystatbook.c:592
	char[20] strPersona;

	{
		// lobbystatbook.c:623
		uint32_t uLocality;

		// lobbystatbook.c:624
		LobbyApiUserT * pUser;

	}
}

// lobbystatbook.c:656
extern int32_t LobbyStatbookStatus(LobbyStatbookT *  pStatbook, uint32_t  uSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbystatbook.c:684
extern const LobbyStatbookRowInfoT * LobbyStatbookRowInfo(LobbyStatbookT *  pStatbook, uint32_t  uRow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbystatbook.c:717
extern const char * LobbyStatbookRowData(LobbyStatbookT *  pStatbook, uint32_t  uSlot, uint32_t  uRow, char *  pBuffer, int32_t  iBuflen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbystatbook.c:718
	LobbyStatbookSlotT * pSlot;

	// lobbystatbook.c:719
	LobbyStatbookRowT * pRow;

}

// lobbystatbook.c:759
extern int32_t LobbyStatbookViewStatus(LobbyStatbookT *  pStatbook) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbystatbook.c:786
extern int32_t LobbyStatbookViewCount(LobbyStatbookT *  pStatbook) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbystatbook.c:806
extern const LobbyStatbookViewInfoT * LobbyStatbookViewInfo(LobbyStatbookT *  pStatbook, uint32_t  uViewIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbystatbook.c:833
extern int32_t LobbyStatbookFetchViewInfo(LobbyStatbookT *  pStatbook) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbystatbook.c:834
	char[32] strMsg;

	// lobbystatbook.c:835
	LobbyApiUserT Self;

}

// lobbystatbook.c:882
extern int32_t LobbyStatbookViewInfoStatus(LobbyStatbookT *  pStatbook) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

