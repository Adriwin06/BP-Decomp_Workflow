// CgsFile.h:40
namespace CgsFileSystem {
	// CgsFileSystem.h:56
	const uint32_t KU_MAXNOOFFILES = 16;

	// CgsFileSystem.h:57
	const uint32_t KU_MAXPREFIXFILELENGTH = 1024;

	// CgsFileSystem.h:58
	const uint32_t KU_FILE_SYSTEM_BUFFER_SIZE = 16384;

	// CgsFileSystem.h:59
	const uint32_t KU_FILE_SYSTEM_EXTENDED_BUFFER_SIZE = 20480;

	// CgsFileSystem.h:60
	const uint32_t KU_MAX_READ_STREAMS = 8;

	// CgsFileSystem.h:62
	const uint32_t KU_INVALID_FILE_ID = 4294967295;

}

// CgsFileSystem.h:90
struct CgsFileSystem::FileSystem {
private:
	// CgsFileSystem.h:249
	char[1024] maFilePrefix;

	// CgsFileSystem.h:250
	File[16] maFiles;

	// CgsFileSystem.h:251
	char[20480] macSystemBuffer;

	// CgsFileSystem.h:252
	bool mbPrepared;

	// CgsFileSystem.h:253
	StreamDeviceDiskRead[8] maReadStreams;

	// CgsFileSystem.h:254
	uint32_t muNumUsedReadStreams;

	// CgsFileSystem.h:255
	rw::IResourceAllocator * mpFileSystemAllocator;

	// CgsFileSystem.h:256
	rw::IResourceAllocator * mpDebugAllocator;

	// CgsFileSystem.h:257
	FileLog mLog;

	// CgsFileSystem.h:258
	DiskLayout * mpDiskLayout;

	// CgsFileSystem.h:259
	Futex mFileSystemFutex;

	// CgsFileSystem.h:260
	CgsFileSystem::DeviceMemFileSystem * mpMemFileSystem;

	// CgsFileSystem.h:261
	DiskCache mDiskCache;

	// CgsFileSystem.h:262
	extern EAThreadDynamicData::AtomicInt32 mDiskErrorOccured;

	// CgsFileSystem.h:263
	extern EAThreadDynamicData::AtomicInt32 mReleasing;

	// CgsFileSystem.h:275
	CgsFileSystem::PhysicalPS3Device mPS3BluRayDrive;

	// CgsFileSystem.h:276
	CgsFileSystem::PhysicalPS3Device mPS3HardDrive;

	// CgsFileSystem.h:277
	CgsFileSystem::PhysicalPS3Device mPS3HostDrive;

	// CgsFileSystem.h:278
	CgsFileSystem::RemapDevice mPS3RemapBDVDDrive;

	// CgsFileSystem.h:279
	CgsFileSystem::RemapDevice mPS3RemapHDD0Drive;

	// CgsFileSystem.h:280
	CgsFileSystem::RemapDevice mPS3RemapHDD1Drive;

	// CgsFileSystem.h:281
	CgsFileSystem::RemapDevice mPS3RemapHOST0Drive;

	// CgsFileSystem.h:365
	CgsFileSystem::DebugComponentFileSystem mDebugComponent;

public:
	// CgsFileSystem.h:101
	void Construct(rw::IResourceAllocator *, rw::IResourceAllocator *, char *, DiskLayout *, const char *);

	// CgsFileSystem.h:105
	bool Prepare();

	// CgsFileSystem.h:109
	bool Release();

	// CgsFileSystem.h:113
	void Destruct();

	// CgsFileSystem.h:122
	int32_t Open(const char *, CgsFileSystem::FileAccess, int32_t, bool);

	// CgsFileSystem.h:131
	bool Read(uint32_t, void *, uint64_t, uint64_t);

	// CgsFileSystem.h:140
	bool Write(uint32_t, const void *, uint64_t, uint64_t);

	// CgsFileSystem.h:146
	bool Close(uint32_t);

	// CgsFileSystem.h:152
	void Delete(const char *);

	// CgsFileSystem.h:158
	CgsFileSystem::FileState GetStatus(uint32_t);

	// CgsFileSystem.h:164
	int32_t GetPriority(uint32_t);

	// CgsFileSystem.h:171
	void SetPriority(uint32_t, int32_t);

	// CgsFileSystem.h:177
	uint64_t GetLastOperationSize(uint32_t);

	// CgsFileSystem.h:189
	ReadStream OpenReadStream(const char *, void *, uint32_t, uint32_t, int32_t, int32_t, bool);

	// CgsFileSystem.h:195
	void CloseReadStream(ReadStream);

	// CgsFileSystem.h:203
	bool RegisterMemFile(const char *, void *, uint64_t);

	// CgsFileSystem.h:209
	bool UnregisterMemFile(const char *);

