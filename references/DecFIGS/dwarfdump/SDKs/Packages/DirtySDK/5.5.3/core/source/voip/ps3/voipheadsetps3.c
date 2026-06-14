// voipheadsetps3.c:163
int32_t _VoipHeadsetOpenInputDevice(VoipHeadsetRefT *  pHeadset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipheadsetps3.c:164
	int32_t iResult;

}

// voipheadsetps3.c:219
void _VoipHeadsetStop(VoipHeadsetRefT *  pHeadset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipheadsetps3.c:220
	int32_t iResult;

}

// voipheadsetps3.c:278
int32_t _VoipHeadsetSetInputSignalAttr(VoipHeadsetRefT *  pHeadset, CellMicSignalAttr  eSignalAttr, void *  pVal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipheadsetps3.c:279
	int32_t iResult;

}

// voipheadsetps3.c:309
int32_t _VoipHeadsetGetDataFromMic(VoipHeadsetRefT *  pHeadset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipheadsetps3.c:310
	float[640] fSampleData;

	// voipheadsetps3.c:311
	int32_t iReadLen;

	// voipheadsetps3.c:312
	int32_t iNumSamples;

	// voipheadsetps3.c:313
	int32_t iIndex;

	// voipheadsetps3.c:313
	int32_t iLocal;

}

// voipheadsetps3.c:458
float _VoipHeadsetUpsample1To6(float  fPrevSample, float  fCurrSample, float *  pOutSamples) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipheadsetps3.c:459
	const float f1Sixth;

	// voipheadsetps3.c:460
	const float f2Sixths;

	// voipheadsetps3.c:461
	const float f3Sixths;

	// voipheadsetps3.c:462
	const float f4Sixths;

	// voipheadsetps3.c:463
	const float f5Sixths;

	// voipheadsetps3.c:465
	const float fScale;

	// voipheadsetps3.c:467
	float fScaledCurr;

}

// voipheadsetps3.c:504
float _VoipHeadsetUpsample1To4(float  fPrevSample, float  fCurrSample, float *  pOutSamples) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipheadsetps3.c:505
	const float f1Fourth;

	// voipheadsetps3.c:506
	const float f2Fourths;

	// voipheadsetps3.c:507
	const float f3Fourths;

	// voipheadsetps3.c:509
	const float fScale;

	// voipheadsetps3.c:511
	float fScaledCurr;

}

// voipheadsetps3.c:544
float _VoipHeadsetUpsample1To3(float  fPrevSample, float  fCurrSample, float *  pOutSamples) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipheadsetps3.c:545
	const float f1Third;

	// voipheadsetps3.c:546
	const float f2Thirds;

	// voipheadsetps3.c:548
	const float fScale;

	// voipheadsetps3.c:550
	float fScaledCurr;

}

// voipheadsetps3.c:579
void _VoipHeadsetProcessMicrophone(VoipHeadsetRefT *  pHeadset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// voipheadsetps3.c:586
		int32_t iRetVal;

		{
			// voipheadsetps3.c:604
			CellMicInputFormatI FormatData;

			// voipheadsetps3.c:605
			float fBackgroundNoiseGain;

			// voipheadsetps3.c:606
			int32_t iAGCLevel;

			// voipheadsetps3.c:606
			int32_t iReverb;

		}
	}
	{
		// voipheadsetps3.c:646
		int32_t iNumSamples;

		{
			// voipheadsetps3.c:656
			VoipPacketT * pPacket;

			// voipheadsetps3.c:657
			unsigned char * pData;

			// voipheadsetps3.c:658
			int32_t iCompBytes;

		}
	}
}

// voipheadsetps3.c:742
int32_t _VoipHeadsetReadLocMoved(VoipHeadsetRefT *  pHeadset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipheadsetps3.c:743
	uint32_t uReadIndex;

	// voipheadsetps3.c:744
	uint32_t uNextWriteAddress;

	// voipheadsetps3.c:745
	uint32_t uNextReadAddress;

	// voipheadsetps3.c:746
	uint32_t uEndAddress;

	// voipheadsetps3.c:747
	uint32_t uDist;

}

// voipheadsetps3.c:785
void * _VoipHeadsetTransferBlock(VoipHeadsetRefT *  pHeadset, void *  pSourceData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipheadsetps3.c:844
void _VoipHeadsetProcessPlayback(VoipHeadsetRefT *  pHeadset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipheadsetps3.c:845
	int32_t iResult;

	{
		// voipheadsetps3.c:850
		CellAudioPortParam audioParam;

		// voipheadsetps3.c:851
		CellAudioPortConfig audioConfig;

	}
	{
		// voipheadsetps3.c:900
		int16_t[640] FrameData;

		// voipheadsetps3.c:901
		int32_t iMixedBytes;

		{
			// voipheadsetps3.c:919
			float[7680] fTranslatedBuffer;

			// voipheadsetps3.c:920
			float fPrevSample;

			// voipheadsetps3.c:921
			void * pSourceData;

			// voipheadsetps3.c:922
			int32_t iIndex;

		}
	}
}

// voipheadsetps3.c:1034
extern VoipHeadsetRefT * VoipHeadsetCreate(int32_t  iMaxChannels, VoipHeadsetMicDataCbT *  pMicDataCb, VoipHeadsetStatusCbT *  pStatusCb, void *  pCbUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipheadsetps3.c:1035
	VoipHeadsetRefT * pHeadset;

	// voipheadsetps3.c:1036
	int32_t iMemGroup;

}

// voipheadsetps3.c:1109
extern void VoipHeadsetDestroy(VoipHeadsetRefT *  pHeadset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipheadsetps3.c:1144
extern void VoipHeadsetReceiveVoiceDataCb(VoipUserT *  pRemoteUser, VoipPacketT *  pVoicePacket, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipheadsetps3.c:1145
	VoipHeadsetRefT * pHeadset;

}

// voipheadsetps3.c:1181
extern void VoipHeadsetRegisterUserCb(VoipUserT *  pRemoteUser, void *  pUserData, uint32_t  bRegister) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// voipheadsetps3.c:1182
	VoipHeadsetRefT * pHeadset;

}

// voipheadsetps3.c:1204
extern void VoipHeadsetProcess(VoipHeadsetRefT *  pHeadset, uint32_t  uFrameCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipheadsetps3.c:1227
extern void VoipHeadsetSetMicStatus(VoipHeadsetRefT *  pHeadset, uint32_t  bMicOn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipheadsetps3.c:1252
extern void VoipHeadsetSetVolume(VoipHeadsetRefT *  pHeadset, int32_t  iPlayVol, uint32_t  iRecVol) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipheadsetps3.c:1285
extern int32_t VoipHeadsetControl(VoipHeadsetRefT *  pHeadset, int32_t  iSelect, int32_t  iValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// voipheadsetps3.c:1294
		void * pTemp;

	}
	{
		// voipheadsetps3.c:1318
		float fNewVolume;

	}
}

// voipheadsetps3.c:1349
extern int32_t VoipHeadsetStatus(VoipHeadsetRefT *  pHeadset, int32_t  iSelect, int32_t  iValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// voipheadsetps3.c:1371
extern void VoipHeadsetSpkrCallback(VoipHeadsetRefT *  pHeadset, VoipSpkrCallbackT *  pCallback, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

