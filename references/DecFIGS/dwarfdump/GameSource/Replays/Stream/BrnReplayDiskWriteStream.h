// BrnReplayShared.h:96
namespace BrnReplays {
	// BrnReplayDiskWriteStream.h:40
	const uint32_t KU_WSBFLAG_EMPTY;

	// BrnReplayDiskWriteStream.h:41
	const uint32_t KU_WSBFLAG_WRITING = 1;

	// BrnReplayDiskWriteStream.h:42
	const uint32_t KU_WSBFLAG_FULL = 2;

}

// BrnReplayDiskWriteStream.h:81
extern const int32_t KI_MAX_STREAM_BLOCKS = 32;

// BrnReplayShared.h:96
namespace BrnReplays {
	// Declaration
	struct DiskWriteStream {
		// BrnReplayDiskWriteStream.h:73
		enum EStreamStatus {
			E_STATUS_CLOSED = 0,
			E_STATUS_OPENING = 1,
			E_STATUS_OPEN = 2,
			E_STATUS_ERROR = 3,
		}

	}

	// BrnReplayDiskWriteStream.h:40
	const uint32_t KU_WSBFLAG_EMPTY;

	// BrnReplayDiskWriteStream.h:41
	const uint32_t KU_WSBFLAG_WRITING = 1;

	// BrnReplayDiskWriteStream.h:42
	const uint32_t KU_WSBFLAG_FULL = 2;

}

// BrnReplayDiskWriteStream.h:53
struct BrnReplays::WriteStreamBlock {
	// BrnReplayDiskWriteStream.h:55
	int32_t volatile miFilePos;

	// BrnReplayDiskWriteStream.h:56
	int32_t volatile miStreamPos;

	// BrnReplayDiskWriteStream.h:57
	uint32_t volatile muFlags;

	// BrnReplayDiskWriteStream.h:58
	BrnReplays::DiskWriteStream * mpOwner;

}

// BrnReplayDiskWriteStream.h:70
struct BrnReplays::DiskWriteStream {
	// BrnReplayDiskWriteStream.h:81
	extern const int32_t KI_MAX_STREAM_BLOCKS = 32;

	// BrnReplayDiskWriteStream.h:82
	extern const int32_t KI_BLOCK_SIZE = 65536;

private:
	// BrnReplayDiskWriteStream.h:124
	Mutex mMutex;

	// BrnReplayDiskWriteStream.h:126
	char[256] macFileName;

	// BrnReplayDiskWriteStream.h:129
	char * mpBuffer;

	// BrnReplayDiskWriteStream.h:130
	int32_t miBufferSize;

	// BrnReplayDiskWriteStream.h:132
	int32_t miNumBlocks;

	// BrnReplayDiskWriteStream.h:135
	WriteStreamBlock[32] maBlocks;

	// BrnReplayDiskWriteStream.h:139
	rw::core::filesys::Handle *volatile mpHandle;

	// BrnReplayDiskWriteStream.h:141
	int32_t volatile miInputBlock;

	// BrnReplayDiskWriteStream.h:142
	int32_t volatile miOutputBlock;

	// BrnReplayDiskWriteStream.h:144
	bool volatile mbWaitingToClose;

	// BrnReplayDiskWriteStream.h:145
	int32_t volatile miBlocksUsed;

	// BrnReplayDiskWriteStream.h:147
	BrnReplays::DiskWriteStream::EStreamStatus volatile meStatus;

	// BrnReplayDiskWriteStream.h:148
	int32_t volatile miPendingOperationCount;

public:
	// BrnReplayDiskWriteStream.h:86
	void Construct();

	// BrnReplayDiskWriteStream.h:93
	// Declaration
	void Open(const char *, void *, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnReplayDiskWriteStream.cpp:86
		using namespace rw::core::filesys;

	}

	// BrnReplayDiskWriteStream.h:97
	void Close();

	// BrnReplayDiskWriteStream.h:105
	bool AddBlock(int32_t, void *, int32_t);

	// BrnReplayDiskWriteStream.h:108
	BrnReplays::DiskWriteStream::EStreamStatus GetStatus() const;

