// BrnWorldRegion.h:27
namespace BrnWorld {
	// Declaration
	struct PVSModule {
		// BrnPVSModule.h:49
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_MANAGER = 1,
			E_PREPARESTAGE_REQUEST_PVS = 2,
			E_PREPARESTAGE_WF_PVS = 3,
			E_PREPARESTAGE_DONE = 4,
		}

		// BrnPVSModule.h:58
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_MANAGER = 1,
			E_RELEASESTAGE_DONE = 2,
		}

	}

}

// BrnPVSModule.h:46
struct BrnWorld::PVSModule : public CgsModule::ModuleSingleBufferedTemplate<BrnWorld::PVSIO::InputBuffer,BrnWorld::PVSIO::OutputBuffer> {
private:
	// BrnPVSModule.h:99
	BrnWorld::PVSModule::EPrepareStage mePrepareStage;

	// BrnPVSModule.h:100
	BrnWorld::PVSModule::EReleaseStage meReleaseStage;

	// BrnPVSModule.h:102
	ResourcePtr<CgsSceneManager::ZoneList> mZoneList;

	// Unknown accessibility
	// BrnPVSModuleIO.h:40
	typedef EventReceiverQueue<512,16> PVSGameDataReceiverQueue;

	// BrnPVSModule.h:104
	PVSModule::PVSGameDataReceiverQueue mReceiverQueue;

	// BrnPVSModule.h:106
	bool mbDebugRestrictZoneLists;

	// BrnPVSModule.cpp:30
	extern float32_t mfCentreZoneBaseScore;

	// BrnPVSModule.cpp:31
	extern float32_t mfImmediateZoneBaseScore;

	// BrnPVSModule.cpp:32
	extern float32_t mfSecondaryZoneBaseScore;

	// BrnPVSModule.cpp:33
	extern float32_t mfDirectionalScoreMultiplier;

public:
	// BrnPVSModule.cpp:46
	virtual void Construct();

	// BrnPVSModule.cpp:66
	// Declaration
	virtual bool Prepare() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPVSModule.cpp:68
		using namespace BrnResource::GameDataIO;

		// BrnPVSModule.cpp:169
		using namespace PVSIO;

		// BrnPVSModule.cpp:170
		using namespace CgsSceneManager;

	}

	// BrnPVSModule.cpp:223
	virtual bool Release();

	// BrnPVSModule.cpp:273
	virtual void Destruct();

	// BrnPVSModule.cpp:288
	// Declaration
	virtual void Update() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPVSModule.cpp:290
		using namespace PVSIO;

		// BrnPVSModule.cpp:291
		using namespace CgsSceneManager;

	}

	// BrnPVSModule.h:119
	InputInterface * GetInputInterface();

	// BrnPVSModule.h:127
	const OutputInterface * GetOutputInterface();

	// BrnPVSModule.h:135
	const OutputBuffer::PVSGameDataRequestInterface * GetGameDataRequestInterface();

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// Declaration
	struct PVSModule {
	private:
		// BrnPVSModule.h:108
		extern float32_t mfCentreZoneBaseScore;

		// BrnPVSModule.h:109
		extern float32_t mfImmediateZoneBaseScore;

		// BrnPVSModule.h:110
		extern float32_t mfSecondaryZoneBaseScore;

		// BrnPVSModule.h:111
		extern float32_t mfDirectionalScoreMultiplier;

	}

}

// BrnPVSModule.h:108
extern float32_t mfCentreZoneBaseScore;

// BrnPVSModule.h:109
extern float32_t mfImmediateZoneBaseScore;

// BrnPVSModule.h:110
extern float32_t mfSecondaryZoneBaseScore;

// BrnPVSModule.h:111
extern float32_t mfDirectionalScoreMultiplier;

// BrnPVSModule.h:46
void BrnWorld::PVSModule::~PVSModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPVSModule.h:46
void BrnWorld::PVSModule::PVSModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

