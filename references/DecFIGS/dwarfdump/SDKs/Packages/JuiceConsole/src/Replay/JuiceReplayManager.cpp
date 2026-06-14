// JuiceReplayManager.cpp:39
struct Juice::ReplayEntry {
	// JuiceReplayManager.cpp:40
	int ChannelNumber;

	// JuiceReplayManager.cpp:41
	int DataSize;

	// JuiceReplayManager.cpp:42
	unsigned int Data;

}

// JuiceReplayManager.cpp:46
struct Juice::ReplaySettings {
	// JuiceReplayManager.cpp:47
	bool IsPlayingback;

	// JuiceReplayManager.cpp:48
	bool IsCapturing;

	// JuiceReplayManager.cpp:50
	bool ModeNormal;

	// JuiceReplayManager.cpp:51
	bool ModeDebug;

	// JuiceReplayManager.cpp:52
	bool ModeIgnoreError;

	// JuiceReplayManager.cpp:54
	int RecordMask;

	// JuiceReplayManager.cpp:55
	int VerifyMask;

	// JuiceReplayManager.cpp:56
	int OverWriteMask;

	// JuiceReplayManager.cpp:58
	int FileSize;

	// JuiceReplayManager.cpp:59
	int CurrentPos;

}

