// CgsEntityId.h:27
namespace CgsSceneManager {
	// FrustumTest.h:46
	const uint32_t KU_FRUSTUM_JOB_MAX_NUM_QUERIES = 10;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// FrustumTest.h:46
	const uint32_t KU_FRUSTUM_JOB_MAX_NUM_QUERIES = 10;

}

// FrustumTest.h:49
struct CgsSceneManager::FrustumJobQueryInfo {
	// FrustumTest.h:51
	Frustum[10] maFrustum;

	// FrustumTest.h:52
	Matrix44[10] maViewProjection;

	// FrustumTest.h:53
	uint32_t[10] max32EntityTypeFlags;

	// FrustumTest.h:54
	uint32_t muNumQueries;

}

// FrustumTest.h:59
struct CgsSceneManager::FrustumTestJobData {
	// FrustumTest.h:61
	LooseOctreeNode * mpRootNode;

	// FrustumTest.h:62
	LooseOctreeNodeEntityInfo * mpRootNodeInfo;

	// CgsSpatialPartition.h:107
	typedef IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> SpatialPartitionEntityNode;

	// FrustumTest.h:63
	FrustumTestJobData::SpatialPartitionEntityNode * mpEntityArray;

	// FrustumTest.h:64
	Sphere * mpEntityBoundingSphereArray;

	// FrustumTest.h:65
	uint32_t muNumNodes;

	// FrustumTest.h:66
	uint32_t muNumEntities;

	// FrustumTest.h:67
	FrustumJobQueryInfo mQueryInfo;

	// FrustumTest.h:68
	JobCoarseResultBuffer * mpResultBuffer;

	// FrustumTest.h:69
	uint32_t muMaxNumResults;

	// FrustumTest.h:70
	int32_t miDebugMode;

}

// _built-in_
namespace :: {
	// FrustumTest.h:94
	extern char[] _binary_FrustumTest_elf_start;

	// FrustumTest.h:95
	extern uint32_t _binary_FrustumTest_elf_size;

}

// FrustumTest.h:94
extern char[] _binary_FrustumTest_elf_start;

// FrustumTest.h:95
extern uint32_t _binary_FrustumTest_elf_size;

