// cryptsha1.h:39
typedef CryptSha1T CryptSha1T;

// cryptsha1.h:39
struct CryptSha1T {
	// cryptsha1.h:44
	uint32_t uCount;

	// cryptsha1.h:45
	uint32_t uPartialCount;

	// cryptsha1.h:46
	uint32_t[5] H;

	// cryptsha1.h:47
	uint8_t[64] strData;

}

