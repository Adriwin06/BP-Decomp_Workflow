// CgsFile.h:40
namespace CgsFileSystem {
	// Declaration
	struct StreamDeviceDiskRead {
		// CgsStreamDeviceDiskRead.h:121
		enum EReadStreamStatus {
			E_STATUS_CLOSED = 0,
			E_STATUS_OPENING = 1,
			E_STATUS_OPEN = 2,
			E_STATUS_ERROR = 3,
			E_STATUS_PENDING = 4,
		}

	}

	// CgsStreamDeviceDiskRead.h:85
	const uint32_t KU_RSBFLAG_EMPTY;

	// CgsStreamDeviceDiskRead.h:86
	const uint32_t KU_RSBFLAG_LOADING = 1;

	// CgsStreamDeviceDiskRead.h:87
	const uint32_t KU_RSBFLAG_LOADED = 2;

	// CgsStreamDeviceDiskRead.h:88
	const uint32_t KU_RSBFLAG_EOF = 4;

}

// CgsStreamDeviceDiskRead.h:99
struct CgsFileSystem::ReadStreamBlock {
	// CgsStreamDeviceDiskRead.h:101
	uint64_t volatile muFilePos;

	// CgsStreamDeviceDiskRead.h:102
	int32_t volatile miStreamPos;

	// CgsStreamDeviceDiskRead.h:103
	int32_t volatile miWritten;

	// CgsStreamDeviceDiskRead.h:104
	int32_t volatile miRead;

	// CgsStreamDeviceDiskRead.h:105
	uint32_t volatile muFlags;

	// CgsStreamDeviceDiskRead.h:106
	CgsFileSystem::StreamDeviceDiskRead * mpOwner;

}

// CgsStreamDeviceDiskRead.h:118
struct CgsFileSystem::StreamDeviceDiskRead {
	// CgsStreamDeviceDiskRead.h:130
	extern const int32_t KI_MAX_STREAM_BLOCKS = 32;

private:
	// CgsStreamDeviceDiskRead.h:217
	Futex mFutex;

	// CgsStreamDeviceDiskRead.h:219
	CgsFileSystem::FileSystem * mpFileSystem;

	// CgsStreamDeviceDiskRead.h:220
	CgsFileSystem::FileLog * mpLog;

	// CgsStreamDeviceDiskRead.h:221
	char[256] macFileName;

	// CgsStreamDeviceDiskRead.h:222
	bool mbPrintToLog;

	// CgsStreamDeviceDiskRead.h:225
	char * mpBuffer;

	// CgsStreamDeviceDiskRead.h:226
	int32_t miBufferSize;

	// CgsStreamDeviceDiskRead.h:228
	int32_t miNumBlocks;

	// CgsStreamDeviceDiskRead.h:229
	int32_t miBlockSize;

	// CgsStreamDeviceDiskRead.h:231
	int32_t miNormalPriority;

	// CgsStreamDeviceDiskRead.h:232
	int32_t miHighPriority;

	// CgsStreamDeviceDiskRead.h:233
	int32_t miLogIndex;

	// CgsStreamDeviceDiskRead.h:234
	uint32_t muCacheId;

	// CgsStreamDeviceDiskRead.h:235
	const DiskCacheEntry * mpDEBUGCacheEntry;

	// CgsStreamDeviceDiskRead.h:238
	Handle mHandle;

	// CgsStreamDeviceDiskRead.h:241
	ReadStreamBlock[32] maBlocks;

	// CgsStreamDeviceDiskRead.h:250
	uint64_t volatile muAmountRequested;

	// CgsStreamDeviceDiskRead.h:251
	uint64_t volatile muLastOperationSize;

	// CgsStreamDeviceDiskRead.h:254
	int32_t volatile miOutputBlock;

	// CgsStreamDeviceDiskRead.h:255
	bool volatile mbIsOutputing;

	// CgsStreamDeviceDiskRead.h:256
	uint64_t volatile muOutputPosition;

	// CgsStreamDeviceDiskRead.h:258
	int32_t volatile miInputBlock;

	// CgsStreamDeviceDiskRead.h:259
	int32_t volatile miInputRequestsPending;

