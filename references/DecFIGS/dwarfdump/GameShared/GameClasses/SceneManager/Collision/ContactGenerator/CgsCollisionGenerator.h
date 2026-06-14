// CgsCollisionGenerator.h:63
struct CgsSceneManager::CgsCollision::BaseCollisionGenerator : public IOBuffer {
private:
	// CgsCollisionGenerator.h:314
	extern const uint16_t KU16_MAX_NUM_RESULTS = 2000;

	// CgsCollisionGenerator.h:318
	extern const uint16_t KU16_MAX_NUM_BATCHES = 32;

	// CgsCollisionGenerator.h:320
	extern const uint16_t KU16_MAX_NUM_RESULT_LISTS = 200;

	// CgsCollisionGenerator.h:322
	CollisionBatch[32] maCollisionBatches;

	// CgsCollisionGenerator.h:323
	CollisionResultList *[200] mapCollisionResultLists;

	// CgsCollisionGenerator.h:324
	LinearMalloc mCollisionResultsAllocator;

	// CgsCollisionGenerator.h:325
	uint16_t mu16NumUsedResultLists;

	// CgsCollisionGenerator.h:326
	uint16_t mu16NumUsedBatches;

	// CgsCollisionGenerator.h:327
	bool[32] mabUsedBatches;

	// CgsCollisionGenerator.h:329
	extern bool _mbInitializedPerfMons;

	// CgsCollisionGenerator.h:330
	extern int32_t _miStartJobsPerfMon;

public:
	// CgsCollisionGenerator.h:67
	void Construct();

	// CgsCollisionGenerator.h:70
	void Destruct();

	// CgsCollisionGenerator.h:73
	bool Prepare(void *, int32_t);

	// CgsCollisionGenerator.h:76
	void Release();

	// CgsCollisionGenerator.h:80
	void Finish();

	// CgsCollisionGenerator.h:88
	uint16_t CollidePrimitiveListAgainstPolySoupList(const CgsSceneManager::CgsCollision::PrimitivePairList *, const CgsGeometric::PolygonSoupListSpatialMap *, uint16_t, uint32_t, uint16_t);

	// CgsCollisionGenerator.h:97
	uint16_t FillTriangleCache(const CgsGeometric::PolygonSoupListSpatialMap *, const Sphere *, Triangle4 *, uint16_t, uint32_t, uint16_t);

	// CgsCollisionGenerator.h:101
	CgsMemory::SimpleDataStreamProducer * CreateFillTriangleCacheStream(int32_t);

	// CgsCollisionGenerator.h:106
	EA::Jobs::Job * RunFillTriangleCacheStream(const CgsGeometric::PolygonSoupListSpatialMap *, CgsMemory::SimpleDataStreamProducer *);

	// CgsCollisionGenerator.h:110
	CgsMemory::SimpleDataStreamProducer * CreateLineWithTriangleListStream(int32_t);

	// CgsCollisionGenerator.h:114
	EA::Jobs::Job * RunLineWithTriangleListStream(CgsMemory::SimpleDataStreamProducer *);

	// CgsCollisionGenerator.h:121
	uint16_t TestSphereAgainstPolySoupList(const Sphere *, const CgsGeometric::PolygonSoupListSpatialMap *, uint32_t, uint16_t);

	// CgsCollisionGenerator.h:126
	CgsMemory::SimpleDataStreamProducer * CreateCollideLineAgainstPolySoupStream(int32_t, int32_t);

	// CgsCollisionGenerator.h:134
	EA::Jobs::Job * RunCollideLineAgainstPolySoupStream(const CgsGeometric::PolygonSoupListSpatialMap *, CgsMemory::SimpleDataStreamProducer *, int32_t, bool, bool);

	// CgsCollisionGenerator.h:141
	uint16_t CollideLineAgainstPolySoupListNearest(const Line *, const CgsGeometric::PolygonSoupListSpatialMap *, uint32_t, uint16_t);

	// CgsCollisionGenerator.h:148
	uint16_t TestLineAgainstPolySoupListDoubleSided(const Line *, const CgsGeometric::PolygonSoupListSpatialMap *, uint32_t, uint16_t);

