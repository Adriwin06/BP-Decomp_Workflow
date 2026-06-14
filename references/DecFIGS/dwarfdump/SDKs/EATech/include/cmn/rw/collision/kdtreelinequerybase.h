// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:18
	namespace collision {
		// Declaration
		struct KdTreeLineQueryBase {
			// kdtreelinequerybase.h:63
			struct StackElement {
				// kdtreelinequerybase.h:64
				rw::collision::KDTree::NodeRef m_nodeRef;

				// kdtreelinequerybase.h:65
				float32_t m_pa;

				// kdtreelinequerybase.h:66
				float32_t m_pb;

			}

		}

	}

}

// kdtreelinequerybase.h:46
struct rw::collision::KdTreeLineQueryBase {
	// kdtreelinequerybase.h:69
	const KDTree * m_kdtree;

	// kdtreelinequerybase.h:70
	AALineClipper m_lineClipper;

	// kdtreelinequerybase.h:72
	rw::collision::KdTreeLineQueryBase::StackElement[32] m_stack;

	// kdtreelinequerybase.h:73
	uint32_t m_top;

	// kdtreelinequerybase.h:75
	uint32_t m_leafCount;

	// kdtreelinequerybase.h:76
	uint32_t m_nextEntry;

public:
	// kdtreelinequerybase.h:51
	void KdTreeLineQueryBase(const KDTree *, Vector3, Vector3, float32_t);

	// kdtreelinequerybase.h:53
	void ProcessBranchNode();

}

