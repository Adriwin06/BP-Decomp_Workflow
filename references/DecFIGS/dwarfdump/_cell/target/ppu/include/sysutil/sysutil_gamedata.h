// sysutil_gamedata.h:66
struct CellGameDataSystemFileParam {
	// sysutil_gamedata.h:67
	char[128] title;

	// sysutil_gamedata.h:68
	char[20][128] titleLang;

	// sysutil_gamedata.h:70
	char[10] titleId;

	// sysutil_gamedata.h:72
	char[2] reserved0;

	// sysutil_gamedata.h:73
	char[6] dataVersion;

	// sysutil_gamedata.h:75
	char[2] reserved1;

	// sysutil_gamedata.h:77
	unsigned int attribute;

	// sysutil_gamedata.h:78
	unsigned int parentalLevel;

	// sysutil_gamedata.h:79
	char[256] reserved2;

}

// sysutil_gamedata.h:82
struct CellGameDataStatGet {
	// sysutil_gamedata.h:83
	int hddFreeSizeKB;

	// sysutil_gamedata.h:85
	unsigned int isNewData;

	// sysutil_gamedata.h:87
	char[1055] contentInfoPath;

	// sysutil_gamedata.h:89
	char[1055] gameDataPath;

	// sysutil_gamedata.h:91
	char[2] reserved0;

	// sysutil_gamedata.h:92
	time_t st_atime;

	// sysutil_gamedata.h:93
	time_t st_mtime;

	// sysutil_gamedata.h:94
	time_t st_ctime;

	// sysutil_gamedata.h:96
	CellGameDataSystemFileParam getParam;

	// sysutil_gamedata.h:98
	int sizeKB;

	// sysutil_gamedata.h:99
	int sysSizeKB;

	// sysutil_gamedata.h:101
	char[68] reserved1;

}

// sysutil_gamedata.h:104
struct CellGameDataStatSet {
	// sysutil_gamedata.h:105
	CellGameDataSystemFileParam * setParam;

	// sysutil_gamedata.h:106
	void * reserved;

}

// sysutil_gamedata.h:118
struct CellGameDataCBResult {
	// sysutil_gamedata.h:119
	int result;

	// sysutil_gamedata.h:121
	int errNeedSizeKB;

	// sysutil_gamedata.h:122
	char * invalidMsg;

	// sysutil_gamedata.h:123
	void * reserved;

}

