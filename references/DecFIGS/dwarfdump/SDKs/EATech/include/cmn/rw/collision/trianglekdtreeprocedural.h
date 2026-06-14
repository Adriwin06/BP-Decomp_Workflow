// trianglekdtreeprocedural.h:315
extern rw::collision::Aggregate::VTable sm_vTable;

// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:18
	namespace collision {
		// Declaration
		struct TriangleKDTreeProcedural {
			// trianglekdtreeprocedural.h:70
			struct Triangle {
				// trianglekdtreeprocedural.h:71
				uint32_t[3] indices;

				// trianglekdtreeprocedural.h:72
				uint32_t id;

			}

		}

	}

}

// trianglekdtreeprocedural.h:50
struct rw::collision::TriangleKDTreeProcedural : public Procedural {
	// trianglekdtreeprocedural.h:315
	extern rw::collision::Aggregate::VTable sm_vTable;

	// trianglekdtreeprocedural.h:317
	uint32_t m_numVerts;

	// trianglekdtreeprocedural.h:321
	rw::collision::TriangleKDTreeProcedural::Triangle * m_tris;

	// trianglekdtreeprocedural.h:326
	Vector3 * m_verts;

	// trianglekdtreeprocedural.h:331
	KDTree * m_map;

	// trianglekdtreeprocedural.h:336
	uint32_t * m_flags;

public:
	// trianglekdtreeprocedural.h:56
	void TriangleKDTreeProcedural(uint32_t, uint32_t, rw::collision::Aggregate::VTable *, uint32_t);

	// trianglekdtreeprocedural.h:76
	uint32_t GetSizeThis() const;

	// trianglekdtreeprocedural.h:84
	ResourceDescriptor GetResourceDescriptor(uint32_t, uint32_t, uint32_t, const AABBox &, const rw::collision::Aggregate::VTable *, uint32_t);

	// trianglekdtreeprocedural.h:93
	TriangleKDTreeProcedural * Initialize(const Resource &, uint32_t, uint32_t, uint32_t, AABBox &, rw::collision::Aggregate::VTable *, uint32_t);

	// trianglekdtreeprocedural.h:96
	void Release(TriangleKDTreeProcedural *);

	// trianglekdtreeprocedural.h:109
	Vector3 * GetVertices();

	// trianglekdtreeprocedural.h:119
	const rw::math::vpu::Vector3 * GetVertices() const;

	// trianglekdtreeprocedural.h:134
	rw::collision::TriangleKDTreeProcedural::Triangle * GetTriangles();

	// trianglekdtreeprocedural.h:144
	const rw::collision::TriangleKDTreeProcedural::Triangle * GetTriangles() const;

	// trianglekdtreeprocedural.h:162
	uint32_t GetTriangleFlags(uint32_t) const;

	// trianglekdtreeprocedural.h:188
	void SetTriangleFlags(uint32_t, uint32_t, uint32_t);

	// trianglekdtreeprocedural.h:211
	const KDTree * GetKDTree() const;

	// trianglekdtreeprocedural.h:226
	KDTree * GetKDTree();

	// trianglekdtreeprocedural.h:234
	RwBool IsValid();

	// trianglekdtreeprocedural.h:238
	void UpdateThis();

	// trianglekdtreeprocedural.h:242
	RwBool LineIntersectionQueryThis(VolumeLineQuery *, const rw::math::vpu::Matrix44Affine *);

	// trianglekdtreeprocedural.h:246
	RwBool BBoxOverlapQueryThis(VolumeBBoxQuery *, const rw::math::vpu::Matrix44Affine *);

	// trianglekdtreeprocedural.h:250
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// trianglekdtreeprocedural.h:253
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// trianglekdtreeprocedural.h:256
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// trianglekdtreeprocedural.h:265
	void RegisterArenaReadCallbacks();

	// trianglekdtreeprocedural.h:283
	void RegisterArenaWriteCallbacks();

	// trianglekdtreeprocedural.h:297
	float32_t GetTriangleNormal(uint32_t, Vector3 &) const;

	// trianglekdtreeprocedural.h:300
	void AutoSetFlags(float32_t);

	// trianglekdtreeprocedural.h:307
	RwBool TriangleIsOutside(uint32_t, uint32_t, const rw::math::vpu::Vector3 &) const;

	// trianglekdtreeprocedural.h:310
	void MateTriangles(uint32_t, uint32_t, float32_t, float32_t, const rw::math::vpu::Vector3 &);

}

