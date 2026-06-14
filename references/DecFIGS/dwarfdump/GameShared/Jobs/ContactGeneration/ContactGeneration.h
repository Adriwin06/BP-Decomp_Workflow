// ContactGeneration.h:34
struct PrimitiveInstanceBatch {
	// ContactGeneration.h:35
	GPInstance * instances;

	// ContactGeneration.h:36
	uint32_t numInstances;

}

// ContactGeneration.h:42
struct PrimitiveInstanceQuery {
	// ContactGeneration.h:43
	enum QueryType {
		HETROGENEOUS_PAIR = 1,
		HETROGENEOUS_BATCH_1XN = 2,
	}

	// ContactGeneration.h:49
	PrimitiveInstanceQuery::QueryType type;

	// ContactGeneration.h:50
	float32_t padding;

	// ContactGeneration.h:51
	PrimitiveInstanceBatch batch1;

	// ContactGeneration.h:52
	PrimitiveInstanceBatch batch2;

}

// ContactGeneration.h:58
struct ContactGenerationJobData {
	// ContactGeneration.h:59
	uint64_t mpQueries;

	// ContactGeneration.h:60
	uint64_t mpInstances;

	// ContactGeneration.h:61
	uint64_t mpIntersections;

	// ContactGeneration.h:63
	uint64_t mu64JobTime;

	// ContactGeneration.h:64
	uint64_t mu64NormalCCPTime;

	// ContactGeneration.h:65
	uint64_t mu64AABBFilteredCCPTime;

	// ContactGeneration.h:66
	uint64_t mu64AABBFilteringTime;

	// ContactGeneration.h:68
	uint32_t muNumQueries;

	// ContactGeneration.h:69
	uint32_t muNumInstances;

	// ContactGeneration.h:70
	uint32_t muMaxIntersections;

	// ContactGeneration.h:71
	uint32_t muNumIntersections;

	// ContactGeneration.h:73
	uint32_t muThreadId;

	// ContactGeneration.h:74
	uint32_t muJobStatus;

}

