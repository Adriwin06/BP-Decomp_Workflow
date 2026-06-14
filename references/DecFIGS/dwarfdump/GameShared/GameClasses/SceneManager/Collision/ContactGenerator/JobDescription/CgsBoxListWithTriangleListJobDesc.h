// CgsBoxListWithTriangleListJobDesc.h:37
struct CgsSceneManager::CgsCollision::BoxList {
	// CgsBoxListWithTriangleListJobDesc.h:39
	Box * mpaBoxes;

	// CgsBoxListWithTriangleListJobDesc.h:40
	int32_t miNumBoxes;

public:
	// CgsBoxListWithTriangleListJobDesc.h:43
	int32_t GetBoxDataSize() const;

}

// CgsCollisionJobDescription.h:25
namespace CgsSceneManager {
	// CgsCollisionJobDescription.h:28
	namespace CgsCollision {
		// Declaration
		struct BoxListWithTriangleListJobDesc {
			// CgsBoxListWithTriangleListJobDesc.h:95
			struct Data {
				// CgsBoxListWithTriangleListJobDesc.h:97
				BoxList mBoxList;

				// CgsBoxListWithTriangleListJobDesc.h:98
				TriangleList mTriangleList;

			}

		}

	}

}

// CgsBoxListWithTriangleListJobDesc.h:58
struct CgsSceneManager::CgsCollision::BoxListWithTriangleListJobDesc : public CollisionJobDescription {
public:
	// CgsBoxListWithTriangleListJobDesc.h:62
	void Construct();

	// CgsBoxListWithTriangleListJobDesc.h:65
	void Destruct();

	// CgsBoxListWithTriangleListJobDesc.h:72
	bool Prepare(const BoxList *, const TriangleList *, CgsSceneManager::CgsCollision::CollisionResultList *, float32_t);

	// CgsBoxListWithTriangleListJobDesc.h:75
	void Release();

	// CgsBoxListWithTriangleListJobDesc.h:78
	const BoxList & GetBoxList() const;

	// CgsBoxListWithTriangleListJobDesc.h:82
	const TriangleList & GetTriangleList() const;

	// CgsBoxListWithTriangleListJobDesc.h:86
	BoxList & GetBoxList();

	// CgsBoxListWithTriangleListJobDesc.h:90
	TriangleList & GetTriangleList();

private:
	// CgsBoxListWithTriangleListJobDesc.h:102
	CgsSceneManager::CgsCollision::BoxListWithTriangleListJobDesc::Data * GetData();

	// CgsBoxListWithTriangleListJobDesc.h:106
	const CgsSceneManager::CgsCollision::BoxListWithTriangleListJobDesc::Data * GetData() const;

}

// CgsBoxListWithTriangleListJobDesc.h:37
struct CgsSceneManager::CgsCollision::BoxList {
	// CgsBoxListWithTriangleListJobDesc.h:39
	CgsGeometric::Box * mpaBoxes;

	// CgsBoxListWithTriangleListJobDesc.h:40
	int32_t miNumBoxes;

public:
	// CgsBoxListWithTriangleListJobDesc.h:43
	int32_t GetBoxDataSize() const;

}

