// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsTriangleCacheManagerIO.h:29
	namespace TriangleCacheManagerIO {
		struct InEventAddToCache;

		struct InEventUpdateCachedPosition;

		struct InEventRemoveFromCache;

	}

}

// CgsTriangleCacheManagerIO.h:47
struct CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache : public Event {
	// CgsTriangleCacheManagerIO.h:49
	int32_t miCacheSlot;

	// CgsTriangleCacheManagerIO.h:50
	float32_t mfCacheSphereRadius;

}

// CgsTriangleCacheManagerIO.h:63
struct CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition : public Event {
	// CgsTriangleCacheManagerIO.h:66
	int32_t miCacheSlot;

	// CgsTriangleCacheManagerIO.h:67
	Vector3Plus mNewPositionAndRadius;

public:
	// CgsTriangleCacheManagerIO.h:71
	void SetNewPosition(Vector3);

	// CgsTriangleCacheManagerIO.h:78
	void SetRadius(float32_t);

	// CgsTriangleCacheManagerIO.h:84
	Vector3 GetNewPosition() const;

	// CgsTriangleCacheManagerIO.h:90
	float32_t GetSphereRadius() const;

}

// CgsTriangleCacheManagerIO.h:106
struct CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache : public Event {
	// CgsTriangleCacheManagerIO.h:108
	int32_t miCacheSlot;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsTriangleCacheManagerIO.h:29
	namespace TriangleCacheManagerIO {
		struct InEventAddToCache;

		struct InEventUpdateCachedPosition;

		struct InEventRemoveFromCache;

	}

}

// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsTriangleCacheManagerIO.h:29
	namespace TriangleCacheManagerIO {
	}

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsTriangleCacheManagerIO.h:29
	namespace TriangleCacheManagerIO {
	}

}