	// CgsFileSystem.h:215
	bool IsReadStreamOpen(ReadStream);

	// CgsFileSystem.h:221
	bool IsReadStreamClosed(ReadStream);

	// CgsFileSystem.h:227
	bool IsReadStreamOpen(int32_t);

	// CgsFileSystem.h:233
	bool IsReadStreamClosed(int32_t);

	// CgsFileSystem.h:238
	int32_t GetReadStreamIndex(ReadStream) const;

	// CgsFileSystem.h:242
	DiskCache * GetDiskCache();

	// CgsFileSystem.h:246
	bool HasDiskErrorOccured() const;

private:
	// CgsFileSystem.h:286
	bool RWDiskErrorHandler(int32_t);

	// CgsFileSystem.h:290
	bool DiskErrorHandler(CgsFileSystem::EDeviceErrors);

	// CgsFileSystem.h:299
	int32_t OpenInternal(const char *, CgsFileSystem::FileAccess, int32_t, bool);

	// CgsFileSystem.h:308
	bool ReadInternal(uint32_t, void *, uint64_t, uint64_t);

	// CgsFileSystem.h:317
	bool WriteInternal(uint32_t, const void *, uint64_t, uint64_t);

	// CgsFileSystem.h:323
	bool CloseInternal(uint32_t);

	// CgsFileSystem.h:329
	void DeleteInternal(const char *);

	// CgsFileSystem.h:341
	ReadStream OpenReadStreamInternal(const char *, void *, uint32_t, uint32_t, int32_t, int32_t, bool);

	// CgsFileSystem.h:346
	void CloseReadStreamInternal(ReadStream);

	// CgsFileSystem.h:355
	bool RegisterMemFileInternal(const char *, void *, uint64_t);

	// CgsFileSystem.h:361
	bool UnregisterMemFileInternal(const char *);

}

// CgsFileSystem.h:262
extern EAThreadDynamicData::AtomicInt32 mDiskErrorOccured;

// CgsDeviceOperation.h:24
namespace CgsFileSystem {
	// CgsFileSystem.h:56
	const uint32_t KU_MAXNOOFFILES = 16;

	// CgsFileSystem.h:57
	const uint32_t KU_MAXPREFIXFILELENGTH = 1024;

	// CgsFileSystem.h:58
	const uint32_t KU_FILE_SYSTEM_BUFFER_SIZE = 16384;

	// CgsFileSystem.h:59
	const uint32_t KU_FILE_SYSTEM_EXTENDED_BUFFER_SIZE = 20480;

	// CgsFileSystem.h:60
	const uint32_t KU_MAX_READ_STREAMS = 8;

	// CgsFileSystem.h:62
	const uint32_t KU_INVALID_FILE_ID = 4294967295;

}

// CgsFileSystem.h:90
struct CgsFileSystem::FileSystem {
private:
	// CgsFileSystem.h:249
	char[1024] maFilePrefix;

	// CgsFileSystem.h:250
	File[16] maFiles;

	// CgsFileSystem.h:251
	char[20480] macSystemBuffer;

	// CgsFileSystem.h:252
	bool mbPrepared;

	// CgsFileSystem.h:253
	StreamDeviceDiskRead[8] maReadStreams;

	// CgsFileSystem.h:254
	uint32_t muNumUsedReadStreams;

	// CgsFileSystem.h:255
	rw::IResourceAllocator * mpFileSystemAllocator;

	// CgsFileSystem.h:256
	rw::IResourceAllocator * mpDebugAllocator;

	// CgsFileSystem.h:257
	FileLog mLog;

	// CgsFileSystem.h:258
	DiskLayout * mpDiskLayout;

	// CgsFileSystem.h:259
	Futex mFileSystemFutex;

	// CgsFileSystem.h:260
	CgsFileSystem::DeviceMemFileSystem * mpMemFileSystem;

	// CgsFileSystem.h:261
	DiskCache mDiskCache;

	// CgsFileSystem.h:262
	extern EAThreadDynamicData::AtomicInt32 mDiskErrorOccured;

	// CgsFileSystem.h:263
	extern EAThreadDynamicData::AtomicInt32 mReleasing;

	// CgsFileSystem.h:275
	CgsFileSystem::PhysicalPS3Device mPS3BluRayDrive;

	// CgsFileSystem.h:276
	CgsFileSystem::PhysicalPS3Device mPS3HardDrive;

	// CgsFileSystem.h:277
	CgsFileSystem::PhysicalPS3Device mPS3HostDrive;

	// CgsFileSystem.h:278
	CgsFileSystem::RemapDevice mPS3RemapBDVDDrive;

	// CgsFileSystem.h:279
	CgsFileSystem::RemapDevice mPS3RemapHDD0Drive;

	// CgsFileSystem.h:280
	CgsFileSystem::RemapDevice mPS3RemapHDD1Drive;

