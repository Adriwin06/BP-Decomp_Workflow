// CgsSphere.h:25
namespace CgsGeometric {
	// CgsLineTests.cpp:431
	// Declaration
	extern const MaskScalar TestLineAxisAlignedBox(AxisAlignedBoxArg, Vector3, Vector3, Vector3) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsAxisAlignedBox.h:94
		typedef const AxisAlignedBox & AxisAlignedBoxArg;

		// CgsLineTests.cpp:433
		using namespace rw::math::vpu;

	}

}

// CgsAxisAlignedBox.h:33
struct CgsGeometric::AxisAlignedBox {
private:
	// CgsAxisAlignedBox.h:91
	Vector3 mMin;

	// CgsAxisAlignedBox.h:92
	Vector3 mMax;

public:
	// CgsAxisAlignedBox.h:42
	void FixUp();

	// CgsAxisAlignedBox.h:46
	void Set(Vector3, Vector3);

	// CgsAxisAlignedBox.h:49
	void Set(Vector3);

	// CgsAxisAlignedBox.h:52
	Vector3 GetMin() const;

	// CgsAxisAlignedBox.h:55
	Vector3 GetMax() const;

	// CgsAxisAlignedBox.h:58
	void SetMin(Vector3);

	// CgsAxisAlignedBox.h:61
	void SetMax(Vector3);

	// CgsAxisAlignedBox.h:65
	void SetInvalid();

	// CgsAxisAlignedBox.h:70
	void Extend(Vector3);

	// CgsAxisAlignedBox.h:75
	void Extend(const AxisAlignedBox &);

	// CgsAxisAlignedBox.h:80
	bool ContainsPoint(Vector3) const;

	// CgsAxisAlignedBox.h:84
	Vector3 GetCentrePos() const;

	// CgsAxisAlignedBox.h:88
	Vector3 GetHalfExtents() const;

}

// CgsAxisAlignedBox.h:24
namespace CgsGeometric {
	struct AxisAlignedBox;

	struct AxisAlignedBox4;

	struct PolygonSoupPoly;

	struct PolygonSoupVertex;

	struct PolygonSoup;

	struct Line;

	struct PolygonSoupSpacialNode;

	struct PolygonSoupLeafNode;

	struct PolygonSoupJobQueryParams;

	struct PolygonSoupListSpatialMap;

	struct PolygonSoupList;

	struct Sphere;

	struct IntersectLinePolygonSoupResult;

	struct Box;

	struct SweptSphere;

	struct Capsule;

	struct Cylinder;

	void TestAxisAlignedBoxAxisAlignedBox(AxisAlignedBoxArg, AxisAlignedBoxArg);

	void InternalTestPointAxisAlignedBox(Vector3, Vector3, Vector3);

	void TestLineAxisAlignedBox(AxisAlignedBoxArg, Vector3, Vector3, Vector3);

}

