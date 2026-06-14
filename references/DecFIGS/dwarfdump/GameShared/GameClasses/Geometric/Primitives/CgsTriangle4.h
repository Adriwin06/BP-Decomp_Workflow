// CgsSphere.h:25
namespace CgsGeometric {
	// Declaration
	struct Triangle4 {
		// CgsTriangle4.h:44
		struct AOSTriangle {
			// CgsTriangle4.h:46
			Vector3 mVertex0;

			// CgsTriangle4.h:47
			Vector3 mVertex1;

			// CgsTriangle4.h:48
			Vector3 mVertex2;

			// CgsTriangle4.h:49
			Vector3 mNormal;

			// CgsTriangle4.h:51
			float32_t mfEdgeCosine0;

			// CgsTriangle4.h:52
			float32_t mfEdgeCosine1;

			// CgsTriangle4.h:53
			float32_t mfEdgeCosine2;

		public:
			// CgsTriangle4.h:56
			bool IsValid() const;

			// CgsTriangle4.h:60
			void AssertIsValid() const;

		}

	}

	// CgsTriangle4.h:145
	const VecFloat K_TRIANGLE_NORMAL_TOLERANCE;

}

// CgsTriangle4.h:41
struct CgsGeometric::Triangle4 {
	// CgsTriangle4.h:64
	Vector4 mVertex0X;

	// CgsTriangle4.h:65
	Vector4 mVertex0Y;

	// CgsTriangle4.h:66
	Vector4 mVertex0Z;

	// CgsTriangle4.h:68
	Vector4 mVertex1X;

	// CgsTriangle4.h:69
	Vector4 mVertex1Y;

	// CgsTriangle4.h:70
	Vector4 mVertex1Z;

	// CgsTriangle4.h:72
	Vector4 mVertex2X;

	// CgsTriangle4.h:73
	Vector4 mVertex2Y;

	// CgsTriangle4.h:74
	Vector4 mVertex2Z;

	// CgsTriangle4.h:76
	Mask4 mValidMasks;

	// CgsTriangle4.h:77
	Vector4 mSurfaceTags;

	// CgsTriangle4.h:79
	Vector4 mEdge0Cosigns;

	// CgsTriangle4.h:80
	Vector4 mEdge1Cosigns;

	// CgsTriangle4.h:81
	Vector4 mEdge2Cosigns;

public:
	// CgsTriangle4.h:85
	// Declaration
	MaskScalar IsUsed(int32_t) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTriangle4.h:127
		using namespace rw::math::vpu;

	}

	// CgsTriangle4.h:90
	void GetAOSTriangle(int32_t, CgsGeometric::Triangle4::AOSTriangle *) const;

	// CgsTriangle4.h:106
	void AssertIsValid() const;

}

// CgsTriangle4.h:25
namespace CgsGeometric {
	// Declaration
	struct Triangle4 {
		// CgsTriangle4.h:44
		struct AOSTriangle {
			// CgsTriangle4.h:46
			Vector3 mVertex0;

			// CgsTriangle4.h:47
			Vector3 mVertex1;

			// CgsTriangle4.h:48
			Vector3 mVertex2;

			// CgsTriangle4.h:49
			Vector3 mNormal;

			// CgsTriangle4.h:51
			float32_t mfEdgeCosine0;

			// CgsTriangle4.h:52
			float32_t mfEdgeCosine1;

			// CgsTriangle4.h:53
			float32_t mfEdgeCosine2;

		public:
			// CgsTriangle4.h:56
			bool IsValid() const;

			// CgsTriangle4.h:60
			void AssertIsValid() const;

		}

	}

	struct Sphere;

	struct PolygonSoupPoly;

	struct PolygonSoupVertex;

	struct PolygonSoup;

	struct IntersectLinePolygonSoupResult;

	struct PolygonSoupListSpatialMap;

	struct Line;

	struct AxisAlignedBox;

	struct AxisAlignedBox4;

	struct PolygonSoupSpacialNode;

	struct PolygonSoupLeafNode;

	struct PolygonSoupJobQueryParams;

	struct PolygonSoupList;

	// CgsTriangle4.h:145
	const VecFloat K_TRIANGLE_NORMAL_TOLERANCE;

}

// CgsSphere.h:25
namespace CgsGeometric {
	// CgsTriangle4.h:145
	const VecFloat K_TRIANGLE_NORMAL_TOLERANCE;

}

// CgsBox.h:26
namespace CgsGeometric {
	// Declaration
	struct Triangle4 {
		// CgsTriangle4.h:44
		struct AOSTriangle {
			// CgsTriangle4.h:46
			Vector3 mVertex0;

			// CgsTriangle4.h:47
			Vector3 mVertex1;

			// CgsTriangle4.h:48
			Vector3 mVertex2;

