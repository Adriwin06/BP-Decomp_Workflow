// CgsCollisionJobDescription.h:25
namespace CgsSceneManager {
	// CgsCollisionJobDescription.h:28
	namespace CgsCollision {
		// Declaration
		struct PrimitivePairListJobDesc {
			// CgsPrimitivePairListJobDesc.h:73
			struct Data {
				// CgsPrimitivePairListJobDesc.h:75
				PrimitivePairList mPrimitivePairList;

			}

		}

	}

}

// CgsPrimitivePairListJobDesc.h:46
struct CgsSceneManager::CgsCollision::PrimitivePairListJobDesc : public CollisionJobDescription {
public:
	// CgsPrimitivePairListJobDesc.h:50
	void Construct();

	// CgsPrimitivePairListJobDesc.h:53
	void Destruct();

	// CgsPrimitivePairListJobDesc.h:58
	bool Prepare(const CgsSceneManager::CgsCollision::PrimitivePairList *, CgsSceneManager::CgsCollision::CollisionResultList *);

	// CgsPrimitivePairListJobDesc.h:61
	void Release();

	// CgsPrimitivePairListJobDesc.h:64
	const CgsSceneManager::CgsCollision::PrimitivePairList & GetPrimativePairList() const;

	// CgsPrimitivePairListJobDesc.h:68
	PrimitivePairList & GetPrimativePairList();

private:
	// CgsPrimitivePairListJobDesc.h:79
	CgsSceneManager::CgsCollision::PrimitivePairListJobDesc::Data * GetData();

	// CgsPrimitivePairListJobDesc.h:83
	const CgsSceneManager::CgsCollision::PrimitivePairListJobDesc::Data * GetData() const;

}

