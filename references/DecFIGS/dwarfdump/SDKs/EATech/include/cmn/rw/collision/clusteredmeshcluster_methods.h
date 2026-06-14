// clusteredmeshcluster_methods.h:578
void rw::collision::ClusteredMeshCluster::UnitData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// clusteredmeshcluster_methods.h:343
void rw::collision::ClusteredMeshCluster::Get4Vertices(Vector3 *  out, uint8_t  v0, uint8_t  v1, uint8_t  v2, uint8_t  v3, const const float32_t &  g) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// clusteredmeshcluster_methods.h:348
		int32_t * offset;

		// clusteredmeshcluster_methods.h:349
		rw::collision::ClusteredMeshCluster::Vertex16 * vert;

		// clusteredmeshcluster_methods.h:355
		float[4] zero;

		// clusteredmeshcluster_methods.h:356
		int[4] vert_offset;

		// clusteredmeshcluster_methods.h:357
		float[4] vertGran;

		// clusteredmeshcluster_methods.h:363
		int[4] vert_0_l;

		// clusteredmeshcluster_methods.h:364
		int[4] vert_1_l;

		// clusteredmeshcluster_methods.h:365
		int[4] vert_2_l;

		// clusteredmeshcluster_methods.h:366
		int[4] vert_3_l;

		// clusteredmeshcluster_methods.h:369
		int[4] vert_0_r;

		// clusteredmeshcluster_methods.h:370
		int[4] vert_1_r;

		// clusteredmeshcluster_methods.h:371
		int[4] vert_2_r;

		// clusteredmeshcluster_methods.h:372
		int[4] vert_3_r;

		// clusteredmeshcluster_methods.h:375
		int[4] vert_0_i;

		// clusteredmeshcluster_methods.h:376
		int[4] vert_1_i;

		// clusteredmeshcluster_methods.h:377
		int[4] vert_2_i;

		// clusteredmeshcluster_methods.h:378
		int[4] vert_3_i;

		// clusteredmeshcluster_methods.h:393
		float[4] floatvert_0;

		// clusteredmeshcluster_methods.h:394
		float[4] floatvert_1;

		// clusteredmeshcluster_methods.h:395
		float[4] floatvert_2;

		// clusteredmeshcluster_methods.h:396
		float[4] floatvert_3;

	}
	{
		// clusteredmeshcluster_methods.h:472
		rw::collision::ClusteredMeshCluster::Vertex32 * vert;

		// clusteredmeshcluster_methods.h:476
		float[4] zero;

		// clusteredmeshcluster_methods.h:477
		float[4] vertGran;

		// clusteredmeshcluster_methods.h:483
		int[4] vert_0_l;

		// clusteredmeshcluster_methods.h:484
		int[4] vert_1_l;

		// clusteredmeshcluster_methods.h:485
		int[4] vert_2_l;

		// clusteredmeshcluster_methods.h:486
		int[4] vert_3_l;

		// clusteredmeshcluster_methods.h:489
		int[4] vert_0_r;

		// clusteredmeshcluster_methods.h:490
		int[4] vert_1_r;

		// clusteredmeshcluster_methods.h:491
		int[4] vert_2_r;

		// clusteredmeshcluster_methods.h:492
		int[4] vert_3_r;

		// clusteredmeshcluster_methods.h:495
		int[4] vert_0_i;

		// clusteredmeshcluster_methods.h:496
		int[4] vert_1_i;

		// clusteredmeshcluster_methods.h:497
		int[4] vert_2_i;

		// clusteredmeshcluster_methods.h:498
		int[4] vert_3_i;

		// clusteredmeshcluster_methods.h:501
		float[4] floatvert_0;

		// clusteredmeshcluster_methods.h:502
		float[4] floatvert_1;

		// clusteredmeshcluster_methods.h:503
		float[4] floatvert_2;

		// clusteredmeshcluster_methods.h:504
		float[4] floatvert_3;

	}
}

// clusteredmeshcluster_methods.h:605
void rw::collision::ClusteredMeshCluster::GetUnitSize(uint32_t  offset, const const ClusterParams &  clusterParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// clusteredmeshcluster_methods.h:608
		uint8_t * data;

		// clusteredmeshcluster_methods.h:609
		uint32_t i;

		// clusteredmeshcluster_methods.h:610
		uint32_t triangleCount;

	}
}

// clusteredmeshcluster_methods.h:590
void rw::collision::ClusteredMeshCluster::GetUnitType(uint32_t  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// clusteredmeshcluster_methods.h:660
void rw::collision::ClusteredMeshCluster::GetGroupAndSurfaceId(uint32_t  offset, const const ClusterParams &  clusterParams, const uint32_t &  groupID, const uint32_t &  surfaceID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// clusteredmeshcluster_methods.h:664
		uint8_t * dataStream;

		// clusteredmeshcluster_methods.h:665
		uint32_t unitType;

		// clusteredmeshcluster_methods.h:668
		uint32_t triangleMask;

		// clusteredmeshcluster_methods.h:669
		uint32_t quadMask;

		// clusteredmeshcluster_methods.h:670
		uint32_t triListMask;

		// clusteredmeshcluster_methods.h:673
		uint32_t triCount;

		// clusteredmeshcluster_methods.h:676
		uint8_t * vIndex;

		// clusteredmeshcluster_methods.h:679
		uint8_t * edge;

		// clusteredmeshcluster_methods.h:682
		uint32_t edgeAngleMask;

		// clusteredmeshcluster_methods.h:683
		uint8_t * misc;

		// clusteredmeshcluster_methods.h:685
		uint32_t groupIdTmp;

		// clusteredmeshcluster_methods.h:686
		uint32_t surfaceIdTmp;

	}
}

