// JuiceFeManager.h:22
struct Juice::FEManager : public Processor {
	// JuiceFEManager.cpp:20
	extern Juice::FEManager *(*)() Instance;

public:
	void FEManager(const FEManager &);

	// JuiceFEManager.cpp:28
	Juice::FEManager * InstanceFunction();

	// JuiceFEManager.cpp:101
	virtual void SendAttributeValue(char *, char *);

	// JuiceFEManager.cpp:112
	virtual void SetContext(char *, char *);

	// JuiceFEManager.cpp:43
	virtual void ProcessMessage(int);

	// JuiceFEManager.cpp:35
	virtual void Initialize(Juice::cJuiceCom *);

	// JuiceFEManager.cpp:122
	virtual void FeDefineContextCategory(char *, char *);

	// JuiceFEManager.cpp:130
	virtual void FeDefineContext(char *, char *);

	// JuiceFEManager.cpp:139
	virtual void Update();

	// JuiceFEManager.cpp:143
	virtual void Disable();

private:
	// JuiceFEManager.cpp:22
	void FEManager();

	// JuiceFeManager.h:36
	virtual void ~FEManager();

}

