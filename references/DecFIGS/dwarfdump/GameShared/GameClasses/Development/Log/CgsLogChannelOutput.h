// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:312
	namespace Log {
		// Declaration
		struct LogChannelOutput {
			// CgsLogChannelOutput.h:53
			enum EUserChannel {
				FIRST_CHANNEL = 3,
				CHANNEL0 = 3,
				CHANNEL1 = 4,
				CHANNEL2 = 5,
				CHANNEL3 = 6,
				CHANNEL4 = 7,
				CHANNEL5 = 8,
				CHANNEL6 = 9,
				CHANNEL7 = 10,
				CHANNEL8 = 11,
				CHANNEL9 = 12,
				CHANNEL10 = 13,
				CHANNEL11 = 14,
				CHANNEL12 = 15,
				LAST_CHANNEL = 15,
			}

		}

	}

}

// CgsLogChannelOutput.h:50
struct CgsDev::Log::LogChannelOutput : public CgsDev::StrStreamBase {
private:
	// CgsLogChannelOutput.h:97
	int32_t miChannel;

public:
	void LogChannelOutput(const LogChannelOutput &);

	// CgsLogChannelOutput.h:76
	void LogChannelOutput();

	// CgsLogChannelOutput.h:84
	void SetChannel(CgsDev::Log::LogChannelOutput::EUserChannel);

protected:
	// CgsLogChannelOutput.h:118
	virtual void Append(const char *);

}

// CgsLogChannelOutput.h:50
struct CgsDev::Log::LogChannelOutput : public CgsDev::StrStreamBase {
private:
	// CgsLogChannelOutput.h:97
	int32_t miChannel;

public:
	// CgsLogChannelOutput.h:76
	void LogChannelOutput();

	// CgsLogChannelOutput.h:84
	void SetChannel(CgsDev::Log::LogChannelOutput::EUserChannel);

protected:
	// CgsLogChannelOutput.h:118
	virtual void Append(const char *);

}

