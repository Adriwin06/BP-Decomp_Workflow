// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:312
	namespace Log {
		// Declaration
		struct LogFile {
		public:
			// CgsLogFile.h:105
			LogFile();

			// CgsLogFile.h:124
			~LogFile();

		}

	}

}

// CgsLogFile.h:45
struct CgsDev::Log::LogFile : public CgsDev::StrStreamBase {
protected:
	// CgsLogFile.h:67
	int32_t miFile;

public:
	void LogFile(const LogFile &);

	// CgsLogFile.h:90
	void LogFile(const char *, bool);

	// CgsLogFile.h:105
	void LogFile();

	// CgsLogFile.h:124
	void ~LogFile();

	// CgsLogFile.cpp:54
	bool Open(const char *, bool);

	// CgsLogFile.cpp:117
	void Close();

	// CgsLogFile.h:139
	bool IsOpen() const;

protected:
	// CgsLogFile.cpp:152
	virtual void Append(const char *);

}

