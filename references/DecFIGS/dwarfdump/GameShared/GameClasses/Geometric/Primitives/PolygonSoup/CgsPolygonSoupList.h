// CgsPolygonSoupList.h:47
struct CgsGeometric::PolygonSoupList {
	// CgsPolygonSoupList.h:133
	extern const int32_t KI_POLY_SOUP_LIST_ALIGNMENT = 128;

private:
	// CgsPolygonSoupList.h:137
	AxisAlignedBox mOverallAabb;

	// CgsPolygonSoupList.h:138
	PolygonSoup ** mpapPolySoups;

	// CgsPolygonSoupList.h:139
	AxisAlignedBox4 * mpaPolySoupBoxes;

	// CgsPolygonSoupList.h:140
	int32_t miNumPolySoups;

	// CgsPolygonSoupList.h:141
	int32_t miDataSize;

public:
	// CgsPolygonSoupList.h:51
	void Construct();

	// CgsPolygonSoupList.h:93
	void FixUp(const void *);

	// CgsPolygonSoupList.h:97
	const AxisAlignedBox GetBoundingBox() const;

	// CgsPolygonSoupList.h:101
	const PolygonSoup * GetPolygonSoup(int32_t) const;

	// CgsPolygonSoupList.h:104
	int32_t GetNumPolygonSoups() const;

	// CgsPolygonSoupList.h:107
	int32_t GetDataSize() const;

	// CgsPolygonSoupList.h:114
	int32_t GetNum4Boxes() const;

	// CgsPolygonSoupList.h:119
	const AxisAlignedBox4 * Get4Boxes(int32_t) const;

	// CgsPolygonSoupList.h:124
	AxisAlignedBox GetAxisAlignedBox(int32_t) const;

	// CgsPolygonSoupList.h:130
	AxisAlignedBox GetAxisAlignedBox(int32_t, int32_t) const;

}

// CgsPolygonSoupList.h:133
extern const int32_t KI_POLY_SOUP_LIST_ALIGNMENT = 128;

