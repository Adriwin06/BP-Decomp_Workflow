// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsSceneManagerModule.h:84
	const uint32_t KU_MAX_FRUSTUM_TEST_JOB_QUERIES = 16;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsSceneManagerModule.h:84
	const uint32_t KU_MAX_FRUSTUM_TEST_JOB_QUERIES = 16;

}

// CgsSceneManagerModule.h:178
void CgsSceneManager::SceneManagerModule::~SceneManagerModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSceneManagerModule.h:178
void CgsSceneManager::SceneManagerModule::SceneManagerModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsSceneManagerModule.h:92
	enum EQueryResultType {
		E_QUERY_RESULT_TYPE_COARSE = 0,
		E_QUERY_RESULT_TYPE_LINE_TEST_FINE = 1,
		E_QUERY_RESULT_TYPE_LINE_TEST_NEAREST = 2,
		E_QUERY_RESULT_TYPE_VOLUME_TEST_DEEPEST = 3,
		E_QUERY_RESULT_TYPE_VOLUME_TEST_FINE = 4,
		E_QUERY_RESULT_TYPE_COUNT = 5,
	}

	// Declaration
	struct SceneManagerModule {
		// CgsSceneManagerModule.h:180
		enum ESceneManagerPrepareStage {
			E_SCENEMANAGER_PREPARE_START = 0,
			E_SCENEMANAGER_PREPARE_MANAGER = 1,
			E_SCENEMANAGER_PREPARE_ENTITY_MANAGER = 2,
			E_SCENEMANAGER_PREPARE_VOLUME_MANAGER = 3,
			E_SCENEMANAGER_PREPARE_CACHE_MANAGER = 4,
			E_SCENEMANAGER_PREPARE_TRI_COLLISION_MANAGER = 5,
			E_SCENEMANAGER_PREPARE_SCENE_GRAPH_MODULE = 6,
			E_SCENEMANAGER_PREPARE_OVERLAP_GENERATION_MODULE = 7,
			E_SCENEMANAGER_PREPARE_OVERLAP_CULLING_MODULE = 8,
			E_SCENEMANAGER_PREPARE_FINE_INTERSECTION_TEST_MODULE = 9,
			E_SCENEMANAGER_PREPARE_DONE = 10,
		}

		// CgsSceneManagerModule.h:195
		enum ESceneManagerReleaseStage {
			E_SCENEMANAGER_RELEASE_START = 0,
			E_SCENEMANAGER_RELEASE_FINE_INTERSECTION_TEST_MODULE = 1,
			E_SCENEMANAGER_RELEASE_OVERLAP_CULLING_MODULE = 2,
			E_SCENEMANAGER_RELEASE_OVERLAP_GENERATION_MODULE = 3,
			E_SCENEMANAGER_RELEASE_SCENE_GRAPH_MODULE = 4,
			E_SCENEMANAGER_RELEASE_VOLUME_MANAGER = 5,
			E_SCENEMANAGER_RELEASE_ENTITY_MANAGER = 6,
			E_SCENEMANAGER_RELEASE_TRI_COLLISION_MANAGER = 7,
			E_SCENEMANAGER_RELEASE_CACHE_MANAGER = 8,
			E_SCENEMANAGER_RELEASE_MANAGER = 9,
			E_SCENEMANAGER_RELEASE_DONE = 10,
		}

	}

	// CgsSceneManagerModule.h:687
	extern CgsSceneManager::SceneManagerModule::ESceneManagerReleaseStage operator++(CgsSceneManager::SceneManagerModule::ESceneManagerReleaseStage &, int);

	// CgsSceneManagerModule.h:686
	extern CgsSceneManager::SceneManagerModule::ESceneManagerPrepareStage operator++(CgsSceneManager::SceneManagerModule::ESceneManagerPrepareStage &, int);

	// CgsSceneManagerModule.h:84
	const uint32_t KU_MAX_FRUSTUM_TEST_JOB_QUERIES = 16;

}

// CgsSceneManagerModule.h:103
struct CgsSceneManager::CullingGroupManager {
private:
	// CgsSceneManagerModule.h:138
	uint8_t[5051] maVolumeInstanceCullingGroup;

