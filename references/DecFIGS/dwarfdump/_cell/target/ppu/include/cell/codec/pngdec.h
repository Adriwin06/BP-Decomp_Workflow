// pngdec.h:53
typedef void * CellPngDecMainHandle;

// pngdec.h:54
typedef void * CellPngDecSubHandle;

// pngdec.h:56
enum CellPngDecStreamSrcSel {
	CELL_PNGDEC_FILE = 0,
	CELL_PNGDEC_BUFFER = 1,
}

// pngdec.h:61
enum CellPngDecSpuThreadEna {
	CELL_PNGDEC_SPU_THREAD_DISABLE = 0,
	CELL_PNGDEC_SPU_THREAD_ENABLE = 1,
}

// pngdec.h:66
enum CellPngDecOutputMode {
	CELL_PNGDEC_TOP_TO_BOTTOM = 0,
	CELL_PNGDEC_BOTTOM_TO_TOP = 1,
}

// pngdec.h:71
enum CellPngDecColorSpace {
	CELL_PNGDEC_GRAYSCALE = 1,
	CELL_PNGDEC_RGB = 2,
	CELL_PNGDEC_PALETTE = 4,
	CELL_PNGDEC_GRAYSCALE_ALPHA = 9,
	CELL_PNGDEC_RGBA = 10,
	CELL_PNGDEC_ARGB = 20,
}

// pngdec.h:80
enum CellPngDecInterlaceMode {
	CELL_PNGDEC_NO_INTERLACE = 0,
	CELL_PNGDEC_ADAM7_INTERLACE = 1,
}

// pngdec.h:85
enum CellPngDecPackFlag {
	CELL_PNGDEC_1BYTE_PER_NPIXEL = 0,
	CELL_PNGDEC_1BYTE_PER_1PIXEL = 1,
}

// pngdec.h:90
enum CellPngDecAlphaSelect {
	CELL_PNGDEC_STREAM_ALPHA = 0,
	CELL_PNGDEC_FIX_ALPHA = 1,
}

// pngdec.h:95
enum CellPngDecCommand {
	CELL_PNGDEC_CONTINUE = 0,
	CELL_PNGDEC_STOP = 1,
}

// pngdec.h:100
enum CellPngDecDecodeStatus {
	CELL_PNGDEC_DEC_STATUS_FINISH = 0,
	CELL_PNGDEC_DEC_STATUS_STOP = 1,
}

// pngdec.h:108
typedef void *(*)(uint32_t, void *) CellPngDecCbControlMalloc;

// pngdec.h:113
typedef int32_t (*)(void *, void *) CellPngDecCbControlFree;

// pngdec.h:116
struct CellPngDecThreadInParam {
	// pngdec.h:117
	CellPngDecSpuThreadEna spuThreadEnable;

	// pngdec.h:118
	uint32_t ppuThreadPriority;

	// pngdec.h:119
	uint32_t spuThreadPriority;

	// pngdec.h:120
	CellPngDecCbControlMalloc cbCtrlMallocFunc;

	// pngdec.h:121
	void * cbCtrlMallocArg;

	// pngdec.h:122
	CellPngDecCbControlFree cbCtrlFreeFunc;

	// pngdec.h:123
	void * cbCtrlFreeArg;

}

// pngdec.h:124
typedef CellPngDecThreadInParam CellPngDecThreadInParam;

// pngdec.h:126
struct CellPngDecThreadOutParam {
	// pngdec.h:127
	uint32_t pngCodecVersion;

}

// pngdec.h:128
typedef CellPngDecThreadOutParam CellPngDecThreadOutParam;

// pngdec.h:130
struct CellPngDecSrc {
	// pngdec.h:131
	CellPngDecStreamSrcSel srcSelect;

	// pngdec.h:132
	const char * fileName;

	// pngdec.h:133
	int64_t fileOffset;

	// pngdec.h:134
	uint32_t fileSize;

	// pngdec.h:135
	void * streamPtr;

	// pngdec.h:136
	uint32_t streamSize;

	// pngdec.h:137
	CellPngDecSpuThreadEna spuThreadEnable;

}

// pngdec.h:138
typedef CellPngDecSrc CellPngDecSrc;

// pngdec.h:140
struct CellPngDecOpnInfo {
	// pngdec.h:141
	uint32_t initSpaceAllocated;

}

// pngdec.h:142
typedef CellPngDecOpnInfo CellPngDecOpnInfo;

// pngdec.h:144
struct CellPngDecInfo {
	// pngdec.h:145
	uint32_t imageWidth;

	// pngdec.h:146
	uint32_t imageHeight;

	// pngdec.h:147
	uint32_t numComponents;

	// pngdec.h:148
	CellPngDecColorSpace colorSpace;

	// pngdec.h:149
	uint32_t bitDepth;

	// pngdec.h:150
	CellPngDecInterlaceMode interlaceMethod;

	// pngdec.h:151
	uint32_t chunkInformation;

}

// pngdec.h:152
typedef CellPngDecInfo CellPngDecInfo;

// pngdec.h:154
struct CellPngDecInParam {
	// pngdec.h:155
	CellPngDecCommand volatile* commandPtr;

	// pngdec.h:156
	CellPngDecOutputMode outputMode;

	// pngdec.h:157
	CellPngDecColorSpace outputColorSpace;

	// pngdec.h:158
	uint32_t outputBitDepth;

	// pngdec.h:159
	CellPngDecPackFlag outputPackFlag;

	// pngdec.h:160
	CellPngDecAlphaSelect outputAlphaSelect;

	// pngdec.h:161
	uint32_t outputColorAlpha;

}

// pngdec.h:162
typedef CellPngDecInParam CellPngDecInParam;

// pngdec.h:164
struct CellPngDecOutParam {
	// pngdec.h:165
	uint64_t outputWidthByte;

	// pngdec.h:166
	uint32_t outputWidth;

	// pngdec.h:167
	uint32_t outputHeight;

	// pngdec.h:168
	uint32_t outputComponents;

	// pngdec.h:169
	uint32_t outputBitDepth;

	// pngdec.h:170
	CellPngDecOutputMode outputMode;

	// pngdec.h:171
	CellPngDecColorSpace outputColorSpace;

	// pngdec.h:172
	uint32_t useMemorySpace;

}

// pngdec.h:173
typedef CellPngDecOutParam CellPngDecOutParam;

// pngdec.h:175
struct CellPngDecDataCtrlParam {
	// pngdec.h:176
	uint64_t outputBytesPerLine;

}

// pngdec.h:177
typedef CellPngDecDataCtrlParam CellPngDecDataCtrlParam;

// pngdec.h:179
struct CellPngDecDataOutInfo {
	// pngdec.h:180
	uint32_t chunkInformation;

	// pngdec.h:181
	uint32_t numText;

	// pngdec.h:182
	uint32_t numUnknownChunk;

	// pngdec.h:183
	CellPngDecDecodeStatus status;

}

// pngdec.h:184
typedef CellPngDecDataOutInfo CellPngDecDataOutInfo;

