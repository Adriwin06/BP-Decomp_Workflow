// JuiceScreenshotMgr.h:23
struct Juice::JuiceScreenshotMgr : public Juice::Processor {
private:
	// JuiceScreenshotMgr.h:42
	extern const int mkEventDataSize = 64;

	// JuiceScreenshotMgr.h:43
	char[64] mEventName;

	// JuiceScreenshotMgr.h:44
	char[64] mOutcome;

	// JuiceScreenshotMgr.h:45
	int mIntValue;

	// JuiceScreenshotMgr.h:46
	float mFloatResult;

	// JuiceScreenshotMgr.h:47
	char[64] mImageName;

	// JuiceScreenshotMgr.h:48
	char[64] mCoordinates;

public:
	void JuiceScreenshotMgr(const JuiceScreenshotMgr &);

	// JuiceScreenshotMgr.cpp:50
	Juice::JuiceScreenshotMgr * Instance();

	// JuiceScreenshotMgr.cpp:61
	virtual void ProcessMessage(int);

	// JuiceScreenshotMgr.cpp:108
	virtual void Initialize(Juice::cJuiceCom *);

	// JuiceScreenshotMgr.cpp:217
	virtual void Update();

	// JuiceScreenshotMgr.cpp:126
	virtual void Disable();

	// JuiceScreenshotMgr.cpp:128
	virtual void SendDebugIP();

	// JuiceScreenshotMgr.cpp:142
	virtual void TakeScreenshot(char *);

	// JuiceScreenshotMgr.cpp:154
	virtual void FinishScreenshot();

	// JuiceScreenshotMgr.cpp:204
	virtual void ScreenshotUnavailable();

private:
	// JuiceScreenshotMgr.cpp:161
	void SendEventInfo();

	// JuiceScreenshotMgr.cpp:30
	void JuiceScreenshotMgr();

	// JuiceScreenshotMgr.h:40
	virtual void ~JuiceScreenshotMgr();

}

// JuiceScreenshotMgr.h:42
extern const int mkEventDataSize = 64;

