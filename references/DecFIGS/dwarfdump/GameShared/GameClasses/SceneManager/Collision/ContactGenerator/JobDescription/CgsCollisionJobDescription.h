// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsCollisionResult.h:28
	namespace CgsCollision {
		// Declaration
		struct CollisionJobDescription {
			// CgsCollisionJobDescription.h:53
			enum ECollisionType {
				E_COLLISION_TYPE_INVALID = 0,
				E_COLLISION_TYPE_PRIMITIVE_LIST_POLYSOUP_LIST = 1,
				E_COLLISION_TYPE_FILL_TRIANGLE_CACHE = 2,
				E_COLLISION_TYPE_FILL_TRIANGLE_CACHE_STREAM = 3,
				E_COLLISION_TYPE_LINE_POLYSOUP_STREAM = 4,
				E_COLLISION_TYPE_SPHERE_TRIANGLE = 5,
				E_COLLISION_TYPE_SPHERE_TRIANGLE_STREAM = 6,
				E_COLLISION_TYPE_SPHERE_SPHERE = 7,
				E_COLLISION_TYPE_SPHERE_SPHERE_STREAM = 8,
				E_COLLISION_TYPE_BOX_TRIANGLE = 9,
				E_COLLISION_TYPE_PRIMITIVE_LIST = 10,
				E_COLLISION_TYPE_PRIMITIVE_TRIANGLE_LIST = 11,
				E_COLLISION_TYPE_PRIMITIVE_TRIANGLE_LIST_STREAM = 12,
				E_COLLISION_TYPE_SWEPT_SPHERE_TRIANGLE = 13,
				E_COLLISION_TYPE_SWEPT_SPHERE_TRIANGLE_STREAM = 14,
				E_COLLISION_TYPE_LINE_LIST_POLYSOUP_LIST = 15,
				E_COLLISION_TYPE_LINE_TRIANGLE_LIST = 16,
				E_COLLISION_NUM_TYPES = 17,
			}

		}

	}

}

// CgsCollisionJobDescription.h:51
struct CgsSceneManager::CgsCollision::CollisionJobDescription {
protected:
	// CgsCollisionJobDescription.h:113
	extern const uint32_t KU_CLASS_SIZE = 256;

	// CgsCollisionJobDescription.h:114
	extern const uint32_t KU_MAX_DESC_DATA_SIZE = 240;

	// CgsCollisionJobDescription.h:116
	uint8_t[240] maData;

	// CgsCollisionJobDescription.h:117
	CollisionResultList * mpResultsList;

	// CgsCollisionJobDescription.h:118
	float32_t mfPadding;

	// CgsCollisionJobDescription.h:119
	DebugRenderStreamReader * mpDebugStream;

	// CgsCollisionJobDescription.h:120
	uint8_t[3] maDataPadding;

private:
	// CgsCollisionJobDescription.h:123
	uint8_t meType;

public:
	// CgsCollisionJobDescription.h:76
	void Construct();

	// CgsCollisionJobDescription.h:79
	void Destruct();

	// CgsCollisionJobDescription.h:86
	bool Prepare(CgsSceneManager::CgsCollision::CollisionJobDescription::ECollisionType, CollisionResultList *, float32_t, DebugRenderStreamReader *);

	// CgsCollisionJobDescription.h:89
	void Release();

	// CgsCollisionJobDescription.h:92
	CgsSceneManager::CgsCollision::CollisionJobDescription::ECollisionType GetCollisionType() const;

	// CgsCollisionJobDescription.h:96
	const CollisionResultList * GetResultsList() const;

	// CgsCollisionJobDescription.h:100
	CollisionResultList * GetResultsList();

	// CgsCollisionJobDescription.h:104
	float32_t GetPadding() const;

	// CgsCollisionJobDescription.h:108
	DebugRenderStreamReader * GetDebugStreamReader();

}

// CgsCollisionJobDescription.h:114
extern const uint32_t KU_MAX_DESC_DATA_SIZE = 240;

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsCollisionResult.h:28
	namespace CgsCollision {
		// Declaration
		struct CollisionJobDescription {
			// CgsCollisionJobDescription.h:53
			enum ECollisionType {
				E_COLLISION_TYPE_INVALID = 0,
				E_COLLISION_TYPE_PRIMITIVE_LIST_POLYSOUP_LIST = 1,
				E_COLLISION_TYPE_FILL_TRIANGLE_CACHE = 2,
				E_COLLISION_TYPE_FILL_TRIANGLE_CACHE_STREAM = 3,
				E_COLLISION_TYPE_LINE_POLYSOUP_STREAM = 4,
				E_COLLISION_TYPE_SPHERE_TRIANGLE = 5,
				E_COLLISION_TYPE_SPHERE_TRIANGLE_STREAM = 6,
				E_COLLISION_TYPE_SPHERE_SPHERE = 7,
				E_COLLISION_TYPE_SPHERE_SPHERE_STREAM = 8,
				E_COLLISION_TYPE_BOX_TRIANGLE = 9,
				E_COLLISION_TYPE_PRIMITIVE_LIST = 10,
				E_COLLISION_TYPE_PRIMITIVE_TRIANGLE_LIST = 11,
				E_COLLISION_TYPE_PRIMITIVE_TRIANGLE_LIST_STREAM = 12,
				E_COLLISION_TYPE_SWEPT_SPHERE_TRIANGLE = 13,
				E_COLLISION_TYPE_SWEPT_SPHERE_TRIANGLE_STREAM = 14,
				E_COLLISION_TYPE_LINE_LIST_POLYSOUP_LIST = 15,
				E_COLLISION_TYPE_LINE_TRIANGLE_LIST = 16,
				E_COLLISION_NUM_TYPES = 17,
			}

		}

	}

}

