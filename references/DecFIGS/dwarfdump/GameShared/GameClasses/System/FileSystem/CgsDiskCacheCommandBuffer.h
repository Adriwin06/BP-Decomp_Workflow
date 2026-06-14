// CgsDiskCacheCommandBuffer.h:47
struct CgsFileSystem::DiskCacheCommand {
	// CgsDiskCacheCommandBuffer.h:56
	uint32_t volatile muNameHash;

	// CgsDiskCacheCommandBuffer.h:57
	uint8_t volatile muCommandId;

	// CgsDiskCacheCommandBuffer.h:58
	uint8_t volatile mxFlags;

	// CgsDiskCacheCommandBuffer.h:59
	int32_t volatile miPosition;

	// CgsDiskCacheCommandBuffer.h:60
	int32_t volatile miSize;

	// CgsDiskCacheCommandBuffer.h:61
	void *volatile mpData;

	// CgsDiskCacheCommandBuffer.h:62
	const char *volatile mpcDebugName;

}

// CgsDiskCacheCommandBuffer.h:74
struct CgsFileSystem::DiskCacheCommandBuffer {
	// CgsDiskCacheCommandBuffer.h:77
	extern const int32_t KI_COMMAND_BUFFER_LENGTH = 64;

private:
	// CgsDiskCacheCommandBuffer.h:97
	DiskCacheCommand[64] mpData;

	// CgsDiskCacheCommandBuffer.h:110
	LocklessQueue<CgsFileSystem::DiskCacheCommand> mInternalQueue;

public:
	// CgsDiskCacheCommandBuffer.h:87
	void Construct();

	// CgsDiskCacheCommandBuffer.h:90
	void Post(const DiskCacheCommand *);

	// CgsDiskCacheCommandBuffer.h:93
	void Pop(DiskCacheCommand *);

}

// CgsDiskCacheCommandBuffer.h:77
extern const int32_t KI_COMMAND_BUFFER_LENGTH = 64;

