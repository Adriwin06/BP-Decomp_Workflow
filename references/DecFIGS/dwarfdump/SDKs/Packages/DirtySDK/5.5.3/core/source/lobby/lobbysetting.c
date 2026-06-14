// lobbysetting.c:47
enum {
	ST_IDLE = 0,
	ST_BUSY = 1,
}

// lobbysetting.c:79
void _LobbySettingCmdDone(LobbySettingRefT *  pSettings, int32_t  iCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbysetting.c:104
void _LobbySettingSaveCallback(LobbyApiRefT *  pApiRef, LobbyApiMsgT *  pMesg, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbysetting.c:105
	LobbySettingRefT * pSettings;

}

// lobbysetting.c:138
void _LobbySettingLoadCallback(LobbyApiRefT *  pApiRef, LobbyApiMsgT *  pMesg, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbysetting.c:139
	LobbySettingRefT * pSettings;

}

// lobbysetting.c:179
extern LobbySettingRefT * LobbySettingCreate(LobbyApiRefT *  pApiRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbysetting.c:180
	LobbySettingRefT * pSettings;

	// lobbysetting.c:181
	int32_t iMemGroup;

}

// lobbysetting.c:218
extern int32_t LobbySettingLoad(LobbySettingRefT *  pSettings, LobbySettingCallbackT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbysetting.c:252
extern int32_t LobbySettingSave(LobbySettingRefT *  pSettings, LobbySettingCallbackT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbysetting.c:284
extern int32_t LobbySettingCancel(LobbySettingRefT *  pSettings) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbysetting.c:285
	int32_t iSuccess;

}

// lobbysetting.c:318
extern char * LobbySettingGetString(LobbySettingRefT *  pSetting, const char *  pName, char *  pBuffer, int32_t  iBuflen, const char *  pDefault) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbysetting.c:344
extern char * LobbySettingGetStringWithIndex(LobbySettingRefT *  pSetting, const char *  pName, int32_t  iIndex, char *  pBuffer, int32_t  iBuflen, const char *  pDefault) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbysetting.c:367
extern void LobbySettingSetString(LobbySettingRefT *  pSetting, const char *  pName, const char *  pBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbysetting.c:390
extern void LobbySettingSetStringWithIndex(LobbySettingRefT *  pSetting, const char *  pName, int32_t  iIndex, const char *  pBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbysetting.c:391
	char[64] strTag;

}

// lobbysetting.c:416
extern int32_t LobbySettingGetNumber(LobbySettingRefT *  pSetting, const char *  pName, int32_t  iDefault) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbysetting.c:438
extern void LobbySettingSetNumber(LobbySettingRefT *  pSetting, const char *  pName, int32_t  iValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbysetting.c:456
extern void LobbySettingDestroy(LobbySettingRefT *  pSettings) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

