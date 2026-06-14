// CgsCollisionGenerator.cpp:69
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsCollisionGenerator.cpp:90
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsCollisionGenerator.cpp:136
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsCollisionGenerator.cpp:182
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::FinishBatch(uint16_t  liBatchIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CollisionBatch::WaitOn(/* parameters */);
}

// CgsCollisionGenerator.cpp:153
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::Finish() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:157
		uint16_t i;

	}
}

// CgsCollisionGenerator.cpp:309
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::CreateNewBatch() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:311
		uint16_t liNewBatchIndex;

	}
}

// CgsCollisionGenerator.cpp:106
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::Prepare(void *  lpResultBuffer, int32_t  liResultBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:116
		int32_t liBatch;

	}
}

// CgsCollisionGenerator.cpp:631
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::RunLineWithTriangleListStream(CgsMemory::SimpleDataStreamProducer *  lpStream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:645
		int32_t liNumJobs;

		// CgsCollisionGenerator.cpp:651
		EA::Jobs::Job * lpNULLJob;

		// CgsCollisionGenerator.cpp:654
		int32_t liJobIndex;

	}
	CgsMemory::SimpleDataStreamProducer::GetNumCommands(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	AllocateJob(/* parameters */);
	{
		// CgsCollisionGenerator.cpp:657
		uint16_t lu16BatchIndex;

		// CgsCollisionGenerator.cpp:661
		EA::Jobs::Job * lpNewJob;

	}
}

// CgsCollisionGenerator.cpp:205
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::PrepareNewLineTestResultsList(uint16_t  lu16MaxNumCollisions, uint32_t  luUserTagA, uint16_t  lu16UserTagB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:207
		LineTestResult * lpaResults;

		// CgsCollisionGenerator.cpp:208
		uint16_t lu16FreeListIndex;

	}
	{
		// CgsCollisionGenerator.cpp:220
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsCollisionGenerator.cpp:217
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:242
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::PrepareNewPrimitiveTestResultsList(uint16_t  lu16MaxNumCollisions, uint32_t  luUserTagA, uint16_t  lu16UserTagB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:244
		PrimitiveTestResult * lpaResults;

		// CgsCollisionGenerator.cpp:245
		uint16_t lu16FreeListIndex;

	}
	{
		// CgsCollisionGenerator.cpp:257
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsCollisionGenerator.cpp:254
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:1996
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::AddPrimitiveListWithTriangleListToStream(const CgsSceneManager::CgsCollision::PrimitivePairList *  lpSPrimList, const TriangleList *  lpTriangleList, uint16_t  lu16MaxNumCollisions, bool  lbUseOptimisedBoxTests, uint32_t  luUserTagA, uint16_t  lu16UserTagB, CgsMemory::SimpleDataStreamProducer *  lpPrimitiveTriangleStream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:1998
		uint16_t lu16ResultListIndex;

		// CgsCollisionGenerator.cpp:2003
		CgsSceneManager::CgsCollision::PrimitiveListWithTriangleListStreamJobDesc::StreamCommand lCommand;

	}
	CgsMemory::SimpleDataStreamProducer::AddCommand(/* parameters */);
}

// CgsCollisionGenerator.cpp:1758
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::AddSphereListWithSphereListToStream(const SphereList *  lpSphereListA, const SphereList *  lpSphereListB, uint16_t  lu16MaxNumCollisions, float32_t  lfPadding, uint32_t  luUserTagA, uint16_t  lu16UserTagB, CgsMemory::SimpleDataStreamProducer *  lpSphereSphereStream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:1760
		uint16_t lu16ResultListIndex;

		// CgsCollisionGenerator.cpp:1765
		CgsSceneManager::CgsCollision::SphereListWithSphereListStreamJobDesc::StreamCommand lCommand;

	}
	CgsMemory::SimpleDataStreamProducer::AddCommand(/* parameters */);
}

