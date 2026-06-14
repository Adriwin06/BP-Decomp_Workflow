// LionChannel.cpp:181
void cLionChannelGroup::DeInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChannel.cpp:183
		U32 i;

	}
}

// LionChannel.cpp:312
void cLionChannelGroup::KeyFrameCountBuild() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChannel.cpp:314
		U32 lNewFlag;

		// LionChannel.cpp:315
		U32 i;

		// LionChannel.cpp:315
		U32 j;

		// LionChannel.cpp:316
		FP32 lTime;

		// LionChannel.cpp:317
		FP32 lTimeNext;

	}
}

// LionChannel.cpp:383
void cLionChannelGroup::KeyFrameTimesBuild(FP32 *  apTimes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChannel.cpp:385
		U32 lIndex;

		// LionChannel.cpp:386
		U32 lNewFlag;

		// LionChannel.cpp:387
		U32 i;

		// LionChannel.cpp:387
		U32 j;

		// LionChannel.cpp:388
		FP32 lTime;

		// LionChannel.cpp:389
		FP32 lTimeNext;

	}
}

// LionChannel.cpp:532
void cLionChannelGroup::ChannelKeyFrameArrayAdd(const void *  apValues, const FP32 *  apTimes, const U32  aCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChannel.cpp:534
		U8 * lpSrc;

		// LionChannel.cpp:535
		U8 * lpDst;

		// LionChannel.cpp:536
		U32 i;

		// LionChannel.cpp:537
		U32 lSize;

	}
}

// LionChannel.cpp:508
void cLionChannelGroup::ChannelKeyFrameStructAdd(void *  apStruct, const FP32  aTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChannel.cpp:510
		U8 * lpSrc;

		// LionChannel.cpp:511
		U8 * lpDst;

		// LionChannel.cpp:512
		U32 lSize;

	}
}

// LionChannel.cpp:459
void cLionChannelGroup::GetpChannel(const cLionArgsParser &  aArgs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChannel.cpp:461
		sLionChannel * lpChannel;

		// LionChannel.cpp:462
		U32 i;

	}
}

// LionChannel.cpp:155
void cLionChannelGroup::Init(EA::Allocator::ITaggedAllocator *  apAllocator, const cLionTokenTable *  apTokenTable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChannel.cpp:157
		U32 i;

	}
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	sLionChannel::Init(/* parameters */);
}

// LionChannel.cpp:215
void cLionChannelGroup::ChannelBegin(const char *  apName, const U32  aKeyFrameCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChannel.cpp:217
		sLionChannel * lpChannel;

		// LionChannel.cpp:218
		U32 i;

	}
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
}

// LionChannel.cpp:246
void cLionChannelGroup::ChannelBegin(const cLionArgsParser &  aArgs, const char *  apText, const U32  aOffset, const U32  aTextSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChannel.cpp:248
		U32 lCount;

		// LionChannel.cpp:249
		U32 lOffset;

		// LionChannel.cpp:250
		U32 lExitFlag;

		// LionChannel.cpp:251
		U32 lBracket;

		// LionChannel.cpp:252
		sLionChannel * lpChannel;

	}
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
}

// LionChannel.cpp:488
void cLionChannelGroup::ChannelKeyFrameAdd(const cLionArgsParser &  aArgs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	std(/* parameters */);
}

