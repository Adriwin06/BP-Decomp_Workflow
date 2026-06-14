// BrnWorldRegion.h:27
namespace BrnWorld {
	// Declaration
	struct TriggerEntityModule {
		// BrnTriggerEntityModule.h:56
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_MANAGER = 1,
			E_PREPARESTAGE_DONE = 2,
		}

		// BrnTriggerEntityModule.h:63
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_MANAGER = 1,
			E_RELEASESTAGE_DONE = 2,
		}

	}

	// BrnTriggerEntityModule.h:33
	const float32_t KF_PLANE_SEGMENT_TRIGGER_DEPTH;

	// BrnTriggerEntityModule.h:36
	const uint16_t KU_MAX_TRIGGERS = 512;

}

// BrnTriggerEntityModule.h:51
struct BrnWorld::TriggerEntityModule : public CgsModule::ModuleSingleBuffered {
private:
	// BrnTriggerEntityModule.h:117
	BrnWorld::TriggerEntityModule::EPrepareStage mePrepareStage;

	// BrnTriggerEntityModule.h:118
	BrnWorld::TriggerEntityModule::EReleaseStage meReleaseStage;

	// BrnTriggerEntityModule.h:120
	Trigger[512] mTriggers;

	// BrnTriggerEntityModule.h:121
	BitArray<512u> mUsedTriggerList;

	// BrnTriggerEntityModule.h:124
	TriggerEntityModuleDebugComponent mTriggerEntityModuleDebugComponent;

public:
	// BrnTriggerEntityModule.cpp:48
	virtual void Construct();

	// BrnTriggerEntityModule.cpp:74
	virtual bool Prepare();

	// BrnTriggerEntityModule.cpp:127
	virtual bool Release();

	// BrnTriggerEntityModule.cpp:175
	virtual void Destruct();

	// BrnTriggerEntityModule.cpp:197
	virtual void PreSceneUpdate(IOBufferStack *, IOBufferStack *, const InputBuffer_PreScene *, OutputBuffer_PreScene *, BrnUpdateSet);

	// BrnTriggerEntityModule.cpp:488
	virtual void PostSceneUpdate(IOBufferStack *, IOBufferStack *, const InputBuffer_PostScene *, OutputBuffer_PostScene *, BrnUpdateSet);

	// BrnTriggerEntityModule.cpp:564
	virtual void PrePhysicsUpdate(IOBufferStack *, IOBufferStack *, const InputBuffer_PrePhysics *, OutputBuffer_PrePhysics *, BrnUpdateSet);

private:
	// BrnTriggerEntityModule.cpp:219
	void ProcessAddTriggerEvents(const TriggerManagementInputInterface *, OutputBuffer_PreScene::SceneInputInterface *);

	// BrnTriggerEntityModule.cpp:434
	void ProcessRemoveTriggerEvents(const TriggerManagementInputInterface *, OutputBuffer_PreScene::SceneInputInterface *);

	// BrnTriggerEntityModule.cpp:510
	void ProcessTriggerQueryEvents(const InputBuffer_PostScene *, OutputBuffer_PostScene *);

	// BrnTriggerEntityModule.cpp:585
	// Declaration
	void ProcessSceneQueryResults(const InputBuffer_PrePhysics *, OutputBuffer_PrePhysics *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTriggerEntityModule.cpp:598
		using namespace CgsSceneManager::SceneManagerIO;

	}

	// BrnTriggerEntityModule.cpp:627
	void ProcessLineTestFineResult(const OutEventLineTestFineResult *, OutputBuffer_PrePhysics *);

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnTriggerEntityModule.h:33
	const float32_t KF_PLANE_SEGMENT_TRIGGER_DEPTH;

	// BrnTriggerEntityModule.h:36
	const uint16_t KU_MAX_TRIGGERS = 512;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnTriggerEntityModule.h:33
	const float32_t KF_PLANE_SEGMENT_TRIGGER_DEPTH;

	// BrnTriggerEntityModule.h:36
	const uint16_t KU_MAX_TRIGGERS = 512;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnTriggerEntityModule.h:33
	const float32_t KF_PLANE_SEGMENT_TRIGGER_DEPTH;

	// BrnTriggerEntityModule.h:36
	const uint16_t KU_MAX_TRIGGERS = 512;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnTriggerEntityModule.h:33
	const float32_t KF_PLANE_SEGMENT_TRIGGER_DEPTH;

	// BrnTriggerEntityModule.h:36
	const uint16_t KU_MAX_TRIGGERS = 512;

}

// BrnTriggerEntityModule.h:51
void BrnWorld::TriggerEntityModule::TriggerEntityModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTriggerEntityModule.h:51
void BrnWorld::TriggerEntityModule::~TriggerEntityModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

