// CgsFileHandle.h:41
struct CgsFileSystem::FileHandle {
private:
	// CgsFileHandle.h:82
	CgsFileSystem::FileSystem * mpFileSystem;

	// CgsFileHandle.h:83
	uint32_t muFileId;

public:
	// CgsFileHandle.h:48
	void Construct(CgsFileSystem::FileSystem *, uint32_t);

	// CgsFileHandle.h:51
	FileHandle & operator=(const FileHandle &);

	// CgsFileHandle.h:54
	bool operator==(const FileHandle &) const;

	// CgsFileHandle.h:62
	bool Read(void *, uint64_t, uint64_t);

	// CgsFileHandle.h:70
	bool Write(const void *, uint64_t, uint64_t);

	// CgsFileHandle.h:73
	CgsFileSystem::FileState GetStatus() const;

	// CgsFileHandle.h:76
	uint32_t GetFileId() const;

	// CgsFileHandle.h:79
	uint64_t GetLastOperationSize();

}

