// protossl.c:192
struct {
	// protossl.c:186
	char[32] strCountry;

	// protossl.c:187
	char[32] strState;

	// protossl.c:188
	char[32] strCity;

	// protossl.c:189
	char[32] strOrg;

	// protossl.c:190
	char[32] strUnit;

	// protossl.c:191
	char[32] strCommon;

}

// protossl.c:202
struct {
	// protossl.c:196
	char[32] strCountry;

	// protossl.c:197
	char[32] strState;

	// protossl.c:198
	char[32] strCity;

	// protossl.c:199
	char[32] strOrg;

	// protossl.c:200
	char[32] strUnit;

	// protossl.c:201
	char[32] strCommon;

}

// protossl.c:181
struct X509CertificateT {
	// protossl.c:182
	int32_t version;

	// protossl.c:192
	// protossl.c:192
	struct {
		// protossl.c:186
		char[32] strCountry;

		// protossl.c:187
		char[32] strState;

		// protossl.c:188
		char[32] strCity;

		// protossl.c:189
		char[32] strOrg;

		// protossl.c:190
		char[32] strUnit;

		// protossl.c:191
		char[32] strCommon;

	}

 Issuer;

	// protossl.c:202
	// protossl.c:202
	struct {
		// protossl.c:196
		char[32] strCountry;

		// protossl.c:197
		char[32] strState;

		// protossl.c:198
		char[32] strCity;

		// protossl.c:199
		char[32] strOrg;

		// protossl.c:200
		char[32] strUnit;

		// protossl.c:201
		char[32] strCommon;

	}

 Subject;

	// protossl.c:204
	char[32] strGoodFrom;

	// protossl.c:205
	char[32] strGoodTill;

	// protossl.c:207
	int32_t iSerialSize;

	// protossl.c:208
	uint8_t[32] SerialData;

	// protossl.c:210
	int32_t iSigType;

	// protossl.c:211
	int32_t iSigSize;

	// protossl.c:212
	uint8_t[128] SigData;

	// protossl.c:214
	int32_t iKeyType;

	// protossl.c:215
	uint8_t[64] KeyParm;

	// protossl.c:216
	int32_t iKeySize;

	// protossl.c:217
	uint8_t[256] KeyData;

	// protossl.c:219
	int32_t iKeyModSize;

	// protossl.c:220
	uint8_t[129] KeyModData;

	// protossl.c:221
	int32_t iKeyExpSize;

	// protossl.c:222
	uint8_t[129] KeyExpData;

}

// protossl.c:223
typedef X509CertificateT X509CertificateT;

// protossl.c:235
struct {
	// protossl.c:229
	const char * pCountry;

	// protossl.c:230
	const char * pState;

	// protossl.c:231
	const char * pCity;

	// protossl.c:232
	const char * pOrg;

	// protossl.c:233
	const char * pUnit;

	// protossl.c:234
	const char * pCommon;

}

// protossl.c:227
struct ProtoSSLCACertT {
	// protossl.c:235
	// protossl.c:235
	struct {
		// protossl.c:229
		const char * pCountry;

		// protossl.c:230
		const char * pState;

		// protossl.c:231
		const char * pCity;

		// protossl.c:232
		const char * pOrg;

		// protossl.c:233
		const char * pUnit;

		// protossl.c:234
		const char * pCommon;

	}

 Issuer;

	// protossl.c:237
	const uint8_t * pModulus;

	// protossl.c:238
	uint32_t uModulusSize;

	// protossl.c:239
	const uint8_t[4] strExponent;

}

// protossl.c:240
typedef ProtoSSLCACertT ProtoSSLCACertT;

// protossl.c:244
struct CipherSuiteT {
	// protossl.c:245
	uint8_t[2] uIdent;

	// protossl.c:246
	uint8_t uKey;

	// protossl.c:247
	uint8_t uEnc;

	// protossl.c:248
	uint8_t uMac;

}

// protossl.c:249
typedef CipherSuiteT CipherSuiteT;

// protossl.c:254
struct SecureStateT {
	// protossl.c:255
	uint32_t uTimer;

	// protossl.c:257
	uint32_t uSendSeqn;

	// protossl.c:258
	int32_t iSendProg;

	// protossl.c:259
	int32_t iSendSize;

	// protossl.c:261
	uint32_t uRecvSeqn;

