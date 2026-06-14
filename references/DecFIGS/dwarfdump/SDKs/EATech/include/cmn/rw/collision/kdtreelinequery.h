// kdtreelinequery.h:87
struct rw::collision::KdTreeLineQuery : public KdTreeLineQueryBase {
public:
	// kdtreelinequery.h:92
	void KdTreeLineQuery(const KDTree *, Vector3, Vector3, float32_t);

	// kdtreelinequery.h:98
	RwBool GetNext(uint32_t &);

	// kdtreelinequery.h:99
	RwBool GetNext(uint32_t &, uint32_t &);

	// kdtreelinequery.h:100
	void ClipEnd(float32_t);

}

