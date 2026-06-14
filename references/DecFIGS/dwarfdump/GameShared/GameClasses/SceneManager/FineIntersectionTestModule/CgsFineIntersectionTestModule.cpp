// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsFineIntersectionTestModule.cpp:453
	extern RwBool ClusteredMeshLineTestNearest(rw::collision::ClusteredMesh *, Vector3, Vector3, Vector3 &, uint32_t &, uint32_t &);

}

// CgsFineIntersectionTestModule.cpp:178
void CgsSceneManager::FineIntersectionTestModule::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsFineIntersectionTestModule.cpp:52
void CgsSceneManager::FineIntersectionTestModule::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFineIntersectionTestModule.cpp:62
		ResourceDescriptor lDesc;

	}
	~ResourceDescriptor(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	{
		// CgsFineIntersectionTestModule.cpp:72
		ResourceDescriptor lDesc;

	}
	~ResourceDescriptor(/* parameters */);
	rw::Resource::Resource(/* parameters */);
}

// CgsFineIntersectionTestModule.cpp:93
void CgsSceneManager::FineIntersectionTestModule::Prepare(EntityManager *  lpEntityManager, CgsSceneManager::VolumeManager *  lpVolumeManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator++(/* parameters */);
	operator++(/* parameters */);
}

// CgsFineIntersectionTestModule.cpp:138
void CgsSceneManager::FineIntersectionTestModule::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator++(/* parameters */);
	operator++(/* parameters */);
}

