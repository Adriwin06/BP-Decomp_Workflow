// CgsFile.h:40
namespace CgsFileSystem {
	// CgsFile.h:45
	enum FileAccess {
		E_FILEACCESS_CLOSED = 0,
		E_FILEACCESS_READ = 1,
		E_FILEACCESS_WRITE = 2,
		E_FILEACCESS_COUNT = 3,
		E_FILEACCESS_FORCE_DWORD = 4294967295,
	}

	// CgsFile.h:57
	enum FileState {
		E_FILESTATE_CLOSED = 0,
		E_FILESTATE_OPENING = 1,
		E_FILESTATE_OPEN = 2,
		E_FILESTATE_READING = 3,
		E_FILESTATE_WRITING = 4,
		E_FILESTATE_CLOSING = 5,
		E_FILESTATE_SEEKING = 6,
		E_FILESTATE_PENDING = 7,
		E_FILESTATE_ERROR = 8,
		E_FILESTATE_COUNT = 9,
	}

	struct BaseFile;

	struct FileLog;

	struct FileSystem;

	struct File;

	struct DiskCacheCommand;

	struct DiskCacheCommandBuffer;

	struct Handle;

	struct Device;

	struct Operation;

	struct OperationPool;

	struct AsyncOp;

	struct DiskCacheEntry;

	struct CacheDebugEntry;

	struct DiskCache;

	struct ReadStreamBlock;

	struct ReadStream;

	struct WriteStream;

	struct StreamDeviceDiskWrite;

	struct FileLogEntry;

	struct DiskLayoutFile;

	struct DiskLayout;

	struct PhysicalPS3Device;

	struct FileHandle;

}

// CgsFile.h:158
struct CgsFileSystem::BaseFile {
protected:
	// CgsFile.h:187
	CgsFileSystem::FileAccess meFileAccess;

	// CgsFile.h:188
	const char * mpcFileName;

	// CgsFile.h:189
	CgsFileSystem::FileState meFileState;

	// CgsFile.h:190
	uint64_t muSeekPosition;

	// CgsFile.h:191
	uint64_t muLastOperationSize;

	// CgsFile.h:192
	uint32_t muPendingOperationCount;

	// CgsFile.h:194
	int32_t miPriority;

	// CgsFile.h:195
	char[4] macSeekBuffer;

	// CgsFile.h:196
	CgsFileSystem::FileLog * mpLog;

	// CgsFile.h:197
	CgsFileSystem::FileSystem * mpFileSystem;

	// CgsFile.h:198
	Futex mFutex;

	// CgsFile.h:199
	int32_t miIndex;

public:
	// CgsFile.h:163
	CgsFileSystem::FileState GetStatus();

	// CgsFile.h:167
	uint64_t GetLastOperationSize();

	// CgsFile.h:171
	int32_t GetPriority();

	// CgsFile.h:175
	void SetPriority(int32_t);

	// CgsFile.h:179
	void IncreasePendingOperations();

	// CgsFile.h:183
	bool IsOpen() const;

protected:
	// CgsFile.h:204
	void Construct(CgsFileSystem::FileSystem *, CgsFileSystem::FileLog *, int32_t);

	// CgsFile.h:208
	void Prepare();

	// CgsFile.h:212
	void Release();

	// CgsFile.h:216
	void Destruct();

}

// CgsFile.h:40
namespace CgsFileSystem {
	struct FileLog;

	struct Handle;

	struct Device;

	struct Operation;

	struct OperationPool;

	struct FileLogEntry;

}

// CgsFile.h:40
namespace CgsFileSystem {
	// CgsFile.h:45
	enum FileAccess {
		E_FILEACCESS_CLOSED = 0,
		E_FILEACCESS_READ = 1,
		E_FILEACCESS_WRITE = 2,
		E_FILEACCESS_COUNT = 3,
		E_FILEACCESS_FORCE_DWORD = 4294967295,
	}

	// CgsFile.h:57
	enum FileState {
		E_FILESTATE_CLOSED = 0,
		E_FILESTATE_OPENING = 1,
		E_FILESTATE_OPEN = 2,
		E_FILESTATE_READING = 3,
		E_FILESTATE_WRITING = 4,
		E_FILESTATE_CLOSING = 5,
		E_FILESTATE_SEEKING = 6,
		E_FILESTATE_PENDING = 7,
		E_FILESTATE_ERROR = 8,
		E_FILESTATE_COUNT = 9,
	}

