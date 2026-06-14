// JuiceLogging.h:23
struct Juice::LoggingManager : public Juice::Processor {
	// JuiceLogging.cpp:23
	extern Juice::LoggingManager *(*)() Activate;

public:
	void LoggingManager(const LoggingManager &);

	// JuiceLogging.cpp:39
	Juice::LoggingManager * InstanceFunction();

	// JuiceLogging.cpp:50
	virtual void ProcessMessage(int);

	// JuiceLogging.cpp:80
	virtual void Initialize(Juice::cJuiceCom *);

	// JuiceLogging.cpp:144
	virtual void Update();

	// JuiceLogging.cpp:87
	virtual void Disable();

	// JuiceLogging.cpp:106
	virtual void SendLogDebugOutput(const char *);

private:
	// JuiceLogging.cpp:95
	void SendLogCommand(Juice::Command);

	// JuiceLogging.cpp:131
	void SendLogOutput(const char *, Juice::Command);

	// JuiceLogging.cpp:27
	void LoggingManager();

	// JuiceLogging.h:37
	virtual void ~LoggingManager();

}