	// CgsCollisionGenerator.h:156
	uint16_t CollideLineAgainstPolySoupList(const Line *, const CgsGeometric::PolygonSoupListSpatialMap *, uint16_t, uint32_t, uint16_t);

	// CgsCollisionGenerator.h:165
	uint16_t CollideSphereListWithTriangleList(const CgsSceneManager::CgsCollision::SphereList *, const CgsSceneManager::CgsCollision::TriangleList *, uint16_t, float32_t, uint32_t, uint16_t);

	// CgsCollisionGenerator.h:175
	uint16_t AddSphereListWithTriangleListToStream(const CgsSceneManager::CgsCollision::SphereList *, const CgsSceneManager::CgsCollision::TriangleList *, uint16_t, float32_t, uint32_t, uint16_t, CgsMemory::SimpleDataStreamProducer *);

	// CgsCollisionGenerator.h:179
	CgsMemory::SimpleDataStreamProducer * CreateCollideSphereListWithTriangleListStream(int32_t);

	// CgsCollisionGenerator.h:184
	EA::Jobs::Job * RunCollideSphereListWithTriangleListStream(CgsMemory::SimpleDataStreamProducer *, DebugRenderStreamReader *);

	// CgsCollisionGenerator.h:193
	uint16_t CollideSweptSphereListWithTriangleList(const CgsSceneManager::CgsCollision::SweptSphereList *, const CgsSceneManager::CgsCollision::TriangleList *, uint16_t, float32_t, uint32_t, uint16_t);

	// CgsCollisionGenerator.h:203
	uint16_t AddSweptSphereListWithTriangleListToStream(const CgsSceneManager::CgsCollision::SweptSphereList *, const CgsSceneManager::CgsCollision::TriangleList *, uint16_t, float32_t, uint32_t, uint16_t, CgsMemory::SimpleDataStreamProducer *);

	// CgsCollisionGenerator.h:207
	CgsMemory::SimpleDataStreamProducer * CreateCollideSweptSphereListWithTriangleListStream(int32_t);

	// CgsCollisionGenerator.h:212
	EA::Jobs::Job * RunCollideSweptSphereListWithTriangleListStream(CgsMemory::SimpleDataStreamProducer *, DebugRenderStreamReader *);

	// CgsCollisionGenerator.h:221
	uint16_t CollideSphereListWithSphereList(const CgsSceneManager::CgsCollision::SphereList *, const CgsSceneManager::CgsCollision::SphereList *, uint16_t, float32_t, uint32_t, uint16_t);

	// CgsCollisionGenerator.h:231
	uint16_t AddSphereListWithSphereListToStream(const CgsSceneManager::CgsCollision::SphereList *, const CgsSceneManager::CgsCollision::SphereList *, uint16_t, float32_t, uint32_t, uint16_t, CgsMemory::SimpleDataStreamProducer *);

	// CgsCollisionGenerator.h:235
	CgsMemory::SimpleDataStreamProducer * CreateCollideSphereListWithSphereListStream(int32_t);

	// CgsCollisionGenerator.h:239
	EA::Jobs::Job * RunCollideSphereListWithSphereListStream(CgsMemory::SimpleDataStreamProducer *);

	// CgsCollisionGenerator.h:248
	uint16_t CollideBoxListWithTriangleList(const CgsSceneManager::CgsCollision::BoxList *, const CgsSceneManager::CgsCollision::TriangleList *, uint16_t, float32_t, uint32_t, uint16_t);

	// CgsCollisionGenerator.h:257
	uint16_t CollidePrimitiveListAgainstTriangleList(const CgsSceneManager::CgsCollision::PrimitivePairList *, const CgsSceneManager::CgsCollision::TriangleList *, uint16_t, uint32_t, uint16_t, bool);

	// CgsCollisionGenerator.h:267
	uint16_t AddPrimitiveListWithTriangleListToStream(const CgsSceneManager::CgsCollision::PrimitivePairList *, const CgsSceneManager::CgsCollision::TriangleList *, uint16_t, bool, uint32_t, uint16_t, CgsMemory::SimpleDataStreamProducer *);

	// CgsCollisionGenerator.h:271
	CgsMemory::SimpleDataStreamProducer * CreateCollidePrimitiveListWithTriangleListStream(int32_t);

