// CgsStreamDeviceDiskWrite.h:44
struct CgsFileSystem::StreamDeviceDiskWrite {
	int (*)(...) * _vptr.StreamDeviceDiskWrite;

public:
	// CgsStreamDeviceDiskWrite.cpp:36
	void Construct(CgsFileSystem::FileSystem *);

	// CgsStreamDeviceDiskWrite.cpp:62
	void Open(uint32_t);

	// CgsStreamDeviceDiskWrite.cpp:85
	void Close();

	// CgsStreamDeviceDiskWrite.cpp:105
	void Update();

	// CgsStreamDeviceDiskWrite.cpp:157
	void Seek(uint64_t);

	// CgsStreamDeviceDiskWrite.cpp:179
	virtual uint64_t Tell();

	// CgsStreamDeviceDiskWrite.cpp:200
	virtual bool StartAsyncRead(void **, uint32_t *);

	// CgsStreamDeviceDiskWrite.cpp:221
	virtual bool StartAsyncWrite(void **, uint32_t *);

	// CgsStreamDeviceDiskWrite.cpp:244
	virtual void StopAsyncRead(uint32_t);

	// CgsStreamDeviceDiskWrite.cpp:257
	virtual void StopAsyncWrite(uint32_t, bool);

	// CgsStreamDeviceDiskWrite.cpp:297
	virtual uint32_t GetAmountOfDataInBuffer() const;

	// CgsStreamDeviceDiskWrite.cpp:308
	virtual uint32_t GetAmountOfSpaceInBuffer() const;

	// CgsStreamDeviceDiskWrite.h:148
	uint32_t GetFileId();

	// CgsStreamDeviceDiskWrite.h:158
	int32_t GetCurrentFilePriority();

private:
	// CgsStreamDeviceDiskWrite.cpp:269
	bool UpdateSeek();

	// CgsStreamDeviceDiskWrite.h:133
	void Flush();

}

