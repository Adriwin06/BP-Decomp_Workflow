// CgsFsmDebugComponent.h:178
extern const int32_t KI_EVENT_COUNT;

// CgsFsmDebugComponent.h:145
struct CgsFsm::FsmDebugComponent : public CgsDev::DebugComponent {
private:
	// CgsFsmDebugComponent.h:171
	char[13] macStateName;

	// CgsFsmDebugComponent.h:172
	CgsFsm::DebugFsm mDebugFsm;

	// CgsFsmDebugComponent.h:173
	CgsDev::DebugUI::MenuItemText mStateText;

	// CgsFsmDebugComponent.h:174
	StringList[4] maEventNames;

	// CgsFsmDebugComponent.h:175
	int32_t miCurrentEventIndex;

	// CgsFsmDebugComponent.h:176
	bool mbWin;

	// CgsFsmDebugComponent.cpp:35
	extern const int32_t KI_EVENT_COUNT = 4;

public:
	// CgsFsmDebugComponent.cpp:219
	void Construct();

	// CgsFsmDebugComponent.cpp:250
	bool Prepare(CgsResource::LuaCodeResource *, CgsMemory::HeapMalloc *);

	// CgsFsmDebugComponent.cpp:263
	void Destruct();

protected:
	// CgsFsmDebugComponent.cpp:276
	virtual const char * GetName() const;

	// CgsFsmDebugComponent.cpp:289
	virtual void OnActivate();

private:
	// CgsFsmDebugComponent.cpp:316
	void SendEvent();

	// CgsFsmDebugComponent.cpp:344
	void SendEventCallback(void *);

}

// CgsFsmDebugComponent.h:116
struct CgsFsm::DebugFsm : public ScriptedFsm {
private:
	// CgsFsmDebugComponent.h:129
	CgsFsm::DebugStateIntro mIntro;

	// CgsFsmDebugComponent.h:130
	CgsFsm::DebugStateGame mGame;

	// CgsFsmDebugComponent.h:131
	CgsFsm::DebugStateResults mResults;

	// CgsFsmDebugComponent.h:133
	ScriptedState *[3] mapStates;

public:
	// CgsFsmDebugComponent.cpp:194
	virtual ScriptedState * GetState(int32_t);

	// CgsFsmDebugComponent.cpp:207
	virtual int32_t GetStateCount();

	// CgsFsmDebugComponent.cpp:172
	void Construct();

}

// CgsFsmDebugComponent.h:95
struct CgsFsm::DebugStateResults : public ScriptedState {
private:
	// CgsFsmDebugComponent.cpp:128
	virtual void OnEnter();

	// CgsFsmDebugComponent.cpp:146
	virtual void OnLeave();

	// CgsFsmDebugComponent.cpp:159
	virtual void Update();

}

// CgsFsmDebugComponent.h:74
struct CgsFsm::DebugStateGame : public ScriptedState {
private:
	// CgsFsmDebugComponent.cpp:90
	virtual void OnEnter();

	// CgsFsmDebugComponent.cpp:102
	virtual void OnLeave();

	// CgsFsmDebugComponent.cpp:115
	virtual void Update();

}

// CgsFsmDebugComponent.h:53
struct CgsFsm::DebugStateIntro : public ScriptedState {
private:
	// CgsFsmDebugComponent.cpp:51
	virtual void OnEnter();

	// CgsFsmDebugComponent.cpp:64
	virtual void OnLeave();

	// CgsFsmDebugComponent.cpp:77
	virtual void Update();

}

