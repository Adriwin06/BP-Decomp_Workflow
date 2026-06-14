// CgsInputTypes.h:24
namespace CgsInput {
	// Declaration
	struct Manager {
		// CgsInputManager.h:52
		enum EInputPort {
			E_INPUTPORT_INVALID = -1,
			E_INPUTPORT_FIRST = 0,
			E_INPUTPORT_1 = 0,
			E_INPUTPORT_2 = 1,
			E_INPUTPORT_3 = 2,
			E_INPUTPORT_4 = 3,
			E_INPUTPORT_COUNT = 4,
		}

	}

}

// CgsInputManager.h:49
struct CgsInput::Manager {
public:
	// CgsInputManager.h:64
	void Construct();

	// CgsInputManager.h:68
	void Destruct();

	// CgsInputManager.h:73
	bool Prepare(rw::IResourceAllocator *);

	// CgsInputManager.h:77
	bool Release();

	// CgsInputManager.h:81
	void Update();

	// CgsInputManager.h:92
	CgsInput::Device::EType GetConnectedDeviceType(CgsInput::Manager::EInputPort);

	// CgsInputManager.h:97
	void SetPause(bool);

	// CgsInputManager.h:103
	bool IsPaused();

}

// CgsInputDevice.h:22
namespace CgsInput {
	// Declaration
	struct Manager {
		// CgsInputManager.h:52
		enum EInputPort {
			E_INPUTPORT_INVALID = -1,
			E_INPUTPORT_FIRST = 0,
			E_INPUTPORT_1 = 0,
			E_INPUTPORT_2 = 1,
			E_INPUTPORT_3 = 2,
			E_INPUTPORT_4 = 3,
			E_INPUTPORT_COUNT = 4,
		}

	}

}

