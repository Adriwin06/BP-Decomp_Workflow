// voipchannel.c:45
struct VoipChannelT {
	// voipchannel.c:46
	VoipUserT PacketUser;

	// voipchannel.c:47
	uint32_t uRecvSeq;

	// voipchannel.c:48
	uint32_t iMixBuffer;

	// voipchannel.c:51
	uint32_t[5] iTicksOnLastProcess;

}

// voipchannel.c:52
typedef VoipChannelT VoipChannelT;

// voipchannel.c:92
void _VoipChannelCopyUser(VoipUserT *  pDst, const VoipUserT *  pSrc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipchannel.c:118
extern VoipChannelRefT * VoipChannelCreate(int32_t  iMaxChannels, VoipMixerRefT *  pMixerRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipchannel.c:119
	VoipChannelRefT * pChannelRef;

	// voipchannel.c:120
	int32_t iRefSize;

}

// voipchannel.c:154
extern void VoipChannelDestroy(VoipChannelRefT *  pChannelRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipchannel.c:176
extern void VoipChannelReceiveVoiceData(VoipChannelRefT *  pChannelRef, VoipUserT *  pRemoteUser, VoipPacketT *  pVoicePacket) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipchannel.c:177
	VoipChannelT * pChannel;

	// voipchannel.c:178
	int32_t iChannel;

	{
		// voipchannel.c:186
		int32_t iChannelMask;

		// voipchannel.c:187
		int32_t iMixBuffer;

		{
			// voipchannel.c:191
			int32_t iIndex;

		}
	}
}

// voipchannel.c:249
extern void VoipChannelRegisterUser(VoipChannelRefT *  pChannelRef, VoipUserT *  pRemoteUser, uint32_t  bRegister) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipchannel.c:250
	VoipUserT * pChannelUser;

	// voipchannel.c:251
	int32_t iChannel;

}

