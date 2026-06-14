// JuiceSystemManager.h:28
struct Juice::SystemManager : public Juice::Processor {
	// JuiceSystemManager.h:61
	extern const unsigned int MIN_HEART_BEAT_RATE = 10;

private:
	// JuiceSystemManager.h:68
	bool mPause;

	// JuiceSystemManager.h:69
	bool mRecvHeartBeat;

	// JuiceSystemManager.h:70
	int mInAutomationMode;

	// JuiceSystemManager.h:71
	int mInScriptingMode;

	// JuiceSystemManager.h:72
	int mAutomationCrashReboot;

	// JuiceSystemManager.h:73
	int mAutomationDisconnectReboot;

	// JuiceSystemManager.h:74
	bool mRedirected;

	// JuiceSystemManager.h:75
	unsigned int mHeartIntervalStart;

	// JuiceSystemManager.h:76
	unsigned int mHeartIntervalDifference;

	// JuiceSystemManager.h:78
	int mFrameUpdateRate;

	// JuiceSystemManager.h:79
	int mGameSessionID;

	// JuiceSystemManager.cpp:639
	extern float mSystemFrequencyScaler;

	// JuiceSystemManager.cpp:640
	extern bool mHasSetFreq;

	// JuiceSystemManager.h:84
	unsigned int mElapsedTime;

	// JuiceSystemManager.h:85
	unsigned int mTimeOut;

	// JuiceSystemManager.h:86
	unsigned int mStartTime;

	// JuiceSystemManager.h:88
	extern const unsigned int INITIAL_HEART_BEAT_TIMEOUT = 60000;

	// JuiceSystemManager.h:89
	extern const unsigned int DEFAULT_HEART_BEAT_RATE = 1000;

	// JuiceSystemManager.cpp:641
	extern unsigned int mHeartBeatRate;

public:
	void SystemManager(const SystemManager &);

	// JuiceSystemManager.cpp:77
	Juice::SystemManager * Instance();

	// JuiceSystemManager.cpp:83
	virtual void Initialize(Juice::cJuiceCom *);

	// JuiceSystemManager.cpp:138
	virtual void ProcessMessage(int);

	// JuiceSystemManager.cpp:622
	virtual void Update();

	// JuiceSystemManager.cpp:637
	virtual void Disable();

	// JuiceSystemManager.cpp:645
	void SetFrequency();

	// JuiceSystemManager.cpp:667
	void SetHeartBeatRate(unsigned int);

	// JuiceSystemManager.cpp:672
	unsigned int GetHeartBeatRate();

	// JuiceSystemManager.cpp:677
	unsigned int GetCurrentSystemTime();

	// JuiceSystemManager.cpp:741
	unsigned int GetTimeElapsed(unsigned int &);

	// JuiceSystemManager.cpp:712
	unsigned int GetTick();

	// JuiceSystemManager.cpp:300
	virtual bool IsGamePaused();

	// JuiceSystemManager.cpp:305
	virtual int InAutomationMode();

	// JuiceSystemManager.cpp:310
	virtual int InScriptingMode();

	// JuiceSystemManager.cpp:315
	virtual int AutomationCrashReboot();

	// JuiceSystemManager.cpp:320
	virtual void SetAutomationCrashOption(int);

	// JuiceSystemManager.cpp:325
	virtual int AutomationDisconnectReboot();

	// JuiceSystemManager.cpp:330
	virtual void SetAutomationDisconnectOption(int);

	// JuiceSystemManager.cpp:335
	virtual void FilterCommands(int &);

	// JuiceSystemManager.cpp:407
	virtual void SendFrameUpdate();

	// JuiceSystemManager.cpp:412
	virtual void ResetConsole();

	// JuiceSystemManager.cpp:295
	virtual int GetGameSessionID();

	// JuiceSystemManager.cpp:250
	virtual void BlockingWait(int);

	// JuiceSystemManager.cpp:290
	virtual bool IsRedirecting();

	// JuiceSystemManager.h:56
	virtual void setRedirecting(bool);

	// JuiceSystemManager.cpp:261
	virtual void RegisterWithServer(int, Juice::cJuiceCom *);

	// JuiceSystemManager.cpp:266
	virtual void RegisterWithServer(int, Juice::cJuiceCom *, Juice::JuiceMsgWriter *);

	// JuiceSystemManager.cpp:763
	virtual void SetLanguage(Juice::JuiceLanguage);

private:
	// JuiceSystemManager.cpp:769
	void SendPauseAck(bool);

	// JuiceSystemManager.cpp:58
	void SystemManager();

	// JuiceSystemManager.h:66
	virtual void ~SystemManager();

}

// JuiceSystemManager.h:61
extern const unsigned int MIN_HEART_BEAT_RATE = 10;

// JuiceSystemManager.h:88
extern const unsigned int INITIAL_HEART_BEAT_TIMEOUT = 60000;

// JuiceSystemManager.h:89
extern const unsigned int DEFAULT_HEART_BEAT_RATE = 1000;

