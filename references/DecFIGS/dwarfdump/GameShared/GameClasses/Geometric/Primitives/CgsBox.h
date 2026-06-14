// CgsBox.h:29
struct CgsGeometric::Box {
private:
	// CgsBox.h:56
	Matrix44Affine mTransform;

	// CgsBox.h:57
	Vector3Plus mDimensionsAndFatness;

public:
	// CgsBox.h:35
	void Set(Matrix44Affine, Vector3Plus);

	// CgsBox.h:41
	void Set(Matrix44Affine, Vector3, VecFloat);

	// CgsBox.h:44
	Matrix44Affine GetTransform() const;

	// CgsBox.h:47
	Vector3 GetDimensions() const;

	// CgsBox.h:50
	VecFloat GetFatness() const;

	// CgsBox.h:53
	bool IsValid() const;

}

// CgsBox.h:26
namespace CgsGeometric {
	struct AxisAlignedBox;

	struct Sphere;

	struct PolygonSoupPoly;

	struct PolygonSoupVertex;

	struct PolygonSoup;

	struct IntersectLinePolygonSoupResult;

	struct PolygonSoupListSpatialMap;

	struct Line;

	struct PolygonSoupSpacialNode;

	struct PolygonSoupLeafNode;

	struct PolygonSoupJobQueryParams;

	struct PolygonSoupList;

}

// CgsSphere.h:25
namespace CgsGeometric {
	// CgsBox.h:143
	extern VecFloat GetBoxExtentsAlongAxis(const Box &, Vector3);

	// CgsBox.h:165
	extern MaskScalar BoxOverlappingTest(const Box &, const Box &, Vector3);

	// CgsBox.h:190
	extern MaskScalar BoxOverlappingTest(const Box &, const Box &);

}

// CgsHermiteSpline.h:28
namespace CgsGeometric {
	// CgsTriangleBox.cpp:953
	// Declaration
	extern const MaskScalar IntersectTriangleBox(BoxArg, TriangleArg, VecFloat, MaskScalar, Vector3 *, Vector3 *, Vector3 *, Vector3 *, int32_t *, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsBox.h:60
		typedef const Box & BoxArg;

	}

}

