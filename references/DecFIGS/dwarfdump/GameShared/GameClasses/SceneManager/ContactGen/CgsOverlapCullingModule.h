// CgsOverlapCullingModule.h:158
extern const RwUInt32 kuVolQueryMemSize = 401408;

// CgsEntityId.h:27
namespace CgsSceneManager {
	// Declaration
	struct OverlapCullingModule {
	public:
		~OverlapCullingModule();

		OverlapCullingModule();

	private:
		// CgsOverlapCullingModule.h:158
		extern const RwUInt32 kuVolQueryMemSize = 401408;

	}

}

// CgsOverlapCullingModule.h:49
void CgsSceneManager::OverlapCullingModule::~OverlapCullingModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsOverlapCullingModule.h:49
void CgsSceneManager::OverlapCullingModule::OverlapCullingModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// Declaration
	struct OverlapCullingModule {
		// CgsOverlapCullingModule.h:52
		enum EPrepareStage {
			PREPARESTAGE_START = 0,
			PREPARESTAGE_MANAGER = 1,
			PREPARESTAGE_DONE = 2,
		}

		// CgsOverlapCullingModule.h:59
		enum EReleaseStage {
			RELEASESTAGE_START = 0,
			RELEASESTAGE_MANAGER = 1,
			RELEASESTAGE_DONE = 2,
		}

	}

	// CgsOverlapCullingModule.h:182
	extern CgsSceneManager::OverlapCullingModule::EPrepareStage operator++(CgsSceneManager::OverlapCullingModule::EPrepareStage &, int);

	// CgsOverlapCullingModule.h:183
	extern CgsSceneManager::OverlapCullingModule::EReleaseStage operator++(CgsSceneManager::OverlapCullingModule::EReleaseStage &, int);

}

// CgsOverlapCullingModule.h:49
struct CgsSceneManager::OverlapCullingModule : public CgsModule::ModuleSingleBuffered {
private:
	// CgsOverlapCullingModule.h:148
	CgsSceneManager::OverlapCullingModule::EPrepareStage mePrepareStage;

	// CgsOverlapCullingModule.h:149
	CgsSceneManager::OverlapCullingModule::EReleaseStage meReleaseStage;

	// CgsOverlapCullingModule.h:151
	CgsSceneManager::VolumeManager * mpVolumeManager;

	// CgsOverlapCullingModule.h:152
	EntityManager * mpEntityManager;

	// CgsOverlapCullingModule.h:154
	ContactGenerator * mpContactGenerator;

	// CgsOverlapCullingModule.h:156
	FineIntersectionTestModule::VolumeVolumeQuery * mpVolVolQuery;

	// CgsOverlapCullingModule.h:158
	extern const RwUInt32 kuVolQueryMemSize = 401408;

	// CgsOverlapCullingModule.h:159
	RwUInt8[401408] maVolumeVolumeQueryMem;

	// CgsOverlapCullingModule.h:162
	BitArray<5048u> mabIsUsingInternalCollision;

	// CgsOverlapCullingModule.h:164
	uint32_t[5048] mauInternalVolumeInstanceIndex;

	// CgsOverlapCullingModule.h:165
	uint32_t[5048] mauEscapeVolumeInstanceIndex;

	// CgsOverlapCullingModule.h:168
	uint32_t muNumPrimPrimPairs;

	// CgsOverlapCullingModule.h:169
	uint32_t muNumPrimAggPairs;

	// CgsOverlapCullingModule.h:170
	uint32_t muNumOtherPairs;

	// CgsOverlapCullingModule.h:171
	uint32_t muNumInstanceQueries;

	// CgsOverlapCullingModule.h:172
	uint32_t muNumPPQs;

	// CgsOverlapCullingModule.h:173
	uint32_t muNumIntersections;

	// CgsOverlapCullingModule.h:174
	uint32_t muNumPrimPrimContacts;

	// CgsOverlapCullingModule.h:175
	uint32_t muNumPrimAggContacts;

public:
	// CgsOverlapCullingModule.cpp:55
	virtual void Construct();

	// CgsOverlapCullingModule.cpp:92
	virtual bool Prepare(EntityManager *, CgsSceneManager::VolumeManager *);

	// CgsOverlapCullingModule.cpp:145
	virtual bool Release();

	// CgsOverlapCullingModule.cpp:190
	virtual void Destruct();

	// CgsOverlapCullingModule.cpp:207
	virtual void Update(InputBuffer *, OutputBuffer *);

	// CgsOverlapCullingModule.cpp:428
	void ProcessAccumulatedQueries(OutputBuffer *);

	// CgsOverlapCullingModule.h:95
	void SetContactGenerator(ContactGenerator *);

private:
	// CgsOverlapCullingModule.cpp:307
	void ProcessAddInternalVolumeQueue(const InputBuffer *);

	// CgsOverlapCullingModule.cpp:346
	void ProcessRemoveInternalVolumeQueue(const InputBuffer *);

	// CgsOverlapCullingModule.cpp:237
	void ProcessOverlapsQueue(OutputBuffer *, const InputBuffer *);

	// CgsOverlapCullingModule.cpp:380
	void ProcessOverlap(OverlappingPair &, OutputBuffer *);

	// CgsOverlapCullingModule.cpp:469
	// Declaration
	void DoPairQuery(OutputBuffer *, const VolumeInstance *, uint32_t, const VolRef::Volume *, const VolumeInstance *, uint32_t, const VolRef::Volume *, float_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsOverlapCullingModule.cpp:528
		using namespace CgsDev::Message;

		// CgsOverlapCullingModule.cpp:575
		using namespace CgsDev::Message;

	}

	// CgsOverlapCullingModule.h:132
	uint32_t InstancePrimAggPairs(void *, GPInstance *, void *, uint32_t, uint32_t *, uint32_t *);

	// CgsOverlapCullingModule.cpp:600
	bool IsInsideEscapeVolume(int32_t);

	// CgsOverlapCullingModule.cpp:644
	void DoInternalCollision(int32_t, OutputBuffer *);

	// CgsOverlapCullingModule.cpp:682
	void ProcessInternalCollisions(OutputBuffer *);

}

