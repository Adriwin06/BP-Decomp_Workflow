// CgsFileRW.h:45
struct CgsFileSystem::File : public BaseFile {
private:
	// CgsFileRW.h:80
	rw::core::filesys::Handle * mpHandle;

	// CgsFileRW.h:81
	uint32_t muCacheId;

	// CgsFileRW.h:82
	uint64_t muAttemptedReadFilePos;

	// CgsFileRW.h:83
	uint64_t muAttemptedReadOpSize;

	// CgsFileRW.h:84
	void * mpAttemptedReadOpAddress;

	// CgsFileRW.h:85
	char[256] macFileName;

public:
	// CgsFileRW.h:48
	void Construct(CgsFileSystem::FileSystem *, CgsFileSystem::FileLog *, int32_t);

	// CgsFileRW.h:52
	void Prepare();

	// CgsFileRW.h:56
	void Release();

	// CgsFileRW.h:60
	void Destruct();

	// CgsFileRW.h:64
	bool Open(const char *, CgsFileSystem::FileAccess, int32_t, bool);

	// CgsFileRW.h:68
	bool Read(void *, uint64_t, uint64_t);

	// CgsFileRW.h:72
	bool Write(const void *, uint64_t, uint64_t);

	// CgsFileRW.h:76
	bool Close();

private:
	// CgsFileRW.h:88
	void OnOpen(AsyncOp *);

	// CgsFileRW.h:91
	void OnRead(AsyncOp *);

	// CgsFileRW.h:94
	void OnWrite(AsyncOp *);

	// CgsFileRW.h:97
	void OnClose(AsyncOp *);

	// CgsFileRW.h:100
	void OpenCallback(AsyncOp *);

	// CgsFileRW.h:103
	void ReadCallback(AsyncOp *);

	// CgsFileRW.h:106
	void WriteCallback(AsyncOp *);

	// CgsFileRW.h:109
	void CloseCallback(AsyncOp *);

}

