// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsLooseOctree.h:69
	const uint32_t KU_NUM_SUBNODES = 4;

	// CgsLooseOctree.h:74
	const uint32_t KU_LOOSE_OCTREE_ADAPTIVE_NODEARRAY_POOL_SIZE = 2048;

	// CgsLooseOctree.h:83
	const uint32_t KU_NUM_FRUSTUM_TEST_JOBS = 4;

	// CgsLooseOctree.h:99
	const uint32_t KU_OCTREE_NODE_FLAG_NEEDS_UPDATE = 1;

	// CgsLooseOctree.h:100
	const uint32_t KU_OCTREE_NODE_FLAG_ENTITY_REMOVED = 2;

	// CgsLooseOctree.h:101
	const uint32_t KU_OCTREE_NODE_FLAG_ENTITY_ADDED = 4;

}

// CgsLooseOctree.h:157
extern const uint32_t KU_VOLUME_QUERY_MEM_SIZE = 299008;

// CgsLooseOctree.h:158
extern const uint32_t KU_BOX_VOLUME_MEM_SIZE = 256;

// CgsLooseOctree.h:159
extern const uint32_t KU_SPHERE_VOLUME_MEM_SIZE = 256;

// CgsLooseOctree.h:116
struct CgsSceneManager::LooseOctreeConstructParams : public SpatialPartitionConstructParams {
	// CgsLooseOctree.h:118
	uint32_t muDepth;

	// CgsLooseOctree.h:119
	Vector3 mCentrePos;

	// CgsLooseOctree.h:120
	float32_t mfSize;

	// CgsLooseOctree.h:121
	float32_t mfLooseness;

	// CgsLooseOctree.h:122
	uint32_t muAdaptiveNodeSplitThreshold;

	// CgsLooseOctree.h:123
	uint32_t muAdaptiveMaxDepth;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsLooseOctree.h:90
	enum IntersectionResult {
		E_INTERSECTIONRESULT_OUTSIDE = 0,
		E_INTERSECTIONRESULT_INSIDE = 1,
		E_INTERSECTIONRESULT_PARTIAL = 2,
	}

	// Declaration
	struct LooseOctree {
		// CgsLooseOctree.h:163
		struct LooseOctreeNodeAllocation {
			// CgsLooseOctree.h:165
			uint16_t muFirstChildIndex;

		}

	}

	// CgsLooseOctree.h:69
	const uint32_t KU_NUM_SUBNODES = 4;

	// CgsLooseOctree.h:74
	const uint32_t KU_LOOSE_OCTREE_ADAPTIVE_NODEARRAY_POOL_SIZE = 2048;

	// CgsLooseOctree.h:83
	const uint32_t KU_NUM_FRUSTUM_TEST_JOBS = 4;

	// CgsLooseOctree.h:99
	const uint32_t KU_OCTREE_NODE_FLAG_NEEDS_UPDATE = 1;

	// CgsLooseOctree.h:100
	const uint32_t KU_OCTREE_NODE_FLAG_ENTITY_REMOVED = 2;

	// CgsLooseOctree.h:101
	const uint32_t KU_OCTREE_NODE_FLAG_ENTITY_ADDED = 4;

}

// CgsLooseOctree.h:156
struct CgsSceneManager::LooseOctree : public CgsSceneManager::SpatialPartition {
private:
	// CgsLooseOctree.h:157
	extern const uint32_t KU_VOLUME_QUERY_MEM_SIZE = 299008;

	// CgsLooseOctree.h:158
	extern const uint32_t KU_BOX_VOLUME_MEM_SIZE = 256;

	// CgsLooseOctree.h:159
	extern const uint32_t KU_SPHERE_VOLUME_MEM_SIZE = 256;

	// Unknown accessibility
	// CgsLooseOctree.cpp:115
	extern int32_t _miLineTestPerfMon;

	// Unknown accessibility
	// CgsLooseOctree.cpp:116
	extern int32_t _miLineSphereTestPerfMon;

	// Unknown accessibility
	// CgsLooseOctree.cpp:117
	extern int32_t _miLineBBoxTestPerfMon;

	// Unknown accessibility
	// CgsLooseOctree.cpp:118
	extern int32_t _miVPLineTestPerfMon;

	// Unknown accessibility
	// CgsLooseOctree.cpp:119
	extern int32_t _miVPLineSphereTestPerfMon;

