// CgsSphere.h:25
namespace CgsGeometric {
	struct Sphere;

	struct AxisAlignedBox;

	struct IntersectLinePolygonSoupResult;

	struct PolygonSoupListSpatialMap;

	struct Line;

	struct Ellipsoid;

}

// CgsSphere.h:28
struct CgsGeometric::Sphere {
private:
	// CgsSphere.h:62
	Vector3Plus mData;

public:
	// CgsSphere.h:34
	void Set(Vector3, VecFloat);

	// CgsSphere.h:37
	Vector3 GetPosition() const;

	// CgsSphere.h:40
	VecFloat GetRadius() const;

	// CgsSphere.h:43
	Vector3Plus GetData() const;

	// CgsSphere.h:47
	void SetPosition(Vector3);

	// CgsSphere.h:51
	void SetRadius(VecFloat);

	// CgsSphere.h:55
	void SetData(Vector3Plus);

	// CgsSphere.h:58
	void Clear();

}

// CgsSphere.h:25
namespace CgsGeometric {
	struct Sphere;

	struct AxisAlignedBox;

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
	struct Sphere;

	struct Box;

	struct SweptSphere;

	struct AxisAlignedBox;

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
	struct Sphere;

}

// CgsSphere.h:25
namespace CgsGeometric {
	struct Sphere;

	struct IntersectLinePolygonSoupResult;

	struct PolygonSoupListSpatialMap;

	struct Line;

}

// CgsSphere.h:25
namespace CgsGeometric {
	struct Sphere;

	struct PolygonSoupPoly;

	struct PolygonSoupVertex;

	struct PolygonSoup;

	struct IntersectLinePolygonSoupResult;

	struct PolygonSoupListSpatialMap;

	struct Box;

	struct Capsule;

	struct Cylinder;

	struct Line;

	struct AxisAlignedBox;

	struct PolygonSoupSpacialNode;

	struct PolygonSoupLeafNode;

	struct PolygonSoupJobQueryParams;

	struct PolygonSoupList;

	struct SweptSphere;

}

// CgsSphere.h:25
namespace CgsGeometric {
	struct Sphere;

	struct PolygonSoupPoly;

	struct PolygonSoupVertex;

	struct PolygonSoup;

	struct IntersectLinePolygonSoupResult;

	struct PolygonSoupListSpatialMap;

	struct Box;

	struct Capsule;

	struct Cylinder;

	struct Line;

	struct SweptSphere;

	struct AxisAlignedBox;

	struct PolygonSoupSpacialNode;

	struct PolygonSoupLeafNode;

	struct PolygonSoupJobQueryParams;

	struct PolygonSoupList;

}

// CgsSphere.h:25
namespace CgsGeometric {
}

// CgsSphere.h:25
namespace CgsGeometric {
	struct Sphere;

	struct Box;

	struct SweptSphere;

	struct AxisAlignedBox;

	struct PolygonSoupPoly;

	struct PolygonSoupVertex;

	struct PolygonSoup;

	struct IntersectLinePolygonSoupResult;

	struct PolygonSoupListSpatialMap;

	struct Capsule;

	struct Cylinder;

	struct Line;

	struct PolygonSoupSpacialNode;

	struct PolygonSoupLeafNode;

	struct PolygonSoupJobQueryParams;

	struct PolygonSoupList;

}

// CgsSphere.h:25
namespace CgsGeometric {
	struct Sphere;

	struct PolygonSoupPoly;

	struct PolygonSoupVertex;

	struct PolygonSoup;

	struct IntersectLinePolygonSoupResult;

	struct PolygonSoupListSpatialMap;

	struct Box;

	struct Line;

	struct AxisAlignedBox;

	struct AxisAlignedBox4;

	struct PolygonSoupSpacialNode;

	struct PolygonSoupLeafNode;

	struct PolygonSoupJobQueryParams;

	struct PolygonSoupList;

	struct SweptSphere;

	struct Triangle;

	void TestAxisAlignedBoxAxisAlignedBox(AxisAlignedBoxArg, AxisAlignedBoxArg);

	void TestLineBoundingBoxAgainstAxisAlignedBox(AxisAlignedBoxArg, Vector3, Vector3, Vector3);

}

