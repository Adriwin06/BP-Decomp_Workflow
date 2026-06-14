// CgsPhysicalPS3Device.h:54
void CgsFileSystem::PhysicalPS3Device::PhysicalPS3Device() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDeviceOperation.h:24
namespace CgsFileSystem {
	// Declaration
	struct PhysicalPS3Device {
		// CgsPhysicalPS3Device.h:57
		enum EDeviceType {
			E_BLU_RAY_DRIVE = 0,
			E_HARD_DISK_DRIVE = 1,
			E_HOST = 2,
		}

	}

}

// CgsPhysicalPS3Device.h:34
struct CgsFileSystem::PhysicalPS3Handle {
	// CgsPhysicalPS3Device.h:36
	uint64_t muPosition;

	// CgsPhysicalPS3Device.h:37
	int32_t miHandle;

	// CgsPhysicalPS3Device.h:38
	uint32_t muOpenFlags;

	// CgsPhysicalPS3Device.h:39
	int32_t miCellFsOpenFlags;

	// CgsPhysicalPS3Device.h:40
	char[256] macFileName;

}

// CgsPhysicalPS3Device.h:54
struct CgsFileSystem::PhysicalPS3Device : public CgsFileSystem::Device {
private:
	// CgsPhysicalPS3Device.h:106
	CgsFileSystem::PhysicalPS3Device::EDeviceType meDeviceType;

	// Unknown accessibility
	// CgsPhysicalPS3Device.h:43
	typedef IndexedPool8<CgsFileSystem::PhysicalPS3Handle,16> PhysicalPS3HandlePool;

	// CgsPhysicalPS3Device.h:107
	PhysicalPS3Device::PhysicalPS3HandlePool mHandlePool;

public:
	// CgsPhysicalPS3Device.cpp:41
	void Construct(CgsFileSystem::PhysicalPS3Device::EDeviceType);

	// CgsPhysicalPS3Device.cpp:48
	// Declaration
	virtual int32_t Init() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPhysicalPS3Device.cpp:50
		using namespace CgsDev::Message;

	}

	// CgsPhysicalPS3Device.cpp:58
	// Declaration
	virtual int32_t Open(const char *, uint32_t, Handle::DeviceHandle *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPhysicalPS3Device.cpp:62
		using namespace CgsDev::Message;

		// CgsPhysicalPS3Device.cpp:158
		using namespace CgsDev::Message;

	}

	// CgsPhysicalPS3Device.cpp:193
	virtual int32_t Close(Handle::DeviceHandle);

	// CgsPhysicalPS3Device.cpp:206
	// Declaration
	virtual int32_t Read(Handle::DeviceHandle, void *, uint32_t, uint32_t *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPhysicalPS3Device.cpp:247
		using namespace CgsDev::Message;

		// CgsPhysicalPS3Device.cpp:258
		using namespace CgsDev::Message;

		// CgsPhysicalPS3Device.cpp:276
		using namespace CgsDev::Message;

		// CgsPhysicalPS3Device.cpp:282
		using namespace CgsDev::Message;

		// CgsPhysicalPS3Device.cpp:285
		using namespace CgsDev::Message;

		// CgsPhysicalPS3Device.cpp:293
		using namespace CgsDev::Message;

		// CgsPhysicalPS3Device.cpp:299
		using namespace CgsDev::Message;

		// CgsPhysicalPS3Device.cpp:302
		using namespace CgsDev::Message;

	}

	// CgsPhysicalPS3Device.cpp:313
	virtual int32_t Write(Handle::DeviceHandle, const void *, uint32_t, uint32_t *);

	// CgsPhysicalPS3Device.cpp:338
	virtual int32_t Seek(Handle::DeviceHandle, uint64_t, uint64_t *);

	// CgsPhysicalPS3Device.cpp:417
	virtual void Shutdown();

}

