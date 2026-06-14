// CgsCollisionJobDescription.h:25
namespace CgsSceneManager {
	// CgsCollisionJobDescription.h:28
	namespace CgsCollision {
		// Declaration
		struct LineWithPolySoupStreamJobDesc {
			// CgsLineWithPolySoupListJobDesc.h:112
			struct Data {
				// CgsLineWithPolySoupListJobDesc.h:114
				const PolygonSoupListSpatialMap * mpSpatialMap;

				// CgsLineWithPolySoupListJobDesc.h:115
				CgsMemory::SimpleDataStreamProducer * mpStream;

				// CgsLineWithPolySoupListJobDesc.h:116
				int32_t miMaxResultsPerLine;

				// CgsLineWithPolySoupListJobDesc.h:117
				bool mbTestNearest;

				// CgsLineWithPolySoupListJobDesc.h:118
				bool mbTestDoubleSided;

			}

		}

	}

}

// CgsLineWithPolySoupListJobDesc.h:54
struct CgsSceneManager::CgsCollision::LineWithPolySoupStreamJobDesc : public CollisionJobDescription {
public:
	// CgsLineWithPolySoupListJobDesc.h:88
	bool Prepare(const PolygonSoupListSpatialMap *, CgsMemory::SimpleDataStreamProducer *, int32_t, bool, bool);

	// CgsLineWithPolySoupListJobDesc.h:91
	const PolygonSoupListSpatialMap * GetSpatialMapPointer() const;

	// CgsLineWithPolySoupListJobDesc.h:95
	CgsMemory::SimpleDataStreamProducer * GetStream() const;

	// CgsLineWithPolySoupListJobDesc.h:99
	int32_t GetMaxResultsPerLine() const;

	// CgsLineWithPolySoupListJobDesc.h:103
	bool GetTestNearest() const;

	// CgsLineWithPolySoupListJobDesc.h:107
	bool GetTestDoubleSided() const;

private:
	// CgsLineWithPolySoupListJobDesc.h:122
	CgsSceneManager::CgsCollision::LineWithPolySoupStreamJobDesc::Data * GetData();

	// CgsLineWithPolySoupListJobDesc.h:126
	const CgsSceneManager::CgsCollision::LineWithPolySoupStreamJobDesc::Data * GetData() const;

}

// CgsLineWithPolySoupListJobDesc.h:72
extern const int32_t KI_HEADER_SIZE = 16;

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsCollisionResult.h:28
	namespace CgsCollision {
		// Declaration
		struct LineWithPolySoupStreamJobDesc {
			// CgsLineWithPolySoupListJobDesc.h:59
			struct StreamCommand {
				// CgsLineWithPolySoupListJobDesc.h:61
				Line mLine;

			}

			// CgsLineWithPolySoupListJobDesc.h:70
			struct StreamResult {
				// CgsLineWithPolySoupListJobDesc.h:72
				extern const int32_t KI_HEADER_SIZE = 16;

				// CgsLineWithPolySoupListJobDesc.h:75
				uint32_t muNumResults;

				// CgsLineWithPolySoupListJobDesc.h:76
				uint32_t[3] muPad;

				// CgsLineWithPolySoupListJobDesc.h:79
				LineTestResult[1] maResults;

			}

			// CgsLineWithPolySoupListJobDesc.h:112
			struct Data {
				// CgsLineWithPolySoupListJobDesc.h:114
				const CgsGeometric::PolygonSoupListSpatialMap * mpSpatialMap;

				// CgsLineWithPolySoupListJobDesc.h:115
				CgsMemory::SimpleDataStreamProducer * mpStream;

				// CgsLineWithPolySoupListJobDesc.h:116
				int32_t miMaxResultsPerLine;

				// CgsLineWithPolySoupListJobDesc.h:117
				bool mbTestNearest;

				// CgsLineWithPolySoupListJobDesc.h:118
				bool mbTestDoubleSided;

			}

		}

	}

}

// CgsLineWithPolySoupListJobDesc.h:54
struct CgsSceneManager::CgsCollision::LineWithPolySoupStreamJobDesc : public CollisionJobDescription {
public:
	// CgsLineWithPolySoupListJobDesc.h:88
	bool Prepare(const CgsGeometric::PolygonSoupListSpatialMap *, CgsMemory::SimpleDataStreamProducer *, int32_t, bool, bool);

	// CgsLineWithPolySoupListJobDesc.h:91
	const CgsGeometric::PolygonSoupListSpatialMap * GetSpatialMapPointer() const;

	// CgsLineWithPolySoupListJobDesc.h:95
	CgsMemory::SimpleDataStreamProducer * GetStream() const;

	// CgsLineWithPolySoupListJobDesc.h:99
	int32_t GetMaxResultsPerLine() const;

	// CgsLineWithPolySoupListJobDesc.h:103
	bool GetTestNearest() const;

	// CgsLineWithPolySoupListJobDesc.h:107
	bool GetTestDoubleSided() const;

private:
	// CgsLineWithPolySoupListJobDesc.h:122
	CgsSceneManager::CgsCollision::LineWithPolySoupStreamJobDesc::Data * GetData();

	// CgsLineWithPolySoupListJobDesc.h:126
	const CgsSceneManager::CgsCollision::LineWithPolySoupStreamJobDesc::Data * GetData() const;

}

