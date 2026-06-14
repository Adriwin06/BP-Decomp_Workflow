// JuiceDefines.h:17
namespace Juice {
	// JuiceScripting.h:17
	namespace Scripting {
	}

}

// JuiceScripting.h:139
extern const int JTL_INT;

// JuiceScripting.h:140
extern const int JTL_FLOAT = 1;

// JuiceScripting.h:141
extern const int JTL_STRING = 2;

// JuiceDefines.h:17
namespace Juice {
	// JuiceScripting.h:17
	namespace Scripting {
		struct IMouseAndKeyboard;

		struct ICommands;

		struct VarArgs;

		struct IController;

		struct Commands;

		struct Controller2;

		struct Controller;

	}

}

// JuiceScripting.h:187
struct Juice::Scripting::IMouseAndKeyboard : public Juice::Scripting::ICommands {
public:
	void IMouseAndKeyboard(const IMouseAndKeyboard &);

protected:
	// JuiceScripting.cpp:368
	void IMouseAndKeyboard();

	// JuiceScripting.cpp:372
	virtual void ~IMouseAndKeyboard();

	// JuiceScripting.cpp:376
	virtual void AutoRegister() const;

	// JuiceScripting.h:204
	virtual const int MouseLeftClick(Juice::Scripting::VarArgs &);

	// JuiceScripting.h:205
	virtual const int MouseRightClick(Juice::Scripting::VarArgs &);

	// JuiceScripting.h:206
	virtual const int MouseMiddleClick(Juice::Scripting::VarArgs &);

	// JuiceScripting.h:207
	virtual const int MouseScrollUp(Juice::Scripting::VarArgs &);

	// JuiceScripting.h:208
	virtual const int MouseScrollDown(Juice::Scripting::VarArgs &);

	// JuiceScripting.h:209
	virtual const int MouseMove(Juice::Scripting::VarArgs &);

	// JuiceScripting.h:210
	virtual const int KeyboardPress(Juice::Scripting::VarArgs &);

}

// JuiceScripting.h:147
struct Juice::Scripting::IController : public Juice::Scripting::ICommands {
public:
	void IController(const IController &);

protected:
	// JuiceScripting.cpp:272
	void IController();

	// JuiceScripting.cpp:276
	virtual void ~IController();

	// JuiceScripting.cpp:280
	virtual void AutoRegister() const;

	// JuiceScripting.h:164
	virtual const int DpadDown(Juice::Scripting::VarArgs &);

	// JuiceScripting.h:165
	virtual const int DpadUp(Juice::Scripting::VarArgs &);

	// JuiceScripting.h:166
	virtual const int DpadLeft(Juice::Scripting::VarArgs &);

	// JuiceScripting.h:167
	virtual const int DpadRight(Juice::Scripting::VarArgs &);

	// JuiceScripting.h:168
	virtual const int LeftAnalog(Juice::Scripting::VarArgs &);

	// JuiceScripting.h:169
	virtual const int RightAnalog(Juice::Scripting::VarArgs &);

	// JuiceScripting.h:170
	virtual const int Button1(Juice::Scripting::VarArgs &);

	// JuiceScripting.h:171
	virtual const int Button2(Juice::Scripting::VarArgs &);

	// JuiceScripting.h:172
	virtual const int Button3(Juice::Scripting::VarArgs &);

	// JuiceScripting.h:173
	virtual const int Button4(Juice::Scripting::VarArgs &);

	// JuiceScripting.h:174
	virtual const int ButtonL1(Juice::Scripting::VarArgs &);

	// JuiceScripting.h:175
	virtual const int ButtonL2(Juice::Scripting::VarArgs &);

	// JuiceScripting.h:176
	virtual const int ButtonL3(Juice::Scripting::VarArgs &);

	// JuiceScripting.h:177
	virtual const int ButtonR1(Juice::Scripting::VarArgs &);

	// JuiceScripting.h:178
	virtual const int ButtonR2(Juice::Scripting::VarArgs &);

	// JuiceScripting.h:179
	virtual const int ButtonR3(Juice::Scripting::VarArgs &);

