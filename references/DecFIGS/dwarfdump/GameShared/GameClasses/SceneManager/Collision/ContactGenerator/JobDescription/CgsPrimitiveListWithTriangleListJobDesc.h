// CgsCollisionJobDescription.h:25
namespace CgsSceneManager {
	// CgsCollisionJobDescription.h:28
	namespace CgsCollision {
		// Declaration
		struct PrimitiveListWithTriangleListJobDesc {
			// CgsPrimitiveListWithTriangleListJobDesc.h:90
			struct Data {
				// CgsPrimitiveListWithTriangleListJobDesc.h:92
				PrimitivePairList mPrimitivePairList;

				// CgsPrimitiveListWithTriangleListJobDesc.h:93
				TriangleList mTriangleList;

				// CgsPrimitiveListWithTriangleListJobDesc.h:94
				bool mbUseOptimizedBoxTests;

			}

		}

		// Declaration
		struct PrimitiveListWithTriangleListStreamJobDesc {
			// CgsPrimitiveListWithTriangleListJobDesc.h:111
			struct StreamCommand {
				// CgsPrimitiveListWithTriangleListJobDesc.h:113
				PrimitivePairList mPairList;

				// CgsPrimitiveListWithTriangleListJobDesc.h:114
				TriangleList mTriangleList;

				// CgsPrimitiveListWithTriangleListJobDesc.h:115
				CgsSceneManager::CgsCollision::CollisionResultList * mpResultsList;

				// CgsPrimitiveListWithTriangleListJobDesc.h:116
				bool mbUseOptimisedBoxTests;

			}

			// CgsPrimitiveListWithTriangleListJobDesc.h:139
			struct Data {
				// CgsPrimitiveListWithTriangleListJobDesc.h:141
				CgsMemory::SimpleDataStreamProducer * mpStreamProducer;

			}

		}

	}

}

// CgsPrimitiveListWithTriangleListJobDesc.h:49
struct CgsSceneManager::CgsCollision::PrimitiveListWithTriangleListJobDesc : public CollisionJobDescription {
public:
	// CgsPrimitiveListWithTriangleListJobDesc.h:53
	void Construct();

	// CgsPrimitiveListWithTriangleListJobDesc.h:56
	void Destruct();

	// CgsPrimitiveListWithTriangleListJobDesc.h:63
	bool Prepare(const CgsSceneManager::CgsCollision::PrimitivePairList *, const TriangleList *, CgsSceneManager::CgsCollision::CollisionResultList *, bool);

	// CgsPrimitiveListWithTriangleListJobDesc.h:66
	void Release();

	// CgsPrimitiveListWithTriangleListJobDesc.h:69
	const CgsSceneManager::CgsCollision::PrimitivePairList & GetPrimativePairList() const;

	// CgsPrimitiveListWithTriangleListJobDesc.h:73
	PrimitivePairList & GetPrimativePairList();

	// CgsPrimitiveListWithTriangleListJobDesc.h:77
	TriangleList & GetTriangleList();

	// CgsPrimitiveListWithTriangleListJobDesc.h:81
	const TriangleList & GetTriangleList() const;

	// CgsPrimitiveListWithTriangleListJobDesc.h:85
	bool GetUseOptimizedBoxTests() const;

private:
	// CgsPrimitiveListWithTriangleListJobDesc.h:98
	CgsSceneManager::CgsCollision::PrimitiveListWithTriangleListJobDesc::Data * GetData();

	// CgsPrimitiveListWithTriangleListJobDesc.h:102
	const CgsSceneManager::CgsCollision::PrimitiveListWithTriangleListJobDesc::Data * GetData() const;

}

// CgsPrimitiveListWithTriangleListJobDesc.h:107
struct CgsSceneManager::CgsCollision::PrimitiveListWithTriangleListStreamJobDesc : public CollisionJobDescription {
public:
	// CgsPrimitiveListWithTriangleListJobDesc.h:121
	void Construct();

	// CgsPrimitiveListWithTriangleListJobDesc.h:124
	void Destruct();

	// CgsPrimitiveListWithTriangleListJobDesc.h:128
	bool Prepare(CgsMemory::SimpleDataStreamProducer *);

	// CgsPrimitiveListWithTriangleListJobDesc.h:131
	void Release();

	// CgsPrimitiveListWithTriangleListJobDesc.h:134
	CgsMemory::SimpleDataStreamProducer * GetDataStreamProducer();

private:
	// CgsPrimitiveListWithTriangleListJobDesc.h:145
	CgsSceneManager::CgsCollision::PrimitiveListWithTriangleListStreamJobDesc::Data * GetData();

	// CgsPrimitiveListWithTriangleListJobDesc.h:149
	const CgsSceneManager::CgsCollision::PrimitiveListWithTriangleListStreamJobDesc::Data * GetData() const;

}

