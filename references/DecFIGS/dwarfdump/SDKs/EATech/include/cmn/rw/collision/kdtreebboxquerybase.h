// kdtreebboxquerybase.h:29
struct rw::collision::KdTreeBBoxQueryBase {
	// kdtreebboxquerybase.h:36
	const KDTree * m_kdtree;

	// kdtreebboxquerybase.h:37
	AABBox m_bbox;

	// kdtreebboxquerybase.h:39
	uint32_t[32] m_stack;

	// kdtreebboxquerybase.h:40
	uint32_t m_top;

	// kdtreebboxquerybase.h:43
	uint32_t m_resultCount;

	// kdtreebboxquerybase.h:44
	uint32_t m_nextEntry;

public:
	// kdtreebboxquerybase.h:31
	void KdTreeBBoxQueryBase();

	// kdtreebboxquerybase.h:32
	void KdTreeBBoxQueryBase(const KDTree *, const AABBox &);

	// kdtreebboxquerybase.h:34
	void ProcessBranchNode();

}

