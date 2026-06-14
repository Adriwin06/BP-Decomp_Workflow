// JuiceExtension.h:22
struct Juice::IExtension {
	int (*)(...) * _vptr.IExtension;

private:
	// JuiceExtension.cpp:34
	extern IExtension * sCurrentExtension;

public:
	void IExtension(const IExtension &);

	// JuiceExtension.h:30
	virtual const char * GetTitleName();

	// JuiceExtension.h:34
	virtual const char * GetBuildName();

	// JuiceExtension.h:38
	virtual const char * GetChangeList();

	// JuiceExtension.h:42
	virtual const char * GetConsoleTarget();

	// JuiceExtension.h:46
	virtual const char * GetXboxExeName();

	// JuiceExtension.h:50
	virtual const char * GetServerIP();

	// JuiceExtension.h:54
	virtual const char * GetConsoleName();

	// JuiceExtension.h:58
	virtual const int GetServerPort();

	// JuiceExtension.h:62
	virtual const int GetReadyToReset();

	// JuiceExtension.h:65
	virtual void FileSyncUpdate();

	// JuiceExtension.h:68
	virtual void GamePadToJuicePad(void *, tJuicePad *);

	// JuiceExtension.h:71
	virtual void JuicePadToGamePad(tJuicePad *, void *);

	// JuiceExtension.h:76
	virtual const int HasFileLoaded(const void *);

	// JuiceExtension.h:82
	virtual void InstantiateScriptExt();

	// JuiceExtension.cpp:288
	virtual const char * GetXboxPath();

	// JuiceExtension.h:96
	virtual const char * GetBuildDate();

	// JuiceExtension.h:100
	virtual const unsigned int GetInitializationTimeOut();

	// JuiceExtension.h:104
	virtual const unsigned int GetHeartBeatTimeOut();

	// JuiceExtension.h:108
	virtual const char * GetBackupServerIP();

	// JuiceExtension.h:112
	virtual const int GetBackupServerPort();

	// JuiceExtension.h:117
	virtual const int NetworkInitRetries();

	// JuiceExtension.cpp:49
	virtual const int GetInitialConnectionAttempts();

	// JuiceExtension.cpp:60
	virtual const int InitialConnectionRetries();

	// JuiceExtension.h:133
	virtual const int WaitBetweenInitialConnectionRretries();

	// JuiceExtension.h:137
	virtual const int WaitBetweenNetworkInitRetries();

	// JuiceExtension.h:141
	virtual void ThreadYield(int);

	// JuiceExtension.h:144
	virtual const char * GetScreenName();

	// JuiceExtension.h:147
	virtual const char * GetPopupName();

	// JuiceExtension.h:150
	virtual const char * GetPopupCheck();

	// JuiceExtension.h:153
	virtual const char * GetCursorPos();

	// JuiceExtension.h:156
	virtual float GetGameTime();

	// JuiceExtension.h:159
	virtual const int IsOkToConnect();

	// JuiceExtension.h:162
	virtual void ResetGamePad();

	// JuiceExtension.h:166
	virtual void CrashEvent();

	// JuiceExtension.cpp:272
	virtual void CrashComplete();

	// JuiceExtension.h:175
	virtual unsigned int PreferedLoadAddress();

	// JuiceExtension.h:178
	virtual const int HangTimeoutLength();

	// JuiceExtension.cpp:83
	virtual void UpdatePad(void *);

	// JuiceExtension.cpp:135
	virtual void UpdatePad(void *, Juice::eJuicePadNum);

	// JuiceExtension.h:187
	virtual void GamePadToJuicePad(void *, Juice::eJuicePadNum);

	// JuiceExtension.h:190
	virtual void JuicePadToGamePad(void *, Juice::eJuicePadNum);

	// JuiceExtension.cpp:326
	virtual void JuiceScreenshot(char *);

	// JuiceExtension.h:200
	virtual int NumberOfRepeatedReplayEntries(int);

	// JuiceExtension.cpp:363
	virtual const int GetJuiceThreadPriority();

	// JuiceExtension.h:209
	virtual int GetJuiceUpdateProcessor();

	// JuiceExtension.h:212
	virtual void PauseGame();

	// JuiceExtension.h:215
	virtual void UnPauseGame();

	// JuiceExtension.h:218
	virtual const int JuiceUseSimPrint();

	// JuiceExtension.cpp:314
	virtual void JuiceMgrInitialization();

	// JuiceExtension.cpp:382
	virtual char * JuiceScreenshotEventName();

