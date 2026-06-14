// CgsDeviceOperationPool.h:50
struct CgsFileSystem::OperationPool {
	// CgsDeviceOperationPool.h:59
	extern const int32_t KI_MAX_OPERATIONS = 32;

private:
	// CgsDeviceOperationPool.h:79
	Futex mFutex;

	// CgsDeviceOperationPool.h:80
	bool[32] mabUsedOperations;

	// CgsDeviceOperationPool.h:81
	uint64_t[32] mauOperationNumbers;

	// CgsDeviceOperationPool.h:82
	Operation[32] maOperations;

	// CgsDeviceOperationPool.h:83
	uint64_t muNextOperationNumber;

	// CgsDeviceOperationPool.h:89
	std::sem_t mOperationCount;

public:
	// CgsDeviceOperationPool.h:63
	void Construct();

	// CgsDeviceOperationPool.h:67
	void Destruct();

	// CgsDeviceOperationPool.h:71
	bool AddOperation(Operation *);

	// CgsDeviceOperationPool.h:75
	bool ReadOperation(Operation *);

}

// CgsDeviceOperationPool.h:59
extern const int32_t KI_MAX_OPERATIONS = 32;

