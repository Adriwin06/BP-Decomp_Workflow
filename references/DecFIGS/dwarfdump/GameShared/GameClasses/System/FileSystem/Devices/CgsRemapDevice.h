// CgsFile.h:40
namespace CgsFileSystem {
	// Declaration
	struct RemapDevice {
		// CgsRemapDevice.h:45
		extern const int32_t KI_MAX_REMAP_NAME_LENGTH = 64;

	}

}

// CgsRemapDevice.h:45
extern const int32_t KI_MAX_REMAP_NAME_LENGTH = 64;

// CgsFile.h:40
namespace CgsFileSystem {
	// Declaration
	struct RemapDevice {
	public:
		RemapDevice();

		// Unknown accessibility
		// CgsRemapDevice.h:45
		extern const int32_t KI_MAX_REMAP_NAME_LENGTH = 64;

	}

}

// CgsRemapDevice.h:42
void CgsFileSystem::RemapDevice::RemapDevice() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsRemapDevice.h:42
struct CgsFileSystem::RemapDevice : public CgsFileSystem::Device {
	// CgsRemapDevice.h:45
	extern const int32_t KI_MAX_REMAP_NAME_LENGTH = 64;

private:
	// CgsRemapDevice.h:86
	char[64] macRemapPath;

public:
	// CgsRemapDevice.cpp:40
	void Construct(const char *);

	// CgsRemapDevice.cpp:46
	// Declaration
	virtual int32_t Init() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsRemapDevice.cpp:48
		using namespace CgsDev::Message;

	}

	// CgsRemapDevice.cpp:56
	virtual int32_t Open(const char *, uint32_t, Handle::DeviceHandle *);

	// CgsRemapDevice.cpp:66
	virtual int32_t Close(Handle::DeviceHandle);

	// CgsRemapDevice.cpp:76
	virtual int32_t Read(Handle::DeviceHandle, void *, uint32_t, uint32_t *);

	// CgsRemapDevice.cpp:86
	virtual int32_t Write(Handle::DeviceHandle, const void *, uint32_t, uint32_t *);

	// CgsRemapDevice.cpp:95
	virtual int32_t Seek(Handle::DeviceHandle, uint64_t, uint64_t *);

}

