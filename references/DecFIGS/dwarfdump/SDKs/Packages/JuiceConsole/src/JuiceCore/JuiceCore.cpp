// JuiceDefines.h:17
namespace Juice {
	// JuiceCore.cpp:2213
	void JuiceUpdateThreadFunc(uint64_t);

	// JuiceCore.cpp:2211
	extern bool volatile gKillUpdateThread;

}

// _built-in_
namespace :: {
	// JuiceCore.cpp:56
	const int PROC_SYSTEM;

	// JuiceCore.cpp:57
	const int PROC_MONITOR = 1;

	// JuiceCore.cpp:58
	const int PROC_LOG = 2;

	// JuiceCore.cpp:59
	const int PROC_COVG = 3;

	// JuiceCore.cpp:60
	const int PROC_REPLAY = 4;

	// JuiceCore.cpp:61
	const int PROC_RPC = 5;

	// JuiceCore.cpp:62
	const int PROC_ONLINE = 6;

	// JuiceCore.cpp:63
	const int PROC_ERROR = 7;

	// JuiceCore.cpp:64
	const int PROC_PAD = 8;

	// JuiceCore.cpp:65
	const int PROC_THREAD = 9;

	// JuiceCore.cpp:66
	const int PROC_REMOTE_FILE = 10;

	// JuiceCore.cpp:67
	const int PROC_SCREENSHOT = 11;

	// JuiceCore.cpp:68
	const int PROC_FE = 12;

	// JuiceCore.cpp:69
	const int PROC_MEM_METRICS = 13;

	// JuiceCore.cpp:70
	const int PROC_JOBMANAGER = 14;

	// JuiceCore.cpp:75
	JuiceHook * sExternalJuiceHook;

}

