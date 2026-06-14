// ps3mem.h:5
namespace BrnResource {
	// Declaration
	struct DLCManager {
		// BrnDLCManager.h:48
		enum EPrepareStage {
			E_PREPARE_START = 0,
			E_PREPARE_DONE = 1,
		}

		// BrnDLCManager.h:54
		enum EReleaseStage {
			E_RELEASE_START = 0,
			E_RELEASE_DONE = 1,
		}

	}

}

// BrnDLCManager.h:45
struct BrnResource::DLCManager {
private:
	// BrnDLCManager.h:84
	BrnResource::DLCManager::EPrepareStage mePrepareStage;

	// BrnDLCManager.h:85
	BrnResource::DLCManager::EReleaseStage meReleaseStage;

public:
	// BrnDLCManager.h:62
	void Construct();

	// BrnDLCManager.h:66
	bool Prepare(AllocatorList *);

	// BrnDLCManager.h:70
	bool Release();

	// BrnDLCManager.h:74
	void Destruct();

	// BrnDLCManager.h:77
	void StartDLCMonitor();

	// BrnDLCManager.h:80
	int32_t GetDLCVersion() const;

}