	// CgsStreamDeviceDiskRead.h:260
	uint64_t volatile muInputPosition;

	// CgsStreamDeviceDiskRead.h:262
	bool volatile mbIsEndOfFile;

	// CgsStreamDeviceDiskRead.h:263
	bool volatile mbWaitingToClose;

	// CgsStreamDeviceDiskRead.h:264
	int32_t volatile miBlocksUsed;

	// CgsStreamDeviceDiskRead.h:265
	int32_t volatile miNextPriority;

	// CgsStreamDeviceDiskRead.h:267
	bool volatile mbWaitingToSeek;

	// CgsStreamDeviceDiskRead.h:269
	CgsFileSystem::StreamDeviceDiskRead::EReadStreamStatus volatile meStatus;

	// CgsStreamDeviceDiskRead.h:270
	int32_t volatile miPendingOperationCount;

public:
	// CgsStreamDeviceDiskRead.h:134
	void Construct(CgsFileSystem::FileSystem *, CgsFileSystem::FileLog *);

	// CgsStreamDeviceDiskRead.h:138
	void Prepare();

	// CgsStreamDeviceDiskRead.h:151
	void Open(const char *, void *, uint32_t, uint32_t, int32_t, int32_t, bool, int32_t);

	// CgsStreamDeviceDiskRead.h:155
	void Close();

	// CgsStreamDeviceDiskRead.h:159
	void Seek(uint64_t);

	// CgsStreamDeviceDiskRead.h:163
	uint64_t Tell();

	// CgsStreamDeviceDiskRead.h:170
	uint32_t Read(uint32_t, void *);

	// CgsStreamDeviceDiskRead.h:177
	bool StartAsyncRead(void **, uint32_t *);

	// CgsStreamDeviceDiskRead.h:183
	void StopAsyncRead(uint32_t);

	// CgsStreamDeviceDiskRead.h:187
	uint32_t GetAmountOfDataInBuffer() const;

	// CgsStreamDeviceDiskRead.h:191
	int32_t GetCurrentFilePriority();

	// CgsStreamDeviceDiskRead.h:194
	bool IsEndOfFile() const;

	// CgsStreamDeviceDiskRead.h:197
	uint32_t GetBufferSize() const;

	// CgsStreamDeviceDiskRead.h:200
	CgsFileSystem::StreamDeviceDiskRead::EReadStreamStatus GetStatus() const;

	// CgsStreamDeviceDiskRead.h:203
	void LogAmountOfDataInBuffer() const;

private:
	// CgsStreamDeviceDiskRead.h:274
	void ResetStreamBlocks();

	// CgsStreamDeviceDiskRead.h:277
	void Service();

	// CgsStreamDeviceDiskRead.h:280
	bool SubmitReadRequest();

	// CgsStreamDeviceDiskRead.h:283
	bool SubmitCloseRequest();

	// CgsStreamDeviceDiskRead.h:286
	void OnOpen(int32_t, Handle, uint64_t, void *);

	// CgsStreamDeviceDiskRead.h:289
	void OnRead(int32_t, Handle, uint64_t, void *);

	// CgsStreamDeviceDiskRead.h:292
	void OnClose(int32_t, Handle, uint64_t, void *);

	// CgsStreamDeviceDiskRead.h:297
	bool StartAsyncReadInternal(void **, uint32_t *);

	// CgsStreamDeviceDiskRead.h:301
	void StopAsyncReadInternal(uint32_t);

	// CgsStreamDeviceDiskRead.h:304
	void OpenCallback(int32_t, Handle, uint64_t, void *);

	// CgsStreamDeviceDiskRead.h:307
	void ReadCallback(int32_t, Handle, uint64_t, void *);

	// CgsStreamDeviceDiskRead.h:310
	void CloseCallback(int32_t, Handle, uint64_t, void *);

}

// CgsStreamDeviceDiskRead.h:130
extern const int32_t KI_MAX_STREAM_BLOCKS = 32;

// CgsFile.h:40
namespace CgsFileSystem {
	// CgsStreamDeviceDiskRead.h:85
	const uint32_t KU_RSBFLAG_EMPTY;

	// CgsStreamDeviceDiskRead.h:86
	const uint32_t KU_RSBFLAG_LOADING = 1;

