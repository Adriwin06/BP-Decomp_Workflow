// CgsLineWithTriangleListJobDesc.h:55
extern const int32_t KI_MAX_NUM_LINES = 5;

// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsCollisionResult.h:28
	namespace CgsCollision {
		// Declaration
		struct LineWithTriangleListStreamJobDesc {
			// CgsLineWithTriangleListJobDesc.h:59
			struct StreamCommand {
				// CgsLineWithTriangleListJobDesc.h:61
				Vector3[5] maLineStart;

				// CgsLineWithTriangleListJobDesc.h:62
				Vector3[5] maLineEnd;

				// CgsLineWithTriangleListJobDesc.h:63
				TriangleList mTriangleList;

				// CgsLineWithTriangleListJobDesc.h:64
				int32_t miNumLines;

			}

			// CgsLineWithTriangleListJobDesc.h:69
			struct StreamResult {
				// CgsLineWithTriangleListJobDesc.h:71
				Vector3[5] mIntersectPoints;

				// CgsLineWithTriangleListJobDesc.h:72
				Vector3[5] mIntersectNormals;

				// CgsLineWithTriangleListJobDesc.h:73
				uint32_t[5] muSurfaceTags;

				// CgsLineWithTriangleListJobDesc.h:74
				bool[5] mbIntersections;

			}

			// CgsLineWithTriangleListJobDesc.h:99
			struct Data {
				// CgsLineWithTriangleListJobDesc.h:101
				CgsMemory::SimpleDataStreamProducer * mpStreamProducer;

			}

		}

	}

}

// CgsLineWithTriangleListJobDesc.h:52
struct CgsSceneManager::CgsCollision::LineWithTriangleListStreamJobDesc : public CollisionJobDescription {
	// CgsLineWithTriangleListJobDesc.h:55
	extern const int32_t KI_MAX_NUM_LINES = 5;

public:
	// CgsLineWithTriangleListJobDesc.h:79
	void Construct();

	// CgsLineWithTriangleListJobDesc.h:82
	void Destruct();

	// CgsLineWithTriangleListJobDesc.h:86
	bool Prepare(CgsMemory::SimpleDataStreamProducer *);

	// CgsLineWithTriangleListJobDesc.h:89
	void Release();

	// CgsLineWithTriangleListJobDesc.h:92
	CgsMemory::SimpleDataStreamProducer * GetDataStreamProducer();

private:
	// CgsLineWithTriangleListJobDesc.h:105
	CgsSceneManager::CgsCollision::LineWithTriangleListStreamJobDesc::Data * GetData();

	// CgsLineWithTriangleListJobDesc.h:109
	const CgsSceneManager::CgsCollision::LineWithTriangleListStreamJobDesc::Data * GetData() const;

}

// CgsCollisionJobDescription.h:25
namespace CgsSceneManager {
	// CgsCollisionJobDescription.h:28
	namespace CgsCollision {
		// Declaration
		struct LineWithTriangleListStreamJobDesc {
			// CgsLineWithTriangleListJobDesc.h:99
			struct Data {
				// CgsLineWithTriangleListJobDesc.h:101
				CgsMemory::SimpleDataStreamProducer * mpStreamProducer;

			}

		}

	}

}

