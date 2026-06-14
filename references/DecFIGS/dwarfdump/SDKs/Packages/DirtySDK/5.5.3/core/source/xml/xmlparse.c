// xmlparse.c:105
const unsigned char * _ParseNumber(const unsigned char *  pData, int32_t *  pValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// xmlparse.c:129
const unsigned char * _XmlContentChar(const unsigned char *  pXml, unsigned char *  pData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// xmlparse.c:130
	uint32_t uNumber;

}

// xmlparse.c:218
const unsigned char * _XmlContentFind(const unsigned char *  pXml) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// xmlparse.c:258
const unsigned char * _XmlAttribFind(const unsigned char *  pXml, const unsigned char *  pAttrib) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// xmlparse.c:259
	int32_t iIndex;

	// xmlparse.c:260
	unsigned char uTerm;

	// xmlparse.c:261
	const unsigned char * pMatch;

}

// xmlparse.c:352
int32_t _XmlSkipCDataHeader(const unsigned char *  pXml, const unsigned char **  ppContent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// xmlparse.c:353
	int32_t iIndex;

}

// xmlparse.c:388
int32_t _XmlSkipCDataTrailer(const unsigned char *  pXml, const unsigned char **  ppAfterContent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// xmlparse.c:389
	int32_t iIndex;

}

// xmlparse.c:427
extern const unsigned char * XmlSkip(const unsigned char *  pXml) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// xmlparse.c:428
	int32_t iIndex;

}

// xmlparse.c:561
extern const unsigned char * XmlFind(const unsigned char *  pXml, const unsigned char *  pName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// xmlparse.c:562
	int32_t iXmlIndex;

	// xmlparse.c:562
	int32_t iMatchIndex;

	// xmlparse.c:563
	const unsigned char * pMatch;

}

// xmlparse.c:696
extern const unsigned char * XmlNext(const unsigned char *  pXml) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// xmlparse.c:697
	int32_t iIndex;

	// xmlparse.c:698
	const unsigned char * pMatch;

}

// xmlparse.c:749
extern int32_t XmlContentGetString(const unsigned char *  pXml, unsigned char *  pBuffer, int32_t  iLength, const unsigned char *  pDefault) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// xmlparse.c:750
	int32_t iLen;

	// xmlparse.c:751
	const unsigned char * strData;

	// xmlparse.c:752
	int32_t bInCDataSection;

}

// xmlparse.c:850
extern int32_t XmlContentGetInteger(const unsigned char *  pXml, int32_t  iDefault) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// xmlparse.c:851
	int32_t iSign;

	// xmlparse.c:852
	uint32_t uNumber;

	// xmlparse.c:853
	const unsigned char * strData;

}

// xmlparse.c:907
extern int32_t XmlContentGetToken(const unsigned char *  pXml, int32_t  iDefault) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// xmlparse.c:908
	int32_t iToken;

	// xmlparse.c:909
	const unsigned char * strData;

}

// xmlparse.c:952
extern uint32_t XmlContentGetDate(const unsigned char *  pXml, uint32_t  uDefault) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// xmlparse.c:953
	tm tm;

	// xmlparse.c:954
	const unsigned char * pData;

}

// xmlparse.c:1025
extern int32_t XmlContentGetAddress(const unsigned char *  pXml, int32_t  iDefault) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// xmlparse.c:1026
	const unsigned char * pData;

	// xmlparse.c:1027
	uint32_t iAddr;

	// xmlparse.c:1027
	uint32_t iQuad;

	// xmlparse.c:1027
	uint32_t iValue;

}

// xmlparse.c:1077
extern int32_t XmlContentGetBinary(const unsigned char *  pXml, unsigned char *  pBuffer, int32_t  iLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// xmlparse.c:1078
	int32_t iCount;

	// xmlparse.c:1079
	const unsigned char * pData;

}

// xmlparse.c:1146
extern int32_t XmlAttribGetString(const unsigned char *  pXml, const unsigned char *  pAttrib, unsigned char *  pBuffer, int32_t  iLength, const unsigned char *  pDefault) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// xmlparse.c:1147
	int32_t iLen;

	// xmlparse.c:1148
	unsigned char uTerm;

	// xmlparse.c:1149
	const unsigned char * strData;

}

// xmlparse.c:1231
extern int32_t XmlAttribGetInteger(const unsigned char *  pXml, const unsigned char *  pAttrib, int32_t  iDefault) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// xmlparse.c:1232
	int32_t iSign;

	// xmlparse.c:1233
	uint32_t uNumber;

	// xmlparse.c:1234
	const unsigned char * pData;

}

// xmlparse.c:1310
extern int32_t XmlAttribGetToken(const unsigned char *  pXml, const unsigned char *  pAttrib, int32_t  iDefault) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// xmlparse.c:1311
	int32_t iToken;

	// xmlparse.c:1312
	unsigned char uTerm;

	// xmlparse.c:1313
	const unsigned char * pData;

}

// xmlparse.c:1363
extern uint32_t XmlAttribGetDate(const unsigned char *  pXml, const unsigned char *  pAttrib, uint32_t  uDefault) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// xmlparse.c:1364
	tm tm;

	// xmlparse.c:1365
	const unsigned char * pData;

}

// xmlparse.c:1451
extern int32_t XmlConvEpoch2Date(uint32_t  uEpoch, int32_t *  pYear, int32_t *  pMonth, int32_t *  pDay, int32_t *  pHour, int32_t *  pMinute, int32_t *  pSecond) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// xmlparse.c:1452
	int32_t iResult;

	// xmlparse.c:1453
	tm tm;

}

// xmlparse.c:42
const unsigned char[256] _Xml_TopDecode;

// xmlparse.c:60
const unsigned char[256] _Xml_BtmDecode;

// xmlparse.c:80
const uint8_t[9] _Xml_CDataHeader;

// xmlparse.c:84
const uint8_t[3] _Xml_CDataTrailer;

