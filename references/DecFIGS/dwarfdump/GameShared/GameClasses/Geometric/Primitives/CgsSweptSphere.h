// CgsSweptSphere.h:28
struct CgsGeometric::SweptSphere {
private:
	// CgsSweptSphere.h:71
	Vector3Plus mPositionAndRadius;

	// CgsSweptSphere.h:72
	Vector3Plus mDirectionAndLength;

public:
	// CgsSweptSphere.h:36
	void Set(Vector3, VecFloat, Vector3, VecFloat);

	// CgsSweptSphere.h:41
	void Set(Vector3Plus, Vector3Plus);

	// CgsSweptSphere.h:44
	const rw::math::vpu::Vector3 GetPosition() const;

	// CgsSweptSphere.h:47
	VecFloat GetRadius() const;

	// CgsSweptSphere.h:50
	const rw::math::vpu::Vector3 GetDirection() const;

	// CgsSweptSphere.h:53
	VecFloat GetLength() const;

	// CgsSweptSphere.h:56
	Vector3Plus GetPositionAndRadius() const;

	// CgsSweptSphere.h:59
	Vector3Plus GetDirectionAndLength() const;

	// CgsSweptSphere.h:63
	void SetPosition(Vector3);

	// CgsSweptSphere.h:67
	void SetRadius(VecFloat);

}

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

