// sysutil_savedata.h:112
enum CellSaveDataFileType {
	CELL_SAVEDATA_FILETYPE_SECUREFILE = 0,
	CELL_SAVEDATA_FILETYPE_NORMALFILE = 1,
	CELL_SAVEDATA_FILETYPE_CONTENT_ICON0 = 2,
	CELL_SAVEDATA_FILETYPE_CONTENT_ICON1 = 3,
	CELL_SAVEDATA_FILETYPE_CONTENT_PIC1 = 4,
	CELL_SAVEDATA_FILETYPE_CONTENT_SND0 = 5,
}

// sysutil_savedata.h:128
struct CellSaveDataSetList {
	// sysutil_savedata.h:129
	unsigned int sortType;

	// sysutil_savedata.h:130
	unsigned int sortOrder;

	// sysutil_savedata.h:131
	char * dirNamePrefix;

	// sysutil_savedata.h:132
	void * reserved;

}

// sysutil_savedata.h:135
struct CellSaveDataSetBuf {
	// sysutil_savedata.h:136
	unsigned int dirListMax;

	// sysutil_savedata.h:137
	unsigned int fileListMax;

	// sysutil_savedata.h:138
	unsigned int[6] reserved;

	// sysutil_savedata.h:140
	unsigned int bufSize;

	// sysutil_savedata.h:141
	void * buf;

}

// sysutil_savedata.h:144
struct CellSaveDataNewDataIcon {
	// sysutil_savedata.h:145
	char * title;

	// sysutil_savedata.h:146
	unsigned int iconBufSize;

	// sysutil_savedata.h:147
	void * iconBuf;

	// sysutil_savedata.h:148
	void * reserved;

}

// sysutil_savedata.h:153
struct CellSaveDataDirList {
	// sysutil_savedata.h:154
	char[32] dirName;

	// sysutil_savedata.h:155
	char[8] listParam;

	// sysutil_savedata.h:156
	char[8] reserved;

}

// sysutil_savedata.h:167
struct CellSaveDataListGet {
	// sysutil_savedata.h:168
	unsigned int dirNum;

	// sysutil_savedata.h:169
	unsigned int dirListNum;

	// sysutil_savedata.h:170
	CellSaveDataDirList * dirList;

	// sysutil_savedata.h:171
	char[64] reserved;

}

// sysutil_savedata.h:184
struct CellSaveDataFixedSet {
	// sysutil_savedata.h:185
	char * dirName;

	// sysutil_savedata.h:187
	CellSaveDataNewDataIcon * newIcon;

	// sysutil_savedata.h:188
	void * reserved;

}

// sysutil_savedata.h:192
struct CellSaveDataSystemFileParam {
	// sysutil_savedata.h:193
	char[128] title;

	// sysutil_savedata.h:194
	char[128] subTitle;

	// sysutil_savedata.h:195
	char[1024] detail;

	// sysutil_savedata.h:196
	unsigned int attribute;

	// sysutil_savedata.h:197
	unsigned int parentalLevel;

	// sysutil_savedata.h:198
	char[8] listParam;

	// sysutil_savedata.h:199
	char[256] reserved;

}

// sysutil_savedata.h:202
struct CellSaveDataDirStat {
	// sysutil_savedata.h:203
	time_t st_atime;

	// sysutil_savedata.h:204
	time_t st_mtime;

	// sysutil_savedata.h:205
	time_t st_ctime;

	// sysutil_savedata.h:206
	char[32] dirName;

}

// sysutil_savedata.h:209
struct CellSaveDataFileStat {
	// sysutil_savedata.h:210
	unsigned int fileType;

	// sysutil_savedata.h:211
	char[4] reserved1;

	// sysutil_savedata.h:212
	uint64_t st_size;

	// sysutil_savedata.h:213
	time_t st_atime;

	// sysutil_savedata.h:214
	time_t st_mtime;

	// sysutil_savedata.h:215
	time_t st_ctime;

	// sysutil_savedata.h:216
	char[13] fileName;

	// sysutil_savedata.h:217
	char[3] reserved2;

}

// sysutil_savedata.h:220
struct CellSaveDataStatGet {
	// sysutil_savedata.h:221
	int hddFreeSizeKB;

	// sysutil_savedata.h:223
	unsigned int isNewData;

	// sysutil_savedata.h:224
	CellSaveDataDirStat dir;

	// sysutil_savedata.h:225
	CellSaveDataSystemFileParam getParam;

	// sysutil_savedata.h:226
	unsigned int bind;

	// sysutil_savedata.h:228
	int sizeKB;

	// sysutil_savedata.h:229
	int sysSizeKB;

	// sysutil_savedata.h:231
	unsigned int fileNum;

	// sysutil_savedata.h:232
	unsigned int fileListNum;

	// sysutil_savedata.h:233
	CellSaveDataFileStat * fileList;

	// sysutil_savedata.h:234
	char[64] reserved;

}

// sysutil_savedata.h:237
struct CellSaveDataStatSet {
	// sysutil_savedata.h:238
	CellSaveDataSystemFileParam * setParam;

	// sysutil_savedata.h:239
	unsigned int reCreateMode;

	// sysutil_savedata.h:240
	void * reserved;

}

// sysutil_savedata.h:245
struct CellSaveDataFileGet {
	// sysutil_savedata.h:246
	unsigned int excSize;

	// sysutil_savedata.h:247
	char[64] reserved;

}

// sysutil_savedata.h:250
struct CellSaveDataFileSet {
	// sysutil_savedata.h:251
	unsigned int fileOperation;

	// sysutil_savedata.h:252
	void * reserved;

	// sysutil_savedata.h:254
	unsigned int fileType;

	// sysutil_savedata.h:255
	unsigned char[16] secureFileId;

	// sysutil_savedata.h:257
	char * fileName;

	// sysutil_savedata.h:259
	unsigned int fileOffset;

	// sysutil_savedata.h:260
	unsigned int fileSize;

	// sysutil_savedata.h:261
	unsigned int fileBufSize;

	// sysutil_savedata.h:262
	void * fileBuf;

}

// sysutil_savedata.h:285
struct CellSaveDataCBResult {
	// sysutil_savedata.h:286
	int result;

	// sysutil_savedata.h:288
	unsigned int progressBarInc;

	// sysutil_savedata.h:290
	int errNeedSizeKB;

	// sysutil_savedata.h:291
	char * invalidMsg;

	// sysutil_savedata.h:292
	void * userdata;

}

