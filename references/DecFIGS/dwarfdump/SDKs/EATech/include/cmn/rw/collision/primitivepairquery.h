// primitivepairquery.h:47
struct rw::collision::PrimitivePairIntersectResult {
	// primitivepairquery.h:55
	const VolRef::Volume * v1;

	// primitivepairquery.h:56
	uint32_t tag1;

	// primitivepairquery.h:57
	const VolRef::Volume * v2;

	// primitivepairquery.h:58
	uint32_t tag2;

	// primitivepairquery.h:59
	int32_t vNindex;

	// primitivepairquery.h:62
	Feature f1;

	// primitivepairquery.h:64
	Feature f2;

	// primitivepairquery.h:66
	Vector3 sepDir;

	// primitivepairquery.h:68
	float32_t sepDist;

	// primitivepairquery.h:70
	Vector3 normal;

	// primitivepairquery.h:71
	Vector3 pointOn1;

	// primitivepairquery.h:72
	Vector3 pointOn2;

	// primitivepairquery.h:73
	float32_t distance;

	// primitivepairquery.h:75
	Vector3[16] pointsOn1;

	// primitivepairquery.h:77
	Vector3[16] pointsOn2;

	// primitivepairquery.h:79
	float32_t[16] distances;

	// primitivepairquery.h:81
	uint32_t numPoints;

public:
	// primitivepairquery.h:88
	void PrimitivePairIntersectResult();

}

