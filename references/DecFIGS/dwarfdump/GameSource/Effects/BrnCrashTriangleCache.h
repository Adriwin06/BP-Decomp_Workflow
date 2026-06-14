// BrnCrashTriangleCache.h:42
struct BrnEffects::BrnCrashLineTriangleCacheFormat {
	// BrnCrashTriangleCache.h:59
	Vector3 mLineStartPosition;

	// BrnCrashTriangleCache.h:60
	Vector3 mLineEndPos;

	// BrnCrashTriangleCache.h:61
	Vector3Plus mLineIntersectNormalPlusLineParms;

public:
	// BrnCrashTriangleCache.h:49
	void Initialise(Vector3, Vector3);

}

// BrnCrashTriangleCache.h:65
struct BrnEffects::BrnCrashTrianglePackedFormat {
	// BrnCrashTriangleCache.h:86
	Vector4 mVertexHash;

	// BrnCrashTriangleCache.h:88
	Vector4 mVertex0X;

	// BrnCrashTriangleCache.h:89
	Vector4 mVertex0Y;

	// BrnCrashTriangleCache.h:90
	Vector4 mVertex0Z;

	// BrnCrashTriangleCache.h:92
	Vector4 mVertex1X;

	// BrnCrashTriangleCache.h:93
	Vector4 mVertex1Y;

	// BrnCrashTriangleCache.h:94
	Vector4 mVertex1Z;

	// BrnCrashTriangleCache.h:96
	Vector4 mVertex2X;

	// BrnCrashTriangleCache.h:97
	Vector4 mVertex2Y;

	// BrnCrashTriangleCache.h:98
	Vector4 mVertex2Z;

public:
	// BrnCrashTriangleCache.h:70
	void Clear();

}

// BrnCrashTriangleCache.h:103
struct BrnEffects::BrnCrashTriangleCache {
private:
	// BrnCrashTriangleCache.h:158
	BrnCrashTrianglePackedFormat[48] maPackedTriangles;

	// BrnCrashTriangleCache.h:160
	uint32_t mnNumberOfPackedTriangles;

	// BrnCrashTriangleCache.h:161
	uint32_t mnNextPackedTriangleToFill;

	// BrnCrashTriangleCache.h:162
	uint32_t mnNextComponentToFill;

public:
	// BrnCrashTriangleCache.h:110
	void Construct();

	// BrnCrashTriangleCache.h:113
	void Reset();

	// BrnCrashTriangleCache.h:118
	void ResetAndPrimeCache(const Triangle4 *, uint32_t);

	// BrnCrashTriangleCache.h:123
	void AddTriangles(const Triangle4 *, uint32_t);

	// BrnCrashTriangleCache.h:127
	bool IsEmpty() const;

	// BrnCrashTriangleCache.h:135
	void CollideWithTriangleCache(BrnCrashLineTriangleCacheFormat *, uint32_t) const;

private:
	// BrnCrashTriangleCache.h:146
	void CalculateHashForPackedTriangle(BrnCrashTrianglePackedFormat *);

	// BrnCrashTriangleCache.h:150
	void InsertTriangleIntoCache(BrnCrashTrianglePackedFormat *);

	// BrnCrashTriangleCache.h:155
	void CheckForDuplicateTriangles(BrnCrashTrianglePackedFormat *, bool *);

}

// _built-in_
namespace :: {
	// BrnCrashTriangleCache.h:29
	const uint32_t KU_MAX_NUMBER_PACKED_TRIANGLES = 48;

}

