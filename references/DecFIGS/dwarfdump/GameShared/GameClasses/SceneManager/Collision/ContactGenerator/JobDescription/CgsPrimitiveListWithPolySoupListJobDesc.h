// CgsCollisionJobDescription.h:25
namespace CgsSceneManager {
	// CgsCollisionJobDescription.h:28
	namespace CgsCollision {
		// Declaration
		struct PrimitiveListWithPolySoupListJobDesc {
			// CgsPrimitiveListWithPolySoupListJobDesc.h:79
			struct Data {
				// CgsPrimitiveListWithPolySoupListJobDesc.h:81
				PrimitivePairList mPrimitivePairList;

				// CgsPrimitiveListWithPolySoupListJobDesc.h:82
				PolygonSoupListSpatialMap mSpatialMap;

			}

		}

	}

}

// CgsPrimitiveListWithPolySoupListJobDesc.h:47
struct CgsSceneManager::CgsCollision::PrimitiveListWithPolySoupListJobDesc : public CollisionJobDescription {
public:
	// CgsPrimitiveListWithPolySoupListJobDesc.h:51
	void Construct();

	// CgsPrimitiveListWithPolySoupListJobDesc.h:54
	void Destruct();

	// CgsPrimitiveListWithPolySoupListJobDesc.h:60
	bool Prepare(const CgsSceneManager::CgsCollision::PrimitivePairList *, const PolygonSoupListSpatialMap *, CgsSceneManager::CgsCollision::CollisionResultList *);

	// CgsPrimitiveListWithPolySoupListJobDesc.h:63
	void Release();

	// CgsPrimitiveListWithPolySoupListJobDesc.h:66
	const CgsSceneManager::CgsCollision::PrimitivePairList & GetPrimativePairList() const;

	// CgsPrimitiveListWithPolySoupListJobDesc.h:70
	PrimitivePairList & GetPrimativePairList();

	// CgsPrimitiveListWithPolySoupListJobDesc.h:74
	const PolygonSoupListSpatialMap * GetSpatialMapPointer() const;

private:
	// CgsPrimitiveListWithPolySoupListJobDesc.h:86
	CgsSceneManager::CgsCollision::PrimitiveListWithPolySoupListJobDesc::Data * GetData();

	// CgsPrimitiveListWithPolySoupListJobDesc.h:90
	const CgsSceneManager::CgsCollision::PrimitiveListWithPolySoupListJobDesc::Data * GetData() const;

}

