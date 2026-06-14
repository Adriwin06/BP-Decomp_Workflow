// netconndefs.h:67
struct NetConfigRecT {
	// netconndefs.h:68
	int32_t iIdent;

	// netconndefs.h:69
	int32_t iType;

	// netconndefs.h:70
	char[62] strDev;

	// netconndefs.h:71
	char[62] strIsp;

	// netconndefs.h:72
	char[123] strLoad;

	// netconndefs.h:73
	unsigned char uFlags;

}

// netconndefs.h:74
typedef NetConfigRecT NetConfigRecT;

