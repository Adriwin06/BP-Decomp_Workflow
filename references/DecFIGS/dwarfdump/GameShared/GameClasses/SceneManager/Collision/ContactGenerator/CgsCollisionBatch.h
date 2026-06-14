// CgsCollisionBatch.h:63
struct CgsSceneManager::CgsCollision::CollisionBatch {
private:
	// CgsCollisionBatch.h:189
	Job mJob;

	// CgsCollisionBatch.h:190
	CollisionJobDescription mJobDescription;

public:
	// CgsCollisionBatch.h:67
	void Construct();

	// CgsCollisionBatch.h:70
	void Destruct();

	// CgsCollisionBatch.h:76
	bool PreparePrimitiveListAgainstPolySoupList(const CgsSceneManager::CgsCollision::PrimitivePairList *, const CgsGeometric::PolygonSoupListSpatialMap *, CollisionResultList *);

	// CgsCollisionBatch.h:84
	bool PrepareFillTriangleCache(const CgsGeometric::PolygonSoupListSpatialMap *, const Sphere *, Triangle4 *, uint16_t, CollisionResultList *);

	// CgsCollisionBatch.h:89
	bool PrepareFillTriangleCacheStream(const CgsGeometric::PolygonSoupListSpatialMap *, CgsMemory::SimpleDataStreamProducer *);

	// CgsCollisionBatch.h:97
	bool PrepareLineWithPolySoupStream(const CgsGeometric::PolygonSoupListSpatialMap *, CgsMemory::SimpleDataStreamProducer *, int32_t, bool, bool);

	// CgsCollisionBatch.h:105
	bool PrepareLineListWithPolySoupList(const CgsSceneManager::CgsCollision::LineList *, const CgsGeometric::PolygonSoupListSpatialMap *, CollisionResultList *, bool, bool);

	// CgsCollisionBatch.h:112
	bool PrepareSphereListWithTriangleList(const CgsSceneManager::CgsCollision::SphereList *, const CgsSceneManager::CgsCollision::TriangleList *, CollisionResultList *, float32_t);

	// CgsCollisionBatch.h:117
	bool PrepareSphereListWithTriangleListStream(CgsMemory::SimpleDataStreamProducer *, DebugRenderStreamReader *);

	// CgsCollisionBatch.h:124
	bool PrepareSweptSphereListWithTriangleList(const CgsSceneManager::CgsCollision::SweptSphereList *, const CgsSceneManager::CgsCollision::TriangleList *, CollisionResultList *, float32_t);

	// CgsCollisionBatch.h:129
	bool PrepareSweptSphereListWithTriangleListStream(CgsMemory::SimpleDataStreamProducer *, DebugRenderStreamReader *);

	// CgsCollisionBatch.h:136
	bool PrepareSphereListWithSphereList(const CgsSceneManager::CgsCollision::SphereList *, const CgsSceneManager::CgsCollision::SphereList *, CollisionResultList *, float32_t);

	// CgsCollisionBatch.h:140
	bool PrepareSphereListWithSphereListStream(CgsMemory::SimpleDataStreamProducer *);

	// CgsCollisionBatch.h:147
	bool PrepareBoxListWithTriangleList(const CgsSceneManager::CgsCollision::BoxList *, const CgsSceneManager::CgsCollision::TriangleList *, CollisionResultList *, float32_t);

	// CgsCollisionBatch.h:154
	bool PreparePrimitiveListAgainstTriangleList(const CgsSceneManager::CgsCollision::PrimitivePairList *, const CgsSceneManager::CgsCollision::TriangleList *, CollisionResultList *, bool);

	// CgsCollisionBatch.h:158
	bool PreparePrimitiveListWithTriangleListStream(CgsMemory::SimpleDataStreamProducer *);

	// CgsCollisionBatch.h:162
	bool PreparepLineWithTriangleListStream(CgsMemory::SimpleDataStreamProducer *);

	// CgsCollisionBatch.h:167
	bool PreparePrimitivePairList(const CgsSceneManager::CgsCollision::PrimitivePairList *, CollisionResultList *);

	// CgsCollisionBatch.h:170
	void Release();

	// CgsCollisionBatch.h:173
	EA::Jobs::Job * StartJob();

	// CgsCollisionBatch.h:176
	EA::Jobs::Job * StartPolySoupJob();

	// CgsCollisionBatch.h:179
	EA::Jobs::Job * SetupJob();

