// JuiceDirtyNet.h:36
struct Juice::JuiceDirtyNet : public Juice::INetwork {
private:
	// JuiceDirtyNet.h:75
	ProtoAriesRefT * mAries;

	// JuiceDirtyNet.cpp:431
	extern JuiceMutex sMutex;

	// JuiceDirtyNet.cpp:432
	extern int sMutexCreated;

	// JuiceDirtyNet.h:82
	char[256] mConnectionKeyName;

	// JuiceDirtyNet.h:84
	extern const unsigned int MAX_WAIT_TIME = 3000;

public:
	void JuiceDirtyNet(const JuiceDirtyNet &);

	// JuiceDirtyNet.cpp:70
	JuiceDirtyNet * Instance();

	// JuiceDirtyNet.cpp:81
	virtual int Connect(const char *, int);

	// JuiceDirtyNet.cpp:145
	virtual int IsConnected();

	// JuiceDirtyNet.cpp:164
	virtual int Recv(char *, int *, int);

	// JuiceDirtyNet.cpp:193
	virtual int PeekHdr(char *);

	// JuiceDirtyNet.cpp:217
	virtual int Send(int, int, char *);

	// JuiceDirtyNet.cpp:246
	virtual int IsEnabled();

	// JuiceDirtyNet.cpp:251
	virtual int Initialize();

	// JuiceDirtyNet.cpp:337
	virtual void FreeEverything();

	// JuiceDirtyNet.cpp:330
	virtual void MaintainConn();

	// JuiceDirtyNet.cpp:178
	virtual int Disconnect();

	// JuiceDirtyNet.cpp:188
	virtual void TearDown();

	// JuiceDirtyNet.cpp:109
	virtual const char * GetMac();

	// JuiceDirtyNet.cpp:358
	virtual const char * GetLocalIpAddress();

	// JuiceDirtyNet.cpp:384
	virtual const char * GetConnectionKey();

	// JuiceDirtyNet.cpp:348
	virtual void ~JuiceDirtyNet();

private:
	// JuiceDirtyNet.cpp:76
	void JuiceDirtyNet();

	// JuiceDirtyNet.cpp:403
	void WaitForPS3NetworkCardToStart();

}

// JuiceDirtyNet.h:84
extern const unsigned int MAX_WAIT_TIME = 3000;

