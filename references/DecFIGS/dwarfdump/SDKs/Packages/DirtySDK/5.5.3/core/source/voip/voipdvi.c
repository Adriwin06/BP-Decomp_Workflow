// voipdvi.c:54
struct DVICompStateT {
	// voipdvi.c:55
	int16_t iEstimate;

	// voipdvi.c:56
	int16_t iStepIndex;

}

// voipdvi.c:57
typedef DVICompStateT DVICompStateT;

// voipdvi.c:60
struct VoipDVIStateT {
	// voipdvi.c:61
	VoipCodecRefT CodecState;

	// voipdvi.c:63
	DVICompStateT EncodeState;

}

// voipdvi.c:64
typedef VoipDVIStateT VoipDVIStateT;

// voipdvi.c:202
void _VoipDVISetupBlock3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipdvi.c:203
	int32_t iStep;

	// voipdvi.c:204
	int32_t iLast;

}

// voipdvi.c:237
VoipCodecRefT * _VoipDVICreate(int32_t  iDecodeChannels) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipdvi.c:238
	VoipDVIStateT * pState;

}

// voipdvi.c:275
void _VoipDVIDestroy(VoipCodecRefT *  pState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipdvi.c:297
int32_t _VoipDVIEncodeBlock3(VoipCodecRefT *  pState, unsigned char *  pOut, const int16_t *  pInp, int32_t  iNumSamples) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipdvi.c:298
	int32_t iCount;

	// voipdvi.c:299
	int32_t iIndex;

	// voipdvi.c:300
	int32_t iDelta;

	// voipdvi.c:301
	int32_t iSample;

	// voipdvi.c:302
	int32_t iEstimate;

	// voipdvi.c:303
	int32_t iStepIndex;

	// voipdvi.c:304
	unsigned char[8] Stage;

	// voipdvi.c:305
	unsigned char * pBeg;

	// voipdvi.c:306
	DVICompStateT * pCompState;

}

// voipdvi.c:160
int32_t _DeltaDecode3(int32_t  iStep, int32_t  iEncode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipdvi.c:161
	int32_t iDelta;

}

// voipdvi.c:115
int32_t _DeltaEncode3(int32_t  iStep, int32_t  iDelta) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipdvi.c:116
	int32_t iEncode;

}

// voipdvi.c:378
int32_t _VoipDVIDecodeBlock3(VoipCodecRefT *  pState, int32_t *  pOut, const unsigned char *  pInp, int32_t  iInputBytes, int32_t  iChannel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipdvi.c:379
	int32_t iCount;

	// voipdvi.c:379
	int32_t iNumSamples;

	// voipdvi.c:380
	int32_t iIndex;

	// voipdvi.c:381
	int32_t iInput;

	// voipdvi.c:382
	int32_t iEstimate;

	// voipdvi.c:383
	int32_t iStepIndex;

	// voipdvi.c:384
	int32_t * pBeg;

	// voipdvi.c:385
	unsigned char[8] Stage;

	// voipdvi.c:386
	DVICompStateT DecodeState;

}

// voipdvi.c:450
void _VoipDVIReset(VoipCodecRefT *  pState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipdvi.c:451
	VoipDVIStateT * pDVIState;

}

// voipdvi.c:91
int16_t _StepLimit3;

// voipdvi.c:92
int16_t[64] _StepTable3;

// voipdvi.c:93
int16_t[4] _StepIndex3;

// voipdvi.c:80
extern const VoipCodecDefT VoipDVI_CodecDef;

