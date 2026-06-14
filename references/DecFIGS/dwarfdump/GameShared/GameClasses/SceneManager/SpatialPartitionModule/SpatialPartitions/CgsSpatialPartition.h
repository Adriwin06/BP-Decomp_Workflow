// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsSpatialPartition.h:51
	const uint16_t KU_SPATIAL_PARTITION_INVALID_ID = 65535;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsSpatialPartition.h:51
	const uint16_t KU_SPATIAL_PARTITION_INVALID_ID = 65535;

}

// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsSpatialPartition.h:61
	enum ESpatialPartitionType {
		E_SPATIAL_PARTITION_TYPE_SPHERE_TREE = 0,
		E_SPATIAL_PARTITION_TYPE_LOOSE_OCTREE = 1,
		E_SPATIAL_PARTITION_TYPE_COUNT = 2,
	}

	// CgsSpatialPartition.h:51
	const uint16_t KU_SPATIAL_PARTITION_INVALID_ID = 65535;

}

// CgsSpatialPartition.h:84
struct CgsSceneManager::SpatialPartitionConstructParams {
	// CgsSpatialPartition.h:87
	CgsSceneManager::ESpatialPartitionType meType;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsSpatialPartition.h:61
	enum ESpatialPartitionType {
		E_SPATIAL_PARTITION_TYPE_SPHERE_TREE = 0,
		E_SPATIAL_PARTITION_TYPE_LOOSE_OCTREE = 1,
		E_SPATIAL_PARTITION_TYPE_COUNT = 2,
	}

	// Declaration
	struct SpatialPartition {
		// CgsSpatialPartition.h:131
		struct LineTestRecursiveFuncParams {
			// CgsSpatialPartition.h:133
			Vector3 mLineStart;

			// CgsSpatialPartition.h:134
			Vector3 mLineEnd;

			// CgsSpatialPartition.h:135
			Vector3 mLineDirection;

			// CgsSpatialPartition.h:136
			Vector3 mLineReciprocal;

			// CgsSpatialPartition.h:137
			VecFloat mfLineLength;

			// CgsSpatialPartition.h:138
			InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

			// CgsSceneManagerTypes.h:63
			typedef CgsSceneManager::CoarseQueryResultBuffer<16384> CoarseQueryResultBufferDefault;

			// CgsSpatialPartition.h:139
			CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault * mpResultBufferOut;

		}

		// CgsSpatialPartition.h:143
		struct SphereTestRecursiveFuncParams {
			// CgsSpatialPartition.h:145
			Vector3 mPosition;

			// CgsSpatialPartition.h:146
			VecFloat mfRadius;

			// CgsSpatialPartition.h:147
			InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

			// CgsSpatialPartition.h:148
			CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault * mpResultBufferOut;

		}

		// CgsSpatialPartition.h:152
		struct FrustumTestRecursiveFuncParams {
			// CgsSpatialPartition.h:154
			Frustum mFrustum;

			// CgsSpatialPartition.h:155
			InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

			// CgsSpatialPartition.h:156
			CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault * mpResultBufferOut;

			// CgsSpatialPartition.h:157
			uint32_t muDebugInfo;

		}

		// CgsSpatialPartition.h:161
		struct FrustumTestVpRecursiveFuncParams {
			// CgsSpatialPartition.h:163
			Matrix44 mViewProjection;

			// CgsSpatialPartition.h:164
			InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

			// CgsSpatialPartition.h:165
			CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault * mpResultBufferOut;

			// CgsSpatialPartition.h:166
			Frustum mFrustum;

			// CgsSpatialPartition.h:167
			uint32_t muDebugInfo;

		}

		// CgsSpatialPartition.h:171
		struct VolumeTestRecursiveFuncParams {
			// CgsSpatialPartition.h:173
			const VolRef::Volume * mpVolume;

			// CgsSpatialPartition.h:174
			InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

			// CgsSpatialPartition.h:175
			CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault * mpResultBufferOut;

			// CgsSpatialPartition.h:176
			const rw::math::vpu::Matrix44Affine * mpTransform;

		}

	}

	// CgsSpatialPartition.h:51
	const uint16_t KU_SPATIAL_PARTITION_INVALID_ID = 65535;

}

// CgsSpatialPartition.h:102
struct CgsSceneManager::SpatialPartitionEntity {
	// CgsSpatialPartition.h:104
	uint32_t mxTypeFlags;

}

// CgsSpatialPartition.h:110
struct CgsSceneManager::SpatialPartitionEntityInfo {
	// CgsSpatialPartition.h:112
	uint32_t muSpatialPartitionNodeID;

}