	// protossl.c:262
	int32_t iRecvProg;

	// protossl.c:263
	int32_t iRecvSize;

	// protossl.c:264
	int32_t iRecvBase;

	// protossl.c:266
	const CipherSuiteT * pCipher;

	// protossl.c:268
	uint8_t[32] ClientRandom;

	// protossl.c:269
	uint8_t[32] ServerRandom;

	// protossl.c:271
	uint8_t[48] PreMasterKey;

	// protossl.c:272
	uint8_t[48] MasterKey;

	// protossl.c:274
	uint8_t[128] KeyBlock;

	// protossl.c:275
	uint8_t * pServerMAC;

	// protossl.c:276
	uint8_t * pClientMAC;

	// protossl.c:277
	uint8_t * pServerKey;

	// protossl.c:278
	uint8_t * pClientKey;

	// protossl.c:280
	CryptMD5T HandshakeMD5;

	// protossl.c:281
	CryptSha1T HandshakeSHA;

	// protossl.c:282
	CryptArc4T ReadArc4;

	// protossl.c:283
	CryptArc4T WriteArc4;

	// protossl.c:285
	X509CertificateT Cert;

	// protossl.c:287
	uint8_t[16384] SendData;

	// protossl.c:288
	uint8_t[16384] RecvData;

}

// protossl.c:289
typedef SecureStateT SecureStateT;

// protossl.c:340
struct {
	// protossl.c:336
	int32_t iType;

	// protossl.c:337
	int32_t iSize;

	// protossl.c:338
	uint8_t[16] strData;

}

// protossl.c:461
void _GenerateRandom(uint8_t *  pRandomBuf, int32_t  iRandomLen, CryptArc4T *  pArc4) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protossl.c:462
	int32_t iCount;

}

// protossl.c:507
int32_t _ResetState(ProtoSSLRefT *  pState, int32_t  iSecure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protossl.c:509
	SecureStateT * pSecure;

}

// protossl.c:593
int32_t _SendPacket(ProtoSSLRefT *  pState, uint8_t  uType, const void *  pHeadPtr, int32_t  iHeadLen, const void *  pBodyPtr, int32_t  iBodyLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protossl.c:594
	SecureStateT * pSecure;

	// protossl.c:595
	uint8_t * pSend;

	// protossl.c:596
	int32_t iSize;

	{
		// protossl.c:625
		uint8_t[20] MacTemp;

		// protossl.c:631
		struct {
			// protossl.c:628
			uint8_t[8] uSeqn;

			// protossl.c:629
			uint8_t uType;

			// protossl.c:630
			uint8_t[2] uLength;

		}

		// protossl.c:631
		structure  MacData;

		{
			// protossl.c:649
			CryptMD5T MD5Context;

		}
		{
			// protossl.c:668
			CryptSha1T SHAContext;

		}
	}
}

// protossl.c:736
int32_t _RecvPacket(ProtoSSLRefT *  pState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protossl.c:737
	int32_t iSize;

	// protossl.c:738
	SecureStateT * pSecure;

	{
		// protossl.c:774
		uint8_t[20] MacTemp;

		// protossl.c:780
		struct {
			// protossl.c:777
			uint8_t[8] uSeqn;

			// protossl.c:778
			uint8_t uType;

			// protossl.c:779
			uint8_t[2] uLength;

		}

		// protossl.c:780
		structure  MacData;

		{
			// protossl.c:824
			CryptMD5T MD5Context;

		}
		{
			// protossl.c:848
			CryptSha1T SHAContext;

		}
	}
}

// protossl.c:908
const void * _RecvHandshake(ProtoSSLRefT *  pState, uint8_t  uType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protossl.c:909
	int32_t iSize;

	// protossl.c:910
	SecureStateT * pSecure;

	// protossl.c:911
	uint8_t * pRecv;

}

// protossl.c:968
void _ExtractSignedHash(const ProtoSSLCACertT *  pCert, uint8_t *  pEncryptedSig, uint32_t  uSigLen, uint8_t *  pHash, uint32_t  uHashLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protossl.c:969
	CryptRSAT RSA;

	// protossl.c:973
	uint32_t uHashOffset;

}

// protossl.c:1003
const unsigned char * _ParseHeader(const unsigned char *  pData, const unsigned char *  pLast, int32_t *  pType, int32_t *  pSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protossl.c:1004
	int32_t iCnt;

	// protossl.c:1005
	uint32_t uLen;

}

