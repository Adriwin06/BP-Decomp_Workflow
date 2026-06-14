// CgsLocklessQueue.h:47
struct CgsContainers::LocklessQueue<CgsFileSystem::DiskCacheCommand> {
private:
	// CgsLocklessQueue.h:73
	DiskCacheCommand * mpBuffer;

	// CgsLocklessQueue.h:74
	uint16_t muBufferSize;

	// CgsLocklessQueue.h:75
	AtomicInt<std::uint64_t> mEncodedQueueStatus;

public:
	// CgsLocklessQueue.h:116
	void Construct(DiskCacheCommand *, short unsigned int);

	// CgsLocklessQueue.h:133
	void Clear();

	// CgsLocklessQueue.h:298
	bool Post(const DiskCacheCommand *, bool, int);

	// CgsLocklessQueue.h:370
	bool Pop(DiskCacheCommand *, bool, int);

private:
	// CgsLocklessQueue.h:161
	void GetStatus(uint16_t *, uint16_t *, uint16_t *, uint16_t *);

	// CgsLocklessQueue.h:189
	bool SetStatusConditional(short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int);

	// CgsLocklessQueue.h:212
	bool Lock(bool);

	// CgsLocklessQueue.h:264
	void Unlock();

}

// CgsLocklessQueue.h:47
struct CgsContainers::LocklessQueue<char*> {
private:
	// CgsLocklessQueue.h:73
	char ** mpBuffer;

	// CgsLocklessQueue.h:74
	uint16_t muBufferSize;

	// CgsLocklessQueue.h:75
	AtomicInt<std::uint64_t> mEncodedQueueStatus;

public:
	// CgsLocklessQueue.h:116
	void Construct(char **, short unsigned int);

	// CgsLocklessQueue.h:133
	void Clear();

	// CgsLocklessQueue.h:298
	bool Post(char *const*, bool, int);

	// CgsLocklessQueue.h:370
	bool Pop(char **, bool, int);

private:
	// CgsLocklessQueue.h:161
	void GetStatus(uint16_t *, uint16_t *, uint16_t *, uint16_t *);

	// CgsLocklessQueue.h:189
	bool SetStatusConditional(short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int);

	// CgsLocklessQueue.h:212
	bool Lock(bool);

	// CgsLocklessQueue.h:264
	void Unlock();

}

// CgsLocklessQueue.h:47
struct CgsContainers::LocklessQueue<CgsContainers::LocklessQueueUnitTestEntry> {
private:
	// CgsLocklessQueue.h:73
	LocklessQueueUnitTestEntry * mpBuffer;

	// CgsLocklessQueue.h:74
	uint16_t muBufferSize;

	// CgsLocklessQueue.h:75
	AtomicInt<std::uint64_t> mEncodedQueueStatus;

public:
	// CgsLocklessQueue.h:116
	void Construct(LocklessQueueUnitTestEntry *, short unsigned int);

	// CgsLocklessQueue.h:133
	void Clear();

	// CgsLocklessQueue.h:298
	bool Post(const LocklessQueueUnitTestEntry *, bool, int);

	// CgsLocklessQueue.h:370
	bool Pop(LocklessQueueUnitTestEntry *, bool, int);

private:
	// CgsLocklessQueue.h:161
	void GetStatus(uint16_t *, uint16_t *, uint16_t *, uint16_t *);

	// CgsLocklessQueue.h:189
	bool SetStatusConditional(short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int, short unsigned int);

	// CgsLocklessQueue.h:212
	bool Lock(bool);

	// CgsLocklessQueue.h:264
	void Unlock();

}

