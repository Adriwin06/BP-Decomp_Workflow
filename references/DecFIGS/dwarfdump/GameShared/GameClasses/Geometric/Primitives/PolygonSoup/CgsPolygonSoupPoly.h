// CgsSphere.h:25
namespace CgsGeometric {
	// CgsPolygonSoupPoly.h:43
	extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupPoly_EdgeAngleMask;

	// CgsPolygonSoupPoly.h:44
	extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupPoly_EdgeDecompressScale;

	// CgsPolygonSoupPoly.h:45
	extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupPoly_EdgePermuteMask;

	// CgsPolygonSoupPoly.h:46
	extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupPoly_Eight;

	// CgsPolygonSoupPoly.h:47
	extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupPoly_MaxShift;

}

// CgsPolygonSoupPoly.h:43
extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupPoly_EdgeAngleMask;

// CgsPolygonSoupPoly.h:44
extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupPoly_EdgeDecompressScale;

// CgsPolygonSoupPoly.h:45
extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupPoly_EdgePermuteMask;

// CgsPolygonSoupPoly.h:46
extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupPoly_Eight;

// CgsPolygonSoupPoly.h:47
extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupPoly_MaxShift;

// CgsPolygonSoupPoly.h:58
struct CgsGeometric::PolygonSoupPoly {
	// CgsPolygonSoupPoly.h:122
	extern const int32_t KI_POLY_SOUP_POLY_ALIGNMENT = 16;

protected:
	// CgsPolygonSoupPoly.h:126
	uint32_t muCollisionTag;

	// CgsPolygonSoupPoly.h:127
	uint8_t[4] mau8VertexIndices;

	// CgsPolygonSoupPoly.h:128
	uint8_t[4] mau8EdgeCosines;

public:
	// CgsPolygonSoupPoly.h:62
	void Construct();

	// CgsPolygonSoupPoly.h:92
	VectorIntrinsicUnion::VectorIntrinsic LoadTagAndIndicesAndCompressedCosines() const;

	// CgsPolygonSoupPoly.h:99
	// Declaration
	void LoadEdgeCosines(VecFloat &, VecFloat &, VecFloat &, VecFloat &) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPolygonSoupPoly.h:189
		using namespace rw::math::vpl;

	}

	// CgsPolygonSoupPoly.h:102
	VectorIntrinsicUnion::VectorIntrinsic LoadTag() const;

	// CgsPolygonSoupPoly.h:107
	void FixUp();

	// CgsPolygonSoupPoly.h:111
	uint32_t GetCollisionTag() const;

	// CgsPolygonSoupPoly.h:115
	float32_t GetEdgeCosineUncompressed(int32_t) const;

	// CgsPolygonSoupPoly.h:119
	uint8_t GetVertexIndex(int32_t) const;

}

// CgsTriangle4.h:25
namespace CgsGeometric {
	// CgsPolygonSoupPoly.h:43
	extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupPoly_EdgeAngleMask;

	// CgsPolygonSoupPoly.h:44
	extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupPoly_EdgeDecompressScale;

	// CgsPolygonSoupPoly.h:45
	extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupPoly_EdgePermuteMask;

	// CgsPolygonSoupPoly.h:46
	extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupPoly_Eight;

	// CgsPolygonSoupPoly.h:47
	extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupPoly_MaxShift;

}

// CgsAxisAlignedBox.h:24
namespace CgsGeometric {
	// CgsPolygonSoupPoly.h:43
	extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupPoly_EdgeAngleMask;

	// CgsPolygonSoupPoly.h:44
	extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupPoly_EdgeDecompressScale;

	// CgsPolygonSoupPoly.h:45
	extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupPoly_EdgePermuteMask;

	// CgsPolygonSoupPoly.h:46
	extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupPoly_Eight;

	// CgsPolygonSoupPoly.h:47
	extern const VectorIntrinsicUnion::VectorIntrinsic gPolygonSoupPoly_MaxShift;

}