// protossl.c:1086
int32_t _ParseObject(const unsigned char *  pData, int32_t  iSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protossl.c:1087
	int32_t iType;

	// protossl.c:1088
	int32_t iIndex;

}

// protossl.c:1128
void _ParseString(const unsigned char *  pData, int32_t  iSize, char *  pString, int32_t  iLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protossl.c:1160
int32_t _ParseCertificate(ProtoSSLRefT *  pState, X509CertificateT *  pCert, const uint8_t *  pData, int32_t  iSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protossl.c:1161
	int32_t iType;

	// protossl.c:1162
	int32_t iObjType;

	// protossl.c:1163
	const uint8_t * pInfSkip;

	// protossl.c:1164
	const uint8_t * pSigSkip;

	// protossl.c:1165
	const uint8_t * pIssSkip;

	// protossl.c:1166
	const uint8_t * pSubSkip;

	// protossl.c:1167
	const uint8_t * pKeySkip;

	// protossl.c:1168
	const uint8_t * pHashableCertStart;

	// protossl.c:1169
	const uint8_t * pLast;

	// protossl.c:1170
	uint32_t uHashableCertLen;

	// protossl.c:1171
	uint32_t uHashLen;

	// protossl.c:1172
	uint8_t[20] strHash;

	// protossl.c:1173
	uint8_t[20] strSigHash;

	// protossl.c:1174
	const ProtoSSLCACertT * pCACert;

	{
		// protossl.c:1531
		CryptMD5T MD5;

	}
	{
		// protossl.c:1540
		CryptSha1T Sha1;

	}
}

// protossl.c:1580
extern ProtoSSLRefT * ProtoSSLCreate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protossl.c:1581
	ProtoSSLRefT * pState;

	// protossl.c:1582
	int32_t iMemGroup;

}