// CgsFineIntersectionTestModule.cpp:834
void CgsSceneManager::FineIntersectionTestModule::ComputeVolumeTestFine(const InEventVolumeTestFine *  lpQuery, OutEventVolumeTestFineResult *  lpOutResult, OutputBuffer::EntityBuffer *  lpEntityBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFineIntersectionTestModule.cpp:837
		int32_t liNumEntities;

		// CgsFineIntersectionTestModule.cpp:838
		int32_t liI;

		// CgsFineIntersectionTestModule.cpp:840
		int32_t liOutEntityCount;

		// CgsFineIntersectionTestModule.cpp:842
		uint32_t lxComparisonMask;

		// CgsFineIntersectionTestModule.cpp:843
		uint32_t lxExcludeEntityBits;

		{
			// CgsFineIntersectionTestModule.cpp:847
			EntityId lExcludeEntityID;

			EntityManager::GetEntityIdByIndex(/* parameters */);
		}
		CgsContainers::ObjectPool<CgsSceneManager::SceneManagerEntity,10000,std::int32_t>::operator[](/* parameters */);
		EntityId::operator std::uint32_t(/* parameters */);
		{
			// CgsFineIntersectionTestModule.cpp:873
			uint16_t lu16EntityIndex;

			// CgsFineIntersectionTestModule.cpp:874
			uint32_t luEntityID;

			// CgsFineIntersectionTestModule.cpp:875
			int32_t liVolumeInstanceIndex;

			// CgsFineIntersectionTestModule.cpp:877
			const VolumeInstance * lpVolumeInstance;

			EntityManager::GetEntityIdByIndex(/* parameters */);
			{
				// CgsFineIntersectionTestModule.cpp:889
				int32_t liVolumeIndex;

				// CgsFineIntersectionTestModule.cpp:891
				VolumeManagerVolume::VolumeTypeFlags lxVolumeTypeFlags;

				// CgsFineIntersectionTestModule.cpp:903
				const VolRef::Volume * lpVolume;

				// CgsFineIntersectionTestModule.cpp:904
				const rw::math::vpu::Matrix44Affine * lpMatrix;

				// CgsFineIntersectionTestModule.cpp:909
				uint32_t liNumResults;

				VolumeManager::GetVolumeTypeFlags(/* parameters */);
			}
			EntityManager::GetNextEntityVolumeInstance(/* parameters */);
			EntityManager::GetVolumeInstance(/* parameters */);
			CgsContainers::ObjectPool<CgsSceneManager::VolumeInstance,5048,std::int32_t>::IsObjectAllocated(/* parameters */);
			CgsContainers::ObjectPool<CgsSceneManager::VolumeInstance,5048,std::int32_t>::operator[](/* parameters */);
		}
		CgsContainers::Array<std::uint16_t,16384u>::GetLength(/* parameters */);
		CgsContainers::Array<std::uint16_t,16384u>::GetItem(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::collision::VolumeVolumeQuery::InitQuery(/* parameters */);
	CgsContainers::Array<std::uint16_t,16384u>::Append(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsFineIntersectionTestModule.cpp:722
void CgsSceneManager::FineIntersectionTestModule::ComputeVolumeTestDeepest(const InEventVolumeTestDeepest *  lpQuery, OutEventVolumeTestDeepestResult *  lpOutResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFineIntersectionTestModule.cpp:725
		float32_t lfDeepestDepth;

		// CgsFineIntersectionTestModule.cpp:726
		int32_t liNumEntities;

		// CgsFineIntersectionTestModule.cpp:727
		int32_t liI;

		// CgsFineIntersectionTestModule.cpp:729
		uint32_t lxComparisonMask;

		// CgsFineIntersectionTestModule.cpp:730
		uint32_t lxExcludeEntityBits;

		{
			// CgsFineIntersectionTestModule.cpp:734
			EntityId lExcludeEntityID;

			EntityManager::GetEntityIdByIndex(/* parameters */);
		}
		CgsContainers::ObjectPool<CgsSceneManager::SceneManagerEntity,10000,std::int32_t>::operator[](/* parameters */);
		{
			// CgsFineIntersectionTestModule.cpp:759
			uint16_t lu16EntityIndex;

			// CgsFineIntersectionTestModule.cpp:760
			uint32_t luEntityID;

			// CgsFineIntersectionTestModule.cpp:761
			int32_t liVolumeInstanceIndex;

			// CgsFineIntersectionTestModule.cpp:762
			const VolumeInstance * lpVolumeInstance;

			EntityManager::GetEntityIdByIndex(/* parameters */);
			{
				// CgsFineIntersectionTestModule.cpp:774
				int32_t liVolumeIndex;

				// CgsFineIntersectionTestModule.cpp:775
				VolumeManagerVolume::VolumeTypeFlags lxVolumeTypeFlags;

				// CgsFineIntersectionTestModule.cpp:781
				const VolRef::Volume * lpVolume;

				// CgsFineIntersectionTestModule.cpp:782
				const rw::math::vpu::Matrix44Affine * lpMatrix;

				// CgsFineIntersectionTestModule.cpp:787
				int32_t liNearestResultIndex;

				// CgsFineIntersectionTestModule.cpp:788
				uint32_t liNumResults;

				// CgsFineIntersectionTestModule.cpp:789
				uint32_t liResult;

				// CgsFineIntersectionTestModule.cpp:791
				PrimitivePairIntersectResult * lpResultsBuffer;

				VolumeManager::GetVolumeTypeFlags(/* parameters */);
			}
			EntityManager::GetNextEntityVolumeInstance(/* parameters */);
			EntityManager::GetVolumeInstance(/* parameters */);
			CgsContainers::ObjectPool<CgsSceneManager::VolumeInstance,5048,std::int32_t>::IsObjectAllocated(/* parameters */);
			CgsContainers::ObjectPool<CgsSceneManager::VolumeInstance,5048,std::int32_t>::operator[](/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::collision::VolumeVolumeQuery::InitQuery(/* parameters */);
	rw::collision::VolumeVolumeQuery::GetIntersectionResultsBuffer(/* parameters */);
	{
		// CgsFineIntersectionTestModule.cpp:796
		PrimitivePairIntersectResult * lpResult;

		// CgsFineIntersectionTestModule.cpp:798
		float lfDepth;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	EntityId::operator std::uint32_t(/* parameters */);
}

// CgsFineIntersectionTestModule.cpp:563
void CgsSceneManager::FineIntersectionTestModule::ComputeLineTestNearest(const InEventLineTestNearest *  lpQuery, OutEventLineTestNearestResult *  lpOutResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFineIntersectionTestModule.cpp:570
		float32_t lfNearestDepth;

		// CgsFineIntersectionTestModule.cpp:571
		int32_t liNumEntities;

		// CgsFineIntersectionTestModule.cpp:572
		int32_t liI;

		// CgsFineIntersectionTestModule.cpp:574
		uint32_t lxComparisonMask;

		// CgsFineIntersectionTestModule.cpp:575
		uint32_t lxExcludeEntityBits;

		{
			// CgsFineIntersectionTestModule.cpp:579
			EntityId lExcludeEntityID;

			EntityManager::GetEntityIdByIndex(/* parameters */);
		}
		CgsContainers::ObjectPool<CgsSceneManager::SceneManagerEntity,10000,std::int32_t>::operator[](/* parameters */);
		{
			// CgsFineIntersectionTestModule.cpp:606
			uint16_t lu16EntityIndex;

			// CgsFineIntersectionTestModule.cpp:607
			uint32_t luEntityID;

			// CgsFineIntersectionTestModule.cpp:608
			int32_t liVolumeInstanceIndex;

			// CgsFineIntersectionTestModule.cpp:609
			const VolumeInstance * lpVolumeInstance;

			EntityManager::GetEntityIdByIndex(/* parameters */);
			{
				// CgsFineIntersectionTestModule.cpp:621
				int32_t liVolumeIndex;

				// CgsFineIntersectionTestModule.cpp:622
				VolumeManagerVolume::VolumeTypeFlags lxVolumeTypeFlags;

				// CgsFineIntersectionTestModule.cpp:628
				const VolRef::Volume * lpVolume;

				// CgsFineIntersectionTestModule.cpp:629
				const rw::math::vpu::Matrix44Affine * lpMatrix;

				VolumeManager::GetVolumeTypeFlags(/* parameters */);
			}
			EntityManager::GetNextEntityVolumeInstance(/* parameters */);
			rw::collision::VolumeLineQuery::Finished(/* parameters */);
			EntityManager::GetVolumeInstance(/* parameters */);
			CgsContainers::ObjectPool<CgsSceneManager::VolumeInstance,5048,std::int32_t>::IsObjectAllocated(/* parameters */);
			CgsContainers::ObjectPool<CgsSceneManager::VolumeInstance,5048,std::int32_t>::operator[](/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::collision::VolumeLineQuery::InitQuery(/* parameters */);
	{
		// CgsFineIntersectionTestModule.cpp:664
		int32_t liNearestResultIndex;

		// CgsFineIntersectionTestModule.cpp:665
		uint32_t liNumResults;

		// CgsFineIntersectionTestModule.cpp:666
		uint32_t liResult;

		// CgsFineIntersectionTestModule.cpp:667
		VolumeLineSegIntersectResult * lpResultsBuffer;

		rw::collision::VolumeLineQuery::GetIntersectionResultsBuffer(/* parameters */);
		{
			// CgsFineIntersectionTestModule.cpp:672
			VolumeLineSegIntersectResult * lpResult;

		}
		{
			// CgsFineIntersectionTestModule.cpp:683
			VolumeLineSegIntersectResult * lpResult;

		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	EntityId::operator std::uint32_t(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsFineIntersectionTestModule.cpp:195
void CgsSceneManager::FineIntersectionTestModule::ComputeLineTestFine(const InEventLineTestFine *  lpQuery, OutEventLineTestFineResult *  lpOutResult, OutputBuffer::LineTestIntersectionArray *  lpResultsOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFineIntersectionTestModule.cpp:197
		int32_t liNumEntities;

		// CgsFineIntersectionTestModule.cpp:198
		int32_t liIndex;

		// CgsFineIntersectionTestModule.cpp:200
		int32_t liOutIntersectionCount;

		// CgsFineIntersectionTestModule.cpp:202
		uint32_t lxComparisonMask;

		// CgsFineIntersectionTestModule.cpp:203
		uint32_t lxExcludeEntityBits;

		// CgsFineIntersectionTestModule.cpp:205
		LineTestIntersection * lpFirstResult;

	}
	{
		// CgsFineIntersectionTestModule.cpp:209
		EntityId lExcludeEntityID;

	}
	EntityId::operator std::uint32_t(/* parameters */);
	{
		// CgsFineIntersectionTestModule.cpp:237
		uint16_t lu16EntityIndex;

		// CgsFineIntersectionTestModule.cpp:238
		int32_t liVolumeInstanceIndex;

		// CgsFineIntersectionTestModule.cpp:239
		uint32_t luEntityID;

		// CgsFineIntersectionTestModule.cpp:240
		const VolumeInstance * lpVolumeInstance;

		{
			// CgsFineIntersectionTestModule.cpp:252
			int32_t liVolumeIndex;

			// CgsFineIntersectionTestModule.cpp:253
			VolumeManagerVolume::VolumeTypeFlags lxVolumeTypeFlags;

			// CgsFineIntersectionTestModule.cpp:261
			const VolRef::Volume * lpVolume;

			// CgsFineIntersectionTestModule.cpp:262
			const rw::math::vpu::Matrix44Affine * lpMatrix;

			// CgsFineIntersectionTestModule.cpp:265
			rw::collision::VolumeType lVolumeType;

			VolumeManager::GetVolumeTypeFlags(/* parameters */);
		}
		EntityManager::GetNextEntityVolumeInstance(/* parameters */);
		rw::collision::VolumeLineQuery::Finished(/* parameters */);
	}
	rw::collision::VolumeLineQuery::InitQuery(/* parameters */);
	{
		// CgsFineIntersectionTestModule.cpp:394
		uint32_t liNumResults;

	}
	{
		// CgsFineIntersectionTestModule.cpp:400
		uint32_t liResult;

		// CgsFineIntersectionTestModule.cpp:401
		VolumeLineSegIntersectResult * lpResultsBuffer;

		{
			// CgsFineIntersectionTestModule.cpp:405
			VolumeLineSegIntersectResult * lpResult;

			// CgsFineIntersectionTestModule.cpp:406
			LineTestIntersection lTempResult;

		}
	}
	CgsContainers::Array<CgsSceneManager::LineTestIntersection,256u>::GetLength(/* parameters */);
	CgsContainers::Array<CgsSceneManager::LineTestIntersection,256u>::GetItem(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsFineIntersectionTestModule.cpp:270
		AggregateVolume * lpAggVol;

		// CgsFineIntersectionTestModule.cpp:272
		VecFloat bestDistance;

		// CgsFineIntersectionTestModule.cpp:273
		Vector3 bestPosition;

		// CgsFineIntersectionTestModule.cpp:274
		Vector3 lineStart;

		// CgsFineIntersectionTestModule.cpp:275
		Vector3 lineDelta;

		// CgsFineIntersectionTestModule.cpp:276
		Vector3 lineEnd;

		// CgsFineIntersectionTestModule.cpp:278
		rw::collision::ClusteredMesh * lpCM;

		// CgsFineIntersectionTestModule.cpp:279
		KDTree * kdTree;

		// CgsFineIntersectionTestModule.cpp:281
		KdTreeLineQuery kdTreeLineQuery;

		// CgsFineIntersectionTestModule.cpp:282
		ClusterParams clusterParams;

		// CgsFineIntersectionTestModule.cpp:284
		uint32_t shift;

		// CgsFineIntersectionTestModule.cpp:285
		uint32_t mask;

		// CgsFineIntersectionTestModule.cpp:286
		uint32_t index;

		// CgsFineIntersectionTestModule.cpp:286
		uint32_t unitCount;

		// CgsFineIntersectionTestModule.cpp:286
		uint32_t i;

		// CgsFineIntersectionTestModule.cpp:286
		uint32_t offset;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::GetVector3_Zero(/* parameters */);
		rw::collision::KdTreeLineQuery::KdTreeLineQuery(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Abs(/* parameters */);
		rw::math::fpu::SgnNonZero<float>(/* parameters */);
		rw::math::vpu::Abs(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Abs(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Max(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Abs(/* parameters */);
		rw::math::vpu::Max(/* parameters */);
		rw::math::vpu::Max(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::Abs(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::fpu::SgnNonZero<float>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		rw::math::fpu::SgnNonZero<float>(/* parameters */);
		rw::math::vpu::Max(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::_asmReciprocal(/* parameters */);
		rw::collision::AALineClipper::ClipToAABBox(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Mult(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Vector3::operator=(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Mult(/* parameters */);
		rw::math::vpu::Mult(/* parameters */);
		rw::math::vpu::Max(/* parameters */);
		rw::math::vpu::Min(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::Max<float32_t>(/* parameters */);
		rw::math::vpu::Min<float>(/* parameters */);
		rw::math::vpu::Max<float>(/* parameters */);
		rw::math::vpu::Min<float>(/* parameters */);
		rw::math::vpu::Max<float>(/* parameters */);
		rw::math::vpu::Min<float>(/* parameters */);
		rw::collision::ClusteredMesh::GetClusterParams(/* parameters */);
		rw::collision::KdTreeLineQuery::GetNext(/* parameters */);
		{
			// CgsFineIntersectionTestModule.cpp:296
			Vector3[4] v;

			// CgsFineIntersectionTestModule.cpp:298
			const ClusteredMeshCluster & cluster;

			// CgsFineIntersectionTestModule.cpp:299
			uint32_t unitType;

			// CgsFineIntersectionTestModule.cpp:300
			uint8_t * data;

			// CgsFineIntersectionTestModule.cpp:303
			uint32_t triangleMask;

			// CgsFineIntersectionTestModule.cpp:304
			uint32_t quadMask;

			// CgsFineIntersectionTestModule.cpp:305
			uint32_t triListMask;

			// CgsFineIntersectionTestModule.cpp:308
			uint32_t triCount;

			// CgsFineIntersectionTestModule.cpp:311
			uint8_t * vIndex;

			// CgsFineIntersectionTestModule.cpp:315
			Vector3 position;

			// CgsFineIntersectionTestModule.cpp:315
			Vector3 triParam;

			// CgsFineIntersectionTestModule.cpp:316
			VecFloat lineParam;

			// CgsFineIntersectionTestModule.cpp:317
			uint32_t groupID;

			// CgsFineIntersectionTestModule.cpp:318
			uint32_t surfaceID;

			rw::collision::ClusteredMesh::GetCluster(/* parameters */);
			rw::collision::ClusteredMeshCluster::Get4Vertices(/* parameters */);
			{
				vec_madd(/* parameters */);
			}
			rw::collision::TriangleLineSegIntersect(/* parameters */);
			{
				// CgsFineIntersectionTestModule.cpp:323
				LineTestIntersection lTempResult;

				rw::collision::ClusteredMesh::GetClusterParams(/* parameters */);
				rw::collision::ClusteredMeshCluster::GetGroupAndSurfaceId(/* parameters */);
				rw::collision::ClusteredMeshCluster::GetUnitType(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::VecFloat::operator float(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::Normalize(/* parameters */);
				rw::math::vpu::Normalize(/* parameters */);
				{
					{
					}
				}
				{
					{
					}
				}
				{
					{
					}
				}
				rw::math::vpu::Dot(/* parameters */);
			}
			rw::collision::TriangleLineSegIntersect(/* parameters */);
			{
				// CgsFineIntersectionTestModule.cpp:351
				LineTestIntersection lTempResult;

				rw::collision::ClusteredMesh::GetClusterParams(/* parameters */);
				rw::collision::ClusteredMeshCluster::GetGroupAndSurfaceId(/* parameters */);
				rw::collision::ClusteredMeshCluster::GetUnitType(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::VecFloat::operator float(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::Normalize(/* parameters */);
				rw::math::vpu::Normalize(/* parameters */);
				{
					{
					}
				}
				{
					{
					}
				}
				{
					{
					}
				}
				rw::math::vpu::Dot(/* parameters */);
			}
			rw::collision::ClusteredMesh::GetUnitSize(/* parameters */);
		}
	}
	rw::collision::KdTreeLineQueryBase::ProcessBranchNode(/* parameters */);
	{
		vec_ld(/* parameters */);
		vec_lvrx(/* parameters */);
		vec_lvlx(/* parameters */);
		vec_lvlx(/* parameters */);
		vec_lvlx(/* parameters */);
		vec_lvrx(/* parameters */);
		vec_lvlx(/* parameters */);
		vec_splat(/* parameters */);
		vec_lvrx(/* parameters */);
		vec_or(/* parameters */);
		vec_lvrx(/* parameters */);
		vec_or(/* parameters */);
		vec_or(/* parameters */);
		vec_mergeh(/* parameters */);
		vec_or(/* parameters */);
		vec_mergeh(/* parameters */);
		vec_mergeh(/* parameters */);
		vec_add(/* parameters */);
		vec_mergeh(/* parameters */);
		vec_add(/* parameters */);
		vec_add(/* parameters */);
		vec_add(/* parameters */);
		vec_ctf(/* parameters */);
		vec_ctf(/* parameters */);
		vec_ctf(/* parameters */);
		vec_ctf(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
	}
	vec_lvrx(/* parameters */);
	vec_lvlx(/* parameters */);
	vec_lvlx(/* parameters */);
	vec_lvlx(/* parameters */);
	vec_lvlx(/* parameters */);
	vec_lvrx(/* parameters */);
	vec_splat(/* parameters */);
	vec_lvrx(/* parameters */);
	vec_or(/* parameters */);
	vec_lvrx(/* parameters */);
	vec_or(/* parameters */);
	vec_or(/* parameters */);
	vec_or(/* parameters */);
	vec_ctf(/* parameters */);
	vec_ctf(/* parameters */);
	vec_ctf(/* parameters */);
	vec_ctf(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	CgsContainers::Array<CgsSceneManager::LineTestIntersection,256u>::GetLength(/* parameters */);
	CgsContainers::Array<CgsSceneManager::LineTestIntersection,256u>::GetItem(/* parameters */);
	CgsContainers::Array<CgsSceneManager::LineTestIntersection,256u>::GetLength(/* parameters */);
	CgsContainers::Array<CgsSceneManager::LineTestIntersection,256u>::GetItem(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

