// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:10
	namespace core {
		// list.h:15
		namespace filesys {
			// Declaration
			struct DeviceDriver {
				// device.h:293
				struct FindData {
					// device.h:294
					unsigned int mFlags;

					// device.h:295
					uint64_t mCreationTime;

					// device.h:296
					uint64_t mAccessTime;

					// device.h:297
					uint64_t mModificationTime;

					// device.h:298
					uint64_t mSize;

					// device.h:299
					char[256] mName;

				}

			}

		}

	}

}

// device.h:68
struct rw::core::filesys::DeviceDriver {
	int (*)(...) * _vptr.DeviceDriver;

protected:
	// device.h:382
	char[16] mDeviceName;

public:
	// device.h:76
	void DeviceDriver(const char *);

	// device.h:78
	virtual void ~DeviceDriver();

	// device.h:99
	virtual bool Init();

	// device.h:108
	virtual void Restore();

	// device.h:134
	virtual void * Open(const char *, unsigned int, rw::core::filesys::Handle **);

	// device.h:146
	virtual void Close(void *);

	// device.h:165
	virtual unsigned int Read(void *, void *, unsigned int, rw::core::filesys::DeviceDriver *, void *);

	// device.h:177
	virtual unsigned int Write(void *, const void *, unsigned int, rw::core::filesys::DeviceDriver *, void *);

	// device.h:199
	virtual uint64_t Seek(void *, uint64_t, int, rw::core::filesys::DeviceDriver *, void *);

	// device.h:209
	virtual uint64_t GetSize(void *);

	// device.h:221
	virtual bool Resize(void *, uint64_t);

	// device.h:236
	virtual uint64_t QueryLocation(void *);

	// device.h:253
	virtual unsigned int GetMaxReadSize();

	// device.h:267
	virtual bool Delete(const char *);

	// device.h:281
	virtual bool Move(const char *, const char *);

	// device.h:311
	virtual void * FindBegin(const char *, rw::core::filesys::DeviceDriver::FindData *);

	// device.h:324
	virtual bool FindNext(void *, rw::core::filesys::DeviceDriver::FindData *);

	// device.h:338
	virtual bool FindEnd(void *);

	// device.h:350
	virtual bool DirectoryCreate(const char *);

	// device.h:362
	virtual bool DirectoryRemove(const char *);

	// device.h:376
	const char * GetName() const;

}

// device.h:68
struct rw::core::filesys::DeviceDriver {
	int (*)(...) * _vptr.DeviceDriver;

protected:
	// device.h:382
	char[16] mDeviceName;

public:
	void DeviceDriver(const DeviceDriver &);

	// device.h:76
	void DeviceDriver(const char *);

	// device.h:78
	virtual void ~DeviceDriver();

	// device.h:99
	virtual bool Init();

	// device.h:108
	virtual void Restore();

	// device.h:134
	virtual void * Open(const char *, unsigned int, rw::core::filesys::Handle **);

	// device.h:146
	virtual void Close(void *);

	// device.h:165
	virtual unsigned int Read(void *, void *, unsigned int, rw::core::filesys::DeviceDriver *, void *);

	// device.h:177
	virtual unsigned int Write(void *, const void *, unsigned int, rw::core::filesys::DeviceDriver *, void *);

	// device.h:199
	virtual uint64_t Seek(void *, uint64_t, int, rw::core::filesys::DeviceDriver *, void *);

	// device.h:209
	virtual uint64_t GetSize(void *);

	// device.h:221
	virtual bool Resize(void *, uint64_t);

	// device.h:236
	virtual uint64_t QueryLocation(void *);

	// device.h:253
	virtual unsigned int GetMaxReadSize();

	// device.h:267
	virtual bool Delete(const char *);

	// device.h:281
	virtual bool Move(const char *, const char *);

	// device.h:311
	virtual void * FindBegin(const char *, rw::core::filesys::DeviceDriver::FindData *);

	// device.h:324
	virtual bool FindNext(void *, rw::core::filesys::DeviceDriver::FindData *);

	// device.h:338
	virtual bool FindEnd(void *);

	// device.h:350
	virtual bool DirectoryCreate(const char *);

	// device.h:362
	virtual bool DirectoryRemove(const char *);

	// device.h:376
	const char * GetName() const;

}

