// CgsWriteStream.h:43
struct CgsFileSystem::WriteStream {
private:
	// CgsWriteStream.h:92
	CgsFileSystem::StreamDeviceDiskWrite * mpStreamDevice;

public:
	// CgsWriteStream.h:49
	void Construct(CgsFileSystem::StreamDeviceDiskWrite *);

	// CgsWriteStream.h:55
	bool StartAsyncWrite(void **, uint32_t *);

	// CgsWriteStream.h:61
	void StopAsyncWrite(uint32_t, bool);

	// CgsWriteStream.h:68
	uint32_t Write(uint32_t, void *, bool);

	// CgsWriteStream.h:73
	void Seek(uint64_t);

	// CgsWriteStream.h:76
	uint64_t Tell() const;

	// CgsWriteStream.h:79
	bool IsValid() const;

	// CgsWriteStream.h:82
	WriteStream & operator=(CgsFileSystem::StreamDeviceDiskWrite *);

	// CgsWriteStream.h:85
	uint32_t GetAmountOfDataInBuffer();

	// CgsWriteStream.h:88
	uint32_t GetAmountOfSpaceInBuffer();

}

