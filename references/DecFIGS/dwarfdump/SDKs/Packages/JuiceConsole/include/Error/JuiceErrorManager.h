// JuiceErrorManager.h:23
struct Juice::ErrorManager : public Processor {
	// JuiceErrorManager.cpp:25
	extern Juice::ErrorManager *(*)() Activate;

private:
	// JuiceErrorManager.h:51
	int mMaxAsserts;

	// JuiceErrorManager.h:52
	int mCurrentNumAsserts;

	// JuiceErrorManager.h:53
	bool mSentOutOfAssertsMessage;

	// JuiceErrorManager.h:54
	bool mCrashDump;

public:
	void ErrorManager(const ErrorManager &);

	// JuiceErrorManager.cpp:58
	Juice::ErrorManager * InstanceFunction();

	// JuiceErrorManager.cpp:46
	virtual void Initialize(Juice::cJuiceCom *);

	// JuiceErrorManager.cpp:69
	void LogJuiceSystemError(const char *);

	// JuiceErrorManager.cpp:98
	void AssertLog(int, const char *, const char *, const char *, const char *);

	// JuiceErrorManager.cpp:152
	void HandleCrash(const char *, unsigned int, unsigned int *);

	// JuiceErrorManager.cpp:128
	void ErrorLog(const char *, unsigned int, unsigned int *);

	// JuiceErrorManager.cpp:191
	void VerifyFunction(int, const char *);

	// JuiceErrorManager.cpp:289
	void SendPreCrashMsg();

	// JuiceErrorManager.cpp:296
	void SendPostCrashMsg();

	// JuiceErrorManager.cpp:277
	void CrashDump();

	// JuiceErrorManager.cpp:203
	unsigned int GetMapfileOffset();

	// JuiceErrorManager.cpp:212
	unsigned int GetMapfileOffset(const char *, unsigned int);

	// JuiceErrorManager.cpp:342
	unsigned int GetCallStack(unsigned int *, unsigned int, unsigned int);

	// JuiceErrorManager.cpp:252
	unsigned int CleanStack(unsigned int, unsigned int, unsigned int *, unsigned int *);

	// JuiceErrorManager.cpp:257
	unsigned int CleanStack(unsigned int, unsigned int, unsigned int *, unsigned int *, unsigned int);

	// JuiceErrorManager.cpp:308
	virtual void ProcessMessage(int);

	// JuiceErrorManager.cpp:338
	virtual void Update();

	// JuiceErrorManager.cpp:328
	virtual void Disable();

private:
	// JuiceErrorManager.cpp:30
	void ErrorManager();

	// JuiceErrorManager.h:50
	virtual void ~ErrorManager();

}

