// CgsJuiceExtension.h:50
struct CgsDev::JuiceExtension : public Juice::IExtension {
private:
	// CgsJuiceExtension.h:149
	const JuiceConstructParams * mpConstructParams;

	// CgsJuiceExtension.h:150
	bool mbEnableScriptInput;

	// CgsJuiceExtension.h:151
	bool mbIsReadyToReset;

public:
	void JuiceExtension(const JuiceExtension &);

	void JuiceExtension();

	// CgsJuiceExtension.cpp:73
	void Construct(const JuiceConstructParams *);

	// CgsJuiceExtension.h:167
	void EnableScriptInput();

	// CgsJuiceExtension.h:173
	void DisableScriptInput();

	// CgsJuiceExtension.h:179
	bool IsScriptInputEnabled() const;

	// CgsJuiceExtension.h:185
	bool IsReadyToReset() const;

	// CgsJuiceExtension.cpp:99
	virtual const char * GetTitleName();

	// CgsJuiceExtension.cpp:113
	virtual const char * GetBuildName();

	// CgsJuiceExtension.cpp:127
	virtual const char * GetChangeList();

	// CgsJuiceExtension.cpp:141
	virtual const char * GetConsoleTarget();

	// CgsJuiceExtension.cpp:217
	virtual const char * GetXboxExeName();

	// CgsJuiceExtension.cpp:271
	virtual const char * GetServerIP();

	// CgsJuiceExtension.cpp:357
	virtual const char * GetConsoleName();

	// CgsJuiceExtension.cpp:342
	virtual const int GetServerPort();

	// CgsJuiceExtension.cpp:387
	virtual const int GetReadyToReset();

	// CgsJuiceExtension.cpp:402
	// Declaration
	virtual void FileSyncUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsJuiceExtension.cpp:404
		using namespace Message;

	}

	// CgsJuiceExtension.cpp:463
	virtual void GamePadToJuicePad(void *, tJuicePad *);

	// CgsJuiceExtension.cpp:550
	virtual void JuicePadToGamePad(tJuicePad *, void *);

	// CgsJuiceExtension.cpp:417
	// Declaration
	virtual const int HasFileLoaded(const void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsJuiceExtension.cpp:419
		using namespace Message;

	}

	// CgsJuiceExtension.cpp:425
	virtual void InstantiateScriptExt();

	// CgsJuiceExtension.cpp:160
	virtual const char * GetXboxPath();

	// CgsJuiceExtension.h:128
	virtual unsigned int PreferedLoadAddress();

	// CgsJuiceExtension.h:131
	virtual const unsigned int GetInitializationTimeOut();

	// CgsJuiceExtension.h:134
	virtual const unsigned int GetHeartBeatTimeOut();

	// CgsJuiceExtension.cpp:628
	virtual void PauseGame();

	// CgsJuiceExtension.cpp:642
	virtual void UnPauseGame();

	// CgsJuiceExtension.cpp:656
	virtual void ThreadYield(int);

	virtual void ~JuiceExtension();

}

// CgsJuiceExtension.h:50
void CgsDev::JuiceExtension::~JuiceExtension() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsJuiceExtension.h:50
void CgsDev::JuiceExtension::JuiceExtension() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

