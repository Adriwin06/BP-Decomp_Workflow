// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// Declaration
	struct SpatialPartitionManager {
		// CgsSpatialPartitionManager.h:71
		enum ESpatialPartitionPrepareStage {
			E_SCENE_GRAPH_PREPARE_START = 0,
			E_SCENE_GRAPH_PREPARE_MANAGER = 1,
			E_SCENE_GRAPH_PREPARE_CONSTRUCT_SCENE_GRAPH = 2,
			E_SCENE_GRAPH_PREPARE_SCENE_GRAPH = 3,
			E_SCENE_GRAPH_PREPARE_DONE = 4,
		}

		// CgsSpatialPartitionManager.h:80
		enum ESpatialPartitionReleaseStage {
			E_SCENE_GRAPH_RELEASE_START = 0,
			E_SCENE_GRAPH_RELEASE_SCENE_GRAPH = 1,
			E_SCENE_GRAPH_RELEASE_MANAGER = 2,
			E_SCENE_GRAPH_RELEASE_DONE = 3,
		}

	}

	// CgsSpatialPartitionManager.h:229
	extern CgsSceneManager::SpatialPartitionManager::ESpatialPartitionReleaseStage operator++(CgsSceneManager::SpatialPartitionManager::ESpatialPartitionReleaseStage &, int);

	// CgsSpatialPartitionManager.h:228
	extern CgsSceneManager::SpatialPartitionManager::ESpatialPartitionPrepareStage operator++(CgsSceneManager::SpatialPartitionManager::ESpatialPartitionPrepareStage &, int);

}

// CgsSpatialPartitionManager.h:68
struct CgsSceneManager::SpatialPartitionManager {
private:
	// CgsSpatialPartitionManager.h:215
	CgsSceneManager::SpatialPartitionManager::ESpatialPartitionPrepareStage mePrepareStage;

	// CgsSpatialPartitionManager.h:216
	CgsSceneManager::SpatialPartitionManager::ESpatialPartitionReleaseStage meReleaseStage;

	// CgsSpatialPartitionManager.h:218
	int32_t miTextX;

	// CgsSpatialPartitionManager.h:219
	int32_t miTextY;

	// CgsSpatialPartitionManager.h:221
	CgsSceneManager::SpatialPartition * mpSpatialPartition;

	// CgsSpatialPartitionManager.h:222
	CgsSceneManager::ESpatialPartitionType meSpatialPartitionType;

public:
	// CgsSpatialPartitionManager.h:90
	void Construct();

	// CgsSpatialPartitionManager.h:96
	bool Prepare(SpatialPartitionConstructParams *, rw::IResourceAllocator *);

	// CgsSpatialPartitionManager.h:100
	bool Release();

	// CgsSpatialPartitionManager.h:104
	void Destruct();

	// CgsSpatialPartitionManager.h:109
	void UpdateScene(const InputBuffer_Update *);

	// CgsSpatialPartitionManager.h:114
	void DebugRender(bool);

	// CgsSpatialPartitionManager.h:123
	bool SphereTest(InEventLineTestFine::EntityTypeFlags, Vector3, float32_t, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *);

	// CgsSpatialPartitionManager.h:131
	bool LineTest(InEventLineTestFine::EntityTypeFlags, Vector3, Vector3, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *);

	// CgsSpatialPartitionManager.h:138
	bool FrustumTest(InEventLineTestFine::EntityTypeFlags, const Frustum &, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *);

	// CgsSpatialPartitionManager.h:146
	bool VolumeTest(InEventLineTestFine::EntityTypeFlags, const VolRef::Volume *, const rw::math::vpu::Matrix44Affine *, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *);

	// CgsSpatialPartitionManager.h:154
	bool FrustumTestVp(InEventLineTestFine::EntityTypeFlags, const Frustum &, const rw::math::vpu::Matrix44 &, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *);

	// CgsSpatialPartitionManager.h:162
	void FrustumTestEntities(const Frustum &, uint32_t, uint16_t *, uint32_t, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *);

	// CgsSpatialPartitionManager.h:173
	void AddEntity(uint16_t, uint32_t, Vector3, float32_t);

	// CgsSpatialPartitionManager.h:178
	void RemoveEntity(uint16_t);

	// CgsSpatialPartitionManager.h:184
	void SetEntityPosition(uint16_t, Vector3);

	// CgsSpatialPartitionManager.h:190
	void SetEntityRadius(uint16_t, float32_t);

	// CgsSpatialPartitionManager.h:199
	void AddFrustumTestJob(InEventLineTestFine::EntityTypeFlags, const Frustum &, const rw::math::vpu::Matrix44 &, uint32_t);

	// CgsSpatialPartitionManager.h:202
	void StartFrustumTestJobs();

	// CgsSpatialPartitionManager.h:206
	void CompleteFrustumTestJobs(CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *);

private:
	// CgsSpatialPartitionManager.h:213
	void ProcessUpdateQueue(const InputBuffer_Update *);

}

