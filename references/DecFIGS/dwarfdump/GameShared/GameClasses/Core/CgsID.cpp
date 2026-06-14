// CgsID.cpp:71
char CgsIDUnConvert(CgsID  lCompressed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsID.cpp:73
		char lcChar;

	}
}

// CgsID.cpp:209
extern void CgsIDUnCompress(CgsID  lID, char *  lcpString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsID.cpp:211
		int32_t liI;

		CgsIDUnConvert(/* parameters */);
	}
}

// CgsID.cpp:237
extern CgsID CgsIDMaskCharacters(CgsID  lID, int32_t  liStartIndex, int32_t  liEndIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsID.cpp:239
		CgsID liewID;

	}
}

// CgsID.cpp:270
extern CgsID CgsIDScroll(CgsID  lID, int32_t  liAmount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsID.cpp:313
extern CgsID CgsIDConcatenate(CgsID  lID1, CgsID  lID2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsID.cpp:315
		int32_t liIndex;

	}
}

// CgsID.cpp:362
extern int32_t CgsIDGetLength(CgsID  lID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsID.cpp:364
		int32_t liCount;

	}
}

// CgsID.cpp:393
extern void CgsIDConvertToString(CgsID  lID, char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsID.cpp:395
		char * lpcTemp;

	}
}

// CgsID.cpp:419
extern int32_t CgsIDExtractTrailingNumber(CgsID  lID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsID.cpp:421
		int32_t liCount;

		// CgsID.cpp:422
		int32_t liDivisor;

		// CgsID.cpp:423
		int32_t liRemainder;

		// CgsID.cpp:424
		int32_t liDigit;

		// CgsID.cpp:425
		int32_t liMultiplier;

		// CgsID.cpp:427
		int32_t liResult;

	}
}

// CgsID.cpp:122
extern CgsID CgsIDCompress(const char *  lcpString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsID.cpp:124
		int32_t i;

		// CgsID.cpp:125
		CgsID lID;

	}
	{
		// CgsID.cpp:180
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsID.cpp:185
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// _built-in_
namespace :: {
	// CgsID.cpp:37
	extern const char * kacCgsIDCharacters;

	// CgsID.cpp:41
	const CgsID[13] gaCgsIDCharacterMasks;

}

