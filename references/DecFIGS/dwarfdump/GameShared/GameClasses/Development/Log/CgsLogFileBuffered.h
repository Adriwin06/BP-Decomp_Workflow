// CgsLogFileBuffered.h:46
struct CgsDev::Log::LogFileBuffered : public CgsDev::StrStreamBase {
protected:
	// CgsLogFileBuffered.h:81
	int32_t miFile;

	// CgsLogFileBuffered.h:84
	char * mpcBuffer;

	// CgsLogFileBuffered.h:85
	int32_t miBufferLength;

	// CgsLogFileBuffered.h:86
	char[512] macFileName;

	// CgsLogFileBuffered.h:87
	int32_t miBufferPosition;

	// CgsLogFileBuffered.h:88
	bool mbAppend;

public:
	void LogFileBuffered(const LogFileBuffered &);

	// CgsLogFileBuffered.h:111
	void LogFileBuffered(const char *, char *, int32_t);

	// CgsLogFileBuffered.h:118
	void LogFileBuffered();

	// CgsLogFileBuffered.h:142
	void ~LogFileBuffered();

	// CgsLogFileBuffered.cpp:57
	bool Open(const char *, char *, int32_t);

	// CgsLogFileBuffered.cpp:87
	void Close();

	// CgsLogFileBuffered.cpp:149
	void Flush();

	// CgsLogFileBuffered.h:157
	void CheckIsOpen();

protected:
	// CgsLogFileBuffered.cpp:112
	virtual void Append(const char *);

}

