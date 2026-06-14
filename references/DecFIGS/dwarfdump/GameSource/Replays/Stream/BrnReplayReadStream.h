// BrnReplayReadStream.h:44
struct BrnReplays::FrunkReadResult {
	// BrnReplayReadStream.h:48
	float32_t mfTime;

	// BrnReplayReadStream.h:49
	uint16_t mxFlags;

	// BrnReplayReadStream.h:50
	FrunkHeader mHeader;

	// BrnReplayReadStream.h:51
	int32_t[5] maiSizes;

	// BrnReplayReadStream.h:52
	void *[5] mapBuffers;

public:
	// BrnReplayReadStream.h:46
	void FrunkReadResult();

}

// BrnReplayReadStream.h:64
struct BrnReplays::ReadStream {
	// BrnReplayReadStream.h:66
	extern const int32_t KI_INTERMEDIATEBUFFERSIZE = 131072;

private:
	// BrnReplayReadStream.h:109
	StreamHeader * mpStreamHeader;

	// BrnReplayReadStream.h:110
	int32_t miCurrentFrunk;

	// BrnReplayReadStream.h:111
	int32_t miStallCount;

	// BrnReplayReadStream.h:112
	int32_t miCurrentFrunkPos;

	// BrnReplayReadStream.h:115
	BrnReplays::DiskReadStream * mpStream;

	// BrnReplayReadStream.h:116
	int32_t miFilePosition;

	// BrnReplayReadStream.h:118
	extern char[131072] mpcIntermediateBuffer;

public:
	// BrnReplayReadStream.h:71
	void Construct();

	// BrnReplayReadStream.h:75
	void Destruct();

	// BrnReplayReadStream.h:82
	int32_t StartNewStream(void *, int32_t, BrnReplays::DiskReadStream *);

	// BrnReplayReadStream.h:86
	bool ReadCurrentFrunk(FrunkReadResult *);

	// BrnReplayReadStream.h:89
	void MoveToNextFrunk();

	// BrnReplayReadStream.h:92
	int32_t GetCurrentFrunkFrame();

	// BrnReplayReadStream.h:96
	void EndStream();

	// BrnReplayReadStream.h:99
	bool IsReady();

	// BrnReplayReadStream.h:105
	void DebugValidateReplayStream(const char *, const char *, const char *);

private:
	// BrnReplayReadStream.h:121
	void Read(void *, int32_t);

}

// BrnReplayReadStream.h:66
extern const int32_t KI_INTERMEDIATEBUFFERSIZE = 131072;

