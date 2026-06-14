// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsTriangleCacheManager.h:43
	const SetRaceCarCullingGroupEvent::CullingGroup K_CACHE_CULLINGGROUP_WORLD;

	// CgsTriangleCacheManager.h:44
	const InEventLineTestFine::EntityTypeFlags K_ENTITY_TYPE_FLAG_WORLD = 2;

}

// CgsTriangleCacheManager.h:78
struct CgsSceneManager::CacheSlot {
private:
	// CgsTriangleCacheManager.h:141
	Sphere mLastCachedSphere;

	// CgsTriangleCacheManager.h:144
	Vector3Plus mInnerSpherePositionAndRadius;

	// CgsTriangleCacheManager.h:145
	bool mbDebugRender;

	// CgsTriangleCacheManager.h:148
	int32_t miIndexIntoTriangleCache;

	// CgsTriangleCacheManager.h:149
	int32_t miNumCachedTriangleBatches;

	// CgsTriangleCacheManager.h:150
	int16_t miOverflow;

	// CgsTriangleCacheManager.h:151
	bool mbIsDirty;

public:
	// CgsTriangleCacheManager.h:83
	void Construct(int32_t);

	// CgsTriangleCacheManager.h:87
	void SetIsDirty(bool);

	// CgsTriangleCacheManager.h:91
	void SetOverflow(int32_t);

	// CgsTriangleCacheManager.h:94
	void Free();

	// CgsTriangleCacheManager.h:98
	void Use(const InEventAddToCache &);

	// CgsTriangleCacheManager.h:102
	void UpdateCachedObject(const InEventUpdateCachedPosition &);

	// CgsTriangleCacheManager.h:105
	int32_t GetIndexIntoTriangleCache() const;

	// CgsTriangleCacheManager.h:109
	void AddTrianglesForCachedObject(int32_t);

	// CgsTriangleCacheManager.h:112
	int32_t GetNumCachedTriangleBatches();

	// CgsTriangleCacheManager.h:115
	const Sphere & GetLastCachedSphere() const;

	// CgsTriangleCacheManager.h:119
	Vector3 GetLastCachedPosition() const;

	// CgsTriangleCacheManager.h:123
	VecFloat GetCacheSphereRadius() const;

	// CgsTriangleCacheManager.h:128
	void SetNumTriangleBatches(int32_t);

	// CgsTriangleCacheManager.h:132
	bool IsDirty() const;

	// CgsTriangleCacheManager.h:136
	int32_t GetOverflow() const;

}

// CgsTriangleCacheManager.h:169
struct CgsSceneManager::TriangleCacheManager {
	// CgsTriangleCacheManager.h:238
	extern int32_t siSetupFillTriangleCachePerfMon;

	// CgsTriangleCacheManager.h:239
	extern int32_t siFillTriangleCachePerfMon;

	// CgsTriangleCacheManager.h:240
	extern int32_t siProcessCollisionResultsPerfMon;

private:
	// CgsTriangleCacheManager.h:266
	CachedTriangleList mTrianglesForCachedObjects;

	// CgsTriangleCacheManager.h:267
	CacheSlot * mpaCachedObjectSlots;

	// CgsTriangleCacheManager.h:268
	BitArray<298u> mUsedCacheSlots;

	// CgsTriangleCacheManager.h:270
	CgsMemory::SimpleDataStreamProducer * mpUpdateTriangleCacheStream;

	// CgsTriangleCacheManager.h:271
	EA::Jobs::Job * mpUpdateTriangleCacheJob;

	// CgsTriangleCacheManager.h:274
	VecFloat mvfMaxRadiusSoFar;

	// CgsTriangleCacheManager.h:283
	bool mbDEBUGForceAllDirty;

public:
	// CgsTriangleCacheManager.h:175
	void Construct();

	// CgsTriangleCacheManager.h:179
	bool Prepare(rw::IResourceAllocator *);

	// CgsTriangleCacheManager.h:182
	bool Release();

	// CgsTriangleCacheManager.h:185
	void Destruct();

	// CgsTriangleCacheManager.h:192
	void ProcessRemoveFromCacheEvents(const CgsSceneManager::SceneManagerIO::InSceneUpdateInterface *);

