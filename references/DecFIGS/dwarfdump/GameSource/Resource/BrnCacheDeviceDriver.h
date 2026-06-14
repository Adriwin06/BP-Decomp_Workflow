// BrnCacheDeviceDriver.h:124
extern const uint16_t KU_USED = 49152;

// BrnCacheDeviceDriver.h:125
extern const uint16_t KU_READREFCOUNT = 127;

// BrnCacheDeviceDriver.h:126
extern const uint16_t KU_WRITEREFCOUNT = 16256;

// BrnCacheDeviceDriver.h:200
extern const uint16_t KU_FILEINDEXMASK = 4095;

// BrnCacheDeviceDriver.h:201
extern const uint16_t KU_USEDFLAG = 4096;

// BrnCacheDeviceDriver.h:202
extern const uint16_t KU_INVALIDCHUNK = 65535;

// BrnCacheDeviceDriver.h:289
extern const int32_t KI_MAX_CACHE_PATH_NAME_LENGTH = 100;

// BrnCacheDeviceDriver.h:292
extern const int32_t KI_MAX_HEADER_SIZE = 524288;

// ps3mem.h:5
namespace BrnResource {
	// Declaration
	struct CacheDeviceHandle {
		// BrnCacheDeviceDriver.h:73
		enum EMode {
			E_MODE_READ = 0,
			E_MODE_WRITE = 1,
		}

	}

}

// BrnCacheDeviceDriver.h:53
struct BrnResource::CacheDeviceOptions {
	// BrnCacheDeviceDriver.h:55
	const char * mpcCachePath;

	// BrnCacheDeviceDriver.h:56
	int32_t miChunkSize;

	// BrnCacheDeviceDriver.h:57
	int32_t miCacheSize;

	// BrnCacheDeviceDriver.h:58
	int32_t miMaxFiles;

}

// BrnCacheDeviceDriver.h:70
struct BrnResource::CacheDeviceHandle {
private:
	// BrnCacheDeviceDriver.h:85
	BrnResource::CacheDeviceDriver * mpDriver;

	// BrnCacheDeviceDriver.h:86
	int32_t miFileIndex;

	// BrnCacheDeviceDriver.h:87
	BrnResource::CacheDeviceHandle::EMode meMode;

	// BrnCacheDeviceDriver.h:90
	int32_t miFilePosition;

	// BrnCacheDeviceDriver.h:91
	uint16_t muGlobalChunkIndex;

public:
	// BrnCacheDeviceDriver.h:80
	void Construct(BrnResource::CacheDeviceDriver *, int32_t, BrnResource::CacheDeviceHandle::EMode);

}

// BrnCacheDeviceDriver.h:105
struct BrnResource::CacheDeviceHandlePool : public FixedIndexedPool<BrnResource::CacheDeviceHandle,8,int8_t> {
}

// BrnCacheDeviceDriver.h:121
struct BrnResource::CacheDeviceFile {
	// BrnCacheDeviceDriver.h:124
	extern const uint16_t KU_USED = 49152;

	// BrnCacheDeviceDriver.h:125
	extern const uint16_t KU_READREFCOUNT = 127;

	// BrnCacheDeviceDriver.h:126
	extern const uint16_t KU_WRITEREFCOUNT = 16256;

private:
	// BrnCacheDeviceDriver.h:182
	uint32_t muNameHash;

	// BrnCacheDeviceDriver.h:183
	int32_t miSize;

	// BrnCacheDeviceDriver.h:184
	uint16_t muFirstChunk;

	// BrnCacheDeviceDriver.h:185
	uint16_t muFlagsAndRefCount;

public:
	// BrnCacheDeviceDriver.h:129
	void Clear();

	// BrnCacheDeviceDriver.h:132
	void SetNameHash(uint32_t);

	// BrnCacheDeviceDriver.h:135
	uint32_t GetNameHash() const;

	// BrnCacheDeviceDriver.h:138
	void SetSize(int32_t);

	// BrnCacheDeviceDriver.h:141
	int32_t GetSize() const;