// CgsCollisionGenerator.cpp:1526
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::AddSweptSphereListWithTriangleListToStream(const SweptSphereList *  lpSphereList, const TriangleList *  lpTriangleList, uint16_t  lu16MaxNumCollisions, float32_t  lfPadding, uint32_t  luUserTagA, uint16_t  lu16UserTagB, CgsMemory::SimpleDataStreamProducer *  lpSweptSphereTriangleStream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:1528
		uint16_t lu16ResultListIndex;

		// CgsCollisionGenerator.cpp:1533
		CgsSceneManager::CgsCollision::SweptSphereListWithTriangleListStreamJobDesc::StreamCommand lCommand;

	}
	CgsMemory::SimpleDataStreamProducer::AddCommand(/* parameters */);
}

// CgsCollisionGenerator.cpp:1343
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::AddSphereListWithTriangleListToStream(const SphereList *  lpSphereList, const TriangleList *  lpTriangleList, uint16_t  lu16MaxNumCollisions, float32_t  lfPadding, uint32_t  luUserTagA, uint16_t  lu16UserTagB, CgsMemory::SimpleDataStreamProducer *  lpSphereTriangleStream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:1345
		uint16_t lu16ResultListIndex;

		// CgsCollisionGenerator.cpp:1350
		CgsSceneManager::CgsCollision::SphereListWithTriangleListStreamJobDesc::StreamCommand lCommand;

	}
	CgsMemory::SimpleDataStreamProducer::AddCommand(/* parameters */);
}

