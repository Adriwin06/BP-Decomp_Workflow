// CgsDeviceMemFileSystem.cpp:30
struct CgsFileSystem::MemDeviceFileHandle {
private:
	// CgsDeviceMemFileSystem.cpp:74
	void * mpData;

	// CgsDeviceMemFileSystem.cpp:75
	uint64_t muDataSize;

	// CgsDeviceMemFileSystem.cpp:76
	uint64_t muCurrPos;

public:
	// CgsDeviceMemFileSystem.cpp:32
	void * operator new(size_t);

	// CgsDeviceMemFileSystem.cpp:37
	void operator delete(void *);

	// CgsDeviceMemFileSystem.cpp:42
	void MemDeviceFileHandle(void *, uint64_t);

	// CgsDeviceMemFileSystem.cpp:48
	void MovePointer(uint64_t);

	// CgsDeviceMemFileSystem.cpp:53
	void SetPos(uint64_t);

	// CgsDeviceMemFileSystem.cpp:58
	uint64_t GetPos() const;

	// CgsDeviceMemFileSystem.cpp:63
	uint64_t GetSize() const;

	// CgsDeviceMemFileSystem.cpp:68
	void * GetDataPos() const;

}