	// JuiceExtension.cpp:389
	virtual char * JuiceScreenshotEventOutcome();

	// JuiceExtension.h:231
	virtual int JuiceScreenshotIntValue();

	// JuiceExtension.h:234
	virtual float JuiceScreenshotFloatResult();

	// JuiceExtension.cpp:396
	virtual char * JuiceScreenshotImageName();

	// JuiceExtension.cpp:403
	virtual char * JuiceScreenshotCoordinate();

	// JuiceExtension.cpp:410
	virtual const char * JuiceScreenshotImageType();

	// JuiceExtension.h:246
	virtual float GetButtonBaseValue(int);

	// JuiceExtension.h:250
	virtual float GetButtonValueRange();

	// JuiceExtension.h:253
	virtual float GetButtonReleaseThreshold(int);

	// JuiceExtension.h:256
	virtual void HandleFeAttributeChange(char *, char *);

	// JuiceExtension.h:259
	virtual void HandleFeContextChange(char *, char *);

	// JuiceExtension.h:262
	virtual void FeNavInit();

	// JuiceExtension.h:264
	virtual void HandleServerDisconnectingConsole(Juice::ConnectionRejection, char *);

	// JuiceExtension.cpp:337
	virtual const int GetReconnectOnSendError();

	// JuiceExtension.cpp:347
	virtual const int GetReconnectOnReceiveTimeOut();

	// JuiceExtension.cpp:357
	virtual const int GetReconnectRetries();

	// JuiceExtension.h:289
	IExtension * ActiveExtension();

protected:
	// JuiceExtension.cpp:39
	void IExtension();

	// JuiceExtension.cpp:376
	virtual void ~IExtension();

}

// JuiceDefines.h:17
namespace Juice {
	// Declaration
	struct IExtension {
	public:
		// JuiceExtension.h:96
		virtual const char * GetBuildDate();

		// JuiceExtension.h:108
		virtual const char * GetBackupServerIP();

		// JuiceExtension.h:112
		virtual const int GetBackupServerPort();

		// JuiceExtension.h:117
		virtual const int NetworkInitRetries();

		// JuiceExtension.h:133
		virtual const int WaitBetweenInitialConnectionRretries();

		// JuiceExtension.h:137
		virtual const int WaitBetweenNetworkInitRetries();

		// JuiceExtension.h:144
		virtual const char * GetScreenName();

		// JuiceExtension.h:147
		virtual const char * GetPopupName();

		// JuiceExtension.h:150
		virtual const char * GetPopupCheck();

		// JuiceExtension.h:153
		virtual const char * GetCursorPos();

		// JuiceExtension.h:156
		virtual float GetGameTime();

		// JuiceExtension.h:159
		virtual const int IsOkToConnect();

		// JuiceExtension.h:162
		virtual void ResetGamePad();

		// JuiceExtension.h:166
		virtual void CrashEvent();

		// JuiceExtension.h:178
		virtual const int HangTimeoutLength();

		// JuiceExtension.h:187
		virtual void GamePadToJuicePad(void *, Juice::eJuicePadNum);

		// JuiceExtension.h:190
		virtual void JuicePadToGamePad(void *, Juice::eJuicePadNum);

		// JuiceExtension.h:200
		virtual int NumberOfRepeatedReplayEntries(int);

		// JuiceExtension.h:209
		virtual int GetJuiceUpdateProcessor();

		// JuiceExtension.h:218
		virtual const int JuiceUseSimPrint();

		// JuiceExtension.h:231
		virtual int JuiceScreenshotIntValue();

		// JuiceExtension.h:234
		virtual float JuiceScreenshotFloatResult();

		// JuiceExtension.h:246
		virtual float GetButtonBaseValue(int);

		// JuiceExtension.h:250
		virtual float GetButtonValueRange();

		// JuiceExtension.h:253
		virtual float GetButtonReleaseThreshold(int);

		// JuiceExtension.h:256
		virtual void HandleFeAttributeChange(char *, char *);

		// JuiceExtension.h:259
		virtual void HandleFeContextChange(char *, char *);

		// JuiceExtension.h:262
		virtual void FeNavInit();

		// JuiceExtension.h:264
		virtual void HandleServerDisconnectingConsole(Juice::ConnectionRejection, char *);

		// JuiceExtension.h:289
		Juice::IExtension * ActiveExtension();

	private:
		// JuiceExtension.h:296
		extern Juice::IExtension * sCurrentExtension;

	}

}

// JuiceExtension.h:296
extern Juice::IExtension * sCurrentExtension;

