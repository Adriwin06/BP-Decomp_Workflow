// CgsPolygonSoup.h:52
struct CgsGeometric::PolygonSoup {
	// CgsPolygonSoup.h:147
	extern const int32_t KI_POLY_SOUP_ALIGNMENT = 128;

protected:
	// CgsPolygonSoup.h:151
	int32_t[3] maiVertexOffsets;

	// CgsPolygonSoup.h:152
	float32_t mfComprGranularity;

	// CgsPolygonSoup.h:153
	PolygonSoupPoly * mpaPolygons;

	// CgsPolygonSoup.h:154
	PolygonSoupVertex * mpaVertices;

	// CgsPolygonSoup.h:155
	uint16_t mu16DataSize;

	// CgsPolygonSoup.h:156
	uint8_t mu8TotalNumPolys;

	// CgsPolygonSoup.h:157
	uint8_t mu8NumQuads;

	// CgsPolygonSoup.h:158
	uint8_t mu8NumVertices;

public:
	// CgsPolygonSoup.h:56
	void Construct();

	// CgsPolygonSoup.h:100
	VecFloat LoadCompressionGranularity() const;

	// CgsPolygonSoup.h:103
	VectorIntrinsicUnion::VectorIntrinsic LoadVertexOffsetsAndCompressionGranularity() const;

	// CgsPolygonSoup.h:109
	void FixUp(const void *);

	// CgsPolygonSoup.h:116
	const PolygonSoupPoly * GetPolygon(uint8_t) const;

	// CgsPolygonSoup.h:120
	const PolygonSoupVertex * GetVertex(uint16_t) const;

	// CgsPolygonSoup.h:124
	Vector3 GetVertexPosition(uint8_t) const;

	// CgsPolygonSoup.h:127
	uint32_t GetDataSize() const;

	// CgsPolygonSoup.h:130
	uint8_t GetNumPolygons() const;

	// CgsPolygonSoup.h:133
	uint8_t GetNumVertices() const;

	// CgsPolygonSoup.h:136
	uint8_t GetNumTriangles() const;

	// CgsPolygonSoup.h:139
	uint8_t GetNumQuads() const;

	// CgsPolygonSoup.h:142
	float32_t GetCompressionGranularity() const;

	// CgsPolygonSoup.h:145
	void RelocateFrom(const void *);

}

// CgsHermiteSpline.h:28
namespace CgsGeometric {
	// CgsPolygonSoupTests.cpp:291
	// Declaration
	extern void UnpackPolygonSoupVertices(Vector3 *, PolygonSoupArg) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPolygonSoup.h:168
		typedef const PolygonSoup & PolygonSoupArg;

		// CgsPolygonSoupTests.cpp:293
		using namespace rw::math::vpl;

	}

}