	// Unknown accessibility
	// CgsLooseOctree.cpp:120
	extern int32_t _miVPLineSphereTest16PerfMon;

	// Unknown accessibility
	// CgsLooseOctree.cpp:121
	extern int32_t _miVPLineSphereTest4PerfMon;

	// Unknown accessibility
	// CgsLooseOctree.cpp:122
	extern int32_t _miVPLineSphereTest1PerfMon;

	// Unknown accessibility
	// CgsLooseOctree.cpp:123
	extern int32_t _miVPLineBBoxTestPerfMon;

	// Unknown accessibility
	// CgsLooseOctree.cpp:124
	extern int32_t _miVPLineSphereTrace;

	// Unknown accessibility
	// CgsLooseOctree.cpp:125
	extern int32_t _miFrustumTestPerfMon;

	// Unknown accessibility
	// CgsLooseOctree.cpp:126
	extern int32_t _miVolumeTestPerfMon;

	// Unknown accessibility
	// CgsLooseOctree.cpp:127
	extern int32_t _miSphereTestPerfMon;

	// CgsLooseOctree.h:573
	uint32_t muDepth;

	// CgsLooseOctree.h:574
	int32_t miNumStaticNodes;

	// CgsLooseOctree.h:575
	float32_t mfBaseSize;

	// CgsLooseOctree.h:576
	float32_t mfLooseness;

	// CgsLooseOctree.h:577
	Vector3 mCentrePos;

	// CgsLooseOctree.h:578
	LooseOctreeNode * mpRootNode;

	// CgsLooseOctree.h:580
	LooseOctreeNode * mpNodes;

	// CgsLooseOctree.h:581
	IndexedPool<CgsSceneManager::LooseOctree::LooseOctreeNodeAllocation,std::uint16_t> mFreeNodeGroupPool;

	// CgsLooseOctree.h:583
	LooseOctreeNodeEntityInfo * mpNodesEntityInfo;

	// CgsLooseOctree.h:586
	uint8_t[299008] macVolumeVolumeQueryBuffer;

	// CgsLooseOctree.h:587
	uint8_t[256] macBoxVolumeBuffer;

	// CgsLooseOctree.h:588
	uint8_t[256] macSphereVolumeBuffer;

	// CgsLooseOctree.h:590
	SphereVolume * mpEntityVolume;

	// CgsLooseOctree.h:591
	BoxVolume * mpNodeVolume;

	// CgsLooseOctree.h:592
	FineIntersectionTestModule::VolumeVolumeQuery * mpVolumeVolumeQuery;

	// CgsLooseOctree.h:594
	Matrix44Affine mNodeTransform;

	// CgsLooseOctree.h:595
	Matrix44Affine mEntityTransform;

	// CgsLooseOctree.h:598
	uint32_t muAdaptiveNodeSplitThreshold;

	// CgsLooseOctree.h:599
	uint32_t muAdaptiveMaxDepth;

	// CgsLooseOctree.h:602
	FrustumTestJobData::SpatialPartitionEntityNode * mpEntityListNodes;

	// CgsLooseOctree.h:605
	Job[4] maFrustumTestJobs;

	// CgsLooseOctree.h:606
	FrustumTestJobData[4] maFrustumTestJobData;

	// CgsLooseOctree.h:607
	JobCoarseResultBuffer[4] maJobResultBuffers;

	// CgsLooseOctree.h:608
	bool[4] mabFrustumJobActive;

	// CgsLooseOctree.h:609
	bool[4] mabFrustumJobRequested;

public:
	void LooseOctree(const LooseOctree &);

	void LooseOctree();

	// CgsLooseOctree.h:769
	void * operator new(size_t, rw::IResourceAllocator *);

	// CgsLooseOctree.h:777
	void operator delete(void *, rw::IResourceAllocator *);

	// CgsLooseOctree.cpp:143
	virtual void Construct(SpatialPartitionConstructParams *, rw::IResourceAllocator *);

	// CgsLooseOctree.cpp:257
	virtual void Destruct();

	// CgsLooseOctree.cpp:275
	virtual bool Prepare();

	// CgsLooseOctree.cpp:304
	virtual bool Release();

	// CgsLooseOctree.cpp:2183
	virtual void DebugRender(bool);

