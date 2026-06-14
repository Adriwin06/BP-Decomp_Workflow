// CgsFile.h:40
namespace CgsFileSystem {
	// CgsDeviceOperation.h:39
	enum EDeviceOperationType {
		E_OPERATION_READ = 0,
		E_OPERATION_WRITE = 1,
		E_OPERATION_OPEN = 2,
		E_OPERATION_CLOSE = 3,
		E_OPERATION_INIT = 4,
		E_OPERATION_SHUTDOWN = 5,
	}

	// CgsDeviceOperation.h:57
	enum EDeviceErrors {
		E_DEVICEERROR_READ = 0,
		E_DEVICEERROR_SEEK = 1,
		E_DEVICEERROR_OPEN = 2,
		E_DEVICEERROR_WRITE = 3,
		E_DEVICEERROR_CLOSE = 4,
		E_DEVICEERROR_RECOVERED = 5,
	}

}

// CgsDeviceOperation.h:72
struct CgsFileSystem::Handle {
private:
	// CgsDeviceOperation.h:84
	CgsFileSystem::Device * mpDevice;

	// Unknown accessibility
	// CgsDeviceOperation.h:67
	typedef void * DeviceHandle;

	// CgsDeviceOperation.h:85
	Handle::DeviceHandle mDeviceHandle;

public:
	// CgsDeviceOperation.h:76
	void Clear();

	// CgsDeviceOperation.h:80
	bool IsNull() const;

}

// CgsDeviceOperation.h:117
struct CgsFileSystem::Operation {
	// CgsDeviceOperation.h:119
	extern const int32_t KI_MAX_FILE_NAME_LENGTH = 255;

	// CgsDeviceOperation.h:121
	CgsFileSystem::EDeviceOperationType meOperation;

	// CgsDeviceOperation.h:122
	char[256] macFileName;

	// CgsDeviceOperation.h:123
	uint32_t muFlags;

	// CgsDeviceOperation.h:124
	Handle mHandle;

	// CgsDeviceOperation.h:125
	uint64_t muPosition;

	// CgsDeviceOperation.h:126
	void * mpReadBuffer;

	// CgsDeviceOperation.h:127
	const void * mpWriteBuffer;

	// CgsDeviceOperation.h:128
	uint32_t muBufferSize;

	// CgsDeviceOperation.h:104
	typedef void (*)(int32_t, Handle, uint64_t, void *) FCompletionCallback;

	// CgsDeviceOperation.h:129
	Operation::FCompletionCallback mpCompletionCallback;

	// CgsDeviceOperation.h:130
	void * mpContext;

	// CgsDeviceOperation.h:131
	int32_t miPriority;

}

// CgsDeviceOperation.h:119
extern const int32_t KI_MAX_FILE_NAME_LENGTH = 255;

// CgsDeviceOperation.h:24
namespace CgsFileSystem {
	// CgsDeviceOperation.h:39
	enum EDeviceOperationType {
		E_OPERATION_READ = 0,
		E_OPERATION_WRITE = 1,
		E_OPERATION_OPEN = 2,
		E_OPERATION_CLOSE = 3,
		E_OPERATION_INIT = 4,
		E_OPERATION_SHUTDOWN = 5,
	}

	// CgsDeviceOperation.h:57
	enum EDeviceErrors {
		E_DEVICEERROR_READ = 0,
		E_DEVICEERROR_SEEK = 1,
		E_DEVICEERROR_OPEN = 2,
		E_DEVICEERROR_WRITE = 3,
		E_DEVICEERROR_CLOSE = 4,
		E_DEVICEERROR_RECOVERED = 5,
	}

	struct Handle;

	struct Device;

	struct Operation;

	struct OperationPool;

	struct AsyncOp;

	struct FileFutexHelper;

	struct BaseFile;

	struct FileLog;

	struct FileSystem;

	struct File;

	struct DiskCacheCommand;

	struct DiskCacheCommandBuffer;

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

	struct PhysicalPS3Handle;

	struct RemapDevice;

	struct DebugComponentFileSystem;

	struct FileHandle;

	struct MemDeviceFileHandle;

	struct MenuItemStreamInfo;

}

