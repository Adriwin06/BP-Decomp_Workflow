// CgsHermiteSpline.h:28
namespace CgsGeometric {
	// CgsTriangleBox.cpp:43
	namespace BT {
		struct TriangleData;

		struct BoxVertexData;

	}

	// CgsTriangleBox.cpp:125
	// Declaration
	extern bool ClipBoxEdgeAgainstTriangleUnoptimized(Vector3, Vector3, Vector3, Vector3, Vector3, Vector3 &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTriangleBox.cpp:127
		using namespace rw::math::vpu;

	}

	// CgsTriangleBox.cpp:187
	// Declaration
	extern int32_t ClipTriEdgeAgainstBoxUnoptimized(Vector3 *, AxisAlignedBoxArg, Vector3, Vector3) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTriangleBox.cpp:189
		using namespace rw::math::vpu;

	}

	// CgsTriangleBox.cpp:621
	// Declaration
	extern MaskScalar ClipBoxEdgeAgainstTriangle(const TriangleData &, const BoxVertexData &, const BoxVertexData &, Vector3 &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTriangleBox.cpp:623
		using namespace rw::math::vpu;

	}

	// CgsTriangleBox.cpp:706
	// Declaration
	extern void AddIfValid(MaskScalar &, MaskScalar &, Vector3 &, Vector3 &, MaskScalar, Vector3) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTriangleBox.cpp:708
		using namespace rw::math::vpu;

	}

	// CgsTriangleBox.cpp:754
	// Declaration
	extern void ClipTriEdgeAgainstBox(Vector3 *, MaskScalar *, AxisAlignedBoxArg, Vector3, Vector3) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTriangleBox.cpp:756
		using namespace rw::math::vpu;

	}

	// CgsTriangleBox.cpp:886
	extern void ClipTriWithAABB(Vector3 *, MaskScalar *, AxisAlignedBoxArg, Vector3, Vector3, Vector3);

	// CgsTriangleBox.cpp:953
	// Declaration
	extern const MaskScalar IntersectTriangleBox(BoxArg, TriangleArg, VecFloat, MaskScalar, Vector3 *, Vector3 *, Vector3 *, Vector3 *, int32_t *, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsBox.h:60
		typedef const Box & BoxArg;

	}

	// CgsTriangleBox.cpp:1123
	extern const Mask4 IntersectTriangle4Box(BoxArg, Triangle4, VecFloat, MaskScalar, Vector3 *, Vector3 *, Vector3 *, Vector3 *, int32_t *, Vector3 *, Vector3 *, Vector3 *, Vector3 *, int32_t *, Vector3 *, Vector3 *, Vector3 *, Vector3 *, int32_t *, Vector3 *, Vector3 *, Vector3 *, Vector3 *, int32_t *, int32_t);

	// CgsTriangleBox.cpp:291
	extern int32_t ClipTriWithAABBUnoptimized(Vector3 *, AxisAlignedBoxArg, Vector3, Vector3, Vector3);

	// CgsTriangleBox.cpp:421
	extern const MaskScalar IntersectTriangleBoxUnoptimized(BoxArg, TriangleArg, VecFloat, Vector3 *, Vector3 *, Vector3 *, Vector3 *, int32_t *, int32_t);

	// CgsTriangleBox.cpp:559
	extern const Mask4 IntersectTriangle4BoxUnoptimized(BoxArg, Triangle4, VecFloat, Vector3 *, Vector3 *, Vector3 *, Vector3 *, int32_t *, Vector3 *, Vector3 *, Vector3 *, Vector3 *, int32_t *, Vector3 *, Vector3 *, Vector3 *, Vector3 *, int32_t *, Vector3 *, Vector3 *, Vector3 *, Vector3 *, int32_t *, int32_t);

	// CgsTriangleBox.cpp:39
	const int32_t KI_MAX_CLIPPED_TRI_POINTS = 32;

	// CgsTriangleBox.cpp:40
	const int32_t KI_MAX_INTERMEDIATE_CLIPPED_POINTS = 18;

}

// CgsTriangleBox.cpp:46
struct CgsGeometric::BT::TriangleData {
	// CgsTriangleBox.cpp:48
	Vector3 mVertex0;

	// CgsTriangleBox.cpp:49
	Vector3 mVertex1;

	// CgsTriangleBox.cpp:50
	Vector3 mVertex2;

	// CgsTriangleBox.cpp:51
	Vector3 mNormal;

	// CgsTriangleBox.cpp:52
	Vector3 mEdge01;

	// CgsTriangleBox.cpp:53
	Vector3 mEdge12;

	// CgsTriangleBox.cpp:54
	Vector3 mEdge20;

	// CgsTriangleBox.cpp:55
	Vector3 mOuter01;

	// CgsTriangleBox.cpp:56
	Vector3 mOuter12;

	// CgsTriangleBox.cpp:57
	Vector3 mOuter20;

	// CgsTriangleBox.cpp:58
	VecFloat mPlaneOffset;

public:
	// CgsTriangleBox.cpp:64
	// Declaration
	void Construct(Vector3, Vector3, Vector3) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTriangleBox.cpp:66
		using namespace rw::math::vpu;

	}

}

// CgsTriangleBox.cpp:84
struct CgsGeometric::BT::BoxVertexData {
	// CgsTriangleBox.cpp:86
	Vector3 mPosition;

	// CgsTriangleBox.cpp:87
	VecFloat mPlaneOffset;

	// CgsTriangleBox.cpp:88
	VecFloat mPlaneOffsetFromTriangle;

public:
	// CgsTriangleBox.cpp:96
	void Construct(VecFloat, VecFloat, VecFloat, Vector3, VecFloat);

}

