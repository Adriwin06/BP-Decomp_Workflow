// kdtreebatchbboxquery.h:25
struct rw::collision::KdTreeBatchBBoxQueryResult {
	// kdtreebatchbboxquery.h:26
	uint32_t firstEntry;

	// kdtreebatchbboxquery.h:27
	uint32_t count;

}

// kdtreebatchbboxquery.h:40
struct rw::collision::KdTreeBatchBBoxQuery : public KdTreeBBoxQueryBase {
public:
	// kdtreebatchbboxquery.h:45
	void KdTreeBatchBBoxQuery();

	// kdtreebatchbboxquery.h:57
	void KdTreeBatchBBoxQuery(const KDTree *, const AABBox &);

	// kdtreebatchbboxquery.h:63
	RwBool GetBatch(KdTreeBatchBBoxQueryResult *, uint32_t, uint32_t &);

}

