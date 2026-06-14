// clusteredmeshcluster.h:90
struct rw::collision::ClusterParams {
	// clusteredmeshcluster.h:91
	float32_t mVertexCompressionGranularity;

	// clusteredmeshcluster.h:92
	uint16_t mFlags;

	// clusteredmeshcluster.h:93
	uint8_t mGroupIdSize;

	// clusteredmeshcluster.h:94
	uint8_t mSurfaceIdSize;

}

// clusteredmeshcluster.h:115
struct rw::collision::ClusteredMeshCluster {
	// clusteredmeshcluster.h:164
	uint16_t unitCount;

	// clusteredmeshcluster.h:165
	uint16_t unitDataSize;

	// clusteredmeshcluster.h:166
	uint16_t unitDataStart;

	// clusteredmeshcluster.h:167
	uint16_t normalStart;

	// clusteredmeshcluster.h:168
	uint16_t totalSize;

	// clusteredmeshcluster.h:169
	uint8_t vertexCount;

	// clusteredmeshcluster.h:170
	uint8_t normalCount;

	// clusteredmeshcluster.h:171
	uint8_t compressionMode;

	// clusteredmeshcluster.h:172
	uint8_t[3] padding;

	// clusteredmeshcluster.h:173
	Vector3[1] vertexArray;

public:
	// clusteredmeshcluster.h:117
	void ClusteredMeshCluster();

	// clusteredmeshcluster.h:146
	Vector3 GetVertex(uint8_t, const float32_t &);

	// clusteredmeshcluster.h:147
	void Get3Vertices(Vector3 *, uint8_t, uint8_t, uint8_t, const float32_t &);

	// clusteredmeshcluster.h:148
	void Get4Vertices(Vector3 *, uint8_t, uint8_t, uint8_t, uint8_t, const float32_t &);

	// clusteredmeshcluster.h:149
	uint32_t GetUnitSize(uint32_t, const ClusterParams &);

	// clusteredmeshcluster.h:150
	uint32_t GetUnitType(uint32_t);

	// clusteredmeshcluster.h:152
	uint8_t * UnitData();

	// clusteredmeshcluster.h:153
	Vector3 * NormalArray();

	// clusteredmeshcluster.h:154
	uint32_t NumVolumesInUnit(uint32_t);

	// clusteredmeshcluster.h:156
	uint32_t UnitGetOverlappingGPInstances(uint32_t, const AABBox &, const rw::math::vpu::Matrix44Affine *, GPTriangle *, uint32_t &, const ClusterParams &);

	// clusteredmeshcluster.h:157
	void GetGroupAndSurfaceId(uint32_t, const ClusterParams &, uint32_t &, uint32_t &);

}

// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:18
	namespace collision {
		// Declaration
		struct ClusteredMeshCluster {
			// clusteredmeshcluster.h:132
			struct Vertex16 {
				// clusteredmeshcluster.h:133
				uint16_t x;

				// clusteredmeshcluster.h:134
				uint16_t y;

				// clusteredmeshcluster.h:135
				uint16_t z;

			}

			// clusteredmeshcluster.h:140
			struct Vertex32 {
				// clusteredmeshcluster.h:141
				int32_t x;

				// clusteredmeshcluster.h:142
				int32_t y;

				// clusteredmeshcluster.h:143
				int32_t z;

			}

		}

	}

}