	// CgsSceneManagerModule.h:139
	BitTable * mpCullingTable;

public:
	// CgsSceneManagerModule.h:108
	bool GetCullingGroupPair(InEventAddForCollision::CullingGroup, InEventAddForCollision::CullingGroup);

	// CgsSceneManagerModule.h:111
	InEventAddForCollision::CullingGroup GetObjectCullingGroup(uint32_t);

	// CgsSceneManagerModule.h:115
	void CreateCullingTable(rw::IResourceAllocator *);

	// CgsSceneManagerModule.h:121
	void SetCullingGroupPair(InEventAddForCollision::CullingGroup, InEventAddForCollision::CullingGroup, bool);

	// CgsSceneManagerModule.h:126
	void SetObjectCullingGroup(uint32_t, InEventAddForCollision::CullingGroup);

	// CgsSceneManagerModule.h:129
	uint8_t * GetVolumeInstanceCullingGroup();

	// CgsSceneManagerModule.h:132
	BitTable * GetCullingTable();

	// CgsSceneManagerModule.h:135
	void ClearCullingTable(bool);

}

// CgsSceneManagerModule.h:178
struct CgsSceneManager::SceneManagerModule : public CgsModule::ModuleSingleBuffered {
	// CgsSceneManagerModule.cpp:50
	extern int32_t siUpdateScenePerfMon;

	// CgsSceneManagerModule.cpp:51
	extern int32_t siProcessSceneQueriesPerfMon;

	// CgsSceneManagerModule.cpp:52
	extern int32_t siProcessCoarseQueriesPerfMon;

	// CgsSceneManagerModule.cpp:53
	extern int32_t siProcessFineQueriesPerfMon;

	// CgsSceneManagerModule.cpp:54
	extern int32_t siProcessFineQueriesLineFinePerfMon;

	// CgsSceneManagerModule.cpp:55
	extern int32_t siProcessFineQueriesLineNearPerfMon;

	// CgsSceneManagerModule.cpp:56
	extern int32_t siProcessFineQueriesLineFastDSPerfMon;

	// CgsSceneManagerModule.cpp:57
	extern int32_t siProcessFineQueriesSphereFastPerfMon;

	// CgsSceneManagerModule.cpp:58
	extern int32_t siProcessFineQueriesVolFinePerfMon;

	// CgsSceneManagerModule.cpp:59
	extern int32_t siProcessFineQueriesVolNearPerfMon;

	// CgsSceneManagerModule.cpp:60
	extern int32_t siProcessTriCollisionLineTestsPerfMon;

	// CgsSceneManagerModule.cpp:61
	extern int32_t siProcessTriCollisionLineTestNearestsPerfMon;

	// CgsSceneManagerModule.cpp:64
	extern int32_t siProcessFineQueriesLineFineCount;

	// CgsSceneManagerModule.cpp:65
	extern int32_t siProcessFineQueriesLineNearCount;

	// CgsSceneManagerModule.cpp:66
	extern int32_t siProcessFineQueriesLineFastDSCount;

	// CgsSceneManagerModule.cpp:67
	extern int32_t siProcessFineQueriesSphereFastCount;

	// CgsSceneManagerModule.cpp:68
	extern int32_t siProcessFineQueriesVolFineCount;

	// CgsSceneManagerModule.cpp:69
	extern int32_t siProcessFineQueriesVolNearCount;

	// CgsSceneManagerModule.cpp:70
	extern int32_t siProcessGeneratedTriCollisionLineTestsCount;

	// CgsSceneManagerModule.cpp:71
	extern int32_t siProcessGeneratedTriCollisionLineTestNearestsCount;

	// CgsSceneManagerModule.cpp:72
	extern int32_t siProcessTotalTriCollisionLineTestsCount;

	// CgsSceneManagerModule.cpp:73
	extern int32_t siProcessTotalTriCollisionLineTestNearestsCount;

	// CgsSceneManagerModule.cpp:74
	extern int32_t siProcessMaxSingleTriCollisionLineTestsCount;

