// JuiceCom.h:22
struct Juice::cJuiceCom : public JuiceMsgReader {
	// JuiceCom.h:47
	extern const int JUICE_COMMAND_HDR_SIZE = 8;

	// JuiceCom.h:48
	extern const int mkMaxConnectAttempt = 20;

	// JuiceCom.h:49
	extern const int mkDefaultServerPort = 31001;

	// JuiceCom.h:50
	extern const int mkReadBufferSize = 2048;

	// JuiceCom.h:51
	extern const int mkSendBufferSize = 2048;

	// JuiceCom.h:52
	extern const int mkSendThreshold = 1024;

	// JuiceCom.h:53
	extern const int mkStreamRequestThreshold = 1639;

private:
	// JuiceCom.h:57
	JuiceMutex mMutex;

	// JuiceCom.h:58
	int mComConnected;

	// JuiceCom.h:59
	int mLastMsgSerial;

	// JuiceCom.h:60
	int mCurrentConsoleMsgSerial;

	// JuiceCom.h:61
	int mISPConnected;

	// JuiceCom.h:62
	char[2048] mReadBuffer;

	// JuiceCom.h:63
	char[2048] mWriteBuffer;

	// JuiceCom.h:64
	char[32] mLastIP;

	// JuiceCom.h:65
	int mLastPort;

	// JuiceCom.h:66
	unsigned int mTimeSinceLastDataReceived;

	// JuiceCom.h:67
	unsigned int mDataReceivedAtTime;

	// JuiceCom.h:68
	bool mDataReceiveTimerInitialized;

public:
	void cJuiceCom(const cJuiceCom &);

	// JuiceCom.cpp:57
	void InitComLayer();

	// JuiceCom.cpp:283
	int Connect(const char *, int);

	// JuiceCom.cpp:345
	int Disconnect();

	// JuiceCom.h:28
	void Reconnect();

	// JuiceCom.cpp:366
	void TearDownComLayer();

	// JuiceCom.cpp:375
	const int IsConnected() const;

	// JuiceCom.cpp:207
	int Read();

	// JuiceCom.cpp:91
	int Send();

	// JuiceCom.cpp:151
	int Send(Juice::JuiceMsgWriter *);

	// JuiceCom.cpp:271
	unsigned int GetTimeSinceDataArrival();

	// JuiceCom.cpp:384
	const char * GetMacAddress();

	// JuiceCom.cpp:404
	const char * GetLocalIpAddress();

	// JuiceCom.cpp:105
	void AttemptReconnect();

	// JuiceCom.cpp:175
	virtual void WriteCapacityWarning();

	// JuiceCom.cpp:191
	virtual void WriteCapacityExceeded(Juice::Command, unsigned int);

	// JuiceCom.cpp:180
	virtual void WriteDangerousSize(Juice::Command, unsigned int);

	// JuiceCom.cpp:35
	void cJuiceCom();

	// JuiceCom.cpp:336
	virtual void ~cJuiceCom();

}

// JuiceCom.h:49
extern const int mkDefaultServerPort = 31001;

// JuiceCom.h:50
extern const int mkReadBufferSize = 2048;

// JuiceCom.h:51
extern const int mkSendBufferSize = 2048;

// JuiceCom.h:52
extern const int mkSendThreshold = 1024;

