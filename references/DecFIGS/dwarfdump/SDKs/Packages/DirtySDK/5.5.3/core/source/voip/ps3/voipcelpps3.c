// voipcelpps3.c:57
typedef VoipCELPStateT VoipCELPStateT;

// voipcelpps3.c:57
struct VoipCELPStateT {
	// voipcelpps3.c:73
	VoipCodecRefT CodecState;

	// voipcelpps3.c:76
	int32_t iMemGroup;

	// voipcelpps3.c:79
	char * pEncodeBuffer;

	// voipcelpps3.c:80
	CellCelpEncHandle EncodeHandle;

	// voipcelpps3.c:83
	int32_t iNumChannels;

	// voipcelpps3.c:84
	VoipCELPDecoderT * pDecoders;

}

// voipcelpps3.c:60
struct VoipCELPDecoderT {
	// voipcelpps3.c:61
	int32_t iChannel;

	// voipcelpps3.c:62
	VoipCELPStateT * pModule;

	// voipcelpps3.c:63
	CellAdecHandle DecoderHandle;

	// voipcelpps3.c:64
	int32_t bWaitForCb;

	// voipcelpps3.c:65
	int32_t bWaitForSeqDone;

	// voipcelpps3.c:68
	void * pBuffer;

}

// voipcelpps3.c:69
typedef VoipCELPDecoderT VoipCELPDecoderT;

// voipcelpps3.c:134
int32_t _VoipCELPCreateEncoder(VoipCELPStateT *  pState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipcelpps3.c:135
	int32_t iResult;

	// voipcelpps3.c:136
	CellCelpEncAttr EncodeAttr;

	// voipcelpps3.c:137
	CellCelpEncResource EncodeRes;

	// voipcelpps3.c:138
	CellCelpEncParam EncodeParams;

}

// voipcelpps3.c:205
void _VoipCELPDestroyEncoder(VoipCELPStateT *  pModuleState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipcelpps3.c:206
	int32_t iResult;

}

// voipcelpps3.c:243
int32_t _VoipCELPDecodeCb(CellAdecHandle  AdecHandle, CellAdecMsgType  MsgType, int32_t  iMessage, void *  pArg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipcelpps3.c:244
	VoipCELPDecoderT * pDecoder;

}

// voipcelpps3.c:281
int32_t _VoipCELPCreateDecoder(VoipCELPStateT *  pState, VoipCELPDecoderT *  pDecoder, int32_t  iChannel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipcelpps3.c:282
	int32_t iResult;

	// voipcelpps3.c:283
	CellAdecType type;

	// voipcelpps3.c:284
	CellAdecAttr attr;

	// voipcelpps3.c:285
	CellAdecResource res;

	// voipcelpps3.c:290
	CellAdecCb cb;

	// voipcelpps3.c:291
	CellAdecParamCelp DecoderParams;

}

// voipcelpps3.c:351
VoipCodecRefT * _VoipCELPCreate(int32_t  iDecodeChannels) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipcelpps3.c:352
	int32_t iMemGroup;

	// voipcelpps3.c:353
	int32_t iChannel;

	// voipcelpps3.c:356
	VoipCELPStateT * pState;

}

// voipcelpps3.c:409
void _VoipCELPDestroy(VoipCodecRefT *  pState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipcelpps3.c:410
	VoipCELPStateT * pModuleState;

	// voipcelpps3.c:411
	int32_t iChannel;

}

// voipcelpps3.c:459
int32_t _VoipCELPEncodeBlock(VoipCodecRefT *  pState, unsigned char *  pOut, const int16_t *  pInp, int32_t  iNumSamples) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipcelpps3.c:460
	CellCelpEncPcmInfo PcmInfo;

	// voipcelpps3.c:461
	CellCelpEncAuInfo AuInfo;

	// voipcelpps3.c:462
	VoipCELPStateT * pModule;

	// voipcelpps3.c:463
	int32_t iResult;

	// voipcelpps3.c:464
	float[160] fFrameBuffer;

	// voipcelpps3.c:465
	unsigned char * pOutBuff;

	// voipcelpps3.c:466
	const int16_t * pInBuff;

	// voipcelpps3.c:467
	int32_t iNumPackets;

	// voipcelpps3.c:468
	int32_t iPacket;

	// voipcelpps3.c:468
	int32_t iSample;

	// voipcelpps3.c:468
	int32_t iNumEncodedBytes;

}

// voipcelpps3.c:561
int32_t _VoipCELPDecodeBlock(VoipCodecRefT *  pState, int32_t *  pOut, const unsigned char *  pInp, int32_t  iInputBytes, int32_t  iChannel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipcelpps3.c:562
	unsigned char[80] InputBuff;

	// voipcelpps3.c:563
	float[240] OutputBuff;

	// voipcelpps3.c:565
	VoipCELPStateT * pModule;

	// voipcelpps3.c:567
	CellAdecAuInfo auInfo;

	// voipcelpps3.c:568
	const CellAdecPcmItem * pcmItem;

	// voipcelpps3.c:569
	int32_t iNumSamples;

	// voipcelpps3.c:570
	int32_t iResult;

	// voipcelpps3.c:571
	int32_t iSample;

	// voipcelpps3.c:572
	int32_t iNumFrames;

	// voipcelpps3.c:573
	int32_t iFrame;

	// voipcelpps3.c:574
	const unsigned char * pInBuff;

	// voipcelpps3.c:575
	int32_t * pOutBuff;

	{
		// voipcelpps3.c:594
		int32_t iSamplesInFrame;

	}
}

// voipcelpps3.c:674
void _VoipCELPReset(VoipCodecRefT *  pState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipcelpps3.c:92
unsigned char[430] EncodeOutputBuff;

// voipcelpps3.c:106
extern const VoipCodecDefT VoipCELP_CodecDef;

