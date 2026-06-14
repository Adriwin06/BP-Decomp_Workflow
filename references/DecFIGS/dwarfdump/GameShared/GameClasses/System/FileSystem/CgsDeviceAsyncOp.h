// CgsDeviceAsyncOp.h:49
struct CgsFileSystem::AsyncOp {
private:
	// CgsDeviceAsyncOp.h:100
	std::sem_t mSemaphore;

	// CgsDeviceAsyncOp.h:103
	Handle mHandle;

	// CgsDeviceAsyncOp.h:104
	int32_t volatile miResult;

	// CgsDeviceAsyncOp.h:105
	uint64_t volatile muSize;

	// CgsDeviceAsyncOp.h:106
	bool volatile mbOperating;

public:
	// CgsDeviceAsyncOp.h:52
	void AsyncOp();

	// CgsDeviceAsyncOp.h:54
	void ~AsyncOp();

	// CgsDeviceAsyncOp.h:60
	void Open(const char *, uint32_t, int32_t);

	// CgsDeviceAsyncOp.h:68
	void Read(Handle, uint64_t, void *, uint32_t, int32_t);

	// CgsDeviceAsyncOp.h:76
	void Write(Handle, uint64_t, const void *, uint32_t, int32_t);

	// CgsDeviceAsyncOp.h:81
	void Close(Handle, int32_t);

	// CgsDeviceAsyncOp.h:84
	void Wait();

	// CgsDeviceAsyncOp.h:87
	uint64_t GetLastOperationSize();

	// CgsDeviceAsyncOp.h:90
	Handle GetLastOperationHandle();

	// CgsDeviceAsyncOp.h:93
	int32_t GetLastOperationResult();

private:
	// CgsDeviceAsyncOp.h:109
	void CompletionCallback(int32_t, Handle, uint64_t, void *);

}

