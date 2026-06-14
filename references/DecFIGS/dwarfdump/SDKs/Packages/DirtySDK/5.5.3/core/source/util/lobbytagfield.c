// lobbytagfield.c:167
const char * _ParseNumber(const char *  pData, uint32_t *  pValue, int32_t  iDigits) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbytagfield.c:244
unsigned char * _TagFieldSetupAppend(unsigned char *  pRecord, int32_t  iReclen, const char *  pName, int32_t  iMinData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:245
	int32_t iNameLen;

	// lobbytagfield.c:246
	int32_t iInclEqu;

	// lobbytagfield.c:247
	int32_t iSeparate;

	// lobbytagfield.c:248
	unsigned char * pData;

	// lobbytagfield.c:249
	unsigned char * pFind;

	// lobbytagfield.c:250
	unsigned char * pFindCmp;

	// lobbytagfield.c:251
	unsigned char * pFindDiv;

	// lobbytagfield.c:252
	const unsigned char * pNameCmp;

}

// lobbytagfield.c:387
int32_t _TagFieldSetupCancel(unsigned char *  pRecord, unsigned char *  pAppend) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbytagfield.c:432
int32_t _TagFieldSetupTerm(char *  pRecord, char *  pAppend, const char *  pName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// lobbytagfield.c:460
extern char TagFieldDivider(char  iDivider) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:461
	char iPrevious;

}

// lobbytagfield.c:484
extern void TagFieldFormat(char *  _record, unsigned char  marker) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:485
	unsigned char * src;

	// lobbytagfield.c:485
	unsigned char * dst;

	// lobbytagfield.c:486
	unsigned char * record;

}

// lobbytagfield.c:555
extern int32_t TagFieldDelete(char *  _record, const char *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:556
	unsigned char * data;

	// lobbytagfield.c:557
	unsigned char * head;

	// lobbytagfield.c:558
	unsigned char * tail;

	// lobbytagfield.c:559
	unsigned char * last;

	// lobbytagfield.c:560
	unsigned char * record;

}

// lobbytagfield.c:626
extern int32_t TagFieldRename(char *  _record, int32_t  reclen, char *  oldname, char *  newname) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:627
	int32_t diff;

	// lobbytagfield.c:628
	unsigned char * data;

	// lobbytagfield.c:629
	unsigned char * head;

	// lobbytagfield.c:630
	unsigned char * tail;

	// lobbytagfield.c:631
	unsigned char * record;

}

// lobbytagfield.c:711
extern int32_t TagFieldDupl(char *  pRecord, int32_t  iReclen, const char *  pData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:712
	int32_t iLimit;

}

// lobbytagfield.c:748
extern int32_t TagFieldMerge(char *  pRecord_, int32_t  iReclen, const char *  pMerge_) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:749
	unsigned char * pRecord;

	// lobbytagfield.c:750
	unsigned char * pLimit;

	// lobbytagfield.c:751
	const unsigned char * pMerge;

	// lobbytagfield.c:752
	unsigned char * pSrc;

	// lobbytagfield.c:753
	unsigned char * pDst;

	// lobbytagfield.c:754
	unsigned char * pName;

}

// lobbytagfield.c:871
extern const char * TagFieldFind(const char *  pRecord_, const char *  pName_) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:872
	int32_t iNameLen;

	// lobbytagfield.c:873
	unsigned char uMatch;

	// lobbytagfield.c:874
	const unsigned char * pCmp1;

	// lobbytagfield.c:875
	const unsigned char * pCmp2;

	// lobbytagfield.c:876
	const unsigned char * pName;

	// lobbytagfield.c:877
	const unsigned char * pRecord;

}

// lobbytagfield.c:963
extern const char * TagFieldFind2(const char *  pRecord, const char *  pName1, const char *  pName2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:964
	char[256] strName;

	// lobbytagfield.c:965
	const unsigned char * pFind;

}

// lobbytagfield.c:1005
extern const char * TagFieldFindIdx(const char *  pRecord, const char *  pName, int32_t  iIdx) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:1006
	char[256] strTag;

}

// lobbytagfield.c:1033
extern int32_t TagFieldSetRaw(char *  pRecord_, int32_t  iReclen, const char *  pName, const char *  pData_) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:1034
	unsigned char uTerm;

	// lobbytagfield.c:1035
	unsigned char * pAppend;

	// lobbytagfield.c:1036
	unsigned char * pRecord;

	// lobbytagfield.c:1037
	const unsigned char * pData;

}

