// CgsDeviceOperation.h:24
namespace CgsFileSystem {
	// Declaration
	struct DeviceSwitchableFilesystem {
	public:
		// CgsDeviceSwitchableFileSystem.cpp:30
		void Construct();

		// CgsDeviceSwitchableFileSystem.cpp:45
		virtual void * Open(const char *, unsigned int, rw::core::filesys::Handle **);

		// CgsDeviceSwitchableFileSystem.cpp:60
		virtual void Close(void *);

		// CgsDeviceSwitchableFileSystem.cpp:74
		virtual unsigned int Read(void *, void *, unsigned int, rw::core::filesys::DeviceDriver *, void *);

		// CgsDeviceSwitchableFileSystem.cpp:87
		virtual unsigned int Write(void *, const void *, unsigned int, rw::core::filesys::DeviceDriver *, void *);

		// CgsDeviceSwitchableFileSystem.cpp:102
		virtual uint64_t Seek(void *, uint64_t, int, rw::core::filesys::DeviceDriver *, void *);

		// CgsDeviceSwitchableFileSystem.cpp:117
		virtual uint64_t GetSize(void *);

		// CgsDeviceSwitchableFileSystem.cpp:130
		virtual bool Resize(void *, uint64_t);

		// CgsDeviceSwitchableFileSystem.cpp:143
		virtual bool Delete(const char *);

		// CgsDeviceSwitchableFileSystem.cpp:156
		virtual bool Move(const char *, const char *);

		// CgsDeviceSwitchableFileSystem.cpp:169
		virtual void * FindBegin(const char *, rw::core::filesys::DeviceDriver::FindData *);

		// CgsDeviceSwitchableFileSystem.cpp:182
		virtual bool FindNext(void *, rw::core::filesys::DeviceDriver::FindData *);

		// CgsDeviceSwitchableFileSystem.cpp:195
		virtual bool DirectoryCreate(const char *);

		// CgsDeviceSwitchableFileSystem.cpp:208
		virtual bool DirectoryRemove(const char *);

		// CgsDeviceSwitchableFileSystem.cpp:221
		virtual bool FindEnd(void *);

	}

}