	// CgsCollisionBatch.h:182
	EA::Jobs::Job * SetupPolySoupJob();

	// CgsCollisionBatch.h:185
	void WaitOn();

}

// CgsCollisionBatch.h:63
struct CgsSceneManager::CgsCollision::CollisionBatch {
private:
	// CgsCollisionBatch.h:189
	Job mJob;

	// CgsCollisionBatch.h:190
	CollisionJobDescription mJobDescription;

public:
	// CgsCollisionBatch.h:67
	void Construct();

	// CgsCollisionBatch.h:70
	void Destruct();

	// CgsCollisionBatch.h:76
	bool PreparePrimitiveListAgainstPolySoupList(const CgsSceneManager::CgsCollision::PrimitivePairList *, const PolygonSoupListSpatialMap *, CgsSceneManager::CgsCollision::CollisionResultList *);

	// CgsCollisionBatch.h:84
	bool PrepareFillTriangleCache(const PolygonSoupListSpatialMap *, const Sphere *, CgsGeometric::Triangle4 *, uint16_t, CgsSceneManager::CgsCollision::CollisionResultList *);

	// CgsCollisionBatch.h:89
	bool PrepareFillTriangleCacheStream(const PolygonSoupListSpatialMap *, CgsMemory::SimpleDataStreamProducer *);

	// CgsCollisionBatch.h:97
	bool PrepareLineWithPolySoupStream(const PolygonSoupListSpatialMap *, CgsMemory::SimpleDataStreamProducer *, int32_t, bool, bool);

	// CgsCollisionBatch.h:105
	bool PrepareLineListWithPolySoupList(const LineList *, const PolygonSoupListSpatialMap *, CgsSceneManager::CgsCollision::CollisionResultList *, bool, bool);

	// CgsCollisionBatch.h:112
	bool PrepareSphereListWithTriangleList(const SphereList *, const TriangleList *, CgsSceneManager::CgsCollision::CollisionResultList *, float32_t);

	// CgsCollisionBatch.h:117
	bool PrepareSphereListWithTriangleListStream(CgsMemory::SimpleDataStreamProducer *, DebugRenderStreamReader *);

	// CgsCollisionBatch.h:124
	bool PrepareSweptSphereListWithTriangleList(const SweptSphereList *, const TriangleList *, CgsSceneManager::CgsCollision::CollisionResultList *, float32_t);

	// CgsCollisionBatch.h:129
	bool PrepareSweptSphereListWithTriangleListStream(CgsMemory::SimpleDataStreamProducer *, DebugRenderStreamReader *);

	// CgsCollisionBatch.h:136
	bool PrepareSphereListWithSphereList(const SphereList *, const SphereList *, CgsSceneManager::CgsCollision::CollisionResultList *, float32_t);

	// CgsCollisionBatch.h:140
	bool PrepareSphereListWithSphereListStream(CgsMemory::SimpleDataStreamProducer *);

	// CgsCollisionBatch.h:147
	bool PrepareBoxListWithTriangleList(const BoxList *, const TriangleList *, CgsSceneManager::CgsCollision::CollisionResultList *, float32_t);

	// CgsCollisionBatch.h:154
	bool PreparePrimitiveListAgainstTriangleList(const CgsSceneManager::CgsCollision::PrimitivePairList *, const TriangleList *, CgsSceneManager::CgsCollision::CollisionResultList *, bool);

	// CgsCollisionBatch.h:158
	bool PreparePrimitiveListWithTriangleListStream(CgsMemory::SimpleDataStreamProducer *);

	// CgsCollisionBatch.h:162
	bool PreparepLineWithTriangleListStream(CgsMemory::SimpleDataStreamProducer *);

	// CgsCollisionBatch.h:167
	bool PreparePrimitivePairList(const CgsSceneManager::CgsCollision::PrimitivePairList *, CgsSceneManager::CgsCollision::CollisionResultList *);

	// CgsCollisionBatch.h:170
	void Release();

	// CgsCollisionBatch.h:173
	EA::Jobs::Job * StartJob();

	// CgsCollisionBatch.h:176
	EA::Jobs::Job * StartPolySoupJob();

	// CgsCollisionBatch.h:179
	EA::Jobs::Job * SetupJob();

	// CgsCollisionBatch.h:182
	EA::Jobs::Job * SetupPolySoupJob();

	// CgsCollisionBatch.h:185
	void WaitOn();

}

