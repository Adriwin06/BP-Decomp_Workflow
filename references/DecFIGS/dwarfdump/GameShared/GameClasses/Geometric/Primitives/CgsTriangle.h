// CgsHermiteSpline.h:28
namespace CgsGeometric {
	// CgsTriangleSphere.cpp:1288
	// Declaration
	extern const MaskScalar IntersectTriangleSweptSphere(SweptSphereArg, TriangleArg, Vector3 &, Vector3 &, Vector3Plus &, Vector3Plus &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSweptSphere.h:75
		typedef const SweptSphere & SweptSphereArg;

		// CgsTriangle.h:70
		typedef const Triangle & TriangleArg;

		// CgsTriangleSphere.cpp:1290
		using namespace rw::math::vpu;

	}

}

// CgsTriangle.h:42
struct CgsGeometric::Triangle {
private:
	// CgsTriangle.h:67
	Vector3[3] maVertices;

public:
	// CgsTriangle.h:46
	void Set(const rw::math::vpu::Vector3 *);

	// CgsTriangle.h:49
	void Set(Vector3, Vector3, Vector3);

	// CgsTriangle.h:52
	void Set(int32_t, Vector3);

	// CgsTriangle.h:55
	Vector3 Get(int32_t) const;

	// CgsTriangle.h:58
	Vector3 CalcEdge01() const;

	// CgsTriangle.h:61
	Vector3 CalcEdge12() const;

	// CgsTriangle.h:64
	Vector3 CalcEdge20() const;

}

