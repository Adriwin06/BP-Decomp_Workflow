// CgsSphere.h:25
namespace CgsGeometric {
	// CgsPolygonSoupVertex.h:38
	extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupVertex_16BitVertexZeroMask;

	// CgsPolygonSoupVertex.h:39
	extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupVertex_16BitVertexPermuteMask;

}

// CgsPolygonSoupVertex.h:38
extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupVertex_16BitVertexZeroMask;

// CgsPolygonSoupVertex.h:39
extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupVertex_16BitVertexPermuteMask;

// CgsPolygonSoupVertex.h:50
struct CgsGeometric::PolygonSoupVertex {
	// CgsPolygonSoupVertex.h:97
	extern const int32_t KI_POLY_SOUP_VERTEX_ALIGNMENT = 16;

protected:
	// CgsPolygonSoupVertex.h:101
	uint16_t mu16X;

	// CgsPolygonSoupVertex.h:102
	uint16_t mu16Y;

	// CgsPolygonSoupVertex.h:103
	uint16_t mu16Z;

public:
	// CgsPolygonSoupVertex.h:54
	void Construct();

	// CgsPolygonSoupVertex.h:74
	VectorIntrinsicUnion::VectorIntrinsic LoadCompressedPosition() const;

	// CgsPolygonSoupVertex.h:80
	// Declaration
	Vector3 Decompress16BitVertexPositionWith32BitOffset(VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic, VectorIntrinsicUnion::VectorIntrinsic) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPolygonSoupVertex.h:182
		using namespace rw::math::vpl;

	}

	// CgsPolygonSoupVertex.h:85
	void FixUp();

	// CgsPolygonSoupVertex.h:94
	Vector3 GetVector3(int32_t, int32_t, int32_t, float32_t) const;

}

// CgsTriangle4.h:25
namespace CgsGeometric {
	// CgsPolygonSoupVertex.h:38
	extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupVertex_16BitVertexZeroMask;

	// CgsPolygonSoupVertex.h:39
	extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupVertex_16BitVertexPermuteMask;

}

// CgsAxisAlignedBox.h:24
namespace CgsGeometric {
	// CgsPolygonSoupVertex.h:38
	extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupVertex_16BitVertexZeroMask;

	// CgsPolygonSoupVertex.h:39
	extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupVertex_16BitVertexPermuteMask;

}

