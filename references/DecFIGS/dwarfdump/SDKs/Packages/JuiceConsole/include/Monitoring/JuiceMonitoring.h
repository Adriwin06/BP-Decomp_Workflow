// JuiceMonitoring.h:25
struct Juice::MonitorManager : public Juice::Processor {
	// JuiceMonitoring.cpp:36
	extern Juice::MonitorManager *(*)() Activate;

private:
	// JuiceMonitoring.h:47
	extern const int kMaxVariables = 50;

	// JuiceMonitoring.h:48
	int mNextVariable;

	// JuiceMonitoring.h:49
	Juice::MonitoredVariable *[50] mMonitoredVariables;

public:
	void MonitorManager(const MonitorManager &);

	// JuiceMonitoring.cpp:39
	Juice::MonitorManager * InstanceFunction();

	// JuiceMonitoring.cpp:45
	void Register(Juice::MonitoredVariable *, const char *, int, int, bool);

	// JuiceMonitoring.cpp:65
	int GetInt();

	// JuiceMonitoring.cpp:70
	float GetFloat();

	// JuiceMonitoring.cpp:75
	const char * GetString();

	// JuiceMonitoring.cpp:80
	void SendInt(Juice::MonitoredVariable *, int);

	// JuiceMonitoring.cpp:92
	void SendFloat(Juice::MonitoredVariable *, float);

	// JuiceMonitoring.cpp:104
	void SendString(Juice::MonitoredVariable *, const char *);

	// JuiceMonitoring.cpp:116
	virtual void ProcessMessage(int);

	// JuiceMonitoring.cpp:142
	virtual void Update();

	// JuiceMonitoring.cpp:147
	virtual void Disable();

private:
	// JuiceMonitoring.cpp:150
	void MonitorManager();

	// JuiceMonitoring.h:51
	virtual void ~MonitorManager();

}

// JuiceMonitoring.h:57
struct Juice::MonitoredVariable {
	int (*)(...) * _vptr.MonitoredVariable;

protected:
	// JuiceMonitoring.h:70
	void * mRawAddress;

	// JuiceMonitoring.h:71
	bool mEnabled;

private:
	// JuiceMonitoring.h:74
	int mFrame;

public:
	void MonitoredVariable(const MonitoredVariable &);

	// JuiceMonitoring.cpp:163
	void MonitoredVariable(void *, int);

	// JuiceMonitoring.h:60
	virtual void ~MonitoredVariable();

protected:
	// JuiceMonitoring.h:65
	virtual void RefreshValue();

	// JuiceMonitoring.h:68
	virtual void ModifyValue();

private:
	// JuiceMonitoring.cpp:170
	void ModifyFrame();

}

// JuiceMonitoring.h:47
extern const int kMaxVariables = 50;

// JuiceMonitoring.h:179
extern const int kMaxCharacters = 512;

