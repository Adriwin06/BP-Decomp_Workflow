// BrnReplayShared.h:96
namespace BrnReplays {
	// BrnReplayDiskReadStream.h:40
	const uint32_t KU_RSBFLAG_EMPTY;

	// BrnReplayDiskReadStream.h:41
	const uint32_t KU_RSBFLAG_READING = 1;

	// BrnReplayDiskReadStream.h:42
	const uint32_t KU_RSBFLAG_FULL = 2;

}

// BrnReplayDiskReadStream.h:81
extern const int32_t KI_MAX_STREAM_BLOCKS = 32;

// BrnReplayShared.h:96
namespace BrnReplays {
	// Declaration
	struct DiskReadStream {
		// BrnReplayDiskReadStream.h:73
		enum EStreamStatus {
			E_STATUS_CLOSED = 0,
			E_STATUS_OPENING = 1,
			E_STATUS_OPEN = 2,
			E_STATUS_ERROR = 3,
		}

	}

	// BrnReplayDiskReadStream.h:40
	const uint32_t KU_RSBFLAG_EMPTY;

	// BrnReplayDiskReadStream.h:41
	const uint32_t KU_RSBFLAG_READING = 1;

	// BrnReplayDiskReadStream.h:42
	const uint32_t KU_RSBFLAG_FULL = 2;

}

// BrnReplayDiskReadStream.h:53
struct BrnReplays::ReadStreamBlock {
	// BrnReplayDiskReadStream.h:55
	int32_t volatile miFilePos;

	// BrnReplayDiskReadStream.h:56
	int32_t volatile miStreamPos;

	// BrnReplayDiskReadStream.h:57
	uint32_t volatile muFlags;

	// BrnReplayDiskReadStream.h:58
	BrnReplays::DiskReadStream * mpOwner;

}

// BrnReplayDiskReadStream.h:70
struct BrnReplays::DiskReadStream {
	// BrnReplayDiskReadStream.h:81
	extern const int32_t KI_MAX_STREAM_BLOCKS = 32;

	// BrnReplayDiskReadStream.h:82
	extern const int32_t KI_BLOCK_SIZE = 65536;

private:
	// BrnReplayDiskReadStream.h:125
	Mutex mMutex;

	// BrnReplayDiskReadStream.h:127
	char[256] macFileName;

	// BrnReplayDiskReadStream.h:130
	char * mpBuffer;

	// BrnReplayDiskReadStream.h:131
	int32_t miBufferSize;

	// BrnReplayDiskReadStream.h:133
	int32_t miNumBlocks;

	// BrnReplayDiskReadStream.h:136
	ReadStreamBlock[32] maBlocks;

	// BrnReplayDiskReadStream.h:140
	rw::core::filesys::Handle *volatile mpHandle;

	// BrnReplayDiskReadStream.h:142
	int32_t volatile miInputBlock;

	// BrnReplayDiskReadStream.h:143
	int32_t volatile miOutputBlock;

	// BrnReplayDiskReadStream.h:144
	int32_t volatile miNextInputPosition;

	// BrnReplayDiskReadStream.h:146
	bool volatile mbWaitingToClose;

	// BrnReplayDiskReadStream.h:147
	int32_t volatile miBlocksUsed;

	// BrnReplayDiskReadStream.h:149
	BrnReplays::DiskReadStream::EStreamStatus volatile meStatus;

	// BrnReplayDiskReadStream.h:150
	int32_t volatile miPendingOperationCount;

	// BrnReplayDiskReadStream.h:152
	int32_t volatile miLoopStart;

	// BrnReplayDiskReadStream.h:153
	int32_t volatile miLoopEnd;

	// BrnReplayDiskReadStream.h:154
	bool volatile mbAdjustingRange;

public:
	// BrnReplayDiskReadStream.h:86
	void Construct();

	// BrnReplayDiskReadStream.h:93
	void Open(const char *, void *, int32_t);

	// BrnReplayDiskReadStream.h:97
	void Close();

	// BrnReplayDiskReadStream.h:105
	bool ReadBlock(int32_t, void *, int32_t);

	// BrnReplayDiskReadStream.h:108
	BrnReplays::DiskReadStream::EStreamStatus GetStatus() const;

	// BrnReplayDiskReadStream.h:111
	void SetRange(int32_t, int32_t);

private:
	// BrnReplayDiskReadStream.h:160
	void ResetStreamBlocks();

	// BrnReplayDiskReadStream.h:163
	void Service();

	// BrnReplayDiskReadStream.h:166
	bool SubmitReadRequest();

	// BrnReplayDiskReadStream.h:169
	bool SubmitCloseRequest();

	// BrnReplayDiskReadStream.h:172
	void OnOpen(AsyncOp *);

	// BrnReplayDiskReadStream.h:175
	void OnRead(AsyncOp *);

	// BrnReplayDiskReadStream.h:178
	void OnClose(AsyncOp *);

	// BrnReplayDiskReadStream.h:181
	void OpenCallback(AsyncOp *);

	// BrnReplayDiskReadStream.h:184
	void ReadCallback(AsyncOp *);

	// BrnReplayDiskReadStream.h:187
	void CloseCallback(AsyncOp *);

}

// BrnReplayDiskReadStream.h:82
extern const int32_t KI_BLOCK_SIZE = 65536;

