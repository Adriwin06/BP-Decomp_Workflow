// CgsInputDevice.h:22
namespace CgsInput {
	// CgsInputTypes.h:35
	enum EBindResult {
		E_BINDRESULTOK = 0,
		E_BINDRESULTPLAYERALREADYBOUND = 1,
		E_BINDRESULTPORTALREADYBOUND = 2,
		E_BINDRESULTINVALIDPLAYER = 3,
		E_BINDRESULTINVALIDPORT = 4,
	}

	// CgsInputTypes.h:45
	enum EUnbindResult {
		E_UNBINDRESULTOK = 0,
		E_UNBINDRESULTINVALIDPLAYER = 1,
		E_UNBINDRESULTPLAYERNOTBOUND = 2,
	}

}

// CgsInputTypes.h:24
namespace CgsInput {
	// CgsInputTypes.h:35
	enum EBindResult {
		E_BINDRESULTOK = 0,
		E_BINDRESULTPLAYERALREADYBOUND = 1,
		E_BINDRESULTPORTALREADYBOUND = 2,
		E_BINDRESULTINVALIDPLAYER = 3,
		E_BINDRESULTINVALIDPORT = 4,
	}

	// CgsInputTypes.h:45
	enum EUnbindResult {
		E_UNBINDRESULTOK = 0,
		E_UNBINDRESULTINVALIDPLAYER = 1,
		E_UNBINDRESULTPLAYERNOTBOUND = 2,
	}

	struct PortPS3;

	struct ManagerPS3;

	struct DevicePS3Pad;

	struct InputPlayer;

	struct InputPort;

	struct InputPads;

}

// CgsInputTypes.h:24
namespace CgsInput {
	// CgsInputTypes.h:35
	enum EBindResult {
		E_BINDRESULTOK = 0,
		E_BINDRESULTPLAYERALREADYBOUND = 1,
		E_BINDRESULTPORTALREADYBOUND = 2,
		E_BINDRESULTINVALIDPLAYER = 3,
		E_BINDRESULTINVALIDPORT = 4,
	}

	// CgsInputTypes.h:45
	enum EUnbindResult {
		E_UNBINDRESULTOK = 0,
		E_UNBINDRESULTINVALIDPLAYER = 1,
		E_UNBINDRESULTPLAYERNOTBOUND = 2,
	}

	struct DevicePS3Pad;

}

// CgsInputTypes.h:24
namespace CgsInput {
	// CgsInputTypes.h:35
	enum EBindResult {
		E_BINDRESULTOK = 0,
		E_BINDRESULTPLAYERALREADYBOUND = 1,
		E_BINDRESULTPORTALREADYBOUND = 2,
		E_BINDRESULTINVALIDPLAYER = 3,
		E_BINDRESULTINVALIDPORT = 4,
	}

	// CgsInputTypes.h:45
	enum EUnbindResult {
		E_UNBINDRESULTOK = 0,
		E_UNBINDRESULTINVALIDPLAYER = 1,
		E_UNBINDRESULTPLAYERNOTBOUND = 2,
	}

	struct PortPS3;

	struct ManagerPS3;

	// Declaration
	struct DevicePS3Pad {
	public:
		DevicePS3Pad();

	}

	struct InputPlayer;

	struct InputPort;

	struct InputPads;

	// Declaration
	struct InputModule {
	public:
		InputModule();

		~InputModule();

	}

}

// CgsInputTypes.h:24
namespace CgsInput {
	struct DevicePS3Pad;

}

