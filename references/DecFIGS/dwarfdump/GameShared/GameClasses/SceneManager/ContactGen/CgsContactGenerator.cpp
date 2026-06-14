// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsContactGenerator.cpp:290
	extern int64_t PerformanceCounterGetValue();

	// CgsContactGenerator.cpp:40
	extern ContactGenerationJobData[5] maCGJobData;

	// CgsContactGenerator.cpp:41
	extern char[224] mCMQueryIterator;

	// CgsContactGenerator.cpp:43
	extern Job[5] maJobs;

}

// CgsContactGenerator.cpp:25
using namespace rw::math;

// CgsContactGenerator.cpp:26
using namespace rw::collision;

// CgsContactGenerator.cpp:47
void CgsSceneManager::ContactGenerator::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsContactGenerator.cpp:56
void CgsSceneManager::ContactGenerator::ClusteredMeshBBoxQuery_GetOverlappingInstances(ClusteredMeshBBoxQueryIterator *  lpOverlaps, const ClusteredMesh *  lpClusteredMesh, const const rw::math::vpu::Matrix44Affine &  lTransform, const const AABBox &  lQueryBBox, GPTriangle *  lpInstances, uint32_t  luMaxInstances) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsContactGenerator.cpp:59
		uint32_t luNumPrimitives;

		ClusteredMeshBBoxQueryIterator::QueryRange(/* parameters */);
		{
			// CgsContactGenerator.cpp:65
			uint32_t i;

			{
				// CgsContactGenerator.cpp:67
				uint32_t luNumPrimitivesInUnit;

				// CgsContactGenerator.cpp:70
				uint32_t luUnitSize;

				ClusteredMeshBBoxQueryIterator::NextUnit(/* parameters */);
			}
		}
	}
}

// CgsContactGenerator.cpp:88
void CgsSceneManager::ContactGenerator::InstanceCMTrianglesGivenAABB(GPInstance *  instanceDestBuffer, uint32_t  maxInstances, const ClusteredMesh *  clusteredMesh, const const rw::math::vpu::Matrix44Affine &  clusteredMeshFrame, const const AABBox &  aabb, uint16_t  lu16EntityIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsContactGenerator.cpp:91
		ClusteredMeshBBoxQueryIterator * overlaps;

		// CgsContactGenerator.cpp:95
		uint32_t numMeshInstances;

		ClusteredMeshBBoxQueryIterator::ClusteredMeshBBoxQueryIterator(/* parameters */);
	}
	{
		// CgsContactGenerator.cpp:99
		uint32_t i;

	}
}

// CgsContactGenerator.cpp:168
void CgsSceneManager::ContactGenerator::InstanceVolIntoNxM(uint32_t  luNxMid, const VolumeInstance *  volInst, uint32_t  volInstIndex, const VolRef::Volume *  vol) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsContactGenerator.cpp:170
		PrimitiveInstanceQuery * gQueryBuffer;

		// CgsContactGenerator.cpp:171
		PrimitiveInstanceQuery * query;

	}
	rw::collision::Volume::CreateGPInstance(/* parameters */);
}

// CgsContactGenerator.cpp:637
void CgsSceneManager::ContactGenerator::InstancePrimPrimPair(const VolumeInstance *  lpInstA, uint32_t  luVolInstIndexA, const VolRef::Volume *  lpVolA, const VolumeInstance *  lpInstB, uint32_t  luVolInstIndexB, const VolRef::Volume *  lpVolB, float_t  lfPadding) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsContactGenerator.cpp:639
		const uint32_t & gNumQueries;

		// CgsContactGenerator.cpp:640
		PrimitiveInstanceQuery * gQueryBuffer;

		// CgsContactGenerator.cpp:641
		const uint32_t & gNumInstances;

		// CgsContactGenerator.cpp:642
		GPInstance * gInstanceBuffer;

		{
			// CgsContactGenerator.cpp:647
			PrimitiveInstanceQuery * query;

			// CgsContactGenerator.cpp:657
			const VolRef::Volume * volumeA;

			// CgsContactGenerator.cpp:658
			const VolRef::Volume * volumeB;

			// CgsContactGenerator.cpp:659
			const const rw::math::vpu::Matrix44Affine & frameA;

			// CgsContactGenerator.cpp:660
			const const rw::math::vpu::Matrix44Affine & frameB;

		}
	}
	rw::collision::Volume::CreateGPInstance(/* parameters */);
	rw::collision::Volume::CreateGPInstance(/* parameters */);
}