// CgsSpatialPartition.h:127
struct CgsSceneManager::SpatialPartition {
	int (*)(...) * _vptr.SpatialPartition;

protected:
	// CgsSpatialPartition.h:354
	FrustumTestJobData::SpatialPartitionEntityNode[10000] maEntities;

	// CgsSpatialPartition.h:357
	Sphere[10000] maEntityBoundingSpheres;

	// CgsSpatialPartition.h:358
	SpatialPartitionEntityInfo[10000] maEntityInfo;

public:
	void SpatialPartition(const SpatialPartition &);

	void SpatialPartition();

	// CgsSpatialPartition.cpp:47
	void Construct();

	// CgsSpatialPartition.h:187
	virtual void Construct(SpatialPartitionConstructParams *, rw::IResourceAllocator *);

	// CgsSpatialPartition.cpp:63
	virtual void Destruct();

	// CgsSpatialPartition.cpp:79
	virtual bool Prepare();

	// CgsSpatialPartition.cpp:96
	virtual bool Release();

	// CgsSpatialPartition.h:204
	virtual void DebugRender(bool);

	// CgsSpatialPartition.h:213
	virtual bool SphereTest(InEventLineTestFine::EntityTypeFlags, Vector3, float32_t, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *);

	// CgsSpatialPartition.h:221
	virtual bool LineTest(InEventLineTestFine::EntityTypeFlags, Vector3, Vector3, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *);

	// CgsSpatialPartition.h:228
	virtual bool FrustumTest(InEventLineTestFine::EntityTypeFlags, const Frustum &, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *);

	// CgsSpatialPartition.h:236
	virtual bool VolumeTest(InEventLineTestFine::EntityTypeFlags, const VolRef::Volume *, const rw::math::vpu::Matrix44Affine *, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *);

	// CgsSpatialPartition.cpp:166
	virtual bool FrustumTestVp(InEventLineTestFine::EntityTypeFlags, const Frustum &, const rw::math::vpu::Matrix44 &, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *);

	// CgsSpatialPartition.h:458
	void AddEntity(uint16_t, uint32_t, Vector3, float32_t);

	// CgsSpatialPartition.h:481
	void RemoveEntity(uint16_t);

	// CgsSpatialPartition.h:263
	virtual void Update();

	// CgsSpatialPartition.h:269
	virtual void SetEntityPosition(uint16_t, Vector3);

	// CgsSpatialPartition.h:275
	virtual void SetEntityRadius(uint16_t, float32_t);

	// CgsSpatialPartition.h:287
	virtual void FrustumTestEntities(const Frustum &, uint32_t, uint16_t *, uint32_t, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *);

protected:
	// CgsSpatialPartition.h:293
	virtual void AddEntityToGraph(uint16_t);

	// CgsSpatialPartition.h:298
	virtual void RemoveEntityFromGraph(uint16_t);

	// CgsSpatialPartition.h:368
	FrustumTestJobData::SpatialPartitionEntityNode & GetEntity(uint16_t);

	// CgsSpatialPartition.cpp:119
	FrustumTestJobData::SpatialPartitionEntityNode * AllocEntity(uint16_t, uint32_t, Vector3, float32_t);

	// CgsSpatialPartition.cpp:145
	void FreeEntity(uint16_t);

	// CgsSpatialPartition.h:375
	FrustumTestJobData::SpatialPartitionEntityNode * GetBaseNode();

	// CgsSpatialPartition.h:414
	uint16_t CalcEntityIndex(const FrustumTestJobData::SpatialPartitionEntityNode &) const;

	// CgsSpatialPartition.h:423
	SpatialPartitionEntityInfo * GetEntityInfoFromEntity(FrustumTestJobData::SpatialPartitionEntityNode &);

	// CgsSpatialPartition.h:433
	const SpatialPartitionEntityInfo * GetEntityInfoFromEntityConst(const FrustumTestJobData::SpatialPartitionEntityNode &) const;

	// CgsSpatialPartition.h:382
	SpatialPartitionEntityInfo * GetEntityInfo(uint16_t);

	// CgsSpatialPartition.h:406
	const SpatialPartitionEntityInfo * GetEntityInfoConst(uint16_t) const;

	// CgsSpatialPartition.h:390
	Sphere & GetEntityBoundingSphere(uint16_t);

	// CgsSpatialPartition.h:398
	const Sphere & GetEntityBoundingSphereConst(uint16_t) const;

}

// CgsSpatialPartition.h:127
void CgsSceneManager::SpatialPartition::SpatialPartition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

