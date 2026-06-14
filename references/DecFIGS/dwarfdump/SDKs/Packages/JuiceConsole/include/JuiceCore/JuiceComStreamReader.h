// JuiceComStreamReader.h:21
struct Juice::JuiceComStreamReader : public JuiceMsgReader {
	// JuiceComStreamReader.h:32
	extern const unsigned int mkBufferSizeRequestRatio = 5;

private:
	// JuiceComStreamReader.h:35
	JuiceMutex mRequestMutex;

	// JuiceComStreamReader.h:39
	Juice::Command mRequestDataCommand;

	// JuiceComStreamReader.h:40
	Juice::cJuiceCom * mJuiceCom;

	// JuiceComStreamReader.h:41
	int mStreamRequestThreshold;

	// JuiceComStreamReader.h:42
	bool mReceivedRequestedStreamBytes;

	// JuiceComStreamReader.h:43
	bool mEnabled;

public:
	void JuiceComStreamReader(const JuiceComStreamReader &);

	// JuiceComStreamReader.cpp:30
	void JuiceComStreamReader();

	// JuiceComStreamReader.cpp:39
	virtual void ~JuiceComStreamReader();

	// JuiceComStreamReader.cpp:52
	void InitReader(char *, unsigned int, Juice::cJuiceCom *, Juice::Command);

	// JuiceComStreamReader.cpp:148
	void Receive();

	// JuiceComStreamReader.cpp:190
	void SetRequestThreshold(int);

	// JuiceComStreamReader.cpp:65
	void Enable();

	// JuiceComStreamReader.cpp:75
	void Disable();

	// JuiceComStreamReader.cpp:87
	bool HasNBytes(unsigned int, unsigned int);

private:
	// JuiceComStreamReader.cpp:126
	void LoadData(const char *, unsigned int);

	// JuiceComStreamReader.cpp:159
	virtual void ReadEvent();

	// JuiceComStreamReader.cpp:169
	void RequestData();

}

// JuiceComStreamReader.h:32
extern const unsigned int mkBufferSizeRequestRatio = 5;