	// JuiceScripting.h:180
	virtual const int ButtonStart(Juice::Scripting::VarArgs &);

	// JuiceScripting.h:181
	virtual const int ButtonSelect(Juice::Scripting::VarArgs &);

	// JuiceScripting.h:182
	virtual const int JuiceButtonPress(Juice::Scripting::VarArgs &);

}

// JuiceScripting.h:55
struct Juice::Scripting::ICommands {
	int (*)(...) * _vptr.ICommands;

private:
	// JuiceScripting.h:139
	extern const int JTL_INT;

	// JuiceScripting.h:140
	extern const int JTL_FLOAT = 1;

	// JuiceScripting.h:141
	extern const int JTL_STRING = 2;

public:
	void ICommands(const ICommands &);

	// JuiceScripting.cpp:131
	void InvokeCommand();

	// JuiceScripting.cpp:194
	void SendAsyncEvent(const char *, const char *);

	// JuiceScripting.cpp:211
	void RegisterAsyncEvent(const char *, const char *);

	// JuiceScripting.cpp:229
	void UnregisterAsyncEvent(const char *);

protected:
	// JuiceScripting.cpp:119
	void ICommands();

	// JuiceScripting.cpp:123
	virtual void ~ICommands();

	// JuiceScripting.cpp:127
	virtual void AutoRegister() const;

	// JuiceScripting.h:90
	virtual const char * GetNamespaceName() const;

private:
	// JuiceScripting.cpp:244
	void SendMethod(int, const ICommands *, const char *, int, const void *, const char *);

}

// JuiceScripting.h:112
struct {
	// JuiceScripting.h:112
	const int (*)(Juice::Scripting::VarArgs &) __pfn;

	// JuiceScripting.h:112
	int __delta;

}

// JuiceScripting.h:113
struct {
	// JuiceScripting.h:113
	const float (*)(Juice::Scripting::VarArgs &) __pfn;

	// JuiceScripting.h:113
	int __delta;

}

// JuiceScripting.h:114
struct {
	// JuiceScripting.h:114
	const char *(*)(Juice::Scripting::VarArgs &) __pfn;

	// JuiceScripting.h:114
	int __delta;

}

// JuiceScripting.h:19
struct Juice::Scripting::VarArgs {
	int (*)(...) * _vptr.VarArgs;

private:
	// JuiceScripting.h:49
	int mNextType;

	// JuiceScripting.h:50
	int mNumberOfArgs;

public:
	void VarArgs(const VarArgs &);

	// JuiceScripting.cpp:24
	const int GetNumberOfRemainingArgs() const;

	// JuiceScripting.cpp:29
	const int GetInt(int &);

	// JuiceScripting.cpp:43
	const int GetFloat(float &);

	// JuiceScripting.cpp:66
	const int GetString(char *, unsigned int);

private:
	// JuiceScripting.cpp:17
	void VarArgs();

	// JuiceScripting.cpp:91
	const int ConsumeString();

	// JuiceScripting.cpp:106
	virtual void ~VarArgs();

}

// JuiceScripting.h:131
extern void Register<BrnJuice::JuiceGuiScriptInterface>(const ICommands *  obj, const char *(*)(Juice::Scripting::VarArgs &)  method, const char *  methodName, const char *  argList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceScripting.h:133
		const char *(*)(Juice::Scripting::VarArgs &) m;

	}
}

// JuiceScripting.h:133
struct {
	// JuiceScripting.h:133
	const char *(*)(Juice::Scripting::VarArgs &) __pfn;

	// JuiceScripting.h:133
	int __delta;

}

// JuiceScripting.h:117
extern void Register<BrnJuice::JuiceGuiScriptInterface>(const ICommands *  obj, const int (*)(Juice::Scripting::VarArgs &)  method, const char *  methodName, const char *  argList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceScripting.h:119
		const int (*)(Juice::Scripting::VarArgs &) m;

	}
}

// JuiceScripting.h:119
struct {
	// JuiceScripting.h:119
	const int (*)(Juice::Scripting::VarArgs &) __pfn;