// CgsContactGenerator.cpp:689
void CgsSceneManager::ContactGenerator::InstancePrimPrimPairs(const CollisionPair *  inputPairs, uint32_t  numInputPairs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsContactGenerator.cpp:691
		uint32_t numInstancesCreated;

		// CgsContactGenerator.cpp:692
		uint32_t pairIndex;

		// CgsContactGenerator.cpp:694
		const uint32_t & gNumQueries;

	}
	{
		// CgsContactGenerator.cpp:699
		const CollisionPair * pair;

	}
}

// CgsContactGenerator.cpp:111
void CgsSceneManager::ContactGenerator::CreateVolTriSoupNxM(GPInstance *  lpTriangleInstances, uint32_t  luNumTriangleInstances, uint32_t  luNumVolumesToAllocate, float32_t  lrPadding) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsContactGenerator.cpp:113
		const uint32_t & gNumQueries;

		// CgsContactGenerator.cpp:114
		PrimitiveInstanceQuery * gQueryBuffer;

		// CgsContactGenerator.cpp:115
		const uint32_t & gNumInstances;

		// CgsContactGenerator.cpp:116
		GPInstance * gInstanceBuffer;

		// CgsContactGenerator.cpp:121
		uint32_t luQueryIndex;

		// CgsContactGenerator.cpp:122
		PrimitiveInstanceQuery * query;

		// CgsContactGenerator.cpp:132
		uint32_t luNumCopiedTriangles;

	}
	{
		// CgsContactGenerator.cpp:133
		uint32_t i;

	}
	{
		// CgsContactGenerator.cpp:135
		GPTriangle * triInst;

		// CgsContactGenerator.cpp:137
		bool lbTriangleIsValid;

		{
			// CgsContactGenerator.cpp:138
			uint32_t k;

			rw::math::vpu::IsValid(/* parameters */);
		}
	}
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// CgsContactGenerator.cpp:118
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsContactGenerator.cpp:119
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsContactGenerator.cpp:182
void CgsSceneManager::ContactGenerator::InstanceCachedVolTriSoupPair(const VolumeInstance *  volInst, uint32_t  volInstIndex, const VolRef::Volume *  vol, GPInstance *  triangleInstances, uint32_t  numTriangleInstances, float32_t  padding, uint32_t *  pNumPPQsFilteredOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsContactGenerator.cpp:184
		const uint32_t & gNumQueries;

		// CgsContactGenerator.cpp:185
		PrimitiveInstanceQuery * gQueryBuffer;

		// CgsContactGenerator.cpp:186
		const uint32_t & gNumInstances;

		// CgsContactGenerator.cpp:187
		GPInstance * gInstanceBuffer;

		// CgsContactGenerator.cpp:191
		PrimitiveInstanceQuery * query;

		// CgsContactGenerator.cpp:209
		AABBox bbox0;

		// CgsContactGenerator.cpp:209
		AABBox bbox1;

		// CgsContactGenerator.cpp:210
		uint32_t numOverlappingTriangleInstances;

		// CgsContactGenerator.cpp:212
		Vector3 paddingVec;

	}
	rw::collision::Volume::CreateGPInstance(/* parameters */);
	rw::collision::Volume::GetBBox(/* parameters */);
	{
		// CgsContactGenerator.cpp:217
		uint32_t i;

	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	{
		// CgsContactGenerator.cpp:189
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsContactGenerator.cpp:190
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsContactGenerator.cpp:219
		GPTriangle * triInst;

		rw::math::vpu::Min(/* parameters */);
	}
	AABBoxTemplate<rw::math::vpu::Matrix44Affine,rw::math::vpu::Vector3,rw::collision::AABBoxMemoryDumpPolicy>::Overlaps(/* parameters */);
	vec_cmpgt(/* parameters */);
	rw::math::vpu::Max(/* parameters */);
	rw::math::vpu::Max(/* parameters */);
	rw::math::vpu::Min(/* parameters */);
	vec_or(/* parameters */);
	vec_sld(/* parameters */);
	vec_all_eq(/* parameters */);
	{
		// CgsContactGenerator.cpp:225
		bool lbTriangleIsValid;

		{
			// CgsContactGenerator.cpp:226
			uint32_t k;

			rw::math::vpu::IsValid(/* parameters */);
		}
	}
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// CgsContactGenerator.cpp:722
void CgsSceneManager::ContactGenerator::InstancePrimAggPair(const VolumeInstance *  lpInstA, uint32_t  luVolInstIndexA, const VolRef::Volume *  lpVolA, const VolumeInstance *  lpInstB, uint32_t  luVolInstIndexB, const VolRef::Volume *  lpVolB, float_t  lfPadding, uint32_t *  lpNumQueries, uint32_t *  lpNumPPQsFilteredOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsContactGenerator.cpp:724
		const uint32_t & gNumQueries;

		// CgsContactGenerator.cpp:725
		const uint32_t & gNumInstances;

		// CgsContactGenerator.cpp:726
		GPInstance * gInstanceBuffer;

		// CgsContactGenerator.cpp:728
		uint32_t numInstances;

		// CgsContactGenerator.cpp:729
		uint32_t queryIndex;

		// CgsContactGenerator.cpp:730
		uint32_t queriesGenerated;

		// CgsContactGenerator.cpp:731
		uint32_t pairIndex;

		// CgsContactGenerator.cpp:732
		int32_t maxMeshInstances;

	}
	{
		// CgsContactGenerator.cpp:737
		const VolRef::Volume * meshVolume;

		// CgsContactGenerator.cpp:738
		const VolRef::Volume * primitiveVol;

		// CgsContactGenerator.cpp:745
		const ClusteredMesh * clusteredMesh;

		// CgsContactGenerator.cpp:749
		const const rw::math::vpu::Matrix44Affine & meshFrame;

		// CgsContactGenerator.cpp:750
		const const rw::math::vpu::Matrix44Affine & primitiveFrame;

		// CgsContactGenerator.cpp:753
		AABBox primitiveBBox;

		// CgsContactGenerator.cpp:757
		VecFloat paddingVector;

		// CgsContactGenerator.cpp:762
		Matrix44Affine inverseTransform;

		// CgsContactGenerator.cpp:764
		AABBox CMQueryBBox;

		// CgsContactGenerator.cpp:768
		VecFloat granularityImprecision;

		// CgsContactGenerator.cpp:772
		GPTriangle * trianglesMemory;

		// CgsContactGenerator.cpp:775
		uint32_t numTriangles;

		rw::collision::Volume::GetBBox(/* parameters */);
		AABBoxTemplate<rw::math::vpu::Matrix44Affine,rw::math::vpu::Vector3,rw::collision::AABBoxMemoryDumpPolicy>::Transform(/* parameters */);
		rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator-=(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Abs(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Abs(/* parameters */);
		rw::math::vpu::Abs(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
	}
}

// CgsContactGenerator.cpp:804
void CgsSceneManager::ContactGenerator::InstancePrimAggPairs(void *  inputPairsPtr, uint32_t  numInputPairs, uint32_t *  numQueries, uint32_t *  pNumPPQsFilteredOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsContactGenerator.cpp:806
		const uint32_t & gNumQueries;

		// CgsContactGenerator.cpp:807
		const uint32_t & gNumInstances;

		// CgsContactGenerator.cpp:809
		const CollisionPair * inputPairs;

		// CgsContactGenerator.cpp:810
		uint32_t numInstances;

		// CgsContactGenerator.cpp:811
		uint32_t queryIndex;

		// CgsContactGenerator.cpp:812
		uint32_t queriesGenerated;

		// CgsContactGenerator.cpp:813
		uint32_t pairIndex;

		// CgsContactGenerator.cpp:814
		int32_t maxMeshInstances;

	}
	{
		// CgsContactGenerator.cpp:822
		const CollisionPair * pair;

	}
}

// CgsContactGenerator.cpp:341
void CgsSceneManager::ContactGenerator::GenerateContactsFromAccumulatedQueries(OutputBuffer *  lpOutput, uint32_t *  pNumPPQs, uint32_t *  pNumIntersections) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[39] __FUNCTION__;

	{
		// CgsContactGenerator.cpp:343
		const uint32_t & gNumQueries;

		// CgsContactGenerator.cpp:344
		PrimitiveInstanceQuery * gQueryBuffer;

		// CgsContactGenerator.cpp:345
		rw::collision::GPInstance::ContactPoints * gContactPoints;

		// CgsContactGenerator.cpp:347
		uint32_t numContactsTotal;

		// CgsContactGenerator.cpp:348
		uint32_t numInstancesTotal;

		// CgsContactGenerator.cpp:349
		uint32_t numIntersectionsTotal;

		// CgsContactGenerator.cpp:350
		uint32_t i;

		// CgsContactGenerator.cpp:353
		DebugInterface lDebugInterface;

		// CgsContactGenerator.cpp:499
		uint64_t li64PPUTime;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
	}
	PerformanceCounterGetValue(/* parameters */);
	{
		// CgsContactGenerator.cpp:506
		uint32_t numIntersections;

		// CgsContactGenerator.cpp:507
		PrimitiveInstanceQuery * query;

		{
			// CgsContactGenerator.cpp:509
			uint32_t j;

			{
				// CgsContactGenerator.cpp:514
				uint32_t numContacts;

			}
		}
	}
	PerformanceCounterGetValue(/* parameters */);
	{
		// CgsContactGenerator.cpp:535
		uint32_t k;

	}
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	{
		// CgsContactGenerator.cpp:538
		Contact lContact;

		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		OverlapCullingIO::OutputBuffer::GetContactQueue(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::Contact>::AddEventSafe(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

