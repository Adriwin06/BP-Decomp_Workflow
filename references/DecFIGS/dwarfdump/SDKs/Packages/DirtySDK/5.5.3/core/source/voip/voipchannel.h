// voipchannel.h:27
typedef VoipChannelRefT VoipChannelRefT;

// voipchannel.h:27
struct VoipChannelRefT {
	// voipchannel.c:57
	VoipMixerRefT * pMixerRef;

	// voipchannel.c:59
	int32_t iNumChannels;

	// voipchannel.c:60
	VoipChannelT[1] Channels;

}