	// CgsTriangleCacheManager.h:196
	// Declaration
	void ProcessAddToCacheEvents() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTriangleCacheManagerIO.h:112
		typedef CgsModule::EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache,298> InAddCachedObjectQueue;

	}

	// CgsTriangleCacheManager.h:200
	// Declaration
	void ProcessUpdateCachedPositionEvents() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTriangleCacheManagerIO.h:113
		typedef CgsModule::EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition,298> InUpdateCachedObjectPositionQueue;

	}

	// CgsTriangleCacheManager.h:207
	void StartUpdateTriangleCaches(BaseCollisionGenerator *, const CgsGeometric::PolygonSoupListSpatialMap *);

	// CgsTriangleCacheManager.h:212
	void EndUpdateTriangleCaches(BaseCollisionGenerator *, const CgsGeometric::PolygonSoupListSpatialMap *);

	// CgsTriangleCacheManager.h:217
	void UpdateTriangleCaches(BaseCollisionGenerator *, const CgsGeometric::PolygonSoupListSpatialMap *);

	// CgsTriangleCacheManager.h:222
	void GetSceneQueriesForCachedObjects(CgsSceneManager::SceneManagerIO::InputBuffer_Query *);

	// CgsTriangleCacheManager.h:228
	const Triangle4 * GetTrianglesForCachedObject(int32_t) const;

	// CgsTriangleCacheManager.h:234
	int32_t GetNumTriangleBatchesForCachedObject(int32_t) const;

private:
	// CgsTriangleCacheManager.h:261
	CacheSlot * GetCachedObjectSlot(int32_t);

}

// CgsTriangleCacheManager.h:169
struct CgsSceneManager::TriangleCacheManager {
	// CgsTriangleCacheManager.h:238
	extern int32_t siSetupFillTriangleCachePerfMon;

	// CgsTriangleCacheManager.h:239
	extern int32_t siFillTriangleCachePerfMon;

	// CgsTriangleCacheManager.h:240
	extern int32_t siProcessCollisionResultsPerfMon;

private:
	// CgsTriangleCacheManager.h:266
	CachedTriangleList mTrianglesForCachedObjects;

	// CgsTriangleCacheManager.h:267
	CacheSlot * mpaCachedObjectSlots;

	// CgsTriangleCacheManager.h:268
	BitArray<298u> mUsedCacheSlots;

	// CgsTriangleCacheManager.h:270
	CgsMemory::SimpleDataStreamProducer * mpUpdateTriangleCacheStream;

	// CgsTriangleCacheManager.h:271
	EA::Jobs::Job * mpUpdateTriangleCacheJob;

	// CgsTriangleCacheManager.h:274
	VecFloat mvfMaxRadiusSoFar;

	// CgsTriangleCacheManager.h:283
	bool mbDEBUGForceAllDirty;

public:
	// CgsTriangleCacheManager.h:175
	void Construct();

	// CgsTriangleCacheManager.h:179
	bool Prepare(rw::IResourceAllocator *);

	// CgsTriangleCacheManager.h:182
	bool Release();

	// CgsTriangleCacheManager.h:185
	void Destruct();

	// CgsTriangleCacheManager.h:192
	void ProcessRemoveFromCacheEvents(const CgsSceneManager::SceneManagerIO::InSceneUpdateInterface *);

	// CgsTriangleCacheManager.h:196
	// Declaration
	void ProcessAddToCacheEvents() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTriangleCacheManagerIO.h:112
		typedef CgsModule::EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache,298> InAddCachedObjectQueue;

	}

	// CgsTriangleCacheManager.h:200
	// Declaration
	void ProcessUpdateCachedPositionEvents(const InUpdateCachedObjectPositionQueue &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTriangleCacheManagerIO.h:113
		typedef CgsModule::EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition,298> InUpdateCachedObjectPositionQueue;

	}

	// CgsTriangleCacheManager.h:207
	void StartUpdateTriangleCaches(BaseCollisionGenerator *, const CgsGeometric::PolygonSoupListSpatialMap *);

	// CgsTriangleCacheManager.h:212
	void EndUpdateTriangleCaches(BaseCollisionGenerator *, const CgsGeometric::PolygonSoupListSpatialMap *);

	// CgsTriangleCacheManager.h:217
	void UpdateTriangleCaches(BaseCollisionGenerator *, const CgsGeometric::PolygonSoupListSpatialMap *);

	// CgsTriangleCacheManager.h:222
	void GetSceneQueriesForCachedObjects(CgsSceneManager::SceneManagerIO::InputBuffer_Query *);

	// CgsTriangleCacheManager.h:228
	const Triangle4 * GetTrianglesForCachedObject(int32_t) const;

	// CgsTriangleCacheManager.h:234
	int32_t GetNumTriangleBatchesForCachedObject(int32_t) const;

private:
	// CgsTriangleCacheManager.h:261
	CacheSlot * GetCachedObjectSlot(int32_t);

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsTriangleCacheManager.h:43
	const InEventAddForCollision::CullingGroup K_CACHE_CULLINGGROUP_WORLD;

	// CgsTriangleCacheManager.h:44
	const InEventAddEntity::EntityTypeFlags K_ENTITY_TYPE_FLAG_WORLD = 2;

}

// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsTriangleCacheManager.h:43
	const SetRaceCarCullingGroupEvent::CullingGroup K_CACHE_CULLINGGROUP_WORLD;

	// CgsTriangleCacheManager.h:44
	const InEventAddEntity::EntityTypeFlags K_ENTITY_TYPE_FLAG_WORLD = 2;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsTriangleCacheManager.h:43
	const SetRaceCarCullingGroupEvent::CullingGroup K_CACHE_CULLINGGROUP_WORLD;

	// CgsTriangleCacheManager.h:44
	const InEventLineTestFine::EntityTypeFlags K_ENTITY_TYPE_FLAG_WORLD = 2;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsTriangleCacheManager.h:43
	const SetRaceCarCullingGroupEvent::CullingGroup K_CACHE_CULLINGGROUP_WORLD;

	// CgsTriangleCacheManager.h:44
	const InEventAddEntity::EntityTypeFlags K_ENTITY_TYPE_FLAG_WORLD = 2;

}

// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsTriangleCacheManager.h:43
	const InEventAddForCollision::CullingGroup K_CACHE_CULLINGGROUP_WORLD;

	// CgsTriangleCacheManager.h:44
	const InEventLineTestFine::EntityTypeFlags K_ENTITY_TYPE_FLAG_WORLD = 2;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsTriangleCacheManager.h:43
	const InEventAddForCollision::CullingGroup K_CACHE_CULLINGGROUP_WORLD;

	// CgsTriangleCacheManager.h:44
	const InEventLineTestFine::EntityTypeFlags K_ENTITY_TYPE_FLAG_WORLD = 2;

}

// CgsTriangleCacheManager.h:169
struct CgsSceneManager::TriangleCacheManager {
	// CgsTriangleCacheManager.h:238
	extern int32_t siSetupFillTriangleCachePerfMon;

	// CgsTriangleCacheManager.h:239
	extern int32_t siFillTriangleCachePerfMon;

	// CgsTriangleCacheManager.h:240
	extern int32_t siProcessCollisionResultsPerfMon;

private:
	// CgsTriangleCacheManager.h:266
	CachedTriangleList mTrianglesForCachedObjects;

	// CgsTriangleCacheManager.h:267
	CacheSlot * mpaCachedObjectSlots;

	// CgsTriangleCacheManager.h:268
	BitArray<298u> mUsedCacheSlots;

	// CgsTriangleCacheManager.h:270
	CgsMemory::SimpleDataStreamProducer * mpUpdateTriangleCacheStream;

	// CgsTriangleCacheManager.h:271
	EA::Jobs::Job * mpUpdateTriangleCacheJob;

	// CgsTriangleCacheManager.h:274
	VecFloat mvfMaxRadiusSoFar;

	// CgsTriangleCacheManager.h:283
	bool mbDEBUGForceAllDirty;

public:
	// CgsTriangleCacheManager.h:175
	void Construct();

	// CgsTriangleCacheManager.h:179
	bool Prepare(rw::IResourceAllocator *);

	// CgsTriangleCacheManager.h:182
	bool Release();

	// CgsTriangleCacheManager.h:185
	void Destruct();

	// CgsTriangleCacheManager.h:192
	void ProcessRemoveFromCacheEvents(const CgsSceneManager::SceneManagerIO::InSceneUpdateInterface *);

	// CgsTriangleCacheManager.h:196
	// Declaration
	void ProcessAddToCacheEvents(const InAddCachedObjectQueue &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTriangleCacheManagerIO.h:112
		typedef CgsModule::EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache,298> InAddCachedObjectQueue;

	}

	// CgsTriangleCacheManager.h:200
	// Declaration
	void ProcessUpdateCachedPositionEvents(const InUpdateCachedObjectPositionQueue &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTriangleCacheManagerIO.h:113
		typedef CgsModule::EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition,298> InUpdateCachedObjectPositionQueue;

		// CgsTriangleCacheManager.cpp:338
		using namespace CgsDev::Message;

	}

	// CgsTriangleCacheManager.h:207
	void StartUpdateTriangleCaches(BaseCollisionGenerator *, const CgsGeometric::PolygonSoupListSpatialMap *);

	// CgsTriangleCacheManager.h:212
	void EndUpdateTriangleCaches(BaseCollisionGenerator *, const CgsGeometric::PolygonSoupListSpatialMap *);

	// CgsTriangleCacheManager.h:217
	void UpdateTriangleCaches(BaseCollisionGenerator *, const CgsGeometric::PolygonSoupListSpatialMap *);

	// CgsTriangleCacheManager.h:222
	void GetSceneQueriesForCachedObjects(CgsSceneManager::SceneManagerIO::InputBuffer_Query *);

	// CgsTriangleCacheManager.h:228
	const Triangle4 * GetTrianglesForCachedObject(int32_t) const;

	// CgsTriangleCacheManager.h:234
	int32_t GetNumTriangleBatchesForCachedObject(int32_t) const;

private:
	// CgsTriangleCacheManager.h:261
	CacheSlot * GetCachedObjectSlot(int32_t);

}