// CgsCollisionGenerator.cpp:814
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::TestSphereAgainstPolySoupList(const Sphere *  lpSphere, const PolygonSoupListSpatialMap *  lpSpatialData, uint32_t  luUserTagA, uint16_t  lu16UserTagB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:817
		uint16_t lu16ResultListIndex;

		// CgsCollisionGenerator.cpp:822
		Sphere lSphere;

		// CgsCollisionGenerator.cpp:823
		AxisAlignedBox lSphereBoundingBox;

		// CgsCollisionGenerator.cpp:834
		int32_t liSoup;

		// CgsCollisionGenerator.cpp:837
		int32_t liNumSoups;

	}
	rw::math::vpu::operator+(/* parameters */);
	CgsGeometric::Sphere::GetRadius(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	CollisionResultList::SetNumResults(/* parameters */);
	{
		// CgsCollisionGenerator.cpp:843
		const PolygonSoupLeafNode * lpSpacialNode;

		CgsGeometric::PolygonSoupListSpatialMap::GetPolygonSoupNodeForResult(/* parameters */);
		CgsGeometric(/* parameters */);
		rw::math::vpl::VecAnd(/* parameters */);
		rw::math::vpl::VecAnd(/* parameters */);
		rw::math::vpl::VecAnd(/* parameters */);
		rw::math::vpl::VecSplat_Word<0>(/* parameters */);
		rw::math::vpu::MaskScalar::GetBool(/* parameters */);
		rw::math::vpu::MaskScalar::GetBool(/* parameters */);
		CollisionResultList::SetNumResults(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:277
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::PrepareNewBaseResultsList(uint32_t  luUserTagA, uint16_t  lu16UserTagB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:279
		uint16_t lu16FreeListIndex;

	}
	{
		// CgsCollisionGenerator.cpp:288
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:473
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::CreateFillTriangleCacheStream(int32_t  liMaxTriangleCaches) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:476
		int32_t liOrigAlignment;

		// CgsCollisionGenerator.cpp:480
		CgsMemory::SimpleDataStreamProducer * lpStreamProducer;

		// CgsCollisionGenerator.cpp:485
		int32_t liCommandBufferSize;

		// CgsCollisionGenerator.cpp:485
		int32_t liResultBufferSize;

		// CgsCollisionGenerator.cpp:492
		void * lpCommandBuffer;

		// CgsCollisionGenerator.cpp:493
		void * lpResultBuffer;

	}
	{
		// CgsCollisionGenerator.cpp:496
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsCollisionGenerator.cpp:482
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:524
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::CreateLineWithTriangleListStream(int32_t  liNumLineTests) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:527
		int32_t liOrigAlignment;

		// CgsCollisionGenerator.cpp:531
		CgsMemory::SimpleDataStreamProducer * lpStreamProducer;

		// CgsCollisionGenerator.cpp:535
		int32_t liCommandBufferSize;

		// CgsCollisionGenerator.cpp:536
		int32_t liResultBufferSize;

		// CgsCollisionGenerator.cpp:544
		void * lpCommandBuffer;

		// CgsCollisionGenerator.cpp:545
		void * lpResultBuffer;

	}
	{
		// CgsCollisionGenerator.cpp:550
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsCollisionGenerator.cpp:533
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:686
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::CreateCollideLineAgainstPolySoupStream(int32_t  liNumLines, int32_t  liMaxResultsPerLine) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:689
		int32_t liOrigAlignment;

		// CgsCollisionGenerator.cpp:693
		CgsMemory::SimpleDataStreamProducer * lpStreamProducer;

		// CgsCollisionGenerator.cpp:697
		int32_t liCommandBufferSize;

		// CgsCollisionGenerator.cpp:698
		int32_t liResultBufferSize;

		// CgsCollisionGenerator.cpp:701
		int32_t liResultSize;

		// CgsCollisionGenerator.cpp:709
		void * lpCommandBuffer;

		// CgsCollisionGenerator.cpp:710
		void * lpResultBuffer;

	}
	{
		// CgsCollisionGenerator.cpp:715
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsCollisionGenerator.cpp:695
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:878
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::CollideLineAgainstPolySoupList(const Line *  lpLine, const PolygonSoupListSpatialMap *  lpSpatialData, uint16_t  lu16MaxResults, uint32_t  luUserTagA, uint16_t  lu16UserTagB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:901
		uint16_t lu16ResultListIndex;

		// CgsCollisionGenerator.cpp:926
		Vector3 lLineStart;

		// CgsCollisionGenerator.cpp:927
		Vector3 lLineEnd;

		// CgsCollisionGenerator.cpp:928
		int32_t liTotal;

		CgsGeometric::Line::IsValid(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	{
		// CgsCollisionGenerator.cpp:880
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		// CgsCollisionGenerator.cpp:938
		AxisAlignedBox lLineBoundingBox;

		// CgsCollisionGenerator.cpp:943
		IntersectLinePolygonSoupResult * lpResults;

		// CgsCollisionGenerator.cpp:944
		int32_t liResultsBufferSize;

		// CgsCollisionGenerator.cpp:948
		int32_t liSoup;

		// CgsCollisionGenerator.cpp:951
		int32_t liNumSoups;

		rw::math::vpu::Min(/* parameters */);
		rw::math::vpu::Max(/* parameters */);
	}
	{
		// CgsCollisionGenerator.cpp:971
		IntersectLinePolygonSoupResult * lpResults;

		// CgsCollisionGenerator.cpp:972
		int32_t liResultsBufferSize;

		// CgsCollisionGenerator.cpp:976
		int32_t liSoup;

		// CgsCollisionGenerator.cpp:979
		int32_t liNumSoups;

	}
	CollisionResultList::SetNumResults(/* parameters */);
	{
		// CgsCollisionGenerator.cpp:985
		const PolygonSoupLeafNode * lpSpacialNode;

		CgsGeometric::PolygonSoupListSpatialMap::GetPolygonSoupNodeForResult(/* parameters */);
		CgsGeometric::TestLineStartEndAxisAlignedBox(/* parameters */);
		{
			// CgsCollisionGenerator.cpp:991
			const PolygonSoup * lpPolySoup;

		}
		rw::math::vpu::MaskScalar::GetBool(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// CgsCollisionGenerator.cpp:957
		const PolygonSoupLeafNode * lpSpacialNode;

		CgsGeometric::PolygonSoupListSpatialMap::GetPolygonSoupNodeForResult(/* parameters */);
		{
			// CgsCollisionGenerator.cpp:963
			const PolygonSoup * lpPolySoup;

		}
		CgsGeometric(/* parameters */);
		rw::math::vpl::VecAnd(/* parameters */);
		rw::math::vpl::VecAnd(/* parameters */);
		rw::math::vpl::VecAnd(/* parameters */);
		rw::math::vpl::VecSplat_Word<0>(/* parameters */);
		rw::math::vpu::MaskScalar::GetBool(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:1021
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::CollideLineAgainstPolySoupListNearest(const Line *  lpLine, const PolygonSoupListSpatialMap *  lpSpatialData, uint32_t  luUserTagA, uint16_t  lu16UserTagB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:1044
		uint16_t lu16ResultListIndex;

		// CgsCollisionGenerator.cpp:1069
		Vector3 lLineStart;

		// CgsCollisionGenerator.cpp:1070
		Vector3 lLineEnd;

		// CgsCollisionGenerator.cpp:1071
		int32_t liSoup;

		// CgsCollisionGenerator.cpp:1072
		int32_t liNodesTested;

		// CgsCollisionGenerator.cpp:1073
		int32_t liNodesPassed;

		// CgsCollisionGenerator.cpp:1077
		IntersectLinePolygonSoupResult * lpResults;

		// CgsCollisionGenerator.cpp:1081
		IntersectLinePolygonSoupResult lTempResult;

		CgsGeometric::Line::IsValid(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	{
		// CgsCollisionGenerator.cpp:1023
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::GetVecFloat_Two(/* parameters */);
	IntersectLinePolygonSoupResult(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	{
		// CgsCollisionGenerator.cpp:1091
		AxisAlignedBox lLineBoundingBox;

		// CgsCollisionGenerator.cpp:1096
		int32_t liNumSoups;

		rw::math::vpu::Min(/* parameters */);
		rw::math::vpu::Max(/* parameters */);
	}
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	{
		// CgsCollisionGenerator.cpp:1128
		int32_t liNumSoups;

	}
	rw::math::vpu::operator<=(/* parameters */);
	CollisionResultList::SetNumResults(/* parameters */);
	{
		// CgsCollisionGenerator.cpp:1134
		const PolygonSoupLeafNode * lpSpacialNode;

		CgsGeometric::PolygonSoupListSpatialMap::GetPolygonSoupNodeForResult(/* parameters */);
		CgsGeometric::TestLineStartEndAxisAlignedBox(/* parameters */);
		{
			// CgsCollisionGenerator.cpp:1142
			const PolygonSoup * lpPolySoup;

		}
		rw::math::vpu::MaskScalar::GetBool(/* parameters */);
		rw::math::vpu::MaskScalar::GetBool(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
	}
	CollisionResultList::SetNumResults(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// CgsCollisionGenerator.cpp:1102
		const PolygonSoupLeafNode * lpSpacialNode;

		CgsGeometric::PolygonSoupListSpatialMap::GetPolygonSoupNodeForResult(/* parameters */);
		{
			// CgsCollisionGenerator.cpp:1110
			const PolygonSoup * lpPolySoup;

		}
		CgsGeometric(/* parameters */);
		rw::math::vpl::VecAnd(/* parameters */);
		rw::math::vpl::VecAnd(/* parameters */);
		rw::math::vpl::VecAnd(/* parameters */);
		rw::math::vpl::VecSplat_Word<0>(/* parameters */);
		rw::math::vpu::MaskScalar::GetBool(/* parameters */);
		rw::math::vpu::MaskScalar::GetBool(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:1191
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::TestLineAgainstPolySoupListDoubleSided(const Line *  lpLine, const PolygonSoupListSpatialMap *  lpSpatialData, uint32_t  luUserTagA, uint16_t  lu16UserTagB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:1195
		uint16_t lu16ResultListIndex;

		// CgsCollisionGenerator.cpp:1205
		Vector3 lLineStart;

		// CgsCollisionGenerator.cpp:1206
		Vector3 lLineEnd;

		// CgsCollisionGenerator.cpp:1207
		int32_t liSoup;

		// CgsCollisionGenerator.cpp:1210
		IntersectLinePolygonSoupResult * lpResults;

		CgsGeometric::Line::IsValid(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	{
		// CgsCollisionGenerator.cpp:1193
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::GetVecFloat_Two(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	{
		// CgsCollisionGenerator.cpp:1221
		AxisAlignedBox lLineBoundingBox;

		// CgsCollisionGenerator.cpp:1226
		int32_t liNumSoups;

		rw::math::vpu::Min(/* parameters */);
		rw::math::vpu::Max(/* parameters */);
	}
	CollisionResultList::SetNumResults(/* parameters */);
	{
		// CgsCollisionGenerator.cpp:1252
		int32_t liNumSoups;

		{
			// CgsCollisionGenerator.cpp:1258
			const PolygonSoupLeafNode * lpSpacialNode;

			CgsGeometric::PolygonSoupListSpatialMap::GetPolygonSoupNodeForResult(/* parameters */);
			CgsGeometric::TestLineStartEndAxisAlignedBox(/* parameters */);
			{
				// CgsCollisionGenerator.cpp:1264
				const PolygonSoup * lpPolySoup;

			}
			rw::math::vpu::MaskScalar::GetBool(/* parameters */);
			rw::math::vpu::MaskScalar::GetBool(/* parameters */);
			CollisionResultList::SetNumResults(/* parameters */);
		}
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// CgsCollisionGenerator.cpp:1232
		const PolygonSoupLeafNode * lpSpatialNode;

		CgsGeometric::PolygonSoupListSpatialMap::GetPolygonSoupNodeForResult(/* parameters */);
		{
			// CgsCollisionGenerator.cpp:1238
			const PolygonSoup * lpPolySoup;

		}
		CgsGeometric(/* parameters */);
		rw::math::vpl::VecAnd(/* parameters */);
		rw::math::vpl::VecAnd(/* parameters */);
		rw::math::vpl::VecAnd(/* parameters */);
		rw::math::vpl::VecSplat_Word<0>(/* parameters */);
		rw::math::vpu::MaskScalar::GetBool(/* parameters */);
		rw::math::vpu::MaskScalar::GetBool(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:1375
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::CreateCollideSphereListWithTriangleListStream(int32_t  liMaxTests) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:1378
		int32_t liOrigAlignment;

		// CgsCollisionGenerator.cpp:1382
		CgsMemory::SimpleDataStreamProducer * lpStreamProducer;

		// CgsCollisionGenerator.cpp:1387
		int32_t liCommandBufferSize;

		// CgsCollisionGenerator.cpp:1387
		int32_t liResultBufferSize;

		// CgsCollisionGenerator.cpp:1394
		void * lpCommandBuffer;

	}
	{
		// CgsCollisionGenerator.cpp:1396
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsCollisionGenerator.cpp:1384
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:1558
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::CreateCollideSweptSphereListWithTriangleListStream(int32_t  liMaxTests) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:1561
		int32_t liOrigAlignment;

		// CgsCollisionGenerator.cpp:1565
		CgsMemory::SimpleDataStreamProducer * lpStreamProducer;

		// CgsCollisionGenerator.cpp:1570
		int32_t liCommandBufferSize;

		// CgsCollisionGenerator.cpp:1570
		int32_t liResultBufferSize;

		// CgsCollisionGenerator.cpp:1577
		void * lpCommandBuffer;

	}
	{
		// CgsCollisionGenerator.cpp:1579
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsCollisionGenerator.cpp:1567
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:1790
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::CreateCollideSphereListWithSphereListStream(int32_t  liMaxTests) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:1793
		int32_t liOrigAlignment;

		// CgsCollisionGenerator.cpp:1797
		CgsMemory::SimpleDataStreamProducer * lpStreamProducer;

		// CgsCollisionGenerator.cpp:1802
		int32_t liCommandBufferSize;

		// CgsCollisionGenerator.cpp:1802
		int32_t liResultBufferSize;

		// CgsCollisionGenerator.cpp:1809
		void * lpCommandBuffer;

	}
	{
		// CgsCollisionGenerator.cpp:1811
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsCollisionGenerator.cpp:1799
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:2028
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::CreateCollidePrimitiveListWithTriangleListStream(int32_t  liMaxTests) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:2031
		int32_t liOrigAlignment;

		// CgsCollisionGenerator.cpp:2035
		CgsMemory::SimpleDataStreamProducer * lpStreamProducer;

		// CgsCollisionGenerator.cpp:2040
		int32_t liCommandBufferSize;

		// CgsCollisionGenerator.cpp:2040
		int32_t liResultBufferSize;

		// CgsCollisionGenerator.cpp:2047
		void * lpCommandBuffer;

	}
	{
		// CgsCollisionGenerator.cpp:2049
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsCollisionGenerator.cpp:2037
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:2076
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::RunCollidePrimitiveListWithTriangleListStream(CgsMemory::SimpleDataStreamProducer *  lpStream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:2088
		int32_t liNumJobs;

		// CgsCollisionGenerator.cpp:2094
		EA::Jobs::Job * lpNULLJob;

		// CgsCollisionGenerator.cpp:2097
		int32_t liJobIndex;

	}
	CgsMemory::SimpleDataStreamProducer::GetNumCommands(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	AllocateJob(/* parameters */);
	{
		// CgsCollisionGenerator.cpp:2101
		uint16_t lu16BatchIndex;

		CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:348
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::CollidePrimitiveListAgainstPolySoupList(const CgsSceneManager::CgsCollision::PrimitivePairList *  lpPrimitiveList, const PolygonSoupListSpatialMap *  lpSpatialData, uint16_t  lu16MaxNumCollisions, uint32_t  luUserTagA, uint16_t  lu16UserTagB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:350
		uint16_t lu16ResultListIndex;

		// CgsCollisionGenerator.cpp:351
		uint16_t lu16BatchIndex;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CollisionBatch::StartJob(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:389
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::FillTriangleCache(const PolygonSoupListSpatialMap *  lpSpatialData, const Sphere *  lpCacheSphere, CgsGeometric::Triangle4 *  lpaTriangles, uint16_t  lu16MaxNumTriangles, uint32_t  luUserTagA, uint16_t  lu16UserTagB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:393
		uint16_t lu16ResultListIndex;

		// CgsCollisionGenerator.cpp:396
		bool _lbFillCacheWithJob;

	}
	{
		// CgsCollisionGenerator.cpp:402
		uint16_t lu16BatchIndex;

		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		CollisionBatch::StartPolySoupJob(/* parameters */);
		CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	}
	{
		// CgsCollisionGenerator.cpp:420
		Sphere lCacheSphere;

		// CgsCollisionGenerator.cpp:421
		AxisAlignedBox lSphereBoundingBox;

		// CgsCollisionGenerator.cpp:429
		int32_t liTotal;

		// CgsCollisionGenerator.cpp:432
		int32_t liSoup;

		// CgsCollisionGenerator.cpp:435
		int32_t liNumSoups;

		rw::math::vpu::operator+(/* parameters */);
		CgsGeometric::Sphere::GetRadius(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		CollisionResultList::SetNumResults(/* parameters */);
	}
	{
		// CgsCollisionGenerator.cpp:441
		const PolygonSoupLeafNode * lpSpacialNode;

		CgsGeometric::PolygonSoupListSpatialMap::GetPolygonSoupNodeForResult(/* parameters */);
		CgsGeometric(/* parameters */);
		rw::math::vpl::VecAnd(/* parameters */);
		rw::math::vpl::VecAnd(/* parameters */);
		rw::math::vpl::VecAnd(/* parameters */);
		rw::math::vpl::VecSplat_Word<0>(/* parameters */);
		rw::math::vpu::MaskScalar::GetBool(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:578
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::RunFillTriangleCacheStream(const PolygonSoupListSpatialMap *  lpSpatialData, CgsMemory::SimpleDataStreamProducer *  lpStream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:590
		int32_t liNumJobs;

		// CgsCollisionGenerator.cpp:595
		EA::Jobs::Job * lpNULLJob;

		// CgsCollisionGenerator.cpp:598
		int32_t liJobIndex;

	}
	CgsMemory::SimpleDataStreamProducer::GetNumCommands(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	AllocateJob(/* parameters */);
	{
		// CgsCollisionGenerator.cpp:602
		uint16_t lu16BatchIndex;

		CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:743
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::RunCollideLineAgainstPolySoupStream(const PolygonSoupListSpatialMap *  lpSpatialData, CgsMemory::SimpleDataStreamProducer *  lpStream, int32_t  liMaxResultsPerLine, bool  lbTestNearest, bool  lbTestDoubleSided) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:755
		int32_t liNumJobs;

		// CgsCollisionGenerator.cpp:761
		EA::Jobs::Job * lpNULLJob;

		// CgsCollisionGenerator.cpp:766
		int32_t liJobIndex;

		// CgsCollisionGenerator.cpp:785
		bool _lbWakeThreads;

	}
	CgsMemory::SimpleDataStreamProducer::GetNumCommands(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	AllocateJob(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		// CgsCollisionGenerator.cpp:770
		uint16_t lu16BatchIndex;

		// CgsCollisionGenerator.cpp:774
		EA::Jobs::Job * lpNewJob;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:1301
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::CollideSphereListWithTriangleList(const SphereList *  lpSphereList, const TriangleList *  lpTriangleList, uint16_t  lu16MaxNumCollisions, float32_t  lfPadding, uint32_t  luUserTagA, uint16_t  lu16UserTagB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:1303
		uint16_t lu16ResultListIndex;

		// CgsCollisionGenerator.cpp:1304
		uint16_t lu16BatchIndex;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CollisionBatch::StartJob(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:2128
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::TestSphereTriangle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:2130
		SphereList lSphereList;

		// CgsCollisionGenerator.cpp:2131
		Sphere[1] laSpheres;

		// CgsCollisionGenerator.cpp:2141
		TriangleList lTriangleList;

		// CgsCollisionGenerator.cpp:2142
		Triangle4[16] laTriangles;

		// CgsCollisionGenerator.cpp:2144
		Triangle4 lTriangles;

		// vector3.h:125
		typedef Vector3Template<float> Vector3;

		// CgsCollisionGenerator.cpp:2145
		Vector3 lTriangleOffset;

		// CgsCollisionGenerator.cpp:2161
		int32_t liIndex;

	}
	rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpl::VecGetZero(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::Vector4::SetZero(/* parameters */);
	rw::math::vpl::VecNor(/* parameters */);
	rw::math::vpu::Vector4::SetZero(/* parameters */);
	rw::math::vpu::Vector4::SetZero(/* parameters */);
	rw::math::vpu::Vector4::SetZero(/* parameters */);
	TriangleList::SetTriangleBuffer(/* parameters */);
	CgsGeometric::Triangle4::GetAOSTriangle(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	{
	}
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	{
	}
	{
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	{
		{
		}
	}
	{
		{
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:1424
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::RunCollideSphereListWithTriangleListStream(CgsMemory::SimpleDataStreamProducer *  lpStream, DebugRenderStreamReader *  lpDebugStream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:1436
		int32_t liNumJobs;

		// CgsCollisionGenerator.cpp:1444
		EA::Jobs::Job * lpNULLJob;

		// CgsCollisionGenerator.cpp:1447
		int32_t liJobIndex;

	}
	CgsMemory::SimpleDataStreamProducer::GetNumCommands(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	AllocateJob(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		// CgsCollisionGenerator.cpp:1451
		uint16_t lu16BatchIndex;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:1483
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::CollideSweptSphereListWithTriangleList(const SweptSphereList *  lpSweptSphereList, const TriangleList *  lpTriangleList, uint16_t  lu16MaxNumCollisions, float32_t  lfPadding, uint32_t  luUserTagA, uint16_t  lu16UserTagB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:1485
		uint16_t lu16ResultListIndex;

		// CgsCollisionGenerator.cpp:1486
		uint16_t lu16BatchIndex;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CollisionBatch::StartJob(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:1607
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::RunCollideSweptSphereListWithTriangleListStream(CgsMemory::SimpleDataStreamProducer *  lpStream, DebugRenderStreamReader *  lpDebugStream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:1619
		int32_t liNumJobs;

		// CgsCollisionGenerator.cpp:1625
		EA::Jobs::Job * lpNULLJob;

		// CgsCollisionGenerator.cpp:1628
		int32_t liJobIndex;

	}
	CgsMemory::SimpleDataStreamProducer::GetNumCommands(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	AllocateJob(/* parameters */);
	{
		// CgsCollisionGenerator.cpp:1632
		uint16_t lu16BatchIndex;

		CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:1662
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::CollidePrimitivePairList(const CgsSceneManager::CgsCollision::PrimitivePairList *  lpPrimitiveList, uint16_t  lu16MaxNumCollisions, uint32_t  luUserTagA, uint16_t  lu16UserTagB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:1664
		uint16_t lu16ResultListIndex;

		// CgsCollisionGenerator.cpp:1665
		uint16_t lu16BatchIndex;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CollisionBatch::StartJob(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:1716
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::CollideSphereListWithSphereList(const SphereList *  lpSphereListA, const SphereList *  lpSphereListB, uint16_t  lu16MaxNumCollisions, float32_t  lfPadding, uint32_t  luUserTagA, uint16_t  lu16UserTagB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:1718
		uint16_t lu16ResultListIndex;

		// CgsCollisionGenerator.cpp:1719
		uint16_t lu16BatchIndex;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CollisionBatch::StartJob(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:1838
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::RunCollideSphereListWithSphereListStream(CgsMemory::SimpleDataStreamProducer *  lpStream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:1850
		int32_t liNumJobs;

		// CgsCollisionGenerator.cpp:1855
		EA::Jobs::Job * lpNULLJob;

		// CgsCollisionGenerator.cpp:1858
		int32_t liJobIndex;

	}
	CgsMemory::SimpleDataStreamProducer::GetNumCommands(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	AllocateJob(/* parameters */);
	{
		// CgsCollisionGenerator.cpp:1862
		uint16_t lu16BatchIndex;

		CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:1894
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::CollideBoxListWithTriangleList(const BoxList *  lpBoxList, const TriangleList *  lpTriangleList, uint16_t  lu16MaxNumCollisions, float32_t  lfPadding, uint32_t  luUserTagA, uint16_t  lu16UserTagB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:1896
		uint16_t lu16ResultListIndex;

		// CgsCollisionGenerator.cpp:1897
		uint16_t lu16BatchIndex;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CollisionBatch::StartJob(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:1935
void CgsSceneManager::CgsCollision::BaseCollisionGenerator::CollidePrimitiveListAgainstTriangleList(const CgsSceneManager::CgsCollision::PrimitivePairList *  lpPrimitiveList, const TriangleList *  lpTriangleList, uint16_t  lu16MaxNumCollisions, uint32_t  luUserTagA, uint16_t  lu16UserTagB, bool  lbAllowOptimisedBoxTests) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCollisionGenerator.cpp:1937
		uint16_t lu16ResultListIndex;

		// CgsCollisionGenerator.cpp:1938
		uint16_t lu16BatchIndex;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CollisionBatch::StartJob(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsCollisionGenerator.cpp:52
// CgsCollisionGenerator.cpp:53
