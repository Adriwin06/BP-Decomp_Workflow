// CgsLogCombined.h:63
extern const int32_t KI_MAX_COMBINED_STREAMS = 4;

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:312
	namespace Log {
		// Declaration
		struct LogCombined {
		protected:
			// CgsLogCombined.h:63
			extern const int32_t KI_MAX_COMBINED_STREAMS = 4;

		}

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:312
	namespace Log {
		// Declaration
		struct LogCombined {
		public:
			// CgsLogCombined.h:87
			LogCombined();

		protected:
			// CgsLogCombined.h:63
			extern const int32_t KI_MAX_COMBINED_STREAMS = 4;

		}

	}

}

// CgsLogCombined.h:45
struct CgsDev::Log::LogCombined : public CgsDev::StrStreamBase {
protected:
	// CgsLogCombined.h:63
	extern const int32_t KI_MAX_COMBINED_STREAMS = 4;

	// CgsLogCombined.h:64
	CgsDev::StrStreamBase *[4] mapStreams;

public:
	void LogCombined(const LogCombined &);

	// CgsLogCombined.h:87
	void LogCombined();

	// CgsLogCombined.cpp:49
	void AddStream(CgsDev::StrStreamBase *);

	// CgsLogCombined.cpp:74
	void RemoveStream(CgsDev::StrStreamBase *);

	// CgsLogCombined.cpp:123
	void RemoveAllStreams();

protected:
	// CgsLogCombined.cpp:99
	virtual void Append(const char *);

}