	// CgsCollisionGenerator.h:275
	EA::Jobs::Job * RunCollidePrimitiveListWithTriangleListStream(CgsMemory::SimpleDataStreamProducer *);

	// CgsCollisionGenerator.h:285
	uint16_t CollideSweptSphereListWithTriangleList(const CgsSceneManager::CgsCollision::SphereList *, const CgsSceneManager::CgsCollision::TriangleList *, uint16_t, float32_t, uint32_t, uint16_t);

	// CgsCollisionGenerator.h:292
	uint16_t CollidePrimitivePairList(const CgsSceneManager::CgsCollision::PrimitivePairList *, uint16_t, uint32_t, uint16_t);

	// CgsCollisionGenerator.h:295
	void TestSphereTriangle();

	// CgsCollisionGenerator.h:298
	uint16_t GetNumUsedResultLists() const;

	// CgsCollisionGenerator.h:302
	CollisionResultList GetResultList(uint16_t) const;

	// CgsCollisionGenerator.h:306
	void ResetMemory();

private:
	// CgsCollisionGenerator.h:336
	uint16_t PrepareNewLineTestResultsList(uint16_t, uint32_t, uint16_t);

	// CgsCollisionGenerator.h:342
	uint16_t PrepareNewPrimitiveTestResultsList(uint16_t, uint32_t, uint16_t);

	// CgsCollisionGenerator.h:347
	uint16_t PrepareNewBaseResultsList(uint32_t, uint16_t);

	// CgsCollisionGenerator.h:350
	uint16_t CreateNewBatch();

	// CgsCollisionGenerator.h:353
	void FinishBatch(uint16_t);

	// CgsCollisionGenerator.h:356
	EA::Jobs::Job * AllocateJob();

}

// CgsCollisionGenerator.h:318
extern const uint16_t KU16_MAX_NUM_BATCHES = 32;

// CgsCollisionGenerator.h:320
extern const uint16_t KU16_MAX_NUM_RESULT_LISTS = 200;

// CgsCollisionGenerator.h:377
extern const int32_t KI_RESULTS_MEMORY_SIZE = 262144;

// CgsCollisionGenerator.h:390
extern const int32_t KI_RESULTS_MEMORY_SIZE = 2097152;

// CgsCollisionGenerator.h:382
struct CgsSceneManager::CgsCollision::CollisionGenerator : public BaseCollisionGenerator {
private:
	// CgsCollisionGenerator.h:390
	extern const int32_t KI_RESULTS_MEMORY_SIZE = 2097152;

	// CgsCollisionGenerator.h:391
	uint8_t[2097152] mau8CollisionResultsMemory;

public:
	// CgsCollisionGenerator.h:386
	bool Prepare();

}

// CgsCollisionGenerator.h:369
struct CgsSceneManager::CgsCollision::SmallCollisionGenerator : public BaseCollisionGenerator {
private:
	// CgsCollisionGenerator.h:377
	extern const int32_t KI_RESULTS_MEMORY_SIZE = 262144;

	// CgsCollisionGenerator.h:378
	uint8_t[262144] mau8CollisionResultsMemory;

public:
	// CgsCollisionGenerator.h:373
	bool Prepare();

}

// CgsCollisionGenerator.h:63
struct CgsSceneManager::CgsCollision::BaseCollisionGenerator : public IOBuffer {
private:
	// CgsCollisionGenerator.h:314
	extern const uint16_t KU16_MAX_NUM_RESULTS = 2000;

	// CgsCollisionGenerator.h:318
	extern const uint16_t KU16_MAX_NUM_BATCHES = 32;

	// CgsCollisionGenerator.h:320
	extern const uint16_t KU16_MAX_NUM_RESULT_LISTS = 200;

	// CgsCollisionGenerator.h:322
	CollisionBatch[32] maCollisionBatches;

	// CgsCollisionGenerator.h:323
	CgsSceneManager::CgsCollision::CollisionResultList *[200] mapCollisionResultLists;

	// CgsCollisionGenerator.h:324
	LinearMalloc mCollisionResultsAllocator;

	// CgsCollisionGenerator.h:325
	uint16_t mu16NumUsedResultLists;

	// CgsCollisionGenerator.h:326
	uint16_t mu16NumUsedBatches;

	// CgsCollisionGenerator.h:327
	bool[32] mabUsedBatches;

