// CgsPolygonSoupSpatialMap.h:47
struct CgsGeometric::PolygonSoupSpatialMap {
	// CgsPolygonSoupSpatialMap.h:107
	extern const int32_t KI_POLY_SOUP_SPATIAL_MAP_ALIGNMENT = 16;

private:
	// CgsPolygonSoupSpatialMap.h:111
	AxisAlignedBox4 * mpaPolySoupBoxes;

	// CgsPolygonSoupSpatialMap.h:112
	PolygonSoup ** mpapPolySoups;

	// CgsPolygonSoupSpatialMap.h:113
	int32_t miTotalNumBoxes;

public:
	// CgsPolygonSoupSpatialMap.h:51
	void Construct();

	// CgsPolygonSoupSpatialMap.h:75
	void FixUp(const void *);

	// CgsPolygonSoupSpatialMap.h:80
	int32_t GetActualNumBoxes() const;

	// CgsPolygonSoupSpatialMap.h:84
	int32_t GetNum4Boxes() const;

	// CgsPolygonSoupSpatialMap.h:89
	const AxisAlignedBox4 * Get4Boxes(int32_t) const;

	// CgsPolygonSoupSpatialMap.h:94
	AxisAlignedBox GetAxisAlignedBox(int32_t) const;

	// CgsPolygonSoupSpatialMap.h:100
	AxisAlignedBox GetAxisAlignedBox(int32_t, int32_t) const;

	// CgsPolygonSoupSpatialMap.h:104
	const PolygonSoup * GetPolygonSoup(int32_t) const;

}

