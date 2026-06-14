// voipmixer.c:92
void _VoipMixerPostMixSingle(int16_t *  pDst, int32_t *  pSrc, int32_t  iNumSamples) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipmixer.c:93
	int32_t iData;

}

// voipmixer.c:122
void _VoipMixerPostMixMulti(int16_t *  pDst, int32_t *  pSrc, uint32_t  uBufMax, int32_t  iNumSamples) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipmixer.c:123
	int32_t iData;

	// voipmixer.c:124
	int32_t iMult;

	// voipmixer.c:126
	int64_t lVal;

}

// voipmixer.c:168
extern VoipMixerRefT * VoipMixerCreate(uint32_t  uFrameSamples) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipmixer.c:169
	VoipMixerRefT * pMixerRef;

	// voipmixer.c:170
	int32_t iMixBuffer;

	// voipmixer.c:171
	int32_t iMemGroup;

}

// voipmixer.c:219
extern void VoipMixerDestroy(VoipMixerRefT *  pMixerRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipmixer.c:220
	int32_t iMemGroup;

}

// voipmixer.c:246
extern int32_t VoipMixerAccumulate(VoipMixerRefT *  pMixerRef, unsigned char *  pInputData, int32_t  iDataSize, int32_t  iMixBuffer, int32_t  iMixMask, int32_t  iChannel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipmixer.c:247
	int32_t iNumSamples;

	{
		// voipmixer.c:251
		int32_t iBufferIndex;

	}
}

// voipmixer.c:314
extern int32_t VoipMixerProcess(VoipMixerRefT *  pMixerRef, unsigned char *  pFrameData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipmixer.c:315
	uint32_t uAbsVal;

	// voipmixer.c:315
	uint32_t uBufMax;

	// voipmixer.c:316
	int32_t * pMixBuffer;

	// voipmixer.c:317
	int32_t iSample;

}

