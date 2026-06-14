// voipps3.c:108
void _VoipMicDataCb(const void *  pVoiceData, int32_t  iDataSize, void *  pUserData, unsigned char  uSendSeqn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipps3.c:109
	VoipRefT * pVoip;

}

// voipps3.c:135
void _VoipStatusCb(int32_t  iHeadset, uint32_t  bStatus, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipps3.c:136
	VoipRefT * pRef;

}

// voipps3.c:168
void _VoipUpdatePrivileges(VoipRefT *  pVoip) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipps3.c:191
void _VoipUpdateRemoteStatus(VoipRefT *  pVoip) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipps3.c:192
	uint32_t uSendMask;

	// voipps3.c:192
	uint32_t uRecvMask;

	// voipps3.c:192
	uint32_t uChannelMask;

	// voipps3.c:192
	uint32_t bEnabled;

	// voipps3.c:193
	int32_t iChannel;

	// voipps3.c:194
	VoipConnectionT * pConnection;

}

// voipps3.c:262
void _VoipThread(uint64_t  pArg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipps3.c:263
	VoipRefT * pVoip;

	// voipps3.c:264
	uint32_t uProcessCt;

}

// voipps3.c:316
void _VoipCallback(VoipRefT *  pVoip, VoipCbTypeE  eCbType, int32_t  iValue, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipps3.c:345
void _VoipIdle(void *  pData, uint32_t  uTick) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipps3.c:346
	VoipRefT * pVoip;

}

// voipps3.c:389
extern VoipRefT * VoipStartup(int32_t  iMaxPeers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipps3.c:390
	VoipRefT * pVoip;

	// voipps3.c:391
	int32_t iMemGroup;

}

// voipps3.c:482
extern VoipRefT * VoipGetRef() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipps3.c:503
extern void VoipShutdown(VoipRefT *  pVoip) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipps3.c:562
extern void VoipSetLocalUser(VoipRefT *  pVoip, const char *  pUserID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipps3.c:588
extern void VoipSetEventCallback(VoipRefT *  pVoip, VoipCallbackT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipps3.c:615
extern int32_t VoipConnect4(VoipRefT *  pVoip, int32_t  iConnID, const char *  pUserID, uint32_t  uAddress, uint32_t  uManglePort, uint32_t  uGamePort, uint32_t  uClientId, uint32_t  uSessionId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipps3.c:616
	VoipUserT UserID;

}

// voipps3.c:658
extern void VoipDisconnect(VoipRefT *  pVoip, int32_t  iConnID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipps3.c:683
extern void VoipRemove(VoipRefT *  pVoip, int32_t  iConnID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipps3.c:715
extern int32_t VoipRemote(VoipRefT *  pVoip, int32_t  iConnID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipps3.c:716
	int32_t iRemoteStatus;

}

// voipps3.c:752
extern int32_t VoipLocal(VoipRefT *  pVoip) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipps3.c:773
extern void VoipMicrophone(VoipRefT *  pVoip, uint32_t  uConnMask) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipps3.c:794
extern void VoipSpeaker(VoipRefT *  pVoip, uint32_t  uConnMask) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipps3.c:830
extern int32_t VoipStatus(VoipRefT *  pVoip, int32_t  iSelect, int32_t  iValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipps3.c:897
extern int32_t VoipControl(VoipRefT *  pVoip, int32_t  iControl, int32_t  iValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipps3.c:944
extern int32_t VoipGetProfileStat(VoipRefT *  pVoip, VoipProfStatE  eProfStat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipps3.c:964
extern int32_t VoipGetProfileTime(VoipRefT *  pVoip) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipps3.c:986
extern void VoipSpkrCallback(VoipRefT *  pVoip, VoipSpkrCallbackT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipps3.c:82
VoipRefT * _Voip_pRef;

