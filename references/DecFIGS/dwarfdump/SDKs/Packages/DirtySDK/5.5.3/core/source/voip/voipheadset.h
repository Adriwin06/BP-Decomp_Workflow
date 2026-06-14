// voipheadset.h:27
typedef VoipHeadsetRefT VoipHeadsetRefT;

// voipheadset.h:27
struct VoipHeadsetRefT {
	// voipheadsetps3.c:65
	int32_t iMaxChannels;

	// voipheadsetps3.c:68
	uint8_t volatile bMicOn;

	// voipheadsetps3.c:71
	uint8_t uSendSeq;

	// voipheadsetps3.c:72
	uint8_t bLoopback;

	// voipheadsetps3.c:73
	uint32_t uFrameSend;

	// voipheadsetps3.c:76
	VoipHeadsetMicDataCbT * pMicDataCb;

	// voipheadsetps3.c:77
	VoipHeadsetStatusCbT * pStatusCb;

	// voipheadsetps3.c:78
	void * pCbUserData;

	// voipheadsetps3.c:81
	VoipPacketT PacketData;

	// voipheadsetps3.c:83
	VoipChannelRefT * pChannelRef;

	// voipheadsetps3.c:84
	VoipMixerRefT * pMixerRef;

	// voipheadsetps3.c:86
	int32_t iAGCLevel;

	// voipheadsetps3.c:87
	float fBkgndNoiseGain;

	// voipheadsetps3.c:88
	int32_t iReverb;

	// voipheadsetps3.c:90
	int32_t iSpeakerPort;

	// voipheadsetps3.c:91
	int32_t bPlaying;

	// voipheadsetps3.c:92
	int32_t bRecording;

	// voipheadsetps3.c:93
	int32_t bTriedToOpen;

	// voipheadsetps3.c:94
	int32_t bAudioLibOwner;

	// voipheadsetps3.c:96
	int16_t[640] aReadBuffer;

	// voipheadsetps3.c:97
	int32_t iCurrReadIndex;

	// voipheadsetps3.c:98
	int32_t iBlocksToQueue;

	// voipheadsetps3.c:100
	sys_addr_t pBufferAddress;

	// voipheadsetps3.c:101
	sys_addr_t pBufferEnd;

	// voipheadsetps3.c:102
	sys_addr_t piPortReadIndex;

	// voipheadsetps3.c:103
	sys_addr_t pNextWriteLoc;

}

// voipheadset.h:30
typedef void (const void *, int32_t, void *, unsigned char) VoipHeadsetMicDataCbT;

// voipheadset.h:33
typedef void (int32_t, uint32_t, void *) VoipHeadsetStatusCbT;

