// CgsFile.h:40
namespace CgsFileSystem {
	// CgsFileLog.h:37
	enum ELogEntryType {
		E_LOGTYPE_OPEN = 0,
		E_LOGTYPE_CLOSE = 1,
		E_LOGTYPE_READ = 2,
		E_LOGTYPE_WRITE = 3,
		E_LOGTYPE_FSUPDATE = 4,
		E_LOGTYPE_LOAD = 5,
		E_LOGTYPE_UNLOAD = 6,
		E_LOGTYPE_STREAMDATA = 7,
		E_LOGTYPE_STREAMOPSIZE = 8,
		E_LOGTYPE_COUNT = 9,
	}

	// CgsFileLog.h:52
	enum ELogEntryMode {
		E_LOGMODE_BEGIN = 0,
		E_LOGMODE_END = 1,
		E_BUNDLELOG_BEGINLOAD = 2,
		E_BUNDLELOG_HEADERLOADED = 3,
		E_BUNDLELOG_ENTRIESLOADED = 4,
		E_BUNDLELOG_DATASTREAMED = 5,
		E_BUNDLELOG_DATAFINISHED = 6,
		E_BUNDLELOG_ENDLOAD = 7,
		E_LOGMODE_COUNT = 8,
	}

}

// CgsFileLog.h:75
struct CgsFileSystem::FileLogEntry {
	// CgsFileLog.h:77
	CgsFileSystem::ELogEntryType meType;

	// CgsFileLog.h:78
	CgsFileSystem::ELogEntryMode meMode;

	// CgsFileLog.h:79
	char[256] macFileName;

	// CgsFileLog.h:80
	uint64_t muTime;

	// CgsFileLog.h:81
	uint64_t muPosition;

	// CgsFileLog.h:82
	int32_t miPriority;

	// CgsFileLog.h:83
	uint64_t muSize;

	// CgsFileLog.h:84
	int32_t miIndex;

}

// CgsFileLog.h:96
struct CgsFileSystem::FileLog {
private:
	// CgsFileLog.h:176
	extern CgsFileSystem::FileLog * _mpThis;

public:
	// CgsFileLog.h:99
	void FileLog();

	// CgsFileLog.h:101
	void ~FileLog();

	// CgsFileLog.h:105
	void Construct(int32_t, rw::IResourceAllocator *);

	// CgsFileLog.h:109
	void Destruct();

	// CgsFileLog.h:112
	void LogOpenBegin(const char *, int32_t, int32_t);

	// CgsFileLog.h:115
	void LogOpenEnd(const char *, int32_t);

	// CgsFileLog.h:118
	void LogReadBegin(const char *, uint64_t, uint64_t, int32_t);

	// CgsFileLog.h:121
	void LogReadEnd(const char *, uint64_t, int32_t);

	// CgsFileLog.h:124
	void LogWriteBegin(const char *, uint64_t, uint64_t, int32_t);

	// CgsFileLog.h:127
	void LogWriteEnd(const char *, uint64_t, int32_t);

	// CgsFileLog.h:130
	void LogCloseBegin(const char *, int32_t);

	// CgsFileLog.h:133
	void LogCloseEnd(const char *, int32_t);

	// CgsFileLog.h:136
	void LogLoadEvent(const char *, CgsFileSystem::ELogEntryMode);

	// CgsFileLog.h:139
	void LogUnloadBegin(const char *);

	// CgsFileLog.h:142
	void LogUnloadEnd(const char *);

	// CgsFileLog.h:145
	void LogFSUpdateBegin();

	// CgsFileLog.h:148
	void LogFSUpdateEnd();

	// CgsFileLog.h:151
	void LogStreamData(uint32_t, int32_t);

	// CgsFileLog.h:154
	void LogStreamOpSizeStart(uint32_t, int32_t);

	// CgsFileLog.h:157
	void LogStreamOpSizeEnd(uint32_t, int32_t);

	// CgsFileLog.h:160
	int32_t ReadLogs(FileLogEntry *, int32_t);

private:
	// CgsFileLog.h:179
	bool PushEntry(const FileLogEntry *);

	// CgsFileLog.h:182
	bool PopEntry(FileLogEntry *);

}

// CgsFileLog.h:176
extern CgsFileSystem::FileLog * _mpThis;

// CgsDeviceOperation.h:24
namespace CgsFileSystem {
	// CgsFileLog.h:37
	enum ELogEntryType {
		E_LOGTYPE_OPEN = 0,
		E_LOGTYPE_CLOSE = 1,
		E_LOGTYPE_READ = 2,
		E_LOGTYPE_WRITE = 3,
		E_LOGTYPE_FSUPDATE = 4,
		E_LOGTYPE_LOAD = 5,
		E_LOGTYPE_UNLOAD = 6,
		E_LOGTYPE_STREAMDATA = 7,
		E_LOGTYPE_STREAMOPSIZE = 8,
		E_LOGTYPE_COUNT = 9,
	}

	// CgsFileLog.h:52
	enum ELogEntryMode {
		E_LOGMODE_BEGIN = 0,
		E_LOGMODE_END = 1,
		E_BUNDLELOG_BEGINLOAD = 2,
		E_BUNDLELOG_HEADERLOADED = 3,
		E_BUNDLELOG_ENTRIESLOADED = 4,
		E_BUNDLELOG_DATASTREAMED = 5,
		E_BUNDLELOG_DATAFINISHED = 6,
		E_BUNDLELOG_ENDLOAD = 7,
		E_LOGMODE_COUNT = 8,
	}

	// CgsFileLog.h:190
	extern CgsFileSystem::FileLog * GetFileLog();

}