	// CgsStreamDeviceDiskRead.h:87
	const uint32_t KU_RSBFLAG_LOADED = 2;

	// CgsStreamDeviceDiskRead.h:88
	const uint32_t KU_RSBFLAG_EOF = 4;

}

// CgsDeviceOperation.h:24
namespace CgsFileSystem {
	// Declaration
	struct StreamDeviceDiskRead {
		// CgsStreamDeviceDiskRead.h:121
		enum EReadStreamStatus {
			E_STATUS_CLOSED = 0,
			E_STATUS_OPENING = 1,
			E_STATUS_OPEN = 2,
			E_STATUS_ERROR = 3,
			E_STATUS_PENDING = 4,
		}

	}

	// CgsStreamDeviceDiskRead.h:85
	const uint32_t KU_RSBFLAG_EMPTY;

	// CgsStreamDeviceDiskRead.h:86
	const uint32_t KU_RSBFLAG_LOADING = 1;

	// CgsStreamDeviceDiskRead.h:87
	const uint32_t KU_RSBFLAG_LOADED = 2;

	// CgsStreamDeviceDiskRead.h:88
	const uint32_t KU_RSBFLAG_EOF = 4;

}

// CgsStreamDeviceDiskRead.h:118
struct CgsFileSystem::StreamDeviceDiskRead {
	// CgsStreamDeviceDiskRead.h:130
	extern const int32_t KI_MAX_STREAM_BLOCKS = 32;

private:
	// CgsStreamDeviceDiskRead.h:217
	Futex mFutex;

	// CgsStreamDeviceDiskRead.h:219
	CgsFileSystem::FileSystem * mpFileSystem;

	// CgsStreamDeviceDiskRead.h:220
	CgsFileSystem::FileLog * mpLog;

	// CgsStreamDeviceDiskRead.h:221
	char[256] macFileName;

	// CgsStreamDeviceDiskRead.h:222
	bool mbPrintToLog;

	// CgsStreamDeviceDiskRead.h:225
	char * mpBuffer;

	// CgsStreamDeviceDiskRead.h:226
	int32_t miBufferSize;

	// CgsStreamDeviceDiskRead.h:228
	int32_t miNumBlocks;

	// CgsStreamDeviceDiskRead.h:229
	int32_t miBlockSize;

	// CgsStreamDeviceDiskRead.h:231
	int32_t miNormalPriority;

	// CgsStreamDeviceDiskRead.h:232
	int32_t miHighPriority;

	// CgsStreamDeviceDiskRead.h:233
	int32_t miLogIndex;

	// CgsStreamDeviceDiskRead.h:234
	uint32_t muCacheId;

	// CgsStreamDeviceDiskRead.h:235
	const DiskCacheEntry * mpDEBUGCacheEntry;

	// CgsStreamDeviceDiskRead.h:238
	Handle mHandle;

	// CgsStreamDeviceDiskRead.h:241
	ReadStreamBlock[32] maBlocks;

	// CgsStreamDeviceDiskRead.h:250
	uint64_t volatile muAmountRequested;

	// CgsStreamDeviceDiskRead.h:251
	uint64_t volatile muLastOperationSize;

	// CgsStreamDeviceDiskRead.h:254
	int32_t volatile miOutputBlock;

	// CgsStreamDeviceDiskRead.h:255
	bool volatile mbIsOutputing;

	// CgsStreamDeviceDiskRead.h:256
	uint64_t volatile muOutputPosition;

	// CgsStreamDeviceDiskRead.h:258
	int32_t volatile miInputBlock;

	// CgsStreamDeviceDiskRead.h:259
	int32_t volatile miInputRequestsPending;

	// CgsStreamDeviceDiskRead.h:260
	uint64_t volatile muInputPosition;

	// CgsStreamDeviceDiskRead.h:262
	bool volatile mbIsEndOfFile;

	// CgsStreamDeviceDiskRead.h:263
	bool volatile mbWaitingToClose;

	// CgsStreamDeviceDiskRead.h:264
	int32_t volatile miBlocksUsed;

	// CgsStreamDeviceDiskRead.h:265
	int32_t volatile miNextPriority;

