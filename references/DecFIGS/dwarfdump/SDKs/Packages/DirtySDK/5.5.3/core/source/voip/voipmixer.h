// voipmixer.h:29
typedef VoipMixerRefT VoipMixerRefT;

// voipmixer.h:29
struct VoipMixerRefT {
	// voipmixer.c:55
	int32_t iCurMixBuffer;

	// voipmixer.c:56
	int32_t iMixBufferSize;

	// voipmixer.c:57
	int32_t *[8] pMixBuffer;

	// voipmixer.c:58
	int32_t[8] iMixCount;

	// voipmixer.c:59
	int32_t[8] iMixMask;

}