	// CgsLooseOctree.cpp:1139
	virtual bool SphereTest(InEventLineTestFine::EntityTypeFlags, Vector3, float32_t, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *);

	// CgsLooseOctree.cpp:1194
	virtual bool LineTest(InEventLineTestFine::EntityTypeFlags, Vector3, Vector3, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *);

	// CgsLooseOctree.cpp:1371
	virtual bool FrustumTest(InEventLineTestFine::EntityTypeFlags, const Frustum &, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *);

	// CgsLooseOctree.cpp:1406
	virtual bool FrustumTestVp(InEventLineTestFine::EntityTypeFlags, const Frustum &, const rw::math::vpu::Matrix44 &, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *);

	// CgsLooseOctree.cpp:3065
	void AddJobFrustumTest(InEventLineTestFine::EntityTypeFlags, const Frustum &, const rw::math::vpu::Matrix44 &, uint32_t);

	// CgsLooseOctree.cpp:3080
	void StartFrustumTestJobs();

	// CgsLooseOctree.cpp:3118
	void WaitForFrustumTestJobResults(CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *);

	// CgsLooseOctree.cpp:2553
	virtual bool FrustumTestVp4(InEventLineTestFine::EntityTypeFlags, const Frustum &, const rw::math::vpu::Matrix44 &, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *);

	// CgsLooseOctree.cpp:1458
	virtual bool VolumeTest(InEventLineTestFine::EntityTypeFlags, const VolRef::Volume *, const rw::math::vpu::Matrix44Affine *, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *);

	// CgsLooseOctree.cpp:612
	virtual void Update();

	// CgsLooseOctree.h:643
	virtual void SetEntityPosition(uint16_t, Vector3);

	// CgsLooseOctree.cpp:1033
	virtual void SetEntityRadius(uint16_t, float32_t);

	// CgsLooseOctree.cpp:2523
	// Declaration
	virtual void FrustumTestEntities(const Frustum &, uint32_t, uint16_t *, uint32_t, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsLooseOctree.cpp:2525
		using namespace CgsContainers;

	}

	// CgsLooseOctree.cpp:2890
	void CheckIntegrity(LooseOctreeNode *);

	// CgsLooseOctree.cpp:2902
	// Declaration
	void CheckIntegrityRecursive(LooseOctreeNode *, IntegrityCheckInfo *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsLooseOctree.cpp:2904
		using namespace CgsContainers;

	}

protected:
	// CgsLooseOctree.h:622
	virtual void AddEntityToGraph(uint16_t);

	// CgsLooseOctree.h:632
	virtual void RemoveEntityFromGraph(uint16_t);

private:
	// CgsLooseOctree.cpp:1261
	bool LineTestUnOptimized(InEventLineTestFine::EntityTypeFlags, Vector3, Vector3, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *);

	// CgsLooseOctree.cpp:1309
	bool LineTestOptimized(InEventLineTestFine::EntityTypeFlags, Vector3, Vector3, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *);

	// CgsLooseOctree.cpp:386
	void AllocRecursive(rw::IResourceAllocator *, uint32_t, uint16_t, uint16_t);

	// CgsLooseOctree.cpp:328
	void PrepareRecursive(uint16_t, Vector3, float32_t);

	// CgsLooseOctree.cpp:433
	void AddEntityInternal(uint16_t);

	// CgsLooseOctree.cpp:477
	void RemoveEntityInternal(uint16_t);

	// CgsLooseOctree.h:695
	void FlagBranchForUpdate(LooseOctreeNode *);

	// CgsLooseOctree.cpp:647
	// Declaration
	void UpdateRecursive(uint16_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsLooseOctree.cpp:654
		using namespace CgsContainers;

	}

	// CgsLooseOctree.cpp:517
	LooseOctreeNode * CalcNextSubNode(Vector3, const LooseOctreeNode *) const;

	// CgsLooseOctree.h:710
	uint16_t GetNodeBySpatialPartitionId(uint32_t) const;

	// CgsLooseOctree.h:718
	uint32_t GetSpatialPartitionIdByNode(LooseOctreeNode *) const;

	// CgsLooseOctree.h:672
	bool EntityInsideNodeBounds(uint16_t, LooseOctreeNode *);

	// CgsLooseOctree.cpp:1498
	void SphereTestRecursive(uint16_t, CgsSceneManager::SpatialPartition::SphereTestRecursiveFuncParams *) const;

