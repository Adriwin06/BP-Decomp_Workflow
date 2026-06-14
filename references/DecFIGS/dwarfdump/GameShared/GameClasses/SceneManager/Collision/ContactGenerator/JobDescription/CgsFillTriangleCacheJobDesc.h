// CgsCollisionJobDescription.h:25
namespace CgsSceneManager {
	// CgsCollisionJobDescription.h:28
	namespace CgsCollision {
		// Declaration
		struct FillTriangleCacheJobDesc {
			// CgsFillTriangleCacheJobDesc.h:98
			struct Data {
				// CgsFillTriangleCacheJobDesc.h:100
				Sphere mCacheSphere;

				// CgsFillTriangleCacheJobDesc.h:101
				const PolygonSoupListSpatialMap * mpSpatialMap;

				// CgsFillTriangleCacheJobDesc.h:102
				CgsGeometric::Triangle4 * mpaTrianglesDestination;

				// CgsFillTriangleCacheJobDesc.h:103
				uint16_t mu16MaxNumTriangles;

			}

		}

		// Declaration
		struct FillTriangleCacheStreamJobDesc {
			// CgsFillTriangleCacheJobDesc.h:174
			struct Data {
				// CgsFillTriangleCacheJobDesc.h:176
				const PolygonSoupListSpatialMap * mpSpatialMap;

				// CgsFillTriangleCacheJobDesc.h:177
				CgsMemory::SimpleDataStreamProducer * mpStreamProducer;

			}

		}

	}

}

// CgsFillTriangleCacheJobDesc.h:60
struct CgsSceneManager::CgsCollision::FillTriangleCacheJobDesc : public CollisionJobDescription {
public:
	// CgsFillTriangleCacheJobDesc.h:64
	void Construct();

	// CgsFillTriangleCacheJobDesc.h:67
	void Destruct();

	// CgsFillTriangleCacheJobDesc.h:75
	bool Prepare(const PolygonSoupListSpatialMap *, const Sphere *, CgsGeometric::Triangle4 *, uint16_t, CgsSceneManager::CgsCollision::CollisionResultList *);

	// CgsFillTriangleCacheJobDesc.h:78
	void Release();

	// CgsFillTriangleCacheJobDesc.h:81
	const PolygonSoupListSpatialMap * GetSpatialMapPointer() const;

	// CgsFillTriangleCacheJobDesc.h:85
	const Sphere * GetCacheSphere() const;

	// CgsFillTriangleCacheJobDesc.h:89
	CgsGeometric::Triangle4 * GetTriangleListMainMemoryDestination();

	// CgsFillTriangleCacheJobDesc.h:93
	int32_t GetMaxNumTriangles();

private:
	// CgsFillTriangleCacheJobDesc.h:107
	CgsSceneManager::CgsCollision::FillTriangleCacheJobDesc::Data * GetData();

	// CgsFillTriangleCacheJobDesc.h:111
	const CgsSceneManager::CgsCollision::FillTriangleCacheJobDesc::Data * GetData() const;

}

// CgsFillTriangleCacheJobDesc.h:126
struct CgsSceneManager::CgsCollision::FillTriangleCacheStreamJobDesc : public CollisionJobDescription {
public:
	// CgsFillTriangleCacheJobDesc.h:150
	void Construct();

	// CgsFillTriangleCacheJobDesc.h:153
	void Destruct();

	// CgsFillTriangleCacheJobDesc.h:158
	bool Prepare(const PolygonSoupListSpatialMap *, CgsMemory::SimpleDataStreamProducer *);

	// CgsFillTriangleCacheJobDesc.h:161
	void Release();

	// CgsFillTriangleCacheJobDesc.h:164
	const PolygonSoupListSpatialMap * GetSpatialMapPointer() const;

	// CgsFillTriangleCacheJobDesc.h:168
	CgsMemory::SimpleDataStreamProducer * GetDataStreamProducer();

private:
	// CgsFillTriangleCacheJobDesc.h:181
	CgsSceneManager::CgsCollision::FillTriangleCacheStreamJobDesc::Data * GetData();

	// CgsFillTriangleCacheJobDesc.h:185
	const CgsSceneManager::CgsCollision::FillTriangleCacheStreamJobDesc::Data * GetData() const;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsCollisionResult.h:28
	namespace CgsCollision {
		// Declaration
		struct FillTriangleCacheStreamJobDesc {
			// CgsFillTriangleCacheJobDesc.h:131
			struct StreamCommand {
				// CgsFillTriangleCacheJobDesc.h:133
				Sphere mCacheSphere;

				// CgsFillTriangleCacheJobDesc.h:134
				Triangle4 * mpaTrianglesDestination;

				// CgsFillTriangleCacheJobDesc.h:135
				uint16_t muMaxNumTriangles;

			}

			// CgsFillTriangleCacheJobDesc.h:141
			struct StreamResult {
				// CgsFillTriangleCacheJobDesc.h:143
				uint16_t muNumTriangles;

				// CgsFillTriangleCacheJobDesc.h:144
				int32_t miOverflow;

			}

			// CgsFillTriangleCacheJobDesc.h:174
			struct Data {
				// CgsFillTriangleCacheJobDesc.h:176
				const CgsGeometric::PolygonSoupListSpatialMap * mpSpatialMap;

				// CgsFillTriangleCacheJobDesc.h:177
				CgsMemory::SimpleDataStreamProducer * mpStreamProducer;

			}

		}

	}

}

// CgsFillTriangleCacheJobDesc.h:126
struct CgsSceneManager::CgsCollision::FillTriangleCacheStreamJobDesc : public CollisionJobDescription {
public:
	// CgsFillTriangleCacheJobDesc.h:150
	void Construct();

	// CgsFillTriangleCacheJobDesc.h:153
	void Destruct();

	// CgsFillTriangleCacheJobDesc.h:158
	bool Prepare(const CgsGeometric::PolygonSoupListSpatialMap *, CgsMemory::SimpleDataStreamProducer *);

	// CgsFillTriangleCacheJobDesc.h:161
	void Release();

	// CgsFillTriangleCacheJobDesc.h:164
	const CgsGeometric::PolygonSoupListSpatialMap * GetSpatialMapPointer() const;

	// CgsFillTriangleCacheJobDesc.h:168
	CgsMemory::SimpleDataStreamProducer * GetDataStreamProducer();

private:
	// CgsFillTriangleCacheJobDesc.h:181
	CgsSceneManager::CgsCollision::FillTriangleCacheStreamJobDesc::Data * GetData();

	// CgsFillTriangleCacheJobDesc.h:185
	const CgsSceneManager::CgsCollision::FillTriangleCacheStreamJobDesc::Data * GetData() const;

}