// lobbytagfield.c:1088
extern int32_t TagFieldGetRaw(const char *  pData, char *  pBuffer, int32_t  iBuflen, const char *  pDefval) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:1089
	int32_t iLen;

	// lobbytagfield.c:1090
	unsigned char uTerm;

	// lobbytagfield.c:1091
	const unsigned char * pPtr;

}

// lobbytagfield.c:1145
extern int32_t TagFieldSetNumber(char *  pRecord, int32_t  iReclen, const char *  pName, int32_t  iValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:1146
	int32_t iLength;

	// lobbytagfield.c:1147
	uint32_t uValue;

	// lobbytagfield.c:1148
	unsigned char * pData;

	// lobbytagfield.c:1149
	unsigned char * pAppend;

	// lobbytagfield.c:1150
	unsigned char[12] strData;

}

// lobbytagfield.c:1228
extern int32_t TagFieldSetNumber64(char *  pRecord, int32_t  iReclen, const char *  pName, int64_t  iValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:1229
	int32_t iLength;

	// lobbytagfield.c:1230
	int32_t iNeg;

	// lobbytagfield.c:1231
	unsigned char * pData;

	// lobbytagfield.c:1232
	unsigned char * pAppend;

	// lobbytagfield.c:1233
	unsigned char[20] strData;

}

// lobbytagfield.c:1306
extern int32_t TagFieldGetNumber(const char *  pData, int32_t  iDefval) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:1307
	int32_t iSign;

	// lobbytagfield.c:1308
	uint32_t uDigit;

	// lobbytagfield.c:1309
	uint32_t uValue;

	// lobbytagfield.c:1310
	uint32_t uBase;

}

// lobbytagfield.c:1360
extern int64_t TagFieldGetNumber64(const char *  pData, int64_t  iDefval) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:1361
	int32_t iSign;

	// lobbytagfield.c:1362
	uint32_t uDigit;

	// lobbytagfield.c:1363
	uint64_t uValue;

	// lobbytagfield.c:1364
	uint32_t uBase;

}

// lobbytagfield.c:1420
extern int32_t TagFieldSetFlags(char *  pRecord, int32_t  iReclen, const char *  pName, int32_t  iValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:1421
	const char * pFlags;

	// lobbytagfield.c:1422
	unsigned char * pAppend;

	// lobbytagfield.c:1423
	unsigned char * pLimit;

}

// lobbytagfield.c:1466
extern int32_t TagFieldGetFlags(const char *  pData, int32_t  iDefault) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:1467
	int32_t iShift;

	// lobbytagfield.c:1468
	uint32_t uFlags;

}

// lobbytagfield.c:1504
extern int32_t TagFieldSetAddress(char *  pRecord, int32_t  iReclen, const char *  pName, uint32_t  uAddr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:1505
	int32_t iIndex;

	// lobbytagfield.c:1506
	unsigned char uValue;

	// lobbytagfield.c:1507
	unsigned char * pData;

	// lobbytagfield.c:1508
	unsigned char * pAppend;

	// lobbytagfield.c:1509
	unsigned char[4] Segment;

	// lobbytagfield.c:1510
	unsigned char[16] strAddr;

}

// lobbytagfield.c:1585
extern uint32_t TagFieldGetAddress(const char *  pData, uint32_t  iDefval) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:1586
	uint32_t uAddr;

}

// lobbytagfield.c:1634
extern int32_t TagFieldSetToken(char *  pRecord, int32_t  iReclen, const char *  pName, int32_t  iToken) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:1635
	int32_t iIndex;

	// lobbytagfield.c:1636
	unsigned char uByte;

	// lobbytagfield.c:1637
	unsigned char[16] strToken;

	// lobbytagfield.c:1638
	unsigned char * pData;

	// lobbytagfield.c:1639
	unsigned char * pAppend;

	// lobbytagfield.c:1640
	uint32_t uToken;

}

// lobbytagfield.c:1694
extern int32_t TagFieldGetToken(const char *  pData_, int32_t  iDefault) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:1695
	int32_t iIndex;

	// lobbytagfield.c:1696
	unsigned char uByte;

	// lobbytagfield.c:1697
	uint32_t uToken;

	// lobbytagfield.c:1698
	const unsigned char * pData;

}

// lobbytagfield.c:1747
extern int32_t TagFieldSetString(char *  pRecord_, int32_t  iReclen, const char *  pName, const char *  pValue_) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:1748
	int32_t iRemain;

	// lobbytagfield.c:1749
	unsigned char * pAppend;

	// lobbytagfield.c:1750
	const unsigned char * pSpace;

	// lobbytagfield.c:1751
	unsigned char * pRecord;

	// lobbytagfield.c:1752
	const unsigned char * pValue;

}