	// CgsLooseOctree.cpp:1580
	void LineTestRecursiveUnoptimized(uint16_t, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams *);

	// CgsLooseOctree.cpp:1654
	void LineTestRecursive(uint16_t, const CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams *) const;

	// CgsLooseOctree.cpp:1841
	void FrustumTestRecursive(uint16_t, CgsSceneManager::SpatialPartition::FrustumTestRecursiveFuncParams *);

	// CgsLooseOctree.cpp:1981
	void FrustumTestVpRecursive(uint16_t, CgsSceneManager::SpatialPartition::FrustumTestVpRecursiveFuncParams *);

	// CgsLooseOctree.cpp:2594
	void FrustumTestVpRecursive4(uint16_t, CgsSceneManager::SpatialPartition::FrustumTestVpRecursiveFuncParams *);

	// CgsLooseOctree.cpp:2123
	void VolumeTestRecursive(uint16_t, CgsSceneManager::SpatialPartition::VolumeTestRecursiveFuncParams *);

	// CgsLooseOctree.cpp:2984
	void FrustumTestVpRecursive_BulkEntityTest(uint16_t, CgsSceneManager::SpatialPartition::FrustumTestVpRecursiveFuncParams *, uint16_t *, uint32_t &);

	// CgsLooseOctree.cpp:2192
	void DebugRenderRecursive(bool, uint16_t, int32_t);

	// CgsLooseOctree.h:785
	void AddEntityListToResultBuffer(LooseOctreeNode::SpatialPartitionEntityList *, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *);

	// CgsLooseOctree.h:728
	void CalcNodeCorners(const LooseOctreeNode *, Vector3 *) const;

	// CgsLooseOctree.h:801
	void CalcNodeVolumeTransform(LooseOctreeNode *);

	// CgsLooseOctree.h:814
	void CalcEntityVolumeTransform(const Sphere &);

	// CgsLooseOctree.h:935
	bool TestLineAgainstNodeBoundingBox(const LooseOctreeNode *, const CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams *) const;

	// CgsLooseOctree.cpp:2252
	bool TestLineAgainstNodeBoundingBoxUnoptimized(LooseOctreeNode *, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams *);

	// CgsLooseOctree.h:826
	void UpdateNodeYBounds(LooseOctreeNode *, uint16_t);

	// CgsLooseOctree.h:844
	bool PointInsideBB(Vector3, Vector3, Vector3) const;

	// CgsLooseOctree.cpp:1913
	CgsSceneManager::IntersectionResult NodeInsideFrustum(LooseOctreeNode *, Frustum *) const;

	// Unknown accessibility
	// CgsLooseOctree.h:97
	typedef uint32_t IntersectionResult4;

	// CgsLooseOctree.cpp:2737
	LooseOctree::IntersectionResult4 NodeInsideFrustumVp4(LooseOctreeNode **, const rw::math::vpu::Matrix44 &) const;

	// CgsLooseOctree.cpp:2057
	CgsSceneManager::IntersectionResult NodeInsideFrustumVp(LooseOctreeNode *, const rw::math::vpu::Matrix44 &) const;

	// CgsLooseOctree.cpp:2340
	void TrivialAcceptRecursive(uint16_t, InEventLineTestFine::EntityTypeFlags, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault *) const;

	// CgsLooseOctree.cpp:781
	void AdaptiveDepthUpdateAddNodesRecursive(uint16_t, uint32_t);

	// CgsLooseOctree.cpp:929
	void AdaptiveDepthUpdateRemoveNodesRecursive(uint16_t, uint32_t);

	// CgsLooseOctree.cpp:836
	// Declaration
	void SplitAndPropogateRecursive(uint16_t, uint32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsLooseOctree.cpp:840
		using namespace CgsContainers;

	}

	// CgsLooseOctree.cpp:971
	// Declaration
	void MergeSubTreeRecursive(uint16_t, LooseOctreeNode *, uint32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsLooseOctree.cpp:975
		using namespace CgsContainers;

	}

	// CgsLooseOctree.h:864
	bool LineSphereIntersection(Vector3, float32_t, CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams *);

}

// CgsLooseOctree.h:156
void CgsSceneManager::LooseOctree::LooseOctree() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

