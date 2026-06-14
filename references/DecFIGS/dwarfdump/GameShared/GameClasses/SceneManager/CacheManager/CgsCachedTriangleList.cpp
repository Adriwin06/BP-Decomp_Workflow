// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsCachedTriangleList.cpp:34
	const rw::math::vpu::Vector3 VEC3_PI;

}

// CgsCachedTriangleList.cpp:58
void CgsSceneManager::CachedTriangleList::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsCachedTriangleList.cpp:122
void CgsSceneManager::CachedTriangleList::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsCachedTriangleList.cpp:140
void CgsSceneManager::CachedTriangleList::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsCachedTriangleList.cpp:211
void CgsSceneManager::CachedTriangleList::GetOverlappingTrianglesNew(const ClusteredMesh *  lpClusteredMesh, const AABBox &  lAABBox, Triangle4 *  lpResultsBuffer, uint32_t  luMaxResults, const uint32_t &  luNumResults) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCachedTriangleList.cpp:213
		KDTree * lpKdTree;

		// CgsCachedTriangleList.cpp:217
		uint32_t luNumTrianglesInCurrentResult;

		// CgsCachedTriangleList.cpp:218
		Triangle4 * lpCurrentResult;

		// CgsCachedTriangleList.cpp:221
		uint32_t luNumKdTreeQueryResults;

		// CgsCachedTriangleList.cpp:222
		rw::collision::ClusteredMesh * lpClusteredMeshNonConst;

		// CgsCachedTriangleList.cpp:223
		ClusterParams lClusterParams;

		// CgsCachedTriangleList.cpp:224
		Vector3 lIncrememnt;

		// CgsCachedTriangleList.cpp:231
		KdTreeBatchBBoxQuery lBBoxQuery;

		// CgsCachedTriangleList.cpp:235
		uint32_t luKdTreeResultIndex;

		// CgsCachedTriangleList.cpp:236
		Vector3[5] localTrisV0;

		// CgsCachedTriangleList.cpp:237
		Vector3[5] localTrisV1;

		// CgsCachedTriangleList.cpp:238
		Vector3[5] localTrisV2;

		// CgsCachedTriangleList.cpp:239
		uint32_t[5] localMaterialIds;

		// CgsCachedTriangleList.cpp:240
		Vector3[5] localEdgeCos;

		// CgsCachedTriangleList.cpp:242
		Mask4 mask4_True;

		// CgsCachedTriangleList.cpp:244
		Mask4[4] trueMasks;

	}
	rw::collision::ClusteredMesh::GetClusterParams(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::collision::KdTreeBatchBBoxQuery::KdTreeBatchBBoxQuery(/* parameters */);
	rw::collision::ClusteredMesh::GetKDTree(/* parameters */);
	rw::collision::KdTreeBatchBBoxQuery::GetBatch(/* parameters */);
	rw::math::vpu::Mask4::Mask4(/* parameters */);
	rw::math::vpu::Mask4::Mask4(/* parameters */);
	{
	}
	rw::math::vpu::Mask4::Mask4(/* parameters */);
	{
	}
	rw::math::vpu::Mask4::Mask4(/* parameters */);
	rw::math::vpu::Mask4::Mask4(/* parameters */);
	{
		// CgsCachedTriangleList.cpp:251
		uint32_t luClusterIndex;

		// CgsCachedTriangleList.cpp:251
		uint32_t luClusterUnitOffset;

		// CgsCachedTriangleList.cpp:255
		ClusteredMeshCluster * lpCluster;

		// CgsCachedTriangleList.cpp:256
		uint32_t luClusterUnitIndex;

		rw::collision::ClusteredMesh::GetClusterIndexAndUnitFromNode(/* parameters */);
		rw::collision::ClusteredMesh::GetCluster(/* parameters */);
		{
			// CgsCachedTriangleList.cpp:260
			uint8_t * dataStream;

			// CgsCachedTriangleList.cpp:261
			uint32_t unitType;

			// CgsCachedTriangleList.cpp:265
			uint32_t triCount;

			// CgsCachedTriangleList.cpp:270
			uint32_t triangleMask;

			// CgsCachedTriangleList.cpp:271
			uint32_t quadMask;

			// CgsCachedTriangleList.cpp:272
			uint32_t triListMask;

			// CgsCachedTriangleList.cpp:278
			uint8_t * vIndex;

			// CgsCachedTriangleList.cpp:281
			Vector3[4] vertices;

			// CgsCachedTriangleList.cpp:286
			AABBox lUnitAABBox;

			rw::collision::ClusteredMeshCluster::Get4Vertices(/* parameters */);
			{
				vec_madd(/* parameters */);
			}
			rw::math::vpu::Min(/* parameters */);
			AABBoxTemplate<rw::math::vpu::Matrix44Affine,rw::math::vpu::Vector3,rw::collision::AABBoxMemoryDumpPolicy>::Overlaps(/* parameters */);
			rw::math::vpu::Min(/* parameters */);
			rw::math::vpu::Max(/* parameters */);
			rw::math::vpu::Max(/* parameters */);
			rw::math::vpu::Min(/* parameters */);
			rw::math::vpu::Max(/* parameters */);
			vec_cmpgt(/* parameters */);
			vec_cmpgt(/* parameters */);
			vec_or(/* parameters */);
			vec_sld(/* parameters */);
			vec_all_eq(/* parameters */);
			{
				// CgsCachedTriangleList.cpp:291
				uint8_t * edge;

				// CgsCachedTriangleList.cpp:294
				uint32_t edgeAngleMask;

				// CgsCachedTriangleList.cpp:295
				uint8_t * misc;

				// CgsCachedTriangleList.cpp:297
				uint32_t luGroupId;

				// CgsCachedTriangleList.cpp:298
				uint32_t luSurfaceId;

				// CgsCachedTriangleList.cpp:312
				uint32_t luMaterialID;

				// CgsCachedTriangleList.cpp:314
				VectorIntrinsicUnion lhsAvoider;

				// CgsCachedTriangleList.cpp:320
				Vector3 edgeCosines1;

				// CgsCachedTriangleList.cpp:355
				Vector3 edgeCosines2;

				rw::math::vpu::GetVector3_One(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				rw::math::vpu::GetVecFloat_Two(/* parameters */);
				rw::math::vpl::VecConvertUnsignedFixedPointToFloat<0>(/* parameters */);
				rw::math::vpu::operator/(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				VecFloat<VectorAxisX>(/* parameters */);
				rw::math::vpu::Vector3::SetX(/* parameters */);
				VecFloat<VectorAxisZ>(/* parameters */);
				rw::math::vpu::GetVecFloat_Two(/* parameters */);
				rw::math::vpu::Vector3::SetZ(/* parameters */);
				rw::math::vpu::GetVecFloat_Two(/* parameters */);
				rw::math::vpu::Vector3::SetY(/* parameters */);
				rw::math::vpu::GetVector3_One(/* parameters */);
				rw::math::vpl::VecConvertUnsignedFixedPointToFloat<0>(/* parameters */);
				rw::math::vpu::operator*(/* parameters */);
				rw::math::vpu::operator/(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				VecFloat<VectorAxisX>(/* parameters */);
				rw::math::vpu::GetVecFloat_Two(/* parameters */);
				rw::math::vpu::Vector3::SetX(/* parameters */);
				VecFloat<VectorAxisZ>(/* parameters */);
				rw::math::vpu::GetVecFloat_Two(/* parameters */);
				rw::math::vpu::GetVecFloat_Two(/* parameters */);
				rw::math::vpu::Vector3::SetZ(/* parameters */);
				rw::math::vpu::Vector3::SetY(/* parameters */);
			}
			rw::collision::ClusteredMeshCluster::GetUnitSize(/* parameters */);
			rw::collision::ClusteredMesh::GetCluster(/* parameters */);
		}
	}
	{
		// CgsCachedTriangleList.cpp:378
		Vector4 v0x;

		// CgsCachedTriangleList.cpp:378
		Vector4 v0y;

		// CgsCachedTriangleList.cpp:378
		Vector4 v0z;

		// CgsCachedTriangleList.cpp:378
		Vector4 v1x;

		// CgsCachedTriangleList.cpp:378
		Vector4 v1y;

		// CgsCachedTriangleList.cpp:378
		Vector4 v1z;

		// CgsCachedTriangleList.cpp:378
		Vector4 v2x;

		// CgsCachedTriangleList.cpp:378
		Vector4 v2y;

		// CgsCachedTriangleList.cpp:378
		Vector4 v2z;

		// CgsCachedTriangleList.cpp:378
		Vector4 edgeCosx;

		// CgsCachedTriangleList.cpp:378
		Vector4 edgeCosy;

		// CgsCachedTriangleList.cpp:378
		Vector4 edgeCosz;

		Swizzle3x4(/* parameters */);
		Swizzle3x4(/* parameters */);
	}
	Swizzle3x4(/* parameters */);
	{
		// CgsCachedTriangleList.cpp:410
		VectorIntrinsicUnion lSurfaceTagsIntrinsic;

	}
	Swizzle3x4(/* parameters */);
	rw::math::vpu::Vector4::operator=(/* parameters */);
	{
		vec_ld(/* parameters */);
		vec_lvlx(/* parameters */);
		vec_lvlx(/* parameters */);
		vec_lvlx(/* parameters */);
		vec_lvrx(/* parameters */);
		vec_lvlx(/* parameters */);
		vec_lvrx(/* parameters */);
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
	vec_lvlx(/* parameters */);
	vec_lvlx(/* parameters */);
	vec_lvlx(/* parameters */);
	vec_lvrx(/* parameters */);
	vec_lvlx(/* parameters */);
	vec_lvrx(/* parameters */);
	vec_lvrx(/* parameters */);
	vec_splat(/* parameters */);
	vec_lvrx(/* parameters */);
	vec_or(/* parameters */);
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
	SetY<VectorAxisZ>(/* parameters */);
	{
		// CgsCachedTriangleList.cpp:458
		Vector4 v0x;

		// CgsCachedTriangleList.cpp:458
		Vector4 v0y;

		// CgsCachedTriangleList.cpp:458
		Vector4 v0z;

		// CgsCachedTriangleList.cpp:458
		Vector4 v1x;

		// CgsCachedTriangleList.cpp:458
		Vector4 v1y;

		// CgsCachedTriangleList.cpp:458
		Vector4 v1z;

		// CgsCachedTriangleList.cpp:458
		Vector4 v2x;

		// CgsCachedTriangleList.cpp:458
		Vector4 v2y;

		// CgsCachedTriangleList.cpp:458
		Vector4 v2z;

		// CgsCachedTriangleList.cpp:458
		Vector4 edgeCosx;

		// CgsCachedTriangleList.cpp:458
		Vector4 edgeCosy;

		// CgsCachedTriangleList.cpp:458
		Vector4 edgeCosz;

		Swizzle3x4(/* parameters */);
	}
	Swizzle3x4(/* parameters */);
	Swizzle3x4(/* parameters */);
	Swizzle3x4(/* parameters */);
}

// CgsCachedTriangleList.cpp:164
void CgsSceneManager::CachedTriangleList::AddCachedTriangles(uint32_t  liIndexToAddNewTriangles, uint32_t  luMaxTrianglesToBeAdded, const rw::math::vpu::Vector3  lSphereQueryPosition, float32_t  lfSphereQueryRadius, const ClusteredMesh *  lpClusteredMesh, const rw::math::vpu::Matrix44Affine &  lClusteredMeshTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCachedTriangleList.cpp:166
		AABBox lAABBox;

		// CgsCachedTriangleList.cpp:167
		Triangle4 * lpResultsBuffer;

		// CgsCachedTriangleList.cpp:168
		uint32_t luNumActualResults;

	}
	{
		// CgsCachedTriangleList.cpp:172
		Vector3 lBoxHalfDims;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
}

// CgsCachedTriangleList.cpp:82
void CgsSceneManager::CachedTriangleList::Prepare(rw::IResourceAllocator *  lpAllocator, int32_t  liNum4Triangles) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCachedTriangleList.cpp:89
		int32_t liTrianglesSize;

		// CgsCachedTriangleList.cpp:94
		ResourceDescriptor lTrianglesResDesc;

		// CgsCachedTriangleList.cpp:97
		Resource lTrianglesRes;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsCachedTriangleList.cpp:37