// lobbytagfield.c:1836
extern int32_t TagFieldGetString(const char *  data, char *  buffer, int32_t  buflen, const char *  defval) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:1837
	int32_t len;

	// lobbytagfield.c:1838
	unsigned char term;

	// lobbytagfield.c:1839
	const unsigned char * ptr;

}

// lobbytagfield.c:1932
extern int32_t TagFieldSetBinary(char *  pRecord, int32_t  iReclen, const char *  pName, const void *  pValue_, int32_t  iVallen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:1933
	unsigned char * pAppend;

	// lobbytagfield.c:1934
	const unsigned char * pValue;

}

// lobbytagfield.c:1982
extern int32_t TagFieldSetBinary7(char *  pRecord, int32_t  iReclen, const char *  pName, const void *  pValue_, int32_t  iVallen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:1983
	int32_t iBits;

	// lobbytagfield.c:1984
	uint32_t uBuffer;

	// lobbytagfield.c:1985
	unsigned char * pAppend;

	// lobbytagfield.c:1986
	const unsigned char * pValue;

}

// lobbytagfield.c:2049
extern int32_t TagFieldGetBinary(const char *  pData_, void *  pBuffer_, int32_t  iBuflen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:2050
	int32_t iBits;

	// lobbytagfield.c:2051
	uint32_t uBin7;

	// lobbytagfield.c:2052
	const unsigned char * pBinary;

	// lobbytagfield.c:2053
	const unsigned char * pData;

	// lobbytagfield.c:2054
	unsigned char * pBuffer;

	// lobbytagfield.c:2055
	unsigned char * pBufend;

}

// lobbytagfield.c:2150
extern int32_t TagFieldSetStructure(char *  pRecord, int32_t  iReclen, const char *  pName, const void *  pStruct_, int32_t  iLength, const char *  pPattern) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:2151
	int32_t iShift;

	// lobbytagfield.c:2152
	int32_t iWidth;

	// lobbytagfield.c:2153
	int32_t iCount;

	// lobbytagfield.c:2154
	uint32_t uValue;

	// lobbytagfield.c:2155
	unsigned char * pMarker;

	// lobbytagfield.c:2156
	unsigned char * pAppend;

	// lobbytagfield.c:2157
	const unsigned char * pStruct;

	// lobbytagfield.c:2158
	const unsigned char * pLength;

	// lobbytagfield.c:2159
	const unsigned char * pLimit;

}

// lobbytagfield.c:2322
extern int32_t TagFieldGetStructure(const char *  _pData, void *  _pBuf, int32_t  iLen, const char *  pPat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:2323
	char iNeg;

	// lobbytagfield.c:2324
	int32_t iSiz;

	// lobbytagfield.c:2324
	int32_t iCnt;

	// lobbytagfield.c:2325
	char[1024] strTmp;

	// lobbytagfield.c:2326
	uint32_t uHex;

	// lobbytagfield.c:2327
	uint32_t uRaw;

	// lobbytagfield.c:2328
	unsigned char * pData;

	// lobbytagfield.c:2329
	unsigned char * pBuf;

	// lobbytagfield.c:2330
	unsigned char * pEnd;

	// lobbytagfield.c:2331
	int32_t iDecodeLen;

}

// lobbytagfield.c:2483
extern int32_t TagFieldSetEpoch(char *  pRecord, int32_t  iReclen, const char *  pName, uint32_t  uEpoch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:2484
	int32_t iLength;

	// lobbytagfield.c:2485
	char[20] strDate;

	// lobbytagfield.c:2486
	tm * tm;

	// lobbytagfield.c:2486
	tm tm2;

	// lobbytagfield.c:2487
	unsigned char * pAppend;

}

// lobbytagfield.c:2535
extern uint32_t TagFieldGetEpoch(const char *  pData, uint32_t  uDefval) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:2536
	tm tm;

	// lobbytagfield.c:2537
	unsigned char uHex;

	// lobbytagfield.c:2538
	uint32_t uDecimal;

	// lobbytagfield.c:2539
	uint32_t uEpoch;

}

// lobbytagfield.c:2630
extern int32_t TagFieldSetDate(char *  record, int32_t  reclen, const char *  name, int32_t  year, int32_t  month, int32_t  day, int32_t  hour, int32_t  minute, int32_t  second, int32_t  gmt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:2631
	tm tm;

	// lobbytagfield.c:2632
	uint32_t epoch;

}