	// BrnCacheDeviceDriver.h:144
	void SetFirstChunk(uint16_t);

	// BrnCacheDeviceDriver.h:147
	uint16_t GetFirstChunk() const;

	// BrnCacheDeviceDriver.h:150
	void SetUsed(bool);

	// BrnCacheDeviceDriver.h:153
	bool IsUsed() const;

	// BrnCacheDeviceDriver.h:156
	void IncReadCount();

	// BrnCacheDeviceDriver.h:159
	void DecReadCount();

	// BrnCacheDeviceDriver.h:162
	void SetReadCount(uint16_t);

	// BrnCacheDeviceDriver.h:165
	uint16_t GetReadCount() const;

	// BrnCacheDeviceDriver.h:168
	void IncWriteCount();

	// BrnCacheDeviceDriver.h:171
	void DecWriteCount();

	// BrnCacheDeviceDriver.h:174
	void SetWriteCount(uint16_t);

	// BrnCacheDeviceDriver.h:177
	uint16_t GetWriteCount() const;

}

// BrnCacheDeviceDriver.h:197
struct BrnResource::CacheDeviceChunk {
	// BrnCacheDeviceDriver.h:200
	extern const uint16_t KU_FILEINDEXMASK = 4095;

	// BrnCacheDeviceDriver.h:201
	extern const uint16_t KU_USEDFLAG = 4096;

	// BrnCacheDeviceDriver.h:202
	extern const uint16_t KU_INVALIDCHUNK = 65535;

private:
	// BrnCacheDeviceDriver.h:235
	uint32_t muDataHash;

	// BrnCacheDeviceDriver.h:236
	uint16_t muFileAndFlags;

	// BrnCacheDeviceDriver.h:237
	uint16_t muNextChunk;

public:
	// BrnCacheDeviceDriver.h:205
	void Clear();

	// BrnCacheDeviceDriver.h:208
	void SetDataHash(uint32_t);

	// BrnCacheDeviceDriver.h:211
	uint32_t GetDataHash() const;

	// BrnCacheDeviceDriver.h:214
	void SetFileIndex(uint16_t);

	// BrnCacheDeviceDriver.h:217
	uint16_t GetFileIndex() const;

	// BrnCacheDeviceDriver.h:220
	void SetUsed(bool);

	// BrnCacheDeviceDriver.h:223
	bool IsUsed() const;

	// BrnCacheDeviceDriver.h:226
	void SetNextChunkIndex(uint16_t);

	// BrnCacheDeviceDriver.h:229
	uint16_t GetNextChunkIndex() const;

	// BrnCacheDeviceDriver.h:232
	bool IsLastChunk() const;

}

// BrnCacheDeviceDriver.h:249
struct BrnResource::CacheDeviceHeaderStart {
	// BrnCacheDeviceDriver.h:251
	char[4] macType;

	// BrnCacheDeviceDriver.h:252
	uint32_t muHeaderHash;

	// BrnCacheDeviceDriver.h:253
	uint32_t muFileDataHash;

	// BrnCacheDeviceDriver.h:254
	uint32_t muChunkDataHash;

}

// BrnCacheDeviceDriver.h:266
struct BrnResource::CacheDeviceHeaderMain {
	// BrnCacheDeviceDriver.h:268
	int32_t miVersion;

	// BrnCacheDeviceDriver.h:269
	int32_t miChunkSize;

	// BrnCacheDeviceDriver.h:270
	int32_t miCacheSize;

	// BrnCacheDeviceDriver.h:271
	int32_t miMaxFiles;

	// BrnCacheDeviceDriver.h:272
	int32_t miNumFiles;

	// BrnCacheDeviceDriver.h:273
	int32_t miFirstFreeChunk;

}

// BrnCacheDeviceDriver.h:286
struct BrnResource::CacheDeviceDriver : public rw::core::filesys::DeviceDriver {
	// BrnCacheDeviceDriver.h:289
	extern const int32_t KI_MAX_CACHE_PATH_NAME_LENGTH = 100;

