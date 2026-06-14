// CgsPolygonSoupTests.h:40
struct CgsGeometric::IntersectLinePolygonSoupResult {
	// CgsPolygonSoupTests.h:42
	Vector3[3] mTriangleVertices;

	// CgsPolygonSoupTests.h:43
	Vector3 mTriangleNormal;

	// CgsPolygonSoupTests.h:44
	Vector3 mPosition;

	// CgsPolygonSoupTests.h:45
	VecFloat mParam;

	// CgsPolygonSoupTests.h:46
	uint32_t muSurfaceTag;

	// CgsPolygonSoupTests.h:47
	uint32_t[3] mu16BytePadding;

public:
	// CgsPolygonSoupTests.h:50
	bool DidIntersect() const;

	// CgsPolygonSoupTests.h:54
	void SetNoIntersection();

}