	// CgsStreamDeviceDiskRead.h:267
	bool volatile mbWaitingToSeek;

	// CgsStreamDeviceDiskRead.h:269
	CgsFileSystem::StreamDeviceDiskRead::EReadStreamStatus volatile meStatus;

	// CgsStreamDeviceDiskRead.h:270
	int32_t volatile miPendingOperationCount;

public:
	// CgsStreamDeviceDiskRead.h:134
	void Construct(CgsFileSystem::FileSystem *, CgsFileSystem::FileLog *);

	// CgsStreamDeviceDiskRead.h:138
	void Prepare();

	// CgsStreamDeviceDiskRead.h:151
	void Open(const char *, void *, uint32_t, uint32_t, int32_t, int32_t, bool, int32_t);

	// CgsStreamDeviceDiskRead.h:155
	// Declaration
	void Close() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsStreamDeviceDiskRead.cpp:541
		using namespace CgsDev::Message;

	}

	// CgsStreamDeviceDiskRead.h:159
	void Seek(uint64_t);

	// CgsStreamDeviceDiskRead.h:163
	uint64_t Tell();

	// CgsStreamDeviceDiskRead.h:170
	uint32_t Read(uint32_t, void *);

	// CgsStreamDeviceDiskRead.h:177
	bool StartAsyncRead(void **, uint32_t *);

	// CgsStreamDeviceDiskRead.h:183
	void StopAsyncRead(uint32_t);

	// CgsStreamDeviceDiskRead.h:187
	uint32_t GetAmountOfDataInBuffer() const;

	// CgsStreamDeviceDiskRead.h:191
	int32_t GetCurrentFilePriority();

	// CgsStreamDeviceDiskRead.h:194
	bool IsEndOfFile() const;

	// CgsStreamDeviceDiskRead.h:197
	uint32_t GetBufferSize() const;

	// CgsStreamDeviceDiskRead.h:200
	CgsFileSystem::StreamDeviceDiskRead::EReadStreamStatus GetStatus() const;

	// CgsStreamDeviceDiskRead.h:203
	void LogAmountOfDataInBuffer() const;

private:
	// CgsStreamDeviceDiskRead.h:274
	void ResetStreamBlocks();

	// CgsStreamDeviceDiskRead.h:277
	void Service();

	// CgsStreamDeviceDiskRead.h:280
	bool SubmitReadRequest();

	// CgsStreamDeviceDiskRead.h:283
	bool SubmitCloseRequest();

	// CgsStreamDeviceDiskRead.h:286
	// Declaration
	void OnOpen(int32_t, Handle, uint64_t, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsStreamDeviceDiskRead.cpp:923
		using namespace CgsDev::Message;

		// CgsStreamDeviceDiskRead.cpp:931
		using namespace CgsDev::Message;

		// CgsStreamDeviceDiskRead.cpp:935
		using namespace CgsDev::Message;

	}

	// CgsStreamDeviceDiskRead.h:289
	// Declaration
	void OnRead(int32_t, Handle, uint64_t, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsStreamDeviceDiskRead.cpp:1044
		using namespace CgsDev::Message;

		// CgsStreamDeviceDiskRead.cpp:1051
		using namespace CgsDev::Message;

	}

	// CgsStreamDeviceDiskRead.h:292
	// Declaration
	void OnClose(int32_t, Handle, uint64_t, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsStreamDeviceDiskRead.cpp:1115
		using namespace CgsDev::Message;

		// CgsStreamDeviceDiskRead.cpp:1122
		using namespace CgsDev::Message;

	}

	// CgsStreamDeviceDiskRead.h:297
	bool StartAsyncReadInternal(void **, uint32_t *);

	// CgsStreamDeviceDiskRead.h:301
	void StopAsyncReadInternal(uint32_t);

	// CgsStreamDeviceDiskRead.h:304
	void OpenCallback(int32_t, Handle, uint64_t, void *);

	// CgsStreamDeviceDiskRead.h:307
	void ReadCallback(int32_t, Handle, uint64_t, void *);

	// CgsStreamDeviceDiskRead.h:310
	void CloseCallback(int32_t, Handle, uint64_t, void *);

}

