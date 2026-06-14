// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:18
	namespace collision {
		// volumedata.h:47
		enum ObjectType {
			RWCOBJECTTYPE_NA = 524288,
			RWCOBJECTTYPE_VOLUME = 524289,
			RWCOBJECTTYPE_SIMPLEMAPPEDARRAY = 524290,
			RWCOBJECTTYPE_TRIANGLEKDTREEPROCEDURAL = 524291,
			RWCOBJECTTYPE_KDTREEMAPPEDARRAY = 524292,
			RWCOBJECTTYPE_BBOX = 524293,
			RWCOBJECTTYPE_CLUSTEREDMESH = 524294,
			RWCOBJECTTYPE_FORCEENUMSIZEINT = 2147483647,
		}

		// Declaration
		struct Aggregate {
			// aggregate.h:302
			struct VTable {
				// volumedata.h:63
				typedef rw::collision::ObjectType ObjectType;

				// aggregate.h:303
				rw::collision::Aggregate::VTable::ObjectType m_type;

				// aggregate.h:304
 m_GetSize;

				// aggregate.h:305
				uint32_t m_alignment;

				// aggregate.h:306
				RwBool m_isProcedural;

				// aggregate.h:307
 m_Update;

				// aggregate.h:308
 m_LineIntersectionQuery;

				// aggregate.h:309
 m_BBoxOverlapQuery;

			}

		}

	}

}

// volumedata.h:80
struct rw::collision::SphereSpecificData {
	// volumedata.h:81
	void * nothing;

}

// volumedata.h:96
struct rw::collision::CapsuleSpecificData {
	// volumedata.h:97
	float32_t hh;

}

// volumedata.h:115
struct rw::collision::TriangleSpecificData {
	// volumedata.h:116
	float32_t edgeCos0;

	// volumedata.h:117
	float32_t edgeCos1;

	// volumedata.h:118
	float32_t edgeCos2;

}

// volumedata.h:133
struct rw::collision::BoxSpecificData {
	// volumedata.h:134
	float32_t hx;

	// volumedata.h:135
	float32_t hy;

	// volumedata.h:136
	float32_t hz;

}

// volumedata.h:156
struct rw::collision::CylinderSpecificData {
	// volumedata.h:157
	float32_t hh;

	// volumedata.h:158
	float32_t innerRadius;

}

// volumedata.h:173
struct rw::collision::AggregateSpecificData {
	// volumedata.h:175
	rw::collision::Aggregate * agg;

}

