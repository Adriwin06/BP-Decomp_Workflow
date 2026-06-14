// CgsCollisionJobDescription.h:25
namespace CgsSceneManager {
	// CgsCollisionJobDescription.h:28
	namespace CgsCollision {
		// Declaration
		struct LineListWithPolySoupListJobDesc {
			// CgsLineListWithPolySoupListJobDesc.h:93
			struct Data {
				// CgsLineListWithPolySoupListJobDesc.h:95
				const LineList * mpLineList;

				// CgsLineListWithPolySoupListJobDesc.h:96
				const PolygonSoupListSpatialMap * mpSpatialMap;

				// CgsLineListWithPolySoupListJobDesc.h:97
				bool mbTestNearest;

				// CgsLineListWithPolySoupListJobDesc.h:98
				bool mbTestDoubleSided;

			}

		}

	}

}

// CgsLineListWithPolySoupListJobDesc.h:53
struct CgsSceneManager::CgsCollision::LineListWithPolySoupListJobDesc : public CollisionJobDescription {
public:
	// CgsLineListWithPolySoupListJobDesc.h:57
	void Construct();

	// CgsLineListWithPolySoupListJobDesc.h:60
	void Destruct();

	// CgsLineListWithPolySoupListJobDesc.h:68
	bool Prepare(const LineList *, const PolygonSoupListSpatialMap *, bool, bool, CgsSceneManager::CgsCollision::CollisionResultList *);

	// CgsLineListWithPolySoupListJobDesc.h:71
	void Release();

	// CgsLineListWithPolySoupListJobDesc.h:74
	const LineList * GetLineList() const;

	// CgsLineListWithPolySoupListJobDesc.h:77
	const Line & GetLine(int32_t) const;

	// CgsLineListWithPolySoupListJobDesc.h:80
	int32_t GetNumLines() const;

	// CgsLineListWithPolySoupListJobDesc.h:83
	const PolygonSoupListSpatialMap * GetSpatialMapPointer() const;

	// CgsLineListWithPolySoupListJobDesc.h:86
	bool IsTestNearest() const;

	// CgsLineListWithPolySoupListJobDesc.h:89
	bool IsDoubleSided() const;

private:
	// CgsLineListWithPolySoupListJobDesc.h:102
	CgsSceneManager::CgsCollision::LineListWithPolySoupListJobDesc::Data * GetData();

	// CgsLineListWithPolySoupListJobDesc.h:105
	const CgsSceneManager::CgsCollision::LineListWithPolySoupListJobDesc::Data * GetData() const;

}