	// CgsCollisionGenerator.h:329
	extern bool _mbInitializedPerfMons;

	// CgsCollisionGenerator.h:330
	extern int32_t _miStartJobsPerfMon;

public:
	// CgsCollisionGenerator.h:67
	void Construct();

	// CgsCollisionGenerator.h:70
	void Destruct();

	// CgsCollisionGenerator.h:73
	bool Prepare(void *, int32_t);

	// CgsCollisionGenerator.h:76
	void Release();

	// CgsCollisionGenerator.h:80
	void Finish();

	// CgsCollisionGenerator.h:88
	uint16_t CollidePrimitiveListAgainstPolySoupList(const CgsSceneManager::CgsCollision::PrimitivePairList *, const PolygonSoupListSpatialMap *, uint16_t, uint32_t, uint16_t);

	// CgsCollisionGenerator.h:97
	// Declaration
	uint16_t FillTriangleCache(const PolygonSoupListSpatialMap *, const Sphere *, CgsGeometric::Triangle4 *, uint16_t, uint32_t, uint16_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsCollisionGenerator.cpp:418
		using namespace CgsGeometric;

	}

	// CgsCollisionGenerator.h:101
	CgsMemory::SimpleDataStreamProducer * CreateFillTriangleCacheStream(int32_t);

	// CgsCollisionGenerator.h:106
	EA::Jobs::Job * RunFillTriangleCacheStream(const PolygonSoupListSpatialMap *, CgsMemory::SimpleDataStreamProducer *);

	// CgsCollisionGenerator.h:110
	CgsMemory::SimpleDataStreamProducer * CreateLineWithTriangleListStream(int32_t);

	// CgsCollisionGenerator.h:114
	EA::Jobs::Job * RunLineWithTriangleListStream(CgsMemory::SimpleDataStreamProducer *);

	// CgsCollisionGenerator.h:121
	// Declaration
	uint16_t TestSphereAgainstPolySoupList(const Sphere *, const PolygonSoupListSpatialMap *, uint32_t, uint16_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsCollisionGenerator.cpp:820
		using namespace CgsGeometric;

	}

	// CgsCollisionGenerator.h:126
	CgsMemory::SimpleDataStreamProducer * CreateCollideLineAgainstPolySoupStream(int32_t, int32_t);

	// CgsCollisionGenerator.h:134
	EA::Jobs::Job * RunCollideLineAgainstPolySoupStream(const PolygonSoupListSpatialMap *, CgsMemory::SimpleDataStreamProducer *, int32_t, bool, bool);

	// CgsCollisionGenerator.h:141
	// Declaration
	uint16_t CollideLineAgainstPolySoupListNearest(const Line *, const PolygonSoupListSpatialMap *, uint32_t, uint16_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsCollisionGenerator.cpp:1066
		using namespace CgsGeometric;

	}

	// CgsCollisionGenerator.h:148
	// Declaration
	uint16_t TestLineAgainstPolySoupListDoubleSided(const Line *, const PolygonSoupListSpatialMap *, uint32_t, uint16_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsCollisionGenerator.cpp:1202
		using namespace CgsGeometric;

	}

	// CgsCollisionGenerator.h:156
	// Declaration
	uint16_t CollideLineAgainstPolySoupList(const Line *, const PolygonSoupListSpatialMap *, uint16_t, uint32_t, uint16_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsCollisionGenerator.cpp:923
		using namespace CgsGeometric;

	}

	// CgsCollisionGenerator.h:165
	uint16_t CollideSphereListWithTriangleList(const SphereList *, const TriangleList *, uint16_t, float32_t, uint32_t, uint16_t);

	// CgsCollisionGenerator.h:175
	uint16_t AddSphereListWithTriangleListToStream(const SphereList *, const TriangleList *, uint16_t, float32_t, uint32_t, uint16_t, CgsMemory::SimpleDataStreamProducer *);

	// CgsCollisionGenerator.h:179
	CgsMemory::SimpleDataStreamProducer * CreateCollideSphereListWithTriangleListStream(int32_t);

	// CgsCollisionGenerator.h:184
	EA::Jobs::Job * RunCollideSphereListWithTriangleListStream(CgsMemory::SimpleDataStreamProducer *, DebugRenderStreamReader *);

