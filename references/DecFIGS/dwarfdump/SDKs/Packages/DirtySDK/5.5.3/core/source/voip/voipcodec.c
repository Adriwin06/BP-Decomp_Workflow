// voipcodec.c:38
struct VoipCodecRegT {
	// voipcodec.c:39
	uint32_t uCodecIdent;

	// voipcodec.c:40
	const VoipCodecDefT * pCodecDef;

	// voipcodec.c:41
	VoipCodecRefT * pCodecRef;

}

// voipcodec.c:42
typedef VoipCodecRegT VoipCodecRegT;

// voipcodec.c:76
VoipCodecRegT * _VoipCodecGetActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipcodec.c:77
	VoipCodecRegT * pRegEntry;

}

// voipcodec.c:109
extern void VoipCodecRegister(uint32_t  uCodecIdent, const VoipCodecDefT *  pCodecDef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipcodec.c:110
	int32_t iCodec;

}

// voipcodec.c:153
extern int32_t VoipCodecCreate(uint32_t  uCodecIdent, int32_t  iDecodeChannels) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipcodec.c:154
	VoipCodecRegT * pRegEntry;

	// voipcodec.c:155
	int32_t iCodec;

}

// voipcodec.c:226
extern void VoipCodecDestroy(int32_t  iCodecIdent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipcodec.c:227
	VoipCodecRegT * pRegEntry;

	// voipcodec.c:228
	int32_t iCodec;

}

// voipcodec.c:260
extern int32_t VoipCodecEncode(unsigned char *  pOutput, const int16_t *  pInput, int32_t  iNumSamples) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipcodec.c:261
	VoipCodecRegT * pRegEntry;

	// voipcodec.c:262
	int32_t iResult;

}

// voipcodec.c:307
extern int32_t VoipCodecDecode(int32_t *  pOutput, const unsigned char *  pInput, int32_t  iInputBytes, int32_t  iChannel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipcodec.c:308
	VoipCodecRegT * pRegEntry;

	// voipcodec.c:309
	int32_t iResult;

}

// voipcodec.c:352
extern void VoipCodecReset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipcodec.c:353
	VoipCodecRegT * pRegEntry;

}

// voipcodec.c:381
extern void VoipCodecControl(int32_t  iSelect, int32_t  iValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipcodec.c:382
	VoipCodecRegT * pRegEntry;

}

// voipcodec.c:49
VoipCodecRegT[8] _VoipCodec_RegTable;

// voipcodec.c:52
int32_t _VoipCodec_iNumCodecs;

// voipcodec.c:55
int32_t _VoipCodec_iActiveCodec;

