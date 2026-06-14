// CgsStrStream.h:39
namespace CgsDev {
	// CgsStrStream.h:312
	namespace Log {
		// CgsCore.cpp:31
		extern CgsDev::StrStreamBase * gpDebugPrint;

		// CgsCore.cpp:32
		extern CgsDev::StrStreamBase *const gpDefaultDebugPrint;

		// CgsCore.cpp:30
		LogOutput gDebugPrint;

	}

	// CgsMessage.h:38
	namespace Message {
		// CgsCore.cpp:39
		extern FilterFlag gxMessageFilterFlags;

	}

}

// CgsCore.h:98
namespace CgsCore {
	// CgsCore.cpp:57
	extern char[8192] gacDebugPrintStringBuffer;

}

