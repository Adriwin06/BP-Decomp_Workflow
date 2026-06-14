// LionFog.cpp:26
void cLionFog::Enable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionFog.cpp:38
void cLionFog::Disable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionFog.cpp:50
void cLionFog::SetPlaneZ(const U32  aPlaneIndex, const FP32  aZ) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionFog.cpp:65
void cLionFog::SetPlaneRGBA(const U32  aPlaneIndex, const U32  aRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// LionFog.cpp:80
void cLionFog::GetFoggedRGBA(const FP32  aZ, const U32  aRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionFog.cpp:82
		U32 lRGBA;

		// LionFog.cpp:83
		S32 lIndex;

		// LionFog.cpp:84
		FP32 lWeight;

		// LionFog.cpp:85
		FP32 lZ;

		// LionFog.cpp:86
		cVector lOldV;

		// LionFog.cpp:87
		cVector lFogV;

		// LionFog.cpp:88
		cVector lNewV;

		imin(/* parameters */);
		cVector::FromU32(/* parameters */);
		cVector::FromU32(/* parameters */);
		cVector::SetY(/* parameters */);
		cVector::SetZ(/* parameters */);
		cVector::Lerp4(/* parameters */);
		cVector::Sub4(/* parameters */);
		cVector::SetW(/* parameters */);
		vec_vspltw(/* parameters */);
		cVector::ToU32(/* parameters */);
		vec_madd(/* parameters */);
		cVector::Add4(/* parameters */);
		vec_vaddfp(/* parameters */);
	}
	imax(/* parameters */);
}

// LionFog.cpp:122
void cLionFog::BuildTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// LionFog.cpp:124
		FP32 lIndex;

		// LionFog.cpp:125
		FP32 lIndexStep;

		// LionFog.cpp:126
		cVector[256] lVecs;

		// LionFog.cpp:127
		U32 i;

		cVector::FromU32(/* parameters */);
		{
			// LionFog.cpp:135
			cVector lPln;

			// LionFog.cpp:136
			FP32 lA0;

			// LionFog.cpp:137
			FP32 lA1;

			cVector::FromU32(/* parameters */);
		}
		cVector::SetY(/* parameters */);
		cVector::SetZ(/* parameters */);
		cVector::GetW(/* parameters */);
		cVector::SetW(/* parameters */);
		fmin2(/* parameters */);
		cVector::Lerp4(/* parameters */);
		vec_vspltw(/* parameters */);
		vec_madd(/* parameters */);
		cVector::Add4(/* parameters */);
		cVector::SetW(/* parameters */);
		{
			// LionFog.cpp:155
			cVector lCol;

			// LionFog.cpp:156
			S32 lIndex0;

			// LionFog.cpp:156
			S32 lIndex1;

			// LionFog.cpp:157
			FP32 lWeight;

			cVector::Lerp4(/* parameters */);
			cVector::Sub4(/* parameters */);
			vec_vspltw(/* parameters */);
			vec_madd(/* parameters */);
			cVector::Add4(/* parameters */);
		}
	}
}

// LionFog.cpp:13
