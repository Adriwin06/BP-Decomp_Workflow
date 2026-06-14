// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsCollisionResult.h:28
	namespace CgsCollision {
		// CgsCollisionResultList.h:39
		const int32_t[3] KAI_RESULT_TYPE_MEMORY_SIZE;

	}

}

// CgsCollisionResultList.h:60
struct CgsSceneManager::CgsCollision::CollisionResultList {
private:
	// CgsCollisionResultList.h:163
	void * mpaResults;

	// CgsCollisionResultList.h:164
	uint32_t mu32UserTagA;

	// CgsCollisionResultList.h:165
	uint16_t mu16UserTagB;

	// CgsCollisionResultList.h:166
	uint16_t mu16MaxNumResults;

	// CgsCollisionResultList.h:167
	uint16_t mu16NumResults;

	// CgsCollisionResultList.h:168
	uint8_t meResultType;

	// CgsCollisionResultList.h:169
	uint8_t mu8DataPadding;

public:
	// CgsCollisionResultList.h:63
	void Construct();

	// CgsCollisionResultList.h:66
	void Destruct();

	// CgsCollisionResultList.h:73
	bool Prepare(PrimitiveTestResult *, uint16_t, uint32_t, uint16_t);

	// CgsCollisionResultList.h:80
	// Declaration
	bool Prepare(LineTestResult *, uint16_t, uint32_t, uint16_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsCollisionResult.h:35
		typedef IntersectLinePolygonSoupResult LineTestResult;

	}

	// CgsCollisionResultList.h:85
	bool Prepare(uint32_t, uint16_t);

	// CgsCollisionResultList.h:88
	void Release();

	// CgsCollisionResultList.h:91
	int32_t GetMaxResultsDataSize() const;

	// CgsCollisionResultList.h:95
	int32_t GetUsedResultsDataSize() const;

	// CgsCollisionResultList.h:99
	void SetResultsMemory(void *);

	// CgsCollisionResultList.h:103
	const void * GetResultsMemory() const;

	// CgsCollisionResultList.h:107
	void * GetResultsMemory();

	// CgsCollisionResultList.h:111
	void AddResult(const PrimitiveTestResult *);

	// CgsCollisionResultList.h:119
	void AddResult(const LineTestResult *);

	// CgsCollisionResultList.h:127
	uint16_t GetNumResults() const;

	// CgsCollisionResultList.h:131
	uint16_t GetMaxNumResults() const;

	// CgsCollisionResultList.h:135
	const void * GetResultQueue() const;

	// CgsCollisionResultList.h:142
	const LineTestResult & GetLineTestResult(uint16_t) const;

	// CgsCollisionResultList.h:147
	const PrimitiveTestResult & GetPrimitiveTestResult(uint16_t) const;

	// CgsCollisionResultList.h:151
	uint32_t GetUserTagA() const;

	// CgsCollisionResultList.h:155
	uint16_t GetUserTagB() const;

	// CgsCollisionResultList.h:159
	void SetNumResults(uint16_t);

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsCollisionResult.h:28
	namespace CgsCollision {
		// CgsCollisionResultList.h:39
		const int32_t[3] KAI_RESULT_TYPE_MEMORY_SIZE;

	}

}

// CgsCollisionResultList.h:60
struct CgsSceneManager::CgsCollision::CollisionResultList {
private:
	// CgsCollisionResultList.h:163
	void * mpaResults;

	// CgsCollisionResultList.h:164
	uint32_t mu32UserTagA;

	// CgsCollisionResultList.h:165
	uint16_t mu16UserTagB;

	// CgsCollisionResultList.h:166
	uint16_t mu16MaxNumResults;

	// CgsCollisionResultList.h:167
	uint16_t mu16NumResults;

	// CgsCollisionResultList.h:168
	uint8_t meResultType;

	// CgsCollisionResultList.h:169
	uint8_t mu8DataPadding;

public:
	// CgsCollisionResultList.h:63
	void Construct();

	// CgsCollisionResultList.h:66
	void Destruct();

	// CgsCollisionResultList.h:73
	bool Prepare(PrimitiveTestResult *, uint16_t, uint32_t, uint16_t);

	// CgsCollisionResultList.h:80
	// Declaration
	bool Prepare() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsCollisionResult.h:35
		typedef IntersectLinePolygonSoupResult LineTestResult;

	}

	// CgsCollisionResultList.h:85
	bool Prepare(uint32_t, uint16_t);

	// CgsCollisionResultList.h:88
	void Release();

	// CgsCollisionResultList.h:91
	int32_t GetMaxResultsDataSize() const;

	// CgsCollisionResultList.h:95
	int32_t GetUsedResultsDataSize() const;

	// CgsCollisionResultList.h:99
	void SetResultsMemory(void *);

	// CgsCollisionResultList.h:103
	const void * GetResultsMemory() const;

	// CgsCollisionResultList.h:107
	void * GetResultsMemory();

	// CgsCollisionResultList.h:111
	void AddResult(const PrimitiveTestResult *);

	// CgsCollisionResultList.h:119
	void AddResult(const LineTestResult *);

	// CgsCollisionResultList.h:127
	uint16_t GetNumResults() const;

	// CgsCollisionResultList.h:131
	uint16_t GetMaxNumResults() const;

	// CgsCollisionResultList.h:135
	const void * GetResultQueue() const;

	// CgsCollisionResultList.h:142
	const LineTestResult & GetLineTestResult(uint16_t) const;

	// CgsCollisionResultList.h:147
	const PrimitiveTestResult & GetPrimitiveTestResult(uint16_t) const;

	// CgsCollisionResultList.h:151
	uint32_t GetUserTagA() const;

	// CgsCollisionResultList.h:155
	uint16_t GetUserTagB() const;

	// CgsCollisionResultList.h:159
	void SetNumResults(uint16_t);

}

// CgsCollisionJobDescription.h:25
namespace CgsSceneManager {
	// CgsCollisionJobDescription.h:28
	namespace CgsCollision {
		// CgsCollisionResultList.h:39
		const int32_t[3] KAI_RESULT_TYPE_MEMORY_SIZE;

	}

}

