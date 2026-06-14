// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsJobCoarseResultBuffer.h:28
	const uint32_t KU_JOB_RESULT_BUFFER_SIZE = 8192;

	// CgsJobCoarseResultBuffer.h:29
	const uint32_t KU_JOB_BUFFER_MAX_NUM_QUERIES = 16;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsJobCoarseResultBuffer.h:28
	const uint32_t KU_JOB_RESULT_BUFFER_SIZE = 8192;

	// CgsJobCoarseResultBuffer.h:29
	const uint32_t KU_JOB_BUFFER_MAX_NUM_QUERIES = 16;

}

// CgsJobCoarseResultBuffer.h:47
struct CgsSceneManager::JobCoarseResultBuffer {
	// CgsJobCoarseResultBuffer.h:82
	uint32_t muNumQueries;

	// CgsJobCoarseResultBuffer.h:83
	uint32_t muCurrentWriteOffset;

	// CgsJobCoarseResultBuffer.h:84
	uint32_t[16] maQueryOffsets;

	// CgsJobCoarseResultBuffer.h:85
	uint32_t[16] maQueryNumResults;

	// CgsJobCoarseResultBuffer.h:86
	uint16_t * mpu16Buffer;

public:
	// CgsJobCoarseResultBuffer.h:52
	void Construct(rw::IResourceAllocator *);

	// CgsJobCoarseResultBuffer.h:56
	void Clear();

}

