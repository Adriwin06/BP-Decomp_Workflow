// JuiceRPCManager.h:22
struct Juice::RemoteProcedureManager : public Juice::Processor {
public:
	void RemoteProcedureManager(const RemoteProcedureManager &);

	// JuiceRPCManager.cpp:25
	Juice::RemoteProcedureManager * Instance();

	// JuiceRPCManager.cpp:31
	virtual void Initialize(Juice::cJuiceCom *);

	// JuiceRPCManager.cpp:45
	virtual void ProcessMessage(int);

	// JuiceRPCManager.cpp:60
	virtual void Update();

	// JuiceRPCManager.cpp:64
	virtual void Disable();

	// JuiceRPCManager.cpp:66
	virtual void RegisterAsyncEvent(char *, char *);

	// JuiceRPCManager.cpp:71
	virtual void UnregisterAsyncEvent(char *);

	// JuiceRPCManager.cpp:76
	virtual void TriggerAsyncEvent(char *, char *);

	// JuiceRPCManager.cpp:81
	virtual void SetScriptButtonDelta(int);

	// JuiceRPCManager.cpp:86
	virtual void StopScriptButtonDelta();

private:
	// JuiceRPCManager.cpp:19
	void RemoteProcedureManager();

	// JuiceRPCManager.h:38
	virtual void ~RemoteProcedureManager();

}

