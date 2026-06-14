// JuiceDefines.h:17
namespace Juice {
}

// JuiceDefines.h:17
namespace Juice {
	// JuiceDefines.h:18
	enum JuiceFileStatus {
		UNKNOWN = -4,
		INVALID_ARG = -3,
		INVALID_FILE_HANDLE = -2,
		REMOTE_EOF = -1,
		OPENED = 0,
	}

	// JuiceDefines.h:33
	enum JuiceFileMode {
		READ = 0,
		WRITE = 1,
		OVERWRITE = 2,
		UNKNOWN_MODE = 3,
	}

	// JuiceDefines.h:41
	enum JuiceFileType {
		DATA = 0,
		TEXT = 1,
		INVALID = 2,
	}

	struct tJuiceRemoteFileInfo;

	struct JuiceHook;

	struct cJuiceCom;

	struct JuiceMutex;

}

// JuiceDefines.h:17
namespace Juice {
	struct INetwork;

}

// JuiceDefines.h:17
namespace Juice {
	// JuiceDefines.h:18
	enum JuiceFileStatus {
		UNKNOWN = -4,
		INVALID_ARG = -3,
		INVALID_FILE_HANDLE = -2,
		REMOTE_EOF = -1,
		OPENED = 0,
	}

	// JuiceDefines.h:33
	enum JuiceFileMode {
		READ = 0,
		WRITE = 1,
		OVERWRITE = 2,
		UNKNOWN_MODE = 3,
	}

	// JuiceDefines.h:41
	enum JuiceFileType {
		DATA = 0,
		TEXT = 1,
		INVALID = 2,
	}

	// JuiceDefines.h:56
	enum ConnectionRejection {
		UNSPECIFED = 0,
		PROTOCOL_MISMATCH = 1,
		NOT_IN_DB = 2,
		UNREGISTERED_CONSOLE_NOT_ALLOWED = 3,
		FAILED_RECONNECT = 4,
	}

	// JuiceDefines.h:69
	enum ReplayChannel {
		REPLAY_CHANNEL_NONE = 0,
		REPLAY_CHANNEL_FILE_HEADER = 1,
		REPLAY_CHANNEL_CONFIG = 2,
		REPLAY_CHANNEL_JOYEVENTS = 3,
		REPLAY_CHANNEL_TIMESTEP = 4,
		REPLAY_CHANNEL_CHECKSUM = 5,
		REPLAY_CHANNEL_LOOP_COUNTER = 6,
		REPLAY_CHANNEL_QUEUEDFILE_STATUS = 7,
		REPLAY_CHANNEL_MOVIE_PLAYER_STATUS = 8,
		REPLAY_CHANNEL_MEMORY_CARD = 9,
		REPLAY_CHANNEL_TRACK_STREAMER = 10,
		REPLAY_CHANNEL_RANDOM = 11,
		REPLAY_CHANNEL_REPLAY_SNAPSHOT_INFO = 12,
		REPLAY_CHANNEL_REPLAY_SNAPSHOT_DATA = 13,
		REPLAY_CHANNEL_INPUT_TIMING = 14,
		REPLAY_CHANNEL_ONLINE_DATA = 15,
		REPLAY_NUM_CHANNELS = 16,
	}

	// JuiceDefines.h:90
	enum eJuiceButtonNames {
		JUICEPAD_DPADUP = 1,
		JUICEPAD_DPADDOWN = 2,
		JUICEPAD_DPADLEFT = 3,
		JUICEPAD_DPADRIGHT = 4,
		JUICEPAD_BUTTON1 = 5,
		JUICEPAD_BUTTON2 = 6,
		JUICEPAD_BUTTON3 = 7,
		JUICEPAD_BUTTON4 = 8,
		JUICEPAD_BUTTONL1 = 9,
		JUICEPAD_BUTTONL2 = 10,
		JUICEPAD_BUTTONL3 = 11,
		JUICEPAD_BUTTONR1 = 12,
		JUICEPAD_BUTTONR2 = 13,
		JUICEPAD_BUTTONR3 = 14,
		JUICEPAD_BUTTONSTART = 15,
		JUICEPAD_BUTTONSELECT = 16,
		JUICEPAD_LEFTANALOG_UPDOWN = 17,
		JUICEPAD_LEFTANALOG_LEFTRIGHT = 18,
		JUICEPAD_RIGHTANALOG_UPDOWN = 19,
		JUICEPAD_RIGHTANALOG_LEFTRIGHT = 20,
		LAST_BUTTON = 21,
	}