	struct FileFutexHelper;

	struct BaseFile;

	struct FileLog;

	struct FileSystem;

	struct File;

	struct DiskCacheCommand;

	struct DiskCacheCommandBuffer;

	struct Handle;

	struct Device;

	struct Operation;

	struct OperationPool;

	struct AsyncOp;

	struct DiskCacheEntry;

	struct CacheDebugEntry;

	struct DiskCache;

	struct ReadStreamBlock;

	struct ReadStream;

	struct WriteStream;

	struct StreamDeviceDiskWrite;

	struct FileLogEntry;

	struct DiskLayoutFile;

	struct DiskLayout;

	struct PhysicalPS3Device;

	struct FileHandle;

}

// CgsFile.h:83
struct CgsFileSystem::FileFutexHelper {
private:
	// CgsFile.h:138
	Futex * mpFutex;

public:
	// CgsFile.h:85
	void FileFutexHelper(Futex &, const char *);

	// CgsFile.h:116
	void ~FileFutexHelper();

}

// CgsFile.h:40
namespace CgsFileSystem {
	// CgsFile.h:45
	enum FileAccess {
		E_FILEACCESS_CLOSED = 0,
		E_FILEACCESS_READ = 1,
		E_FILEACCESS_WRITE = 2,
		E_FILEACCESS_COUNT = 3,
		E_FILEACCESS_FORCE_DWORD = 4294967295,
	}

	// CgsFile.h:57
	enum FileState {
		E_FILESTATE_CLOSED = 0,
		E_FILESTATE_OPENING = 1,
		E_FILESTATE_OPEN = 2,
		E_FILESTATE_READING = 3,
		E_FILESTATE_WRITING = 4,
		E_FILESTATE_CLOSING = 5,
		E_FILESTATE_SEEKING = 6,
		E_FILESTATE_PENDING = 7,
		E_FILESTATE_ERROR = 8,
		E_FILESTATE_COUNT = 9,
	}

	struct BaseFile;

	struct FileLog;

	struct FileSystem;

	struct File;

	struct DiskCacheCommand;

	struct DiskCacheCommandBuffer;

	struct Handle;

	// Declaration
	struct Device {
	public:
		Device();

	}

	struct Operation;

	struct OperationPool;

	struct AsyncOp;

	struct DiskCacheEntry;

	struct CacheDebugEntry;

	struct DiskCache;

	struct ReadStreamBlock;

	struct ReadStream;

	struct WriteStream;

	struct StreamDeviceDiskWrite;

	struct FileLogEntry;

	struct DiskLayoutFile;

	struct DiskLayout;

	// Declaration
	struct PhysicalPS3Device {
	public:
		PhysicalPS3Device();

	}

	struct FileHandle;

}

// CgsFile.h:40
namespace CgsFileSystem {
	struct FileLog;

	struct FileSystem;

	struct Handle;

	struct Device;

	struct Operation;

	struct OperationPool;

	struct DiskCacheEntry;

	struct ReadStreamBlock;

}

// CgsDeviceOperation.h:24
namespace CgsFileSystem {
	// CgsFile.h:45
	enum FileAccess {
		E_FILEACCESS_CLOSED = 0,
		E_FILEACCESS_READ = 1,
		E_FILEACCESS_WRITE = 2,
		E_FILEACCESS_COUNT = 3,
		E_FILEACCESS_FORCE_DWORD = 4294967295,
	}

	// CgsFile.h:57
	enum FileState {
		E_FILESTATE_CLOSED = 0,
		E_FILESTATE_OPENING = 1,
		E_FILESTATE_OPEN = 2,
		E_FILESTATE_READING = 3,
		E_FILESTATE_WRITING = 4,
		E_FILESTATE_CLOSING = 5,
		E_FILESTATE_SEEKING = 6,
		E_FILESTATE_PENDING = 7,
		E_FILESTATE_ERROR = 8,
		E_FILESTATE_COUNT = 9,
	}

}

