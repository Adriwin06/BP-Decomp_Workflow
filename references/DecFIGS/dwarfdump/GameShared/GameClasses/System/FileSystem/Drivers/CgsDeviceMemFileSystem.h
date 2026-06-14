// CgsFile.h:40
namespace CgsFileSystem {
	// Declaration
	struct DeviceMemFileSystem {
		// CgsDeviceMemFileSystem.h:44
		extern const uint32_t KU_MAX_MEM_FILES = 64;

	}

}

// CgsDeviceMemFileSystem.h:44
extern const uint32_t KU_MAX_MEM_FILES = 64;

// CgsDeviceOperation.h:24
namespace CgsFileSystem {
	// Declaration
	struct DeviceMemFileSystem {
		// CgsDeviceMemFileSystem.h:37
		struct MemFile {
			// CgsDeviceMemFileSystem.h:39
			char[128] macName;

			// CgsDeviceMemFileSystem.h:40
			uint64_t muSize;

			// CgsDeviceMemFileSystem.h:41
			void * mpData;

		}

	}

}

// CgsDeviceMemFileSystem.h:33
struct CgsFileSystem::DeviceMemFileSystem : public rw::core::filesys::DeviceDriver {
	// CgsDeviceMemFileSystem.h:44
	extern const uint32_t KU_MAX_MEM_FILES = 64;

private:
	// CgsDeviceMemFileSystem.h:118
	bool mbConstructed;

	// CgsDeviceMemFileSystem.h:119
	CgsFileSystem::DeviceMemFileSystem::MemFile[64] maMemFiles;

public:
	void DeviceMemFileSystem(const DeviceMemFileSystem &);

	// CgsDeviceMemFileSystem.h:46
	void DeviceMemFileSystem(const char *);

	// CgsDeviceMemFileSystem.h:51
	virtual void ~DeviceMemFileSystem();

	// CgsDeviceMemFileSystem.cpp:89
	void Construct();

	// CgsDeviceMemFileSystem.cpp:105
	bool RegisterMemFile(const char *, void *, uint64_t);

	// CgsDeviceMemFileSystem.cpp:132
	bool UnregisterMemFile(const char *);

	// CgsDeviceMemFileSystem.cpp:159
	// Declaration
	virtual void * Open(const char *, unsigned int, rw::core::filesys::Handle **) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsDeviceMemFileSystem.cpp:161
		using namespace rw::core::filesys;

	}

	// CgsDeviceMemFileSystem.cpp:249
	virtual void Close(void *);

	// CgsDeviceMemFileSystem.cpp:265
	// Declaration
	virtual unsigned int Read(void *, void *, unsigned int, rw::core::filesys::DeviceDriver *, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsDeviceMemFileSystem.cpp:267
		using namespace rw::core::filesys;

	}

	// CgsDeviceMemFileSystem.cpp:301
	virtual unsigned int Write(void *, const void *, unsigned int, rw::core::filesys::DeviceDriver *, void *);

	// CgsDeviceMemFileSystem.cpp:317
	// Declaration
	virtual uint64_t Seek(void *, uint64_t, int, rw::core::filesys::DeviceDriver *, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsDeviceMemFileSystem.cpp:319
		using namespace rw::core::filesys;

	}

	// CgsDeviceMemFileSystem.cpp:372
	virtual uint64_t GetSize(void *);

	// CgsDeviceMemFileSystem.cpp:386
	virtual bool Resize(void *, uint64_t);

	// CgsDeviceMemFileSystem.cpp:400
	virtual bool Delete(const char *);

	// CgsDeviceMemFileSystem.cpp:414
	virtual bool Move(const char *, const char *);

	// CgsDeviceMemFileSystem.cpp:428
	virtual void * FindBegin(const char *, rw::core::filesys::DeviceDriver::FindData *);

	// CgsDeviceMemFileSystem.cpp:441
	virtual bool FindNext(void *, rw::core::filesys::DeviceDriver::FindData *);

	// CgsDeviceMemFileSystem.cpp:480
	virtual bool FindEnd(void *);

	// CgsDeviceMemFileSystem.cpp:454
	virtual bool DirectoryCreate(const char *);

	// CgsDeviceMemFileSystem.cpp:467
	virtual bool DirectoryRemove(const char *);

	// CgsDeviceMemFileSystem.h:132
	void * operator new(size_t);

	// CgsDeviceMemFileSystem.h:147
	void operator delete(void *);

	// CgsDeviceMemFileSystem.h:162
	void * operator new(size_t, rw::IResourceAllocator *);

	// CgsDeviceMemFileSystem.h:177
	void operator delete(void *, rw::IResourceAllocator *);

}

