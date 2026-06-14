// CgsDevice.h:44
void CgsFileSystem::Device::Device() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDevice.h:44
struct CgsFileSystem::Device {
	int (*)(...) * _vptr.Device;

private:
	// CgsDevice.h:97
	CgsFileSystem::Device * mpParent;

	// CgsDevice.h:98
	FDeviceErrorCallback mpErrorCallback;

public:
	// CgsDevice.cpp:31
	virtual int32_t Init();

	// CgsDevice.cpp:40
	virtual int32_t Open(const char *, uint32_t, Handle::DeviceHandle *);

	// CgsDevice.cpp:48
	virtual int32_t Close(Handle::DeviceHandle);

	// CgsDevice.cpp:59
	virtual int32_t Read(Handle::DeviceHandle, void *, uint32_t, uint32_t *);

	// CgsDevice.cpp:70
	virtual int32_t Write(Handle::DeviceHandle, const void *, uint32_t, uint32_t *);

	// CgsDevice.cpp:80
	virtual int32_t Seek(Handle::DeviceHandle, uint64_t, uint64_t *);

	// CgsDevice.cpp:87
	virtual void Shutdown();

protected:
	// CgsDevice.h:113
	CgsFileSystem::Device * GetParent();

	// CgsDevice.h:127
	CgsFileSystem::Device * GetPhysicalParent();

	// CgsDevice.h:148
	bool CallErrorCallback(CgsFileSystem::EDeviceErrors);

}

