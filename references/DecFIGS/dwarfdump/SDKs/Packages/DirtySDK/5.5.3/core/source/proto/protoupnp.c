// protoupnp.c:103
struct ProtoUpnpPortMapT {
	// protoupnp.c:104
	int32_t iAddr;

	// protoupnp.c:105
	int32_t iPort;

	// protoupnp.c:106
	int32_t iLeaseDuration;

	// protoupnp.c:107
	char[31] strDesc;

	// protoupnp.c:108
	unsigned char bEnabled;

}

// protoupnp.c:109
typedef ProtoUpnpPortMapT ProtoUpnpPortMapT;

// protoupnp.c:113
struct ProtoUpnpServiceT {
	// protoupnp.c:114
	char[64] strServiceType;

	// protoupnp.c:115
	char[128] strDescriptionUrl;

	// protoupnp.c:116
	char[128] strControlUrl;

}

// protoupnp.c:117
typedef ProtoUpnpServiceT ProtoUpnpServiceT;

// protoupnp.c:121
struct ProtoUpnpDeviceT {
	// protoupnp.c:122
	char[128] strUrl;

	// protoupnp.c:123
	char[64] strBaseUrl;

	// protoupnp.c:124
	char[64] strUdn;

	// protoupnp.c:125
	char[127] strModel;

	// protoupnp.c:126
	unsigned char bDiscovered;

	// protoupnp.c:127
	uint32_t uExternalAddress;

	// protoupnp.c:128
	ProtoUpnpPortMapT CurPortMap;

	// protoupnp.c:129
	int32_t iNumServices;

	// protoupnp.c:130
	ProtoUpnpServiceT[4] Services;

}

// protoupnp.c:131
typedef ProtoUpnpDeviceT ProtoUpnpDeviceT;

// protoupnp.c:154
enum {
	ST_IDLE = 0,
	ST_DISCOVERY = 1,
	ST_DESCRIPTION = 2,
	ST_SERVICEDESC = 3,
	ST_GETSTATEVAR = 4,
	ST_GETEXTADDR = 5,
	ST_GETPORTMAPPING = 6,
	ST_DELPORTMAPPING = 7,
	ST_ADDPORTMAPPING = 8,
	ST_LAST = 9,
}

// protoupnp.c:281
const char * _ProtoUpnpIntToStr(int32_t  iVal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoupnp.c:282
	char[16] _strVal;

}

// protoupnp.c:303
const char * _ProtoUpnpFindUrl(const char *  pUrl) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protoupnp.c:340
void _ProtoUpnpMakeFullUrl(ProtoUpnpDeviceT *  pDevice, char *  pBuffer, int  iBufSize, const char *  pUrl) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protoupnp.c:369
void _ProtoUpnpError(ProtoUpnpRefT *  pProtoUpnp, const char *  pReason) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protoupnp.c:396
void _ProtoUpnpSendDiscoveryRequest(ProtoUpnpRefT *  pProtoUpnp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoupnp.c:399
	const char[132] _strDiscoveryPacket;

}

// protoupnp.c:434
int32_t _ProtoUpnpParseDiscoveryResponse(ProtoUpnpRefT *  pProtoUpnp, const char *  pResponse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoupnp.c:435
	const char[10] strLocation;

	// protoupnp.c:436
	const char * pLocation;

	// protoupnp.c:436
	const char * pUrl;

	// protoupnp.c:437
	int32_t iStrLen;

}

// protoupnp.c:527
const char * _ProtoUpnpGetRemoteHost(ProtoUpnpRefT *  pProtoUpnp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoupnp.c:528
	uint32_t uRemoteHost;

}

