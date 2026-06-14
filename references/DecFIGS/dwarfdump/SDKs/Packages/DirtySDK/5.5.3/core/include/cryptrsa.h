// cryptrsa.h:41
typedef CryptRSARandomT CryptRSARandomT;

// cryptrsa.h:41
struct CryptRSARandomT {
	// cryptrsa.h:46
	uint32_t u0;

	// cryptrsa.h:47
	uint32_t u1;

}

// cryptrsa.h:51
typedef CryptRSAT CryptRSAT;

// cryptrsa.h:51
struct CryptRSAT {
	// cryptrsa.h:56
	unsigned char[1024] EncryptBlock;

	// cryptrsa.h:58
	int32_t iKeyModSize;

	// cryptrsa.h:59
	unsigned char[129] KeyModData;

	// cryptrsa.h:60
	int32_t iKeyExpSize;

	// cryptrsa.h:61
	unsigned char[129] KeyExpData;

	// cryptrsa.h:62
	CryptRSARandomT Random;

}