// CgsCollisionJobDescription.h:25
namespace CgsSceneManager {
	// CgsCollisionJobDescription.h:28
	namespace CgsCollision {
		// Declaration
		struct CollisionJobDescription {
			// CgsCollisionJobDescription.h:53
			enum ECollisionType {
				E_COLLISION_TYPE_INVALID = 0,
				E_COLLISION_TYPE_PRIMITIVE_LIST_POLYSOUP_LIST = 1,
				E_COLLISION_TYPE_FILL_TRIANGLE_CACHE = 2,
				E_COLLISION_TYPE_FILL_TRIANGLE_CACHE_STREAM = 3,
				E_COLLISION_TYPE_LINE_POLYSOUP_STREAM = 4,
				E_COLLISION_TYPE_SPHERE_TRIANGLE = 5,
				E_COLLISION_TYPE_SPHERE_TRIANGLE_STREAM = 6,
				E_COLLISION_TYPE_SPHERE_SPHERE = 7,
				E_COLLISION_TYPE_SPHERE_SPHERE_STREAM = 8,
				E_COLLISION_TYPE_BOX_TRIANGLE = 9,
				E_COLLISION_TYPE_PRIMITIVE_LIST = 10,
				E_COLLISION_TYPE_PRIMITIVE_TRIANGLE_LIST = 11,
				E_COLLISION_TYPE_PRIMITIVE_TRIANGLE_LIST_STREAM = 12,
				E_COLLISION_TYPE_SWEPT_SPHERE_TRIANGLE = 13,
				E_COLLISION_TYPE_SWEPT_SPHERE_TRIANGLE_STREAM = 14,
				E_COLLISION_TYPE_LINE_LIST_POLYSOUP_LIST = 15,
				E_COLLISION_TYPE_LINE_TRIANGLE_LIST = 16,
				E_COLLISION_NUM_TYPES = 17,
			}

		}

		struct CollisionResultList;

		struct SphereList;

		struct TriangleList;

		struct PrimitiveTestResult;

		struct BoxList;

		struct SweptSphereList;

		struct LineList;

		struct CollisionBatch;

		struct PrimitivePairListBuilder;

		struct BaseCollisionGenerator;

	}

}

// CgsCollisionJobDescription.h:51
struct CgsSceneManager::CgsCollision::CollisionJobDescription {
protected:
	// CgsCollisionJobDescription.h:113
	extern const uint32_t KU_CLASS_SIZE = 256;

	// CgsCollisionJobDescription.h:114
	extern const uint32_t KU_MAX_DESC_DATA_SIZE = 240;

	// CgsCollisionJobDescription.h:116
	uint8_t[240] maData;

	// CgsCollisionJobDescription.h:117
	CgsSceneManager::CgsCollision::CollisionResultList * mpResultsList;

	// CgsCollisionJobDescription.h:118
	float32_t mfPadding;

	// CgsCollisionJobDescription.h:119
	DebugRenderStreamReader * mpDebugStream;

	// CgsCollisionJobDescription.h:120
	uint8_t[3] maDataPadding;

private:
	// CgsCollisionJobDescription.h:123
	uint8_t meType;

public:
	// CgsCollisionJobDescription.h:76
	void Construct();

	// CgsCollisionJobDescription.h:79
	void Destruct();

	// CgsCollisionJobDescription.h:86
	bool Prepare(CgsSceneManager::CgsCollision::CollisionJobDescription::ECollisionType, CgsSceneManager::CgsCollision::CollisionResultList *, float32_t, DebugRenderStreamReader *);

	// CgsCollisionJobDescription.h:89
	void Release();

	// CgsCollisionJobDescription.h:92
	CgsSceneManager::CgsCollision::CollisionJobDescription::ECollisionType GetCollisionType() const;

	// CgsCollisionJobDescription.h:96
	const CgsSceneManager::CgsCollision::CollisionResultList * GetResultsList() const;

	// CgsCollisionJobDescription.h:100
	CgsSceneManager::CgsCollision::CollisionResultList * GetResultsList();

	// CgsCollisionJobDescription.h:104
	float32_t GetPadding() const;

	// CgsCollisionJobDescription.h:108
	DebugRenderStreamReader * GetDebugStreamReader();

}

// CgsCollisionJobDescription.h:113
extern const uint32_t KU_CLASS_SIZE = 256;

