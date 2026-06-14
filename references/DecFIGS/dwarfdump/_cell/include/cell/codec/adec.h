// adec.h:84
struct {
	// adec.h:83
	uint32_t audioCodecType;

}

// adec.h:84
typedef structure  CellAdecType;

// adec.h:91
struct {
	// adec.h:88
	uint32_t workMemSize;

	// adec.h:89
	uint32_t adecVerUpper;

	// adec.h:90
	uint32_t adecVerLower;

}

// adec.h:91
typedef structure  CellAdecAttr;

// adec.h:99
struct {
	// adec.h:94
	uint32_t totalMemSize;

	// adec.h:95
	void * startAddr;

	// adec.h:96
	uint32_t ppuThreadPriority;

	// adec.h:97
	uint32_t spuThreadPriority;

	// adec.h:98
	size_t ppuThreadStackSize;

}

// adec.h:99
typedef structure  CellAdecResource;

// adec.h:101
enum {
	CELL_ADEC_MSG_TYPE_AUDONE = 0,
	CELL_ADEC_MSG_TYPE_PCMOUT = 1,
	CELL_ADEC_MSG_TYPE_ERROR = 2,
	CELL_ADEC_MSG_TYPE_SEQDONE = 3,
}

// adec.h:106
typedef enumeration  CellAdecMsgType;

// adec.h:108
typedef void * CellAdecHandle;

// adec.h:117
typedef int32_t (*)(CellAdecHandle, CellAdecMsgType, int32_t, void *) CellAdecCbMsg;

// adec.h:124
struct {
	// adec.h:122
	CellAdecCbMsg callbackFunc;

	// adec.h:123
	void * callbackArg;

}

// adec.h:124
typedef structure  CellAdecCb;

// adec.h:129
struct {
	// adec.h:127
	uint32_t upper;

	// adec.h:128
	uint32_t lower;

}

// adec.h:129
typedef structure  CellAdecTimeStamp;

// adec.h:137
struct {
	// adec.h:133
	void * startAddr;

	// adec.h:134
	uint32_t size;

	// adec.h:135
	CellAdecTimeStamp pts;

	// adec.h:136
	uint64_t userData;

}

// adec.h:137
typedef structure  CellAdecAuInfo;

// adec.h:142
struct {
	// adec.h:141
	void * bsiInfo;

}

// adec.h:142
typedef structure  CellAdecPcmAttr;

// adec.h:151
struct {
	// adec.h:145
	uint32_t pcmHandle;

	// adec.h:146
	uint32_t status;

	// adec.h:147
	void * startAddr;

	// adec.h:148
	uint32_t size;

	// adec.h:149
	CellAdecPcmAttr pcmAttr;

	// adec.h:150
	CellAdecAuInfo auInfo;

}

// adec.h:151
typedef structure  CellAdecPcmItem;