// LionChannel.cpp:32
void sLionChannel::Evaluate(const FP32  aTime, U8 *  apDstStruct) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChannel.cpp:34
		U32 lIndex0;

		// LionChannel.cpp:35
		U32 lIndex1;

		// LionChannel.cpp:36
		FP32 lWeight;

		// LionChannel.cpp:37
		FP32 lDiff;

		{
			// LionChannel.cpp:108
			cQuat lQuat0;

			// LionChannel.cpp:109
			cQuat lQuat1;

			// LionChannel.cpp:110
			cQuat lQuat2;

			// LionChannel.cpp:111
			cMatrix * lpSrc;

			// LionChannel.cpp:112
			cMatrix * lpDst;

			cQuat::FromMatrix(/* parameters */);
			cVector::GetX(/* parameters */);
			cVector::GetY(/* parameters */);
			cVector::GetZ(/* parameters */);
			{
				cQuat::SetX(/* parameters */);
				cQuat::SetY(/* parameters */);
				cQuat::SetZ(/* parameters */);
				cQuat::SetW(/* parameters */);
			}
			{
				cQuat::SetW(/* parameters */);
			}
			cQuat::FromMatrix(/* parameters */);
			cQuat::Slerp(/* parameters */);
			cQuat::GetY(/* parameters */);
			cQuat::GetY(/* parameters */);
			cQuat::GetZ(/* parameters */);
			cQuat::GetZ(/* parameters */);
			cQuat::GetW(/* parameters */);
			cQuat::GetW(/* parameters */);
			cQuat::SetX(/* parameters */);
			cQuat::ToMatrix(/* parameters */);
			cVector::SetZ(/* parameters */);
			cQuat::SetY(/* parameters */);
			cQuat::SetZ(/* parameters */);
			cVector::SetW(/* parameters */);
			cMatrix::SetYaxisX(/* parameters */);
			cMatrix::SetZaxisX(/* parameters */);
			cVector::SetY(/* parameters */);
			cVector::SetZ(/* parameters */);
			cVector::SetZ(/* parameters */);
			cVector::SetW(/* parameters */);
			cVector::SetY(/* parameters */);
			cVector::SetW(/* parameters */);
			cMatrix::SetWaxisX(/* parameters */);
			cVector::SetY(/* parameters */);
			cVector::SetZ(/* parameters */);
			cVector::SetW(/* parameters */);
			cQuat::GetX(/* parameters */);
			cQuat::SetW(/* parameters */);
			cQuat::GetZ(/* parameters */);
			cQuat::GetY(/* parameters */);
			cVector::GetY(/* parameters */);
			cVector::GetZ(/* parameters */);
			cVector::GetW(/* parameters */);
			cMatrix::SetYaxisY(/* parameters */);
			cVector::SetX(/* parameters */);
			cMatrix::SetXaxisY(/* parameters */);
			cMatrix::SetXaxisZ(/* parameters */);
			cMatrix::SetZaxisZ(/* parameters */);
			cMatrix::SetYaxisZ(/* parameters */);
			cMatrix::SetZaxisY(/* parameters */);
			cVector::GetZ(/* parameters */);
			cVector::GetW(/* parameters */);
			cVector::SetZ(/* parameters */);
			cVector::SetW(/* parameters */);
			cVector::GetY(/* parameters */);
			cVector::GetW(/* parameters */);
			cVector::SetY(/* parameters */);
			cVector::SetW(/* parameters */);
			cMatrix::SetXaxisW(/* parameters */);
			cVector::GetY(/* parameters */);
			cVector::GetZ(/* parameters */);
			cVector::GetW(/* parameters */);
			cVector::GetZ(/* parameters */);
			cVector::GetW(/* parameters */);
			cVector::SetX(/* parameters */);
			cVector::SetZ(/* parameters */);
			cVector::SetW(/* parameters */);
			cVector::GetY(/* parameters */);
			cVector::GetW(/* parameters */);
			cVector::SetX(/* parameters */);
			cVector::SetY(/* parameters */);
			cVector::SetW(/* parameters */);
			cMatrix::SetYaxisW(/* parameters */);
			cVector::GetZ(/* parameters */);
			cVector::GetW(/* parameters */);
			cVector::GetY(/* parameters */);
			cVector::GetZ(/* parameters */);
			cVector::GetW(/* parameters */);
			cVector::SetX(/* parameters */);
			cVector::SetZ(/* parameters */);
			cVector::SetW(/* parameters */);
			cVector::GetY(/* parameters */);
			cVector::GetW(/* parameters */);
			cVector::SetX(/* parameters */);
			cVector::SetY(/* parameters */);
			cVector::SetW(/* parameters */);
			cMatrix::SetZaxisW(/* parameters */);
			cVector::GetY(/* parameters */);
			cVector::GetZ(/* parameters */);
			cVector::GetW(/* parameters */);
			cMatrix::SetWaxisY(/* parameters */);
			cMatrix::SetWaxisZ(/* parameters */);
			cMatrix::SetWaxisW(/* parameters */);
		}
	}
	{
		// LionChannel.cpp:76
		U8 * lpSrc;

		// LionChannel.cpp:76
		U8 * lpDst;

	}
	{
		// LionChannel.cpp:79
		S8 * lpSrc;

		// LionChannel.cpp:79
		S8 * lpDst;

	}
	{
		// LionChannel.cpp:135
		cVector * lpSrc;

		// LionChannel.cpp:136
		cVector * lpDst;

		cVector::Lerp(/* parameters */);
		cVector::GetX(/* parameters */);
		cVector::SetX(/* parameters */);
		cVector::SetY(/* parameters */);
		cVector::SetZ(/* parameters */);
		cVector::Mul(/* parameters */);
		cVector::Add(/* parameters */);
	}
	{
		// LionChannel.cpp:124
		cQuat * lpSrc;

		// LionChannel.cpp:125
		cQuat * lpDst;

		cQuat::Slerp(/* parameters */);
		cQuat::GetX(/* parameters */);
		cQuat::GetY(/* parameters */);
		cQuat::GetY(/* parameters */);
		cQuat::GetZ(/* parameters */);
		cQuat::GetZ(/* parameters */);
		cQuat::GetW(/* parameters */);
		cQuat::GetW(/* parameters */);
		cQuat::SetX(/* parameters */);
		cQuat::SetY(/* parameters */);
		cQuat::SetZ(/* parameters */);
		cQuat::SetW(/* parameters */);
	}
	{
		// LionChannel.cpp:98
		cColour8 * lpSrc;

		// LionChannel.cpp:99
		cColour8 * lpDst;

		cColour8::Lerp(/* parameters */);
		cColour8::cColour8(/* parameters */);
		cColour8::cColour8(/* parameters */);
		imin(/* parameters */);
		imin(/* parameters */);
		imin(/* parameters */);
		cColour8::operator*(/* parameters */);
		cColour8::cColour8(/* parameters */);
		imin(/* parameters */);
		imin(/* parameters */);
		imin(/* parameters */);
		imin(/* parameters */);
		cColour8::cColour8(/* parameters */);
		cColour8::operator+(/* parameters */);
		imin(/* parameters */);
		imin(/* parameters */);
		imin(/* parameters */);
		imin(/* parameters */);
		cColour8::operator=(/* parameters */);
	}
	{
		// LionChannel.cpp:94
		FP32 * lpSrc;

		// LionChannel.cpp:94
		FP32 * lpDst;

	}
	{
		// LionChannel.cpp:91
		S32 * lpSrc;

		// LionChannel.cpp:91
		S32 * lpDst;

	}
	{
		// LionChannel.cpp:88
		U32 * lpSrc;

		// LionChannel.cpp:88
		U32 * lpDst;

	}
	{
		// LionChannel.cpp:85
		S16 * lpSrc;

		// LionChannel.cpp:85
		S16 * lpDst;

	}
	{
		// LionChannel.cpp:82
		U16 * lpSrc;

		// LionChannel.cpp:82
		U16 * lpDst;

	}
	{
		qacosf(/* parameters */);
		qsinf(/* parameters */);
		qsinf(/* parameters */);
		qcosf(/* parameters */);
		qsinf(/* parameters */);
		qcosf(/* parameters */);
	}
	{
		qacosf(/* parameters */);
		qsinf(/* parameters */);
		qsinf(/* parameters */);
		qcosf(/* parameters */);
		qsinf(/* parameters */);
		qcosf(/* parameters */);
	}
	{
		cQuat::SetX(/* parameters */);
		cQuat::SetY(/* parameters */);
		cQuat::SetZ(/* parameters */);
		cQuat::SetW(/* parameters */);
	}
	{
		cQuat::SetX(/* parameters */);
		cQuat::SetY(/* parameters */);
		cQuat::SetZ(/* parameters */);
		cQuat::SetW(/* parameters */);
	}
	qatanf(/* parameters */);
	cQuat::SetX(/* parameters */);
	cQuat::SetY(/* parameters */);
	cQuat::SetZ(/* parameters */);
	{
		cQuat::SetX(/* parameters */);
		cQuat::SetY(/* parameters */);
		cQuat::SetZ(/* parameters */);
		cQuat::SetW(/* parameters */);
	}
	qatanf(/* parameters */);
	{
		cQuat::SetX(/* parameters */);
		cQuat::SetY(/* parameters */);
		cQuat::SetZ(/* parameters */);
		cQuat::SetW(/* parameters */);
	}
	{
		cQuat::SetX(/* parameters */);
		cQuat::SetY(/* parameters */);
		cQuat::SetZ(/* parameters */);
		cQuat::SetW(/* parameters */);
	}
	qsqrtf(/* parameters */);
	qsqrtf(/* parameters */);
}

// LionChannel.cpp:566
void cLionChannelGroup::OptimisedTimesBuild(const U32 &  aCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionChannel.cpp:568
		sLionMemberToken * lpToken;

		// LionChannel.cpp:569
		FP32 * lpTimesOld;

		// LionChannel.cpp:570
		FP32 * lpTimesNew;

		// LionChannel.cpp:571
		FP32 lWeight;

		// LionChannel.cpp:572
		FP32 lErr;

		// LionChannel.cpp:573
		U8 * lpOptBase;

		// LionChannel.cpp:574
		U8 *[6] lpOpts;

		// LionChannel.cpp:575
		U8 * lpData;

		// LionChannel.cpp:576
		U8 * lpDest;

		// LionChannel.cpp:577
		U32 lSize;

		// LionChannel.cpp:578
		U32 lFrameCount;

		// LionChannel.cpp:579
		U32 i;

		// LionChannel.cpp:580
		U32 j;

	}
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	cLionTokenTable::GetpTokens(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::TagValuePair(/* parameters */);
	EA::TagValuePair::operator+(/* parameters */);
}

