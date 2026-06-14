// CgsSphere.h:25
namespace CgsGeometric {
	// CgsLineTests.cpp:48
	// Declaration
	extern const MaskScalar TestInfiniteLineEllipsoid(EllipsoidArg, Vector3, Vector3) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsEllipsoid.h:58
		typedef const Ellipsoid & EllipsoidArg;

	}

	// CgsEllipsoid.h:88
	const VecFloat KVF_MIN_DIST;

}

// CgsEllipsoid.h:38
struct CgsGeometric::Ellipsoid {
private:
	// CgsEllipsoid.h:54
	Matrix44Affine mTransform;

	// CgsEllipsoid.h:55
	Vector3 mHalfExtents;

public:
	// CgsEllipsoid.h:44
	void Set(Matrix44Affine, Vector3);

	// CgsEllipsoid.h:47
	const rw::math::vpu::Matrix44Affine GetTransform() const;

	// CgsEllipsoid.h:50
	const rw::math::vpu::Vector3 GetHalfExtents() const;

}

// CgsSphere.h:25
namespace CgsGeometric {
	// CgsEllipsoid.h:88
	const VecFloat KVF_MIN_DIST;

}

// CgsAxisAlignedBox.h:24
namespace CgsGeometric {
	// CgsEllipsoid.h:88
	const VecFloat KVF_MIN_DIST;

}

// CgsHermiteSpline.h:28
namespace CgsGeometric {
	// CgsEllipsoid.h:88
	const VecFloat KVF_MIN_DIST;

}

