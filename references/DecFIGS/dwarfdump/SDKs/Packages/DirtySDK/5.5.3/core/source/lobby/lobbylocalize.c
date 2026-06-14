// lobbylocalize.c:53
enum DF_E {
	_DF_YMD = 0,
	_DF_DMY = 1,
	_DF_MDY = 2,
}

// lobbylocalize.c:56
typedef DF_E DateFormat_E;

// lobbylocalize.c:60
struct LangMapT {
	// lobbylocalize.c:61
	int32_t iLang;

	// lobbylocalize.c:63
	char cDecSymbol;

	// lobbylocalize.c:64
	char cThouSep;

	// lobbylocalize.c:66
	DateFormat_E eDateFormat;

	// lobbylocalize.c:67
	char cDateSep;

	// lobbylocalize.c:69
	char cTimeSep;

	// lobbylocalize.c:70
	int32_t bUse24Hour;

	// lobbylocalize.c:71
	int32_t bSignEnd;

	// lobbylocalize.c:72
	char[6] strAM;

	// lobbylocalize.c:73
	char[6] strPM;

	// lobbylocalize.c:74
	int32_t bCurrSpace;

	// lobbylocalize.c:75
	int32_t bPercentInFront;

	// lobbylocalize.c:76
	int32_t bPercentSpace;

	// lobbylocalize.c:77
	int32_t bCurrEnd;

}

// lobbylocalize.c:78
typedef LangMapT LangMapT;

// lobbylocalize.c:82
struct CurrMapT {
	// lobbylocalize.c:83
	int32_t iCountry;

	// lobbylocalize.c:84
	uint16_t uCurr;

}

// lobbylocalize.c:85
typedef CurrMapT CurrMapT;

// lobbylocalize.c:172
uint16_t _LobbyLocalizePickCurrency(int32_t  iCountry, int32_t *  pRc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylocalize.c:173
	int32_t i;

}

// lobbylocalize.c:210
int32_t _LobbyLocalizeFormatTime(LangMapT *  pRule, const char *  pInBuf, tm  inDate, int32_t  iBufLen, char *  pOutBuf) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylocalize.c:212
	int32_t iResult;

	// lobbylocalize.c:213
	char[6] strAmPm;

	// lobbylocalize.c:214
	tm date;

	// lobbylocalize.c:215
	int32_t iSecs;

	// lobbylocalize.c:217
	char cSep;

	{
		// lobbylocalize.c:239
		int32_t iHour;

	}
}

// lobbylocalize.c:295
int32_t _LobbyLocalizeFormatDate(LangMapT *  pRule, const char *  pInBuf, int32_t  iBufLen, char *  pOutBuf, int32_t  bTimeToo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylocalize.c:296
	int32_t iResult;

	// lobbylocalize.c:297
	tm Date;

	// lobbylocalize.c:298
	char[32] strDate;

	// lobbylocalize.c:299
	char[32] strTime;

	// lobbylocalize.c:300
	uint32_t uEpoch;

	// lobbylocalize.c:301
	char cDSep;

}

// lobbylocalize.c:364
int32_t _LobbyLocalizeFormatNum(LangMapT *  pRule, int32_t  iType, const char *  pInBuf, int32_t  iBufLen, char *  pOutBuf) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylocalize.c:365
	int32_t iResult;

	// lobbylocalize.c:366
	int32_t iDecPos;

	// lobbylocalize.c:366
	int32_t iMinPos;

	// lobbylocalize.c:367
	int32_t bOverflow;

	// lobbylocalize.c:368
	int32_t iInPos;

	// lobbylocalize.c:368
	int32_t iOutPos;

	// lobbylocalize.c:369
	int32_t iInStrLen;

}

// lobbylocalize.c:450
void _LobbyLocalizeSetup(LobbyLocalizeT *  pState, uint32_t  uLocality, int32_t  iCurrency) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylocalize.c:451
	int32_t i;

	// lobbylocalize.c:452
	int32_t iResult;

}

// lobbylocalize.c:508
extern LobbyLocalizeT * LobbyLocalizeCreate(uint32_t  uLocality, int32_t  iCurrency) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylocalize.c:509
	LobbyLocalizeT * pState;

	// lobbylocalize.c:510
	int32_t iMemGroup;

}

// lobbylocalize.c:540
extern void LobbyLocalizeSetCallback(LobbyLocalizeT *  pLocalize, LobbyLocalizeFuncT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbylocalize.c:559
extern LobbyLocalizeT * LobbyLocalizeDestroy(LobbyLocalizeT *  pLocalize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbylocalize.c:591
extern int32_t LobbyLocalizeData(LobbyLocalizeT *  pLocalize, int32_t  iType, char *  pBuffer, int32_t  iBufLen, const char *  pSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylocalize.c:592
	int32_t iResult;

	// lobbylocalize.c:593
	tm DummyDate;

	{
		// lobbylocalize.c:641
		char[32] strUtf;

		// lobbylocalize.c:642
		char[32] strSpec;

		// lobbylocalize.c:643
		int32_t i;

	}
}

// lobbylocalize.c:700
extern void _LobbyLocalizeGetLocaleString(LobbyLocalizeT *  pLoc, char *  pBuf) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbylocalize.c:701
	uint32_t uLoc;

}

// lobbylocalize.c:106
LangMapT[16] _LangMap;

// lobbylocalize.c:137
CurrMapT[7] _CurrMap;