	// CgsSceneManagerModule.cpp:75
	extern int32_t siProcessMaxSingleTriCollisionLineTestNearestsCount;

	// CgsSceneManagerModule.cpp:78
	extern int32_t siContactGen_UpdatePerfMon;

	// CgsSceneManagerModule.cpp:79
	extern int32_t siContactGen_GenerateOverlapsPerfMon;

	// CgsSceneManagerModule.cpp:80
	extern int32_t siContactGen_CullOverlapsPerfMon;

	// CgsSceneManagerModule.cpp:81
	extern int32_t siContactGen_BridgesPerfMon;

	// CgsSceneManagerModule.cpp:82
	extern int32_t siContactGen_IOBuffersPerfMon;

	// CgsSceneManagerModule.cpp:85
	extern int32_t siTriCache_UpdatePerfMon;

	// CgsSceneManagerModule.cpp:86
	extern int32_t siTriCache_CachedObj_UpdatePerfMon;

private:
	// CgsSceneManagerModule.h:652
	SceneQueryId[16] maFrustumTestJobQueryIds;

	// CgsSceneManagerModule.h:655
	CgsSceneManager::SceneManagerModule::ESceneManagerPrepareStage mePrepareStage;

	// CgsSceneManagerModule.h:656
	CgsSceneManager::SceneManagerModule::ESceneManagerReleaseStage meReleaseStage;

	// CgsSceneManagerModule.h:659
	SpatialPartitionManager mSpatialPartitionManager;

	// CgsSceneManagerModule.h:660
	OverlapGenerationModule mOverlapGenerator;

	// CgsSceneManagerModule.h:661
	OverlapCullingModule mOverlapCuller;

	// CgsSceneManagerModule.h:662
	FineIntersectionTestModule mFineIntersectionTestModule;

	// CgsSceneManagerModule.h:665
	EntityManager mEntityManager;

	// CgsSceneManagerModule.h:666
	VolumeManager mVolumeManager;

	// CgsSceneManagerModule.h:667
	CullingGroupManager mCullingGroupManager;

	// CgsSceneManagerModule.h:669
	TriangleCacheManager mTriangleCacheManager;

	// CgsSceneManagerModule.h:670
	TriangleCollisionManager mTriangleCollisionManager;

	// CgsSceneManagerModule.h:671
	BaseCollisionGenerator * mpTriangleCacheCollisionGenerator;

	// CgsSceneManagerModule.h:674
	int32_t miTimeInCachedContactGen;

	// CgsSceneManagerModule.h:675
	int32_t miTimeInNonCachedContactGen;

	// CgsSceneManagerModule.h:679
	SceneManagerDebugComponent mSceneManagerDebugComponent;

public:
	// CgsSceneManagerModule.cpp:105
	virtual void Construct();

	// CgsSceneManagerModule.cpp:183
	bool Prepare(SpatialPartitionConstructParams *, rw::IResourceAllocator *, rw::IResourceAllocator *, LinearMalloc *);

	// CgsSceneManagerModule.cpp:318
	virtual bool Release();

	// CgsSceneManagerModule.cpp:443
	virtual void Destruct();

	// CgsSceneManagerModule.h:274
	virtual void Update();

	// CgsSceneManagerModule.cpp:724
	virtual void UpdateScene(IOBufferStack *, IOBufferStack *, const InputBuffer_Update *, OutputBuffer *, bool);

	// CgsSceneManagerModule.cpp:802
	virtual void ProcessSceneQueries(IOBufferStack *, IOBufferStack *, const InputBuffer_Query *, OutputBuffer *);

	// CgsSceneManagerModule.cpp:464
	// Declaration
	virtual void UpdateContactGeneration(IOBufferStack *, IOBufferStack *, const InputBuffer_Update *, OutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSceneManagerModule.cpp:531
		using namespace CgsDev::Message;

	}

	// CgsSceneManagerModule.cpp:1421
	void ProcessFrustumTestJobRequests(IOBufferStack *, IOBufferStack *, const InputBuffer_Query *, OutputBuffer *);

