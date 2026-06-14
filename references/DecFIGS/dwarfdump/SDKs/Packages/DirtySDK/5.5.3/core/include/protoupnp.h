// protoupnp.h:51
typedef ProtoUpnpRefT ProtoUpnpRefT;

// protoupnp.h:43
struct ProtoUpnpMacroT {
	// protoupnp.h:44
	int32_t iControl;

	// protoupnp.h:45
	int32_t iValue;

	// protoupnp.h:46
	int32_t iValue2;

	// protoupnp.h:47
	void * pValue;

}

// protoupnp.h:48
typedef ProtoUpnpMacroT ProtoUpnpMacroT;

// protoupnp.h:51
struct ProtoUpnpRefT {
	// protoupnp.c:136
	int32_t iRefCount;

	// protoupnp.c:137
	int32_t iMemGroup;

	// protoupnp.c:139
	ProtoUdpT * pProtoUdp;

	// protoupnp.c:140
	ProtoHttpRefT * pProtoHttp;

	// protoupnp.c:142
	int32_t iClientAddr;

	// protoupnp.c:144
	int32_t iDiscoveryTimer;

	// protoupnp.c:145
	sockaddr DiscoveryAddr;

	// protoupnp.c:147
	int32_t iStatus;

	// protoupnp.c:149
	int32_t iService;

	// protoupnp.c:151
	ProtoUpnpDeviceT Device;

	// protoupnp.c:166
	enumeration  eState;

	// protoupnp.c:168
	int32_t iSendSize;

	// protoupnp.c:169
	int32_t iSoapError;

	// protoupnp.c:171
	int32_t iRemoteHost;

	// protoupnp.c:172
	int32_t iPortToMapExt;

	// protoupnp.c:173
	int32_t iPortToMapInt;

	// protoupnp.c:174
	int32_t iLeaseDuration;

	// protoupnp.c:176
	const ProtoUpnpMacroT * pCommandList;

	// protoupnp.c:178
	uint8_t bRequestInProgress;

	// protoupnp.c:179
	uint8_t bEnableMapping;

	// protoupnp.c:180
	uint8_t bPortIsMapped;

	// protoupnp.c:181
	uint8_t bVerbose;

	// protoupnp.c:184
	uint8_t bFakeResponse;

	// protoupnp.c:187
	char[64] strRequestName;

	// protoupnp.c:188
	char[2048] strSendBuf;

	// protoupnp.c:189
	char[16384] strRecvBuf;

}

