// aalineclipper.h:54
struct rw::collision::AALineClipper {
	// aalineclipper.h:56
	Vector3 m_origin;

	// aalineclipper.h:57
	Vector3 m_delta;

	// aalineclipper.h:58
	Vector3 m_recip;

	// aalineclipper.h:59
	Vector3 m_padding;

public:
	// aalineclipper.h:92
	// Declaration
	void Init() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// aabbox.h:508
		typedef AABBoxTemplate<rw::math::vpu::Matrix44Affine,rw::math::vpu::Vector3,rw::collision::AABBoxMemoryDumpPolicy> AABBox;

	}

	// aalineclipper.h:154
	void AALineClipper(Vector3, Vector3, Vector3, const AABBox &);

	// aalineclipper.h:177
	void AALineClipper(Vector3, Vector3, const AABBox &);

	// aalineclipper.h:200
	RwBool ClipToAABBox(float32_t &, float32_t &, const AABBox &);

}

// aalineclipper.h:54
struct rw::collision::AALineClipper {
	// aalineclipper.h:56
	Vector3 m_origin;

	// aalineclipper.h:57
	Vector3 m_delta;

	// aalineclipper.h:58
	Vector3 m_recip;

	// aalineclipper.h:59
	Vector3 m_padding;

public:
	// aalineclipper.h:92
	// Declaration
	void Init(Vector3, Vector3, Vector3, const AABBox &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// aabbox.h:508
		typedef AABBoxTemplate<rw::math::vpu::Matrix44Affine,rw::math::vpu::Vector3,rw::collision::AABBoxMemoryDumpPolicy> AABBox;

	}

	// aalineclipper.h:154
	void AALineClipper(Vector3, Vector3, Vector3, const AABBox &);

	// aalineclipper.h:177
	void AALineClipper(Vector3, Vector3, const AABBox &);

	// aalineclipper.h:200
	RwBool ClipToAABBox(float32_t &, float32_t &, const AABBox &);

}

