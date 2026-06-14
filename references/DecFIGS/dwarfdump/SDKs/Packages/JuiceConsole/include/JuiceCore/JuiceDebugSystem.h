// JuiceDebugSystem.h:151
struct Juice::DebugSystem {
public:
	// JuiceDebugSystem.h:152
	void WarningOnMsg(int, const char *, const char *, int, const char *);

	// JuiceDebugSystem.h:153
	void WinPrint(const char *, ...);

	// JuiceDebugSystem.h:154
	void DebugSimPrint(const char *, ...);

	// JuiceDebugSystem.h:155
	void Break();

}