	// BrnCacheDeviceDriver.h:290
	extern const int32_t KI_MAX_CHUNKS = 32768;

	// BrnCacheDeviceDriver.h:291
	extern const int32_t KI_MAX_FILES = 4095;

	// BrnCacheDeviceDriver.h:292
	extern const int32_t KI_MAX_HEADER_SIZE = 524288;

private:
	// BrnCacheDeviceDriver.h:330
	char[101] macCachePathName;

	// BrnCacheDeviceDriver.h:331
	rw::core::filesys::Handle * mpCacheFileHandle;

	// BrnCacheDeviceDriver.h:332
	int32_t miChunkSize;

	// BrnCacheDeviceDriver.h:333
	int32_t miCacheSize;

	// BrnCacheDeviceDriver.h:334
	int32_t miMaxFiles;

	// BrnCacheDeviceDriver.h:335
	int32_t miNumFiles;

	// BrnCacheDeviceDriver.h:336
	int32_t miNumChunks;

	// BrnCacheDeviceDriver.h:337
	bool mbInitialized;

	// BrnCacheDeviceDriver.h:338
	bool mbCacheFileInitialized;

	// BrnCacheDeviceDriver.h:339
	int32_t miNumOpenFiles;

	// BrnCacheDeviceDriver.h:340
	int32_t miNextChunkToPop;

	// BrnCacheDeviceDriver.h:342
	CacheDeviceHeaderStart * mpHeaderStart;

	// BrnCacheDeviceDriver.h:343
	CacheDeviceHeaderMain * mpHeaderMain;

	// BrnCacheDeviceDriver.h:344
	CacheDeviceChunk * mpChunks;

	// BrnCacheDeviceDriver.h:345
	CacheDeviceFile * mpFiles;

	// BrnCacheDeviceDriver.h:346
	char * mpcChunkBuffer;

	// BrnCacheDeviceDriver.h:347
	CacheDeviceHandlePool * mpHandlePool;

	// BrnCacheDeviceDriver.h:349
	Futex mFutex;

public:
	void CacheDeviceDriver(const CacheDeviceDriver &);

	// BrnCacheDeviceDriver.cpp:92
	void CacheDeviceDriver(const char *, const CacheDeviceOptions *, LinearMalloc *);

	// BrnCacheDeviceDriver.cpp:142
	virtual void ~CacheDeviceDriver();

	// BrnCacheDeviceDriver.h:514
	int32_t GetRequiredMemory(const CacheDeviceOptions *);

	// BrnCacheDeviceDriver.cpp:158
	// Declaration
	virtual bool Init() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCacheDeviceDriver.cpp:167
		using namespace rw::core::filesys;

	}

	// BrnCacheDeviceDriver.cpp:268
	virtual void Restore();

	// BrnCacheDeviceDriver.h:454
	void * operator new(size_t);

	// BrnCacheDeviceDriver.h:469
	void operator delete(void *);

	// BrnCacheDeviceDriver.h:484
	void * operator new(size_t, rw::IResourceAllocator *);

	// BrnCacheDeviceDriver.h:499
	void operator delete(void *, rw::IResourceAllocator *);

	// BrnCacheDeviceDriver.h:583
	const CacheDeviceChunk * GetChunk(int32_t) const;

	// BrnCacheDeviceDriver.h:590
	const CacheDeviceFile * GetFile(int32_t) const;

	// BrnCacheDeviceDriver.cpp:1359
	void UnitTest();