	// JuiceDefines.h:143
	enum eJuicePadNum {
		JUICEPAD1 = 0,
		JUICEPAD2 = 1,
		JUICEPAD3 = 2,
		JUICEPAD4 = 3,
		LAST_PAD = 4,
	}

	// JuiceDefines.h:155
	enum JuiceDataType {
		STRING = 115,
		INT = 105,
		FLOAT = 102,
	}

	// JuiceDefines.h:165
	enum GameLevel {
		LEVEL1 = 1,
		LEVEL2 = 2,
		LEVEL3 = 3,
		LEVEL4 = 4,
		LEVEL5 = 5,
		LEVEL6 = 6,
		LEVEL7 = 7,
		LEVEL8 = 8,
		LEVEL9 = 9,
		GAME_CYCLE_NUM_CYCLES = 10,
	}

	// JuiceDefines.h:185
	enum JuiceLanguage {
		UNKNOWN_LANG = 0,
		ENGLISH = 1,
		BRAZ_PORTUGUESE = 2,
		CHINESE_SIMPLIFIED = 3,
		CHINESE_TRADITIONAL = 4,
		CZECH = 5,
		DANISH = 6,
		DUTCH = 7,
		FINNISH = 8,
		FRENCH = 9,
		GERMAN = 10,
		GREEK = 11,
		HEBREW = 12,
		HUNGARIAN = 13,
		ITALIAN = 14,
		JAPANESE = 15,
		KOREAN = 16,
		NORWEGIAN = 17,
		POLISH = 18,
		PORTUGUESE = 19,
		RUSSIAN = 20,
		SPANISH = 21,
		SWEDISH = 22,
		THAI = 23,
		MEXICAN_SPANISH = 24,
		NUM_LANGUAGES = 25,
	}

	// JuiceDefines.h:218
	enum JuiceOnlineGameType {
		DEFAULT = 0,
		RANKED = 1,
		UNRANKED = 2,
		NUM_GAME_TYPES = 3,
	}

	struct JuiceMgrAccess;

	struct PadConfigManager;

	struct RemoteFileManager;

	struct MonitorManager;

	struct LoggingManager;

	struct JuiceScreenshotMgr;

	struct SystemManager;

	struct CoverageManager;

	struct RemoteProcedureManager;

	struct JuiceOnlinePlayMgr;

	struct ErrorManager;

	struct FEManager;

	struct MemMetricsMgr;

	struct JobManager;

	struct tJuiceRemoteFileInfo;

	struct tGamePad;

	struct tJuicePad;

	struct JuicePad;

	struct INetwork;

	struct JuiceMutex;

	struct DebugSystem;

	struct SchedulerTraceRecord;

	struct SchedulerTrace;

	struct ThreadInfoNode;

	struct TraceReader;

	struct ThreadTraceRecord;

	struct ThreadTrace;

	struct JobExecInfo;

	struct JobInfo;

	struct JuiceMonkey;

	struct JuiceRandom;

	struct MutexSignature;

	struct ReplayEntry;

	struct ReplaySettings;

	struct Processor;

	struct cJuiceCom;

	struct JuiceMsgWriter;

	struct JuiceComStreamReader;

	struct MonitoredVariable;

	struct JuiceMsgReader;

	struct IExtension;

	struct CoveragePoint;

	struct JuiceHook;

}

// JuiceDefines.h:17
namespace Juice {
	// JuiceDefines.h:18
	enum JuiceFileStatus {
		UNKNOWN = -4,
		INVALID_ARG = -3,
		INVALID_FILE_HANDLE = -2,
		REMOTE_EOF = -1,
		OPENED = 0,
	}

	// JuiceDefines.h:33
	enum JuiceFileMode {
		READ = 0,
		WRITE = 1,
		OVERWRITE = 2,
		UNKNOWN_MODE = 3,
	}

	// JuiceDefines.h:41
	enum JuiceFileType {
		DATA = 0,
		TEXT = 1,
		INVALID = 2,
	}

	// JuiceDefines.h:56
	enum ConnectionRejection {
		UNSPECIFED = 0,
		PROTOCOL_MISMATCH = 1,
		NOT_IN_DB = 2,
		UNREGISTERED_CONSOLE_NOT_ALLOWED = 3,
		FAILED_RECONNECT = 4,
	}

	// JuiceDefines.h:143
	enum eJuicePadNum {
		JUICEPAD1 = 0,
		JUICEPAD2 = 1,
		JUICEPAD3 = 2,
		JUICEPAD4 = 3,
		LAST_PAD = 4,
	}

	struct tJuiceRemoteFileInfo;

	struct JuiceMutex;

	struct tJuicePad;

	struct JuiceDirtyNet;

	struct JuiceHook;

	struct cJuiceCom;

}

