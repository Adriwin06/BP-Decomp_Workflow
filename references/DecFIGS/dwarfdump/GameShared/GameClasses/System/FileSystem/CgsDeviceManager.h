// CgsFile.h:40
namespace CgsFileSystem {
	// Declaration
	struct DeviceManager {
		// CgsDeviceManager.h:57
		struct PhysicalDeviceSlot {
			// CgsDeviceManager.h:59
			char[9] macPrefix;

			// CgsDeviceManager.h:60
			CgsFileSystem::Device * mpDevice;

			// CgsDeviceManager.h:61
			OperationPool mOperations;

			// CgsDeviceManager.h:62
			Thread mThread;

		}

		// CgsDeviceManager.h:66
		struct VirtualDeviceSlot {
			// CgsDeviceManager.h:68
			char[9] macPrefix;

			// CgsDeviceManager.h:69
			CgsFileSystem::Device * mpDevice;

		}

	}

}

// CgsDeviceManager.h:47
struct CgsFileSystem::DeviceManager {
	// CgsDeviceManager.h:50
	extern const int32_t KI_MAX_PREFIX_LENGTH = 8;

	// CgsDeviceManager.h:52
	extern const int32_t KI_MAX_PHYSICAL_DEVICES = 8;

	// CgsDeviceManager.h:53
	extern const int32_t KI_MAX_VIRTUAL_DEVICES = 32;

	// CgsDeviceManager.h:54
	extern const int32_t KI_MAX_DEFAULT_PATH_LENGTH = 256;

private:
	// CgsDeviceManager.h:139
	EAThreadDynamicData::ThreadId mInitializationThread;

	// CgsDeviceManager.h:140
	bool mbInitialized;

	// CgsDeviceManager.h:141
	bool mbReleasing;

	// CgsDeviceManager.h:142
	CgsFileSystem::DeviceManager::PhysicalDeviceSlot[8] maPhysicalDevices;

	// CgsDeviceManager.h:143
	CgsFileSystem::DeviceManager::VirtualDeviceSlot[32] maVirtualDevices;

	// CgsDeviceManager.h:144
	Futex mDeviceListFutex;

	// CgsDeviceManager.h:145
	char[257] macDefaultPath;

	// CgsDeviceManager.h:153
	extern DeviceManager * mpDeviceManager;

	// CgsDeviceManager.h:154
	extern rw::IResourceAllocator * mpAllocator;

public:
	// CgsDeviceManager.h:73
	void InitializeDeviceManager(rw::IResourceAllocator *);

	// CgsDeviceManager.h:76
	bool ReleaseDeviceManager();

	// CgsDeviceManager.h:82
	// Declaration
	void AddPhysicalDevice(CgsFileSystem::Device *, const char *, FDeviceErrorCallback) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsDeviceOperation.h:106
		typedef bool (*)(CgsFileSystem::EDeviceErrors) FDeviceErrorCallback;

	}

	// CgsDeviceManager.h:89
	void AddVirtualDevice(CgsFileSystem::Device *, const char *, const char *, FDeviceErrorCallback);

	// CgsDeviceManager.h:93
	void RemoveDevice(const char *);

	// CgsDeviceManager.h:97
	void SetDefaultPath(const char *);

	// CgsDeviceManager.h:105
	void Open(const char *, uint32_t, Operation::FCompletionCallback, void *, int32_t);

	// CgsDeviceManager.h:115
	void Read(Handle, uint64_t, void *, uint32_t, Operation::FCompletionCallback, void *, int32_t);

	// CgsDeviceManager.h:125
	void Write(Handle, uint64_t, const void *, uint32_t, Operation::FCompletionCallback, void *, int32_t);

	// CgsDeviceManager.h:132
	void Close(Handle, Operation::FCompletionCallback, void *, int32_t);

	// CgsDeviceManager.h:135
	void Shutdown();

private:
	// CgsDeviceManager.h:148
	void * operator new(size_t);

	// CgsDeviceManager.h:151
	void operator delete(void *);

	// CgsDeviceManager.h:158
	intptr_t PhysicalDeviceThread(void *);

	// CgsDeviceManager.h:162
	CgsFileSystem::Device * FindDevice(const char *);

	// CgsDeviceManager.h:165
	void InitInternal();

	// CgsDeviceManager.h:168
	bool ReleaseInternal();

}

// CgsDeviceManager.h:50
extern const int32_t KI_MAX_PREFIX_LENGTH = 8;

// CgsDeviceManager.h:52
extern const int32_t KI_MAX_PHYSICAL_DEVICES = 8;

// CgsDeviceManager.h:53
extern const int32_t KI_MAX_VIRTUAL_DEVICES = 32;

// CgsDeviceManager.h:54
extern const int32_t KI_MAX_DEFAULT_PATH_LENGTH = 256;

// CgsDeviceManager.h:153
extern DeviceManager * mpDeviceManager;

// CgsDeviceManager.h:154
extern rw::IResourceAllocator * mpAllocator;

// CgsDeviceOperation.h:24
namespace CgsFileSystem {
	// Declaration
	struct DeviceManager {
		// CgsDeviceManager.h:57
		struct PhysicalDeviceSlot {
			// CgsDeviceManager.h:59
			char[9] macPrefix;

			// CgsDeviceManager.h:60
			CgsFileSystem::Device * mpDevice;

			// CgsDeviceManager.h:61
			OperationPool mOperations;

			// CgsDeviceManager.h:62
			Thread mThread;

		}

		// CgsDeviceManager.h:66
		struct VirtualDeviceSlot {
			// CgsDeviceManager.h:68
			char[9] macPrefix;

			// CgsDeviceManager.h:69
			CgsFileSystem::Device * mpDevice;

		}

	}

	// CgsDeviceManager.h:176
	extern DeviceManager * GetDeviceManager();

}

