// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:18
	namespace collision {
		// Declaration
		struct KDTree {
			// kdtree.h:147
			struct NodeRef {
				// kdtree.h:148
				uint32_t m_content;

				// kdtree.h:149
				uint32_t m_index;

			}

			// kdtree.h:167
			struct BranchNode {
				// kdtree.h:168
				uint32_t m_parent;

				// kdtree.h:169
				uint32_t m_axis;

				// kdtree.h:170
				rw::collision::KDTree::NodeRef[2] m_childRefs;

				// kdtree.h:171
				float32_t[2] m_extents;

			}

		}

	}

}

// kdtree.h:123
struct rw::collision::KDTree {
	// kdtree.h:174
	rw::collision::KDTree::BranchNode * m_branchNodes;

	// kdtree.h:175
	uint32_t m_numBranchNodes;

	// kdtree.h:176
	uint32_t m_numEntries;

	// kdtree.h:177
	AABBox m_bbox;

private:
	// kdtree.h:125
	void KDTree();

public:
	// kdtree.h:192
	ResourceDescriptor GetResourceDescriptor(uint32_t, uint32_t, const AABBox &);

	// kdtree.h:220
	KDTree * Initialize(const Resource &, uint32_t, uint32_t, const AABBox &);

	// kdtree.h:245
	void Release();

	// kdtree.h:253
	RwBool IsValid() const;

	// kdtree.h:257
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// kdtree.h:260
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// kdtree.h:263
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// kdtree.h:276
	uint32_t GetNumBranchNodes() const;

	// kdtree.h:292
	uint32_t GetNumEntries() const;

	// kdtree.h:306
	const AABBox & GetBBox() const;

}

// kdtree.h:123
struct rw::collision::KDTree {
	// kdtree.h:174
	rw::collision::KDTree::BranchNode * m_branchNodes;

	// kdtree.h:175
	uint32_t m_numBranchNodes;

	// kdtree.h:176
	uint32_t m_numEntries;

	// kdtree.h:177
	AABBox m_bbox;

public:
	// kdtree.h:125
	void KDTree();

	// kdtree.h:192
	ResourceDescriptor GetResourceDescriptor(uint32_t, uint32_t, const AABBox &);

	// kdtree.h:220
	KDTree * Initialize(const Resource &, uint32_t, uint32_t, const AABBox &);

	// kdtree.h:245
	void Release();

	// kdtree.h:253
	RwBool IsValid() const;

	// kdtree.h:257
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// kdtree.h:260
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// kdtree.h:263
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// kdtree.h:276
	uint32_t GetNumBranchNodes() const;

	// kdtree.h:292
	uint32_t GetNumEntries() const;

	// kdtree.h:306
	const AABBox & GetBBox() const;

}

