// JuicePadConfigManager.h:23
struct Juice::PadConfigManager : public Juice::Processor {
	// JuicePadConfigManager.cpp:20
	extern Juice::PadConfigManager *(*)() Activate;

private:
	// JuicePadConfigManager.h:39
	bool mAutoScriptEnabled;

	// JuicePadConfigManager.h:40
	bool mFeNavRecordEnabled;

public:
	void PadConfigManager(const PadConfigManager &);

	// JuicePadConfigManager.cpp:33
	Juice::PadConfigManager * InstanceFunction();

	// JuicePadConfigManager.cpp:39
	virtual void ProcessMessage(int);

	// JuicePadConfigManager.cpp:191
	virtual void Initialize(Juice::cJuiceCom *);

	// JuicePadConfigManager.cpp:210
	virtual void Update();

	// JuicePadConfigManager.cpp:214
	virtual void Disable();

	// JuicePadConfigManager.cpp:130
	virtual void SendAutoScriptCommand(int);

	// JuicePadConfigManager.cpp:156
	virtual void SendFeNavButtons(tJuicePad *);

	// JuicePadConfigManager.cpp:186
	virtual bool IsFeNavRecording();

	// JuicePadConfigManager.cpp:205
	void ActivateAutoScript(bool);

	// JuicePadConfigManager.cpp:200
	void ActivateFeRecord(bool);

private:
	// JuicePadConfigManager.cpp:22
	void PadConfigManager();

	// JuicePadConfigManager.h:42
	virtual void ~PadConfigManager();

}

