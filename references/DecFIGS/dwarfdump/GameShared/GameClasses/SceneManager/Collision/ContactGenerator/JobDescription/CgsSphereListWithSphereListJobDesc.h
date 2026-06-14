// CgsCollisionJobDescription.h:25
namespace CgsSceneManager {
	// CgsCollisionJobDescription.h:28
	namespace CgsCollision {
		// Declaration
		struct SphereListWithSphereListJobDesc {
			// CgsSphereListWithSphereListJobDesc.h:88
			struct Data {
				// CgsSphereListWithSphereListJobDesc.h:90
				SphereList mSphereListA;

				// CgsSphereListWithSphereListJobDesc.h:91
				SphereList mSphereListB;

			}

		}

		// Declaration
		struct SphereListWithSphereListStreamJobDesc {
			// CgsSphereListWithSphereListJobDesc.h:108
			struct StreamCommand {
				// CgsSphereListWithSphereListJobDesc.h:110
				SphereList mSphereListA;

				// CgsSphereListWithSphereListJobDesc.h:111
				SphereList mSphereListB;

				// CgsSphereListWithSphereListJobDesc.h:112
				float32_t mfPadding;

				// CgsSphereListWithSphereListJobDesc.h:113
				CgsSceneManager::CgsCollision::CollisionResultList * mpResultList;

			}

			// CgsSphereListWithSphereListJobDesc.h:136
			struct Data {
				// CgsSphereListWithSphereListJobDesc.h:138
				CgsMemory::SimpleDataStreamProducer * mpStreamProducer;

			}

		}

	}

}

// CgsSphereListWithSphereListJobDesc.h:51
struct CgsSceneManager::CgsCollision::SphereListWithSphereListJobDesc : public CollisionJobDescription {
public:
	// CgsSphereListWithSphereListJobDesc.h:55
	void Construct();

	// CgsSphereListWithSphereListJobDesc.h:58
	void Destruct();

	// CgsSphereListWithSphereListJobDesc.h:65
	bool Prepare(const SphereList *, const SphereList *, CgsSceneManager::CgsCollision::CollisionResultList *, float32_t);

	// CgsSphereListWithSphereListJobDesc.h:68
	void Release();

	// CgsSphereListWithSphereListJobDesc.h:71
	const SphereList & GetSphereListA() const;

	// CgsSphereListWithSphereListJobDesc.h:75
	const SphereList & GetSphereListB() const;

	// CgsSphereListWithSphereListJobDesc.h:79
	SphereList & GetSphereListA();

	// CgsSphereListWithSphereListJobDesc.h:83
	SphereList & GetSphereListB();

private:
	// CgsSphereListWithSphereListJobDesc.h:95
	CgsSceneManager::CgsCollision::SphereListWithSphereListJobDesc::Data * GetData();

	// CgsSphereListWithSphereListJobDesc.h:99
	const CgsSceneManager::CgsCollision::SphereListWithSphereListJobDesc::Data * GetData() const;

}

// CgsSphereListWithSphereListJobDesc.h:104
struct CgsSceneManager::CgsCollision::SphereListWithSphereListStreamJobDesc : public CollisionJobDescription {
public:
	// CgsSphereListWithSphereListJobDesc.h:118
	void Construct();

	// CgsSphereListWithSphereListJobDesc.h:121
	void Destruct();

	// CgsSphereListWithSphereListJobDesc.h:125
	bool Prepare(CgsMemory::SimpleDataStreamProducer *);

	// CgsSphereListWithSphereListJobDesc.h:128
	void Release();

	// CgsSphereListWithSphereListJobDesc.h:131
	CgsMemory::SimpleDataStreamProducer * GetDataStreamProducer();

private:
	// CgsSphereListWithSphereListJobDesc.h:142
	CgsSceneManager::CgsCollision::SphereListWithSphereListStreamJobDesc::Data * GetData();

	// CgsSphereListWithSphereListJobDesc.h:146
	const CgsSceneManager::CgsCollision::SphereListWithSphereListStreamJobDesc::Data * GetData() const;

}

