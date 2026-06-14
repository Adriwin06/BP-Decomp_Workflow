// buddyapi.h:219
struct CgsNetwork::DirtySock::BuddyApiMsgT {
	// buddyapi.h:220
	int32_t iType;

	// buddyapi.h:221
	int32_t iKind;

	// buddyapi.h:222
	int32_t iCode;

	// buddyapi.h:223
	uint32_t uTimeStamp;

	// buddyapi.h:224
	uint32_t uUserFlags;

	// buddyapi.h:225
	const char * pData;

}

// buddyapi.h:219
struct BuddyApiMsgT {
	// buddyapi.h:220
	int32_t iType;

	// buddyapi.h:221
	int32_t iKind;

	// buddyapi.h:222
	int32_t iCode;

	// buddyapi.h:223
	uint32_t uTimeStamp;

	// buddyapi.h:224
	uint32_t uUserFlags;

	// buddyapi.h:225
	const char * pData;

}

// buddyapi.h:226
typedef BuddyApiMsgT BuddyApiMsgT;

// buddyapi.h:229
struct BuddyApiUserT {
	// buddyapi.h:230
	char[17] name;

	// buddyapi.h:231
	char[5] domain;

	// buddyapi.h:232
	char[17] product;

}

// buddyapi.h:233
typedef BuddyApiUserT BuddyApiUserT;

// buddyapi.h:247
typedef void *(int32_t, int32_t, int32_t) BuddyMemAllocT;

// buddyapi.h:250
typedef void (void *, int32_t, int32_t) BuddyMemFreeT;