	// CgsSceneManagerModule.cpp:1474
	void ProcessFrustumTestJobResults(IOBufferStack *, IOBufferStack *, const InputBuffer_Query *, OutputBuffer *);

	// CgsSceneManagerModule.cpp:1381
	void DebugRender(bool);

	// CgsSceneManagerModule.cpp:1399
	void DebugRenderVolumeInstances();

	// CgsSceneManagerModule.cpp:571
	void StartUpdateTriangleCache(IOBufferStack *, IOBufferStack *, const InputBuffer_Update *, BaseCollisionGenerator *);

	// CgsSceneManagerModule.cpp:619
	void EndUpdateTriangleCache(IOBufferStack *, IOBufferStack *);

protected:
	// CgsSceneManagerModule.cpp:845
	void ProcessCoarseQueries(IOBufferStack *, IOBufferStack *, const InputBuffer_Query *, OutputBuffer *);

	// CgsSceneManagerModule.cpp:878
	void ProcessFineQueries(IOBufferStack *, IOBufferStack *, const InputBuffer_Query *, OutputBuffer *);

	// CgsSceneManagerModule.cpp:1273
	CgsSceneManager::EQueryResultType GetEventResultType(int32_t) const;

	// CgsSceneManagerModule.h:864
	void AddBody(InputBuffer *, uint32_t, AABBox *, InEventAddForCollision::CullingGroup, rw::physics::BodyState, VolumeInstanceId);

	// CgsSceneManagerModule.cpp:937
	void ProcessAddForCollisionEvent(const InEventAddForCollision &, InputBuffer *);

	// CgsSceneManagerModule.cpp:995
	void ProcessAddVolumeInstanceForCachingEvent(const InEventAddVolumeInstanceForCaching &);

	// CgsSceneManagerModule.cpp:1045
	void ProcessRemoveForCollisionEvent(const InEventRemoveForCollision &, InputBuffer *);

	// CgsSceneManagerModule.cpp:1078
	void ProcessSetVolumeInstanceCullingGroupEvent(const InEventSetVolumeInstanceCullingGroup &, InputBuffer *);

	// CgsSceneManagerModule.cpp:1113
	void ProcessSetPaddingEvent(const InEventSetPadding &, InputBuffer *);

	// CgsSceneManagerModule.cpp:1142
	void ProcessClearEntityPaddingEvent(const InEventClearEntityPadding &, InputBuffer *);

	// CgsSceneManagerModule.cpp:1187
	void ProcessForceNoPaddingEvent(const InEventForceNoPadding &, InputBuffer *);

	// CgsSceneManagerModule.cpp:1223
	void UpdateCollisionBody(int32_t, VolumeInstanceId, InputBuffer *);

	// CgsSceneManagerBridgeFunctions.cpp:58
	void BridgeInputSceneUpdateInterfaceToSubModules(InputBuffer *, InputBuffer_Update *, const InputBuffer_Update *, bool);

	// CgsSceneManagerBridgeFunctions.cpp:491
	void ProcessCoarseSpatialPartitionQueries(const InputBuffer_Query *, OutputBuffer *, OutputBuffer *);

	// CgsSceneManagerBridgeFunctions.cpp:696
	void ProcessCoarseVolumeTest(const InEventVolumeTest &, OutputBuffer *, OutputBuffer *);

	// CgsSceneManagerBridgeFunctions.cpp:755
	void ProcessCoarseFrustumTestVp(OutputBuffer *, const InEventFrustumTestVp &, int32_t *[4], uint16_t * *[4], OutputBuffer *);

	// CgsSceneManagerBridgeFunctions.cpp:848
	void ProcessCoarseFrustumTest(OutputBuffer *, const InEventFrustumTest &, OutputBuffer *);

	// CgsSceneManagerBridgeFunctions.cpp:896
	void ProcessCoarseSphereTest(OutputBuffer *, const InEventSphereTest &, OutputBuffer *);

	// CgsSceneManagerBridgeFunctions.cpp:945
	void ProcessCoarseLineTest(OutputBuffer *, const InEventLineTest &, OutputBuffer *);