// lobbytagfield.c:2677
extern int32_t TagFieldGetDate(const char *  data, int32_t *  pyear, int32_t *  pmonth, int32_t *  pday, int32_t *  phour, int32_t *  pminute, int32_t *  psecond, int32_t  gmt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:2678
	tm * tm;

	// lobbytagfield.c:2678
	tm tm2;

	// lobbytagfield.c:2679
	uint32_t epoch;

}

// lobbytagfield.c:2725
extern int32_t TagFieldSetFloat(char *  pRecord, int32_t  iReclen, const char *  pName, float  fValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:2726
	float fSign;

	// lobbytagfield.c:2727
	uint32_t uInteger;

	// lobbytagfield.c:2728
	uint32_t uFraction;

	// lobbytagfield.c:2729
	unsigned char * pAppend;

	// lobbytagfield.c:2730
	unsigned char[64] strFormat;

	// lobbytagfield.c:2731
	unsigned char * pData1;

	// lobbytagfield.c:2732
	unsigned char * pData2;

}

// lobbytagfield.c:2800
extern float TagFieldGetFloat(const char *  pData, float  fDefval) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:2801
	float fSign;

	// lobbytagfield.c:2802
	int32_t iInteger;

	// lobbytagfield.c:2803
	int32_t iFraction;

	// lobbytagfield.c:2804
	int32_t iDivisor;

}

// lobbytagfield.c:2876
extern int32_t TagFieldPrintf(char *  _pRecord, int32_t  iLength, const char *  pFormat, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:2877
	int32_t iCount;

	// lobbytagfield.c:2878
	va_list args;

	// lobbytagfield.c:2879
	unsigned char uCh;

	// lobbytagfield.c:2880
	int32_t iInitial;

	// lobbytagfield.c:2881
	const char * pInput;

	// lobbytagfield.c:2882
	unsigned char * pRecord;

	{
		// lobbytagfield.c:2945
		int32_t iNum;

	}
	{
		// lobbytagfield.c:2969
		const char * pStr;

	}
	{
		// lobbytagfield.c:2975
		int32_t iNum;

	}
	{
		// lobbytagfield.c:2981
		uint32_t uToken;

	}
	{
		// lobbytagfield.c:2987
		uint32_t uAddr;

	}
	{
		// lobbytagfield.c:2993
		int32_t flags;

	}
	{
		// lobbytagfield.c:2999
		uint32_t epoch;

	}
	{
		// lobbytagfield.c:3010
		const char * pFind;

	}
	{
		// lobbytagfield.c:3017
		const char * pStr;

	}
}

// lobbytagfield.c:3071
extern int32_t TagFieldGetDelim(const char *  data, char *  buffer, int32_t  buflen, const char *  defval, int32_t  index, int32_t  delim) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:3072
	int32_t len;

	// lobbytagfield.c:3073
	unsigned char term;

	// lobbytagfield.c:3074
	unsigned char stop;

	// lobbytagfield.c:3075
	const unsigned char * ptr;

	{
		// lobbytagfield.c:3083
		unsigned char c;

	}
}

// lobbytagfield.c:3217
extern int32_t TagFieldFirst(const char *  _record, char *  nameptr, int32_t  namelen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:3218
	int32_t len;

	// lobbytagfield.c:3219
	const unsigned char * equ;

	// lobbytagfield.c:3220
	const unsigned char * beg;

	// lobbytagfield.c:3221
	const unsigned char * record;

}

// lobbytagfield.c:3271
extern const char * TagFieldFindNext(const char *  pRecord, char *  pName, int32_t  iNameSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:3272
	const unsigned char * pRec;

	// lobbytagfield.c:3273
	const unsigned char * pEq;

}

// lobbytagfield.c:3341
extern int32_t TagFieldGetStructureOffsets(const char *  pPat, TagFieldStructPtrT *  pPtrs, int32_t  iNumPtrs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// lobbytagfield.c:3342
	int32_t iCnt;

	// lobbytagfield.c:3343
	int32_t iPtr;

	// lobbytagfield.c:3344
	int32_t iOffset;

}

// lobbytagfield.c:51
const unsigned char[256] char_encode;

// lobbytagfield.c:75
const unsigned char[16] hex_encode;

// lobbytagfield.c:79
const unsigned char[256] hex_decode;

// lobbytagfield.c:100
const unsigned char[256] to_upper;

// lobbytagfield.c:121
const char[33] flag_encode;

// lobbytagfield.c:124
const char[256] flag_decode;

// lobbytagfield.c:145
char g_divider;

// lobbytagfield.c:146
int32_t g_divafter;

