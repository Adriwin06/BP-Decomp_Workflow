// voip.h:55
typedef VoipRefT VoipRefT;

// voip.h:55
struct VoipRefT {
	// voipps3.c:53
	VoipConnectionlistT Connectionlist;

	// voipps3.c:54
	VoipHeadsetRefT * pHeadset;

	// voipps3.c:56
	VoipCallbackT * pCallback;

	// voipps3.c:57
	void * pUserData;

	// voipps3.c:59
	uint32_t uPortHeadsetStatus;

	// voipps3.c:61
	uint32_t uLastFrom;

	// voipps3.c:62
	uint32_t uLastHsetStatus;

	// voipps3.c:63
	uint32_t uLastLocalStatus;

	// voipps3.c:65
	uint32_t uUserSendMask;

	// voipps3.c:66
	uint32_t uUserRecvMask;

	// voipps3.c:68
	NetCritT ThreadCrit;

	// voipps3.c:69
	int32_t volatile iThreadActive;

	// voipps3.c:70
	sys_ppu_thread_t volatile iThreadId;

	// voipps3.c:72
	int32_t bPrivileged;

}

// voip.h:58
typedef void (VoipRefT *, VoipCbTypeE, int32_t, void *) VoipCallbackT;

