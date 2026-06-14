// CgsOverlapGenerationModule.h:47
void CgsSceneManager::OverlapGenerationModule::~OverlapGenerationModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsOverlapGenerationModule.h:47
void CgsSceneManager::OverlapGenerationModule::OverlapGenerationModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// Declaration
	struct OverlapGenerationModule {
		// CgsOverlapGenerationModule.h:50
		enum EPrepareStage {
			PREPARESTAGE_START = 0,
			PREPARESTAGE_MANAGER = 1,
			PREPARESTAGE_SWEEPER = 2,
			PREPARESTAGE_DONE = 3,
		}

		// CgsOverlapGenerationModule.h:58
		enum EReleaseStage {
			RELEASESTAGE_START = 0,
			RELEASESTAGE_SWEEPER = 1,
			RELEASESTAGE_MANAGER = 2,
			RELEASESTAGE_DONE = 3,
		}

	}

	// CgsOverlapGenerationModule.h:167
	extern CgsSceneManager::OverlapGenerationModule::EPrepareStage operator++(CgsSceneManager::OverlapGenerationModule::EPrepareStage &, int);

	// CgsOverlapGenerationModule.h:168
	extern CgsSceneManager::OverlapGenerationModule::EReleaseStage operator++(CgsSceneManager::OverlapGenerationModule::EReleaseStage &, int);

}

// CgsOverlapGenerationModule.h:47
struct CgsSceneManager::OverlapGenerationModule : public CgsModule::ModuleSingleBuffered {
private:
	// CgsOverlapGenerationModule.h:160
	CgsSceneManager::OverlapGenerationModule::EPrepareStage mePrepareStage;

	// CgsOverlapGenerationModule.h:161
	CgsSceneManager::OverlapGenerationModule::EReleaseStage meReleaseStage;

	// CgsOverlapGenerationModule.h:163
	SceneSweeper mSweeper;

	// CgsOverlapGenerationModule.h:164
	uint16_t[16] mau16NumEntitiesPerType;

public:
	// CgsOverlapGenerationModule.cpp:44
	virtual void Construct();

	// CgsOverlapGenerationModule.cpp:77
	virtual bool Prepare(uint8_t *, BitTable *);

	// CgsOverlapGenerationModule.cpp:138
	virtual bool Release();

	// CgsOverlapGenerationModule.cpp:196
	virtual void Destruct();

	// CgsOverlapGenerationModule.cpp:244
	void GenerateOverlaps(OutputBuffer *, const EntityManager *);

	// CgsOverlapGenerationModule.cpp:215
	virtual void Update(const InputBuffer *);

	// CgsOverlapGenerationModule.h:101
	void AddBody(uint32_t, AABBox *, InEventAddForCollision::CullingGroup, rw::physics::BodyState);

	// CgsOverlapGenerationModule.h:105
	void RemoveBody(uint32_t);

	// CgsOverlapGenerationModule.h:110
	void UpdateBody(uint32_t, AABBox *);

	// CgsOverlapGenerationModule.h:115
	void SetVolumeInstanceCullingGroup(uint32_t, InEventAddForCollision::CullingGroup);

	// CgsOverlapGenerationModule.h:121
	void SetCullingGroupPair(InEventAddForCollision::CullingGroup, InEventAddForCollision::CullingGroup, bool);

	// CgsOverlapGenerationModule.h:126
	void SetPadding(uint32_t, Vector3);

	// CgsOverlapGenerationModule.h:130
	void ForceNoPadding(uint32_t);

	// CgsOverlapGenerationModule.h:135
	const OutputBuffer::OutOverlappingPairQueue * GetOverlappingPairQueue();

private:
	// CgsOverlapGenerationModule.cpp:271
	void ProcessAddBodyQueue(const InputBuffer *);

	// CgsOverlapGenerationModule.cpp:305
	void ProcessUpdateBodyQueue(const InputBuffer *);

	// CgsOverlapGenerationModule.cpp:336
	void ProcessRemoveBodyQueue(const InputBuffer *);

	// CgsOverlapGenerationModule.cpp:365
	void ProcessForceNoPaddingQueue(const InputBuffer *);

	// CgsOverlapGenerationModule.cpp:396
	void OutputCollidingPairs(OutputBuffer *);

}

