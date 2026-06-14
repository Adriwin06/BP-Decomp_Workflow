// celpenc.h:39
struct {
	// celpenc.h:36
	uint32_t workMemSize;

	// celpenc.h:37
	uint32_t celpEncVerUpper;

	// celpenc.h:38
	uint32_t celpEncVerLower;

}

// celpenc.h:39
typedef structure  CellCelpEncAttr;

// celpenc.h:47
struct {
	// celpenc.h:42
	uint32_t totalMemSize;

	// celpenc.h:43
	void * startAddr;

	// celpenc.h:44
	uint32_t ppuThreadPriority;

	// celpenc.h:45
	uint32_t spuThreadPriority;

	// celpenc.h:46
	size_t ppuThreadStackSize;

}

// celpenc.h:47
typedef structure  CellCelpEncResource;

// celpenc.h:56
struct {
	// celpenc.h:50
	uint32_t excitationMode;

	// celpenc.h:51
	uint32_t sampleRate;

	// celpenc.h:52
	uint32_t configuration;

	// celpenc.h:53
	uint32_t wordSize;

	// celpenc.h:54
	uint8_t * outBuff;

	// celpenc.h:55
	uint32_t outSize;

}

// celpenc.h:56
typedef structure  CellCelpEncParam;

// celpenc.h:78
struct {
	// celpenc.h:76
	void * startAddr;

	// celpenc.h:77
	uint32_t size;

}

// celpenc.h:78
typedef structure  CellCelpEncAuInfo;

// celpenc.h:83
struct {
	// celpenc.h:81
	void * startAddr;

	// celpenc.h:82
	uint32_t size;

}

// celpenc.h:83
typedef structure  CellCelpEncPcmInfo;

// celpenc.h:85
typedef void * CellCelpEncHandle;

