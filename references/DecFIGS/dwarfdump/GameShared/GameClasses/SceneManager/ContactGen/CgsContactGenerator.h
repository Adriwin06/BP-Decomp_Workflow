// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// Declaration
	struct ContactGenerator {
		// CgsContactGenerator.h:161
		struct QueryAccumulator : public IOBuffer {
			// CgsContactGenerator.h:171
			PrimitiveInstanceQuery[2048] maQueryBuffer;

			// CgsContactGenerator.h:172
			uint32_t muNumQueries;

			// CgsContactGenerator.h:173
			GPInstance[6000] maInstanceBuffer;

			// CgsContactGenerator.h:174
			uint32_t muNumInstances;

			// CgsContactGenerator.h:176
			rw::collision::GPInstance::ContactPoints[4000] maContactPoints;

		public:
			// CgsContactGenerator.h:165
			void Construct();

			// CgsContactGenerator.h:169
			void Destruct();

		}

	}

}

// CgsContactGenerator.h:48
struct CgsSceneManager::CollisionPair {
	// CgsContactGenerator.h:49
	const VolumeInstance * mpInstA;

	// CgsContactGenerator.h:50
	const VolumeInstance * mpInstB;

	// CgsContactGenerator.h:52
	uint32_t muInstIndexA;

	// CgsContactGenerator.h:53
	uint32_t muInstIndexB;

	// CgsContactGenerator.h:55
	const VolRef::Volume * mpVolA;

	// CgsContactGenerator.h:56
	const VolRef::Volume * mpVolB;

}

// CgsContactGenerator.h:60
struct CgsSceneManager::ClusteredMeshBBoxQueryIterator {
private:
	// CgsContactGenerator.h:137
	const ClusteredMesh * mpClusteredMesh;

	// CgsContactGenerator.h:138
	uint32_t muShift;

	// CgsContactGenerator.h:139
	uint32_t muMask;

	// CgsContactGenerator.h:140
	KdTreeBBoxQuery mMapQuery;

	// CgsContactGenerator.h:143
	uint32_t muTotalUnitCount;

	// CgsContactGenerator.h:144
	uint32_t muProcessedUnitCount;

	// CgsContactGenerator.h:147
	uint32_t muClusterIndex;

	// CgsContactGenerator.h:148
	uint32_t muDataOffset;

public:
	// CgsContactGenerator.h:62
	void ClusteredMeshBBoxQueryIterator(const ClusteredMesh *, const AABBox &);

	// CgsContactGenerator.h:76
	uint32_t UnitsLeftInRange();

	// CgsContactGenerator.h:82
	RwBool QueryRange();

	// CgsContactGenerator.h:109
	uint32_t GetClusterIndex();

	// CgsContactGenerator.h:115
	uint32_t GetDataOffset();

	// CgsContactGenerator.h:121
	void NextUnit(uint32_t);

}

// CgsContactGenerator.h:157
struct CgsSceneManager::ContactGenerator {
	// CgsContactGenerator.h:250
	CgsSceneManager::ContactGenerator::QueryAccumulator * mpQueryAccumulator;

public:
	// CgsContactGenerator.h:180
	void Reset();

	// CgsContactGenerator.h:183
	void ProcessAccumulatedQueries();

	// CgsContactGenerator.h:189
	uint32_t ClusteredMeshBBoxQuery_GetOverlappingInstances(ClusteredMeshBBoxQueryIterator *, const ClusteredMesh *, const rw::math::vpu::Matrix44Affine &, const AABBox &, GPTriangle *, uint32_t);

	// CgsContactGenerator.h:195
	uint32_t InstanceCMTrianglesGivenAABB(GPInstance *, uint32_t, const ClusteredMesh *, const rw::math::vpu::Matrix44Affine &, const AABBox &, uint16_t);

	// CgsContactGenerator.h:199
	uint32_t CreateVolTriSoupNxM(GPInstance *, uint32_t, uint32_t, float32_t);

	// CgsContactGenerator.h:203
	void InstanceVolIntoNxM(uint32_t, const VolumeInstance *, uint32_t, const VolRef::Volume *);

	// CgsContactGenerator.h:208
	uint32_t InstanceCachedVolTriSoupPair(const VolumeInstance *, uint32_t, const VolRef::Volume *, GPInstance *, uint32_t, float32_t, uint32_t *);

	// CgsContactGenerator.h:211
	uint32_t InstancePrimPrimPairs(const CollisionPair *, uint32_t);

	// CgsContactGenerator.h:222
	bool InstancePrimPrimPair(const VolumeInstance *, uint32_t, const VolRef::Volume *, const VolumeInstance *, uint32_t, const VolRef::Volume *, float_t);

	// CgsContactGenerator.h:226
	uint32_t InstancePrimAggPairs(void *, uint32_t, uint32_t *, uint32_t *);

	// CgsContactGenerator.h:239
	uint32_t InstancePrimAggPair(const VolumeInstance *, uint32_t, const VolRef::Volume *, const VolumeInstance *, uint32_t, const VolRef::Volume *, float_t, uint32_t *, uint32_t *);

	// CgsContactGenerator.h:243
	// Declaration
	uint32_t GenerateContactsFromAccumulatedQueries(OutputBuffer *, uint32_t *, uint32_t *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsContactGenerator.cpp:523
		using namespace CgsDev::Message;

		// CgsContactGenerator.cpp:558
		using namespace CgsDev::Message;

	}

	// CgsContactGenerator.h:245
	void SetQueryAccumulator(CgsSceneManager::ContactGenerator::QueryAccumulator *);

}