// protossl.c:1612
extern void ProtoSSLReset(ProtoSSLRefT *  pState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protossl.c:1633
extern void ProtoSSLDestroy(ProtoSSLRefT *  pState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protossl.c:1662
extern ProtoSSLRefT * ProtoSSLAccept(ProtoSSLRefT *  pState, int32_t  iSecure, sockaddr *  pAddr, int32_t *  pAddrlen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protossl.c:1663
	ProtoSSLRefT * pClient;

	// protossl.c:1664
	SocketT * pSocket;

}

// protossl.c:1704
extern int32_t ProtoSSLBind(ProtoSSLRefT *  pState, const sockaddr *  pAddr, int32_t  iAddrlen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protossl.c:1705
	int32_t iResult;

}

// protossl.c:1741
extern int32_t ProtoSSLConnect(ProtoSSLRefT *  pState, int32_t  iSecure, const char *  pAddr, uint32_t  uAddr, int32_t  iPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protossl.c:1742
	int32_t iIndex;

	// protossl.c:1743
	int32_t iError;

	{
		// protossl.c:1780
		uint32_t val2;

	}
}

// protossl.c:1826
extern int32_t ProtoSSLListen(ProtoSSLRefT *  pState, int32_t  iBacklog) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protossl.c:1827
	int32_t iResult;

}

// protossl.c:1847
extern int32_t ProtoSSLDisconnect(ProtoSSLRefT *  pState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protossl.c:1882
int32_t _ProtoSSLUpdateSendClientHello(ProtoSSLRefT *  pState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protossl.c:1883
	int32_t iResult;

	// protossl.c:1884
	uint8_t[4] strHead;

	// protossl.c:1885
	uint8_t[256] strBody;

	// protossl.c:1886
	uint8_t * pData;

	// protossl.c:1887
	SecureStateT * pSecure;

}

// protossl.c:1936
int32_t _ProtoSSLUpdateRecvServerHello(ProtoSSLRefT *  pState, const uint8_t *  pData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protossl.c:1937
	int32_t iIndex;

	// protossl.c:1938
	SecureStateT * pSecure;

}

// protossl.c:1988
int32_t _ProtoSSLUpdateRecvServerCert(ProtoSSLRefT *  pState, const uint8_t *  pData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protossl.c:1989
	int32_t iSize1;

	// protossl.c:1990
	int32_t iSize2;

	// protossl.c:1991
	int32_t iParse;

	// protossl.c:1992
	SecureStateT * pSecure;

}

// protossl.c:2027
int32_t _ProtoSSLUpdateRecvServerKey(ProtoSSLRefT *  pState, const uint8_t *  pData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protossl.c:2044
int32_t _ProtoSSLUpdateRecvServerDone(ProtoSSLRefT *  pState, const uint8_t *  pData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// protossl.c:2054
int32_t _ProtoSSLUpdateSendClientKey(ProtoSSLRefT *  pState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protossl.c:2055
	int32_t iLoop;

	// protossl.c:2056
	CryptRSAT RSAContext;

	// protossl.c:2057
	CryptMD5T MD5Context;

	// protossl.c:2058
	CryptSha1T SHA1Context;

	// protossl.c:2059
	uint8_t * pData;

	// protossl.c:2060
	uint8_t[4] strHead;

	// protossl.c:2061
	uint8_t[256] strBody;

	// protossl.c:2062
	SecureStateT * pSecure;

}

// protossl.c:2153
int32_t _ProtoSSLUpdateSendChange(ProtoSSLRefT *  pState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protossl.c:2154
	uint8_t[4] strHead;

	// protossl.c:2155
	SecureStateT * pSecure;

}

// protossl.c:2175
int32_t _ProtoSSLUpdateSendClientFinish(ProtoSSLRefT *  pState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protossl.c:2176
	uint8_t[4] strHead;

	// protossl.c:2177
	uint8_t[256] strBody;

	// protossl.c:2178
	CryptMD5T MD5Context;

	// protossl.c:2179
	CryptSha1T SHAContext;

	// protossl.c:2180
	uint8_t[20] MacTemp;

	// protossl.c:2181
	SecureStateT * pSecure;

}

// protossl.c:2231
int32_t _ProtoSSLUpdateRecvChange(ProtoSSLRefT *  pState, const uint8_t *  pData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protossl.c:2232
	SecureStateT * pSecure;

}

// protossl.c:2250
int32_t _ProtoSSLUpdateRecvServerFinish(ProtoSSLRefT *  pState, const uint8_t *  pData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protossl.c:2251
	CryptMD5T MD5Context;

	// protossl.c:2252
	CryptSha1T SHAContext;

	// protossl.c:2253
	uint8_t[20] MacTemp;

	// protossl.c:2254
	uint8_t[16] strMD5;

	// protossl.c:2255
	uint8_t[20] strSHA;

	// protossl.c:2256
	SecureStateT * pSecure;

}

// protossl.c:2311
extern void ProtoSSLUpdate(ProtoSSLRefT *  pState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protossl.c:2312
	int32_t iXfer;

	// protossl.c:2313
	int32_t iResult;

	// protossl.c:2314
	const uint8_t * pData;

	// protossl.c:2315
	SecureStateT * pSecure;

	{
		// protossl.c:2330
		uint32_t val2;

	}
}

// protossl.c:2570
extern int32_t ProtoSSLSend(ProtoSSLRefT *  pState, const char *  pBuffer, int32_t  iLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protossl.c:2571
	int32_t iResult;

	// protossl.c:2572
	SecureStateT * pSecure;

}

// protossl.c:2630
extern int32_t ProtoSSLRecv(ProtoSSLRefT *  pState, char *  pBuffer, int32_t  iLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protossl.c:2631
	int32_t iResult;

	// protossl.c:2632
	SecureStateT * pSecure;

}

// protossl.c:2705
extern int32_t ProtoSSLStat(ProtoSSLRefT *  pState, int32_t  iSelect, void *  pBuffer, int32_t  iLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// protossl.c:2706
	int32_t iResult;

}

// protossl.c:311
const uint8_t[48] _SSL3_Pad1;

// protossl.c:319
const uint8_t[48] _SSL3_Pad2;

// protossl.c:327
const CipherSuiteT[2] _SSL3_CipherSuite;

// protossl.c:340
const structure [10] _SSL_ObjectList;

// protossl.c:358
const uint8_t[128] _ProtoSSL_LobbyServerModulus3;

// protossl.c:381
const uint8_t[125] _ProtoSSL_RSAServerModulus;

// protossl.c:402
const uint8_t[128] _ProtoSSL_EquifaxServerModulus;

// protossl.c:423
const ProtoSSLCACertT[4] _ProtoSSL_CACerts;

// protossl.c:440
extern uint32_t[4] _ProtoSSL_Random;

