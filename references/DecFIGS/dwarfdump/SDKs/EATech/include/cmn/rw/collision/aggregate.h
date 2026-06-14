// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:18
	namespace collision {
		// Declaration
		struct Aggregate {
			// aggregate.h:302
			struct VTable {
				// volumedata.h:63
				typedef rw::collision::ObjectType ObjectType;

				// aggregate.h:303
				rw::collision::Aggregate::VTable::ObjectType m_type;

				// aggregate.h:304
				// aggregate.h:271
				struct {
				}

 m_GetSize;

				// aggregate.h:305
				uint32_t m_alignment;

				// aggregate.h:306
				RwBool m_isProcedural;

				// aggregate.h:307
				// aggregate.h:277
				struct {
				}

 m_Update;

				// aggregate.h:308
				// aggregate.h:285
				struct {
				}

 m_LineIntersectionQuery;

				// aggregate.h:309
				// aggregate.h:293
				struct {
				}

 m_BBoxOverlapQuery;

			}

		}

	}

}

// aggregate.h:45
struct rw::collision::Aggregate {
protected:
	// aggregate.h:341
	AABBox m_AABB;

	// aggregate.h:342
	rw::collision::Aggregate::VTable * m_vTable;

	// aggregate.h:345
	uint32_t m_numTagBits;

	// aggregate.h:346
	uint32_t m_numVolumes;

	// aggregate.h:353
	uint32_t pad;

public:
	// aggregate.h:55
	const AABBox & GetBBox() const;

	// aggregate.h:76
	uint32_t GetVolumeCount() const;

	// aggregate.h:101
	uint32_t GetChildTagFromTag(uint32_t);

	// aggregate.h:153
	uint32_t GetChildIndexFromTag(uint32_t);

	// aggregate.h:168
	rw::collision::Aggregate::VTable::ObjectType GetType();

	// aggregate.h:180
	ResourceDescriptor GetResourceDescriptor();

	// aggregate.h:196
	RwBool IsProcedural();

	// aggregate.h:212
	void Update();

	// aggregate.h:239
	RwBool LineIntersectionQuery(VolumeLineQuery *, const rw::math::vpu::Matrix44Affine *);

	// aggregate.h:266
	RwBool BBoxOverlapQuery(VolumeBBoxQuery *, const rw::math::vpu::Matrix44Affine *);

	// aggregate.h:316
	void Aggregate(uint32_t, rw::collision::Aggregate::VTable *);

protected:
	// aggregate.h:333
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// aggregate.h:336
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// aggregate.h:339
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

}

// aggregate.h:45
struct rw::collision::Aggregate {
	// aggregate.h:341
	AABBox m_AABB;

	// aggregate.h:342
	rw::collision::Aggregate::VTable * m_vTable;

	// aggregate.h:345
	uint32_t m_numTagBits;

	// aggregate.h:346
	uint32_t m_numVolumes;

	// aggregate.h:353
	uint32_t pad;

public:
	// aggregate.h:55
	const AABBox & GetBBox() const;

	// aggregate.h:76
	uint32_t GetVolumeCount() const;

	// aggregate.h:101
	uint32_t GetChildTagFromTag(uint32_t);

	// aggregate.h:153
	uint32_t GetChildIndexFromTag(uint32_t);

	// aggregate.h:168
	rw::collision::Aggregate::VTable::ObjectType GetType();

	// aggregate.h:180
	ResourceDescriptor GetResourceDescriptor();

	// aggregate.h:196
	RwBool IsProcedural();

	// aggregate.h:212
	void Update();

	// aggregate.h:239
	RwBool LineIntersectionQuery(VolumeLineQuery *, const rw::math::vpu::Matrix44Affine *);

	// aggregate.h:266
	RwBool BBoxOverlapQuery(VolumeBBoxQuery *, const rw::math::vpu::Matrix44Affine *);

	// aggregate.h:316
	void Aggregate(uint32_t, rw::collision::Aggregate::VTable *);

	// aggregate.h:333
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// aggregate.h:336
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// aggregate.h:339
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

}

