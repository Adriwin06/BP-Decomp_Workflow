// JuiceOnlinePlayMgr.h:24
struct Juice::JuiceOnlinePlayMgr : public Juice::Processor {
	// JuiceOnlinePlayMgr.cpp:17
	extern Juice::JuiceOnlinePlayMgr *(*)() Activate;

private:
	// JuiceOnlinePlayMgr.h:43
	int CurrentGameIdentifier;

	// JuiceOnlinePlayMgr.h:44
	bool SessionStarted;

	// JuiceOnlinePlayMgr.h:45
	bool GameInProgress;

public:
	void JuiceOnlinePlayMgr(const JuiceOnlinePlayMgr &);

	// JuiceOnlinePlayMgr.cpp:26
	virtual void ProcessMessage(int);

	// JuiceOnlinePlayMgr.cpp:31
	virtual void Update();

	// JuiceOnlinePlayMgr.cpp:33
	virtual void Disable();

	// JuiceOnlinePlayMgr.cpp:54
	virtual void SessionBegin(char *, int, char *, char *, char *, char *);

	// JuiceOnlinePlayMgr.cpp:66
	virtual void SessionEnd();

	// JuiceOnlinePlayMgr.cpp:40
	virtual void GameBegin(int, Juice::JuiceOnlineGameType);

	// JuiceOnlinePlayMgr.cpp:48
	virtual void GameEnd();

	// JuiceOnlinePlayMgr.cpp:73
	virtual void SetGameStatus(char *);

private:
	// JuiceOnlinePlayMgr.cpp:19
	Juice::JuiceOnlinePlayMgr * InstanceFunction();

	// JuiceOnlinePlayMgr.cpp:35
	void JuiceOnlinePlayMgr();

	// JuiceOnlinePlayMgr.h:41
	virtual void ~JuiceOnlinePlayMgr();

}