			// CgsTriangle4.h:49
			Vector3 mNormal;

			// CgsTriangle4.h:51
			float32_t mfEdgeCosine0;

			// CgsTriangle4.h:52
			float32_t mfEdgeCosine1;

			// CgsTriangle4.h:53
			float32_t mfEdgeCosine2;

		public:
			// CgsTriangle4.h:56
			bool IsValid() const;

			// CgsTriangle4.h:60
			void AssertIsValid() const;

		}

	}

	// CgsTriangle4.h:145
	const VecFloat K_TRIANGLE_NORMAL_TOLERANCE;

}

// CgsAxisAlignedBox.h:24
namespace CgsGeometric {
	// Declaration
	struct Triangle4 {
		// CgsTriangle4.h:44
		struct AOSTriangle {
			// CgsTriangle4.h:46
			Vector3 mVertex0;

			// CgsTriangle4.h:47
			Vector3 mVertex1;

			// CgsTriangle4.h:48
			Vector3 mVertex2;

			// CgsTriangle4.h:49
			Vector3 mNormal;

			// CgsTriangle4.h:51
			float32_t mfEdgeCosine0;

			// CgsTriangle4.h:52
			float32_t mfEdgeCosine1;

			// CgsTriangle4.h:53
			float32_t mfEdgeCosine2;

		public:
			// CgsTriangle4.h:56
			bool IsValid() const;

			// CgsTriangle4.h:60
			void AssertIsValid() const;

		}

	}

	// CgsTriangle4.h:145
	const VecFloat K_TRIANGLE_NORMAL_TOLERANCE;

}

// CgsHermiteSpline.h:28
namespace CgsGeometric {
	// Declaration
	struct Triangle4 {
		// CgsTriangle4.h:44
		struct AOSTriangle {
			// CgsTriangle4.h:46
			Vector3 mVertex0;

			// CgsTriangle4.h:47
			Vector3 mVertex1;

			// CgsTriangle4.h:48
			Vector3 mVertex2;

			// CgsTriangle4.h:49
			Vector3 mNormal;

			// CgsTriangle4.h:51
			float32_t mfEdgeCosine0;

			// CgsTriangle4.h:52
			float32_t mfEdgeCosine1;

			// CgsTriangle4.h:53
			float32_t mfEdgeCosine2;

		public:
			// CgsTriangle4.h:56
			bool IsValid() const;

			// CgsTriangle4.h:60
			void AssertIsValid() const;

		}

	}

	// CgsTriangleSphere.cpp:490
	// Declaration
	extern const Mask4 IntersectTriangle4Sphere(SphereArg, Triangle4Arg, VecFloat, Vector3 &, Vector3 &, Vector3Plus &, Vector3Plus &, Vector3 &, Vector3 &, Vector3Plus &, Vector3Plus &, Vector3 &, Vector3 &, Vector3Plus &, Vector3Plus &, Vector3 &, Vector3 &, Vector3Plus &, Vector3Plus &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTriangle4.h:110
		typedef const Triangle4 & Triangle4Arg;

		// CgsTriangleSphere.cpp:492
		using namespace rw::math::vpl;

		// CgsTriangleSphere.cpp:493
		using namespace CgsNumeric;

		// CgsTriangleSphere.cpp:525
		using namespace rw::math::vpl;

		// CgsTriangleSphere.cpp:525
		using namespace rw::math::vpl;

		// CgsTriangleSphere.cpp:525
		using namespace rw::math::vpl;

		// CgsTriangleSphere.cpp:529
		using namespace rw::math::vpl;

		// CgsTriangleSphere.cpp:529
		using namespace rw::math::vpl;

		// CgsTriangleSphere.cpp:529
		using namespace rw::math::vpl;

		// CgsTriangleSphere.cpp:529
		using namespace rw::math::vpl;

		// CgsTriangleSphere.cpp:533
		using namespace rw::math::vpl;

		// CgsTriangleSphere.cpp:539
		using namespace rw::math::vpl;

		// CgsTriangleSphere.cpp:539
		using namespace rw::math::vpl;

		// CgsTriangleSphere.cpp:539
		using namespace rw::math::vpl;

		// CgsTriangleSphere.cpp:539
		using namespace rw::math::vpl;

		// CgsTriangleSphere.cpp:545
		using namespace rw::math::vpl;

		// CgsTriangleSphere.cpp:616
		using namespace rw::math::vpl;

		// CgsTriangleSphere.cpp:616
		using namespace rw::math::vpl;

		// CgsTriangleSphere.cpp:616
		using namespace rw::math::vpl;

		// CgsTriangleSphere.cpp:654
		using namespace rw::math::vpl;

	}

	// CgsTriangle4.h:145
	const VecFloat K_TRIANGLE_NORMAL_TOLERANCE;

}

