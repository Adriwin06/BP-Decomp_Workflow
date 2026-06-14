// audio.h:72
struct {
	// audio.h:68
	uint64_t nChannel;

	// audio.h:69
	uint64_t nBlock;

	// audio.h:70
	uint64_t attr;

	// audio.h:71
	float level;

}

// audio.h:72
typedef structure  CellAudioPortParam;

// audio.h:81
struct {
	// audio.h:75
	sys_addr_t readIndexAddr;

	// audio.h:76
	uint32_t status;

	// audio.h:77
	uint64_t nChannel;

	// audio.h:78
	uint64_t nBlock;

	// audio.h:79
	uint32_t portSize;

	// audio.h:80
	sys_addr_t portAddr;

}

// audio.h:81
typedef structure  CellAudioPortConfig;

