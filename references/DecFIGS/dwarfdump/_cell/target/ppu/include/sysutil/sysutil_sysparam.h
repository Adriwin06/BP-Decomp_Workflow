// sysutil_sysparam.h:76
enum CellVideoOutResolutionId {
	CELL_VIDEO_OUT_RESOLUTION_UNDEFINED = 0,
	CELL_VIDEO_OUT_RESOLUTION_1080 = 1,
	CELL_VIDEO_OUT_RESOLUTION_720 = 2,
	CELL_VIDEO_OUT_RESOLUTION_480 = 4,
	CELL_VIDEO_OUT_RESOLUTION_576 = 5,
	CELL_VIDEO_OUT_RESOLUTION_1600x1080 = 10,
	CELL_VIDEO_OUT_RESOLUTION_1440x1080 = 11,
	CELL_VIDEO_OUT_RESOLUTION_1280x1080 = 12,
	CELL_VIDEO_OUT_RESOLUTION_960x1080 = 13,
}

// sysutil_sysparam.h:86
typedef CellVideoOutResolutionId CellVideoOutResolutionId;

// sysutil_sysparam.h:88
enum CellVideoOutScanMode {
	CELL_VIDEO_OUT_SCAN_MODE_INTERLACE = 0,
	CELL_VIDEO_OUT_SCAN_MODE_PROGRESSIVE = 1,
}

// sysutil_sysparam.h:91
typedef CellVideoOutScanMode CellVideoOutScanMode;

// sysutil_sysparam.h:182
struct CellVideoOutDisplayMode {
	// sysutil_sysparam.h:183
	uint8_t resolutionId;

	// sysutil_sysparam.h:184
	uint8_t scanMode;

	// sysutil_sysparam.h:185
	uint8_t conversion;

	// sysutil_sysparam.h:186
	uint8_t aspect;

	// sysutil_sysparam.h:187
	uint8_t[2] reserved;

	// sysutil_sysparam.h:188
	uint16_t refreshRates;

}

// sysutil_sysparam.h:189
typedef CellVideoOutDisplayMode CellVideoOutDisplayMode;

// sysutil_sysparam.h:208
struct CellVideoOutState {
	// sysutil_sysparam.h:209
	uint8_t state;

	// sysutil_sysparam.h:210
	uint8_t colorSpace;

	// sysutil_sysparam.h:211
	uint8_t[6] reserved;

	// sysutil_sysparam.h:212
	CellVideoOutDisplayMode displayMode;

}

// sysutil_sysparam.h:213
typedef CellVideoOutState CellVideoOutState;

// sysutil_sysparam.h:347
struct CellAudioOutSoundMode {
	// sysutil_sysparam.h:348
	uint8_t type;

	// sysutil_sysparam.h:349
	uint8_t channel;

	// sysutil_sysparam.h:350
	uint8_t fs;

	// sysutil_sysparam.h:351
	uint8_t reserved;

	// sysutil_sysparam.h:352
	uint32_t layout;

}

// sysutil_sysparam.h:353
typedef CellAudioOutSoundMode CellAudioOutSoundMode;

// sysutil_sysparam.h:355
struct CellAudioOutState {
	// sysutil_sysparam.h:356
	uint8_t state;

	// sysutil_sysparam.h:357
	uint8_t encoder;

	// sysutil_sysparam.h:358
	uint8_t[6] reserved;

	// sysutil_sysparam.h:359
	uint32_t downMixer;

	// sysutil_sysparam.h:360
	CellAudioOutSoundMode soundMode;

}

// sysutil_sysparam.h:361
typedef CellAudioOutState CellAudioOutState;

// sysutil_sysparam.h:378
struct CellAudioOutConfiguration {
	// sysutil_sysparam.h:379
	uint8_t channel;

	// sysutil_sysparam.h:380
	uint8_t encoder;

	// sysutil_sysparam.h:381
	uint8_t[10] reserved;

	// sysutil_sysparam.h:382
	uint32_t downMixer;

}

// sysutil_sysparam.h:383
typedef CellAudioOutConfiguration CellAudioOutConfiguration;

