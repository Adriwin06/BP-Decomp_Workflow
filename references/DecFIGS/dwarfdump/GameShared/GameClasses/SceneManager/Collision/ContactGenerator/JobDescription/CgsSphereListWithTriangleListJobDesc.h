// CgsCollisionJobDescription.h:25
namespace CgsSceneManager {
	// CgsCollisionJobDescription.h:28
	namespace CgsCollision {
		// Declaration
		struct SphereListWithTriangleListJobDesc {
			// CgsSphereListWithTriangleListJobDesc.h:89
			struct Data {
				// CgsSphereListWithTriangleListJobDesc.h:91
				SphereList mSphereList;

				// CgsSphereListWithTriangleListJobDesc.h:92
				TriangleList mTriangleList;

			}

		}

		// Declaration
		struct SphereListWithTriangleListStreamJobDesc {
			// CgsSphereListWithTriangleListJobDesc.h:109
			struct StreamCommand {
				// CgsSphereListWithTriangleListJobDesc.h:111
				SphereList mSphereList;

				// CgsSphereListWithTriangleListJobDesc.h:112
				TriangleList mTriList;

				// CgsSphereListWithTriangleListJobDesc.h:113
				float32_t mfPadding;

				// CgsSphereListWithTriangleListJobDesc.h:114
				CgsSceneManager::CgsCollision::CollisionResultList * mpResultList;

			}

			// CgsSphereListWithTriangleListJobDesc.h:138
			struct Data {
				// CgsSphereListWithTriangleListJobDesc.h:140
				CgsMemory::SimpleDataStreamProducer * mpStreamProducer;

			}

		}

	}

}

// CgsSphereListWithTriangleListJobDesc.h:52
struct CgsSceneManager::CgsCollision::SphereListWithTriangleListJobDesc : public CollisionJobDescription {
public:
	// CgsSphereListWithTriangleListJobDesc.h:56
	void Construct();

	// CgsSphereListWithTriangleListJobDesc.h:59
	void Destruct();

	// CgsSphereListWithTriangleListJobDesc.h:66
	bool Prepare(const SphereList *, const TriangleList *, CgsSceneManager::CgsCollision::CollisionResultList *, float32_t);

	// CgsSphereListWithTriangleListJobDesc.h:69
	void Release();

	// CgsSphereListWithTriangleListJobDesc.h:72
	const SphereList & GetSphereList() const;

	// CgsSphereListWithTriangleListJobDesc.h:76
	const TriangleList & GetTriangleList() const;

	// CgsSphereListWithTriangleListJobDesc.h:80
	SphereList & GetSphereList();

	// CgsSphereListWithTriangleListJobDesc.h:84
	TriangleList & GetTriangleList();

private:
	// CgsSphereListWithTriangleListJobDesc.h:96
	CgsSceneManager::CgsCollision::SphereListWithTriangleListJobDesc::Data * GetData();

	// CgsSphereListWithTriangleListJobDesc.h:100
	const CgsSceneManager::CgsCollision::SphereListWithTriangleListJobDesc::Data * GetData() const;

}

// CgsSphereListWithTriangleListJobDesc.h:105
struct CgsSceneManager::CgsCollision::SphereListWithTriangleListStreamJobDesc : public CollisionJobDescription {
public:
	// CgsSphereListWithTriangleListJobDesc.h:119
	void Construct();

	// CgsSphereListWithTriangleListJobDesc.h:122
	void Destruct();

	// CgsSphereListWithTriangleListJobDesc.h:127
	bool Prepare(CgsMemory::SimpleDataStreamProducer *, DebugRenderStreamReader *);

	// CgsSphereListWithTriangleListJobDesc.h:130
	void Release();

	// CgsSphereListWithTriangleListJobDesc.h:133
	CgsMemory::SimpleDataStreamProducer * GetDataStreamProducer();

private:
	// CgsSphereListWithTriangleListJobDesc.h:144
	CgsSceneManager::CgsCollision::SphereListWithTriangleListStreamJobDesc::Data * GetData();

	// CgsSphereListWithTriangleListJobDesc.h:148
	const CgsSceneManager::CgsCollision::SphereListWithTriangleListStreamJobDesc::Data * GetData() const;

}

