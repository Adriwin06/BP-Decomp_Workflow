// kdtreebboxquery.h:47
struct rw::collision::KdTreeBBoxQuery : public KdTreeBBoxQueryBase {
public:
	// kdtreebboxquery.h:49
	void KdTreeBBoxQuery(const KDTree *, const AABBox &);

	// kdtreebboxquery.h:54
	RwBool GetNext(uint32_t &, uint32_t &);

	// kdtreebboxquery.h:55
	RwBool GetNext(uint32_t &);

}