// protoupnp.c:557
void _ProtoUpnpHttpReset(ProtoUpnpRefT *  pProtoUpnp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protoupnp.c:583
int32_t _ProtoUpnpHttpWaitResponse(ProtoUpnpRefT *  pProtoUpnp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoupnp.c:584
	int32_t iRecvResult;

}

// protoupnp.c:649
void _ProtoUpnpSoapFormatRequestHeader(ProtoUpnpRefT *  pProtoUpnp, const char *  pRequestName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoupnp.c:650
	char[256] strHdrExtra;

}

// protoupnp.c:686
void _ProtoUpnpSoapRequestOpen(ProtoUpnpRefT *  pProtoUpnp, const char *  pRequestName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoupnp.c:687
	char * pBuf;

	// protoupnp.c:688
	int32_t iBufSize;

}

// protoupnp.c:726
void _ProtoUpnpSoapRequestAdd(ProtoUpnpRefT *  pProtoUpnp, const char *  pName, const char *  pType, const char *  pData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoupnp.c:727
	char * pBuf;

	// protoupnp.c:728
	int32_t iBufSize;

}

// protoupnp.c:757
void _ProtoUpnpSoapRequestClose(ProtoUpnpRefT *  pProtoUpnp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoupnp.c:758
	char * pBuf;

	// protoupnp.c:759
	int32_t iBufSize;

}

// protoupnp.c:785
void _ProtoUpnpSoapRequestPost(ProtoUpnpRefT *  pProtoUpnp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protoupnp.c:829
int32_t _ProtoUpnpSoapWaitResponse(ProtoUpnpRefT *  pProtoUpnp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoupnp.c:830
	ProtoHttpResponseE eResponse;

	// protoupnp.c:831
	int32_t iResult;

	{
		// protoupnp.c:854
		const unsigned char * pXml;

		// protoupnp.c:854
		const unsigned char * pXml2;

		{
			// protoupnp.c:868
			char[96] strErrorText;

		}
	}
}

// protoupnp.c:905
int32_t _ProtoUpnpXmlGetAddress(const char *  pXml, const char *  pName, int32_t *  pAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protoupnp.c:932
int32_t _ProtoUpnpXmlGetBoolean(const char *  pXml, const char *  pName, unsigned char *  pBoolean) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protoupnp.c:959
int32_t _ProtoUpnpXmlGetInteger(const char *  pXml, const char *  pName, int32_t *  pInteger) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protoupnp.c:987
int32_t _ProtoUpnpXmlGetString(const char *  pXml, const char *  pName, char *  pBuffer, int32_t  iBufSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protoupnp.c:1012
int32_t _ProtoUpnpXmlParseDescription(ProtoUpnpRefT *  pProtoUpnp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoupnp.c:1013
	char[80] strContentA;

	// protoupnp.c:1013
	char[80] strContentB;

	// protoupnp.c:1013
	char[80] strContentC;

	// protoupnp.c:1014
	ProtoUpnpDeviceT * pDevice;

	// protoupnp.c:1015
	const unsigned char * pXml;

	// protoupnp.c:1015
	const unsigned char * pXml2;

	{
		// protoupnp.c:1082
		ProtoUpnpServiceT * pService;

	}
}

// protoupnp.c:1121
int32_t _ProtoUpnpXmlParseGetExtAddr(ProtoUpnpRefT *  pProtoUpnp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoupnp.c:1122
	const unsigned char * pXml;

}

// protoupnp.c:1157
void _ProtoUpnpXmlParseGetPortMapping(ProtoUpnpRefT *  pProtoUpnp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoupnp.c:1158
	const unsigned char * pXml;

}

// protoupnp.c:1203
extern ProtoUpnpRefT * ProtoUpnpCreate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoupnp.c:1204
	ProtoUpnpRefT * pProtoUpnp;

	// protoupnp.c:1205
	int32_t iMemGroup;

	{
		// protoupnp.c:1247
		sockaddr BindAddr;

	}
	{
		// protoupnp.c:1258
		uint32_t val2;

	}
}

// protoupnp.c:1290
extern ProtoUpnpRefT * ProtoUpnpGetRef() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protoupnp.c:1310
extern void ProtoUpnpDestroy(ProtoUpnpRefT *  pProtoUpnp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protoupnp.c:1364
extern int32_t ProtoUpnpStatus(ProtoUpnpRefT *  pProtoUpnp, int32_t  iSelect, void *  pBuf, int32_t  iBufSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// protoupnp.c:1401
		int32_t iMacro;

	}
}

// protoupnp.c:1464
extern int32_t ProtoUpnpControl(ProtoUpnpRefT *  pProtoUpnp, int32_t  iControl, int32_t  iValue, int32_t  iValue2, const void *  pValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// protoupnp.c:1483
		const int32_t[9] _StateMap;

		// protoupnp.c:1484
		int32_t iState;

	}
	{
		// protoupnp.c:1564
		const ProtoUpnpMacroT * pMacro;

	}
}

// protoupnp.c:1789
extern void ProtoUpnpUpdate(ProtoUpnpRefT *  pProtoUpnp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protoupnp.c:1790
	int32_t iCurTick;

	// protoupnp.c:1791
	int32_t iResult;

	{
		// protoupnp.c:1800
		const ProtoUpnpMacroT * pMacro;

	}
	{
		// protoupnp.c:1821
		sockaddr RemoteAddr;

		// protoupnp.c:1822
		int32_t iResponseSize;

	}
	{
		// protoupnp.c:2000
		uint8_t bRetry;

	}
}

// protoupnp.c:197
const char[10] _ProtoUpnp_strDescription;

// protoupnp.c:200
const ProtoUpnpMacroT[6] _ProtoUpnp_cmd_addp;

// protoupnp.c:211
const ProtoUpnpMacroT[21] _ProtoUpnp_cmd_test;

// protoupnp.c:246
uint32_t[9] _ProtoUpnp_aStateMap;

// protoupnp.c:260
ProtoUpnpRefT * _ProtoUpnp_pRef;