private:
	// BrnCacheDeviceDriver.cpp:241
	void InitializeCacheFile(rw::core::filesys::DeviceDriver *, void *);

	// BrnCacheDeviceDriver.cpp:286
	// Declaration
	virtual void * Open(const char *, unsigned int, rw::core::filesys::Handle **) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCacheDeviceDriver.cpp:294
		using namespace rw::core::filesys;

	}

	// BrnCacheDeviceDriver.cpp:441
	virtual void Close(void *);

	// BrnCacheDeviceDriver.cpp:484
	virtual unsigned int Read(void *, void *, unsigned int, rw::core::filesys::DeviceDriver *, void *);

	// BrnCacheDeviceDriver.cpp:629
	virtual unsigned int Write(void *, const void *, unsigned int, rw::core::filesys::DeviceDriver *, void *);

	// BrnCacheDeviceDriver.cpp:897
	// Declaration
	virtual uint64_t Seek(void *, uint64_t, int, rw::core::filesys::DeviceDriver *, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCacheDeviceDriver.cpp:901
		using namespace rw::core::filesys;

	}

	// BrnCacheDeviceDriver.cpp:984
	virtual uint64_t GetSize(void *);

	// BrnCacheDeviceDriver.cpp:1235
	virtual bool Resize(void *, uint64_t);

	// BrnCacheDeviceDriver.cpp:1251
	virtual bool Delete(const char *);

	// BrnCacheDeviceDriver.cpp:1267
	virtual bool Move(const char *, const char *);

	// BrnCacheDeviceDriver.cpp:1283
	virtual void * FindBegin(const char *, rw::core::filesys::DeviceDriver::FindData *);

	// BrnCacheDeviceDriver.cpp:1298
	virtual bool FindNext(void *, rw::core::filesys::DeviceDriver::FindData *);

	// BrnCacheDeviceDriver.cpp:1343
	virtual bool FindEnd(void *);

	// BrnCacheDeviceDriver.cpp:1313
	virtual bool DirectoryCreate(const char *);

	// BrnCacheDeviceDriver.cpp:1328
	virtual bool DirectoryRemove(const char *);

	// BrnCacheDeviceDriver.cpp:1002
	int32_t GetFileIndex(const char *);

	// BrnCacheDeviceDriver.cpp:1018
	int32_t GetFileIndex(uint32_t);

	// BrnCacheDeviceDriver.cpp:1044
	bool PopChunk(int32_t *);

	// BrnCacheDeviceDriver.cpp:1083
	void PushChunk(int32_t);

	// BrnCacheDeviceDriver.cpp:1100
	int32_t CreateFile(uint32_t);

	// BrnCacheDeviceDriver.cpp:1156
	void TruncateFile(int32_t);

	// BrnCacheDeviceDriver.cpp:1202
	CacheDeviceHandle * OpenFile(int32_t, bool);

	// BrnCacheDeviceDriver.h:538
	int32_t TranslateChunkIndexToFilePos(int32_t, int32_t);

	// BrnCacheDeviceDriver.h:555
	void TranslateFilePosToChunkIndexAndOffset(int32_t, int32_t *, int32_t *);

	// BrnCacheDeviceDriver.h:573
	uint32_t GetFileNameHash(const char *);

	// BrnCacheDeviceDriver.cpp:669
	int32_t AddToFile(CacheDeviceHandle *, const char *, int32_t, rw::core::filesys::DeviceDriver *, void *);

	// BrnCacheDeviceDriver.cpp:515
	int32_t ReadFromFile(CacheDeviceHandle *, char *, int32_t, rw::core::filesys::DeviceDriver *, void *);

	// BrnCacheDeviceDriver.cpp:818
	// Declaration
	void SeekToChunk(uint16_t, rw::core::filesys::DeviceDriver *, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCacheDeviceDriver.cpp:820
		using namespace rw::core::filesys;

	}

	// BrnCacheDeviceDriver.cpp:843
	// Declaration
	void ReadChunk(uint16_t, void *, rw::core::filesys::DeviceDriver *, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCacheDeviceDriver.cpp:847
		using namespace rw::core::filesys;

	}

	// BrnCacheDeviceDriver.cpp:870
	// Declaration
	void WriteChunk(uint16_t, const void *, rw::core::filesys::DeviceDriver *, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCacheDeviceDriver.cpp:874
		using namespace rw::core::filesys;

	}

}

// BrnCacheDeviceDriver.h:290
extern const int32_t KI_MAX_CHUNKS = 32768;

// BrnCacheDeviceDriver.h:291
extern const int32_t KI_MAX_FILES = 4095;

