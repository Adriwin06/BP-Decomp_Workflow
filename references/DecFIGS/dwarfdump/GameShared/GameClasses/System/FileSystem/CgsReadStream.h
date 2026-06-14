// CgsReadStream.h:43
struct CgsFileSystem::ReadStream {
private:
	// CgsReadStream.h:93
	CgsFileSystem::StreamDeviceDiskRead * mpStreamDevice;

public:
	// CgsReadStream.h:49
	void Construct(CgsFileSystem::StreamDeviceDiskRead *);

	// CgsReadStream.h:55
	bool StartAsyncRead(void **, uint32_t *);

	// CgsReadStream.h:60
	void StopAsyncRead(uint32_t);

	// CgsReadStream.h:66
	uint32_t Read(uint32_t, void *);

	// CgsReadStream.h:71
	void Seek(uint64_t);

	// CgsReadStream.h:74
	uint64_t Tell() const;

	// CgsReadStream.h:77
	bool IsValid() const;

	// CgsReadStream.h:80
	ReadStream & operator=(CgsFileSystem::StreamDeviceDiskRead *);

	// CgsReadStream.h:83
	uint32_t GetAmountOfDataInBuffer() const;

	// CgsReadStream.h:86
	void LogAmountOfDataInBuffer() const;

	// CgsReadStream.h:89
	bool IsBufferComplete() const;

}

