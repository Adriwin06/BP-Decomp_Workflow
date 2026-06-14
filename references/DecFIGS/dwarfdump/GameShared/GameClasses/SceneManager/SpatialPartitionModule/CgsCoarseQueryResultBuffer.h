// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	struct EntityId;

	struct VolumeId;

	struct VolumeInstanceId;

	struct SceneQueryId;

	struct LineTestIntersection;

	struct ErrorEvent;

	struct VolumeSlot;

	struct CachedTriangleList;

	struct CacheSlot;

	struct TriangleCacheManager;

	struct DrawCollisionPolyCallbackData;

	struct Zone;

	struct ZoneList;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	struct EntityId;

	struct VolumeId;

	struct VolumeInstanceId;

	struct SceneQueryId;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	struct EntityId;

	struct VolumeId;

	struct VolumeInstanceId;

	struct SceneQueryId;

	struct LineTestIntersection;

	struct ErrorEvent;

	struct VolumeSlot;

	struct CachedTriangleList;

	struct CacheSlot;

	struct TriangleCacheManager;

	struct DrawCollisionPolyCallbackData;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	struct EntityId;

	struct VolumeId;

	struct VolumeInstanceId;

	struct SceneQueryId;

	struct VolumeSlot;

	struct CachedTriangleList;

	struct CacheSlot;

	struct TriangleCacheManager;

	struct DrawCollisionPolyCallbackData;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	struct EntityId;

	struct VolumeId;

	struct VolumeInstanceId;

	struct SceneQueryId;

	struct DrawCollisionPolyCallbackData;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	struct EntityId;

	struct VolumeId;

	struct VolumeInstanceId;

	struct SceneQueryId;

	struct LineTestIntersection;

	struct OverlappingPair;

	struct Contact;

	struct ErrorEvent;

	struct VolumeInstance;

	struct SceneManagerEntity;

	struct EntityManager;

	struct VolumeManager;

	struct VolumeSlot;

	struct VolumeManagerVolume;

	struct VolumeStore<4608>;

	struct CachedTriangleList;

	struct CacheSlot;

	struct TriangleCacheManager;

	struct SpatialPartitionConstructParams;

	struct SpatialPartitionEntity;

	struct SpatialPartitionEntityInfo;

	struct CoarseQueryResultBuffer<16384>;

	struct OverlappingIntervalPair;

	struct Interval;

	struct IntervalStackEntry;

	struct IntervalStack;

	struct ObjectToIntervalMap;

	struct IntervalList;

	struct CollidingPair;

	struct SceneSweeperDebugComponent;

	struct CollisionPair;

	struct ClusteredMeshBBoxQueryIterator;

	struct DrawCollisionPolyCallbackData;

	struct TriangleCollisionManager;

	struct TriangleCollisionDebugComponent;

	struct TriCacheCollisionBatch;

	struct TriCacheCollisionBatchResult;

	struct IntermedateContact;

	struct SceneManagerPerfMonHelper;

	struct CullingGroupManager;

	struct LooseOctreeNode;

	struct LooseOctreeNodeEntityInfo;

	struct JobCoarseResultBuffer;

	struct FrustumJobQueryInfo;

	struct FrustumTestJobData;

	struct LooseOctreeConstructParams;

	struct IntegrityCheckInfo;

	struct Zone;

	struct ZoneList;

	struct SceneManagerDebugComponent;

}

// CgsCoarseQueryResultBuffer.h:51
struct CgsSceneManager::CoarseQueryResultBuffer<16384> {
private:
	// CgsCoarseQueryResultBuffer.h:110
	uint16_t[16448] mau16Buffer;

	// CgsCoarseQueryResultBuffer.h:111
	int32_t miTotalNumResults;

	// CgsCoarseQueryResultBuffer.h:112
	int32_t miTotalBufferSize;

	// CgsCoarseQueryResultBuffer.h:113
	int32_t miCurrentResultsStartPosition;

	// CgsCoarseQueryResultBuffer.h:114
	int32_t miNumResultsAttemptedThisBatch;

	// CgsCoarseQueryResultBuffer.h:115
	uint32_t muNumBatches;

	// CgsCoarseQueryResultBuffer.h:116
	bool mbInABatch;

public:
	// CgsCoarseQueryResultBuffer.h:137
	void Construct();

	// CgsCoarseQueryResultBuffer.h:155
	void Destruct();

	// CgsCoarseQueryResultBuffer.h:174
	void Clear();

	// CgsCoarseQueryResultBuffer.h:365
	int32_t GetFreeSpace();

	// CgsCoarseQueryResultBuffer.h:198
	uint16_t * GetResultsBatch();

	// CgsCoarseQueryResultBuffer.h:217
	void BeginResultsBatch();

	// CgsCoarseQueryResultBuffer.h:244
	void EndResultsBatch();

	// CgsCoarseQueryResultBuffer.h:268
	bool PushResult(short unsigned int);

	// CgsCoarseQueryResultBuffer.h:298
	bool PushResults(const uint16_t *, unsigned int);

	// CgsCoarseQueryResultBuffer.h:326
	int32_t GetNumResultsWritten();

	// CgsCoarseQueryResultBuffer.h:346
	int32_t GetNumResultsAttempted();

	// CgsCoarseQueryResultBuffer.h:381
	uint32_t GetNumBatches();

	// CgsCoarseQueryResultBuffer.h:407
	const uint16_t * GetBatchByOffset(unsigned int, uint32_t *, uint32_t *) const;

}