	// JuiceScripting.h:119
	int __delta;

}

// JuiceScripting.h:117
extern void Register<BrnJuice::JuiceWorldScriptInterface>(const ICommands *  obj, const int (*)(Juice::Scripting::VarArgs &)  method, const char *  methodName, const char *  argList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceScripting.h:119
		const int (*)(Juice::Scripting::VarArgs &) m;

	}
}

// JuiceScripting.h:117
extern void Register<BrnJuice::JuiceNetworkScriptInterface>(const ICommands *  obj, const int (*)(Juice::Scripting::VarArgs &)  method, const char *  methodName, const char *  argList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceScripting.h:119
		const int (*)(Juice::Scripting::VarArgs &) m;

	}
}

// JuiceScripting.h:117
extern void Register<BrnJuice::JuiceGameStateScriptInterface>(const ICommands *  obj, const int (*)(Juice::Scripting::VarArgs &)  method, const char *  methodName, const char *  argList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceScripting.h:119
		const int (*)(Juice::Scripting::VarArgs &) m;

	}
}

// JuiceScripting.h:131
extern void Register<BrnJuice::JuiceGameStateScriptInterface>(const ICommands *  obj, const char *(*)(Juice::Scripting::VarArgs &)  method, const char *  methodName, const char *  argList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceScripting.h:133
		const char *(*)(Juice::Scripting::VarArgs &) m;

	}
}

// JuiceScripting.h:117
extern void Register<Juice::Scripting::Controller>(const ICommands *  obj, const int (*)(Juice::Scripting::VarArgs &)  method, const char *  methodName, const char *  argList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceScripting.h:119
		const int (*)(Juice::Scripting::VarArgs &) m;

	}
}

// JuiceScripting.h:117
extern void Register<Juice::Scripting::IMouseAndKeyboard>(const ICommands *  obj, const int (*)(Juice::Scripting::VarArgs &)  method, const char *  methodName, const char *  argList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceScripting.h:119
		const int (*)(Juice::Scripting::VarArgs &) m;

	}
}

// JuiceScripting.h:131
extern void Register<Juice::Scripting::Commands>(const ICommands *  obj, const char *(*)(Juice::Scripting::VarArgs &)  method, const char *  methodName, const char *  argList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceScripting.h:133
		const char *(*)(Juice::Scripting::VarArgs &) m;

	}
}

// JuiceScripting.h:117
extern void Register<Juice::Scripting::Commands>(const ICommands *  obj, const int (*)(Juice::Scripting::VarArgs &)  method, const char *  methodName, const char *  argList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceScripting.h:119
		const int (*)(Juice::Scripting::VarArgs &) m;

	}
}

// JuiceScripting.h:117
extern void Register<Juice::Scripting::Controller2>(const ICommands *  obj, const int (*)(Juice::Scripting::VarArgs &)  method, const char *  methodName, const char *  argList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceScripting.h:119
		const int (*)(Juice::Scripting::VarArgs &) m;

	}
}

// JuiceScripting.h:117
extern void Register<Juice::Scripting::IController>(const ICommands *  obj, const int (*)(Juice::Scripting::VarArgs &)  method, const char *  methodName, const char *  argList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// JuiceScripting.h:119
		const int (*)(Juice::Scripting::VarArgs &) m;

	}
}

// JuiceDefines.h:17
namespace Juice {
	// JuiceScripting.h:17
	namespace Scripting {
		// Declaration
		struct ICommands {
		protected:
			// JuiceScripting.h:117
			void Register<CgsDev::JuiceScripting>(const Juice::Scripting::ICommands *, const int (*)(Juice::Scripting::VarArgs &), const char *, const char *);

		private:
			// JuiceScripting.h:139
			extern const int JTL_INT;

			// JuiceScripting.h:140
			extern const int JTL_FLOAT = 1;

			// JuiceScripting.h:141
			extern const int JTL_STRING = 2;

		}

		struct VarArgs;

	}

}