	// CgsSceneManagerBridgeFunctions.cpp:577
	void ProcessFineQueriesDirectly(const InputBuffer_Query *, CollisionGenerator *, TriCacheQueryBuffer *, OutputBuffer *, OutputBuffer *, OutputBuffer *);

	// CgsSceneManagerBridgeFunctions.cpp:996
	void ProcessLineTestFine(CollisionGenerator *, TriCacheQueryBuffer *, OutputBuffer *, const InEventLineTestFine &, OutputBuffer *, OutputBuffer *);

	// CgsSceneManagerBridgeFunctions.cpp:1149
	void ProcessLineTestNearest(CollisionGenerator *, TriCacheQueryBuffer *, OutputBuffer *, const InEventLineTestNearest &, OutputBuffer *);

	// CgsSceneManagerBridgeFunctions.cpp:1322
	void ProcessLineTestFastDoubleSided(CollisionGenerator *, TriCacheQueryBuffer *, OutputBuffer *, const InEventLineTestFastDoubleSided &, OutputBuffer *);

	// CgsSceneManagerBridgeFunctions.cpp:1428
	void ProcessSphereTestFast(CollisionGenerator *, TriCacheQueryBuffer *, const InEventSphereTestFast &, OutputBuffer *, OutputBuffer *);

	// CgsSceneManagerBridgeFunctions.cpp:1549
	void ProcessVolumeTestDeepest(CollisionGenerator *, TriCacheQueryBuffer *, const InEventVolumeTestDeepest &, OutputBuffer *, OutputBuffer *);

	// CgsSceneManagerBridgeFunctions.cpp:1674
	void ProcessFineVolumeTest(const InEventVolumeTestFine &, OutputBuffer *, OutputBuffer *, OutputBuffer *);

	// CgsSceneManagerBridgeFunctions.cpp:1781
	void ProcessTriangleCollisionLineTests(CollisionGenerator *, const SceneQueryInterface::InTriangleCollisionLineTestBaseQueue *, OutputBuffer *);

	// CgsSceneManagerBridgeFunctions.cpp:1880
	void ProcessTriangleCollisionLineTestNearests(CollisionGenerator *, const SceneQueryInterface::InTriangleCollisionLineTestNearestBaseQueue *, OutputBuffer *);

	// CgsSceneManagerBridgeFunctions.cpp:2027
	// Declaration
	void ProcessTriangleCollisionSphereTests(CollisionGenerator *, const SceneQueryInterface::InTriangleCollisionSphereTestBaseQueue *, OutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSceneManagerBridgeFunctions.cpp:2031
		using namespace CgsDev::Message;

	}

	// CgsSceneManagerBridgeFunctions.cpp:2141
	// Declaration
	void BridgeOverlapCullerToOutputBuffer(OutputBuffer *, const OutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSceneManagerBridgeFunctions.cpp:2176
		using namespace CgsDev::Message;

	}

	// CgsSceneManagerBridgeFunctions.cpp:2195
	// Declaration
	void BridgeTriCacheContactsToOutputBuffer(OutputBuffer *, const TriCacheCollisionBatchManager *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSceneManagerBridgeFunctions.cpp:2236
		using namespace CgsDev::Message;

	}

	// CgsSceneManagerBridgeFunctions.cpp:2051
	void BridgeOverlapGenerationToOverlapCulling(InputBuffer *, const OutputBuffer *);

	// CgsSceneManagerBridgeFunctions.cpp:2092
	// Declaration
	void BridgeOverlapGenerationToOutputBuffer(OutputBuffer *, const OutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSceneManagerBridgeFunctions.cpp:2122
		using namespace CgsDev::Message;

	}

	// CgsSceneManagerModule.cpp:1360
	void CreateCullingTable(rw::IResourceAllocator *);

	// CgsSceneManagerBridgeFunctions.cpp:430
	void RemoveAllEntityVolumeInstances(uint16_t, InputBuffer *);

	// CgsSceneManagerBridgeFunctions.cpp:460
	void RemoveAllOwnerVolumeInstances(uint8_t, InputBuffer *);

}

