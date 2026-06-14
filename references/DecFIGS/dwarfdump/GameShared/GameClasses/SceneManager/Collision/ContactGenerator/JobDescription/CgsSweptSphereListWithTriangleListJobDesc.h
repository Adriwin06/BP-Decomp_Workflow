// CgsCollisionJobDescription.h:25
namespace CgsSceneManager {
	// CgsCollisionJobDescription.h:28
	namespace CgsCollision {
		// Declaration
		struct SweptSphereListWithTriangleListJobDesc {
			// CgsSweptSphereListWithTriangleListJobDesc.h:88
			struct Data {
				// CgsSweptSphereListWithTriangleListJobDesc.h:90
				SweptSphereList mSweptSphereList;

				// CgsSweptSphereListWithTriangleListJobDesc.h:91
				TriangleList mTriangleList;

			}

		}

		// Declaration
		struct SweptSphereListWithTriangleListStreamJobDesc {
			// CgsSweptSphereListWithTriangleListJobDesc.h:108
			struct StreamCommand {
				// CgsSweptSphereListWithTriangleListJobDesc.h:110
				SweptSphereList mSphereList;

				// CgsSweptSphereListWithTriangleListJobDesc.h:111
				TriangleList mTriList;

				// CgsSweptSphereListWithTriangleListJobDesc.h:112
				float32_t mfPadding;

				// CgsSweptSphereListWithTriangleListJobDesc.h:113
				CgsSceneManager::CgsCollision::CollisionResultList * mpResultList;

			}

			// CgsSweptSphereListWithTriangleListJobDesc.h:137
			struct Data {
				// CgsSweptSphereListWithTriangleListJobDesc.h:139
				CgsMemory::SimpleDataStreamProducer * mpStreamProducer;

			}

		}

	}

}

// CgsSweptSphereListWithTriangleListJobDesc.h:51
struct CgsSceneManager::CgsCollision::SweptSphereListWithTriangleListJobDesc : public CollisionJobDescription {
public:
	// CgsSweptSphereListWithTriangleListJobDesc.h:55
	void Construct();

	// CgsSweptSphereListWithTriangleListJobDesc.h:58
	void Destruct();

	// CgsSweptSphereListWithTriangleListJobDesc.h:65
	bool Prepare(const SweptSphereList *, const TriangleList *, CgsSceneManager::CgsCollision::CollisionResultList *, float32_t);

	// CgsSweptSphereListWithTriangleListJobDesc.h:68
	void Release();

	// CgsSweptSphereListWithTriangleListJobDesc.h:71
	const SweptSphereList & GetSweptSphereList() const;

	// CgsSweptSphereListWithTriangleListJobDesc.h:75
	const TriangleList & GetTriangleList() const;

	// CgsSweptSphereListWithTriangleListJobDesc.h:79
	SweptSphereList & GetSphereList();

	// CgsSweptSphereListWithTriangleListJobDesc.h:83
	TriangleList & GetTriangleList();

private:
	// CgsSweptSphereListWithTriangleListJobDesc.h:95
	CgsSceneManager::CgsCollision::SweptSphereListWithTriangleListJobDesc::Data * GetData();

	// CgsSweptSphereListWithTriangleListJobDesc.h:99
	const CgsSceneManager::CgsCollision::SweptSphereListWithTriangleListJobDesc::Data * GetData() const;

}

// CgsSweptSphereListWithTriangleListJobDesc.h:104
struct CgsSceneManager::CgsCollision::SweptSphereListWithTriangleListStreamJobDesc : public CollisionJobDescription {
public:
	// CgsSweptSphereListWithTriangleListJobDesc.h:118
	void Construct();

	// CgsSweptSphereListWithTriangleListJobDesc.h:121
	void Destruct();

	// CgsSweptSphereListWithTriangleListJobDesc.h:126
	bool Prepare(CgsMemory::SimpleDataStreamProducer *, DebugRenderStreamReader *);

	// CgsSweptSphereListWithTriangleListJobDesc.h:129
	void Release();

	// CgsSweptSphereListWithTriangleListJobDesc.h:132
	CgsMemory::SimpleDataStreamProducer * GetDataStreamProducer();

private:
	// CgsSweptSphereListWithTriangleListJobDesc.h:143
	CgsSceneManager::CgsCollision::SweptSphereListWithTriangleListStreamJobDesc::Data * GetData();

	// CgsSweptSphereListWithTriangleListJobDesc.h:147
	const CgsSceneManager::CgsCollision::SweptSphereListWithTriangleListStreamJobDesc::Data * GetData() const;

}