	// CgsFileSystem.h:281
	CgsFileSystem::RemapDevice mPS3RemapHOST0Drive;

	// CgsFileSystem.h:365
	CgsFileSystem::DebugComponentFileSystem mDebugComponent;

public:
	// CgsFileSystem.h:101
	void Construct(rw::IResourceAllocator *, rw::IResourceAllocator *, char *, DiskLayout *, const char *);

	// CgsFileSystem.h:105
	bool Prepare();

	// CgsFileSystem.h:109
	// Declaration
	bool Release() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsFileSystem.cpp:244
		using namespace CgsDev::Message;

		// CgsFileSystem.cpp:247
		using namespace CgsDev::Message;

		// CgsFileSystem.cpp:255
		using namespace CgsDev::Message;

		// CgsFileSystem.cpp:260
		using namespace CgsDev::Message;

		// CgsFileSystem.cpp:266
		using namespace CgsDev::Message;

		// CgsFileSystem.cpp:271
		using namespace CgsDev::Message;

		// CgsFileSystem.cpp:276
		using namespace CgsDev::Message;

		// CgsFileSystem.cpp:282
		using namespace CgsDev::Message;

		// CgsFileSystem.cpp:289
		using namespace CgsDev::Message;

		// CgsFileSystem.cpp:295
		using namespace CgsDev::Message;

		// CgsFileSystem.cpp:298
		using namespace CgsDev::Message;

		// CgsFileSystem.cpp:303
		using namespace CgsDev::Message;

		// CgsFileSystem.cpp:312
		using namespace CgsDev::Message;

	}

	// CgsFileSystem.h:113
	void Destruct();

	// CgsFileSystem.h:122
	int32_t Open(const char *, CgsFileSystem::FileAccess, int32_t, bool);

	// CgsFileSystem.h:131
	bool Read(uint32_t, void *, uint64_t, uint64_t);

	// CgsFileSystem.h:140
	bool Write(uint32_t, const void *, uint64_t, uint64_t);

	// CgsFileSystem.h:146
	bool Close(uint32_t);

	// CgsFileSystem.h:152
	void Delete(const char *);

	// CgsFileSystem.h:158
	CgsFileSystem::FileState GetStatus(uint32_t);

	// CgsFileSystem.h:164
	int32_t GetPriority(uint32_t);

	// CgsFileSystem.h:171
	void SetPriority(uint32_t, int32_t);

	// CgsFileSystem.h:177
	uint64_t GetLastOperationSize(uint32_t);

	// CgsFileSystem.h:189
	ReadStream OpenReadStream(const char *, void *, uint32_t, uint32_t, int32_t, int32_t, bool);

	// CgsFileSystem.h:195
	void CloseReadStream(ReadStream);

	// CgsFileSystem.h:203
	bool RegisterMemFile(const char *, void *, uint64_t);

	// CgsFileSystem.h:209
	bool UnregisterMemFile(const char *);

	// CgsFileSystem.h:215
	bool IsReadStreamOpen(ReadStream);

	// CgsFileSystem.h:221
	bool IsReadStreamClosed(ReadStream);

	// CgsFileSystem.h:227
	bool IsReadStreamOpen(int32_t);

	// CgsFileSystem.h:233
	bool IsReadStreamClosed(int32_t);

	// CgsFileSystem.h:238
	int32_t GetReadStreamIndex(ReadStream) const;

	// CgsFileSystem.h:242
	DiskCache * GetDiskCache();

	// CgsFileSystem.h:246
	bool HasDiskErrorOccured() const;

private:
	// CgsFileSystem.h:286
	bool RWDiskErrorHandler(int32_t);

	// CgsFileSystem.h:290
	bool DiskErrorHandler(CgsFileSystem::EDeviceErrors);

	// CgsFileSystem.h:299
	int32_t OpenInternal(const char *, CgsFileSystem::FileAccess, int32_t, bool);

	// CgsFileSystem.h:308
	bool ReadInternal(uint32_t, void *, uint64_t, uint64_t);

	// CgsFileSystem.h:317
	bool WriteInternal(uint32_t, const void *, uint64_t, uint64_t);

	// CgsFileSystem.h:323
	bool CloseInternal(uint32_t);

	// CgsFileSystem.h:329
	void DeleteInternal(const char *);

	// CgsFileSystem.h:341
	ReadStream OpenReadStreamInternal(const char *, void *, uint32_t, uint32_t, int32_t, int32_t, bool);

	// CgsFileSystem.h:346
	void CloseReadStreamInternal(ReadStream);

	// CgsFileSystem.h:355
	bool RegisterMemFileInternal(const char *, void *, uint64_t);

	// CgsFileSystem.h:361
	bool UnregisterMemFileInternal(const char *);

}