	// CgsCollisionGenerator.h:193
	uint16_t CollideSweptSphereListWithTriangleList(const SweptSphereList *, const TriangleList *, uint16_t, float32_t, uint32_t, uint16_t);

	// CgsCollisionGenerator.h:203
	uint16_t AddSweptSphereListWithTriangleListToStream(const SweptSphereList *, const TriangleList *, uint16_t, float32_t, uint32_t, uint16_t, CgsMemory::SimpleDataStreamProducer *);

	// CgsCollisionGenerator.h:207
	CgsMemory::SimpleDataStreamProducer * CreateCollideSweptSphereListWithTriangleListStream(int32_t);

	// CgsCollisionGenerator.h:212
	EA::Jobs::Job * RunCollideSweptSphereListWithTriangleListStream(CgsMemory::SimpleDataStreamProducer *, DebugRenderStreamReader *);

	// CgsCollisionGenerator.h:221
	uint16_t CollideSphereListWithSphereList(const SphereList *, const SphereList *, uint16_t, float32_t, uint32_t, uint16_t);

	// CgsCollisionGenerator.h:231
	uint16_t AddSphereListWithSphereListToStream(const SphereList *, const SphereList *, uint16_t, float32_t, uint32_t, uint16_t, CgsMemory::SimpleDataStreamProducer *);

	// CgsCollisionGenerator.h:235
	CgsMemory::SimpleDataStreamProducer * CreateCollideSphereListWithSphereListStream(int32_t);

	// CgsCollisionGenerator.h:239
	EA::Jobs::Job * RunCollideSphereListWithSphereListStream(CgsMemory::SimpleDataStreamProducer *);

	// CgsCollisionGenerator.h:248
	uint16_t CollideBoxListWithTriangleList(const BoxList *, const TriangleList *, uint16_t, float32_t, uint32_t, uint16_t);

	// CgsCollisionGenerator.h:257
	uint16_t CollidePrimitiveListAgainstTriangleList(const CgsSceneManager::CgsCollision::PrimitivePairList *, const TriangleList *, uint16_t, uint32_t, uint16_t, bool);

	// CgsCollisionGenerator.h:267
	uint16_t AddPrimitiveListWithTriangleListToStream(const CgsSceneManager::CgsCollision::PrimitivePairList *, const TriangleList *, uint16_t, bool, uint32_t, uint16_t, CgsMemory::SimpleDataStreamProducer *);

	// CgsCollisionGenerator.h:271
	CgsMemory::SimpleDataStreamProducer * CreateCollidePrimitiveListWithTriangleListStream(int32_t);

	// CgsCollisionGenerator.h:275
	EA::Jobs::Job * RunCollidePrimitiveListWithTriangleListStream(CgsMemory::SimpleDataStreamProducer *);

	// CgsCollisionGenerator.h:285
	uint16_t CollideSweptSphereListWithTriangleList(const SphereList *, const TriangleList *, uint16_t, float32_t, uint32_t, uint16_t);

	// CgsCollisionGenerator.h:292
	uint16_t CollidePrimitivePairList(const CgsSceneManager::CgsCollision::PrimitivePairList *, uint16_t, uint32_t, uint16_t);

	// CgsCollisionGenerator.h:295
	void TestSphereTriangle();

	// CgsCollisionGenerator.h:298
	uint16_t GetNumUsedResultLists() const;

	// CgsCollisionGenerator.h:302
	CollisionResultList GetResultList(uint16_t) const;

	// CgsCollisionGenerator.h:306
	void ResetMemory();

private:
	// CgsCollisionGenerator.h:336
	uint16_t PrepareNewLineTestResultsList(uint16_t, uint32_t, uint16_t);

	// CgsCollisionGenerator.h:342
	uint16_t PrepareNewPrimitiveTestResultsList(uint16_t, uint32_t, uint16_t);

	// CgsCollisionGenerator.h:347
	uint16_t PrepareNewBaseResultsList(uint32_t, uint16_t);

	// CgsCollisionGenerator.h:350
	uint16_t CreateNewBatch();

	// CgsCollisionGenerator.h:353
	void FinishBatch(uint16_t);

	// CgsCollisionGenerator.h:356
	EA::Jobs::Job * AllocateJob();

}