	// BrnReplayDiskWriteStream.h:111
	float32_t GetBufferUsage();

private:
	// BrnReplayDiskWriteStream.h:153
	void ResetStreamBlocks();

	// BrnReplayDiskWriteStream.h:156
	void Service();

	// BrnReplayDiskWriteStream.h:159
	bool SubmitWriteRequest();

	// BrnReplayDiskWriteStream.h:162
	bool SubmitCloseRequest();

	// BrnReplayDiskWriteStream.h:165
	void OnOpen(AsyncOp *);

	// BrnReplayDiskWriteStream.h:168
	void OnWrite(AsyncOp *);

	// BrnReplayDiskWriteStream.h:171
	void OnClose(AsyncOp *);

	// BrnReplayDiskWriteStream.h:174
	void OpenCallback(AsyncOp *);

	// BrnReplayDiskWriteStream.h:177
	void WriteCallback(AsyncOp *);

	// BrnReplayDiskWriteStream.h:180
	void CloseCallback(AsyncOp *);

}

// BrnReplayDiskWriteStream.h:82
extern const int32_t KI_BLOCK_SIZE = 65536;

// BrnReplayDiskWriteStream.h:70
struct BrnReplays::DiskWriteStream {
	// BrnReplayDiskWriteStream.h:81
	extern const int32_t KI_MAX_STREAM_BLOCKS = 32;

	// BrnReplayDiskWriteStream.h:82
	extern const int32_t KI_BLOCK_SIZE = 65536;

private:
	// BrnReplayDiskWriteStream.h:124
	Mutex mMutex;

	// BrnReplayDiskWriteStream.h:126
	char[256] macFileName;

	// BrnReplayDiskWriteStream.h:129
	char * mpBuffer;

	// BrnReplayDiskWriteStream.h:130
	int32_t miBufferSize;

	// BrnReplayDiskWriteStream.h:132
	int32_t miNumBlocks;

	// BrnReplayDiskWriteStream.h:135
	WriteStreamBlock[32] maBlocks;

	// BrnReplayDiskWriteStream.h:139
	rw::core::filesys::Handle *volatile mpHandle;

	// BrnReplayDiskWriteStream.h:141
	int32_t volatile miInputBlock;

	// BrnReplayDiskWriteStream.h:142
	int32_t volatile miOutputBlock;

	// BrnReplayDiskWriteStream.h:144
	bool volatile mbWaitingToClose;

	// BrnReplayDiskWriteStream.h:145
	int32_t volatile miBlocksUsed;

	// BrnReplayDiskWriteStream.h:147
	BrnReplays::DiskWriteStream::EStreamStatus volatile meStatus;

	// BrnReplayDiskWriteStream.h:148
	int32_t volatile miPendingOperationCount;

public:
	// BrnReplayDiskWriteStream.h:86
	void Construct();

	// BrnReplayDiskWriteStream.h:93
	void Open(const char *, void *, int32_t);

	// BrnReplayDiskWriteStream.h:97
	void Close();

	// BrnReplayDiskWriteStream.h:105
	bool AddBlock(int32_t, void *, int32_t);

	// BrnReplayDiskWriteStream.h:108
	BrnReplays::DiskWriteStream::EStreamStatus GetStatus() const;

	// BrnReplayDiskWriteStream.h:111
	float32_t GetBufferUsage();

private:
	// BrnReplayDiskWriteStream.h:153
	void ResetStreamBlocks();

	// BrnReplayDiskWriteStream.h:156
	void Service();

	// BrnReplayDiskWriteStream.h:159
	bool SubmitWriteRequest();

	// BrnReplayDiskWriteStream.h:162
	bool SubmitCloseRequest();

	// BrnReplayDiskWriteStream.h:165
	void OnOpen(AsyncOp *);

	// BrnReplayDiskWriteStream.h:168
	void OnWrite(AsyncOp *);

	// BrnReplayDiskWriteStream.h:171
	void OnClose(AsyncOp *);

	// BrnReplayDiskWriteStream.h:174
	void OpenCallback(AsyncOp *);

	// BrnReplayDiskWriteStream.h:177
	void WriteCallback(AsyncOp *);

	// BrnReplayDiskWriteStream.h:180
	void CloseCallback(AsyncOp *);

}

