// BrnTrafficPvs.h:46
struct BrnTraffic::Pvs {
private:
	// BrnTrafficPvs.h:104
	Vector3 mGridMin;

	// BrnTrafficPvs.h:105
	Vector3 mCellSize;

	// BrnTrafficPvs.h:106
	Vector3 mRecipCellSize;

	// BrnTrafficPvs.h:107
	uint32_t muNumCells_X;

	// BrnTrafficPvs.h:108
	uint32_t muNumCells_Z;

	// BrnTrafficPvs.h:109
	uint32_t muNumCells;

	// BrnTrafficPvs.h:111
	CgsContainers::Set<uint16_t,8u> * mpaHullPvs;

public:
	// BrnTrafficPvs.h:57
	uint32_t GetHullIndexForPoint(Vector3) const;

	// BrnTrafficPvs.h:64
	uint32_t GetHullIndexForPoint(Vector3, int32_t &, int32_t &) const;

	// BrnTrafficPvs.h:70
	uint32_t GetHullIndexForIndices(int32_t, int32_t) const;

	// BrnTrafficPvs.h:75
	const CgsContainers::Set<uint16_t,8u> & GetHullPvs(uint32_t) const;

	// BrnTrafficPvs.h:79
	VecFloat GetCellSize() const;

	// BrnTrafficPvs.h:85
	void FixUp(const void *);

	// BrnTrafficPvs.h:90
	void FixDown(const void *);

}

