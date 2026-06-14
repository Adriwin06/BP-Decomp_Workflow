// JuiceDefaultScripting.h:92
struct Juice::Scripting::Commands : public ICommands {
public:
	void Commands(const Commands &);

	// JuiceDefaultScripting.cpp:708
	void Commands();

	// JuiceDefaultScripting.cpp:717
	void RegisterRPCs();

	// JuiceDefaultScripting.cpp:712
	virtual const char * GetNamespaceName() const;

	// JuiceDefaultScripting.cpp:733
	const int SetLevel(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:743
	const char * GetScreenName(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:748
	const char * GetXboxDebugIP(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:753
	const int SetScriptButtonDelta(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:765
	const int StopScriptButtonDelta(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:771
	const int EnableAutomationCrashReboot(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:777
	const int DisableAutomationCrashReboot(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:783
	const int EnableAutomationDisconnectReboot(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:789
	const int DisableAutomationDisconnectReboot(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:795
	const int SetHeartBeatRate(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:806
	const int GetHeartBeatRate(Juice::Scripting::VarArgs &);

	virtual void ~Commands();

}

// JuiceDefaultScripting.h:55
struct Juice::Scripting::Controller2 : public IController {
public:
	void Controller2(const Controller2 &);

	// JuiceDefaultScripting.cpp:351
	void Controller2();

	// JuiceDefaultScripting.cpp:356
	void RegisterRPCs();

	// JuiceDefaultScripting.cpp:383
	virtual const char * GetNamespaceName() const;

	// JuiceDefaultScripting.cpp:388
	virtual const int DpadUp(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:401
	virtual const int DpadDown(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:414
	virtual const int DpadLeft(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:427
	virtual const int DpadRight(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:440
	virtual const int LeftAnalog(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:456
	virtual const int RightAnalog(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:469
	virtual const int Button1(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:482
	virtual const int Button2(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:495
	virtual const int Button3(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:508
	virtual const int Button4(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:521
	virtual const int ButtonL1(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:534
	virtual const int ButtonR1(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:547
	virtual const int ButtonL2(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:560
	virtual const int ButtonR2(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:573
	virtual const int ButtonL3(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:586
	virtual const int ButtonR3(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:599
	virtual const int ButtonStart(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:612
	virtual const int ButtonSelect(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:625
	virtual const int JuiceButtonPress(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:638
	virtual const int LeftAnalogUpDown(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:651
	virtual const int LeftAnalogLeftRight(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:664
	virtual const int RightAnalogUpDown(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:677
	virtual const int RightAnalogLeftRight(Juice::Scripting::VarArgs &);

	virtual void ~Controller2();

}

// JuiceDefaultScripting.h:21
struct Juice::Scripting::Controller : public IController {
public:
	void Controller(const Controller &);

	// JuiceDefaultScripting.cpp:27
	void Controller();

	// JuiceDefaultScripting.cpp:32
	void RegisterRPCs();

	// JuiceDefaultScripting.cpp:42
	virtual const char * GetNamespaceName() const;

	// JuiceDefaultScripting.cpp:47
	virtual const int DpadUp(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:57
	virtual const int DpadDown(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:67
	virtual const int DpadLeft(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:77
	virtual const int DpadRight(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:87
	virtual const int LeftAnalog(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:97
	virtual const int RightAnalog(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:107
	virtual const int Button1(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:117
	virtual const int Button2(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:127
	virtual const int Button3(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:137
	virtual const int Button4(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:147
	virtual const int ButtonL1(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:157
	virtual const int ButtonR1(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:167
	virtual const int ButtonL2(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:177
	virtual const int ButtonR2(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:187
	virtual const int ButtonL3(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:197
	virtual const int ButtonR3(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:207
	virtual const int ButtonStart(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:217
	virtual const int ButtonSelect(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:227
	virtual const int JuiceButtonPress(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:237
	virtual const int LeftAnalogUpDown(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:248
	virtual const int LeftAnalogLeftRight(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:259
	virtual const int RightAnalogUpDown(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:270
	virtual const int RightAnalogLeftRight(Juice::Scripting::VarArgs &);

	// JuiceDefaultScripting.cpp:281
	const int JuiceMonkey(Juice::Scripting::VarArgs &);

	virtual void ~Controller();

}

// JuiceDefaultScripting.h:21
void Juice::Scripting::Controller::~Controller() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceDefaultScripting.h:92
void Juice::Scripting::Commands::~Commands() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// JuiceDefaultScripting.h:55
void Juice::Scripting::Controller2::~Controller2() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

