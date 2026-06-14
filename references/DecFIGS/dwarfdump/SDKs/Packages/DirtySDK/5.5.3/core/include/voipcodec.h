// voipcodec.h:26
typedef VoipCodecRefT VoipCodecRefT;

// voipcodec.h:26
struct VoipCodecRefT {
	// voipcodec.h:60
	const VoipCodecDefT * pCodecDef;

	// voipcodec.h:61
	int32_t iDecodeChannels;

}

// voipcodec.h:29
typedef VoipCodecRefT *(int32_t) VoipCodecCreateT;

// voipcodec.h:32
typedef void (VoipCodecRefT *) VoipCodecDestroyT;

// voipcodec.h:35
typedef int32_t (VoipCodecRefT *, unsigned char *, const int16_t *, int32_t) VoipCodecEncodeT;

// voipcodec.h:38
typedef int32_t (VoipCodecRefT *, int32_t *, const unsigned char *, int32_t, int32_t) VoipCodecDecodeT;

// voipcodec.h:41
typedef void (VoipCodecRefT *) VoipCodecResetT;

// voipcodec.h:44
typedef void (VoipCodecRefT *, int32_t, int32_t) VoipCodecControlT;

// voipcodec.h:48
struct VoipCodecDefT {
	// voipcodec.h:49
	VoipCodecCreateT * pCreate;

	// voipcodec.h:50
	VoipCodecDestroyT * pDestroy;

	// voipcodec.h:51
	VoipCodecEncodeT * pEncode;

	// voipcodec.h:52
	VoipCodecDecodeT * pDecode;

	// voipcodec.h:53
	VoipCodecResetT * pReset;

	// voipcodec.h:54
	VoipCodecControlT * pControl;

}

// voipcodec.h:55
typedef VoipCodecDefT VoipCodecDefT;

